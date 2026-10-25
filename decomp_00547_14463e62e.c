// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14463e62e FUN_14463e62e body=29 status=ok
// SIG undefined FUN_14463e62e(void)

undefined8 FUN_14463e62e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463e64c FUN_14463e64c body=48 status=ok
// SIG undefined FUN_14463e64c(void)

void FUN_14463e64c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14463e67c FUN_14463e67c body=518 status=ok
// SIG undefined FUN_14463e67c(void)

void FUN_14463e67c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_149806dfa(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463e884 FUN_14463e884 body=123 status=ok
// SIG undefined FUN_14463e884(void)

void FUN_14463e884(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145e7ad8c();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14cc27d90,uVar1);
  return;
}



// FUNCTION 14463e900 FUN_14463e900 body=481 status=ok
// SIG undefined FUN_14463e900(void)

void FUN_14463e900(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_149807096(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463eae2 FUN_14463eae2 body=232 status=ok
// SIG undefined FUN_14463eae2(void)

void FUN_14463eae2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14463ebca FUN_14463ebca body=81 status=ok
// SIG undefined FUN_14463ebca(void)

void FUN_14463ebca(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149807139(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14463ec1c FUN_14463ec1c body=518 status=ok
// SIG undefined FUN_14463ec1c(void)

void FUN_14463ec1c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_149807544(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463ee24 FUN_14463ee24 body=123 status=ok
// SIG undefined FUN_14463ee24(void)

void FUN_14463ee24(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145ee455a();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14cc28038,uVar1);
  return;
}



// FUNCTION 14463eea0 FUN_14463eea0 body=481 status=ok
// SIG undefined FUN_14463eea0(void)

void FUN_14463eea0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1498077e0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463f082 FUN_14463f082 body=232 status=ok
// SIG undefined FUN_14463f082(void)

void FUN_14463f082(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14463f16a FUN_14463f16a body=81 status=ok
// SIG undefined FUN_14463f16a(void)

void FUN_14463f16a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149807883(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14463f1bc FUN_14463f1bc body=481 status=ok
// SIG undefined FUN_14463f1bc(void)

void FUN_14463f1bc(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_149807b98(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463f39e FUN_14463f39e body=232 status=ok
// SIG undefined FUN_14463f39e(void)

void FUN_14463f39e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14463f486 FUN_14463f486 body=81 status=ok
// SIG undefined FUN_14463f486(void)

void FUN_14463f486(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149807c3b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14463f4d8 FUN_14463f4d8 body=518 status=ok
// SIG undefined FUN_14463f4d8(void)

void FUN_14463f4d8(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  ulonglong **_Src_00;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong *local_c0;
  longlong **local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = (ulonglong **)local_b8;
    if ((ulonglong **)local_b8 == (ulonglong **)0x0) {
      _Src_00 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b0,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((ulonglong **)local_b8 != (ulonglong **)0x0) {
    FUN_1400020a8();
  }
  local_b8 = (longlong **)(param_1 + 0x238);
  local_b0 = param_1 + 0x248;
  local_f0 = *(undefined1 *)(param_1 + 0x250);
  local_f8 = param_1 + 0x1f8;
  local_d8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_d4 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_d0 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_cc = *(undefined4 *)(param_1 + 0x1c4);
  local_e8 = (longlong **)&local_c0;
  local_c0 = param_2;
  FUN_149808048(param_2,&local_d8,param_1 + 0x1c8,param_1 + 0x1e0);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463f6e0 FUN_14463f6e0 body=123 status=ok
// SIG undefined FUN_14463f6e0(void)

void FUN_14463f6e0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(undefined8 *)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_1[1])[1] + 8);
    lVar6 = (longlong)*(int *)(lVar5 + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar2,lVar6,1);
    }
  }
  uVar3 = *param_1;
  puVar4 = (undefined8 *)param_1[1];
  FUN_145ee4a42();
  FUN_1449cc26b(uVar3,lVar5,*puVar4,&DAT_14cc28258,uVar1);
  return;
}



// FUNCTION 14463f75c FUN_14463f75c body=481 status=ok
// SIG undefined FUN_14463f75c(void)

void FUN_14463f75c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1498082e4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463f93e FUN_14463f93e body=232 status=ok
// SIG undefined FUN_14463f93e(void)

void FUN_14463f93e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14463fa26 FUN_14463fa26 body=81 status=ok
// SIG undefined FUN_14463fa26(void)

void FUN_14463fa26(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149808387(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14463fa77 FUN_14463fa77 body=922 status=ok
// SIG undefined FUN_14463fa77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463fa77(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14cc2744c);
  if (cVar1 == '\0') {
    _DAT_14cc2744c = 0;
    uRam000000014cc27454 = 0;
  }
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_38 = (undefined *)0x800000014be88f00;
  local_24 = 0x13;
  uVar2 = FUN_14577453c();
  local_30._0_5_ = CONCAT14(1,uVar2);
  FUN_14675eb68(&local_38);
  local_38 = (undefined *)((ulonglong)local_38 & 0xffffffff00000000);
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14cc27460,L"r.FidelityFX.FSR.Enabled",&local_38,
                L"Enable FidelityFX Super Resolution for Primary Upscale");
  atexit(FUN_14463b6c7);
  local_38 = (undefined *)((ulonglong)local_38 & 0xffffffff00000000);
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14cc27478,L"r.FidelityFX.FSR.Post.ExperimentalChromaticAberration",&local_38,
                L"[Experimental] Applies ChromaticAberration after FidelityFX Super Resolution instead of during tonemapping for sharper images: It may produce slightly different fringes than the original.Note: widgets will show fringes if used in editor."
               );
  atexit(FUN_14463bbfa);
  local_30 = FUN_145e7ab1e;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc275a8,&local_38);
  local_30 = FUN_145f822fa;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc276d0,&local_38);
  local_48 = 0x20;
  FUN_141471170(&DAT_14cc276f0,L"r.FidelityFX.FSR.UseFP16",&DAT_14c7679e4,
                L"Enables half precision shaders for extra performance (if the device supports) without perceivable visual difference."
               );
  atexit(FUN_14463c77d);
  local_48 = 0x20;
  FUN_141471170(&DAT_14cc27700,L"r.FidelityFX.FSR.Debug.ForcePS",&DAT_14cc27710,
                L"Run FSR and RCAS in VS-PS");
  atexit(FUN_14463c7c2);
  local_48 = 0x20;
  FUN_141471170(&DAT_14cc27718,L"r.FidelityFX.FSR.EnableFP16OnNvDX11",&DAT_14cc27728,
                L"Enables FP16 path for DX11/NVidia GPUs, requires \'r.FidelityFX.FSR.UseFP16 1\'. Default=0 as image corruption is seen on DX11/NVidia with FP16"
               );
  atexit(FUN_14463c807);
  local_30 = FUN_145dbef72;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc27848,&local_38);
  local_30 = FUN_145ee42ec;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc27970,&local_38);
  local_38 = (undefined *)CONCAT44(local_38._4_4_,1);
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14cc27988,L"r.FidelityFX.FSR.Post.FilmGrain",&local_38,
                L"Applies FilmGrain after FidelityFX Super Resolution on the upscaled image instead of during tonemapping (in low-res) to avoid upscaled film grain effect for a more realistic look"
               );
  atexit(FUN_14463d531);
  local_48 = 0x20;
  FUN_1415c789c(&DAT_14cc279a0,L"r.FidelityFX.FSR.HDR.PQDitherAmount",&DAT_14c7679e8,
                L"[HDR-Only] DitherAmount to apply for PQ->Gamma2 conversion to eliminate color banding, when the output device is ST2084/PQ."
               );
  atexit(FUN_14463d576);
  local_30 = FUN_145e6a83e;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc27ac8,&local_38);
  local_48 = 0x20;
  FUN_141471170(&DAT_14cc27ad8,L"r.FidelityFX.FSR.RCAS.Enabled",&DAT_14c7679ec,
                L"FidelityFX FSR/RCAS : Robust Contrast Adaptive Sharpening Filter. Requires r.FidelityFX.FSR.PrimaryUpscale 1 or r.FidelityFX.FSR.SecondaryUpscale 1"
               );
  atexit(FUN_14463d9ce);
  local_48 = 0x20;
  FUN_1415c789c(&DAT_14cc27ae8,L"r.FidelityFX.FSR.RCAS.Sharpness",&DAT_14c7679f0,
                L"FidelityFX RCAS Sharpness in stops (0: sharpest, 1: 1/2 as sharp, 2: 1/4 as sharp, 3: 1/8 as sharp, etc.). A value of 0.2 would correspond to a ~0.87 sharpness in [0-1] linear scale"
               );
  atexit(FUN_14463da13);
  local_48 = 0x20;
  FUN_141471170(&DAT_14cc27af8,L"r.FidelityFX.FSR.RCAS.Denoise",&DAT_14cc27b08,
                L"FidelityFX RCAS Denoise support for grainy input such as dithered images or input with custom film grain effects applied prior to FSR. 1:On, 0:Off"
               );
  atexit(FUN_14463da58);
  local_30 = FUN_145db58cc;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc27c28,&local_38);
  local_30 = FUN_145ee47d4;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc27d50,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463fe17 FUN_14463fe17 body=166 status=ok
// SIG undefined FUN_14463fe17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463fe17(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cc28430);
  if (cVar1 == '\0') {
    _DAT_14cc28430 = 0;
    uRam000000014cc28438 = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_28 = -0x7ffffffeb4bf5e2e;
  local_14 = 3;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14675f4c0(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463fec0 FUN_14463fec0 body=102 status=ok
// SIG undefined FUN_14463fec0(void)

void FUN_14463fec0(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149eca1ac;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14675f652(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463ff7e FUN_14463ff7e body=254 status=ok
// SIG undefined FUN_14463ff7e(void)

undefined8 * FUN_14463ff7e(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x90);
  uStack_24 = *(undefined4 *)(param_4 + 8);
  local_30 = CONCAT44(uStack_24,local_28);
  local_38 = param_1;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_149808cc8();
  }
  else {
    FUN_149808afa(*(longlong *)(param_1 + 0x10),&local_48,&local_28,&local_38);
  }
  uVar3 = FUN_14001cc68(0x110,0x10);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 == (longlong *)0x0) {
    FUN_149808e82(uVar3,&local_58);
    *param_2 = uVar3;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    FUN_149808e82(uVar3,&local_58);
    *param_2 = uVar3;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464007e FUN_14464007e body=1428 status=ok
// SIG undefined FUN_14464007e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14464007e(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  LSTATUS LVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  DWORD dwIndex;
  bool bVar16;
  undefined1 auStackY_1108 [32];
  int local_10c8;
  int local_10c4;
  longlong local_10c0;
  longlong local_10b8;
  int local_10b0;
  longlong local_10a8;
  int local_10a0;
  undefined2 *local_1098;
  int local_1090;
  DWORD local_1084;
  HKEY local_1080;
  LPCWSTR local_1078;
  int local_1070;
  WCHAR local_1068;
  undefined2 local_1066;
  undefined4 local_1064;
  int local_1060;
  undefined2 local_105c;
  undefined2 local_105a;
  undefined2 local_1058;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x144640094;
  local_60 = DAT_14c707940 ^ (ulonglong)auStackY_1108;
  if (((*(byte *)(param_1 + 0x18) & 1) != 0) || (*(longlong *)(param_1 + 0x78) == 0))
  goto LAB_1446400c3;
  FUN_14980981a(*(longlong *)(param_1 + 0x78) + 0x18,&local_1078,*(undefined4 *)(param_1 + 0xc));
  if (local_1070 < 2) {
    if (DAT_14cc28514 == '\0') {
      DAT_14cc28514 = '\x01';
    }
  }
  else {
    LVar3 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,local_1078,0,1,&local_1080);
    if (LVar3 == 0) {
      lVar11 = 0;
      local_10c8 = 0;
      local_10c4 = 0;
      local_10c0 = 0;
      dwIndex = 0;
LAB_144640197:
      local_1084 = 0x800;
      LVar3 = RegEnumValueW(local_1080,dwIndex,&local_1068,&local_1084,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,(LPDWORD)0x0);
      if (LVar3 == 0) {
        FUN_140056680(&local_1098,&local_1068);
        FUN_140056680(&local_10a8);
        puVar5 = &DAT_149dfb77a;
        if (local_1090 != 0) {
          puVar5 = local_1098;
        }
        lVar7 = 0x1d;
        lVar9 = 0;
        while( true ) {
          uVar13 = *(ushort *)((longlong)puVar5 + lVar9);
          uVar8 = (ulonglong)uVar13;
          uVar14 = *(ushort *)((longlong)L"SWD\\MMDEVAPI\\{0.0.0.00000000}" + lVar9);
          if (uVar13 != uVar14) break;
          if (uVar13 == 0) goto LAB_14464032c;
LAB_144640228:
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) goto LAB_14464032c;
          lVar9 = lVar9 + 2;
        }
        if ((uVar14 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar15 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar15]) goto LAB_144640228;
        }
        if (uVar13 != uVar14) {
          lVar7 = 0x1d;
          lVar9 = 0;
          goto LAB_14464026f;
        }
LAB_14464032c:
        uVar6 = local_10a0 - 1;
        if (local_10a0 == 0) {
          uVar6 = 0;
        }
        uVar12 = local_1090 - 1;
        if (local_1090 == 0) {
          uVar12 = 0;
        }
        if ((int)uVar12 <= (int)uVar6) {
          uVar6 = uVar12;
        }
        uVar8 = (ulonglong)uVar6;
        if ((int)uVar6 < 1) {
          uVar8 = 0;
        }
        FUN_14006620a(&local_10b8,puVar5 + uVar8,uVar12 - (int)uVar8);
        lVar2 = local_10b8;
        local_10c8 = local_10b0;
        if (lVar11 != 0) {
          FUN_1400020a8(lVar11);
          lVar2 = local_10b8;
          local_10c8 = local_10b0;
        }
        goto LAB_144640371;
      }
      goto LAB_1446403e5;
    }
  }
LAB_1446405e1:
  if (local_1078 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
LAB_1446400c3:
  if ((local_60 ^ (ulonglong)auStackY_1108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14464026f:
  uVar13 = *(ushort *)((longlong)puVar5 + lVar9);
  uVar8 = (ulonglong)uVar13;
  uVar14 = *(ushort *)((longlong)L"SWD\\MMDEVAPI\\{0.0.1.00000000}" + lVar9);
  lVar2 = lVar11;
  if (uVar13 == uVar14) {
    if ((uVar13 == 0) || (lVar7 == 1)) goto LAB_1446402d3;
LAB_144640290:
    lVar7 = lVar7 + -1;
    lVar9 = lVar9 + 2;
    goto LAB_14464026f;
  }
  if ((uVar14 | uVar13) < 0x80) {
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar15 = (ulonglong)uVar14;
    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar15]) {
      if (lVar7 != 1) goto LAB_144640290;
      goto LAB_1446402d3;
    }
  }
  if (uVar13 != uVar14) goto LAB_144640371;
LAB_1446402d3:
  uVar6 = local_10a0 - 1;
  if (local_10a0 == 0) {
    uVar6 = 0;
  }
  uVar12 = local_1090 - 1;
  if (local_1090 == 0) {
    uVar12 = 0;
  }
  if ((int)uVar12 <= (int)uVar6) {
    uVar6 = uVar12;
  }
  uVar8 = (ulonglong)uVar6;
  if ((int)uVar6 < 1) {
    uVar8 = 0;
  }
  FUN_14006620a(&local_10b8,puVar5 + uVar8,uVar12 - (int)uVar8);
  if (local_10c0 != 0) {
    FUN_1400020a8();
  }
  local_10c0 = local_10b8;
  local_10c4 = local_10b0;
LAB_144640371:
  lVar11 = lVar2;
  if (local_10a8 != 0) {
    FUN_1400020a8();
  }
  if (local_1098 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  bVar16 = 0xfe < dwIndex;
  dwIndex = dwIndex + 1;
  if (bVar16 || 1 < local_10c8 && 1 < local_10c4) goto LAB_1446403e5;
  goto LAB_144640197;
LAB_1446403e5:
  RegCloseKey(local_1080);
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar4 = Ordinal_1((undefined8 *)(param_1 + 0x38),0,1);
  if (iVar4 < 0) {
LAB_1446405bd:
    FUN_1498098da(plVar1);
  }
  else {
    iVar4 = (uint)(param_2 == 1) * 2 + 2;
    *(int *)(param_1 + 0x30) = iVar4;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
                      (*(longlong **)(param_1 + 0x38),param_1 + 0x40,iVar4,48000);
    if ((iVar4 < 0) || (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(), iVar4 < 0))
    goto LAB_1446405bd;
    local_1058 = 0;
    uVar6 = *(uint *)(param_1 + 0x30);
    local_1066 = (undefined2)uVar6;
    local_1064 = 48000;
    local_1068 = L'\x03';
    local_1060 = (uVar6 & 0xffff) * 0x2ee00;
    local_105c = (undefined2)(uVar6 << 2);
    local_105a = 0x20;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                      (*(longlong **)(param_1 + 0x38),param_1 + 0x48,&local_1068,2);
    if (iVar4 < 0) goto LAB_1446405bd;
    iVar10 = *(int *)(param_1 + 0x30) * 0x100;
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 < iVar10) {
      *(int *)(param_1 + 0x28) = iVar10;
      if ((uint)(*(int *)(param_1 + 0x2c) - iVar4) < (uint)(iVar10 - iVar4)) {
        FUN_14475e4ac(plVar1);
      }
      memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(iVar10 - iVar4) << 2);
    }
    else {
      if (*(int *)(param_1 + 0x30) << 8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if (iVar10 < iVar4) {
        *(int *)(param_1 + 0x28) = iVar10;
        FUN_1401fef06(plVar1);
      }
    }
    iVar4 = *(int *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x60) = param_1;
    lVar7 = FUN_14001cc68(0x20,0x10);
    iVar4 = iVar4 * 0x400 + 1;
    FUN_14190d214(lVar7,iVar4);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x1c) = 0;
    *(longlong *)(param_1 + 0x68) = lVar7;
    lVar7 = FUN_14001cc68(0x20,0x10);
    FUN_14190d214(lVar7,iVar4);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x1c) = 0;
    *(longlong *)(param_1 + 0x70) = lVar7;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (local_10c0 != 0) {
    FUN_1400020a8();
  }
  if (lVar11 != 0) {
    FUN_1400020a8(lVar11);
  }
  goto LAB_1446405e1;
}



// FUNCTION 144640614 FUN_144640614 body=246 status=ok
// SIG undefined FUN_144640614(void)

void FUN_144640614(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar4 = 0;
  do {
    puVar3 = *(uint **)(param_1 + 0x68);
    uVar1 = puVar3[6];
    uVar6 = 0;
    uVar7 = 0;
    if (uVar1 != puVar3[7]) {
      uVar7 = *(undefined4 *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & uVar1) * 4);
      LOCK();
      puVar3[6] = uVar1 + 1 & *puVar3;
      UNLOCK();
    }
    *(undefined4 *)(lVar2 + lVar4 * 8) = uVar7;
    puVar3 = *(uint **)(param_1 + 0x68);
    uVar1 = puVar3[6];
    if (uVar1 != puVar3[7]) {
      uVar6 = *(undefined4 *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & uVar1) * 4);
      uVar5 = uVar1 + 1;
      LOCK();
      uVar1 = puVar3[6];
      puVar3[6] = uVar5 & *puVar3;
      UNLOCK();
    }
    *(undefined4 *)(lVar2 + 4 + lVar4 * 8) = uVar6;
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 != 0x100);
  local_24 = param_1 + 0x60;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_48 = (ulonglong)(uint)(*(int *)(param_1 + 0x30) << 10) << 0x20;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0xa8))
            (*(longlong **)(param_1 + 0x48),&local_48,0,uVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464070c FUN_14464070c body=367 status=ok
// SIG undefined FUN_14464070c(void)

void FUN_14464070c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar4 = 0;
  do {
    puVar3 = *(uint **)(param_1 + 0x68);
    uVar1 = puVar3[6];
    uVar6 = 0;
    uVar7 = 0;
    if (uVar1 != puVar3[7]) {
      uVar7 = *(undefined4 *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & uVar1) * 4);
      LOCK();
      puVar3[6] = uVar1 + 1 & *puVar3;
      UNLOCK();
    }
    *(undefined4 *)(lVar2 + lVar4) = uVar7;
    puVar3 = *(uint **)(param_1 + 0x68);
    uVar1 = puVar3[6];
    if (uVar1 != puVar3[7]) {
      uVar6 = *(undefined4 *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & uVar1) * 4);
      LOCK();
      puVar3[6] = uVar1 + 1 & *puVar3;
      UNLOCK();
    }
    *(undefined4 *)(lVar2 + 4 + lVar4) = uVar6;
    puVar3 = *(uint **)(param_1 + 0x70);
    uVar1 = puVar3[6];
    uVar6 = 0;
    uVar7 = 0;
    if (uVar1 != puVar3[7]) {
      uVar7 = *(undefined4 *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & uVar1) * 4);
      LOCK();
      puVar3[6] = uVar1 + 1 & *puVar3;
      UNLOCK();
    }
    *(undefined4 *)(lVar2 + 8 + lVar4) = uVar7;
    puVar3 = *(uint **)(param_1 + 0x70);
    uVar1 = puVar3[6];
    if (uVar1 != puVar3[7]) {
      uVar6 = *(undefined4 *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & uVar1) * 4);
      uVar5 = uVar1 + 1;
      LOCK();
      uVar1 = puVar3[6];
      puVar3[6] = uVar5 & *puVar3;
      UNLOCK();
    }
    *(undefined4 *)(lVar2 + 0xc + lVar4) = uVar6;
    lVar4 = lVar4 + 0x10;
  } while ((int)lVar4 != 0x1000);
  local_24 = param_1 + 0x60;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_48 = (ulonglong)(uint)(*(int *)(param_1 + 0x30) << 10) << 0x20;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0xa8))
            (*(longlong **)(param_1 + 0x48),&local_48,0,uVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464087c FUN_14464087c body=254 status=ok
// SIG undefined FUN_14464087c(void)

undefined8 * FUN_14464087c(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x90);
  uStack_24 = *(undefined4 *)(param_4 + 8);
  local_30 = CONCAT44(uStack_24,local_28);
  local_38 = param_1;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_14980a29e();
  }
  else {
    FUN_14980a0d0(*(longlong *)(param_1 + 0x10),&local_48,&local_28,&local_38);
  }
  uVar3 = FUN_14001cc68(0x110,0x10);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 == (longlong *)0x0) {
    FUN_14980a458(uVar3,&local_58);
    *param_2 = uVar3;
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    FUN_14980a458(uVar3,&local_58);
    *param_2 = uVar3;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464097e FUN_14464097e body=172 status=ok
// SIG undefined FUN_14464097e(void)

void FUN_14464097e(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = 0;
  while ((*(char *)(param_1 + 0x340 + lVar3) != '\x01' ||
         (*(int *)(param_1 + 0x328 + lVar3) != param_2))) {
    lVar3 = lVar3 + 0x278;
    if (lVar3 == 0x9e0) {
      return;
    }
  }
  uVar1 = param_3[1];
  param_1 = param_1 + lVar3;
  *(undefined8 *)(param_1 + 0x36c) = *param_3;
  *(undefined8 *)(param_1 + 0x374) = uVar1;
  fVar5 = *(float *)(param_1 + 0x36c);
  if (*(float *)(param_1 + 0x36c) <= *(float *)(param_1 + 0x374)) {
    fVar5 = *(float *)(param_1 + 0x374);
  }
  fVar6 = *(float *)(param_1 + 0x370);
  if (*(float *)(param_1 + 0x370) <= *(float *)(param_1 + 0x378)) {
    fVar6 = *(float *)(param_1 + 0x378);
  }
  uVar2 = (undefined1)(int)(fVar5 * 255.0);
  if ((int)(fVar5 * 255.0) < 1) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x37c) = uVar2;
  iVar4 = 0;
  if (0 < (int)(fVar6 * 255.0)) {
    iVar4 = (int)(fVar6 * 255.0);
  }
  *(char *)(param_1 + 0x37d) = (char)iVar4;
  FUN_144d708a0(*(undefined4 *)(param_1 + 0x330),(undefined1 *)(param_1 + 0x37c));
  *(float *)(param_1 + 0x380) = fVar5;
  *(float *)(param_1 + 900) = fVar6;
  return;
}



// FUNCTION 144640a4e FUN_144640a4e body=4624 status=ok
// SIG undefined FUN_144640a4e(void)

void FUN_144640a4e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  double dVar6;
  LARGE_INTEGER LVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  char *pcVar16;
  longlong *plVar17;
  char cVar18;
  byte bVar19;
  byte bVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  uint *puVar24;
  undefined8 *puVar25;
  int *piVar26;
  bool bVar27;
  int *piVar28;
  uint *puVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  undefined4 local_1b0;
  char local_1a2 [2];
  longlong *local_1a0;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 *local_188;
  longlong local_180;
  longlong *local_178;
  undefined8 *local_170;
  int *local_168;
  uint *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  uint local_d4;
  int local_d0;
  char local_ca [2];
  LARGE_INTEGER local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  char acStack_a8 [40];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  QueryPerformanceCounter(&local_c8);
  dVar6 = (double)local_c8.QuadPart * DAT_14c83f420;
  local_198 = *param_2;
  iVar32 = param_2[1];
  piVar26 = *(int **)(param_2 + 2);
  puVar25 = *(undefined8 **)(param_2 + 4);
  local_178 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc28538) && (FUN_144b3d300(&DAT_14cc28538), DAT_14cc28538 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc28530 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))
                   (DAT_14c8407a8,L"sony.NumMissedMotionUpdatesToCombine",1);
    _Init_thread_footer(&DAT_14cc28538);
    param_1 = local_178;
  }
  iVar11 = (**(code **)(*DAT_14cc28530 + 0xb0))();
  iVar13 = 0x40;
  if (iVar11 < 0x40) {
    iVar13 = iVar11;
  }
  if ((int)param_1[2] == iVar13) {
LAB_144640b65:
    if ((iVar11 < 1) || ((char)param_2[10] != '\0')) goto LAB_144640b71;
    iVar13 = FUN_144d707d0(iVar32,param_1[1],iVar13);
    if (iVar13 < 1) {
      iVar11 = iVar13;
      if (iVar13 == 0) goto LAB_144640b71;
    }
    else {
      uVar23 = (ulonglong)(iVar13 - 1);
      puVar22 = (undefined8 *)(uVar23 * 0x78 + param_1[1]);
      piVar28 = piVar26;
      for (lVar15 = 0xf; lVar15 != 0; lVar15 = lVar15 + -1) {
        *(undefined8 *)piVar28 = *puVar22;
        puVar22 = puVar22 + 1;
        piVar28 = piVar28 + 2;
      }
      iVar11 = 0;
      if (iVar13 != 1) {
        fVar34 = (float)piVar26[10];
        fVar35 = (float)piVar26[0xb];
        fVar38 = (float)piVar26[0xc];
        fVar37 = (float)piVar26[7];
        fVar36 = (float)piVar26[8];
        fVar33 = (float)piVar26[9];
        lVar15 = 0x30;
        do {
          lVar14 = param_1[1];
          fVar34 = fVar34 + *(float *)(lVar14 + -8 + lVar15);
          piVar26[10] = (int)fVar34;
          fVar35 = fVar35 + *(float *)(lVar14 + -4 + lVar15);
          piVar26[0xb] = (int)fVar35;
          fVar38 = fVar38 + *(float *)(lVar14 + lVar15);
          piVar26[0xc] = (int)fVar38;
          fVar37 = fVar37 + *(float *)(lVar14 + -0x14 + lVar15);
          piVar26[7] = (int)fVar37;
          fVar36 = fVar36 + *(float *)(lVar14 + -0x10 + lVar15);
          piVar26[8] = (int)fVar36;
          fVar33 = fVar33 + *(float *)(lVar14 + -0xc + lVar15);
          piVar26[9] = (int)fVar33;
          lVar15 = lVar15 + 0x78;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
        fVar39 = 1.0 / (float)iVar13;
        piVar26[10] = (int)(fVar34 * fVar39);
        piVar26[0xb] = (int)(fVar35 * fVar39);
        piVar26[0xc] = (int)(fVar38 * fVar39);
        piVar26[7] = (int)(fVar37 * fVar39);
        piVar26[8] = (int)(fVar36 * fVar39);
        piVar26[9] = (int)(fVar39 * fVar33);
        iVar11 = 0;
      }
    }
  }
  else {
    if (((int)param_1[2] != 0) && (param_1[1] != 0)) {
      FUN_1400020a8();
    }
    *(int *)(param_1 + 2) = iVar13;
    if (iVar11 != 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (longlong)iVar13;
      lVar14 = SUB168(auVar5 * ZEXT816(0x78),0);
      lVar15 = -1;
      if (SUB168(auVar5 * ZEXT816(0x78),8) == 0) {
        lVar15 = lVar14 + (ulonglong)(lVar14 == 0);
      }
      lVar15 = FUN_14001cc68(lVar15,0x10);
      param_1[1] = lVar15;
      goto LAB_144640b65;
    }
LAB_144640b71:
    iVar11 = FUN_144d70730(iVar32,piVar26);
  }
  if (*piVar26 < 0) goto LAB_144641b17;
  lVar15 = (longlong)local_198;
  local_1a0 = param_1 + lVar15 * 0x4f + 0x20;
  cVar10 = (char)param_1[lVar15 * 0x4f + 0x65];
  cVar18 = cVar10;
  if ((char)param_2[10] == '\0') {
    if (iVar11 == 0) {
      cVar18 = (char)piVar26[0x13];
    }
    else {
      cVar18 = '\0';
    }
    *(char *)(param_1 + lVar15 * 0x4f + 0x65) = cVar18;
  }
  if ((cVar18 != '\0') || (bVar20 = 0, cVar10 != '\0')) {
    local_d0 = local_198;
    local_d4 = 0xffffffff;
    local_180 = lVar15;
    if (DAT_14c9670a0 == (longlong *)0x0) {
      plVar17 = (longlong *)FUN_14001cc68(0x78,0x10);
      FUN_14593912e(plVar17,1,1);
      DAT_14c9670a0 = plVar17;
    }
    plVar17 = DAT_14c9670a0;
    (**(code **)(*DAT_14c9670a0 + 0xa0))(DAT_14c9670a0,(int)local_1a0[0x42],&local_d0,&local_d4);
    if (cVar10 == '\0') {
      if ((char)local_1a0[0x45] != '\0') {
        iVar13 = FUN_144d70b10(iVar32,local_1a0 + 0x47);
        if (iVar13 == 0) {
          *(undefined1 *)((longlong)local_1a0 + 0x229) = 0;
          *(uint *)((longlong)local_1a0 + 0x22c) = (uint)*(ushort *)((longlong)local_1a0 + 0x23c);
          *(uint *)(local_1a0 + 0x46) = (uint)*(ushort *)((longlong)local_1a0 + 0x23e);
          *(undefined4 *)((longlong)local_1a0 + 0x234) = 0;
          iVar13 = FUN_144d72580(iVar32);
          lVar15 = local_180;
          *(bool *)((longlong)param_1 + local_180 + 0xb10) = iVar13 == 1;
          *(bool *)((longlong)param_1 + local_180 + 0xafc) = iVar13 == 1;
          uVar12 = (**(code **)(*param_1 + 0x28))(param_1,local_198);
          *(undefined4 *)((longlong)param_1 + lVar15 * 4 + 0xae0) = uVar12;
        }
        (**(code **)(*plVar17 + 0x78))(plVar17,local_d4,local_d0,3);
      }
    }
    else if ((char)local_1a0[0x45] == '\0') {
      (**(code **)(*plVar17 + 0x78))(plVar17,local_d4,local_d0,2);
      *(undefined4 *)((longlong)param_1 + (longlong)*param_2 * 4 + 0xae0) = 2;
    }
    LVar7 = local_c8;
    lVar15 = local_180;
    if ((*(char *)((longlong)param_1 + local_180 + 0xafc) == '\x01') &&
       (*(char *)((longlong)param_1 + local_180 + 0xb10) == '\x01')) {
      fVar34 = *(float *)(param_1 + 0x15e);
      if (1.0 <= fVar34) {
        fVar34 = 1.0;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar35 = *(float *)((longlong)param_1 + 0xaf4);
      if (1.0 <= fVar35) {
        fVar35 = 1.0;
      }
      if (fVar35 <= 0.0) {
        fVar35 = 0.0;
      }
      local_c8.s.LowPart._1_1_ = (char)(int)(fVar35 * 127.0);
      local_c8.s.LowPart._0_1_ = (char)(int)(fVar34 * 127.0);
      local_c8.s.LowPart._2_1_ = 0;
      fVar34 = *(float *)(param_1 + 0x15f);
      if (1.0 <= fVar34) {
        fVar34 = 1.0;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      local_c8.s.HighPart = LVar7.s.HighPart;
      local_c8.s.LowPart._3_1_ = (char)(int)(fVar34 * 127.0);
      FUN_144d72770(iVar32);
      *(undefined1 *)((longlong)param_1 + lVar15 + 0xafc) = 0;
    }
    if (*(float *)(local_1a0 + 0x4e) <= 0.0) {
      bVar20 = *(byte *)(local_1a0 + 0x48);
    }
    else {
      bVar20 = (byte)(int)(*(float *)(local_1a0 + 0x4e) * 128.0);
    }
    bVar19 = *(byte *)(piVar26 + 1);
    bVar9 = *(byte *)((longlong)piVar26 + 5);
    if ((float)(int)(bVar19 - 0x80) * (float)(int)(bVar19 - 0x80) +
        (float)(int)(bVar9 - 0x80) * (float)(int)(bVar9 - 0x80) <=
        ((float)bVar20 + 0.5) * ((float)bVar20 + 0.5)) {
      *(undefined2 *)(piVar26 + 1) = 0x8080;
      bVar9 = 0x80;
      bVar19 = 0x80;
    }
    if (*(float *)((longlong)local_1a0 + 0x274) <= 0.0) {
      bVar20 = *(byte *)((longlong)local_1a0 + 0x241);
    }
    else {
      bVar20 = (byte)(int)(*(float *)((longlong)local_1a0 + 0x274) * 128.0);
    }
    fVar34 = (float)(int)(*(byte *)((longlong)piVar26 + 6) - 0x80);
    fVar35 = (float)(int)(*(byte *)((longlong)piVar26 + 7) - 0x80);
    if (fVar34 * fVar34 + fVar35 * fVar35 <= ((float)bVar20 + 0.5) * ((float)bVar20 + 0.5)) {
      *(undefined2 *)((longlong)piVar26 + 6) = 0x8080;
    }
    if ((!SBORROW1('\0',bVar19)) || (!SBORROW1('\0',*(char *)((longlong)puVar25 + 4)))) {
      local_1b8 = (double *)CONCAT44(local_1b8._4_4_,(float)bVar19 * 0.007843138 + -1.0);
      (**(code **)(*(longlong *)*param_3 + 0x98))
                ((longlong *)*param_3,DAT_14c9678f8,local_d0,local_d4);
      bVar9 = *(byte *)((longlong)piVar26 + 5);
    }
    if ((!SBORROW1('\0',bVar9)) || (!SBORROW1('\0',*(char *)((longlong)puVar25 + 5)))) {
      local_1b8 = (double *)CONCAT44(local_1b8._4_4_,(float)(byte)~bVar9 * 0.007843138 + -1.0);
      (**(code **)(*(longlong *)*param_3 + 0x98))
                ((longlong *)*param_3,DAT_14c967900,local_d0,local_d4);
    }
    if ((*(byte *)((longlong)piVar26 + 6) != 0x80) ||
       (!SBORROW1('\0',*(char *)((longlong)puVar25 + 6)))) {
      local_1b8 = (double *)
                  CONCAT44(local_1b8._4_4_,
                           (float)*(byte *)((longlong)piVar26 + 6) * 0.007843138 + -1.0);
      (**(code **)(*(longlong *)*param_3 + 0x98))
                ((longlong *)*param_3,DAT_14c967908,local_d0,local_d4);
    }
    if ((*(byte *)((longlong)piVar26 + 7) != 0x80) ||
       (!SBORROW1('\0',*(char *)((longlong)puVar25 + 7)))) {
      local_1b8 = (double *)
                  CONCAT44(local_1b8._4_4_,
                           (float)(byte)~*(byte *)((longlong)piVar26 + 7) * 0.007843138 + -1.0);
      (**(code **)(*(longlong *)*param_3 + 0x98))
                ((longlong *)*param_3,DAT_14c967910,local_d0,local_d4);
    }
    if (*(byte *)(piVar26 + 2) != *(byte *)(puVar25 + 1)) {
      local_1b8 = (double *)CONCAT44(local_1b8._4_4_,(float)*(byte *)(piVar26 + 2) / 255.0);
      (**(code **)(*(longlong *)*param_3 + 0x98))
                ((longlong *)*param_3,DAT_14c967918,local_d0,local_d4);
    }
    if (*(byte *)((longlong)piVar26 + 9) != *(byte *)((longlong)puVar25 + 9)) {
      local_1b8 = (double *)
                  CONCAT44(local_1b8._4_4_,(float)*(byte *)((longlong)piVar26 + 9) / 255.0);
      (**(code **)(*(longlong *)*param_3 + 0x98))
                ((longlong *)*param_3,DAT_14c967920,local_d0,local_d4);
    }
    if ((*(char *)((longlong)param_1 + 0xb2a) == '\x01') && ((char)piVar26[0xd] != '\0')) {
      uVar2 = *(ushort *)((longlong)piVar26 + 0x3e);
      if (*(uint *)(local_1a0 + 0x40) == (uint)*(byte *)(piVar26 + 0x10)) {
        puVar21 = (uint *)(local_1a0 + 0x3f);
LAB_1446411f6:
        if ((puVar21[1] != (uint)uVar2) && (*puVar21 != (uint)*(ushort *)(piVar26 + 0xf)))
        goto LAB_1446411ff;
      }
      else {
        if (*(uint *)((longlong)local_1a0 + 0x20c) == (uint)*(byte *)(piVar26 + 0x10)) {
          puVar21 = (uint *)((longlong)local_1a0 + 0x204);
          goto LAB_1446411f6;
        }
LAB_1446411ff:
        local_1b8 = (double *)
                    CONCAT44(local_1b8._4_4_,
                             (float)*(ushort *)(piVar26 + 0xf) /
                             (float)*(int *)((longlong)local_1a0 + 0x22c));
        (**(code **)(*(longlong *)*param_3 + 0x98))
                  ((longlong *)*param_3,DAT_14c967828,local_d0,local_d4);
      }
      local_1b8 = (double *)CONCAT44(local_1b8._4_4_,(float)uVar2 / (float)(int)local_1a0[0x46]);
      (**(code **)(*(longlong *)*param_3 + 0x98))
                ((longlong *)*param_3,DAT_14c967830,local_d0,local_d4);
    }
    plVar17 = local_1a0;
    acStack_a8[0x15] = (byte)~*(byte *)(piVar26 + 1) >> 7;
    acStack_a8[0x16] = 0x80 < *(byte *)(piVar26 + 1);
    acStack_a8[0x17] = (byte)~*(byte *)((longlong)piVar26 + 5) >> 7;
    acStack_a8[0x18] = 0x80 < *(byte *)((longlong)piVar26 + 5);
    acStack_a8[0x19] = (byte)~*(byte *)((longlong)piVar26 + 6) >> 7;
    acStack_a8[0x1a] = 0x80 < *(byte *)((longlong)piVar26 + 6);
    dVar6 = dVar6 + 16777216.0;
    acStack_a8[0x1b] = (byte)~*(byte *)((longlong)piVar26 + 7) >> 7;
    acStack_a8[0x1c] = 0x80 < *(byte *)((longlong)piVar26 + 7);
    uVar23 = 0;
    do {
      cVar10 = (**(code **)(*param_1 + 8))(param_1,uVar23 & 0xffffffff,plVar17,(char)param_2[10]);
      acStack_a8[uVar23] = cVar10;
      uVar23 = uVar23 + 1;
    } while (uVar23 != 0x15);
    lVar15 = 0;
    do {
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 8 + 0x14);
      cVar10 = acStack_a8[lVar15];
      if (cVar10 == *(char *)(*(longlong *)(param_2 + 6) + lVar15)) {
        if ((cVar10 != '\0') && (*(double *)(*(longlong *)(param_2 + 8) + lVar15 * 8) <= dVar6)) {
          local_1b8 = (double *)CONCAT71(local_1b8._1_7_,1);
          (**(code **)(*(longlong *)*param_3 + 0xa8))((longlong *)*param_3,uVar3,local_d0,local_d4);
          fVar34 = *(float *)((longlong)param_1 + 0xb34);
LAB_1446413b6:
          *(double *)(*(longlong *)(param_2 + 8) + lVar15 * 8) = (double)fVar34 + dVar6;
        }
      }
      else {
        lVar14 = *(longlong *)*param_3;
        if (cVar10 != '\0') {
          local_1b8 = (double *)((ulonglong)local_1b8._1_7_ << 8);
          (**(code **)(lVar14 + 0xa8))();
          fVar34 = *(float *)(param_1 + 0x166);
          goto LAB_1446413b6;
        }
        local_1b8 = (double *)((ulonglong)local_1b8._1_7_ << 8);
        (**(code **)(lVar14 + 0xb8))((longlong *)*param_3,uVar3,local_d0,local_d4);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x1d);
    local_1a2[1] = 0;
    local_18c = 0;
    local_1a2[0] = '\0';
    local_ca[0] = '\0';
    local_ca[1] = '\0';
    bVar20 = *(byte *)(piVar26 + 0xd);
    local_190 = 0;
    plVar17 = local_1a0;
    local_194 = iVar32;
    local_188 = param_3;
    local_170 = puVar25;
    local_168 = param_2;
    if (bVar20 != 0) {
      puVar21 = (uint *)(local_1a0 + 0x3f);
      local_160 = (uint *)((longlong)local_1a0 + 0x204);
      uVar23 = 0;
      local_190 = 0;
      local_18c = 0;
      do {
        iVar32 = 0;
        pcVar16 = local_1a2 + 1;
        puVar24 = puVar21;
        if (*(uint *)(plVar17 + 0x40) == (uint)*(byte *)(piVar26 + uVar23 * 2 + 0x10)) {
LAB_144641491:
          if (*(char *)((longlong)param_1 + 0xb29) == '\x01') {
            local_c0 = (double)*(ushort *)((longlong)piVar26 + uVar23 * 8 + 0x3e);
            local_c8 = (LARGE_INTEGER)(double)*(ushort *)(piVar26 + uVar23 * 2 + 0xf);
            local_1b8 = (double *)CONCAT44(local_1b8._4_4_,(int)plVar17[0x42]);
            (**(code **)(*(longlong *)*local_188 + 0xe8))
                      ((longlong *)*local_188,&local_c8,0x3f800000,iVar32);
            plVar17 = local_1a0;
            param_1 = local_178;
          }
          if (iVar32 == 0 && local_198 == 0) {
            local_18c = (uint)*(ushort *)(piVar26 + uVar23 * 2 + 0xf) - *puVar24;
            local_190 = (uint)*(ushort *)((longlong)piVar26 + uVar23 * 8 + 0x3e) - puVar24[1];
          }
          *puVar24 = (uint)*(ushort *)(piVar26 + uVar23 * 2 + 0xf);
          puVar24[1] = (uint)*(ushort *)((longlong)piVar26 + uVar23 * 8 + 0x3e);
          *pcVar16 = '\x01';
          local_ca[uVar23] = '\x01';
          bVar20 = *(byte *)(piVar26 + 0xd);
        }
        else {
          iVar32 = 1;
          pcVar16 = local_1a2;
          puVar24 = local_160;
          if (*(uint *)((longlong)plVar17 + 0x20c) == (uint)*(byte *)(piVar26 + uVar23 * 2 + 0x10))
          goto LAB_144641491;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < bVar20);
    }
    puVar25 = local_188;
    puVar21 = (uint *)(plVar17 + 0x3f);
    puVar30 = (undefined1 *)0x0;
    pcVar16 = local_1a2 + 1;
    bVar8 = true;
    do {
      bVar27 = bVar8;
      if ((*pcVar16 == '\0') &&
         (puVar24 = puVar21 + (longlong)puVar30 * 3, puVar24[2] != 0xffffffff)) {
        local_c8 = (LARGE_INTEGER)(double)(int)*puVar24;
        local_c0 = (double)(int)puVar24[1];
        if (*(char *)((longlong)param_1 + 0xb29) == '\x01') {
          (**(code **)(*(longlong *)*puVar25 + 0xf8))
                    ((longlong *)*puVar25,&local_c8,puVar30,(int)plVar17[0x42]);
          plVar17 = local_1a0;
        }
        puVar24[2] = 0xffffffff;
      }
      puVar30 = &DAT_00000001;
      pcVar16 = local_1a2;
      bVar8 = false;
    } while (bVar27);
    uVar23 = (ulonglong)*(byte *)(piVar26 + 0xd);
    iVar32 = local_194;
    if (*(byte *)(piVar26 + 0xd) != 0) {
      puVar24 = (uint *)((longlong)plVar17 + 0x204);
      uVar31 = 0;
      do {
        if ((local_ca[uVar31] == '\0') &&
           ((pcVar16 = local_1a2 + 1, puVar29 = puVar21, (int)plVar17[0x40] == -1 ||
            (pcVar16 = local_1a2, puVar29 = puVar24, *(int *)((longlong)plVar17 + 0x20c) == -1)))) {
          if (*(char *)((longlong)param_1 + 0xb29) == '\x01') {
            local_c0 = (double)*(ushort *)((longlong)piVar26 + uVar31 * 8 + 0x3e);
            local_1b0 = (undefined4)plVar17[0x42];
            local_c8 = (LARGE_INTEGER)(double)*(ushort *)(piVar26 + uVar31 * 2 + 0xf);
            local_f8 = 0;
            uStack_f0 = (longlong *)0x0;
            local_1b8 = (double *)CONCAT44(local_1b8._4_4_,(int)uVar31);
            (**(code **)(*(longlong *)*local_188 + 0xd8))
                      ((longlong *)*local_188,&local_f8,&local_c8,0x3f800000);
            plVar4 = uStack_f0;
            plVar17 = local_1a0;
            iVar32 = local_194;
            if (uStack_f0 != (longlong *)0x0) {
              LOCK();
              plVar1 = uStack_f0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*uStack_f0)(uStack_f0);
                LOCK();
                piVar28 = (int *)((longlong)plVar4 + 0xc);
                *piVar28 = *piVar28 + -1;
                UNLOCK();
                plVar17 = local_1a0;
                iVar32 = local_194;
                if (*piVar28 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                  plVar17 = local_1a0;
                  iVar32 = local_194;
                }
              }
            }
          }
          puVar29[2] = (uint)*(byte *)(piVar26 + uVar31 * 2 + 0x10);
          *puVar29 = (uint)*(ushort *)(piVar26 + uVar31 * 2 + 0xf);
          puVar29[1] = (uint)*(ushort *)((longlong)piVar26 + uVar31 * 8 + 0x3e);
          *pcVar16 = '\x01';
          uVar23 = (ulonglong)*(byte *)(piVar26 + 0xd);
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 < uVar23);
    }
    if ((((*(byte *)((longlong)param_1 + 0xb2b) & local_198 == 0) != 0) &&
        (plVar4 = (longlong *)param_1[0x163], plVar4 != (longlong *)0x0)) &&
       ((int)plVar17[0x40] != -1)) {
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_c8);
      local_c8.s = (_struct_19)((double)local_18c + local_c8.s);
      local_c0 = (double)local_190 + local_c0;
      iVar13 = 0x44c;
      if ((int)local_c0 < 0x44c) {
        iVar13 = (int)local_c0;
      }
      if (iVar13 < -0x13) {
        iVar13 = -0x14;
      }
      iVar11 = 0x794;
      if ((int)(double)local_c8 < 0x794) {
        iVar11 = (int)(double)local_c8;
      }
      if (iVar11 < -0x13) {
        iVar11 = -0x14;
      }
      (**(code **)(*(longlong *)param_1[0x163] + 0x28))((longlong *)param_1[0x163],iVar11,iVar13);
    }
    piVar28 = local_168;
    puVar22 = local_170;
    puVar25 = local_188;
    if (*(char *)((longlong)param_1 + 0xb2c) == '\x01') {
      local_b0 = (double)(float)piVar26[6];
      local_b8 = (double)(float)piVar26[5];
      local_c0 = (double)(float)piVar26[4];
      local_c8 = (LARGE_INTEGER)(double)(float)piVar26[3];
      FUN_1448052ee(&local_c8,&local_f8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc28548) && (FUN_144b3d300(&DAT_14cc28548), DAT_14cc28548 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cc28540 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"sony.UnifyMotionSpace",1);
        _Init_thread_footer(&DAT_14cc28548);
        param_1 = local_178;
        puVar25 = local_188;
        puVar22 = local_170;
        piVar28 = local_168;
        iVar32 = local_194;
      }
      iVar13 = (**(code **)(*DAT_14cc28540 + 0xb0))();
      local_1b0 = (undefined4)local_1a0[0x42];
      if (iVar13 == 1) {
        fVar38 = (float)piVar26[8];
        fVar35 = (float)piVar26[7];
        fVar34 = -(float)piVar26[9];
        local_130 = (double)-(float)piVar26[0xb];
        local_138 = (double)-(float)piVar26[10];
        local_140 = (double)(float)piVar26[0xc];
      }
      else if (iVar13 == 0) {
        fVar38 = (float)piVar26[9];
        fVar35 = (float)piVar26[8];
        fVar34 = (float)piVar26[7];
        local_130 = (double)(float)piVar26[0xc] * 57.2957763671875;
        local_138 = (double)(float)piVar26[0xb] * 57.2957763671875;
        local_140 = (double)(float)piVar26[10] * 57.2957763671875;
      }
      else {
        fVar38 = (float)piVar26[8];
        fVar35 = -(float)piVar26[9];
        fVar34 = (float)piVar26[7];
        local_130 = (double)(float)piVar26[0xb];
        local_138 = (double)-(float)piVar26[0xc];
        local_140 = (double)(float)piVar26[10];
      }
      local_100 = (double)fVar38;
      local_108 = (double)fVar35;
      local_110 = (double)fVar34;
      local_118 = 0;
      uStack_120 = 0;
      local_128 = 0;
      local_1b8 = &local_110;
      local_158 = (undefined4)local_f8;
      uStack_154 = local_f8._4_4_;
      uStack_150 = (undefined4)uStack_f0;
      uStack_14c = uStack_f0._4_4_;
      local_148 = local_e8;
      (**(code **)(*(longlong *)*puVar25 + 0x130))();
    }
    for (lVar15 = 0xf; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar22 = *(undefined8 *)piVar26;
      piVar26 = piVar26 + 2;
      puVar22 = puVar22 + 1;
    }
    lVar15 = 0;
    do {
      *(char *)(*(longlong *)(piVar28 + 6) + lVar15) = acStack_a8[lVar15];
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x1d);
    bVar20 = *(byte *)(local_1a0 + 0x45);
    lVar15 = local_180;
  }
  if ((bVar20 & 1) != 0) {
    iVar13 = FUN_144d72580(iVar32);
    if (iVar13 == 1) {
      iVar13 = FUN_144d72880(iVar32,&local_c8);
      if ((iVar13 == 0) &&
         (*(DWORD *)((longlong)param_1 + lVar15 * 4 + 0xb00) != local_c8.s.LowPart)) {
        *(DWORD *)((longlong)param_1 + lVar15 * 4 + 0xb00) = local_c8.s.LowPart;
        FUN_144d726b0(iVar32,(local_c8.s.LowPart == 0) * '\x03');
      }
      goto LAB_144641b17;
    }
    bVar20 = *(byte *)(local_1a0 + 0x45);
  }
  if (((bVar20 & 1) == 0) && (*(char *)((longlong)param_1 + lVar15 + 0xb10) == '\x01')) {
    *(undefined4 *)((longlong)param_1 + lVar15 * 4 + 0xb00) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + lVar15 + 0xb10) = 0;
  }
LAB_144641b17:
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144641c60 FUN_144641c60 body=178 status=ok
// SIG undefined FUN_144641c60(void)

void FUN_144641c60(longlong param_1,float param_2,uint param_3,float param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 < 2) {
    pfVar4 = (float *)(param_1 + 0x36c);
    lVar2 = 4;
    do {
      if ((*(char *)(pfVar4 + -0x11) == '\x01') && (pfVar4[-0x17] == param_2)) {
        pfVar4[(ulonglong)(param_3 & 1) - 6] = param_4;
        fVar5 = pfVar4[-6];
        if (pfVar4[-6] <= pfVar4[-4]) {
          fVar5 = pfVar4[-4];
        }
        fVar6 = pfVar4[-5];
        if (pfVar4[-5] <= pfVar4[-3]) {
          fVar6 = pfVar4[-3];
        }
        uVar3 = 0;
        uVar1 = (char)(int)(fVar5 * 255.0);
        if ((int)(fVar5 * 255.0) < 1) {
          uVar1 = uVar3;
        }
        *(undefined1 *)(pfVar4 + -2) = uVar1;
        if (0 < (int)(fVar6 * 255.0)) {
          uVar3 = (undefined1)(int)(fVar6 * 255.0);
        }
        *(undefined1 *)((longlong)pfVar4 + -7) = uVar3;
        FUN_144d708a0(pfVar4[-0x15],pfVar4 + -2);
        pfVar4[-1] = fVar5;
        *pfVar4 = fVar6;
        return;
      }
      pfVar4 = pfVar4 + 0x9e;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144641d12 FUN_144641d12 body=347 status=ok
// SIG undefined FUN_144641d12(void)

void FUN_144641d12(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/WinDualShock",&PTR_FUN_14be8b850,3,0);
  FUN_140056680(&DAT_14cc284a8,L"DualShock4");
  atexit((_func_5014 *)&LAB_14463ff28);
  FUN_140056680(&DAT_14cc284b8,L"DualSense");
  atexit((_func_5014 *)&LAB_14463ff39);
  FUN_140056680(&DAT_14cc284c8,L"Guitar");
  atexit((_func_5014 *)&LAB_14463ff4a);
  FUN_140056680(&DAT_14cc284d8,L"Drums");
  atexit((_func_5014 *)&LAB_14463ff5b);
  FUN_140056680(&DAT_14cc284e8,&DAT_149e01fe8);
  atexit((_func_5014 *)&LAB_14463ff6c);
  local_28 = "FWinDualShock";
  local_20 = 0xd;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14cc284f8 = (ulonglong)uVar1;
  local_28 = (char *)0x800000014be8b8d6;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14675f88e(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144641e70 FUN_144641e70 body=69 status=ok
// SIG undefined FUN_144641e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144641e70(void)

{
  _DAT_14cc28550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144641eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28558,1);
  return;
}



// FUNCTION 144641ec6 FUN_144641ec6 body=2284 status=ok
// SIG undefined FUN_144641ec6(void)

void FUN_144641ec6(longlong param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  void *_Src;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  ulonglong uVar13;
  ushort uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  byte bVar18;
  byte *pbVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1c8 [32];
  void **local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined4 local_184;
  void *local_180;
  int local_178;
  undefined4 local_174;
  undefined1 local_170 [40];
  LARGE_INTEGER local_148;
  byte abStack_13c [4];
  byte local_138 [32];
  undefined8 local_118;
  ushort auStack_110 [32];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined1 *)(param_1 + 9) = 0;
  lVar8 = param_1 + 0x28;
  pbVar19 = (byte *)(param_1 + 0x10a);
  puVar16 = &local_118;
  uVar13 = 0;
  do {
    bVar11 = *pbVar19;
    abStack_13c[uVar13] = bVar11;
    if (((bVar11 != 0) || (*(char *)(param_1 + 8) != '\0')) || (DAT_14cc28560 != 0)) {
      *puVar16 = 0;
      puVar16[1] = 0;
      iVar7 = XInputGetState(uVar13 & 0xffffffff,puVar16);
      *pbVar19 = iVar7 == 0;
      if (iVar7 == 0) {
        *(undefined1 *)(param_1 + 9) = 1;
      }
    }
    uVar13 = uVar13 + 1;
    puVar16 = puVar16 + 2;
    pbVar19 = pbVar19 + 0x100;
  } while (uVar13 != 4);
  local_190 = (undefined8 *)(param_1 + 0x430);
  lVar17 = 0;
  local_1a0 = 0;
  local_198 = lVar8;
  do {
    _Src = DAT_14cc28570;
    local_180 = (void *)0x0;
    lVar20 = (longlong)DAT_14cc28578;
    local_178 = DAT_14cc28578;
    if (lVar20 == 0) {
      local_174 = 0;
    }
    else {
      FUN_1446dd670(&local_180,DAT_14cc28578,0);
      memcpy(local_180,_Src,lVar20 * 2);
    }
    uVar13 = local_1a0;
    local_1a8 = &local_180;
    FUN_1415e91ea(local_170,param_1,DAT_14cc28568,local_1a0 & 0xffffffff);
    lVar20 = uVar13 * 0x100;
    bVar11 = abStack_13c[uVar13];
    bVar12 = *(byte *)(lVar8 + 0xe2 + lVar20);
    if (((bVar12 | bVar11) & 1) != 0) {
      lVar20 = lVar20 + lVar8;
      local_184 = 0xffffffff;
      bVar18 = bVar12 ^ 1 | bVar11;
      bVar12 = bVar11 ^ 1 | bVar12;
      cVar10 = '\x02' - (bVar12 & 1);
      if ((bVar18 & 1) == 0) {
        cVar10 = '\x03';
      }
      local_188 = 0xffffffff;
      uVar2 = *(undefined4 *)(lVar20 + 0xe4);
      if (*(char *)(param_1 + 10) == '\x01') {
        if (DAT_14c9670a0 == (longlong *)0x0) {
          plVar9 = (longlong *)FUN_14001cc68(0x78,0x10);
          FUN_14593912e(plVar9,1,1);
          DAT_14c9670a0 = plVar9;
        }
        plVar9 = DAT_14c9670a0;
        (**(code **)(*DAT_14c9670a0 + 0xa0))(DAT_14c9670a0,uVar2,&local_184,&local_188);
        uVar2 = local_188;
        if ((bVar18 & bVar12 & 1) == 0) {
          (**(code **)(*plVar9 + 0x78))(plVar9,local_188,local_184,cVar10);
          uVar2 = local_188;
        }
      }
      local_188 = uVar2;
      uVar13 = local_1a0;
      local_138[0] = 0;
      local_138[1] = 0;
      local_138[2] = 0;
      local_138[3] = 0;
      local_138[4] = 0;
      local_138[5] = 0;
      local_138[6] = 0;
      local_138[7] = 0;
      local_138[8] = 0;
      local_138[9] = 0;
      local_138[10] = 0;
      local_138[0xb] = 0;
      local_138[0xc] = 0;
      local_138[0xd] = 0;
      local_138[0xe] = 0;
      local_138[0xf] = 0;
      local_138[0x10] = 0;
      local_138[0x11] = 0;
      local_138[0x12] = 0;
      local_138[0x13] = 0;
      local_138[0x14] = 0;
      local_138[0x15] = 0;
      local_138[0x16] = 0;
      local_138[0x17] = 0;
      lVar8 = local_1a0 * 0x10;
      uVar1 = *(undefined2 *)((longlong)&local_118 + lVar8 + 4);
      bVar11 = (byte)((ushort)uVar1 >> 8);
      local_138[*(byte *)(param_1 + 0xb)] = bVar11 >> 4 & 1;
      local_138[*(byte *)(param_1 + 0xc)] = bVar11 >> 5 & 1;
      local_138[*(byte *)(param_1 + 0xd)] = bVar11 >> 6 & 1;
      local_138[*(byte *)(param_1 + 0xe)] = bVar11 >> 7;
      local_138[*(byte *)(param_1 + 0xf)] = bVar11 & 1;
      local_138[*(byte *)(param_1 + 0x10)] = bVar11 >> 1 & 1;
      bVar11 = (byte)uVar1;
      local_138[*(byte *)(param_1 + 0x11)] = bVar11 >> 5 & 1;
      local_138[*(byte *)(param_1 + 0x12)] = bVar11 >> 4 & 1;
      local_138[*(byte *)(param_1 + 0x13)] = bVar11 >> 6 & 1;
      local_138[*(byte *)(param_1 + 0x14)] = bVar11 >> 7;
      local_138[*(byte *)(param_1 + 0x15)] = 0x1e < *(byte *)((longlong)&local_118 + lVar8 + 6);
      local_138[*(byte *)(param_1 + 0x16)] = 0x1e < *(byte *)((longlong)&local_118 + lVar8 + 7);
      local_138[*(byte *)(param_1 + 0x17)] = bVar11 & 1;
      local_138[*(byte *)(param_1 + 0x18)] = bVar11 >> 1 & 1;
      local_138[*(byte *)(param_1 + 0x19)] = bVar11 >> 2 & 1;
      local_138[*(byte *)(param_1 + 0x1a)] = bVar11 >> 3 & 1;
      uVar14 = auStack_110[local_1a0 * 8 + 1];
      local_138[*(byte *)(param_1 + 0x1b)] = 0x1ea9 < (short)uVar14;
      local_138[*(byte *)(param_1 + 0x1c)] = (short)uVar14 < -0x1ea9;
      uVar6 = auStack_110[local_1a0 * 8];
      local_138[*(byte *)(param_1 + 0x1d)] = (short)uVar6 < -0x1ea9;
      local_138[*(byte *)(param_1 + 0x1e)] = 0x1ea9 < (short)uVar6;
      uVar5 = auStack_110[local_1a0 * 8 + 3];
      local_138[*(byte *)(param_1 + 0x1f)] = 0x21f1 < (short)uVar5;
      local_138[*(byte *)(param_1 + 0x20)] = (short)uVar5 < -0x21f1;
      uVar5 = auStack_110[local_1a0 * 8 + 2];
      local_138[*(byte *)(param_1 + 0x21)] = (short)uVar5 < -0x21f1;
      local_138[*(byte *)(param_1 + 0x22)] = 0x21f1 < (short)uVar5;
      uVar5 = -uVar6;
      if ((short)-uVar6 < 0) {
        uVar5 = uVar6;
      }
      if ((0x1ea9 < uVar5) || (*(ushort *)(lVar20 + 0xd8) != uVar6)) {
        local_1a8 = (void **)CONCAT44(local_1a8._4_4_,
                                      (float)(int)(short)uVar6 /
                                      *(float *)(&DAT_14be8c530 + (ulonglong)((short)uVar6 < 1) * 4)
                                     );
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x98))
                  (*(longlong **)(param_1 + 0x4f0),DAT_14c9678f8,local_184,local_188);
        uVar14 = auStack_110[uVar13 * 8 + 1];
      }
      *(ushort *)(lVar20 + 0xd8) = uVar6;
      uVar6 = -uVar14;
      if ((short)-uVar14 < 0) {
        uVar6 = uVar14;
      }
      if ((0x1ea9 < uVar6) || (*(ushort *)(lVar20 + 0xda) != uVar14)) {
        local_1a8 = (void **)CONCAT44(local_1a8._4_4_,
                                      (float)(int)(short)uVar14 /
                                      *(float *)(&DAT_14be8c530 + (ulonglong)((short)uVar14 < 1) * 4
                                                ));
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x98))
                  (*(longlong **)(param_1 + 0x4f0),DAT_14c967900,local_184,local_188);
      }
      *(ushort *)(lVar20 + 0xda) = uVar14;
      uVar14 = auStack_110[uVar13 * 8 + 2];
      uVar6 = -uVar14;
      if ((short)-uVar14 < 0) {
        uVar6 = uVar14;
      }
      if ((*(ushort *)(lVar20 + 0xdc) != uVar14) || (0x21f1 < uVar6)) {
        local_1a8 = (void **)CONCAT44(local_1a8._4_4_,
                                      (float)(int)(short)uVar14 /
                                      *(float *)(&DAT_14be8c530 + (ulonglong)((short)uVar14 < 1) * 4
                                                ));
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x98))
                  (*(longlong **)(param_1 + 0x4f0),DAT_14c967908,local_184,local_188);
      }
      lVar15 = local_198;
      *(ushort *)(lVar20 + 0xdc) = uVar14;
      uVar14 = auStack_110[uVar13 * 8 + 3];
      uVar6 = -uVar14;
      if ((short)-uVar14 < 0) {
        uVar6 = uVar14;
      }
      if ((*(ushort *)(lVar20 + 0xde) != uVar14) || (0x21f1 < uVar6)) {
        local_1a8 = (void **)CONCAT44(local_1a8._4_4_,
                                      (float)(int)(short)uVar14 /
                                      *(float *)(&DAT_14be8c530 + (ulonglong)((short)uVar14 < 1) * 4
                                                ));
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x98))
                  (*(longlong **)(param_1 + 0x4f0),DAT_14c967910,local_184,local_188);
      }
      *(ushort *)(lVar20 + 0xde) = uVar14;
      bVar11 = *(byte *)((longlong)&local_118 + lVar8 + 6);
      if ((0x1e < bVar11) || (*(byte *)(lVar20 + 0xe0) != bVar11)) {
        local_1a8 = (void **)CONCAT44(local_1a8._4_4_,(float)bVar11 / 255.0);
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x98))
                  (*(longlong **)(param_1 + 0x4f0),DAT_14c967918,local_184,local_188);
      }
      *(byte *)(lVar20 + 0xe0) = bVar11;
      bVar11 = *(byte *)((longlong)&local_118 + lVar8 + 7);
      if ((0x1e < bVar11) || (*(byte *)(lVar20 + 0xe1) != bVar11)) {
        local_1a8 = (void **)CONCAT44(local_1a8._4_4_,(float)bVar11 / 255.0);
        (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x98))
                  (*(longlong **)(param_1 + 0x4f0),DAT_14c967920,local_184,local_188);
      }
      *(byte *)(lVar20 + 0xe1) = bVar11;
      QueryPerformanceCounter(&local_148);
      dVar4 = (double)CONCAT44(local_148.s.HighPart,
                               CONCAT22(local_148.s.LowPart._2_2_,local_148.s.LowPart._0_2_)) *
              DAT_14c83f420 + 16777216.0;
      lVar8 = 0x18;
      pbVar19 = local_138;
      puVar16 = local_190;
      do {
        bVar11 = *pbVar19;
        if (bVar11 == *(byte *)(lVar15 + lVar17)) {
          if ((bVar11 != 0) && (*(double *)((longlong)puVar16 + lVar17 + -0x3f0) <= dVar4)) {
            local_1a8 = (void **)CONCAT71(local_1a8._1_7_,1);
            (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0xa8))
                      (*(longlong **)(param_1 + 0x4f0),*puVar16,local_184,local_188);
            fVar21 = *(float *)(param_1 + 0x42c);
LAB_1446425e0:
            *(double *)((longlong)puVar16 + lVar17 + -0x3f0) = (double)fVar21 + dVar4;
          }
        }
        else {
          lVar3 = **(longlong **)(param_1 + 0x4f0);
          if (bVar11 != 0) {
            local_1a8 = (void **)((ulonglong)local_1a8._1_7_ << 8);
            (**(code **)(lVar3 + 0xa8))();
            fVar21 = *(float *)(param_1 + 0x428);
            goto LAB_1446425e0;
          }
          local_1a8 = (void **)((ulonglong)local_1a8._1_7_ << 8);
          (**(code **)(lVar3 + 0xb8))(*(longlong **)(param_1 + 0x4f0),*puVar16,local_184,local_188);
        }
        *(byte *)(lVar15 + lVar17) = bVar11;
        puVar16 = puVar16 + 1;
        lVar15 = lVar15 + 1;
        pbVar19 = pbVar19 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      fVar21 = *(float *)(lVar20 + 0xe8);
      if (*(float *)(lVar20 + 0xe8) <= *(float *)(lVar20 + 0xf0)) {
        fVar21 = *(float *)(lVar20 + 0xf0);
      }
      fVar22 = *(float *)(lVar20 + 0xec);
      if (*(float *)(lVar20 + 0xec) <= *(float *)(lVar20 + 0xf4)) {
        fVar22 = *(float *)(lVar20 + 0xf4);
      }
      if ((1e-08 < ABS(fVar21 - *(float *)(lVar20 + 0xf8))) ||
         (lVar8 = local_198, 1e-08 < ABS(fVar22 - *(float *)(lVar20 + 0xfc)))) {
        local_148.s.LowPart._0_2_ = (undefined2)(int)(fVar21 * 65535.0);
        local_148.s.LowPart._2_2_ = (undefined2)(int)(fVar22 * 65535.0);
        XInputSetState(*(undefined4 *)(lVar20 + 0xe4),&local_148);
        *(float *)(lVar20 + 0xf8) = fVar21;
        *(float *)(lVar20 + 0xfc) = fVar22;
        lVar8 = local_198;
      }
    }
    FUN_14011623c(local_170);
    local_1a0 = local_1a0 + 1;
    lVar17 = lVar17 + 0x100;
    if (local_1a0 == 4) {
      *(undefined1 *)(param_1 + 8) = 0;
      if ((local_d0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1446427e2 FUN_1446427e2 body=231 status=ok
// SIG undefined FUN_1446427e2(void)

void FUN_1446427e2(void)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_24;
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = (char *)0x800000014be8c538;
  local_24 = 0xc;
  local_18 = FUN_14577453c();
  local_14 = 1;
  FUN_14675fa30(&local_20);
  local_38 = 0;
  FUN_141471170(&DAT_14cc28550,L"XInput.ForceControllerStateUpdate",&DAT_14cc28560,
                L"Force XInput refresh of controller state on each frame.\n0: Not Enabled, 1: Enabled"
               );
  atexit(FUN_144641e70);
  local_20 = "XInputInterface";
  local_18 = 0xf;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  DAT_14cc28568 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cc28570,L"XInputController");
  atexit((_func_5014 *)&LAB_144641eb5);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446428d4 FUN_1446428d4 body=593 status=ok
// SIG undefined FUN_1446428d4(void)

void FUN_1446428d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar4)(plVar2);
          if (cVar8 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,local_48);
            goto LAB_144642a87;
          }
        }
        puVar9 = (undefined8 *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (puVar9 != local_48) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,local_48,puVar9,(int)plVar2[6]);
          }
          else {
            memcpy(local_48,puVar9,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_50 = (undefined4)plVar2[6];
        local_58 = 0;
        FUN_1400746b0(plVar2,local_48,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,local_48,lVar3);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar5,param_2,local_48);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar5,param_2,local_48);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_48[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar4)(uVar5,param_2,local_48);
    }
  }
LAB_144642a87:
  puVar9 = local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = FUN_14980b574(param_1,puVar9);
  *param_3 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144642b26 FUN_144642b26 body=2149 status=ok
// SIG undefined FUN_144642b26(void)

undefined8 FUN_144642b26(longlong param_1,longlong param_2,double *param_3,double *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  double *pdVar25;
  longlong *plVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined4 local_c0 [2];
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0x138) == param_2) {
    pdVar25 = (double *)(param_1 + 0x98);
LAB_144642b99:
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
      FUN_1446f470e(&local_e8,L"User.RenderTargetNew",1);
      local_d8 = (longlong *)FUN_140f1f190();
      if ((local_d8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_d8);
      }
      uStack_d0 = (double *)CONCAT53(uStack_d0._3_5_,1);
      uStack_d0 = (double *)CONCAT44(0xffffffff,(undefined4)uStack_d0);
      local_c8 = local_e8;
      local_c0[0] = FUN_144830b78(local_c0);
      local_b8 = (undefined ***)0x0;
      uStack_b0 = 0;
      plVar26 = (longlong *)0x0;
      piVar14 = (int *)(**(code **)(*(longlong *)(param_2 + 0x338) + 0x58))
                                 ((longlong *)(param_2 + 0x338),&local_c8,0);
      if (piVar14 != (int *)0x0) {
        iVar11 = *piVar14;
        if (((-1 < (longlong)iVar11) && (iVar11 < *(int *)(param_2 + 0x380))) &&
           (plVar26 = *(longlong **)(*(longlong *)(param_2 + 0x378) + (longlong)iVar11 * 8),
           plVar26 != (longlong *)0x0)) {
          if (DAT_14cb0b9a0 == 0) {
            local_100 = &local_e0;
            local_e0 = FUN_1449e2820;
            local_f0 = FUN_14081d0ea;
            local_f8 = &LAB_146408884;
            local_108 = &LAB_147d719e1;
            local_110 = &LAB_140fb41fe;
            local_118 = L"Engine";
            local_120 = 0;
            local_128 = 0x10000000;
            local_130 = 8;
            local_138 = (undefined1 **)CONCAT44(local_138._4_4_,0x168);
            FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
          }
          if ((*(int *)(DAT_14cb0b9a0 + 0x38) <= *(int *)(plVar26[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar26[2] + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) ==
              DAT_14cb0b9a0 + 0x30)) goto LAB_144642c9b;
        }
        plVar26 = (longlong *)0x0;
      }
LAB_144642c9b:
      if (local_b8 != (undefined ***)0x0) {
        FUN_1400020a8();
      }
      if (plVar26 != (longlong *)0x0) {
        bVar10 = (**(code **)(*plVar26 + 0x3b8))(plVar26);
        uVar23 = (ulonglong)((uint)bVar10 * 0x30);
        fVar27 = (float)(**(code **)(*plVar26 + 0x358))(plVar26);
        fVar28 = (float)(**(code **)(*plVar26 + 0x350))(plVar26);
        uVar19 = *(uint *)((longlong)&DAT_14c87341c + uVar23);
        if ((int)uVar19 < 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = (ulonglong)(((int)(longlong)fVar28 + uVar19) - 1) / (ulonglong)uVar19;
        }
        uVar19 = *(uint *)((longlong)&DAT_14c873420 + uVar23);
        if ((int)uVar19 < 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = (ulonglong)(((int)(longlong)fVar27 + uVar19) - 1) / (ulonglong)uVar19;
        }
        iVar11 = *(int *)((longlong)&DAT_14c873428 + uVar23);
        dVar3 = param_4[2];
        dVar4 = param_4[1];
        dVar5 = *param_4;
        dVar6 = param_3[2];
        dVar7 = *param_3;
        dVar8 = param_3[1];
        *pdVar25 = dVar7 - dVar5 * 0.5;
        pdVar25[1] = dVar8 - dVar4 * 0.5;
        pdVar25[2] = dVar6 - dVar3;
        pdVar25[3] = dVar5 * 0.5 + dVar7;
        pdVar25[4] = dVar4 * 0.5 + dVar8;
        pdVar25[5] = dVar3 + dVar6;
        *(undefined1 *)(pdVar25 + 6) = 1;
        uVar29 = (**(code **)(*plVar26 + 0x350))(plVar26);
        *(undefined4 *)(pdVar25 + 7) = uVar29;
        pdVar25[8] = (double)((longlong)iVar11 * uVar18 * uVar21);
        *(undefined4 *)(pdVar25 + 9) = 1;
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar11 = *(int *)(lVar9 + 0xc60);
        local_d8 = plVar26;
        uStack_d0 = pdVar25;
        if (DAT_14c86a9fc == 0) {
          if (iVar11 != 2) {
            if (iVar11 != 1) goto LAB_144642dfc;
            DVar12 = FUN_140ad26c0();
            DVar13 = GetCurrentThreadId();
            if (DVar12 == DVar13) goto LAB_144642e05;
            goto LAB_144642e97;
          }
LAB_144642e05:
          FUN_1446453d2(&local_d8,&DAT_14ca85100);
        }
        else {
LAB_144642dfc:
          if (iVar11 == 0x10) goto LAB_144642e05;
LAB_144642e97:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar9 + 0xc60), iVar11 == 2))
            goto LAB_144642e05;
            if (iVar11 == 1) {
              DVar12 = FUN_140ad26c0();
              DVar13 = GetCurrentThreadId();
              if (DVar12 == DVar13) goto LAB_144642e05;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar1 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar17 = (uint *)*puVar1;
            if (puVar17 != (uint *)0x0) goto LAB_144642ffb;
            while( true ) {
              uVar19 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar19 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar19 | 1;
                __tlregdtor(&LAB_144644f89);
              }
              lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              puVar16 = *(undefined4 **)(lVar9 + 0x310);
              *(undefined8 *)(lVar9 + 0x310) = 0;
              if (puVar16 == (undefined4 *)0x0) {
                puVar16 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar16 = 0xffffffff;
              *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar1 = puVar16;
              FUN_140217a48(puVar1);
              puVar17 = (uint *)*puVar1;
LAB_144642ffb:
              puVar24 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar22 = (uint *)(puVar24 + 0x17);
              uVar19 = puVar17[0x12];
              if (puVar22 <= puVar17 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
                LOCK();
                uVar2 = *puVar17;
                *puVar17 = *puVar17 + uVar19 + 1;
                UNLOCK();
                if ((uVar2 ^ uVar19) != 0xffffffff) break;
                puVar17 = (uint *)*puVar1;
                *puVar17 = 0xffffffff;
                *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
                puVar17[0x12] = 0;
                *puVar1 = puVar17;
                puVar24 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
                puVar22 = (uint *)(puVar24 + 0x17);
                uVar19 = 0;
                if (puVar22 <= puVar17 + 0x4000) {
                  uVar19 = 1;
                  goto LAB_14464307b;
                }
              }
            }
            uVar19 = uVar19 + 1;
LAB_14464307b:
            *(uint **)(puVar17 + 0x10) = puVar22;
            puVar17[0x12] = uVar19;
            iVar11 = 0;
            FUN_1447247dc(puVar24,0);
            *puVar24 = &PTR_FUN_14be8f5b8;
            *(undefined4 *)(puVar24 + 0x15) = (undefined4)local_d8;
            *(undefined4 *)((longlong)puVar24 + 0xac) = local_d8._4_4_;
            *(undefined4 *)(puVar24 + 0x16) = (undefined4)uStack_d0;
            *(undefined4 *)((longlong)puVar24 + 0xb4) = uStack_d0._4_4_;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar19 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
                uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
                iVar11 = 0;
              }
              else {
                uVar23 = 2;
              }
            }
            else {
              iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar23 = 5;
            }
            if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
            }
            puVar24[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar24[9] = puVar24;
            puVar24[10] = puVar24;
            lVar9 = *(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar9 == 0) {
              uVar21 = 1;
              if ((char)uVar23 != '\x06') {
                uVar21 = uVar23;
              }
              uVar23 = uVar21;
              uVar15 = 0;
            }
            else {
              if ((char)uVar23 == '\x06') {
                uVar23 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
              }
              uVar15 = *(undefined8 *)(lVar9 + 0x30);
            }
            puVar24[0xf] = uVar15;
            puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar24 + 0x1c) = iVar11;
            if (puVar24 == (undefined8 *)0x0) {
              local_c8 = (undefined1 *)CONCAT71(local_c8._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
              UNLOCK();
              local_c8 = (undefined1 *)CONCAT71(local_c8._1_7_,1);
              FUN_1447439e4(puVar24);
              LOCK();
              piVar14 = (int *)(puVar24 + 1);
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (*piVar14 == 0) {
                (**(code **)*puVar24)(puVar24,1);
              }
            }
          }
          else {
            local_b8 = (undefined ***)0x0;
            local_a8 = &PTR_LAB_14be8f580;
            local_a0 = (undefined4)local_d8;
            uStack_9c = local_d8._4_4_;
            uStack_98 = (undefined4)uStack_d0;
            uStack_94 = uStack_d0._4_4_;
            local_c8 = &LAB_144645554;
            local_138 = &local_c8;
            FUN_14005a792(&DAT_14ca9a440,L"Readback",&DAT_14cc2875c);
            if (local_c8 != (undefined1 *)0x0) {
              pppuVar20 = local_b8;
              if (local_b8 == (undefined ***)0x0) {
                pppuVar20 = &local_a8;
              }
              (*(code *)(*pppuVar20)[2])();
            }
          }
        }
        uVar15 = 1;
        goto LAB_144642e20;
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x1e0) == param_2) {
    pdVar25 = (double *)(param_1 + 0x140);
    goto LAB_144642b99;
  }
  uVar15 = 0;
LAB_144642e20:
  if ((local_80 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464338c FUN_14464338c body=816 status=ok
// SIG undefined FUN_14464338c(void)

void FUN_14464338c(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_14464355e;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_14464355e:
  lVar5 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x138) == 0) {
    param_1 = param_1 + 0x98;
  }
  else {
    if (*(longlong *)(param_1 + 0x1e0) != 0) goto LAB_1446435b6;
    param_1 = param_1 + 0x140;
  }
  if ((((local_30 == 0) || ((*(uint *)(local_30 + 8) >> 0x1e & 1) != 0)) ||
      (*(longlong *)(param_1 + 0xa0) == 0)) || (*(longlong *)(param_1 + 0xa0) == local_30)) {
    FUN_14980b79a(param_1);
    if (*(int *)(param_1 + 0x48) == 0) {
      *(longlong *)(param_1 + 0xa0) = lVar5;
    }
  }
LAB_1446435b6:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446436be FUN_1446436be body=805 status=ok
// SIG undefined FUN_1446436be(void)

void FUN_1446436be(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_38);
            goto LAB_144643891;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_144643891:
  lVar5 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar10 = 0;
  bVar7 = true;
  do {
    bVar11 = bVar7;
    if (*(longlong *)(param_1 + 0x138 + lVar10 * 0xa8) == lVar5) {
      lVar10 = lVar10 * 0xa8 + param_1 + 0x98;
      FUN_14980b79a(lVar10);
      if (*(int *)(lVar10 + 0x48) == 0) {
        *(undefined8 *)(lVar10 + 0xa0) = 0;
      }
    }
    lVar10 = 1;
    bVar7 = false;
  } while (bVar11);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144643a3a FUN_144643a3a body=465 status=ok
// SIG undefined FUN_144643a3a(void)

undefined8 FUN_144643a3a(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ushort uVar7;
  double dVar8;
  uint uVar9;
  float fVar10;
  
  fVar10 = *(float *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x98) == (int)(fVar10 * fVar10)) {
    dVar1 = *param_2;
    dVar2 = *(double *)(param_1 + 0x58);
    if ((dVar2 < dVar1) && (dVar3 = *(double *)(param_1 + 0x70), dVar1 < dVar3)) {
      dVar4 = param_2[1];
      if ((*(double *)(param_1 + 0x60) < dVar4) && (dVar4 < *(double *)(param_1 + 0x78))) {
        dVar5 = *(double *)(param_1 + 0x68);
        if ((dVar5 < param_2[2]) && (dVar6 = *(double *)(param_1 + 0x80), param_2[2] < dVar6)) {
          dVar8 = 1.0 / (dVar3 - dVar2);
          uVar7 = *(ushort *)
                   (*(longlong *)(param_1 + 0x90) +
                   (ulonglong)
                   (uint)((int)fVar10 *
                          (int)(longlong)
                               (((dVar4 - (*(double *)(param_1 + 0x60) + *(double *)(param_1 + 0x78)
                                          ) * 0.5) * dVar8 + 0.5) * (double)fVar10) +
                         (int)(longlong)
                              ((dVar8 * (dVar1 - (dVar2 + dVar3) * 0.5) + 0.5) * (double)fVar10)) *
                   2);
          uVar9 = (uint)uVar7 << 0xd;
          if ((uVar9 & 0xf800000) == 0xf800000) {
            fVar10 = (float)(uVar9 | 0x70000000);
          }
          else if ((uVar9 & 0xf800000) == 0) {
            fVar10 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar10 = (float)((uVar9 & 0xfffe000) + 0x38000000);
          }
          fVar10 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar10);
          *(double *)(param_3 + 0x10) =
               (dVar6 - dVar5) * (double)fVar10 * 0.5 + (dVar5 + dVar6) * 0.5;
          return CONCAT71((uint7)(uint3)((uint)fVar10 >> 8),1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144643c0b FUN_144643c0b body=69 status=ok
// SIG undefined FUN_144643c0b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144643c0b(void)

{
  _DAT_14cc28708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144643c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28710,1);
  return;
}



// FUNCTION 144643c50 FUN_144643c50 body=415 status=ok
// SIG undefined FUN_144643c50(void)

void FUN_144643c50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (DAT_14c872a72 == '\0')) {
    FUN_14480f766(&DAT_14ca5bfa8);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_140886972();
    *(undefined8 *)(param_1 + 0x80) = 0;
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
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
  }
  FUN_1401cb356();
  local_28 = *(undefined8 *)(param_1 + 0x70);
  local_20 = *(longlong *)(param_1 + 0x78);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  plVar4 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1412f3774(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x40),0,1);
  }
  FUN_14980b8b4(param_1 + 0x98);
  FUN_14980b8b4(param_1 + 0x140);
  plVar4 = (longlong *)FUN_1415d76b6();
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
    if (lVar5 == 0) goto LAB_144643de5;
  }
  if ((*(char *)(lVar5 + 0xe0) == '\x01') &&
     (plVar4 = *(longlong **)(param_1 + 0x68), plVar4 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar4 + 0x3b8))(plVar4);
    plVar4[0x28] = 0x400000004;
    *(undefined1 *)(plVar4 + 0x2c) = uVar3;
    *(byte *)((longlong)plVar4 + 0x15a) = *(byte *)((longlong)plVar4 + 0x15a) & 0xfe;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_144643de5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144643e04 FUN_144643e04 body=2741 status=ok
// SIG undefined FUN_144643e04(void)

void FUN_144643e04(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  void *_Src;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  undefined8 *puVar21;
  char cVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined ***local_68;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = (longlong *)FUN_1415d76b6();
  lVar19 = plVar10[0x22];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar19 = plVar10[0x22];
    if (lVar19 != 0) goto LAB_144643e5b;
  }
  else {
LAB_144643e5b:
    if (*(char *)(lVar19 + 0x38) != '\0') {
      if (*(longlong *)(param_2 + 0x3a8) != 0) {
        FUN_14357097e(*(longlong *)(param_2 + 0x3a8),*(undefined8 *)(param_1 + 0x48),0);
        plVar10 = (longlong *)FUN_1415d76b6();
        lVar19 = plVar10[0x22];
        if (lVar19 == 0) {
          (**(code **)(*plVar10 + 1000))(plVar10);
          lVar19 = plVar10[0x22];
          if (lVar19 == 0) goto LAB_144643ec8;
        }
        FUN_14016d8b0(*(undefined8 *)(param_2 + 0x3a8),
                      *(undefined8 *)(lVar19 + 0x110 + (ulonglong)*(byte *)(lVar19 + 0x39) * 8),
                      *(undefined8 *)(param_2 + 0x398));
      }
LAB_144643ec8:
      if (*(longlong *)(param_2 + 0x3b0) != 0) {
        FUN_14980c3e4(*(longlong *)(param_2 + 0x3b0) + 0x390,param_1 + 0x38);
      }
      goto LAB_144644382;
    }
  }
  plVar10 = (longlong *)FUN_1415d76b6();
  lVar19 = plVar10[0x22];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar19 = plVar10[0x22];
    if (lVar19 == 0) goto LAB_144644382;
  }
  if ((*(char *)(lVar19 + 0xe0) != '\x01') ||
     ((((*(int *)(param_1 + 100) != 0 && (uVar16 = *(uint *)(param_1 + 0x60), -1 < (int)uVar16)) &&
       ((int)uVar16 < DAT_14c9647dc)) &&
      (((lVar19 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar19 != 0 &&
        (*(int *)(lVar19 + 0x10) == *(int *)(param_1 + 100))) &&
       ((*(uint *)(lVar19 + 8) & 0x10200000) == 0)))))) goto LAB_144644382;
  if ((DAT_14ca84e78 == '\0') && (lVar19 = *(longlong *)(param_2 + 0x398), lVar19 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar19);
    }
    if ((*(longlong *)(param_1 + 0x68) != 0) && (lVar11 = FUN_1447b4020(lVar19), lVar11 != 0)) {
      lVar3 = *(longlong *)(lVar19 + 0x148);
      if (lVar3 == 0) {
        cVar22 = '\0';
      }
      else {
        pcVar12 = (char *)(lVar3 + 0xc);
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          pcVar12 = (char *)(*(longlong *)(lVar3 + 0x28) + 0x20);
        }
        cVar22 = *pcVar12;
      }
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x3b8))();
      if (cVar22 == cVar6) {
        piVar4 = *(int **)(lVar19 + 0x148);
        if (piVar4 == (int *)0x0) {
          lVar19 = *(longlong *)(param_1 + 0x68);
          iVar7 = 0;
          if (*(int *)(lVar19 + 0x140) == 0) {
            iVar23 = 0;
            if (*(int *)(lVar19 + 0x144) == 0) goto LAB_144644026;
          }
          else {
            iVar23 = 0;
          }
LAB_14464401d:
          FUN_143738fbe(lVar19,iVar23,iVar7);
          lVar19 = *(longlong *)(param_1 + 0x68);
        }
        else {
          iVar23 = *piVar4;
          iVar7 = piVar4[1];
          lVar19 = *(longlong *)(param_1 + 0x68);
          if ((iVar23 != *(int *)(lVar19 + 0x140)) || (iVar7 != *(int *)(lVar19 + 0x144)))
          goto LAB_14464401d;
        }
LAB_144644026:
        plVar10 = (longlong *)FUN_1447b4020(lVar19);
        if (plVar10 != (longlong *)0x0) {
          lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar7 = *(int *)(lVar19 + 0xc60);
          local_88 = lVar11;
          uStack_80 = plVar10;
          if (DAT_14c86a9fc == 0) {
            if (iVar7 != 2) {
              if (iVar7 != 1) goto LAB_144644061;
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              if (DVar8 == DVar9) goto LAB_144644066;
              goto LAB_1446440a4;
            }
LAB_144644066:
            FUN_144645a82(&local_88,&DAT_14ca85100);
          }
          else {
LAB_144644061:
            if (iVar7 == 0x10) goto LAB_144644066;
LAB_1446440a4:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar19 + 0xc60), iVar7 == 2))
              goto LAB_144644066;
              if (iVar7 == 1) {
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                if (DVar8 == DVar9) goto LAB_144644066;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar1 = (undefined8 *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
              puVar15 = (uint *)*puVar1;
              if (puVar15 != (uint *)0x0) goto LAB_1446444c5;
              while( true ) {
                uVar16 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar16 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar16 | 1;
                  __tlregdtor(&LAB_144644f89);
                }
                lVar19 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar14 = *(undefined4 **)(lVar19 + 0x310);
                *(undefined8 *)(lVar19 + 0x310) = 0;
                if (puVar14 == (undefined4 *)0x0) {
                  puVar14 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar14 = 0xffffffff;
                *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
                puVar14[0x12] = 0;
                *puVar1 = puVar14;
                FUN_140217a48(puVar1);
                puVar15 = (uint *)*puVar1;
LAB_1446444c5:
                puVar21 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar20 = (uint *)(puVar21 + 0x17);
                uVar16 = puVar15[0x12];
                if (puVar20 <= puVar15 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
                  LOCK();
                  uVar2 = *puVar15;
                  *puVar15 = *puVar15 + uVar16 + 1;
                  UNLOCK();
                  if ((uVar2 ^ uVar16) != 0xffffffff) break;
                  puVar15 = (uint *)*puVar1;
                  *puVar15 = 0xffffffff;
                  *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
                  puVar15[0x12] = 0;
                  *puVar1 = puVar15;
                  puVar21 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
                  puVar20 = (uint *)(puVar21 + 0x17);
                  uVar16 = 0;
                  if (puVar20 <= puVar15 + 0x4000) {
                    uVar16 = 1;
                    goto LAB_144644545;
                  }
                }
              }
              uVar16 = uVar16 + 1;
LAB_144644545:
              *(uint **)(puVar15 + 0x10) = puVar20;
              puVar15[0x12] = uVar16;
              iVar7 = 0;
              FUN_1447247dc(puVar21,0);
              *puVar21 = &PTR_FUN_14be8f830;
              *(undefined4 *)(puVar21 + 0x15) = (undefined4)local_88;
              *(undefined4 *)((longlong)puVar21 + 0xac) = local_88._4_4_;
              *(undefined4 *)(puVar21 + 0x16) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)puVar21 + 0xb4) = uStack_80._4_4_;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar16 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
                  uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
                }
                else {
                  uVar18 = 2;
                }
              }
              else {
                iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar18 = 5;
              }
              if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
              }
              puVar21[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar21[9] = puVar21;
              puVar21[10] = puVar21;
              lVar19 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar19 == 0) {
                uVar5 = 1;
                if ((char)uVar18 != '\x06') {
                  uVar5 = uVar18;
                }
                uVar18 = uVar5;
                uVar13 = 0;
              }
              else {
                if ((char)uVar18 == '\x06') {
                  uVar18 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
                }
                uVar13 = *(undefined8 *)(lVar19 + 0x30);
              }
              puVar21[0xf] = uVar13;
              puVar21[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar21 + 0x1c) = iVar7;
              if (puVar21 == (undefined8 *)0x0) {
                local_78 = (undefined1 *)CONCAT71(local_78._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
                UNLOCK();
                local_78 = (undefined1 *)CONCAT71(local_78._1_7_,1);
                FUN_1447439e4(puVar21);
                LOCK();
                piVar4 = (int *)(puVar21 + 1);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)*puVar21)(puVar21,1);
                }
              }
            }
            else {
              local_a8 = &local_78;
              local_68 = (undefined ***)0x0;
              local_58 = &PTR_LAB_14be8f7e0;
              local_50 = (undefined4)local_88;
              uStack_4c = local_88._4_4_;
              uStack_48 = (undefined4)uStack_80;
              uStack_44 = uStack_80._4_4_;
              local_78 = &LAB_144645d02;
              FUN_14005a792(&DAT_14ca9a440,L"CopyTextureToRTCommand",&DAT_14cc28764);
              if (local_78 != (undefined1 *)0x0) {
                pppuVar17 = local_68;
                if (local_68 == (undefined ***)0x0) {
                  pppuVar17 = &local_58;
                }
                (*(code *)(*pppuVar17)[2])();
              }
            }
          }
          FUN_1400fb146(param_1 + 0x90,0);
          if (param_2 == 0) {
            *(undefined4 *)(param_1 + 0x60) = 0;
            iVar7 = 0;
          }
          else {
            uVar16 = *(uint *)(param_2 + 0xc);
            *(uint *)(param_1 + 0x60) = uVar16;
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar7 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar23 = DAT_14c964868 + 1;
              bVar24 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar24) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar23);
              }
              LOCK();
              iVar7 = *(int *)(lVar19 + 0x10);
              bVar24 = iVar7 == 0;
              if (bVar24) {
                *(int *)(lVar19 + 0x10) = iVar23;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar24) {
                iVar7 = iVar23;
              }
            }
          }
          *(int *)(param_1 + 100) = iVar7;
          lVar19 = *(longlong *)(param_1 + 0x68);
          if (DAT_14c950c29 == '\x01') {
            if (lVar19 == 0) {
              lVar19 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar19 = *(longlong *)(param_1 + 0x68);
            }
          }
          *(longlong *)(param_2 + 0x3b8) = lVar19;
          local_78 = (undefined1 *)0x0;
          local_70 = *(int *)(param_1 + 0x58);
          lVar19 = (longlong)local_70;
          _Src = *(void **)(param_1 + 0x50);
          if (lVar19 == 0) {
            local_6c = 0;
          }
          else {
            FUN_145ef44de(&local_78,local_70);
            memcpy(local_78,_Src,lVar19 << 3);
          }
          FUN_14158b8e5(&local_78);
          uVar13 = FUN_1401cb356();
          local_98 = (undefined8 *)0x0;
          local_90 = 0;
          FUN_1446efa72(&local_98,0,3,0x10);
          puVar1 = local_98;
          local_90 = 3;
          *local_98 = &PTR_LAB_149e02020;
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 1;
          lVar19 = DAT_14c758608 + 1;
          if (lVar11 == 0) {
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 2;
            lVar19 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar19;
          local_98[2] = lVar11;
          *local_98 = &PTR_FUN_14be8f840;
          local_98[3] = 0;
          if (param_1 == 0) {
            *(undefined4 *)(local_98 + 3) = 0;
            iVar7 = 0;
          }
          else {
            uVar16 = *(uint *)(param_1 + 0xc);
            *(uint *)(local_98 + 3) = uVar16;
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar7 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar23 = DAT_14c964868 + 1;
              bVar24 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar24) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar23);
              }
              LOCK();
              iVar7 = *(int *)(lVar19 + 0x10);
              bVar24 = iVar7 == 0;
              if (bVar24) {
                *(int *)(lVar19 + 0x10) = iVar23;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar24) {
                iVar7 = iVar23;
              }
            }
          }
          *(int *)((longlong)puVar1 + 0x1c) = iVar7;
          puVar1[4] = FUN_1446448ba;
          local_a8 = (undefined1 **)CONCAT44(local_a8._4_4_,0x3dcccccd);
          FUN_1405f67fc(uVar13,&local_88,&local_98,
                        L"UGbxWeatherOcclusionSubsystem_PostPopulateOcclusionDataRT");
          if (uStack_80 != (longlong *)0x0) {
            LOCK();
            piVar4 = (int *)((longlong)uStack_80 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*uStack_80 + 0x10))();
            }
          }
          if (local_90 != 0) {
            if (local_98 == (undefined8 *)0x0) goto LAB_144644329;
            (**(code **)*local_98)(local_98,0);
            FUN_1446efa72(&local_98,0,0,0x10);
            local_90 = 0;
          }
          if (local_98 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_144644329:
  lVar19 = DAT_14cc28718;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
    uVar18 = 0;
  }
  else if (iVar7 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar18 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar18 = 1;
  }
  if (0 < *(int *)(lVar19 + uVar18 * 4)) {
    *(undefined8 *)(param_2 + 0x3a8) = 0;
  }
LAB_144644382:
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    FUN_145ca72ba(&DAT_14ca5bfa8,&local_78);
    *(undefined1 **)(param_1 + 0x1e8) = local_78;
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446448ba FUN_1446448ba body=151 status=ok
// SIG undefined FUN_1446448ba(void)

byte FUN_1446448ba(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  
  bVar3 = FUN_1447fa3ae(param_1 + 0x90);
  if ((((((bVar3 != 0) && (*(int *)(param_1 + 100) != 0)) &&
        (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (plVar4 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0)))) &&
      (((int)plVar4[2] == *(int *)(param_1 + 100) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))))) &&
     ((*(longlong *)(lVar2 + 0x398) != 0 &&
      ((*(longlong *)(lVar2 + 0x3b8) != 0 && (0 < *DAT_14cc28718)))))) {
    *(undefined8 *)(lVar2 + 0x398) = 0;
  }
  return bVar3 ^ 1;
}



// FUNCTION 144644952 FUN_144644952 body=57 status=ok
// SIG undefined FUN_144644952(void)

undefined8 * FUN_144644952(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be8f370;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144644b0a FUN_144644b0a body=191 status=ok
// SIG undefined FUN_144644b0a(void)

void FUN_144644b0a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14be8f370;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  return;
}



// FUNCTION 144644bca FUN_144644bca body=191 status=ok
// SIG undefined FUN_144644bca(void)

void FUN_144644bca(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14be8f370;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  return;
}



// FUNCTION 144644c8a FUN_144644c8a body=230 status=ok
// SIG undefined FUN_144644c8a(void)

void FUN_144644c8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14be8f370;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar3;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var2[1].Type = (short)uVar4;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var2[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var2[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar7;
  p_Var2[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)&p_Var2[1].ProcessLocksList.Blink = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Blink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var2[1].ProcessLocksList,iVar1,0);
    memcpy(p_Var2[1].ProcessLocksList.Flink,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144644d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144644d7a FUN_144644d7a body=269 status=ok
// SIG undefined FUN_144644d7a(void)

undefined8 FUN_144644d7a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144644e81;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144644e81;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144644e81:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144644e35;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144644e88(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144644e35;
    }
  }
  uVar6 = 0;
LAB_144644e35:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144644e88 FUN_144644e88 body=89 status=ok
// SIG undefined FUN_144644e88(void)

void FUN_144644e88(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x3b0);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1401ca522(param_1 + 1);
    (**(code **)(*plVar2 + 0xa78))(plVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000144644ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x3b0) + 0x638))
              (*(longlong **)(lVar1 + 0x3b0),0,*(undefined8 *)(lVar1 + 0x3a8));
    return;
  }
  return;
}



// FUNCTION 144644ee2 FUN_144644ee2 body=116 status=ok
// SIG undefined FUN_144644ee2(void)

undefined8 FUN_144644ee2(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = -5;
  do {
    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + 8) == 0) {
LAB_144644f30:
      if (lVar3 == 0) {
        return 0;
      }
      FUN_145bf0f7a(lVar3);
      FUN_1400020a8(lVar3);
      return 0;
    }
    if ((*(int *)(*(longlong *)(lVar3 + 8) + 0x10) == 0) &&
       (cVar1 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x18))(), cVar1 != '\0')) {
      lVar3 = *param_1;
      goto LAB_144644f30;
    }
    FUN_14000f986(0x3dcccccd);
    iVar2 = iVar2 + 1;
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144644f5a FUN_144644f5a body=5 status=ok
// SIG undefined FUN_144644f5a(void)

longlong FUN_144644f5a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144644f60 FUN_144644f60 body=12 status=ok
// SIG undefined FUN_144644f60(void)

void FUN_144644f60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144644f69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144644f6c FUN_144644f6c body=29 status=ok
// SIG undefined FUN_144644f6c(void)

undefined8 FUN_144644f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144644fb0 FUN_144644fb0 body=1056 status=ok
// SIG undefined FUN_144644fb0(void)

undefined8 * FUN_144644fb0(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  undefined1 local_89;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14be8f4e0;
  uStack_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  local_88 = FUN_14980bf56;
  FUN_14170b918(&local_a8,param_3);
  plVar13 = plStack_a0;
  uVar5 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_a0 + 8) = *(int *)((longlong)plStack_a0 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar8 = (uint *)*puVar2;
  if (puVar8 != (uint *)0x0) goto LAB_1446450cd;
  while( true ) {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_144644f89);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar7 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar7 = 0xffffffff;
    *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *puVar2 = puVar7;
    FUN_140217a48(puVar2);
    puVar8 = (uint *)*puVar2;
LAB_1446450cd:
    puVar14 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (uint *)(puVar14 + 0x22);
    uVar10 = puVar8[0x12];
    if (puVar11 <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar3 = *puVar8;
      *puVar8 = *puVar8 + uVar10 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar10) != 0xffffffff) break;
      puVar8 = (uint *)*puVar2;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar2 = puVar8;
      puVar14 = (undefined8 *)((longlong)puVar8 + 0x67U & 0xfffffffffffffff0);
      puVar11 = (uint *)(puVar14 + 0x22);
      uVar10 = 0;
      if (puVar11 <= puVar8 + 0x4000) {
        uVar10 = 1;
        goto LAB_14464514d;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_14464514d:
  *(uint **)(puVar8 + 0x10) = puVar11;
  puVar8[0x12] = uVar10;
  FUN_1447247dc(puVar14,0);
  *puVar14 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
  puVar14[0x16] = local_88;
  puVar14[0x18] = local_78;
  local_78 = (undefined ***)0x0;
  *(undefined4 *)(puVar14 + 0x1c) = uStack_58;
  *(undefined4 *)((longlong)puVar14 + 0xe4) = uStack_54;
  *(undefined4 *)(puVar14 + 0x1d) = uStack_50;
  *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_4c;
  puVar14[0x1a] = local_68;
  puVar14[0x1b] = CONCAT44(uStack_5c,uStack_60);
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar14[0x1e] = local_a8;
  puVar14[0x1f] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar14 + 0x20) = 0;
  *(undefined4 *)(puVar14 + 0x21) = 0xff;
  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
  }
  puVar14[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar14[9] = puVar14;
  puVar14[10] = puVar14;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar14[0xf] = uVar9;
  puVar14[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
  if (puVar14 == (undefined8 *)0x0) {
    local_89 = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
    local_89 = 1;
    FUN_1447439e4(puVar14);
    LOCK();
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
  plVar6 = plStack_a0;
  *param_1 = uVar5;
  param_1[1] = plVar13;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_a0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar12 = local_78;
    }
    (*(code *)(*pppuVar12)[2])(pppuVar12);
  }
  if (*param_3 != 0) {
    plVar13 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446453d2 FUN_1446453d2 body=384 status=ok
// SIG undefined FUN_1446453d2(void)

void FUN_1446453d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_6d8 [40];
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  longlong *local_6a0;
  undefined1 local_698 [1656];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  FUN_1407779ba(local_698,param_2,param_3,0);
  lVar1 = FUN_147d70e0e(*param_1);
  FUN_1447ec05f(&local_6a0,*(undefined8 *)(lVar1 + 0x10),L"Occlusion Height Map GPU");
  uVar2 = FUN_14473c272(local_698,&local_6a0,0);
  if (local_6a0 != (longlong *)0x0) {
    (**(code **)(*local_6a0 + 0x38))();
  }
  puVar3 = *(undefined8 **)(param_1[1] + 0x50);
  if (puVar3 == (undefined8 *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc28758) {
      FUN_144b3d300(&DAT_14cc28758);
      if (DAT_14cc28758 == -1) {
        FUN_1446f470e(&DAT_14cc28750,L"Occlusion Height Map CPU Readback",1);
        _Init_thread_footer(&DAT_14cc28758);
      }
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    FUN_14047abb0(puVar3,DAT_14cc28750);
    *puVar3 = &PTR_FUN_14a37f830;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined8 **)(param_1[1] + 0x50) = puVar3;
  }
  local_6b0 = 0;
  uStack_6ac = 0xffffffff;
  uStack_6a8 = 0xffffffff;
  uStack_6a4 = 0xffffffff;
  FUN_14321397a(local_698,puVar3,uVar2);
  FUN_140779360(local_698);
  FUN_140778010(local_698);
  if ((local_20 ^ (ulonglong)auStack_6d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144645564 FUN_144645564 body=12 status=ok
// SIG undefined FUN_144645564(void)

void FUN_144645564(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014464556d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144645570 FUN_144645570 body=29 status=ok
// SIG undefined FUN_144645570(void)

undefined8 FUN_144645570(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14464558e FUN_14464558e body=282 status=ok
// SIG undefined FUN_14464558e(void)

undefined8 * FUN_14464558e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144644f89);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1446456a8 FUN_1446456a8 body=105 status=ok
// SIG undefined FUN_1446456a8(void)

void FUN_1446456a8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1446453d2(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1446453d2(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446456eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14464573e FUN_14464573e body=29 status=ok
// SIG undefined FUN_14464573e(void)

void FUN_14464573e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14464575c FUN_14464575c body=29 status=ok
// SIG undefined FUN_14464575c(void)

undefined8 FUN_14464575c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14464577a FUN_14464577a body=282 status=ok
// SIG undefined FUN_14464577a(void)

undefined8 * FUN_14464577a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144644f89);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144645916 FUN_144645916 body=121 status=ok
// SIG undefined FUN_144645916(void)

undefined8 FUN_144645916(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
      plVar4 = *(longlong **)(lVar3 + 0x78);
      *(undefined8 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      FUN_1460d786c(lVar3);
    }
  }
  return 0;
}



// FUNCTION 14464599a FUN_14464599a body=12 status=ok
// SIG undefined FUN_14464599a(void)

void FUN_14464599a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446459a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446459a6 FUN_1446459a6 body=29 status=ok
// SIG undefined FUN_1446459a6(void)

undefined8 FUN_1446459a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446459c4 FUN_1446459c4 body=77 status=ok
// SIG undefined FUN_1446459c4(void)

void FUN_1446459c4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1459ea110();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_147a00ab4(*(undefined8 *)(lVar1 + 0x390),*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 144645a12 FUN_144645a12 body=63 status=ok
// SIG undefined FUN_144645a12(void)

longlong FUN_144645a12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14be8f6e0;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_2 + 0x18) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2 + 0x18;
}



// FUNCTION 144645a58 FUN_144645a58 body=12 status=ok
// SIG undefined FUN_144645a58(void)

void FUN_144645a58(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144645a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144645a64 FUN_144645a64 body=29 status=ok
// SIG undefined FUN_144645a64(void)

undefined8 FUN_144645a64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144645a82 FUN_144645a82 body=638 status=ok
// SIG undefined FUN_144645a82(void)

void FUN_144645a82(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [40];
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined4 local_a0;
  char local_98 [16];
  longlong local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = *(longlong *)(*param_1 + 0x10);
  plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1[1] + 0x50) + 0x10))(param_1[1] + 0x50);
  if ((lVar5 != 0) && (lVar1 = *plVar2, lVar1 != 0)) {
    local_98[0] = -1;
    local_98[1] = -1;
    local_98[2] = -1;
    local_98[3] = -1;
    local_98[4] = -1;
    local_98[5] = -1;
    local_98[6] = -1;
    local_98[7] = -1;
    local_98[8] = -1;
    local_98[9] = -1;
    local_98[10] = -1;
    local_98[0xb] = -1;
    local_80 = 1;
    local_7c = 0x8000000000;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0xffffffffffffffff;
    local_58 = 0xffffffff;
    local_48 = 1;
    local_44 = 0x200000000000;
    local_3c = 0;
    local_30 = 0;
    local_a0 = 2;
    local_a8 = local_98;
    local_88 = lVar5;
    local_50 = lVar1;
    FUN_144760590(param_2,&local_a8,0);
    lVar3 = 0x68;
    do {
      if (local_98[lVar3] == '\x01') {
        local_98[lVar3] = '\0';
      }
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != -8);
    uStack_c8 = DAT_14c9a52a0;
    local_d0 = DAT_14c9a5298;
    uStack_c4 = (undefined4)DAT_14c9a5298;
    uStack_c0 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_bc = DAT_14c9a52a0;
    local_b0 = DAT_14c9a52a0;
    uStack_b8 = DAT_14c9a5298;
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar4 + 0xc;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x68);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar4 + 0xc;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_14a289d68;
    puVar4[2] = local_d0;
    puVar4[3] = CONCAT44(uStack_c4,uStack_c8);
    *(undefined4 *)(puVar4 + 4) = uStack_c0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_bc;
    *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_b8._4_4_;
    *(undefined4 *)(puVar4 + 6) = local_b0;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 1;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x44) = 0x100000000;
    puVar4[10] = lVar5;
    puVar4[0xb] = lVar1;
    local_98[0] = -1;
    local_98[1] = -1;
    local_98[2] = -1;
    local_98[3] = -1;
    local_98[4] = -1;
    local_98[5] = -1;
    local_98[6] = -1;
    local_98[7] = -1;
    local_98[8] = -1;
    local_98[9] = -1;
    local_98[10] = -1;
    local_98[0xb] = -1;
    local_80 = 1;
    local_7c = 0x7000000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0xffffffffffffffff;
    local_58 = 0xffffffff;
    local_48 = 1;
    local_44 = 0x7000002000;
    local_3c = 0;
    local_30 = 0;
    local_d8 = 2;
    local_e0 = local_98;
    local_88 = lVar5;
    local_50 = lVar1;
    FUN_144760590(param_2,&local_e0,0);
    lVar5 = 0x68;
    do {
      if (local_98[lVar5] == '\x01') {
        local_98[lVar5] = '\0';
      }
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != -8);
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144645d12 FUN_144645d12 body=12 status=ok
// SIG undefined FUN_144645d12(void)

void FUN_144645d12(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144645d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144645d1e FUN_144645d1e body=29 status=ok
// SIG undefined FUN_144645d1e(void)

undefined8 FUN_144645d1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144645d3c FUN_144645d3c body=282 status=ok
// SIG undefined FUN_144645d3c(void)

undefined8 * FUN_144645d3c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144644f89);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144645e56 FUN_144645e56 body=105 status=ok
// SIG undefined FUN_144645e56(void)

void FUN_144645e56(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144645a82(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144645a82(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144645e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144645ec0 FUN_144645ec0 body=29 status=ok
// SIG undefined FUN_144645ec0(void)

undefined8 FUN_144645ec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144646066 FUN_144646066 body=93 status=ok
// SIG undefined FUN_144646066(void)

void FUN_144646066(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1446460c4 FUN_1446460c4 body=93 status=ok
// SIG undefined FUN_1446460c4(void)

void FUN_1446460c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144646122 FUN_144646122 body=126 status=ok
// SIG undefined FUN_144646122(void)

void FUN_144646122(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8f840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144646191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446461f8 FUN_1446461f8 body=284 status=ok
// SIG undefined FUN_1446461f8(void)

undefined8 FUN_1446461f8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14464630e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14464630e;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14464630e:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1446462bd;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1446462bd;
    }
  }
  uVar6 = 0;
LAB_1446462bd:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144646315 FUN_144646315 body=941 status=ok
// SIG undefined FUN_144646315(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144646315(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  wchar_t *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxWeatherOcclusion",&PTR_FUN_14be8d160,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxWeatherOcclusion",&PTR_FUN_14be8dbc0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxWeatherOcclusion",&PTR_FUN_14be8e690,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxWeatherOcclusion",&PTR_FUN_14be8edc0,1,0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cc286c8);
  if (cVar1 == '\0') {
    _DAT_14cc286c8 = 0;
    uRam000000014cc286d0 = 0;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_48 = L"AssetRegistry";
  local_40 = 0xd;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cc286d8 = (ulonglong)uVar2;
  local_48 = L"OcclusionBounds";
  local_40 = 0xf;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  DAT_14cc286e0 = (ulonglong)uVar2;
  local_48 = L"OcclusionMap";
  local_40 = 0xc;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cc286e8 = (ulonglong)uVar2;
  local_48 = L"OcclusionPlaneMaterial";
  local_40 = 0x16;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  DAT_14cc286f0 = (ulonglong)uVar2;
  local_48 = L"OcclusionPlane";
  local_40 = 0xe;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  DAT_14cc286f8 = (ulonglong)uVar2;
  local_48 = (wchar_t *)0x800000014be8ee48;
  local_34 = 0x13;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14676016c(&local_48);
  _DAT_14cc285d8 = 0;
  uRam000000014cc285e0 = 0;
  DAT_14cc285e8 = 0;
  _DAT_14cc285f0 = 0;
  local_48 = L"/GbxWeatherOcclusion/MPC_GbxWeatherOcclusion.MPC_GbxWeatherOcclusion";
  local_40 = 0x44;
  FUN_14475bf92(&DAT_14cc285d8,&local_48);
  atexit((_func_5014 *)&LAB_1446439e4);
  _DAT_14cc285f8 = 0;
  uRam000000014cc28600 = 0;
  DAT_14cc28608 = 0;
  _DAT_14cc28610 = 0;
  local_48 = L"/GbxWeatherOcclusion/RVT_GbxWeatherOcclusion.RVT_GbxWeatherOcclusion";
  local_40 = 0x44;
  FUN_14475bf92(&DAT_14cc285f8,&local_48);
  atexit((_func_5014 *)&LAB_1446439f5);
  _DAT_14cc28618 = 0;
  uRam000000014cc28620 = 0;
  DAT_14cc28628 = 0;
  _DAT_14cc28630 = 0;
  local_48 = L"/GbxWeatherOcclusion/MI_GbxWeatherOcclusionData.MI_GbxWeatherOcclusionData";
  local_40 = 0x4a;
  FUN_14475bf92(&DAT_14cc28618,&local_48);
  atexit((_func_5014 *)&LAB_144643a06);
  _DAT_14cc28638 = 0;
  uRam000000014cc28640 = 0;
  DAT_14cc28648 = 0;
  _DAT_14cc28650 = 0;
  local_48 = L"/GbxWeatherOcclusion/MI_GbxWeatherOcclusionData_VT.MI_GbxWeatherOcclusionData_VT";
  local_40 = 0x50;
  FUN_14475bf92(&DAT_14cc28638,&local_48);
  atexit((_func_5014 *)&LAB_144643a17);
  _DAT_14cc28658 = 0;
  uRam000000014cc28660 = 0;
  DAT_14cc28668 = 0;
  _DAT_14cc28670 = 0;
  local_48 = L"/GbxWeatherOcclusion/RT_GbxWeatherOcclusionData.RT_GbxWeatherOcclusionData";
  local_40 = 0x4a;
  FUN_14475bf92(&DAT_14cc28658,&local_48);
  atexit((_func_5014 *)&LAB_144643a28);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc28708,L"gbx.WeatherOcclusion.DiscardRTSourceTexture",&local_48,
                L">= 0: When bUseRT == true, we will discard the source UTexture2D after copying the data to the RT, to save memory"
               );
  atexit(FUN_144643c0b);
  _DAT_14cc28720 = 0;
  _DAT_14cc28728 = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446466c4 FUN_1446466c4 body=102 status=ok
// SIG undefined FUN_1446466c4(void)

void FUN_1446466c4(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014be8f918;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14676050c(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464672c FUN_14464672c body=102 status=ok
// SIG undefined FUN_14464672c(void)

void FUN_14464672c(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014be8f9f0;
  local_14 = 0x15;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14676064e(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446467a0 FUN_1446467a0 body=119 status=ok
// SIG undefined FUN_1446467a0(void)

void FUN_1446467a0(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146760790();
  atexit((_func_5014 *)&LAB_144646794);
  local_28 = 0x800000014be8fad0;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146760832(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144646818 FUN_144646818 body=69 status=ok
// SIG undefined FUN_144646818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144646818(void)

{
  _DAT_14cc287b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464685a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc287c0,1);
  return;
}



// FUNCTION 14464685d FUN_14464685d body=69 status=ok
// SIG undefined FUN_14464685d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464685d(void)

{
  _DAT_14cc287c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464689f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc287d0,1);
  return;
}



// FUNCTION 1446468a2 FUN_1446468a2 body=70 status=ok
// SIG undefined FUN_1446468a2(void)

void FUN_1446468a2(longlong param_1)

{
  FUN_145ac74ea();
  if ((DAT_14cc287e0 != -1) && (DAT_14cc287e0 = DAT_14cc287e0 + -1, DAT_14cc287e0 == 0)) {
    FUN_140457ffc(&DAT_14cae3a10,&DAT_14cc287e0);
  }
  FUN_145eb7e54(param_1 + 0x38);
  return;
}



// FUNCTION 1446468e8 FUN_1446468e8 body=41 status=ok
// SIG undefined FUN_1446468e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446468e8(void)

{
  _DAT_14cc28830 = 0;
  if (DAT_14cc28828 != 0) {
    FUN_1400020a8();
  }
  FUN_146194796();
  return;
}



// FUNCTION 1446469aa FUN_1446469aa body=377 status=ok
// SIG undefined FUN_1446469aa(void)

void FUN_1446469aa(longlong param_1,int *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  float *pfVar3;
  undefined8 uVar4;
  ushort *puVar5;
  bool bVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  longlong *plVar11;
  ushort uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  float local_68;
  char local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x108);
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x18) + 8);
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  iVar7 = *param_2;
  lVar13 = *plVar11;
  iVar9 = *(int *)(lVar13 + 0x10);
  if (iVar9 <= iVar7) {
    do {
      plVar11 = plVar11 + 1;
      iVar7 = iVar7 - iVar9;
      lVar13 = *plVar11;
      iVar9 = *(int *)(lVar13 + 0x10);
    } while (iVar9 <= iVar7);
  }
  pfVar3 = *(float **)(*(longlong *)(lVar13 + 8) + (longlong)iVar7 * 8);
  plVar2 = *(longlong **)(pfVar3 + 2);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(ushort *)(plVar2 + 2);
    uVar4 = *(undefined8 *)(pfVar3 + 6);
    pfVar3[1] = *pfVar3;
    puVar5 = *(ushort **)(param_1 + 0x10);
    if ((longlong)*(int *)(puVar5 + 0x388) == 0) {
      fVar15 = 0.0;
    }
    else {
      uVar12 = uVar1 & 0x3f;
      puVar10 = *(ushort **)(puVar5 + 0x380);
      if (*(ushort **)(puVar5 + 0x380) == (ushort *)0x0) {
        puVar10 = puVar5;
      }
      lVar13 = (longlong)*(int *)(puVar5 + 0x388) * 0x70;
      fVar14 = -3.4028235e+38;
      do {
        uVar8 = *puVar10 & uVar12;
        bVar6 = uVar8 != 0;
        if ((uVar1 & 0x40) == 0) {
          bVar6 = uVar8 == uVar12;
        }
        fVar15 = fVar14;
        if (((bVar6) &&
            ((**(code **)(*plVar2 + 0x10))(plVar2,&local_68,uVar4,puVar10), local_64 != '\0')) &&
           (fVar15 = local_68, local_68 <= fVar14)) {
          fVar15 = fVar14;
        }
        puVar10 = puVar10 + 0x38;
        lVar13 = lVar13 + -0x70;
        fVar14 = fVar15;
      } while (lVar13 != 0);
    }
    *pfVar3 = fVar15;
    if ((*(ushort *)(plVar2 + 2) & 0x380) == 0x280) {
      local_80 = 0xffffffff;
      local_88 = 0xffffffff;
      local_78 = 0;
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar4,fVar15,pfVar3[1]);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144646b24 FUN_144646b24 body=1041 status=ok
// SIG undefined FUN_144646b24(void)

void FUN_144646b24(longlong param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  uint local_360;
  undefined1 local_358;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x108);
  lVar9 = *(longlong *)(param_1 + 8) + 8;
  if (lVar14 != 0) {
    lVar9 = lVar14;
  }
  puVar2 = *(uint **)(lVar9 + (longlong)*param_2 * 8);
  uVar23 = *puVar2;
  if ((uVar23 >> 8 & 1) != 0) {
    uVar1 = puVar2[4];
    if (1 < (longlong)(int)uVar1) {
      lVar14 = *(longlong *)(puVar2 + 2);
      memset(local_338,0,0x2f0);
      local_340 = lVar14 + (longlong)(int)uVar1 * 8 + -8;
      local_348 = lVar14;
      fVar30 = logf((float)(int)uVar1);
      local_338[0] = (int)(longlong)(fVar30 + fVar30);
      plVar10 = &local_348;
      do {
        puVar11 = (undefined8 *)*plVar10;
        puVar12 = (undefined8 *)plVar10[1];
        iVar19 = (int)plVar10[2];
        iVar15 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar11) >> 3);
        uVar24 = (ulonglong)(iVar15 + 1);
        puVar17 = puVar12;
        puVar27 = puVar11;
        if (iVar19 != 0) {
LAB_144646bef:
          puVar13 = puVar11;
          if (8 < (int)(uint)uVar24) {
            uVar23 = (uint)uVar24 >> 1;
            uVar3 = puVar13[uVar23];
            puVar13[uVar23] = *puVar13;
            *puVar13 = uVar3;
            puVar25 = puVar17 + 1;
            puVar11 = puVar13;
            do {
              puVar7 = puVar11 + 1;
              puVar18 = puVar11 + 1;
              do {
                puVar28 = puVar18;
                puVar11 = puVar7;
                if (puVar17 < puVar11) break;
                puVar7 = puVar11 + 1;
                puVar18 = puVar28 + 1;
              } while (*(float *)*puVar13 < *(float *)*puVar11 ||
                       *(float *)*puVar13 == *(float *)*puVar11);
              puVar7 = puVar25 + -2;
              do {
                puVar18 = puVar25;
                puVar26 = puVar7;
                puVar25 = puVar18 + -1;
                if (puVar25 <= puVar13) break;
                puVar7 = puVar26 + -1;
              } while (*(float *)*puVar25 < *(float *)*puVar13 ||
                       *(float *)*puVar25 == *(float *)*puVar13);
              if (puVar25 < puVar11) goto LAB_144646c83;
              uVar3 = *puVar11;
              *puVar11 = *puVar25;
              *puVar25 = uVar3;
            } while( true );
          }
          if (puVar13 < puVar17) {
            do {
              puVar11 = puVar13;
              if (puVar13 + 1 <= puVar17) {
                fVar30 = *(float *)*puVar13;
                puVar12 = puVar13 + 1;
                do {
                  fVar8 = *(float *)*puVar12;
                  puVar27 = puVar12;
                  if (fVar30 <= *(float *)*puVar12) {
                    fVar8 = fVar30;
                    puVar27 = puVar11;
                  }
                  puVar11 = puVar27;
                  fVar30 = fVar8;
                  puVar12 = puVar12 + 1;
                } while (puVar12 <= puVar17);
              }
              uVar3 = *puVar11;
              *puVar11 = *puVar17;
              *puVar17 = uVar3;
              puVar17 = puVar17 + -1;
            } while (puVar13 < puVar17);
          }
          goto LAB_144646eb2;
        }
LAB_144646d17:
        iVar19 = (int)uVar24;
        if (iVar19 != 0) {
          iVar15 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
          iVar22 = iVar15;
joined_r0x000144646d3e:
          do {
            iVar21 = iVar15 * 2 + 1;
            if (iVar21 < iVar19) {
              iVar20 = iVar15 * 2 + 2;
              if ((iVar20 < iVar19) &&
                 (*(float *)puVar11[iVar20] < *(float *)puVar11[iVar21] ||
                  *(float *)puVar11[iVar20] == *(float *)puVar11[iVar21])) {
                iVar21 = iVar20;
              }
              pfVar4 = (float *)puVar11[iVar21];
              pfVar5 = (float *)puVar11[iVar15];
              fVar30 = *pfVar5;
              if (*pfVar4 <= fVar30 && fVar30 != *pfVar4) {
                puVar11[iVar15] = pfVar4;
                puVar11[iVar21] = pfVar5;
                iVar15 = iVar21;
                goto joined_r0x000144646d3e;
              }
            }
            bVar29 = iVar22 != 0;
            iVar15 = iVar22 + -1;
            iVar22 = iVar15;
          } while (bVar29);
          if (1 < iVar19) {
            uVar3 = *puVar11;
            *puVar11 = puVar11[uVar24 - 1];
            puVar11[uVar24 - 1] = uVar3;
            if (iVar19 != 2) {
              do {
                uVar16 = uVar24 - 1;
                iVar19 = 0;
                iVar22 = 1;
                iVar15 = 0;
                do {
                  iVar19 = iVar19 + 2;
                  iVar21 = iVar22;
                  if (((longlong)iVar19 < (longlong)uVar16) &&
                     (*(float *)puVar11[iVar19] < *(float *)puVar11[iVar22] ||
                      *(float *)puVar11[iVar19] == *(float *)puVar11[iVar22])) {
                    iVar21 = iVar19;
                  }
                  pfVar4 = (float *)puVar11[iVar21];
                  pfVar5 = (float *)puVar11[iVar15];
                  fVar30 = *pfVar5;
                  if (fVar30 < *pfVar4 || fVar30 == *pfVar4) break;
                  puVar11[iVar15] = pfVar4;
                  puVar11[iVar21] = pfVar5;
                  iVar19 = iVar21 * 2;
                  iVar22 = iVar21 * 2 + 1;
                  iVar15 = iVar21;
                } while ((longlong)iVar22 < (longlong)uVar16);
                uVar3 = *puVar11;
                *puVar11 = puVar11[uVar24 - 2];
                puVar11[uVar24 - 2] = uVar3;
                uVar24 = uVar16;
              } while (2 < uVar16);
            }
          }
        }
LAB_144646eb2:
        plVar10 = plVar10 + -3;
      } while (&local_348 <= plVar10);
      uVar23 = (uint)(ushort)*puVar2;
    }
    if (((uVar23 >> 9 & 1) == 0) && (uVar23 = puVar2[4], uVar23 != 0)) {
      lVar14 = 0;
      do {
        puVar6 = *(undefined4 **)(*(longlong *)(puVar2 + 2) + lVar14 * 8);
        local_368 = (undefined4)lVar14;
        local_358 = 0;
        local_360 = uVar23;
        (**(code **)(**(longlong **)(puVar6 + 2) + 0x18))
                  (*(longlong **)(puVar6 + 2),*(undefined8 *)(puVar6 + 6),*puVar6,puVar6[1]);
        lVar14 = lVar14 + 1;
        uVar23 = puVar2[4];
      } while (uVar23 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144646c83:
  uVar3 = *puVar13;
  *puVar13 = *puVar25;
  *puVar25 = uVar3;
  iVar19 = iVar19 + -1;
  puVar18 = puVar18 + -2;
  if ((longlong)puVar26 - (longlong)puVar27 < (longlong)puVar12 - (longlong)puVar28) {
    if (puVar11 < puVar17) {
      *plVar10 = (longlong)puVar11;
      plVar10[1] = (longlong)puVar17;
      *(int *)(plVar10 + 2) = iVar19;
      plVar10 = plVar10 + 3;
    }
    puVar11 = puVar13;
    puVar12 = puVar26;
    if (puVar25 <= puVar13 + 1) goto LAB_144646eb2;
  }
  else {
    if (puVar13 + 1 < puVar25) {
      *plVar10 = (longlong)puVar13;
      plVar10[1] = (longlong)puVar18;
      *(int *)(plVar10 + 2) = iVar19;
      plVar10 = plVar10 + 3;
    }
    puVar13 = puVar28;
    puVar18 = puVar17;
    puVar12 = puVar17;
    if (puVar17 <= puVar11) goto LAB_144646eb2;
  }
  iVar15 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar13) >> 3);
  uVar24 = (ulonglong)(iVar15 + 1);
  puVar17 = puVar18;
  puVar27 = puVar13;
  if (iVar19 == 0) goto LAB_144646d17;
  goto LAB_144646bef;
}



// FUNCTION 144646f36 FUN_144646f36 body=119 status=ok
// SIG undefined FUN_144646f36(void)

void FUN_144646f36(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x108);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 8) + 8);
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  iVar4 = *param_2;
  lVar5 = *plVar6;
  iVar3 = *(int *)(lVar5 + 0x10);
  if (iVar3 <= iVar4) {
    do {
      plVar6 = plVar6 + 1;
      iVar4 = iVar4 - iVar3;
      lVar5 = *plVar6;
      iVar3 = *(int *)(lVar5 + 0x10);
    } while (iVar3 <= iVar4);
  }
  if ((*(byte *)(lVar5 + 1) & 2) != 0) {
    puVar2 = *(undefined4 **)(*(longlong *)(lVar5 + 8) + (longlong)iVar4 * 8);
    (**(code **)(**(longlong **)(puVar2 + 2) + 0x18))
              (*(longlong **)(puVar2 + 2),*(undefined8 *)(puVar2 + 6),*puVar2,puVar2[1],iVar4,iVar3,
               0);
  }
  return;
}



// FUNCTION 144646fad FUN_144646fad body=247 status=ok
// SIG undefined FUN_144646fad(void)

void FUN_144646fad(void)

{
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/GbxSignificanceManager",&PTR_FUN_14be8ff80,1,0);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cc287b8,L"SigMan.gbx.GlobalTickRateSeconds",&DAT_14c7679f4,&DAT_149dfb77a);
  atexit(FUN_144646818);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cc287c8,L"SigMan.gbx.GlobalMinRemovesPerFrame",&DAT_14c7679f8,
                L"Min unregistrations before performing cleanup. 0 completes all");
  atexit(FUN_14464685d);
  local_28 = 0x800000014be90130;
  local_14 = 0x16;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146760ae2(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446470a8 FUN_1446470a8 body=57 status=ok
// SIG undefined FUN_1446470a8(void)

void FUN_1446470a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc288a8 == 0) {
    uVar1 = FUN_1458b7527();
    DAT_14cc288a8 = FUN_14171c317(FUN_146760d85,uVar1,L"EGbxPackedLevelStreamingMode");
  }
  return;
}



// FUNCTION 1446470e1 FUN_1446470e1 body=69 status=ok
// SIG undefined FUN_1446470e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446470e1(void)

{
  _DAT_14cc28948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144647123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28950,1);
  return;
}



// FUNCTION 144647126 FUN_144647126 body=140 status=ok
// SIG undefined FUN_144647126(void)

void FUN_144647126(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1405f1eac();
  plVar1 = (longlong *)FUN_1414ccdae();
  if (plVar1[0x22] == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
  }
  if (DAT_14cc28958 == '\x01') {
    FUN_147a3cccc(param_1);
  }
  plVar1 = (longlong *)FUN_1414ccdae();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) goto LAB_14464718d;
  }
  if (1 < *(int *)(lVar2 + 0x38)) {
    return;
  }
LAB_14464718d:
  FUN_14587c83e(param_1 + 0x390,0);
  return;
}



// FUNCTION 1446471b2 FUN_1446471b2 body=151 status=ok
// SIG undefined FUN_1446471b2(void)

void FUN_1446471b2(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 144647296 FUN_144647296 body=240 status=ok
// SIG undefined FUN_144647296(void)

float * FUN_144647296(float *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar5 = FUN_145a97e70();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar6 = (uint)uVar2 & 0xffff;
      iVar4 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4);
      *param_1 = (float)(iVar4 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
      param_1[1] = (float)(iVar4 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0;
      param_1[2] = (float)(iVar4 * 0x1c3c718d + 0xf50d3da5U >> 9 | 0x3f800000) + -1.0;
      param_1[3] = 1.0;
      return param_1;
    }
  }
  *(undefined1 **)param_1 = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 2) = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 144647386 FUN_144647386 body=416 status=ok
// SIG undefined FUN_144647386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144647386(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxPackedLevelStreamingCell",&PTR_FUN_14be91130,2,&PTR_FUN_14be91100);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14be92250;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxPackedLevelStreamingCell",&PTR_FUN_14be92310,1,&PTR_FUN_14be92270);
  local_40 = "SMInstance";
  local_38 = 10;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cc28930 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc28938);
  if (cVar1 == '\0') {
    _DAT_14cc28938 = 0;
    uRam000000014cc28940 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = CONCAT44(local_68._4_4_,0x40);
  FUN_14153156c(&DAT_14cc28948,L"wp.gbx.PackedLevelStreaming.ApplyGlobalDistanceCull",&DAT_14cc28958
                ,
                L"If true, apply Global Cull Distance Pairs to PackedLevelStreamingCell Actors. Requires level re-load when changed."
               );
  atexit(FUN_1446470e1);
  local_40 = (char *)0x800000014be92486;
  local_44 = 0x1b;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_1467610a0(&local_40);
  local_40 = "GbxPackedLevelStreamingCellActor";
  local_38 = 0x20;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144647528 FUN_144647528 body=102 status=ok
// SIG undefined FUN_144647528(void)

void FUN_144647528(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014be92e8a;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146761274(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144647590 FUN_144647590 body=4948 status=ok
// SIG undefined FUN_144647590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144647590(uint *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auStack_9bc8 [32];
  longlong *local_9ba8;
  ulonglong local_9ba0;
  ulonglong local_9b98;
  ulonglong local_9b90;
  ulonglong local_9b88;
  ulonglong local_9b80;
  int local_9b74;
  uint *local_9b70;
  ulonglong local_9b68;
  longlong local_9b60;
  undefined1 local_9b58 [32];
  undefined1 local_9b38 [8];
  uint local_9b30;
  uint local_9b2c;
  uint local_9b18 [8];
  uint local_9af8;
  int local_9af4;
  undefined8 local_9af0;
  float local_9ae8 [5];
  undefined4 local_9ad4;
  float local_9ac8;
  wchar_t local_9ac4 [2];
  float local_9ac0;
  undefined4 local_9abc;
  undefined8 local_9a40;
  undefined8 uStack_9a38;
  uint local_9a30;
  ulonglong local_90;
  undefined8 uStack_48;
  undefined8 extraout_XMM0_Qb;
  
  uStack_48 = 0x1446475a6;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_9bc8;
  if ((*param_1 & 0x100) != 0) {
    if (*param_2 == 0) {
      ffxPrintMessage(0);
    }
    if (param_2[1] == 0) {
      ffxPrintMessage(0);
    }
    if (param_2[0x17] == 0) {
      ffxPrintMessage(0);
    }
    if (param_2[0x2d] == 0) {
      ffxPrintMessage(0);
    }
    if ((param_2[0x43] != 0) && ((*param_1 & 0x20) != 0)) {
      ffxPrintMessage(1);
    }
    if (param_2[199] == 0) {
      ffxPrintMessage(0);
    }
    if ((1.0 < ABS(*(float *)(param_2 + 0xdd))) ||
       (1.0 < ABS(*(float *)((longlong)param_2 + 0x6ec)))) {
      ffxPrintMessage(1);
    }
    fVar16 = *(float *)(param_2 + 0xde);
    if (((float)param_1[1] < fVar16) || ((float)param_1[2] < *(float *)((longlong)param_2 + 0x6f4)))
    {
      ffxPrintMessage(1);
      fVar16 = *(float *)(param_2 + 0xde);
    }
    if (((fVar16 == 0.0) && (!NAN(fVar16))) ||
       ((*(float *)((longlong)param_2 + 0x6f4) == 0.0 &&
        (!NAN(*(float *)((longlong)param_2 + 0x6f4)))))) {
      ffxPrintMessage(1);
    }
    uVar14 = *(uint *)(param_2 + 0xdf);
    if ((param_1[1] < uVar14) || (param_1[2] < *(uint *)((longlong)param_2 + 0x6fc))) {
      ffxPrintMessage(1);
      uVar14 = *(uint *)(param_2 + 0xdf);
    }
    if ((uVar14 == 0) || (*(int *)((longlong)param_2 + 0x6fc) == 0)) {
      ffxPrintMessage(1);
    }
    if ((*(float *)((longlong)param_2 + 0x70c) < 0.0) ||
       (1.0 < *(float *)((longlong)param_2 + 0x70c))) {
      ffxPrintMessage(1);
    }
    if (*(float *)(param_2 + 0xe2) <= 1.0 && *(float *)(param_2 + 0xe2) != 1.0) {
      ffxPrintMessage(1);
    }
    if ((*(float *)((longlong)param_2 + 0x714) == 0.0) &&
       (!NAN(*(float *)((longlong)param_2 + 0x714)))) {
      ffxPrintMessage(0);
    }
    uVar14 = *param_1;
    if ((uVar14 & 8) == 0) {
      if (*(float *)(param_2 + 0xe4) < *(float *)((longlong)param_2 + 0x71c)) {
        ffxPrintMessage(1);
      }
      if (((uVar14 & 0x10) != 0) &&
         ((*(float *)(param_2 + 0xe4) != 3.4028235e+38 || (NAN(*(float *)(param_2 + 0xe4)))))) {
        ffxPrintMessage(1);
      }
      if (*(float *)((longlong)param_2 + 0x71c) <= 0.075 &&
          *(float *)((longlong)param_2 + 0x71c) != 0.075) {
LAB_1446488aa:
        ffxPrintMessage(1);
      }
    }
    else {
      if (*(float *)((longlong)param_2 + 0x71c) < *(float *)(param_2 + 0xe4)) {
        ffxPrintMessage(1);
      }
      if (((uVar14 & 0x10) != 0) &&
         ((*(float *)((longlong)param_2 + 0x71c) != 3.4028235e+38 ||
          (NAN(*(float *)((longlong)param_2 + 0x71c)))))) {
        ffxPrintMessage(1);
      }
      if (*(float *)(param_2 + 0xe4) <= 0.075 && *(float *)(param_2 + 0xe4) != 0.075)
      goto LAB_1446488aa;
    }
    fVar16 = *(float *)((longlong)param_2 + 0x724);
    if (fVar16 <= 0.0) {
      ffxPrintMessage(0);
      fVar16 = *(float *)((longlong)param_2 + 0x724);
    }
    if (3.1415927 < fVar16) {
      ffxPrintMessage(0);
    }
  }
  local_9b60 = *param_2;
  if ((byte)param_1[0x1ac30] == 1) {
    memset(&local_9ac8,0,0x9a38);
    wcscpy_s(local_9ac4,0x40,L"Clear Accumulation 1");
    local_9a30 = param_1[0x1abcc];
    puVar1 = param_1 + 8;
    (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
    wcscpy_s(local_9ac4,0x40,L"Clear Accumulation 2");
    local_9a30 = param_1[0x1abcd];
    (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
    wcscpy_s(local_9ac4,0x40,L"Clear Temporal Luma 1");
    local_9a30 = param_1[0x1abe0];
    (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
    wcscpy_s(local_9ac4,0x40,L"Clear Temporal Luma 2");
    local_9a30 = param_1[0x1abe1];
    (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
  }
  uVar14 = param_1[0x1ac31] & 1;
  bVar10 = 1;
  if ((char)param_2[0xe3] == '\0') {
    bVar10 = (byte)param_1[0x1ac30];
  }
  local_9b90 = CONCAT71(local_9b90._1_7_,bVar10);
  *(byte *)(param_1 + 0x1ac30) = 0;
  puVar1 = param_1 + 8;
  (**(code **)(param_1 + 0x14))(puVar1,param_2 + 1,param_1[0x42],param_1 + 0x1abba);
  (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0x17,param_1[0x42],param_1 + 0x1abbc);
  (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0x2d,param_1[0x42],param_1 + 0x1abbb);
  (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0x9b,param_1[0x42],param_1 + 0x1abc1);
  param_1[0x1abfd] = param_1[0x1abc1];
  (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0x85,param_1[0x42],param_1 + 0x1abc2);
  param_1[0x1abfe] = param_1[0x1abc2];
  (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0xb1,param_1[0x42],param_1 + 0x1abc0);
  param_1[0x1abfc] = param_1[0x1abc0];
  if ((*param_1 & 0x20) == 0) {
    if (param_2[0x43] == 0) {
      uVar7 = param_1[0x1abd9];
      goto LAB_144647a54;
    }
    (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0x43,param_1[0x42],param_1 + 0x1abbd);
  }
  else {
    uVar7 = param_1[0x1abda];
LAB_144647a54:
    param_1[0x1abbd] = uVar7;
  }
  if (param_2[0x59] == 0) {
    param_1[0x1abbe] = param_1[0x1abd0];
  }
  else {
    (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0x59,param_1[0x42],param_1 + 0x1abbe);
  }
  local_9ba8 = (longlong *)((ulonglong)uVar14 | 0x14);
  local_9ba0 = CONCAT44(local_9ba0._4_4_,uVar14 + 0x16);
  local_9b98 = CONCAT44(local_9b98._4_4_,uVar14 + 0x28);
  if (param_2[0x6f] == 0) {
    param_1[0x1abbf] = param_1[0x1abd0];
  }
  else {
    (**(code **)(param_1 + 0x14))(puVar1,param_2 + 0x6f,param_1[0x42],param_1 + 0x1abbf);
  }
  (**(code **)(param_1 + 0x14))(puVar1,param_2 + 199,param_1[0x42],param_1 + 0x1ac06);
  param_1[0x1abc4] = param_1[(longlong)local_9ba8 + 0x1abb8];
  param_1[0x1abc3] = param_1[(local_9ba0 & 0xffffffff) + 0x1abb8];
  param_1[0x1ac00] = param_1[(ulonglong)(uVar14 ^ 0x15) + 0x1abf4];
  uVar7 = param_1[(ulonglong)(uVar14 ^ 0x17) + 0x1abf4];
  param_1[0x1abff] = uVar7;
  param_1[0x1abcb] = uVar7;
  param_1[0x1abe5] = param_1[(local_9b98 & 0xffffffff) + 0x1abb8];
  param_1[0x1ac21] = param_1[(local_9b98 & 0xffffffff) + 0x1abf4];
  param_1[0x1abe6] = param_1[(ulonglong)(uVar14 ^ 0x29) + 0x1abb8];
  param_1[0x1ac02] = param_1[(ulonglong)(uVar14 == 0) + 0x1ac19];
  param_1[0x1abc6] = param_1[0x1abde - (ulonglong)(uVar14 == 0)];
  param_1[0x1abe3] = param_1[0x1abe9];
  param_1[0x1ac1f] = param_1[0x1ac25];
  param_1[0x1abe8] = param_1[0x1abe9];
  param_1[0x1ac24] = param_1[0x1ac25];
  (**(code **)(param_1 + 0x1c))(local_9b38,puVar1,param_1[0x1abba]);
  (**(code **)(param_1 + 0x1c))(local_9b58,puVar1,param_1[0x1abbe]);
  *(undefined8 *)(param_1 + 0x55) = *(undefined8 *)(param_1 + 0x53);
  param_1[0x53] = *(uint *)(param_2 + 0xdd);
  param_1[0x54] = *(uint *)((longlong)param_2 + 0x6ec);
  *(undefined8 *)(param_1 + 0x45) = *(undefined8 *)(param_1 + 0x43);
  uVar14 = *(uint *)(param_2 + 0xdf);
  if (*(uint *)(param_2 + 0xdf) == 0) {
    uVar14 = local_9b30;
  }
  param_1[0x43] = uVar14;
  uVar14 = *(uint *)((longlong)param_2 + 0x6fc);
  if (*(uint *)((longlong)param_2 + 0x6fc) == 0) {
    uVar14 = local_9b2c;
  }
  param_1[0x44] = uVar14;
  param_1[0x4b] = param_1[1];
  param_1[0x4c] = param_1[2];
  uVar14 = *(uint *)(param_2 + 0xdf);
  uVar7 = *(uint *)((longlong)param_2 + 0x6fc);
  fVar16 = tanf(*(float *)((longlong)param_2 + 0x724) * 0.5);
  fVar16 = atanf(fVar16 * ((float)uVar14 / (float)uVar7));
  fVar16 = tanf((fVar16 + fVar16) * 0.5);
  param_1[0x5d] = (uint)fVar16;
  uVar14 = -(uint)(0.0 < *(float *)(param_2 + 0xe5));
  uVar23 = 0x3f800000;
  param_1[0x61] = ~uVar14 & 0x3f800000 | (uint)*(float *)(param_2 + 0xe5) & uVar14;
  local_9ae8[3] = *(float *)((longlong)param_2 + 0x71c);
  fVar16 = *(float *)(param_2 + 0xe4);
  fVar17 = local_9ae8[3];
  if (fVar16 <= local_9ae8[3]) {
    fVar17 = fVar16;
  }
  if (local_9ae8[3] <= fVar16) {
    local_9ae8[3] = fVar16;
  }
  uVar14 = *param_1 & 8;
  fVar16 = fVar17;
  if (uVar14 != 0) {
    fVar16 = local_9ae8[3];
    local_9ae8[3] = fVar17;
  }
  local_9ac8 = local_9ae8[3] / (fVar16 - local_9ae8[3]);
  local_9ac4[0] = L'\x01';
  local_9ac4[1] = L'뾀';
  local_9ac0 = local_9ac8;
  local_9abc = 0x34000000;
  local_9ae8[0] = local_9ac8 * fVar16;
  local_9ae8[1] = -1.1920929e-07 - fVar16;
  local_9ae8[2] = local_9ac8 * fVar16;
  uVar18 = (ulonglong)(*param_1 >> 2 & 4);
  param_1[0x4f] = *(uint *)((longlong)&local_9ac8 + uVar18 + uVar14) ^ 0x80000000;
  param_1[0x50] = *(uint *)((longlong)local_9ae8 + uVar18 + uVar14);
  uVar14 = *(uint *)(param_2 + 0xdf);
  uVar7 = *(uint *)((longlong)param_2 + 0x6fc);
  fVar16 = cosf(*(float *)((longlong)param_2 + 0x724) * 0.5);
  fVar17 = sinf(*(float *)((longlong)param_2 + 0x724) * 0.5);
  param_1[0x51] = (uint)(1.0 / ((fVar16 / fVar17) / ((float)uVar14 / (float)uVar7)));
  param_1[0x52] = (uint)(1.0 / (fVar16 / fVar17));
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_1 + 0x47);
  uVar14 = *(uint *)(param_2 + 0xe0);
  if (*(int *)((longlong)param_2 + 0x704) == 0 && uVar14 == 0) {
    uVar14 = param_1[3];
    puVar9 = param_1 + 4;
  }
  else {
    puVar9 = (uint *)((longlong)param_2 + 0x704);
  }
  param_1[0x47] = uVar14;
  uVar7 = *puVar9;
  param_1[0x48] = uVar7;
  uVar2 = param_1[0x43];
  local_9b70 = param_1 + 0x43;
  uVar3 = param_1[0x44];
  param_1[0x59] = (uint)((float)(int)uVar2 / (float)(int)uVar14);
  param_1[0x5a] = (uint)((float)(int)uVar3 / (float)(int)uVar7);
  param_1[0x60] = 0x3f800000;
  fVar16 = (float)param_1[0x1ac34];
  param_1[0x1ac35] = (uint)fVar16;
  uVar15 = -(uint)(*(float *)((longlong)param_2 + 0x714) != 0.0);
  fVar17 = (float)(~uVar15 & 0x3f800000 | (uint)*(float *)((longlong)param_2 + 0x714) & uVar15);
  param_1[0x1ac34] = (uint)fVar17;
  if (0.0 < fVar16) {
    param_1[0x60] = (uint)(fVar17 / fVar16);
  }
  uVar15 = *param_1;
  puVar9 = param_1 + 0x47;
  if ((uVar15 & 2) == 0) {
    puVar9 = local_9b70;
  }
  uVar4 = param_1[(ulonglong)(uVar15 & 2) * 2 + 0x43];
  param_1[0x57] = (uint)(*(float *)(param_2 + 0xde) / (float)(int)uVar4);
  param_1[0x58] = (uint)(*(float *)((longlong)param_2 + 0x6f4) / (float)(int)puVar9[1]);
  if ((uVar15 & 4) != 0) {
    param_1[0x5b] = (uint)(((float)param_1[0x1ac32] - (float)param_1[0x53]) / (float)(int)uVar4);
    param_1[0x5c] = (uint)(((float)param_1[0x1ac33] - (float)param_1[0x54]) / (float)(int)puVar9[1])
    ;
    param_1[0x1ac32] = param_1[0x53];
    param_1[0x1ac33] = param_1[0x54];
  }
  fVar16 = (float)(int)uVar14 / (float)(int)param_2[0xdf];
  iVar8 = (int)(fVar16 * fVar16 * 8.0);
  if ((char)local_9b90 == '\0') {
    fVar16 = (float)param_1[0x5e];
    if ((fVar16 == 0.0) && (!NAN(fVar16))) goto LAB_144648036;
    iVar8 = (int)((float)iVar8 - fVar16);
    if (iVar8 < 1) {
      if (-1 < iVar8) goto LAB_144648045;
      fVar16 = fVar16 + -1.0;
    }
    else {
      fVar16 = fVar16 + 1.0;
    }
  }
  else {
LAB_144648036:
    fVar16 = (float)iVar8;
  }
  param_1[0x5e] = (uint)fVar16;
LAB_144648045:
  fVar22 = *(float *)(param_2 + 0xe2) / 1000.0;
  fVar21 = 0.0;
  fVar16 = (float)(~-(uint)(fVar22 < 0.0) & 0x3f800000 |
                  -(uint)(1.0 < fVar22) & 0x3f800000 & -(uint)(fVar22 < 0.0));
  fVar17 = fVar16;
  if (fVar22 <= 1.0) {
    fVar17 = fVar22;
  }
  if (0.0 <= fVar22) {
    fVar16 = fVar17;
  }
  param_1[0x5f] = (uint)fVar16;
  if ((char)local_9b90 == '\0') {
    fVar21 = (float)param_1[0x62] + 1.0;
  }
  uVar4 = uVar2 + 0xe;
  if (-1 < (int)(uVar2 + 7)) {
    uVar4 = uVar2 + 7;
  }
  local_9b98 = (ulonglong)uVar4;
  uVar4 = uVar3 + 0xe;
  if (-1 < (int)(uVar3 + 7)) {
    uVar4 = uVar3 + 7;
  }
  local_9ba0 = (ulonglong)uVar4;
  param_1[0x62] = (uint)fVar21;
  iVar8 = uVar14 + 0xe;
  if (-1 < (int)(uVar14 + 7)) {
    iVar8 = uVar14 + 7;
  }
  iVar13 = uVar7 + 0xe;
  if (-1 < (int)(uVar7 + 7)) {
    iVar13 = uVar7 + 7;
  }
  iVar11 = (int)((float)(int)uVar2 * 0.5);
  uVar14 = iVar11 + 7;
  uVar7 = iVar11 + 0xe;
  if (-1 < (int)uVar14) {
    uVar7 = uVar14;
  }
  local_9b80 = (ulonglong)uVar7;
  iVar11 = (int)((float)(int)uVar3 * 0.5);
  uVar14 = iVar11 + 7;
  uVar7 = iVar11 + 0xe;
  if (-1 < (int)uVar14) {
    uVar7 = uVar14;
  }
  local_9b88 = (ulonglong)uVar7;
  if ((char)local_9b90 != '\0') {
    memset(&local_9ac8,0,0x9a38);
    wcscpy_s(local_9ac4,0x40,L"Clear Resource");
    local_9a40 = 0;
    uStack_9a38 = 0;
    local_9a30 = param_1[(longlong)local_9ba8 + 0x1abb8];
    (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
    wcscpy_s(local_9ac4,0x40,L"Clear Scene Luminance");
    local_9a30 = param_1[0x1abd3];
    (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
    local_9a40 = 0x3f800000bf800000;
    uStack_9a38 = 0;
    wcscpy_s(local_9ac4,0x40,L"Clear Frame Info");
    local_9a30 = param_1[0x1abda];
    (**(code **)(param_1 + 0x2a))(puVar1);
    uVar15 = *param_1;
  }
  lVar12 = 0;
  local_9ba8 = param_2;
  memset(&local_9ac8,0,0x9a38);
  if ((uVar15 & 8) != 0) {
    uVar23 = 0;
  }
  local_9b98 = (ulonglong)(uint)((int)local_9b98 >> 3);
  local_9ba0 = (ulonglong)(uint)((int)local_9ba0 >> 3);
  local_9b90 = (ulonglong)(uint)(iVar8 >> 3);
  local_9b68 = (ulonglong)(uint)(iVar13 >> 3);
  local_9b80 = (ulonglong)(uint)((int)local_9b80 >> 3);
  local_9b88 = (ulonglong)(uint)((int)local_9b88 >> 3);
  local_9a40 = CONCAT44(uVar23,uVar23);
  uStack_9a38 = CONCAT44(uVar23,uVar23);
  wcscpy_s(local_9ac4,0x40,L"Clear Reconstructed Previous Nearest Depth");
  local_9a30 = param_1[0x1abc0];
  (**(code **)(param_1 + 0x2a))(puVar1);
  memset(&local_9ac8,0,0x9a38);
  wcscpy_s(local_9ac4,0x40,L"Clear Spd Atomic Count");
  local_9a40 = 0;
  uStack_9a38 = 0;
  local_9a30 = param_1[0x1ac05];
  (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
  plVar5 = local_9ba8;
  uVar14 = *(uint *)(local_9ba8 + 0xdf);
  uVar7 = *(uint *)((longlong)local_9ba8 + 0x6fc);
  local_9b74 = (uVar14 - 1 >> 6) + 1;
  iVar13 = (uVar7 - 1 >> 6) + 1;
  iVar8 = iVar13 * local_9b74;
  if (uVar7 < uVar14) {
    uVar7 = uVar14;
  }
  auVar19._0_8_ = log2f((float)uVar7);
  auVar19._8_8_ = extraout_XMM0_Qb;
  auVar20 = roundss(auVar19,auVar19,9);
  if (12.0 <= auVar20._0_4_) {
    auVar20._0_4_ = 0x41400000;
  }
  local_9ae8[0] = (float)(longlong)auVar20._0_4_;
  local_9ae8[2] = 0.0;
  local_9ae8[3] = 0.0;
  local_9ae8[4] = (float)plVar5[0xdf];
  local_9ad4 = *(undefined4 *)((longlong)plVar5 + 0x6fc);
  local_9ae8[1] = (float)iVar8;
  uVar18 = exp2f();
  local_9af8 = (uint)uVar18;
  uVar18 = uVar18 >> 0x17 & 0x1ff;
  local_9af4 = (((local_9af8 & 0x7fffff) >> ((&DAT_14be962a0)[uVar18] & 0x1f)) +
               (uint)*(ushort *)(&DAT_14be95ea0 + uVar18 * 2)) * 0x10001;
  local_9af0 = 0;
  (**(code **)(param_1 + 0x24))(puVar1,local_9b70,0x94,param_1 + 0x1aba8);
  (**(code **)(param_1 + 0x24))(puVar1,local_9ae8,0x18,param_1 + 0x1abac);
  (**(code **)(param_1 + 0x24))(puVar1,&local_9af8,0x10,param_1 + 0x1abb0);
  local_9b18[0] = param_1[0x1ac25];
  local_9b18[1] = param_1[0x1ac1e];
  local_9b18[2] = param_1[0x1ac01];
  local_9b18[3] = param_1[0x1ac20];
  local_9b18[4] = param_1[0x1ac0e];
  do {
    memset(&local_9ac8,0,0x9a38);
    local_9ac8 = 5.60519e-45;
    local_9a40 = CONCAT44(local_9a40._4_4_,local_9b18[lVar12]);
    (**(code **)(param_1 + 0x2a))(puVar1);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 5);
  memset(&local_9ac8,0,0x9a38);
  wcscpy_s(local_9ac4,0x40,L"Clear Spd Atomic Count");
  local_9a40 = 0;
  uStack_9a38 = 0;
  local_9a30 = param_1[0x1ac0f];
  (**(code **)(param_1 + 0x2a))(puVar1,&local_9ac8);
  uVar6 = local_9b98;
  uVar18 = local_9ba0;
  FUN_144648a62(param_1,param_1 + 0x70,local_9b98 & 0xffffffff,local_9ba0 & 0xffffffff);
  iVar8 = local_9b74;
  FUN_144648a62(param_1,param_1 + 0xd60c,local_9b74,iVar13);
  FUN_144648a62(param_1,param_1 + 0x140da,iVar8,iVar13);
  FUN_144648a62(param_1,param_1 + 0x47a4,local_9b80,local_9b88);
  FUN_144648a62(param_1,param_1 + 0x240a,uVar6 & 0xffffffff,uVar18 & 0xffffffff);
  FUN_144648a62(param_1,param_1 + 0x16474,uVar6 & 0xffffffff,uVar18 & 0xffffffff);
  uVar6 = local_9b68;
  uVar18 = local_9b90;
  plVar5 = local_9ba8;
  puVar9 = param_1 + 0x8ed8;
  if ((char)local_9ba8[0xe1] == '\0') {
    puVar9 = param_1 + 0x6b3e;
  }
  FUN_144648a62(param_1,puVar9,local_9b90 & 0xffffffff,local_9b68 & 0xffffffff);
  if ((char)plVar5[0xe1] != '\0') {
    iVar8 = param_1[0x47] + 0xf;
    iVar13 = param_1[0x47] + 0x1e;
    if (-1 < iVar8) {
      iVar13 = iVar8;
    }
    iVar8 = param_1[0x48] + 0xf;
    iVar11 = param_1[0x48] + 0x1e;
    if (-1 < iVar8) {
      iVar11 = iVar8;
    }
    FUN_144648a62(param_1,param_1 + 0xb272,iVar13 >> 4,iVar11 >> 4);
  }
  if ((*(byte *)((longlong)plVar5 + 0x72c) & 1) != 0) {
    FUN_144648a62(param_1,param_1 + 0x1880e,uVar18 & 0xffffffff,uVar6 & 0xffffffff);
  }
  lVar12 = local_9b60;
  param_1[0x1ac31] = param_1[0x1ac31] + 1 & 0xf;
  (**(code **)(param_1 + 0x2c))(puVar1,local_9b60,param_1[0x42]);
  (**(code **)(param_1 + 0x18))(puVar1,lVar12,param_1[0x42]);
  if ((local_90 ^ (ulonglong)auStack_9bc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446488e5 FUN_1446488e5 body=381 status=ok
// SIG undefined FUN_1446488e5(void)

undefined8 FUN_1446488e5(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((ulonglong)uVar1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = 0;
      while (iVar2 = wcscmp((wchar_t *)((longlong)L"r_input_color_jittered" + lVar3),
                            (wchar_t *)(param_1 + uVar4 * 0x8c + 0x2350)), iVar2 != 0) {
        lVar3 = lVar3 + 0x84;
        if (lVar3 == 0xce4) {
          return 0x8000000a;
        }
      }
      *(undefined4 *)(param_1 + 0x234c + uVar4 * 0x8c) =
           *(undefined4 *)((longlong)&DAT_14be937c0 + lVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((ulonglong)uVar1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = 0;
      while (iVar2 = wcscmp((wchar_t *)
                            ((longlong)L"rw_reconstructed_previous_nearest_depth" + lVar3),
                            (wchar_t *)(param_1 + uVar4 * 0x8c + 0x50)), iVar2 != 0) {
        lVar3 = lVar3 + 0x84;
        if (lVar3 == 0xbdc) {
          return 0x8000000a;
        }
      }
      *(undefined4 *)(param_1 + 0x4c + uVar4 * 0x8c) =
           *(undefined4 *)((longlong)&DAT_14be944b0 + lVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((ulonglong)uVar1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = 0;
      while (iVar2 = wcscmp((wchar_t *)((longlong)L"cbFSR3Upscaler" + lVar3),
                            (wchar_t *)(uVar4 * 0x8c + param_1 + 0x8c50)), iVar2 != 0) {
        lVar3 = lVar3 + 0x84;
        if (lVar3 == 0x210) {
          return 0x8000000a;
        }
      }
      *(undefined4 *)(param_1 + 0x8c4c + uVar4 * 0x8c) =
           *(undefined4 *)((longlong)&DAT_14be95090 + lVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return 0;
}



// FUNCTION 144648a62 FUN_144648a62 body=455 status=ok
// SIG undefined FUN_144648a62(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144648a62(longlong param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_13438 [32];
  undefined4 uStack_13418;
  wchar_t awStack_13414 [66];
  undefined1 auStack_13390 [39344];
  undefined1 local_99e0 [36456];
  undefined4 local_b78;
  undefined4 local_b74;
  undefined4 local_b70 [3];
  undefined4 auStack_b64 [320];
  uint auStack_664 [385];
  undefined8 local_60 [6];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_13438;
  memset(local_b70,0,0xb40);
  uVar2 = *(uint *)((longlong)param_2 + 0x24);
  if ((ulonglong)uVar2 != 0) {
    puVar5 = (uint *)((longlong)param_2 + 0x234c);
    uVar7 = 0;
    do {
      auStack_b64[uVar7] = *(undefined4 *)(param_1 + 0x6aee0 + (ulonglong)*puVar5 * 4);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 != uVar7);
  }
  uVar2 = *(uint *)((longlong)param_2 + 0x20);
  if ((ulonglong)uVar2 != 0) {
    puVar5 = (uint *)((longlong)param_2 + 0x4c);
    uVar7 = 0;
    do {
      uVar9 = *puVar5 - 0x1b;
      puVar4 = (uint *)(param_1 + 0x6b03c);
      if (5 < uVar9) {
        uVar9 = 0;
        puVar4 = (uint *)(param_1 + 0x6afd0 + (ulonglong)*puVar5 * 4);
      }
      auStack_664[uVar7 * 2 + 1] = *puVar4;
      auStack_664[uVar7 * 2] = uVar9;
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 != uVar7);
  }
  local_b70[0] = 1;
  local_b78 = param_3;
  local_b74 = param_4;
  memcpy(local_99e0,param_2,0x8e68);
  uVar2 = *(uint *)((longlong)param_2 + 0x40);
  if ((ulonglong)uVar2 != 0) {
    puVar6 = local_60;
    lVar8 = 0;
    do {
      puVar1 = (undefined8 *)
               (param_1 + 0x6aea0 + (ulonglong)*(uint *)((longlong)param_2 + lVar8 + 0x8c4c) * 0x10)
      ;
      uVar3 = puVar1[1];
      *puVar6 = *puVar1;
      puVar6[1] = uVar3;
      lVar8 = lVar8 + 0x8c;
      puVar6 = puVar6 + 2;
    } while ((ulonglong)uVar2 * 0x8c - lVar8 != 0);
  }
  memset(&uStack_13418,0,0x9a38);
  uStack_13418 = 2;
  wcscpy_s(awStack_13414,0x40,(wchar_t *)((longlong)param_2 + 0x8de8));
  memcpy(auStack_13390,local_99e0,0x99b0);
  (**(code **)(param_1 + 0xa8))(param_1 + 0x20,&uStack_13418);
  if ((local_30 ^ (ulonglong)auStack_13438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144648c2a FUN_144648c2a body=102 status=ok
// SIG undefined FUN_144648c2a(void)

void FUN_144648c2a(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014be93194;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1467613b6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144648c94 FUN_144648c94 body=4318 status=ok
// SIG undefined FUN_144648c94(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144648c94(longlong param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_9be8 [32];
  uint local_9bc8;
  undefined4 local_9bc0;
  uint local_9bb4;
  longlong local_9bb0;
  ulonglong local_9ba8;
  ulonglong local_9ba0;
  longlong local_9b98;
  undefined8 local_9b90;
  undefined8 local_9b88;
  longlong local_9b80;
  longlong local_9b78;
  longlong local_9b70;
  longlong local_9b68;
  longlong local_9b60;
  undefined1 local_9b58 [32];
  undefined2 local_9b38;
  undefined2 uStack_9b36;
  undefined4 uStack_9b34;
  undefined4 uStack_9b30;
  undefined4 uStack_9b2c;
  undefined8 local_9b28;
  ulonglong uStack_9b20;
  undefined8 local_9b18;
  undefined8 uStack_9b10;
  longlong local_9b08;
  ulonglong uStack_9b00;
  undefined8 local_9af8;
  uint auStack_9af0 [14];
  uint local_9ab8;
  int local_9ab4;
  undefined8 local_9ab0;
  int local_9aa8;
  undefined8 local_9a98;
  undefined8 uStack_9a90;
  longlong local_9a88;
  ulonglong uStack_9a80;
  undefined4 local_9a10;
  undefined4 local_9a0c;
  undefined4 uStack_9a08;
  undefined4 uStack_9a04;
  undefined4 uStack_9a00;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x144648caa;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_9be8;
  (**(code **)(param_1 + 0x30))
            (param_1,param_2 + 0x17,*(undefined4 *)(param_1 + 0xf8),param_1 + 0x3e758);
  (**(code **)(param_1 + 0x30))
            (param_1,param_2 + 0x2d,*(undefined4 *)(param_1 + 0xf8),param_1 + 0x3e75c);
  (**(code **)(param_1 + 0x30))
            (param_1,param_2 + 1,*(undefined4 *)(param_1 + 0xf8),param_1 + 0x3e69c);
  uVar4 = *param_2;
  if (*(char *)(param_1 + 0x3e781) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e781) = 0;
    FUN_144649d73(param_1);
  }
  (**(code **)(param_1 + 0x50))(local_9b58,param_1,*(undefined4 *)(param_1 + 0x3e69c));
  local_9bb0 = param_1 + 0xfc;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)((longlong)param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)((longlong)param_2 + 0x224);
  local_9b90 = uVar4;
  if (*(char *)(param_2 + 0x43) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e780) = 0;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x3e780);
    *(undefined1 *)(param_1 + 0x3e780) = 0;
    if (cVar2 == '\0') {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
      goto LAB_1446490c6;
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  pwVar1 = (wchar_t *)((longlong)&local_9a98 + 4);
  memset(&local_9a98,0,0x9a38);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow SCD Temp");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e694);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e75c);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow SCD Histogram");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e68c);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow SCD Previous histogram");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e690);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e61c);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 1");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e620);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 2");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e624);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 3");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e628);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 4");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e62c);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 5");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e630);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 1 Level 6");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e634);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e638);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 1");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e63c);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 2");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e640);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 3");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e644);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 4");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e648);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 5");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e64c);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Clear Optical Flow Input 2 Level 6");
  uStack_9a00 = *(undefined4 *)(param_1 + 0x3e650);
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
LAB_1446490c6:
  iVar13 = (*(int *)(param_1 + 0xec) - 1U >> 6) + 1;
  iVar12 = (*(int *)(param_1 + 0xf0) - 1U >> 6) + 1;
  local_9ab4 = iVar12 * iVar13;
  local_9ab8 = 4;
  local_9ab0 = 0;
  local_9b60 = param_1 + 0x3e760;
  local_9aa8 = local_9ab4;
  (**(code **)(param_1 + 0x70))(param_1,local_9bb0,0x20);
  (**(code **)(param_1 + 0x70))(param_1,auStack_9af0 + 0xe,0x20,param_1 + 0x3e770);
  *(undefined4 *)(param_1 + 0x3e724) = *(undefined4 *)(param_1 + 0x3e68c);
  *(undefined8 *)(param_1 + 0x3e728) = *(undefined8 *)(param_1 + 0x3e690);
  *(undefined4 *)(param_1 + 0x3e730) = *(undefined4 *)(param_1 + 0x3e75c);
  local_9bb4 = *(uint *)(param_1 + 0x3e784) & 1;
  bVar16 = local_9bb4 == 0;
  lVar11 = 8;
  if (bVar16) {
    lVar11 = 1;
  }
  lVar15 = 1;
  if (bVar16) {
    lVar15 = 8;
  }
  lVar10 = 0x58;
  if (bVar16) {
    lVar10 = 0x3c;
  }
  lVar6 = 0x3c;
  if (bVar16) {
    lVar6 = 0x58;
  }
  uVar9 = (ulonglong)(uint)((int)lVar11 << 2);
  uVar3 = *(undefined4 *)(param_1 + 0x3e618 + uVar9);
  *(undefined4 *)(param_1 + 0x3e704) = uVar3;
  *(undefined4 *)(param_1 + 0x3e708) = *(undefined4 *)(param_1 + 0x3e61c + uVar9);
  *(undefined4 *)(param_1 + 0x3e70c) = *(undefined4 *)(param_1 + 0x3e620 + lVar11 * 4);
  *(undefined4 *)(param_1 + 0x3e710) = *(undefined4 *)(param_1 + 0x3e624 + uVar9);
  *(undefined4 *)(param_1 + 0x3e714) = *(undefined4 *)(param_1 + 0x3e628 + lVar11 * 4);
  *(undefined4 *)(param_1 + 0x3e718) = *(undefined4 *)(param_1 + 0x3e62c + uVar9);
  *(undefined4 *)(param_1 + 0x3e71c) = *(undefined4 *)(param_1 + 0x3e630 + lVar11 * 4);
  *(undefined4 *)(param_1 + 0x3e6a0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e6bc) = *(undefined4 *)(param_1 + 0x3e618 + lVar15 * 4);
  uVar3 = *(undefined4 *)(param_1 + 0x3e618 + lVar10);
  *(undefined4 *)(param_1 + 0x3e6d0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e734) = uVar3;
  *(undefined4 *)(param_1 + 0x3e6d8) = *(undefined4 *)(param_1 + 0x3e618 + lVar6);
  local_9bc8 = (*(int *)(param_1 + 0xf0) + 1U >> 1) + 0xf >> 4;
  local_9bc0 = 1;
  FUN_14464a188(param_1,param_1 + 0x140,L"OF PrepareLuma",
                (*(int *)(param_1 + 0xec) + 1U >> 1) + 0xf >> 4);
  local_9bc0 = 1;
  local_9bc8 = iVar12;
  FUN_14464a188(param_1,param_1 + 0x8fa8,L"OF GenerateOpticalFlowInputPyramid",iVar13);
  local_9bc0 = 9;
  local_9bc8 = 0x10;
  FUN_14464a188(param_1,param_1 + 0x11e10,L"OF GenerateSCDHistogram",
                *(uint *)(param_1 + 0xec) / 0xc + 0x1f >> 5);
  local_9bc0 = 1;
  local_9bc8 = 3;
  FUN_14464a188(param_1,param_1 + 0x1ac78,L"OF ComputeSCDDivergence",9);
  uVar5 = *(int *)(param_1 + 0xec) + 7U >> 3;
  uVar8 = *(int *)(param_1 + 0xf0) + 7U >> 3;
  local_9af8 = CONCAT44(uVar8,uVar5);
  lVar10 = 0;
  do {
    uVar5 = uVar5 + 1 >> 1;
    uVar8 = uVar8 + 1 >> 1;
    auStack_9af0[lVar10 * 2] = uVar5;
    auStack_9af0[lVar10 * 2 + 1] = uVar8;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 6);
  local_9b68 = param_1 + 0x23ae0;
  local_9b70 = param_1 + 0x2c948;
  local_9b98 = param_1 + 0x357b0;
  local_9b78 = param_1 + lVar15 * 4 + 0x3e630;
  local_9b80 = param_1 + lVar11 * 4 + 0x3e630;
  lVar11 = 0;
  do {
    uVar9 = lVar11 + 6;
    *(uint *)(param_1 + 0x104) = (uint)uVar9;
    *(undefined4 *)(param_1 + 0x108) = 7;
    (**(code **)(param_1 + 0x70))(param_1,local_9bb0,0x20,local_9b60);
    bVar16 = local_9bb4 == ((uint)uVar9 & 1);
    local_9b88 = 0xf;
    if (bVar16) {
      local_9b88 = 0x16;
    }
    *(undefined4 *)(param_1 + 0x3e6a0) = *(undefined4 *)(local_9b80 + lVar11 * 4);
    *(undefined4 *)(param_1 + 0x3e6bc) = *(undefined4 *)(local_9b78 + lVar11 * 4);
    lVar15 = lVar11 + 0x16;
    if (bVar16) {
      lVar15 = lVar11 + 0xf;
    }
    *(undefined4 *)(param_1 + 0x3e734) = *(undefined4 *)(param_1 + 0x3e630 + lVar15 * 4);
    local_9ba8 = (ulonglong)(uint)((int)lVar11 + 6 + (int)local_9b88);
    *(undefined4 *)(param_1 + 0x3e6d8) = *(undefined4 *)(param_1 + 0x3e618 + local_9ba8 * 4);
    uVar8 = *(uint *)(param_1 + 0xec) >> ((byte)uVar9 & 0x1f);
    uVar5 = *(uint *)(param_1 + 0xf0) >> ((byte)uVar9 & 0x1f);
    local_9ba0 = uVar9;
    FUN_1498136ee(&local_9b38,uVar9 & 0xffffffff);
    FUN_149813532(&local_9b38);
    local_9b18 = (undefined8 *)CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,local_9b38));
    local_9b08 = local_9b28;
    uStack_9b00 = uStack_9b20;
    local_9b28 = 0;
    uStack_9b20 = 7;
    local_9b38 = 0;
    plVar7 = (longlong *)FUN_14600854c(&local_9b18,L" Search",7);
    local_9a98 = (undefined8 *)*plVar7;
    uStack_9a90 = plVar7[1];
    local_9a88 = plVar7[2];
    uStack_9a80 = plVar7[3];
    plVar7[2] = 0;
    plVar7[3] = 7;
    *(undefined2 *)plVar7 = 0;
    if (7 < uStack_9b00) {
      FUN_14600850e(&local_9b18,local_9b18);
    }
    local_9b08 = 0;
    uStack_9b00 = 7;
    local_9b18 = (undefined8 *)((ulonglong)local_9b18 & 0xffffffffffff0000);
    if (7 < uStack_9b20) {
      FUN_14600850e(&local_9b38,CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,local_9b38)));
    }
    puVar14 = &local_9a98;
    if (7 < uStack_9a80) {
      puVar14 = local_9a98;
    }
    local_9bc8 = uVar5 + (uVar5 == 0) + 0xf >> 4;
    local_9bc0 = 1;
    FUN_14464a188(param_1,local_9b68,puVar14,
                  ((uVar8 + (uVar8 == 0)) * 4 + 0xc & 0xfffffff0) + 0x3f >> 6);
    if (7 < uStack_9a80) {
      FUN_14600850e(&local_9a98,local_9a98);
    }
    *(undefined4 *)(param_1 + 0x3e6d8) = *(undefined4 *)(param_1 + 0x3e630 + lVar15 * 4);
    *(undefined4 *)(param_1 + 0x3e734) = *(undefined4 *)(param_1 + 0x3e618 + local_9ba8 * 4);
    if (lVar11 == -6) {
      *(undefined4 *)(param_1 + 0x3e734) = *(undefined4 *)(param_1 + 0x3e758);
    }
    uVar5 = auStack_9af0[lVar11 * 2 + 10];
    uVar8 = auStack_9af0[lVar11 * 2 + 0xb];
    FUN_1498136ee(&local_9b38,local_9ba0);
    FUN_149813532(&local_9b38);
    local_9b18 = (undefined8 *)CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,local_9b38));
    uStack_9b10 = CONCAT44(uStack_9b2c,uStack_9b30);
    local_9b08 = local_9b28;
    uStack_9b00 = uStack_9b20;
    local_9b28 = 0;
    uStack_9b20 = 7;
    local_9b38 = 0;
    plVar7 = (longlong *)FUN_14600854c(&local_9b18,L" Filter",7);
    local_9a98 = (undefined8 *)*plVar7;
    uStack_9a90 = plVar7[1];
    local_9a88 = plVar7[2];
    uStack_9a80 = plVar7[3];
    plVar7[2] = 0;
    plVar7[3] = 7;
    *(undefined2 *)plVar7 = 0;
    if (7 < uStack_9b00) {
      FUN_14600850e(&local_9b18,local_9b18);
    }
    local_9b08 = 0;
    uStack_9b00 = 7;
    local_9b18 = (undefined8 *)((ulonglong)local_9b18 & 0xffffffffffff0000);
    if (7 < uStack_9b20) {
      FUN_14600850e(&local_9b38,CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,local_9b38)));
    }
    puVar14 = &local_9a98;
    if (7 < uStack_9a80) {
      puVar14 = local_9a98;
    }
    local_9bc8 = uVar8 + 3 >> 2;
    local_9bc0 = 1;
    FUN_14464a188(param_1,local_9b70,puVar14,uVar5 + 0xf >> 4);
    if (7 < uStack_9a80) {
      FUN_14600850e(&local_9a98);
    }
    if (lVar11 != -6) {
      *(undefined4 *)(param_1 + 0x3e6f0 + lVar11 * 4) = *(undefined4 *)(param_1 + 0x3e734);
      *(undefined4 *)(param_1 + 0x3e6d0) = *(undefined4 *)(param_1 + 0x3e618 + local_9ba8 * 4);
      *(undefined4 *)(param_1 + 0x3e738) =
           *(undefined4 *)
            (param_1 + 0x3e618 + (ulonglong)(uint)((int)lVar11 + 5 + (int)local_9b88) * 4);
      uVar5 = auStack_9af0[lVar11 * 2 + 8];
      uVar8 = auStack_9af0[lVar11 * 2 + 9];
      FUN_1498136ee(&local_9b38,local_9ba0);
      FUN_149813532(&local_9b38);
      local_9a98 = (undefined8 *)CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,local_9b38));
      uStack_9a90 = CONCAT44(uStack_9b2c,uStack_9b30);
      local_9a88 = local_9b28;
      uStack_9a80 = uStack_9b20;
      local_9b28 = 0;
      uStack_9b20 = 7;
      local_9b38 = 0;
      plVar7 = (longlong *)FUN_14600854c(&local_9a98,L" Scale",6);
      local_9b18 = (undefined8 *)*plVar7;
      uStack_9b10 = plVar7[1];
      local_9b08 = plVar7[2];
      uStack_9b00 = plVar7[3];
      plVar7[2] = 0;
      plVar7[3] = 7;
      *(undefined2 *)plVar7 = 0;
      if (7 < uStack_9a80) {
        FUN_14600850e(&local_9a98,local_9a98);
      }
      local_9a88 = 0;
      uStack_9a80 = 7;
      local_9a98 = (undefined8 *)((ulonglong)local_9a98 & 0xffffffffffff0000);
      if (7 < uStack_9b20) {
        FUN_14600850e(&local_9b38,CONCAT44(uStack_9b34,CONCAT22(uStack_9b36,local_9b38)));
      }
      puVar14 = &local_9b18;
      if (7 < uStack_9b00) {
        puVar14 = local_9b18;
      }
      local_9bc8 = uVar8 + 3 >> 2;
      local_9bc0 = 1;
      FUN_14464a188(param_1,local_9b98,puVar14,uVar5 + 3 >> 2);
      memset(&local_9a98,0,0x9a38);
      local_9a98 = (undefined8 *)CONCAT44(local_9a98._4_4_,3);
      local_9a10 = *(undefined4 *)(param_1 + 0x3e6d0);
      uStack_9a08 = 4;
      uStack_9a04 = 2;
      (**(code **)(param_1 + 0x88))(param_1);
      if (7 < uStack_9b00) {
        FUN_14600850e(&local_9b18);
      }
    }
    memset(&local_9a98,0,0x9a38);
    local_9a98 = (undefined8 *)CONCAT44(local_9a98._4_4_,3);
    local_9a10 = *(undefined4 *)(param_1 + 0x3e6d8);
    uStack_9a08 = 4;
    uStack_9a04 = 2;
    (**(code **)(param_1 + 0x88))(param_1);
    lVar11 = lVar11 + -1;
  } while (lVar11 != -7);
  memset(&local_9a98,0,0x9a38);
  local_9a98 = (undefined8 *)CONCAT44(local_9a98._4_4_,3);
  pwVar1 = (wchar_t *)((longlong)&local_9a98 + 4);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e61c);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 1");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e620);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 2");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e624);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 3");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e628);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 4");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e62c);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 5");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e630);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 1 Level 6");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e634);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e638);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 1");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e63c);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 2");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e640);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 3");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e644);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 4");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e648);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 5");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e64c);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  wcscpy_s(pwVar1,0x40,L"Transition Optical Flow Input 2 Level 6");
  local_9a10 = *(undefined4 *)(param_1 + 0x3e650);
  local_9a0c = 0;
  uStack_9a08 = 4;
  uStack_9a04 = 2;
  uStack_9a00 = 0;
  (**(code **)(param_1 + 0x88))(param_1,&local_9a98);
  uVar4 = local_9b90;
  *(uint *)(param_1 + 0x3e784) = *(int *)(param_1 + 0x3e784) + 1U & 0xf;
  iVar12 = (**(code **)(param_1 + 0x90))(param_1,local_9b90,*(undefined4 *)(param_1 + 0xf8));
  if (iVar12 == 0) {
    (**(code **)(param_1 + 0x40))(param_1,uVar4,*(undefined4 *)(param_1 + 0xf8));
  }
  if ((local_60 ^ (ulonglong)auStack_9be8) == DAT_14c707940) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144649d73 FUN_144649d73 body=538 status=ok
// SIG undefined FUN_144649d73(void)

void FUN_144649d73(longlong param_1)

{
  undefined1 auStack_198 [40];
  longlong *local_170;
  undefined4 *local_168;
  undefined4 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined4 local_13c;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 local_128;
  longlong local_120;
  undefined4 local_118 [2];
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_48 = &DAT_100000004;
  puStack_40 = &DAT_200000002;
  local_58 = 0x200000000;
  puStack_50 = &DAT_200000002;
  local_38 = 0x400000002;
  local_68 = 0x400000008;
  uStack_60 = 0x400000008;
  local_120 = param_1;
  memset(local_118,0,0xb0);
  local_74 = 4;
  local_118[0] = *(undefined4 *)(param_1 + 0xe8);
  local_108 = 2;
  local_f8 = 2;
  local_110 = &local_58;
  local_100 = &local_68;
  (**(code **)(param_1 + 0x18))(param_1,&local_134);
  local_135 = local_128;
  local_137 = 0;
  local_136 = false;
  if ((local_130 == 0x20) && (local_136 = false, local_12c == 0x40)) {
    local_136 = 6 < local_134;
    local_137 = 1;
  }
  local_150 = &local_136;
  local_13c = *(undefined4 *)(param_1 + 0xe8);
  local_160 = &local_13c;
  local_170 = &local_120;
  local_158 = &local_135;
  local_148 = &local_137;
  local_168 = local_118;
  FUN_144649f8e(&local_170,1,L"Opticalflow_InputPyramid",param_1 + 0x8fa8);
  local_f8 = 1;
  FUN_144649f8e(&local_170,0,L"Opticalflow_Luma",local_120 + 0x140);
  FUN_144649f8e(&local_170,2,L"Opticalflow_SCD_Histogram",local_120 + 0x11e10);
  FUN_144649f8e(&local_170,3,L"Opticalflow_SCD_Divergence",local_120 + 0x1ac78);
  FUN_144649f8e(&local_170,4,L"Opticalflow_Search",local_120 + 0x23ae0);
  FUN_144649f8e(&local_170,5,L"Opticalflow_Filter",local_120 + 0x2c948);
  FUN_144649f8e(&local_170,6,L"Opticalflow_Upscale",local_120 + 0x357b0);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144649f8e FUN_144649f8e body=506 status=ok
// SIG undefined FUN_144649f8e(void)

void FUN_144649f8e(undefined8 *param_1,undefined4 param_2,wchar_t *param_3,longlong param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  
  lVar4 = *(longlong *)*param_1;
  (**(code **)(lVar4 + 0x80))(lVar4,param_4,*(undefined4 *)(lVar4 + 0xf8));
  wcscpy_s((wchar_t *)(param_1[1] + 0x24),0x40,param_3);
  lVar4 = *(longlong *)*param_1;
  iVar3 = (**(code **)(lVar4 + 0x78))
                    (lVar4,0x13,param_2,(uint)*(byte *)param_1[4] + (uint)*(byte *)param_1[3] * 2,
                     param_1[1],*(undefined4 *)(lVar4 + 0xf8),param_4);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_4 + 0x24);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar4 = 0;
        while (iVar3 = wcscmp((wchar_t *)((longlong)L"r_input_color" + lVar4),
                              (wchar_t *)(param_4 + uVar6 * 0x8c + 0x2350)), iVar3 != 0) {
          lVar4 = lVar4 + 0x84;
          if (lVar4 == 0x294) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x234c + uVar6 * 0x8c) =
             *(undefined4 *)((longlong)&DAT_14be96fd0 + lVar4);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    uVar1 = *(uint *)(param_4 + 0x20);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar4 = 0;
        while (iVar3 = wcscmp((wchar_t *)((longlong)L"rw_optical_flow_input" + lVar4),
                              (wchar_t *)(param_4 + uVar6 * 0x8c + 0x50)), iVar3 != 0) {
          lVar4 = lVar4 + 0x84;
          if (lVar4 == 0x6b4) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x4c + uVar6 * 0x8c) =
             *(undefined4 *)((longlong)&DAT_14be97270 + lVar4);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    uVar1 = *(uint *)(param_4 + 0x40);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar4 = 0;
        bVar5 = true;
        while (iVar3 = wcscmp(L"cbOF" + lVar4 * 0x42,(wchar_t *)(param_4 + uVar6 * 0x8c + 0x8c50)),
              iVar3 != 0) {
          lVar4 = 1;
          bVar2 = !bVar5;
          bVar5 = false;
          if (bVar2) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x8c4c + uVar6 * 0x8c) = (&DAT_14be97930)[lVar4 * 0x21];
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
  }
  return;
}



// FUNCTION 14464a188 FUN_14464a188 body=425 status=ok
// SIG undefined FUN_14464a188(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14464a188(longlong param_1,void *param_2,wchar_t *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_13438 [40];
  undefined4 uStack_13410;
  wchar_t awStack_1340c [66];
  undefined1 auStack_13388 [39344];
  undefined1 local_99d8 [36456];
  undefined4 local_b70;
  undefined4 local_b6c;
  undefined4 local_b68 [3];
  undefined4 auStack_b5c [320];
  undefined4 auStack_65c [385];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_13438;
  memset(local_b68,0,0xb40);
  uVar2 = *(uint *)((longlong)param_2 + 0x24);
  if ((ulonglong)uVar2 != 0) {
    puVar4 = (uint *)((longlong)param_2 + 0x234c);
    uVar6 = 0;
    do {
      auStack_b5c[uVar6] = *(undefined4 *)(param_1 + 0x3e698 + (ulonglong)*puVar4 * 4);
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 0x23;
    } while (uVar2 != uVar6);
  }
  uVar2 = *(uint *)((longlong)param_2 + 0x20);
  if ((ulonglong)uVar2 != 0) {
    puVar4 = (uint *)((longlong)param_2 + 0x4c);
    uVar6 = 0;
    do {
      auStack_65c[uVar6 * 2 + 1] = *(undefined4 *)(param_1 + 0x3e6fc + (ulonglong)*puVar4 * 4);
      auStack_65c[uVar6 * 2] = 0;
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 0x23;
    } while (uVar2 != uVar6);
  }
  local_b6c = param_5;
  local_b68[0] = param_6;
  local_b70 = param_4;
  memcpy(local_99d8,param_2,0x8e68);
  uVar2 = *(uint *)((longlong)param_2 + 0x40);
  if ((ulonglong)uVar2 != 0) {
    puVar5 = local_58;
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)
               (param_1 + 0x3e760 + (ulonglong)*(uint *)((longlong)param_2 + lVar7 + 0x8c4c) * 0x10)
      ;
      uVar3 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar3;
      lVar7 = lVar7 + 0x8c;
      puVar5 = puVar5 + 2;
    } while ((ulonglong)uVar2 * 0x8c - lVar7 != 0);
  }
  memset(&uStack_13410,0,0x9a38);
  uStack_13410 = 2;
  wcscpy_s(awStack_1340c,0x40,param_3);
  memcpy(auStack_13388,local_99d8,0x99b0);
  (**(code **)(param_1 + 0x88))(param_1,&uStack_13410);
  if ((local_28 ^ (ulonglong)auStack_13438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464a332 FUN_14464a332 body=102 status=ok
// SIG undefined FUN_14464a332(void)

void FUN_14464a332(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014be96622;
  local_14 = 0x11;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1467614f8(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464a39c FUN_14464a39c body=575 status=ok
// SIG undefined FUN_14464a39c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14464a39c(longlong param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_13438 [32];
  undefined4 uStack_13418;
  wchar_t awStack_13414 [66];
  undefined1 auStack_13390 [39344];
  undefined1 local_99e0 [36456];
  undefined4 local_b78;
  undefined4 local_b74;
  undefined4 local_b70 [3];
  undefined4 auStack_b64 [67];
  undefined4 local_a58 [253];
  uint auStack_664 [131];
  undefined4 local_458 [254];
  undefined8 local_60 [6];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_13438;
  memset(local_b70,0,0xb40);
  uVar2 = *(uint *)((longlong)param_2 + 0x24);
  if ((ulonglong)uVar2 != 0) {
    puVar5 = (uint *)((longlong)param_2 + 0x234c);
    uVar8 = 0;
    do {
      auStack_b64[uVar8] = *(undefined4 *)(param_1 + 0x620b0 + (ulonglong)*puVar5 * 4);
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 != uVar8);
  }
  uVar2 = *(uint *)((longlong)param_2 + 0x20);
  if ((ulonglong)uVar2 != 0) {
    puVar5 = (uint *)((longlong)param_2 + 0x4c);
    uVar8 = 0;
    do {
      uVar10 = *puVar5 - 0x21;
      puVar4 = (uint *)(param_1 + 0x621f4);
      if (0xc < uVar10) {
        uVar10 = 0;
        puVar4 = (uint *)(param_1 + 0x62170 + (ulonglong)*puVar5 * 4);
      }
      auStack_664[uVar8 * 2 + 1] = *puVar4;
      auStack_664[uVar8 * 2] = uVar10;
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 != uVar8);
  }
  local_b70[0] = 1;
  local_b78 = param_3;
  local_b74 = param_4;
  memcpy(local_99e0,param_2,0x8e68);
  uVar2 = *(uint *)((longlong)param_2 + 0x40);
  if ((ulonglong)uVar2 != 0) {
    puVar6 = local_60;
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)
               (param_1 + 0x62090 + (ulonglong)*(uint *)((longlong)param_2 + lVar9 + 0x8c4c) * 0x10)
      ;
      uVar3 = puVar1[1];
      *puVar6 = *puVar1;
      puVar6[1] = uVar3;
      lVar9 = lVar9 + 0x8c;
      puVar6 = puVar6 + 2;
    } while ((ulonglong)uVar2 * 0x8c - lVar9 != 0);
  }
  uVar2 = *(uint *)((longlong)param_2 + 0x2c);
  if ((ulonglong)uVar2 != 0) {
    puVar7 = local_458;
    lVar9 = 0;
    do {
      *puVar7 = *(undefined4 *)
                 (param_1 + 0x62170 + (ulonglong)*(uint *)((longlong)param_2 + lVar9 + 0x694c) * 4);
      lVar9 = lVar9 + 0x8c;
      puVar7 = puVar7 + 4;
    } while ((ulonglong)uVar2 * 0x8c - lVar9 != 0);
  }
  uVar2 = *(uint *)((longlong)param_2 + 0x28);
  if ((ulonglong)uVar2 != 0) {
    puVar7 = local_a58;
    lVar9 = 0;
    do {
      *puVar7 = *(undefined4 *)
                 (param_1 + 0x620b0 + (ulonglong)*(uint *)((longlong)param_2 + lVar9 + 0x464c) * 4);
      lVar9 = lVar9 + 0x8c;
      puVar7 = puVar7 + 4;
    } while ((ulonglong)uVar2 * 0x8c - lVar9 != 0);
  }
  memset(&uStack_13418,0,0x9a38);
  uStack_13418 = 2;
  wcscpy_s(awStack_13414,0x40,(wchar_t *)((longlong)param_2 + 0x8de8));
  memcpy(auStack_13390,local_99e0,0x99b0);
  (**(code **)(param_1 + 0xa8))(param_1 + 0x20,&uStack_13418);
  if ((local_30 ^ (ulonglong)auStack_13438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464a5dc FUN_14464a5dc body=635 status=ok
// SIG undefined FUN_14464a5dc(void)

void FUN_14464a5dc(undefined4 *param_1)

{
  undefined1 auStack_198 [40];
  undefined4 **local_170;
  undefined4 *local_168;
  undefined4 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined4 local_13c;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 local_128;
  undefined4 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_120 = param_1;
  memset(local_e0,0,0xb0);
  local_e0[0] = *param_1;
  local_3c = 4;
  local_d0 = 2;
  local_d8 = &local_108;
  local_f8 = &DAT_100000004;
  puStack_f0 = &DAT_200000002;
  local_108 = 0x200000000;
  puStack_100 = &DAT_200000002;
  local_e8 = 0x400000002;
  local_c0 = 2;
  local_c8 = &local_118;
  local_118 = 0x2c;
  uStack_114 = 4;
  uStack_110 = 4;
  uStack_10c = 4;
  (**(code **)(param_1 + 0xe))(param_1 + 8,&local_134);
  local_135 = local_128;
  local_137 = 0;
  local_136 = false;
  if ((local_130 == 0x20) && (local_136 = false, local_12c == 0x40)) {
    local_136 = 6 < local_134;
    local_137 = 1;
  }
  local_150 = &local_136;
  local_13c = *param_1;
  local_160 = &local_13c;
  local_170 = &local_120;
  local_158 = &local_135;
  local_148 = &local_137;
  local_168 = local_e0;
  FUN_14464a924(&local_170,0,L"RECONSTRUCT_AND_DILATE",param_1 + 0x86);
  FUN_14464a924(&local_170,1,L"SETUP",local_120 + 0x2420);
  FUN_14464a924(&local_170,2,L"RECONSTRUCT_PREV_DEPTH",local_120 + 0x47ba);
  FUN_14464a924(&local_170,3,L"GAME_MOTION_VECTOR_FIELD",local_120 + 0x6b54);
  FUN_14464a924(&local_170,4,L"OPTICAL_FLOW_VECTOR_FIELD",local_120 + 0x8eee);
  FUN_14464a924(&local_170,5,L"DISOCCLUSION_MASK",local_120 + 0xb288);
  FUN_14464a924(&local_170,6,L"INTERPOLATION",local_120 + 0xd622);
  FUN_14464a924(&local_170,7,L"INPAINTING_PYRAMID",local_120 + 0xf9bc);
  FUN_14464a924(&local_170,8,L"INPAINTING",local_120 + 0x11d56);
  FUN_14464a924(&local_170,9,L"GAME_VECTOR_FIELD_INPAINTING_PYRAMID",local_120 + 0x140f0);
  FUN_14464a924(&local_170,10,L"DEBUG_VIEW",local_120 + 0x1648a);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464a858 FUN_14464a858 body=203 status=ok
// SIG undefined FUN_14464a858(void)

void FUN_14464a858(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  
  uVar1 = *(uint *)(*(longlong *)*param_1 + 0x18);
  uVar2 = *(uint *)(*(longlong *)*param_1 + 0x1c);
  iVar5 = (uVar1 - 1 >> 6) + 1;
  iVar4 = (uVar2 - 1 >> 6) + 1;
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  auVar8._4_12_ = in_XMM0._4_12_;
  auVar8._0_4_ = (float)uVar2;
  auVar7._0_8_ = log2f(auVar8._0_8_);
  auVar7._8_8_ = extraout_XMM0_Qb;
  auVar8 = roundss(auVar7,auVar7,9);
  fVar6 = auVar8._0_4_;
  if (12.0 <= fVar6) {
    fVar6 = 12.0;
  }
  *(int *)(*(longlong *)param_1[1] + 0x1e8) = iVar4 * iVar5;
  *(int *)(*(longlong *)param_1[1] + 0x1e4) = (int)(longlong)fVar6;
  *(undefined4 *)(*(longlong *)param_1[1] + 0x1ec) = 0;
  *(undefined4 *)(*(longlong *)param_1[1] + 0x1f0) = 0;
  lVar3 = *(longlong *)param_1[1];
  (**(code **)(lVar3 + 0x90))(lVar3 + 0x20,lVar3 + 0x1e4,0x10,lVar3 + 0x620a0);
  FUN_14464a39c(*(longlong *)param_1[1],*(longlong *)param_1[1] + 0x503c0,iVar5,iVar4);
  return;
}



// FUNCTION 14464a924 FUN_14464a924 body=811 status=ok
// SIG undefined FUN_14464a924(void)

void FUN_14464a924(undefined8 *param_1,undefined4 param_2,wchar_t *param_3,longlong param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = *(longlong *)*param_1;
  (**(code **)(lVar5 + 0xa0))(lVar5 + 0x20,param_4,*(undefined4 *)(lVar5 + 0x108));
  wcscpy_s((wchar_t *)(param_1[1] + 0x24),0x40,param_3);
  lVar5 = *(longlong *)*param_1;
  iVar3 = (**(code **)(lVar5 + 0x98))
                    (lVar5 + 0x20,0x12,param_2,
                     ((uint)*(byte *)param_1[3] * 0x10 + (uint)*(byte *)param_1[4] * 8 +
                      (*(uint *)param_1[2] & 1) * 4 | *(uint *)param_1[2] >> 4 & 3) ^ 1,param_1[1],
                     *(undefined4 *)(lVar5 + 0x108),param_4);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_4 + 0x24);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar5 = 0;
        while (iVar3 = wcscmp((wchar_t *)((longlong)L"r_input_depth" + lVar5),
                              (wchar_t *)(param_4 + uVar6 * 0x8c + 0x2350)), iVar3 != 0) {
          lVar5 = lVar5 + 0x84;
          if (lVar5 == 0xbdc) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x234c + uVar6 * 0x8c) =
             *(undefined4 *)((longlong)&DAT_14be98c30 + lVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    uVar1 = *(uint *)(param_4 + 0x20);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar5 = 0;
        while (iVar3 = wcscmp((wchar_t *)((longlong)L"rw_dilated_depth" + lVar5),
                              (wchar_t *)(param_4 + uVar6 * 0x8c + 0x50)), iVar3 != 0) {
          lVar5 = lVar5 + 0x84;
          if (lVar5 == 0xce4) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x4c + uVar6 * 0x8c) =
             *(undefined4 *)((longlong)&DAT_14be99810 + lVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    uVar1 = *(uint *)(param_4 + 0x40);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar5 = 0;
        bVar4 = true;
        while (iVar3 = wcscmp(L"cbFI" + lVar5 * 0x42,(wchar_t *)(param_4 + uVar6 * 0x8c + 0x8c50)),
              iVar3 != 0) {
          lVar5 = 1;
          bVar2 = !bVar4;
          bVar4 = false;
          if (bVar2) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x8c4c + uVar6 * 0x8c) = (&DAT_14be9a500)[lVar5 * 0x21];
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    uVar1 = *(uint *)(param_4 + 0x2c);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar5 = 0;
        while (iVar3 = wcscmp((wchar_t *)((longlong)L"rw_dilated_depth" + lVar5),
                              (wchar_t *)(param_4 + uVar6 * 0x8c + 0x6950)), iVar3 != 0) {
          lVar5 = lVar5 + 0x84;
          if (lVar5 == 0xce4) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x694c + uVar6 * 0x8c) =
             *(undefined4 *)((longlong)&DAT_14be99810 + lVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    uVar1 = *(uint *)(param_4 + 0x28);
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar5 = 0;
        while (iVar3 = wcscmp((wchar_t *)((longlong)L"r_input_depth" + lVar5),
                              (wchar_t *)(param_4 + uVar6 * 0x8c + 18000)), iVar3 != 0) {
          lVar5 = lVar5 + 0x84;
          if (lVar5 == 0xbdc) {
            return;
          }
        }
        *(undefined4 *)(param_4 + 0x464c + uVar6 * 0x8c) =
             *(undefined4 *)((longlong)&DAT_14be98c30 + lVar5);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
  }
  return;
}



// FUNCTION 14464ac4f FUN_14464ac4f body=102 status=ok
// SIG undefined FUN_14464ac4f(void)

void FUN_14464ac4f(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014be98678;
  local_14 = 0x18;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14676163a(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464acb8 FUN_14464acb8 body=57 status=ok
// SIG undefined FUN_14464acb8(void)

void FUN_14464acb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc28998 == 0) {
    uVar1 = FUN_14676177c();
    DAT_14cc28998 = FUN_14171c317(FUN_1467617ad,uVar1,L"EFFXFSR3QualityMode");
  }
  return;
}



// FUNCTION 14464acf1 FUN_14464acf1 body=57 status=ok
// SIG undefined FUN_14464acf1(void)

void FUN_14464acf1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc289b0 == 0) {
    uVar1 = FUN_14676177c();
    DAT_14cc289b0 = FUN_14171c317(FUN_1467617dc,uVar1,L"EFFXFSR3HistoryFormat");
  }
  return;
}



// FUNCTION 14464ad2a FUN_14464ad2a body=57 status=ok
// SIG undefined FUN_14464ad2a(void)

void FUN_14464ad2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc289c8 == 0) {
    uVar1 = FUN_14676177c();
    DAT_14cc289c8 = FUN_14171c317(FUN_14676180b,uVar1,L"EFFXFSR3DeDitherMode");
  }
  return;
}



// FUNCTION 14464ad63 FUN_14464ad63 body=57 status=ok
// SIG undefined FUN_14464ad63(void)

void FUN_14464ad63(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc289e0 == 0) {
    uVar1 = FUN_14676177c();
    DAT_14cc289e0 = FUN_14171c317(FUN_14676183a,uVar1,L"EFFXFSR3LandscapeHISMMode");
  }
  return;
}



// FUNCTION 14464ad9c FUN_14464ad9c body=57 status=ok
// SIG undefined FUN_14464ad9c(void)

void FUN_14464ad9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc289f8 == 0) {
    uVar1 = FUN_14676177c();
    DAT_14cc289f8 = FUN_14171c317(FUN_146761869,uVar1,L"EFFXFSR3FrameGenUIMode");
  }
  return;
}



// FUNCTION 14464add5 FUN_14464add5 body=57 status=ok
// SIG undefined FUN_14464add5(void)

void FUN_14464add5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc28a10 == 0) {
    uVar1 = FUN_14676177c();
    DAT_14cc28a10 = FUN_14171c317(FUN_146761898,uVar1,L"EFFXFSR3PaceRHIFrameMode");
  }
  return;
}



// FUNCTION 14464ae0e FUN_14464ae0e body=69 status=ok
// SIG undefined FUN_14464ae0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464ae0e(void)

{
  _DAT_14cc28a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28a60,1);
  return;
}



// FUNCTION 14464ae53 FUN_14464ae53 body=69 status=ok
// SIG undefined FUN_14464ae53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464ae53(void)

{
  _DAT_14cc28a70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464ae95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28a78,1);
  return;
}



// FUNCTION 14464ae98 FUN_14464ae98 body=69 status=ok
// SIG undefined FUN_14464ae98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464ae98(void)

{
  _DAT_14cc28a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464aeda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28a90,1);
  return;
}



// FUNCTION 14464aedd FUN_14464aedd body=69 status=ok
// SIG undefined FUN_14464aedd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464aedd(void)

{
  _DAT_14cc28aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464af1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28aa8,1);
  return;
}



// FUNCTION 14464af22 FUN_14464af22 body=69 status=ok
// SIG undefined FUN_14464af22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464af22(void)

{
  _DAT_14cc28ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464af64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28ac0,1);
  return;
}



// FUNCTION 14464af67 FUN_14464af67 body=69 status=ok
// SIG undefined FUN_14464af67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464af67(void)

{
  _DAT_14cc28ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464afa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28ad8,1);
  return;
}



// FUNCTION 14464afac FUN_14464afac body=69 status=ok
// SIG undefined FUN_14464afac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464afac(void)

{
  _DAT_14cc28ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464afee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28af0,1);
  return;
}



// FUNCTION 14464aff1 FUN_14464aff1 body=69 status=ok
// SIG undefined FUN_14464aff1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464aff1(void)

{
  _DAT_14cc28b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28b08,1);
  return;
}



// FUNCTION 14464b036 FUN_14464b036 body=69 status=ok
// SIG undefined FUN_14464b036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b036(void)

{
  _DAT_14cc28b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28b20,1);
  return;
}



// FUNCTION 14464b07b FUN_14464b07b body=69 status=ok
// SIG undefined FUN_14464b07b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b07b(void)

{
  _DAT_14cc28b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28b38,1);
  return;
}



// FUNCTION 14464b0c0 FUN_14464b0c0 body=69 status=ok
// SIG undefined FUN_14464b0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b0c0(void)

{
  _DAT_14cc28b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28b50,1);
  return;
}



// FUNCTION 14464b105 FUN_14464b105 body=69 status=ok
// SIG undefined FUN_14464b105(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b105(void)

{
  _DAT_14cc28b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28b68,1);
  return;
}



// FUNCTION 14464b14a FUN_14464b14a body=69 status=ok
// SIG undefined FUN_14464b14a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b14a(void)

{
  _DAT_14cc28b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28b80,1);
  return;
}



// FUNCTION 14464b18f FUN_14464b18f body=69 status=ok
// SIG undefined FUN_14464b18f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b18f(void)

{
  _DAT_14cc28b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b1d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28b98,1);
  return;
}



// FUNCTION 14464b1d4 FUN_14464b1d4 body=69 status=ok
// SIG undefined FUN_14464b1d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b1d4(void)

{
  _DAT_14cc28ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28bb0,1);
  return;
}



// FUNCTION 14464b219 FUN_14464b219 body=69 status=ok
// SIG undefined FUN_14464b219(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b219(void)

{
  _DAT_14cc28bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b25b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28bc8,1);
  return;
}



// FUNCTION 14464b25e FUN_14464b25e body=69 status=ok
// SIG undefined FUN_14464b25e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b25e(void)

{
  _DAT_14cc28bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28be0,1);
  return;
}



// FUNCTION 14464b2a3 FUN_14464b2a3 body=69 status=ok
// SIG undefined FUN_14464b2a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b2a3(void)

{
  _DAT_14cc28bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b2e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28bf8,1);
  return;
}



// FUNCTION 14464b2e8 FUN_14464b2e8 body=69 status=ok
// SIG undefined FUN_14464b2e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b2e8(void)

{
  _DAT_14cc28c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b32a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28c10,1);
  return;
}



// FUNCTION 14464b32d FUN_14464b32d body=69 status=ok
// SIG undefined FUN_14464b32d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b32d(void)

{
  _DAT_14cc28c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b36f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28c28,1);
  return;
}



// FUNCTION 14464b372 FUN_14464b372 body=69 status=ok
// SIG undefined FUN_14464b372(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b372(void)

{
  _DAT_14cc28c38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28c40,1);
  return;
}



// FUNCTION 14464b3b7 FUN_14464b3b7 body=69 status=ok
// SIG undefined FUN_14464b3b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b3b7(void)

{
  _DAT_14cc28c50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28c58,1);
  return;
}



// FUNCTION 14464b3fc FUN_14464b3fc body=69 status=ok
// SIG undefined FUN_14464b3fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b3fc(void)

{
  _DAT_14cc28c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b43e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28c70,1);
  return;
}



// FUNCTION 14464b441 FUN_14464b441 body=69 status=ok
// SIG undefined FUN_14464b441(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b441(void)

{
  _DAT_14cc28c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28c88,1);
  return;
}



// FUNCTION 14464b486 FUN_14464b486 body=69 status=ok
// SIG undefined FUN_14464b486(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b486(void)

{
  _DAT_14cc28c98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28ca0,1);
  return;
}



// FUNCTION 14464b4cb FUN_14464b4cb body=69 status=ok
// SIG undefined FUN_14464b4cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b4cb(void)

{
  _DAT_14cc28cb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b50d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28cb8,1);
  return;
}



// FUNCTION 14464b510 FUN_14464b510 body=69 status=ok
// SIG undefined FUN_14464b510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b510(void)

{
  _DAT_14cc28cc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28cd0,1);
  return;
}



// FUNCTION 14464b555 FUN_14464b555 body=69 status=ok
// SIG undefined FUN_14464b555(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b555(void)

{
  _DAT_14cc28ce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28ce8,1);
  return;
}



// FUNCTION 14464b59a FUN_14464b59a body=69 status=ok
// SIG undefined FUN_14464b59a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b59a(void)

{
  _DAT_14cc28cf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28d00,1);
  return;
}



// FUNCTION 14464b5df FUN_14464b5df body=69 status=ok
// SIG undefined FUN_14464b5df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b5df(void)

{
  _DAT_14cc28d10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28d18,1);
  return;
}



// FUNCTION 14464b624 FUN_14464b624 body=69 status=ok
// SIG undefined FUN_14464b624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b624(void)

{
  _DAT_14cc28d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28d30,1);
  return;
}



// FUNCTION 14464b669 FUN_14464b669 body=69 status=ok
// SIG undefined FUN_14464b669(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b669(void)

{
  _DAT_14cc28d40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28d48,1);
  return;
}



// FUNCTION 14464b6ae FUN_14464b6ae body=69 status=ok
// SIG undefined FUN_14464b6ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b6ae(void)

{
  _DAT_14cc28d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28d60,1);
  return;
}



// FUNCTION 14464b6f3 FUN_14464b6f3 body=69 status=ok
// SIG undefined FUN_14464b6f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b6f3(void)

{
  _DAT_14cc28d70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28d78,1);
  return;
}



// FUNCTION 14464b738 FUN_14464b738 body=69 status=ok
// SIG undefined FUN_14464b738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b738(void)

{
  _DAT_14cc28d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28d90,1);
  return;
}



// FUNCTION 14464b77d FUN_14464b77d body=69 status=ok
// SIG undefined FUN_14464b77d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b77d(void)

{
  _DAT_14cc28da0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b7bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28da8,1);
  return;
}



// FUNCTION 14464b7c2 FUN_14464b7c2 body=69 status=ok
// SIG undefined FUN_14464b7c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b7c2(void)

{
  _DAT_14cc28db8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28dc0,1);
  return;
}



// FUNCTION 14464b807 FUN_14464b807 body=69 status=ok
// SIG undefined FUN_14464b807(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b807(void)

{
  _DAT_14cc28dd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28dd8,1);
  return;
}



// FUNCTION 14464b84c FUN_14464b84c body=69 status=ok
// SIG undefined FUN_14464b84c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b84c(void)

{
  _DAT_14cc28de8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b88e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28df0,1);
  return;
}



// FUNCTION 14464b891 FUN_14464b891 body=69 status=ok
// SIG undefined FUN_14464b891(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b891(void)

{
  _DAT_14cc28e00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28e08,1);
  return;
}



// FUNCTION 14464b8d6 FUN_14464b8d6 body=69 status=ok
// SIG undefined FUN_14464b8d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b8d6(void)

{
  _DAT_14cc28e18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28e20,1);
  return;
}



// FUNCTION 14464b91b FUN_14464b91b body=69 status=ok
// SIG undefined FUN_14464b91b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b91b(void)

{
  _DAT_14cc28e30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b95d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28e38,1);
  return;
}



// FUNCTION 14464b960 FUN_14464b960 body=69 status=ok
// SIG undefined FUN_14464b960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b960(void)

{
  _DAT_14cc28e48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28e50,1);
  return;
}



// FUNCTION 14464b9a5 FUN_14464b9a5 body=69 status=ok
// SIG undefined FUN_14464b9a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b9a5(void)

{
  _DAT_14cc28e60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464b9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28e68,1);
  return;
}



// FUNCTION 14464b9ea FUN_14464b9ea body=69 status=ok
// SIG undefined FUN_14464b9ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464b9ea(void)

{
  _DAT_14cc28e78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464ba2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28e80,1);
  return;
}



// FUNCTION 14464ba2f FUN_14464ba2f body=69 status=ok
// SIG undefined FUN_14464ba2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464ba2f(void)

{
  _DAT_14cc28e90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464ba71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28e98,1);
  return;
}



// FUNCTION 14464ba74 FUN_14464ba74 body=69 status=ok
// SIG undefined FUN_14464ba74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464ba74(void)

{
  _DAT_14cc28ea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464bab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28eb0,1);
  return;
}



// FUNCTION 14464bab9 FUN_14464bab9 body=69 status=ok
// SIG undefined FUN_14464bab9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464bab9(void)

{
  _DAT_14cc28ec0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464bafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28ec8,1);
  return;
}



// FUNCTION 14464bafe FUN_14464bafe body=69 status=ok
// SIG undefined FUN_14464bafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464bafe(void)

{
  _DAT_14cc28ed8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464bb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28ee0,1);
  return;
}



// FUNCTION 14464bb43 FUN_14464bb43 body=69 status=ok
// SIG undefined FUN_14464bb43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464bb43(void)

{
  _DAT_14cc28ef0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464bb85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28ef8,1);
  return;
}



// FUNCTION 14464bb88 FUN_14464bb88 body=69 status=ok
// SIG undefined FUN_14464bb88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464bb88(void)

{
  _DAT_14cc28f08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464bbca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28f10,1);
  return;
}



// FUNCTION 14464bbcd FUN_14464bbcd body=69 status=ok
// SIG undefined FUN_14464bbcd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464bbcd(void)

{
  _DAT_14cc28f20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464bc0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28f28,1);
  return;
}



// FUNCTION 14464bc12 FUN_14464bc12 body=69 status=ok
// SIG undefined FUN_14464bc12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464bc12(void)

{
  _DAT_14cc28f38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014464bc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc28f40,1);
  return;
}



// FUNCTION 14464bc57 FUN_14464bc57 body=3044 status=ok
// SIG undefined FUN_14464bc57(void)

void FUN_14464bc57(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &PTR_FUN_14be9bfd0;
  local_58 = 6;
  local_68 = 0;
  FUN_14282b410(L"/Script/FFXFSR3Settings",&PTR_FUN_14be9c090,1,0);
  local_50 = 0x800000014be9c120;
  local_3c = 0xf;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_14676191a(&local_50);
  local_50._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28a58,L"r.FidelityFX.FSR3.Enabled",&local_50,
                L"Enable FidelityFX Super Resolution for Temporal Upscale");
  atexit(FUN_14464ae0e);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28a70,L"r.FidelityFX.FSR3.EnabledInEditorViewport",&local_50,
                L"Enable FidelityFX Super Resolution for Temporal Upscale in the Editor viewport by default."
               );
  atexit(FUN_14464ae53);
  local_50._0_4_ = 1;
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14cc28a88,L"r.FidelityFX.FSR3.AdjustMipBias",&local_50,
                L"Allow FSR3 to adjust the minimum global texture mip bias (r.ViewTextureMipBias.Min & r.ViewTextureMipBias.Offset)"
               );
  atexit(FUN_14464ae98);
  local_50._0_4_ = 1;
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14cc28aa0,L"r.FidelityFX.FSR3.ForceVertexDeformationOutputsVelocity",&local_50,
                L"Allow FSR3 to enable r.Velocity.EnableVertexDeformation to ensure that materials that use World-Position-Offset render valid velocities."
               );
  atexit(FUN_14464aedd);
  local_50._0_4_ = 0;
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14cc28ab8,L"r.FidelityFX.FSR3.ForceLandscapeHISMMobility",&local_50,
                L"Allow FSR3 to force the mobility of Landscape actors Hierarchical Instance Static Mesh components that use World-Position-Offset materials so they render valid velocities.\nSetting 1/\'All Instances\' is faster on the CPU, 2/\'Instances with World-Position-Offset\' is faster on the GPU."
               );
  atexit(FUN_14464af22);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28ad0,L"r.FidelityFX.FSR3.Sharpness",&local_50,
                L"Range from 0.0 to 1.0, when greater than 0 this enables Robust Contrast Adaptive Sharpening Filter to sharpen the output image. Default is 0."
               );
  atexit(FUN_14464af67);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28ae8,L"r.FidelityFX.FSR3.AutoExposure",&local_50,
                L"True to use FSR3\'s own auto-exposure, otherwise the engine\'s auto-exposure value is used."
               );
  atexit(FUN_14464afac);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28b00,L"r.FidelityFX.FSR3.HistoryFormat",&local_50,
                L"Selects the bit-depth for the FS32 history texture format, defaults to PF_FloatRGBA but can be set to PF_FloatR11G11B10 to reduce bandwidth at the expense of quality.\n 0 - PF_FloatRGBA\n 1 - PF_FloatR11G11B10\n"
               );
  atexit(FUN_14464aff1);
  local_50._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28b18,L"r.FidelityFX.FSR3.CreateReactiveMask",&local_50,
                L"Enable to generate a mask from the SceneColor, GBuffer & ScreenspaceReflections that determines how reactive each pixel should be. Defaults to 1 (Enabled)."
               );
  atexit(FUN_14464b036);
  local_50._0_4_ = 0x3ecccccd;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28b30,L"r.FidelityFX.FSR3.ReactiveMaskReflectionScale",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.4), scales the Unreal engine reflection contribution to the reactive mask, which can be used to control the amount of aliasing on reflective surfaces."
               );
  atexit(FUN_14464b07b);
  local_50._0_4_ = 0x3e19999a;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28b48,L"r.FidelityFX.FSR3.ReactiveMaskRoughnessScale",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.15), scales the GBuffer roughness to provide a fallback value for the reactive mask when screenspace & planar reflections are disabled or don\'t affect a pixel."
               );
  atexit(FUN_14464b0c0);
  local_50._0_4_ = 0x3e800000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28b60,L"r.FidelityFX.FSR3.ReactiveMaskRoughnessBias",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.25), biases the reactive mask value when screenspace/planar reflections are weak with the GBuffer roughness to account for reflection environment captures."
               );
  atexit(FUN_14464b105);
  local_50._0_4_ = 0x45bb8000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28b78,L"r.FidelityFX.FSR3.ReactiveMaskRoughnessMaxDistance",&local_50,
                L"Maximum distance in world units for using material roughness to contribute to the reactive mask, the maximum of this value and View.FurthestReflectionCaptureDistance will be used. Default is 6000.0."
               );
  atexit(FUN_14464b14a);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28b90,L"r.FidelityFX.FSR3.ReactiveMaskRoughnessForceMaxDistance",&local_50,
                L"Enable to force the maximum distance in world units for using material roughness to contribute to the reactive mask rather than using View.FurthestReflectionCaptureDistance. Defaults to 0."
               );
  atexit(FUN_14464b18f);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28ba8,L"r.FidelityFX.FSR3.ReactiveMaskReflectionLumaBias",&local_50,
                L"Range from 0.0 to 1.0 (Default: 0.0), biases the reactive mask by the luminance of the reflection. Use to balance aliasing against ghosting on brightly lit reflective surfaces."
               );
  atexit(FUN_14464b1d4);
  local_50._0_4_ = 0x3f000000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28bc0,L"r.FidelityFX.FSR3.ReactiveHistoryTranslucencyBias",&local_50,
                L"Range from 0.0 to 1.0 (Default: 1.0), scales how much translucency suppresses history via the reactive mask. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b219);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28bd8,L"r.FidelityFX.FSR3.ReactiveHistoryTranslucencyLumaBias",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), biases how much the translucency suppresses history via the reactive mask by the luminance of the transparency. Higher values will make bright translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b25e);
  local_50._0_4_ = 0x3f800000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28bf0,L"r.FidelityFX.FSR3.ReactiveMaskTranslucencyBias",&local_50,
                L"Range from 0.0 to 1.0 (Default: 1.0), scales how much contribution translucency makes to the reactive mask. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b2a3);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28c08,L"r.FidelityFX.FSR3.ReactiveMaskTranslucencyLumaBias",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), biases the translucency contribution to the reactive mask by the luminance of the transparency. Higher values will make bright translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b2e8);
  local_50._0_4_ = 0x48f42400;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28c20,L"r.FidelityFX.FSR3.ReactiveMaskTranslucencyMaxDistance",&local_50,
                L"Maximum distance in world units for using translucency to contribute to the reactive mask. This is a way to remove sky-boxes and other back-planes from the reactive mask, at the expense of nearer translucency not being reactive. Default is 500000.0."
               );
  atexit(FUN_14464b32d);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28c38,L"r.FidelityFX.FSR3.ReactiveMaskForceReactiveMaterialValue",&local_50
                ,
                L"Force the reactive mask value for Reactive Shading Model materials, when > 0 this value can be used to override the value supplied in the Material Graph. Default is 0 (Off)."
               );
  atexit(FUN_14464b372);
  local_50._0_4_ = 0xd;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28c50,L"r.FidelityFX.FSR3.ReactiveMaskReactiveShadingModelID",&local_50,
                L"Treat the specified shading model as reactive, taking the CustomData0.x value as the reactive value to write into the mask. Default is MSM_NUM (Off)."
               );
  atexit(FUN_14464b3b7);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28c68,L"r.FidelityFX.FSR3.UseSSRExperimentalDenoiser",&local_50,
                L"Set to 1 to use r.SSR.ExperimentalDenoiser when FSR3 is enabled. This is required when r.FidelityFX.FSR3.CreateReactiveMask is enabled as the FSR3 plugin sets r.SSR.ExperimentalDenoiser to 1 in order to capture reflection data to generate the reactive mask. Default is 0."
               );
  atexit(FUN_14464b3fc);
  local_50._0_4_ = 2;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28c80,L"r.FidelityFX.FSR3.DeDither",&local_50,
                L"Adds an extra pass to de-dither and avoid dithered/thin appearance. Default is 0 - Off. \n 0 - Off. \n 1 - Full. Attempts to de-dither the whole scene. \n 2 - Hair only. Will only de-dither around Hair shading model pixels - requires the Deferred Renderer. \n"
               );
  atexit(FUN_14464b441);
  local_50._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28c98,L"r.FidelityFX.FSR3.QualityMode",&local_50,
                L"FSR3 Mode [0-4].  Lower values yield superior images.  Higher values yield improved performance.  Default is 1 - Quality.\n 0 - Native AA\t\t\t1.0x \n 1 - Quality\t\t\t\t1.5x \n 2 - Balanced\t\t\t\t1.7x \n 3 - Performance\t\t\t2.0x \n 4 - Ultra Performance\t3.0x \n"
               );
  atexit(FUN_14464b486);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28cb0,L"r.FidelityFX.FSR3.QuantizeInternalTextures",&local_50,
                L"Setting this to 1 will round up the size of some internal texture to ensure a specific divisibility. Default is 0."
               );
  atexit(FUN_14464b4cb);
  local_50._0_4_ = 0x3f4ccccd;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28cc8,L"r.FidelityFX.FSR3.ReactiveMaskPreDOFTranslucencyScale",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.8), scales how much contribution pre-Depth-of-Field translucency color makes to the reactive mask. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b510);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28ce0,L"r.FidelityFX.FSR3.ReactiveMaskPreDOFTranslucencyMax",&local_50,
                L"Toggle to determine whether to use the max(SceneColorPostDepthOfField - SceneColorPreDepthOfField) or length(SceneColorPostDepthOfField - SceneColorPreDepthOfField) to determine the contribution of Pre-Depth-of-Field translucency. Default is 0."
               );
  atexit(FUN_14464b555);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28cf8,L"r.FidelityFX.FSR3.ReactiveMaskCustomStencilScale",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), scales how much customm stencil values contribute to the reactive mask. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b59a);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28d10,L"r.FidelityFX.FSR3.ReactiveHistoryCustomStencilScale",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), scales how much customm stencil values contribute to supressing hitory. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b5df);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28d28,L"r.FidelityFX.FSR3.ReactiveMaskDeferredDecalScale",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), scales how much deferred decal values contribute to the reactive mask. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b624);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28d40,L"r.FidelityFX.FSR3.ReactiveHistoryDeferredDecalScale",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), scales how much deferred decal values contribute to supressing hitory. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b669);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28d58,L"r.FidelityFX.FSR3.CustomStencilMask",&local_50,
                L"A bitmask 0-255 (0-0xff) used when accessing the custom stencil to read reactive mask values. Setting to 0 will disable use of the custom-depth/stencil buffer. Default is 0."
               );
  atexit(FUN_14464b6ae);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28d70,L"r.FidelityFX.FSR3.CustomStencilShift",&local_50,
                L"Bitshift to apply to the value read from the custom stencil when using it to provide reactive mask values. Default is 0."
               );
  atexit(FUN_14464b6f3);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28d88,L"r.FidelityFX.FSR3.ReactiveMaskTAAResponsiveValue",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), value to write to reactive mask when pixels are marked in the stencil buffer as TAA Responsive. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b738);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28da0,L"r.FidelityFX.FSR3.ReactiveHistoryTAAResponsiveValue",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.0), value to write to reactive history when pixels are marked in the stencil buffer as TAA Responsive. Higher values will make translucent materials more reactive which can reduce smearing."
               );
  atexit(FUN_14464b77d);
  local_50._0_4_ = 0x3f800000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28db8,L"r.FidelityFX.FSR3.VelocityFactor",&local_50,
                L"Range from 0.0 to 1.0 (Default 1.0), value of 0.0f can improve temporal stability of bright pixels."
               );
  atexit(FUN_14464b7c2);
  local_50._0_4_ = 0x3f800000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28dd0,L"r.FidelityFX.FSR3.ReactivenessScale",&local_50,
                L"Range from 0.0 to infinity (Default 1.0), meant for development purpose to test if writing a larger value to reactive mask reduces ghosting."
               );
  atexit(FUN_14464b807);
  local_50._0_4_ = 0x3f800000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28de8,L"r.FidelityFX.FSR3.ShadingChangeScale",&local_50,
                L"Range from 0.0 to infinity (Default 1.0). Increasing this scales fsr3 computed shading change value at read to have higher reactiveness"
               );
  atexit(FUN_14464b84c);
  local_50._0_4_ = 0x3eaaaaab;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28e00,L"r.FidelityFX.FSR3.AccumulationAddedPerFrame",&local_50,
                L"Range from 0.0 to 1.0 (Default 0.333). Corresponds to amount of accumulation added per frame at pixel coordinate where disocclusion occurred or when reactive mask value is > 0.0f. Decreasing this and drawing the ghosting object (IE no mv) to reactive mask with value close to 1.0f can decrease temporal ghosting. Decreasing this value could result in more thin feature pixels flickering."
               );
  atexit(FUN_14464b891);
  local_50._0_4_ = 0xbeaaaaab;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14cc28e18,L"r.FidelityFX.FSR3.MinDisocclutionAccumulation",&local_50,
                L"Range from -1.0 to 1.0 (Default -0.333). Increasing this value may reduce white pixel temporal flickering around swaying thin objects that are disoccluding one another often. Too high value may increase ghosting. A sufficiently negative value means for pixel coordinate at frame N that is disoccluded, add accumulation starting at frame N+2 based on r.FidelityFX.FSR3.AccumulationAddedPerFrame."
               );
  atexit(FUN_14464b8d6);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28e30,L"r.FidelityFX.FSR3.DeferDelete",&local_50,
                L"Number of frames to defer deletion - defaults to 0 which relies on the RHI to ensure resources aren\'t released while in use on the GPU."
               );
  atexit(FUN_14464b91b);
  local_50._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28e48,L"r.FidelityFX.FI.Enabled",&local_50,
                L"Enable FidelityFX Frame Interpolation");
  atexit(FUN_14464b960);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28e60,L"r.FidelityFX.FI.CaptureDebugUI",&local_50,
                L"Force FidelityFX Frame Interpolation to detect and copy any debug UI which only renders on the first invocation of Slate\'s DrawWindow command."
               );
  atexit(FUN_14464b9a5);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28e78,L"r.FidelityFX.FI.UpdateGlobalFrameTime",&local_50,
                L"Update the GAverageMS and GAverageFPS engine globals with the frame time & FPS including frame interpolation."
               );
  atexit(FUN_14464b9ea);
  local_50._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28e90,L"r.FidelityFX.FI.ModifySlateDeltaTime",&local_50,
                L"Set the FSlateApplication delta time to 0.0 when redrawing the UI for the \'Slate Redraw\' UI mode to prevent widgets\' NativeTick implementations updating incorrectly, ignored when using \'UI Extraction\'."
               );
  atexit(FUN_14464ba2f);
  local_50._0_4_ = 0;
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14cc28ea8,L"r.FidelityFX.FI.UIMode",&local_50,
                L"The method to render the UI when using Frame Generation.\n- Slate Redraw (0): will cause Slate to render the UI on to both the real & generated images each frame, this is higher quality but requires UI elements to be able to render multiple times per game frame.\n- UI Extraction (1): will compare the pre- & post- UI frame to extract the UI and copy it on to the generated frame, this might result in lower quality for translucent UI elements but doesn\'t require re-rendering UI elements."
               );
  atexit(FUN_14464ba74);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28ec0,L"r.FidelityFX.FI.UseDistortionTexture",&local_50,
                L"Set to 1 to bind the UE distortion texture to the Frame Interpolation context to better interpolate distortion, set to 0 to ignore distortion (Default: 0).\n"
               );
  atexit(FUN_14464bab9);
  local_50._0_4_ = 0;
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14cc28ed8,L"r.FidelityFX.FSR3.UseRHI",&local_50,
                L"True to enable FSR3\'s default RHI backend, false to disable in which case a native backend must be enabled. Default is 0."
               );
  atexit(FUN_14464bafe);
  local_50._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc28ef0,L"r.FidelityFX.FI.RHIPacingMode",&local_50,
                L"Enable pacing frames when using the RHI backend.\n- None (0) : No frame pacing - default.\n- Custom Present VSync (1) : enable VSync for the second presented frame, tearing will only affect the interpolated frame which will be held on screen for at least one VBlank but interferes with presentation state which may not always work."
               );
  atexit(FUN_14464bb43);
  local_50._0_4_ = 1;
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14cc28f08,L"r.FidelityFX.FSR3.UseNativeDX12",&local_50,
                L"True to use FSR3\'s native & optimised D3D12 backend, false to use the fallback implementation based on Unreal\'s RHI. Default is 1."
               );
  atexit(FUN_14464bb88);
  local_50._0_4_ = 1;
  local_68._0_4_ = 4;
  FUN_14078dbce(&DAT_14cc28f20,L"r.FidelityFX.FI.OverrideSwapChainDX12",&local_50,
                L"True to use FSR3\'s D3D12 swap-chain override that improves frame pacing, false to use the fallback implementation based on Unreal\'s RHI. Default is 1."
               );
  atexit(FUN_14464bbcd);
  local_50 = (ulonglong)local_50._4_4_ << 0x20;
  local_68 = CONCAT44(local_68._4_4_,4);
  FUN_14078dbce(&DAT_14cc28f38,L"r.FidelityFX.FI.AllowAsyncWorkloads",&local_50,
                L"True to use async. execution of Frame Interpolation, 0 to run Frame Interpolation synchronously with the game. Default is 0."
               );
  atexit(FUN_14464bc12);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464c845 FUN_14464c845 body=128 status=ok
// SIG undefined FUN_14464c845(void)

undefined8 FUN_14464c845(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  
  _Dst = *(void **)(param_1 + 0xd0);
  if (*(longlong *)((longlong)_Dst + 0x59e450) != *(longlong *)(param_1 + 0xe0)) {
    lVar2 = 0;
    memset(_Dst,0,*(size_t *)(param_1 + 0xd8));
    do {
      *(undefined8 *)((longlong)_Dst + lVar2 + 0x4800) = 0xffffffffffffffff;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x40);
    *(undefined8 *)((longlong)_Dst + 0x59e450) = *(undefined8 *)(param_1 + 0xe0);
  }
  if (param_4 != (int *)0x0) {
    iVar1 = *(int *)((longlong)_Dst + 0x59e458);
    *(int *)((longlong)_Dst + 0x59e458) = iVar1 + 1;
    *param_4 = iVar1;
  }
  return 0;
}



// FUNCTION 14464c8c5 FUN_14464c8c5 body=353 status=ok
// SIG undefined FUN_14464c8c5(void)

undefined8 FUN_14464c8c5(undefined8 param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = (uint)(DAT_14ca85078 != 0x9b);
  *(undefined1 *)(param_2 + 3) = 0;
  uVar2 = (uint)(DAT_14ca84df4 == 0x1002) * 0x20 + 0x20;
  param_2[1] = uVar2;
  param_2[2] = uVar2;
  uVar3 = (**(code **)(*DAT_14ca83900 + 0x20))();
  FUN_140056680(&local_28,uVar3);
  puVar4 = local_28;
  if (local_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  lVar6 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar4 + lVar6);
    uVar8 = (ulonglong)uVar7;
    uVar9 = *(ushort *)((longlong)&DAT_14a3502a2 + lVar6);
    if (uVar7 != uVar9) break;
    if (uVar7 == 0) goto LAB_14464c98e;
LAB_14464c962:
    lVar6 = lVar6 + 2;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar10 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_14464c962;
  }
  if (uVar7 != uVar9) goto LAB_14464c9ef;
LAB_14464c98e:
  param_2[1] = DAT_14ca84f14;
  param_2[2] = DAT_14ca84f18;
  FUN_1446f470e(&local_30,L"FFXD3D12Backend",1);
  plVar5 = (longlong *)FUN_1447c1074(local_30);
  if ((plVar5 != (longlong *)0x0) &&
     (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5), plVar5 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar5 + 0x60))(plVar5);
    *param_2 = uVar2;
    uVar1 = (**(code **)(*plVar5 + 0x68))(plVar5);
    *(undefined1 *)(param_2 + 3) = uVar1;
  }
LAB_14464c9ef:
  *(undefined1 *)((longlong)param_2 + 0xd) = DAT_14ca84ef4;
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14464ca27 FUN_14464ca27 body=99 status=ok
// SIG undefined FUN_14464ca27(void)

undefined8 FUN_14464ca27(longlong param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0xd0);
  uVar2 = 0;
  piVar3 = piVar1;
  do {
    if (((*(ulonglong *)((longlong)piVar1 + (ulonglong)((uint)(uVar2 >> 2) & 0x3ffffff0) + 0x4800)
          >> (uVar2 & 0x3f) & 1) == 0) && (*piVar3 == param_2)) {
      FUN_149817e10(piVar1,uVar2 & 0xffffffff);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x12;
  } while (uVar2 != 0x100);
  return 0;
}



// FUNCTION 14464ca8a FUN_14464ca8a body=3602 status=ok
// SIG undefined FUN_14464ca8a(void)

undefined8 FUN_14464ca8a(longlong param_1,longlong param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  void *_Src;
  void *pvVar16;
  longlong lVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  sbyte sVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  void *_Dst;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong *puVar30;
  int iVar31;
  size_t _Size;
  uint uVar32;
  uint uVar33;
  char cVar34;
  undefined1 *puVar35;
  undefined **ppuVar36;
  bool bVar37;
  bool bVar38;
  float fVar39;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined ***local_190;
  char local_181;
  int local_180;
  undefined4 local_17c;
  uint *local_178;
  int *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined **local_128;
  uint local_120 [6];
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined2 local_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined ***pppuStack_c0;
  int local_b8;
  undefined4 local_b4;
  uint uStack_b0;
  ulonglong uStack_ac;
  uint5 local_a4;
  undefined3 uStack_9f;
  undefined4 local_9c;
  undefined1 local_98 [5];
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar17 = *(longlong *)(param_1 + 0xd0);
  if (lVar17 == 0) {
    uVar26 = 0x8000000a;
    goto LAB_14464d2a0;
  }
  local_170 = (int *)(param_2 + 4);
  puVar24 = &DAT_00020008;
  if ((*(uint *)(param_2 + 0x20) & 2) == 0) {
    puVar24 = (undefined1 *)0x0;
  }
  puVar35 = (undefined1 *)0x20009;
  if ((*(uint *)(param_2 + 0x20) & 1) == 0) {
    puVar35 = puVar24;
  }
  iVar5 = *(int *)(param_2 + 8);
  _Src = *(void **)(param_2 + 0x48);
  _Size = *(size_t *)(param_2 + 0x40);
  local_17c = param_3;
  if (_Src == (void *)0x0 || iVar5 != 0x18) {
    if (iVar5 == 0x14 && _Src != (void *)0x0) {
      _Src = (void *)FUN_14001cc68(_Size * 2,0);
      uVar27 = *(ulonglong *)(param_2 + 0x40);
      if (3 < uVar27) {
        lVar29 = *(longlong *)(param_2 + 0x48);
        uVar28 = 0;
        uVar25 = 2;
        do {
          *(undefined2 *)((longlong)_Src + (uVar28 & 0xffffffff) * 2) =
               *(undefined2 *)(lVar29 + uVar28);
          iVar31 = (int)uVar28;
          *(undefined2 *)((longlong)_Src + (ulonglong)(iVar31 + 1) * 2) =
               *(undefined2 *)(lVar29 + 2 + uVar28);
          *(undefined2 *)((longlong)_Src + (ulonglong)(iVar31 + 2) * 2) = 0;
          *(undefined2 *)((longlong)_Src + (ulonglong)(iVar31 + 3) * 2) = 0;
          uVar28 = uVar28 + 4;
          bVar37 = uVar25 < uVar27 >> 2;
          uVar25 = (ulonglong)((int)uVar25 + 2);
        } while (bVar37);
      }
      _Size = uVar27 * 2;
      sVar23 = 1;
      goto LAB_14464cc2b;
    }
    uVar33 = *(uint *)(param_2 + 0xc);
    uVar32 = uVar33;
  }
  else {
    _Src = (void *)FUN_14001cc68(_Size << 2,0);
    uVar27 = *(ulonglong *)(param_2 + 0x40);
    if (1 < uVar27) {
      lVar29 = *(longlong *)(param_2 + 0x48);
      uVar25 = 3;
      uVar28 = 0;
      do {
        iVar31 = (int)uVar25;
        *(undefined2 *)((longlong)_Src + (ulonglong)(iVar31 - 3) * 2) =
             *(undefined2 *)(lVar29 + uVar28 * 2);
        *(undefined2 *)((longlong)_Src + (ulonglong)(iVar31 - 2) * 2) = 0;
        *(undefined2 *)((longlong)_Src + (ulonglong)(iVar31 - 1) * 2) = 0;
        *(undefined2 *)((longlong)_Src + uVar25 * 2) = 0;
        uVar28 = uVar28 + 1;
        uVar25 = (ulonglong)(iVar31 + 4);
      } while ((uVar28 & 0xffffffff) < uVar27 >> 1);
    }
    _Size = uVar27 << 2;
    sVar23 = 2;
LAB_14464cc2b:
    uVar33 = *(uint *)(param_2 + 0xc);
    uVar32 = uVar33 << sVar23;
  }
  ppuVar36 = (undefined **)((ulonglong)puVar35 | (ulonglong)(iVar5 == 0xc) << 4);
  iVar5 = *local_170;
  bVar37 = _Src != (void *)0x0;
  bVar38 = _Size != 0;
  cVar34 = bVar38 && bVar37;
  iVar31 = (int)_Size;
  if (iVar5 == 2) {
    local_180 = *(int *)(param_2 + 0x18);
    local_178 = param_4;
    local_168 = lVar17;
    if (local_180 == 0) {
      if (uVar33 < *(uint *)(param_2 + 0x10)) {
        uVar33 = *(uint *)(param_2 + 0x10);
      }
      fVar39 = logf((float)uVar33);
      local_180 = (int)ROUND(fVar39 * 1.442695 + fVar39 * 1.442695 + -0.5) >> 1;
    }
    uVar14 = FUN_14464f270(*(undefined4 *)(param_2 + 8));
    uVar26 = *(undefined8 *)(param_2 + 0xc);
    uStack_e8 = *(undefined8 *)(param_2 + 0x28);
    uVar33 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f6 = 0;
    local_f4 = 0xff00;
    local_fc = 0x10001;
    local_120[0] = 1;
    local_108 = 0;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    local_e0 = (undefined8 *)0x0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_150 = &PTR_FUN_14bea2740;
    local_140 = CONCAT44(local_140._4_4_,iVar31);
    local_f8 = (undefined1)local_180;
    local_120[5] = uVar33;
    local_104 = uVar26;
    local_f5 = uVar14;
    if (bVar38 && bVar37) {
      local_e0 = &local_150;
      local_f0 = 0x10;
      local_148 = _Src;
    }
    else {
      local_148 = _Src;
      local_f0 = FUN_149810708(*(undefined4 *)(param_2 + 0x24));
      uVar13 = _local_98;
      local_f7 = 1;
      if (local_f0 == 0) {
        local_9c = 0x10001;
        local_98._0_3_ = CONCAT21(1,(char)local_180);
        pppuStack_c0 = (undefined ***)CONCAT44(local_120[1],local_120[0]);
        local_b8 = local_120[2];
        local_b4 = local_120[3];
        uStack_b0 = local_120[4];
        uStack_92 = SUB82(uVar13,6);
        local_98 = (undefined1  [5])CONCAT14(0,CONCAT13(uVar14,local_98._0_3_));
        _local_98 = CONCAT15(0xff,local_98);
        uStack_ac = (ulonglong)uVar33;
        local_90._4_4_ = uStack_ec;
        uStack_88 = uStack_e8;
        local_80 = (undefined4)local_e0;
        uStack_7c = local_e0._4_4_;
        uStack_78 = (undefined4)uStack_d8;
        uStack_74 = uStack_d8._4_4_;
        local_70 = local_d0;
        local_128 = ppuVar36;
        local_c8 = ppuVar36;
        _local_a4 = uVar26;
        local_90._0_4_ = local_f0;
        uVar15 = FUN_1431edf91(ppuVar36,0);
        local_90 = CONCAT44(local_90._4_4_,uVar15);
        lVar17 = *DAT_14ca83900;
        goto LAB_14464ce04;
      }
    }
    local_f7 = 1;
    lVar17 = *DAT_14ca83900;
    local_128 = ppuVar36;
LAB_14464ce04:
    (**(code **)(lVar17 + 0x1a0))(DAT_14ca83900,&local_138,&DAT_14ca85100);
    puVar1 = local_178;
    puVar18 = (ulonglong *)FUN_14001cc68(8,0x10);
    FUN_1447ec05f(&local_c8,CONCAT44(uStack_134,local_138),*(undefined8 *)(param_2 + 0x28));
    *puVar18 = (ulonglong)local_c8;
    uVar15 = *(undefined4 *)(param_2 + 4);
    lVar17 = CONCAT44(uStack_134,local_138);
    lVar29 = 0;
    puVar30 = (ulonglong *)(local_168 + 0x4800);
LAB_14464ce64:
    uVar27 = *puVar30;
    if (uVar27 == 0) goto code_r0x00014464ce70;
    uVar25 = 0;
    if (uVar27 != 0) {
      for (; (uVar27 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
      }
    }
    *puVar30 = uVar27 & ~(1L << (uVar25 & 0x3f));
    uVar27 = (ulonglong)(uint)((int)uVar25 - (int)lVar29);
    goto LAB_14464d094;
  }
  if (iVar5 == 4) {
    local_180 = *(int *)(param_2 + 0x18);
    local_181 = cVar34;
    local_178 = param_4;
    local_168 = lVar17;
    if (local_180 == 0) {
      if (uVar33 < *(uint *)(param_2 + 0x10)) {
        uVar33 = *(uint *)(param_2 + 0x10);
      }
      if (uVar33 < *(uint *)(param_2 + 0x14)) {
        uVar33 = *(uint *)(param_2 + 0x14);
      }
      fVar39 = logf((float)uVar33);
      local_180 = (int)ROUND(fVar39 * 1.442695 + fVar39 * 1.442695 + -0.5) >> 1;
    }
    uVar14 = FUN_14464f270(*(undefined4 *)(param_2 + 8));
    uVar4 = *(undefined2 *)(param_2 + 0x14);
    uVar26 = *(undefined8 *)(param_2 + 0xc);
    uStack_e8 = *(undefined8 *)(param_2 + 0x28);
    uVar33 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f6 = 2;
    local_f4 = 0xff00;
    local_fc = CONCAT22(1,uVar4);
    local_120[0] = 1;
    local_108 = 0;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    local_e0 = (undefined8 *)0x0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_150 = &PTR_FUN_14bea2740;
    local_140 = CONCAT44(local_140._4_4_,iVar31);
    local_f8 = (undefined1)local_180;
    local_120[5] = uVar33;
    local_104 = uVar26;
    local_f5 = uVar14;
    if (local_181 == '\0') {
      local_148 = _Src;
      local_f0 = FUN_149810708(*(undefined4 *)(param_2 + 0x24));
      uVar13 = _local_98;
      local_f7 = 1;
      if (local_f0 == 0) {
        local_9c = CONCAT22(1,uVar4);
        local_98._0_3_ = CONCAT21(0x201,(char)local_180);
        pppuStack_c0 = (undefined ***)CONCAT44(local_120[1],local_120[0]);
        local_b8 = local_120[2];
        local_b4 = local_120[3];
        uStack_b0 = local_120[4];
        uStack_92 = SUB82(uVar13,6);
        local_98 = (undefined1  [5])CONCAT14(0,CONCAT13(uVar14,local_98._0_3_));
        _local_98 = CONCAT15(0xff,local_98);
        uStack_ac = (ulonglong)uVar33;
        local_90._4_4_ = uStack_ec;
        uStack_88 = uStack_e8;
        local_80 = (undefined4)local_e0;
        uStack_7c = local_e0._4_4_;
        uStack_78 = (undefined4)uStack_d8;
        uStack_74 = uStack_d8._4_4_;
        local_70 = local_d0;
        local_128 = ppuVar36;
        local_c8 = ppuVar36;
        _local_a4 = uVar26;
        local_90._0_4_ = local_f0;
        uVar15 = FUN_1431edf91(ppuVar36,0);
        local_90 = CONCAT44(local_90._4_4_,uVar15);
        lVar17 = *DAT_14ca83900;
        goto LAB_14464cff7;
      }
    }
    else {
      local_e0 = &local_150;
      local_f0 = 0x10;
      local_148 = _Src;
    }
    local_f7 = 1;
    lVar17 = *DAT_14ca83900;
    local_128 = ppuVar36;
LAB_14464cff7:
    (**(code **)(lVar17 + 0x1a0))(DAT_14ca83900,&local_138,&DAT_14ca85100);
    puVar1 = local_178;
    uVar12 = local_17c;
    cVar34 = local_181;
    puVar18 = (ulonglong *)FUN_14001cc68(8,0x10);
    FUN_1447ec05f(&local_c8,CONCAT44(uStack_134,local_138),*(undefined8 *)(param_2 + 0x28));
    *puVar18 = (ulonglong)local_c8;
    uVar15 = *(undefined4 *)(param_2 + 4);
    lVar17 = CONCAT44(uStack_134,local_138);
    lVar29 = 0;
    puVar30 = (ulonglong *)(local_168 + 0x4800);
LAB_14464d05e:
    uVar27 = *puVar30;
    if (uVar27 == 0) goto code_r0x00014464d06a;
    uVar25 = 0;
    if (uVar27 != 0) {
      for (; (uVar27 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
      }
    }
    *puVar30 = uVar27 & ~(1L << (uVar25 & 0x3f));
    uVar27 = (ulonglong)(uint)((int)uVar25 - (int)lVar29);
    goto LAB_14464d19c;
  }
  uVar26 = 0x80000009;
  if (iVar5 == 0) {
    local_120[0] = 0;
    local_120[1] = 0;
    local_120[2] = 0;
    local_120[3] = 0;
    local_128 = &PTR_FUN_14a3d4750;
    local_120[4] = local_120[4] & 0xffffff00;
    if (bVar38 && bVar37) {
      local_120[2] = iVar31;
      if (iVar31 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        FUN_14746fa8e(local_120,0);
        pvVar16 = (void *)CONCAT44(local_120[1],local_120[0]);
      }
      _Dst = (void *)((longlong)local_120 + ((longlong)pvVar16 >> 0x18));
      if (((ulonglong)pvVar16 & 1) == 0) {
        _Dst = pvVar16;
      }
      memcpy(_Dst,_Src,_Size);
    }
    local_140 = 0;
    local_148 = (void *)CONCAT44(local_148._4_4_,0x10109);
    local_150 = (undefined **)CONCAT44(uVar32,4);
    _local_98 = *(undefined8 *)(param_2 + 0x28);
    local_c8 = (undefined **)0x0;
    pppuStack_c0 = (undefined ***)0x0;
    local_b8 = 1;
    local_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a4 = (uint5)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_9c = 0;
    local_90 = 0;
    uStack_88 = 0;
    if (bVar38 && bVar37) {
      pppuStack_c0 = &local_128;
      uVar15 = 0x10;
      local_181 = cVar34;
    }
    else {
      local_181 = cVar34;
      uVar15 = FUN_149810708(*(undefined4 *)(param_2 + 0x24));
    }
    local_138 = uVar32 << 2;
    uStack_130 = 0x10109;
    uStack_134 = 4;
    if ((uVar32 & 0x3fffffff) == 0) {
      FUN_14570b4be(&DAT_14ca85100,&local_c8,0x10109,4);
    }
    if (DAT_14ca85169 == '\0') {
      FUN_14002049c(&DAT_14ca85100,1);
      local_190 = &local_c8;
      local_198 = CONCAT44(local_198._4_4_,uVar15);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_158,&DAT_14ca85100,&local_138);
      *(undefined4 *)(local_158 + 0x18) = uVar15;
      FUN_14002049c(&DAT_14ca85100,0);
    }
    else {
      local_190 = &local_c8;
      local_198 = CONCAT44(local_198._4_4_,uVar15);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_158,&DAT_14ca85100,&local_138);
      *(undefined4 *)(local_158 + 0x18) = uVar15;
    }
    lVar29 = local_158;
    plVar19 = (longlong *)FUN_14001cc68(8,0x10);
    *plVar19 = 0;
    puVar20 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    local_198 = *(undefined8 *)(param_2 + 0x28);
    local_160 = lVar29;
    if (lVar29 != 0) {
      LOCK();
      *(int *)(lVar29 + 8) = *(int *)(lVar29 + 8) + 1;
      UNLOCK();
    }
    FUN_14742b8c8(puVar20,&local_160,&local_150);
    uVar15 = local_17c;
    cVar34 = local_181;
    puVar6 = (undefined8 *)*plVar19;
    if (puVar6 != puVar20) {
      *plVar19 = (longlong)puVar20;
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
      }
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar6 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
    iVar5 = *local_170;
    lVar29 = 0;
    puVar30 = (ulonglong *)(lVar17 + 0x4800);
LAB_14464d722:
    uVar27 = *puVar30;
    if (uVar27 == 0) goto code_r0x00014464d72a;
    uVar25 = 0;
    if (uVar27 != 0) {
      for (; (uVar27 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
      }
    }
    *puVar30 = uVar27 & ~(1L << (uVar25 & 0x3f));
    uVar27 = (ulonglong)(uint)((int)uVar25 - (int)lVar29);
    goto LAB_14464d751;
  }
  goto LAB_14464d286;
code_r0x00014464ce70:
  lVar29 = lVar29 + -0x40;
  puVar30 = puVar30 + 2;
  if (lVar29 == -0x100) goto code_r0x00014464ce81;
  goto LAB_14464ce64;
code_r0x00014464ce81:
  uVar27 = 0xffffffff;
LAB_14464d094:
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  uVar33 = (uint)uVar27;
  *(longlong *)(local_168 + 8 + uVar27 * 0x48) = lVar17;
  *(ulonglong **)(local_168 + 0x30 + uVar27 * 0x48) = puVar18;
  puVar20 = (undefined8 *)(local_168 + 0x38 + uVar27 * 0x48);
  *puVar20 = 0;
  puVar20[1] = 0;
  *(undefined4 *)(local_168 + 0x10 + uVar27 * 0x48) = uVar15;
  *puVar1 = uVar33;
  iVar5 = *local_170;
  iVar31 = local_170[1];
  iVar7 = local_170[2];
  iVar8 = local_170[3];
  iVar9 = local_170[5];
  iVar10 = local_170[6];
  iVar11 = local_170[7];
  piVar2 = (int *)(local_168 + 0x20 + (longlong)(int)uVar33 * 0x48);
  *piVar2 = local_170[4];
  piVar2[1] = iVar9;
  piVar2[2] = iVar10;
  piVar2[3] = iVar11;
  piVar2 = (int *)(local_168 + 0x10 + (longlong)(int)uVar33 * 0x48);
  *piVar2 = iVar5;
  piVar2[1] = iVar31;
  piVar2[2] = iVar7;
  piVar2[3] = iVar8;
  *(int *)(local_168 + 0x24 + (longlong)(int)*puVar1 * 0x48) = local_180;
  uVar27 = (ulonglong)*puVar1;
  if ((uVar27 < 0x100) &&
     ((*(ulonglong *)(local_168 + 0x4800 + (ulonglong)(*puVar1 >> 2 & 0xfffffff0)) >>
       (uVar27 & 0x3f) & 1) == 0)) {
    *(undefined4 *)(local_168 + uVar27 * 0x48) = local_17c;
  }
  lVar17 = CONCAT44(uStack_134,local_138);
  if (lVar17 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar17 + 8);
    uVar33 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar33 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar17 + 8);
      LOCK();
      uVar33 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar33 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar17 + 0xd);
        plVar21 = (longlong *)FUN_14001cc68(0x10,8);
        plVar21[1] = lVar17;
        plVar19 = DAT_14ca843c0;
        plVar22 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar21 = (longlong)plVar19;
            LOCK();
            bVar37 = plVar19 != DAT_14ca843c0;
            plVar22 = plVar21;
            if (bVar37) {
              plVar19 = DAT_14ca843c0;
              plVar22 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar22;
            UNLOCK();
          } while (bVar37);
        }
        else {
          do {
            *plVar21 = (longlong)plVar22;
            LOCK();
            bVar37 = plVar22 != DAT_14ca843c8;
            plVar19 = plVar21;
            if (bVar37) {
              plVar22 = DAT_14ca843c8;
              plVar19 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar19;
            UNLOCK();
          } while (bVar37);
        }
      }
    }
  }
  goto LAB_14464d284;
code_r0x00014464d06a:
  lVar29 = lVar29 + -0x40;
  puVar30 = puVar30 + 2;
  if (lVar29 == -0x100) goto code_r0x00014464d07b;
  goto LAB_14464d05e;
code_r0x00014464d07b:
  uVar27 = 0xffffffff;
LAB_14464d19c:
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  uVar33 = (uint)uVar27;
  *(longlong *)(local_168 + 8 + uVar27 * 0x48) = lVar17;
  *(ulonglong **)(local_168 + 0x30 + uVar27 * 0x48) = puVar18;
  puVar20 = (undefined8 *)(local_168 + 0x38 + uVar27 * 0x48);
  *puVar20 = 0;
  puVar20[1] = 0;
  *(undefined4 *)(local_168 + 0x10 + uVar27 * 0x48) = uVar15;
  *puVar1 = uVar33;
  iVar5 = *local_170;
  iVar31 = local_170[1];
  iVar7 = local_170[2];
  iVar8 = local_170[3];
  iVar9 = local_170[5];
  iVar10 = local_170[6];
  iVar11 = local_170[7];
  piVar2 = (int *)(local_168 + 0x20 + (longlong)(int)uVar33 * 0x48);
  *piVar2 = local_170[4];
  piVar2[1] = iVar9;
  piVar2[2] = iVar10;
  piVar2[3] = iVar11;
  piVar2 = (int *)(local_168 + 0x10 + (longlong)(int)uVar33 * 0x48);
  *piVar2 = iVar5;
  piVar2[1] = iVar31;
  piVar2[2] = iVar7;
  piVar2[3] = iVar8;
  *(int *)(local_168 + 0x24 + (longlong)(int)*puVar1 * 0x48) = local_180;
  uVar27 = (ulonglong)*puVar1;
  if ((uVar27 < 0x100) &&
     ((*(ulonglong *)(local_168 + 0x4800 + (ulonglong)(*puVar1 >> 2 & 0xfffffff0)) >>
       (uVar27 & 0x3f) & 1) == 0)) {
    *(undefined4 *)(local_168 + uVar27 * 0x48) = uVar12;
  }
  lVar17 = CONCAT44(uStack_134,local_138);
  if (lVar17 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar17 + 8);
    uVar33 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar33 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar17 + 8);
      LOCK();
      uVar33 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar33 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar17 + 0xd);
        plVar21 = (longlong *)FUN_14001cc68(0x10,8);
        plVar21[1] = lVar17;
        plVar19 = DAT_14ca843c0;
        plVar22 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar21 = (longlong)plVar19;
            LOCK();
            bVar37 = plVar19 != DAT_14ca843c0;
            plVar22 = plVar21;
            if (bVar37) {
              plVar19 = DAT_14ca843c0;
              plVar22 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar22;
            UNLOCK();
          } while (bVar37);
        }
        else {
          do {
            *plVar21 = (longlong)plVar22;
            LOCK();
            bVar37 = plVar22 != DAT_14ca843c8;
            plVar19 = plVar21;
            if (bVar37) {
              plVar22 = DAT_14ca843c8;
              plVar19 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar19;
            UNLOCK();
          } while (bVar37);
        }
      }
    }
  }
  goto LAB_14464d284;
code_r0x00014464d72a:
  lVar29 = lVar29 + -0x40;
  puVar30 = puVar30 + 2;
  if (lVar29 == -0x100) goto code_r0x00014464d73b;
  goto LAB_14464d722;
code_r0x00014464d73b:
  uVar27 = 0xffffffff;
LAB_14464d751:
  if (local_158 != 0) {
    LOCK();
    *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
    UNLOCK();
  }
  uVar33 = (uint)uVar27;
  *(longlong *)(lVar17 + 8 + uVar27 * 0x48) = local_158;
  puVar20 = (undefined8 *)(lVar17 + 0x30 + uVar27 * 0x48);
  *puVar20 = 0;
  puVar20[1] = 0;
  *(longlong **)(lVar17 + 0x40 + uVar27 * 0x48) = plVar19;
  *(int *)(lVar17 + 0x10 + uVar27 * 0x48) = iVar5;
  *param_4 = uVar33;
  iVar5 = *local_170;
  iVar31 = local_170[1];
  iVar7 = local_170[2];
  iVar8 = local_170[3];
  iVar9 = local_170[5];
  iVar10 = local_170[6];
  iVar11 = local_170[7];
  piVar2 = (int *)(lVar17 + 0x20 + (longlong)(int)uVar33 * 0x48);
  *piVar2 = local_170[4];
  piVar2[1] = iVar9;
  piVar2[2] = iVar10;
  piVar2[3] = iVar11;
  piVar2 = (int *)(lVar17 + 0x10 + (longlong)(int)uVar33 * 0x48);
  *piVar2 = iVar5;
  piVar2[1] = iVar31;
  piVar2[2] = iVar7;
  piVar2[3] = iVar8;
  *(undefined4 *)(lVar17 + 0x10 + (longlong)(int)*param_4 * 0x48) = 0;
  uVar27 = (ulonglong)*param_4;
  if ((uVar27 < 0x100) &&
     ((*(ulonglong *)(lVar17 + 0x4800 + (ulonglong)(*param_4 >> 2 & 0xfffffff0)) >> (uVar27 & 0x3f)
      & 1) == 0)) {
    *(undefined4 *)(lVar17 + uVar27 * 0x48) = uVar15;
  }
  if (local_158 != 0) {
    LOCK();
    puVar1 = (uint *)(local_158 + 8);
    uVar33 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar33 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_158 + 8);
      LOCK();
      uVar33 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar33 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_158 + 0xd);
        plVar21 = (longlong *)FUN_14001cc68(0x10,8);
        plVar21[1] = local_158;
        plVar19 = DAT_14ca843c0;
        plVar22 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar21 = (longlong)plVar19;
            LOCK();
            bVar37 = plVar19 != DAT_14ca843c0;
            plVar22 = plVar21;
            if (bVar37) {
              plVar19 = DAT_14ca843c0;
              plVar22 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar22;
            UNLOCK();
          } while (bVar37);
        }
        else {
          do {
            *plVar21 = (longlong)plVar22;
            LOCK();
            bVar37 = plVar22 != DAT_14ca843c8;
            plVar19 = plVar21;
            if (bVar37) {
              plVar22 = DAT_14ca843c8;
              plVar19 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar19;
            UNLOCK();
          } while (bVar37);
        }
      }
    }
  }
  if (CONCAT44(local_120[1],local_120[0]) != 0 && (local_120[0] & 1) == 0) {
    FUN_1400020a8();
  }
LAB_14464d284:
  uVar26 = 0;
LAB_14464d286:
  if ((cVar34 != '\0') && ((*(int *)(param_2 + 8) == 0x18 || (*(int *)(param_2 + 8) == 0x14)))) {
    FUN_1400020a8(_Src);
  }
LAB_14464d2a0:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26;
}



// FUNCTION 14464d89d FUN_14464d89d body=86 status=ok
// SIG undefined FUN_14464d89d(void)

undefined8 FUN_14464d89d(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x8000000a;
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0xd0), lVar1 != 0)) {
    uVar2 = 0;
    if ((param_2 < 0x100) &&
       (((*(ulonglong *)(lVar1 + 0x4800 + (ulonglong)(param_2 >> 2 & 0xfffffff0)) >>
          ((ulonglong)param_2 & 0x3f) & 1) == 0 &&
        (*(int *)(lVar1 + (ulonglong)param_2 * 0x48) == param_3)))) {
      FUN_149817e10();
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 14464d8f9 FUN_14464d8f9 body=104 status=ok
// SIG undefined FUN_14464d8f9(void)

ulonglong * FUN_14464d8f9(ulonglong *param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  memset(param_1,0,0xb0);
  lVar2 = *(longlong *)(param_2 + 0xd0);
  lVar5 = (longlong)param_3;
  puVar1 = (ulonglong *)(lVar2 + 0x10 + lVar5 * 0x48);
  uVar6 = *puVar1;
  uVar3 = puVar1[1];
  puVar1 = (ulonglong *)(lVar2 + 0x20 + lVar5 * 0x48);
  uVar4 = puVar1[1];
  param_1[3] = *puVar1;
  param_1[4] = uVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar3;
  uVar6 = *(ulonglong *)(lVar2 + 8 + lVar5 * 0x48);
  if (uVar6 == 0) {
    uVar6 = *(ulonglong *)(lVar2 + lVar5 * 0x48 + 0x38);
    if (uVar6 == 0) {
      return param_1;
    }
  }
  else {
    uVar6 = uVar6 | 1;
  }
  *param_1 = uVar6;
  return param_1;
}



// FUNCTION 14464d961 FUN_14464d961 body=726 status=ok
// SIG undefined FUN_14464d961(void)

undefined8 FUN_14464d961(longlong param_1,ulonglong *param_2,undefined4 param_3,uint *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  if (param_1 == 0) {
    return 0x8000000a;
  }
  if (param_2 == (ulonglong *)0x0) {
    return 0x8000000a;
  }
  uVar11 = *param_2;
  if (param_4 == (uint *)0x0 || uVar11 == 0) {
    return 0x8000000a;
  }
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if ((uVar11 & 1) == 0) {
    uVar4 = *(undefined8 *)(uVar11 + 0x60);
    lVar9 = 0;
    puVar10 = (ulonglong *)(lVar3 + 0x4800);
    do {
      uVar8 = *puVar10;
      if (uVar8 != 0) {
        uVar5 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        *puVar10 = uVar8 & ~(1L << (uVar5 & 0x3f));
        uVar8 = (ulonglong)(uint)((int)uVar5 - (int)lVar9);
        goto LAB_14464da46;
      }
      lVar9 = lVar9 + -0x40;
      puVar10 = puVar10 + 2;
    } while (lVar9 != -0x100);
    uVar8 = 0xffffffff;
LAB_14464da46:
    uVar7 = (uint)uVar8;
    *(undefined8 *)(lVar3 + 8 + uVar8 * 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x30 + uVar8 * 0x48) = 0;
    *(ulonglong *)(lVar3 + 0x38 + uVar8 * 0x48) = uVar11;
    *(undefined8 *)(lVar3 + 0x40 + uVar8 * 0x48) = 0;
    *(undefined4 *)(lVar3 + 0x10 + uVar8 * 0x48) = 2;
    *param_4 = uVar7;
    if (uVar7 < 0x100) {
      puVar10 = (ulonglong *)(lVar3 + 0x4808 + (ulonglong)(uVar7 >> 2 & 0xfffffff0));
      *puVar10 = *puVar10 | 1L << ((byte)uVar8 & 0x3f);
      uVar8 = (ulonglong)*param_4;
      if ((uVar8 < 0x100) &&
         ((*(ulonglong *)(lVar3 + 0x4800 + (ulonglong)(*param_4 >> 2 & 0xfffffff0)) >>
           (uVar8 & 0x3f) & 1) == 0)) {
        *(undefined4 *)(lVar3 + uVar8 * 0x48) = param_3;
        uVar8 = (ulonglong)*param_4;
      }
    }
    *(undefined4 *)(lVar3 + 0x10 + (longlong)(int)uVar8 * 0x48) = 2;
    uVar6 = FUN_14464ee4a(CONCAT71((int7)(uVar8 >> 8),*(undefined1 *)(uVar11 + 0x93)),
                          ((uint)uVar4 & 0x10) >> 4);
    *(undefined4 *)(lVar3 + 0x14 + (longlong)(int)*param_4 * 0x48) = uVar6;
    *(undefined4 *)(lVar3 + 0x18 + (longlong)(int)*param_4 * 0x48) = *(undefined4 *)(uVar11 + 0x84);
    *(undefined4 *)(lVar3 + 0x1c + (longlong)(int)*param_4 * 0x48) = *(undefined4 *)(uVar11 + 0x88);
    *(uint *)(lVar3 + 0x24 + (longlong)(int)*param_4 * 0x48) = (uint)*(byte *)(uVar11 + 0x90);
    return 0;
  }
  iVar2 = (int)param_2[1];
  if ((iVar2 == 4) || (iVar2 == 2)) {
    uVar11 = uVar11 & 0xfffffffffffffffe;
    puVar10 = (ulonglong *)(lVar3 + 0x4800);
    lVar9 = 0;
LAB_14464db2d:
    uVar8 = *puVar10;
    if (uVar8 == 0) goto code_r0x00014464db35;
    uVar5 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    *puVar10 = uVar8 & ~(1L << (uVar5 & 0x3f));
    uVar8 = (ulonglong)(uint)((int)uVar5 - (int)lVar9);
    goto LAB_14464db5b;
  }
  if (iVar2 != 0) {
    return 0x8000000a;
  }
  uVar11 = uVar11 & 0xfffffffffffffffe;
  puVar10 = (ulonglong *)(lVar3 + 0x4800);
  lVar9 = 0;
LAB_14464da11:
  uVar8 = *puVar10;
  if (uVar8 == 0) goto code_r0x00014464da1d;
  uVar5 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  *puVar10 = uVar8 & ~(1L << (uVar5 & 0x3f));
  uVar8 = (ulonglong)(uint)((int)uVar5 - (int)lVar9);
  goto LAB_14464db98;
code_r0x00014464db35:
  lVar9 = lVar9 + -0x40;
  puVar10 = puVar10 + 2;
  if (lVar9 == -0x100) goto code_r0x00014464db46;
  goto LAB_14464db2d;
code_r0x00014464db46:
  uVar8 = 0xffffffff;
LAB_14464db5b:
  uVar7 = (uint)uVar8;
  if (uVar11 != 0) {
    LOCK();
    *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
    UNLOCK();
  }
  *(ulonglong *)(lVar3 + 8 + uVar8 * 0x48) = uVar11;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + uVar8 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x40 + uVar8 * 0x48) = 0;
  *(int *)(lVar3 + 0x10 + uVar8 * 0x48) = iVar2;
  goto LAB_14464dbc9;
code_r0x00014464da1d:
  lVar9 = lVar9 + -0x40;
  puVar10 = puVar10 + 2;
  if (lVar9 == -0x100) goto code_r0x00014464da2e;
  goto LAB_14464da11;
code_r0x00014464da2e:
  uVar8 = 0xffffffff;
LAB_14464db98:
  uVar7 = (uint)uVar8;
  if (uVar11 != 0) {
    LOCK();
    *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
    UNLOCK();
  }
  *(ulonglong *)(lVar3 + 8 + uVar8 * 0x48) = uVar11;
  *(undefined4 *)(lVar3 + 0x10 + uVar8 * 0x48) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + uVar8 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x40 + uVar8 * 0x48) = 0;
LAB_14464dbc9:
  *param_4 = uVar7;
  if (uVar7 < 0x100) {
    puVar10 = (ulonglong *)(lVar3 + 0x4808 + (ulonglong)(uVar7 >> 2 & 0xfffffff0));
    *puVar10 = *puVar10 | 1L << ((byte)uVar7 & 0x3f);
    uVar7 = *param_4;
    uVar11 = (ulonglong)uVar7;
    if ((uVar11 < 0x100) &&
       ((*(ulonglong *)(lVar3 + 0x4800 + (ulonglong)(uVar7 >> 2 & 0xfffffff0)) >> (uVar11 & 0x3f) &
        1) == 0)) {
      *(undefined4 *)(lVar3 + uVar11 * 0x48) = param_3;
      uVar7 = *param_4;
    }
  }
  uVar11 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = param_2[4];
  puVar10 = (ulonglong *)(lVar3 + 0x20 + (longlong)(int)uVar7 * 0x48);
  *puVar10 = param_2[3];
  puVar10[1] = uVar5;
  puVar10 = (ulonglong *)(lVar3 + 0x10 + (longlong)(int)uVar7 * 0x48);
  *puVar10 = uVar11;
  puVar10[1] = uVar8;
  return 0;
}



// FUNCTION 14464dc37 FUN_14464dc37 body=154 status=ok
// SIG undefined FUN_14464dc37(void)

undefined8 FUN_14464dc37(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(param_1 + 0xd0);
  }
  uVar5 = 0;
  piVar4 = piVar3;
  do {
    uVar1 = (uint)(uVar5 >> 6) & 0x3ffffff;
    if ((((*(ulonglong *)((longlong)piVar3 + (ulonglong)(uVar1 << 4) + 0x4800) >> (uVar5 & 0x3f) & 1
          ) == 0) && (*piVar4 == param_3)) &&
       ((*(ulonglong *)((longlong)piVar3 + (ulonglong)(uVar1 << 4) + 0x4808) &
        1L << ((byte)uVar5 & 0x3f)) != 0)) {
      FUN_149817e10(piVar3,uVar5 & 0xffffffff);
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 0x12;
  } while (uVar5 != 0x100);
  uVar2 = 0x8000000a;
  if (param_1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14464dcf7 FUN_14464dcf7 body=157 status=ok
// SIG undefined FUN_14464dcf7(void)

undefined8 FUN_14464dcf7(longlong param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  void *_Dst;
  longlong lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xd0);
  }
  uVar2 = 0x80000000;
  if (param_4 != (uint *)0x0 && param_2 != (void *)0x0) {
    uVar1 = *(uint *)(lVar3 + 0xcc840);
    uVar4 = param_3 + 0xff & 0xffffff00;
    if (0xc7fff < uVar1 + uVar4) {
      *(undefined4 *)(lVar3 + 0xcc840) = 0;
      uVar1 = 0;
    }
    _Dst = (void *)(lVar3 + (ulonglong)uVar1 + 0x4840);
    memcpy(_Dst,param_2,(ulonglong)param_3);
    *(void **)(param_4 + 2) = _Dst;
    *param_4 = param_3 >> 2;
    *(int *)(lVar3 + 0xcc840) = *(int *)(lVar3 + 0xcc840) + uVar4;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14464dd94 FUN_14464dd94 body=220 status=ok
// SIG undefined FUN_14464dd94(void)

undefined8
FUN_14464dd94(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70;
  undefined1 local_68;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = 0x8000000a;
  if ((((param_1 != 0) && (param_7 != 0)) && (param_5 != 0)) && (*(longlong *)(param_1 + 0xd0) != 0)
     ) {
    FUN_14464c8c5(param_1,&local_54);
    uVar2 = 0;
    if (local_54 < 7) {
      local_68 = false;
    }
    else {
      local_68 = false;
      if (local_50 == 0x20) {
        local_68 = local_4c == 0x40;
      }
    }
    local_70 = local_48;
    local_78 = param_7;
    lVar1 = FUN_149818276(param_2,param_3,param_4,param_5);
    *(longlong *)(param_7 + 0x18) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x8000000a;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14464de71 FUN_14464de71 body=35 status=ok
// SIG undefined FUN_14464de71(void)

undefined8 FUN_14464de71(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if ((param_2 != 0) && (puVar1 = *(undefined8 **)(param_2 + 0x18), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return 0;
}



// FUNCTION 14464de94 FUN_14464de94 body=174 status=ok
// SIG undefined FUN_14464de94(void)

undefined8 FUN_14464de94(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xd0);
  memcpy((void *)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x59e448) * 0x9a38 + 0xcc848),param_2,0x9a38)
  ;
  uVar4 = *(uint *)(lVar3 + 0x59e448);
  if ((*param_2 == 2) && (uVar2 = param_2[0x32], (ulonglong)uVar2 != 0)) {
    lVar1 = (ulonglong)uVar4 * 0x9a38 + lVar3;
    lVar5 = 0;
    do {
      uVar4 = *(uint *)((longlong)param_2 + lVar5 + 0x9a08);
      *(uint *)(lVar1 + 0xd6250 + lVar5) = uVar4;
      memcpy(*(void **)(lVar1 + 0xd6258 + lVar5),*(void **)((longlong)param_2 + lVar5 + 0x9a10),
             (ulonglong)uVar4 << 2);
      lVar5 = lVar5 + 0x10;
    } while ((ulonglong)uVar2 << 4 != lVar5);
    uVar4 = *(uint *)(lVar3 + 0x59e448);
  }
  *(uint *)(lVar3 + 0x59e448) = uVar4 + 1;
  return 0;
}



// FUNCTION 14464df42 FUN_14464df42 body=1651 status=ok
// SIG undefined FUN_14464df42(void)

undefined4 FUN_14464df42(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined1 auStack_108 [44];
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  undefined4 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar15 = 0x8000000a;
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0xd0), param_2 != 0 && lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x59e448) == 0) {
      uVar15 = 0;
    }
    else {
      lVar7 = lVar3 + 0x4800;
      local_b8 = param_2 + 0x198;
      local_c0 = (longlong *)(param_2 + 0x70);
      uVar11 = 0;
      uVar15 = 0;
      do {
        uVar9 = *(uint *)(lVar3 + 0xcc848 + uVar11 * 0x9a38);
        if (uVar9 < 4) {
          lVar12 = uVar11 * 0x9a38 + lVar3 + 0xcc848;
          switch(uVar9) {
          case 0:
            local_c8 = (undefined4 *)(lVar12 + 0x88);
            lVar6 = FUN_149817d64(lVar3,param_2,*(undefined4 *)(lVar12 + 0x98));
            local_dc = uVar15;
            if (lVar6 == 0) {
              local_d8 = lVar7;
              lVar7 = FUN_149817dc8(lVar3,param_2,*(undefined4 *)(lVar12 + 0x98));
              plVar4 = local_c0;
              puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar8 = puVar13 + 8;
              if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
                FUN_140023dd8(local_c0,0x48);
                puVar13 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
                puVar8 = puVar13 + 8;
              }
              *(undefined8 **)(param_2 + 0x70) = puVar8;
              puVar13[1] = *(undefined8 *)(lVar7 + 8);
              puVar13[2] = 0;
              *(undefined1 *)(puVar13 + 3) = 2;
              *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar13 + 5) = 0;
              *puVar13 = &PTR_FUN_14a1fb3e8;
              *(undefined2 *)(puVar13 + 6) = 0xd;
              *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
              puVar13[7] = lVar7;
              iVar2 = *(int *)(param_2 + 0x1a0);
              *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
              if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
                FUN_1447568fc(local_b8,iVar2);
              }
              *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar13;
              *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
              FUN_143212081(param_2,puVar13,*local_c8,2);
              lVar7 = local_d8;
              uVar15 = local_dc;
            }
            else {
              uVar9 = *(byte *)(lVar6 + 0x93) - 9;
              if (((uVar9 < 0x3f) && ((0x40000000000231d3U >> ((ulonglong)uVar9 & 0x3f) & 1) != 0))
                 || (*(byte *)(lVar6 + 0x93) == 1)) {
                if (*(char *)(lVar6 + 0x90) != '\0') {
                  bVar14 = 0;
                  local_d8 = lVar7;
                  local_d0 = lVar6;
                  do {
                    plVar4 = local_c0;
                    uVar1 = *(undefined1 *)(local_d0 + 0x94);
                    puVar13 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar8 = puVar13 + 9;
                    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
                      FUN_140023dd8(local_c0);
                      puVar13 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
                      puVar8 = puVar13 + 9;
                    }
                    *(undefined8 **)(param_2 + 0x70) = puVar8;
                    puVar13[1] = *(undefined8 *)(local_d0 + 8);
                    puVar13[2] = 0;
                    *(undefined1 *)(puVar13 + 3) = 0;
                    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
                    *(undefined1 *)(puVar13 + 5) = 0;
                    *puVar13 = &PTR_FUN_14a1fb948;
                    *(undefined1 *)(puVar13 + 6) = uVar1;
                    *(byte *)((longlong)puVar13 + 0x31) = bVar14;
                    *(undefined4 *)((longlong)puVar13 + 0x32) = 0;
                    *(undefined1 *)((longlong)puVar13 + 0x36) = 0;
                    *(undefined1 *)(puVar13 + 7) = 0;
                    puVar13[8] = local_d0;
                    iVar2 = *(int *)(param_2 + 0x1a0);
                    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
                    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
                      FUN_1447568fc(local_b8,iVar2);
                    }
                    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar13
                    ;
                    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                    FUN_14742ba54(param_2,puVar13,local_c8,2);
                    bVar14 = bVar14 + 1;
                    lVar7 = local_d8;
                    uVar15 = local_dc;
                  } while (bVar14 < *(byte *)(local_d0 + 0x90));
                }
              }
              else if (*(char *)(lVar6 + 0x90) != '\0') {
                local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar12 + 0x88));
                local_a4 = *(undefined4 *)(lVar12 + 0x8c);
                local_a8 = *(undefined4 *)(lVar12 + 0x90);
                local_ac = *(undefined4 *)(lVar12 + 0x94);
                bVar14 = 0;
                local_d8 = lVar7;
                local_d0 = lVar6;
                do {
                  plVar4 = local_c0;
                  uVar1 = *(undefined1 *)(local_d0 + 0x94);
                  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar8 = puVar13 + 9;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
                    FUN_140023dd8(local_c0);
                    puVar13 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
                    puVar8 = puVar13 + 9;
                  }
                  *(undefined8 **)(param_2 + 0x70) = puVar8;
                  puVar13[1] = *(undefined8 *)(local_d0 + 8);
                  puVar13[2] = 0;
                  *(undefined1 *)(puVar13 + 3) = 0;
                  *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar13 + 5) = 0;
                  *puVar13 = &PTR_FUN_14a1fb948;
                  *(undefined1 *)(puVar13 + 6) = uVar1;
                  *(byte *)((longlong)puVar13 + 0x31) = bVar14;
                  *(undefined4 *)((longlong)puVar13 + 0x32) = 0;
                  *(undefined1 *)((longlong)puVar13 + 0x36) = 0;
                  *(undefined1 *)(puVar13 + 7) = 0;
                  puVar13[8] = local_d0;
                  iVar2 = *(int *)(param_2 + 0x1a0);
                  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
                  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
                    FUN_1447568fc(local_b8,iVar2);
                  }
                  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar13;
                  *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                  local_a0 = CONCAT44(local_a4,(int)local_c8);
                  local_98 = local_a8;
                  local_94 = CONCAT44(local_94._4_4_,local_ac);
                  FUN_14042f6c6(param_2,puVar13,&local_a0,2);
                  bVar14 = bVar14 + 1;
                  lVar7 = local_d8;
                  uVar15 = local_dc;
                } while (bVar14 < *(byte *)(local_d0 + 0x90));
              }
            }
            break;
          case 1:
            uVar5 = (ulonglong)*(uint *)(lVar12 + 0x88);
            if (((0xff < uVar5) ||
                ((*(ulonglong *)(lVar7 + (ulonglong)(*(uint *)(lVar12 + 0x88) >> 2 & 0x3ffffff0)) >>
                  (uVar5 & 0x3f) & 1) != 0)) || (*(int *)(lVar3 + 0x10 + uVar5 * 0x48) == 0)) {
              uVar5 = (ulonglong)*(uint *)(lVar12 + 0x90);
              if (((0xff < uVar5) ||
                  ((*(ulonglong *)(lVar7 + (ulonglong)(*(uint *)(lVar12 + 0x90) >> 2 & 0xfffffff0))
                    >> (uVar5 & 0x3f) & 1) != 0)) || (*(int *)(lVar3 + 0x10 + uVar5 * 0x48) == 0))
              break;
            }
            lVar6 = FUN_149817d64(lVar3,param_2);
            local_d8 = lVar7;
            lVar12 = FUN_149817d64(lVar3,param_2,*(undefined4 *)(lVar12 + 0x90));
            lVar7 = local_d8;
            local_98 = DAT_14c9a52a0;
            local_a0 = DAT_14c9a5298;
            local_8c = DAT_14c9a52a0;
            local_94 = DAT_14c9a5298;
            local_80 = DAT_14c9a52a0;
            local_88 = DAT_14c9a5298;
            local_7c = 0;
            uStack_74 = 1;
            local_6c = 0;
            bVar10 = (byte)*(undefined4 *)(lVar6 + 0x90);
            bVar14 = (byte)*(undefined4 *)(lVar12 + 0x90);
            if (bVar10 < bVar14) {
              bVar14 = bVar10;
            }
            local_68 = (uint)bVar14;
            FUN_1400e8d41(param_2,lVar6,lVar12,&local_a0);
            break;
          case 2:
            (**(code **)(**(longlong **)(lVar12 + 0xa0) + 0x10))
                      (*(longlong **)(lVar12 + 0xa0),param_2,lVar3,lVar12);
          }
        }
        else {
          uVar15 = 0x80000009;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(lVar3 + 0x59e448));
    }
    *(undefined4 *)(lVar3 + 0x59e448) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 14464e5c4 FUN_14464e5c4 body=2181 status=ok
// SIG undefined FUN_14464e5c4(void)

void FUN_14464e5c4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint *puVar17;
  longlong lVar18;
  ulonglong unaff_RBP;
  ulonglong uVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 local_89;
  undefined8 local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc28f88) && (FUN_144b3d300(&DAT_14cc28f88), DAT_14cc28f88 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar16 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1)
    ;
    if (plVar16 == (longlong *)0x0) {
      DAT_14cc28f80 = 0;
    }
    else {
      DAT_14cc28f80 = (**(code **)(*plVar16 + 0x68))(plVar16);
    }
    _Init_thread_footer(&DAT_14cc28f88);
  }
  lVar18 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar18);
  }
  plVar16 = *(longlong **)(lVar18 + 0xf8);
  if (((longlong *)plVar16[0x12] == (longlong *)0x0) ||
     (lVar10 = (**(code **)(*(longlong *)plVar16[0x12] + 0x30))(), lVar18 = DAT_14cc28ee8,
     lVar10 != 0)) goto LAB_14464e64f;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar10 + 0xc60);
  if (iVar7 == 0x40000002) {
    uVar19 = 0;
  }
  else {
    bVar21 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar21 = DVar8 == DVar9;
      }
      else {
        bVar21 = false;
      }
    }
    uVar19 = (ulonglong)(bVar21 ^ 1);
  }
  if (*(int *)(lVar18 + uVar19 * 4) == 0) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar5 = FUN_14054d46e(&DAT_14c846b20,L"fsr3rhi");
    if (cVar5 == '\0') goto LAB_14464e64f;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar5 = FUN_14054d46e(&DAT_14c846b20,L"fsr3native");
  if (cVar5 != '\0') goto LAB_14464e64f;
  piVar1 = (int *)(lVar10 + 0xc60);
  FUN_1446f470e(&local_98,L"FFXFrameInterpolation",1);
  plVar11 = (longlong *)FUN_1447c1074(local_98);
  puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x40))(plVar11);
  lVar18 = DAT_14cc28f80;
  iVar7 = *piVar1;
  if (iVar7 == 0x40000002) {
    uVar19 = 0;
  }
  else {
    bVar21 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
      if (iVar7 == 1) {
        uVar6 = FUN_140ad26c0();
        unaff_RBP = (ulonglong)uVar6;
        DVar8 = GetCurrentThreadId();
        bVar21 = uVar6 == DVar8;
      }
      else {
        bVar21 = false;
      }
    }
    uVar19 = (ulonglong)(bVar21 ^ 1);
  }
  uVar6 = *(uint *)(lVar18 + uVar19 * 4);
  if (3 < (int)uVar6) {
    uVar6 = 4;
  }
  uVar19 = (ulonglong)uVar6;
  if ((int)uVar6 < 1) {
    uVar19 = 0;
  }
  uVar6 = 4;
  if ((int)(&DAT_14aa61900)[uVar19] < 4) {
    uVar6 = (&DAT_14aa61900)[uVar19];
  }
  uVar19 = (ulonglong)uVar6;
  if ((int)uVar6 < 1) {
    uVar19 = 0;
  }
  uVar19 = CONCAT71((int7)(unaff_RBP >> 8),(&DAT_14aa618f0)[uVar19]);
  if (DAT_14ca83900 != (longlong *)0x0) {
    uVar6 = (**(code **)(*DAT_14ca83900 + 0x350))(DAT_14ca83900,uVar19 & 0xffffffff);
    uVar19 = (ulonglong)uVar6;
  }
  (**(code **)(*plVar16 + 0x28))(plVar16,&local_a0);
  iVar7 = *piVar1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14464e80c;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14464ec3e;
      goto LAB_14464e815;
    }
  }
  else {
LAB_14464e80c:
    if (iVar7 != 0x10) {
LAB_14464e815:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar1 == 2)) goto LAB_14464ec3e;
        if (*piVar1 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14464ec3e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_14464e98b;
        while( true ) {
          uVar6 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar6 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar6 | 1;
            __tlregdtor(&LAB_14464f3c9);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_14464e98b:
          puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar20 + 0x19);
          uVar6 = puVar14[0x12];
          if (puVar17 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar3 = *puVar14;
            *puVar14 = *puVar14 + uVar6 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar6) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar20 + 0x19);
            uVar6 = 0;
            if (puVar17 <= puVar14 + 0x4000) {
              uVar6 = 1;
              goto LAB_14464ea0b;
            }
          }
        }
        uVar6 = uVar6 + 1;
LAB_14464ea0b:
        *(uint **)(puVar14 + 0x10) = puVar17;
        puVar14[0x12] = uVar6;
        iVar7 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14bea27e8;
        puVar20[0x15] = puVar12;
        puVar20[0x16] = param_1;
        *(undefined4 *)(puVar20 + 0x17) = 3;
        *(undefined8 **)((longlong)puVar20 + 0xbc) = local_a0;
        *(char *)((longlong)puVar20 + 0xc4) = (char)uVar19;
        *(undefined2 *)((longlong)puVar20 + 0xc5) = (undefined2)local_88;
        *(undefined1 *)((longlong)puVar20 + 199) = local_88._2_1_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar6 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar7 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar4 = 1;
          if ((char)uVar19 != '\x06') {
            uVar4 = uVar19;
          }
          uVar19 = uVar4;
          uVar15 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar20[0xf] = uVar15;
        puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar7;
        if (puVar20 == (undefined8 *)0x0) {
          local_89 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_89 = 1;
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88 = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14bea2770;
        local_78[1] = (longlong)puVar12;
        local_78[2] = param_1;
        *(undefined4 *)(local_78 + 3) = 3;
        *(undefined8 **)((longlong)local_78 + 0x1c) = local_a0;
        *(char *)((longlong)local_78 + 0x24) = (char)uVar19;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88 = FUN_14464f2b0;
        }
        local_c8 = &local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FFXFrameInterpolationCreateCustomPresent",&DAT_14cc29014);
        if (local_88 != (code *)0x0) {
          plVar16 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar16 = local_68;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_14464e64f;
    }
  }
LAB_14464ec3e:
  local_b0 = FUN_14981064d(uVar19 & 0xffffffff,0);
  local_b8 = DAT_14ca83900;
  local_c8 = local_a0;
  local_a8 = 1;
  local_c0 = 0;
  plVar16 = (longlong *)(**(code **)*puVar12)(puVar12,param_1,3,local_a0);
  if (plVar16 != (longlong *)0x0) {
    lVar18 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
    local_88 = *(code **)(lVar18 + 0x90);
    if (local_88 != (code *)0x0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
      lVar18 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
    }
    (**(code **)(*plVar16 + 0x50))(plVar16,lVar18,&local_88);
  }
LAB_14464e64f:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464ee4a FUN_14464ee4a body=187 status=ok
// SIG undefined FUN_14464ee4a(void)

undefined8 FUN_14464ee4a(byte param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x39) {
    uVar1 = 0;
    switch(param_1) {
    case 1:
      return 3;
    case 2:
      return 10;
    case 4:
      return 0x17;
    case 9:
    case 0x1a:
      return 0x10;
    case 10:
    case 0x13:
      uVar1 = 4;
      break;
    case 0xb:
    case 0xd:
      return 0x1c;
    case 0xf:
      return 0x12;
    case 0x11:
      return 6;
    case 0x12:
      return 0x11;
    case 0x15:
      return 0x15;
    case 0x1c:
      return 8;
    case 0x20:
      return 0x16;
    case 0x23:
      return 0x14;
    case 0x25:
      if (param_2 == '\0') {
        return 10;
      }
      return 0xc;
    case 0x28:
      return 0x1a;
    case 0x30:
      return 2;
    case 0x31:
      return 0x13;
    }
  }
  else if (param_1 < 0x3f) {
    if (param_1 == 0x39) {
      return 7;
    }
    uVar1 = 0;
    if (param_1 == 0x3c) {
      return 9;
    }
  }
  else {
    if (param_1 == 0x3f) {
      return 0x18;
    }
    if (param_1 == 0x47) {
      return 0x19;
    }
  }
  return uVar1;
}



// FUNCTION 14464ef06 FUN_14464ef06 body=536 status=ok
// SIG undefined FUN_14464ef06(void)

undefined8 FUN_14464ef06(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar4 = param_1[0x74];
  uVar3 = (ulonglong)(((uint)uVar4 & 1) << 5);
  pcVar1 = *(code **)(param_2 + 0x100518 + uVar3);
  if (pcVar1 == (code *)0x0) {
    uVar4 = 0x8000000d;
  }
  else {
    memset(local_160,0,0x128);
    local_168 = 0x20003;
    local_58 = *(undefined4 *)(param_1 + 0x70);
    local_158 = *param_1;
    local_54 = *(undefined4 *)((longlong)param_1 + 900);
    local_50 = *(undefined4 *)(param_1 + 0x71);
    local_60 = *(undefined4 *)(param_1 + 0x6f);
    local_120 = param_1[0x17];
    local_f8 = *(undefined4 *)(param_1 + 0x1c);
    local_118 = param_1[0x18];
    uStack_110 = param_1[0x19];
    local_108 = param_1[0x1a];
    uStack_100 = param_1[0x1b];
    local_f0 = param_1[0x2d];
    local_c8 = *(undefined4 *)(param_1 + 0x32);
    local_e8 = param_1[0x2e];
    uStack_e0 = param_1[0x2f];
    local_d8 = param_1[0x30];
    uStack_d0 = param_1[0x31];
    local_c0 = param_1[0x43];
    local_98 = *(undefined4 *)(param_1 + 0x48);
    local_b8 = param_1[0x44];
    uStack_b0 = param_1[0x45];
    local_a8 = param_1[0x46];
    uStack_a0 = param_1[0x47];
    local_90 = param_1[0x59];
    local_68 = *(undefined4 *)(param_1 + 0x5e);
    local_88 = param_1[0x5a];
    uStack_80 = param_1[0x5b];
    local_78 = param_1[0x5c];
    uStack_70 = param_1[0x5d];
    local_150 = param_1[1];
    local_128 = *(undefined4 *)(param_1 + 6);
    local_148 = *(undefined4 *)(param_1 + 2);
    uStack_144 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_140 = *(undefined4 *)(param_1 + 3);
    uStack_13c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_138 = *(undefined4 *)(param_1 + 4);
    uStack_134 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_130 = *(undefined4 *)(param_1 + 5);
    uStack_12c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_5c = *(undefined1 *)((longlong)param_1 + 0x37c);
    local_48 = *(undefined4 *)(param_1 + 0x72);
    local_4c = *(undefined4 *)((longlong)param_1 + 0x38c);
    local_40 = *(undefined4 *)(param_1 + 0x73);
    local_44 = *(undefined4 *)((longlong)param_1 + 0x394);
    local_38 = uVar4;
    iVar2 = (*pcVar1)(&local_168,*(undefined8 *)(param_2 + uVar3 + 0x100520));
    uVar4 = 0x8000000d;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14464f120 FUN_14464f120 body=335 status=ok
// SIG undefined FUN_14464f120(void)

undefined8 FUN_14464f120(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = param_1[0x45];
  uVar3 = (ulonglong)(((uint)uVar4 & 1) << 5);
  pcVar1 = *(code **)(param_2 + 0x100508 + uVar3);
  if (pcVar1 == (code *)0x0) {
    uVar4 = 0x8000000d;
  }
  else {
    memset(local_e8,0,0xb0);
    local_f0 = 0x20005;
    local_d8 = param_1[1];
    local_d0 = param_1[2];
    local_a8 = *(undefined4 *)(param_1 + 7);
    local_c8 = param_1[3];
    uStack_c0 = param_1[4];
    local_b8 = param_1[5];
    uStack_b0 = param_1[6];
    local_a0 = param_1[0x18];
    local_78 = *(undefined4 *)(param_1 + 0x1d);
    local_98 = param_1[0x19];
    uStack_90 = param_1[0x1a];
    local_88 = param_1[0x1b];
    uStack_80 = param_1[0x1c];
    local_e0 = *param_1;
    local_40 = *(undefined1 *)(param_1 + 0x44);
    local_70 = param_1[0x2e];
    local_48 = *(undefined4 *)(param_1 + 0x33);
    local_68 = *(undefined4 *)(param_1 + 0x2f);
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x17c);
    uStack_60 = *(undefined4 *)(param_1 + 0x30);
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x184);
    local_58 = *(undefined4 *)(param_1 + 0x31);
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x18c);
    uStack_50 = *(undefined4 *)(param_1 + 0x32);
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x194);
    local_38 = uVar4;
    iVar2 = (*pcVar1)(&local_f0,*(undefined8 *)(param_2 + uVar3 + 0x100510));
    uVar4 = 0x8000000d;
    if (iVar2 == 0) {
      uVar4 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14464f270 FUN_14464f270 body=23 status=ok
// SIG undefined FUN_14464f270(void)

undefined4 FUN_14464f270(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (uVar1 < 0x1c) {
    return CONCAT31((int3)(uVar1 >> 8),(&DAT_14bea28b8)[uVar1]);
  }
  return 0;
}



// FUNCTION 14464f287 FUN_14464f287 body=41 status=ok
// SIG undefined FUN_14464f287(void)

void FUN_14464f287(void)

{
  DAT_14cc29008 = 0;
  if (DAT_14cc29000 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6a11c();
  return;
}



// FUNCTION 14464f2b0 FUN_14464f2b0 body=210 status=ok
// SIG undefined FUN_14464f2b0(void)

void FUN_14464f2b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  local_40 = FUN_14981064d(*(undefined1 *)((longlong)param_1 + 0x1c),0);
  local_58 = *(undefined8 *)((longlong)param_1 + 0x14);
  local_48 = DAT_14ca83900;
  local_38 = 1;
  local_50 = 0;
  plVar3 = (longlong *)(**(code **)*puVar1)(puVar1,uVar2,*(undefined4 *)(param_1 + 2));
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
    local_28 = *(longlong *)(lVar4 + 0x90);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,lVar4,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464f38e FUN_14464f38e body=29 status=ok
// SIG undefined FUN_14464f38e(void)

void FUN_14464f38e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14464f3ac FUN_14464f3ac body=29 status=ok
// SIG undefined FUN_14464f3ac(void)

undefined8 FUN_14464f3ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14464f3f0 FUN_14464f3f0 body=282 status=ok
// SIG undefined FUN_14464f3f0(void)

undefined8 * FUN_14464f3f0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14464f3c9);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14464f50a FUN_14464f50a body=265 status=ok
// SIG undefined FUN_14464f50a(void)

void FUN_14464f50a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)param_1[0x15];
  uVar3 = param_1[0x16];
  local_40 = FUN_14981064d(*(undefined1 *)((longlong)param_1 + 0xc4),0);
  local_58 = *(undefined8 *)((longlong)param_1 + 0xbc);
  local_48 = DAT_14ca83900;
  local_38 = 1;
  local_50 = 0;
  plVar4 = (longlong *)(**(code **)*puVar2)(puVar2,uVar3,*(undefined4 *)(param_1 + 0x17));
  if (plVar4 != (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
    local_28 = *(longlong *)(lVar5 + 0x90);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      lVar5 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
    }
    (**(code **)(*plVar4 + 0x50))(plVar4,lVar5,&local_28);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464f614 FUN_14464f614 body=219 status=ok
// SIG undefined FUN_14464f614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464f614(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = -0x7ffffffeb415d96e;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146761a8a(&local_28);
  _DAT_14cc28f90 = &PTR_FUN_14bea2580;
  _DAT_14cc28f98 = 0;
  _DAT_14cc28fa0 = &LAB_146761b4c;
  _DAT_14cc28fa8 = &LAB_146761b56;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cc28fb0);
  if (cVar1 == '\0') {
    _DAT_14cc28fb0 = 0;
    uRam000000014cc28fb8 = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464f6f0 FUN_14464f6f0 body=102 status=ok
// SIG undefined FUN_14464f6f0(void)

void FUN_14464f6f0(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bea5dcc;
  local_14 = 8;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146761bda(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464f758 FUN_14464f758 body=52 status=ok
// SIG undefined FUN_14464f758(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464f758(void)

{
  _DAT_14cc29070 = &PTR_FUN_14bea6270;
  if (DAT_14cc290b8 != (HMODULE)0x0) {
    FreeLibrary(DAT_14cc290b8);
  }
  FUN_146761f90(&DAT_14cc290c0);
  return;
}



// FUNCTION 14464f7b2 FUN_14464f7b2 body=627 status=ok
// SIG undefined FUN_14464f7b2(void)

void FUN_14464f7b2(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_14054d46e(&DAT_14c846b20,L"fsr3rhi");
  lVar3 = DAT_14cc28f18;
  if (cVar4 == '\0') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar10 = 0;
    }
    else if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar3 + uVar10 * 4) == 0) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar4 = FUN_14054d46e(&DAT_14c846b20,L"fsr3native");
      if (cVar4 == '\0') goto LAB_14464f85c;
    }
    cVar4 = FUN_146761dde();
    if (cVar4 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar4 = FUN_14054d46e(&DAT_14c846b20,L"fsr3native");
      if (cVar4 != '\0') {
        FUN_140033559(".\\../Plugins/AMD/FSR3/Source/FFXD3D12Backend/Private/FFXD3D12Backend.cpp",
                      0x5b0,
                      L"FSR3 D3D12 Module Could Not Load amd_fidelityfx_dx12.dll when forcing its use with -fsr3native"
                     );
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
      FUN_140635eb8(DAT_14cc28f10,0,0xd000000,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    FUN_1446f470e(&local_20,L"FFXFrameInterpolation",1);
    plVar7 = (longlong *)FUN_1447c1074(local_20);
    if (plVar7 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar7 + 0x40))(plVar7);
      lVar9 = FUN_14001cc68(0x40,0x10);
      FUN_146761ec8(lVar9,uVar8);
      lVar3 = DAT_14cc290e0;
      if (DAT_14cc290e0 != lVar9) {
        DAT_14cc290e0 = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          LOCK();
          piVar1 = (int *)(lVar3 + 0x18);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)**(undefined8 **)(lVar3 + 0x10))(lVar3 + 0x10,1);
          }
        }
      }
      FUN_140635eb8(DAT_14cc28f10,1,0xd000000,0);
      FUN_140635eb8(DAT_14cc28ee0,0,0xd000000,0);
    }
  }
LAB_14464f85c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464faa0 FUN_14464faa0 body=306 status=ok
// SIG undefined FUN_14464faa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14464faa0(void)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28.QuadPart = -0x7ffffffeb415d8e2;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146761d1c(&local_28);
  QueryPerformanceCounter(&local_28);
  _DAT_14cc29058 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  _DAT_14cc29070 = &PTR_FUN_14bea6270;
  _DAT_14cc29078 = 0;
  _DAT_14cc29080 = &LAB_146761b4c;
  _DAT_14cc29088 = &LAB_146761b56;
  _DAT_14cc290c0 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *_DAT_14cc290c0 = 0;
  _DAT_14cc290c0[1] = 0;
  _DAT_14cc290c0[2] = 0;
  _DAT_14cc290c0[3] = 0;
  _DAT_14cc290d0 = 0;
  _DAT_14cc29090 = 0;
  _DAT_14cc29098 = 0;
  _DAT_14cc290a0 = 0;
  _DAT_14cc290a8 = 0;
  _DAT_14cc290b0 = 0;
  DAT_14cc290b8 = 0;
  DAT_14cc290c8 = _DAT_14cc290c0;
  atexit(FUN_14464f758);
  DAT_14cc290e0 = 0;
  atexit((_func_5014 *)&LAB_14464f78c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464fc04 FUN_14464fc04 body=41 status=ok
// SIG undefined FUN_14464fc04(void)

void FUN_14464fc04(void)

{
  DAT_14cc295e0 = 0;
  if (DAT_14cc295d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6a1ba();
  return;
}



// FUNCTION 14464fc2e FUN_14464fc2e body=194 status=ok
// SIG undefined FUN_14464fc2e(void)

void FUN_14464fc2e(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x1a0) == '\x03') {
    pcVar1 = (char *)(param_1 + 0x1a0);
    uVar3 = (**(code **)(*DAT_14ca83900 + 0x20))();
    FUN_140056680(local_28,uVar3);
    lVar4 = FUN_14981b360(pcVar1);
    *(longlong *)(param_1 + 0x1a8) = lVar4;
    lVar2 = DAT_14ca4cb10;
    if (lVar4 == 0) {
      *pcVar1 = '\x02';
    }
    else if ((byte)(*pcVar1 - 4U) < 0xfe) {
      *(longlong *)(param_1 + 0x1b8) = DAT_14ca4cb10;
      if (lVar2 == 0) {
        uVar3 = FUN_141508108();
        *(undefined8 *)(param_1 + 0x1b8) = uVar3;
      }
      DAT_14ca4cb10 = param_1 + 8;
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14464fcf2 FUN_14464fcf2 body=22983 status=ok
// SIG undefined FUN_14464fcf2(void)

ulonglong *
FUN_14464fcf2(longlong param_1,ulonglong *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined1 uVar8;
  ushort uVar9;
  char cVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  ulonglong uVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 uVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  undefined4 uVar29;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  uint *puVar37;
  undefined8 *puVar38;
  uint uVar39;
  uint uVar40;
  undefined4 *puVar41;
  undefined1 uVar42;
  longlong lVar43;
  longlong lVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined2 uVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  undefined2 uVar50;
  bool bVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_318 [32];
  undefined1 **local_2f8;
  undefined8 *local_2f0;
  wchar_t *local_2e8;
  undefined8 *local_2e0;
  byte local_2c9;
  longlong local_2c8;
  char local_2b9;
  ulonglong local_2b8;
  longlong local_2b0;
  ulonglong local_2a8;
  int *local_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined8 *local_288;
  longlong *local_280;
  ulonglong *local_278;
  undefined1 local_26c;
  undefined1 local_26b;
  byte local_26a;
  byte local_269;
  longlong local_268;
  longlong *local_260;
  longlong *local_258;
  undefined8 local_250;
  ulonglong local_248;
  undefined8 local_240;
  ulonglong local_238;
  ulonglong local_230;
  uint local_224;
  longlong *local_220;
  longlong local_218;
  ulonglong local_210;
  ulonglong local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  LPCRITICAL_SECTION local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  ulonglong *local_1e0;
  uint local_1d8;
  int local_1d4;
  undefined8 local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined1 local_1b1;
  uint *local_1b0;
  uint local_1a8;
  undefined1 *local_19c;
  undefined4 local_194;
  undefined8 *local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulonglong uStack_160;
  undefined8 local_158;
  int local_14c;
  int local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  int iStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  uint uStack_100;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  char cStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined2 uStack_f2;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  undefined4 local_c8;
  int local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined4 local_a8;
  ulonglong local_a0;
  undefined6 uVar30;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_230 = (ulonglong)
              (uint)(*(int *)((longlong)param_4 + 0x3104) - *(int *)((longlong)param_4 + 0x30fc));
  local_258 = (longlong *)(ulonglong)(uint)(*(int *)(param_4 + 0x620) - *(int *)(param_4 + 0x61f));
  iVar22 = *(int *)((longlong)param_4 + 0x4e4);
  iVar28 = *(int *)((longlong)param_4 + 0x4dc);
  fVar53 = *(float *)(param_4[1] + 0x110);
  fVar55 = *(float *)((longlong)param_4 + 0x45c);
  iVar33 = *(int *)(param_4 + 0x9c) - *(int *)(param_4 + 0x9b);
  local_1e0 = param_2;
  FUN_14464fc2e();
  lVar15 = param_4[0x61b];
  if (lVar15 == 0) {
    local_200 = 0;
  }
  else {
    uVar23 = CONCAT71((int7)((ulonglong)lVar15 >> 8),*(undefined1 *)(lVar15 + 8)) &
             0xffffffffffffff02;
    local_200 = (undefined4)CONCAT71((int7)(uVar23 >> 8),(byte)uVar23 >> 1);
  }
  local_269 = *(int *)(DAT_14cc28af8 + 4) == 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  local_1e0[2] = 0;
  local_1e0[3] = 0;
  *local_1e0 = 0;
  local_1e0[1] = 0;
  *(longlong *)(param_1 + 0x1b0) = param_3;
  lVar15 = DAT_14ca97170;
  if ((*(byte *)(param_4 + 0x24b6) & 1) == 0) {
    local_1fc = (undefined4)CONCAT71((int7)((ulonglong)local_1e0 >> 8),param_4[0x621] != 0);
  }
  else {
    local_1fc = 0;
  }
  if ((param_4[0x263c] == 0) || (param_4[0x621] == 0)) {
    local_224 = 0;
  }
  else {
    local_224 = (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),
                               *(undefined1 *)((longlong)param_4 + 0x23cc)) ^ 1;
  }
  local_2b8 = *(ulonglong *)(param_5 + 0x20);
  local_2a8 = *(ulonglong *)(param_5 + 0x38);
  lVar32 = *(longlong *)(param_5 + 0x50);
  local_2a0 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  iVar11 = *local_2a0;
  local_218 = CONCAT44(local_218._4_4_,iVar22 - iVar28);
  local_2b0 = param_1;
  local_1d4 = iVar33;
  if (iVar11 == 0x40000002) {
    iVar11 = 0x40000002;
LAB_144655415:
    uVar23 = 0;
  }
  else {
    if ((DAT_14c86a9f8 != 1) || (iVar11 == 2)) goto LAB_144655415;
    if (iVar11 == 1) {
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      uVar23 = (ulonglong)(DVar12 != DVar13);
      iVar11 = *local_2a0;
    }
    else {
      uVar23 = 1;
    }
  }
  lVar44 = DAT_14ca97170;
  iVar22 = *(int *)(lVar15 + uVar23 * 4);
  uVar27 = (uint)(iVar22 < 1) << 2 | 0xfffffff8;
  iVar28 = (int)local_258;
  iVar33 = (int)local_230;
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar11 == 2)) {
    uVar23 = 0;
  }
  else if (iVar11 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar23 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar23 = 1;
  }
  lVar15 = local_2b0;
  uVar39 = iVar28 + (uint)(0 < iVar22) * 4 + 3 & uVar27;
  uVar27 = iVar33 + (uint)(0 < iVar22) * 4 + 3 & uVar27;
  local_1c0 = (ulonglong)uVar27;
  iVar22 = *(int *)(lVar44 + uVar23 * 4);
  bVar26 = 0 < iVar22;
  local_26a = iVar22 < 1;
  if (lVar32 == 0) {
    lVar32 = *(longlong *)(*(longlong *)(*(longlong *)(local_2b0 + 0x10) + 0x40) + 0x58);
  }
  local_278 = (ulonglong *)CONCAT44(uVar27,uVar39);
  local_1c8 = (ulonglong)local_258 & 0xffffffff | local_230 << 0x20;
  if (*(int *)(DAT_14cc28cc0 + 4) != 0) {
    local_1c8 = (ulonglong)local_278;
  }
  if ((*(char *)(local_2a8 + 0x92) == '\x04') || (*(char *)(local_2a8 + 0x92) == '\x01')) {
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,(uint)*(ushort *)(local_2a8 + 0x8e));
  }
  else {
    local_1e8 = (longlong *)((ulonglong)local_1e8._4_4_ << 0x20);
  }
  if ((*(char *)(lVar32 + 0x92) == '\x04') || (*(char *)(lVar32 + 0x92) == '\x01')) {
    local_240 = (undefined8 *)CONCAT44(local_240._4_4_,(uint)*(ushort *)(lVar32 + 0x8e));
  }
  else {
    local_240 = (undefined8 *)((ulonglong)local_240._4_4_ << 0x20);
  }
  local_210 = CONCAT44(local_210._4_4_,uVar39);
  local_1f0 = CONCAT71(local_1f0._1_7_,*(undefined1 *)(local_2a8 + 0x90));
  local_250 = CONCAT71(local_250._1_7_,*(undefined1 *)(lVar32 + 0x90));
  uVar27 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_a8 = DAT_14ca83a40;
  local_b8 = DAT_14ca83a30;
  uStack_b4 = DAT_14ca83a34;
  uStack_b0 = DAT_14ca83a38;
  iStack_ac = DAT_14ca83a3c;
  local_c8 = DAT_14ca83a40;
  local_d8 = DAT_14ca83a30;
  uStack_d4 = DAT_14ca83a34;
  uStack_d0 = DAT_14ca83a38;
  iStack_cc = DAT_14ca83a3c;
  local_2b9 = *(char *)(local_2b8 + 0x93);
  local_1f8 = (LPCRITICAL_SECTION)CONCAT44(local_1f8._4_4_,uVar27);
  local_2c8 = param_3;
  local_288 = param_4;
  local_238 = lVar32;
  if (*(int *)(DAT_14cc28b28 + 4) == 0) {
    uVar23 = FUN_14473c272(param_3,&DAT_14ca63b28,0);
    uVar14 = FUN_14473c272(param_3,&DAT_14ca63b28,0);
  }
  else {
    uStack_f6 = 0;
    cStack_f5 = 0x47;
    uStack_f4 = 0;
    uStack_f3 = 0xff;
    local_128 = (undefined8 *)0x20009;
    uStack_fc = 1;
    uStack_fa = 1;
    uStack_f8 = 0x101;
    iStack_120 = DAT_14ca83a30;
    uStack_11c = DAT_14ca83a34;
    uStack_118 = DAT_14ca83a38;
    iStack_114 = DAT_14ca83a3c;
    local_108._0_4_ = 0;
    uStack_110 = (longlong *)CONCAT44(uVar27,DAT_14ca83a40);
    uVar27 = (uint)local_1c8;
    local_108._4_4_ = DAT_14ca84e40;
    if ((int)uVar27 < (int)DAT_14ca84e40) {
      local_108._4_4_ = uVar27;
    }
    if ((int)local_108._4_4_ < 2) {
      local_108._4_4_ = 1;
    }
    uVar23 = local_1c8 >> 0x20;
    uVar39 = (uint)(local_1c8 >> 0x20);
    uStack_100 = DAT_14ca84e40;
    if ((int)uVar39 < (int)DAT_14ca84e40) {
      uStack_100 = uVar39;
    }
    if ((int)uStack_100 < 2) {
      uStack_100 = 1;
    }
    plVar19 = (longlong *)(param_3 + 0x70);
    uVar34 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar34 + 0x120;
    if (*(ulonglong *)(param_3 + 0x78) < uVar14) {
      FUN_140023dd8(plVar19,0x128);
      uVar34 = *plVar19 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar34 + 0x120;
    }
    local_290 = (longlong *)(param_3 + 0x178);
    *(ulonglong *)(param_3 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar34,L"FFXFSR3ReactiveMaskTexture",&local_128,0);
    iVar22 = *(int *)(param_3 + 0x180);
    *(uint *)(param_3 + 0x180) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0x184) < iVar22 + 1U) {
      FUN_14472c0f6(local_290,iVar22);
    }
    *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar22 * 8) = uVar34;
    *(int *)(uVar34 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
    uStack_f6 = 0;
    cStack_f5 = 'G';
    uStack_f4 = 0;
    uStack_f3 = 0xff;
    local_128 = (undefined8 *)0x20009;
    uStack_fc = 1;
    uStack_fa = 1;
    uStack_f8 = 0x101;
    iStack_120 = local_b8;
    uStack_11c = uStack_b4;
    uStack_118 = uStack_b0;
    iStack_114 = iStack_ac;
    local_108._4_4_ = DAT_14ca84e40;
    if ((int)uVar27 < (int)DAT_14ca84e40) {
      local_108._4_4_ = uVar27;
    }
    if ((int)local_108._4_4_ < 2) {
      local_108._4_4_ = 1;
    }
    local_108._0_4_ = 0;
    uStack_100 = DAT_14ca84e40;
    if ((int)uVar39 < (int)DAT_14ca84e40) {
      uStack_100 = uVar39;
    }
    uStack_110 = (longlong *)CONCAT44(local_1f8._0_4_,local_a8);
    if ((int)uStack_100 < 2) {
      uStack_100 = 1;
    }
    uVar31 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar31 + 0x120;
    if (*(ulonglong *)(param_3 + 0x78) < uVar14) {
      FUN_140023dd8(plVar19,0x128);
      uVar31 = *plVar19 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar31 + 0x120;
    }
    *(ulonglong *)(param_3 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar31,L"FFXFSR3CompositeMaskTexture",&local_128,0);
    iVar22 = *(int *)(param_3 + 0x180);
    *(uint *)(param_3 + 0x180) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0x184) < iVar22 + 1U) {
      FUN_14472c0f6(local_290,iVar22);
    }
    *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar22 * 8) = uVar31;
    *(int *)(uVar31 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
    puVar48 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar38 = puVar48 + 0x24;
    local_248 = uVar31;
    if (*(undefined8 **)(param_3 + 0x78) < puVar38) {
      FUN_140023dd8(plVar19,0x130);
      puVar48 = (undefined8 *)(*plVar19 + 0xfU & 0xfffffffffffffff0);
      puVar38 = puVar48 + 0x24;
    }
    *(undefined8 **)(param_3 + 0x70) = puVar38;
    *puVar48 = &PTR_FUN_14bea8d68;
    puVar48[0x12] = 0;
    puVar48[2] = 0;
    puVar48[3] = 0;
    *(undefined4 *)(puVar48 + 4) = 0;
    puVar48[5] = 0;
    puVar48[6] = 0;
    puVar48[7] = 0;
    puVar48[8] = 0;
    puVar48[9] = 0;
    puVar48[10] = 0;
    puVar48[0xb] = 0;
    puVar48[0xc] = 0;
    puVar48[0xd] = 0;
    puVar48[0xe] = 0;
    puVar48[0xf] = 0;
    puVar48[0x10] = 0;
    *(undefined1 *)(puVar48 + 0x13) = 1;
    puVar48[0x14] = 0;
    puVar48[0x15] = 0;
    puVar48[0x16] = 0;
    iVar22 = *(int *)(param_3 + 0xa0);
    *(uint *)(param_3 + 0xa0) = iVar22 + 1U;
    local_298 = plVar19;
    local_208 = uVar34;
    local_1d0 = uVar23;
    if (*(uint *)(param_3 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(param_3 + 0x98,iVar22);
    }
    *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar22 * 8) = puVar48;
    puVar48[0x16] = DAT_14c9c0d80;
    iVar22 = *(int *)(param_3 + 0x180);
    if (iVar22 != 0) {
      lVar15 = *local_290;
      iVar28 = 0;
      do {
        lVar32 = *(longlong *)(lVar15 + (longlong)iVar28 * 8);
        iVar33 = wcscmp(*(wchar_t **)(lVar32 + 8),L"DBufferA");
        if (iVar33 == 0) {
          if ((lVar32 != 0) && ((*(byte *)(lVar32 + 0x24) & 4) != 0)) goto LAB_14465046c;
          break;
        }
        iVar28 = iVar28 + 1;
      } while (iVar22 != iVar28);
    }
    lVar32 = FUN_14473c272(local_2c8,&DAT_14ca63b20,0);
LAB_14465046c:
    lVar15 = local_2c8;
    puVar41 = DAT_14cc28d38;
    bVar7 = DAT_14c86a9f8;
    iVar22 = *local_2a0;
    local_2c9 = bVar26;
    if (iVar22 == 0x40000002) {
      *(undefined4 *)((longlong)puVar48 + 0xf4) = *DAT_14cc28d38;
      uVar23 = 0;
      lVar44 = DAT_14cc28d50;
    }
    else {
      if (DAT_14c86a9f8 == 0) {
        *(undefined4 *)((longlong)puVar48 + 0xf4) = *DAT_14cc28d38;
      }
      else if (iVar22 == 2) {
        *(undefined4 *)((longlong)puVar48 + 0xf4) = *DAT_14cc28d38;
        iVar22 = 2;
        bVar7 = DAT_14c86a9f8;
      }
      else {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
          iVar22 = *local_2a0;
        }
        else {
          bVar51 = false;
        }
        *(undefined4 *)((longlong)puVar48 + 0xf4) = puVar41[bVar51 ^ 1];
        bVar7 = DAT_14c86a9f8;
        if (iVar22 == 0x40000002) {
          uVar23 = 0;
          lVar44 = DAT_14cc28d50;
          goto LAB_14465052e;
        }
      }
      lVar44 = DAT_14cc28d50;
      bVar51 = true;
      if (((bVar7 & 1) != 0) && (iVar22 != 2)) {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
        }
        else {
          bVar51 = false;
        }
      }
      uVar23 = (ulonglong)(bVar51 ^ 1);
    }
LAB_14465052e:
    *(undefined4 *)(puVar48 + 0x1f) = *(undefined4 *)(lVar44 + uVar23 * 4);
    iVar22 = *(int *)(lVar15 + 0x180);
    if (iVar22 != 0) {
      lVar15 = *local_290;
      iVar28 = 0;
      do {
        lVar44 = *(longlong *)(lVar15 + (longlong)iVar28 * 8);
        iVar33 = wcscmp(*(wchar_t **)(lVar44 + 8),L"Translucency.AfterDOF.Color");
        if (iVar33 == 0) {
          if ((lVar44 != 0) && ((*(byte *)(lVar44 + 0x24) & 4) != 0)) goto LAB_1446505a1;
          break;
        }
        iVar28 = iVar28 + 1;
      } while (iVar22 != iVar28);
    }
    lVar44 = FUN_14473c272(local_2c8,&DAT_14ca63b30,0);
LAB_1446505a1:
    lVar43 = local_2c8;
    lVar15 = *(longlong *)(*(longlong *)(local_2b0 + 0x10) + 0x40);
    local_220 = *(longlong **)(lVar15 + 0x30);
    if (local_220 == (longlong *)0x0) {
      local_220 = (longlong *)FUN_14473c272(local_2c8,&DAT_14ca63b28,0);
      lVar15 = *(longlong *)(*(longlong *)(local_2b0 + 0x10) + 0x40);
    }
    local_260 = *(longlong **)(lVar15 + 0x40);
    if (local_260 == (longlong *)0x0) {
      local_260 = (longlong *)FUN_14473c272(lVar43,&DAT_14ca63b28,0);
    }
    local_280 = *(longlong **)(local_2b0 + 0x1c0);
    if (local_280 == (longlong *)0x0) {
      local_280 = (longlong *)FUN_14473c272(lVar43,&DAT_14ca63b28,0);
    }
    if (*(longlong *)(local_2b0 + 0x1e0) == 0) {
LAB_14465072d:
      uVar47 = 0;
      lVar15 = FUN_14473c272(lVar43,&DAT_14ca63b28,0);
      plVar19 = local_298;
      lVar43 = local_2c8;
      if ((*(char *)(lVar15 + 0x92) == '\x04') || (*(char *)(lVar15 + 0x92) == '\x01')) {
        uVar47 = *(undefined2 *)(lVar15 + 0x8e);
      }
      uVar8 = *(undefined1 *)(lVar15 + 0x90);
      puVar45 = (undefined8 *)(*(longlong *)(local_2c8 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
      if (*(undefined8 **)(local_2c8 + 0x78) < puVar38) {
        FUN_140023dd8(local_298,0x48);
        puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
        puVar38 = puVar45 + 8;
      }
      *(undefined8 **)(lVar43 + 0x70) = puVar38;
      puVar45[1] = *(undefined8 *)(lVar15 + 8);
      puVar45[2] = 0;
      *(undefined1 *)(puVar45 + 3) = 1;
      *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
      *puVar45 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar45 + 5) = 0;
      *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
      *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
      *(undefined1 *)(puVar45 + 6) = 0;
      *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
      puVar45[7] = lVar15;
      iVar22 = *(int *)(lVar43 + 0x1a0);
      *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
      if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
        FUN_1447568fc(lVar43 + 0x198,iVar22);
      }
      *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
      *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    }
    else {
      uVar47 = 0;
      lVar15 = FUN_14473c272(lVar43,local_2b0 + 0x1e0,0);
      plVar19 = local_298;
      lVar43 = local_2c8;
      if ((*(char *)(lVar15 + 0x92) == '\x04') || (*(char *)(lVar15 + 0x92) == '\x01')) {
        uVar47 = *(undefined2 *)(lVar15 + 0x8e);
      }
      uVar8 = *(undefined1 *)(lVar15 + 0x90);
      puVar45 = (undefined8 *)(*(longlong *)(local_2c8 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
      if (*(undefined8 **)(local_2c8 + 0x78) < puVar38) {
        FUN_140023dd8(local_298,0x48);
        puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
        puVar38 = puVar45 + 8;
      }
      *(undefined8 **)(lVar43 + 0x70) = puVar38;
      puVar45[1] = *(undefined8 *)(lVar15 + 8);
      puVar45[2] = 0;
      *(undefined1 *)(puVar45 + 3) = 1;
      *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
      *puVar45 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar45 + 5) = 0x2c;
      *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
      *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
      *(undefined1 *)(puVar45 + 6) = 0;
      *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
      puVar45[7] = lVar15;
      iVar22 = *(int *)(lVar43 + 0x1a0);
      *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
      if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
        FUN_1447568fc(lVar43 + 0x198,iVar22);
      }
      *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
      *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
      if (puVar45 == (undefined8 *)0x0) goto LAB_14465072d;
    }
    plVar19 = local_298;
    puVar48[0xe] = puVar45;
    if ((*(char *)(local_2a8 + 0x92) == '\x04') || (*(char *)(local_2a8 + 0x92) == '\x01')) {
      uVar47 = *(undefined2 *)(local_2a8 + 0x8e);
    }
    else {
      uVar47 = 0;
    }
    uVar8 = *(undefined1 *)(local_2a8 + 0x90);
    puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    local_268 = lVar43 + 0x198;
    *(undefined8 **)(lVar43 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(local_2a8 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0x2c;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_2a8;
    iVar22 = *(int *)(lVar43 + 0x1a0);
    *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar48[0xf] = puVar45;
    puVar41 = DAT_14cc28d98;
    bVar26 = DAT_14c86a9f8;
    iVar22 = *local_2a0;
    if (iVar22 == 0x40000002) {
      *(undefined4 *)((longlong)puVar48 + 0xfc) = *DAT_14cc28d98;
LAB_14465094f:
      *(undefined4 *)(puVar48 + 0x20) = *DAT_14cc28db0;
LAB_144650962:
      *(undefined4 *)((longlong)puVar48 + 0xec) = *DAT_14cc28d08;
LAB_144650975:
      *(undefined4 *)(puVar48 + 0x1e) = *DAT_14cc28d20;
LAB_144650988:
      *(undefined4 *)((longlong)puVar48 + 0x10c) = *DAT_14cc28d68;
      uVar23 = 0;
      lVar15 = DAT_14cc28d80;
    }
    else {
      if (DAT_14c86a9f8 == 0) {
        *(undefined4 *)((longlong)puVar48 + 0xfc) = *DAT_14cc28d98;
      }
      else if (iVar22 == 2) {
        *(undefined4 *)((longlong)puVar48 + 0xfc) = *DAT_14cc28d98;
        iVar22 = 2;
        bVar26 = DAT_14c86a9f8;
      }
      else {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
          iVar22 = *local_2a0;
        }
        else {
          bVar51 = false;
        }
        *(undefined4 *)((longlong)puVar48 + 0xfc) = puVar41[bVar51 ^ 1];
        bVar26 = DAT_14c86a9f8;
        if (iVar22 == 0x40000002) goto LAB_14465094f;
      }
      puVar41 = DAT_14cc28db0;
      if (((bVar26 & 1) == 0) || (iVar22 == 2)) {
        *(undefined4 *)(puVar48 + 0x20) = *DAT_14cc28db0;
      }
      else {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
          iVar22 = *local_2a0;
        }
        else {
          bVar51 = false;
        }
        *(undefined4 *)(puVar48 + 0x20) = puVar41[bVar51 ^ 1];
        if (iVar22 == 0x40000002) goto LAB_144650962;
      }
      puVar41 = DAT_14cc28d08;
      bVar26 = DAT_14c86a9f8;
      if (DAT_14c86a9f8 == 0) {
        *(undefined4 *)((longlong)puVar48 + 0xec) = *DAT_14cc28d08;
      }
      else if (iVar22 == 2) {
        *(undefined4 *)((longlong)puVar48 + 0xec) = *DAT_14cc28d08;
        iVar22 = 2;
        bVar26 = DAT_14c86a9f8;
      }
      else {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
          iVar22 = *local_2a0;
        }
        else {
          bVar51 = false;
        }
        *(undefined4 *)((longlong)puVar48 + 0xec) = puVar41[bVar51 ^ 1];
        bVar26 = DAT_14c86a9f8;
        if (iVar22 == 0x40000002) goto LAB_144650975;
      }
      puVar41 = DAT_14cc28d20;
      if (((bVar26 & 1) == 0) || (iVar22 == 2)) {
        *(undefined4 *)(puVar48 + 0x1e) = *DAT_14cc28d20;
      }
      else {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
          iVar22 = *local_2a0;
        }
        else {
          bVar51 = false;
        }
        *(undefined4 *)(puVar48 + 0x1e) = puVar41[bVar51 ^ 1];
        if (iVar22 == 0x40000002) goto LAB_144650988;
      }
      puVar41 = DAT_14cc28d68;
      bVar26 = DAT_14c86a9f8;
      if (DAT_14c86a9f8 == 0) {
        *(undefined4 *)((longlong)puVar48 + 0x10c) = *DAT_14cc28d68;
      }
      else if (iVar22 == 2) {
        *(undefined4 *)((longlong)puVar48 + 0x10c) = *DAT_14cc28d68;
        iVar22 = 2;
        bVar26 = DAT_14c86a9f8;
      }
      else {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
          iVar22 = *local_2a0;
        }
        else {
          bVar51 = false;
        }
        *(undefined4 *)((longlong)puVar48 + 0x10c) = puVar41[bVar51 ^ 1];
        bVar26 = DAT_14c86a9f8;
        if (iVar22 == 0x40000002) {
          uVar23 = 0;
          lVar15 = DAT_14cc28d80;
          goto LAB_144650999;
        }
      }
      lVar15 = DAT_14cc28d80;
      bVar51 = true;
      if (((bVar26 & 1) != 0) && (iVar22 != 2)) {
        if (iVar22 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar51 = DVar12 == DVar13;
        }
        else {
          bVar51 = false;
        }
      }
      uVar23 = (ulonglong)(bVar51 ^ 1);
    }
LAB_144650999:
    plVar19 = local_298;
    *(undefined4 *)(puVar48 + 0x22) = *(undefined4 *)(lVar15 + uVar23 * 4);
    if (local_2a8 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(undefined8 *)(local_2a8 + 0xac);
    }
    puVar48[2] = local_2a8;
    puVar48[3] = uVar21;
    *(undefined4 *)(puVar48 + 4) = 0x10;
    puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(lVar43 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(local_2a8 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = (undefined1)local_1f0;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(short *)((longlong)puVar45 + 0x2e) = (short)local_1e8;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_2a8;
    iVar22 = *(int *)(lVar43 + 0x1a0);
    *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar48[9] = puVar45;
    if ((*(char *)(lVar32 + 0x92) == '\x04') || (*(char *)(lVar32 + 0x92) == '\x01')) {
      uVar47 = *(undefined2 *)(lVar32 + 0x8e);
    }
    else {
      uVar47 = 0;
    }
    uVar8 = *(undefined1 *)(lVar32 + 0x90);
    puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(lVar43 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(lVar32 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = lVar32;
    iVar22 = *(int *)(lVar43 + 0x1a0);
    *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar48[0x10] = puVar45;
    if ((*(char *)(local_2b8 + 0x92) == '\x04') || (*(char *)(local_2b8 + 0x92) == '\x01')) {
      uVar47 = *(undefined2 *)(local_2b8 + 0x8e);
    }
    else {
      uVar47 = 0;
    }
    uVar8 = *(undefined1 *)(local_2b8 + 0x90);
    puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(lVar43 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(local_2b8 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_2b8;
    iVar22 = *(int *)(lVar43 + 0x1a0);
    *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar48[10] = puVar45;
    if (*(longlong *)(local_2b0 + 0x1d0) == 0) {
      puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
      if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
        FUN_140023dd8(local_298,0x48);
        puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
        puVar38 = puVar45 + 8;
      }
      *(undefined8 **)(lVar43 + 0x70) = puVar38;
      puVar45[1] = *(undefined8 *)(local_2b8 + 8);
      puVar45[2] = 0;
      *(undefined1 *)(puVar45 + 3) = 1;
      *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
      *puVar45 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar45 + 5) = 0;
      *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
      *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
      *(undefined1 *)(puVar45 + 6) = 0;
      *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
      puVar45[7] = local_2b8;
    }
    else {
      puVar38 = (undefined8 *)(local_2b0 + 0x1d0);
      uVar23 = FUN_14473c272(lVar43,puVar38,0);
      lVar15 = (**(code **)(*(longlong *)*puVar38 + 0x10))();
      plVar19 = local_298;
      if (*(char *)(lVar15 + 0x28) != local_2b9) {
        uStack_f6 = 0;
        local_128 = (undefined8 *)0x20009;
        cStack_f5 = local_2b9;
        uStack_f4 = 0;
        uStack_f3 = 0xff;
        uStack_fc = 1;
        uStack_fa = 1;
        uStack_f8 = 0x101;
        iStack_120 = local_d8;
        uStack_11c = uStack_d4;
        uStack_118 = uStack_d0;
        iStack_114 = iStack_cc;
        local_108._4_4_ = DAT_14ca84e40;
        if ((int)(uint)local_1c8 < (int)DAT_14ca84e40) {
          local_108._4_4_ = (uint)local_1c8;
        }
        if ((int)local_108._4_4_ < 2) {
          local_108._4_4_ = 1;
        }
        local_108._0_4_ = 0;
        uStack_100 = DAT_14ca84e40;
        if ((int)(uint)local_1d0 < (int)DAT_14ca84e40) {
          uStack_100 = (uint)local_1d0;
        }
        uStack_110 = (longlong *)CONCAT44(local_1f8._0_4_,local_c8);
        if ((int)uStack_100 < 2) {
          uStack_100 = 1;
        }
        uVar34 = *(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar14 = uVar34 + 0x120;
        if (*(ulonglong *)(lVar43 + 0x78) < uVar14) {
          FUN_140023dd8(local_298,0x128);
          uVar34 = *plVar19 + 7U & 0xfffffffffffffff8;
          uVar14 = uVar34 + 0x120;
        }
        *(ulonglong *)(lVar43 + 0x70) = uVar14;
        FUN_1456bbb8c(uVar34,L"FFXFSR3SceneColorPreAlphaTemp",&local_128,0);
        iVar22 = *(int *)(lVar43 + 0x180);
        *(uint *)(lVar43 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar43 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(local_290,iVar22);
        }
        *(ulonglong *)(*(longlong *)(lVar43 + 0x178) + (longlong)iVar22 * 8) = uVar34;
        *(int *)(uVar34 + 0x9c) = *(int *)(lVar43 + 0x180) + -1;
        local_2f0 = *(undefined8 **)(uVar23 + 0x84);
        local_2f8 = (undefined1 **)CONCAT44(DAT_14c967818._4_4_,(int)DAT_14c967818);
        iStack_120 = *(int *)((longlong)local_288 + 0x3094);
        local_128 = (undefined8 *)
                    CONCAT44(*(undefined4 *)((longlong)local_288 + 0x1dd4),
                             *(undefined4 *)(local_288 + 0x612));
        uStack_11c = CONCAT31(uStack_11c._1_3_,*(undefined1 *)((longlong)local_288 + 0x1de6));
        local_2e8 = (wchar_t *)local_2f8;
        local_2e0 = local_2f0;
        FUN_143017f0c(lVar43,&local_128,uVar23,uVar34);
        uVar23 = uVar34;
      }
      plVar19 = local_298;
      if ((*(char *)(uVar23 + 0x92) == '\x04') || (*(char *)(uVar23 + 0x92) == '\x01')) {
        uVar47 = *(undefined2 *)(uVar23 + 0x8e);
      }
      else {
        uVar47 = 0;
      }
      uVar8 = *(undefined1 *)(uVar23 + 0x90);
      puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
      if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
        FUN_140023dd8(local_298,0x48);
        puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
        puVar38 = puVar45 + 8;
      }
      *(undefined8 **)(lVar43 + 0x70) = puVar38;
      puVar45[1] = *(undefined8 *)(uVar23 + 8);
      puVar45[2] = 0;
      *(undefined1 *)(puVar45 + 3) = 1;
      *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
      *puVar45 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar45 + 5) = 0;
      *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
      *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
      *(undefined1 *)(puVar45 + 6) = 0;
      *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
      puVar45[7] = uVar23;
    }
    iVar22 = *(int *)(lVar43 + 0x1a0);
    *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    puVar46 = local_288;
    plVar19 = local_298;
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar48[0xb] = puVar45;
    puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(lVar43 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(local_238 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(char *)((longlong)puVar45 + 0x2a) = (char)local_250;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(short *)((longlong)puVar45 + 0x2e) = (short)local_240;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_238;
    iVar22 = *(int *)(lVar43 + 0x1a0);
    *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar48[0xd] = puVar45;
    if ((((*(longlong *)(local_2b0 + 0x1f0) == 0) || ((char)local_224 == '\0')) ||
        (puVar46[0x621] == 0)) || (*(int *)(puVar46[1] + 0x10) != 1)) {
LAB_1446510ab:
      puVar38 = &DAT_14ca63b28;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc2a720) && (FUN_144b3d300(&DAT_14cc2a720), DAT_14cc2a720 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cc2a718 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Lumen.Supported",1);
        _Init_thread_footer(&DAT_14cc2a720);
        puVar46 = local_288;
        lVar43 = local_2c8;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc2a730) && (FUN_144b3d300(&DAT_14cc2a730), DAT_14cc2a730 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cc2a728 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Lumen.Reflections.Allow",1);
        _Init_thread_footer(&DAT_14cc2a730);
        puVar46 = local_288;
        lVar43 = local_2c8;
      }
      uVar9 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(puVar46 + 0x612) * 2);
      if (((&DAT_14ca814cc)[(ulonglong)uVar9 * 0x3c] & 0x10) == 0) goto LAB_1446510ab;
      puVar41 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar41 = DAT_14ca96af8;
      }
      if (((((((uint)puVar41[uVar9 >> 5] >> (uVar9 & 0x1f) & 1) != 0) &&
            (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar9 * 0xf])) ||
           (*(char *)((longlong)puVar46 + 0x23ec) != '\0')) ||
          (((*(char *)(puVar46 + 0x47d) != '\0' || (*(char *)((longlong)puVar46 + 0x23eb) != '\0'))
           || ((puVar46[2] == 0 ||
               ((*(char *)(puVar46 + 0x526) != '\x01' ||
                ((DAT_14cc2a718 != (longlong *)0x0 & *(byte *)(puVar46[1] + 0x50) >> 6) != 1))))))))
         || ((iVar22 = (**(code **)(*DAT_14cc2a718 + 0xb0))(),
             DAT_14cc2a728 == (longlong *)0x0 || iVar22 == 0 ||
             (iVar22 = (**(code **)(*DAT_14cc2a728 + 0xb0))(), iVar22 == 0)))) goto LAB_1446510ab;
      puVar38 = (undefined8 *)(local_2b0 + 0x1f0);
    }
    lVar15 = FUN_14473c272(lVar43,puVar38,0);
    plVar19 = local_298;
    if ((*(char *)(lVar15 + 0x92) == '\x04') || (*(char *)(lVar15 + 0x92) == '\x01')) {
      uVar47 = *(undefined2 *)(lVar15 + 0x8e);
    }
    else {
      uVar47 = 0;
    }
    uVar8 = *(undefined1 *)(lVar15 + 0x90);
    puVar45 = (undefined8 *)(*(longlong *)(lVar43 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar43 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(lVar43 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(lVar15 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = lVar15;
    iVar22 = *(int *)(lVar43 + 0x1a0);
    *(uint *)(lVar43 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar43 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    lVar32 = local_2c8;
    *(undefined8 **)(*(longlong *)(lVar43 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar43 + 0x1a0) + -1;
    puVar48[0xc] = puVar45;
    *(undefined4 *)(puVar48 + 0x21) = 0;
    if ((*(char *)((longlong)local_220 + 0x92) == '\x04') ||
       (*(char *)((longlong)local_220 + 0x92) == '\x01')) {
      local_1d8 = (uint)*(ushort *)((longlong)local_220 + 0x8e);
    }
    else {
      local_1d8 = 0;
    }
    if ((*(char *)((longlong)local_260 + 0x92) == '\x04') ||
       (*(char *)((longlong)local_260 + 0x92) == '\x01')) {
      local_1d0 = CONCAT44(local_1d0._4_4_,(uint)*(ushort *)((longlong)local_260 + 0x8e));
    }
    else {
      local_1d0 = (ulonglong)local_1d0._4_4_ << 0x20;
    }
    if ((*(char *)((longlong)local_280 + 0x92) == '\x04') ||
       (*(char *)((longlong)local_280 + 0x92) == '\x01')) {
      uVar47 = *(undefined2 *)((longlong)local_280 + 0x8e);
    }
    else {
      uVar47 = 0;
    }
    if ((*(char *)(lVar44 + 0x92) == '\x04') || (*(char *)(lVar44 + 0x92) == '\x01')) {
      uVar50 = *(undefined2 *)(lVar44 + 0x8e);
    }
    else {
      uVar50 = 0;
    }
    uVar8 = *(undefined1 *)((longlong)local_220 + 0x90);
    local_26b = (undefined1)local_260[0x12];
    uVar6 = *(undefined1 *)(lVar44 + 0x90);
    local_290 = (longlong *)CONCAT71(local_290._1_7_,*(undefined1 *)(local_208 + 0x94));
    local_2a0 = (int *)CONCAT71(local_2a0._1_7_,*(undefined1 *)(local_248 + 0x94));
    puVar45 = (undefined8 *)(*(longlong *)(local_2c8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    uVar42 = *(undefined1 *)((longlong)local_280 + 0x90);
    if (*(undefined8 **)(local_2c8 + 0x78) < puVar38) {
      local_26c = *(undefined1 *)((longlong)local_280 + 0x90);
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
      uVar42 = local_26c;
    }
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(lVar44 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar6;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar50;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = lVar44;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    lVar15 = local_2b0;
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    puVar48[5] = puVar45;
    puVar45 = (undefined8 *)(*(longlong *)(lVar32 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar32 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)((longlong)local_220 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(short *)((longlong)puVar45 + 0x2e) = (short)local_1d8;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_220;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    puVar48[6] = puVar45;
    puVar45 = (undefined8 *)(*(longlong *)(lVar32 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar32 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    puVar46 = local_288;
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar45[1] = local_260[1];
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = local_26b;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(short *)((longlong)puVar45 + 0x2e) = (short)local_1d0;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_260;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    puVar48[7] = puVar45;
    puVar45 = (undefined8 *)(*(longlong *)(lVar32 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    if (*(undefined8 **)(lVar32 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)((longlong)local_280 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar42;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_280;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    puVar48[8] = puVar45;
    lVar44 = FUN_1447e4f80();
    plVar19 = local_298;
    cVar10 = '\x02';
    if (*(char *)(lVar44 + 0x41) != '\x03') {
      cVar10 = *(char *)(lVar44 + 0x41);
    }
    puVar48[0x12] = puVar46[3];
    *(char *)(puVar48 + 0x13) = cVar10;
    puVar45 = (undefined8 *)(*(longlong *)(lVar32 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 9;
    if (*(undefined8 **)(lVar32 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x50);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 9;
    }
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(local_208 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 0;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar45 + 5) = 0;
    *puVar45 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar45 + 6) = local_290._0_1_;
    *(undefined1 *)(puVar45 + 7) = 0;
    *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
    puVar45[8] = local_208;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    plVar19 = local_298;
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    puVar48[0x14] = puVar45;
    puVar45 = (undefined8 *)(*(longlong *)(lVar32 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 9;
    if (*(undefined8 **)(lVar32 + 0x78) < puVar38) {
      FUN_140023dd8(local_298,0x50);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 9;
    }
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(local_248 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 0;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar45 + 5) = 0;
    *puVar45 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar45 + 6) = local_2a0._0_1_;
    *(undefined1 *)(puVar45 + 7) = 0;
    *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
    puVar45[8] = local_248;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_268,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    puVar48[0x15] = puVar45;
    if (*(int *)(DAT_14cc28ba0 + 4) == 0) {
      fVar54 = *(float *)(DAT_14cc28b88 + 4);
      if (*(float *)(DAT_14cc28b88 + 4) <= *(float *)(puVar46 + 0x26e1)) {
        fVar54 = *(float *)(puVar46 + 0x26e1);
      }
    }
    else {
      fVar54 = *(float *)(DAT_14cc28b88 + 4);
    }
    *(float *)(puVar48 + 0x17) = fVar54;
    *(undefined4 *)((longlong)puVar48 + 0xbc) = *(undefined4 *)(DAT_14cc28b40 + 4);
    *(undefined4 *)(puVar48 + 0x18) = *(undefined4 *)(DAT_14cc28b58 + 4);
    *(undefined4 *)((longlong)puVar48 + 0xc4) = *(undefined4 *)(DAT_14cc28b70 + 4);
    *(undefined4 *)(puVar48 + 0x19) = *(undefined4 *)(DAT_14cc28bb8 + 4);
    *(undefined4 *)((longlong)puVar48 + 0xcc) = *(undefined4 *)(DAT_14cc28bd0 + 4);
    *(undefined4 *)(puVar48 + 0x1a) = *(undefined4 *)(DAT_14cc28be8 + 4);
    *(undefined4 *)((longlong)puVar48 + 0xd4) = *(undefined4 *)(DAT_14cc28c00 + 4);
    *(undefined4 *)(puVar48 + 0x1b) = *(undefined4 *)(DAT_14cc28c18 + 4);
    *(undefined4 *)((longlong)puVar48 + 0xdc) = *(undefined4 *)(DAT_14cc28cd8 + 4);
    *(undefined4 *)(puVar48 + 0x1c) = *(undefined4 *)(DAT_14cc28cf0 + 4);
    *(undefined4 *)((longlong)puVar48 + 0xe4) = *(undefined4 *)(DAT_14cc28c30 + 4);
    *(undefined4 *)(puVar48 + 0x1d) = *(undefined4 *)(DAT_14cc28c48 + 4);
    *(undefined4 *)((longlong)puVar48 + 0x104) = *(undefined4 *)(DAT_14cc28c60 + 4);
    uVar21 = puVar46[0x2703];
    FUN_145f617aa();
    FUN_1448e935e(uVar21,&local_128,&DAT_14cc29288,0);
    FUN_145f617aa();
    lVar32 = local_2c8;
    iVar22 = (int)local_230 + 7;
    local_130 = (int)local_230 + 0xe;
    if (-1 < iVar22) {
      local_130 = iVar22;
    }
    local_130 = local_130 >> 3;
    iVar22 = (int)local_258 + 7;
    local_134 = (int)local_258 + 0xe;
    if (-1 < iVar22) {
      local_134 = iVar22;
    }
    local_134 = local_134 >> 3;
    local_2f8 = (undefined1 **)&local_134;
    local_12c = 1;
    FUN_14981b630(local_2c8,&local_180,&local_128,puVar48 + 2);
    plVar19 = *(longlong **)(lVar15 + 0x208);
    if (plVar19 != (longlong *)0x0) {
      *(undefined8 *)(lVar15 + 0x208) = 0;
      (**(code **)(*plVar19 + 0x38))();
    }
    uVar23 = local_208;
    bVar26 = *(byte *)(local_208 + 0x24);
    *(byte *)(local_208 + 0x24) = bVar26 | 2;
    *(undefined1 *)(local_208 + 0x26) = 1;
    plVar19 = (longlong *)(lVar32 + 0x1b8);
    iVar22 = *(int *)(lVar32 + 0x1c0);
    *(uint *)(lVar32 + 0x1c0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1c4) < iVar22 + 1U) {
      FUN_14017e38e(plVar19,iVar22);
    }
    lVar44 = local_2c8;
    lVar32 = *plVar19;
    *(ulonglong *)(lVar32 + (longlong)iVar22 * 0x10) = uVar23;
    *(undefined8 **)(lVar32 + 8 + (longlong)iVar22 * 0x10) = (undefined8 *)(lVar15 + 0x208);
    if ((bVar26 & 2) == 0) {
      pcVar3 = (char *)(local_2c8 + 0x4a8);
      LOCK();
      bVar51 = *(char *)(local_2c8 + 0x4a8) == '\0';
      if (bVar51) {
        *(char *)(local_2c8 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar51) {
        FUN_1447d2058();
      }
      iVar22 = *(int *)(lVar44 + 0x4b8);
      *(uint *)(lVar44 + 0x4b8) = iVar22 + 1U;
      if (*(uint *)(lVar44 + 0x4bc) < iVar22 + 1U) {
        FUN_1447f2dbc((longlong *)(lVar44 + 0x4b0),iVar22);
      }
      lVar15 = local_2b0;
      lVar32 = *(longlong *)(lVar44 + 0x4b0);
      *(undefined8 *)(lVar32 + (longlong)iVar22 * 0x10) = 2;
      *(ulonglong *)(lVar32 + 8 + (longlong)iVar22 * 0x10) = uVar23;
      LOCK();
      cVar10 = *pcVar3;
      if (cVar10 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar10 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
    plVar18 = *(longlong **)(lVar15 + 0x210);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(lVar15 + 0x210) = 0;
      (**(code **)(*plVar18 + 0x38))();
    }
    uVar14 = local_248;
    bVar7 = *(byte *)(local_248 + 0x24);
    *(byte *)(local_248 + 0x24) = bVar7 | 2;
    *(undefined1 *)(local_248 + 0x26) = 1;
    iVar22 = *(int *)(local_2c8 + 0x1c0);
    *(uint *)(local_2c8 + 0x1c0) = iVar22 + 1U;
    if (*(uint *)(local_2c8 + 0x1c4) < iVar22 + 1U) {
      FUN_14017e38e(plVar19,iVar22);
    }
    lVar44 = local_2c8;
    bVar26 = local_2c9;
    lVar32 = *plVar19;
    *(ulonglong *)(lVar32 + (longlong)iVar22 * 0x10) = uVar14;
    *(undefined8 **)(lVar32 + 8 + (longlong)iVar22 * 0x10) = (undefined8 *)(lVar15 + 0x210);
    uVar14 = local_248;
    param_3 = local_2c8;
    if ((bVar7 & 2) == 0) {
      pcVar3 = (char *)(local_2c8 + 0x4a8);
      LOCK();
      bVar51 = *(char *)(local_2c8 + 0x4a8) == '\0';
      if (bVar51) {
        *(char *)(local_2c8 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar51) {
        FUN_1447d2058();
      }
      iVar22 = *(int *)(lVar44 + 0x4b8);
      *(uint *)(lVar44 + 0x4b8) = iVar22 + 1U;
      if (*(uint *)(lVar44 + 0x4bc) < iVar22 + 1U) {
        FUN_1447f2dbc((longlong *)(lVar44 + 0x4b0),iVar22);
      }
      uVar14 = local_248;
      lVar32 = *(longlong *)(lVar44 + 0x4b0);
      *(undefined8 *)(lVar32 + (longlong)iVar22 * 0x10) = 2;
      *(ulonglong *)(lVar32 + 8 + (longlong)iVar22 * 0x10) = local_248;
      LOCK();
      cVar10 = *pcVar3;
      if (cVar10 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      param_3 = local_2c8;
      if (cVar10 != '\x01') {
        FUN_14008cdb0(pcVar3);
        param_3 = local_2c8;
      }
    }
  }
  local_248 = uVar14;
  local_208 = uVar23;
  if ((*(int *)(DAT_14cc28c90 + 4) == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x40) + 0x30) == 0)) {
    local_290 = (longlong *)local_2b8;
  }
  else {
    uStack_f6 = 0;
    local_128 = (undefined8 *)0x20009;
    cStack_f5 = local_2b9;
    uStack_f4 = 0;
    uStack_f3 = 0xff;
    uStack_fc = 1;
    uStack_fa = 1;
    uStack_f8 = 0x101;
    local_108._4_4_ = DAT_14ca84e40;
    if ((int)(uint)local_1c8 < (int)DAT_14ca84e40) {
      local_108._4_4_ = (uint)local_1c8;
    }
    if ((int)local_108._4_4_ < 2) {
      local_108._4_4_ = 1;
    }
    uVar27 = (uint)(local_1c8 >> 0x20);
    uStack_100 = DAT_14ca84e40;
    if ((int)uVar27 < (int)DAT_14ca84e40) {
      uStack_100 = uVar27;
    }
    iStack_120 = local_d8;
    uStack_11c = uStack_d4;
    uStack_118 = uStack_d0;
    iStack_114 = iStack_cc;
    local_108._0_4_ = 0;
    uStack_110 = (longlong *)CONCAT44(local_1f8._0_4_,local_c8);
    if ((int)uStack_100 < 2) {
      uStack_100 = 1;
    }
    plVar19 = (longlong *)(param_3 + 0x70);
    uVar14 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar23 = uVar14 + 0x120;
    if (*(ulonglong *)(param_3 + 0x78) < uVar23) {
      FUN_140023dd8(plVar19,0x128);
      uVar14 = *plVar19 + 7U & 0xfffffffffffffff8;
      uVar23 = uVar14 + 0x120;
    }
    *(ulonglong *)(param_3 + 0x70) = uVar23;
    local_2c9 = bVar26;
    FUN_1456bbb8c(uVar14,L"FFXFSR3SubrectColor",&local_128,0);
    iVar22 = *(int *)(param_3 + 0x180);
    *(uint *)(param_3 + 0x180) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0x184) < iVar22 + 1U) {
      FUN_14472c0f6(param_3 + 0x178,iVar22);
    }
    *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar22 * 8) = uVar14;
    *(int *)(uVar14 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
    puVar48 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar38 = puVar48 + 8;
    if (*(undefined8 **)(param_3 + 0x78) < puVar38) {
      FUN_140023dd8(plVar19,0x50);
      puVar48 = (undefined8 *)(*plVar19 + 0xfU & 0xfffffffffffffff0);
      puVar38 = puVar48 + 8;
    }
    *(undefined8 **)(param_3 + 0x70) = puVar38;
    *puVar48 = &PTR_FUN_14bea8d88;
    puVar48[2] = 0;
    puVar48[3] = 0;
    puVar48[4] = 0;
    *(undefined1 *)(puVar48 + 5) = 1;
    puVar48[6] = 0;
    iVar22 = *(int *)(param_3 + 0xa0);
    *(uint *)(param_3 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8((longlong *)(param_3 + 0x98),iVar22);
    }
    lVar32 = local_2c8;
    *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar22 * 8) = puVar48;
    lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(local_2b0 + 0x10) + 0x40) + 0x30);
    if ((*(char *)(lVar15 + 0x92) == '\x04') || (*(char *)(lVar15 + 0x92) == '\x01')) {
      uVar47 = *(undefined2 *)(lVar15 + 0x8e);
    }
    else {
      uVar47 = 0;
    }
    local_220 = (longlong *)CONCAT71(local_220._1_7_,*(undefined1 *)(uVar14 + 0x94));
    uVar8 = *(undefined1 *)(lVar15 + 0x90);
    puVar45 = (undefined8 *)(*(longlong *)(local_2c8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    local_290 = (longlong *)uVar14;
    local_260 = plVar19;
    if (*(undefined8 **)(local_2c8 + 0x78) < puVar38) {
      FUN_140023dd8(plVar19,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    piVar1 = (int *)(puVar48 + 2);
    local_280 = (longlong *)(lVar32 + 0x198);
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(lVar15 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = lVar15;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_280,iVar22);
    }
    plVar19 = local_260;
    param_3 = local_2c8;
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    *(undefined8 **)piVar1 = puVar45;
    if ((*(char *)(local_2b8 + 0x92) == '\x04') || (*(char *)(local_2b8 + 0x92) == '\x01')) {
      uVar47 = *(undefined2 *)(local_2b8 + 0x8e);
    }
    else {
      uVar47 = 0;
    }
    uVar8 = *(undefined1 *)(local_2b8 + 0x90);
    puVar45 = (undefined8 *)(*(longlong *)(local_2c8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
    local_2a0 = piVar1;
    if (*(undefined8 **)(local_2c8 + 0x78) < puVar38) {
      FUN_140023dd8(local_260,0x48);
      puVar45 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar38 = puVar45 + 8;
    }
    *(undefined8 **)(param_3 + 0x70) = puVar38;
    puVar45[1] = *(undefined8 *)(local_2b8 + 8);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
    *puVar45 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar45 + 5) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x2a) = uVar8;
    *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x2e) = uVar47;
    *(undefined1 *)(puVar45 + 6) = 0;
    *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
    puVar45[7] = local_2b8;
    iVar22 = *(int *)(param_3 + 0x1a0);
    *(uint *)(param_3 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_280,iVar22);
    }
    *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar22 * 8) = puVar45;
    *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
    puVar48[3] = puVar45;
    lVar32 = FUN_1447e4f80();
    plVar19 = local_260;
    puVar38 = local_288;
    cVar10 = '\x02';
    if (*(char *)(lVar32 + 0x41) != '\x03') {
      cVar10 = *(char *)(lVar32 + 0x41);
    }
    puVar48[4] = local_288[3];
    *(char *)(puVar48 + 5) = cVar10;
    puVar46 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar45 = puVar46 + 9;
    if (*(undefined8 **)(param_3 + 0x78) < puVar45) {
      FUN_140023dd8(local_260,0x50);
      puVar46 = (undefined8 *)(*plVar19 + 7U & 0xfffffffffffffff8);
      puVar45 = puVar46 + 9;
    }
    *(undefined8 **)(param_3 + 0x70) = puVar45;
    puVar46[1] = *(undefined8 *)((longlong)local_290 + 8);
    puVar46[2] = 0;
    *(undefined1 *)(puVar46 + 3) = 0;
    *(undefined8 *)((longlong)puVar46 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar46 + 5) = 0;
    *puVar46 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar46 + 6) = local_220._0_1_;
    *(undefined1 *)(puVar46 + 7) = 0;
    *(undefined4 *)((longlong)puVar46 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar46 + 0x35) = 0;
    puVar46[8] = local_290;
    iVar22 = *(int *)(param_3 + 0x1a0);
    *(uint *)(param_3 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_280,iVar22);
    }
    *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar22 * 8) = puVar46;
    *(int *)((longlong)puVar46 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
    puVar48[6] = puVar46;
    *(uint *)(puVar48 + 7) = (uint)(lVar15 == 0 || *(int *)(DAT_14cc28c90 + 4) == 1);
    if (lVar15 == 0) {
      FUN_14473c272(param_3,&DAT_14ca63b28,0);
    }
    uVar21 = puVar38[0x2703];
    FUN_145e4d46e();
    FUN_1448e935e(uVar21,&local_128,&DAT_14cc293b0,0);
    FUN_145e4d46e();
    iVar22 = *(int *)(local_2b8 + 0x88) + 7;
    local_13c = *(int *)(local_2b8 + 0x88) + 0xe;
    if (-1 < iVar22) {
      local_13c = iVar22;
    }
    local_13c = local_13c >> 3;
    iVar22 = *(int *)(local_2b8 + 0x84) + 7;
    local_140 = *(int *)(local_2b8 + 0x84) + 0xe;
    if (-1 < iVar22) {
      local_140 = iVar22;
    }
    local_140 = local_140 >> 3;
    local_2f8 = (undefined1 **)&local_140;
    local_138 = 1;
    FUN_14981b6e2(param_3,&local_180,&local_128,local_2a0);
    lVar15 = local_2b0;
    bVar26 = local_2c9;
  }
  plVar19 = (longlong *)(lVar15 + 0x1e8);
  if (*(longlong **)(lVar15 + 0x1e8) == (longlong *)0x0) {
LAB_144652052:
    local_108._0_4_ = 0;
    uStack_fc = 1;
    uStack_f6 = 0;
    iStack_120 = DAT_14ca83a58;
    uStack_11c = DAT_14ca83a5c;
    uStack_118 = DAT_14ca83a60;
    iStack_114 = DAT_14ca83a64;
    uStack_110 = (longlong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
    cStack_f5 = '\x0f';
    uStack_f4 = 0;
    local_108._4_4_ = (uint)local_278;
    uStack_100 = (uint)((ulonglong)local_278 >> 0x20);
    uStack_fa = 1;
    uStack_f8 = 0x101;
    local_128 = (undefined8 *)0x20009;
    uStack_f3 = 0xff;
    local_2f8 = (undefined1 **)0x14bea6d3a;
    FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_3 + 0x18),&local_128,plVar19);
  }
  else {
    lVar15 = (**(code **)(**(longlong **)(lVar15 + 0x1e8) + 0x10))();
    if ((*(int *)(lVar15 + 0x2c) != (uint)local_210) ||
       (lVar15 = (**(code **)(*(longlong *)*plVar19 + 0x10))(),
       *(int *)(lVar15 + 0x30) != (int)local_1c0)) goto LAB_144652052;
  }
  local_280 = plVar19;
  local_2a0 = (int *)FUN_14473c272(param_3,plVar19,0);
  puVar2 = (ulonglong *)(param_3 + 0x70);
  puVar48 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar38 = puVar48 + 0xc;
  local_278 = puVar2;
  if (*(undefined8 **)(param_3 + 0x78) < puVar38) {
    FUN_140023dd8(puVar2,0x70);
    puVar48 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar38 = puVar48 + 0xc;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar38;
  *puVar48 = &PTR_FUN_14bea8da8;
  puVar48[8] = 0;
  puVar48[2] = 0;
  puVar48[3] = 0;
  *(undefined4 *)(puVar48 + 4) = 0;
  puVar48[5] = 0;
  puVar48[6] = 0;
  *(undefined1 *)(puVar48 + 9) = 1;
  puVar48[10] = 0;
  plVar19 = (longlong *)(param_3 + 0x98);
  iVar22 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar22 + 1U;
  if (*(uint *)(param_3 + 0xa4) < iVar22 + 1U) {
    FUN_1448cfae8(plVar19,iVar22);
  }
  puVar2 = local_278;
  *(undefined8 **)(*plVar19 + (longlong)iVar22 * 8) = puVar48;
  if (local_2a8 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_2a8 + 0xac);
  }
  fVar56 = (float)(int)local_218;
  fVar54 = (float)local_1d4;
  local_2b8 = CONCAT71(local_2b8._1_7_,*(undefined1 *)((longlong)local_2a0 + 0x94));
  puVar48[2] = local_2a8;
  puVar48[3] = uVar21;
  *(undefined4 *)(puVar48 + 4) = 0x10;
  puVar45 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar45 + 8;
  local_220 = plVar19;
  if (*(undefined8 **)(param_3 + 0x78) < puVar38) {
    FUN_140023dd8(local_278,0x48);
    puVar45 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
  }
  local_218 = param_3 + 0x198;
  *(undefined8 **)(param_3 + 0x70) = puVar38;
  puVar45[1] = *(undefined8 *)(local_2a8 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 1;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *puVar45 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar45 + 5) = 0;
  *(undefined1 *)((longlong)puVar45 + 0x2a) = (undefined1)local_1f0;
  *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
  *(short *)((longlong)puVar45 + 0x2e) = (short)local_1e8;
  *(undefined1 *)(puVar45 + 6) = 0;
  *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
  puVar45[7] = local_2a8;
  iVar22 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar22 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar22 + 1U) {
    FUN_1447568fc(local_218,iVar22);
  }
  puVar2 = local_278;
  fVar56 = fVar56 * fVar53 * fVar55;
  fVar55 = fVar54 * fVar53 * fVar55;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar22 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar48[5] = puVar45;
  puVar45 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar45 + 8;
  if (*(undefined8 **)(param_3 + 0x78) < puVar38) {
    FUN_140023dd8(local_278,0x48);
    puVar45 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar45 + 8;
  }
  puVar46 = local_288;
  *(undefined8 **)(param_3 + 0x70) = puVar38;
  puVar45[1] = *(undefined8 *)(local_238 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 1;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *puVar45 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar45 + 5) = 0;
  *(char *)((longlong)puVar45 + 0x2a) = (char)local_250;
  *(undefined1 *)((longlong)puVar45 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x2c) = 0;
  *(short *)((longlong)puVar45 + 0x2e) = (short)local_240;
  *(undefined1 *)(puVar45 + 6) = 0;
  *(undefined1 *)((longlong)puVar45 + 0x32) = 0;
  puVar45[7] = local_238;
  iVar22 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar22 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar22 + 1U) {
    FUN_1447568fc(local_218,iVar22);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar22 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar48[6] = puVar45;
  lVar15 = FUN_1447e4f80();
  puVar2 = local_278;
  cVar10 = '\x02';
  if (*(char *)(lVar15 + 0x41) != '\x03') {
    cVar10 = *(char *)(lVar15 + 0x41);
  }
  puVar48[8] = puVar46[3];
  *(char *)(puVar48 + 9) = cVar10;
  puVar45 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar38 = puVar45 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar38) {
    FUN_140023dd8(local_278,0x50);
    puVar45 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar38 = puVar45 + 9;
  }
  bVar7 = local_26a;
  local_240 = puVar48 + 2;
  *(undefined8 **)(param_3 + 0x70) = puVar38;
  puVar45[1] = *(undefined8 *)((longlong)local_2a0 + 8);
  puVar45[2] = 0;
  *(undefined1 *)(puVar45 + 3) = 0;
  *(undefined8 *)((longlong)puVar45 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar45 + 5) = 0;
  *puVar45 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar45 + 6) = (undefined1)local_2b8;
  *(undefined1 *)(puVar45 + 7) = 0;
  *(undefined4 *)((longlong)puVar45 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar45 + 0x35) = 0;
  puVar45[8] = local_2a0;
  iVar22 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar22 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar22 + 1U) {
    FUN_1447568fc(local_218,iVar22);
  }
  puVar38 = local_288;
  local_238 = (ulonglong)(uint)((int)ROUND(-0.5 - (fVar56 + fVar56)) >> 1);
  local_2b8 = CONCAT44(local_2b8._4_4_,(int)ROUND(-0.5 - (fVar55 + fVar55)) >> 1);
  iVar28 = (uint)bVar26 * 4 + 3;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar22 * 8) = puVar45;
  *(int *)((longlong)puVar45 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar48[10] = puVar45;
  uVar21 = local_288[0x2703];
  FUN_145f103f8();
  FUN_1448e935e(uVar21,&local_128,&DAT_14cc29160,0);
  FUN_145f103f8();
  iVar22 = *(int *)(local_2a8 + 0x88) + 7;
  local_148 = *(int *)(local_2a8 + 0x88) + 0xe;
  if (-1 < iVar22) {
    local_148 = iVar22;
  }
  local_148 = local_148 >> 3;
  iVar22 = *(int *)(local_2a8 + 0x84) + 7;
  local_14c = *(int *)(local_2a8 + 0x84) + 0xe;
  if (-1 < iVar22) {
    local_14c = iVar22;
  }
  local_14c = local_14c >> 3;
  local_2f8 = (undefined1 **)&local_14c;
  local_144 = 1;
  FUN_14981b794(param_3,&local_180,&local_128,local_240);
  puVar2 = local_278;
  lVar15 = local_2b0;
  if ((*(int *)(puVar38 + 0x61f) == (int)DAT_14c967818) &&
     (*(int *)((longlong)puVar38 + 0x30fc) == DAT_14c967818._4_4_)) {
    local_210 = local_2a8;
    local_1f0 = (ulonglong)local_290;
  }
  else {
    if (*(int *)(DAT_14cc28c90 + 4) == 0) {
      uStack_f6 = 0;
      local_128 = (undefined8 *)0x20009;
      cStack_f5 = local_2b9;
      uStack_f4 = 0;
      uStack_f3 = 0xff;
      uStack_fc = 1;
      uStack_fa = 1;
      uStack_f8 = 0x101;
      local_108._4_4_ = DAT_14ca84e40;
      if ((int)(uint)local_1c8 < (int)DAT_14ca84e40) {
        local_108._4_4_ = (uint)local_1c8;
      }
      if ((int)local_108._4_4_ < 2) {
        local_108._4_4_ = 1;
      }
      uVar27 = (uint)(local_1c8 >> 0x20);
      uStack_100 = DAT_14ca84e40;
      if ((int)uVar27 < (int)DAT_14ca84e40) {
        uStack_100 = uVar27;
      }
      iStack_120 = local_d8;
      uStack_11c = uStack_d4;
      uStack_118 = uStack_d0;
      iStack_114 = iStack_cc;
      local_108._0_4_ = 0;
      uStack_110 = (longlong *)CONCAT44(local_1f8._0_4_,local_c8);
      if ((int)uStack_100 < 2) {
        uStack_100 = 1;
      }
      uVar14 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar23 = uVar14 + 0x120;
      if (*(ulonglong *)(param_3 + 0x78) < uVar23) {
        FUN_140023dd8(local_278,0x128);
        uVar14 = *puVar2 + 7 & 0xfffffffffffffff8;
        uVar23 = uVar14 + 0x120;
      }
      *(ulonglong *)(param_3 + 0x70) = uVar23;
      FUN_1456bbb8c(uVar14,L"FFXFSR3SubrectColor",&local_128,0);
      iVar22 = *(int *)(param_3 + 0x180);
      *(uint *)(param_3 + 0x180) = iVar22 + 1U;
      if (*(uint *)(param_3 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(param_3 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar22 * 8) = uVar14;
      *(int *)(uVar14 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
      iVar22 = *(int *)((longlong)puVar38 + 0x3104) - *(int *)((longlong)puVar38 + 0x30fc);
      iStack_120 = DAT_14c9a52a0;
      local_128 = (undefined8 *)DAT_14c9a5298;
      iStack_114 = DAT_14c9a52a0;
      local_108._0_4_ = DAT_14c9a52a0;
      local_108._4_4_ = 0;
      uStack_100 = 0;
      uStack_fc = 1;
      uStack_fa = 0;
      uStack_f8 = 0;
      uStack_f6 = 0;
      cStack_f5 = 0;
      uStack_f4 = 0;
      uStack_f3 = 0;
      uStack_f2 = 0;
      uStack_f0 = 1;
      uStack_11c = (undefined4)puVar38[0x61f];
      uStack_118 = (uint)((ulonglong)puVar38[0x61f] >> 0x20);
      uStack_110 = (longlong *)CONCAT44(DAT_14c967818._4_4_,(int)DAT_14c967818);
      if ((*(int *)(puVar38 + 0x620) - *(int *)(puVar38 + 0x61f) != (int)DAT_14c967818) ||
         (iVar22 != DAT_14c967818._4_4_)) {
        local_128 = (undefined8 *)
                    CONCAT44(iVar22,*(int *)(puVar38 + 0x620) - *(int *)(puVar38 + 0x61f));
        iStack_120 = 1;
      }
      local_1f0 = uVar14;
      FUN_1400e8d41(param_3,local_290,uVar14,&local_128);
    }
    else {
      local_1f0 = (ulonglong)local_290;
    }
    puVar2 = local_278;
    local_128 = *(undefined8 **)(local_2a8 + 0x60);
    iStack_120 = DAT_14ca83a30;
    uStack_11c = DAT_14ca83a34;
    uStack_118 = DAT_14ca83a38;
    iStack_114 = DAT_14ca83a3c;
    cStack_f5 = *(undefined1 *)(local_2a8 + 0x93);
    uStack_f6 = 0;
    uStack_f4 = 0;
    uStack_f3 = 0xff;
    uStack_fc = 1;
    uStack_fa = 1;
    uStack_f8 = 0x101;
    local_108._4_4_ = (uint)local_210;
    if ((int)DAT_14ca84e40 <= (int)(uint)local_210) {
      local_108._4_4_ = DAT_14ca84e40;
    }
    if ((int)local_108._4_4_ < 2) {
      local_108._4_4_ = 1;
    }
    local_108._0_4_ = 0;
    uStack_100 = DAT_14ca84e40;
    if ((int)(uint)local_1c0 < (int)DAT_14ca84e40) {
      uStack_100 = (uint)local_1c0;
    }
    uStack_110 = (longlong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if ((int)uStack_100 < 2) {
      uStack_100 = 1;
    }
    uVar14 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar23 = uVar14 + 0x120;
    if (*(ulonglong *)(param_3 + 0x78) < uVar23) {
      FUN_140023dd8(local_278,0x128);
      uVar14 = *puVar2 + 7 & 0xfffffffffffffff8;
      uVar23 = uVar14 + 0x120;
    }
    *(ulonglong *)(param_3 + 0x70) = uVar23;
    FUN_1456bbb8c(uVar14,L"FFXFSR3SubrectDepth",&local_128,0);
    iVar22 = *(int *)(param_3 + 0x180);
    *(uint *)(param_3 + 0x180) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0x184) < iVar22 + 1U) {
      FUN_14472c0f6(param_3 + 0x178,iVar22);
    }
    *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar22 * 8) = uVar14;
    *(int *)(uVar14 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
    iVar22 = *(int *)((longlong)puVar38 + 0x3104) - *(int *)((longlong)puVar38 + 0x30fc);
    iStack_120 = DAT_14c9a52a0;
    local_128 = (undefined8 *)DAT_14c9a5298;
    iStack_114 = DAT_14c9a52a0;
    local_108._0_4_ = DAT_14c9a52a0;
    local_108._4_4_ = 0;
    uStack_100 = 0;
    uStack_fc = 1;
    uStack_fa = 0;
    uStack_f8 = 0;
    uStack_f6 = 0;
    cStack_f5 = '\0';
    uStack_f4 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    uStack_f0 = 1;
    uStack_11c = (undefined4)puVar38[0x61f];
    uStack_118 = (uint)((ulonglong)puVar38[0x61f] >> 0x20);
    uStack_110 = (longlong *)CONCAT44(DAT_14c967818._4_4_,(int)DAT_14c967818);
    if ((*(int *)(puVar38 + 0x620) - *(int *)(puVar38 + 0x61f) != (int)DAT_14c967818) ||
       (iVar22 != DAT_14c967818._4_4_)) {
      local_128 = (undefined8 *)
                  CONCAT44(iVar22,*(int *)(puVar38 + 0x620) - *(int *)(puVar38 + 0x61f));
      iStack_120 = 1;
    }
    local_210 = uVar14;
    FUN_1400e8d41(param_3,local_2a8,uVar14,&local_128);
  }
  iVar22 = (int)local_238;
  uVar40 = (uint)bVar7 << 2 | 0xfffffff8;
  uVar39 = iVar28 - (uint)local_2b8;
  uVar27 = iVar28 - iVar22;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc29618) && (FUN_144b3d300(&DAT_14cc29618), DAT_14cc29618 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc29610 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PostProcessing.PropagateAlpha",1);
    _Init_thread_footer(&DAT_14cc29618);
    iVar22 = (int)local_238;
    lVar15 = local_2b0;
    param_3 = local_2c8;
    puVar38 = local_288;
  }
  uVar39 = uVar39 & uVar40;
  uVar27 = uVar27 & uVar40;
  if (((DAT_14cc29610 != (longlong *)0x0) &&
      (cVar10 = (**(code **)(*DAT_14cc29610 + 0xa8))(), cVar10 != '\0')) ||
     (cStack_f5 = 0x1a, *(int *)(DAT_14cc28b10 + 4) == 0)) {
    cStack_f5 = 10;
  }
  puVar2 = local_278;
  local_108._4_4_ = uVar39;
  if ((int)DAT_14ca84e40 <= (int)uVar39) {
    local_108._4_4_ = DAT_14ca84e40;
  }
  if ((int)local_108._4_4_ < 2) {
    local_108._4_4_ = 1;
  }
  uStack_100 = DAT_14ca84e40;
  if ((int)uVar27 < (int)DAT_14ca84e40) {
    uStack_100 = uVar27;
  }
  iStack_120 = DAT_14ca83a30;
  uStack_11c = DAT_14ca83a34;
  uStack_118 = DAT_14ca83a38;
  iStack_114 = DAT_14ca83a3c;
  uStack_f6 = 0;
  local_128 = (undefined8 *)0x20009;
  uStack_f4 = 0;
  uStack_f3 = 0xff;
  uStack_fc = 1;
  uStack_fa = 1;
  uStack_f8 = 0x101;
  local_108._0_4_ = 0;
  uStack_110 = (longlong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uStack_100 < 2) {
    uStack_100 = 1;
  }
  uVar14 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar23 = uVar14 + 0x120;
  if (*(ulonglong *)(param_3 + 0x78) < uVar23) {
    FUN_140023dd8(local_278,0x128);
    uVar14 = *puVar2 + 7 & 0xfffffffffffffff8;
    uVar23 = uVar14 + 0x120;
  }
  local_290 = (longlong *)(param_3 + 0x178);
  *(ulonglong *)(param_3 + 0x70) = uVar23;
  FUN_1456bbb8c(uVar14,L"FFXFSR3OutputTexture",&local_128,0);
  bVar26 = local_269;
  iVar28 = *(int *)(param_3 + 0x180);
  *(uint *)(param_3 + 0x180) = iVar28 + 1U;
  if (*(uint *)(param_3 + 0x184) < iVar28 + 1U) {
    FUN_14472c0f6(local_290,iVar28);
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar28 * 8) = uVar14;
  *(int *)(uVar14 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
  *local_1e0 = uVar14;
  uVar39 = -iVar22;
  uVar27 = -(uint)local_2b8;
  bVar26 = bVar26 & (byte)local_200;
  fVar53 = (float)(*(int *)((longlong)puVar38 + 0x4e4) - *(int *)((longlong)puVar38 + 0x4dc)) *
           *(float *)(puVar38[1] + 0x110) * *(float *)((longlong)puVar38 + 0x45c);
  fVar55 = (float)(*(int *)(puVar38 + 0x9c) - *(int *)(puVar38 + 0x9b)) *
           *(float *)(puVar38[1] + 0x110) * *(float *)((longlong)puVar38 + 0x45c);
  local_1e0[1] = CONCAT44(DAT_14c967818._4_4_,(int)DAT_14c967818);
  local_1e0[2] = CONCAT44(-((int)ROUND(-0.5 - (fVar53 + fVar53)) >> 1),
                          -((int)ROUND(-0.5 - (fVar55 + fVar55)) >> 1));
  plVar19 = *(longlong **)(param_5 + 0x70);
  local_240 = (undefined8 *)CONCAT44(local_240._4_4_,1);
  local_2a8 = uVar14;
  if (plVar19 == (longlong *)0x0) {
LAB_144652ce2:
    plVar19 = (longlong *)0x0;
    bVar51 = false;
  }
  else {
    (**(code **)(*plVar19 + 8))(plVar19);
    pwVar16 = (wchar_t *)(**(code **)(*plVar19 + 0x20))(plVar19);
    if (pwVar16 != L"FFXFSR3TemporalUpscaler") {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      goto LAB_144652ce2;
    }
    bVar51 = plVar19[3] != 0;
    local_240 = (undefined8 *)((ulonglong)local_240 & 0xffffffff00000000);
  }
  uStack_178 = 0;
  local_158 = 0;
  local_180 = (uint *)&DAT_00010000;
  uStack_160 = (ulonglong)uVar39;
  uStack_168 = CONCAT44(uVar27,(uint)local_230);
  iVar22 = (bVar26 ^ 1) * 0x20 + (uint)(*(int *)(lVar15 + 0x80) - 3U < 2) * 0x40 + 0x19;
  uStack_170 = (undefined *)CONCAT44((uint)local_258,iVar22);
  local_1e8 = plVar19;
  if (((((bVar51) && (puVar48 = (undefined8 *)plVar19[3], puVar48[10] != DAT_14c867d10)) &&
       (((uint)local_258 <= *(uint *)((longlong)puVar48 + 0x2c) &&
        (((uint)local_230 <= *(uint *)(puVar48 + 6) &&
         (*(uint *)((longlong)puVar48 + 0x34) == uVar27)))))) && (*(uint *)(puVar48 + 7) == uVar39))
     && (iVar22 == *(int *)(puVar48 + 5))) {
    if (puVar48 == (undefined8 *)0x0) {
      puVar48 = (undefined8 *)0x0;
    }
    else {
      LOCK();
      *(int *)(puVar48 + 1) = *(int *)(puVar48 + 1) + 1;
      UNLOCK();
    }
    bVar51 = true;
    local_250 = CONCAT71((int7)(local_230 >> 8),1);
    uVar23 = (ulonglong)uVar39;
  }
  else {
    local_2b8 = CONCAT44(local_2b8._4_4_,uVar27);
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar15 + 0x128);
    local_238 = (ulonglong)uVar39;
    EnterCriticalSection(lpCriticalSection);
    uVar23 = 0;
    local_108._0_4_ = 0;
    local_108._4_4_ = 0;
    uStack_100 = 0;
    local_128 = (undefined8 *)0x0;
    iStack_120 = 0;
    uStack_11c = 0;
    uStack_fc = 0x80;
    uStack_fa = 0;
    uStack_f8 = 0xffff;
    uStack_f6 = 0xff;
    cStack_f5 = 0xff;
    uStack_f4 = 0;
    uStack_f3 = 0;
    uStack_f2 = 0;
    local_e8 = (void *)0x0;
    local_e0 = local_e0 & 0xffffffff00000000;
    iVar22 = *(int *)(lVar15 + 0x178);
    uVar14 = 1;
    iVar33 = 0;
    iVar28 = 0;
    local_1f8 = lpCriticalSection;
    if (iVar22 != 0) {
      puVar17 = *(uint **)(local_2b0 + 0x170);
      if (*(uint **)(local_2b0 + 0x170) == (uint *)0x0) {
        puVar17 = (uint *)(lVar15 + 0x160);
      }
      uVar27 = *puVar17;
      if (uVar27 == 0) {
        iVar28 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar28 = iVar22 + -1;
        }
        uVar23 = 0;
        uVar14 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar14 = uVar23;
        }
        iVar33 = 0;
        do {
          if (uVar14 == uVar23) goto LAB_144652ed4;
          iVar33 = iVar33 + 0x20;
          uVar27 = puVar17[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar23 = 0;
      }
      uVar14 = (ulonglong)(-uVar27 & uVar27);
      uVar34 = uVar14 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar28 = (iVar33 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar28) {
        iVar28 = iVar22;
      }
    }
    if (iVar28 != iVar22) {
      uVar27 = 0xffffffff;
      lVar32 = DAT_14c867d10;
      iVar11 = iVar22;
      do {
        lVar44 = *(longlong *)(lVar15 + 0x150);
        puVar45 = *(undefined8 **)(lVar44 + (longlong)iVar28 * 0x10);
        if ((puVar45[10] != lVar32) &&
           (*(int *)(puVar45 + 0xb) == *(int *)(local_288[0x621] + 0x20))) {
          if ((uStack_170._4_4_ <= *(uint *)((longlong)puVar45 + 0x2c)) &&
             (((((uint)uStack_168 <= *(uint *)(puVar45 + 6) &&
                (*(int *)((longlong)puVar45 + 0x34) == uStack_168._4_4_)) &&
               (*(int *)(puVar45 + 7) == (int)uStack_160)) &&
              ((int)uStack_170 == *(int *)(puVar45 + 5))))) {
            local_250 = CONCAT71((uint7)(uint3)((ulonglong)uStack_170 >> 8),1);
            if (puVar45 == (undefined8 *)0x0) {
              puVar45 = (undefined8 *)0x0;
            }
            else {
              LOCK();
              *(int *)(puVar45 + 1) = *(int *)(puVar45 + 1) + 1;
              UNLOCK();
            }
            local_224 = 0;
            goto LAB_144652ee2;
          }
          FUN_149822234(&local_128,&local_1b0,lVar44 + (longlong)iVar28 * 0x10);
          iVar11 = *(int *)(local_2b0 + 0x178);
          lVar32 = DAT_14c867d10;
        }
        uVar27 = uVar27 & ~(uint)uVar14;
        puVar17 = *(uint **)(local_2b0 + 0x170);
        if (*(uint **)(local_2b0 + 0x170) == (uint *)0x0) {
          puVar17 = (uint *)(lVar15 + 0x160);
        }
        iVar28 = (int)uVar23;
        lVar44 = (longlong)iVar28;
        uVar39 = puVar17[lVar44] & uVar27;
        if (uVar39 == 0) {
          iVar24 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar24 = iVar11 + -1;
          }
          iVar24 = iVar24 >> 5;
          iVar33 = iVar33 + 0x20;
          iVar25 = iVar24;
          if (iVar24 < iVar28) {
            iVar25 = iVar28;
          }
          if (iVar28 < iVar24) {
            lVar43 = 0;
            do {
              uVar39 = puVar17[lVar44 + lVar43 + 1];
              if (uVar39 != 0) {
                uVar23 = (ulonglong)(iVar28 + (int)lVar43 + 1);
                uVar27 = 0xffffffff;
                goto LAB_1446530f1;
              }
              iVar33 = iVar33 + 0x20;
              lVar43 = lVar43 + 1;
            } while (iVar25 - lVar44 != lVar43);
            uVar27 = 0xffffffff;
            iVar28 = iVar25;
          }
          uVar23 = (ulonglong)(iVar28 + 1);
          iVar28 = iVar11;
        }
        else {
LAB_1446530f1:
          uVar14 = (ulonglong)(-uVar39 & uVar39);
          uVar34 = uVar14 * 2 + 1;
          lVar44 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar44 == 0; lVar44 = lVar44 + -1) {
            }
          }
          iVar28 = (iVar33 - ((uint)lVar44 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar28) {
            iVar28 = iVar11;
          }
        }
      } while (iVar28 != iVar22);
    }
LAB_144652ed4:
    puVar45 = (undefined8 *)0x0;
    local_250 = 0;
LAB_144652ee2:
    uVar27 = uStack_100;
    if (uStack_100 == 0) {
      uVar34 = 1;
      uVar23 = 0;
      iVar22 = 0;
      uVar39 = 0;
    }
    else {
      puVar17 = (uint *)CONCAT44(local_108._4_4_,(int)local_108);
      if ((uint *)CONCAT44(local_108._4_4_,(int)local_108) == (uint *)0x0) {
        puVar17 = &uStack_118;
      }
      uVar39 = *puVar17;
      if (uVar39 == 0) {
        iVar22 = uStack_100 + 0x1e;
        if (-1 < (int)(uStack_100 - 1)) {
          iVar22 = uStack_100 - 1;
        }
        uVar23 = 0;
        uVar14 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar14 = uVar23;
        }
        iVar22 = 0;
        do {
          if (uVar14 == uVar23) goto LAB_144652f77;
          iVar22 = iVar22 + 0x20;
          uVar39 = puVar17[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar39 == 0);
      }
      else {
        uVar23 = 0;
        iVar22 = 0;
      }
      uVar34 = (ulonglong)(-uVar39 & uVar39);
      uVar14 = uVar34 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      uVar39 = (iVar22 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      if ((int)uStack_100 <= (int)uVar39) {
        uVar39 = uStack_100;
      }
    }
    if (uVar39 != uStack_100) {
      uVar40 = 0xffffffff;
      do {
        FUN_14981b2da((longlong *)(lVar15 + 0x150),local_128 + (longlong)(int)uVar39 * 2);
        uVar40 = ~(uint)uVar34 & uVar40;
        puVar17 = (uint *)CONCAT44(local_108._4_4_,(int)local_108);
        if ((uint *)CONCAT44(local_108._4_4_,(int)local_108) == (uint *)0x0) {
          puVar17 = &uStack_118;
        }
        iVar28 = (int)uVar23;
        lVar32 = (longlong)iVar28;
        uVar39 = puVar17[lVar32] & uVar40;
        if (uVar39 == 0) {
          iVar33 = uStack_100 + 0x1e;
          if (-1 < (int)(uStack_100 - 1)) {
            iVar33 = uStack_100 - 1;
          }
          iVar33 = iVar33 >> 5;
          iVar22 = iVar22 + 0x20;
          iVar11 = iVar33;
          if (iVar33 < iVar28) {
            iVar11 = iVar28;
          }
          if (iVar28 < iVar33) {
            lVar44 = 0;
            do {
              uVar39 = puVar17[lVar32 + lVar44 + 1];
              if (uVar39 != 0) {
                uVar23 = (ulonglong)(iVar28 + (int)lVar44 + 1);
                uVar40 = 0xffffffff;
                goto LAB_144653242;
              }
              iVar22 = iVar22 + 0x20;
              lVar44 = lVar44 + 1;
            } while (iVar11 - lVar32 != lVar44);
            uVar40 = 0xffffffff;
            lVar32 = (longlong)iVar11;
          }
          uVar23 = lVar32 + 1U & 0xffffffff;
          uVar39 = uStack_100;
        }
        else {
LAB_144653242:
          uVar34 = (ulonglong)(-uVar39 & uVar39);
          uVar14 = uVar34 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          uVar39 = (iVar22 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if ((int)uStack_100 <= (int)uVar39) {
            uVar39 = uStack_100;
          }
        }
      } while (uVar39 != uVar27);
    }
LAB_144652f77:
    local_e0 = local_e0 & 0xffffffff00000000;
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_145d5c4de(&local_128);
    LeaveCriticalSection(local_1f8);
    uVar23 = local_238;
    puVar38 = local_288;
    lVar15 = local_2b0;
    param_3 = local_2c8;
    bVar51 = true;
    uVar27 = (uint)local_2b8;
    puVar48 = puVar45;
    if ((char)local_250 == '\0') {
      puVar48 = (undefined8 *)FUN_14001cc68(0x60,0x10);
      uVar21 = *(undefined8 *)(lVar15 + 0x1a8);
      *(undefined4 *)(puVar48 + 1) = 0;
      *(undefined1 *)((longlong)puVar48 + 0xc) = 0;
      *(byte *)((longlong)puVar48 + 0xd) = *(byte *)((longlong)puVar48 + 0xd) | 3;
      *puVar48 = &PTR_FUN_14bea8120;
      puVar48[2] = uVar21;
      puVar48[10] = 0xffffffff;
      if (puVar45 == puVar48) {
        bVar51 = false;
        puVar48 = puVar45;
      }
      else {
        if (puVar48 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar48 + 1) = *(int *)(puVar48 + 1) + 1;
          UNLOCK();
        }
        if (puVar45 != (undefined8 *)0x0) {
          LOCK();
          puVar17 = (uint *)(puVar45 + 1);
          uVar39 = *puVar17;
          *puVar17 = *puVar17 - 1;
          UNLOCK();
          if ((uVar39 & 0x3fffffff) == 1) {
            puVar17 = (uint *)(puVar45 + 1);
            LOCK();
            uVar39 = *puVar17;
            *puVar17 = *puVar17 | 0x40000000;
            UNLOCK();
            if ((uVar39 >> 0x1e & 1) == 0) {
              bVar26 = *(byte *)((longlong)puVar45 + 0xd);
              plVar18 = (longlong *)FUN_14001cc68(0x10,8);
              plVar18[1] = (longlong)puVar45;
              plVar19 = DAT_14ca843c8;
              if ((bVar26 & 2) == 0) {
                bVar51 = false;
                plVar19 = DAT_14ca843c0;
                do {
                  *plVar18 = (longlong)plVar19;
                  LOCK();
                  bVar52 = plVar19 != DAT_14ca843c0;
                  plVar20 = plVar18;
                  if (bVar52) {
                    plVar19 = DAT_14ca843c0;
                    plVar20 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar20;
                  UNLOCK();
                } while (bVar52);
                lVar15 = local_2b0;
                param_3 = local_2c8;
                puVar38 = local_288;
                uVar23 = local_238;
                uVar27 = (uint)local_2b8;
                goto LAB_1446532fb;
              }
              do {
                *plVar18 = (longlong)plVar19;
                LOCK();
                bVar51 = plVar19 != DAT_14ca843c8;
                plVar20 = plVar18;
                if (bVar51) {
                  plVar19 = DAT_14ca843c8;
                  plVar20 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar20;
                UNLOCK();
              } while (bVar51);
            }
          }
        }
        bVar51 = false;
      }
    }
  }
LAB_1446532fb:
  puVar48[10] = DAT_14c867d10;
  *(undefined4 *)(puVar48 + 0xb) = *(undefined4 *)(puVar38[0x621] + 0x20);
  if ((char)local_1fc != '\0') {
    FUN_142f2e58a(puVar38[0x621] + 0x1310);
    uVar23 = (ulonglong)uVar27 | uVar23 << 0x20;
    lVar32 = puVar38[0x621];
    *(undefined8 *)(lVar32 + 0x1328) = 0;
    *(ulonglong *)(lVar32 + 0x1330) = uVar23;
    *(ulonglong *)(puVar38[0x621] + 0x1320) = uVar23;
  }
  plVar19 = (longlong *)FUN_14001cc68(0x30,0x10);
  local_188 = (longlong *)*local_280;
  if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x30))();
  }
  if (puVar48 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar48 + 1) = *(int *)(puVar48 + 1) + 1;
    UNLOCK();
  }
  local_190 = puVar48;
  FUN_14981b846(plVar19,&local_190,lVar15,&local_188);
  plVar18 = (longlong *)local_1e0[3];
  if (plVar18 != plVar19) {
    local_1e0[3] = (ulonglong)plVar19;
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 8))(plVar19);
    }
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  if ((bVar51) &&
     (((*(uint *)((longlong)puVar48 + 0x2c) < uStack_170._4_4_ ||
       (*(uint *)(puVar48 + 6) < (uint)uStack_168)) ||
      ((*(int *)((longlong)puVar48 + 0x34) != uStack_168._4_4_ ||
       ((*(int *)(puVar48 + 7) != (int)uStack_160 || ((int)uStack_170 != *(int *)(puVar48 + 5)))))))
     )) {
    (**(code **)(**(longlong **)(lVar15 + 0x1a8) + 8))(*(longlong **)(lVar15 + 0x1a8),puVar48 + 9);
    uVar27 = 0;
  }
  else {
    uVar27 = local_224;
    if ((char)local_250 != '\0') goto LAB_14465349b;
  }
  iVar22 = (**(code **)**(undefined8 **)(lVar15 + 0x1a8))
                     (*(undefined8 **)(lVar15 + 0x1a8),puVar48 + 9,&local_180);
  if (iVar22 == 0) {
    puVar48[7] = uStack_160;
    puVar48[8] = local_158;
    puVar48[5] = uStack_170;
    puVar48[6] = uStack_168;
    *(undefined4 *)(puVar48 + 3) = (undefined4)local_180;
    *(undefined4 *)((longlong)puVar48 + 0x1c) = local_180._4_4_;
    *(undefined4 *)(puVar48 + 4) = (undefined4)uStack_178;
    *(undefined4 *)((longlong)puVar48 + 0x24) = uStack_178._4_4_;
  }
LAB_14465349b:
  puVar45 = (undefined8 *)FUN_14001cc68(0x1b0);
  memset(puVar45 + 1,0,0x1a8);
  *puVar45 = 0x10001;
  *(byte *)(puVar45 + 0x33) = (byte)uVar27 ^ 1;
  lVar32 = DAT_14cc28ae0;
  *(bool *)(puVar45 + 0x31) = *(float *)(DAT_14cc28ae0 + 4) != 0.0;
  fVar53 = *(float *)(lVar32 + 4);
  if (1.0 <= fVar53) {
    fVar53 = 1.0;
  }
  if (fVar53 <= 0.0) {
    fVar53 = 0.0;
  }
  *(float *)((longlong)puVar45 + 0x18c) = fVar53;
  *(float *)(puVar45 + 0x32) = *(float *)(puVar38[1] + 0x9c) * 1000.0;
  *(float *)(puVar45 + 0x2d) = (float)(double)puVar38[0x24b4];
  *(float *)((longlong)puVar45 + 0x16c) = (float)(double)puVar38[0x24b5];
  *(undefined4 *)((longlong)puVar45 + 0x194) = *(undefined4 *)((longlong)puVar38 + 0x13694);
  *(int *)(puVar45 + 0x2f) = (int)local_258;
  *(int *)((longlong)puVar45 + 0x17c) = (int)local_230;
  *(float *)(puVar45 + 0x2e) = (float)(int)local_258;
  *(float *)((longlong)puVar45 + 0x174) = (float)(int)local_230;
  FUN_144a132c8(puVar38 + 0xa0,&local_128);
  puVar2 = local_278;
  *(float *)((longlong)puVar45 + 0x1a4) =
       (float)((double)CONCAT44(uStack_11c,iStack_120) + (double)CONCAT44(uStack_11c,iStack_120));
  *(undefined4 *)((longlong)puVar45 + 0x19c) = 0x7f7fffff;
  *(float *)(puVar45 + 0x34) =
       (float)(((double)puVar38[0x115] - (double)puVar38[0x114]) /
              ((double)puVar38[0x110] - (double)puVar38[0x111]));
  *(float *)(puVar45 + 0x35) = 1.0 / *(float *)(puVar38 + 0x221);
  puVar49 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar46 = puVar49 + 0x18;
  if (*(undefined8 **)(param_3 + 0x78) < puVar46) {
    FUN_140023dd8(local_278,0xd0);
    puVar49 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar46 = puVar49 + 0x18;
  }
  plVar19 = local_220;
  *(undefined8 **)(param_3 + 0x70) = puVar46;
  *puVar49 = &PTR_FUN_14bea8dc8;
  puVar49[2] = 0;
  puVar49[3] = 0;
  *(undefined4 *)(puVar49 + 4) = 0;
  puVar49[5] = 0;
  puVar49[6] = 0;
  *(undefined4 *)(puVar49 + 7) = 0;
  puVar49[8] = 0;
  puVar49[9] = 0;
  *(undefined4 *)(puVar49 + 10) = 0;
  puVar49[0xb] = 0;
  puVar49[0xc] = 0;
  *(undefined4 *)(puVar49 + 0xd) = 0;
  puVar49[0xe] = 0;
  puVar49[0xf] = 0;
  *(undefined4 *)(puVar49 + 0x10) = 0;
  puVar49[0x11] = 0;
  puVar49[0x12] = 0;
  *(undefined4 *)(puVar49 + 0x13) = 0;
  puVar49[0x14] = 0;
  puVar49[0x15] = 0;
  *(undefined4 *)(puVar49 + 0x16) = 0;
  iVar22 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar22 + 1U;
  if (*(uint *)(param_3 + 0xa4) < iVar22 + 1U) {
    FUN_1448cfae8(local_220,iVar22);
  }
  puVar2 = local_278;
  *(undefined8 **)(*plVar19 + (longlong)iVar22 * 8) = puVar49;
  if (local_1f0 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_1f0 + 0xac);
  }
  puVar49[2] = local_1f0;
  puVar49[3] = uVar21;
  *(undefined4 *)(puVar49 + 4) = 0x70;
  if (local_210 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_210 + 0xac);
  }
  puVar49[5] = local_210;
  puVar49[6] = uVar21;
  *(undefined4 *)(puVar49 + 7) = 0x70;
  if (local_2a0 == (int *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)((longlong)local_2a0 + 0xac);
  }
  puVar49[8] = local_2a0;
  puVar49[9] = uVar21;
  *(undefined4 *)(puVar49 + 10) = 0x70;
  if ((byte)local_200 != '\0') {
    iStack_120 = DAT_14ca83a30;
    uStack_11c = DAT_14ca83a34;
    uStack_118 = DAT_14ca83a38;
    iStack_114 = DAT_14ca83a3c;
    uStack_f6 = 0;
    local_128 = (undefined8 *)&DAT_00020008;
    cStack_f5 = 1;
    uStack_f4 = 0;
    uStack_fc = 1;
    uStack_fa = 1;
    uStack_f8 = 0x101;
    local_108._0_4_ = 0;
    uStack_f3 = 0xff;
    uStack_110 = (longlong *)CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    local_108._4_4_ = 1;
    uStack_100 = 1;
    uVar14 = *(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar23 = uVar14 + 0x120;
    if (*(ulonglong *)(param_3 + 0x78) < uVar23) {
      FUN_140023dd8(local_278,0x128);
      uVar14 = *puVar2 + 7 & 0xfffffffffffffff8;
      uVar23 = uVar14 + 0x120;
      plVar19 = local_220;
    }
    *(ulonglong *)(param_3 + 0x70) = uVar23;
    FUN_1456bbb8c(uVar14,L"FSR3ExposureTexture",&local_128,0);
    iVar22 = *(int *)(param_3 + 0x180);
    *(uint *)(param_3 + 0x180) = iVar22 + 1U;
    if (*(uint *)(param_3 + 0x184) < iVar22 + 1U) {
      FUN_14472c0f6(local_290,iVar22);
    }
    puVar2 = local_278;
    *(ulonglong *)(*(longlong *)(param_3 + 0x178) + (longlong)iVar22 * 8) = uVar14;
    *(int *)(uVar14 + 0x9c) = *(int *)(param_3 + 0x180) + -1;
    puVar46 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar38 = puVar46 + 4;
    local_230 = uVar14;
    if (*(undefined8 **)(param_3 + 0x78) < puVar38) {
      FUN_140023dd8(local_278,0x30);
      puVar46 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
      puVar38 = puVar46 + 4;
      plVar19 = local_220;
    }
    *(undefined8 **)(local_2c8 + 0x70) = puVar38;
    *puVar46 = &PTR_FUN_14bea8dd0;
    puVar46[2] = 0;
    puVar46[3] = 0;
    iVar22 = *(int *)(local_2c8 + 0xa0);
    *(uint *)(local_2c8 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(local_2c8 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(plVar19,iVar22);
    }
    *(undefined8 **)(*plVar19 + (longlong)iVar22 * 8) = puVar46;
    plVar19 = (longlong *)local_288[0x61b];
    if ((plVar19 == (longlong *)0x0) || ((*(byte *)(plVar19 + 1) & 2) == 0)) {
      local_128 = (undefined8 *)&DAT_3f8000003f800000;
      iStack_120 = 0x3f800000;
      uStack_11c = 0x3f800000;
      local_2f0 = &local_128;
      local_2f8 = (undefined1 **)CONCAT44(local_2f8._4_4_,1);
      lVar15 = FUN_1449cc94d(local_2c8,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
    }
    else {
      if (*(code **)(*plVar19 + 0x80) == (code *)&LAB_144b15db6) {
        local_128 = (undefined8 *)plVar19[(ulonglong)*(uint *)(plVar19 + 0xcd) + 0xd1];
      }
      else {
        local_128 = (undefined8 *)(**(code **)(*plVar19 + 0x80))();
      }
      if (local_128 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_128 + 1) = *(int *)(local_128 + 1) + 1;
        UNLOCK();
      }
      lVar15 = FUN_144735dd8(local_2c8,&local_128,1);
      if (local_128 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_128 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_128)(local_128,1);
        }
      }
    }
    puVar2 = local_278;
    lVar32 = local_2c8;
    cVar10 = *(char *)(lVar15 + 0x68);
    puVar35 = (undefined8 *)(*(longlong *)(local_2c8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar35 + 9;
    if (*(undefined8 **)(local_2c8 + 0x78) < puVar38) {
      FUN_140023dd8(local_278,0x50);
      puVar35 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar38 = puVar35 + 9;
    }
    local_258 = puVar46 + 2;
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar35[1] = *(undefined8 *)(lVar15 + 8);
    puVar35[2] = 0;
    *(undefined1 *)(puVar35 + 3) = 3;
    *(undefined8 *)((longlong)puVar35 + 0x1c) = 0xffffffffffffffff;
    *puVar35 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar35 + 5) = cVar10 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar35 + 0x2c) = 0xffffffff00000000;
    puVar35[7] = 0;
    puVar35[8] = lVar15;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_218,iVar22);
    }
    puVar2 = local_278;
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar35;
    *(int *)((longlong)puVar35 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    *local_258 = (longlong)puVar35;
    uVar8 = *(undefined1 *)(local_230 + 0x94);
    puVar35 = (undefined8 *)(*(longlong *)(lVar32 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar38 = puVar35 + 9;
    if (*(undefined8 **)(lVar32 + 0x78) < puVar38) {
      FUN_140023dd8(local_278,0x50);
      puVar35 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar38 = puVar35 + 9;
    }
    uVar23 = local_230;
    *(undefined8 **)(lVar32 + 0x70) = puVar38;
    puVar35[1] = *(undefined8 *)(local_230 + 8);
    puVar35[2] = 0;
    *(undefined1 *)(puVar35 + 3) = 0;
    *(undefined8 *)((longlong)puVar35 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar35 + 5) = 0;
    *puVar35 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar35 + 6) = uVar8;
    *(undefined1 *)(puVar35 + 7) = 0;
    *(undefined4 *)((longlong)puVar35 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar35 + 0x35) = 0;
    puVar35[8] = local_230;
    iVar22 = *(int *)(lVar32 + 0x1a0);
    *(uint *)(lVar32 + 0x1a0) = iVar22 + 1U;
    if (*(uint *)(lVar32 + 0x1a4) < iVar22 + 1U) {
      FUN_1447568fc(local_218,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar32 + 0x198) + (longlong)iVar22 * 8) = puVar35;
    *(int *)((longlong)puVar35 + 0x1c) = *(int *)(lVar32 + 0x1a0) + -1;
    puVar46[3] = puVar35;
    uVar21 = local_288[0x2703];
    FUN_145ed69a2();
    uVar36 = 0;
    FUN_1448e935e(uVar21,&local_128,&DAT_14cc294d8,0);
    FUN_145ed69a2();
    local_2f8 = &local_19c;
    local_19c = &DAT_100000001;
    local_194 = 1;
    FUN_14981b917(lVar32,&local_180,&local_128,local_258);
    if (uVar23 != 0) {
      uVar36 = *(undefined8 *)(uVar23 + 0xac);
    }
    puVar49[0xb] = uVar23;
    puVar49[0xc] = uVar36;
    *(undefined4 *)(puVar49 + 0xd) = 0x70;
    lVar15 = local_2b0;
    puVar38 = local_288;
  }
  if (local_208 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_208 + 0xac);
  }
  puVar49[0xe] = local_208;
  puVar49[0xf] = uVar21;
  *(undefined4 *)(puVar49 + 0x10) = 0x70;
  if (local_248 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_248 + 0xac);
  }
  puVar49[0x11] = local_248;
  puVar49[0x12] = uVar21;
  *(undefined4 *)(puVar49 + 0x13) = 0x70;
  if (local_2a8 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_2a8 + 0xac);
  }
  puVar17 = (uint *)(puVar49 + 2);
  puVar49[0x14] = local_2a8;
  puVar49[0x15] = uVar21;
  *(undefined4 *)(puVar49 + 0x16) = 0xc00;
  uVar27 = *(uint *)(DAT_14cc28dc8 + 4);
  uVar39 = *(uint *)(DAT_14cc28de0 + 4);
  uVar40 = *(uint *)(DAT_14cc28df8 + 4);
  uVar4 = *(uint *)(DAT_14cc28e10 + 4);
  uVar5 = *(uint *)(DAT_14cc28e28 + 4);
  local_1b0 = (uint *)0x0;
  local_1a8 = 5;
  FUN_149823796(&local_1b0,5);
  *local_1b0 = 0;
  local_1b0[1] = uVar27;
  local_1b0[2] = 1;
  local_1b0[3] = uVar39;
  local_1b0[4] = 2;
  local_1b0[5] = uVar40;
  local_1b0[6] = 3;
  local_1b0[7] = uVar4;
  local_1b0[8] = 4;
  local_1b0[9] = uVar5;
  plVar19 = *(longlong **)(lVar15 + 0x1a8);
  if (*(char *)(lVar15 + 0x1a0) == '\x01') {
    local_258 = puVar49 + 0xe;
    (**(code **)(*plVar19 + 0x48))(plVar19,&local_128,*(undefined8 *)puVar17,4);
    *(int *)(puVar45 + 7) = (int)local_108;
    *(uint *)((longlong)puVar45 + 0x3c) = local_108._4_4_;
    *(uint *)(puVar45 + 8) = uStack_100;
    *(uint *)((longlong)puVar45 + 0x44) = CONCAT22(uStack_fa,uStack_fc);
    *(uint *)(puVar45 + 5) = uStack_118;
    *(int *)((longlong)puVar45 + 0x2c) = iStack_114;
    *(undefined4 *)(puVar45 + 6) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)puVar45 + 0x34) = uStack_110._4_4_;
    *(undefined4 *)(puVar45 + 3) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar45 + 0x1c) = local_128._4_4_;
    *(int *)(puVar45 + 4) = iStack_120;
    *(undefined4 *)((longlong)puVar45 + 0x24) = uStack_11c;
    (**(code **)(*plVar19 + 0x48))(plVar19,&local_128,puVar49[5],4);
    *(int *)(puVar45 + 0xd) = (int)local_108;
    *(uint *)((longlong)puVar45 + 0x6c) = local_108._4_4_;
    *(uint *)(puVar45 + 0xe) = uStack_100;
    *(uint *)((longlong)puVar45 + 0x74) = CONCAT22(uStack_fa,uStack_fc);
    *(uint *)(puVar45 + 0xb) = uStack_118;
    *(int *)((longlong)puVar45 + 0x5c) = iStack_114;
    *(undefined4 *)(puVar45 + 0xc) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)puVar45 + 100) = uStack_110._4_4_;
    *(undefined4 *)(puVar45 + 9) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar45 + 0x4c) = local_128._4_4_;
    *(int *)(puVar45 + 10) = iStack_120;
    *(undefined4 *)((longlong)puVar45 + 0x54) = uStack_11c;
    (**(code **)(*plVar19 + 0x48))(plVar19,&local_128,puVar49[8],4);
    *(int *)(puVar45 + 0x13) = (int)local_108;
    *(uint *)((longlong)puVar45 + 0x9c) = local_108._4_4_;
    *(uint *)(puVar45 + 0x14) = uStack_100;
    *(uint *)((longlong)puVar45 + 0xa4) = CONCAT22(uStack_fa,uStack_fc);
    *(uint *)(puVar45 + 0x11) = uStack_118;
    *(int *)((longlong)puVar45 + 0x8c) = iStack_114;
    *(undefined4 *)(puVar45 + 0x12) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)puVar45 + 0x94) = uStack_110._4_4_;
    *(undefined4 *)(puVar45 + 0xf) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar45 + 0x7c) = local_128._4_4_;
    *(int *)(puVar45 + 0x10) = iStack_120;
    *(undefined4 *)((longlong)puVar45 + 0x84) = uStack_11c;
    if (puVar49[0xb] != 0) {
      (**(code **)(*plVar19 + 0x48))(plVar19,&local_128,puVar49[0xb],4);
      *(int *)(puVar45 + 0x19) = (int)local_108;
      *(uint *)((longlong)puVar45 + 0xcc) = local_108._4_4_;
      *(uint *)(puVar45 + 0x1a) = uStack_100;
      *(uint *)((longlong)puVar45 + 0xd4) = CONCAT22(uStack_fa,uStack_fc);
      *(uint *)(puVar45 + 0x17) = uStack_118;
      *(int *)((longlong)puVar45 + 0xbc) = iStack_114;
      *(undefined4 *)(puVar45 + 0x18) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)puVar45 + 0xc4) = uStack_110._4_4_;
      *(undefined4 *)(puVar45 + 0x15) = (undefined4)local_128;
      *(undefined4 *)((longlong)puVar45 + 0xac) = local_128._4_4_;
      *(int *)(puVar45 + 0x16) = iStack_120;
      *(undefined4 *)((longlong)puVar45 + 0xb4) = uStack_11c;
    }
    if (*local_258 != 0) {
      (**(code **)(*plVar19 + 0x48))(plVar19,&local_128,*local_258,4);
      *(int *)(puVar45 + 0x1f) = (int)local_108;
      *(uint *)((longlong)puVar45 + 0xfc) = local_108._4_4_;
      *(uint *)(puVar45 + 0x20) = uStack_100;
      *(uint *)((longlong)puVar45 + 0x104) = CONCAT22(uStack_fa,uStack_fc);
      *(uint *)(puVar45 + 0x1d) = uStack_118;
      *(int *)((longlong)puVar45 + 0xec) = iStack_114;
      *(undefined4 *)(puVar45 + 0x1e) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)puVar45 + 0xf4) = uStack_110._4_4_;
      *(undefined4 *)(puVar45 + 0x1b) = (undefined4)local_128;
      *(undefined4 *)((longlong)puVar45 + 0xdc) = local_128._4_4_;
      *(int *)(puVar45 + 0x1c) = iStack_120;
      *(undefined4 *)((longlong)puVar45 + 0xe4) = uStack_11c;
    }
    puVar38 = local_288;
    lVar32 = local_2b0;
    if (puVar49[0x11] != 0) {
      (**(code **)(*plVar19 + 0x48))(plVar19,&local_128,puVar49[0x11],4);
      *(int *)(puVar45 + 0x25) = (int)local_108;
      *(uint *)((longlong)puVar45 + 300) = local_108._4_4_;
      *(uint *)(puVar45 + 0x26) = uStack_100;
      *(uint *)((longlong)puVar45 + 0x134) = CONCAT22(uStack_fa,uStack_fc);
      *(uint *)(puVar45 + 0x23) = uStack_118;
      *(int *)((longlong)puVar45 + 0x11c) = iStack_114;
      *(undefined4 *)(puVar45 + 0x24) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)puVar45 + 0x124) = uStack_110._4_4_;
      *(undefined4 *)(puVar45 + 0x21) = (undefined4)local_128;
      *(undefined4 *)((longlong)puVar45 + 0x10c) = local_128._4_4_;
      *(int *)(puVar45 + 0x22) = iStack_120;
      *(undefined4 *)((longlong)puVar45 + 0x114) = uStack_11c;
    }
    (**(code **)(*plVar19 + 0x48))(plVar19,&local_128,puVar49[0x14],2);
    *(int *)(puVar45 + 0x2b) = (int)local_108;
    *(uint *)((longlong)puVar45 + 0x15c) = local_108._4_4_;
    *(uint *)(puVar45 + 0x2c) = uStack_100;
    *(uint *)((longlong)puVar45 + 0x164) = CONCAT22(uStack_fa,uStack_fc);
    *(uint *)(puVar45 + 0x29) = uStack_118;
    *(int *)((longlong)puVar45 + 0x14c) = iStack_114;
    *(undefined4 *)(puVar45 + 0x2a) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)puVar45 + 0x154) = uStack_110._4_4_;
    *(undefined4 *)(puVar45 + 0x27) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar45 + 0x13c) = local_128._4_4_;
    *(int *)(puVar45 + 0x28) = iStack_120;
    *(undefined4 *)((longlong)puVar45 + 0x144) = uStack_11c;
    puVar45[2] = *(undefined8 *)(lVar32 + 0x1b0);
    puVar46 = puVar48 + 9;
    (**(code **)(**(longlong **)(lVar32 + 0x1a8) + 0x38))
              (*(longlong **)(lVar32 + 0x1a8),puVar46,*(undefined4 *)(puVar38 + 0x612));
    if ((longlong)(int)local_1a8 != 0) {
      puVar17 = local_1b0 + (longlong)(int)local_1a8 * 2;
      puVar37 = local_1b0;
      do {
        local_128 = (undefined8 *)&DAT_00010007;
        iStack_120 = 0;
        uStack_11c = 0;
        uStack_118 = *puVar37;
        iStack_114 = (int)uStack_118 >> 0x1f;
        uStack_110 = (longlong *)0x0;
        local_108 = puVar37 + 1;
        (**(code **)(**(longlong **)(lVar32 + 0x1a8) + 0x10))
                  (*(longlong **)(lVar32 + 0x1a8),puVar46,&local_128);
        puVar37 = puVar37 + 2;
      } while (puVar37 != puVar17);
    }
    (**(code **)(**(longlong **)(lVar32 + 0x1a8) + 0x20))
              (*(longlong **)(lVar32 + 0x1a8),puVar46,puVar45);
    puVar38 = local_288;
    lVar15 = local_2c8;
    if (puVar45 != (undefined8 *)0x0) {
      FUN_1400020a8(puVar45);
    }
  }
  else {
    iStack_120 = (int)param_5;
    uStack_11c = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack_118 = CONCAT31(uStack_118._1_3_,*(char *)(lVar15 + 0x1a0));
    uStack_100 = (uint)local_1e8;
    uStack_fc = (undefined2)((ulonglong)local_1e8 >> 0x20);
    uStack_fa = (undefined2)((ulonglong)local_1e8 >> 0x30);
    local_128 = puVar38;
    uStack_110 = plVar19;
    local_108 = puVar17;
    if ((char)local_240 == '\0') {
      (**(code **)(*local_1e8 + 8))();
    }
    puVar37 = local_1b0;
    uStack_f8 = SUB82(puVar45,0);
    uStack_f6 = (undefined1)((ulonglong)puVar45 >> 0x10);
    cStack_f5 = (char)((ulonglong)puVar45 >> 0x18);
    uStack_f4 = (undefined1)((ulonglong)puVar45 >> 0x20);
    uStack_f3 = (undefined1)((ulonglong)puVar45 >> 0x28);
    uStack_f2 = (undefined2)((ulonglong)puVar45 >> 0x30);
    uStack_f0 = SUB84(puVar48,0);
    uStack_ec = (undefined4)((ulonglong)puVar48 >> 0x20);
    if (puVar48 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar48 + 1) = *(int *)(puVar48 + 1) + 1;
      UNLOCK();
    }
    local_e8 = (void *)0x0;
    lVar32 = (longlong)(int)local_1a8;
    local_e0 = CONCAT44(local_e0._4_4_,local_1a8);
    if (lVar32 == 0) {
      local_e0 = (ulonglong)local_1a8;
    }
    else {
      FUN_149823796(&local_e8,local_1a8);
      memcpy(local_e8,puVar37,lVar32 << 3);
    }
    FUN_1498237f0();
    FUN_140069376(local_2c8);
    puVar2 = local_278;
    uVar30 = (undefined6)((ulonglong)lVar15 >> 0x10);
    uVar29 = (undefined4)CONCAT62(uVar30,0x23);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar29 = (undefined4)CONCAT62(uVar30,0x25);
    }
    puVar46 = (undefined8 *)(*(longlong *)(local_2c8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar45 = puVar46 + 0x41;
    if (*(undefined8 **)(local_2c8 + 0x78) < puVar45) {
      FUN_140023dd8(local_278,0x210);
      puVar46 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar45 = puVar46 + 0x41;
    }
    *local_278 = (ulonglong)puVar45;
    uStack_178 = DAT_14cc2a9d8;
    if (DAT_14cc2a9d8 != 0) {
      LOCK();
      *(int *)(DAT_14cc2a9d8 + 8) = *(int *)(DAT_14cc2a9d8 + 8) + 1;
      UNLOCK();
    }
    uStack_170 = &DAT_14cc2a990;
    local_2f8 = (undefined1 **)((ulonglong)local_2f8 & 0xffffffffffffff00);
    local_180 = puVar17;
    FUN_140068f1a(puVar46,&local_1b1,&local_180,uVar29);
    lVar15 = local_2c8;
    *puVar46 = &PTR_FUN_14bea8e00;
    *(undefined4 *)(puVar46 + 0x37) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar46 + 0x1bc) = local_128._4_4_;
    *(int *)(puVar46 + 0x38) = iStack_120;
    *(undefined4 *)((longlong)puVar46 + 0x1c4) = uStack_11c;
    *(uint *)(puVar46 + 0x39) = uStack_118;
    *(int *)((longlong)puVar46 + 0x1cc) = iStack_114;
    *(undefined4 *)(puVar46 + 0x3a) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)puVar46 + 0x1d4) = uStack_110._4_4_;
    puVar46[0x3b] = local_108;
    puVar46[0x3c] = CONCAT26(uStack_fa,CONCAT24(uStack_fc,uStack_100));
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_fa = 0;
    puVar46[0x3d] =
         CONCAT26(uStack_f2,
                  CONCAT15(uStack_f3,
                           CONCAT14(uStack_f4,CONCAT13(cStack_f5,CONCAT12(uStack_f6,uStack_f8)))));
    puVar46[0x3e] = CONCAT44(uStack_ec,uStack_f0);
    uStack_f0 = 0;
    uStack_ec = 0;
    puVar46[0x3f] = local_e8;
    local_e8 = (void *)0x0;
    *(undefined4 *)(puVar46 + 0x40) = (undefined4)local_e0;
    *(undefined4 *)((longlong)puVar46 + 0x204) = local_e0._4_4_;
    local_e0 = 0;
    iVar22 = *(int *)(local_2c8 + 0x170);
    *(uint *)(local_2c8 + 0x170) = iVar22 + 1U;
    if (*(uint *)(local_2c8 + 0x174) < iVar22 + 1U) {
      FUN_14470e57a(local_2c8 + 0x168,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar15 + 0x168) + (longlong)iVar22 * 8) = puVar46;
    *(int *)((longlong)puVar46 + 0x2c) = *(int *)(lVar15 + 0x170) + -1;
    FUN_140069100(lVar15,puVar46);
    lVar32 = local_2b0;
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar44 = CONCAT44(uStack_ec,uStack_f0);
    if (lVar44 != 0) {
      LOCK();
      puVar17 = (uint *)(lVar44 + 8);
      uVar27 = *puVar17;
      *puVar17 = *puVar17 - 1;
      UNLOCK();
      if ((uVar27 & 0x3fffffff) == 1) {
        puVar17 = (uint *)(lVar44 + 8);
        LOCK();
        uVar27 = *puVar17;
        *puVar17 = *puVar17 | 0x40000000;
        UNLOCK();
        if ((uVar27 >> 0x1e & 1) == 0) {
          bVar26 = *(byte *)(lVar44 + 0xd);
          plVar20 = (longlong *)FUN_14001cc68(0x10,8);
          plVar20[1] = lVar44;
          plVar19 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar26 & 2) == 0) {
            do {
              *plVar20 = (longlong)plVar19;
              LOCK();
              bVar51 = plVar19 != DAT_14ca843c0;
              plVar18 = plVar20;
              if (bVar51) {
                plVar19 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar51);
          }
          else {
            do {
              *plVar20 = (longlong)plVar18;
              LOCK();
              bVar51 = plVar18 != DAT_14ca843c8;
              plVar19 = plVar20;
              if (bVar51) {
                plVar18 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar51);
          }
        }
      }
    }
    plVar19 = (longlong *)CONCAT26(uStack_fa,CONCAT24(uStack_fc,uStack_100));
    if (plVar19 != (longlong *)0x0) {
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  if ((char)local_1fc != '\0') {
    plVar19 = *(longlong **)(puVar38[0x621] + 0x1310);
    puVar38 = (undefined8 *)(puVar38[0x621] + 0x1310);
    if (plVar19 != (longlong *)0x0) {
      *puVar38 = 0;
      (**(code **)(*plVar19 + 0x38))();
    }
    bVar26 = *(byte *)(local_2a8 + 0x24);
    *(byte *)(local_2a8 + 0x24) = bVar26 | 2;
    *(undefined1 *)(local_2a8 + 0x26) = 1;
    iVar22 = *(int *)(lVar15 + 0x1c0);
    *(uint *)(lVar15 + 0x1c0) = iVar22 + 1U;
    if (*(uint *)(lVar15 + 0x1c4) < iVar22 + 1U) {
      FUN_14017e38e((longlong *)(lVar15 + 0x1b8),iVar22);
    }
    lVar32 = local_2b0;
    lVar44 = *(longlong *)(lVar15 + 0x1b8);
    *(ulonglong *)(lVar44 + (longlong)iVar22 * 0x10) = local_2a8;
    *(undefined8 **)(lVar44 + 8 + (longlong)iVar22 * 0x10) = puVar38;
    if ((bVar26 & 2) == 0) {
      pcVar3 = (char *)(lVar15 + 0x4a8);
      LOCK();
      bVar51 = *(char *)(lVar15 + 0x4a8) == '\0';
      if (bVar51) {
        *(char *)(lVar15 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar51) {
        FUN_1447d2058(pcVar3);
      }
      iVar22 = *(int *)(lVar15 + 0x4b8);
      *(uint *)(lVar15 + 0x4b8) = iVar22 + 1U;
      if (*(uint *)(lVar15 + 0x4bc) < iVar22 + 1U) {
        FUN_1447f2dbc((longlong *)(lVar15 + 0x4b0),iVar22);
      }
      lVar15 = *(longlong *)(lVar15 + 0x4b0);
      *(undefined8 *)(lVar15 + (longlong)iVar22 * 0x10) = 2;
      *(ulonglong *)(lVar15 + 8 + (longlong)iVar22 * 0x10) = local_2a8;
      LOCK();
      cVar10 = *pcVar3;
      if (cVar10 == '\x01') {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (cVar10 != '\x01') {
        FUN_14008cdb0(pcVar3);
      }
    }
  }
  FUN_145d5c69e(lVar32,DAT_14c867d10);
  if (local_1b0 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((char)local_240 == '\0') {
    (**(code **)(*local_1e8 + 0x10))();
  }
  if (puVar48 != (undefined8 *)0x0) {
    LOCK();
    puVar17 = (uint *)(puVar48 + 1);
    uVar27 = *puVar17;
    *puVar17 = *puVar17 - 1;
    UNLOCK();
    if ((uVar27 & 0x3fffffff) == 1) {
      puVar17 = (uint *)(puVar48 + 1);
      LOCK();
      uVar27 = *puVar17;
      *puVar17 = *puVar17 | 0x40000000;
      UNLOCK();
      if ((uVar27 >> 0x1e & 1) == 0) {
        bVar26 = *(byte *)((longlong)puVar48 + 0xd);
        plVar20 = (longlong *)FUN_14001cc68(0x10,8);
        plVar20[1] = (longlong)puVar48;
        plVar19 = DAT_14ca843c0;
        plVar18 = DAT_14ca843c8;
        if ((bVar26 & 2) == 0) {
          do {
            *plVar20 = (longlong)plVar19;
            LOCK();
            bVar51 = plVar19 != DAT_14ca843c0;
            plVar18 = plVar20;
            if (bVar51) {
              plVar19 = DAT_14ca843c0;
              plVar18 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar18;
            UNLOCK();
          } while (bVar51);
        }
        else {
          do {
            *plVar20 = (longlong)plVar18;
            LOCK();
            bVar51 = plVar18 != DAT_14ca843c8;
            plVar19 = plVar20;
            if (bVar51) {
              plVar18 = DAT_14ca843c8;
              plVar19 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar19;
            UNLOCK();
          } while (bVar51);
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_1e0;
}



// FUNCTION 1446556ba FUN_1446556ba body=539 status=ok
// SIG undefined FUN_1446556ba(void)

void FUN_1446556ba(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  longlong *local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong *local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong *local_68;
  int local_60;
  longlong local_58 [2];
  longlong *local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)FUN_144a8054c();
  local_88 = L"FSR3";
  local_80 = 4;
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_78);
  (**(code **)(*local_78 + 0x20))(local_78,&local_68);
  local_48 = local_68;
  local_40 = local_60 + -1;
  if (local_60 == 0) {
    local_40 = 0;
  }
  local_38 = L"Source/fidelityfx-sdk/sdk/include/FidelityFX/gpu";
  local_30 = 0x30;
  FUN_140bee87a(local_58,&local_48,2);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)CONCAT44(uStack_6c,local_70);
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
  FUN_140056680(&local_48,L"/ThirdParty/FSR3");
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)FUN_144a8054c();
  local_a8 = L"FSR3";
  local_a0 = 4;
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_98);
  (**(code **)(*local_98 + 0x20))(local_98,&local_78);
  local_48 = local_78;
  local_40 = local_70 + -1;
  if (local_70 == 0) {
    local_40 = 0;
  }
  local_38 = L"Shaders";
  local_30 = 7;
  FUN_140bee87a(&local_68,&local_48,2);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_90 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_140056680(&local_48,L"/Plugin/FSR3");
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14676213e(&local_48,param_1);
  DAT_14cc2963d = 1;
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465591c FUN_14465591c body=300 status=ok
// SIG undefined FUN_14465591c(void)

void FUN_14465591c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar7 = DAT_14cc28a68;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((3 < *(int *)(param_3 + 0x3090)) ||
     ((*(int *)(param_3 + 0x3090) == 3 && (*(char *)(param_1 + 0x50) != '\0')))) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar7 + uVar8 * 4) != 0) {
      FUN_1446f470e(&local_28,L"FFXFSR3TemporalUpscaling",1);
      uVar5 = FUN_144a52528();
      plVar6 = (longlong *)FUN_1401e3324(uVar5,local_28);
      lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
      if (*(longlong *)(param_3 + 0x10) != 0) {
        plVar6 = *(longlong **)(*(longlong *)(param_3 + 0x10) + 0x19f0);
        plVar2 = *(longlong **)(lVar7 + 0x1f0);
        if (plVar2 != plVar6) {
          *(longlong **)(lVar7 + 0x1f0) = plVar6;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x30))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144655a4a FUN_144655a4a body=241 status=ok
// SIG undefined FUN_144655a4a(void)

void FUN_144655a4a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar6 = DAT_14cc28a68;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((3 < *(int *)(param_3 + 0x3090)) ||
     ((*(int *)(param_3 + 0x3090) == 3 && (*(char *)(param_1 + 0x50) != '\0')))) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar2 != DVar3);
    }
    else {
      uVar7 = 1;
    }
    if (*(int *)(lVar6 + uVar7 * 4) != 0) {
      FUN_1446f470e(&local_28,L"FFXFSR3TemporalUpscaling",1);
      uVar4 = FUN_144a52528();
      plVar5 = (longlong *)FUN_1401e3324(uVar4,local_28);
      lVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
      puVar9 = (undefined8 *)(lVar6 + 0x10);
      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *param_4;
        param_4 = param_4 + 1;
        puVar9 = puVar9 + 1;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144655b3c FUN_144655b3c body=303 status=ok
// SIG undefined FUN_144655b3c(void)

void FUN_144655b3c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  lVar7 = DAT_14cc28a68;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar4 = &DAT_14c760db4;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    piVar4 = (int *)(*(longlong *)(param_3 + 0x40) + 8);
  }
  if ((3 < *piVar4) || ((*piVar4 == 3 && (*(char *)(param_1 + 0x50) != '\0')))) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar2 != DVar3);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar7 + uVar8 * 4) != 0) {
      FUN_1446f470e(&local_20,L"FFXFSR3TemporalUpscaling",1);
      uVar5 = FUN_144a52528();
      plVar6 = (longlong *)FUN_1401e3324(uVar5,local_20);
      lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x1c0) = 0;
      plVar6 = *(longlong **)(lVar7 + 0x1f0);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(lVar7 + 0x1f0) = 0;
        (**(code **)(*plVar6 + 0x38))();
      }
      *(undefined8 *)(lVar7 + 0x1f8) = 0;
      *(undefined8 *)(lVar7 + 0x200) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144655d1c FUN_144655d1c body=246 status=ok
// SIG undefined FUN_144655d1c(void)

longlong * FUN_144655d1c(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145de5a5a();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2a090);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144655e14 FUN_144655e14 body=246 status=ok
// SIG undefined FUN_144655e14(void)

longlong * FUN_144655e14(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145da973c();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2a1c0);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144655f0c FUN_144655f0c body=246 status=ok
// SIG undefined FUN_144655f0c(void)

longlong * FUN_144655f0c(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145eedda0();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2a128);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144656004 FUN_144656004 body=246 status=ok
// SIG undefined FUN_144656004(void)

longlong * FUN_144656004(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e0ef42();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14cc2a258);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144656166 FUN_144656166 body=29 status=ok
// SIG undefined FUN_144656166(void)

undefined8 FUN_144656166(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144656198 FUN_144656198 body=93 status=ok
// SIG undefined FUN_144656198(void)

void FUN_144656198(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bea8b70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1446561f6 FUN_1446561f6 body=93 status=ok
// SIG undefined FUN_1446561f6(void)

void FUN_1446561f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffad0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bea8b70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144656254 FUN_144656254 body=126 status=ok
// SIG undefined FUN_144656254(void)

void FUN_144656254(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14adffad0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bea8b70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446562c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446562d2 FUN_1446562d2 body=75 status=ok
// SIG undefined FUN_1446562d2(void)

void FUN_1446562d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_LAB_14bea8be0;
  puVar2[4] = param_4;
  puVar2[5] = uVar1;
  puVar2[6] = 0;
  return;
}



// FUNCTION 144656334 FUN_144656334 body=3653 status=ok
// SIG undefined FUN_144656334(void)

void FUN_144656334(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined2 uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_128 [47];
  byte local_f9;
  longlong local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  char cStack_75;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
  if ((((*(int *)(DAT_14cc28b28 + 4) == 0) ||
       (local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
       0xfd < (byte)(*(char *)(param_1[5] + 0x1a0) - 4U))) ||
      (local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(undefined4)local_a0),
      *(int *)(DAT_14cc28a68 + 4) == 0)) ||
     (lVar9 = (longlong)*(int *)((longlong)param_3 + 0xc),
     local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(undefined4)local_a0), lVar9 < 1))
  goto LAB_144656f72;
  uVar23 = DAT_14c967818 >> 0x20;
  puVar21 = (uint *)(*param_3 + 0x3104);
  lVar10 = 0;
  uVar28 = DAT_14c967818;
  do {
    if (*(char *)((longlong)puVar21 + -0xd2b) != '\0') {
      if (lVar10 == 0) {
        if (*(char *)(*(longlong *)(puVar21 + -0xc3f) + 0xd0) == '\x01') {
          lVar10 = *(longlong *)(*(longlong *)(puVar21 + -0xc3f) + 0x348);
          if (*(char *)(lVar10 + 8) == '\0') {
            lVar10 = 0;
          }
        }
        else {
          lVar10 = 0;
        }
      }
      iVar26 = (int)uVar28;
      uVar28 = uVar28 & 0xffffffff;
      if (iVar26 < (int)puVar21[-1]) {
        uVar28 = (ulonglong)puVar21[-1];
      }
      if ((int)uVar23 < (int)*puVar21) {
        uVar23 = (ulonglong)*puVar21;
      }
      local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
      if ((char)puVar21[-0x347] != '\0') goto LAB_144656f72;
    }
    puVar21 = (uint *)((longlong)puVar21 + (longlong)(int)param_3[1]);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  local_d0 = FUN_1472e1976(param_4,param_2);
  lVar24 = DAT_14ca97170;
  local_e0 = *(longlong *)(lVar10 + 0x1b0);
  local_d8 = *(undefined8 *)(lVar10 + 0x1b8);
  local_e8 = *(longlong *)(lVar10 + 0x230);
  local_f0 = *(undefined8 **)(lVar10 + 0x238);
  local_b0 = *(undefined1 *)(lVar10 + 0x248);
  local_b8 = *(undefined8 *)(lVar10 + 0x240);
  local_f9 = *(byte *)(lVar10 + 0x249);
  local_bc = *(undefined2 *)(lVar10 + 0x24e);
  local_c0 = *(undefined4 *)(lVar10 + 0x24a);
  cVar2 = *(char *)(lVar10 + 0x3c);
  uVar5 = *(uint *)(lVar10 + 0x34);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar26 = *(int *)(lVar9 + 0xc60);
  if (((iVar26 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar26 == 2)) {
    uVar19 = 0;
  }
  else if (iVar26 == 1) {
    uVar6 = FUN_140ad26c0();
    local_f8 = CONCAT44(local_f8._4_4_,uVar6);
    DVar7 = GetCurrentThreadId();
    uVar19 = (ulonglong)((DWORD)local_f8 != DVar7);
  }
  else {
    uVar19 = 1;
  }
  iVar26 = *(int *)(lVar24 + uVar19 * 4);
  uVar20 = (uint)(iVar26 < 1) << 2 | 0xfffffff8;
  uVar27 = (int)uVar28 + (uint)(0 < iVar26) * 4 + 3 & uVar20;
  uVar20 = (int)uVar23 + 3 + (uint)(0 < iVar26) * 4 & uVar20;
  if ((*(longlong **)(param_1[5] + 0x1c8) != (longlong *)0x0) &&
     (((lVar10 = (**(code **)(**(longlong **)(param_1[5] + 0x1c8) + 8))(),
       *(uint *)(lVar10 + 0x24) != uVar27 ||
       (lVar10 = (**(code **)(**(longlong **)(param_1[5] + 0x1c8) + 8))(),
       *(uint *)(lVar10 + 0x28) != uVar20)) ||
      ((lVar10 = (**(code **)(**(longlong **)(param_1[5] + 0x1c8) + 8))(),
       *(char *)(lVar10 + 0x33) != cVar2 ||
       (lVar10 = (**(code **)(**(longlong **)(param_1[5] + 0x1c8) + 8))(),
       uVar5 != *(byte *)(lVar10 + 0x31))))))) {
    lVar10 = *(longlong *)(param_1[5] + 0x1c8);
    if (lVar10 != 0) {
      *(undefined8 *)(param_1[5] + 0x1c8) = 0;
      LOCK();
      puVar21 = (uint *)(lVar10 + 8);
      uVar1 = *puVar21;
      *puVar21 = *puVar21 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar21 = (uint *)(lVar10 + 8);
        LOCK();
        uVar1 = *puVar21;
        *puVar21 = *puVar21 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          local_f8 = lVar9;
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar10;
          plVar12 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          lVar9 = local_f8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar29 = plVar12 != DAT_14ca843c0;
              plVar17 = plVar11;
              if (bVar29) {
                plVar12 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar29);
          }
          else {
            do {
              *plVar11 = (longlong)plVar17;
              LOCK();
              bVar29 = plVar17 != DAT_14ca843c8;
              plVar12 = plVar11;
              if (bVar29) {
                plVar17 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar29);
          }
        }
      }
    }
    plVar12 = *(longlong **)(param_1[5] + 0x1d0);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1[5] + 0x1d0) = 0;
      (**(code **)(*plVar12 + 0x38))();
    }
  }
  lVar10 = local_e0;
  if (*(longlong *)(param_1[5] + 0x1c8) == 0) {
    uStack_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_a0._4_4_ = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_76 = 0;
    local_a8 = (longlong *)&DAT_00000009;
    uStack_74 = 0xff00;
    uStack_7c = 0x10001;
    uStack_78 = 1;
    uStack_77 = (undefined1)uVar5;
    local_a0._0_4_ = 1;
    local_88 = 0;
    local_68 = L"FFXFSR3SceneColorPreAlpha";
    local_60 = 0;
    uStack_70 = 0x1000;
    uStack_84 = uVar27;
    uStack_80 = uVar20;
    cStack_75 = cVar2;
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_c8,&DAT_14ca85100,&local_a8);
    plVar12 = (longlong *)(param_1[5] + 0x1c8);
    if (plVar12 == &local_c8) {
LAB_1446566ea:
      lVar24 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        puVar21 = (uint *)(local_c8 + 8);
        uVar5 = *puVar21;
        *puVar21 = *puVar21 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          puVar21 = (uint *)(local_c8 + 8);
          LOCK();
          uVar5 = *puVar21;
          *puVar21 = *puVar21 | 0x40000000;
          UNLOCK();
          if ((uVar5 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c8 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar24;
            plVar12 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar29 = plVar12 != DAT_14ca843c0;
                plVar17 = plVar11;
                if (bVar29) {
                  plVar12 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar11 = (longlong)plVar17;
                LOCK();
                bVar29 = plVar17 != DAT_14ca843c8;
                plVar12 = plVar11;
                if (bVar29) {
                  plVar17 = DAT_14ca843c8;
                  plVar12 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar12;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
    }
    else {
      lVar24 = *plVar12;
      *plVar12 = local_c8;
      local_c8 = 0;
      if (lVar24 != 0) {
        LOCK();
        puVar21 = (uint *)(lVar24 + 8);
        uVar5 = *puVar21;
        *puVar21 = *puVar21 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          puVar21 = (uint *)(lVar24 + 8);
          LOCK();
          uVar5 = *puVar21;
          *puVar21 = *puVar21 | 0x40000000;
          UNLOCK();
          if ((uVar5 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar24 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar24;
            plVar12 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar29 = plVar12 != DAT_14ca843c0;
                plVar17 = plVar11;
                if (bVar29) {
                  plVar12 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar11 = (longlong)plVar17;
                LOCK();
                bVar29 = plVar17 != DAT_14ca843c8;
                plVar12 = plVar11;
                if (bVar29) {
                  plVar17 = DAT_14ca843c8;
                  plVar12 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar12;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
        goto LAB_1446566ea;
      }
    }
    FUN_1447ec05f(&local_a8,*(undefined8 *)(param_1[5] + 0x1c8),L"FFXFSR3SceneColorPreAlpha");
    pplVar13 = (longlong **)(param_1[5] + 0x1d0);
    if (pplVar13 != &local_a8) {
      plVar12 = *pplVar13;
      *pplVar13 = local_a8;
      local_a8 = (longlong *)0x0;
      if (plVar12 == (longlong *)0x0) goto LAB_1446567d1;
      (**(code **)(*plVar12 + 0x38))();
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
LAB_1446567d1:
  plVar12 = (longlong *)(param_2 + 0x70);
  puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar22 = puVar25 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar22) {
    FUN_140023dd8(plVar12,0x50);
    puVar25 = (undefined8 *)(*plVar12 + 0xfU & 0xfffffffffffffff0);
    puVar22 = puVar25 + 8;
  }
  lVar24 = local_e8;
  *(undefined8 **)(param_2 + 0x70) = puVar22;
  *puVar25 = &PTR_FUN_14bea8cf8;
  puVar25[2] = 0;
  puVar25[3] = 0;
  *(undefined4 *)(puVar25 + 4) = 0;
  puVar25[5] = 0;
  puVar25[6] = 0;
  *(undefined4 *)(puVar25 + 7) = 0;
  iVar26 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar26 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar26 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar26);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar26 * 8) = puVar25;
  uVar16 = 0;
  lVar14 = FUN_14473c272(param_2,param_1[5] + 0x1d0,0);
  if (lVar10 != 0) {
    uVar16 = *(undefined8 *)(lVar10 + 0xac);
  }
  puVar25[2] = lVar10;
  puVar25[3] = uVar16;
  *(undefined4 *)(puVar25 + 4) = 0x80;
  if (lVar14 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar14 + 0xac);
  }
  puVar25[5] = lVar14;
  puVar25[6] = uVar16;
  *(undefined4 *)(puVar25 + 7) = 0x2000;
  lVar14 = DAT_14cc28d68;
  if ((lVar24 == 0 || (local_f9 & 1) != 0) || ((*(byte *)(lVar24 + 0x24) & 4) == 0)) {
LAB_144656999:
    lVar14 = DAT_14cc28d68;
    if ((((local_f0 != (undefined8 *)0x0 & local_f9) == 1) && (local_f0[7] != 0)) &&
       ((*(byte *)(local_f0[7] + 0x24) & 4) != 0)) {
      iVar26 = *(int *)(lVar9 + 0xc60);
      if (iVar26 == 0x40000002) {
        uVar28 = 0;
      }
      else {
        bVar29 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar26 != 2)) {
          if (iVar26 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar29 = DVar7 == DVar8;
          }
          else {
            bVar29 = false;
          }
        }
        uVar28 = (ulonglong)(bVar29 ^ 1);
      }
      puVar22 = local_f0;
      if (*(int *)(lVar14 + uVar28 * 4) != 0) goto LAB_144656a36;
    }
LAB_144656d6a:
    puVar22 = local_f0;
    lVar9 = *(longlong *)(param_1[5] + 0x1d8);
    if (lVar9 != 0) {
      *(undefined8 *)(param_1[5] + 0x1d8) = 0;
      LOCK();
      puVar21 = (uint *)(lVar9 + 8);
      uVar5 = *puVar21;
      *puVar21 = *puVar21 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar21 = (uint *)(lVar9 + 8);
        LOCK();
        uVar5 = *puVar21;
        *puVar21 = *puVar21 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar9 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar9;
          plVar12 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          lVar24 = local_e8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar29 = plVar12 != DAT_14ca843c0;
              plVar17 = plVar11;
              if (bVar29) {
                plVar12 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar29);
          }
          else {
            do {
              *plVar11 = (longlong)plVar17;
              LOCK();
              bVar29 = plVar17 != DAT_14ca843c8;
              plVar12 = plVar11;
              if (bVar29) {
                plVar17 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar29);
          }
        }
      }
    }
    plVar12 = *(longlong **)(param_1[5] + 0x1e0);
    if (plVar12 != (longlong *)0x0) {
      *(undefined8 *)(param_1[5] + 0x1e0) = 0;
      (**(code **)(*plVar12 + 0x38))();
    }
  }
  else {
    iVar26 = *(int *)(lVar9 + 0xc60);
    if (iVar26 == 0x40000002) {
      uVar28 = 0;
    }
    else {
      bVar29 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar26 != 2)) {
        if (iVar26 == 1) {
          uVar6 = FUN_140ad26c0();
          local_f8 = CONCAT44(local_f8._4_4_,uVar6);
          DVar7 = GetCurrentThreadId();
          bVar29 = (DWORD)local_f8 == DVar7;
        }
        else {
          bVar29 = false;
        }
      }
      uVar28 = (ulonglong)(bVar29 ^ 1);
    }
    if (*(int *)(lVar14 + uVar28 * 4) == 0) goto LAB_144656999;
    if ((*(char *)(lVar24 + 0x92) == '\x04') || (*(char *)(lVar24 + 0x92) == '\x01')) {
      uVar18 = *(undefined2 *)(lVar24 + 0x8e);
    }
    else {
      uVar18 = 0;
    }
    uVar4 = *(undefined1 *)(lVar24 + 0x90);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar22 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
      FUN_140023dd8(plVar12,0x48);
      puVar22 = (undefined8 *)(*plVar12 + 7U & 0xfffffffffffffff8);
      puVar15 = puVar22 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar15;
    puVar22[1] = *(undefined8 *)(lVar24 + 8);
    puVar22[2] = 0;
    *(undefined1 *)(puVar22 + 3) = 1;
    *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
    *puVar22 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar22 + 5) = 0x2c;
    *(undefined1 *)((longlong)puVar22 + 0x2a) = uVar4;
    *(undefined1 *)((longlong)puVar22 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x2e) = uVar18;
    *(undefined1 *)(puVar22 + 6) = 0;
    *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
    puVar22[7] = lVar24;
    iVar26 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar26 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar26 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar26);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar26 * 8) = puVar22;
    *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    if (puVar22 == (undefined8 *)0x0) goto LAB_144656d6a;
LAB_144656a36:
    lVar9 = puVar22[7];
    cVar2 = *(char *)(lVar9 + 0x93);
    local_f8 = CONCAT71(local_f8._1_7_,*(undefined1 *)(lVar9 + 0x91));
    uVar28 = *(ulonglong *)(lVar9 + 0x60);
    if (*(longlong **)(param_1[5] + 0x1d8) != (longlong *)0x0) {
      lVar9 = (**(code **)(**(longlong **)(param_1[5] + 0x1d8) + 8))();
      if (((*(int *)(lVar9 + 0x24) == *(int *)(puVar22[7] + 0x84)) &&
          (lVar9 = (**(code **)(**(longlong **)(param_1[5] + 0x1d8) + 8))(),
          *(int *)(lVar9 + 0x28) == *(int *)(puVar22[7] + 0x88))) &&
         (lVar9 = (**(code **)(**(longlong **)(param_1[5] + 0x1d8) + 8))(),
         *(char *)(lVar9 + 0x33) == cVar2)) {
        lVar9 = (**(code **)(**(longlong **)(param_1[5] + 0x1d8) + 8))();
        if (*(char *)(lVar9 + 0x31) == (char)local_f8) goto LAB_144656b67;
      }
      lVar9 = *(longlong *)(param_1[5] + 0x1d8);
      if (lVar9 != 0) {
        *(undefined8 *)(param_1[5] + 0x1d8) = 0;
        LOCK();
        puVar21 = (uint *)(lVar9 + 8);
        uVar5 = *puVar21;
        *puVar21 = *puVar21 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          puVar21 = (uint *)(lVar9 + 8);
          LOCK();
          uVar5 = *puVar21;
          *puVar21 = *puVar21 | 0x40000000;
          UNLOCK();
          if ((uVar5 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar9;
            plVar12 = DAT_14ca843c0;
            plVar17 = DAT_14ca843c8;
            lVar10 = local_e0;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar29 = plVar12 != DAT_14ca843c0;
                plVar17 = plVar11;
                if (bVar29) {
                  plVar12 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar17;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar11 = (longlong)plVar17;
                LOCK();
                bVar29 = plVar17 != DAT_14ca843c8;
                plVar12 = plVar11;
                if (bVar29) {
                  plVar17 = DAT_14ca843c8;
                  plVar12 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar12;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
      }
      plVar12 = *(longlong **)(param_1[5] + 0x1e0);
      if (plVar12 != (longlong *)0x0) {
        *(undefined8 *)(param_1[5] + 0x1e0) = 0;
        (**(code **)(*plVar12 + 0x38))();
      }
    }
LAB_144656b67:
    lVar9 = param_1[5];
    if (*(longlong *)(lVar9 + 0x1d8) == 0) {
      uStack_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_a0._4_4_ = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_a8 = (longlong *)(uVar28 | 8);
      uStack_76 = 0;
      uStack_74 = 0xff00;
      uStack_84 = (uint)*(undefined8 *)(puVar22[7] + 0x84);
      uStack_80 = (uint)((ulonglong)*(undefined8 *)(puVar22[7] + 0x84) >> 0x20);
      uStack_7c = 0x10001;
      uStack_78 = 1;
      uStack_77 = (char)local_f8;
      local_a0._0_4_ = 1;
      local_88 = 0;
      local_68 = L"FFXFSR3CustomStencil";
      local_60 = 0;
      cStack_75 = cVar2;
      uStack_70 = FUN_1431edf91(local_a8,0);
      (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_c8,&DAT_14ca85100,&local_a8);
      plVar12 = (longlong *)(param_1[5] + 0x1d8);
      if (plVar12 == &local_c8) {
LAB_144656c41:
        lVar9 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          puVar21 = (uint *)(local_c8 + 8);
          uVar5 = *puVar21;
          *puVar21 = *puVar21 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            puVar21 = (uint *)(local_c8 + 8);
            LOCK();
            uVar5 = *puVar21;
            *puVar21 = *puVar21 | 0x40000000;
            UNLOCK();
            if ((uVar5 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(local_c8 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = lVar9;
              plVar12 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar12;
                  LOCK();
                  bVar29 = plVar12 != DAT_14ca843c0;
                  plVar17 = plVar11;
                  if (bVar29) {
                    plVar12 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar29);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar17;
                  LOCK();
                  bVar29 = plVar17 != DAT_14ca843c8;
                  plVar12 = plVar11;
                  if (bVar29) {
                    plVar17 = DAT_14ca843c8;
                    plVar12 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar12;
                  UNLOCK();
                } while (bVar29);
              }
            }
          }
        }
      }
      else {
        lVar9 = *plVar12;
        *plVar12 = local_c8;
        local_c8 = 0;
        if (lVar9 != 0) {
          LOCK();
          puVar21 = (uint *)(lVar9 + 8);
          uVar5 = *puVar21;
          *puVar21 = *puVar21 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            puVar21 = (uint *)(lVar9 + 8);
            LOCK();
            uVar5 = *puVar21;
            *puVar21 = *puVar21 | 0x40000000;
            UNLOCK();
            if ((uVar5 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar9 + 0xd);
              plVar11 = (longlong *)FUN_14001cc68(0x10,8);
              plVar11[1] = lVar9;
              plVar12 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar11 = (longlong)plVar12;
                  LOCK();
                  bVar29 = plVar12 != DAT_14ca843c0;
                  plVar17 = plVar11;
                  if (bVar29) {
                    plVar12 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar29);
              }
              else {
                do {
                  *plVar11 = (longlong)plVar17;
                  LOCK();
                  bVar29 = plVar17 != DAT_14ca843c8;
                  plVar12 = plVar11;
                  if (bVar29) {
                    plVar17 = DAT_14ca843c8;
                    plVar12 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar12;
                  UNLOCK();
                } while (bVar29);
              }
            }
          }
          goto LAB_144656c41;
        }
      }
      FUN_1447ec05f(&local_a8,*(undefined8 *)(param_1[5] + 0x1d8),L"FFXFSR3CustomStencil");
      pplVar13 = (longlong **)(param_1[5] + 0x1e0);
      if (pplVar13 == &local_a8) {
LAB_144656e7a:
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x38))();
        }
      }
      else {
        plVar12 = *pplVar13;
        *pplVar13 = local_a8;
        local_a8 = (longlong *)0x0;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x38))();
          goto LAB_144656e7a;
        }
      }
      lVar9 = param_1[5];
    }
    uVar16 = FUN_14473c272(param_2,lVar9 + 0x1e0,0);
    local_a0._0_4_ = DAT_14c9a52a0;
    local_a8 = DAT_14c9a5298;
    local_a0._4_4_ = SUB84(DAT_14c9a5298,0);
    uStack_98 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_94 = DAT_14c9a52a0;
    local_88 = DAT_14c9a52a0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 1;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    cStack_75 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 1;
    uStack_90 = local_a0._4_4_;
    uStack_8c = uStack_98;
    FUN_1400e8d41(param_2,puVar22[7],uVar16);
    lVar24 = local_e8;
    puVar22 = local_f0;
  }
  uStack_98 = (undefined4)local_d0;
  uStack_94 = (undefined4)((ulonglong)local_d0 >> 0x20);
  uStack_90 = (undefined4)lVar10;
  uStack_8c = (uint)((ulonglong)lVar10 >> 0x20);
  local_88 = (undefined4)local_d8;
  uStack_84 = (uint)((ulonglong)local_d8 >> 0x20);
  uStack_80 = (uint)lVar24;
  uStack_7c = (undefined4)((ulonglong)lVar24 >> 0x20);
  uStack_78 = SUB81(puVar22,0);
  uStack_77 = (undefined1)((ulonglong)puVar22 >> 8);
  uStack_76 = (undefined1)((ulonglong)puVar22 >> 0x10);
  cStack_75 = (char)((ulonglong)puVar22 >> 0x18);
  uStack_74 = (undefined2)((ulonglong)puVar22 >> 0x20);
  uStack_72 = (undefined2)((ulonglong)puVar22 >> 0x30);
  uStack_70 = (undefined4)local_b8;
  uStack_6c = (undefined4)((ulonglong)local_b8 >> 0x20);
  local_68 = (wchar_t *)CONCAT26(local_bc,CONCAT42(local_c0,CONCAT11(local_f9,local_b0)));
  local_a8 = param_1;
  local_a0 = puVar25 + 2;
  FUN_149821f18();
  FUN_149821daa(param_2,&local_c8,puVar25 + 2,&local_a8);
LAB_144656f72:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144657182 FUN_144657182 body=469 status=ok
// SIG undefined FUN_144657182(void)

void FUN_144657182(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar7 = local_b0;
    }
    FUN_1446fe144(puVar8 + 2,local_a8,0);
    puVar6 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 2;
    }
    memcpy(puVar6,puVar7,(longlong)local_a8);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar7 = local_a0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_58,0);
    puVar6 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 5;
    }
    memcpy(puVar6,puVar7,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  lVar2 = *(longlong *)(lVar1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x1d4);
  uVar4 = *(undefined4 *)(param_1 + 0x1d8);
  uVar5 = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(lVar2 + 0x1f8) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(lVar2 + 0x1fc) = uVar3;
  *(undefined4 *)(lVar2 + 0x200) = uVar4;
  *(undefined4 *)(lVar2 + 0x204) = uVar5;
  FUN_14981bbae(*(undefined8 *)(lVar1 + 0x28),param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144657364 FUN_144657364 body=481 status=ok
// SIG undefined FUN_144657364(void)

void FUN_144657364(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1498229be(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144657546 FUN_144657546 body=232 status=ok
// SIG undefined FUN_144657546(void)

void FUN_144657546(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14465762e FUN_14465762e body=81 status=ok
// SIG undefined FUN_14465762e(void)

void FUN_14465762e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149822a61(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144657680 FUN_144657680 body=481 status=ok
// SIG undefined FUN_144657680(void)

void FUN_144657680(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_149822d9e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144657862 FUN_144657862 body=232 status=ok
// SIG undefined FUN_144657862(void)

void FUN_144657862(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14465794a FUN_14465794a body=81 status=ok
// SIG undefined FUN_14465794a(void)

void FUN_14465794a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149822e41(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14465799c FUN_14465799c body=481 status=ok
// SIG undefined FUN_14465799c(void)

void FUN_14465799c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14982317e(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144657b7e FUN_144657b7e body=232 status=ok
// SIG undefined FUN_144657b7e(void)

void FUN_144657b7e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144657c66 FUN_144657c66 body=81 status=ok
// SIG undefined FUN_144657c66(void)

void FUN_144657c66(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149823221(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144657cb8 FUN_144657cb8 body=481 status=ok
// SIG undefined FUN_144657cb8(void)

void FUN_144657cb8(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14982357c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144657e9a FUN_144657e9a body=232 status=ok
// SIG undefined FUN_144657e9a(void)

void FUN_144657e9a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 144657f82 FUN_144657f82 body=81 status=ok
// SIG undefined FUN_144657f82(void)

void FUN_144657f82(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14982361f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144657fd4 FUN_144657fd4 body=209 status=ok
// SIG undefined FUN_144657fd4(void)

undefined8 * FUN_144657fd4(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14bea8e00;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x3e];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3c] + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446580a6 FUN_1446580a6 body=1810 status=ok
// SIG undefined FUN_1446580a6(void)

void FUN_1446580a6(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  size_t _Size;
  bool bVar15;
  undefined1 auStack_418 [32];
  undefined1 local_3f8 [24];
  undefined1 local_3e0 [48];
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  int local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  int local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  int local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  int local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined1 *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  int *local_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  int local_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 *local_1c8;
  int local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_68;
  undefined8 local_60;
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_144b1c6fa(param_1 + 0x10,&local_220);
  puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar13 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar13;
  param_2[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_FUN_14a1fb978;
  puVar13[3] = 0;
  _Size = (size_t)local_210;
  *(int *)(puVar13 + 4) = local_210;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x24) = 8;
  }
  else {
    puVar8 = &local_220;
    if ((undefined8 *)CONCAT44(uStack_214,uStack_218) != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)CONCAT44(uStack_214,uStack_218);
    }
    FUN_1446fe144(puVar13 + 2,local_210,0);
    puVar12 = (undefined8 *)puVar13[3];
    if ((undefined8 *)puVar13[3] == (undefined8 *)0x0) {
      puVar12 = puVar13 + 2;
    }
    memcpy(puVar12,puVar8,_Size);
  }
  puVar13[0xd] = 0;
  *(int *)(puVar13 + 0xe) = local_1c0;
  if ((longlong)local_1c0 == 0) {
    *(undefined4 *)((longlong)puVar13 + 0x74) = 8;
  }
  else {
    puVar8 = local_1c8;
    if (local_1c8 == (undefined8 *)0x0) {
      puVar8 = &uStack_208;
    }
    FUN_1446fe1b8(puVar13 + 5,local_1c0,0);
    puVar12 = (undefined8 *)puVar13[0xd];
    if ((undefined8 *)puVar13[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar13 + 5;
    }
    memcpy(puVar12,puVar8,(longlong)local_1c0 << 3);
  }
  *(undefined4 *)(puVar13 + 0xf) = local_1b8;
  *(undefined4 *)((longlong)puVar13 + 0x7c) = uStack_1b4;
  *(undefined4 *)(puVar13 + 0x10) = uStack_1b0;
  *(undefined4 *)((longlong)puVar13 + 0x84) = uStack_1ac;
  if (local_1c8 != (undefined8 *)0x0) {
    FUN_1400020a8(local_1c8);
  }
  if (CONCAT44(uStack_214,uStack_218) != 0) {
    FUN_1400020a8();
  }
  pvVar5 = *(void **)(param_1 + 0x1e8);
  memcpy(local_3f8,pvVar5,0x1b0);
  if (pvVar5 != (void *)0x0) {
    FUN_1400020a8(pvVar5);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
            (*(longlong **)(param_1 + 0x1d0),local_3e0,
             *(undefined8 *)(**(longlong **)(param_1 + 0x1d8) + 0x10),4);
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
            (*(longlong **)(param_1 + 0x1d0),&local_220,
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x18) + 0x10),4);
  local_390 = local_200;
  uStack_38c = uStack_1fc;
  uStack_388 = uStack_1f8;
  uStack_384 = uStack_1f4;
  local_3a0 = local_210;
  uStack_39c = uStack_20c;
  uStack_398 = (undefined4)uStack_208;
  uStack_394 = uStack_208._4_4_;
  local_3b0 = (undefined4)local_220;
  uStack_3ac = local_220._4_4_;
  uStack_3a8 = uStack_218;
  uStack_3a4 = uStack_214;
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
            (*(longlong **)(param_1 + 0x1d0),&local_220,
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x30) + 0x10),4);
  local_360 = local_200;
  uStack_35c = uStack_1fc;
  uStack_358 = uStack_1f8;
  uStack_354 = uStack_1f4;
  local_370 = local_210;
  uStack_36c = uStack_20c;
  uStack_368 = (undefined4)uStack_208;
  uStack_364 = uStack_208._4_4_;
  local_380 = (undefined4)local_220;
  uStack_37c = local_220._4_4_;
  uStack_378 = uStack_218;
  uStack_374 = uStack_214;
  lVar7 = *(longlong *)(param_1 + 0x1d8);
  if (*(longlong *)(lVar7 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
              (*(longlong **)(param_1 + 0x1d0),&local_220,
               *(undefined8 *)(*(longlong *)(lVar7 + 0x48) + 0x10),4);
    local_330 = local_200;
    uStack_32c = uStack_1fc;
    uStack_328 = uStack_1f8;
    uStack_324 = uStack_1f4;
    local_340 = local_210;
    uStack_33c = uStack_20c;
    uStack_338 = (undefined4)uStack_208;
    uStack_334 = uStack_208._4_4_;
    local_350 = (undefined4)local_220;
    uStack_34c = local_220._4_4_;
    uStack_348 = uStack_218;
    uStack_344 = uStack_214;
    lVar7 = *(longlong *)(param_1 + 0x1d8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
            (*(longlong **)(param_1 + 0x1d0),&local_220,
             *(undefined8 *)(*(longlong *)(lVar7 + 0x90) + 0x10),2);
  local_2a0 = local_200;
  uStack_29c = uStack_1fc;
  uStack_298 = uStack_1f8;
  uStack_294 = uStack_1f4;
  local_2b0 = local_210;
  uStack_2ac = uStack_20c;
  uStack_2a8 = (undefined4)uStack_208;
  uStack_2a4 = uStack_208._4_4_;
  local_2c0 = (undefined4)local_220;
  uStack_2bc = local_220._4_4_;
  uStack_2b8 = uStack_218;
  uStack_2b4 = uStack_214;
  lVar7 = *(longlong *)(param_1 + 0x1d8);
  if (*(longlong *)(lVar7 + 0x60) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
              (*(longlong **)(param_1 + 0x1d0),&local_220,
               *(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 0x10),4);
    local_300 = local_200;
    uStack_2fc = uStack_1fc;
    uStack_2f8 = uStack_1f8;
    uStack_2f4 = uStack_1f4;
    local_310 = local_210;
    uStack_30c = uStack_20c;
    uStack_308 = (undefined4)uStack_208;
    uStack_304 = uStack_208._4_4_;
    local_320 = (undefined4)local_220;
    uStack_31c = local_220._4_4_;
    uStack_318 = uStack_218;
    uStack_314 = uStack_214;
    lVar7 = *(longlong *)(param_1 + 0x1d8);
  }
  if (*(longlong *)(lVar7 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x50))
              (*(longlong **)(param_1 + 0x1d0),&local_220,
               *(undefined8 *)(*(longlong *)(lVar7 + 0x78) + 0x10),4);
    local_2d0 = local_200;
    uStack_2cc = uStack_1fc;
    uStack_2c8 = uStack_1f8;
    uStack_2c4 = uStack_1f4;
    local_2e0 = local_210;
    uStack_2dc = uStack_20c;
    uStack_2d8 = (undefined4)uStack_208;
    uStack_2d4 = uStack_208._4_4_;
    local_2f0 = (undefined4)local_220;
    uStack_2ec = local_220._4_4_;
    uStack_2e8 = uStack_218;
    uStack_2e4 = uStack_214;
    lVar7 = *(longlong *)(param_1 + 0x1d8);
  }
  plVar11 = *(longlong **)(param_1 + 0x1d0);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x70))
              (plVar11,param_2,*(undefined8 *)(*(longlong *)(lVar7 + 0x90) + 0x10),0xc00);
    lVar7 = *(longlong *)(param_1 + 0x1d8);
  }
  uVar6 = *(undefined8 *)(*(longlong *)(lVar7 + 0x90) + 0x10);
  local_220 = *(longlong *)(param_1 + 0x1f0);
  if (local_220 != 0) {
    LOCK();
    *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
    UNLOCK();
  }
  memcpy(&uStack_218,local_3f8,0x1b0);
  local_68 = *(longlong **)(param_1 + 0x1d0);
  local_58 = (int *)0x0;
  uVar4 = *(uint *)(param_1 + 0x200);
  pvVar5 = *(void **)(param_1 + 0x1f8);
  local_50 = CONCAT44(local_50._4_4_,uVar4);
  local_60 = uVar6;
  if ((longlong)(int)uVar4 == 0) {
    local_50 = (ulonglong)uVar4;
  }
  else {
    FUN_149823796(&local_58,uVar4);
    memcpy(local_58,pvVar5,(longlong)(int)uVar4 << 3);
  }
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    if ((longlong)(int)local_50 != 0) {
      piVar2 = local_58 + (longlong)(int)local_50 * 2;
      piVar14 = local_58;
      do {
        local_248 = &DAT_00010007;
        local_240 = 0;
        local_238 = (longlong)*piVar14;
        local_230 = 0;
        local_228 = piVar14 + 1;
        (**(code **)(*local_68 + 0x10))(local_68,local_220 + 0x48,&local_248);
        piVar14 = piVar14 + 2;
      } while (piVar14 != piVar2);
    }
    uStack_208 = (**(code **)(*local_68 + 0x58))(local_68,param_2,local_60);
    (**(code **)(*local_68 + 0x20))(local_68,local_220 + 0x48,&uStack_218);
    if (local_58 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 0x3d;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x1f0);
      puVar13 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar13 + 0x3d;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar13;
    param_2[6] = (ulonglong)(puVar13 + 1);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14bea8e18;
    puVar13[2] = local_220;
    local_220 = 0;
    memcpy(puVar13 + 3,&uStack_218,0x1c0);
    puVar13[0x3b] = local_58;
    local_58 = (int *)0x0;
    *(int *)(puVar13 + 0x3c) = (int)local_50;
    *(undefined4 *)((longlong)puVar13 + 0x1e4) = local_50._4_4_;
    local_50 = 0;
  }
  lVar7 = local_220;
  if (local_220 != 0) {
    LOCK();
    puVar1 = (uint *)(local_220 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_220 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_220 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar7;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar11;
            LOCK();
            bVar15 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar15) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar15);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar15 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar9;
            if (bVar15) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar15);
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0xb0))
            (*(longlong **)(param_1 + 0x1d0),uVar6,param_2);
  if ((local_48 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446587ba FUN_1446587ba body=353 status=ok
// SIG undefined FUN_1446587ba(void)

void FUN_1446587ba(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
    piVar10 = *(int **)(param_1 + 0x1d8);
    piVar2 = piVar10 + (longlong)*(int *)(param_1 + 0x1e0) * 2;
    do {
      local_60 = &DAT_00010007;
      local_58 = 0;
      local_50 = (longlong)*piVar10;
      local_48 = 0;
      local_40 = piVar10 + 1;
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x10))
                (*(longlong **)(param_1 + 0x1c8),*(longlong *)(param_1 + 0x10) + 0x48,&local_60);
      piVar10 = piVar10 + 2;
    } while (piVar10 != piVar2);
  }
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x58))
                    (*(longlong **)(param_1 + 0x1c8),param_2,*(undefined8 *)(param_1 + 0x1d0));
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x20))
            (*(longlong **)(param_1 + 0x1c8),*(longlong *)(param_1 + 0x10) + 0x48,param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14465892c FUN_14465892c body=438 status=ok
// SIG undefined FUN_14465892c(void)

void FUN_14465892c(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14982421e(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_1498242f2(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144658ae4 FUN_144658ae4 body=492 status=ok
// SIG undefined FUN_144658ae4(void)

void FUN_144658ae4(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_149824498(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144658cd1 FUN_144658cd1 body=229 status=ok
// SIG undefined FUN_144658cd1(void)

void FUN_144658cd1(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}



// FUNCTION 144658db6 FUN_144658db6 body=81 status=ok
// SIG undefined FUN_144658db6(void)

void FUN_144658db6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149824530(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144658e08 FUN_144658e08 body=438 status=ok
// SIG undefined FUN_144658e08(void)

void FUN_144658e08(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1498247fe(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_1498248b4(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144658fc0 FUN_144658fc0 body=492 status=ok
// SIG undefined FUN_144658fc0(void)

void FUN_144658fc0(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_149824a5a(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446591ad FUN_1446591ad body=229 status=ok
// SIG undefined FUN_1446591ad(void)

void FUN_1446591ad(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}



// FUNCTION 144659292 FUN_144659292 body=81 status=ok
// SIG undefined FUN_144659292(void)

void FUN_144659292(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_149824af2(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446592e4 FUN_1446592e4 body=438 status=ok
// SIG undefined FUN_1446592e4(void)

void FUN_1446592e4(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149824dcc(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_149824e82(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14465949c FUN_14465949c body=492 status=ok
// SIG undefined FUN_14465949c(void)

void FUN_14465949c(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_149825028(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144659689 FUN_144659689 body=229 status=ok
// SIG undefined FUN_144659689(void)

void FUN_144659689(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}



// FUNCTION 14465976e FUN_14465976e body=81 status=ok
// SIG undefined FUN_14465976e(void)

void FUN_14465976e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1498250c0(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1446597c0 FUN_1446597c0 body=438 status=ok
// SIG undefined FUN_1446597c0(void)

void FUN_1446597c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1498253a6(&local_58,
                *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x59e44c) * 2)
                 * 8),param_1 + 0x10);
  local_90 = *(undefined4 *)(param_4 + 0x8ef8);
  uVar1 = *(undefined4 *)(param_4 + 0x8ef0);
  uVar2 = *(undefined4 *)(param_4 + 0x8ef4);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14bea90d8;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 1;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 1;
  memset(puVar5 + 10,0,400);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  FUN_14981d164(param_2,param_3,param_4,puVar4);
  FUN_145c4dcdc();
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_1448f70da(CONCAT44(uStack_54,local_58),&DAT_14cc2a738,puVar4,&local_88);
  uStack_78 = uStack_50;
  uStack_74 = uStack_4c;
  local_68 = local_90;
  local_88 = puVar4;
  local_70 = uVar1;
  local_6c = uVar2;
  FUN_145c4dcdc();
  FUN_14982545c(param_2,&local_89,puVar4,&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144659978 FUN_144659978 body=492 status=ok
// SIG undefined FUN_144659978(void)

void FUN_144659978(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined4 *)(param_1 + 0x1d8);
  local_b8 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145c4dcdc();
  FUN_149825602(param_2,param_1 + 0x1c0,uVar1,&local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144659b65 FUN_144659b65 body=229 status=ok
// SIG undefined FUN_144659b65(void)

void FUN_144659b65(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14cc2a738,param_3);
  return;
}


