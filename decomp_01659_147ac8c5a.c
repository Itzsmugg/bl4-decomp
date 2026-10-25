// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ac8c5a FUN_147ac8c5a body=169 status=ok
// SIG undefined FUN_147ac8c5a(void)

void FUN_147ac8c5a(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x668))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac8d04 FUN_147ac8d04 body=169 status=ok
// SIG undefined FUN_147ac8d04(void)

void FUN_147ac8d04(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x660))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac8dae FUN_147ac8dae body=43 status=ok
// SIG undefined FUN_147ac8dae(void)

void FUN_147ac8dae(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x640))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac8dde FUN_147ac8dde body=41 status=ok
// SIG undefined FUN_147ac8dde(void)

void FUN_147ac8dde(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x648))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac8e0c FUN_147ac8e0c body=41 status=ok
// SIG undefined FUN_147ac8e0c(void)

void FUN_147ac8e0c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x658))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac8e3a FUN_147ac8e3a body=41 status=ok
// SIG undefined FUN_147ac8e3a(void)

void FUN_147ac8e3a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x650))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac8e7a FUN_147ac8e7a body=113 status=ok
// SIG undefined FUN_147ac8e7a(void)

void FUN_147ac8e7a(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1447210f0();
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x108), lVar3 != 0)) {
    cVar1 = FUN_147a5faf8(lVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_147cdd124(lVar3 + 0xcc8,&DAT_14c8733f4);
      if (uVar2 < 0x1f) {
        param_1[0x78] = (longlong)(double)*(float *)((longlong)param_1 + 0x3bc);
                    /* WARNING: Could not recover jumptable at 0x000147ac8edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x6c8))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ac8ef6 FUN_147ac8ef6 body=60 status=ok
// SIG undefined FUN_147ac8ef6(void)

void FUN_147ac8ef6(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x3b0)) {
    lVar1 = 0;
    do {
      FUN_147ca96d8(*(undefined8 *)(*(longlong *)(param_1 + 0x3a8) + lVar1 * 8),1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x3b0));
  }
  return;
}



// FUNCTION 147ac8f32 FUN_147ac8f32 body=58 status=ok
// SIG undefined FUN_147ac8f32(void)

void FUN_147ac8f32(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  plVar1 = (longlong *)FUN_14093f908();
  (**(code **)(*plVar1 + 0x680))(plVar1);
  plVar1 = (longlong *)FUN_14093f908(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147ac8f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x688))(plVar1);
  return;
}



// FUNCTION 147ac8f6c FUN_147ac8f6c body=33 status=ok
// SIG undefined FUN_147ac8f6c(void)

undefined8 FUN_147ac8f6c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    uVar2 = FUN_1405f0e38(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147ac8f8e FUN_147ac8f8e body=33 status=ok
// SIG undefined FUN_147ac8f8e(void)

undefined8 FUN_147ac8f8e(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x155)) &
            0xffffffffffffff02;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
  return uVar3;
}



// FUNCTION 147ac8fb4 FUN_147ac8fb4 body=22 status=ok
// SIG undefined FUN_147ac8fb4(void)

float FUN_147ac8fb4(longlong *param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(*param_1 + 0x640))();
  return (float)dVar1;
}



// FUNCTION 147ac8fca FUN_147ac8fca body=7 status=ok
// SIG undefined FUN_147ac8fca(void)

void FUN_147ac8fca(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 147ac900a FUN_147ac900a body=158 status=ok
// SIG undefined FUN_147ac900a(void)

void FUN_147ac900a(undefined8 param_1,longlong param_2)

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
  FUN_1416524e8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac90ae FUN_147ac90ae body=162 status=ok
// SIG undefined FUN_147ac90ae(void)

void FUN_147ac90ae(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2a0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac9170 FUN_147ac9170 body=242 status=ok
// SIG undefined FUN_147ac9170(void)

void FUN_147ac9170(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
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
  FUN_1434f8f48(param_1,iVar1 != 0,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac92d8 FUN_147ac92d8 body=43 status=ok
// SIG undefined FUN_147ac92d8(void)

void FUN_147ac92d8(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x310))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac9332 FUN_147ac9332 body=88 status=ok
// SIG undefined FUN_147ac9332(void)

void FUN_147ac9332(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141292270(param_1,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac93a4 FUN_147ac93a4 body=37 status=ok
// SIG undefined FUN_147ac93a4(void)

void FUN_147ac93a4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1469133ca();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac9414 FUN_147ac9414 body=22 status=ok
// SIG undefined FUN_147ac9414(void)

char FUN_147ac9414(longlong param_1)

{
  char cVar1;
  
  cVar1 = (*(int *)(param_1 + 0xa0) != 1) + '\x01';
  if (*(int *)(param_1 + 0xa0) == 0) {
    cVar1 = '\0';
  }
  return cVar1;
}



// FUNCTION 147ac942a FUN_147ac942a body=45 status=ok
// SIG undefined FUN_147ac942a(void)

void FUN_147ac942a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_141283ace(DAT_14cb0d2b0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac94d6 FUN_147ac94d6 body=41 status=ok
// SIG undefined FUN_147ac94d6(void)

void FUN_147ac94d6(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac9534 FUN_147ac9534 body=43 status=ok
// SIG undefined FUN_147ac9534(void)

void FUN_147ac9534(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x318))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac9578 FUN_147ac9578 body=524 status=ok
// SIG undefined FUN_147ac9578(void)

void FUN_147ac9578(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0.0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  pfVar2 = *(float **)(param_2 + 0x38);
  local_40 = 0.0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  pfVar5 = *(float **)(param_2 + 0x38);
  local_44 = 0.0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  pfVar4 = *(float **)(param_2 + 0x38);
  local_48 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pfVar3 = &local_44;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfVar4;
  }
  pfVar4 = &local_40;
  if (pfVar5 != (float *)0x0) {
    pfVar4 = pfVar5;
  }
  pfVar5 = &local_3c;
  if (pfVar2 != (float *)0x0) {
    pfVar5 = pfVar2;
  }
  puVar6 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pfVar4 = *(float *)(param_1 + 0x30);
  *pfVar3 = 0.0;
  *puVar6 = 0x42c80000;
  *pfVar5 = (*pfVar4 - *pfVar3) / (100.0 - *pfVar3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac97f6 FUN_147ac97f6 body=37 status=ok
// SIG undefined FUN_147ac97f6(void)

void FUN_147ac97f6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ac981c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac981c FUN_147ac981c body=155 status=ok
// SIG undefined FUN_147ac981c(void)

undefined8 FUN_147ac981c(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadb880) {
    FUN_144b3d300(&DAT_14cadb880);
    if (DAT_14cadb880 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadb878 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"rhi.syncinterval",1);
      _Init_thread_footer(&DAT_14cadb880);
    }
  }
  if (DAT_14cadb878 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ac9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14cadb878 + 0xb0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147ac9904 FUN_147ac9904 body=41 status=ok
// SIG undefined FUN_147ac9904(void)

void FUN_147ac9904(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac997c FUN_147ac997c body=41 status=ok
// SIG undefined FUN_147ac997c(void)

void FUN_147ac997c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac99aa FUN_147ac99aa body=117 status=ok
// SIG undefined FUN_147ac99aa(void)

void FUN_147ac99aa(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((DAT_14cb0d2b0 == 0) || (lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x100) == 0)) {
    bVar4 = false;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xf8) + 0x140))();
    iVar3 = (*(int *)(param_1 + 0xa0) != 1) + 1;
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar3 = 0;
    }
    bVar4 = iVar2 != iVar3;
  }
  *param_3 = bVar4;
  return;
}



// FUNCTION 147ac9aa0 FUN_147ac9aa0 body=37 status=ok
// SIG undefined FUN_147ac9aa0(void)

void FUN_147ac9aa0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ac9ac6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ac9ac6 FUN_147ac9ac6 body=260 status=ok
// SIG undefined FUN_147ac9ac6(void)

bool FUN_147ac9ac6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0)) ||
     (*(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x100) == 0)) {
    bVar6 = false;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cadb828) {
      FUN_144b3d300(&DAT_14cadb828);
      if (DAT_14cadb828 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
        if (plVar5 == (longlong *)0x0) {
          DAT_14cadb820 = 0;
        }
        else {
          DAT_14cadb820 = (**(code **)(*plVar5 + 0x68))(plVar5);
        }
        _Init_thread_footer(&DAT_14cadb828);
      }
    }
    lVar2 = DAT_14cadb820;
    cVar1 = *(char *)(param_1 + 0x28);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    bVar6 = (bool)cVar1 != (*(int *)(lVar2 + uVar4 * 4) != 0);
  }
  return bVar6;
}



// FUNCTION 147ac9bea FUN_147ac9bea body=162 status=ok
// SIG undefined FUN_147ac9bea(void)

void FUN_147ac9bea(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac9cd4 FUN_147ac9cd4 body=331 status=ok
// SIG undefined FUN_147ac9cd4(void)

void FUN_147ac9cd4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 800))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac9e3a FUN_147ac9e3a body=158 status=ok
// SIG undefined FUN_147ac9e3a(void)

void FUN_147ac9e3a(longlong param_1,longlong param_2)

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
  FUN_147cee0f8(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac9eda FUN_147ac9eda body=165 status=ok
// SIG undefined FUN_147ac9eda(void)

void FUN_147ac9eda(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  if (*(int *)(param_1 + 0xb0) != local_1c) {
    *(int *)(param_1 + 0xb0) = local_1c;
    FUN_147d33244();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac9f9e FUN_147ac9f9e body=151 status=ok
// SIG undefined FUN_147ac9f9e(void)

void FUN_147ac9f9e(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x29) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca036 FUN_147aca036 body=158 status=ok
// SIG undefined FUN_147aca036(void)

void FUN_147aca036(longlong param_1,longlong param_2)

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
  FUN_147cee264(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca0d6 FUN_147aca0d6 body=156 status=ok
// SIG undefined FUN_147aca0d6(void)

void FUN_147aca0d6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0xb8) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca174 FUN_147aca174 body=184 status=ok
// SIG undefined FUN_147aca174(void)

void FUN_147aca174(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(uint *)(param_1 + 0xa0) != (uint)local_19) {
    iVar1 = 0;
    if (local_19 != 0) {
      iVar1 = (local_19 != 1) + 1;
    }
    *(int *)(param_1 + 0xa0) = iVar1;
    FUN_145880944(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca22e FUN_147aca22e body=158 status=ok
// SIG undefined FUN_147aca22e(void)

void FUN_147aca22e(longlong param_1,longlong param_2)

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
  FUN_147cee160(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca2d2 FUN_147aca2d2 body=158 status=ok
// SIG undefined FUN_147aca2d2(void)

void FUN_147aca2d2(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca372 FUN_147aca372 body=158 status=ok
// SIG undefined FUN_147aca372(void)

void FUN_147aca372(longlong param_1,longlong param_2)

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
  FUN_147cee1c8(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca412 FUN_147aca412 body=158 status=ok
// SIG undefined FUN_147aca412(void)

void FUN_147aca412(longlong param_1,longlong param_2)

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
  FUN_147cee194(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca4b2 FUN_147aca4b2 body=171 status=ok
// SIG undefined FUN_147aca4b2(void)

void FUN_147aca4b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147aca5fc(param_1,local_1c * 100.0 + 0.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca55e FUN_147aca55e body=156 status=ok
// SIG undefined FUN_147aca55e(void)

void FUN_147aca55e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147aca5fc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca5fc FUN_147aca5fc body=199 status=ok
// SIG undefined FUN_147aca5fc(void)

void FUN_147aca5fc(longlong param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (100.0 <= param_2) {
    param_2 = 100.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x30) = param_2;
  if (*(int *)(param_1 + 0xa0) == 1) {
    uVar3 = FUN_141292270(0,&local_20);
    if (*(int *)(param_1 + 0xa0) == 1) {
      FUN_141292270(uVar3,&local_20);
      piVar2 = &local_1c;
      goto LAB_147aca667;
    }
  }
  else {
    local_20 = *(int *)(param_1 + 0x88);
  }
  piVar2 = (int *)(param_1 + 0x8c);
LAB_147aca667:
  iVar1 = *piVar2;
  *(int *)(param_1 + 0xc4) = (int)(((float)local_20 * *(float *)(param_1 + 0x30)) / 100.0);
  *(int *)(param_1 + 0xcc) = (int)(((float)iVar1 * *(float *)(param_1 + 0x30)) / 100.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca6c4 FUN_147aca6c4 body=184 status=ok
// SIG undefined FUN_147aca6c4(void)

void FUN_147aca6c4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(int *)(param_1 + 0x88) != local_20._0_4_) || (*(int *)(param_1 + 0x8c) != local_20._4_4_))
  {
    *(int *)(param_1 + 0x88) = local_20._0_4_;
    *(int *)(param_1 + 0x8c) = local_20._4_4_;
    FUN_145880944(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca77e FUN_147aca77e body=158 status=ok
// SIG undefined FUN_147aca77e(void)

void FUN_147aca77e(longlong param_1,longlong param_2)

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
  FUN_147cee298(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca81e FUN_147aca81e body=158 status=ok
// SIG undefined FUN_147aca81e(void)

void FUN_147aca81e(longlong param_1,longlong param_2)

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
  FUN_147cee12c(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca8be FUN_147aca8be body=158 status=ok
// SIG undefined FUN_147aca8be(void)

void FUN_147aca8be(longlong param_1,longlong param_2)

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
  FUN_147cee1fc(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aca978 FUN_147aca978 body=158 status=ok
// SIG undefined FUN_147aca978(void)

void FUN_147aca978(longlong param_1,longlong param_2)

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
  FUN_147cee0c4(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acaa18 FUN_147acaa18 body=158 status=ok
// SIG undefined FUN_147acaa18(void)

void FUN_147acaa18(longlong param_1,longlong param_2)

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
  FUN_147cee230(param_1 + 0x30,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acaabc FUN_147acaabc body=151 status=ok
// SIG undefined FUN_147acaabc(void)

void FUN_147acaabc(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x28) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acab58 FUN_147acab58 body=41 status=ok
// SIG undefined FUN_147acab58(void)

void FUN_147acab58(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x330))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147acabc8 FUN_147acabc8 body=192 status=ok
// SIG undefined FUN_147acabc8(void)

ulonglong FUN_147acabc8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong unaff_RDI;
  undefined7 uVar5;
  
  if (((DAT_14cb0d2b0 != 0) && (lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x100) != 0)) {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if ((*(int *)(param_1 + 0x88) != DAT_14cb0d27c) || (*(int *)(param_1 + 0x8c) != DAT_14cb0d280))
    goto LAB_147acac3b;
    iVar3 = (**(code **)(**(longlong **)(lVar1 + 0xf8) + 0x140))();
    iVar4 = (*(int *)(param_1 + 0xa0) != 1) + 1;
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar4 = 0;
    }
    if (iVar3 != iVar4) goto LAB_147acac3b;
  }
  cVar2 = FUN_147ac9ac6(param_1);
  uVar5 = (undefined7)(unaff_RDI >> 8);
  unaff_RDI = CONCAT71(uVar5,1);
  if (cVar2 == '\0') {
    if (((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0)) ||
       (*(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x100) == 0)) {
      unaff_RDI = 0;
    }
    else {
      unaff_RDI = CONCAT71(uVar5,*(char *)(param_1 + 0x29) != *(char *)(DAT_14cb0d2b0 + 0xf49));
    }
  }
LAB_147acac3b:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 147acaca4 FUN_147acaca4 body=181 status=ok
// SIG undefined FUN_147acaca4(void)

void FUN_147acaca4(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xa0) == 1) {
    uVar6 = FUN_141292270(param_1,&local_20);
    if (*(int *)(param_1 + 0xa0) == 1) {
      FUN_141292270(uVar6,&local_20);
      piVar4 = &local_1c;
      goto LAB_147acacfb;
    }
  }
  else {
    local_20 = *(int *)(param_1 + 0x88);
  }
  piVar4 = (int *)(param_1 + 0x8c);
LAB_147acacfb:
  iVar1 = *piVar4;
  iVar5 = *(int *)(param_1 + 0xc4);
  iVar3 = local_20;
  if (iVar5 < local_20) {
    iVar3 = iVar5;
  }
  iVar2 = *(int *)(param_1 + 0xcc);
  if (local_20 < 1) {
    iVar3 = iVar5;
  }
  iVar5 = iVar1;
  if (iVar2 < iVar1) {
    iVar5 = iVar2;
  }
  if (iVar1 < 1) {
    iVar5 = iVar2;
  }
  fVar7 = (float)FUN_147acad5a(param_1,(float)iVar3,(float)iVar5);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar7);
}



// FUNCTION 147acad5a FUN_147acad5a body=272 status=ok
// SIG undefined FUN_147acad5a(void)

ulonglong FUN_147acad5a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar5 = (float)param_3;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xa0) == 1) {
    piVar1 = &local_48;
    FUN_141292270(param_1,piVar1);
  }
  else {
    local_44 = *(int *)(param_1 + 0x8c);
    piVar1 = (int *)(param_1 + 0x88);
  }
  fVar6 = (float)local_44;
  fVar2 = (float)*piVar1 / fVar6;
  fVar4 = (float)param_2 / fVar5;
  if (1e-08 < ABS(fVar2 - fVar4)) {
    if (fVar4 <= fVar2) {
      fVar2 = (fVar5 * fVar5 * fVar4) / fVar2;
      if (fVar2 < 0.0) {
        fVar5 = sqrtf(fVar2);
        uVar3 = extraout_XMM0_Db;
      }
      else {
        fVar5 = SQRT(fVar2);
      }
    }
    else {
      fVar5 = (fVar4 * fVar5) / fVar2;
      uVar3 = (int)((ulonglong)param_2 >> 0x20);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)(~-(uint)(fVar5 < fVar6) & 0x42c80000) |
           CONCAT44(uVar3,(uint)((fVar5 / fVar6) * 100.0) & -(uint)(fVar5 < fVar6));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acae6c FUN_147acae6c body=37 status=ok
// SIG undefined FUN_147acae6c(void)

float FUN_147acae6c(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_147acad5a(param_1,*(undefined4 *)(param_1 + 0xd8),
                               *(undefined4 *)(param_1 + 0xdc));
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 147acaeaa FUN_147acaeaa body=663 status=ok
// SIG undefined FUN_147acaeaa(void)

void FUN_147acaeaa(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  longlong local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((DAT_14cb0d2b0 != 0) && (lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar3 != 0)) &&
     (plVar6 = *(longlong **)(lVar3 + 0x118), plVar6 != (longlong *)0x0)) {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_147acaf24;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar9 = iVar5 == iVar7;
      if (bVar9) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar7 = iVar5;
      }
      iVar5 = iVar7;
      UNLOCK();
    } while (!bVar9);
    lVar3 = *(longlong *)(lVar3 + 0x110);
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)();
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
      plVar6 = *(longlong **)(lVar3 + 0x118);
      bVar9 = true;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        lVar8 = 0;
      }
      else {
        iVar5 = (int)plVar6[1];
        lVar8 = 0;
        do {
          if (iVar5 == 0) {
            plVar6 = (longlong *)0x0;
            goto LAB_147acaf6a;
          }
          LOCK();
          iVar7 = (int)plVar6[1];
          bVar10 = iVar5 == iVar7;
          if (bVar10) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar7 = iVar5;
          }
          iVar5 = iVar7;
          UNLOCK();
        } while (!bVar10);
        lVar8 = *(longlong *)(lVar3 + 0x110);
        bVar9 = false;
      }
LAB_147acaf6a:
      uVar4 = (**(code **)(**(longlong **)(lVar8 + 0x510) + 0x68))();
      iVar5 = FUN_14611817c(uVar4);
      if ((int)param_1[0x14] != iVar5) {
        iVar7 = (iVar5 != 1) + 1;
        if (iVar5 == 0) {
          iVar7 = 0;
        }
        *(int *)(param_1 + 0x14) = iVar7;
        FUN_145880944(param_1);
      }
      if (!bVar9) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      iVar5 = DAT_14cb0d280;
      if (((int)param_1[0x11] != DAT_14cb0d27c) ||
         (*(int *)((longlong)param_1 + 0x8c) != DAT_14cb0d280)) {
        *(int *)(param_1 + 0x11) = DAT_14cb0d27c;
        *(int *)((longlong)param_1 + 0x8c) = iVar5;
        FUN_145880944(param_1);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cadb890) && (FUN_144b3d300(&DAT_14cadb890), DAT_14cadb890 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14cadb888 = (int *)0x0;
        }
        else {
          DAT_14cadb888 = (int *)(**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14cadb890);
      }
      *(bool *)(param_1 + 5) = *DAT_14cadb888 != 0;
      *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)(DAT_14cb0d2b0 + 0xf49);
      (**(code **)(*param_1 + 0x2b8))(param_1);
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((longlong)param_1 + 0xc4);
      *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0xcc);
      FUN_145be17f3(local_78);
      FUN_145be11bc(param_1 + 6,local_78);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((longlong)param_1 + 0xb4);
      FUN_145880944(param_1);
    }
  }
LAB_147acaf24:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acb168 FUN_147acb168 body=325 status=ok
// SIG undefined FUN_147acb168(void)

void FUN_147acb168(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [56];
  longlong local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1436a052d(local_98);
  FUN_145be11bc(param_1 + 0x30,local_98);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  pvVar2 = *(void **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0xf0) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  else {
    FUN_1447c510a((undefined8 *)(param_1 + 0xe8),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0xe8),pvVar2,(longlong)iVar1 << 2);
    }
  }
  iVar1 = *(int *)(param_1 + 0x80);
  pvVar2 = *(void **)(param_1 + 0x78);
  *(int *)(param_1 + 0x100) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x104) == 0) {
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  else {
    FUN_1447c510a((undefined8 *)(param_1 + 0xf8),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0xf8),pvVar2,(longlong)iVar1 << 2);
    }
  }
  *(undefined4 *)(param_1 + 0x108) = param_4;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acb2ae FUN_147acb2ae body=49 status=ok
// SIG undefined FUN_147acb2ae(void)

void FUN_147acb2ae(longlong *param_1)

{
  FUN_145be1251(param_1 + 6,0);
  FUN_1458d3247(&DAT_14c872b08);
                    /* WARNING: Could not recover jumptable at 0x000147acb2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1);
  return;
}



// FUNCTION 147acb2e8 FUN_147acb2e8 body=158 status=ok
// SIG undefined FUN_147acb2e8(void)

void FUN_147acb2e8(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acb3c0 FUN_147acb3c0 body=152 status=ok
// SIG undefined FUN_147acb3c0(void)

void FUN_147acb3c0(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_48);
  bVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x170))(param_1 + 0x28,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((DAT_14cb0cab0 == param_1 + 0x28) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == param_1)) {
    *param_3 = bVar1;
  }
  else {
    *param_4 = *param_4 | bVar1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acb4e0 FUN_147acb4e0 body=83 status=ok
// SIG undefined FUN_147acb4e0(void)

void FUN_147acb4e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_147acb534();
  FUN_1457945b4(param_1);
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_14482b126(lVar2,0x40000000);
  return;
}



// FUNCTION 147acb534 FUN_147acb534 body=342 status=ok
// SIG undefined FUN_147acb534(void)

void FUN_147acb534(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = *(longlong **)(DAT_14c968088 + 8);
  plVar5 = *(longlong **)(DAT_14c968088 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x1d0);
    lVar3 = param_1 + 0x1e0;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar3;
    if (*(int *)(param_1 + 0x1f8) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar8 = *(int *)(param_1 + 0x1f8);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar6 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar7 = local_68._4_4_;
    local_80 = plVar2;
    if ((local_68._4_4_ != iVar8) || (local_68 = uVar6, uStack_50 != lVar3)) {
      do {
        local_68 = uVar6;
        (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined4 *)(*local_80 + (longlong)iVar7 * 0x18),0);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar7 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_80 != plVar2 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar3 || local_68._4_4_ != iVar8));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acb68c FUN_147acb68c body=302 status=ok
// SIG undefined FUN_147acb68c(void)

undefined8 FUN_147acb68c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined1 local_67;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = &DAT_149dfb77a;
  iVar4 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar4 = 0;
  }
  else {
    puVar3 = (undefined2 *)*param_3;
  }
  if (999 < iVar4) {
    iVar4 = 1000;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  FUN_14006620a(&local_48,puVar3,iVar4);
  lVar1 = param_1[8];
  FUN_140056680(&local_60,&DAT_149dfb77a);
  FUN_144a81de8(&local_70);
  local_67 = 0;
  local_70 = &PTR_FUN_14a8bce60;
  puVar3 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  local_50 = lVar1;
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  (**(code **)(param_1[7] + 8))(param_1 + 7,uVar2,puVar3,&local_70);
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  FUN_140056680(param_2,puVar3);
  FUN_144a8720c(&local_70);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147acb7bc FUN_147acb7bc body=1016 status=ok
// SIG undefined FUN_147acb7bc(void)

void FUN_147acb7bc(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [40];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong local_108 [3];
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  undefined1 local_d0 [8];
  undefined1 local_c8 [48];
  undefined1 local_98 [8];
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*param_3 == 0) {
    FUN_1446ddc76(&local_60,&DAT_14a492018,1);
    FUN_14276766e(local_c8,&local_60);
    local_50 = L"SetSoftwareCursorFromClassPath:InvalidClass";
    local_48 = 0x2b;
    FUN_1446e940c(&local_70,&local_50);
    local_50 = L"GameViewport";
    local_48 = 0xc;
    FUN_1446e940c(&local_80,&local_50);
    FUN_140208bae(&local_50,&local_80,&local_70,
                  L"UGameViewportClient::SetSoftwareCursorFromClassPath: Invalid class specified.");
    FUN_1427679d4(local_c8,local_140,&local_50);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
        }
      }
    }
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    lVar3 = FUN_147acc4f8(param_3);
    if (lVar3 != 0) {
      local_88 = lVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      uVar4 = FUN_1434fa804(*(undefined8 *)(param_1 + 0x80),&local_88,0);
      FUN_147acc3a0(param_1,param_2,uVar4);
      goto LAB_147acb8e1;
    }
    FUN_1446ddc76(local_d0,&DAT_14a492018,1);
    FUN_14276766e(local_c8,local_d0);
    local_50 = (wchar_t *)param_3[1];
    if (local_50 == (wchar_t *)0x0) {
      local_108[0] = 0;
      local_108[1] = 0;
    }
    else {
      FUN_1400021e4(&local_50,local_108);
    }
    FUN_140233b1a(local_f0,local_108);
    local_50 = L"SetSoftwareCursorFromClassPath:LoadFailed";
    local_48 = 0x29;
    FUN_1446e940c(local_12c,&local_50);
    local_50 = L"GameViewport";
    local_48 = 0xc;
    FUN_1446e940c(local_130,&local_50);
    FUN_140208bae(local_128,local_130,local_12c,
                  L"UGameViewportClient::SetSoftwareCursorFromClassPath: Could not load cursor class \'{0}\'."
                 );
    FUN_14023409e(&local_118,local_128,1);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(local_40,local_f0);
    local_68 = &local_30;
    local_70 = &local_50;
    FUN_14010d304(&local_60);
    local_80 = local_118;
    local_78 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_e0,&local_80,&local_60);
    FUN_14007f2db(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    FUN_1427679d4(local_c8,local_98,local_e0);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1427678c0(local_c8);
LAB_147acb8e1:
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acbbb6 FUN_147acbbb6 body=810 status=ok
// SIG undefined FUN_147acbbb6(void)

undefined8 FUN_147acbbb6(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [44];
  uint local_3c;
  int local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xf8) == 0) goto LAB_147acbca3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadb9e0) {
    FUN_144b3d300(&DAT_14cadb9e0);
    if (DAT_14cadb9e0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FullScreenMode",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14cadb9d8 = (int *)0x0;
      }
      else {
        DAT_14cadb9d8 = (int *)(**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14cadb9e0);
    }
  }
  iVar8 = *DAT_14cadb9d8;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x130))();
  local_34 = 2;
  if (cVar4 == '\0') {
    local_34 = (uint)(iVar8 != 0);
  }
  uVar9 = local_34;
  if (local_34 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cadb9e8) {
      FUN_144b3d300(&DAT_14cadb9e8);
      if (DAT_14cadb9e8 == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar4 = FUN_14054d46e(&DAT_14c846b20,L"d3d12");
        cVar5 = '\x01';
        if (cVar4 == '\0') {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          cVar5 = FUN_14054d46e(&DAT_14c846b20,&DAT_14a3816b6);
        }
        DAT_14cadb9e4 = cVar5;
        _Init_thread_footer(&DAT_14cadb9e8);
      }
    }
    uVar9 = 0;
    if (DAT_14cadb9e4 == '\x01') {
      local_34 = 1;
      uVar9 = 1;
    }
  }
  lVar3 = DAT_14cb0d2b0;
  uVar2 = DAT_14cb0d280;
  iVar8 = DAT_14cb0d27c;
  local_38 = DAT_14cb0d27c;
  local_3c = DAT_14cb0d280;
  if (DAT_14cb0d2b0 == 0) {
LAB_147acbc81:
    FUN_1461614d6(iVar8,uVar2,uVar9);
  }
  else {
    lVar6 = FUN_1413f862e();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_147acbc81;
    plVar7 = (longlong *)FUN_141283ace(lVar3);
    if (plVar7 == (longlong *)0x0) goto LAB_147acbc81;
    local_38 = (int)plVar7[0x11];
    local_3c = *(uint *)((longlong)plVar7 + 0x8c);
    FUN_14616183e(&local_38,&local_3c,&local_34,1);
    if (((int)plVar7[0x11] != local_38) || (*(uint *)((longlong)plVar7 + 0x8c) != local_3c)) {
      *(int *)(plVar7 + 0x11) = local_38;
      *(uint *)((longlong)plVar7 + 0x8c) = local_3c;
      FUN_145880944(plVar7);
    }
    if (*(uint *)(plVar7 + 0x14) != local_34) {
      iVar8 = (local_34 != 1) + 1;
      if (local_34 == 0) {
        iVar8 = 0;
      }
      *(int *)(plVar7 + 0x14) = iVar8;
      FUN_145880944(plVar7);
    }
    (**(code **)(*plVar7 + 0x2b8))(plVar7);
    (**(code **)(*plVar7 + 0x2a0))(plVar7,0);
    uVar9 = local_34;
  }
  FUN_140898514(param_1 + 0x330,uVar9 != 2);
LAB_147acbca3:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acbee2 FUN_147acbee2 body=302 status=ok
// SIG undefined FUN_147acbee2(void)

undefined4
FUN_147acbee2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_144a81a0a();
  local_64 = 0xffffffff;
  local_68 = 0xffffffff;
  (**(code **)(*plVar4 + 0xa0))(plVar4,param_3);
  local_80 = *param_4;
  local_78 = param_4[1];
  local_70 = param_4[2];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_90 = param_8;
  local_98 = param_7;
  local_a0 = param_6;
  local_a8 = param_5;
  uVar3 = (**(code **)(*param_1 + 0x50))(param_1,param_2,local_68,&local_80);
  plVar4 = (longlong *)param_4[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acc012 FUN_147acc012 body=240 status=ok
// SIG undefined FUN_147acc012(void)

undefined8
FUN_147acc012(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  cVar2 = (**(code **)(*param_1 + 0x180))();
  if (cVar2 == '\0') {
    plVar1 = (longlong *)param_1[3];
    if (plVar1 != (longlong *)0x0) {
      uVar4 = param_6;
      uVar7 = param_8;
      cVar2 = (**(code **)(*plVar1 + 0x398))
                        (plVar1,param_3,param_4,param_5,param_6,CONCAT44(uVar6,param_7),param_8,
                         param_9);
      uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    lVar3 = FUN_147d7ff08(DAT_14cb0d2b0,param_1 + -5,param_3);
    if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x30), plVar1 != (longlong *)0x0)) {
      uVar4 = (**(code **)(*plVar1 + 0xd18))
                        (plVar1,param_4,param_5,param_6,CONCAT44(uVar5,param_7),param_8,
                         CONCAT44(uVar8,param_9));
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 147acc102 FUN_147acc102 body=165 status=ok
// SIG undefined FUN_147acc102(void)

undefined8
FUN_147acc102(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x180))();
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_140389788();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    if (((*(char *)(lVar3 + 0x48) < '\0') &&
        (lVar3 = FUN_147d7ff08(DAT_14cb0d2b0,param_1 + -5,param_3), lVar3 != 0)) &&
       (plVar2 = *(longlong **)(lVar3 + 0x30), plVar2 != (longlong *)0x0)) {
      uVar4 = (**(code **)(*plVar2 + 0xd28))(plVar2,param_4,param_5,param_6,param_7);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 147acc1a8 FUN_147acc1a8 body=171 status=ok
// SIG undefined FUN_147acc1a8(void)

void FUN_147acc1a8(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_140389788();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  if ((*(byte *)(lVar3 + 0x48) & 4) != 0) {
    FUN_145d75160(DAT_14c98e618,param_2 & 0xffffffff ^ 1,0);
  }
  if ((*(uint *)(param_1 + -0x20) & 0x10) == 0) {
    uVar4 = *(undefined8 *)(param_1 + -8);
  }
  else {
    uVar4 = 0;
  }
  plVar2 = (longlong *)FUN_14062842a(uVar4,param_1 + -0x28);
  lVar3 = plVar2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *plVar2;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + lVar5) + 0x30);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + (param_2 & 0xff) * 8 + 0xdd0))();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147acc254 FUN_147acc254 body=158 status=ok
// SIG undefined FUN_147acc254(void)

undefined4 FUN_147acc254(longlong param_1,double *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  uint local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (DAT_14c968088 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_14c968088 + 0x90))();
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x110))
                (*(longlong **)(param_1 + 0xf8),&local_20,1);
      uVar2 = uStack_1c | local_20;
      uVar3 = CONCAT31((int3)(uVar2 >> 8),-1 < (int)uVar2);
      if (-1 < (int)uVar2) {
        *param_2 = (double)(int)local_20;
        param_2[1] = (double)(int)uStack_1c;
      }
      goto LAB_147acc2d1;
    }
  }
  uVar3 = 0;
LAB_147acc2d1:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acc2f4 FUN_147acc2f4 body=172 status=ok
// SIG undefined FUN_147acc2f4(void)

undefined8 FUN_147acc2f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xa0))(), cVar3 != '\0')) {
    if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x3c8))(), cVar3 != '\0')) {
      return 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x40) != 0)) {
      lVar7 = (longlong)*(int *)(lVar1 + 0x40) * 8;
      lVar5 = 0;
      while ((lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar5), lVar2 == 0 ||
             (*(longlong *)(lVar2 + 0x30) == 0))) {
        lVar5 = lVar5 + 8;
        if (lVar7 == lVar5) {
          return 0;
        }
      }
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar5);
        if ((lVar2 != 0) && (plVar6 = *(longlong **)(lVar2 + 0x30), plVar6 != (longlong *)0x0))
        goto LAB_147acc36f;
        lVar5 = lVar5 + 8;
      } while (lVar7 != lVar5);
      plVar6 = (longlong *)0x0;
LAB_147acc36f:
                    /* WARNING: Could not recover jumptable at 0x000147acc377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar6 + 0xe48))();
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 147acc3a0 FUN_147acc3a0 body=191 status=ok
// SIG undefined FUN_147acc3a0(void)

void FUN_147acc3a0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    FUN_143333872(param_3,&local_40);
    local_30 = local_40;
    local_28 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_147acc46a(param_1,param_2,&local_30);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_147ad2e82(param_1 + 0x220,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acc46a FUN_147acc46a body=140 status=ok
// SIG undefined FUN_147acc46a(void)

void FUN_147acc46a(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 *local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (*param_3 == 0) {
    FUN_147ad2e82();
  }
  else {
    local_28 = &local_2c;
    local_20 = param_3;
    FUN_147ad2fee(param_1 + 0x220,local_14);
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acc4f8 FUN_147acc4f8 body=150 status=ok
// SIG undefined FUN_147acc4f8(void)

undefined8 FUN_147acc4f8(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1405e2bf2();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147acc590 FUN_147acc590 body=25 status=ok
// SIG undefined FUN_147acc590(void)

undefined8 FUN_147acc590(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147acc59f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x138))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147acc5aa FUN_147acc5aa body=50 status=ok
// SIG undefined FUN_147acc5aa(void)

undefined8 FUN_147acc5aa(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 0xa0))(param_2);
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147acc5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  return uVar2;
}



// FUNCTION 147acc5dc FUN_147acc5dc body=79 status=ok
// SIG undefined FUN_147acc5dc(void)

undefined8 FUN_147acc5dc(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x270) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x268);
      }
                    /* WARNING: Could not recover jumptable at 0x000147acc61b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 147acc630 FUN_147acc630 body=185 status=ok
// SIG undefined FUN_147acc630(void)

void FUN_147acc630(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadb9b8) {
    FUN_144b3d300(&DAT_14cadb9b8);
    if (DAT_14cadb9b8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadb9b0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DebugSafeZone.Mode",1);
      _Init_thread_footer(&DAT_14cadb9b8);
    }
  }
  if (DAT_14cadb9b0 != (longlong *)0x0) {
    iVar1 = (**(code **)(*DAT_14cadb9b0 + 0xb0))();
    FUN_140635eb8(DAT_14cadb9b0,iVar1 != 1,0xd000000,0);
    return;
  }
  return;
}



// FUNCTION 147acc706 FUN_147acc706 body=176 status=ok
// SIG undefined FUN_147acc706(void)

void FUN_147acc706(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar1 = DAT_14cb0d2b0;
  (**(code **)(*param_1 + 0x180))();
  uVar3 = FUN_1458cac74(uVar1);
  plVar4 = (longlong *)FUN_140628716();
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
  }
  if (((*(char *)(lVar5 + 0x58) == '\x01') && ((char)param_1[0x79] == '\0')) && (1 < uVar3)) {
    if (uVar3 == 3) {
      cVar2 = *(byte *)(lVar5 + 0x5a) + 3;
      bVar6 = *(byte *)(lVar5 + 0x5a) < 4;
    }
    else {
      if (uVar3 == 2) {
        cVar2 = '\x01';
        if (*(char *)(lVar5 + 0x59) != '\0') {
          cVar2 = (*(char *)(lVar5 + 0x59) == '\x01') * '\x02';
        }
        goto LAB_147acc765;
      }
      cVar2 = *(byte *)(lVar5 + 0x5b) + 7;
      bVar6 = *(byte *)(lVar5 + 0x5b) < 3;
    }
    if (!bVar6) {
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = '\0';
  }
LAB_147acc765:
  *(char *)(param_1 + 0xe) = cVar2;
  return;
}



// FUNCTION 147acc7b6 FUN_147acc7b6 body=311 status=ok
// SIG undefined FUN_147acc7b6(void)

void FUN_147acc7b6(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  (**(code **)(*param_1 + 0x348))();
  bVar1 = *(byte *)(param_1 + 0xe);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar3 = param_1[4];
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14062842a(lVar3);
  if (0 < (int)plVar2[1]) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if (*(uint *)(param_1 + 0xc) == (uint)bVar1 ||
          (int)*(uint *)(param_1 + 0xc) < (int)(uint)bVar1) {
LAB_147acc894:
        *(undefined8 *)(*(longlong *)(*plVar2 + lVar3) + 0x90) = 0;
        *(undefined8 *)(*(longlong *)(*plVar2 + lVar3) + 0x98) = 0;
        *(undefined8 *)(*(longlong *)(*plVar2 + lVar3) + 0x80) = 0;
        dVar6 = 0.0;
      }
      else {
        if (*(int *)(param_1[0xb] + 8 + (ulonglong)bVar1 * 0x10) <= lVar4) goto LAB_147acc894;
        *(double *)(*(longlong *)(*plVar2 + lVar3) + 0x90) =
             (double)*(float *)(*(longlong *)(param_1[0xb] + (ulonglong)bVar1 * 0x10) + lVar3 * 2);
        lVar5 = (ulonglong)bVar1 * 0x10;
        *(double *)(*(longlong *)(*plVar2 + lVar3) + 0x98) =
             (double)*(float *)(*(longlong *)(param_1[0xb] + lVar5) + 4 + lVar3 * 2);
        *(double *)(*(longlong *)(*plVar2 + lVar3) + 0x80) =
             (double)*(float *)(*(longlong *)(param_1[0xb] + lVar5) + 8 + lVar3 * 2);
        dVar6 = (double)*(float *)(*(longlong *)(param_1[0xb] + lVar5) + 0xc + lVar3 * 2);
      }
      *(double *)(*(longlong *)(*plVar2 + lVar3) + 0x88) = dVar6;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar4 < (int)plVar2[1]);
  }
  return;
}



// FUNCTION 147acc8ee FUN_147acc8ee body=75 status=ok
// SIG undefined FUN_147acc8ee(void)

void FUN_147acc8ee(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0x3ff0000000000000;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  iVar1 = FUN_1417f6c54(uVar2);
  param_3[1] = *(undefined8 *)(&DAT_14a8eb390 + (ulonglong)(iVar1 == 1) * 8);
  return;
}



// FUNCTION 147acc93c FUN_147acc93c body=346 status=ok
// SIG undefined FUN_147acc93c(void)

void FUN_147acc93c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_298 [32];
  float *local_278;
  undefined1 local_270;
  undefined8 local_268;
  int local_260;
  float local_254;
  float local_250;
  undefined4 uStack_24c;
  undefined1 local_240 [72];
  byte local_1f8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar1 = switchD_147aefcf3::default();
  uVar2 = FUN_140e82300();
  local_278 = (float *)&DAT_149e1dd04;
  FUN_140114bb6(local_240,&DAT_14c8463f0,uVar2,uVar1);
  local_1a8 = 0x3ff0000000000000;
  local_1a0 = 0x3ff0000000000000;
  local_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0x3f800000;
  local_1f8 = local_1f8 | 2;
  FUN_140009b9a(&local_250,param_3);
  FUN_140008f88(local_38,&local_250);
  if ((longlong *)CONCAT44(uStack_24c,local_250) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_24c,local_250) + 0x10))();
  }
  local_268 = *param_3;
  local_260 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_260 = 0;
  }
  local_278 = &local_254;
  local_270 = 0;
  FUN_147d8e998(param_2,uVar1,&local_268,&local_250);
  FUN_147d8f278(param_2,local_240,(*(float *)(param_2 + 0x30) - local_250) * 0.5,
                *(float *)(param_2 + 0x34) * 0.66 + local_254 * -0.5);
  FUN_140b2399e(local_240);
  if ((local_28 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acca98 FUN_147acca98 body=209 status=ok
// SIG undefined FUN_147acca98(void)

void FUN_147acca98(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && (plVar2 = *(longlong **)(param_1 + 0x138), plVar2 != (longlong *)0x0)) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_147accb0b;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 0x130);
    if (plVar3 != (longlong *)0x0) {
      local_28 = *param_3;
      local_20 = param_3[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,&local_28);
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_147accb0b:
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147accb6a FUN_147accb6a body=204 status=ok
// SIG undefined FUN_147accb6a(void)

void FUN_147accb6a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x138);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_147accbd8;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 0x130);
    if (plVar3 != (longlong *)0x0) {
      local_28 = *param_3;
      local_20 = param_3[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2,&local_28);
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_147accbd8:
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147accc38 FUN_147accc38 body=198 status=ok
// SIG undefined FUN_147accc38(void)

void FUN_147accc38(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x138);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_147acccbb;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 0x130);
    if (plVar3 != (longlong *)0x0) {
      local_28 = *param_2;
      local_20 = param_2[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_28);
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_147acccbb:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147accd00 FUN_147accd00 body=198 status=ok
// SIG undefined FUN_147accd00(void)

void FUN_147accd00(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x138);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_147accd83;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 0x130);
    if (plVar3 != (longlong *)0x0) {
      local_28 = *param_2;
      local_20 = param_2[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_28);
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_147accd83:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147accdc8 FUN_147accdc8 body=38 status=ok
// SIG undefined FUN_147accdc8(void)

void FUN_147accdc8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    FUN_1478c992c(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 147accdee FUN_147accdee body=840 status=ok
// SIG undefined FUN_147accdee(void)

void FUN_147accdee(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  wchar_t *_Str;
  ushort uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90 [7];
  char local_74;
  longlong local_68;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = 0;
  local_a0 = param_1;
  FUN_14619c2be(&local_b0,&local_a0,0);
  FUN_14619c2be(&local_c0,&local_a0,0);
  _Str = L"";
  if (local_b8 != 0) {
    _Str = local_c0;
  }
  while( true ) {
    uVar4 = *(ushort *)((longlong)_Str + lVar11);
    uVar5 = (ulonglong)uVar4;
    uVar7 = *(ushort *)((longlong)&DAT_149dfb77a + lVar11);
    if (uVar4 != uVar7) break;
    if (uVar4 == 0) goto LAB_147acceaa;
LAB_147acce75:
    lVar11 = lVar11 + 2;
  }
  if ((uVar7 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar8]) goto LAB_147acce75;
  }
  if (uVar4 != uVar7) {
    iVar2 = _wtoi(_Str);
    goto LAB_147acceaf;
  }
LAB_147acceaa:
  iVar2 = -1;
LAB_147acceaf:
  if (local_a8 < 2) {
    puVar3 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_2 + 0x10))(param_2,L"Missing layer name.",*puVar3,puVar3 + 4);
  }
  else {
    FUN_1446f470e(&local_d8,local_b0,1);
    FUN_1405f0e9c(&local_98,param_3);
    iVar10 = 0;
    if (local_74 == '\0') {
      iVar10 = 0;
      do {
        lVar11 = local_68;
        if ((longlong)*(int *)(local_68 + 0x1e0) != 0) {
          lVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(local_68 + 0x1d8) + lVar9) == local_d8) {
              bVar1 = *(byte *)(local_68 + 0x60);
              if (iVar2 != -1) {
                if (iVar2 == 0) {
                  if ((char)bVar1 < '\0') break;
                }
                else if (-1 < (char)bVar1) break;
              }
              iVar10 = iVar10 + 1;
              FUN_1405bab3a(local_68,(byte)~bVar1 >> 7);
              FUN_1405d0f74(lVar11);
              break;
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)*(int *)(local_68 + 0x1e0) * 8 != lVar9);
        }
        FUN_14059e512(&local_98);
      } while (local_74 == '\0');
    }
    if (local_40 == '\x01') {
      FUN_14024445c(local_90);
    }
    FUN_140047918(param_2,L"Toggled visibility of %u actors",iVar10);
    if (iVar10 != 0) goto LAB_147accffc;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1405f0e9c(&local_98,param_3,5);
  if (local_74 == '\0') {
    do {
      lVar11 = local_68;
      if (0 < *(int *)(local_68 + 0x1e0)) {
        lVar12 = 0;
        lVar9 = 0;
        do {
          FUN_140721fbe(&local_d8,*(longlong *)(lVar11 + 0x1d8) + lVar12);
          lVar9 = lVar9 + 1;
          lVar12 = lVar12 + 8;
        } while (lVar9 < *(int *)(lVar11 + 0x1e0));
      }
      FUN_14059e512(&local_98);
    } while (local_74 == '\0');
  }
  if (local_40 == '\x01') {
    FUN_14024445c(local_90);
  }
  puVar3 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_2 + 0x10))(param_2,L"Valid layer names:",*puVar3,puVar3 + 4);
  if (0 < (int)uStack_d0) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      FUN_1400021e4(local_d8 + lVar9,&local_98);
      puVar6 = &DAT_149dfb77a;
      if (local_90[0] != 0) {
        puVar6 = local_98;
      }
      FUN_140047918(param_2,L"   %s",puVar6);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar11 < (int)uStack_d0);
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_147accffc:
  if (local_c0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acd138 FUN_147acd138 body=775 status=ok
// SIG undefined FUN_147acd138(void)

void FUN_147acd138(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  size_t sVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ushort uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  ushort uVar15;
  char cVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_60;
  uint local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_2;
  FUN_14375df50(*(undefined8 *)(param_1 + 0x20),&local_60,param_4);
  uVar3 = (ulonglong)local_58;
  if (-1 < (int)local_58) {
    uVar13 = *(uint *)(local_60 + 1);
    if ((int)uVar13 <= (int)local_58) goto LAB_147acd1b2;
    plVar14 = (longlong *)(uVar3 * 8 + *local_60);
    do {
      uVar4 = uVar3;
      if (*plVar14 != 0) goto LAB_147acd1aa;
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
      plVar14 = plVar14 + 1;
    } while ((int)uVar1 < (int)uVar13);
    uVar4 = (ulonglong)uVar13;
LAB_147acd1aa:
    uVar3 = uVar4;
    if (-1 < (int)uVar4) {
LAB_147acd1b2:
      if ((int)uVar13 <= (int)uVar3) goto LAB_147acd3ea;
      lVar7 = *(longlong *)(*(longlong *)(*local_60 + uVar3 * 8) + 0x30);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x4f8) != 0)) {
        iVar12 = 0;
        FUN_14619c2be(&local_60,&local_50,0);
        if ((int)local_58 < 2) {
          uVar5 = FUN_147d11ac0(*(undefined4 *)(param_1 + 0xb0));
          FUN_140047918(param_3,L"Current view mode: %s",uVar5);
          local_78 = (longlong *)0x0;
          uStack_70 = 0;
          cVar16 = '\0';
          uVar13 = 0;
          do {
            if (uVar13 != 0) {
              if ((char)((char)((uVar13 & 0xff) / 5) * '\x05' + cVar16) == '\0') {
                pwVar10 = L"\n     ";
                uVar5 = 6;
              }
              else {
                pwVar10 = L", ";
                uVar5 = 2;
              }
              FUN_1400020e8(&local_78,pwVar10,uVar5);
            }
            pwVar10 = (wchar_t *)FUN_147d11ac0(uVar13);
            sVar6 = wcslen(pwVar10);
            FUN_1400020e8(&local_78,pwVar10,sVar6 & 0xffffffff);
            uVar13 = uVar13 + 1;
            cVar16 = cVar16 + -1;
          } while (uVar13 != 0x65);
          plVar14 = local_78;
          if ((int)uStack_70 == 0) {
            plVar14 = (longlong *)&DAT_149dfb77a;
          }
          FUN_140047918(param_3,L"Available view modes: %s",plVar14);
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_147acd370;
        }
        goto LAB_147acd2d2;
      }
      uVar1 = (int)uVar3 + 1;
      if (uVar1 < uVar13) {
        uVar1 = uVar13;
      }
      plVar14 = (longlong *)(*local_60 + uVar3 * 8);
      do {
        plVar14 = plVar14 + 1;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar4 = (ulonglong)uVar1;
        if ((int)uVar13 <= (int)uVar2) break;
        uVar4 = uVar3;
      } while (*plVar14 == 0);
      goto LAB_147acd1aa;
    }
  }
  goto LAB_147acd3ea;
LAB_147acd2d2:
  lVar7 = FUN_147d11ac0(iVar12);
  plVar14 = (longlong *)&DAT_149dfb77a;
  if (local_58 != 0) {
    plVar14 = local_60;
  }
  lVar11 = 0;
  do {
    uVar9 = *(ushort *)((longlong)plVar14 + lVar11);
    uVar3 = (ulonglong)uVar9;
    uVar15 = *(ushort *)(lVar7 + lVar11);
    if (uVar9 == uVar15) {
      if (uVar9 == 0) goto LAB_147acd351;
    }
    else {
      if (0x7f < (uVar15 | uVar9)) break;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      uVar4 = (ulonglong)uVar15;
      uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar4]) break;
    }
    lVar11 = lVar11 + 2;
  } while( true );
  if (uVar9 == uVar15) {
LAB_147acd351:
    *(int *)(param_1 + 0xb0) = iVar12;
    plVar14 = (longlong *)FUN_147d11ac0(iVar12);
    pwVar10 = L"Set new viewmode: %s";
    goto LAB_147acd36b;
  }
  iVar12 = iVar12 + 1;
  if (iVar12 == 0x65) goto code_r0x000147acd330;
  goto LAB_147acd2d2;
code_r0x000147acd330:
  pwVar10 = L"Error: view mode not recognized: %s";
LAB_147acd36b:
  FUN_140047918(param_3,pwVar10,plVar14);
LAB_147acd370:
  if (*(int *)(param_1 + 0xb0) == 0xe) {
    puVar8 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_3 + 0x10))
              (param_3,L"This view mode is currently not supported in game.",*puVar8,puVar8 + 4);
    *(undefined4 *)(param_1 + 0xb0) = 3;
  }
  puVar8 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_3 + 0x10))
            (param_3,L"Debug viewmodes not allowed in Test or Shipping builds.",*puVar8,puVar8 + 4);
  *(undefined4 *)(param_1 + 0xb0) = 3;
  FUN_1436aeaa4(3,1,param_1 + 0xb8);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147acd3ea:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acd440 FUN_147acd440 body=285 status=ok
// SIG undefined FUN_147acd440(void)

void FUN_147acd440(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14375df50(*(undefined8 *)(param_1 + 0x20),&local_30);
  uVar6 = (ulonglong)local_28;
  if (-1 < (int)local_28) {
    uVar1 = *(uint *)(local_30 + 1);
    if ((int)uVar1 <= (int)local_28) goto LAB_147acd4a1;
    plVar10 = (longlong *)(uVar6 * 8 + *local_30);
    do {
      uVar7 = uVar6;
      if (*plVar10 != 0) goto LAB_147acd49d;
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
      plVar10 = plVar10 + 1;
    } while ((int)uVar3 < (int)uVar1);
    uVar7 = (ulonglong)uVar1;
LAB_147acd49d:
    uVar6 = uVar7;
    if (-1 < (int)uVar7) {
LAB_147acd4a1:
      if ((int)uVar1 <= (int)uVar6) goto LAB_147acd4ec;
      lVar2 = *(longlong *)(*(longlong *)(*local_30 + uVar6 * 8) + 0x30);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x4f8) != 0)) {
        iVar5 = *(int *)(param_1 + 0xb0) + 1;
        iVar9 = 0;
        if (iVar5 != 0x65) {
          iVar9 = iVar5;
        }
        *(int *)(param_1 + 0xb0) = iVar9;
        uVar8 = FUN_147d11ac0();
        FUN_140047918(param_2,L"New view mode: %s",uVar8);
        if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        FUN_1436aeaa4(*(undefined4 *)(param_1 + 0xb0),1,param_1 + 0xb8);
        return;
      }
      uVar3 = (int)uVar6 + 1;
      if (uVar3 < uVar1) {
        uVar3 = uVar1;
      }
      plVar10 = (longlong *)(*local_30 + uVar6 * 8);
      do {
        plVar10 = plVar10 + 1;
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar7 = (ulonglong)uVar3;
        if ((int)uVar1 <= (int)uVar4) break;
        uVar7 = uVar6;
      } while (*plVar10 == 0);
      goto LAB_147acd49d;
    }
  }
LAB_147acd4ec:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 147acd568 FUN_147acd568 body=288 status=ok
// SIG undefined FUN_147acd568(void)

void FUN_147acd568(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14375df50(*(undefined8 *)(param_1 + 0x20),&local_30);
  uVar5 = (ulonglong)local_28;
  if (-1 < (int)local_28) {
    uVar1 = *(uint *)(local_30 + 1);
    if ((int)uVar1 <= (int)local_28) goto LAB_147acd5c9;
    plVar9 = (longlong *)(uVar5 * 8 + *local_30);
    do {
      uVar6 = uVar5;
      if (*plVar9 != 0) goto LAB_147acd5c5;
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
      plVar9 = plVar9 + 1;
    } while ((int)uVar3 < (int)uVar1);
    uVar6 = (ulonglong)uVar1;
LAB_147acd5c5:
    uVar5 = uVar6;
    if (-1 < (int)uVar6) {
LAB_147acd5c9:
      if ((int)uVar1 <= (int)uVar5) goto LAB_147acd614;
      lVar2 = *(longlong *)(*(longlong *)(*local_30 + uVar5 * 8) + 0x30);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x4f8) != 0)) {
        iVar8 = 100;
        if (0 < *(int *)(param_1 + 0xb0)) {
          iVar8 = *(int *)(param_1 + 0xb0) + -1;
        }
        *(int *)(param_1 + 0xb0) = iVar8;
        uVar7 = FUN_147d11ac0();
        FUN_140047918(param_2,L"New view mode: %s",uVar7);
        if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        FUN_1436aeaa4(*(undefined4 *)(param_1 + 0xb0),1,param_1 + 0xb8);
        return;
      }
      uVar3 = (int)uVar5 + 1;
      if (uVar3 < uVar1) {
        uVar3 = uVar1;
      }
      plVar9 = (longlong *)(*local_30 + uVar5 * 8);
      do {
        plVar9 = plVar9 + 1;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = (ulonglong)uVar3;
        if ((int)uVar1 <= (int)uVar4) break;
        uVar6 = uVar5;
      } while (*plVar9 == 0);
      goto LAB_147acd5c5;
    }
  }
LAB_147acd614:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 147acd692 FUN_147acd692 body=329 status=ok
// SIG undefined FUN_147acd692(void)

void FUN_147acd692(longlong param_1,wchar_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t _Ch;
  
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
  iVar1 = _wtoi(param_2);
  _Ch = L'x';
  pwVar4 = wcschr(param_2,L'x');
  if (pwVar4 == (wchar_t *)0x0) {
    _Ch = L'X';
    pwVar4 = wcschr(param_2,L'X');
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar4 = L"";
      goto LAB_147acd6f3;
    }
  }
  pwVar4 = wcschr(param_2,_Ch);
  pwVar4 = pwVar4 + 1;
LAB_147acd6f3:
  iVar2 = _wtoi(pwVar4);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x140))();
  pwVar5 = wcschr(pwVar4,L'w');
  if ((pwVar5 == (wchar_t *)0x0) && (pwVar5 = wcschr(pwVar4,L'W'), pwVar5 == (wchar_t *)0x0)) {
    pwVar5 = wcschr(pwVar4,L'f');
    if ((pwVar5 != (wchar_t *)0x0) || (pwVar4 = wcschr(pwVar4,L'F'), pwVar4 != (wchar_t *)0x0)) {
      iVar3 = 0;
    }
  }
  else {
    pwVar5 = wcschr(pwVar4,L'f');
    iVar3 = 1;
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar4 = wcschr(pwVar4,L'F');
      iVar3 = (pwVar4 == (wchar_t *)0x0) + 1;
    }
  }
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_1461614d6(iVar1,iVar2,iVar3);
    return;
  }
  return;
}



// FUNCTION 147acd7dc FUN_147acd7dc body=148 status=ok
// SIG undefined FUN_147acd7dc(void)

void FUN_147acd7dc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar2 = FUN_14034d933();
    FUN_140056680(local_40,param_2);
    cVar1 = FUN_147ae992e(uVar2,local_40,param_3);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      FUN_14374a062(*(undefined8 *)(param_1 + 0xf8));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acd872 FUN_147acd872 body=298 status=ok
// SIG undefined FUN_147acd872(void)

void FUN_147acd872(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_2;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    bVar2 = FUN_140988638(&local_40,L"SHOWUI",1);
    uVar1 = local_40;
    local_58[0] = 0;
    local_58[1] = 0;
    bVar3 = FUN_14054d46e(local_40,L"showui");
    local_68 = 0;
    FUN_14063337c(uVar1,L"filename=",local_58,1);
    uVar4 = FUN_14054d46e(local_40,L"nosuffix");
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x48))();
    FUN_147d7771c(local_58,bVar2 | bVar3,uVar4 ^ 1,uVar5);
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x1e0))(*(longlong **)(param_1 + 0xf8),&local_60)
    ;
    DAT_14c867cf4 = local_60;
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x1e0))(*(longlong **)(param_1 + 0xf8),&local_60)
    ;
    DAT_14c867cf8 = local_5c;
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acd99e FUN_147acd99e body=184 status=ok
// SIG undefined FUN_147acd99e(void)

void FUN_147acd99e(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14612b044(&local_28,0x10,1,0);
  uVar2 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      uVar1 = *(undefined8 *)(local_28 + (uVar2 & 0xffffffff) * 8);
      FUN_1435c33e2(uVar1);
      FUN_147c00dae(uVar1);
      uVar2 = (longlong)(int)local_18;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        local_18 = (uint)uVar2;
        if ((longlong)local_20 <= (longlong)uVar2) break;
      } while (*(longlong *)(local_28 + uVar2 * 8) == 0);
    } while ((-2 < (longlong)uVar3) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  DAT_14c7616a0 = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acda58 FUN_147acda58 body=271 status=ok
// SIG undefined FUN_147acda58(void)

void FUN_147acda58(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  uint local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  cVar2 = FUN_141369f9a(param_1,L"LOD=");
  if (cVar2 != '\0') {
    local_1c = local_1c + 1;
  }
  FUN_1463cfdf6(&local_38,0x10,1,0);
  uVar4 = (ulonglong)local_28;
  if ((-1 < (int)local_28) && ((int)local_28 < local_30)) {
    do {
      lVar1 = *(longlong *)(local_38 + (uVar4 & 0xffffffff) * 8);
      if (*(longlong *)(lVar1 + 0xb0) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + 0x218);
      }
      if ((lVar3 == *(longlong *)(param_2 + 0x218)) &&
         (cVar2 = FUN_144a792c0(lVar1,0x30), cVar2 == '\0')) {
        FUN_140c16f42(lVar1,local_1c);
      }
      uVar4 = (longlong)(int)local_28;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        local_28 = (uint)uVar4;
        if ((longlong)local_30 <= (longlong)uVar4) break;
      } while (*(longlong *)(local_38 + uVar4 * 8) == 0);
    } while ((-2 < (longlong)uVar5) && ((int)local_28 < local_30));
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acdb68 FUN_147acdb68 body=403 status=ok
// SIG undefined FUN_147acdb68(void)

void FUN_147acdb68(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_488 [32];
  wchar_t *local_468;
  undefined2 *local_458;
  int local_450;
  undefined8 local_448;
  longlong local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined1 local_428 [512];
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_468 = (wchar_t *)((ulonglong)local_468 & 0xffffffffffff0000);
  local_438 = param_2;
  cVar1 = FUN_142786b6e(&local_438,local_228,0x100,1);
  if (cVar1 != '\0') {
    local_468 = (wchar_t *)((ulonglong)local_468 & 0xffffffffffff0000);
    cVar1 = FUN_142786b6e(&local_438,local_428,0x100,1);
    if (cVar1 != '\0') {
      uVar2 = FUN_1446f8646();
      local_468 = L"HandleDisplayCommand";
      lVar3 = FUN_140277cc4(uVar2,local_228,4,3);
      if (lVar3 == 0) {
        puVar5 = (undefined1 *)FUN_1400d7a00();
        (**(code **)(*param_3 + 0x10))(param_3,L"Object not found",*puVar5,puVar5 + 4);
      }
      else {
        FUN_1446f470e(&local_440,local_428,0);
        if ((local_440 == 0) ||
           (lVar4 = FUN_144a8e29b(*(undefined8 *)(lVar3 + 0x10),local_440,3), lVar4 == 0)) {
          local_430 = *(undefined8 *)(lVar3 + 0x18);
          FUN_1400021e4(&local_430,&local_458);
          puVar6 = local_458;
          if (local_450 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          FUN_140047918(param_3,L"Property \'%s\' not found on object \'%s\'",local_428,puVar6);
          if (local_458 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          local_448 = 0;
          local_468 = (wchar_t *)((ulonglong)local_468 & 0xffffffffffffff00);
          FUN_147acf286(param_1,lVar3,&local_448,&local_440);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acdcfc FUN_147acdcfc body=1080 status=ok
// SIG undefined FUN_147acdcfc(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147acdcfc(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  size_t sVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined4 local_4a0;
  longlong local_490 [2];
  wchar_t *local_480;
  int local_478;
  longlong *local_470;
  longlong local_458;
  undefined8 local_450;
  undefined2 *local_448;
  int local_440;
  wchar_t local_248 [255];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_4a8 = (wchar_t *)((ulonglong)local_4a8 & 0xffffffffffff0000);
  bVar16 = true;
  local_450 = param_2;
  cVar1 = FUN_142786b6e(&local_450,local_248,0x100,1);
  if (cVar1 != '\0') {
    FUN_140056680(&local_448,local_248);
    local_4a0 = 0xffffffff;
    local_4a8 = (wchar_t *)((ulonglong)local_4a8 & 0xffffffff00000000);
    uVar2 = FUN_1447ee042(&local_448,&DAT_149e0635c,1,1);
    if (uVar2 == 0xffffffff) {
      lVar6 = 0;
    }
    else {
      uVar15 = local_440 - 1;
      puVar13 = local_448;
      if (local_440 == 0) {
        uVar15 = 0;
        puVar13 = &DAT_149dfb77a;
      }
      if ((int)uVar2 < (int)uVar15) {
        uVar15 = uVar2;
      }
      if ((int)uVar15 < 1) {
        uVar15 = 0;
      }
      FUN_14006620a(&local_480,puVar13,uVar15);
      pwVar14 = L"";
      if (local_478 != 0) {
        pwVar14 = local_480;
      }
      uVar5 = FUN_144a797b2();
      local_4a8 = L"HandleDisplayAllCommand";
      lVar6 = FUN_140277cc4(uVar5,pwVar14,0,3);
      if (local_480 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (lVar6 == 0) {
        puVar9 = (undefined1 *)FUN_1400d7a00();
        (**(code **)(*param_3 + 0x10))(param_3,L"Within class not found",*puVar9,puVar9 + 4);
        lVar6 = 0;
        bVar16 = false;
      }
      else {
        iVar11 = local_440 + -1;
        if (local_440 == 0) {
          iVar11 = 0;
        }
        puVar13 = &DAT_149dfb77a;
        if (local_440 != 0) {
          puVar13 = local_448;
        }
        iVar12 = iVar11;
        if ((int)(~uVar2 + iVar11) < iVar11) {
          iVar12 = ~uVar2 + iVar11;
        }
        iVar3 = 0;
        if (0 < iVar12) {
          iVar3 = iVar12;
        }
        FUN_140056680(&local_480,
                      (longlong)puVar13 + ((longlong)iVar11 * 2 - (ulonglong)(uint)(iVar3 * 2)));
        pwVar14 = L"";
        if (local_478 != 0) {
          pwVar14 = local_480;
        }
        wcsncpy(local_248,pwVar14,0xff);
        local_4a = 0;
        if (local_480 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        sVar7 = wcslen(local_248);
        bVar16 = 0 < (int)sVar7;
      }
    }
    if (local_448 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar16) {
      local_4a8 = (wchar_t *)((ulonglong)local_4a8 & 0xffffffffffff0000);
      bVar16 = true;
      FUN_142786b6e(&local_450,&local_448,0x100,1);
      uVar5 = FUN_144a797b2();
      local_4a8 = L"HandleDisplayAllCommand";
      lVar8 = FUN_140277cc4(uVar5,local_248,0,3);
      if (lVar8 == 0) {
        puVar9 = (undefined1 *)FUN_1400d7a00();
        (**(code **)(*param_3 + 0x10))(param_3,L"Object not found",*puVar9,puVar9 + 4);
      }
      else {
        FUN_1446f470e(&local_458,&local_448,0);
        if (local_458 != 0) {
          lVar10 = FUN_144a8e29b(lVar8,local_458,3);
          bVar16 = lVar10 == 0;
        }
        uVar4 = FUN_14482ca40();
        uVar5 = FUN_1446f8646();
        local_4a8 = (wchar_t *)(CONCAT44(local_4a8._4_4_,uVar4) | 0x90000000);
        FUN_146123bc0(&local_480,uVar5,0,0x10);
        if (local_470 != (longlong *)0x0) {
          do {
            lVar10 = *local_470;
            if (DAT_14c9647bc < *(int *)(lVar10 + 0xc)) break;
            if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
               (cVar1 = FUN_144a792c0(lVar10,0x30), cVar1 == '\0')) {
              if (lVar6 == 0) {
LAB_147ace0d5:
                local_490[1] = 0;
                if (local_470 == (longlong *)0x0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = *local_470;
                }
                local_4a8 = (wchar_t *)CONCAT71(local_4a8._1_7_,bVar16);
                FUN_147acf286(param_1,lVar10,local_490 + 1,&local_458);
              }
              else {
                lVar10 = _DAT_00000020;
                if (local_470 != (longlong *)0x0) {
                  lVar10 = *(longlong *)(*local_470 + 0x20);
                }
                if (lVar10 != 0) {
                  if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_147ace0d5;
                }
              }
            }
            FUN_1468bea3c(&local_480);
          } while (local_470 != (longlong *)0x0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_480 + 0x18));
        local_490[0] = lVar6;
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar6);
        }
        local_4a8 = (wchar_t *)CONCAT71(local_4a8._1_7_,bVar16);
        FUN_147acf286(param_1,lVar8,local_490,&local_458);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ace136 FUN_147ace136 body=1162 status=ok
// SIG undefined FUN_147ace136(void)

void FUN_147ace136(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  size_t sVar6;
  longlong lVar7;
  undefined2 *puVar8;
  wchar_t *_Str;
  undefined1 auStack_318 [32];
  wchar_t *local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined2 *local_2d8;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  undefined8 local_2a8;
  ulonglong local_2a0 [2];
  longlong local_290;
  wchar_t *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong local_270;
  undefined1 local_268 [8];
  undefined1 local_260 [28];
  char local_244;
  longlong local_238;
  char local_210;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_288 = (wchar_t *)0x0;
  uStack_280 = 0;
  local_2f8 = (wchar_t *)0x0;
  local_278 = param_2;
  cVar1 = FUN_14063337c(param_2,L"-actorname=",&local_288,1);
  if (cVar1 == '\0') {
    local_2f8 = (wchar_t *)((ulonglong)local_2f8 & 0xffffffffffff0000);
    cVar1 = FUN_142786b6e(&local_278,local_268,0x100,1);
    if (cVar1 != '\0') {
      uVar4 = FUN_144a797b2();
      local_2f8 = L"HandleDisplayAllLocationCommand";
      lVar5 = FUN_140277cc4(uVar4,local_268,0,3);
      if (lVar5 == 0) {
        puVar3 = (undefined1 *)FUN_1400d7a00();
        (**(code **)(*param_3 + 0x10))(param_3,L"Object not found",*puVar3,puVar3 + 4);
      }
      else {
        uVar4 = FUN_1446f8646();
        local_2f8 = (wchar_t *)((ulonglong)local_2f8 & 0xffffffff00000000);
        FUN_146123bc0(&local_2d8,uVar4,1,0x10);
        if (local_2c8 != (longlong *)0x0) {
          do {
            if (DAT_14c9647bc < *(int *)(*local_2c8 + 0xc)) break;
            lVar7 = *(longlong *)(*local_2c8 + 0x10);
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                lVar5 + 0x30)) {
              if (DAT_14c87ead8 == '\x01') {
                local_2a0[0] = (ulonglong)DAT_14c892f20;
LAB_147ace563:
                lVar7 = *local_2c8;
              }
              else {
                FUN_140024d3a(&DAT_14c87eb00);
                DAT_14c87ead8 = '\x01';
                local_2a0[0] = (ulonglong)DAT_14c892f20;
                if (local_2c8 != (longlong *)0x0) goto LAB_147ace563;
                lVar7 = 0;
              }
              local_2e0 = 0;
              local_2f8 = (wchar_t *)CONCAT71(local_2f8._1_7_,1);
              FUN_147acf286(param_1,lVar7,&local_2e0,local_2a0);
            }
            FUN_1468bea3c(&local_2d8);
          } while (local_2c8 != (longlong *)0x0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_2d8 + 0x18));
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        local_2d8 = (undefined2 *)(ulonglong)DAT_14c892f20;
        local_2e8 = 0;
        local_2f8 = (wchar_t *)CONCAT71(local_2f8._1_7_,1);
        FUN_147acf286(param_1,lVar5);
      }
    }
    goto LAB_147ace315;
  }
  local_2d8 = (undefined2 *)0x0;
  uStack_2d0 = 0;
  local_2f8 = (wchar_t *)0x0;
  cVar1 = FUN_14063337c(local_278,L"-class=",&local_2d8,1);
  if (cVar1 == '\0') {
LAB_147ace297:
    lVar5 = FUN_144a6c4d8();
  }
  else {
    puVar8 = local_2d8;
    if ((int)uStack_2d0 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    uVar4 = FUN_144a797b2();
    local_2f8 = L"HandleDisplayAllLocationCommand";
    lVar5 = FUN_140277cc4(uVar4,puVar8,0,3);
    if (lVar5 == 0) goto LAB_147ace297;
  }
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  local_290 = lVar5;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  FUN_14146ff3c(local_268,uVar4,&local_290,5);
  if (local_244 == '\0') {
    do {
      local_270 = *(ulonglong *)(local_238 + 0x18);
      FUN_1400021e4(&local_270,local_2a0);
      _Str = L"";
      if ((int)uStack_280 != 0) {
        _Str = local_288;
      }
      if (_Str != (wchar_t *)0x0) {
        sVar6 = wcslen(_Str);
        local_2f0 = 0xffffffff;
        local_2f8 = (wchar_t *)((ulonglong)local_2f8 & 0xffffffff00000000);
        iVar2 = FUN_1447ee042(local_2a0,_Str,sVar6 & 0xffffffff,1);
        if (iVar2 != -1) {
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          local_270 = (ulonglong)DAT_14c892f20;
          local_2a8 = 0;
          local_2f8 = (wchar_t *)CONCAT71(local_2f8._1_7_,1);
          FUN_147acf286(param_1,local_238,&local_2a8,&local_270);
        }
      }
      if (local_2a0[0] != 0) {
        FUN_1400020a8();
      }
      FUN_14146ffc0(local_268);
    } while (local_244 == '\0');
  }
  if (local_210 == '\x01') {
    FUN_14024445c(local_260);
  }
  if (local_2d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147ace315:
  if (local_288 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ace5c2 FUN_147ace5c2 body=526 status=ok
// SIG undefined FUN_147ace5c2(void)

void FUN_147ace5c2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  undefined8 local_290;
  undefined8 local_288;
  ulonglong local_280;
  ulonglong local_278 [2];
  longlong *local_268;
  undefined8 local_250;
  undefined1 local_248 [520];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_298 = (wchar_t *)((ulonglong)local_298 & 0xffffffffffff0000);
  local_250 = param_2;
  cVar1 = FUN_142786b6e(&local_250,local_248,0x100,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_144a797b2();
    local_298 = L"HandleDisplayAllRotationCommand";
    lVar3 = FUN_140277cc4(uVar2,local_248,0,3);
    if (lVar3 == 0) {
      puVar4 = (undefined1 *)FUN_1400d7a00();
      (**(code **)(*param_3 + 0x10))(param_3,L"Object not found",*puVar4,puVar4 + 4);
    }
    else {
      uVar2 = FUN_1446f8646();
      local_298 = (wchar_t *)((ulonglong)local_298 & 0xffffffff00000000);
      FUN_146123bc0(local_278,uVar2,1,0x10);
      if (local_268 != (longlong *)0x0) {
        do {
          if (DAT_14c9647bc < *(int *)(*local_268 + 0xc)) break;
          lVar5 = *(longlong *)(*local_268 + 0x10);
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30)) {
            if (DAT_14c87ead8 == '\x01') {
              local_280 = (ulonglong)DAT_14c892f24;
LAB_147ace773:
              lVar5 = *local_268;
            }
            else {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
              local_280 = (ulonglong)DAT_14c892f24;
              if (local_268 != (longlong *)0x0) goto LAB_147ace773;
              lVar5 = 0;
            }
            local_288 = 0;
            local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
            FUN_147acf286(param_1,lVar5,&local_288,&local_280);
          }
          FUN_1468bea3c(local_278);
        } while (local_268 != (longlong *)0x0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_278[0] + 0x30));
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      local_278[0] = (ulonglong)DAT_14c892f24;
      local_290 = 0;
      local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
      FUN_147acf286(param_1,lVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ace7d2 FUN_147ace7d2 body=607 status=ok
// SIG undefined FUN_147ace7d2(void)

void FUN_147ace7d2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_2e8 [32];
  wchar_t *local_2c8;
  ulonglong uStack_2c0;
  undefined8 local_2b8;
  undefined2 *local_2a8;
  int local_2a0;
  longlong local_298;
  int local_290;
  uint local_288;
  undefined8 local_280;
  undefined1 local_278 [520];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_2c8 = (wchar_t *)((ulonglong)local_2c8 & 0xffffffffffff0000);
  local_280 = param_1;
  cVar3 = FUN_142786b6e(&local_280,local_278,0x100,1);
  if (cVar3 != '\0') {
    uVar4 = FUN_144a797b2();
    local_2c8 = L"HandleGetAllLocationCommand";
    lVar5 = FUN_140277cc4(uVar4,local_278,0,3);
    if (lVar5 != 0) {
      cVar3 = FUN_140988638(&local_280,L"SHOWPENDINGKILLS",1);
      iVar13 = 0;
      FUN_1470e5ae0(&local_298,0x10,1,0);
      uVar10 = (ulonglong)local_288;
      lVar6 = local_298;
      if (-1 < (int)local_288 && (int)local_288 < local_290) {
        iVar8 = local_290;
        do {
          uVar9 = (uint)uVar10;
          lVar1 = *(longlong *)(lVar6 + (uVar10 & 0xffffffff) * 8);
          if ((cVar3 != '\0') || ((lVar1 != 0 && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)))) {
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              lVar6 = *(longlong *)(lVar1 + 0x1c8);
              if (lVar6 == 0) {
                uVar14 = (undefined4)DAT_14c8464f0;
                uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                puVar7 = &DAT_14c8464e0;
              }
              else {
                uVar14 = (undefined4)*(undefined8 *)(lVar6 + 0x270);
                uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x270) >> 0x20);
                puVar7 = (ulonglong *)(lVar6 + 0x260);
              }
              pwVar2 = (wchar_t *)*puVar7;
              uVar10 = puVar7[1];
              FUN_144750a86(lVar1,&local_2a8,0,0);
              puVar12 = &DAT_149dfb77a;
              if (local_2a0 != 0) {
                puVar12 = local_2a8;
              }
              local_2b8 = CONCAT44(uVar15,uVar14);
              local_2c8 = pwVar2;
              uStack_2c0 = uVar10;
              FUN_140047918(param_2,L"%i) %s (%f, %f, %f)",iVar13,puVar12);
              if (local_2a8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              iVar13 = iVar13 + 1;
              lVar6 = local_298;
              uVar9 = local_288;
              iVar8 = local_290;
            }
          }
          uVar10 = (longlong)(int)uVar9;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
            local_288 = (uint)uVar10;
            if ((longlong)iVar8 <= (longlong)uVar10) break;
          } while (*(longlong *)(lVar6 + uVar10 * 8) == 0);
        } while ((-2 < (longlong)uVar11) && ((int)local_288 < iVar8));
      }
      if (lVar6 != 0) {
        FUN_1400020a8();
      }
      goto LAB_147ace870;
    }
  }
  FUN_140047918(param_2,L"Unrecognized class %s",local_278);
LAB_147ace870:
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acea32 FUN_147acea32 body=895 status=ok
// SIG undefined FUN_147acea32(void)

void FUN_147acea32(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  double dVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_328 [32];
  wchar_t *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  uint local_2e0;
  uint local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  double local_290;
  undefined1 local_288 [520];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_308 = (wchar_t *)((ulonglong)local_308 & 0xffffffffffff0000);
  local_2d0 = param_1;
  cVar8 = FUN_142786b6e(&local_2d0,local_288,0x100,1);
  if (cVar8 != '\0') {
    uVar10 = FUN_144a797b2();
    local_308 = L"HandleGetAllRotationCommand";
    lVar11 = FUN_140277cc4(uVar10,local_288,0,3);
    if (lVar11 != 0) {
      cVar8 = FUN_140988638(&local_2d0,L"SHOWPENDINGKILLS",1);
      iVar20 = 0;
      FUN_1470e5ae0(&local_2e8,0x10,1,0);
      dVar12 = (double)(ulonglong)local_2e0;
      uVar16 = (ulonglong)local_2d8;
      lVar18 = local_2e8;
      if (-1 < (int)local_2d8 && (int)local_2d8 < (int)local_2e0) {
        lVar19 = lVar11 + 0x30;
        local_2f0 = lVar19;
        do {
          uVar21 = (uint)uVar16;
          lVar15 = *(longlong *)(lVar18 + (uVar16 & 0xffffffff) * 8);
          if ((cVar8 != '\0') || ((lVar15 != 0 && ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0)))) {
            if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar19)) {
              lVar1 = *(longlong *)(lVar15 + 0x1c8);
              if (lVar1 == 0) {
                uVar26 = SUB84(DAT_14c846508,0);
                uVar27 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
                uVar22 = (undefined4)DAT_14c8464f8;
                uVar23 = DAT_14c8464f8._4_4_;
                uVar24 = (undefined4)DAT_14c846500;
                uVar25 = DAT_14c846500._4_4_;
              }
              else {
                dVar4 = *(double *)(lVar1 + 0x240);
                dVar5 = *(double *)(lVar1 + 0x248);
                dVar6 = *(double *)(lVar1 + 0x250);
                dVar7 = *(double *)(lVar1 + 600);
                pdVar13 = *(double **)(lVar1 + 0x228);
                local_2c8 = dVar4;
                uStack_2c0 = dVar5;
                local_2b8 = dVar6;
                uStack_2b0 = dVar7;
                if (pdVar13 == (double *)0x0) {
                  lVar15 = 0x40;
                  pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
                  dVar12 = DAT_14c8463d8;
                  *pdVar13 = DAT_14c8463d0;
                  pdVar13[1] = dVar12;
                  dVar12 = DAT_14c8463e8;
                  pdVar13[2] = DAT_14c8463e0;
                  pdVar13[3] = dVar12;
                  uVar24 = DAT_14c846500._4_4_;
                  uVar23 = (undefined4)DAT_14c846500;
                  uVar22 = DAT_14c8464f8._4_4_;
                  *(undefined4 *)(pdVar13 + 4) = (undefined4)DAT_14c8464f8;
                  *(undefined4 *)((longlong)pdVar13 + 0x24) = uVar22;
                  *(undefined4 *)(pdVar13 + 5) = uVar23;
                  *(undefined4 *)((longlong)pdVar13 + 0x2c) = uVar24;
                  dVar12 = DAT_14c846508;
                  pdVar13[6] = DAT_14c846508;
                  *(double **)(lVar1 + 0x228) = pdVar13;
                }
                auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar13[1]);
                auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar13);
                auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar13[1]) >> 0x20);
                iVar9 = movmskpd(SUB84(dVar12,0),auVar2);
                auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[3]);
                auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar13[2]);
                auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[3]) >> 0x20);
                uVar14 = movmskpd((int)lVar15,auVar3);
                if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
                  *(undefined4 *)(pdVar13 + 2) = (undefined4)local_2b8;
                  *(undefined4 *)((longlong)pdVar13 + 0x14) = local_2b8._4_4_;
                  *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_2b0;
                  *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_2b0._4_4_;
                  *(undefined4 *)pdVar13 = (undefined4)local_2c8;
                  *(undefined4 *)((longlong)pdVar13 + 4) = local_2c8._4_4_;
                  *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_2c0;
                  *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_2c0._4_4_;
                  FUN_1448052ee(&local_2c8,&local_2a0);
                  pdVar13[6] = local_290;
                  *(undefined4 *)(pdVar13 + 4) = local_2a0;
                  *(undefined4 *)((longlong)pdVar13 + 0x24) = uStack_29c;
                  *(undefined4 *)(pdVar13 + 5) = uStack_298;
                  *(undefined4 *)((longlong)pdVar13 + 0x2c) = uStack_294;
                  lVar18 = local_2e8;
                  uVar21 = local_2d8;
                }
                uVar26 = SUB84(pdVar13[6],0);
                uVar27 = (undefined4)((ulonglong)pdVar13[6] >> 0x20);
                lVar19 = local_2f0;
                uVar22 = SUB84(pdVar13[4],0);
                uVar23 = (int)((ulonglong)pdVar13[4] >> 0x20);
                uVar24 = SUB84(pdVar13[5],0);
                uVar25 = (int)((ulonglong)pdVar13[5] >> 0x20);
              }
              FUN_144750a86(*(undefined8 *)(lVar18 + (longlong)(int)uVar21 * 8),&local_2c8,0,0);
              local_2f8 = CONCAT44(uVar27,uVar26);
              local_300 = CONCAT44(uVar23,uVar22);
              local_308 = (wchar_t *)CONCAT44(uVar25,uVar24);
              FUN_140047918(param_2,L"%i) %s (%f, %f, %f)",iVar20);
              if (local_2c8 != 0.0) {
                FUN_1400020a8();
              }
              iVar20 = iVar20 + 1;
              dVar12 = (double)(ulonglong)local_2e0;
              lVar18 = local_2e8;
              uVar21 = local_2d8;
            }
          }
          uVar16 = (longlong)(int)uVar21;
          do {
            uVar17 = uVar16;
            uVar16 = uVar17 + 1;
            local_2d8 = (uint)uVar16;
            if ((longlong)SUB84(dVar12,0) <= (longlong)uVar16) break;
          } while (*(longlong *)(lVar18 + uVar16 * 8) == 0);
        } while ((-2 < (longlong)uVar17) && ((int)local_2d8 < SUB84(dVar12,0)));
      }
      if (lVar18 != 0) {
        FUN_1400020a8(lVar18);
      }
      goto LAB_147aceae2;
    }
  }
  FUN_140047918(param_2,L"Unrecognized class %s",local_288);
LAB_147aceae2:
  if ((local_80 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acedb2 FUN_147acedb2 body=436 status=ok
// SIG undefined FUN_147acedb2(void)

void FUN_147acedb2(void)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  plVar4 = DAT_14c98e618;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = DAT_14c98e618[4];
  FUN_1469aa384(DAT_14c98e618,&local_30);
  plVar6 = local_28;
  if (local_28 == (longlong *)0x0) {
    local_50 = local_30;
    local_48 = (longlong *)0x0;
    plVar7 = &local_40;
    (**(code **)(*plVar4 + 0x28))(plVar4,plVar7);
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    local_50 = local_30;
    local_48 = local_28;
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    plVar7 = &local_40;
    (**(code **)(*plVar4 + 0x28))(plVar4,plVar7);
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((((lVar3 != 0) && (local_30 != 0)) && (local_40 != 0)) &&
     (plVar4 = *(longlong **)(local_30 + 0x270), plVar4 != (longlong *)0x0)) {
    plVar6 = *(longlong **)(local_30 + 0x268);
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    if ((plVar6 != (longlong *)0x0) && (0 < (int)plVar4[1])) {
      uVar5 = *(uint *)(plVar4 + 1);
      do {
        plVar9 = (longlong *)0x0;
        if (uVar5 == 0) break;
        plVar7 = (longlong *)(ulonglong)(uVar5 + 1);
        LOCK();
        uVar2 = *(uint *)(plVar4 + 1);
        bVar10 = uVar5 == uVar2;
        if (bVar10) {
          *(uint *)(plVar4 + 1) = uVar5 + 1;
          uVar2 = uVar5;
        }
        uVar5 = uVar2;
        UNLOCK();
        plVar9 = plVar4;
      } while (!bVar10);
      if (plVar9 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),*(undefined1 *)(local_40 + 0x36a)) &
              0xffffffffffffff02;
      (**(code **)(*plVar6 + 0x170))(plVar6,CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 1));
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar9 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acef7c FUN_147acef7c body=168 status=ok
// SIG undefined FUN_147acef7c(void)

longlong * FUN_147acef7c(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1405babea();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90000000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x10);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf026 FUN_147acf026 body=607 status=ok
// SIG undefined FUN_147acf026(void)

void FUN_147acf026(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60 [2];
  longlong local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(&local_50);
  if ((longlong *)param_1[0x1f] == (longlong *)0x0) {
    puVar10 = &DAT_149ef80e6;
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)param_1[0x1f] + 0x48))();
    puVar10 = &DAT_149ef80e6;
    if ((char)uVar1 != '\0') {
      puVar10 = &DAT_149ef80de;
    }
  }
  if (local_48 < 2) {
    pwVar8 = L"BugScreenShot.png";
    if ((char)uVar1 != '\0') {
      pwVar8 = L"BugScreenShot.exr";
    }
    FUN_14020fad6(&local_50,pwVar8);
  }
  local_90 = 0xffffffff;
  local_98 = 0;
  iVar2 = FUN_1447ee042(&local_50,&DAT_149e065c6,1,1);
  if (iVar2 == -1) {
    FUN_140c50e9c(&local_70,&local_50,1);
    puVar12 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar12 = local_70;
    }
    FUN_1468176ae(&local_80);
    puVar9 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar9 = local_80;
    }
    FUN_140002266(local_60,L"%s%s_",puVar9,puVar12);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = FUN_14054d1d4();
    FUN_140056680(&local_70,puVar10);
    FUN_146810f9e(local_60,&local_70,&local_50,uVar7);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[0x1f] != 0) {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((param_3 == '\x01' && lVar3 != 0) && (0 < *(int *)(lVar3 + 0x238))) {
      iVar2 = 0;
      lVar11 = 0;
      do {
        lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar11);
        if (lVar4 != 0) {
          lVar5 = FUN_144a774fe(lVar4);
          if (lVar5 != 0) {
            plVar6 = (longlong *)FUN_144a774fe(lVar4);
            (**(code **)(*plVar6 + 0x6e0))(plVar6);
          }
        }
        lVar11 = lVar11 + 8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(lVar3 + 0x238));
    }
    FUN_147d7771c(&local_50,1,0,uVar1);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf286 FUN_147acf286 body=184 status=ok
// SIG undefined FUN_147acf286(void)

void FUN_147acf286(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  byte param_5)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar3 = 0;
    do {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar3) == param_2) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10 + lVar3) == *param_4)) {
        return;
      }
      lVar3 = lVar3 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x20 != lVar3);
  }
  plVar2 = (longlong *)FUN_147acf418(param_1 + 0x48);
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  *plVar2 = param_2;
  lVar3 = *param_3;
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_3;
    }
  }
  plVar2[1] = lVar3;
  plVar2[2] = *param_4;
  *(uint *)(plVar2 + 3) = *(uint *)(plVar2 + 3) & 0xfffffffe | (uint)param_5;
  return;
}



// FUNCTION 147acf33e FUN_147acf33e body=202 status=ok
// SIG undefined FUN_147acf33e(void)

void FUN_147acf33e(undefined8 param_1,char param_2,char param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    if (param_3 != '\0') {
      FUN_1447a1747(DAT_14cadbe28,DAT_14cadbe30);
      DAT_14cadbe30 = 0;
      if (DAT_14cadbe34 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
      }
      goto LAB_147acf385;
    }
    FUN_140056680(local_28,param_1);
    local_18 = local_28;
    FUN_140c8411c(&DAT_14cadbe28);
  }
  else {
    FUN_140056680(local_28,param_1);
    FUN_1405e9454(&DAT_14cadbe28,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_147acf385:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf418 FUN_147acf418 body=59 status=ok
// SIG undefined FUN_147acf418(void)

longlong FUN_147acf418(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147ad3cf4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_147ad3ce0(lVar2);
  return lVar2;
}



// FUNCTION 147acf454 FUN_147acf454 body=148 status=ok
// SIG undefined FUN_147acf454(void)

void FUN_147acf454(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x152) | 2) == 3)) {
    lVar2 = FUN_1400b465c();
    if (lVar2 == *(longlong *)(param_2 + 0x1f0)) {
      uVar3 = FUN_1458fd8e2();
      local_28 = 0;
      FUN_14485c47a(&local_28,param_2);
      FUN_1458fd9b6(uVar3,&local_28);
      uVar1 = FUN_14490d72a(param_2);
      FUN_1458fda0c(uVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf4ea FUN_147acf4ea body=152 status=ok
// SIG undefined FUN_147acf4ea(void)

undefined4 FUN_147acf4ea(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_1;
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  uVar5 = FUN_14011b9d8(uVar3,&local_30);
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf584 FUN_147acf584 body=146 status=ok
// SIG undefined FUN_147acf584(void)

undefined4 FUN_147acf584(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_1;
  local_30 = *param_2;
  local_28 = param_2[1];
  local_20 = param_2[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar5 = FUN_14011b7ae(uVar3,&local_30,0);
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf618 FUN_147acf618 body=39 status=ok
// SIG undefined FUN_147acf618(void)

undefined8 FUN_147acf618(undefined8 *param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar3;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x180))();
  if (lVar1 == 0) {
    fVar2 = 0.0;
    uVar3 = 0;
  }
  else {
    fVar2 = (float)*(double *)(lVar1 + 0x6e0);
    uVar3 = extraout_XMM0_Db;
  }
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 147acf640 FUN_147acf640 body=137 status=ok
// SIG undefined FUN_147acf640(void)

void FUN_147acf640(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *param_1;
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_147d95e72(uVar3,&local_28);
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf6ca FUN_147acf6ca body=83 status=ok
// SIG undefined FUN_147acf6ca(void)

void FUN_147acf6ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x30;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x18);
  }
  FUN_14011b67e(param_1,param_2);
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147acf712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147acf71e FUN_147acf71e body=322 status=ok
// SIG undefined FUN_147acf71e(void)

void FUN_147acf71e(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_1;
  local_58 = *param_2;
  local_50 = param_2[1];
  local_48 = param_2[2];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  lVar6 = FUN_144b23a76(uVar3,&local_58);
  if (lVar6 != 0) {
    lVar7 = (longlong)param_3 * 0x10;
    plVar9 = (longlong *)(lVar6 + lVar7 + 0x38);
    piVar4 = (int *)param_1[2];
    *piVar4 = *piVar4 + 1;
    iVar2 = *(int *)(lVar6 + 0x40 + lVar7);
    *(uint *)(lVar6 + 0x40 + lVar7) = iVar2 + 1U;
    if (*(uint *)(lVar6 + 0x44 + lVar7) < iVar2 + 1U) {
      FUN_1447808da(plVar9,iVar2);
    }
    *(int *)(*plVar9 + (longlong)iVar2 * 4) = *piVar4;
    plVar9 = (longlong *)param_1[4];
    iVar2 = (int)plVar9[1];
    *(uint *)(plVar9 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar9 + 0xc) < iVar2 + 1U) {
      FUN_1463d04dc(plVar9,iVar2);
    }
    lVar7 = *plVar9;
    lVar8 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar7 + lVar8) = *param_2;
    *(undefined8 *)(lVar7 + 8 + lVar8) = param_2[1];
    lVar5 = param_2[2];
    *(longlong *)(lVar7 + 0x10 + lVar8) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    *(longlong *)(lVar7 + lVar8 + 0x18) = lVar6;
  }
  plVar9 = (longlong *)param_2[2];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar4 = (int *)((longlong)plVar9 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acf862 FUN_147acf862 body=5 status=ok
// SIG undefined FUN_147acf862(void)

void FUN_147acf862(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 147acf868 FUN_147acf868 body=197 status=ok
// SIG undefined FUN_147acf868(void)

void FUN_147acf868(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x28) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = puVar3 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      local_40 = *puVar3;
      local_38 = puVar3[1];
      local_30 = puVar3[2];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_147acf640(param_1,&local_40);
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar1);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    puVar3 = *(undefined8 **)(param_1 + 0x30);
  }
  FUN_144a65a1e(puVar3,uVar2);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 147acf942 FUN_147acf942 body=174 status=ok
// SIG undefined FUN_147acf942(void)

longlong * FUN_147acf942(longlong *param_1,undefined8 param_2)

{
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_14a907ef0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  FUN_147ad41de(param_1 + 0x1e,param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 0x16;
  (**(code **)(*param_1 + 0xc0))(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,1);
  FUN_1449db362(param_2);
  return param_1;
}



// FUNCTION 147acf9f0 FUN_147acf9f0 body=424 status=ok
// SIG undefined FUN_147acf9f0(void)

longlong * FUN_147acf9f0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
      uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      plVar5 = param_1 + 0x19;
      if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x1a];
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      (ulonglong)((int)param_1[0x1b] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar6 != -1) {
        lVar2 = param_1[0x12];
        do {
          if (*(ulonglong *)(lVar2 + (longlong)iVar6 * 0x10) == uVar1) goto LAB_147acfb75;
          iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar2 + 8);
        } while (iVar6 != -1);
      }
    }
    FUN_1457b12ce(param_1 + 0x12,&local_30,param_2,0);
    uVar1 = *param_2;
    if ((uVar1 != 0) && ((*(uint *)(uVar1 + 8) >> 0x1e & 1) == 0)) {
      if (((char)param_1[0x20] == '\x01') && (lVar2 = *(longlong *)(uVar1 + 0x10), lVar2 != 0)) {
        lVar3 = FUN_14043ab18();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_30 = lVar2;
          (**(code **)(*param_1 + 0x150))(param_1);
        }
      }
      iVar6 = (int)param_1[0x1d];
      *(uint *)(param_1 + 0x1d) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xec) < iVar6 + 1U) {
        FUN_1447f76d2(param_1 + 0x1c,iVar6);
      }
      plVar5 = (longlong *)*param_2;
      *(longlong **)(param_1[0x1c] + (longlong)iVar6 * 8) = plVar5;
      (**(code **)(*plVar5 + 0xd8))(plVar5,param_1);
      *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + -1;
      FUN_1404559b4(param_1 + 0x1c);
    }
  }
LAB_147acfb75:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acfb9a FUN_147acfb9a body=268 status=ok
// SIG undefined FUN_147acfb9a(void)

void FUN_147acfb9a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [38];
  undefined1 local_62;
  undefined1 local_61;
  longlong local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (((lVar1 != 0) ||
      ((*(longlong *)(param_1 + 0x40) != 0 &&
       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30) != 0)))) && (0 < *(int *)(lVar1 + 0x58))
     ) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x40);
        if ((lVar2 == 0) || (*(int *)(lVar2 + 0x40) <= lVar4)) goto LAB_147acfc21;
        plVar3 = (longlong *)(lVar2 + 0x38);
LAB_147acfc19:
        local_62 = *(undefined1 *)(*plVar3 + lVar4);
      }
      else {
        if (lVar4 < *(int *)(lVar2 + 0x48)) {
          plVar3 = (longlong *)(lVar2 + 0x40);
          goto LAB_147acfc19;
        }
LAB_147acfc21:
        local_62 = 0;
      }
      local_60 = *(longlong *)(lVar1 + 0x50) + lVar5;
      local_61 = 1;
      local_58 = &local_62;
      FUN_147ad4368(param_1 + 0x48,local_4c,&local_60);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar4 < *(int *)(lVar1 + 0x58));
  }
  *(longlong *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acfca8 FUN_147acfca8 body=430 status=ok
// SIG undefined FUN_147acfca8(void)

void FUN_147acfca8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [40];
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147acfe58(param_2,&local_58);
  pvVar2 = local_58;
  local_68 = (void *)0x0;
  local_60 = local_50;
  if ((longlong)local_50 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_50,0);
    memcpy(local_68,pvVar2,(longlong)local_50 * 2);
  }
  FUN_147906d4c(param_2,&local_68,0);
  if (0 < *(int *)(param_1 + 0x28)) {
    local_90 = param_1 + 0x100;
    lVar6 = 0;
    uVar5 = 0;
    do {
      FUN_140002266(&local_78,L"(State: %d)",uVar5 & 0xffffffff);
      pvVar2 = local_78;
      lVar1 = *(longlong *)(param_1 + 0x20);
      local_88 = (void *)0x0;
      lVar4 = (longlong)local_70;
      local_80 = local_70;
      if (lVar4 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_70,0);
        memcpy(local_88,pvVar2,lVar4 * 2);
      }
      uVar7 = 0;
      if ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x128)) {
        lVar4 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar4 = local_90;
        }
        uVar7 = *(undefined4 *)(lVar4 + uVar5 * 4);
      }
      uVar3 = FUN_147906f5e(param_2,uVar7,&local_88);
      FUN_147906d38(lVar1 + lVar6,uVar3);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x28));
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147acfe58 FUN_147acfe58 body=208 status=ok
// SIG undefined FUN_147acfe58(void)

undefined8 FUN_147acfe58(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_1463780de();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147acff2a FUN_147acff2a body=106 status=ok
// SIG undefined FUN_147acff2a(void)

undefined8 * FUN_147acff2a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadba48) {
    FUN_144b3d300(&DAT_14cadba48);
    if (DAT_14cadba48 == -1) {
      DAT_14cadba38 = 0;
      uRam000000014cadba40 = 0;
      atexit((_func_5014 *)&LAB_143502a97);
      _Init_thread_footer(&DAT_14cadba48);
    }
  }
  return &DAT_14cadba38;
}



// FUNCTION 147acffae FUN_147acffae body=65 status=ok
// SIG undefined FUN_147acffae(void)

void FUN_147acffae(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_141066b56();
  lVar1 = *(longlong *)(param_2 + 8);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(lVar2 + 8 + (ulonglong)(param_3 & 0xff) * 8) = lVar1;
  return;
}



// FUNCTION 147acfff0 FUN_147acfff0 body=196 status=ok
// SIG undefined FUN_147acfff0(void)

void FUN_147acfff0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar5 [16];
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    uVar1 = (longlong)*(int *)(param_1 + 0x20) * 0x28 - 0x28;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar1;
    uVar4 = SUB164(auVar7 * ZEXT816(0xcccccccccccccccd),8);
    uVar6 = (undefined4)(uVar1 / 0x140000000);
    auVar5._0_8_ = CONCAT44(uVar6,uVar4);
    auVar5._8_4_ = uVar4;
    auVar5._12_4_ = uVar6;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40);
    uVar2 = 0;
    auVar7 = pmovsxbq(in_XMM1,0x100);
    do {
      if ((bool)(~((longlong)(auVar5._0_8_ >> 5 | 0x8000000000000000) <
                  (longlong)(uVar2 ^ 0x8000000000000000)) & 1)) {
        puVar3[-5] = 0;
      }
      auVar8._8_4_ = (int)uVar2;
      auVar8._0_8_ = uVar2;
      auVar8._12_4_ = (int)(uVar2 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ 0x8000000000000000) <=
          (longlong)(auVar5._8_8_ >> 5 | 0x8000000000000000)) {
        *puVar3 = 0;
      }
      uVar2 = uVar2 + 2;
      puVar3 = puVar3 + 10;
    } while ((uVar1 / 0x28 + 2 & 0xfffffffffffffffe) != uVar2);
  }
  return;
}



// FUNCTION 147ad00b4 FUN_147ad00b4 body=185 status=ok
// SIG undefined FUN_147ad00b4(void)

void FUN_147ad00b4(longlong param_1,int param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *_Dst;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x30);
  if (0 < lVar3) {
    _Dst = *(int **)(param_1 + 0x28);
    iVar4 = 1;
    do {
      if (*_Dst == param_2) {
        iVar1 = *(int *)(param_4 + 8);
        FUN_140cbe320(_Dst,1);
        iVar2 = *(int *)(param_1 + 0x30);
        if (iVar2 - iVar4 != 0) {
          memmove(_Dst,_Dst + 6,(longlong)(iVar2 - iVar4) * 0x18);
          iVar2 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar2 + -1;
        if (iVar1 == 0) {
          FUN_147ad48d0((undefined8 *)(param_1 + 0x28));
        }
        break;
      }
      iVar4 = iVar4 + 1;
      _Dst = _Dst + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (0 < *(int *)(param_4 + 8)) {
    FUN_147ad016e(param_1,param_2,param_3,param_4);
  }
  FUN_147ad0238(param_1);
  return;
}



// FUNCTION 147ad016e FUN_147ad016e body=202 status=ok
// SIG undefined FUN_147ad016e(void)

void FUN_147ad016e(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar5 = (ulonglong)uVar3;
  if (uVar5 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    if (*(int *)(param_1 + 0x34) == 0) {
      FUN_147ad4a36(plVar1,0);
    }
    lVar6 = *plVar1;
  }
  else {
    lVar6 = uVar5 * 0x18 + -0x14;
    do {
      uVar4 = (uint)uVar5;
      if ((int)uVar4 < 1) {
        uVar4 = 0;
        break;
      }
      uVar5 = (ulonglong)(uVar4 - 1);
      piVar2 = (int *)(*plVar1 + lVar6);
      lVar6 = lVar6 + -0x18;
    } while (param_3 < *piVar2);
    *(uint *)(param_1 + 0x30) = uVar3 + 1;
    if (*(uint *)(param_1 + 0x34) == uVar3) {
      FUN_147ad4a36(plVar1,uVar3);
    }
    lVar6 = (ulonglong)uVar4 * 0x18;
    memmove((void *)(*plVar1 + lVar6 + 0x18),(void *)(*plVar1 + lVar6),
            (ulonglong)(uVar3 - uVar4) * 0x18);
    lVar6 = lVar6 + *plVar1;
  }
  FUN_147ad49d8(lVar6,param_2,param_3,param_4);
  return;
}



// FUNCTION 147ad0238 FUN_147ad0238 body=336 status=ok
// SIG undefined FUN_147ad0238(void)

void FUN_147ad0238(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar11 [16];
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    uVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x28 - 0x28;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar2;
    uVar10 = SUB164(auVar13 * ZEXT816(0xcccccccccccccccd),8);
    uVar12 = (undefined4)(uVar2 / 0x140000000);
    auVar11._0_8_ = CONCAT44(uVar12,uVar10);
    auVar11._8_4_ = uVar10;
    auVar11._12_4_ = uVar12;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40);
    uVar4 = 0;
    auVar13 = pmovsxbq(in_XMM1,0x100);
    do {
      if ((bool)(~((longlong)(auVar11._0_8_ >> 5 | 0x8000000000000000) <
                  (longlong)(uVar4 ^ 0x8000000000000000)) & 1)) {
        puVar6[-5] = 0;
      }
      auVar14._8_4_ = (int)uVar4;
      auVar14._0_8_ = uVar4;
      auVar14._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar14._8_8_ | auVar13._8_8_) ^ 0x8000000000000000) <=
          (longlong)(auVar11._8_8_ >> 5 | 0x8000000000000000)) {
        *puVar6 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar6 = puVar6 + 10;
    } while ((uVar2 / 0x28 + 2 & 0xfffffffffffffffe) != uVar4);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x30) * 0x18;
    do {
      if ((longlong)*(int *)(lVar9 + 0x10) != 0) {
        lVar7 = *(longlong *)(lVar9 + 8);
        lVar8 = (longlong)*(int *)(lVar9 + 0x10) * 0x10 + lVar7;
        do {
          lVar5 = FUN_141066b56(param_1,lVar7);
          lVar3 = *(longlong *)(lVar7 + 8);
          if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar3);
          }
          *(longlong *)(lVar5 + 0x18) = lVar3;
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != lVar8);
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar1);
  }
  return;
}



// FUNCTION 147ad0388 FUN_147ad0388 body=127 status=ok
// SIG undefined FUN_147ad0388(void)

void FUN_147ad0388(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x30) < 1) {
    return;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    piVar4 = (int *)*param_2;
    piVar2 = piVar4 + *(int *)(param_2 + 1);
    do {
      if (0 < (longlong)*(int *)(param_1 + 0x30)) {
        piVar5 = (int *)*puVar1;
        lVar3 = 0;
        do {
          if (*piVar5 == *piVar4) {
            FUN_147ad497e(puVar1);
            FUN_147ad48d0(puVar1);
            break;
          }
          lVar3 = lVar3 + 1;
          piVar5 = piVar5 + 6;
        } while (*(int *)(param_1 + 0x30) != lVar3);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
  }
  FUN_147ad0238(param_1);
  return;
}



// FUNCTION 147ad0408 FUN_147ad0408 body=38 status=ok
// SIG undefined FUN_147ad0408(void)

undefined8 FUN_147ad0408(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"GbxCameraTickFunction",1);
  return param_2;
}



// FUNCTION 147ad042e FUN_147ad042e body=32 status=ok
// SIG undefined FUN_147ad042e(void)

undefined8 FUN_147ad042e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCameraTickFunction");
  return param_2;
}



// FUNCTION 147ad044e FUN_147ad044e body=173 status=ok
// SIG undefined FUN_147ad044e(void)

bool FUN_147ad044e(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar3 = (ulonglong)DAT_14c892b58;
  if (uVar2 == uVar3) {
    local_30 = 0;
    (**(code **)(*param_3 + 0x160))(param_3);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 == uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad04fc FUN_147ad04fc body=174 status=ok
// SIG undefined FUN_147ad04fc(void)

longlong * FUN_147ad04fc(longlong *param_1,undefined8 param_2)

{
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_14a909080;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  FUN_147ad4b00(param_1 + 0x1e,param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 0x16;
  (**(code **)(*param_1 + 0xc0))(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,1);
  FUN_1449db362(param_2);
  return param_1;
}



// FUNCTION 147ad05aa FUN_147ad05aa body=427 status=ok
// SIG undefined FUN_147ad05aa(void)

longlong * FUN_147ad05aa(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if ((int)param_1[0x13] != *(int *)((longlong)param_1 + 0xc4)) {
      uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      plVar5 = param_1 + 0x19;
      if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x1a];
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      (ulonglong)((int)param_1[0x1b] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar6 != -1) {
        lVar2 = param_1[0x12];
        do {
          if (*(ulonglong *)(lVar2 + (longlong)iVar6 * 0x10) == uVar1) goto LAB_147ad0732;
          iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar2 + 8);
        } while (iVar6 != -1);
      }
    }
    FUN_1457b12ce(param_1 + 0x12,&local_30,param_2,0);
    uVar1 = *param_2;
    if ((uVar1 != 0) && ((*(uint *)(uVar1 + 8) >> 0x1e & 1) == 0)) {
      if (((char)param_1[0x20] == '\x01') && (lVar2 = *(longlong *)(uVar1 + 0x10), lVar2 != 0)) {
        lVar3 = FUN_14043ab18();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_30 = lVar2;
          (**(code **)(*param_1 + 0x150))(param_1);
        }
      }
      iVar6 = (int)param_1[0x1d];
      *(uint *)(param_1 + 0x1d) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xec) < iVar6 + 1U) {
        FUN_1447f76d2(param_1 + 0x1c,iVar6);
      }
      *(ulonglong *)(param_1[0x1c] + (longlong)iVar6 * 8) = *param_2;
      (**(code **)(*param_1 + 0x260))(param_1,param_2);
      *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + -1;
      FUN_1404559b4(param_1 + 0x1c);
    }
  }
LAB_147ad0732:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad077a FUN_147ad077a body=22 status=ok
// SIG undefined FUN_147ad077a(void)

undefined8 FUN_147ad077a(undefined8 param_1,undefined8 param_2)

{
  FUN_14020207e();
  return param_2;
}



// FUNCTION 147ad079e FUN_147ad079e body=22 status=ok
// SIG undefined FUN_147ad079e(void)

undefined8 FUN_147ad079e(undefined8 param_1,undefined8 param_2)

{
  FUN_14020207e();
  return param_2;
}



// FUNCTION 147ad07be FUN_147ad07be body=45 status=ok
// SIG undefined FUN_147ad07be(void)

longlong FUN_147ad07be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1415214c2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad0830 FUN_147ad0830 body=45 status=ok
// SIG undefined FUN_147ad0830(void)

longlong FUN_147ad0830(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1415214c2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad085e FUN_147ad085e body=38 status=ok
// SIG undefined FUN_147ad085e(void)

undefined8 FUN_147ad085e(undefined8 param_1,int param_2)

{
  FUN_147ad0bda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad0884 FUN_147ad0884 body=38 status=ok
// SIG undefined FUN_147ad0884(void)

undefined8 FUN_147ad0884(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad08aa FUN_147ad08aa body=38 status=ok
// SIG undefined FUN_147ad08aa(void)

undefined8 FUN_147ad08aa(undefined8 param_1,int param_2)

{
  FUN_147ad0c4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad08d0 FUN_147ad08d0 body=52 status=ok
// SIG undefined FUN_147ad08d0(void)

void FUN_147ad08d0(longlong *param_1)

{
  FUN_147ad0904();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ad0904 FUN_147ad0904 body=313 status=ok
// SIG undefined FUN_147ad0904(void)

void FUN_147ad0904(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad0a3e FUN_147ad0a3e body=29 status=ok
// SIG undefined FUN_147ad0a3e(void)

undefined8 FUN_147ad0a3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad0a5c FUN_147ad0a5c body=109 status=ok
// SIG undefined FUN_147ad0a5c(void)

void FUN_147ad0a5c(longlong param_1,int param_2)

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
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 147ad0aca FUN_147ad0aca body=143 status=ok
// SIG undefined FUN_147ad0aca(void)

void FUN_147ad0aca(longlong param_1,int param_2)

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



// FUNCTION 147ad0b5a FUN_147ad0b5a body=128 status=ok
// SIG undefined FUN_147ad0b5a(void)

void FUN_147ad0b5a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cadbd38;
  if (DAT_14cadbd6c != 0) {
    *(int *)(DAT_14cadbd38 + (longlong)DAT_14cadbd68 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cadbd6c) {
    iVar4 = DAT_14cadbd68;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cadbd6c = DAT_14cadbd6c + 1;
  puVar3 = &DAT_14cadbd48;
  if (DAT_14cadbd58 != (undefined *)0x0) {
    puVar3 = DAT_14cadbd58;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cadbd68 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147ad0bda FUN_147ad0bda body=99 status=ok
// SIG undefined FUN_147ad0bda(void)

void FUN_147ad0bda(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a907ef0;
  FUN_1449db362(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x12);
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 147ad0c4c FUN_147ad0c4c body=99 status=ok
// SIG undefined FUN_147ad0c4c(void)

void FUN_147ad0c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a909080;
  FUN_1449db362(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(param_1 + 0x12);
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 147ad0cbe FUN_147ad0cbe body=38 status=ok
// SIG undefined FUN_147ad0cbe(void)

undefined8 FUN_147ad0cbe(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad0ce4 FUN_147ad0ce4 body=31 status=ok
// SIG undefined FUN_147ad0ce4(void)

undefined8 FUN_147ad0ce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad0d18 FUN_147ad0d18 body=93 status=ok
// SIG undefined FUN_147ad0d18(void)

void FUN_147ad0d18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9098d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147ad0d76 FUN_147ad0d76 body=93 status=ok
// SIG undefined FUN_147ad0d76(void)

void FUN_147ad0d76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9098d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147ad0dd4 FUN_147ad0dd4 body=126 status=ok
// SIG undefined FUN_147ad0dd4(void)

void FUN_147ad0dd4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9098d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad0e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad0e5c FUN_147ad0e5c body=38 status=ok
// SIG undefined FUN_147ad0e5c(void)

undefined8 FUN_147ad0e5c(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad0e82 FUN_147ad0e82 body=114 status=ok
// SIG undefined FUN_147ad0e82(void)

void FUN_147ad0e82(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147ad0ef4 FUN_147ad0ef4 body=48 status=ok
// SIG undefined FUN_147ad0ef4(void)

void FUN_147ad0ef4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147ad0f24 FUN_147ad0f24 body=62 status=ok
// SIG undefined FUN_147ad0f24(void)

void FUN_147ad0f24(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ad0f62(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147ad0f62 FUN_147ad0f62 body=93 status=ok
// SIG undefined FUN_147ad0f62(void)

ulonglong FUN_147ad0f62(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147ad0fc0 FUN_147ad0fc0 body=29 status=ok
// SIG undefined FUN_147ad0fc0(void)

undefined8 FUN_147ad0fc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad0ff8 FUN_147ad0ff8 body=29 status=ok
// SIG undefined FUN_147ad0ff8(void)

bool FUN_147ad0ff8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad1016 FUN_147ad1016 body=26 status=ok
// SIG undefined FUN_147ad1016(void)

bool FUN_147ad1016(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ad1030 FUN_147ad1030 body=24 status=ok
// SIG undefined FUN_147ad1030(void)

bool FUN_147ad1030(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ad1048 FUN_147ad1048 body=93 status=ok
// SIG undefined FUN_147ad1048(void)

void FUN_147ad1048(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad10a6 FUN_147ad10a6 body=93 status=ok
// SIG undefined FUN_147ad10a6(void)

void FUN_147ad10a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad1104 FUN_147ad1104 body=126 status=ok
// SIG undefined FUN_147ad1104(void)

void FUN_147ad1104(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909960;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad1173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad1182 FUN_147ad1182 body=35 status=ok
// SIG undefined FUN_147ad1182(void)

void FUN_147ad1182(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad11a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147ad11a6 FUN_147ad11a6 body=142 status=ok
// SIG undefined FUN_147ad11a6(void)

bool FUN_147ad11a6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad1236 FUN_147ad1236 body=181 status=ok
// SIG undefined FUN_147ad1236(void)

longlong FUN_147ad1236(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147ad12ce;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147ad12ec(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147ad12ce:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147ad12ec FUN_147ad12ec body=277 status=ok
// SIG undefined FUN_147ad12ec(void)

undefined4 * FUN_147ad12ec(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147ad1402(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147ad14e8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147ad15fc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad1402 FUN_147ad1402 body=229 status=ok
// SIG undefined FUN_147ad1402(void)

int * FUN_147ad1402(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147ad14e8 FUN_147ad14e8 body=161 status=ok
// SIG undefined FUN_147ad14e8(void)

undefined8 FUN_147ad14e8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147ad158a(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ad158a FUN_147ad158a body=114 status=ok
// SIG undefined FUN_147ad158a(void)

void FUN_147ad158a(longlong *param_1,int param_2)

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



// FUNCTION 147ad15fc FUN_147ad15fc body=477 status=ok
// SIG undefined FUN_147ad15fc(void)

void FUN_147ad15fc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad17da FUN_147ad17da body=186 status=ok
// SIG undefined FUN_147ad17da(void)

undefined8 FUN_147ad17da(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_147ad1876;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_147ad1876;
    }
  }
  uVar4 = 0;
LAB_147ad1876:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad1896 FUN_147ad1896 body=312 status=ok
// SIG undefined FUN_147ad1896(void)

undefined4 * FUN_147ad1896(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ad19d0(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147ad1ab6(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147ad1ba4(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad19d0 FUN_147ad19d0 body=229 status=ok
// SIG undefined FUN_147ad19d0(void)

int * FUN_147ad19d0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147ad1ab6 FUN_147ad1ab6 body=124 status=ok
// SIG undefined FUN_147ad1ab6(void)

undefined8 FUN_147ad1ab6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147ad1b32(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ad1b32 FUN_147ad1b32 body=114 status=ok
// SIG undefined FUN_147ad1b32(void)

void FUN_147ad1b32(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147ad1ba4 FUN_147ad1ba4 body=477 status=ok
// SIG undefined FUN_147ad1ba4(void)

void FUN_147ad1ba4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad1d82 FUN_147ad1d82 body=47 status=ok
// SIG undefined FUN_147ad1d82(void)

void FUN_147ad1d82(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 147ad1db2 FUN_147ad1db2 body=29 status=ok
// SIG undefined FUN_147ad1db2(void)

undefined8 FUN_147ad1db2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad1dcf FUN_147ad1dcf body=82 status=ok
// SIG undefined FUN_147ad1dcf(void)

void FUN_147ad1dcf(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147ad1e22 FUN_147ad1e22 body=31 status=ok
// SIG undefined FUN_147ad1e22(void)

undefined8 FUN_147ad1e22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad1e5c FUN_147ad1e5c body=29 status=ok
// SIG undefined FUN_147ad1e5c(void)

bool FUN_147ad1e5c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad1e7a FUN_147ad1e7a body=26 status=ok
// SIG undefined FUN_147ad1e7a(void)

bool FUN_147ad1e7a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ad1e94 FUN_147ad1e94 body=24 status=ok
// SIG undefined FUN_147ad1e94(void)

bool FUN_147ad1e94(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ad1eac FUN_147ad1eac body=93 status=ok
// SIG undefined FUN_147ad1eac(void)

void FUN_147ad1eac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad1f0a FUN_147ad1f0a body=93 status=ok
// SIG undefined FUN_147ad1f0a(void)

void FUN_147ad1f0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad1f68 FUN_147ad1f68 body=126 status=ok
// SIG undefined FUN_147ad1f68(void)

void FUN_147ad1f68(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149eae4d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909a30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad1fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad1fe6 FUN_147ad1fe6 body=48 status=ok
// SIG undefined FUN_147ad1fe6(void)

void FUN_147ad1fe6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad2013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147ad2016 FUN_147ad2016 body=29 status=ok
// SIG undefined FUN_147ad2016(void)

undefined8 FUN_147ad2016(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad204e FUN_147ad204e body=29 status=ok
// SIG undefined FUN_147ad204e(void)

bool FUN_147ad204e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad206c FUN_147ad206c body=26 status=ok
// SIG undefined FUN_147ad206c(void)

bool FUN_147ad206c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ad2086 FUN_147ad2086 body=24 status=ok
// SIG undefined FUN_147ad2086(void)

bool FUN_147ad2086(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ad20aa FUN_147ad20aa body=93 status=ok
// SIG undefined FUN_147ad20aa(void)

void FUN_147ad20aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a909b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad2108 FUN_147ad2108 body=93 status=ok
// SIG undefined FUN_147ad2108(void)

void FUN_147ad2108(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a909b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad2166 FUN_147ad2166 body=126 status=ok
// SIG undefined FUN_147ad2166(void)

void FUN_147ad2166(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a909b10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909aa0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad21d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad21e4 FUN_147ad21e4 body=56 status=ok
// SIG undefined FUN_147ad21e4(void)

void FUN_147ad21e4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad2219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147ad221c FUN_147ad221c body=169 status=ok
// SIG undefined FUN_147ad221c(void)

bool FUN_147ad221c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad22ce FUN_147ad22ce body=29 status=ok
// SIG undefined FUN_147ad22ce(void)

bool FUN_147ad22ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad22ec FUN_147ad22ec body=26 status=ok
// SIG undefined FUN_147ad22ec(void)

bool FUN_147ad22ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ad2306 FUN_147ad2306 body=93 status=ok
// SIG undefined FUN_147ad2306(void)

void FUN_147ad2306(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad2364 FUN_147ad2364 body=126 status=ok
// SIG undefined FUN_147ad2364(void)

void FUN_147ad2364(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909b80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad23d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad23e2 FUN_147ad23e2 body=142 status=ok
// SIG undefined FUN_147ad23e2(void)

bool FUN_147ad23e2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad2472 FUN_147ad2472 body=31 status=ok
// SIG undefined FUN_147ad2472(void)

undefined8 FUN_147ad2472(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad2498 FUN_147ad2498 body=29 status=ok
// SIG undefined FUN_147ad2498(void)

bool FUN_147ad2498(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad24b6 FUN_147ad24b6 body=26 status=ok
// SIG undefined FUN_147ad24b6(void)

bool FUN_147ad24b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ad24d0 FUN_147ad24d0 body=93 status=ok
// SIG undefined FUN_147ad24d0(void)

void FUN_147ad24d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ad252e FUN_147ad252e body=126 status=ok
// SIG undefined FUN_147ad252e(void)

void FUN_147ad252e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909bf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad259d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad25ac FUN_147ad25ac body=142 status=ok
// SIG undefined FUN_147ad25ac(void)

bool FUN_147ad25ac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad263c FUN_147ad263c body=64 status=ok
// SIG undefined FUN_147ad263c(void)

void FUN_147ad263c(void)

{
  if (DAT_14cadb574 != 0) {
    DAT_14cadb574 = 0;
    FUN_1446f8d3c(&DAT_14cadb568,DAT_14cadb570,0,8,4);
  }
  return;
}



// FUNCTION 147ad267c FUN_147ad267c body=132 status=ok
// SIG undefined FUN_147ad267c(void)

void FUN_147ad267c(longlong param_1,int param_2)

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



// FUNCTION 147ad2702 FUN_147ad2702 body=88 status=ok
// SIG undefined FUN_147ad2702(void)

void FUN_147ad2702(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147ad275a FUN_147ad275a body=31 status=ok
// SIG undefined FUN_147ad275a(void)

undefined8 FUN_147ad275a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad2794 FUN_147ad2794 body=101 status=ok
// SIG undefined FUN_147ad2794(void)

void FUN_147ad2794(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a909e20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909db0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad27fa FUN_147ad27fa body=101 status=ok
// SIG undefined FUN_147ad27fa(void)

void FUN_147ad27fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a909e20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909db0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad2860 FUN_147ad2860 body=134 status=ok
// SIG undefined FUN_147ad2860(void)

void FUN_147ad2860(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a909e20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909db0;
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
                    /* WARNING: Could not recover jumptable at 0x000147ad28d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad28e6 FUN_147ad28e6 body=62 status=ok
// SIG undefined FUN_147ad28e6(void)

void FUN_147ad28e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad2921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147ad2924 FUN_147ad2924 body=177 status=ok
// SIG undefined FUN_147ad2924(void)

bool FUN_147ad2924(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad29d8 FUN_147ad29d8 body=31 status=ok
// SIG undefined FUN_147ad29d8(void)

undefined8 FUN_147ad29d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad2a12 FUN_147ad2a12 body=101 status=ok
// SIG undefined FUN_147ad2a12(void)

void FUN_147ad2a12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a909f00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad2a78 FUN_147ad2a78 body=101 status=ok
// SIG undefined FUN_147ad2a78(void)

void FUN_147ad2a78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a909f00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad2ade FUN_147ad2ade body=134 status=ok
// SIG undefined FUN_147ad2ade(void)

void FUN_147ad2ade(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a909f00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909e90;
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
                    /* WARNING: Could not recover jumptable at 0x000147ad2b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad2b64 FUN_147ad2b64 body=44 status=ok
// SIG undefined FUN_147ad2b64(void)

void FUN_147ad2b64(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad2b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147ad2b90 FUN_147ad2b90 body=156 status=ok
// SIG undefined FUN_147ad2b90(void)

bool FUN_147ad2b90(longlong param_1,undefined8 param_2)

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
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad2c30 FUN_147ad2c30 body=31 status=ok
// SIG undefined FUN_147ad2c30(void)

undefined8 FUN_147ad2c30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad2c6a FUN_147ad2c6a body=101 status=ok
// SIG undefined FUN_147ad2c6a(void)

void FUN_147ad2c6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad2cd0 FUN_147ad2cd0 body=101 status=ok
// SIG undefined FUN_147ad2cd0(void)

void FUN_147ad2cd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909f70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad2d36 FUN_147ad2d36 body=134 status=ok
// SIG undefined FUN_147ad2d36(void)

void FUN_147ad2d36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a909f70;
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
                    /* WARNING: Could not recover jumptable at 0x000147ad2dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ad2dbc FUN_147ad2dbc body=42 status=ok
// SIG undefined FUN_147ad2dbc(void)

void FUN_147ad2dbc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ad2de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147ad2de6 FUN_147ad2de6 body=154 status=ok
// SIG undefined FUN_147ad2de6(void)

bool FUN_147ad2de6(longlong param_1,undefined4 param_2)

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
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad2e82 FUN_147ad2e82 body=81 status=ok
// SIG undefined FUN_147ad2e82(void)

void FUN_147ad2e82(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_147ad2ed4(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147ad2ed4 FUN_147ad2ed4 body=90 status=ok
// SIG undefined FUN_147ad2ed4(void)

void FUN_147ad2ed4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147ad2f2e();
  return;
}



// FUNCTION 147ad2f2e FUN_147ad2f2e body=78 status=ok
// SIG undefined FUN_147ad2f2e(void)

void FUN_147ad2f2e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_147ad2f7c(param_1,param_2);
  return;
}



// FUNCTION 147ad2f7c FUN_147ad2f7c body=114 status=ok
// SIG undefined FUN_147ad2f7c(void)

void FUN_147ad2f7c(longlong *param_1,int param_2)

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



// FUNCTION 147ad2fee FUN_147ad2fee body=303 status=ok
// SIG undefined FUN_147ad2fee(void)

undefined4 * FUN_147ad2fee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147ad311e(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_147ad3204(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147ad32c2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ad311e FUN_147ad311e body=229 status=ok
// SIG undefined FUN_147ad311e(void)

int * FUN_147ad311e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147ad3204 FUN_147ad3204 body=189 status=ok
// SIG undefined FUN_147ad3204(void)

undefined8 FUN_147ad3204(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_147ad2f7c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ad32c2 FUN_147ad32c2 body=422 status=ok
// SIG undefined FUN_147ad32c2(void)

void FUN_147ad32c2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ad346a FUN_147ad346a body=114 status=ok
// SIG undefined FUN_147ad346a(void)

void FUN_147ad346a(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147ad34dc FUN_147ad34dc body=205 status=ok
// SIG undefined FUN_147ad34dc(void)

void FUN_147ad34dc(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cadb8e8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cadb8f4 = DAT_14cadb8f4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cadb8e0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cadb8e0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cadb8f4 = DAT_14cadb8f4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147ad357c;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cadb8f4 = DAT_14cadb8f4 + -1;
LAB_147ad357c:
  FUN_14474d06a(&DAT_14cadb8e0,0);
  return;
}



// FUNCTION 147ad35aa FUN_147ad35aa body=31 status=ok
// SIG undefined FUN_147ad35aa(void)

undefined8 FUN_147ad35aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ad35e4 FUN_147ad35e4 body=29 status=ok
// SIG undefined FUN_147ad35e4(void)

bool FUN_147ad35e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ad3602 FUN_147ad3602 body=101 status=ok
// SIG undefined FUN_147ad3602(void)

void FUN_147ad3602(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad3668 FUN_147ad3668 body=101 status=ok
// SIG undefined FUN_147ad3668(void)

void FUN_147ad3668(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90c0e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a90a050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ad36ce FUN_147ad36ce body=134 status=ok
// SIG undefined FUN_147ad36ce(void)

void FUN_147ad36ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90c0e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a90a050;
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
                    /* WARNING: Could not recover jumptable at 0x000147ad3745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


