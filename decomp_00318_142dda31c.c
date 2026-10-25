// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142dda31c FUN_142dda31c body=232 status=ok
// SIG undefined FUN_142dda31c(void)

void FUN_142dda31c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142dda404 FUN_142dda404 body=81 status=ok
// SIG undefined FUN_142dda404(void)

void FUN_142dda404(undefined8 param_1,longlong *param_2)

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
  FUN_147233699(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142dda456 FUN_142dda456 body=258 status=ok
// SIG undefined FUN_142dda456(void)

undefined8 * FUN_142dda456(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142dda48c;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142dda48c:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x1f <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 0x1f <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_142dda508;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142dda508:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x20;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0xf8;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a289dc0;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 142dda558 FUN_142dda558 body=481 status=ok
// SIG undefined FUN_142dda558(void)

void FUN_142dda558(longlong param_1,ulonglong *param_2)

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
  FUN_147233a00(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142dda73a FUN_142dda73a body=232 status=ok
// SIG undefined FUN_142dda73a(void)

void FUN_142dda73a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142dda822 FUN_142dda822 body=81 status=ok
// SIG undefined FUN_142dda822(void)

void FUN_142dda822(undefined8 param_1,longlong *param_2)

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
  FUN_147233aa3(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142dda874 FUN_142dda874 body=481 status=ok
// SIG undefined FUN_142dda874(void)

void FUN_142dda874(longlong param_1,ulonglong *param_2)

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
  FUN_147233de0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddaa56 FUN_142ddaa56 body=232 status=ok
// SIG undefined FUN_142ddaa56(void)

void FUN_142ddaa56(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ddab3e FUN_142ddab3e body=81 status=ok
// SIG undefined FUN_142ddab3e(void)

void FUN_142ddab3e(undefined8 param_1,longlong *param_2)

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
  FUN_147233e83(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddab90 FUN_142ddab90 body=481 status=ok
// SIG undefined FUN_142ddab90(void)

void FUN_142ddab90(longlong param_1,ulonglong *param_2)

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
  FUN_1472341de(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddad72 FUN_142ddad72 body=232 status=ok
// SIG undefined FUN_142ddad72(void)

void FUN_142ddad72(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ddae5a FUN_142ddae5a body=81 status=ok
// SIG undefined FUN_142ddae5a(void)

void FUN_142ddae5a(undefined8 param_1,longlong *param_2)

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
  FUN_147234281(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddaeac FUN_142ddaeac body=450 status=ok
// SIG undefined FUN_142ddaeac(void)

void FUN_142ddaeac(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14723478c(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddb06f FUN_142ddb06f body=81 status=ok
// SIG undefined FUN_142ddb06f(void)

void FUN_142ddb06f(undefined8 param_1,longlong *param_2)

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
  FUN_147234887(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddb0c0 FUN_142ddb0c0 body=229 status=ok
// SIG undefined FUN_142ddb0c0(void)

void FUN_142ddb0c0(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca06cd0,param_3);
  return;
}



// FUNCTION 142ddb1a6 FUN_142ddb1a6 body=481 status=ok
// SIG undefined FUN_142ddb1a6(void)

void FUN_142ddb1a6(longlong param_1,ulonglong *param_2)

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
  FUN_147234bc4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddb388 FUN_142ddb388 body=232 status=ok
// SIG undefined FUN_142ddb388(void)

void FUN_142ddb388(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ddb470 FUN_142ddb470 body=81 status=ok
// SIG undefined FUN_142ddb470(void)

void FUN_142ddb470(undefined8 param_1,longlong *param_2)

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
  FUN_147234c67(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddb4c2 FUN_142ddb4c2 body=450 status=ok
// SIG undefined FUN_142ddb4c2(void)

void FUN_142ddb4c2(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147235172(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddb685 FUN_142ddb685 body=81 status=ok
// SIG undefined FUN_142ddb685(void)

void FUN_142ddb685(undefined8 param_1,longlong *param_2)

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
  FUN_14723526d(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddb6d6 FUN_142ddb6d6 body=229 status=ok
// SIG undefined FUN_142ddb6d6(void)

void FUN_142ddb6d6(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca06de0,param_3);
  return;
}



// FUNCTION 142ddb7bc FUN_142ddb7bc body=38 status=ok
// SIG undefined FUN_142ddb7bc(void)

undefined8 FUN_142ddb7bc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ddb7e2 FUN_142ddb7e2 body=648 status=ok
// SIG undefined FUN_142ddb7e2(void)

void FUN_142ddb7e2(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  char local_b8;
  undefined7 uStack_b7;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar8 = local_c0;
    if ((undefined1 *)CONCAT71(uStack_b7,local_b8) != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_1446fe144(puVar9 + 2,local_b0,0);
    puVar4 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar4 = puVar9 + 2;
    }
    memcpy(puVar4,puVar8,(longlong)local_b0);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar8 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar8 = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60,0);
    puVar4 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar9 + 5;
    }
    memcpy(puVar4,puVar8,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar5 = FUN_144821ef4(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145e23078();
  FUN_14722ddef(uVar5,param_1 + 0x1d0,uVar1);
  FUN_1472b057a(local_c0,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8),param_2);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13ae0);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13ae8);
  local_c8 = *(undefined4 *)(param_1 + 0x1e4);
  local_d0 = *(undefined4 *)(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + lVar7 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar3,lVar7,1);
    }
  }
  local_d8 = uVar5;
  FUN_147412f8e(param_2,uVar1,lVar6,uVar2);
  if (local_b8 == '\x01') {
    FUN_1471f3c22(local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddba6c FUN_142ddba6c body=38 status=ok
// SIG undefined FUN_142ddba6c(void)

undefined8 FUN_142ddba6c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ddba92 FUN_142ddba92 body=1639 status=ok
// SIG undefined FUN_142ddba92(void)

void FUN_142ddba92(longlong param_1,ulonglong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 0x11;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x90);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 0x11;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb978;
  puVar15[3] = 0;
  *(int *)(puVar15 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x24) = 8;
  }
  else {
    puVar10 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar10 = uStack_160;
    }
    FUN_1446fe144(puVar15 + 2,(int)local_158,0);
    puVar14 = (undefined8 *)puVar15[3];
    if ((undefined8 *)puVar15[3] == (undefined8 *)0x0) {
      puVar14 = puVar15 + 2;
    }
    memcpy(puVar14,puVar10,(longlong)(int)local_158);
  }
  puVar15[0xd] = 0;
  puVar10 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar15 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x74) = 8;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = &uStack_150;
    }
    FUN_1446fe1b8(puVar15 + 5,iStack_108,0);
    puVar14 = (undefined8 *)puVar15[0xd];
    if ((undefined8 *)puVar15[0xd] == (undefined8 *)0x0) {
      puVar14 = puVar15 + 5;
    }
    memcpy(puVar14,puVar10,(longlong)iStack_108 << 3);
    puVar10 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar15 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar15 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar15 + 0x84) = (undefined4)uStack_f4;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar10);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818);
  FUN_145edbef0();
  FUN_1448e935e(uVar7,&local_168,&DAT_14ca044d8,0);
  FUN_145edbef0();
  puVar15 = uStack_160;
  lVar8 = local_168;
  uVar1 = *(undefined1 *)(param_1 + 0x1cc);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818);
  FUN_145edc3d6();
  FUN_1448e935e(uVar7,&local_168,&DAT_14ca04600,uVar1);
  FUN_145edc3d6();
  puVar14 = uStack_160;
  lVar9 = local_168;
  lVar12 = *(longlong *)(param_1 + 0x1c0);
  iVar2 = *(int *)(lVar12 + 0x3104);
  iVar3 = *(int *)(lVar12 + 0x3100);
  iVar4 = *(int *)(lVar12 + 0x30fc);
  iVar5 = *(int *)(lVar12 + 0x30f8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar12 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar5;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
  *(float *)(puVar11 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2,&local_168);
  local_138 = DAT_14c9f8378;
  uStack_130 = DAT_14c9c0db0;
  local_128 = DAT_14c9d5278;
  local_168 = DAT_14ca94de0;
  if (lVar8 != 0) {
    lVar13 = puVar15[1];
    lVar12 = *(longlong *)(*(longlong *)(lVar13 + 0x50) + (longlong)*(int *)(lVar8 + 0xd4) * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar13,(longlong)*(int *)(lVar8 + 0xd4),1);
    }
  }
  uStack_160 = (undefined8 *)lVar12;
  if (lVar9 == 0) {
    lVar13 = 0;
  }
  else {
    lVar12 = puVar14[1];
    lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + (longlong)*(int *)(lVar9 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(lVar12,(longlong)*(int *)(lVar9 + 0xd4),1);
    }
  }
  local_110 = 0;
  local_158 = lVar13;
  lVar12 = FUN_140028f18(param_2);
  if ((lVar12 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar12;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  if (lVar8 == 0) {
    lVar13 = 0;
  }
  else {
    lVar12 = puVar15[1];
    lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + (longlong)*(int *)(lVar8 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(lVar12,(longlong)*(int *)(lVar8 + 0xd4),1);
    }
  }
  FUN_145edc15e();
  local_178 = uVar7;
  FUN_1449cc26b(param_2,lVar13,lVar8,&DAT_14ca06ef0);
  lVar12 = *(longlong *)(param_1 + 0x1b8);
  if (lVar9 == 0) {
    lVar13 = 0;
  }
  else {
    lVar8 = puVar14[1];
    lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + (longlong)*(int *)(lVar9 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(lVar8,(longlong)*(int *)(lVar9 + 0xd4),1);
    }
  }
  FUN_145edc644();
  local_178 = lVar12 + 0x1a0;
  FUN_1449cc26b(param_2,lVar13,lVar9,&DAT_14ca07000);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar15 + 2) = 0;
  puVar15[3] = 0;
  *(undefined4 *)(puVar15 + 4) = 0;
  uVar7 = DAT_14ca8c110;
  uVar6 = *(undefined4 *)(param_1 + 0x1c8);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar15 + 6;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x38);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar15 + 6;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb5b0;
  puVar15[2] = uVar7;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
  *(undefined4 *)(puVar15 + 4) = 8;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0;
  *(undefined4 *)(puVar15 + 5) = 0xc;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar6;
  if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddc106 FUN_142ddc106 body=481 status=ok
// SIG undefined FUN_142ddc106(void)

void FUN_142ddc106(longlong param_1,ulonglong *param_2)

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
  FUN_1472359f8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddc2e8 FUN_142ddc2e8 body=232 status=ok
// SIG undefined FUN_142ddc2e8(void)

void FUN_142ddc2e8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ddc3d0 FUN_142ddc3d0 body=81 status=ok
// SIG undefined FUN_142ddc3d0(void)

void FUN_142ddc3d0(undefined8 param_1,longlong *param_2)

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
  FUN_147235a9b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddc422 FUN_142ddc422 body=481 status=ok
// SIG undefined FUN_142ddc422(void)

void FUN_142ddc422(longlong param_1,ulonglong *param_2)

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
  FUN_147235dd8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddc604 FUN_142ddc604 body=232 status=ok
// SIG undefined FUN_142ddc604(void)

void FUN_142ddc604(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ddc6ec FUN_142ddc6ec body=81 status=ok
// SIG undefined FUN_142ddc6ec(void)

void FUN_142ddc6ec(undefined8 param_1,longlong *param_2)

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
  FUN_147235e7b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddc73e FUN_142ddc73e body=450 status=ok
// SIG undefined FUN_142ddc73e(void)

void FUN_142ddc73e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147236386(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddc901 FUN_142ddc901 body=81 status=ok
// SIG undefined FUN_142ddc901(void)

void FUN_142ddc901(undefined8 param_1,longlong *param_2)

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
  FUN_147236481(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddc952 FUN_142ddc952 body=229 status=ok
// SIG undefined FUN_142ddc952(void)

void FUN_142ddc952(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca072a8,param_3);
  return;
}



// FUNCTION 142ddca38 FUN_142ddca38 body=450 status=ok
// SIG undefined FUN_142ddca38(void)

void FUN_142ddca38(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147236a9e(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddcbfb FUN_142ddcbfb body=81 status=ok
// SIG undefined FUN_142ddcbfb(void)

void FUN_142ddcbfb(undefined8 param_1,longlong *param_2)

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
  FUN_147236b99(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddcc4c FUN_142ddcc4c body=229 status=ok
// SIG undefined FUN_142ddcc4c(void)

void FUN_142ddcc4c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca07198,param_3);
  return;
}



// FUNCTION 142ddcd32 FUN_142ddcd32 body=481 status=ok
// SIG undefined FUN_142ddcd32(void)

void FUN_142ddcd32(longlong param_1,ulonglong *param_2)

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
  FUN_147236ed6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddcf14 FUN_142ddcf14 body=232 status=ok
// SIG undefined FUN_142ddcf14(void)

void FUN_142ddcf14(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ddcffc FUN_142ddcffc body=81 status=ok
// SIG undefined FUN_142ddcffc(void)

void FUN_142ddcffc(undefined8 param_1,longlong *param_2)

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
  FUN_147236f79(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddd04e FUN_142ddd04e body=450 status=ok
// SIG undefined FUN_142ddd04e(void)

void FUN_142ddd04e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147237484(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddd211 FUN_142ddd211 body=81 status=ok
// SIG undefined FUN_142ddd211(void)

void FUN_142ddd211(undefined8 param_1,longlong *param_2)

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
  FUN_14723757f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddd262 FUN_142ddd262 body=229 status=ok
// SIG undefined FUN_142ddd262(void)

void FUN_142ddd262(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca074c8,param_3);
  return;
}



// FUNCTION 142ddd348 FUN_142ddd348 body=450 status=ok
// SIG undefined FUN_142ddd348(void)

void FUN_142ddd348(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147237a8c(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddd50b FUN_142ddd50b body=81 status=ok
// SIG undefined FUN_142ddd50b(void)

void FUN_142ddd50b(undefined8 param_1,longlong *param_2)

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
  FUN_147237b87(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddd55c FUN_142ddd55c body=229 status=ok
// SIG undefined FUN_142ddd55c(void)

void FUN_142ddd55c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca07330,param_3);
  return;
}



// FUNCTION 142ddd642 FUN_142ddd642 body=481 status=ok
// SIG undefined FUN_142ddd642(void)

void FUN_142ddd642(longlong param_1,ulonglong *param_2)

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
  FUN_147237ec4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddd824 FUN_142ddd824 body=232 status=ok
// SIG undefined FUN_142ddd824(void)

void FUN_142ddd824(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ddd90c FUN_142ddd90c body=81 status=ok
// SIG undefined FUN_142ddd90c(void)

void FUN_142ddd90c(undefined8 param_1,longlong *param_2)

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
  FUN_147237f67(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ddd95e FUN_142ddd95e body=481 status=ok
// SIG undefined FUN_142ddd95e(void)

void FUN_142ddd95e(longlong param_1,ulonglong *param_2)

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
  FUN_1472382a4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142dddb40 FUN_142dddb40 body=232 status=ok
// SIG undefined FUN_142dddb40(void)

void FUN_142dddb40(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142dddc28 FUN_142dddc28 body=81 status=ok
// SIG undefined FUN_142dddc28(void)

void FUN_142dddc28(undefined8 param_1,longlong *param_2)

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
  FUN_147238347(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142dddc7a FUN_142dddc7a body=481 status=ok
// SIG undefined FUN_142dddc7a(void)

void FUN_142dddc7a(longlong param_1,ulonglong *param_2)

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
  FUN_147238684(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ddde5c FUN_142ddde5c body=232 status=ok
// SIG undefined FUN_142ddde5c(void)

void FUN_142ddde5c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142dddf44 FUN_142dddf44 body=81 status=ok
// SIG undefined FUN_142dddf44(void)

void FUN_142dddf44(undefined8 param_1,longlong *param_2)

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
  FUN_147238727(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142dddf96 FUN_142dddf96 body=481 status=ok
// SIG undefined FUN_142dddf96(void)

void FUN_142dddf96(longlong param_1,ulonglong *param_2)

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
  FUN_147238ad2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142dde178 FUN_142dde178 body=232 status=ok
// SIG undefined FUN_142dde178(void)

void FUN_142dde178(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142dde260 FUN_142dde260 body=81 status=ok
// SIG undefined FUN_142dde260(void)

void FUN_142dde260(undefined8 param_1,longlong *param_2)

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
  FUN_147238b75(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142dde2b2 FUN_142dde2b2 body=481 status=ok
// SIG undefined FUN_142dde2b2(void)

void FUN_142dde2b2(longlong param_1,ulonglong *param_2)

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
  FUN_147238eb2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142dde494 FUN_142dde494 body=232 status=ok
// SIG undefined FUN_142dde494(void)

void FUN_142dde494(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142dde57c FUN_142dde57c body=81 status=ok
// SIG undefined FUN_142dde57c(void)

void FUN_142dde57c(undefined8 param_1,longlong *param_2)

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
  FUN_147238f55(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142dde5cd FUN_142dde5cd body=10600 status=ok
// SIG undefined FUN_142dde5cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dde5cd(void)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined4 local_60;
  undefined8 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14ca008c4);
  if (cVar2 == '\0') {
    _DAT_14ca008c4 = 0;
    uRam000000014ca008cc = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca008d8,L"r.Lumen.ScreenProbeGather.HardwareRayTracing",&local_58,
                L"0. Software raytracing of diffuse indirect from Lumen cubemap tree.1. Enable hardware ray tracing of diffuse indirect. (Default)\n"
               );
  atexit(FUN_142dac990);
  local_58._0_4_ = 0x3dcccccd;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca008f0,L"r.Lumen.ScreenProbeGather.HardwareRayTracing.NormalBias",&local_58,
                L"Bias along the shading normal, useful when the Ray Tracing geometry doesn\'t match the GBuffer (Nanite Proxy geometry)"
               );
  atexit(FUN_142dac9d5);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca00908,L"r.Lumen.ScreenProbeGather.HardwareRayTracing.Retrace.FarField",
                &local_58,
                L"Determines whether a second trace will be fired for far-field contribution (Default = 1)"
               );
  atexit(FUN_142daca1a);
  local_50 = FUN_145d8746c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca00a38,&local_58);
  local_50 = FUN_1460948b0;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca00b60,&local_58);
  local_50 = FUN_145e57cd8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca00c88,&local_58);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca00c98,L"r.Lumen.ScreenProbeGather.ImportanceSample",&DAT_14c760760,
                L"Whether to use Importance Sampling to generate probe trace directions.");
  atexit(FUN_142dae6aa);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca00ca8,L"r.Lumen.ScreenProbeGather.ImportanceSample.NumLevels",
                &DAT_14c760764,
                L"Number of refinement levels to use for screen probe importance sampling.  Currently only supported by the serial reference path in ScreenProbeGenerateRaysCS."
               );
  atexit(FUN_142dae6ef);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca00cb8,L"r.Lumen.ScreenProbeGather.ImportanceSample.IncomingLighting",
                &DAT_14c760768,
                L"Whether to Importance Sample incoming lighting to generate probe trace directions.  When disabled, only the BRDF will be importance sampled."
               );
  atexit(FUN_142dae734);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca00cc8,L"r.Lumen.ScreenProbeGather.ImportanceSample.ProbeRadianceHistory",
                &DAT_14c76076c,
                L"Whether to Importance Sample incoming lighting from last frame\'s filtered traces to generate probe trace directions.  When disabled, the Radiance Cache will be used instead."
               );
  atexit(FUN_142dae779);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca00cd8,
                L"r.Lumen.ScreenProbeGather.ImportanceSample.BRDFOctahedronResolution",
                &DAT_14c760770,L"Resolution of the BRDF PDF octahedron per probe.");
  atexit(FUN_142dae7be);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca00ce8,L"r.Lumen.ScreenProbeGather.ImportanceSample.MinPDFToTrace",
                &DAT_14c760774,
                L"Minimum normalized BRDF PDF to trace rays for.  Larger values cause black corners, but reduce noise as more rays are able to be reassigned to an important direction."
               );
  atexit(FUN_142dae803);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca00cf8,
                L"r.Lumen.ScreenProbeGather.ImportanceSample.HistoryDistanceThreshold",
                &DAT_14c760778,&DAT_149dfb77a);
  atexit(FUN_142dae848);
  local_50 = FUN_14157b696;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca00e20,&local_58);
  local_50 = FUN_14159d28a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca00f48,&local_58);
  local_50 = FUN_141591b62;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01070,&local_58);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01080,L"r.Lumen.ScreenProbeGather.ScreenTraces",&DAT_14c76077c,
                L"Whether to trace against the screen before falling back to other tracing methods."
               );
  atexit(FUN_142db0502);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01090,L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal",&DAT_14c760780
                ,
                L"Whether to use HZB tracing for SSGI instead of fixed step count intersection.  HZB tracing is much more accurate, in particular not missing thin features, but is about ~3x slower."
               );
  atexit(FUN_142db0547);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca010a0,L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal.FullResDepth",
                &DAT_14c760784,
                L"Whether the HZB traversal should go all the way down to the full resolution depth, which is more accurate but adds incoherency to the inner loop."
               );
  atexit(FUN_142db058c);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca010b0,
                L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal.SkipFoliageHits",
                &DAT_14c760788,
                L"Whether to allow screen traces to hit Subsurface and TwoSided Foliage shading models.  Can be used to work around aliasing from high frequency grass geometry."
               );
  atexit(FUN_142db05d1);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca010c0,L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal.SkipHairHits",
                &local_58,
                L"Whether to allow screen traces to hit hair shading models.  Can be used to work around aliasing from high frequency hair cards geometry."
               );
  atexit(FUN_142db0616);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca010d8,L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal.MaxIterations",
                &DAT_14c76078c,L"Max iterations for HZB tracing.");
  atexit(FUN_142db065b);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca010e8,
                L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal.RelativeDepthThickness",
                &DAT_14c760790,
                L"Determines depth thickness of objects hit by HZB tracing, as a relative depth threshold."
               );
  atexit(FUN_142db06a0);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca010f8,
                L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal.HistoryDepthTestRelativeThickness"
                ,&DAT_14c760794,
                L"Distance between HZB trace hit and previous frame scene depth from which to allow hits, as a relative depth threshold."
               );
  atexit(FUN_142db06e5);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01108,
                L"r.Lumen.ScreenProbeGather.ScreenTraces.HZBTraversal.NumThicknessStepsToDetermineCertainty"
                ,&DAT_14c760798,
                L"Number of linear search steps to determine if a hit feature is thin and should be ignored."
               );
  atexit(FUN_142db072a);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01118,L"r.Lumen.ScreenProbeGather.VisualizeTraces",&DAT_14ca08498,
                L"Whether to visualize traces for the center screen probe, useful for debugging");
  atexit(FUN_142db076f);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01130,L"r.Lumen.ScreenProbeGather.VisualizeTracesFreeze",&DAT_14ca01128,
                L"Whether to freeze updating the visualize trace data.  Note that no changes to cvars or shaders will propagate until unfrozen."
               );
  atexit(FUN_142db07b4);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01140,L"r.Lumen.ScreenProbeGather.HairStrands.VoxelTrace",&DAT_14c76079c,
                L"Whether to trace against hair voxel structure for hair casting shadow onto opaques."
               );
  atexit(FUN_142db07f9);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01158,L"r.Lumen.ScreenProbeGather.HairStrands.ScreenTrace",&DAT_14ca01150,
                L"Whether to trace against hair depth for hair casting shadow onto opaques.");
  atexit(FUN_142db083e);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01170,L"r.Lumen.ScreenProbeGather.ScreenTraces.MinimumOccupancy",
                &DAT_14ca01168,
                L"Minimum number of threads still tracing before aborting the trace.  Can be used for scalability to abandon traces that have a disproportionate cost."
               );
  atexit(FUN_142db0883);
  local_50 = FUN_1415a5c9e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01298,&local_58);
  local_50 = FUN_145f91996;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca013c0,&local_58);
  local_50 = FUN_141577e92;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca014e8,&local_58);
  local_50 = FUN_141573d24;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01610,&local_58);
  local_50 = FUN_1415727c6;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01738,&local_58);
  local_50 = FUN_14157f43a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01860,&local_58);
  local_50 = FUN_141580016;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01988,&local_58);
  local_50 = FUN_145eb98a4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01ab0,&local_58);
  DAT_14ca01ac0 = 0;
  atexit((_func_5014 *)&LAB_142db0aa0);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca01ac8,
                L"r.Lumen.ScreenProbeGather.ShortRangeAO.ScreenSpace.SlopeCompareToleranceScale",
                &DAT_14c7607a0,
                L"Scales the slope threshold that screen space traces use to determine whether there was a hit."
               );
  atexit(FUN_142db4ad6);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca01ad8,
                L"r.Lumen.ScreenProbeGather.ShortRangeAO.ScreenSpace.FoliageOcclusionStrength",
                &DAT_14c760810,
                L"Maximum strength of ScreenSpaceBentNormal occlusion on foliage and subsurface pixels.  Useful for reducing max occlusion to simulate subsurface scattering."
               );
  atexit(FUN_142db4b1b);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca01ae8,L"r.Lumen.ScreenProbeGather.ShortRangeAO.MaxMultibounceAlbedo",
                &DAT_14c760814,
                L"Maximum albedo used for the AO multi-bounce approximation.  Useful for forcing near-white albedo to have some occlusion."
               );
  atexit(FUN_142db4b60);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01af8,L"r.Lumen.ScreenProbeGather.ShortRangeAO.HairVoxelTrace",
                &DAT_14c7607a4,
                L"Whether to trace against hair voxel structure for hair casting shadow onto opaques."
               );
  atexit(FUN_142db4ba5);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01b10,L"r.Lumen.ScreenProbeGather.ShortRangeAO.HairScreenTrace",
                &DAT_14ca01b08,
                L"Whether to trace against hair depth for hair casting shadow onto opaques.");
  atexit(FUN_142db4bea);
  local_50 = FUN_141591d88;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01c38,&local_58);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca01c48,L"r.Lumen.ScreenProbeGather.ShortRangeAO.HardwareRayTracing",
                &local_58,
                L"0. Screen space tracing for the full resolution Bent Normal (directional occlusion).1. Enable hardware ray tracing of the full resolution Bent Normal (directional occlusion). (Default)\n"
               );
  atexit(FUN_142db52b8);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca01c60,
                L"r.Lumen.ScreenProbeGather.ShortRangeAO.HardwareRayTracing.NormalBias",&local_58,
                L"Bias for HWRT Bent Normal to avoid self intersection");
  atexit(FUN_142db52fd);
  local_50 = FUN_145ead0b4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01d90,&local_58);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca01da0,L"r.LumenScene.SurfaceCache.Compress",&DAT_14c760800,
                L"Whether to use run time compression for surface cache.\n0 - Disabled\n1 - Compress using UAV aliasing if supported\n2 - Compress using CopyTexture (may be very slow on some RHIs)\n"
               );
  atexit(FUN_142db534e);
  local_50 = FUN_144a919ac;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca01f98,&local_58);
  local_50 = FUN_1460871d2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca020c0,&local_58);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca020d0,L"r.LumenScene.SurfaceCache.Feedback",&DAT_14c760804,
                L"Whether to use surface cache feedback to selectively map higher quality surface cache pages."
               );
  atexit(FUN_142db8d61);
  local_68 = (undefined8 **)CONCAT44(local_68._4_4_,0x60);
  FUN_141471170(&DAT_14ca020e0,L"r.LumenScene.SurfaceCache.Feedback.TileSize",&DAT_14c7607a8,
                L"One surface cache feedback element will be writen out per tile. Aligned to a power of two."
               );
  atexit(FUN_142db8da6);
  local_58 = (undefined8 *)0x0;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14a288c20;
  local_60 = 0x60;
  local_68 = &local_58;
  FUN_1417288fa(&DAT_14ca020f0,L"r.LumenScene.SurfaceCache.Feedback.ResLevelBias",&DAT_14c7607ac,
                L"Bias resolution of on demand surface cache pages.");
  if ((int)local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142ddf02a;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142ddf02a:
  atexit(FUN_142db8deb);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca02100,L"r.LumenScene.SurfaceCache.Feedback.MinPageHits",&DAT_14c7607b0,
                L"Min number of page hits to demand a new page.");
  atexit(FUN_142db8e30);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca02110,L"r.LumenScene.SurfaceCache.Feedback.UniqueElements",&DAT_14c7607b4,
                L"Limit of unique surface cache feedback elements. Used to resize buffers.");
  atexit(FUN_142db8e75);
  local_50 = FUN_1406be014;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca02238,&local_58);
  local_50 = FUN_1406be136;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca02360,&local_58);
  local_50 = FUN_1406be258;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca02488,&local_58);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca02498,L"r.Lumen.SkylightLeaking.Roughness",&DAT_14c7607b8,
                L"Roughness used to sample the skylight leaking cubemap.  A value of 0 gives no prefiltering of the skylight leaking, while larger values can be useful to hide sky features in the leaking."
               );
  atexit(FUN_142db97fc);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca024a8,L"r.Lumen.SampleFog",&local_58,
                L"Sample the fog contribution in Lumen tracing. Disabled by default.");
  atexit(FUN_142db9841);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca024c0,L"r.Lumen.TranslucencyReflections.RadianceCache",&DAT_14c7607bc,
                L"Whether to use the Radiance Cache to provide Lumen Reflections on Translucent Surfaces."
               );
  atexit(FUN_142db9886);
  local_68._0_4_ = 0x60;
  FUN_141471170(&DAT_14ca024d0,L"r.Lumen.TranslucencyReflections.MarkDownsampleFactor",
                &DAT_14c7607c0,
                L"Downsample factor for marking translucent surfaces in the Lumen Radiance Cache.  Too low of factors will cause incorrect Radiance Cache coverage.  Should be a power of 2."
               );
  atexit(FUN_142db98cb);
  local_68._0_4_ = 0x60;
  FUN_1415c789c(&DAT_14ca024e0,L"r.Lumen.TranslucencyReflections.ReprojectionRadiusScale",
                &DAT_14c760808,L"Larger values treat the Radiance Cache lighting as more distant.");
  atexit(FUN_142db9910);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca024f0,L"r.Lumen.TranslucencyReflections.ClipmapFadeSize",&DAT_14c76080c,
                L"Size in Radiance Cache probes of the dithered transition region between clipmaps")
  ;
  atexit(FUN_142db9955);
  local_50 = FUN_1415b6b98;
  local_58 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14ca02588,&local_58);
  local_50 = FUN_147221c84;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca026b0,&local_58);
  local_50 = FUN_147221e52;
  local_58 = (undefined8 *)&DAT_141535a92;
  FUN_1412df486(&DAT_14ca027d8,&local_58);
  DAT_14ca027e8 = 1;
  uVar3 = (ulonglong)DAT_14c9c0cf0;
  DAT_14ca027ec = DAT_14c9c0cf0;
  DAT_14c9c0cf0 = DAT_14c9c0cf0 + 1;
  *(undefined1 **)(&DAT_14cafe970 + uVar3 * 0x10) = &LAB_14053d376;
  (&DAT_14cafe978)[uVar3 * 2] = L"LumenTranslucencyRadianceCacheMark";
  atexit((_func_5014 *)&LAB_142dbb8ac);
  DAT_14ca027f0 = 1;
  DAT_14ca027f4 = 1;
  _DAT_14ca11c58 = FUN_14053d383;
  _DAT_14ca11ea4 = 2;
  _DAT_14ca12074 = DAT_14ca027ec;
  atexit((_func_5014 *)&LAB_142dbb8d6);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca027f8,L"r.Lumen.TranslucencyVolume.HardwareRayTracing",&local_58,
                L"Enables hardware ray tracing for Lumen translucency volume (Default = 1)");
  atexit(FUN_142dbdef0);
  local_50 = FUN_145ddd226;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca02928,&local_58);
  local_50 = FUN_146094b1e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca02a50,&local_58);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02a60,L"r.Lumen.TranslucencyVolume.Enable",&local_58,&DAT_149dfb77a);
  atexit(FUN_142dbdf4d);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02a78,L"r.Lumen.TranslucencyVolume.TraceFromVolume",&local_58,
                L"Whether to ray trace from the translucency volume\'s voxels to gather indirect lighting.  Only makes sense to disable if TranslucencyVolume.RadianceCache is enabled."
               );
  atexit(FUN_142dbdf92);
  local_58._0_4_ = 0x20;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02a90,L"r.Lumen.TranslucencyVolume.GridPixelSize",&local_58,
                L"Size of a cell in the translucency grid, in pixels.");
  atexit(FUN_142dbdfd7);
  local_58._0_4_ = 0x3c23d70a;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02aa8,L"r.Lumen.TranslucencyVolume.GridDistributionLogZScale",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142dbe01c);
  local_58._0_4_ = 0x3f800000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02ac0,L"r.Lumen.TranslucencyVolume.GridDistributionLogZOffset",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142dbe061);
  local_58._0_4_ = 0x40800000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02ad8,L"r.Lumen.TranslucencyVolume.GridDistributionZScale",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142dbe0a6);
  local_58._0_4_ = 0x45fa0000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02af0,L"r.Lumen.TranslucencyVolume.EndDistanceFromCamera",&local_58,
                &DAT_149dfb77a);
  atexit(FUN_142dbe0eb);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02b08,L"r.Lumen.TranslucencyVolume.SpatialFilter",&local_58,
                L"Whether to use a spatial filter on the volume traces.");
  atexit(FUN_142dbe130);
  local_58._0_4_ = 3;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02b20,L"r.Lumen.TranslucencyVolume.SpatialFilter.SampleCount",&local_58,
                L"When r.Lumen.TranslucencyVolume.SpatialFilter.Mode=1, this controls the effective sample count of the separable filter; that will be SampleCount*2+1. Default to a [-3,3] filter of 7 sample."
               );
  atexit(FUN_142dbe175);
  local_58._0_4_ = 0x40a00000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02b38,L"r.Lumen.TranslucencyVolume.SpatialFilter.StandardDeviation",
                &local_58,
                L"When r.Lumen.TranslucencyVolume.SpatialFilter.Mode=1, The standard deviation of the Gaussian filter in Pixel. If a large value, the filter will become a cube filter. While when getting closer to 0, the filter will become a sharper Gaussian filter. Default to 5 meaning not a sharp flilter, close to a box filter for the default SampleCount of 3."
               );
  atexit(FUN_142dbe1ba);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02b50,L"r.Lumen.TranslucencyVolume.TemporalReprojection",&local_58,
                L"Whether to use temporal reprojection.");
  atexit(FUN_142dbe1ff);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02b68,L"r.Lumen.TranslucencyVolume.Temporal.Jitter",&local_58,
                L"Whether to apply jitter to each frame\'s translucency GI computation, achieving temporal super sampling."
               );
  atexit(FUN_142dbe244);
  local_58._0_4_ = 0x3f666666;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02b80,L"r.Lumen.TranslucencyVolume.Temporal.HistoryWeight",&local_58,
                L"How much the history value should be weighted each frame.  This is a tradeoff between visible jittering and responsiveness."
               );
  atexit(FUN_142dbe289);
  local_58._0_4_ = 8;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02b98,L"r.Lumen.TranslucencyVolume.Temporal.MaxRayDirections",&local_58,
                L"Number of possible random directions from froxel center when sampling the lumen scene."
               );
  atexit(FUN_142dbe2ce);
  local_58._0_4_ = 0x40000000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02bb0,L"r.Lumen.TranslucencyVolume.TraceStepFactor",&local_58,
                &DAT_149e0635c);
  atexit(FUN_142dbe313);
  local_58._0_4_ = 3;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02bc8,L"r.Lumen.TranslucencyVolume.TracingOctahedronResolution",&local_58,
                L"Resolution of the tracing octahedron.  Determines how many traces are done per voxel of the translucency lighting volume."
               );
  atexit(FUN_142dbe358);
  local_58._0_4_ = 0x3f800000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02be0,L"r.Lumen.TranslucencyVolume.VoxelTraceStartDistanceScale",&local_58,
                &DAT_149e0635c);
  atexit(FUN_142dbe39d);
  local_58._0_4_ = 0x41a00000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02bf8,L"r.Lumen.TranslucencyVolume.MaxRayIntensity",&local_58,
                &DAT_149e0635c);
  atexit(FUN_142dbe3e2);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02c10,L"r.Lumen.TranslucencyVolume.RadianceCache",&local_58,
                L"Whether to use the Radiance Cache for Translucency");
  atexit(FUN_142dbe427);
  local_58._0_4_ = 3;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02c28,L"r.Lumen.TranslucencyVolume.RadianceCache.NumMipmaps",&local_58,
                L"Number of radiance cache mipmaps.");
  atexit(FUN_142dbe46c);
  local_58._0_4_ = 0x451c4000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca02c40,L"r.Lumen.TranslucencyVolume.RadianceCache.ClipmapWorldExtent",
                &local_58,L"World space extent of the first clipmap");
  atexit(FUN_142dbe4b1);
  local_58._0_4_ = 0x40000000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca02c58,L"r.Lumen.TranslucencyVolume.RadianceCache.ClipmapDistributionBase",
                &local_58,
                L"Base of the Pow() that controls the size of each successive clipmap relative to the first."
               );
  atexit(FUN_142dbe4f6);
  local_58._0_4_ = 200;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02c70,L"r.Lumen.TranslucencyVolume.RadianceCache.NumProbesToTraceBudget",
                &local_58,&DAT_149dfb77a);
  atexit(FUN_142dbe53b);
  local_58._0_4_ = 0x18;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02c88,L"r.Lumen.TranslucencyVolume.RadianceCache.GridResolution",&local_58,
                L"Resolution of the probe placement grid within each clipmap");
  atexit(FUN_142dbe580);
  local_58._0_4_ = 8;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02ca0,L"r.Lumen.TranslucencyVolume.RadianceCache.ProbeResolution",&local_58
                ,
                L"Resolution of the probe\'s 2d radiance layout.  The number of rays traced for the probe will be ProbeResolution ^ 2"
               );
  atexit(FUN_142dbe5c5);
  local_58._0_4_ = 0x80;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02cb8,
                L"r.Lumen.TranslucencyVolume.RadianceCache.ProbeAtlasResolutionInProbes",&local_58,
                L"Number of probes along one dimension of the probe atlas cache texture. This controls the memory usage of the cache. Overflow currently results in incorrect rendering. Aligned to the next power of two."
               );
  atexit(FUN_142dbe60a);
  local_58._0_4_ = 0x41200000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca02cd0,L"r.Lumen.TranslucencyVolume.RadianceCache.ReprojectionRadiusScale",
                &local_58,&DAT_149dfb77a);
  atexit(FUN_142dbe64f);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca02ce8,L"r.Lumen.TranslucencyVolume.RadianceCache.FarField",&local_58,
                L"Whether to trace against the FarField representation");
  atexit(FUN_142dbe694);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca02d00,L"r.Lumen.TranslucencyVolume.RadianceCache.Stats",&local_58,
                L"GPU print out Radiance Cache update stats.");
  atexit(FUN_142dbe6d9);
  local_58._0_4_ = 0x3f000000;
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca02d18,L"r.Lumen.TranslucencyVolume.GridCenterOffsetFromDepthBuffer",
                &local_58,
                L"Offset in grid units to move grid center sample out form the depth buffer along the Z direction. -1 means disabled. This reduces sample self intersection with geometry when tracing the global distance field buffer, and thus reduces flickering in those areas, as well as results in less leaking sometimes. Set to -1 to disable."
               );
  atexit(FUN_142dbe71e);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x3f800000);
  local_68._0_4_ = 0x20;
  FUN_140a6b41e(&DAT_14ca02d30,
                L"r.Lumen.TranslucencyVolume.OffsetThresholdToAcceptDepthBufferOffset",&local_58,
                L"Offset in grid units to accept a sample to be moved forward in front of the depth buffer. This is to avoid moving all samples behind the depth buffer forward which would affect the lighting of translucent and volumetric at edges of mesh. Default to 1.0 to only allow moving the first layer of froxel intersecting depth."
               );
  atexit(FUN_142dbe763);
  local_50 = FUN_14157d438;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca02e60,&local_58);
  local_50 = FUN_1415a2cf4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca02f88,&local_58);
  local_50 = FUN_141592092;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca030b0,&local_58);
  local_50 = FUN_1415a2f1a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca031d8,&local_58);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca031f0,L"r.Lumen.Visualize",&DAT_14ca031e8,
                L"Lumen scene visualization mode.\n0 - Disable\n1 - Overview\n2 - Performance Overview\n3 - Lumen Scene\n4 - Reflection View\n5 - Surface Cache Coverage\n6 - Geometry normals\n7 - Dedicated Reflection Rays\n8 - Albedo\n9 - Normals\n10 - Emissive\n11 - Opacity (disable alpha masking)\n12 - Card weights\n13 - Direct lighting\n14 - Indirect lighting\n15 - Local Position (hardware ray-tracing only)\n16 - Velocity (hardware ray-tracing only)\n17 - Direct lighting updates\n18 - Indirect lighting updates\n19 - Last used pages\n20 - Last used high res pages\n21 - Card tile shadow downsample factor"
               );
  atexit(FUN_142dc1ee9);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03200,L"r.Lumen.Visualize.CullingMode",&local_58,
                L"Visualize culling mode:\n0 - none\n1 - cull back facing triangles\n2 - cull front facing triangles"
               );
  atexit(FUN_142dc1f2e);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03218,L"r.Lumen.Visualize.GridPixelSize",&DAT_14c7607c4,&DAT_149dfb77a);
  atexit(FUN_142dc1f73);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03228,L"r.Lumen.Visualize.IndirectDiffuse",&DAT_14ca085ac,
                L"Visualize Lumen Indirect Diffuse.");
  atexit(FUN_142dc1fb8);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03238,L"r.Lumen.Visualize.TraceMeshSDFs",&DAT_14c7607c8,
                L"Whether to use Mesh SDF tracing for lumen scene visualization.");
  atexit(FUN_142dc1ffd);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca03248,L"r.Lumen.Visualize.MaxMeshSDFTraceDistance",&DAT_14c7607cc,
                L"Max trace distance for Lumen scene visualization rays. Values below 0 will automatically derrive this from cone angle."
               );
  atexit(FUN_142dc2042);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03258,L"r.Lumen.Visualize.HiResSurface",&DAT_14c7607d0,
                L"Whether visualization should sample highest available surface data or use lowest res always resident pages."
               );
  atexit(FUN_142dc2087);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca03268,L"r.Lumen.Visualize.SurfaceCacheFeedback",&local_58,
                L"Whether visualization should write surface cache feedback requests into the feedback buffer."
               );
  atexit(FUN_142dc20cc);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03280,L"r.Lumen.Visualize.TraceRadianceCache",&DAT_14ca08494,
                L"Whether to use radiance cache for Lumen scene visualization.");
  atexit(FUN_142dc2111);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca03298,L"r.Lumen.Visualize.ConeAngle",&DAT_14ca03290,
                L"Visualize cone angle, in degrees.");
  atexit(FUN_142dc2156);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca032a8,L"r.Lumen.Visualize.ConeStepFactor",&DAT_14c7607d4,
                L"Cone step scale on sphere radius step size.");
  atexit(FUN_142dc219b);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca032c0,L"r.Lumen.Visualize.MinTraceDistance",&DAT_14ca032b8,&DAT_149dfb77a);
  atexit(FUN_142dc21e0);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca032d0,L"r.Lumen.Visualize.MaxTraceDistance",&DAT_14c7607d8,&DAT_149dfb77a);
  atexit(FUN_142dc2225);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca032e8,L"r.Lumen.Visualize.CardGenerationSurfels",&DAT_14ca032e0,
                &DAT_149dfb77a);
  atexit(FUN_142dc226a);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca032f8,L"r.Lumen.Visualize.CardGenerationSurfelScale",&DAT_14c7607dc,
                &DAT_149dfb77a);
  atexit(FUN_142dc22af);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca03308,L"r.Lumen.Visualize.CardGenerationClusterScale",&DAT_14c7607e0,
                &DAT_149dfb77a);
  atexit(FUN_142dc22f4);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03320,L"r.Lumen.Visualize.CardGenerationCluster",&DAT_14ca03318,
                &DAT_149dfb77a);
  atexit(FUN_142dc2339);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03330,L"r.Lumen.Visualize.CardGenerationMaxSurfel",&DAT_14c7607e4,
                &DAT_149dfb77a);
  atexit(FUN_142dc237e);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03348,L"r.Lumen.Visualize.CardPlacement",&DAT_14ca03340,&DAT_149dfb77a);
  atexit(FUN_142dc23c3);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca03358,L"r.Lumen.Visualize.CardPlacementDistance",&DAT_14c7607e8,
                &DAT_149dfb77a);
  atexit(FUN_142dc2408);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03370,L"r.Lumen.Visualize.CardPlacementLOD",&DAT_14ca03368,
                L"0 - all\n1 - only primitives\n2 - only merged instances\n3 - only merged components\n4 - only far field\n"
               );
  atexit(FUN_142dc244d);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca03388,L"r.Lumen.Visualize.CardPlacementPrimitives",&DAT_14ca03380,
                L"Whether to visualize primitive bounding boxes.\n");
  atexit(FUN_142dc2492);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca033a0,L"r.Lumen.Visualize.RayTracingGroups",&DAT_14ca03398,
                L"Visualize bounds for ray tracing groups. Control visualization distance using r.Lumen.Visualize.CardPlacementDistance.\n0 - disable\n1 - all groups\n2 - groups with a single instance"
               );
  atexit(FUN_142dc24d7);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca033b0,L"r.Lumen.Visualize.CardPlacementIndex",&DAT_14c7607ec,
                L"Visualize only a single card per mesh.");
  atexit(FUN_142dc251c);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca033c0,L"r.Lumen.Visualize.CardPlacementDirection",&DAT_14c7607f0,
                L"Visualize only a single card direction.");
  atexit(FUN_142dc2561);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca033d8,L"r.LumenScene.DumpStats",&DAT_14ca033d0,
                L"Whether to log Lumen scene stats on the next frame. 2 - dump mesh DF. 3 - dump LumenScene objects."
               );
  atexit(FUN_142dc25a6);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca033e8,L"r.Lumen.Visualize.CardInterpolateInfluenceRadius",&DAT_14c7607f4,
                &DAT_149dfb77a);
  atexit(FUN_142dc25eb);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca033f8,L"r.Lumen.Visualize.UseShaderPrintForTraces",&local_58,
                L"Whether to use ShaderPrint or custom line renderer for trace visualization.");
  atexit(FUN_142dc2630);
  local_50 = FUN_145ead62a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca03528,&local_58);
  local_50 = FUN_145f84324;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca03650,&local_58);
  local_50 = FUN_145edba0a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca03778,&local_58);
  local_50 = FUN_1460465f8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca038a0,&local_58);
  local_50 = FUN_145f7f632;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca039c8,&local_58);
  _DAT_14ca039e0 = 0xffffffff;
  DAT_14ca039e4 = 5;
  DAT_14ca039e5 = 1;
  DAT_14ca039e6 = 0;
  DAT_14ca039e8 = 0;
  DAT_14ca039d8 = &PTR_FUN_14a288f30;
  FUN_1462ec4aa();
  atexit(FUN_142dc26b5);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca039f0,L"r.Lumen.Visualize.HardwareRayTracing",&local_58,
                L"Enables visualization of hardware ray tracing (Default = 1)");
  atexit(FUN_142dc8b2f);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03a08,L"r.Lumen.Visualize.HardwareRayTracing.DeferredMaterial",&local_58,
                L"Enables deferred material pipeline (Default = 1)");
  atexit(FUN_142dc8b74);
  local_58._0_4_ = 0x40;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03a20,
                L"r.Lumen.Visualize.HardwareRayTracing.DeferredMaterial.TileDimension",&local_58,
                L"Determines the tile dimension for material sorting (Default = 64)");
  atexit(FUN_142dc8bb9);
  local_58._0_4_ = 0x40;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03a38,L"r.Lumen.Visualize.HardwareRayTracing.ThreadCount",&local_58,
                L"Determines the active group count when dispatching raygen shader (default = 64");
  atexit(FUN_142dc8bfe);
  local_58._0_4_ = 0x1000;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03a50,L"r.Lumen.Visualize.HardwareRayTracing.GroupCount",&local_58,
                L"Determines the active group count when dispatching raygen shader (default = 4096")
  ;
  atexit(FUN_142dc8c43);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03a68,L"r.Lumen.Visualize.HardwareRayTracing.Retrace.HitLighting",&local_58
                ,
                L"Determines whether a second trace will be fired for hit-lighting for invalid surface-cache hits (default = 1"
               );
  atexit(FUN_142dc8c88);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03a80,L"r.Lumen.Visualize.HardwareRayTracing.Retrace.FarField",&local_58,
                L"Determines whether a second trace will be fired for far-field contribution (default = 1"
               );
  atexit(FUN_142dc8ccd);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03a98,L"r.Lumen.Visualize.HardwareRayTracing.Compact",&local_58,
                L"Determines whether a second trace will be compacted before traversal (default = 1"
               );
  atexit(FUN_142dc8d12);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,1);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca03ab0,L"r.Lumen.Visualize.HardwareRayTracing.BucketMaterials",&local_58,
                L"Determines whether a secondary traces will be bucketed for coherent material access (default = 1"
               );
  atexit(FUN_142dc8d57);
  local_50 = FUN_145e4da14;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca03be0,&local_58);
  local_50 = FUN_145e7ce30;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca03d08,&local_58);
  local_50 = FUN_145ece7bc;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca03e30,&local_58);
  local_50 = FUN_145f10b98;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca03f58,&local_58);
  local_50 = FUN_145ecec96;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca04080,&local_58);
  local_50 = FUN_145ef9be4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca041a8,&local_58);
  local_50 = FUN_145e22f54;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca042d0,&local_58);
  local_50 = FUN_146094d8c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca043f8,&local_58);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca04410,L"r.Lumen.RadianceCache.Visualize",&DAT_14ca04408,&DAT_149dfb77a);
  atexit(FUN_142dc8dfc);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca04428,L"r.Lumen.TranslucencyVolume.RadianceCache.Visualize",&DAT_14ca04420,
                &DAT_149dfb77a);
  atexit(FUN_142dc8e41);
  local_68._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14ca04438,L"r.Lumen.RadianceCache.VisualizeRadiusScale",&DAT_14c7607f8,
                L"Scales the size of the spheres used to visualize radiance cache samples.");
  atexit(FUN_142dc8e86);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca04448,L"r.Lumen.RadianceCache.VisualizeClipmapIndex",&DAT_14c7607fc,
                L"Selects which radiance cache clipmap should be visualized. -1 visualizes all clipmaps at once."
               );
  atexit(FUN_142dc8ecb);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca04460,L"r.Lumen.RadianceCache.VisualizeProbeRadius",&DAT_14ca04458,
                L"Whether to visualize radiance cache probe radius");
  atexit(FUN_142dc8f10);
  local_50 = FUN_145edbef0;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca04588,&local_58);
  local_50 = FUN_145edc3d6;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca046b0,&local_58);
  local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca046c0,L"r.MegaLights.EnableForProject",&local_58,
                L"Whether to use MegaLights by default, but this can still be overridden by Post Process Volumes, or disabled per-light. MegaLights uses stochastic sampling to render many shadow casting lights efficiently, with a consistent low GPU cost. MegaLights requires Hardware Ray Tracing, and does not support Directional Lights. Experimental feature."
               );
  atexit(FUN_142dc8f6d);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca046d8,L"r.MegaLights.Allowed",&local_58,
                L"Whether the MegaLights feature is allowed by scalability and device profiles.");
  atexit(FUN_142dc8fb2);
  local_58._0_4_ = 4;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca046f0,L"r.MegaLights.NumSamplesPerPixel",&local_58,
                L"Number of samples (shadow rays) per half-res pixel.\n2 - 0.5 trace per pixel\n4 - 1 trace per pixel\n16 - 4 traces per pixel"
               );
  atexit(FUN_142dc8ff7);
  local_58._0_4_ = 0x3a83126f;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca04708,L"r.MegaLights.MinSampleWeight",&local_58,
                L"Determines minimal sample influence on final pixels. Used to skip samples which would have minimal impact to the final image even if light is fully visible."
               );
  atexit(FUN_142dc903c);
  local_58._0_4_ = 2;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04720,L"r.MegaLights.GuideByHistory",&local_58,
                L"Whether to reduce sampling chance for lights which were hidden last frame. Reduces noise in areas where bright lights are shadowed.\n0 - disabled\n1 - more rays towards visible lights\n2 - more rays towards visible parts of lights"
               );
  atexit(FUN_142dc9081);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04738,L"r.MegaLights.GuideByHistory.Filter",&local_58,
                L"Whether to filter history by sharing visibility between nearby tiles.");
  atexit(FUN_142dc90c6);
  local_58._0_4_ = 0x3dcccccd;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca04750,L"r.MegaLights.GuideByHistory.HiddenPDFWeightScale",&local_58,
                L"Weight applied to PDF of lights which were hidden last frame. Low values efficiently discard samples from hidden lights, but add lag in discovering newly enabled lights."
               );
  atexit(FUN_142dc910b);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04768,L"r.MegaLights.ShadingConfidence",&local_58,
                L"Whether to use shading confidence to reduce denoising and passthrough original signal to TSR for pixels which are well sampled."
               );
  atexit(FUN_142dc9150);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04780,L"r.MegaLights.Temporal",&local_58,
                L"Whether to use temporal accumulation for shadow mask.");
  atexit(FUN_142dc9195);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04798,L"r.MegaLights.Temporal.MinFramesAccumulatedForHistoryMiss",&local_58
                ,
                L"Minimal amount of history length when reducing history length due to a history miss. Higher values than 1 soften and slowdown transitions."
               );
  atexit(FUN_142dc91da);
  local_58._0_4_ = 2;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca047b0,L"r.MegaLights.Temporal.MinFramesAccumulatedForHighConfidence",
                &local_58,
                L"Minimal amount of history length when reducing history length due to a high confidence. Higher values than 1 soften image, but reduce noise in high confidence areas."
               );
  atexit(FUN_142dc921f);
  local_58._0_4_ = 0xc;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca047c8,L"r.MegaLights.Temporal.MaxFramesAccumulated",&local_58,
                L"Max history length when accumulating frames. Lower values have less ghosting, but more noise."
               );
  atexit(FUN_142dc9264);
  local_58._0_4_ = 0x3f800000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca047e0,L"r.MegaLights.Temporal.NeighborhoodClampScale",&local_58,
                L"Scales how permissive is neighborhood clamp. Higher values increase ghosting, but reduce noise and instability."
               );
  atexit(FUN_142dc92a9);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca047f8,L"r.MegaLights.Spatial",&local_58,
                L"Whether denoiser should run spatial filter.");
  atexit(FUN_142dc92ee);
  local_58._0_4_ = 0x461c4000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca04810,L"r.MegaLights.Spatial.DepthWeightScale",&local_58,
                L"Scales the depth weight of the spatial filter. Smaller values allow for more sample reuse, but also introduce more bluriness between unrelated surfaces."
               );
  atexit(FUN_142dc9333);
  local_58._0_4_ = 0x41000000;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca04828,L"r.MegaLights.Spatial.KernelRadius",&local_58,
                L"Spatial filter kernel radius in pixels");
  atexit(FUN_142dc9378);
  local_58._0_4_ = 4;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04840,L"r.MegaLights.Spatial.NumSamples",&local_58,
                L"Number of spatial filter samples.");
  atexit(FUN_142dc93bd);
  local_58._0_4_ = 3;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04858,L"r.MegaLights.Spatial.MaxDisocclusionFrames",&local_58,
                L"Number of of history frames to boost spatial filtering in order to minimize noise after disocclusion."
               );
  atexit(FUN_142dc9402);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04870,L"r.MegaLights.WaveOps",&local_58,
                L"Whether to use wave ops. Useful for debugging.");
  atexit(FUN_142dc9447);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca04888,L"r.MegaLights.Debug",&local_58,
                L"Whether to enabled debug mode, which prints various extra debug information from shaders.0 - Disable\n1 - Visualize tracing\n2 - Visualize sampling"
               );
  atexit(FUN_142dc948c);
  local_58._0_4_ = 0xffffffff;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca048a0,L"r.MegaLights.Debug.LightId",&local_58,
                L"Which light to show debug info for. When set to -1, uses the currently selected light in editor."
               );
  atexit(FUN_142dc94d1);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca048b8,L"r.MegaLights.Debug.VisualizeLight",&local_58,
                L"Whether to visualize selected light. Useful to find in in the level.");
  atexit(FUN_142dc9516);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca048d8,L"r.MegaLights.Reset",&DAT_14ca048d0,L"Reset history for debugging.")
  ;
  atexit(FUN_142dc955b);
  local_68._0_4_ = 0x20;
  FUN_141471170(&DAT_14ca048f0,L"r.MegaLights.ResetEveryNthFrame",&DAT_14ca048e8,
                L"Reset history every Nth frame for debugging.");
  atexit(FUN_142dc95a0);
  local_58._0_4_ = 0xffffffff;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca04900,L"r.MegaLights.FixedStateFrameIndex",&local_58,
                L"Whether to override View.StateFrameIndex for debugging.");
  atexit(FUN_142dc95e5);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04918,L"r.MegaLights.TexturedRectLights",&local_58,
                L"Whether to support textured rect lights.");
  atexit(FUN_142dc962a);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04930,L"r.MegaLights.LightFunctions",&local_58,
                L"Whether to support light functions.");
  atexit(FUN_142dc966f);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04948,L"r.MegaLights.IESProfiles",&local_58,
                L"Whether to support IES profiles on lights.");
  atexit(FUN_142dc96b4);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04960,L"r.MegaLights.Volume",&local_58,
                L"Whether to enable a translucency volume used for Volumetric Fog and Volume Lit Translucency."
               );
  atexit(FUN_142dc96f9);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04978,L"r.MegaLights.Volume.HZBOcclusionTest",&local_58,
                L"Whether to skip computation for cells occluded by HZB.");
  atexit(FUN_142dc973e);
  local_58._0_4_ = 2;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca04990,L"r.MegaLights.Volume.NumSamplesPerVoxel",&local_58,
                L"Number of samples (shadow rays) per half-res voxel.\n2 - 0.25 trace per voxel\n4 - 0.5 trace per pixel"
               );
  atexit(FUN_142dc9783);
  local_58._0_4_ = 0x3dcccccd;
  local_68._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14ca049a8,L"r.MegaLights.Volume.MinSampleWeight",&local_58,
                L"Determines minimal sample influence on lighting cached in a volume. Used to skip samples which would have minimal impact to the final image even if light is fully visible."
               );
  atexit(FUN_142dc97c8);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca049c0,L"r.MegaLights.Volume.StochasticSampleInterpolation",&local_58,
                L"Whether to approximate bilinear filtering using stochastic interpolation during shading. Makes shading pass faster, but may introduce a bit of noise."
               );
  atexit(FUN_142dc980d);
  local_58._0_4_ = 1;
  local_68._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14ca049d8,L"r.MegaLights.Volume.LightFunctions",&local_58,
                L"Whether to support light functions inside the mega light translucency volume.");
  atexit(FUN_142dc9852);
  local_58._0_4_ = 0;
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca049f0,L"r.MegaLights.Volume.Debug",&local_58,
                L"Whether to enabled debug mode, which prints various extra debug information from volume shaders.0 - Disable\n1 - Visualize tracing\n2 - Visualize sampling"
               );
  atexit(FUN_142dc9897);
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x10);
  local_68._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca04a08,L"r.MegaLights.Volume.DebugSliceIndex",&local_58,
                L"Which volume slice to visualize.");
  atexit(FUN_142dc98dc);
  local_68 = (undefined8 **)CONCAT44(local_68._4_4_,0x20);
  FUN_141471170(&DAT_14ca04a28,L"r.MegaLights.DefaultShadowMethod",&DAT_14ca04a20,
                L"The default shadowing method for MegaLights, unless over-ridden on the light component.\n0 - Ray Tracing. Preferred method, which guarantees fixed MegaLights cost and correct area shadows, but is dependent on the BVH representation quality.\n1 - Virtual Shadow Maps. Has a significant per light cost, but can cast shadows directly from the Nanite geometry using rasterization."
               );
  atexit(FUN_142dc9921);
  local_50 = FUN_145e8751e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca04b50,&local_58);
  local_50 = FUN_145e87a8e;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca04c78,&local_58);
  local_50 = FUN_145e87ffe;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca04da0,&local_58);
  local_50 = FUN_145edc8bc;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca04ec8,&local_58);
  local_50 = FUN_145f4ebd2;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca04ff0,&local_58);
  local_50 = FUN_145f73fb4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca05118,&local_58);
  local_50 = FUN_145f2fdb4;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca05240,&local_58);
  local_50 = FUN_145e8848a;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca05368,&local_58);
  local_50 = FUN_145f6b52c;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca05490,&local_58);
  local_50 = FUN_145f4f1c8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca055b8,&local_58);
  local_50 = FUN_145f303a8;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca056e0,&local_58);
  local_50 = FUN_145e889fa;
  local_58 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca05808,&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de0f38 FUN_142de0f38 body=69 status=ok
// SIG undefined FUN_142de0f38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de0f38(void)

{
  _DAT_14ca085c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de0f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca085c8,1);
  return;
}



// FUNCTION 142de0f7d FUN_142de0f7d body=69 status=ok
// SIG undefined FUN_142de0f7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de0f7d(void)

{
  _DAT_14ca085d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de0fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca085e0,1);
  return;
}



// FUNCTION 142de0fc2 FUN_142de0fc2 body=69 status=ok
// SIG undefined FUN_142de0fc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de0fc2(void)

{
  _DAT_14ca085f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de1004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca085f8,1);
  return;
}



// FUNCTION 142de1007 FUN_142de1007 body=69 status=ok
// SIG undefined FUN_142de1007(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de1007(void)

{
  _DAT_14ca08608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de1049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08610,1);
  return;
}



// FUNCTION 142de104c FUN_142de104c body=69 status=ok
// SIG undefined FUN_142de104c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de104c(void)

{
  _DAT_14ca08620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de108e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08628,1);
  return;
}



// FUNCTION 142de1091 FUN_142de1091 body=69 status=ok
// SIG undefined FUN_142de1091(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de1091(void)

{
  _DAT_14ca08638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de10d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08640,1);
  return;
}



// FUNCTION 142de10d6 FUN_142de10d6 body=69 status=ok
// SIG undefined FUN_142de10d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de10d6(void)

{
  _DAT_14ca08650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de1118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08658,1);
  return;
}



// FUNCTION 142de111b FUN_142de111b body=69 status=ok
// SIG undefined FUN_142de111b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de111b(void)

{
  _DAT_14ca08668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de115d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08670,1);
  return;
}



// FUNCTION 142de1160 FUN_142de1160 body=69 status=ok
// SIG undefined FUN_142de1160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de1160(void)

{
  _DAT_14ca08680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de11a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08688,1);
  return;
}



// FUNCTION 142de11a5 FUN_142de11a5 body=69 status=ok
// SIG undefined FUN_142de11a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de11a5(void)

{
  _DAT_14ca08698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de11e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca086a0,1);
  return;
}



// FUNCTION 142de11ea FUN_142de11ea body=69 status=ok
// SIG undefined FUN_142de11ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de11ea(void)

{
  _DAT_14ca086b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca086b8,1);
  return;
}



// FUNCTION 142de122f FUN_142de122f body=69 status=ok
// SIG undefined FUN_142de122f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de122f(void)

{
  _DAT_14ca086c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de1271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca086d0,1);
  return;
}



// FUNCTION 142de1274 FUN_142de1274 body=69 status=ok
// SIG undefined FUN_142de1274(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de1274(void)

{
  _DAT_14ca086e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de12b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca086e8,1);
  return;
}



// FUNCTION 142de12b9 FUN_142de12b9 body=69 status=ok
// SIG undefined FUN_142de12b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de12b9(void)

{
  _DAT_14ca086f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de12fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08700,1);
  return;
}



// FUNCTION 142de12fe FUN_142de12fe body=69 status=ok
// SIG undefined FUN_142de12fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de12fe(void)

{
  _DAT_14ca08710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de1340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08718,1);
  return;
}



// FUNCTION 142de1343 FUN_142de1343 body=69 status=ok
// SIG undefined FUN_142de1343(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de1343(void)

{
  _DAT_14ca08728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de1385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08730,1);
  return;
}



// FUNCTION 142de1388 FUN_142de1388 body=69 status=ok
// SIG undefined FUN_142de1388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de1388(void)

{
  _DAT_14ca08740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de13ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08748,1);
  return;
}



// FUNCTION 142de13cd FUN_142de13cd body=69 status=ok
// SIG undefined FUN_142de13cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de13cd(void)

{
  _DAT_14ca08758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de140f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08760,1);
  return;
}



// FUNCTION 142de1412 FUN_142de1412 body=69 status=ok
// SIG undefined FUN_142de1412(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de1412(void)

{
  _DAT_14ca08770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de1454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca08778,1);
  return;
}



// FUNCTION 142de1457 FUN_142de1457 body=238 status=ok
// SIG undefined FUN_142de1457(void)

ulonglong FUN_142de1457(longlong param_1)

{
  char cVar1;
  int *piVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(**(longlong **)(param_1 + 8) + 0x2954) & 1) != 0) {
    if (*(int *)(DAT_14ca046e8 + 4) == 0) {
      return 0;
    }
    if (-1 < *(int *)(param_1 + 0x4c)) {
      return 0;
    }
    piVar2 = &DAT_14c760db4;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    }
    if (((((3 < (int)(&DAT_14ca814b8)
                     [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar2 * 2) * 0xf]) &&
          (((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar2 * 2) * 0x3c]
           & 3) != 0)) &&
         ((cVar1 = FUN_1472390ef(param_1), cVar1 != '\0' ||
          ((cVar1 = FUN_14498f84a(), cVar1 != '\0' && (*(int *)(DAT_14ca08660 + 4) != 0)))))) &&
        (*(int *)(DAT_14ca08648 + 4) != 0)) &&
       ((cVar1 = FUN_14498f84a(), cVar1 != '\0' && (*(int *)(DAT_14ca08660 + 4) != 0)))) {
      cVar1 = FUN_142dc9987(param_1);
      if (cVar1 == '\0') {
        return 1;
      }
      uVar3 = FUN_1472390ef(param_1);
      return uVar3 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 142de15c9 FUN_142de15c9 body=3166 status=ok
// SIG undefined FUN_142de15c9(void)

ulonglong *
FUN_142de15c9(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,void *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
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
  undefined4 uVar18;
  ulonglong *puVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  bool bVar30;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar20 = (int)((ulonglong)param_4 >> 0x20) * (int)param_4;
  uVar24 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar24 = DAT_14ca84e48;
  }
  local_60 = uVar24 + (uVar24 == 0);
  local_50 = 0;
  if (DAT_14ca84e48 <= uVar20) {
    uVar20 = DAT_14ca84e48;
  }
  uStack_5c = CONCAT44(0x4109,uVar20 + (uVar20 == 0));
  plVar1 = (longlong *)(param_3 + 0x70);
  uVar27 = *(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar21 = uVar27 + 0x150;
  local_a0 = param_2;
  local_90 = param_1;
  if (*(ulonglong *)(param_3 + 0x78) < uVar21) {
    FUN_140023dd8(plVar1,0x160);
    uVar27 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar21 = uVar27 + 0x150;
  }
  lVar2 = param_3 + 0x188;
  *(ulonglong *)(param_3 + 0x70) = uVar21;
  FUN_1456bd266(uVar27,L"MegaLightsParameters.CompactedTraceTexelData",&local_60,0);
  iVar4 = *(int *)(param_3 + 400);
  *(uint *)(param_3 + 400) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x194) < iVar4 + 1U) {
    FUN_144737178(lVar2,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x188) + (longlong)iVar4 * 8) = uVar27;
  *(int *)(uVar27 + 0x7c) = *(int *)(param_3 + 400) + -1;
  local_50 = 0;
  uVar20 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar20 = DAT_14ca84e48;
  }
  local_60 = uVar20 + (uVar20 == 0);
  uStack_5c = 0x410900000001;
  uVar28 = *(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar21 = uVar28 + 0x150;
  if (*(ulonglong *)(param_3 + 0x78) < uVar21) {
    FUN_140023dd8(plVar1,0x160);
    uVar28 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar21 = uVar28 + 0x150;
  }
  *(ulonglong *)(param_3 + 0x70) = uVar21;
  FUN_1456bd266(uVar28,L"MegaLightsParameters.CompactedTraceTexelAllocator",&local_60,0);
  iVar4 = *(int *)(param_3 + 400);
  *(uint *)(param_3 + 400) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x194) < iVar4 + 1U) {
    FUN_144737178(lVar2,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x188) + (longlong)iVar4 * 8) = uVar28;
  *(int *)(uVar28 + 0x7c) = *(int *)(param_3 + 400) + -1;
  uVar20 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar20 = DAT_14ca84e48;
  }
  local_60 = uVar20 + (uVar20 == 0);
  uVar20 = 3;
  if (DAT_14ca84e48 < 3) {
    uVar20 = DAT_14ca84e48;
  }
  local_50 = 0;
  uStack_5c = CONCAT44(0x4189,uVar20 + (uVar20 == 0));
  uVar26 = *(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar21 = uVar26 + 0x150;
  if (*(ulonglong *)(param_3 + 0x78) < uVar21) {
    FUN_140023dd8(plVar1,0x160);
    uVar26 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar21 = uVar26 + 0x150;
  }
  *(ulonglong *)(param_3 + 0x70) = uVar21;
  FUN_1456bd266(uVar26,L"MegaLights.CompactedTraceTexelIndirectArgs",&local_60,0);
  iVar4 = *(int *)(param_3 + 400);
  *(uint *)(param_3 + 400) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x194) < iVar4 + 1U) {
    FUN_144737178(lVar2,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x188) + (longlong)iVar4 * 8) = uVar26;
  *(int *)(uVar26 + 0x7c) = *(int *)(param_3 + 400) + -1;
  puVar29 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar29 + 8;
  if (*(undefined8 **)(param_3 + 0x78) < puVar23) {
    FUN_140023dd8(plVar1,0x48);
    puVar29 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar29 + 8;
  }
  local_b8 = param_3 + 0x198;
  *(undefined8 **)(param_3 + 0x70) = puVar23;
  puVar29[1] = *(undefined8 *)(uVar28 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 2;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar29 + 5) = 0;
  *puVar29 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar29 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar29 + 0x32) = 0;
  puVar29[7] = uVar28;
  iVar4 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar4 + 1U;
  local_98 = uVar26;
  if (*(uint *)(param_3 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_b8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar4 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  FUN_1405bfba3(param_3,puVar29,0,2);
  puVar29 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar23 = puVar29 + 0x5e;
  if (*(undefined8 **)(param_3 + 0x78) < puVar23) {
    FUN_140023dd8(plVar1,0x300);
    puVar29 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar23 = puVar29 + 0x5e;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar23;
  *puVar29 = &PTR_FUN_14a290748;
  puVar23 = puVar29 + 2;
  FUN_147227eb4(puVar23);
  local_a8 = param_3 + 0x98;
  puVar29[0x5a] = 0;
  puVar29[0x5b] = 0;
  puVar29[0x5c] = 0;
  iVar4 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(local_a8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar4 * 8) = puVar29;
  puVar25 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar22 = puVar25 + 8;
  if (*(undefined8 **)(param_3 + 0x78) < puVar22) {
    FUN_140023dd8(plVar1,0x48);
    puVar25 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar22 = puVar25 + 8;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar22;
  puVar25[1] = *(undefined8 *)(uVar27 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar25 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
  puVar25[7] = uVar27;
  iVar4 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar4 + 1U;
  local_b0 = plVar1;
  if (*(uint *)(param_3 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_b8,iVar4);
  }
  plVar1 = local_b0;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar4 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar29[0x5a] = puVar25;
  puVar25 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar22 = puVar25 + 8;
  if (*(undefined8 **)(param_3 + 0x78) < puVar22) {
    FUN_140023dd8(local_b0,0x48);
    puVar25 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar22 = puVar25 + 8;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar22;
  puVar25[1] = *(undefined8 *)(uVar28 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar25 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar25 + 0x32) = 0;
  puVar25[7] = uVar28;
  iVar4 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_b8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar4 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar29[0x5b] = puVar25;
  memcpy(puVar23,param_6,0x270);
  puVar29[0x50] = *(undefined8 *)((longlong)param_6 + 0x270);
  puVar29[0x51] = *(undefined8 *)((longlong)param_6 + 0x278);
  puVar29[0x58] = *(undefined8 *)((longlong)param_6 + 0x2b0);
  uVar8 = *(undefined4 *)((longlong)param_6 + 0x280);
  uVar9 = *(undefined4 *)((longlong)param_6 + 0x284);
  uVar10 = *(undefined4 *)((longlong)param_6 + 0x288);
  uVar11 = *(undefined4 *)((longlong)param_6 + 0x28c);
  uVar12 = *(undefined4 *)((longlong)param_6 + 0x290);
  uVar13 = *(undefined4 *)((longlong)param_6 + 0x294);
  uVar14 = *(undefined4 *)((longlong)param_6 + 0x298);
  uVar15 = *(undefined4 *)((longlong)param_6 + 0x29c);
  uVar16 = *(undefined4 *)((longlong)param_6 + 0x2a4);
  uVar17 = *(undefined4 *)((longlong)param_6 + 0x2a8);
  uVar18 = *(undefined4 *)((longlong)param_6 + 0x2ac);
  *(undefined4 *)(puVar29 + 0x56) = *(undefined4 *)((longlong)param_6 + 0x2a0);
  *(undefined4 *)((longlong)puVar29 + 0x2b4) = uVar16;
  *(undefined4 *)(puVar29 + 0x57) = uVar17;
  *(undefined4 *)((longlong)puVar29 + 700) = uVar18;
  *(undefined4 *)(puVar29 + 0x54) = uVar12;
  *(undefined4 *)((longlong)puVar29 + 0x2a4) = uVar13;
  *(undefined4 *)(puVar29 + 0x55) = uVar14;
  *(undefined4 *)((longlong)puVar29 + 0x2ac) = uVar15;
  *(undefined4 *)(puVar29 + 0x52) = uVar8;
  *(undefined4 *)((longlong)puVar29 + 0x294) = uVar9;
  *(undefined4 *)(puVar29 + 0x53) = uVar10;
  *(undefined4 *)((longlong)puVar29 + 0x29c) = uVar11;
  puVar29[0x5c] = param_5;
  if ((*(int *)(DAT_14ca04880 + 4) == 0) || (DAT_14ca84f10 != '\x01')) {
    bVar30 = false;
  }
  else {
    bVar30 = ((&DAT_14ca814cd)
              [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_a0 + 0x3090) * 2) *
               0x3c] & 3) != 0;
  }
  bVar6 = DAT_14ca84f14 < 0x21;
  bVar7 = 0x1f < DAT_14ca84f18;
  uVar5 = *(undefined8 *)(local_a0 + 0x13818);
  FUN_145e88f6a();
  FUN_1448e935e(uVar5,&local_60,&DAT_14ca087f0,bVar7 & bVar6 & bVar30);
  FUN_145e88f6a();
  local_70 = local_60;
  uStack_6c = (undefined4)uStack_5c;
  uStack_68 = uStack_5c._4_4_;
  uStack_64 = uStack_54;
  iVar4 = *(int *)((longlong)param_6 + 0x11c) + 0xf;
  local_78 = *(int *)((longlong)param_6 + 0x11c) + 0x1e;
  if (-1 < iVar4) {
    local_78 = iVar4;
  }
  local_78 = local_78 >> 4;
  iVar4 = *(int *)((longlong)param_6 + 0x118) + 0xf;
  local_7c = *(int *)((longlong)param_6 + 0x118) + 0x1e;
  if (-1 < iVar4) {
    local_7c = iVar4;
  }
  local_7c = local_7c >> 4;
  local_c8 = (undefined1 **)&local_7c;
  local_74 = 1;
  FUN_14723a4b6(param_3,&local_60,&local_70,puVar23);
  plVar1 = local_b0;
  puVar29 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar23 = puVar29 + 0x5c;
  if (*(undefined8 **)(param_3 + 0x78) < puVar23) {
    FUN_140023dd8(local_b0,0x2f0);
    puVar29 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar23 = puVar29 + 0x5c;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar23;
  *puVar29 = &PTR_FUN_14a290768;
  puVar23 = puVar29 + 2;
  FUN_147227eb4(puVar23);
  puVar29[0x5a] = 0;
  puVar29[0x5b] = 0;
  iVar4 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(local_a8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar4 * 8) = puVar29;
  local_a8 = uVar27;
  memcpy(puVar23,param_6,0x270);
  uVar21 = local_98;
  plVar1 = local_b0;
  puVar29[0x50] = *(undefined8 *)((longlong)param_6 + 0x270);
  puVar29[0x51] = *(undefined8 *)((longlong)param_6 + 0x278);
  puVar29[0x58] = *(undefined8 *)((longlong)param_6 + 0x2b0);
  uVar8 = *(undefined4 *)((longlong)param_6 + 0x280);
  uVar9 = *(undefined4 *)((longlong)param_6 + 0x284);
  uVar10 = *(undefined4 *)((longlong)param_6 + 0x288);
  uVar11 = *(undefined4 *)((longlong)param_6 + 0x28c);
  uVar12 = *(undefined4 *)((longlong)param_6 + 0x290);
  uVar13 = *(undefined4 *)((longlong)param_6 + 0x294);
  uVar14 = *(undefined4 *)((longlong)param_6 + 0x298);
  uVar15 = *(undefined4 *)((longlong)param_6 + 0x29c);
  uVar16 = *(undefined4 *)((longlong)param_6 + 0x2a4);
  uVar17 = *(undefined4 *)((longlong)param_6 + 0x2a8);
  uVar18 = *(undefined4 *)((longlong)param_6 + 0x2ac);
  *(undefined4 *)(puVar29 + 0x56) = *(undefined4 *)((longlong)param_6 + 0x2a0);
  *(undefined4 *)((longlong)puVar29 + 0x2b4) = uVar16;
  *(undefined4 *)(puVar29 + 0x57) = uVar17;
  *(undefined4 *)((longlong)puVar29 + 700) = uVar18;
  *(undefined4 *)(puVar29 + 0x54) = uVar12;
  *(undefined4 *)((longlong)puVar29 + 0x2a4) = uVar13;
  *(undefined4 *)(puVar29 + 0x55) = uVar14;
  *(undefined4 *)((longlong)puVar29 + 0x2ac) = uVar15;
  *(undefined4 *)(puVar29 + 0x52) = uVar8;
  *(undefined4 *)((longlong)puVar29 + 0x294) = uVar9;
  *(undefined4 *)(puVar29 + 0x53) = uVar10;
  *(undefined4 *)((longlong)puVar29 + 0x29c) = uVar11;
  cVar3 = *(char *)(local_98 + 0x68);
  puVar25 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar22 = puVar25 + 8;
  if (*(undefined8 **)(param_3 + 0x78) < puVar22) {
    FUN_140023dd8(local_b0,0x48);
    puVar25 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar22 = puVar25 + 8;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar22;
  puVar25[1] = *(undefined8 *)(uVar21 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 2;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar25 + 6) = cVar3 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar25 + 0x31) = 0;
  puVar25[7] = uVar21;
  iVar4 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_b8,iVar4);
  }
  plVar1 = local_b0;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar4 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar29[0x5a] = puVar25;
  puVar25 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar22 = puVar25 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar22) {
    FUN_140023dd8(local_b0,0x50);
    puVar25 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar22 = puVar25 + 9;
  }
  uVar21 = local_a8;
  *(undefined8 **)(param_3 + 0x70) = puVar22;
  puVar25[1] = *(undefined8 *)(uVar28 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 3;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *puVar25 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar25 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar25 + 0x2c) = 0xffffffff00000000;
  puVar25[7] = 0;
  puVar25[8] = uVar28;
  iVar4 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_b8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar4 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar29[0x5b] = puVar25;
  FUN_14723a568(*(undefined8 *)(local_a0 + 0x13818),&local_60);
  local_c8 = &local_88;
  local_88 = &DAT_100000001;
  local_80 = 1;
  FUN_14723a5d5(param_3,&local_70,&local_60,puVar23);
  puVar19 = local_90;
  plVar1 = local_b0;
  *local_90 = 0;
  *(undefined4 *)(local_90 + 1) = 4;
  local_90[2] = 0;
  local_90[3] = 0;
  puVar29 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar29 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar23) {
    FUN_140023dd8(local_b0,0x50);
    puVar29 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar29 + 9;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar23;
  puVar29[1] = *(undefined8 *)(uVar28 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 3;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *puVar29 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar29 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
  puVar29[7] = 0;
  puVar29[8] = uVar28;
  iVar4 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_b8,iVar4);
  }
  plVar1 = local_b0;
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar4 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar19[3] = (ulonglong)puVar29;
  puVar29 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar29 + 9;
  if (*(undefined8 **)(param_3 + 0x78) < puVar23) {
    FUN_140023dd8(local_b0,0x50);
    puVar29 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar29 + 9;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar23;
  puVar29[1] = *(undefined8 *)(uVar21 + 8);
  puVar29[2] = 0;
  *(undefined1 *)(puVar29 + 3) = 3;
  *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
  *puVar29 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar29 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
  puVar29[7] = 0;
  puVar29[8] = uVar21;
  iVar4 = *(int *)(param_3 + 0x1a0);
  *(uint *)(param_3 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_b8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x198) + (longlong)iVar4 * 8) = puVar29;
  *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_3 + 0x1a0) + -1;
  puVar19[2] = (ulonglong)puVar29;
  *puVar19 = local_98;
  *(undefined4 *)(puVar19 + 1) = 4;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return puVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de2228 FUN_142de2228 body=9236 status=ok
// SIG undefined FUN_142de2228(void)

void FUN_142de2228(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 *param_8,
                  ulonglong param_9,longlong param_10,int *param_11,longlong param_12,void *param_13
                  )

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char cVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  int *piVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  int iVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  longlong *plVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  longlong *local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  int local_194;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 *local_158;
  undefined8 *puStack_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_105;
  int local_104;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  longlong local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  iVar32 = *(int *)(DAT_14ca04a00 + 4);
  uVar21 = 0;
  if (iVar32 == 0) {
    uVar21 = *(undefined4 *)(DAT_14ca04898 + 4);
  }
  local_190 = (longlong *)CONCAT44(local_190._4_4_,uVar21);
  local_188 = param_1;
  if (param_6 != 0) {
    local_1d0 = param_13;
    local_1d8 = param_8;
    local_194 = iVar32;
    FUN_142de15c9(&local_128,param_2,param_4,param_7);
    local_1a0 = (longlong *)(param_4 + 0x70);
    puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar24 = puVar30 + 0x62;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8(local_1a0,800);
      puVar30 = (undefined8 *)(*local_1a0 + 0xfU & 0xfffffffffffffff0);
      puVar24 = puVar30 + 0x62;
    }
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    *puVar30 = &PTR_FUN_14a2907a8;
    puVar30[2] = 0;
    *(undefined4 *)(puVar30 + 3) = 4;
    puVar30[4] = 0;
    puVar30[5] = 0;
    FUN_147227eb4(puVar30 + 6);
    puVar30[0x5e] = 0;
    *(undefined1 *)(puVar30 + 0x5f) = 1;
    puVar30[0x60] = 0;
    puVar30[0x61] = 0;
    iVar32 = *(int *)(param_4 + 0xa0);
    *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
    if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
      FUN_1448cfae8(param_4 + 0x98,iVar32);
    }
    *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
    puVar30[4] = local_118;
    puVar30[5] = CONCAT44(uStack_10c,uStack_110);
    puVar30[2] = local_128;
    puVar30[3] = CONCAT44(uStack_11c,uStack_120);
    local_1a8 = puVar30 + 2;
    memcpy(puVar30 + 6,param_13,0x270);
    plVar28 = local_1a0;
    puVar30[0x54] = *(undefined8 *)((longlong)param_13 + 0x270);
    puVar30[0x55] = *(undefined8 *)((longlong)param_13 + 0x278);
    puVar30[0x5c] = *(undefined8 *)((longlong)param_13 + 0x2b0);
    uVar21 = *(undefined4 *)((longlong)param_13 + 0x280);
    uVar6 = *(undefined4 *)((longlong)param_13 + 0x284);
    uVar7 = *(undefined4 *)((longlong)param_13 + 0x288);
    uVar8 = *(undefined4 *)((longlong)param_13 + 0x28c);
    uVar9 = *(undefined4 *)((longlong)param_13 + 0x290);
    uVar10 = *(undefined4 *)((longlong)param_13 + 0x294);
    uVar11 = *(undefined4 *)((longlong)param_13 + 0x298);
    uVar12 = *(undefined4 *)((longlong)param_13 + 0x29c);
    uVar13 = *(undefined4 *)((longlong)param_13 + 0x2a4);
    uVar14 = *(undefined4 *)((longlong)param_13 + 0x2a8);
    uVar15 = *(undefined4 *)((longlong)param_13 + 0x2ac);
    *(undefined4 *)(puVar30 + 0x5a) = *(undefined4 *)((longlong)param_13 + 0x2a0);
    *(undefined4 *)((longlong)puVar30 + 0x2d4) = uVar13;
    *(undefined4 *)(puVar30 + 0x5b) = uVar14;
    *(undefined4 *)((longlong)puVar30 + 0x2dc) = uVar15;
    *(undefined4 *)(puVar30 + 0x58) = uVar9;
    *(undefined4 *)((longlong)puVar30 + 0x2c4) = uVar10;
    *(undefined4 *)(puVar30 + 0x59) = uVar11;
    *(undefined4 *)((longlong)puVar30 + 0x2cc) = uVar12;
    *(undefined4 *)(puVar30 + 0x56) = uVar21;
    *(undefined4 *)((longlong)puVar30 + 0x2b4) = uVar6;
    *(undefined4 *)(puVar30 + 0x57) = uVar7;
    *(undefined4 *)((longlong)puVar30 + 700) = uVar8;
    uVar1 = *(undefined1 *)((longlong)param_8 + 0x94);
    puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar33 + 9;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8(local_1a0,0x50);
      puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 9;
    }
    local_1a0 = puVar30 + 0x5e;
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    puVar33[1] = param_8[1];
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 0;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar33 + 5) = 0;
    *puVar33 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar33 + 6) = uVar1;
    *(undefined1 *)(puVar33 + 7) = 0;
    *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
    puVar33[8] = param_8;
    iVar32 = *(int *)(param_4 + 0x1a0);
    *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
    if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
      FUN_1447568fc(param_4 + 0x198,iVar32);
    }
    bVar36 = (int)local_190 != 0;
    *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
    puVar30[0x61] = puVar33;
    FUN_144abaa06(param_6,&local_e8,param_4,param_3);
    *(int *)local_1a0 = (int)local_e8;
    *(int *)((longlong)local_1a0 + 4) = local_e8._4_4_;
    *(undefined4 *)(local_1a0 + 1) = uStack_e0;
    *(undefined4 *)((longlong)local_1a0 + 0xc) = uStack_dc;
    uVar3 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145e89fba();
    FUN_1448e935e(uVar3,&local_e8,&DAT_14ca09380,bVar36);
    FUN_145e89fba();
    local_148 = (int)local_e8;
    uStack_144 = local_e8._4_4_;
    uStack_140 = uStack_e0;
    uStack_13c = uStack_dc;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 0;
    local_d8 = (longlong *)0x0;
    local_1d8 = local_128;
    local_1d0 = &local_e8;
    FUN_14724729d(param_4,&local_168,&local_148,local_1a8);
    iVar32 = local_194;
    if (CONCAT44(local_e8._4_4_,(int)local_e8) != 0) {
      plVar28 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar28 = local_c8;
      }
      (**(code **)(*plVar28 + 0x10))();
      iVar32 = local_194;
    }
  }
  if (*(int *)(DAT_14ca085d0 + 4) == 0) {
    uVar1 = *(undefined1 *)(param_10 + 0x94);
    puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar30 + 9;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8((longlong *)(param_4 + 0x70),0x50);
      puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar30 + 9;
    }
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    puVar30[1] = *(undefined8 *)(param_10 + 8);
    puVar30[2] = 0;
    *(undefined1 *)(puVar30 + 3) = 0;
    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar30 + 5) = 0;
    *puVar30 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar30 + 6) = uVar1;
    *(undefined1 *)(puVar30 + 7) = 0;
    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
    puVar30[8] = param_10;
    iVar2 = *(int *)(param_4 + 0x1a0);
    *(uint *)(param_4 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_4 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_4 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar2 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    FUN_140c4fe69(param_4,puVar30,&local_e8,2);
  }
  else {
    local_1d0 = param_13;
    local_1d8 = param_8;
    local_194 = iVar32;
    FUN_142de15c9(&local_128,param_2,param_4,param_7);
    plVar28 = (longlong *)(param_4 + 0x70);
    puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar24 = puVar30 + 0x76;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8(plVar28,0x3c0);
      puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
      puVar24 = puVar30 + 0x76;
    }
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    *puVar30 = &PTR_FUN_14a2907c8;
    plVar23 = puVar30 + 2;
    local_1a8 = plVar28;
    FUN_147247860(plVar23);
    iVar32 = *(int *)(param_4 + 0xa0);
    *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
    if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
      FUN_1448cfae8(param_4 + 0x98,iVar32);
    }
    *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
    puVar30[4] = local_118;
    puVar30[5] = CONCAT44(uStack_10c,uStack_110);
    *plVar23 = (longlong)local_128;
    puVar30[3] = CONCAT44(uStack_11c,uStack_120);
    memcpy(puVar30 + 6,param_13,0x270);
    plVar28 = local_1a8;
    puVar30[0x54] = *(undefined8 *)((longlong)param_13 + 0x270);
    puVar30[0x55] = *(undefined8 *)((longlong)param_13 + 0x278);
    puVar30[0x5c] = *(undefined8 *)((longlong)param_13 + 0x2b0);
    uVar21 = *(undefined4 *)((longlong)param_13 + 0x280);
    uVar6 = *(undefined4 *)((longlong)param_13 + 0x284);
    uVar7 = *(undefined4 *)((longlong)param_13 + 0x288);
    uVar8 = *(undefined4 *)((longlong)param_13 + 0x28c);
    uVar9 = *(undefined4 *)((longlong)param_13 + 0x290);
    uVar10 = *(undefined4 *)((longlong)param_13 + 0x294);
    uVar11 = *(undefined4 *)((longlong)param_13 + 0x298);
    uVar12 = *(undefined4 *)((longlong)param_13 + 0x29c);
    uVar13 = *(undefined4 *)((longlong)param_13 + 0x2a4);
    uVar14 = *(undefined4 *)((longlong)param_13 + 0x2a8);
    uVar15 = *(undefined4 *)((longlong)param_13 + 0x2ac);
    *(undefined4 *)(puVar30 + 0x5a) = *(undefined4 *)((longlong)param_13 + 0x2a0);
    *(undefined4 *)((longlong)puVar30 + 0x2d4) = uVar13;
    *(undefined4 *)(puVar30 + 0x5b) = uVar14;
    *(undefined4 *)((longlong)puVar30 + 0x2dc) = uVar15;
    *(undefined4 *)(puVar30 + 0x58) = uVar9;
    *(undefined4 *)((longlong)puVar30 + 0x2c4) = uVar10;
    *(undefined4 *)(puVar30 + 0x59) = uVar11;
    *(undefined4 *)((longlong)puVar30 + 0x2cc) = uVar12;
    *(undefined4 *)(puVar30 + 0x56) = uVar21;
    *(undefined4 *)((longlong)puVar30 + 0x2b4) = uVar6;
    *(undefined4 *)(puVar30 + 0x57) = uVar7;
    *(undefined4 *)((longlong)puVar30 + 700) = uVar8;
    uVar1 = *(undefined1 *)((longlong)param_8 + 0x94);
    puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar33 + 9;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8(local_1a8,0x50);
      puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 9;
    }
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    puVar33[1] = param_8[1];
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 0;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar33 + 5) = 0;
    *puVar33 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar33 + 6) = uVar1;
    *(undefined1 *)(puVar33 + 7) = 0;
    *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
    puVar33[8] = param_8;
    iVar32 = *(int *)(param_4 + 0x1a0);
    *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
    if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
      FUN_1447568fc(param_4 + 0x198,iVar32);
    }
    plVar28 = local_1a8;
    *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
    puVar30[0x5e] = puVar33;
    puVar30[0x5f] = param_9;
    uVar1 = *(undefined1 *)(param_10 + 0x94);
    puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar33 + 9;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8(local_1a8,0x50);
      puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 9;
    }
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    puVar33[1] = *(undefined8 *)(param_10 + 8);
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 0;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar33 + 5) = 0;
    *puVar33 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar33 + 6) = uVar1;
    *(undefined1 *)(puVar33 + 7) = 0;
    *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
    puVar33[8] = param_10;
    iVar32 = *(int *)(param_4 + 0x1a0);
    *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
    if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
      FUN_1447568fc(param_4 + 0x198,iVar32);
    }
    bVar36 = (int)local_190 != 0;
    *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
    puVar30[0x60] = puVar33;
    FUN_142d3c72e(&local_e8,param_4,param_2,param_5);
    puVar24 = &local_e8;
    puVar33 = puVar30 + 0x62;
    for (lVar27 = 0x10; lVar27 != 0; lVar27 = lVar27 + -1) {
      *puVar33 = *puVar24;
      puVar24 = puVar24 + 1;
      puVar33 = puVar33 + 1;
    }
    *(float *)(puVar30 + 0x72) = (float)*(int *)(DAT_14ca085e8 + 4);
    *(float *)((longlong)puVar30 + 0x394) = (float)*(int *)(DAT_14ca08600 + 4);
    *(float *)(puVar30 + 0x73) = *(float *)(DAT_14ca08630 + 4) * *(float *)(param_2 + 0x109c);
    *(undefined4 *)((longlong)puVar30 + 0x39c) = 0;
    *(undefined4 *)(puVar30 + 0x74) = *(undefined4 *)(DAT_14ca08618 + 4);
    uVar3 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145f7afae();
    FUN_1448e935e(uVar3,&local_e8,&DAT_14ca09258,bVar36);
    FUN_145f7afae();
    local_148 = (int)local_e8;
    uStack_144 = local_e8._4_4_;
    uStack_140 = uStack_e0;
    uStack_13c = uStack_dc;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 0;
    local_d8 = (longlong *)0x0;
    local_1d8 = local_128;
    local_1d0 = &local_e8;
    FUN_147247907(param_4,&local_168,&local_148,plVar23);
    iVar32 = local_194;
    if (CONCAT44(local_e8._4_4_,(int)local_e8) != 0) {
      plVar28 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar28 = local_c8;
      }
      (**(code **)(*plVar28 + 0x10))();
      iVar32 = local_194;
    }
  }
  if ((((*(char *)(param_2 + 0x11a08) == '\x01') && (*(longlong *)(param_2 + 0x11c90) != 0)) &&
      (*(longlong *)(param_2 + 0x11c98) != 0)) && (*(longlong *)(param_2 + 0x11ca8) != 0)) {
    local_128 = (longlong *)0x0;
    lVar27 = 1;
    uStack_120 = CONCAT31(uStack_120._1_3_,1);
    local_118 = 0;
    uStack_110 = CONCAT31(uStack_110._1_3_,1);
    if (*(int *)(DAT_14ca08768 + 4) == 0) {
      lVar27 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x11a00);
      lVar22 = FUN_144a81af4();
      cVar20 = *(char *)(lVar22 + 0x41);
      if (cVar20 == '\x03') {
        cVar20 = '\x02';
      }
      uStack_120 = CONCAT31(uStack_120._1_3_,cVar20);
      uVar4 = *(undefined8 *)(param_2 + 0x11c90);
      local_128 = (longlong *)uVar3;
      lVar22 = FUN_1414708b2();
      cVar20 = *(char *)(lVar22 + 0x41);
      if (cVar20 == '\x03') {
        cVar20 = '\x02';
      }
      uStack_110 = CONCAT31(uStack_110._1_3_,cVar20);
      local_118 = uVar4;
    }
  }
  else {
    lVar27 = 0;
    local_128 = (longlong *)0x0;
    uStack_120 = CONCAT31(uStack_120._1_3_,1);
    local_118 = 0;
    uStack_110 = CONCAT31(uStack_110._1_3_,1);
  }
  if (*(int *)(DAT_14ca08648 + 4) != 0) {
    local_1d8 = param_8;
    local_1d0 = param_13;
    FUN_142de15c9(&local_148,param_2,param_4,param_7);
    local_168 = (longlong *)0x0;
    uStack_160 = 4;
    local_158 = (undefined8 *)0x0;
    puStack_150 = (undefined8 *)0x0;
    local_194 = iVar32;
    if ((param_12 != 0) && (*(int *)(DAT_14ca08780 + 4) != 0)) {
      uVar26 = param_11[1] * *param_11 * param_11[2];
      uVar29 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar29 = DAT_14ca84e48;
      }
      uStack_e0 = 0x4109;
      local_e8._0_4_ = uVar29 + (uVar29 == 0);
      local_d8 = (longlong *)0x0;
      if (DAT_14ca84e48 <= uVar26) {
        uVar26 = DAT_14ca84e48;
      }
      local_e8._4_4_ = uVar26 + (uVar26 == 0);
      plVar28 = (longlong *)(param_4 + 0x70);
      plVar35 = (longlong *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
      plVar23 = plVar35 + 0x2a;
      local_1b0 = plVar28;
      if (*(longlong **)(param_4 + 0x78) < plVar23) {
        FUN_140023dd8(plVar28,0x160);
        plVar35 = (longlong *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
        plVar23 = plVar35 + 0x2a;
      }
      lVar22 = param_4 + 0x188;
      *(longlong **)(param_4 + 0x70) = plVar23;
      FUN_1456bd266(plVar35,L"MegaLightsParameters.CompactedVolumeTraceTexelData",&local_e8,0);
      iVar32 = *(int *)(param_4 + 400);
      *(uint *)(param_4 + 400) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x194) < iVar32 + 1U) {
        FUN_144737178(lVar22,iVar32);
      }
      plVar28 = local_1b0;
      *(longlong **)(*(longlong *)(param_4 + 0x188) + (longlong)iVar32 * 8) = plVar35;
      *(int *)((longlong)plVar35 + 0x7c) = *(int *)(param_4 + 400) + -1;
      local_d8 = (longlong *)0x0;
      uVar26 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar26 = DAT_14ca84e48;
      }
      local_e8._0_4_ = uVar26 + (uVar26 == 0);
      local_e8._4_4_ = 1;
      uStack_e0 = 0x4109;
      uVar31 = *(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar34 = uVar31 + 0x150;
      local_1a8 = plVar35;
      if (*(ulonglong *)(param_4 + 0x78) < uVar34) {
        FUN_140023dd8(local_1b0,0x160);
        uVar31 = *plVar28 + 0xfU & 0xfffffffffffffff0;
        uVar34 = uVar31 + 0x150;
      }
      *(ulonglong *)(param_4 + 0x70) = uVar34;
      FUN_1456bd266(uVar31,L"MegaLightsParameters.CompactedVolumeTraceTexelAllocator",&local_e8,0);
      iVar32 = *(int *)(param_4 + 400);
      *(uint *)(param_4 + 400) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x194) < iVar32 + 1U) {
        FUN_144737178(lVar22,iVar32);
      }
      plVar28 = local_1b0;
      *(ulonglong *)(*(longlong *)(param_4 + 0x188) + (longlong)iVar32 * 8) = uVar31;
      *(int *)(uVar31 + 0x7c) = *(int *)(param_4 + 400) + -1;
      uVar26 = 0xc;
      if (DAT_14ca84e48 < 0xc) {
        uVar26 = DAT_14ca84e48;
      }
      local_e8._0_4_ = uVar26 + (uVar26 == 0);
      uVar26 = 3;
      if (DAT_14ca84e48 < 3) {
        uVar26 = DAT_14ca84e48;
      }
      uStack_e0 = 0x4189;
      local_d8 = (longlong *)0x0;
      local_e8._4_4_ = uVar26 + (uVar26 == 0);
      plVar35 = (longlong *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
      plVar23 = plVar35 + 0x2a;
      if (*(longlong **)(param_4 + 0x78) < plVar23) {
        FUN_140023dd8(local_1b0,0x160);
        plVar35 = (longlong *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
        plVar23 = plVar35 + 0x2a;
      }
      *(longlong **)(param_4 + 0x70) = plVar23;
      FUN_1456bd266(plVar35,L"MegaLights.CompactedVolumeTraceTexelIndirectArgs",&local_e8,0);
      iVar32 = *(int *)(param_4 + 400);
      *(uint *)(param_4 + 400) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x194) < iVar32 + 1U) {
        FUN_144737178(lVar22,iVar32);
      }
      plVar28 = local_1b0;
      *(longlong **)(*(longlong *)(param_4 + 0x188) + (longlong)iVar32 * 8) = plVar35;
      *(int *)((longlong)plVar35 + 0x7c) = *(int *)(param_4 + 400) + -1;
      puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar30 + 8;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x48);
        puVar30 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar30 + 8;
      }
      local_180 = param_4 + 0x198;
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar30[1] = *(undefined8 *)(uVar31 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 2;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar30 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
      puVar30[7] = uVar31;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_180,iVar32);
      }
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      FUN_1405bfba3(param_4,puVar30,0,2);
      plVar28 = local_1b0;
      puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar24 = puVar30 + 0x5e;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x300);
        puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
        puVar24 = puVar30 + 0x5e;
      }
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      *puVar30 = &PTR_FUN_14a290788;
      local_178 = puVar30 + 2;
      FUN_147227eb4();
      local_170 = (undefined8 *)(param_4 + 0x98);
      puVar30[0x5a] = 0;
      puVar30[0x5b] = 0;
      puVar30[0x5c] = 0;
      iVar32 = *(int *)(param_4 + 0xa0);
      *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
        FUN_1448cfae8(local_170,iVar32);
      }
      plVar28 = local_1b0;
      *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
      puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 8;
      local_1a0 = plVar35;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x48);
        puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar33 + 8;
      }
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar33[1] = local_1a8[1];
      puVar33[2] = 0;
      *(undefined1 *)(puVar33 + 3) = 2;
      *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar33 + 5) = 0;
      *puVar33 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar33 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar33 + 0x32) = 0;
      puVar33[7] = local_1a8;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_180,iVar32);
      }
      plVar28 = local_1b0;
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      puVar30[0x5a] = puVar33;
      puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 8;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x48);
        puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar33 + 8;
      }
      puVar18 = local_178;
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar33[1] = *(undefined8 *)(uVar31 + 8);
      puVar33[2] = 0;
      *(undefined1 *)(puVar33 + 3) = 2;
      *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar33 + 5) = 0;
      *puVar33 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar33 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar33 + 0x32) = 0;
      puVar33[7] = uVar31;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_180,iVar32);
      }
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      puVar30[0x5b] = puVar33;
      memcpy(puVar18,param_13,0x270);
      puVar30[0x50] = *(undefined8 *)((longlong)param_13 + 0x270);
      puVar30[0x51] = *(undefined8 *)((longlong)param_13 + 0x278);
      puVar30[0x58] = *(undefined8 *)((longlong)param_13 + 0x2b0);
      uVar21 = *(undefined4 *)((longlong)param_13 + 0x280);
      uVar6 = *(undefined4 *)((longlong)param_13 + 0x284);
      uVar7 = *(undefined4 *)((longlong)param_13 + 0x288);
      uVar8 = *(undefined4 *)((longlong)param_13 + 0x28c);
      uVar9 = *(undefined4 *)((longlong)param_13 + 0x290);
      uVar10 = *(undefined4 *)((longlong)param_13 + 0x294);
      uVar11 = *(undefined4 *)((longlong)param_13 + 0x298);
      uVar12 = *(undefined4 *)((longlong)param_13 + 0x29c);
      uVar13 = *(undefined4 *)((longlong)param_13 + 0x2a4);
      uVar14 = *(undefined4 *)((longlong)param_13 + 0x2a8);
      uVar15 = *(undefined4 *)((longlong)param_13 + 0x2ac);
      *(undefined4 *)(puVar30 + 0x56) = *(undefined4 *)((longlong)param_13 + 0x2a0);
      *(undefined4 *)((longlong)puVar30 + 0x2b4) = uVar13;
      *(undefined4 *)(puVar30 + 0x57) = uVar14;
      *(undefined4 *)((longlong)puVar30 + 700) = uVar15;
      *(undefined4 *)(puVar30 + 0x54) = uVar9;
      *(undefined4 *)((longlong)puVar30 + 0x2a4) = uVar10;
      *(undefined4 *)(puVar30 + 0x55) = uVar11;
      *(undefined4 *)((longlong)puVar30 + 0x2ac) = uVar12;
      *(undefined4 *)(puVar30 + 0x52) = uVar21;
      *(undefined4 *)((longlong)puVar30 + 0x294) = uVar6;
      *(undefined4 *)(puVar30 + 0x53) = uVar7;
      *(undefined4 *)((longlong)puVar30 + 0x29c) = uVar8;
      puVar30[0x5c] = param_12;
      if ((*(int *)(DAT_14ca04880 + 4) == 0) || (DAT_14ca84f10 != '\x01')) {
        bVar36 = false;
      }
      else {
        bVar36 = ((&DAT_14ca814cd)
                  [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2)
                   * 0x3c] & 3) != 0;
      }
      bVar37 = DAT_14ca84f14 < 0x21;
      bVar5 = 0x1f < DAT_14ca84f18;
      uVar3 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145e894da();
      FUN_1448e935e(uVar3,&local_e8,&DAT_14ca08918,bVar5 & bVar37 & bVar36);
      FUN_145e894da();
      local_f8 = (undefined1 *)CONCAT44(local_e8._4_4_,(int)local_e8);
      uStack_f0 = uStack_e0;
      uStack_ec = uStack_dc;
      iVar32 = *(int *)((longlong)param_13 + 0x218) + 7;
      local_fc = *(int *)((longlong)param_13 + 0x218) + 0xe;
      if (-1 < iVar32) {
        local_fc = iVar32;
      }
      local_fc = local_fc >> 3;
      iVar32 = *(int *)((longlong)param_13 + 0x214) + 7;
      local_100 = *(int *)((longlong)param_13 + 0x214) + 0xe;
      if (-1 < iVar32) {
        local_100 = iVar32;
      }
      local_100 = local_100 >> 3;
      iVar32 = *(int *)((longlong)param_13 + 0x210) + 7;
      local_104 = *(int *)((longlong)param_13 + 0x210) + 0xe;
      if (-1 < iVar32) {
        local_104 = iVar32;
      }
      local_104 = local_104 >> 3;
      local_1d8 = (longlong *)&local_104;
      FUN_14723a687(param_4,&local_e8,&local_f8,puVar18);
      plVar28 = local_1b0;
      puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar24 = puVar30 + 0x5c;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x2f0);
        puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
        puVar24 = puVar30 + 0x5c;
      }
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      *puVar30 = &PTR_FUN_14a290768;
      puVar24 = puVar30 + 2;
      local_178 = (undefined8 *)uVar31;
      FUN_147227eb4(puVar24);
      puVar30[0x5a] = 0;
      puVar30[0x5b] = 0;
      iVar32 = *(int *)(param_4 + 0xa0);
      *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
        FUN_1448cfae8(local_170,iVar32);
      }
      *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
      local_170 = puVar24;
      memcpy(puVar24,param_13,0x270);
      plVar23 = local_1a0;
      plVar28 = local_1b0;
      puVar30[0x50] = *(undefined8 *)((longlong)param_13 + 0x270);
      puVar30[0x51] = *(undefined8 *)((longlong)param_13 + 0x278);
      puVar30[0x58] = *(undefined8 *)((longlong)param_13 + 0x2b0);
      uVar21 = *(undefined4 *)((longlong)param_13 + 0x280);
      uVar6 = *(undefined4 *)((longlong)param_13 + 0x284);
      uVar7 = *(undefined4 *)((longlong)param_13 + 0x288);
      uVar8 = *(undefined4 *)((longlong)param_13 + 0x28c);
      uVar9 = *(undefined4 *)((longlong)param_13 + 0x290);
      uVar10 = *(undefined4 *)((longlong)param_13 + 0x294);
      uVar11 = *(undefined4 *)((longlong)param_13 + 0x298);
      uVar12 = *(undefined4 *)((longlong)param_13 + 0x29c);
      uVar13 = *(undefined4 *)((longlong)param_13 + 0x2a4);
      uVar14 = *(undefined4 *)((longlong)param_13 + 0x2a8);
      uVar15 = *(undefined4 *)((longlong)param_13 + 0x2ac);
      *(undefined4 *)(puVar30 + 0x56) = *(undefined4 *)((longlong)param_13 + 0x2a0);
      *(undefined4 *)((longlong)puVar30 + 0x2b4) = uVar13;
      *(undefined4 *)(puVar30 + 0x57) = uVar14;
      *(undefined4 *)((longlong)puVar30 + 700) = uVar15;
      *(undefined4 *)(puVar30 + 0x54) = uVar9;
      *(undefined4 *)((longlong)puVar30 + 0x2a4) = uVar10;
      *(undefined4 *)(puVar30 + 0x55) = uVar11;
      *(undefined4 *)((longlong)puVar30 + 0x2ac) = uVar12;
      *(undefined4 *)(puVar30 + 0x52) = uVar21;
      *(undefined4 *)((longlong)puVar30 + 0x294) = uVar6;
      *(undefined4 *)(puVar30 + 0x53) = uVar7;
      *(undefined4 *)((longlong)puVar30 + 0x29c) = uVar8;
      lVar22 = local_1a0[0xd];
      puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 8;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x48);
        puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar33 + 8;
      }
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar33[1] = plVar23[1];
      puVar33[2] = 0;
      *(undefined1 *)(puVar33 + 3) = 2;
      *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar33 + 5) = 0;
      *puVar33 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar33 + 6) = (char)lVar22 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar33 + 0x31) = 0;
      puVar33[7] = plVar23;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_180,iVar32);
      }
      puVar18 = local_178;
      plVar28 = local_1b0;
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      puVar30[0x5a] = puVar33;
      puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 9;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x50);
        puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar33 + 9;
      }
      puVar19 = local_170;
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar33[1] = *(undefined8 *)((longlong)puVar18 + 8);
      puVar33[2] = 0;
      *(undefined1 *)(puVar33 + 3) = 3;
      *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
      *puVar33 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar33 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
      puVar33[7] = 0;
      puVar33[8] = puVar18;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_180,iVar32);
      }
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      puVar30[0x5b] = puVar33;
      FUN_14723a568(*(undefined8 *)(param_2 + 0x13818),&local_e8);
      local_f8 = &DAT_100000001;
      uStack_f0 = 1;
      local_1d8 = &local_f8;
      FUN_14723a5d5(param_4,&local_105,&local_e8,puVar19);
      plVar28 = local_1b0;
      local_168 = (longlong *)0x0;
      uStack_160 = 4;
      local_158 = (undefined8 *)0x0;
      puStack_150 = (undefined8 *)0x0;
      puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar30 + 9;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x50);
        puVar30 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar30 + 9;
      }
      plVar28 = local_1a0;
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar30[1] = *(undefined8 *)((longlong)puVar18 + 8);
      puVar30[2] = 0;
      *(undefined1 *)(puVar30 + 3) = 3;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *puVar30 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar30 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar30 + 0x2c) = 0xffffffff00000000;
      puVar30[7] = 0;
      puVar30[8] = puVar18;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_180,iVar32);
      }
      plVar23 = local_1b0;
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 9;
      puStack_150 = puVar30;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1b0,0x50);
        puVar33 = (undefined8 *)(*plVar23 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar33 + 9;
      }
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar33[1] = local_1a8[1];
      puVar33[2] = 0;
      *(undefined1 *)(puVar33 + 3) = 3;
      *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
      *puVar33 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar33 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar33 + 0x2c) = 0xffffffff00000000;
      puVar33[7] = 0;
      puVar33[8] = local_1a8;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_180,iVar32);
      }
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      local_168 = plVar28;
      local_158 = puVar33;
    }
    uStack_160 = 4;
    if ((((*(byte *)(**(longlong **)(local_188 + 8) + 0x2954) & 1) != 0) &&
        (*(int *)(DAT_14ca046e8 + 4) != 0)) && (*(int *)(local_188 + 0x4c) < 0)) {
      piVar25 = &DAT_14c760db4;
      if (*(longlong *)(local_188 + 0x40) != 0) {
        piVar25 = (int *)(*(longlong *)(local_188 + 0x40) + 8);
      }
      if ((((3 < (int)(&DAT_14ca814b8)
                      [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar25 * 2) * 0xf]) &&
           (((&DAT_14ca814cd)
             [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar25 * 2) * 0x3c] & 3) != 0)) &&
          ((cVar20 = FUN_1472390ef(), cVar20 != '\0' ||
           ((cVar20 = FUN_14498f84a(local_188), cVar20 != '\0' && (*(int *)(DAT_14ca08660 + 4) != 0)
            ))))) && (cVar20 = FUN_1472390ef(local_188), cVar20 != '\0')) {
        local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(DAT_14ca086a8 + 4));
        plVar28 = (longlong *)(param_4 + 0x70);
        puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar24 = puVar30 + 0x6e;
        local_1b0 = plVar28;
        if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
          FUN_140023dd8(plVar28,0x380);
          puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
          puVar24 = puVar30 + 0x6e;
        }
        *(undefined8 **)(param_4 + 0x70) = puVar24;
        *puVar30 = &PTR_FUN_14a2907e8;
        local_1a0 = puVar30 + 2;
        uVar34 = 0;
        puVar30[2] = 0;
        *(undefined4 *)(puVar30 + 3) = 4;
        puVar30[4] = 0;
        puVar30[5] = 0;
        FUN_147227eb4(puVar30 + 6);
        puVar30[0x5e] = 0;
        *(undefined1 *)(puVar30 + 0x5f) = 1;
        puVar30[0x60] = 0;
        *(undefined1 *)(puVar30 + 0x61) = 1;
        puVar30[0x6c] = 0;
        puVar30[0x62] = 0;
        puVar30[99] = 0;
        puVar30[100] = 0;
        puVar30[0x68] = 0;
        puVar30[0x69] = 0;
        puVar30[0x6a] = 0;
        *(undefined1 *)(puVar30 + 0x6d) = 1;
        local_178 = (undefined8 *)(param_4 + 0x98);
        iVar32 = *(int *)(param_4 + 0xa0);
        *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
        if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
          FUN_1448cfae8(local_178,iVar32);
        }
        bVar36 = 0 < (int)local_1a8;
        bVar37 = (int)local_190 != 0;
        *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
        local_1b8 = local_1a0;
        local_1c0 = param_10;
        local_1c8 = param_9;
        local_1d0 = param_8;
        local_1d8 = &local_128;
        FUN_147239f80(param_2,param_4,&local_148,param_13);
        uVar26 = 2;
        if ((int)*(uint *)(DAT_14ca08750 + 4) < 2) {
          uVar26 = *(uint *)(DAT_14ca08750 + 4);
        }
        if (0 < (int)uVar26) {
          uVar34 = (ulonglong)uVar26;
        }
        uVar31 = (ulonglong)bVar37 << 0x30;
        cVar20 = FUN_147239156(local_188);
        uVar34 = (ulonglong)bVar36 << 0x18 | uVar31 | lVar27 << 0x28 | uVar34 << 0x20;
        if (cVar20 == '\0') {
          local_1d0 = (longlong *)*local_1a0;
          local_1d8 = local_1a0;
          local_1c8 = CONCAT71(local_1c8._1_7_,1);
          FUN_14723a82e(param_4,&local_e8,param_2,uVar34);
        }
        else {
          local_1d0 = (longlong *)CONCAT44(uStack_144,local_148);
          local_1d8 = local_1a0;
          FUN_14723a73a(param_4,&local_e8,param_2,uVar34);
        }
        plVar28 = local_1b0;
        if ((param_12 != 0) && (*(int *)(DAT_14ca08780 + 4) != 0)) {
          puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar24 = puVar30 + 0x68;
          if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
            FUN_140023dd8(local_1b0,0x350);
            puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
            puVar24 = puVar30 + 0x68;
          }
          *(undefined8 **)(param_4 + 0x70) = puVar24;
          *puVar30 = &PTR_FUN_14a2907f0;
          local_190 = puVar30 + 2;
          puVar30[2] = 0;
          *(undefined4 *)(puVar30 + 3) = 4;
          puVar30[4] = 0;
          puVar30[5] = 0;
          FUN_147227eb4(puVar30 + 6);
          puVar30[0x5e] = 0;
          puVar30[0x66] = 0;
          puVar30[0x62] = 0;
          puVar30[99] = 0;
          puVar30[100] = 0;
          *(undefined1 *)(puVar30 + 0x67) = 1;
          iVar32 = *(int *)(param_4 + 0xa0);
          *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
          if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
            FUN_1448cfae8(local_178,iVar32);
          }
          bVar36 = local_194 != 0;
          *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
          local_1d0 = local_190;
          local_1d8 = (longlong *)param_12;
          FUN_14723a243(param_2,param_4,&local_168,param_13);
          cVar20 = FUN_147239156(local_188);
          if (cVar20 == '\0') {
            local_1d0 = (longlong *)*local_190;
            local_1d8 = local_190;
            FUN_14723ab70(param_4,&local_e8,param_2,(ulonglong)bVar36 << 0x10);
          }
          else {
            local_1d0 = local_168;
            local_1d8 = local_190;
            FUN_14723aa6a(param_4,&local_e8,param_2,(ulonglong)bVar36 << 0x10);
          }
        }
        if (0 < (int)local_1a8) {
          local_1d0 = param_13;
          local_1d8 = param_8;
          FUN_142de15c9(&local_e8,param_2,param_4,param_7);
          plVar28 = local_1b0;
          puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar24 = puVar30 + 0x6e;
          if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
            FUN_140023dd8(local_1b0,0x380);
            puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
            puVar24 = puVar30 + 0x6e;
          }
          *(undefined8 **)(param_4 + 0x70) = puVar24;
          *puVar30 = &PTR_FUN_14a2907e8;
          puVar30[2] = 0;
          *(undefined4 *)(puVar30 + 3) = 4;
          puVar30[4] = 0;
          puVar30[5] = 0;
          FUN_147227eb4(puVar30 + 6);
          puVar30[0x5e] = 0;
          *(undefined1 *)(puVar30 + 0x5f) = 1;
          puVar30[0x60] = 0;
          *(undefined1 *)(puVar30 + 0x61) = 1;
          puVar30[0x6c] = 0;
          puVar30[0x62] = 0;
          puVar30[99] = 0;
          puVar30[100] = 0;
          puVar30[0x68] = 0;
          puVar30[0x69] = 0;
          puVar30[0x6a] = 0;
          *(undefined1 *)(puVar30 + 0x6d) = 1;
          iVar32 = *(int *)(param_4 + 0xa0);
          *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
          if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
            FUN_1448cfae8(local_178,iVar32);
          }
          *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
          local_1c0 = param_10;
          local_1c8 = param_9;
          local_1d0 = param_8;
          local_1d8 = &local_128;
          local_1b8 = puVar30 + 2;
          FUN_147239f80(param_2,param_4,&local_e8,param_13);
          local_1d0 = (longlong *)puVar30[2];
          local_1c8 = local_1c8 & 0xffffffffffffff00;
          local_1d8 = puVar30 + 2;
          FUN_14723a82e(param_4,&local_f8,param_2,(lVar27 << 0x28) + 0x10000U + uVar31);
        }
        goto LAB_142de2465;
      }
    }
    FUN_142de1457(local_188);
    plVar28 = (longlong *)(param_4 + 0x70);
    puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar24 = puVar30 + 0x66;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8(plVar28,0x340);
      puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
      puVar24 = puVar30 + 0x66;
    }
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    *puVar30 = &PTR_FUN_14a2907f8;
    puVar30[2] = 0;
    *(undefined4 *)(puVar30 + 3) = 4;
    puVar30[4] = 0;
    puVar30[5] = 0;
    local_1a8 = plVar28;
    FUN_147227eb4(puVar30 + 6);
    puVar30[0x5e] = 0;
    *(undefined1 *)(puVar30 + 0x5f) = 1;
    puVar30[0x60] = 0;
    *(undefined1 *)(puVar30 + 0x61) = 1;
    local_188 = param_4 + 0x98;
    puVar30[0x62] = 0;
    puVar30[99] = 0;
    puVar30[100] = 0;
    iVar32 = *(int *)(param_4 + 0xa0);
    *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
    if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
      FUN_1448cfae8(local_188,iVar32);
    }
    *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
    puVar30[4] = local_138;
    puVar30[5] = uStack_130;
    puVar30[2] = CONCAT44(uStack_144,local_148);
    puVar30[3] = CONCAT44(uStack_13c,uStack_140);
    memcpy(puVar30 + 6,param_13,0x270);
    plVar28 = local_1a8;
    puVar30[0x54] = *(undefined8 *)((longlong)param_13 + 0x270);
    puVar30[0x55] = *(undefined8 *)((longlong)param_13 + 0x278);
    puVar30[0x5c] = *(undefined8 *)((longlong)param_13 + 0x2b0);
    uVar3 = *(undefined8 *)((longlong)param_13 + 0x280);
    uVar4 = *(undefined8 *)((longlong)param_13 + 0x288);
    uVar16 = *(undefined8 *)((longlong)param_13 + 0x290);
    uVar17 = *(undefined8 *)((longlong)param_13 + 0x298);
    uVar21 = *(undefined4 *)((longlong)param_13 + 0x2a4);
    uVar6 = *(undefined4 *)((longlong)param_13 + 0x2a8);
    uVar7 = *(undefined4 *)((longlong)param_13 + 0x2ac);
    *(undefined4 *)(puVar30 + 0x5a) = *(undefined4 *)((longlong)param_13 + 0x2a0);
    *(undefined4 *)((longlong)puVar30 + 0x2d4) = uVar21;
    *(undefined4 *)(puVar30 + 0x5b) = uVar6;
    *(undefined4 *)((longlong)puVar30 + 0x2dc) = uVar7;
    puVar30[0x58] = uVar16;
    puVar30[0x59] = uVar17;
    puVar30[0x56] = uVar3;
    puVar30[0x57] = uVar4;
    *(undefined4 *)(puVar30 + 0x60) = (undefined4)local_118;
    *(undefined4 *)((longlong)puVar30 + 0x304) = local_118._4_4_;
    *(undefined4 *)(puVar30 + 0x61) = uStack_110;
    *(undefined4 *)((longlong)puVar30 + 0x30c) = uStack_10c;
    *(undefined4 *)(puVar30 + 0x5e) = (undefined4)local_128;
    *(undefined4 *)((longlong)puVar30 + 0x2f4) = local_128._4_4_;
    *(undefined4 *)(puVar30 + 0x5f) = uStack_120;
    *(undefined4 *)((longlong)puVar30 + 0x2fc) = uStack_11c;
    uVar1 = *(undefined1 *)((longlong)param_8 + 0x94);
    puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar33 + 9;
    if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
      FUN_140023dd8(local_1a8,0x50);
      puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 9;
    }
    local_1a0 = (longlong *)(param_4 + 0x198);
    *(undefined8 **)(param_4 + 0x70) = puVar24;
    puVar33[1] = param_8[1];
    puVar33[2] = 0;
    *(undefined1 *)(puVar33 + 3) = 0;
    *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar33 + 5) = 0;
    *puVar33 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar33 + 6) = uVar1;
    *(undefined1 *)(puVar33 + 7) = 0;
    *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
    puVar33[8] = param_8;
    iVar32 = *(int *)(param_4 + 0x1a0);
    *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
    if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
      FUN_1447568fc(local_1a0,iVar32);
    }
    bVar36 = (int)local_190 != 0;
    *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
    *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
    puVar30[0x62] = puVar33;
    puVar30[100] = param_10;
    puVar30[99] = param_9;
    uVar3 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145eb632e();
    FUN_1448e935e(uVar3,&local_e8,&DAT_14ca09008,(int)lVar27 + (uint)bVar36 * 2);
    FUN_145eb632e();
    local_f8 = (undefined1 *)CONCAT44(local_e8._4_4_,(int)local_e8);
    uStack_f0 = uStack_e0;
    uStack_ec = uStack_dc;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 0;
    local_d8 = (longlong *)0x0;
    local_1d8 = (longlong *)CONCAT44(uStack_144,local_148);
    local_1d0 = &local_e8;
    FUN_147247f23(param_4,&local_104,&local_f8,puVar30 + 2);
    if (CONCAT44(local_e8._4_4_,(int)local_e8) != 0) {
      plVar28 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar28 = local_c8;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    plVar28 = local_1a8;
    if ((param_12 != 0) && (*(int *)(DAT_14ca08780 + 4) != 0)) {
      puVar30 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar24 = puVar30 + 0x60;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1a8,0x310);
        puVar30 = (undefined8 *)(*plVar28 + 0xfU & 0xfffffffffffffff0);
        puVar24 = puVar30 + 0x60;
      }
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      *puVar30 = &PTR_FUN_14a290818;
      local_190 = puVar30 + 2;
      puVar30[2] = 0;
      *(undefined4 *)(puVar30 + 3) = 4;
      puVar30[4] = 0;
      puVar30[5] = 0;
      FUN_147227eb4(puVar30 + 6);
      puVar30[0x5e] = 0;
      iVar32 = *(int *)(param_4 + 0xa0);
      *(uint *)(param_4 + 0xa0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0xa4) < iVar32 + 1U) {
        FUN_1448cfae8(local_188,iVar32);
      }
      plVar23 = local_190;
      *(undefined8 **)(*(longlong *)(param_4 + 0x98) + (longlong)iVar32 * 8) = puVar30;
      local_190[2] = (longlong)local_158;
      local_190[3] = (longlong)puStack_150;
      *local_190 = (longlong)local_168;
      local_190[1] = CONCAT44(uStack_15c,uStack_160);
      memcpy(puVar30 + 6,param_13,0x270);
      plVar28 = local_1a8;
      puVar30[0x54] = *(undefined8 *)((longlong)param_13 + 0x270);
      puVar30[0x55] = *(undefined8 *)((longlong)param_13 + 0x278);
      puVar30[0x5c] = *(undefined8 *)((longlong)param_13 + 0x2b0);
      uVar21 = *(undefined4 *)((longlong)param_13 + 0x280);
      uVar6 = *(undefined4 *)((longlong)param_13 + 0x284);
      uVar7 = *(undefined4 *)((longlong)param_13 + 0x288);
      uVar8 = *(undefined4 *)((longlong)param_13 + 0x28c);
      uVar9 = *(undefined4 *)((longlong)param_13 + 0x290);
      uVar10 = *(undefined4 *)((longlong)param_13 + 0x294);
      uVar11 = *(undefined4 *)((longlong)param_13 + 0x298);
      uVar12 = *(undefined4 *)((longlong)param_13 + 0x29c);
      uVar13 = *(undefined4 *)((longlong)param_13 + 0x2a4);
      uVar14 = *(undefined4 *)((longlong)param_13 + 0x2a8);
      uVar15 = *(undefined4 *)((longlong)param_13 + 0x2ac);
      *(undefined4 *)(puVar30 + 0x5a) = *(undefined4 *)((longlong)param_13 + 0x2a0);
      *(undefined4 *)((longlong)puVar30 + 0x2d4) = uVar13;
      *(undefined4 *)(puVar30 + 0x5b) = uVar14;
      *(undefined4 *)((longlong)puVar30 + 0x2dc) = uVar15;
      *(undefined4 *)(puVar30 + 0x58) = uVar9;
      *(undefined4 *)((longlong)puVar30 + 0x2c4) = uVar10;
      *(undefined4 *)(puVar30 + 0x59) = uVar11;
      *(undefined4 *)((longlong)puVar30 + 0x2cc) = uVar12;
      *(undefined4 *)(puVar30 + 0x56) = uVar21;
      *(undefined4 *)((longlong)puVar30 + 0x2b4) = uVar6;
      *(undefined4 *)(puVar30 + 0x57) = uVar7;
      *(undefined4 *)((longlong)puVar30 + 700) = uVar8;
      uVar1 = *(undefined1 *)(param_12 + 0x94);
      puVar33 = (undefined8 *)(*(longlong *)(param_4 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar33 + 9;
      if (*(undefined8 **)(param_4 + 0x78) < puVar24) {
        FUN_140023dd8(local_1a8,0x50);
        puVar33 = (undefined8 *)(*plVar28 + 7U & 0xfffffffffffffff8);
        puVar24 = puVar33 + 9;
      }
      *(undefined8 **)(param_4 + 0x70) = puVar24;
      puVar33[1] = *(undefined8 *)(param_12 + 8);
      puVar33[2] = 0;
      *(undefined1 *)(puVar33 + 3) = 0;
      *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar33 + 5) = 0;
      *puVar33 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar33 + 6) = uVar1;
      *(undefined1 *)(puVar33 + 7) = 0;
      *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
      puVar33[8] = param_12;
      iVar32 = *(int *)(param_4 + 0x1a0);
      *(uint *)(param_4 + 0x1a0) = iVar32 + 1U;
      if (*(uint *)(param_4 + 0x1a4) < iVar32 + 1U) {
        FUN_1447568fc(local_1a0,iVar32);
      }
      bVar36 = local_194 != 0;
      *(undefined8 **)(*(longlong *)(param_4 + 0x198) + (longlong)iVar32 * 8) = puVar33;
      *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_4 + 0x1a0) + -1;
      puVar30[0x5e] = puVar33;
      uVar3 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145eb68a6();
      FUN_1448e935e(uVar3,&local_e8,&DAT_14ca09130,bVar36);
      FUN_145eb68a6();
      local_f8 = (undefined1 *)CONCAT44(local_e8._4_4_,(int)local_e8);
      uStack_f0 = uStack_e0;
      uStack_ec = uStack_dc;
      local_e8._0_4_ = 0;
      local_e8._4_4_ = 0;
      local_d8 = (longlong *)0x0;
      local_1d8 = local_168;
      local_1d0 = &local_e8;
      FUN_147248503(param_4,&local_104,&local_f8,plVar23);
      if (CONCAT44(local_e8._4_4_,(int)local_e8) != 0) {
        plVar28 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar28 = local_c8;
        }
        (**(code **)(*plVar28 + 0x10))();
      }
    }
  }
LAB_142de2465:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142de463d FUN_142de463d body=47 status=ok
// SIG undefined FUN_142de463d(void)

void FUN_142de463d(void)

{
  DAT_14ca115c0 = &PTR_FUN_14a290840;
  FUN_144725486(&DAT_14ca115c0);
  FUN_145ade3ba(&DAT_14ca115c0);
  return;
}



// FUNCTION 142de466c FUN_142de466c body=69 status=ok
// SIG undefined FUN_142de466c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de466c(void)

{
  _DAT_14ca09440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de46ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09448,1);
  return;
}



// FUNCTION 142de46b1 FUN_142de46b1 body=69 status=ok
// SIG undefined FUN_142de46b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de46b1(void)

{
  _DAT_14ca09458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de46f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09460,1);
  return;
}



// FUNCTION 142de46f6 FUN_142de46f6 body=69 status=ok
// SIG undefined FUN_142de46f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de46f6(void)

{
  _DAT_14ca09470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de4738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09478,1);
  return;
}



// FUNCTION 142de473b FUN_142de473b body=69 status=ok
// SIG undefined FUN_142de473b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de473b(void)

{
  _DAT_14ca09480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de477d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09488,1);
  return;
}



// FUNCTION 142de4780 FUN_142de4780 body=106 status=ok
// SIG undefined FUN_142de4780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de4780(void)

{
  _DAT_14ca094b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca094c0,1);
  if (DAT_14ca094a8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca09498 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142de47ea FUN_142de47ea body=4174 status=ok
// SIG undefined FUN_142de47ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de47ea(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  byte param_5,undefined4 param_6,longlong param_7,longlong param_8,longlong param_9
                  ,int param_10,longlong *param_11,longlong *param_12,int param_13,
                  longlong *param_14,longlong param_15,longlong *param_16)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(int *)((longlong)param_1 + 0x38c) = param_13 + param_10 + (int)param_14[1];
  param_1[5] = param_7;
  param_1[6] = param_15;
  param_1[7] = param_8;
  param_1[8] = param_9;
  *param_1 = param_3;
  param_1[1] = param_2;
  iVar9 = *(int *)(param_3 + 0x3090);
  *(uint *)(param_1 + 2) = (uint)(2 < iVar9);
  *(undefined2 *)((longlong)param_1 + 0x14) =
       *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2);
  *(byte *)((longlong)param_1 + 0x16) = param_5;
  uVar3 = DAT_14ca85550;
  uVar20 = (ulonglong)DAT_14ca85550;
  bVar7 = DAT_14ca96500;
  if (*(int *)(param_3 + 0x3090) != 1) {
    if (*(int *)(param_3 + 0x3090) < 3) {
      bVar7 = 0;
    }
    else {
      lVar22 = uVar20 * 0x3c;
      bVar7 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar22) != DAT_14ca81490) &&
         (bVar7 = 0, DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar22 + 3) & 0x10) == 0) {
          bVar7 = 1;
        }
        else {
          bVar7 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar22 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x17) = bVar7;
  if (*(int *)(DAT_14ca460d8 + 4) < 1) {
LAB_142de5789:
    bVar7 = 0;
  }
  else {
    bVar7 = DAT_14ca96500;
    if (*(int *)(param_3 + 0x3090) != 1) {
      if (*(int *)(param_3 + 0x3090) < 3) goto LAB_142de5789;
      lVar22 = uVar20 * 0x3c;
      bVar7 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar22) != DAT_14ca81490) && (uVar3 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar22 + 3) & 0x10) == 0) {
          bVar7 = 1;
        }
        else {
          bVar7 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar22 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  *(byte *)(param_1 + 3) = bVar7;
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_3 + 0x2398);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)(param_3 + 0x23ef);
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x35f0);
  *(int *)((longlong)param_1 + 0x4c) = param_10;
  *(int *)(param_1 + 10) = param_13;
  iVar24 = 1;
  local_d8 = param_2;
  if ((((param_5 != 0x3a) &&
       ((*(byte *)(&DAT_14ca11d50 + (ulonglong)(2 < iVar9) * 0x3a + (ulonglong)param_5) & 2) != 0))
      && (*(char *)(param_3 + 0x23f2) == '\x01')) && (cVar6 = FUN_144b2acae(param_3), cVar6 != '\0')
     ) {
    bVar7 = FUN_144b2acba(param_3);
    iVar24 = bVar7 + 1;
  }
  *(int *)(param_1 + 9) = iVar24;
  FUN_1447a01a8(param_1 + 0x48,param_4);
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  *(uint *)((longlong)param_1 + 0x164) = (uint)*(byte *)(param_3 + 0x2448);
  lVar22 = *(longlong *)(param_3 + 0x2438);
  param_1[0x2d] = *(longlong *)(param_3 + 0x2430);
  param_1[0x2e] = lVar22;
  param_1[0x2f] = *(longlong *)(param_3 + 0x2440);
  lVar22 = *(longlong *)(param_3 + 0x1050);
  param_1[0x30] = *(longlong *)(param_3 + 0x1048);
  param_1[0x31] = lVar22;
  param_1[0x32] = *(longlong *)(param_3 + 0x1058);
  plVar15 = (longlong *)(param_3 + 0x9b0);
  plVar19 = param_1 + 0x34;
  for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *plVar19 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar19 = plVar19 + 1;
  }
  param_1[0x44] = local_d8 + 0x3368;
  switch(param_5) {
  case 0x26:
    uVar8 = 7;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
    goto switchD_142de4aa9_caseD_27;
  case 0x2e:
    uVar8 = 8;
    break;
  case 0x2f:
    uVar8 = 9;
    break;
  case 0x30:
    uVar8 = 10;
    break;
  case 0x31:
    uVar8 = 0xb;
    break;
  case 0x32:
    uVar8 = 0xc;
    break;
  case 0x33:
    uVar8 = 0xd;
    break;
  case 0x34:
    uVar8 = 0xe;
    break;
  default:
    switch(param_5) {
    case 0xd:
      uVar8 = 0;
      break;
    case 0xe:
      uVar8 = 1;
      break;
    case 0xf:
      uVar8 = 2;
      break;
    case 0x10:
      uVar8 = 3;
      break;
    case 0x11:
      uVar8 = 4;
      break;
    case 0x12:
      uVar8 = 5;
      break;
    case 0x13:
      uVar8 = 6;
      break;
    default:
      goto switchD_142de4aa9_caseD_27;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
switchD_142de4aa9_caseD_27:
  lVar22 = param_1[0xb];
  lVar23 = param_1[0xc];
  lVar2 = param_14[1];
  param_1[0xb] = *param_14;
  param_1[0xc] = lVar2;
  *param_14 = lVar22;
  param_14[1] = lVar23;
  lVar22 = param_1[0xf];
  lVar23 = param_1[0x10];
  lVar2 = param_11[1];
  param_1[0xf] = *param_11;
  param_1[0x10] = lVar2;
  *param_11 = lVar22;
  param_11[1] = lVar23;
  lVar22 = param_1[0x11];
  lVar23 = param_1[0x12];
  lVar2 = param_12[1];
  param_1[0x11] = *param_12;
  param_1[0x12] = lVar2;
  local_88._0_4_ = (undefined4)lVar22;
  local_88._4_4_ = (undefined4)((ulonglong)lVar22 >> 0x20);
  uStack_80._0_4_ = (undefined4)lVar23;
  uStack_80._4_4_ = (undefined4)((ulonglong)lVar23 >> 0x20);
  *(undefined4 *)param_12 = (undefined4)local_88;
  *(undefined4 *)((longlong)param_12 + 4) = local_88._4_4_;
  *(undefined4 *)(param_12 + 1) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_12 + 0xc) = uStack_80._4_4_;
  local_88 = (longlong *)lVar22;
  uStack_80 = lVar23;
  if (((int)param_1[2] == 0) &&
     ((*(char *)((longlong)param_1 + 0x16) == '+' || (*(char *)((longlong)param_1 + 0x16) == '\x02')
      ))) {
    lVar22 = param_1[0xd];
    lVar23 = param_1[0xe];
    lVar2 = param_16[1];
    param_1[0xd] = *param_16;
    param_1[0xe] = lVar2;
    local_88._0_4_ = (undefined4)lVar22;
    local_88._4_4_ = (undefined4)((ulonglong)lVar22 >> 0x20);
    uStack_80._0_4_ = (undefined4)lVar23;
    uStack_80._4_4_ = (undefined4)((ulonglong)lVar23 >> 0x20);
    *(undefined4 *)param_16 = (undefined4)local_88;
    *(undefined4 *)((longlong)param_16 + 4) = local_88._4_4_;
    *(undefined4 *)(param_16 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_16 + 0xc) = uStack_80._4_4_;
    local_88 = (longlong *)lVar22;
    uStack_80 = lVar23;
  }
  if (*(int *)((longlong)param_1 + 0x38c) < 1) goto LAB_142de4d98;
  iVar9 = *(int *)((longlong)param_1 + 0x38c) * (int)param_1[9] * 4;
  *(int *)(param_1 + 0x29) = iVar9;
  lVar22 = FUN_14001cc68((longlong)iVar9,0);
  param_1[0x28] = lVar22;
  iVar9 = *(int *)((longlong)param_1 + 0x38c);
  if (iVar9 < 0) {
LAB_142de5781:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (*(int *)((longlong)param_1 + 100) < iVar9) {
    FUN_14482a268(param_1 + 0xb);
    iVar9 = *(int *)((longlong)param_1 + 0x38c);
    if (iVar9 < 0) goto LAB_142de5781;
  }
  if (*(int *)((longlong)param_1 + 0x15c) < iVar9) {
    FUN_14482a268(param_1 + 0x2a);
  }
  cVar6 = FUN_1447e0190();
  if (((cVar6 == '\0') || (*(int *)(DAT_14ca09450 + 4) < 1)) || (DAT_14ca9a438 != '\x01')) {
    local_88 = param_1;
    FUN_140261b2c();
    if ((DAT_14c760818 == 0) ||
       (((cVar6 = DAT_14ca84e2a, DAT_14c760db4 < 3 && DAT_14ca84e2a == '\0' &&
         (cVar6 = DAT_14c842750, DAT_14ca84e0d != '\0')) || (cVar6 == '\0')))) {
      local_c8 = param_1;
      FUN_142de583a();
    }
  }
  else {
    if (((DAT_14c760818 == 0) ||
        ((cVar6 = DAT_14ca84e2a, DAT_14c760db4 < 3 && DAT_14ca84e2a == '\0' &&
         (cVar6 = DAT_14c842750, DAT_14ca84e0d != '\0')))) || (cVar6 == '\0')) {
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0x400000000;
      puVar18 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar13 = (uint *)*puVar18;
      if (puVar13 != (uint *)0x0) goto LAB_142de4e99;
      do {
        uVar10 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar10 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar10 | 1;
          __tlregdtor(&LAB_142df1041);
        }
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar22 + 0x310);
        *(undefined8 *)(lVar22 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar18 = puVar11;
        FUN_140217a48(puVar18);
        puVar13 = (uint *)*puVar18;
LAB_142de4e99:
        uVar20 = *(longlong *)(puVar13 + 0x10) + 7;
        uVar10 = puVar13[0x12];
        while( true ) {
          puVar21 = (undefined8 *)(uVar20 & 0xfffffffffffffff8);
          if (puVar21 + 0x16 <= puVar13 + 0x4000) {
            *(undefined8 **)(puVar13 + 0x10) = puVar21 + 0x16;
            puVar13[0x12] = uVar10 + 1;
            FUN_1447247dc(puVar21,0);
            *puVar21 = &PTR_FUN_14a290870;
            puVar21[0x15] = param_1;
            uVar10 = DAT_14ca094d0;
            if (((DAT_14ca094c8 != 0x400) || (DAT_14c7585d8 != 0)) &&
               ((DAT_14ca094c8 != 0x800 || (DAT_14c7585dc != 0)))) {
              uVar10 = DAT_14ca094c8 | _DAT_14ca094cc;
            }
            uVar14 = uVar10 >> 10 & 3;
            if ((uVar10 >> 9 & 1) == 0 || uVar14 < 2) {
              uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            }
            else {
              uVar20 = 2;
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
            lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            lVar23 = *(longlong *)(lVar22 + 0x2b8);
            if (lVar23 == 0) {
              uVar4 = 1;
              if ((char)uVar20 != '\x06') {
                uVar4 = uVar20;
              }
              uVar20 = uVar4;
              uVar12 = 0;
            }
            else {
              if ((char)uVar20 == '\x06') {
                uVar20 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
              }
              uVar12 = *(undefined8 *)(lVar23 + 0x30);
            }
            puVar21[0xf] = uVar12;
            puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
            *(undefined4 *)((longlong)puVar21 + 0x1c) = 0;
            if (puVar21 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
              UNLOCK();
            }
            local_c8 = (longlong *)CONCAT71(local_c8._1_7_,1);
            FUN_1447439e4(puVar21);
            uVar20 = uStack_60;
            lVar23 = (longlong)(int)uStack_60;
            uVar10 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar10);
            if (uStack_60._4_4_ < uVar10) {
              FUN_14476a5c8(&local_88,uVar20 & 0xffffffff);
            }
            puVar16 = local_68;
            if (local_68 == (undefined8 *)0x0) {
              puVar16 = &local_88;
            }
            local_d0 = (longlong *)(lVar22 + 0x2b8);
            puVar16[lVar23] = puVar21;
            puVar13 = (uint *)*puVar18;
            if (puVar13 != (uint *)0x0) goto LAB_142de5329;
            goto LAB_142de52ab;
          }
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar14 = *puVar13;
          *puVar13 = *puVar13 + uVar10 + 1;
          UNLOCK();
          if ((uVar14 ^ uVar10) != 0xffffffff) break;
          puVar13 = (uint *)*puVar18;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar18 = puVar13;
          uVar20 = (longlong)puVar13 + 0x5f;
          uVar10 = 0;
        }
      } while( true );
    }
    puVar18 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar13 = (uint *)*puVar18;
    if (puVar13 != (uint *)0x0) goto LAB_142de5042;
    while( true ) {
      uVar10 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar10 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar10 | 1;
        __tlregdtor(&LAB_142df1041);
      }
      lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar22 + 0x310);
      *(undefined8 *)(lVar22 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar18 = puVar11;
      FUN_140217a48(puVar18);
      puVar13 = (uint *)*puVar18;
LAB_142de5042:
      puVar21 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar17 = (uint *)(puVar21 + 0x16);
      uVar10 = puVar13[0x12];
      if (puVar17 <= puVar13 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar14 = *puVar13;
        *puVar13 = *puVar13 + uVar10 + 1;
        UNLOCK();
        if ((uVar14 ^ uVar10) != 0xffffffff) break;
        puVar13 = (uint *)*puVar18;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar18 = puVar13;
        puVar21 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar21 + 0x16);
        uVar10 = 0;
        if (puVar17 <= puVar13 + 0x4000) {
          uVar10 = 1;
          goto LAB_142de50c2;
        }
      }
    }
    uVar10 = uVar10 + 1;
LAB_142de50c2:
    *(uint **)(puVar13 + 0x10) = puVar17;
    puVar13[0x12] = uVar10;
    FUN_1447247dc(puVar21,0);
    *puVar21 = &PTR_FUN_14a290870;
    puVar21[0x15] = param_1;
    uVar10 = DAT_14ca094d0;
    if (((DAT_14ca094c8 != 0x400) || (DAT_14c7585d8 != 0)) &&
       ((DAT_14ca094c8 != 0x800 || (DAT_14c7585dc != 0)))) {
      uVar10 = DAT_14ca094c8 | _DAT_14ca094cc;
    }
    uVar14 = uVar10 >> 10 & 3;
    if ((uVar10 >> 9 & 1) == 0 || uVar14 < 2) {
      uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
    }
    else {
      uVar20 = 2;
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
    lVar22 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar22 == 0) {
      uVar4 = 1;
      if ((char)uVar20 != '\x06') {
        uVar4 = uVar20;
      }
      uVar20 = uVar4;
      uVar12 = 0;
    }
    else {
      if ((char)uVar20 == '\x06') {
        uVar20 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar22 + 0x30);
    }
    puVar21[0xf] = uVar12;
    puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar21 + 0x1c) = 0;
    if (puVar21 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
      UNLOCK();
    }
    local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
    FUN_1447439e4(puVar21);
    puVar18 = (undefined8 *)param_1[0x6e];
    param_1[0x6e] = (longlong)puVar21;
    if (puVar18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar18)(puVar18,1);
      }
    }
  }
  goto LAB_142de4c98;
LAB_142de52ab:
  uVar10 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar10 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar10 | 1;
    __tlregdtor(&LAB_142df1041);
  }
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar11 = *(undefined4 **)(lVar22 + 0x310);
  *(undefined8 *)(lVar22 + 0x310) = 0;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar11 = 0xffffffff;
  *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
  puVar11[0x12] = 0;
  *puVar18 = puVar11;
  FUN_140217a48(puVar18);
  puVar13 = (uint *)*puVar18;
LAB_142de5329:
  puVar21 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar17 = (uint *)(puVar21 + 0x16);
  uVar10 = puVar13[0x12];
  if (puVar17 <= puVar13 + 0x4000) goto LAB_142de56d1;
  while( true ) {
    *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
    LOCK();
    uVar14 = *puVar13;
    *puVar13 = *puVar13 + uVar10 + 1;
    UNLOCK();
    if ((uVar14 ^ uVar10) != 0xffffffff) break;
    puVar13 = (uint *)*puVar18;
    *puVar13 = 0xffffffff;
    *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
    puVar13[0x12] = 0;
    *puVar18 = puVar13;
    puVar21 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
    puVar17 = (uint *)(puVar21 + 0x16);
    uVar10 = 0;
    if (puVar17 <= puVar13 + 0x4000) {
      uVar10 = 1;
      goto LAB_142de53a9;
    }
  }
  goto LAB_142de52ab;
LAB_142de56d1:
  uVar10 = uVar10 + 1;
LAB_142de53a9:
  *(uint **)(puVar13 + 0x10) = puVar17;
  puVar13[0x12] = uVar10;
  FUN_1447247dc(puVar21,&local_88);
  *puVar21 = &PTR_FUN_14a290880;
  puVar21[0x15] = param_1;
  if (((ulonglong)DAT_14c7585d4 & 0xff) == 0xff) {
    uVar10 = DAT_14c7585d4 >> 10 & 3;
    iVar9 = 0;
    if ((DAT_14c7585d4 >> 9 & 1) == 0 || uVar10 < 2) {
      bVar7 = (&DAT_149e38edc)[uVar10];
      iVar9 = 0;
    }
    else {
      bVar7 = 2;
    }
  }
  else {
    iVar9 = (DAT_14c7585d4 >> 7 & 2 | DAT_14c7585d4 >> 9 & 1) +
            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585d4 & 0xff) * 4);
    bVar7 = 5;
  }
  if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
  }
  puVar21[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar21[9] = puVar21;
  puVar21[10] = puVar21;
  lVar22 = *local_d0;
  if (lVar22 == 0) {
    bVar5 = 1;
    if (bVar7 != 6) {
      bVar5 = bVar7;
    }
    bVar7 = bVar5;
    uVar12 = 0;
  }
  else {
    if (bVar7 == 6) {
      bVar7 = (byte)((ulonglong)*(undefined8 *)(lVar22 + 0x38) >> 0x3b);
    }
    uVar12 = *(undefined8 *)(lVar22 + 0x30);
  }
  puVar21[0xf] = uVar12;
  puVar21[0x10] = (ulonglong)(bVar7 & 7) << 0x3b | 0xc00000527800b400;
  *(int *)((longlong)puVar21 + 0x1c) = iVar9;
  if (puVar21 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
    UNLOCK();
  }
  local_c8 = (longlong *)CONCAT71(local_c8._1_7_,1);
  FUN_1447439e4(puVar21);
  puVar18 = (undefined8 *)param_1[0x6e];
  param_1[0x6e] = (longlong)puVar21;
  if (puVar18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar18 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar18)(puVar18,1);
    }
  }
  puVar18 = &local_88;
  if (local_68 != (undefined8 *)0x0) {
    puVar18 = local_68;
  }
  FUN_144717c65(puVar18,uStack_60 & 0xffffffff);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142de4c98:
  local_c8 = (longlong *)param_1[0x54];
  uStack_80 = param_1[0x55];
  local_b8 = (longlong *)param_1[0x56];
  uStack_70 = param_1[0x57];
  local_68 = (undefined8 *)param_1[0x58];
  uStack_60 = param_1[0x59];
  local_58 = param_1[0x5a];
  uStack_50 = param_1[0x5b];
  lVar2 = uStack_50;
  local_78 = local_b8;
  lVar23 = uStack_70;
  local_88 = local_c8;
  lVar22 = uStack_80;
  param_1[0x5a] = local_d8;
  param_1[0x5b] = CONCAT44(uStack_8c,uStack_90);
  param_1[0x58] = (longlong)&PTR_LAB_14a290890;
  param_1[0x59] = (longlong)param_1;
  param_1[0x56] = 0;
  param_1[0x57] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x54] = (longlong)FUN_142df129c;
  param_1[0x55] = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = (longlong)local_68;
  lStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = lVar22;
  uStack_70 = lVar23;
  uStack_50 = lVar2;
  if (local_c8 != (longlong *)0x0) {
    plVar15 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar15 = &local_a8;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_142de4d98:
  FUN_140021220(param_12);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142de583a FUN_142de583a body=199 status=ok
// SIG undefined FUN_142de583a(void)

void FUN_142de583a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x138) == '\x01') {
    uVar1 = *(uint *)(lVar2 + 200);
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (uVar1 == uVar5) goto LAB_142de58de;
      uVar3 = uVar5 + 1;
    } while (SBORROW4(0,*(int *)(*(longlong *)(lVar2 + 0xd0) + (longlong)(int)uVar5 * 4)));
    if (uVar1 + 1 != uVar5 + 1) {
      do {
        FUN_144ab2e92((longlong)(int)uVar5 * 0xa0 + *(longlong *)(lVar2 + 0xc0),local_68);
        uVar3 = uVar5 + 1;
        if (uVar5 + 1 < *(uint *)(lVar2 + 200)) {
          uVar3 = *(uint *)(lVar2 + 200);
        }
        do {
          uVar4 = uVar3;
          if (uVar3 - 1 == uVar5) break;
          uVar5 = uVar5 + 1;
          uVar4 = uVar5;
        } while (SBORROW4(0,*(int *)(*(longlong *)(lVar2 + 0xd0) + (longlong)(int)uVar5 * 4)));
        uVar5 = uVar4;
      } while (uVar5 != uVar1);
    }
  }
LAB_142de58de:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142de5902 FUN_142de5902 body=577 status=ok
// SIG undefined FUN_142de5902(void)

void FUN_142de5902(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    uVar4 = 0xff;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar4 = DAT_14c7585d4;
    }
    FUN_1447832fa(*(longlong *)(param_1 + 0x370),uVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x370);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x370) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  if (*(int *)(param_1 + 900) != 0) {
    FUN_1446f8c06(param_1 + 0x378,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_14482a268(param_1 + 0x58,0);
  }
  iVar5 = *(int *)(param_1 + 0xb0);
  if (iVar5 != 0) {
    plVar6 = *(longlong **)(param_1 + 0xa8);
    do {
      lVar3 = *plVar6;
      if (lVar3 != 0) {
        lVar7 = 0x3df0;
        do {
          if (*(longlong *)(lVar3 + 0xc0 + lVar7) != 0) {
            FUN_1400020a8();
          }
          if ((0x50 < *(ushort *)(lVar3 + 0x62 + lVar7)) &&
             (*(longlong *)(lVar3 + 0x10 + lVar7) != 0)) {
            FUN_1400020a8();
          }
          *(undefined2 *)(lVar3 + 0x62 + lVar7) = 0;
          *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
          if (*(longlong *)(lVar3 + lVar7) != 0) {
            FUN_1400020a8();
          }
          lVar7 = lVar7 + -0x120;
        } while (lVar7 != -0x110);
        FUN_1400020a8(lVar3);
      }
      plVar6 = plVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1447ab16c((undefined8 *)(param_1 + 0xa8),0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_144ab2920(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_14482a268(param_1 + 0x68,0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_14482a282(param_1 + 0x78,0);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_14482a268(param_1 + 0x150,0);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  return;
}



// FUNCTION 142de5b44 FUN_142de5b44 body=396 status=ok
// SIG undefined FUN_142de5b44(void)

void FUN_142de5b44(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  uint local_88;
  int local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x38c)) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    if (param_3 != (longlong *)0x0) {
      if (param_3[2] == 0) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined8 *)(param_3[2] + 0x10);
      }
      if (*param_3 == 0) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = *(undefined8 *)(*param_3 + 0x10);
      }
      local_28 = param_3[4];
    }
    if (*(longlong *)(param_1 + 0x370) != 0) {
      uVar1 = 0xff;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x10) {
        uVar1 = DAT_14c7585d4;
      }
      FUN_1447832fa(*(longlong *)(param_1 + 0x370),uVar1);
    }
    if (*(char *)(param_1 + 0x17) == '\x01') {
      if (0 < *(int *)(param_1 + 0x60)) {
        local_78 = *(undefined4 *)(param_1 + 0x48);
        local_88 = 0;
        local_80 = *(int *)(param_1 + 0x60);
        local_70 = param_2;
        FUN_1400835a0(param_1 + 0x240,param_1 + 0x58,param_1 + 0xc0,&local_38);
      }
    }
    else {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0xff;
      local_78 = *(undefined4 *)(param_1 + 0x60);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x48));
      local_80 = 0;
      local_88 = local_88 & 0xffffff00;
      local_68 = param_2;
      FUN_142de5cd1(param_1 + 0x58,param_1 + 0xc0,&local_58,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de5cd1 FUN_142de5cd1 body=394 status=ok
// SIG undefined FUN_142de5cd1(void)

void FUN_142de5cd1(longlong *param_1,undefined8 param_2,undefined4 *param_3,int param_4,
                  undefined8 param_5,int param_6,int param_7,undefined4 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined8 *local_440;
  undefined1 local_438;
  longlong *local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 auStack_3f8 [2];
  undefined8 local_3f0 [91];
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_468;
  lVar3 = 0x10;
  do {
    *(undefined4 *)((longlong)auStack_3f8 + lVar3) = 0xffffffff;
    *(undefined8 *)((longlong)local_3f0 + lVar3) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 8) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x10) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x18) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x20) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x28) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x30) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x38) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x40) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x48) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x50) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x58) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x60) = 0;
    *(undefined8 *)((longlong)local_3f0 + lVar3 + 0x68) = 0;
    lVar3 = lVar3 + 0x78;
  } while (lVar3 != 0x2e0);
  local_428 = param_1;
  local_420 = param_2;
  memset(local_118,0,0xcc);
  local_3f0[0] = 0xffffffffffffffff;
  local_418 = *param_3;
  uStack_414 = param_3[1];
  uStack_410 = param_3[2];
  uStack_40c = param_3[3];
  local_408 = *(undefined8 *)(param_3 + 4);
  uStack_400 = *(undefined8 *)(param_3 + 6);
  if (0 < param_7) {
    lVar5 = (longlong)param_6;
    iVar4 = param_6 * param_4;
    lVar3 = lVar5 * 0x48;
    do {
      local_408 = CONCAT44(local_408._4_4_,param_3[4] + iVar4);
      uVar1 = *(undefined8 *)(*local_428 + lVar3);
      local_440 = local_3f0;
      local_448 = param_9;
      local_438 = 1;
      cVar2 = FUN_140062960(uVar1,local_420,&local_418);
      if (cVar2 != '\0') {
        FUN_144ab2fe0(uVar1,&local_418,param_8,param_9);
      }
      lVar5 = lVar5 + 1;
      iVar4 = iVar4 + param_4;
      lVar3 = lVar3 + 0x48;
    } while (lVar5 < param_7 + param_6);
  }
  if ((local_48 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de5e68 FUN_142de5e68 body=59 status=ok
// SIG undefined FUN_142de5e68(void)

void FUN_142de5e68(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14ca09608;
  if (DAT_14ca09608 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14ca09608 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142de5e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142de5ea8 FUN_142de5ea8 body=69 status=ok
// SIG undefined FUN_142de5ea8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de5ea8(void)

{
  _DAT_14ca096a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de5eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca096a8,1);
  return;
}



// FUNCTION 142de5eed FUN_142de5eed body=69 status=ok
// SIG undefined FUN_142de5eed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de5eed(void)

{
  _DAT_14ca096b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de5f2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca096b8,1);
  return;
}



// FUNCTION 142de5f32 FUN_142de5f32 body=69 status=ok
// SIG undefined FUN_142de5f32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de5f32(void)

{
  _DAT_14ca096c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de5f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca096d0,1);
  return;
}



// FUNCTION 142de5f77 FUN_142de5f77 body=69 status=ok
// SIG undefined FUN_142de5f77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de5f77(void)

{
  _DAT_14ca096d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de5fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca096e0,1);
  return;
}



// FUNCTION 142de5fbc FUN_142de5fbc body=226 status=ok
// SIG undefined FUN_142de5fbc(void)

void FUN_142de5fbc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca09618);
  uVar1 = DAT_14ca09628;
  if (DAT_14c76081c == '\x01') {
    uVar2 = 0;
    do {
      uVar4 = uVar2;
      if (DAT_14ca09628 == uVar4) goto LAB_142de6069;
      uVar2 = uVar4 + 1;
    } while (SBORROW4(0,*(int *)(DAT_14ca09630 + (longlong)(int)uVar4 * 4)));
    if (DAT_14ca09628 + 1 != uVar4 + 1) {
      do {
        FUN_144ab2e92((longlong)(int)uVar4 * 0xa8 + DAT_14ca09620,local_60);
        uVar2 = uVar4 + 1;
        if (uVar4 + 1 < DAT_14ca09628) {
          uVar2 = DAT_14ca09628;
        }
        do {
          uVar3 = uVar2;
          if (uVar2 - 1 == uVar4) break;
          uVar4 = uVar4 + 1;
          uVar3 = uVar4;
        } while (SBORROW4(0,*(int *)(DAT_14ca09630 + (longlong)(int)uVar4 * 4)));
        uVar4 = uVar3;
      } while (uVar4 != uVar1);
    }
LAB_142de6069:
    DAT_14c76081c = '\0';
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca09618);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142de609f FUN_142de609f body=47 status=ok
// SIG undefined FUN_142de609f(void)

void FUN_142de609f(void)

{
  DAT_14ca096f0 = &PTR_FUN_14a2908c0;
  FUN_144725486(&DAT_14ca096f0);
  FUN_1462ee5e4(&DAT_14ca096f0);
  return;
}



// FUNCTION 142de60ce FUN_142de60ce body=2432 status=ok
// SIG undefined FUN_142de60ce(void)

void FUN_142de60ce(longlong param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,int param_7)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  sbyte sVar18;
  undefined8 *puVar19;
  longlong lVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_118 [32];
  char **local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  int local_e0;
  ulonglong *local_d8;
  undefined4 local_c4;
  ulonglong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [3];
  char local_80;
  char *local_78;
  longlong local_70;
  char *local_68;
  longlong local_60;
  char *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_3[1] < 1) goto LAB_142de67f5;
  uVar10 = *(uint *)(param_1 + 0x3090);
  uVar11 = (ulonglong)uVar10;
  local_c0 = param_2;
  if (uVar11 == 1) {
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_80 = -1;
    uVar10 = 1;
    if (DAT_14ca96500 != 0) {
LAB_142de618b:
      local_98[2] = 0;
      local_98[1] = 0;
      local_98[0] = 0;
      cVar21 = -1;
      if (((&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + uVar11 * 2) * 0xf] == 1) &&
         ((*(byte *)((longlong)&DAT_14ca814d8 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + uVar11 * 2) * 0x3c + 1) & 0x10) != 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e54c0) &&
           (FUN_144b3d300(&DAT_14c9e54c0), DAT_14c9e54c0 == -1)) {
          local_58 = "BatchedPrimitive";
          uStack_50 = CONCAT35(uStack_50._5_3_,0x10);
          uVar10 = FUN_14001a6c0(&local_58,1);
          DAT_14c9e54b8 = (ulonglong)uVar10;
          _Init_thread_footer(&DAT_14c9e54c0);
        }
        plVar17 = (longlong *)FUN_1411d089c();
        if (0 < (longlong)(int)plVar17[1]) {
          lVar20 = 0;
          do {
            if (*(ulonglong *)(*plVar17 + lVar20 * 8) == DAT_14c9e54b8) {
              cVar21 = (char)lVar20;
              break;
            }
            lVar20 = lVar20 + 1;
          } while ((int)plVar17[1] != lVar20);
        }
      }
      uVar10 = *(uint *)(param_1 + 0x3090);
      local_80 = cVar21;
    }
  }
  else {
    if (2 < (int)uVar10) {
      lVar20 = (ulonglong)DAT_14ca85550 * 0x3c;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar20) != DAT_14ca81490) && (DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar20 + 3) & 0x10) != 0) {
          local_98[0] = 0;
          local_98[1] = 0;
          local_98[2] = 0;
          local_80 = -1;
          if (((uint)(&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] >> 0x1d & 1) == 0)
          goto LAB_142de61c0;
        }
        goto LAB_142de618b;
      }
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_80 = -1;
  }
LAB_142de61c0:
  local_c4 = 4;
  if ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)uVar10 * 2) * 0xf] ==
      1) {
    local_c4 = 0x200;
    if (((uint)(&DAT_14ca814d8)
               [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)uVar10 * 2) * 0xf] >> 0xc & 1
        ) == 0) {
      local_c4 = 4;
    }
  }
  local_f8 = (char **)param_6;
  FUN_1401ddf22(param_1,param_3,param_4,param_5);
  iVar24 = (int)param_3[1];
  if (0 < iVar24) {
    bVar9 = DAT_14ca96500;
    if (*(int *)(param_1 + 0x3090) == 1) {
LAB_142de627c:
      local_58 = (char *)0x0;
      uStack_50 = 0;
      FUN_1448d57ff(*param_3,iVar24);
      if (bVar9 != 0) {
LAB_142de62a3:
        puVar6 = local_c0;
        if ((&DAT_14ca814b8)
            [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2) * 0xf
            ] == 1) {
          uVar10 = (&DAT_14ca814d8)
                   [(ulonglong)
                    *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2) * 0xf] &
                   0x1000;
          cVar21 = (char)(uVar10 >> 0xc);
          sVar18 = 9;
          if (uVar10 == 0) {
            sVar18 = 2;
          }
          iVar25 = iVar24 * param_7 << sVar18;
          iVar24 = 0x3e00;
          if (uVar10 == 0) {
            iVar24 = 0;
          }
        }
        else {
          iVar25 = iVar24 * param_7 * 4;
          cVar21 = '\0';
          iVar24 = 0;
        }
        uVar10 = *(uint *)(param_1 + 0x13ba4);
        local_b0 = param_1;
        FUN_1403f9836(&DAT_14ca115c0,&local_68,local_c0,iVar25 + iVar24);
        lVar20 = local_60;
        local_98[0] = local_60;
        cVar2 = *(char *)((longlong)puVar6 + 0x69);
        if (cVar2 == '\0') {
          FUN_14002049c(puVar6,1);
        }
        local_f8 = (char **)CONCAT44(local_f8._4_4_,iVar25 + iVar24);
        local_f0 = 1;
        lVar12 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,puVar6,lVar20,0);
        if (cVar2 == '\0') {
          FUN_14002049c();
        }
        if (cVar21 == '\0') {
          lVar23 = param_3[1];
          if (0 < (longlong)(int)lVar23) {
            iVar24 = 0;
            lVar22 = 0;
            do {
              if (param_7 != 0) {
                lVar13 = *param_3;
                iVar25 = 0;
                do {
                  uVar4 = *(uint *)(lVar13 + lVar22 * 0x48 + 0x10);
                  uVar5 = ((int)uVar4 >> 0x1f & uVar10) + uVar4 | 0x80000000;
                  if (uVar10 == 0xffffffff) {
                    uVar5 = uVar4;
                  }
                  *(uint *)(lVar12 + (longlong)(iVar24 + iVar25) * 4) = uVar5;
                  iVar25 = iVar25 + 1;
                } while (param_7 != iVar25);
              }
              lVar22 = lVar22 + 1;
              iVar24 = iVar24 + param_7;
            } while (lVar22 != (int)lVar23);
          }
        }
        else {
          local_a0 = (longlong)(int)param_3[1];
          if (0 < local_a0) {
            local_b8 = DAT_14cb055b8;
            iVar24 = 0;
            lVar23 = 0;
            local_a8 = lVar20;
            do {
              if (param_7 != 0) {
                lVar20 = lVar23 * 0x48 + *param_3;
                iVar25 = 0;
                do {
                  lVar22 = (longlong)(iVar24 + iVar25) * 0x200 + lVar12;
                  if (*(int *)(lVar20 + 0x10) < 0) {
                    FUN_14716a100(lVar22);
                  }
                  else {
                    iVar3 = *(int *)(lVar20 + 0x14);
                    lVar13 = (**(code **)(**(longlong **)(*(longlong *)(local_b0 + 8) + 0x40) +
                                         0x3e0))();
                    if ((iVar3 < 0) || (*(int *)(lVar13 + 0x3338) <= iVar3)) {
                      FUN_14716a100(lVar22);
                    }
                    else {
                      FUN_14716a07a(lVar22);
                    }
                  }
                  iVar25 = iVar25 + 1;
                } while (param_7 != iVar25);
              }
              lVar23 = lVar23 + 1;
              iVar24 = iVar24 + param_7;
              lVar20 = local_a8;
            } while (lVar23 != local_a0);
          }
        }
        puVar6 = local_c0;
        if (*(char *)((longlong)local_c0 + 0x69) == '\0') {
          FUN_14002049c(local_c0,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar6,lVar20);
          FUN_14002049c(puVar6,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,local_c0,lVar20);
        }
        local_78 = local_68;
        local_70 = local_60;
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        FUN_140902090(&DAT_14ca115c0,&local_78);
        if (local_60 != 0) {
          LOCK();
          puVar1 = (uint *)(local_60 + 8);
          uVar10 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar10 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_60 + 8);
            LOCK();
            uVar10 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar10 >> 0x1e & 1) == 0) {
              bVar9 = *(byte *)(local_60 + 0xd);
              plVar14 = (longlong *)FUN_14001cc68(0x10,8);
              plVar14[1] = local_60;
              plVar17 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c8;
              if ((bVar9 & 2) == 0) {
                do {
                  *plVar14 = (longlong)plVar17;
                  LOCK();
                  bVar26 = plVar17 != DAT_14ca843c0;
                  plVar15 = plVar14;
                  if (bVar26) {
                    plVar17 = DAT_14ca843c0;
                    plVar15 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar15;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar14 = (longlong)plVar15;
                  LOCK();
                  bVar26 = plVar15 != DAT_14ca843c8;
                  plVar17 = plVar14;
                  if (bVar26) {
                    plVar15 = DAT_14ca843c8;
                    plVar17 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar17;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
      }
    }
    else {
      if (((2 < *(int *)(param_1 + 0x3090)) &&
          (lVar20 = (ulonglong)DAT_14ca85550 * 0x3c,
          *(longlong *)(&DAT_14ca814b0 + lVar20) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar20 + 3) & 0x10) != 0) {
          bVar9 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar20 + 3) & 0x20) >> 5;
          goto LAB_142de627c;
        }
        local_58 = (char *)0x0;
        uStack_50 = 0;
        FUN_1448d57ff(*param_3,iVar24);
        goto LAB_142de62a3;
      }
      local_58 = (char *)0x0;
      uStack_50 = 0;
      FUN_1448d57ff(*param_3,iVar24);
    }
    FUN_140021158(&local_58);
  }
  cVar21 = local_80;
  puVar6 = local_c0;
  if (local_80 != -1) {
    uStack_50 = 0;
    uVar10 = *(uint *)(local_98[0] + 0x28);
    bVar9 = 4;
    if (((uVar10 & 0x10) == 0) && (bVar9 = 2, (uVar10 >> 0x10 & 1) == 0)) {
      bVar9 = ((byte)(uVar10 >> 0xd) & 1) * '\x02' + 1;
    }
    local_f8 = &local_58;
    local_58 = (char *)((ulonglong)bVar9 << 0x10);
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_68,local_c0);
    local_98[0] = 0;
    local_58 = local_68;
    local_f0 = 0;
    local_f8 = (char **)CONCAT44(local_f8._4_4_,1);
    (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_78,&local_58,DAT_14ca09700);
    pcVar7 = local_78;
    puVar16 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar16 + 4;
    if ((undefined8 *)puVar6[1] < puVar19) {
      FUN_140023dd8(puVar6,0x28);
      puVar16 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar16 + 4;
    }
    pcVar8 = local_78;
    *puVar6 = (ulonglong)puVar19;
    *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
    *(undefined8 **)puVar6[6] = puVar16;
    puVar6[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a2901d8;
    puVar16[2] = pcVar7;
    *(char *)(puVar16 + 3) = cVar21;
    if (local_78 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_78 + 8);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_78 + 8);
        LOCK();
        uVar10 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar9 = local_78[0xd];
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = (longlong)pcVar8;
          plVar17 = DAT_14ca843c0;
          plVar15 = DAT_14ca843c8;
          if ((bVar9 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar17;
              LOCK();
              bVar26 = plVar17 != DAT_14ca843c0;
              plVar15 = plVar14;
              if (bVar26) {
                plVar17 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar15;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar14 = (longlong)plVar15;
              LOCK();
              bVar26 = plVar15 != DAT_14ca843c8;
              plVar17 = plVar14;
              if (bVar26) {
                plVar15 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
    if (local_68 != (char *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_68 + 8);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_68 + 8);
        LOCK();
        uVar10 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar9 = local_68[0xd];
          plVar14 = (longlong *)FUN_14001cc68(0x10,8);
          plVar14[1] = (longlong)local_68;
          plVar17 = DAT_14ca843c0;
          plVar15 = DAT_14ca843c8;
          if ((bVar9 & 2) == 0) {
            do {
              *plVar14 = (longlong)plVar17;
              LOCK();
              bVar26 = plVar17 != DAT_14ca843c0;
              plVar15 = plVar14;
              if (bVar26) {
                plVar17 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar15;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar14 = (longlong)plVar15;
              LOCK();
              bVar26 = plVar15 != DAT_14ca843c8;
              plVar17 = plVar14;
              if (bVar26) {
                plVar15 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
  }
  local_e8 = (undefined4)param_3[1];
  local_d8 = puVar6;
  local_f0 = 0;
  local_f8 = (char **)((ulonglong)local_f8 & 0xffffffffffffff00);
  local_e0 = param_7;
  FUN_142de5cd1(param_3,param_5,local_98,local_c4);
LAB_142de67f5:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142de6a4f FUN_142de6a4f body=66 status=ok
// SIG undefined FUN_142de6a4f(void)

char FUN_142de6a4f(char param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  switch(param_1) {
  case '&':
  case '4':
    cVar1 = '&';
    break;
  case '\'':
  case '5':
    cVar1 = '\'';
    break;
  case '(':
  case '6':
    cVar1 = '(';
    break;
  case '*':
    break;
  case '+':
switchD_142de6a6a_caseD_2b:
    cVar1 = '\x02';
    break;
  default:
    if (param_1 == '\0') {
      return '\0';
    }
    if (param_1 == '\x02') goto switchD_142de6a6a_caseD_2b;
  case ')':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
    cVar1 = ')';
    if (param_1 != '7') {
      cVar1 = param_1;
    }
  }
  return cVar1;
}



// FUNCTION 142de6a92 FUN_142de6a92 body=301 status=ok
// SIG undefined FUN_142de6a92(void)

void FUN_142de6a92(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14a2912b0;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[5] = 0x200000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x700000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(byte *)((longlong)param_1 + 0x144) = *(byte *)((longlong)param_1 + 0x144) & 0x80 | 0x3a;
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xffffffc0 | 0x1b;
  *(byte *)((longlong)param_1 + 0x14c) = *(byte *)((longlong)param_1 + 0x14c) & 0xc0;
  *(undefined1 *)(param_1 + 0x2a) = 0x3a;
  bVar1 = DAT_14ca96500;
  if (DAT_14c760db4 != 1) {
    if (DAT_14c760db4 < 3) {
      bVar1 = 0;
    }
    else {
      lVar2 = (ulonglong)DAT_14ca85550 * 0x3c;
      bVar1 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar2) != DAT_14ca81490) && (DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) == 0) {
          bVar1 = 1;
        }
        else {
          bVar1 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar2 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x151) = bVar1;
  *(undefined1 *)((longlong)param_1 + 0x152) = 0;
  return;
}



// FUNCTION 142de6bc0 FUN_142de6bc0 body=122 status=ok
// SIG undefined FUN_142de6bc0(void)

longlong FUN_142de6bc0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar8 = param_2;
  if (param_3 != 1) {
    lVar8 = param_1 + 0x10;
    FUN_14176f2be(lVar8,param_2);
    FUN_147243e48(param_1 + 0x88,param_2 + 0x78);
    uVar1 = *(undefined8 *)(param_2 + 0xe8);
    uVar2 = *(undefined8 *)(param_2 + 0xf0);
    uVar3 = *(undefined8 *)(param_2 + 0xf8);
    uVar4 = *(undefined8 *)(param_2 + 0x100);
    uVar5 = *(undefined8 *)(param_2 + 0x108);
    uVar6 = *(undefined8 *)(param_2 + 0x10d);
    uVar7 = *(undefined8 *)(param_2 + 0x115);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    *(undefined8 *)(param_1 + 0x108) = uVar3;
    *(undefined8 *)(param_1 + 0x110) = uVar4;
    *(undefined8 *)(param_1 + 0x118) = uVar5;
    *(undefined8 *)(param_1 + 0x11d) = uVar6;
    *(undefined8 *)(param_1 + 0x125) = uVar7;
  }
  return lVar8;
}



// FUNCTION 142de6c3a FUN_142de6c3a body=63 status=ok
// SIG undefined FUN_142de6c3a(void)

void FUN_142de6c3a(undefined1 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  uint param_5,longlong param_6)

{
  undefined1 uVar1;
  bool bVar2;
  
  *(undefined1 *)(param_6 + 0x50) = param_1;
  *(undefined8 *)(param_6 + 0x58) = param_2;
  *(undefined1 *)(param_6 + 0x60) = param_3;
  *(undefined1 *)(param_6 + 0x62) = param_4;
  *(uint *)(param_6 + 100) = param_5;
  bVar2 = ((uint)param_2 >> 0xc & 1) == 0;
  uVar1 = (char)(param_5 & 0xf);
  if ((param_5 & 0xf) != 0) {
    uVar1 = bVar2;
  }
  *(undefined1 *)(param_6 + 0x61) = uVar1;
  uVar1 = (char)(param_5 & 0xf0);
  if ((param_5 & 0xf0) != 0) {
    uVar1 = bVar2;
  }
  *(undefined1 *)(param_6 + 99) = uVar1;
  return;
}



// FUNCTION 142de6c79 FUN_142de6c79 body=69 status=ok
// SIG undefined FUN_142de6c79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de6c79(void)

{
  _DAT_14ca09710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de6cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09718,1);
  return;
}



// FUNCTION 142de6cbe FUN_142de6cbe body=88 status=ok
// SIG undefined FUN_142de6cbe(void)

undefined8 FUN_142de6cbe(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = FUN_14723e563();
  puVar3 = &DAT_14ca0ddc0;
  if (iVar2 == 2) {
    cVar1 = DAT_14ca84dfe;
    if (DAT_14ca84dfc != '\x01') goto LAB_142de6d0e;
  }
  else {
    if (iVar2 != 1) goto LAB_142de6d0e;
    cVar1 = DAT_14ca84dfc;
    if (DAT_14ca84e17 != '\0') {
      puVar3 = &DAT_14ca0dda8;
      goto LAB_142de6d0e;
    }
  }
  if (cVar1 != '\0') {
    puVar3 = &DAT_14ca111f0;
  }
LAB_142de6d0e:
  return *puVar3;
}



// FUNCTION 142de6d16 FUN_142de6d16 body=2002 status=ok
// SIG undefined FUN_142de6d16(void)

/* WARNING: Removing unreachable block (ram,0x000142de73d2) */

void FUN_142de6d16(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,int param_7,undefined4 param_8,byte param_9,
                  undefined1 param_10,undefined1 param_11,byte param_12,uint param_13,
                  longlong *param_14)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_478 [40];
  undefined1 local_450 [48];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  short local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar3 = FUN_1406917e6();
  if (cVar3 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    bVar5 = 2;
    if ((param_9 & 2) == 0) {
      bVar5 = param_9 & 1;
    }
    local_1ac = param_8;
    if (param_1[1] == 0 || bVar5 != 0) {
      local_288 = 0x1100000000;
      (**(code **)(*param_1 + 0x48))(0xffffffff,&local_310);
      FUN_14486d71a(&local_310);
    }
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238);
    if (param_6 == 0) {
      puVar8 = &DAT_14c9c0e48;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e60;
      }
      puVar7 = &DAT_14c9c0e78;
    }
    else if (param_6 == 1) {
      puVar8 = &DAT_14c9c0e00;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e18;
      }
      puVar7 = &DAT_14c9c0e30;
    }
    else {
      puVar8 = &DAT_14c9c0d58;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0de8;
      }
      puVar7 = &DAT_14c9c0da0;
    }
    if (param_7 != 0) {
      puVar7 = puVar8;
    }
    uStack_1d0 = *(undefined8 *)(puVar7 + 0x10);
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar6 = (**(code **)(*param_2 + 0x490))(param_2);
    if (uVar6 < 4) {
      uVar4 = (undefined1)(0x5010400 >> ((byte)(uVar6 << 3) & 0x1f));
    }
    else {
      uVar4 = 0;
      if ((uVar6 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar4 = (undefined1)(0xa060900000000 >> ((byte)(uVar6 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar4,(undefined1)local_1af);
    cVar3 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar4);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_1a8 = local_240;
      FUN_14573402d(local_3b0,&local_238);
      FUN_14724b65e(&DAT_14cafc0a0,local_3b0,param_13,*param_1);
      FUN_1457340f6(local_450,&local_238);
      FUN_14724b65e(&DAT_14cafcd70,local_450,param_13,*param_1);
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = param_10;
    local_24d = param_11;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = (ushort)param_12 << 8;
  local_70 = param_13 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
     (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
    bVar5 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar5 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_14[1];
  *(uint *)(param_14 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_14 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_14,iVar1);
  }
  lVar2 = *param_14;
  _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142de74e9 FUN_142de74e9 body=592 status=ok
// SIG undefined FUN_142de74e9(void)

ulonglong FUN_142de74e9(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = DAT_14c9c0d50;
  iVar11 = 0x22;
  if (2 < (int)param_1) {
    cVar4 = FUN_1447be618(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)param_1 * 2));
    lVar3 = DAT_14ca43398;
    if (cVar4 != '\0') {
      iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar11 == 2)) {
        uVar10 = 0;
      }
      else if (iVar11 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar10 = 1;
      }
      iVar11 = 0x22 - (uint)(*(int *)(lVar3 + uVar10 * 4) == 0);
    }
  }
  local_78 = DAT_14c9c0ea0;
  local_48 = 0;
  local_70 = iVar11;
  uVar5 = FUN_147430903(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)param_1 * 2));
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar8 = (uint *)*puVar1;
  if (puVar8 != (uint *)0x0) goto LAB_142de7610;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar8 = (uint *)*puVar1;
LAB_142de7610:
    uVar10 = *(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8;
    uVar9 = puVar8[0x12];
    if ((uint *)(uVar10 + 0x90) <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar2 = *puVar8;
      *puVar8 = *puVar8 + uVar9 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar9) != 0xffffffff) break;
      puVar8 = (uint *)*puVar1;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar1 = puVar8;
      uVar10 = (longlong)puVar8 + 0x5fU & 0xfffffffffffffff8;
      uVar9 = 0;
      if ((uint *)(uVar10 + 0x90) <= puVar8 + 0x4000) {
        uVar9 = 1;
        goto LAB_142de768c;
      }
    }
  }
  uVar9 = uVar9 + 1;
LAB_142de768c:
  *(ulonglong *)(puVar8 + 0x10) = uVar10 + 0x98;
  puVar8[0x12] = uVar9;
  *(int *)(uVar10 - 8) = ((int)uVar10 + -8) - (int)puVar8;
  *(undefined4 *)(uVar10 - 4) = 0x90;
  local_98 = (uVar5 & 0xff) * 2 + 1;
  local_a8 = &local_80;
  local_90 = 0xf;
  local_a0 = param_4;
  FUN_14723d29c(uVar10,CONCAT71((int7)(uVar10 + 0x98 >> 8),2),param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de773a FUN_142de773a body=591 status=ok
// SIG undefined FUN_142de773a(void)

ulonglong FUN_142de773a(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar11 = 0x22;
  if (2 < (int)param_1) {
    cVar4 = FUN_1447be618(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)param_1 * 2));
    lVar3 = DAT_14ca43398;
    if (cVar4 != '\0') {
      iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar11 == 2)) {
        uVar10 = 0;
      }
      else if (iVar11 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar10 = 1;
      }
      iVar11 = 0x22 - (uint)(*(int *)(lVar3 + uVar10 * 4) == 0);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_80 = DAT_14c9c0d50;
  local_78 = DAT_14c9c0ea0;
  local_48 = 0;
  local_70 = iVar11;
  uVar5 = FUN_147430903(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)param_1 * 2));
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar8 = (uint *)*puVar1;
  if (puVar8 != (uint *)0x0) goto LAB_142de7861;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar8 = (uint *)*puVar1;
LAB_142de7861:
    uVar10 = *(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8;
    uVar9 = puVar8[0x12];
    if ((uint *)(uVar10 + 0x90) <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar2 = *puVar8;
      *puVar8 = *puVar8 + uVar9 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar9) != 0xffffffff) break;
      puVar8 = (uint *)*puVar1;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar1 = puVar8;
      uVar10 = (longlong)puVar8 + 0x5fU & 0xfffffffffffffff8;
      uVar9 = 0;
      if ((uint *)(uVar10 + 0x90) <= puVar8 + 0x4000) {
        uVar9 = 1;
        goto LAB_142de78dd;
      }
    }
  }
  uVar9 = uVar9 + 1;
LAB_142de78dd:
  *(ulonglong *)(puVar8 + 0x10) = uVar10 + 0x98;
  puVar8[0x12] = uVar9;
  *(int *)(uVar10 - 8) = ((int)uVar10 + -8) - (int)puVar8;
  *(undefined4 *)(uVar10 - 4) = 0x90;
  local_98 = (uVar5 & 0xff) * 5 + 3;
  local_a8 = &local_80;
  local_90 = 0xf;
  local_a0 = param_4;
  FUN_14723d29c(uVar10,CONCAT71((int7)(uVar10 + 0x98 >> 8),0x17),param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de798a FUN_142de798a body=389 status=ok
// SIG undefined FUN_142de798a(void)

ulonglong FUN_142de798a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = DAT_14c9c0d38;
  local_38 = 0;
  local_60 = 0x11;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142de7a15;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142de7a15:
    uVar5 = *(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8;
    uVar4 = puVar3[0x12];
    if ((uint *)(uVar5 + 0x90) <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar4 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar4) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      uVar5 = (longlong)puVar3 + 0x5fU & 0xfffffffffffffff8;
      uVar4 = 0;
      if ((uint *)(uVar5 + 0x90) <= puVar3 + 0x4000) {
        uVar4 = 1;
        goto LAB_142de7a91;
      }
    }
  }
  uVar4 = uVar4 + 1;
LAB_142de7a91:
  *(ulonglong *)(puVar3 + 0x10) = uVar5 + 0x98;
  puVar3[0x12] = uVar4;
  *(int *)(uVar5 - 8) = ((int)uVar5 + -8) - (int)puVar3;
  *(undefined4 *)(uVar5 - 4) = 0x90;
  local_98 = &local_70;
  local_80 = 0;
  local_88 = 1;
  local_90 = param_4;
  FUN_14723d29c(uVar5,CONCAT71((int7)(uVar5 + 0x98 >> 8),0xd),param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de7b10 FUN_142de7b10 body=389 status=ok
// SIG undefined FUN_142de7b10(void)

ulonglong FUN_142de7b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = DAT_14c9c0d38;
  local_38 = 0;
  local_60 = 0x11;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142de7b9b;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142de7b9b:
    uVar5 = *(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8;
    uVar4 = puVar3[0x12];
    if ((uint *)(uVar5 + 0x90) <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar4 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar4) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      uVar5 = (longlong)puVar3 + 0x5fU & 0xfffffffffffffff8;
      uVar4 = 0;
      if ((uint *)(uVar5 + 0x90) <= puVar3 + 0x4000) {
        uVar4 = 1;
        goto LAB_142de7c17;
      }
    }
  }
  uVar4 = uVar4 + 1;
LAB_142de7c17:
  *(ulonglong *)(puVar3 + 0x10) = uVar5 + 0x98;
  puVar3[0x12] = uVar4;
  *(int *)(uVar5 - 8) = ((int)uVar5 + -8) - (int)puVar3;
  *(undefined4 *)(uVar5 - 4) = 0x90;
  local_98 = &local_70;
  local_80 = 2;
  local_88 = 1;
  local_90 = param_4;
  FUN_14723d29c(uVar5,CONCAT71((int7)(uVar5 + 0x98 >> 8),0xf),param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de7c96 FUN_142de7c96 body=389 status=ok
// SIG undefined FUN_142de7c96(void)

ulonglong FUN_142de7c96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = DAT_14c9c0d38;
  local_38 = 0;
  local_60 = 0x11;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_142de7d21;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_142de7d21:
    uVar5 = *(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8;
    uVar4 = puVar3[0x12];
    if ((uint *)(uVar5 + 0x90) <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar4 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar4) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      uVar5 = (longlong)puVar3 + 0x5fU & 0xfffffffffffffff8;
      uVar4 = 0;
      if ((uint *)(uVar5 + 0x90) <= puVar3 + 0x4000) {
        uVar4 = 1;
        goto LAB_142de7d9d;
      }
    }
  }
  uVar4 = uVar4 + 1;
LAB_142de7d9d:
  *(ulonglong *)(puVar3 + 0x10) = uVar5 + 0x98;
  puVar3[0x12] = uVar4;
  *(int *)(uVar5 - 8) = ((int)uVar5 + -8) - (int)puVar3;
  *(undefined4 *)(uVar5 - 4) = 0x90;
  local_98 = &local_70;
  local_80 = 6;
  local_88 = 1;
  local_90 = param_4;
  FUN_14723d29c(uVar5,CONCAT71((int7)(uVar5 + 0x98 >> 8),0x13),param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de7fd4 FUN_142de7fd4 body=69 status=ok
// SIG undefined FUN_142de7fd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de7fd4(void)

{
  _DAT_14ca09768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de8016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09770,1);
  return;
}



// FUNCTION 142de8019 FUN_142de8019 body=69 status=ok
// SIG undefined FUN_142de8019(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de8019(void)

{
  _DAT_14ca09780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de805b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09788,1);
  return;
}



// FUNCTION 142de805e FUN_142de805e body=69 status=ok
// SIG undefined FUN_142de805e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de805e(void)

{
  _DAT_14ca09798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de80a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca097a0,1);
  return;
}



// FUNCTION 142de80a3 FUN_142de80a3 body=69 status=ok
// SIG undefined FUN_142de80a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de80a3(void)

{
  _DAT_14ca097b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de80e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca097b8,1);
  return;
}



// FUNCTION 142de80e8 FUN_142de80e8 body=69 status=ok
// SIG undefined FUN_142de80e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de80e8(void)

{
  _DAT_14ca097c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de812a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca097d0,1);
  return;
}



// FUNCTION 142de812d FUN_142de812d body=69 status=ok
// SIG undefined FUN_142de812d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de812d(void)

{
  _DAT_14ca097e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de816f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca097e8,1);
  return;
}



// FUNCTION 142de8172 FUN_142de8172 body=69 status=ok
// SIG undefined FUN_142de8172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de8172(void)

{
  _DAT_14ca097f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de81b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09800,1);
  return;
}



// FUNCTION 142de81b7 FUN_142de81b7 body=69 status=ok
// SIG undefined FUN_142de81b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de81b7(void)

{
  _DAT_14ca09810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de81f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09818,1);
  return;
}



// FUNCTION 142de81fc FUN_142de81fc body=69 status=ok
// SIG undefined FUN_142de81fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de81fc(void)

{
  _DAT_14ca09828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de823e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca09830,1);
  return;
}



// FUNCTION 142de824d FUN_142de824d body=69 status=ok
// SIG undefined FUN_142de824d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de824d(void)

{
  _DAT_14ca098d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de828f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca098e0,1);
  return;
}



// FUNCTION 142de865e FUN_142de865e body=440 status=ok
// SIG undefined FUN_142de865e(void)

void FUN_142de865e(longlong param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *(int *)(param_3 + 0x3104);
  iVar2 = *(int *)(param_3 + 0x3100);
  iVar3 = *(int *)(param_3 + 0x30fc);
  iVar4 = *(int *)(param_3 + 0x30f8);
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar5 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar5 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar5;
  param_2[6] = (ulonglong)(puVar5 + 1);
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar5 + 2) = (float)iVar4;
  *(float *)((longlong)puVar5 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar5 + 3) = 0;
  *(float *)((longlong)puVar5 + 0x1c) = (float)iVar2;
  *(float *)(puVar5 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0x3f800000;
  FUN_142de5b44(param_3 + 0x4f80,param_2,param_4);
  if ((*(byte *)(*(longlong *)(param_3 + 8) + 0x5a) & 2) != 0) {
    FUN_142de5b44(param_3 + 0x56a0,param_2,param_1 + 0xdd0);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b0 = DAT_14c9c0d50;
  local_a0 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x35f0);
  local_a8 = DAT_14c9c0ea0;
  local_78 = 0;
  local_b8 = param_4;
  FUN_142de8818(param_1,param_2,param_3);
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de8818 FUN_142de8818 body=1595 status=ok
// SIG undefined FUN_142de8818(void)

void FUN_142de8818(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 *param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  int local_1c8;
  undefined4 local_1c0;
  ulonglong *local_1b8;
  longlong local_1b0;
  undefined **local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 local_179;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined **local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined2 local_138;
  undefined8 local_130;
  undefined4 local_128;
  longlong local_120;
  undefined ***local_118;
  undefined1 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 local_c0 [120];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  iVar9 = 1;
  local_1c0 = 1;
  local_1c8 = 0x3f800000;
  local_1d0 = (undefined1 *)((ulonglong)local_1d0 & 0xffffffffffffff00);
  local_1d8 = (undefined1 *)param_3;
  local_1b0 = param_1;
  FUN_140b8e5fa(param_3 + 0x3d90,param_2,param_4,*(undefined4 *)(param_3 + 0x3090));
  local_1c0 = 1;
  local_1c8 = 0x3f800000;
  local_1d0 = (undefined1 *)((ulonglong)local_1d0 & 0xffffffffffffff00);
  local_1d8 = (undefined1 *)param_3;
  local_1b8 = param_2;
  FUN_140b8e5fa(param_3 + 0x4030,param_2,param_4,*(undefined4 *)(param_3 + 0x3090));
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_147248ede(local_c0);
  local_1a8 = &PTR_FUN_14a1f9a30;
  local_188 = &local_179;
  uVar1 = *(undefined4 *)(param_3 + 0x3090);
  local_1a0 = &local_168;
  local_198 = &local_178;
  local_190 = local_c0;
  local_130 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x40) + 0x3e0))();
  local_140 = 0xffffffff;
  local_138 = 0x3a3a;
  local_110 = 0x3a;
  local_148 = &PTR_FUN_14a20dd90;
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_f8 = *(undefined8 *)(param_4 + 4);
  uStack_f0 = *(undefined8 *)(param_4 + 6);
  local_e8 = *(undefined8 *)(param_4 + 8);
  uStack_e0 = *(undefined8 *)(param_4 + 10);
  local_d8 = *(undefined8 *)(param_4 + 0xc);
  uStack_d0 = *(undefined8 *)(param_4 + 0xe);
  local_c8 = 0;
  local_128 = uVar1;
  local_120 = param_3;
  local_118 = &local_1a8;
  if (0 < *(int *)(param_3 + 0x3ce8)) {
    lVar10 = 0;
    do {
      local_1d8 = (undefined1 *)CONCAT44(local_1d8._4_4_,0xffffffff);
      FUN_147158e02(&local_148,*(undefined8 *)(*(longlong *)(param_3 + 0x3ce0) + lVar10 * 8),
                    0xffffffffffffffff,0);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_3 + 0x3ce8));
  }
  puVar11 = local_1b8;
  if ((*(char *)(param_3 + 0x23f2) == '\x01') &&
     (cVar3 = FUN_144b2acae(param_3), puVar11 = local_1b8, cVar3 != '\0')) {
    bVar4 = FUN_144b2acba(param_3);
    iVar9 = bVar4 + 1;
  }
  local_1d8 = local_c0;
  local_1d0 = &local_179;
  local_1c8 = iVar9;
  FUN_142de60ce(param_3,puVar11,&local_178,&local_168);
  FUN_1446fb350(local_c0);
  FUN_140021158(&local_178);
  FUN_144ab33a4(&local_168);
  local_1d0 = (undefined1 *)((ulonglong)local_1d0 & 0xffffffffffffff00);
  local_1c0 = 3;
  local_1c8 = 0x3f800000;
  local_1d8 = (undefined1 *)param_3;
  FUN_140b8e5fa(param_3 + 0x37a0,puVar11,param_4,*(undefined4 *)(local_1b0 + 0x8a4));
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_147248ede(local_c0);
  local_1a8 = &PTR_FUN_14a1f9a30;
  uVar1 = *(undefined4 *)(param_3 + 0x3090);
  local_1a0 = &local_168;
  local_198 = &local_178;
  local_190 = local_c0;
  local_188 = &local_179;
  local_130 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x40) + 0x3e0))();
  local_140 = 0xffffffff;
  local_138 = 0x3a3a;
  local_110 = 0x3a;
  local_148 = &PTR_FUN_14a20dd90;
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_f8 = *(undefined8 *)(param_4 + 4);
  uStack_f0 = *(undefined8 *)(param_4 + 6);
  local_e8 = *(undefined8 *)(param_4 + 8);
  uStack_e0 = *(undefined8 *)(param_4 + 10);
  local_d8 = *(undefined8 *)(param_4 + 0xc);
  uStack_d0 = *(undefined8 *)(param_4 + 0xe);
  local_c8 = 0;
  local_128 = uVar1;
  local_120 = param_3;
  local_118 = &local_1a8;
  if (0 < *(int *)(param_3 + 0x3cf8)) {
    lVar10 = 0;
    do {
      local_1d8 = (undefined1 *)CONCAT44(local_1d8._4_4_,0xffffffff);
      FUN_147158e02(&local_148,*(undefined8 *)(*(longlong *)(param_3 + 0x3cf0) + lVar10 * 8),
                    0xffffffffffffffff,0);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_3 + 0x3cf8));
  }
  iVar9 = 1;
  puVar11 = local_1b8;
  if ((*(char *)(param_3 + 0x23f2) == '\x01') &&
     (cVar3 = FUN_144b2acae(param_3), puVar11 = local_1b8, cVar3 != '\0')) {
    bVar4 = FUN_144b2acba(param_3);
    iVar9 = bVar4 + 1;
  }
  local_1d0 = &local_179;
  local_1d8 = local_c0;
  local_1c8 = iVar9;
  FUN_142de60ce(param_3,puVar11,&local_178,&local_168);
  FUN_1446fb350(local_c0);
  FUN_140021158(&local_178);
  FUN_144ab33a4(&local_168);
  if (((&DAT_14ca814b8)
       [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0xf] ==
       1) && ((*(byte *)((longlong)&DAT_14ca814d8 +
                        (ulonglong)
                        *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) *
                        0x3c + 1) & 0x10) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e54c0) && (FUN_144b3d300(&DAT_14c9e54c0), DAT_14c9e54c0 == -1)) {
      local_148 = (undefined **)0x14a2415c0;
      local_140 = 0x10;
      local_13c = 0;
      uVar5 = FUN_14001a6c0(&local_148,1);
      DAT_14c9e54b8 = (ulonglong)uVar5;
      _Init_thread_footer(&DAT_14c9e54c0);
    }
    plVar6 = (longlong *)FUN_1411d089c();
    puVar11 = local_1b8;
    if (0 < (longlong)(int)plVar6[1]) {
      lVar10 = 0;
      do {
        if (*(ulonglong *)(*plVar6 + lVar10 * 8) == DAT_14c9e54b8) {
          if (((char)lVar10 != -1) && (*(longlong *)(param_5 + 0x50) != 0)) {
            uVar2 = *(undefined8 *)(*(longlong *)(param_5 + 0x50) + 0x10);
            puVar7 = (undefined8 *)(*local_1b8 + 7 & 0xfffffffffffffff8);
            puVar8 = puVar7 + 4;
            if ((undefined8 *)local_1b8[1] < puVar8) {
              FUN_140023dd8(local_1b8,0x28);
              puVar7 = (undefined8 *)(*puVar11 + 7 & 0xfffffffffffffff8);
              puVar8 = puVar7 + 4;
            }
            *local_1b8 = (ulonglong)puVar8;
            *(int *)(local_1b8 + 0xc) = (int)local_1b8[0xc] + 1;
            *(undefined8 **)local_1b8[6] = puVar7;
            local_1b8[6] = (ulonglong)(puVar7 + 1);
            puVar7[1] = 0;
            *puVar7 = &PTR_LAB_14a2901d8;
            puVar7[2] = uVar2;
            *(char *)(puVar7 + 3) = (char)lVar10;
            puVar11 = local_1b8;
          }
          break;
        }
        lVar10 = lVar10 + 1;
      } while ((int)plVar6[1] != lVar10);
    }
  }
  local_1c0 = 3;
  local_1c8 = 0x3f800000;
  local_1d0 = (undefined1 *)((ulonglong)local_1d0 & 0xffffffffffffff00);
  local_1d8 = (undefined1 *)param_3;
  FUN_140b8e5fa(param_3 + 0x3a40,puVar11,param_4,*(undefined4 *)(local_1b0 + 0x8a4));
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142de8e54 FUN_142de8e54 body=2793 status=ok
// SIG undefined FUN_142de8e54(void)

void FUN_142de8e54(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
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
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 unaff_RBP;
  undefined7 uVar26;
  double *pdVar27;
  longlong lVar28;
  double *pdVar29;
  byte bVar30;
  undefined8 *puVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  undefined1 local_380;
  undefined1 *local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  longlong local_360;
  undefined1 local_352;
  byte local_351;
  longlong local_350;
  double local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  int local_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238 [4];
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined5 uStack_134;
  undefined3 uStack_12f;
  undefined5 uStack_12c;
  undefined8 uStack_127;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (((((DAT_14c760e14 != 0) ||
        (uVar21 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2),
        *(longlong *)(&DAT_14ca814b0 + uVar21 * 0x3c) == DAT_14ca81498)) ||
       ((*(byte *)(&DAT_14ca814d8 + uVar21 * 0xf) & 0x80) != 0)) ||
      (((*(byte *)(&DAT_14ca814c8 + uVar21 * 0xf) & 0x20) != 0 && (DAT_14ca84e00 == '\x01')))) &&
     (((*(byte *)(param_1 + 0xe3) & 1) != 0 && (*(char *)(param_3 + 0x23ec) == '\0')))) {
    bVar30 = DAT_14c760e14 & DAT_14ca964f0;
    uVar26 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if (bVar30 == 0) {
      uVar21 = CONCAT71(uVar26,*(char *)(param_1 + 0xd42) * '\x02' + '\x03');
      local_352 = 4;
    }
    else {
      uVar21 = CONCAT71(uVar26,4);
      local_352 = 2;
    }
    lVar28 = *(longlong *)(param_1 + 8);
    if (0 < *(int *)(lVar28 + 0x3700)) {
      local_2c8 = 0;
      uStack_2c0 = 0;
      local_2d8 = *(undefined8 *)(lVar28 + 0x36f8);
      local_351 = bVar30;
      local_2d0 = *(int *)(lVar28 + 0x3700);
      FUN_142ba98c7(&local_1c8,&local_2d8,param_3);
      local_2e8 = local_1c8;
      local_2e0 = (undefined4)uStack_1c0;
      FUN_142baaa75(&local_2e8,uVar21 & 0xffffffff,&local_2c8);
      iVar1 = (int)uStack_2c0;
      uVar25 = uStack_2c0 & 0xffffffff;
      FUN_1400b5938(&local_1c8);
      if (0 < iVar1) {
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_178 = 0;
        local_16c = 0;
        uStack_164 = 0;
        local_15c = 0;
        uStack_154 = 0;
        local_14c = 0;
        uStack_144 = 0;
        local_13c = 0;
        uStack_134 = 0;
        uStack_12f = 0;
        uStack_12c = 0;
        uStack_127 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        local_100 = 1;
        local_f8 = 0;
        FUN_144b0e33a(param_2);
        iVar1 = *(int *)(param_3 + 0x3104);
        iVar2 = *(int *)(param_3 + 0x3100);
        iVar3 = *(int *)(param_3 + 0x30fc);
        iVar4 = *(int *)(param_3 + 0x30f8);
        puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar31 = puVar22 + 5;
        if ((undefined8 *)param_2[1] < puVar31) {
          FUN_140023dd8(param_2,0x30);
          puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar31 = puVar22 + 5;
        }
        *param_2 = (ulonglong)puVar31;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar22;
        param_2[6] = (ulonglong)(puVar22 + 1);
        puVar22[1] = 0;
        *puVar22 = &PTR_LAB_14a1e7fc8;
        *(float *)(puVar22 + 2) = (float)iVar4;
        *(float *)((longlong)puVar22 + 0x14) = (float)iVar3;
        *(undefined4 *)(puVar22 + 3) = 0;
        *(float *)((longlong)puVar22 + 0x1c) = (float)iVar2;
        *(float *)(puVar22 + 4) = (float)iVar1;
        *(undefined4 *)((longlong)puVar22 + 0x24) = 0x3f800000;
        uVar18 = DAT_14ca96e30;
        puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar31 = puVar22 + 5;
        local_350 = param_1;
        if ((undefined8 *)param_2[1] < puVar31) {
          FUN_140023dd8(param_2,0x30);
          puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar31 = puVar22 + 5;
        }
        *param_2 = (ulonglong)puVar31;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar22;
        param_2[6] = (ulonglong)(puVar22 + 1);
        puVar22[1] = 0;
        *puVar22 = &PTR_LAB_14a1fb5a8;
        lVar32 = 0;
        *(undefined4 *)(puVar22 + 2) = 0;
        puVar22[3] = uVar18;
        *(undefined4 *)(puVar22 + 4) = 0;
        do {
          lVar6 = *(longlong *)(local_2c8 + lVar32);
          dVar7 = *(double *)(lVar6 + 0x10);
          dVar10 = *(double *)(lVar6 + 0x18);
          dVar34 = *(double *)(lVar6 + 0x20);
          local_238[2] = *(double *)(lVar6 + 0x50);
          dVar8 = *(double *)(lVar6 + 0x58);
          dVar9 = *(double *)(lVar6 + 0x60);
          dVar33 = dVar10 + dVar10;
          dVar36 = dVar34 + dVar34;
          dVar40 = dVar7 * (dVar7 + dVar7);
          dVar41 = dVar10 * dVar33;
          local_238[0] = (1.0 - (dVar34 * dVar36 + dVar41)) * local_238[2];
          dVar38 = (1.0 - (dVar34 * dVar36 + dVar40)) * dVar8;
          local_1e8 = (1.0 - (dVar40 + dVar41)) * dVar9;
          dVar41 = (0.0 - (dVar40 + dVar41)) * *(double *)(lVar6 + 0x68);
          dVar40 = *(double *)(lVar6 + 0x10) * dVar36;
          dVar34 = *(double *)(lVar6 + 0x28);
          dVar37 = dVar36 * dVar34;
          dVar39 = (dVar7 + dVar7) * *(double *)(lVar6 + 0x28);
          dVar34 = dVar33 * dVar34;
          local_238[1] = (dVar33 * dVar7 + dVar37) * local_238[2];
          local_208 = (dVar36 * dVar10 + dVar39) * dVar8;
          dVar42 = (dVar34 + dVar40) * dVar9;
          local_238[2] = (dVar40 - dVar34) * local_238[2];
          dVar8 = (dVar33 * dVar7 - dVar37) * dVar8;
          dVar9 = (dVar36 * dVar10 - dVar39) * dVar9;
          local_2f8._8_4_ = SUB84(dVar41,0);
          local_2f8._0_8_ = local_1e8;
          local_2f8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          local_238[3] = 0.0;
          local_218._8_4_ = SUB84(dVar38,0);
          local_218._0_8_ = dVar8;
          local_218._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          auVar19 = local_218;
          uStack_200 = 0;
          local_1f8._8_4_ = SUB84(dVar9,0);
          local_1f8._0_8_ = dVar42;
          local_1f8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar20 = local_1f8;
          uStack_1e0 = 0;
          dVar34 = *(double *)(lVar6 + 0x30);
          dVar33 = *(double *)(lVar6 + 0x40);
          uStack_330 = *(undefined8 *)(lVar6 + 0x48);
          local_338 = SUB84(dVar33,0);
          uStack_334 = (undefined4)((ulonglong)dVar33 >> 0x20);
          local_348 = *(double *)(lVar6 + 0x38);
          uStack_340 = 0;
          local_1d8 = dVar34;
          dStack_1d0 = *(double *)(lVar6 + 0x38);
          if ((*(char *)(param_3 + 0x23f5) == '\0') && ((*(byte *)(param_3 + 0x3099) & 2) == 0)) {
            dVar36 = *(double *)(param_3 + 0xe30);
            dVar37 = *(double *)(param_3 + 0xe38);
            dVar39 = *(double *)(param_3 + 0xe40);
            dVar11 = *(double *)(param_3 + 0xe48);
            dVar12 = *(double *)(param_3 + 0xe50);
            dVar13 = *(double *)(param_3 + 0xe58);
            dVar14 = *(double *)(param_3 + 0xe60);
            dVar15 = *(double *)(param_3 + 0xe68);
            dVar16 = *(double *)(param_3 + 0xe70);
            dVar17 = *(double *)(param_3 + 0xe78);
            local_308 = *(double *)(param_3 + 0xe80);
            dStack_300 = *(double *)(param_3 + 0xe88);
            local_328 = *(double *)(param_3 + 0xe90);
            dStack_320 = *(double *)(param_3 + 0xe98);
            dVar7 = dStack_320 * 0.0 +
                    local_238[2] * dVar17 + local_238[1] * dVar13 + local_238[0] * dVar37;
            local_318 = *(double *)(param_3 + 0xea0);
            dStack_310 = *(double *)(param_3 + 0xea8);
            dVar41 = dStack_310 * 0.0 +
                     local_238[2] * dStack_300 + local_238[1] * dVar15 + local_238[0] * dVar11;
            dVar40 = dStack_320 * 0.0 +
                     local_208 * dVar17 + (double)local_218._8_8_ * dVar13 + dVar8 * dVar37;
            dVar10 = dStack_310 * 0.0 +
                     local_208 * dStack_300 + (double)local_218._8_8_ * dVar15 + dVar8 * dVar11;
            local_278 = local_328 * 0.0 +
                        local_1e8 * dVar16 + (double)local_1f8._8_8_ * dVar12 + dVar42 * dVar36;
            dStack_270 = dStack_320 * 0.0 +
                         local_1e8 * dVar17 + (double)local_1f8._8_8_ * dVar13 + dVar42 * dVar37;
            dVar38 = dStack_310 * 0.0 +
                     local_1e8 * dStack_300 + (double)local_1f8._8_8_ * dVar15 + dVar42 * dVar11;
            dVar43 = *(double *)(param_3 + 0x1030) + dVar34;
            dVar9 = local_348 + *(double *)(param_3 + 0x1038);
            dVar44 = dVar33 + *(double *)(param_3 + 0x1040);
            local_258 = dVar16 * dVar44 + dVar12 * dVar9 + dVar36 * dVar43 + local_328;
            dStack_250 = dVar17 * dVar44 + dVar13 * dVar9 + dVar37 * dVar43 + dStack_320;
            dStack_240 = dVar44 * dStack_300 + dVar9 * dVar15 + dVar43 * dVar11 + dStack_310;
            local_2b8._8_4_ = SUB84(dVar7,0);
            local_2b8._0_8_ =
                 local_328 * 0.0 +
                 local_238[2] * dVar16 + local_238[1] * dVar12 + local_238[0] * dVar36;
            local_2b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            local_2a8._8_4_ = SUB84(dVar41,0);
            local_2a8._0_8_ =
                 local_318 * 0.0 +
                 local_238[2] * local_308 + local_238[1] * dVar14 + local_238[0] * dVar39;
            local_2a8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            local_298._8_4_ = SUB84(dVar40,0);
            local_298._0_8_ =
                 local_328 * 0.0 +
                 local_208 * dVar16 + (double)local_218._8_8_ * dVar12 + dVar8 * dVar36;
            local_298._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            local_288._8_4_ = SUB84(dVar10,0);
            local_288._0_8_ =
                 local_318 * 0.0 +
                 local_208 * local_308 + (double)local_218._8_8_ * dVar14 + dVar8 * dVar39;
            local_288._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            local_268._8_4_ = SUB84(dVar38,0);
            local_268._0_8_ =
                 local_318 * 0.0 +
                 local_1e8 * local_308 + (double)local_1f8._8_8_ * dVar14 + dVar42 * dVar39;
            local_268._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
            dVar38 = *(double *)(lVar6 + 0x38);
            local_248 = dVar44 * local_308 + dVar9 * dVar14 + dVar43 * dVar39 + local_318;
            local_218 = auVar19;
            local_1f8 = auVar20;
          }
          else {
            pdVar27 = local_238;
            pdVar29 = (double *)local_2b8;
            for (lVar24 = 0xe; lVar24 != 0; lVar24 = lVar24 + -1) {
              *pdVar29 = *pdVar27;
              pdVar27 = pdVar27 + 1;
              pdVar29 = pdVar29 + 1;
            }
            dStack_240 = 1.0;
            dVar38 = local_348;
            local_248 = dVar33;
          }
          dVar34 = *(double *)(param_3 + 0x1048) - dVar34;
          dVar38 = *(double *)(param_3 + 0x1050) - dVar38;
          dVar33 = *(double *)(param_3 + 0x1058) - dVar33;
          dVar34 = dVar33 * dVar33 + dVar34 * dVar34 + dVar38 * dVar38;
          fVar35 = *(float *)(local_2c8 + 0x14 + lVar32) * 1.05 +
                   *(float *)(param_3 + 0x2170) + *(float *)(param_3 + 0x2170);
          dVar33 = (double)(fVar35 * fVar35);
          lVar24 = local_2c8 + lVar32;
          puVar31 = &DAT_14ca0de68;
          if (dVar34 < dVar33) {
            puVar31 = &DAT_14ca0de50;
          }
          puVar23 = &DAT_14c9c0de8;
          if (dVar34 < dVar33 !=
              (bool)(*(double *)(lVar6 + 0x50) * *(double *)(lVar6 + 0x58) *
                     *(double *)(lVar6 + 0x60) < 0.0 ^ *(byte *)(param_3 + 0x2398))) {
            puVar23 = &DAT_14c9c0d58;
          }
          uStack_190 = *(undefined8 *)(puVar23 + 0x10);
          local_188 = *puVar31;
          local_198 = FUN_144a64ef0(*(undefined4 *)(local_2c8 + 0x10 + lVar32),uVar21 & 0xffffffff,
                                    CONCAT71((int7)((ulonglong)puVar31 >> 8),local_352));
          local_370 = 0;
          uStack_368 = 0;
          local_378 = local_2b8;
          local_380 = (undefined1)uVar21;
          local_388 = lVar24;
          local_360 = lVar28;
          FUN_142baab6b(param_2,&local_1c8,0,param_3);
          uVar18 = DAT_14ca96e48;
          uVar5 = *(undefined4 *)(param_3 + 0x3094);
          puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar31 = puVar22 + 6;
          if ((undefined8 *)param_2[1] < puVar31) {
            FUN_140023dd8(param_2,0x38);
            puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar31 = puVar22 + 6;
          }
          *param_2 = (ulonglong)puVar31;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar22;
          param_2[6] = (ulonglong)(puVar22 + 1);
          puVar22[1] = 0;
          *puVar22 = &PTR_FUN_14a1fb5b0;
          puVar22[2] = uVar18;
          puVar22[3] = 0;
          puVar22[4] = 8;
          *(undefined4 *)(puVar22 + 5) = 0xc;
          *(undefined4 *)((longlong)puVar22 + 0x2c) = uVar5;
          lVar32 = lVar32 + 0x30;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      FUN_1400b5938(&local_2c8);
      bVar30 = local_351;
    }
    lVar28 = param_3 + 0x7920;
    if (bVar30 != 0) {
      lVar28 = param_3 + 0x7200;
    }
    if (0 < *(int *)(lVar28 + 0x4bec)) {
      iVar1 = *(int *)(param_3 + 0x3104);
      iVar2 = *(int *)(param_3 + 0x3100);
      iVar3 = *(int *)(param_3 + 0x30fc);
      iVar4 = *(int *)(param_3 + 0x30f8);
      puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar31 = puVar22 + 5;
      if ((undefined8 *)param_2[1] < puVar31) {
        FUN_140023dd8(param_2,0x30);
        puVar22 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar31 = puVar22 + 5;
      }
      *param_2 = (ulonglong)puVar31;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar22;
      param_2[6] = (ulonglong)(puVar22 + 1);
      puVar22[1] = 0;
      *puVar22 = &PTR_LAB_14a1e7fc8;
      *(float *)(puVar22 + 2) = (float)iVar4;
      *(float *)((longlong)puVar22 + 0x14) = (float)iVar3;
      *(undefined4 *)(puVar22 + 3) = 0;
      *(float *)((longlong)puVar22 + 0x1c) = (float)iVar2;
      *(float *)(puVar22 + 4) = (float)iVar1;
      *(undefined4 *)((longlong)puVar22 + 0x24) = 0x3f800000;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3a8);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de99b8 FUN_142de99b8 body=410 status=ok
// SIG undefined FUN_142de99b8(void)

void FUN_142de99b8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [96];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_1 + 0x3f0);
  local_e8 = param_3;
  local_e0 = param_4;
  if (0 < iVar1) {
    lVar2 = 0;
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 1000);
      if ((((*(byte *)(lVar3 + 0x125b0 + lVar2) & 2) == 0) &&
          (*(char *)(lVar3 + 0x30c8 + lVar2) == '\0')) &&
         (((*(char *)(lVar3 + 0x23f2 + lVar2) == '\0' &&
           (*(char *)(lVar3 + 0x23f5 + lVar2) != '\x01')) || (*(int *)(lVar3 + 0x1dd0 + lVar2) != 2)
          ))) {
        lVar3 = lVar3 + lVar2;
        local_68 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x36f8);
        local_60 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3700);
        FUN_142ba98c7(&local_58,&local_68,lVar3);
        local_f8 = 1;
        local_100 = local_e0;
        local_108 = local_e8;
        FUN_14025015e(local_c8,param_2,lVar3,*(longlong *)(param_1 + 8) + 0x5168);
        local_d8 = local_58;
        local_d0 = local_50;
        local_100 = CONCAT71(local_100._1_7_,1);
        local_108 = param_5;
        FUN_142b86cbd(param_2,lVar3,&local_d8,local_c8);
        FUN_1400b5938(&local_58);
        iVar1 = *(int *)(param_1 + 0x3f0);
      }
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x13c10;
    } while (lVar4 < iVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142de9b53 FUN_142de9b53 body=69 status=ok
// SIG undefined FUN_142de9b53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de9b53(void)

{
  _DAT_14ca0d9b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de9b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca0d9c0,1);
  return;
}



// FUNCTION 142de9b98 FUN_142de9b98 body=69 status=ok
// SIG undefined FUN_142de9b98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de9b98(void)

{
  _DAT_14ca0d9c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de9bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca0d9d0,1);
  return;
}



// FUNCTION 142de9bdd FUN_142de9bdd body=69 status=ok
// SIG undefined FUN_142de9bdd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de9bdd(void)

{
  _DAT_14ca0d9e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142de9c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca0d9e8,1);
  return;
}



// FUNCTION 142de9c22 FUN_142de9c22 body=492 status=ok
// SIG undefined FUN_142de9c22(void)

bool FUN_142de9c22(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_b8 [39];
  char local_91;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88;
  undefined1 local_84;
  undefined1 local_80;
  undefined1 local_7c;
  int local_78;
  int local_74;
  char local_6c [4];
  char local_68;
  char local_64;
  char local_60;
  char local_5c;
  char local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 8) == 2) && ((&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1)) {
    bVar14 = false;
    if ((DAT_14ca964f0 == '\x01') && ((DAT_14c760e14 & 1) != 0)) {
      uVar1 = *(uint *)(param_1 + 2);
      uVar2 = uVar1 + 3;
      uVar3 = uVar1 + 7;
      uVar4 = uVar1 + 0xf;
      uVar5 = uVar1 + 0x1f;
      uVar6 = uVar1 + 0x3f;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
        uVar3 = uVar1;
        uVar4 = uVar1;
        uVar5 = uVar1;
        uVar6 = uVar1;
      }
      iVar8 = (((int)uVar1 / 6 + ((int)uVar1 >> 0x1f) >> 5) - ((int)uVar1 >> 0x1f)) % 3;
      bVar9 = (uVar1 & 0x80000001) == 1;
      bVar10 = ((int)uVar1 / 2 & 0x80000001U) == 1;
      bVar11 = ((int)uVar2 >> 2 & 0x80000001U) == 1;
      bVar12 = ((int)uVar3 >> 3 & 0x80000001U) == 1;
      local_91 = ((int)uVar4 >> 4 & 0x80000001U) == 1;
      bVar13 = ((int)uVar5 >> 5 & 0x80000001U) == 1;
      iVar7 = ((int)uVar6 >> 6) + 1 + (((int)uVar6 >> 6) / 3) * -3;
      local_90 = bVar9;
      local_8c = bVar10;
      local_88 = bVar11;
      local_84 = bVar12;
      local_80 = local_91;
      local_7c = bVar13;
      local_78 = iVar7;
      local_74 = iVar8;
      FUN_147244e6c(local_6c);
      bVar14 = false;
      if (((((bool)local_6c[0] == bVar9) && (bVar14 = false, (bool)local_68 == bVar10)) &&
          (bVar14 = false, (bool)local_64 == bVar11)) &&
         ((((bool)local_60 == bVar12 && (local_5c == local_91)) &&
          (((bool)local_58 == bVar13 && (local_54 == iVar7)))))) {
        bVar14 = local_50 == iVar8;
      }
    }
  }
  else {
    bVar14 = false;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar14;
}



// FUNCTION 142de9e1c FUN_142de9e1c body=134 status=ok
// SIG undefined FUN_142de9e1c(void)

byte FUN_142de9e1c(ushort *param_1)

{
  uint uVar1;
  byte bVar2;
  
  if ((*(int *)(param_1 + 8) == 2) && ((&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1)) {
    if (DAT_14ca964f0 != '\x01') {
      return 0;
    }
    if ((DAT_14c760e14 & 1) == 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 2);
    bVar2 = FUN_14743070e();
    if ((DAT_14c760e18 & (uVar1 & 0x80000001) == 1) == 0) {
      return bVar2 | ((int)uVar1 / 0xc & 0x80000001U) != 1;
    }
  }
  return 0;
}



// FUNCTION 142de9eae FUN_142de9eae body=123 status=ok
// SIG undefined FUN_142de9eae(void)

undefined8 FUN_142de9eae(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  if ((&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1) {
    if (DAT_14ca964f0 != '\x01') {
      return 0;
    }
    if ((DAT_14c760e14 & 1) == 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 2);
    if ((DAT_14c760e18 & (uVar1 & 0x80000001) == 1) == 0) {
      uVar3 = uVar1 + 0xf;
      if (-1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      if ((((int)uVar3 >> 4) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) ||
         (cVar2 = FUN_147430623(), cVar2 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142de9f35 FUN_142de9f35 body=11450 status=ok
// SIG undefined FUN_142de9f35(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de9f35(ulonglong *param_1,int param_2,int param_3,wchar_t *param_4,longlong param_5,
                  longlong param_6,wchar_t *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar7;
  wchar_t wVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  char cVar38;
  uint uVar39;
  undefined8 *puVar40;
  longlong lVar41;
  longlong *plVar42;
  longlong lVar43;
  longlong *plVar44;
  longlong *plVar45;
  longlong lVar46;
  longlong *plVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  int iVar50;
  undefined *puVar51;
  undefined8 *puVar52;
  ulonglong uVar53;
  uint uVar54;
  longlong **pplVar55;
  ulonglong uVar56;
  int iVar57;
  ulonglong uVar58;
  undefined4 uVar59;
  undefined8 in_R10;
  ulonglong uVar60;
  ulonglong uVar61;
  byte bVar62;
  ulonglong uVar63;
  ulonglong *puVar64;
  longlong **pplVar65;
  ulonglong uVar66;
  bool bVar67;
  float fVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  undefined1 local_848 [32];
  longlong **local_828;
  longlong **local_820;
  longlong *plStack_818;
  char *local_810;
  code *local_808;
  code *local_800;
  longlong **local_7f8;
  longlong **local_7f0;
  undefined1 *local_7e8;
  undefined1 *local_7e0;
  undefined4 local_7d8;
  undefined8 local_7d0;
  longlong *local_7c0;
  byte local_7b2;
  byte local_7b1;
  undefined8 local_7b0;
  wchar_t *local_7a8;
  undefined8 local_7a0;
  ulonglong local_798;
  undefined4 local_78c;
  longlong *local_788;
  ulonglong local_780;
  ulonglong *local_778;
  undefined4 local_770;
  uint local_76c;
  uint local_768;
  int local_764;
  int local_760;
  int local_75c;
  longlong local_758;
  ulonglong local_750;
  longlong *local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *plStack_730;
  ulonglong local_728;
  double local_720;
  byte local_714 [12];
  longlong *local_708 [6];
  undefined1 local_6d8 [56];
  int aiStack_6a0 [42];
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  longlong *local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined4 uStack_5a0;
  undefined8 uStack_59c;
  undefined8 uStack_594;
  undefined8 uStack_58c;
  undefined8 uStack_584;
  undefined8 local_57c;
  undefined8 uStack_574;
  undefined8 local_56c;
  undefined5 uStack_564;
  undefined3 uStack_55f;
  undefined5 uStack_55c;
  undefined8 uStack_557;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  uint local_530;
  undefined8 local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined8 auStack_458 [4];
  undefined8 local_438;
  uint local_430;
  uint uStack_42c;
  byte local_428 [4];
  byte local_424;
  int local_420;
  int local_41c;
  undefined8 uStack_418;
  undefined8 auStack_40c [7];
  undefined8 auStack_3cf [2];
  undefined8 auStack_3b8 [3];
  undefined4 auStack_3a0 [2];
  longlong *local_398;
  char cStack_390;
  undefined7 uStack_38f;
  longlong local_388;
  undefined1 uStack_380;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368 [4];
  float local_358;
  float fStack_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340 [2];
  undefined1 *local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  float local_318;
  float local_314;
  float local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong *local_1e8;
  longlong *aplStack_1e0 [3];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined5 uStack_134;
  undefined3 uStack_12f;
  undefined5 uStack_12c;
  undefined8 uStack_127;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  double dVar6;
  double dVar8;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_848;
  iVar50 = *(int *)(param_4 + 0x1882);
  iVar57 = *(int *)(param_4 + 0x1880);
  iVar10 = *(int *)(param_4 + 0x187e);
  iVar11 = *(int *)(param_4 + 0x187c);
  puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar52 = puVar40 + 5;
  local_764 = param_2;
  local_75c = param_3;
  if ((undefined8 *)param_1[1] < puVar52) {
    FUN_140023dd8(param_1,0x30);
    puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar52 = puVar40 + 5;
  }
  *param_1 = (ulonglong)puVar52;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar40;
  param_1[6] = (ulonglong)(puVar40 + 1);
  puVar40[1] = 0;
  *puVar40 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar40 + 2) = (float)iVar11;
  *(float *)((longlong)puVar40 + 0x14) = (float)iVar10;
  *(undefined4 *)(puVar40 + 3) = 0;
  *(float *)((longlong)puVar40 + 0x1c) = (float)iVar57;
  *(float *)(puVar40 + 4) = (float)iVar50;
  *(undefined4 *)((longlong)puVar40 + 0x24) = 0x3f800000;
  FUN_14003fbd6();
  local_740 = (longlong *)(**(code **)(*DAT_14caea090 + 0x2f0))();
  lVar43 = *local_740;
  local_748 = (longlong *)(**(code **)(lVar43 + 0x30))(local_740,1);
  lVar41 = 0;
  iVar50 = 0;
  do {
    iVar50 = (iVar50 + 1) - (uint)(*(longlong *)(param_5 + 0x36a0 + lVar41 * 8) == 0);
    lVar41 = lVar41 + 1;
  } while (lVar41 != 3);
  if (((iVar50 != 1) || (DAT_14ca0d9d8 == 0 && (param_4[0x92d8] & L'\x80') != L'\0')) ||
     (uVar63 = CONCAT71((int7)((ulonglong)lVar43 >> 8),1), *(longlong *)(param_5 + 0x36a0) == 0)) {
    if ((*(longlong *)(param_5 + 0x3608) == 0) ||
       (((*(byte *)(*(longlong *)(param_5 + 0x3608) + 0x20) & 4) != 0 && ((DAT_14c760e18 & 1) != 0))
       )) {
      bVar67 = false;
      uVar59 = 0;
    }
    else {
      uVar63 = CONCAT71((int7)((ulonglong)in_R10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 4) + 0x5b)) & 0xffffffffffffff20;
      uVar59 = (undefined4)CONCAT71((int7)(uVar63 >> 8),(byte)uVar63 >> 5);
      bVar67 = true;
    }
    iVar50 = *(int *)(param_4 + 0x9b82);
    iVar57 = *(int *)(param_4 + 0x9b80);
    if (*(int *)(param_5 + 0x3720) < 1) {
      lVar43 = 0;
    }
    else {
      lVar43 = **(longlong **)(param_5 + 0x3718);
    }
    if ((param_8 == 0 & ~(byte)uVar59 & iVar50 + iVar57 < 1 & lVar43 == 0) == 0) {
      local_7b0 = CONCAT44(local_7b0._4_4_,uVar59);
      local_5b8 = (longlong *)0x0;
      uStack_5b0 = 0;
      local_5c8 = 0;
      uStack_5c0 = 0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5e8 = 0;
      uStack_5e0 = 0;
      local_5f8 = (longlong *)0x0;
      uStack_5f0 = 0;
      local_5a8 = 0;
      uStack_59c = 0;
      uStack_594 = 0;
      uStack_58c = 0;
      uStack_584 = 0;
      local_57c = 0;
      uStack_574 = 0;
      local_56c = 0;
      uStack_564 = 0;
      uStack_55f = 0;
      uStack_55c = 0;
      uStack_557 = 0;
      local_548 = 0;
      uStack_540 = 0;
      local_538 = 0;
      local_530 = 1;
      local_528 = 0;
      FUN_144b0e33a(param_1,&local_5f8);
      puVar51 = &DAT_14c9cfd78;
      if (bVar67) {
        puVar51 = &DAT_14c9e72e8;
      }
      local_5c8 = *(undefined8 *)(puVar51 + 0x10);
      uStack_5c0 = DAT_14c9c0db0;
      local_708[2] = (longlong *)0x0;
      local_708[0] = (longlong *)0x0;
      local_708[1] = (longlong *)0x0;
      if (DAT_14ca0de80 != (longlong *)0x0) {
        local_708[0] = DAT_14ca0de80;
        LOCK();
        *(int *)(DAT_14ca0de80 + 1) = (int)DAT_14ca0de80[1] + 1;
        UNLOCK();
      }
      uVar63 = local_738 >> 8;
      local_738 = CONCAT71((uint7)uVar63 & 0xffffffffff0000,4);
      local_398 = *(longlong **)(param_4 + 0xc);
      cStack_390 = '\x01';
      local_388 = *(longlong *)(param_4 + 0x9b8c);
      uStack_380 = 1;
      uVar49 = *(undefined8 *)(param_4 + 0x9c0c);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
      {
        FUN_145e1a792();
        local_7e0 = &LAB_14712ac08;
        local_7e8 = &LAB_14712ac0c;
        local_7f0 = (longlong **)&LAB_1472e3912;
        local_7f8 = (longlong **)&LAB_1472e3916;
        local_800 = FUN_1472e391a;
        local_808 = FUN_1472e3942;
        local_820 = (longlong **)0x14a2f5d42;
        local_828 = (longlong **)0x14a2f9d44;
        local_7d0 = 0;
        local_7d8 = 0xe0;
        local_810 = (char *)CONCAT44(local_810._4_4_,1);
        plStack_818 = (longlong *)((ulonglong)plStack_818 & 0xffffffff00000000);
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
      local_7a0 = (longlong *)((ulonglong)local_7a0._4_4_ << 0x20);
      FUN_1448e935e(uVar49,&local_1c8,&DAT_14ca4b6d8,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
      {
        FUN_145e1a792();
        local_7e0 = &LAB_14712ac08;
        local_7e8 = &LAB_14712ac0c;
        local_7f0 = (longlong **)&LAB_1472e3912;
        local_7f8 = (longlong **)&LAB_1472e3916;
        local_800 = FUN_1472e391a;
        local_808 = FUN_1472e3942;
        local_820 = (longlong **)0x14a2f5d42;
        local_828 = (longlong **)0x14a2f9d44;
        local_7d0 = 0;
        local_7d8 = 0xe0;
        local_810 = (char *)CONCAT44(local_810._4_4_,1);
        plStack_818 = (longlong *)((ulonglong)plStack_818 & 0xffffffff00000000);
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
      plVar45 = local_1c8;
      plVar47 = local_708[1];
      local_7c0 = uStack_1c0;
      if (param_8 == 0) {
        uVar54 = 1;
      }
      else {
        if (local_708[1] != DAT_14ca0de98) {
          local_708[1] = DAT_14ca0de98;
          if (DAT_14ca0de98 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14ca0de98 + 1) = (int)DAT_14ca0de98[1] + 1;
            UNLOCK();
          }
          if (plVar47 != (longlong *)0x0) {
            LOCK();
            puVar1 = (uint *)(plVar47 + 1);
            uVar54 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar54 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(plVar47 + 1);
              LOCK();
              uVar54 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar54 >> 0x1e & 1) == 0) {
                bVar62 = *(byte *)((longlong)plVar47 + 0xd);
                plVar42 = (longlong *)FUN_14001cc68(0x10,8);
                plVar42[1] = (longlong)plVar47;
                plVar47 = DAT_14ca843c0;
                plVar44 = DAT_14ca843c8;
                if ((bVar62 & 2) == 0) {
                  do {
                    *plVar42 = (longlong)plVar47;
                    LOCK();
                    bVar67 = plVar47 != DAT_14ca843c0;
                    plVar44 = plVar42;
                    if (bVar67) {
                      plVar47 = DAT_14ca843c0;
                      plVar44 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar44;
                    UNLOCK();
                  } while (bVar67);
                }
                else {
                  do {
                    *plVar42 = (longlong)plVar44;
                    LOCK();
                    bVar67 = plVar44 != DAT_14ca843c8;
                    plVar47 = plVar42;
                    if (bVar67) {
                      plVar44 = DAT_14ca843c8;
                      plVar47 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar47;
                    UNLOCK();
                  } while (bVar67);
                }
              }
            }
          }
        }
        plVar47 = local_708[0];
        if (local_708[0] != local_708[1]) {
          local_708[0] = local_708[1];
          if (local_708[1] != (longlong *)0x0) {
            LOCK();
            *(int *)(local_708[1] + 1) = (int)local_708[1][1] + 1;
            UNLOCK();
          }
          if (plVar47 != (longlong *)0x0) {
            LOCK();
            puVar1 = (uint *)(plVar47 + 1);
            uVar54 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar54 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(plVar47 + 1);
              LOCK();
              uVar54 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar54 >> 0x1e & 1) == 0) {
                bVar62 = *(byte *)((longlong)plVar47 + 0xd);
                plVar42 = (longlong *)FUN_14001cc68(0x10,8);
                plVar42[1] = (longlong)plVar47;
                plVar47 = DAT_14ca843c0;
                plVar44 = DAT_14ca843c8;
                if ((bVar62 & 2) == 0) {
                  do {
                    *plVar42 = (longlong)plVar47;
                    LOCK();
                    bVar67 = plVar47 != DAT_14ca843c0;
                    plVar44 = plVar42;
                    if (bVar67) {
                      plVar47 = DAT_14ca843c0;
                      plVar44 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar44;
                    UNLOCK();
                  } while (bVar67);
                }
                else {
                  do {
                    *plVar42 = (longlong)plVar44;
                    LOCK();
                    bVar67 = plVar44 != DAT_14ca843c8;
                    plVar47 = plVar42;
                    if (bVar67) {
                      plVar44 = DAT_14ca843c8;
                      plVar47 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar47;
                    UNLOCK();
                  } while (bVar67);
                }
              }
            }
          }
        }
        local_738._0_2_ = CONCAT11(6,(undefined1)local_738);
        local_7a0 = (longlong *)CONCAT44(local_7a0._4_4_,2);
        uVar54 = 2;
      }
      if (((param_4[0x92dc] & 0xf3feU) != 2) && (DAT_14c760e18 == 0)) {
        uVar63 = (ulonglong)uVar54;
        plVar47 = local_708[uVar63];
        if (plVar47 != DAT_14ca0de98) {
          local_708[uVar63] = DAT_14ca0de98;
          if (DAT_14ca0de98 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14ca0de98 + 1) = (int)DAT_14ca0de98[1] + 1;
            UNLOCK();
          }
          if (plVar47 != (longlong *)0x0) {
            LOCK();
            puVar1 = (uint *)(plVar47 + 1);
            uVar39 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar39 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(plVar47 + 1);
              LOCK();
              uVar39 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar39 >> 0x1e & 1) == 0) {
                local_798 = CONCAT71(local_798._1_7_,*(undefined1 *)((longlong)plVar47 + 0xd));
                plVar42 = (longlong *)FUN_14001cc68(0x10,8);
                plVar42[1] = (longlong)plVar47;
                plVar47 = DAT_14ca843c0;
                plVar44 = DAT_14ca843c8;
                if ((local_798 & 2) == 0) {
                  do {
                    *plVar42 = (longlong)plVar47;
                    LOCK();
                    bVar67 = plVar47 != DAT_14ca843c0;
                    plVar44 = plVar42;
                    if (bVar67) {
                      plVar47 = DAT_14ca843c0;
                      plVar44 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar44;
                    UNLOCK();
                  } while (bVar67);
                }
                else {
                  do {
                    *plVar42 = (longlong)plVar44;
                    LOCK();
                    bVar67 = plVar44 != DAT_14ca843c8;
                    plVar47 = plVar42;
                    if (bVar67) {
                      plVar44 = DAT_14ca843c8;
                      plVar47 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar47;
                    UNLOCK();
                  } while (bVar67);
                }
              }
            }
          }
        }
        uVar39 = 1 << (sbyte)uVar54;
        uVar54 = uVar54 + 1;
        *(undefined1 *)((longlong)&local_738 + uVar63) = 2;
        if (param_8 == 0) {
          uVar39 = 0;
        }
        local_7a0 = (longlong *)CONCAT44(local_7a0._4_4_,(uint)local_7a0 | uVar39);
      }
      pplVar65 = local_708 + 3;
      local_798 = CONCAT71(local_798._1_7_,lVar43 != 0);
      local_778 = (ulonglong *)CONCAT71(local_778._1_7_,0 < iVar50 + iVar57);
      local_780 = (ulonglong)uVar54;
      uVar63 = 0;
      do {
        plVar44 = uStack_1c0;
        plVar47 = local_1c8;
        local_5b8 = local_708[uVar63];
        bVar67 = ((uint)local_7a0 >> ((uint)uVar63 & 0x1f) & 1) != 0;
        local_1c8 = (longlong *)CONCAT71(local_1c8._1_7_,bVar67);
        uVar49 = local_1c8;
        local_1c8._5_3_ = SUB83(plVar47,5);
        local_1c8._0_4_ = (undefined4)uVar49;
        local_1c8._0_5_ = CONCAT14(local_778._0_1_,(undefined4)local_1c8);
        uStack_1c0 = (longlong *)CONCAT71(uStack_1c0._1_7_,(undefined1)local_798);
        uVar49 = uStack_1c0;
        uStack_1c0._5_3_ = SUB83(plVar44,5);
        uStack_1c0._0_4_ = (undefined4)uVar49;
        uStack_1c0._0_5_ = CONCAT14((char)local_7b0,(undefined4)uStack_1c0);
        iVar50 = 0;
        if (bVar67) {
          iVar50 = param_8;
        }
        local_1b8 = CONCAT44(local_1b8._4_4_,iVar50);
        FUN_1472424ac(&local_438,*(undefined8 *)(param_4 + 0x9c0c),&local_1c8);
        local_5f8 = DAT_14ca94df8;
        if (plVar45 == (longlong *)0x0) {
          lVar43 = 0;
        }
        else {
          lVar43 = *(longlong *)
                    (*(longlong *)(local_7c0[1] + 0x50) +
                    (longlong)*(int *)((longlong)plVar45 + 0xd4) * 8);
          if (lVar43 == 0) {
            lVar43 = FUN_1400bafc2(local_7c0[1],(longlong)*(int *)((longlong)plVar45 + 0xd4),1);
          }
        }
        uStack_5f0 = lVar43;
        if (CONCAT44(local_438._4_4_,(undefined4)local_438) == 0) {
          lVar41 = 0;
        }
        else {
          lVar43 = *(longlong *)(CONCAT44(uStack_42c,local_430) + 8);
          lVar46 = (longlong)*(int *)(CONCAT44(local_438._4_4_,(undefined4)local_438) + 0xd4);
          lVar41 = *(longlong *)(*(longlong *)(lVar43 + 0x50) + lVar46 * 8);
          if (lVar41 == 0) {
            lVar41 = FUN_1400bafc2(lVar43,lVar46,1);
          }
        }
        local_5e8 = lVar41;
        uStack_5a0 = 0;
        bVar62 = *(byte *)((longlong)&local_738 + uVar63);
        lVar43 = FUN_140028f18(param_1,&local_5f8);
        if ((lVar43 != 0) && ((local_530 & 0x10000000) == 0)) {
          *(undefined4 *)(param_1 + 0x35) = (undefined4)local_5d8;
          *(undefined4 *)((longlong)param_1 + 0x1ac) = local_5d8._4_4_;
          *(undefined4 *)(param_1 + 0x36) = (undefined4)uStack_5d0;
          *(undefined4 *)((longlong)param_1 + 0x1b4) = uStack_5d0._4_4_;
          *(undefined4 *)(param_1 + 0x33) = (undefined4)local_5e8;
          *(undefined4 *)((longlong)param_1 + 0x19c) = local_5e8._4_4_;
          *(undefined4 *)(param_1 + 0x34) = (undefined4)uStack_5e0;
          *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_5e0._4_4_;
          *(undefined4 *)(param_1 + 0x31) = (undefined4)local_5f8;
          *(undefined4 *)((longlong)param_1 + 0x18c) = local_5f8._4_4_;
          *(undefined4 *)(param_1 + 0x32) = (undefined4)uStack_5f0;
          *(undefined4 *)((longlong)param_1 + 0x194) = uStack_5f0._4_4_;
          puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar52 = puVar40 + 4;
          if ((undefined8 *)param_1[1] < puVar52) {
            FUN_140023dd8(param_1,0x28);
            puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar52 = puVar40 + 4;
          }
          *param_1 = (ulonglong)puVar52;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar40;
          param_1[6] = (ulonglong)(puVar40 + 1);
          puVar40[1] = 0;
          *puVar40 = &PTR_LAB_14a37d348;
          puVar40[2] = lVar43;
          *(uint *)(puVar40 + 3) = (uint)bVar62;
          *(undefined1 *)((longlong)puVar40 + 0x1c) = 1;
        }
        if (CONCAT44(local_438._4_4_,(undefined4)local_438) == 0) {
          lVar41 = 0;
        }
        else {
          lVar43 = *(longlong *)(CONCAT44(uStack_42c,local_430) + 8);
          lVar46 = (longlong)*(int *)(CONCAT44(local_438._4_4_,(undefined4)local_438) + 0xd4);
          lVar41 = *(longlong *)(*(longlong *)(lVar43 + 0x50) + lVar46 * 8);
          if (lVar41 == 0) {
            lVar41 = FUN_1400bafc2(lVar43,lVar46,1);
          }
        }
        FUN_145edd010();
        local_828 = &local_398;
        FUN_1449cc26b(param_1,lVar41,CONCAT44(local_438._4_4_,(undefined4)local_438),&DAT_14ca0e978)
        ;
        puVar51 = (undefined *)(*(longlong *)(param_4 + 4) + 0x1b8);
        if (*(char *)(*(longlong *)(param_4 + 4) + 0xd0) == '\0') {
          puVar51 = &DAT_14cb05410;
        }
        local_7f8 = *(longlong ***)(puVar51 + 0x10);
        local_1e8 = plVar45;
        aplStack_1e0[0] = local_7c0;
        iVar50 = *(int *)(param_4 + 0x1882) - *(int *)(param_4 + 0x187e);
        fVar68 = (float)iVar50;
        iVar57 = *(int *)(param_4 + 0x1880) - *(int *)(param_4 + 0x187c);
        local_800 = (code *)CONCAT44(iVar50,iVar57);
        local_7f0 = &local_1e8;
        local_808 = (code *)CONCAT44(local_808._4_4_,fVar68);
        local_810 = (char *)CONCAT44(local_810._4_4_,(float)iVar57);
        plStack_818 = (longlong *)CONCAT44(plStack_818._4_4_,(float)*(int *)(param_4 + 0x187e));
        local_820 = (longlong **)CONCAT44(local_820._4_4_,(float)*(int *)(param_4 + 0x187c));
        local_828 = (longlong **)CONCAT44(local_828._4_4_,fVar68);
        local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,1);
        local_7e8 = (undefined1 *)((ulonglong)local_7e8 & 0xffffffff00000000);
        FUN_140094833(param_1,0,0);
        uVar63 = uVar63 + 1;
      } while (local_780 != uVar63);
      do {
        plVar47 = pplVar65[-1];
        if (plVar47 != (longlong *)0x0) {
          LOCK();
          puVar1 = (uint *)(plVar47 + 1);
          uVar54 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar54 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(plVar47 + 1);
            LOCK();
            uVar54 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar54 >> 0x1e & 1) == 0) {
              bVar62 = *(byte *)((longlong)plVar47 + 0xd);
              plVar44 = (longlong *)FUN_14001cc68(0x10,8);
              plVar44[1] = (longlong)plVar47;
              plVar47 = DAT_14ca843c0;
              plVar45 = DAT_14ca843c8;
              if ((bVar62 & 2) == 0) {
                do {
                  *plVar44 = (longlong)plVar47;
                  LOCK();
                  bVar67 = plVar47 != DAT_14ca843c0;
                  plVar45 = plVar44;
                  if (bVar67) {
                    plVar47 = DAT_14ca843c0;
                    plVar45 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar45;
                  UNLOCK();
                } while (bVar67);
              }
              else {
                do {
                  *plVar44 = (longlong)plVar45;
                  LOCK();
                  bVar67 = plVar45 != DAT_14ca843c8;
                  plVar47 = plVar44;
                  if (bVar67) {
                    plVar45 = DAT_14ca843c8;
                    plVar47 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar47;
                  UNLOCK();
                } while (bVar67);
              }
            }
          }
        }
        pplVar65 = pplVar65 + -1;
      } while (pplVar65 != local_708);
      uVar63 = 0;
    }
    else {
      uVar63 = 0;
    }
  }
  local_7b2 = param_8 != 0 & (byte)uVar63;
  local_760 = (uint)local_7b2 * 2;
  local_778 = param_1 + 0x31;
  lVar43 = 0;
  local_780 = CONCAT44(local_780._4_4_,(int)uVar63);
  local_7a8 = param_4;
  do {
    lVar41 = *(longlong *)(param_5 + 0x36a0 + lVar43 * 8);
    if (lVar41 != 0) {
      local_5b8 = (longlong *)0x0;
      uStack_5b0 = 0;
      local_5c8 = 0;
      uStack_5c0 = 0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5e8 = 0;
      uStack_5e0 = 0;
      local_5f8 = (longlong *)0x0;
      uStack_5f0 = 0;
      local_5a8 = 0;
      uStack_55c = 0;
      uStack_557 = 0;
      local_56c = 0;
      uStack_564 = 0;
      uStack_55f = 0;
      local_57c = 0;
      uStack_574 = 0;
      uStack_58c = 0;
      uStack_584 = 0;
      uStack_59c = 0;
      uStack_594 = 0;
      local_538 = 0;
      local_548 = 0;
      uStack_540 = 0;
      local_530 = 1;
      local_528 = 0;
      FUN_144b0e33a(param_1,&local_5f8,uVar63);
      iVar50 = 1 << ((byte)lVar43 & 0x1f);
      if (lVar43 == 0) {
        iVar50 = 0;
      }
      local_798 = CONCAT44(local_798._4_4_,iVar50);
      uStack_5c0 = DAT_14c9c0db0;
      uVar49 = *(undefined8 *)(param_4 + 0x9c0c);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
      {
        FUN_145e1a792();
        local_7e0 = &LAB_14712ac08;
        local_7e8 = &LAB_14712ac0c;
        local_7f0 = (longlong **)&LAB_1472e3912;
        local_7f8 = (longlong **)&LAB_1472e3916;
        local_800 = FUN_1472e391a;
        local_808 = FUN_1472e3942;
        local_820 = (longlong **)0x14a2f5d42;
        local_828 = (longlong **)0x14a2f9d44;
        local_7d0 = 0;
        local_7d8 = 0xe0;
        local_810 = (char *)CONCAT44(local_810._4_4_,1);
        plStack_818 = (longlong *)((ulonglong)plStack_818 & 0xffffffff00000000);
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
      FUN_1448e935e(uVar49,&local_398,&DAT_14ca4b6d8,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
      {
        FUN_145e1a792();
        local_7e0 = &LAB_14712ac08;
        local_7e8 = &LAB_14712ac0c;
        local_7f0 = (longlong **)&LAB_1472e3912;
        local_7f8 = (longlong **)&LAB_1472e3916;
        local_800 = FUN_1472e391a;
        local_808 = FUN_1472e3942;
        local_820 = (longlong **)0x14a2f5d42;
        local_828 = (longlong **)0x14a2f9d44;
        local_7d0 = 0;
        local_7d8 = 0xe0;
        local_810 = (char *)CONCAT44(local_810._4_4_,1);
        plStack_818 = (longlong *)((ulonglong)plStack_818 & 0xffffffff00000000);
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
      local_788 = local_398;
      local_7a0 = (longlong *)CONCAT71(uStack_38f,cStack_390);
      if ((*(byte *)(*(longlong *)(param_4 + 4) + 0x52) & 8) == 0) {
        local_7c0 = (longlong *)0x0;
      }
      else {
        local_7c0 = *(longlong **)(*(longlong *)(lVar41 + 0x28) + 0x1c0);
      }
      local_398 = (longlong *)0x0;
      cStack_390 = '\x01';
      local_388 = 0;
      uStack_380 = 1;
      local_338 = (undefined1 *)0x0;
      uStack_330 = 0x3f80000000000000;
      local_308 = 0;
      uStack_300 = 0;
      lVar46 = FUN_1415bf548();
      cStack_390 = *(char *)(lVar46 + 0x41);
      if (*(char *)(lVar46 + 0x41) == '\x03') {
        cStack_390 = '\x02';
      }
      local_398 = *(longlong **)(param_5 + 0x38 + lVar43 * 8);
      local_388 = *(longlong *)(param_4 + 0x9b8c);
      uStack_380 = 1;
      local_338 = &DAT_3f8000003f800000;
      uStack_330 = 0;
      local_310 = DAT_14c846338;
      local_314 = DAT_14c846330._4_4_;
      local_318 = (float)DAT_14c846330;
      if (*(int *)(lVar41 + 0x30) != 0) {
        lVar46 = *(longlong *)(lVar41 + 0x28);
        local_310 = (float)(*(double *)(lVar46 + 0x140) - *(double *)(param_4 + 0x82c));
        local_314 = (float)(*(double *)(lVar46 + 0x138) - *(double *)(param_4 + 0x828));
        local_318 = (float)(*(double *)(lVar46 + 0x130) - *(double *)(param_4 + 0x824));
      }
      cVar38 = FUN_14743086d(*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x1848) * 2));
      lVar46 = DAT_14ca5b018;
      if (DAT_14ca5b018 == 0) {
        lVar46 = DAT_14ca63b20;
      }
      if (cVar38 == '\0') {
        lVar46 = DAT_14ca63b20;
      }
      local_308 = *(undefined8 *)(lVar46 + 8);
      uStack_300 = DAT_14c9c0d80;
      local_328 = *(undefined8 *)(*(longlong *)(lVar41 + 0x28) + 0x1b8);
      lVar46 = *(longlong *)(lVar41 + 0x28);
      dVar12 = 1.0 / *(double *)(lVar46 + 0x1a0);
      dVar15 = 1.0 / *(double *)(lVar46 + 0x1a8);
      dVar16 = 1.0 / *(double *)(lVar46 + 0x1b0);
      dVar3 = *(double *)(lVar46 + 0x50);
      dVar4 = *(double *)(lVar46 + 0x60);
      dVar5 = *(double *)(lVar46 + 0x58);
      dVar6 = *(double *)(lVar46 + 0x58);
      dVar7 = *(double *)(lVar46 + 0x68);
      dVar8 = *(double *)(lVar46 + 0x68);
      dVar20 = dVar7 * 0.0 + dVar4 * 0.0 + dVar5 * 0.0 + dVar3 * dVar16;
      dVar21 = dVar8 * 0.0 + dVar4 * 0.0 + dVar15 * dVar6 + dVar3 * 0.0;
      dVar17 = dVar7 * 0.0 + dVar4 * dVar12 + dVar5 * 0.0 + dVar3 * 0.0;
      dVar18 = dVar8 * 1.0 + dVar4 * 0.0 + dVar6 * 0.0 + dVar3 * 0.0;
      dVar3 = *(double *)(lVar46 + 0x70);
      dVar4 = *(double *)(lVar46 + 0x78);
      dVar6 = *(double *)(lVar46 + 0x78);
      dVar5 = *(double *)(lVar46 + 0x80);
      dVar7 = *(double *)(lVar46 + 0x88);
      dVar8 = *(double *)(lVar46 + 0x88);
      dVar13 = dVar7 * 0.0 + dVar5 * 0.0 + dVar4 * 0.0 + dVar3 * dVar16;
      dVar14 = dVar8 * 0.0 + dVar5 * 0.0 + dVar15 * dVar6 + dVar3 * 0.0;
      dVar69 = dVar7 * 0.0 + dVar5 * dVar12 + dVar4 * 0.0 + dVar3 * 0.0;
      dVar70 = dVar8 * 1.0 + dVar5 * 0.0 + dVar6 * 0.0 + dVar3 * 0.0;
      dVar3 = *(double *)(lVar46 + 0x90);
      dVar4 = *(double *)(lVar46 + 0x98);
      dVar6 = *(double *)(lVar46 + 0x98);
      dVar5 = *(double *)(lVar46 + 0xa0);
      dVar8 = *(double *)(lVar46 + 0xa8);
      dVar7 = *(double *)(lVar46 + 0xa8);
      dVar26 = dVar8 * 0.0 + dVar5 * 0.0 + dVar4 * 0.0 + dVar3 * dVar16;
      dVar27 = dVar7 * 0.0 + dVar5 * 0.0 + dVar15 * dVar6 + dVar3 * 0.0;
      dVar71 = dVar8 * 0.0 + dVar5 * dVar12 + dVar4 * 0.0 + dVar3 * 0.0;
      dVar72 = dVar7 * 1.0 + dVar5 * 0.0 + dVar6 * 0.0 + dVar3 * 0.0;
      dVar3 = *(double *)(lVar46 + 0xb0);
      dVar4 = *(double *)(lVar46 + 0xb8);
      dVar6 = *(double *)(lVar46 + 0xb8);
      dVar5 = *(double *)(lVar46 + 0xc0);
      dVar7 = *(double *)(lVar46 + 200);
      dVar8 = *(double *)(lVar46 + 200);
      dVar22 = dVar7 * 0.0 + dVar5 * 0.0 + dVar4 * 0.0 + dVar3 * dVar16;
      dVar24 = dVar8 * 0.0 + dVar5 * 0.0 + dVar15 * dVar6 + dVar3 * 0.0;
      dVar7 = dVar7 * 0.0 + dVar5 * dVar12 + dVar4 * 0.0 + dVar3 * 0.0;
      dVar8 = dVar8 * 1.0 + dVar5 * 0.0 + dVar6 * 0.0 + dVar3 * 0.0;
      dVar16 = -*(double *)(param_4 + 0x81c);
      dVar19 = -*(double *)(param_4 + 0x81c);
      dVar3 = *(double *)(param_4 + 0x818);
      dVar4 = *(double *)(param_4 + 0x818);
      dVar5 = *(double *)(param_4 + 0x820);
      dVar6 = *(double *)(param_4 + 0x820);
      dVar23 = dVar22 * 0.0;
      dVar25 = dVar24 * 0.0;
      dVar12 = dVar7 * 0.0;
      dVar15 = dVar8 * 0.0;
      local_378 = (float)(dVar20 + dVar13 * 0.0 + dVar26 * 0.0 + dVar23);
      fStack_374 = (float)(dVar21 + dVar14 * 0.0 + dVar27 * 0.0 + dVar25);
      fStack_370 = (float)(dVar17 + dVar69 * 0.0 + dVar71 * 0.0 + dVar12);
      fStack_36c = (float)(dVar18 + dVar70 * 0.0 + dVar72 * 0.0 + dVar15);
      local_368[0] = (float)(dVar20 * 0.0 + dVar13 + dVar26 * 0.0 + dVar23);
      local_368[1] = (float)(dVar21 * 0.0 + dVar14 + dVar27 * 0.0 + dVar25);
      local_368[2] = (float)(dVar17 * 0.0 + dVar69 + dVar71 * 0.0 + dVar12);
      local_368[3] = (float)(dVar18 * 0.0 + dVar70 + dVar72 * 0.0 + dVar15);
      local_358 = (float)(dVar20 * 0.0 + dVar13 * 0.0 + dVar26 + dVar23);
      fStack_354 = (float)(dVar21 * 0.0 + dVar14 * 0.0 + dVar27 + dVar25);
      local_350 = (float)(dVar17 * 0.0 + dVar69 * 0.0 + dVar71 + dVar12);
      local_34c = (float)(dVar18 * 0.0 + dVar70 * 0.0 + dVar72 + dVar15);
      local_348 = (float)(((dVar13 * dVar16 - dVar20 * dVar3) - dVar26 * dVar5) + dVar22);
      local_344 = (float)(((dVar14 * dVar19 - dVar21 * dVar4) - dVar27 * dVar6) + dVar24);
      local_340[0] = (float)(((dVar16 * dVar69 - dVar17 * dVar3) - dVar71 * dVar5) + dVar7);
      local_340[1] = (float)(((dVar19 * dVar70 - dVar18 * dVar4) - dVar72 * dVar6) + dVar8);
      bVar67 = true;
      if (*(longlong *)(param_5 + 0x3608) == 0) {
        local_78c = 0;
      }
      else if (((*(byte *)(*(longlong *)(param_5 + 0x3608) + 0x20) & 4) == 0) ||
              (DAT_14c760e18 == 0)) {
        uVar63 = CONCAT71((int7)((ulonglong)*(longlong *)(param_4 + 4) >> 8),
                          *(undefined1 *)(*(longlong *)(param_4 + 4) + 0x5b)) & 0xffffffffffffff20;
        local_78c = (undefined4)CONCAT71((int7)(uVar63 >> 8),(byte)uVar63 >> 5);
        bVar67 = false;
      }
      else {
        local_78c = 0;
      }
      uVar63 = local_780 & 0xffffffff;
      if ((*(byte *)(*(longlong *)(lVar41 + 0x28) + 0x1d0) & 0x10) == 0) {
        local_770 = 0;
      }
      else {
        uVar56 = CONCAT71((int7)((ulonglong)*(longlong *)(param_4 + 4) >> 8),
                          *(undefined1 *)(*(longlong *)(param_4 + 4) + 0x53)) & 0xffffffffffffff04;
        local_770 = (undefined4)CONCAT71((int7)(uVar56 >> 8),(byte)uVar56 >> 2);
      }
      if (*(int *)(param_5 + 0x3720) < 1) {
        local_758 = 0;
      }
      else {
        local_758 = **(longlong **)(param_5 + 0x3718);
      }
      puVar52 = &DAT_14c9e72f8;
      if (bVar67) {
        puVar52 = &DAT_14c9cfd88;
      }
      if ((char)uVar63 == '\0') {
        puVar52 = &DAT_14c9e72f8;
      }
      local_5c8 = *puVar52;
      local_76c = 0;
      local_714[4] = 0;
      local_714[5] = 0;
      local_714[6] = 0;
      local_714[7] = 0;
      local_714[8] = 0;
      local_714[9] = 0;
      local_714[10] = 0;
      local_714[0xb] = 0;
      local_714[0] = 4;
      local_714[1] = 0;
      local_714[2] = 0;
      local_714[3] = 0;
      uVar54 = local_7b0._4_4_;
      if ((param_4[0x92dc] & 0xf3feU) == 2) {
        local_7b0 = (ulonglong)local_7b0._4_4_ << 0x20;
        uVar39 = 1;
      }
      else {
        local_7b0 = (ulonglong)local_7b0._4_4_ << 0x20;
        uVar39 = 1;
        if (DAT_14c760e18 == 0) {
          local_714[4] = 2;
          local_714[5] = 0;
          local_714[6] = 0;
          local_714[7] = 0;
          local_714[8] = 0;
          local_714[9] = 0;
          local_714[10] = 0;
          local_714[0xb] = 0;
          local_76c = 2;
          local_7b0 = CONCAT44(uVar54,local_760);
          uVar39 = 2;
        }
      }
      if (local_7b2 != 0) {
        local_7b0 = CONCAT44(local_7b0._4_4_,(uint)local_7b0 | 1 << uVar39);
        uVar56 = (ulonglong)uVar39;
        uVar39 = uVar39 + 1;
        pbVar2 = local_714 + uVar56 * 4;
        pbVar2[0] = 6;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
      }
      local_768 = (uint)(local_7b2 == 0);
      local_7b1 = (char)local_798 << 4;
      local_750 = (ulonglong)uVar39;
      uVar56 = 0;
      do {
        cVar38 = (char)local_798;
        puVar52 = &DAT_14ca0deb0;
        if (cVar38 == '\x02') {
          puVar52 = &DAT_14ca0dee0;
        }
        puVar40 = &DAT_14ca0def8;
        if (cVar38 == '\x02') {
          puVar40 = &DAT_14ca0df28;
        }
        if (cVar38 == '\x01') {
          puVar52 = &DAT_14ca0dec8;
          puVar40 = &DAT_14ca0df10;
        }
        uVar54 = (uint)uVar56;
        if ((local_768 >> (uVar54 & 0x1f) & 1) == 0) {
          puVar40 = puVar52;
        }
        local_5b8 = (longlong *)*puVar40;
        iVar50 = param_8;
        if (((uint)local_7b0 >> (uVar54 & 0x1f) & 1) == 0) {
          iVar50 = 0;
        }
        plStack_818 = (longlong *)CONCAT71(plStack_818._1_7_,local_758 != 0);
        local_810 = (char *)CONCAT44(local_810._4_4_,iVar50);
        local_820 = (longlong **)CONCAT71(local_820._1_7_,(char)local_78c);
        local_828 = (longlong **)CONCAT71(local_828._1_7_,(char)local_770);
        FUN_147245f50(&local_438,param_4,uVar63,(local_76c >> (uVar54 & 0x1f) & 1) != 0);
        local_738 = 0;
        plStack_730 = (longlong *)0x0;
        uVar63 = (longlong)
                 (int)(((uStack_42c & 0xff) * 2 +
                        ((uint)local_424 * 2 + (local_41c * 3 + local_420) * 4 | (uint)local_428[0])
                        * 4 | local_430 & 0xff) * 4 + -0x40) + (ulonglong)local_438._4_1_ * 2 |
                 (ulonglong)(byte)local_438;
        memset(local_708,0,0x98);
        FUN_146089f9c();
        local_708[(ulonglong)DAT_14ca0daa0 + 1] = (longlong *)&DAT_14ca0da58;
        aiStack_6a0[DAT_14ca0daa0] = (int)uVar63;
        uStack_168 = 0;
        uStack_164 = 0;
        uStack_160 = 0;
        local_15c = 0;
        local_178 = 0;
        uStack_170 = 0;
        uStack_16c = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = (longlong *)0x0;
        uStack_1c0 = (longlong *)0x0;
        if (((local_7c0 == (longlong *)0x0) ||
            (plVar47 = (longlong *)(**(code **)(*local_7c0 + 0x30))(local_7c0,1),
            plVar47 == (longlong *)0x0)) ||
           (cVar38 = (**(code **)(*plVar47 + 0xd8))(plVar47), cVar38 == '\0')) {
LAB_142deb408:
          local_1e8 = local_748;
          aplStack_1e0[0] = local_740;
          cVar38 = FUN_14007744c(local_748,local_708,0,&local_1c8);
          if (cVar38 != '\0') goto LAB_142deb43f;
          plVar47 = (longlong *)local_1e8[3];
          FUN_146089f9c();
          puVar64 = (ulonglong *)plVar47[5];
          uVar58 = puVar64[3];
          if ((uVar58 & 1) != 0) {
            uVar58 = (longlong)puVar64 + ((longlong)uVar58 >> 0x18) + 0x18;
          }
          uVar61 = puVar64[5];
          if ((uVar61 & 1) != 0) {
            uVar61 = (longlong)puVar64 + ((longlong)uVar61 >> 0x18) + 0x28;
          }
          uVar66 = puVar64[1];
          if ((uVar66 & 1) != 0) {
            uVar66 = (longlong)puVar64 + ((longlong)uVar66 >> 0x18) + 8;
          }
          uVar60 = *puVar64;
          if ((uVar60 & 1) != 0) {
            uVar60 = ((longlong)uVar60 >> 0x18) + (longlong)puVar64;
          }
          uVar53 = (DAT_14ca0da80 ^ uVar63) * -0x622015f714c7d297;
          lVar41 = (uVar53 >> 0x2f ^ uVar63 ^ uVar53) * -0x622015f714c7d297;
          uVar54 = *(uint *)(uVar60 + (ulonglong)
                                      ((uint)puVar64[2] &
                                       ((uint)((ulonglong)lVar41 >> 0x2f) ^ (uint)lVar41) * 0x2d69 &
                                      0xffff) * 4);
          if (uVar54 != 0xffffffff) {
            do {
              uVar60 = (ulonglong)uVar54;
              if ((*(ulonglong *)(uVar58 + uVar60 * 8) == DAT_14ca0da80) &&
                 (*(int *)(uVar61 + uVar60 * 4) == (int)uVar63)) {
                uVar63 = puVar64[7];
                if ((uVar63 & 1) != 0) {
                  uVar63 = (longlong)(puVar64 + 7) + ((longlong)uVar63 >> 0x18);
                }
                local_738 = *(ulonglong *)(uVar63 + (longlong)(int)uVar54 * 8);
                if ((local_738 & 1) != 0) {
                  local_738 = ((longlong)local_738 >> 0x18) + uVar63 + (longlong)(int)uVar54 * 8;
                }
                goto LAB_142deb59d;
              }
              uVar54 = *(uint *)(uVar66 + uVar60 * 4);
            } while (uVar54 != 0xffffffff);
          }
          local_738 = 0;
LAB_142deb59d:
          if (local_738 == 0) {
            plVar47 = (longlong *)0x0;
          }
          param_4 = local_7a8;
LAB_142deb5ac:
          plStack_730 = plVar47;
        }
        else {
          aplStack_1e0[0] = local_7c0;
          local_1e8 = plVar47;
          cVar38 = FUN_14007744c(plVar47,local_708,0,&local_1c8);
          if (cVar38 == '\0') goto LAB_142deb408;
LAB_142deb43f:
          if (uStack_1a0 != 0) {
            local_738 = uStack_1a0;
            plVar47 = local_1c8;
            goto LAB_142deb5ac;
          }
        }
        plVar47 = local_788;
        bVar62 = local_714[uVar56 * 4] | local_7b1;
        local_5f8 = DAT_14ca94df8;
        if (local_788 == (longlong *)0x0) {
          lVar41 = 0;
        }
        else {
          lVar41 = *(longlong *)
                    (*(longlong *)(local_7a0[1] + 0x50) +
                    (longlong)*(int *)((longlong)local_788 + 0xd4) * 8);
          if (lVar41 == 0) {
            lVar41 = FUN_1400bafc2(local_7a0[1],(longlong)*(int *)((longlong)local_788 + 0xd4),1);
          }
        }
        uStack_5f0 = lVar41;
        if (local_738 == 0) {
          lVar41 = 0;
        }
        else {
          lVar41 = *(longlong *)
                    (*(longlong *)(plStack_730[1] + 0x50) + (longlong)*(int *)(local_738 + 0xd4) * 8
                    );
          if (lVar41 == 0) {
            lVar41 = FUN_1400bafc2(plStack_730[1],(longlong)*(int *)(local_738 + 0xd4),1);
          }
        }
        uStack_5a0 = 0;
        local_5e8 = lVar41;
        lVar41 = FUN_140028f18(param_1,&local_5f8);
        if ((lVar41 != 0) && ((local_530 & 0x10000000) == 0)) {
          *(undefined4 *)(local_778 + 4) = (undefined4)local_5d8;
          *(undefined4 *)((longlong)local_778 + 0x24) = local_5d8._4_4_;
          *(undefined4 *)(local_778 + 5) = (undefined4)uStack_5d0;
          *(undefined4 *)((longlong)local_778 + 0x2c) = uStack_5d0._4_4_;
          *(undefined4 *)(local_778 + 2) = (undefined4)local_5e8;
          *(undefined4 *)((longlong)local_778 + 0x14) = local_5e8._4_4_;
          *(undefined4 *)(local_778 + 3) = (undefined4)uStack_5e0;
          *(undefined4 *)((longlong)local_778 + 0x1c) = uStack_5e0._4_4_;
          *(undefined4 *)local_778 = (undefined4)local_5f8;
          *(undefined4 *)((longlong)local_778 + 4) = local_5f8._4_4_;
          *(undefined4 *)(local_778 + 1) = (undefined4)uStack_5f0;
          *(undefined4 *)((longlong)local_778 + 0xc) = uStack_5f0._4_4_;
          puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar52 = puVar40 + 4;
          if ((undefined8 *)param_1[1] < puVar52) {
            FUN_140023dd8(param_1,0x28);
            puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar52 = puVar40 + 4;
          }
          *param_1 = (ulonglong)puVar52;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar40;
          param_1[6] = (ulonglong)(puVar40 + 1);
          puVar40[1] = 0;
          *puVar40 = &PTR_LAB_14a37d348;
          puVar40[2] = lVar41;
          *(uint *)(puVar40 + 3) = (uint)bVar62;
          *(undefined1 *)((longlong)puVar40 + 0x1c) = 1;
        }
        plVar45 = local_1e8;
        if (local_738 == 0) {
          lVar41 = 0;
        }
        else {
          lVar41 = *(longlong *)
                    (*(longlong *)(plStack_730[1] + 0x50) + (longlong)*(int *)(local_738 + 0xd4) * 8
                    );
          if (lVar41 == 0) {
            lVar41 = FUN_1400bafc2(plStack_730[1],(longlong)*(int *)(local_738 + 0xd4),1);
          }
        }
        plStack_818 = plVar45;
        local_820 = aplStack_1e0;
        local_828 = (longlong **)param_4;
        FUN_147246044(param_1,&local_738,lVar41,&local_398);
        puVar51 = (undefined *)(*(longlong *)(param_4 + 4) + 0x1b8);
        if (*(char *)(*(longlong *)(param_4 + 4) + 0xd0) == '\0') {
          puVar51 = &DAT_14cb05410;
        }
        local_7f8 = *(longlong ***)(puVar51 + 0x10);
        local_708[1] = local_7a0;
        iVar50 = *(int *)(param_4 + 0x1882) - *(int *)(param_4 + 0x187e);
        fVar68 = (float)iVar50;
        iVar57 = *(int *)(param_4 + 0x1880) - *(int *)(param_4 + 0x187c);
        local_800 = (code *)CONCAT44(iVar50,iVar57);
        local_808 = (code *)CONCAT44(local_808._4_4_,fVar68);
        local_810 = (char *)CONCAT44(local_810._4_4_,(float)iVar57);
        plStack_818 = (longlong *)CONCAT44(plStack_818._4_4_,(float)*(int *)(param_4 + 0x187e));
        local_820 = (longlong **)CONCAT44(local_820._4_4_,(float)*(int *)(param_4 + 0x187c));
        local_828 = (longlong **)CONCAT44(local_828._4_4_,fVar68);
        local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,1);
        local_7e8 = (undefined1 *)((ulonglong)local_7e8 & 0xffffffff00000000);
        local_7f0 = local_708;
        local_708[0] = plVar47;
        FUN_140094833(param_1,0,0);
        uVar56 = uVar56 + 1;
        uVar63 = local_780 & 0xffffffff;
      } while (uVar56 != local_750);
    }
    lVar43 = lVar43 + 1;
  } while (lVar43 != 3);
  if ((DAT_14ca0d9b0 == 0) || (lVar43 = 4, DAT_14c760e10 < 1)) {
    if (*(int *)(param_6 + 0x20) != 0) {
      uVar49 = *(undefined8 *)(param_4 + 0x9c0c);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1))
      {
        uVar48 = FUN_144a8d90e();
        FUN_145d4bb64();
        local_7e0 = &LAB_14712ac08;
        local_7e8 = &LAB_14712ac0c;
        local_7f0 = (longlong **)&LAB_1471d2aa4;
        local_7f8 = (longlong **)&LAB_1471d2aa8;
        local_800 = FUN_1471d2ae4;
        local_808 = FUN_1471d2b3e;
        local_820 = (longlong **)0x14a245bc4;
        local_828 = (longlong **)0x14a245bda;
        local_7d8 = 0xe0;
        local_810 = (char *)CONCAT44(local_810._4_4_,2);
        plStack_818 = (longlong *)((ulonglong)plStack_818 & 0xffffffff00000000);
        local_7d0 = uVar48;
        FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
        _DAT_14c9e9658 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ce867a);
        _Init_thread_footer(&DAT_14c9e9700);
      }
      FUN_1448e935e(uVar49,&local_5f8,&DAT_14c9e9658,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1))
      {
        uVar49 = FUN_144a8d90e();
        FUN_145d4bb64();
        local_7e0 = &LAB_14712ac08;
        local_7e8 = &LAB_14712ac0c;
        local_7f0 = (longlong **)&LAB_1471d2aa4;
        local_7f8 = (longlong **)&LAB_1471d2aa8;
        local_800 = FUN_1471d2ae4;
        local_808 = FUN_1471d2b3e;
        local_820 = (longlong **)0x14a245bc4;
        local_828 = (longlong **)0x14a245bda;
        local_7d8 = 0xe0;
        local_810 = (char *)CONCAT44(local_810._4_4_,2);
        plStack_818 = (longlong *)((ulonglong)plStack_818 & 0xffffffff00000000);
        local_7d0 = uVar49;
        FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
        _DAT_14c9e9658 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ce867a);
        _Init_thread_footer(&DAT_14c9e9700);
      }
      plVar45 = local_5f8;
      local_7b0 = uStack_5f0;
      plVar47 = (longlong *)0x0;
      local_178 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = (longlong *)0x0;
      uStack_1c0 = (longlong *)0x0;
      uStack_16c = 0;
      uStack_168 = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      local_15c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      local_14c = 0;
      uStack_144 = 0;
      local_13c = 0;
      uStack_134 = 0;
      uStack_12f = 0;
      uStack_12c = 0;
      uStack_127 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_100 = 1;
      local_f8 = 0;
      FUN_144b0e33a(param_1);
      uStack_170 = 0;
      local_198 = DAT_14ca11210;
      puVar51 = &DAT_14c9c0d58;
      if ((char)param_4[0x11cc] != '\0') {
        puVar51 = &DAT_14c9c0de8;
      }
      uStack_190 = *(undefined8 *)(puVar51 + 0x10);
      local_188 = DAT_14ca0e060;
      local_1c8 = DAT_14ca968c0;
      local_7c0 = plVar45;
      if (plVar45 != (longlong *)0x0) {
        plVar47 = *(longlong **)
                   (*(longlong *)(*(longlong *)(local_7b0 + 8) + 0x50) +
                   (longlong)*(int *)((longlong)plVar45 + 0xd4) * 8);
        if (plVar47 == (longlong *)0x0) {
          plVar47 = (longlong *)
                    FUN_1400bafc2(*(longlong *)(local_7b0 + 8),
                                  (longlong)*(int *)((longlong)plVar45 + 0xd4),1);
        }
      }
      local_1b8 = 0;
      lVar43 = local_748[3];
      wVar9 = param_4[0x92dc];
      aplStack_1e0[1] = (longlong *)0x0;
      aplStack_1e0[2] = (longlong *)0x0;
      local_1e8 = (longlong *)0x0;
      aplStack_1e0[0] = (longlong *)0x0;
      lVar41 = 0xd0;
      uStack_1c0 = plVar47;
      do {
        pbVar2 = local_428 + lVar41;
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        *(undefined8 *)((longlong)&local_420 + lVar41) = 0;
        *(undefined8 *)((longlong)&local_438 + lVar41) = 0;
        *(undefined8 *)((longlong)&local_430 + lVar41) = 0;
        *(undefined8 *)((longlong)auStack_458 + lVar41 + 0x10) = 0;
        *(undefined8 *)((longlong)auStack_458 + lVar41 + 0x18) = 0;
        *(undefined8 *)((longlong)auStack_458 + lVar41) = 0;
        *(undefined8 *)((longlong)auStack_458 + lVar41 + 8) = 0;
        *(undefined8 *)((longlong)&local_468 + lVar41) = 0;
        *(undefined8 *)((longlong)&local_460 + lVar41) = 0;
        *(undefined8 *)((longlong)&uStack_418 + lVar41) = 0;
        *(undefined8 *)((longlong)auStack_40c + lVar41) = 0;
        *(undefined8 *)((longlong)auStack_40c + lVar41 + 8) = 0;
        *(undefined8 *)((longlong)auStack_40c + lVar41 + 0x10) = 0;
        *(undefined8 *)((longlong)auStack_40c + lVar41 + 0x18) = 0;
        *(undefined8 *)((longlong)auStack_40c + lVar41 + 0x20) = 0;
        *(undefined8 *)((longlong)auStack_40c + lVar41 + 0x28) = 0;
        *(undefined8 *)((longlong)auStack_40c + lVar41 + 0x30) = 0;
        *(undefined8 *)(&stack0xfffffffffffffc2c + lVar41) = 0;
        *(undefined8 *)((longlong)auStack_3cf + lVar41) = 0;
        *(undefined8 *)((longlong)auStack_3cf + lVar41 + 8) = 0;
        *(undefined8 *)((longlong)auStack_3b8 + lVar41) = 0;
        *(undefined8 *)((longlong)auStack_3b8 + lVar41 + 8) = 0;
        *(undefined8 *)((longlong)auStack_3b8 + lVar41 + 0x10) = 0;
        *(undefined4 *)((longlong)auStack_3a0 + lVar41) = 1;
        *(undefined8 *)((longlong)&local_398 + lVar41) = 0;
        lVar41 = lVar41 + 0xd8;
      } while (lVar41 != 0x280);
      local_7a0 = (longlong *)(2 - (ulonglong)(((wVar9 & 0xf3feU) == 2U | DAT_14c760e18) & 1));
      plVar47 = (longlong *)0x0;
      do {
        FUN_144b0e33a(param_1,&local_398 + (longlong)plVar47 * 0x1b);
        *(undefined8 *)(local_368 + (longlong)plVar47 * 0x36) = DAT_14c9e74a8;
        local_340[(longlong)plVar47 * 0x36] = 0.0;
        (&local_398)[(longlong)plVar47 * 0x1b] = DAT_14ca968c0;
        if (local_7c0 == (longlong *)0x0) {
          lVar41 = 0;
        }
        else {
          lVar41 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_7b0 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_7c0 + 0xd4) * 8);
          if (lVar41 == 0) {
            lVar41 = FUN_1400bafc2(*(longlong *)(local_7b0 + 8),
                                   (longlong)*(int *)((longlong)local_7c0 + 0xd4),1);
          }
        }
        *(longlong *)(&cStack_390 + (longlong)plVar47 * 0xd8) = lVar41;
        puVar51 = &DAT_14c9c0de8;
        if ((char)param_4[0x11cc] != '\0') {
          puVar51 = &DAT_14c9c0d58;
        }
        bVar67 = plVar47 != (longlong *)0x0;
        puVar52 = &DAT_14ca0e030;
        if (bVar67) {
          puVar52 = &DAT_14ca0dfa0;
        }
        uVar49 = *puVar52;
        *(undefined8 *)(local_368 + (longlong)plVar47 * 0x36 + 2) = *(undefined8 *)(puVar51 + 0x10);
        *(undefined8 *)(local_368 + (longlong)plVar47 * 0x36 + 4) = uVar49;
        FUN_14608a206();
        param_4 = local_7a8;
        puVar64 = *(ulonglong **)(lVar43 + 0x28);
        uVar63 = puVar64[3];
        if ((uVar63 & 1) != 0) {
          uVar63 = (longlong)puVar64 + ((longlong)uVar63 >> 0x18) + 0x18;
        }
        uVar56 = puVar64[5];
        if ((uVar56 & 1) != 0) {
          uVar56 = (longlong)puVar64 + ((longlong)uVar56 >> 0x18) + 0x28;
        }
        uVar58 = puVar64[1];
        if ((uVar58 & 1) != 0) {
          uVar58 = (longlong)puVar64 + ((longlong)uVar58 >> 0x18) + 8;
        }
        uVar61 = *puVar64;
        if ((uVar61 & 1) != 0) {
          uVar61 = ((longlong)uVar61 >> 0x18) + (longlong)puVar64;
        }
        uVar66 = (DAT_14ca0dba8 ^ bVar67) * -0x622015f714c7d297;
        lVar41 = (uVar66 >> 0x2f ^ bVar67 ^ uVar66) * -0x622015f714c7d297;
        uVar54 = *(uint *)(uVar61 + (ulonglong)
                                    ((uint)puVar64[2] &
                                     ((uint)((ulonglong)lVar41 >> 0x2f) ^ (uint)lVar41) * 0x2d69 &
                                    0xffff) * 4);
        if (uVar54 != 0xffffffff) {
          do {
            uVar61 = (ulonglong)uVar54;
            if ((*(ulonglong *)(uVar63 + uVar61 * 8) == DAT_14ca0dba8) &&
               (*(uint *)(uVar56 + uVar61 * 4) == (uint)bVar67)) {
              uVar63 = puVar64[7];
              if ((uVar63 & 1) != 0) {
                uVar63 = (longlong)(puVar64 + 7) + ((longlong)uVar63 >> 0x18);
              }
              uVar58 = *(ulonglong *)(uVar63 + (longlong)(int)uVar54 * 8);
              if ((uVar58 & 1) != 0) {
                uVar58 = ((longlong)uVar58 >> 0x18) + uVar63 + (longlong)(int)uVar54 * 8;
              }
              lVar41 = lVar43;
              if (uVar58 == 0) {
                lVar41 = 0;
              }
              aplStack_1e0[(longlong)plVar47 * 2 + -1] = (longlong *)uVar58;
              aplStack_1e0[(longlong)plVar47 * 2] = (longlong *)lVar41;
              if (uVar58 == 0) {
                lVar41 = 0;
              }
              else {
                lVar41 = *(longlong *)
                          (*(longlong *)(*(longlong *)(lVar43 + 8) + 0x50) +
                          (longlong)*(int *)(uVar58 + 0xd4) * 8);
                if (lVar41 == 0) {
                  lVar41 = FUN_1400bafc2(*(longlong *)(lVar43 + 8),(longlong)*(int *)(uVar58 + 0xd4)
                                         ,CONCAT71((int7)(uVar56 >> 8),1));
                }
              }
              goto LAB_142debf8b;
            }
            uVar54 = *(uint *)(uVar58 + uVar61 * 4);
          } while (uVar54 != 0xffffffff);
        }
        aplStack_1e0[(longlong)plVar47 * 2 + -1] = (longlong *)0x0;
        aplStack_1e0[(longlong)plVar47 * 2] = (longlong *)0x0;
        lVar41 = 0;
LAB_142debf8b:
        (&local_388)[(longlong)plVar47 * 0x1b] = lVar41;
        plVar47 = (longlong *)((longlong)plVar47 + 1);
      } while (plVar47 != local_7a0);
      uVar63 = (ulonglong)*(uint *)(param_6 + 0x20);
      if (0 < (int)*(uint *)(param_6 + 0x20)) {
        uVar56 = 0;
        do {
          uVar58 = uVar56;
          if ((int)uVar63 != *(int *)(param_6 + 0x30)) {
            iVar50 = 0;
            if (*(int *)(*(longlong *)(param_6 + 0x38) + 4 + uVar56 * 8) != 0) {
              iVar50 = local_764;
            }
            uVar58 = (longlong)iVar50 +
                     (ulonglong)(*(uint *)(*(longlong *)(param_6 + 0x38) + uVar56 * 8) & 0x7fffffff)
            ;
          }
          puVar64 = (ulonglong *)(uVar58 * 0x18 + *(longlong *)(param_6 + 0x28));
          lVar43 = uVar56 * 0x28 + *(longlong *)(param_6 + 0x18);
          local_720 = (double)*(float *)(lVar43 + 0xc);
          local_728 = puVar64[2];
          local_738 = *puVar64;
          plStack_730 = (longlong *)puVar64[1];
          if (1 < local_75c) {
            iVar50 = *(int *)(param_4 + 0x1882);
            iVar57 = *(int *)(param_4 + 0x1880);
            iVar10 = *(int *)(param_4 + 0x187e);
            iVar11 = *(int *)(param_4 + 0x187c);
            puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar52 = puVar40 + 5;
            if ((undefined8 *)param_1[1] < puVar52) {
              FUN_140023dd8(param_1,0x30);
              puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar52 = puVar40 + 5;
            }
            *param_1 = (ulonglong)puVar52;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar40;
            param_1[6] = (ulonglong)(puVar40 + 1);
            puVar40[1] = 0;
            *puVar40 = &PTR_LAB_14a1e7fc8;
            *(float *)(puVar40 + 2) = (float)iVar11;
            *(float *)((longlong)puVar40 + 0x14) = (float)iVar10;
            *(undefined4 *)(puVar40 + 3) = 0;
            *(float *)((longlong)puVar40 + 0x1c) = (float)iVar57;
            *(float *)(puVar40 + 4) = (float)iVar50;
            *(undefined4 *)((longlong)puVar40 + 0x24) = 0x3f800000;
          }
          local_798 = uVar56;
          lVar41 = FUN_140028f18(param_1,&local_1c8);
          if ((lVar41 != 0) && ((local_100 & 0x10000000) == 0)) {
            *(undefined4 *)(local_778 + 4) = (undefined4)local_1a8;
            *(undefined4 *)((longlong)local_778 + 0x24) = local_1a8._4_4_;
            *(undefined4 *)(local_778 + 5) = (undefined4)uStack_1a0;
            *(undefined4 *)((longlong)local_778 + 0x2c) = uStack_1a0._4_4_;
            *(undefined4 *)(local_778 + 2) = (undefined4)local_1b8;
            *(undefined4 *)((longlong)local_778 + 0x14) = local_1b8._4_4_;
            *(undefined4 *)(local_778 + 3) = (undefined4)uStack_1b0;
            *(undefined4 *)((longlong)local_778 + 0x1c) = uStack_1b0._4_4_;
            *(undefined4 *)local_778 = (undefined4)local_1c8;
            *(undefined4 *)((longlong)local_778 + 4) = local_1c8._4_4_;
            *(undefined4 *)(local_778 + 1) = (undefined4)uStack_1c0;
            *(undefined4 *)((longlong)local_778 + 0xc) = uStack_1c0._4_4_;
            puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar52 = puVar40 + 4;
            if ((undefined8 *)param_1[1] < puVar52) {
              FUN_140023dd8(param_1,0x28);
              puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar52 = puVar40 + 4;
            }
            *param_1 = (ulonglong)puVar52;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar40;
            param_1[6] = (ulonglong)(puVar40 + 1);
            puVar40[1] = 0;
            *puVar40 = &PTR_LAB_14a37d348;
            puVar40[2] = lVar41;
            *(undefined4 *)(puVar40 + 3) = 1;
            *(undefined1 *)((longlong)puVar40 + 0x1c) = 1;
          }
          FUN_1471d276e(&local_438,param_4,&local_738,1);
          if (local_7c0 == (longlong *)0x0) {
            lVar41 = 0;
          }
          else {
            lVar41 = *(longlong *)
                      (*(longlong *)(*(longlong *)(local_7b0 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)local_7c0 + 0xd4) * 8);
            if (lVar41 == 0) {
              lVar41 = FUN_1400bafc2(*(longlong *)(local_7b0 + 8),
                                     (longlong)*(int *)((longlong)local_7c0 + 0xd4),1);
            }
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9eba78) &&
             (FUN_144b3d300(&DAT_14c9eba78,ThreadLocalStoragePointer,local_7c0), DAT_14c9eba78 == -1
             )) {
            FUN_145d4bcae(&local_5f8);
            local_7e0 = (undefined1 *)((ulonglong)local_7e0 & 0xffffffffffffff00);
            local_7f0 = (longlong **)((ulonglong)local_7f0 & 0xffffffffffffff00);
            local_810 = "Unknown";
            local_820 = (longlong **)0x0;
            plStack_818 = (longlong *)0x0;
            local_828 = (longlong **)0x14a1fb178;
            local_7e8 = (undefined1 *)0x0;
            local_800 = (code *)CONCAT44(local_800._4_4_,0xa0);
            local_808 = (code *)CONCAT44(local_808._4_4_,0x133);
            local_7f8 = (longlong **)&local_5f8;
            FUN_140b49562(&DAT_14c9eb9f8,0,1);
            if (local_5f8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            atexit((_func_5014 *)&LAB_142def81d);
            _Init_thread_footer(&DAT_14c9eba78);
            param_4 = local_7a8;
          }
          local_828 = (longlong **)&local_438;
          FUN_1449cc26b(param_1,lVar41,local_7c0,&DAT_14c9eb9f8);
          FUN_142ce821c(param_1,1);
          local_5a8 = 0;
          uStack_5a0 = 0;
          uStack_59c = 0x3f800000;
          uStack_594 = 0;
          uStack_58c = 0x3f800000;
          uStack_584 = 0;
          local_57c = 0x3f800000;
          uStack_574 = 0;
          local_56c = CONCAT44(local_56c._4_4_,0x3f800000);
          local_528 = 0;
          uStack_520 = 0;
          uStack_51c = 0x3f800000;
          local_518 = 0;
          uStack_514 = 0;
          uStack_510 = 0;
          uStack_50c = 0x3f800000;
          local_4c8 = 0;
          uStack_4c4 = 0;
          uStack_4c0 = 0;
          uStack_4bc = 0x3f800000;
          local_468 = 0;
          local_460 = 0;
          local_4b8 = 0;
          uStack_4b0 = 0;
          local_45c = 0x3f800000;
          FUN_1404d3a5c(local_708,param_4,lVar43,puVar64);
          memcpy(&local_5f8,local_6d8,200);
          pplVar65 = &local_398;
          pplVar55 = &local_1e8;
          plVar47 = (longlong *)0x0;
          do {
            lVar43 = FUN_140028f18(param_1,pplVar65);
            if ((lVar43 != 0) && ((*(byte *)((longlong)pplVar65 + 0xcb) & 0x10) == 0)) {
              uVar59 = *(undefined4 *)pplVar65;
              uVar28 = *(undefined4 *)((longlong)pplVar65 + 4);
              uVar29 = *(undefined4 *)(pplVar65 + 1);
              uVar30 = *(undefined4 *)((longlong)pplVar65 + 0xc);
              uVar31 = *(undefined4 *)(pplVar65 + 2);
              uVar32 = *(undefined4 *)((longlong)pplVar65 + 0x14);
              uVar33 = *(undefined4 *)(pplVar65 + 3);
              uVar34 = *(undefined4 *)((longlong)pplVar65 + 0x1c);
              uVar35 = *(undefined4 *)((longlong)pplVar65 + 0x24);
              uVar36 = *(undefined4 *)(pplVar65 + 5);
              uVar37 = *(undefined4 *)((longlong)pplVar65 + 0x2c);
              *(undefined4 *)(local_778 + 4) = *(undefined4 *)(pplVar65 + 4);
              *(undefined4 *)((longlong)local_778 + 0x24) = uVar35;
              *(undefined4 *)(local_778 + 5) = uVar36;
              *(undefined4 *)((longlong)local_778 + 0x2c) = uVar37;
              *(undefined4 *)(local_778 + 2) = uVar31;
              *(undefined4 *)((longlong)local_778 + 0x14) = uVar32;
              *(undefined4 *)(local_778 + 3) = uVar33;
              *(undefined4 *)((longlong)local_778 + 0x1c) = uVar34;
              *(undefined4 *)local_778 = uVar59;
              *(undefined4 *)((longlong)local_778 + 4) = uVar28;
              *(undefined4 *)(local_778 + 1) = uVar29;
              *(undefined4 *)((longlong)local_778 + 0xc) = uVar30;
              puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar52 = puVar40 + 4;
              if ((undefined8 *)param_1[1] < puVar52) {
                FUN_140023dd8(param_1,0x28);
                puVar40 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
                puVar52 = puVar40 + 4;
              }
              *param_1 = (ulonglong)puVar52;
              *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
              *(undefined8 **)param_1[6] = puVar40;
              param_1[6] = (ulonglong)(puVar40 + 1);
              puVar40[1] = 0;
              *puVar40 = &PTR_LAB_14a37d348;
              puVar40[2] = lVar43;
              *(uint *)(puVar40 + 3) = (uint)(plVar47 == (longlong *)0x0) * 2 + 2;
              *(undefined1 *)((longlong)puVar40 + 0x1c) = 1;
            }
            if (local_7c0 == (longlong *)0x0) {
              lVar43 = 0;
            }
            else {
              lVar43 = *(longlong *)
                        (*(longlong *)(*(longlong *)(local_7b0 + 8) + 0x50) +
                        (longlong)*(int *)((longlong)local_7c0 + 0xd4) * 8);
              if (lVar43 == 0) {
                lVar43 = FUN_1400bafc2(*(longlong *)(local_7b0 + 8),
                                       (longlong)*(int *)((longlong)local_7c0 + 0xd4),1);
              }
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9eba78) &&
               (FUN_144b3d300(&DAT_14c9eba78,ThreadLocalStoragePointer,local_7c0),
               DAT_14c9eba78 == -1)) {
              FUN_145d4bcae(local_708);
              local_7e0 = (undefined1 *)((ulonglong)local_7e0 & 0xffffffffffffff00);
              local_7f0 = (longlong **)((ulonglong)local_7f0 & 0xffffffffffffff00);
              local_810 = "Unknown";
              local_820 = (longlong **)0x0;
              plStack_818 = (longlong *)0x0;
              local_828 = (longlong **)0x14a1fb178;
              local_7e8 = (undefined1 *)0x0;
              local_800 = (code *)CONCAT44(local_800._4_4_,0xa0);
              local_808 = (code *)CONCAT44(local_808._4_4_,0x133);
              local_7f8 = local_708;
              FUN_140b49562(&DAT_14c9eb9f8,0,1);
              if (local_708[0] != (longlong *)0x0) {
                FUN_1400020a8();
              }
              atexit((_func_5014 *)&LAB_142def81d);
              _Init_thread_footer(&DAT_14c9eba78);
              param_4 = local_7a8;
            }
            local_828 = (longlong **)&local_438;
            FUN_1449cc26b(param_1,lVar43,local_7c0,&DAT_14c9eb9f8);
            plVar45 = local_748;
            if (*pplVar55 == (longlong *)0x0) {
              lVar43 = 0;
            }
            else {
              lVar41 = (longlong)*(int *)((longlong)*pplVar55 + 0xd4);
              lVar43 = *(longlong *)(*(longlong *)(pplVar55[1][1] + 0x50) + lVar41 * 8);
              if (lVar43 == 0) {
                lVar43 = FUN_1400bafc2(pplVar55[1][1],lVar41,1);
              }
            }
            plStack_818 = plVar45;
            local_820 = &local_740;
            local_828 = (longlong **)param_4;
            FUN_147246325(param_1,pplVar55,lVar43,&local_5f8);
            FUN_142ce821c(param_1,1);
            plVar47 = (longlong *)((longlong)plVar47 + 1);
            pplVar55 = pplVar55 + 2;
            pplVar65 = pplVar65 + 0x1b;
          } while (local_7a0 != plVar47);
          uVar56 = local_798 + 1;
          uVar63 = (ulonglong)*(int *)(param_6 + 0x20);
        } while ((longlong)uVar56 < (longlong)uVar63);
      }
    }
    lVar43 = 0;
  }
  iVar50 = *(int *)(param_6 + 0x50);
  iVar57 = *(int *)(param_6 + 8);
  local_7c0 = (longlong *)(longlong)iVar57;
  iVar10 = *(int *)(param_6 + lVar43);
  if (iVar10 < iVar57) {
    iVar57 = iVar57 - iVar10;
    lVar43 = (longlong)iVar10 * 0x18 + 8;
    do {
      local_828 = (longlong **)param_7;
      FUN_142decbf0(param_1,param_4,*(undefined8 *)(*(longlong *)(param_6 + 0x48) + lVar43),
                    &local_748);
      lVar43 = lVar43 + 0x18;
      iVar57 = iVar57 + -1;
    } while (iVar57 != 0);
  }
  if ((int)local_7c0 < iVar50) {
    iVar50 = iVar50 - (int)local_7c0;
    lVar43 = (longlong)local_7c0 * 0x18 + 8;
    do {
      local_828 = (longlong **)param_7;
      FUN_142decbf0(param_1,param_4,*(undefined8 *)(*(longlong *)(param_6 + 0x48) + lVar43),
                    &local_748);
      lVar43 = lVar43 + 0x18;
      iVar50 = iVar50 + -1;
    } while (iVar50 != 0);
  }
  if ((local_f0 ^ (ulonglong)local_848) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142decbf0 FUN_142decbf0 body=7517 status=ok
// SIG undefined FUN_142decbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142decbf0(ulonglong *param_1,wchar_t *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  byte bVar7;
  byte bVar8;
  ulonglong *puVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int iVar22;
  char cVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined8 *puVar35;
  undefined *puVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  int iVar40;
  bool bVar41;
  float fVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auStack_708 [32];
  wchar_t *local_6e8;
  longlong **local_6e0;
  undefined8 uStack_6d8;
  char *local_6d0;
  code *local_6c8;
  code *local_6c0;
  longlong *local_6b8;
  undefined1 *local_6b0;
  undefined1 *local_6a8;
  undefined1 *local_6a0;
  undefined4 local_698;
  undefined8 local_690;
  longlong local_688;
  ulonglong local_680;
  int local_674;
  undefined8 *local_670;
  longlong *local_668;
  ulonglong local_660;
  ulonglong local_658;
  longlong local_650;
  undefined8 *local_648;
  double dStack_640;
  ulonglong *local_638;
  double dStack_630;
  int local_628;
  undefined1 auStack_624 [20];
  undefined8 *local_610;
  ulonglong local_608;
  longlong lStack_600;
  longlong *local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  longlong local_5b8;
  longlong local_5b0 [5];
  undefined1 local_588 [56];
  uint auStack_550 [42];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  ulonglong local_498;
  ulonglong uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 local_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined5 uStack_414;
  undefined3 uStack_40f;
  undefined5 uStack_40c;
  undefined8 uStack_407;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  uint local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  undefined1 local_2e8 [160];
  undefined8 local_248;
  undefined8 uStack_240;
  ulonglong local_238;
  ulonglong uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined5 uStack_1b4;
  undefined3 uStack_1af;
  undefined5 uStack_1ac;
  undefined8 uStack_1a7;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint local_180;
  undefined8 local_178;
  longlong local_168 [15];
  ulonglong local_f0;
  double dVar4;
  double dVar6;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_708;
  lVar29 = *(longlong *)(param_3 + 0x28);
  bVar7 = *(byte *)(lVar29 + 0x1e9);
  cVar23 = FUN_1400bd22a(param_3,param_2,0);
  if (((bVar7 != 0) && (cVar23 != '\0')) &&
     (bVar8 = *(byte *)(lVar29 + 0x1e8), uVar33 = (ulonglong)bVar8, (byte)(bVar8 - 1) < 3)) {
    local_680 = uVar33;
    if (DAT_14c760820 != 0) {
      local_468 = 0;
      uStack_460 = 0;
      local_478 = 0;
      uStack_470 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_458 = 0;
      uStack_44c = 0;
      uStack_448 = 0;
      uStack_444 = 0;
      uStack_440 = 0;
      uStack_43c = 0;
      uStack_438 = 0;
      uStack_434 = 0;
      uStack_430 = 0;
      local_42c = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_420 = 0;
      local_41c = 0;
      uStack_418 = 0;
      uStack_414 = 0;
      uStack_40f = 0;
      uStack_40c = 0;
      uStack_407 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      local_3e0 = 1;
      local_3d8 = 0;
      FUN_144b0e33a(param_1,&local_4a8);
      uStack_450 = 0;
      local_478 = DAT_14ca11210;
      puVar31 = &DAT_14c9c0d58;
      if ((char)param_2[0x11cc] != '\0') {
        puVar31 = &DAT_14c9c0de8;
      }
      uStack_470 = *(undefined8 *)(puVar31 + 0x10);
      local_468 = DAT_14ca0e060;
      lVar29 = *(longlong *)(param_2 + 0x9c0c);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1))
      {
        uVar30 = FUN_144a8d90e();
        FUN_145d4bb64();
        local_6a0 = &LAB_14712ac08;
        local_6a8 = &LAB_14712ac0c;
        local_6b0 = &LAB_1471d2aa4;
        local_6b8 = (longlong *)&LAB_1471d2aa8;
        local_6c0 = FUN_1471d2ae4;
        local_6c8 = FUN_1471d2b3e;
        local_6e0 = (longlong **)0x14a245bc4;
        local_6e8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
        local_698 = 0xe0;
        local_6d0 = (char *)CONCAT44(local_6d0._4_4_,2);
        uStack_6d8 = (longlong *)((ulonglong)uStack_6d8._4_4_ << 0x20);
        local_690 = uVar30;
        FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
        _DAT_14c9e9658 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ce867a);
        _Init_thread_footer(&DAT_14c9e9700);
      }
      FUN_1448e935e(lVar29,&local_5b8,&DAT_14c9e9658,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1))
      {
        uVar30 = FUN_144a8d90e();
        FUN_145d4bb64();
        local_6a0 = &LAB_14712ac08;
        local_6a8 = &LAB_14712ac0c;
        local_6b0 = &LAB_1471d2aa4;
        local_6b8 = (longlong *)&LAB_1471d2aa8;
        local_6c0 = FUN_1471d2ae4;
        local_6c8 = FUN_1471d2b3e;
        local_6e0 = (longlong **)0x14a245bc4;
        local_6e8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
        local_698 = 0xe0;
        local_6d0 = (char *)CONCAT44(local_6d0._4_4_,2);
        uStack_6d8 = (longlong *)((ulonglong)uStack_6d8 & 0xffffffff00000000);
        local_690 = uVar30;
        FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
        _DAT_14c9e9658 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ce867a);
        _Init_thread_footer(&DAT_14c9e9700);
      }
      lVar29 = local_5b8;
      local_4a8 = DAT_14ca968c0;
      if (local_5b8 == 0) {
        uStack_4a0 = 0;
        local_498 = 0;
        lVar25 = FUN_140028f18(param_1,&local_4a8);
        if ((lVar25 != 0) && ((local_3e0 & 0x10000000) == 0)) {
          *(undefined4 *)(param_1 + 0x35) = (undefined4)local_488;
          *(undefined4 *)((longlong)param_1 + 0x1ac) = local_488._4_4_;
          *(undefined4 *)(param_1 + 0x36) = (undefined4)uStack_480;
          *(undefined4 *)((longlong)param_1 + 0x1b4) = uStack_480._4_4_;
          param_1[0x33] = local_498;
          param_1[0x34] = uStack_490;
          *(undefined4 *)(param_1 + 0x31) = (undefined4)local_4a8;
          *(undefined4 *)((longlong)param_1 + 0x18c) = local_4a8._4_4_;
          *(undefined4 *)(param_1 + 0x32) = (undefined4)uStack_4a0;
          *(undefined4 *)((longlong)param_1 + 0x194) = uStack_4a0._4_4_;
          puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar26 + 4;
          if ((undefined8 *)param_1[1] < puVar32) {
            FUN_140023dd8(param_1,0x28);
            puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar32 = puVar26 + 4;
          }
          *param_1 = (ulonglong)puVar32;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar26;
          param_1[6] = (ulonglong)(puVar26 + 1);
          puVar26[1] = 0;
          *puVar26 = &PTR_LAB_14a37d348;
          puVar26[2] = lVar25;
          *(undefined4 *)(puVar26 + 3) = 1;
          *(undefined1 *)((longlong)puVar26 + 0x1c) = 1;
        }
        FUN_1471d28c8(&local_5b8,param_2,param_3,1);
        lVar25 = 0;
      }
      else {
        local_688 = local_5b8;
        lVar29 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_5b0[0] + 8) + 0x50) +
                  (longlong)*(int *)(local_5b8 + 0xd4) * 8);
        if (lVar29 == 0) {
          lVar29 = FUN_1400bafc2(*(longlong *)(local_5b0[0] + 8),
                                 (longlong)*(int *)(local_5b8 + 0xd4),1);
        }
        local_498 = 0;
        uStack_4a0 = lVar29;
        lVar29 = FUN_140028f18(param_1);
        if ((lVar29 != 0) && ((local_3e0 & 0x10000000) == 0)) {
          *(undefined4 *)(param_1 + 0x35) = (undefined4)local_488;
          *(undefined4 *)((longlong)param_1 + 0x1ac) = local_488._4_4_;
          *(undefined4 *)(param_1 + 0x36) = (undefined4)uStack_480;
          *(undefined4 *)((longlong)param_1 + 0x1b4) = uStack_480._4_4_;
          param_1[0x33] = local_498;
          param_1[0x34] = uStack_490;
          *(undefined4 *)(param_1 + 0x31) = (undefined4)local_4a8;
          *(undefined4 *)((longlong)param_1 + 0x18c) = local_4a8._4_4_;
          *(undefined4 *)(param_1 + 0x32) = (undefined4)uStack_4a0;
          *(undefined4 *)((longlong)param_1 + 0x194) = uStack_4a0._4_4_;
          puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar26 + 4;
          if ((undefined8 *)param_1[1] < puVar32) {
            FUN_140023dd8(param_1,0x28);
            puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar32 = puVar26 + 4;
          }
          *param_1 = (ulonglong)puVar32;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar26;
          param_1[6] = (ulonglong)(puVar26 + 1);
          puVar26[1] = 0;
          *puVar26 = &PTR_LAB_14a37d348;
          puVar26[2] = lVar29;
          *(undefined4 *)(puVar26 + 3) = 1;
          *(undefined1 *)((longlong)puVar26 + 0x1c) = 1;
        }
        FUN_1471d28c8(&local_5b8,param_2,param_3,1);
        lVar25 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_5b0[0] + 8) + 0x50) +
                  (longlong)*(int *)(local_688 + 0xd4) * 8);
        lVar29 = local_688;
        if (lVar25 == 0) {
          lVar25 = FUN_1400bafc2(*(longlong *)(local_5b0[0] + 8),
                                 (longlong)*(int *)(local_688 + 0xd4),1);
          lVar29 = local_688;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1))
      {
        FUN_145d4bcae(&local_248);
        local_6a0 = (undefined1 *)((ulonglong)local_6a0 & 0xffffffffffffff00);
        local_6b0 = (undefined1 *)((ulonglong)local_6b0 & 0xffffffffffffff00);
        local_6d0 = "Unknown";
        local_6e0 = (longlong **)0x0;
        uStack_6d8 = (longlong *)0x0;
        local_6e8 = L"FParameters";
        local_6a8 = (undefined1 *)0x0;
        local_6c0 = (code *)CONCAT44(local_6c0._4_4_,0xa0);
        local_6c8 = (code *)CONCAT44(local_6c8._4_4_,0x133);
        local_6b8 = &local_248;
        FUN_140b49562(&DAT_14c9eb9f8,0,1);
        if (local_248 != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142def81d);
        _Init_thread_footer(&DAT_14c9eba78);
        uVar33 = local_680;
      }
      local_6e8 = (wchar_t *)&local_5b8;
      FUN_1449cc26b(param_1,lVar25,lVar29,&DAT_14c9eb9f8);
      uVar30 = DAT_14c9e9578;
      if ((uVar33 & 1) == 0) {
        puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar26 + 5;
        if ((undefined8 *)param_1[1] < puVar32) {
          FUN_140023dd8(param_1,0x30);
          puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar26 + 5;
        }
        *param_1 = (ulonglong)puVar32;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar26;
        param_1[6] = (ulonglong)(puVar26 + 1);
        puVar26[1] = 0;
        *puVar26 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar26 + 2) = 0;
        puVar26[3] = uVar30;
        *(undefined4 *)(puVar26 + 4) = 0;
        iVar40 = DAT_14c9e9560;
        uVar30 = DAT_14c9e9558;
        puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar26 + 6;
        if ((undefined8 *)param_1[1] < puVar32) {
          FUN_140023dd8(param_1,0x38);
          puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar26 + 6;
        }
        *param_1 = (ulonglong)puVar32;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar26;
        param_1[6] = (ulonglong)(puVar26 + 1);
        puVar26[1] = 0;
        *puVar26 = &PTR_FUN_14a1fb5b0;
        puVar26[2] = uVar30;
        *(undefined4 *)(puVar26 + 3) = 0;
        *(undefined4 *)((longlong)puVar26 + 0x1c) = 0;
        *(undefined4 *)(puVar26 + 4) = 0x1b0;
        *(undefined4 *)((longlong)puVar26 + 0x24) = 0;
        *(int *)(puVar26 + 5) = iVar40 / 3;
        *(undefined4 *)((longlong)puVar26 + 0x2c) = 1;
      }
      else {
        FUN_142ce821c(param_1,1);
      }
    }
    local_660 = 0;
    if (((*(byte *)(*(longlong *)(param_2 + 4) + 0x52) & 4) != 0) &&
       (local_660 = 0, *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x1c8) != 0)) {
      lVar29 = FUN_1447b4020();
      local_660 = (ulonglong)(lVar29 != 0);
    }
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_1f8 = 0;
    local_1ec = 0;
    uStack_1e4 = 0;
    local_1dc = 0;
    uStack_1d4 = 0;
    local_1cc = 0;
    uStack_1c4 = 0;
    local_1bc = 0;
    uStack_1b4 = 0;
    uStack_1af = 0;
    uStack_1ac = 0;
    uStack_1a7 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    local_180 = 1;
    local_178 = 0;
    FUN_144b0e33a(param_1,&local_248);
    local_218 = DAT_14c9e74a8;
    local_1f0 = 0;
    (**(code **)(**(longlong **)(param_3 + 0x28) + 0x10))(*(longlong **)(param_3 + 0x28),&local_5d8)
    ;
    local_674 = ((bVar7 & 2) == 0) + 1;
    if ((bVar7 & 1) != 0) {
      local_674 = 0;
    }
    local_658 = (ulonglong)(uint)(0x10 << (sbyte)local_674);
    lVar29 = *(longlong *)(param_2 + 0x9c0c);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
      uVar30 = FUN_144a8d90e();
      FUN_145d4bb64();
      local_6a0 = &LAB_14712ac08;
      local_6a8 = &LAB_14712ac0c;
      local_6b0 = &LAB_1471d2aa4;
      local_6b8 = (longlong *)&LAB_1471d2aa8;
      local_6c0 = FUN_1471d2ae4;
      local_6c8 = FUN_1471d2b3e;
      local_6e0 = (longlong **)0x14a245bc4;
      local_6e8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
      local_698 = 0xe0;
      local_6d0 = (char *)CONCAT44(local_6d0._4_4_,2);
      uStack_6d8 = (longlong *)((ulonglong)uStack_6d8 & 0xffffffff00000000);
      local_690 = uVar30;
      FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
      _DAT_14c9e9658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce867a);
      _Init_thread_footer(&DAT_14c9e9700);
    }
    FUN_1448e935e(lVar29,&local_4a8,&DAT_14c9e9658,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e9700) && (FUN_144b3d300(&DAT_14c9e9700), DAT_14c9e9700 == -1)) {
      uVar30 = FUN_144a8d90e();
      FUN_145d4bb64();
      local_6a0 = &LAB_14712ac08;
      local_6a8 = &LAB_14712ac0c;
      local_6b0 = &LAB_1471d2aa4;
      local_6b8 = (longlong *)&LAB_1471d2aa8;
      local_6c0 = FUN_1471d2ae4;
      local_6c8 = FUN_1471d2b3e;
      local_6e0 = (longlong **)0x14a245bc4;
      local_6e8 = L"/Engine/Private/DeferredLightVertexShaders.usf";
      local_698 = 0xe0;
      local_6d0 = (char *)CONCAT44(local_6d0._4_4_,2);
      uStack_6d8 = (longlong *)((ulonglong)uStack_6d8 & 0xffffffff00000000);
      local_690 = uVar30;
      FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS");
      _DAT_14c9e9658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce867a);
      _Init_thread_footer(&DAT_14c9e9700);
    }
    local_688 = local_4a8;
    local_650 = uStack_4a0;
    FUN_1471d28c8(local_2e8,param_2,param_3,1);
    if ((*(byte *)(*(longlong *)(param_2 + 4) + 0x52) & 8) == 0) {
      local_668 = (longlong *)0x0;
    }
    else {
      local_668 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0x1c0);
    }
    local_458 = 0;
    uStack_450 = 0;
    uStack_44c = 0x3f800000;
    uStack_448 = 0;
    uStack_444 = 0;
    uStack_440 = 0;
    uStack_43c = 0x3f800000;
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_430 = 0;
    local_42c = 0x3f800000;
    uStack_428 = 0;
    uStack_424 = 0;
    uStack_420 = 0;
    local_41c = 0x3f800000;
    local_3d8 = 0;
    uStack_3d0 = 0x3f80000000000000;
    local_3c8 = 0;
    uStack_3c0 = 0x3f80000000000000;
    local_378 = 0;
    uStack_370 = 0x3f80000000000000;
    local_318 = 0;
    local_310 = 0x3f80000000000000;
    local_368 = 0;
    uStack_360 = 0;
    local_5e8 = *param_5;
    local_5e0 = *(undefined4 *)(param_5 + 1);
    uVar24 = FUN_142cfe100(param_3,param_2);
    local_6e8 = (wchar_t *)((ulonglong)local_6e8 & 0xffffffff00000000);
    FUN_1449e488f(&local_5b8,param_2,param_3,0);
    memcpy(&local_4a8,local_588,200);
    uVar48 = 0x3f800000;
    uVar43 = 0;
    fVar42 = 1.0;
    iVar40 = (int)uVar33;
    if (iVar40 == 2) {
      fVar42 = (float)(**(code **)(**(longlong **)(param_3 + 0x28) + 0x20))();
      fVar42 = tanf(fVar42);
      uVar43 = 0x3f800000;
    }
    if (iVar40 != 1) {
      uVar48 = 0;
    }
    local_318 = CONCAT44(0x3f800000,fVar42);
    local_310 = CONCAT44(uVar48,uVar43);
    lVar29 = *(longlong *)(param_3 + 0x28);
    local_308 = *(undefined8 *)(lVar29 + 0x1b8);
    dVar11 = 1.0 / *(double *)(lVar29 + 0x1a0);
    dVar45 = 1.0 / *(double *)(lVar29 + 0x1a8);
    dVar44 = 1.0 / *(double *)(lVar29 + 0x1b0);
    dVar1 = *(double *)(lVar29 + 0x50);
    dVar2 = *(double *)(lVar29 + 0x60);
    dVar3 = *(double *)(lVar29 + 0x58);
    dVar4 = *(double *)(lVar29 + 0x58);
    dVar5 = *(double *)(lVar29 + 0x68);
    dVar6 = *(double *)(lVar29 + 0x68);
    dVar46 = dVar5 * 0.0 + dVar2 * 0.0 + dVar3 * 0.0 + dVar1 * dVar44;
    dVar47 = dVar6 * 0.0 + dVar2 * 0.0 + dVar45 * dVar4 + dVar1 * 0.0;
    dVar20 = dVar5 * 0.0 + dVar2 * dVar11 + dVar3 * 0.0 + dVar1 * 0.0;
    dVar21 = dVar6 * 1.0 + dVar2 * 0.0 + dVar4 * 0.0 + dVar1 * 0.0;
    dVar1 = *(double *)(lVar29 + 0x70);
    dVar3 = *(double *)(lVar29 + 0x78);
    dVar2 = *(double *)(lVar29 + 0x78);
    dVar4 = *(double *)(lVar29 + 0x80);
    dVar5 = *(double *)(lVar29 + 0x88);
    dVar6 = *(double *)(lVar29 + 0x88);
    dVar12 = dVar5 * 0.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar1 * dVar44;
    dVar13 = dVar6 * 0.0 + dVar4 * 0.0 + dVar45 * dVar2 + dVar1 * 0.0;
    dVar15 = dVar5 * 0.0 + dVar4 * dVar11 + dVar3 * 0.0 + dVar1 * 0.0;
    dStack_630 = dVar6 * 1.0 + dVar4 * 0.0 + dVar2 * 0.0 + dVar1 * 0.0;
    auVar14._8_4_ = SUB84(dStack_630,0);
    auVar14._0_8_ = dVar15;
    auVar14._12_4_ = (int)((ulonglong)dStack_630 >> 0x20);
    dVar1 = *(double *)(lVar29 + 0x90);
    dVar3 = *(double *)(lVar29 + 0x98);
    dVar2 = *(double *)(lVar29 + 0x98);
    dVar4 = *(double *)(lVar29 + 0xa0);
    dVar6 = *(double *)(lVar29 + 0xa8);
    dVar5 = *(double *)(lVar29 + 0xa8);
    dVar18 = dVar6 * 0.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar1 * dVar44;
    dVar19 = dVar5 * 0.0 + dVar4 * 0.0 + dVar45 * dVar2 + dVar1 * 0.0;
    dVar16 = dVar6 * 0.0 + dVar4 * dVar11 + dVar3 * 0.0 + dVar1 * 0.0;
    dVar17 = dVar5 * 1.0 + dVar4 * 0.0 + dVar2 * 0.0 + dVar1 * 0.0;
    dVar1 = *(double *)(lVar29 + 0xb0);
    dVar2 = *(double *)(lVar29 + 0xb8);
    dVar3 = *(double *)(lVar29 + 0xb8);
    dVar4 = *(double *)(lVar29 + 0xc0);
    dVar5 = *(double *)(lVar29 + 200);
    dVar6 = *(double *)(lVar29 + 200);
    dVar49 = dVar5 * 0.0 + dVar4 * 0.0 + dVar2 * 0.0 + dVar1 * dVar44;
    dVar51 = dVar6 * 0.0 + dVar4 * 0.0 + dVar45 * dVar3 + dVar1 * 0.0;
    dVar45 = dVar5 * 0.0 + dVar4 * dVar11 + dVar2 * 0.0 + dVar1 * 0.0;
    dVar44 = dVar6 * 1.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar1 * 0.0;
    dStack_630 = dStack_630 * 0.0;
    dVar1 = *(double *)(param_2 + 0x818);
    dStack_640 = *(double *)(param_2 + 0x818);
    dVar6 = -*(double *)(param_2 + 0x81c);
    dVar11 = -*(double *)(param_2 + 0x81c);
    dVar2 = *(double *)(param_2 + 0x820);
    dVar3 = *(double *)(param_2 + 0x820);
    dVar50 = dVar49 * 0.0;
    dVar52 = dVar51 * 0.0;
    dVar4 = dVar45 * 0.0;
    dVar5 = dVar44 * 0.0;
    auStack_624._4_8_ = auVar14._8_8_;
    local_358 = (float)(dVar46 + dVar12 * 0.0 + dVar18 * 0.0 + dVar50);
    local_354 = (float)(dVar47 + dVar13 * 0.0 + dVar19 * 0.0 + dVar52);
    local_350 = (float)(dVar20 + dVar15 * 0.0 + dVar16 * 0.0 + dVar4);
    local_34c = (float)(dVar21 + dStack_630 + dVar17 * 0.0 + dVar5);
    local_348 = (float)(dVar46 * 0.0 + dVar12 + dVar18 * 0.0 + dVar50);
    local_344 = (float)(dVar47 * 0.0 + dVar13 + dVar19 * 0.0 + dVar52);
    local_340 = (float)(dVar20 * 0.0 + dVar15 + dVar16 * 0.0 + dVar4);
    local_33c = (float)(dVar21 * 0.0 + (double)auStack_624._4_8_ + dVar17 * 0.0 + dVar5);
    local_338 = (float)(dVar46 * 0.0 + dVar12 * 0.0 + dVar18 + dVar50);
    local_334 = (float)(dVar47 * 0.0 + dVar13 * 0.0 + dVar19 + dVar52);
    local_330 = (float)(dVar20 * 0.0 + dVar15 * 0.0 + dVar16 + dVar4);
    local_32c = (float)(dVar21 * 0.0 + dStack_630 + dVar17 + dVar5);
    local_328 = (float)(((dVar12 * dVar6 - dVar46 * dVar1) - dVar18 * dVar2) + dVar49);
    local_324 = (float)(((dVar13 * dVar11 - dVar47 * dStack_640) - dVar19 * dVar3) + dVar51);
    local_320 = (float)(((dVar6 * dVar15 - dVar20 * dVar1) - dVar16 * dVar2) + dVar45);
    local_31c = (float)(((dVar11 * (double)auStack_624._4_8_ - dVar21 * dStack_640) - dVar17 * dVar3
                        ) + dVar44);
    local_2f0 = DAT_14c846338;
    local_2f8 = (float)DAT_14c846330;
    local_2f4 = DAT_14c846330._4_4_;
    if (*(int *)(param_3 + 0x30) != 0) {
      local_2f4 = (float)(*(double *)(lVar29 + 0x138) - *(double *)(param_2 + 0x828));
      local_2f0 = (float)(*(double *)(lVar29 + 0x140) - *(double *)(param_2 + 0x82c));
      local_2f8 = (float)(*(double *)(lVar29 + 0x130) - *(double *)(param_2 + 0x824));
    }
    auStack_624._0_12_ = auVar14._4_12_;
    local_628 = 2 - (((param_2[0x92dc] & 0xf3feU) == 2U | DAT_14c760e18) & 1);
    local_660 = CONCAT44(local_660._4_4_,
                         (((int)local_660 + (uVar24 & 0xff) * 2) * 3 + iVar40) * 2 + -2);
    local_658 = (ulonglong)((uint)local_658 & 0x70);
    if ((bVar7 & 1) != 0) {
      local_658 = 0;
    }
    bVar41 = (bVar7 & 3) == 0;
    puVar32 = &DAT_14ca0e030;
    if (bVar41) {
      puVar32 = &DAT_14ca0e000;
    }
    puVar26 = &DAT_14ca0dfa0;
    if (bVar41) {
      puVar26 = &DAT_14ca0df70;
    }
    local_648 = &DAT_14ca0dfd0;
    if (local_674 != 1) {
      local_648 = puVar32;
    }
    local_610 = &DAT_14ca0df40;
    if (local_674 != 1) {
      local_610 = puVar26;
    }
    local_638 = param_1 + 0x31;
    iVar40 = 0;
    lVar29 = local_688;
    local_670 = param_4;
    do {
      if (iVar40 == 0) {
        if (DAT_14c760820 == 0) {
          dVar1 = local_5c0 * 1.0499999523162842 +
                  (double)(*(float *)(param_2 + 0x10b8) + *(float *)(param_2 + 0x10b8));
          bVar41 = (*(double *)(param_2 + 0x82c) - local_5c8) *
                   (*(double *)(param_2 + 0x82c) - local_5c8) +
                   (*(double *)(param_2 + 0x824) - local_5d8) *
                   (*(double *)(param_2 + 0x824) - local_5d8) +
                   (*(double *)(param_2 + 0x828) - local_5d0) *
                   (*(double *)(param_2 + 0x828) - local_5d0) < dVar1 * dVar1;
          bVar10 = 1.0 <= *(double *)(param_2 + 0x454);
          cVar23 = (char)param_2[0x11cc];
          puVar32 = &DAT_14c9c0df8;
          puVar26 = &DAT_14c9c0d68;
          if (bVar41 || bVar10) {
            puVar32 = &DAT_14c9c0d68;
            puVar26 = &DAT_14c9c0df8;
          }
          if (local_674 == 1) {
            bVar41 = !bVar41 && !bVar10;
            puVar31 = &DAT_14ca0dfd8;
            puVar36 = &DAT_14ca0df00;
          }
          else if (local_674 == 2) {
            bVar41 = !bVar41 && !bVar10;
            puVar31 = &DAT_14ca0e008;
            puVar36 = &DAT_14ca0df18;
          }
          else {
            bVar41 = !bVar41 && !bVar10;
            puVar31 = &DAT_14ca0e038;
            puVar36 = &DAT_14ca0dee8;
          }
          goto LAB_142dedcbc;
        }
        cVar23 = (char)param_2[0x11cc];
        puVar32 = &DAT_14c9c0d68;
        puVar26 = &DAT_14c9c0df8;
        puVar35 = local_648;
      }
      else if (DAT_14c760820 == 0) {
        dVar1 = local_5c0 * 1.0499999523162842 +
                (double)(*(float *)(param_2 + 0x10b8) + *(float *)(param_2 + 0x10b8));
        bVar41 = (*(double *)(param_2 + 0x82c) - local_5c8) *
                 (*(double *)(param_2 + 0x82c) - local_5c8) +
                 (*(double *)(param_2 + 0x824) - local_5d8) *
                 (*(double *)(param_2 + 0x824) - local_5d8) +
                 (*(double *)(param_2 + 0x828) - local_5d0) *
                 (*(double *)(param_2 + 0x828) - local_5d0) < dVar1 * dVar1;
        bVar10 = 1.0 <= *(double *)(param_2 + 0x454);
        cVar23 = (char)param_2[0x11cc];
        puVar32 = &DAT_14c9c0df8;
        puVar26 = &DAT_14c9c0d68;
        if (bVar41 || bVar10) {
          puVar32 = &DAT_14c9c0d68;
          puVar26 = &DAT_14c9c0df8;
        }
        if (local_674 == 1) {
          bVar41 = !bVar41 && !bVar10;
          puVar31 = &DAT_14ca0df48;
          puVar36 = &DAT_14ca0deb8;
        }
        else if (local_674 == 2) {
          bVar41 = !bVar41 && !bVar10;
          puVar31 = &DAT_14ca0df78;
          puVar36 = &DAT_14ca0ded0;
        }
        else {
          bVar41 = !bVar41 && !bVar10;
          puVar31 = &DAT_14ca0dfa8;
          puVar36 = &DAT_14ca0dea0;
        }
LAB_142dedcbc:
        if (!bVar41) {
          puVar31 = puVar36;
        }
        puVar35 = (undefined8 *)(puVar31 + 0x10);
      }
      else {
        cVar23 = (char)param_2[0x11cc];
        puVar32 = &DAT_14c9c0d68;
        puVar26 = &DAT_14c9c0df8;
        puVar35 = local_610;
      }
      if (cVar23 == '\0') {
        puVar32 = puVar26;
      }
      uStack_210 = *puVar32;
      local_208 = *puVar35;
      uVar24 = iVar40 != 0 | (uint)local_660;
      local_608 = 0;
      lStack_600 = 0;
      memset(&local_5b8,0,0x98);
      FUN_14608a206();
      local_5b0[DAT_14ca0dbc8] = (longlong)&DAT_14ca0db80;
      auStack_550[DAT_14ca0dbc8] = uVar24;
      local_168[0xc] = 0;
      local_168[0xd] = 0;
      local_168[10] = 0;
      local_168[0xb] = 0;
      local_168[8] = 0;
      local_168[9] = 0;
      local_168[6] = 0;
      local_168[7] = 0;
      local_168[4] = 0;
      local_168[5] = 0;
      local_168[2] = 0;
      local_168[3] = 0;
      local_168[0] = 0;
      local_168[1] = 0;
      if (((local_668 == (longlong *)0x0) ||
          (plVar27 = (longlong *)(**(code **)(*local_668 + 0x30))(local_668,1),
          plVar27 == (longlong *)0x0)) ||
         (cVar23 = (**(code **)(*plVar27 + 0xd8))(plVar27), cVar23 == '\0')) {
LAB_142dedddf:
        local_5f8 = (longlong *)*param_4;
        local_5f0 = (longlong *)param_4[1];
        cVar23 = FUN_14007744c(local_5f8,&local_5b8,0,local_168);
        if (cVar23 != '\0') goto LAB_142dede12;
        lVar25 = local_5f8[3];
        FUN_14608a206();
        puVar9 = *(ulonglong **)(lVar25 + 0x28);
        uVar33 = puVar9[3];
        if ((uVar33 & 1) != 0) {
          uVar33 = (longlong)puVar9 + ((longlong)uVar33 >> 0x18) + 0x18;
        }
        uVar28 = puVar9[5];
        if ((uVar28 & 1) != 0) {
          uVar28 = (longlong)puVar9 + ((longlong)uVar28 >> 0x18) + 0x28;
        }
        uVar37 = puVar9[1];
        if ((uVar37 & 1) != 0) {
          uVar37 = (longlong)puVar9 + ((longlong)uVar37 >> 0x18) + 8;
        }
        uVar39 = *puVar9;
        if ((uVar39 & 1) != 0) {
          uVar39 = ((longlong)uVar39 >> 0x18) + (longlong)puVar9;
        }
        uVar34 = (DAT_14ca0dba8 ^ (longlong)(int)uVar24) * -0x622015f714c7d297;
        lVar29 = (uVar34 >> 0x2f ^ (longlong)(int)uVar24 ^ uVar34) * -0x622015f714c7d297;
        uVar38 = *(uint *)(uVar39 + (ulonglong)
                                    ((uint)puVar9[2] &
                                     ((uint)((ulonglong)lVar29 >> 0x2f) ^ (uint)lVar29) * 0x2d69 &
                                    0xffff) * 4);
        if (uVar38 == 0xffffffff) {
          local_608 = 0;
        }
        else {
          do {
            uVar39 = (ulonglong)uVar38;
            if ((*(ulonglong *)(uVar33 + uVar39 * 8) == DAT_14ca0dba8) &&
               (*(uint *)(uVar28 + uVar39 * 4) == uVar24)) {
              uVar33 = puVar9[7];
              if ((uVar33 & 1) != 0) {
                uVar33 = (longlong)(puVar9 + 7) + ((longlong)uVar33 >> 0x18);
              }
              local_608 = *(ulonglong *)(uVar33 + (longlong)(int)uVar38 * 8);
              if ((local_608 & 1) != 0) {
                local_608 = ((longlong)local_608 >> 0x18) + uVar33 + (longlong)(int)uVar38 * 8;
              }
              goto LAB_142dedf64;
            }
            uVar38 = *(uint *)(uVar37 + uVar39 * 4);
          } while (uVar38 != 0xffffffff);
          local_608 = 0;
        }
LAB_142dedf64:
        uVar33 = local_680;
        param_4 = local_670;
        lVar29 = local_688;
        lStack_600 = lVar25;
        if (local_608 == 0) {
          lStack_600 = 0;
        }
      }
      else {
        local_5f0 = local_668;
        local_5f8 = plVar27;
        cVar23 = FUN_14007744c(plVar27,&local_5b8,0,local_168);
        if (cVar23 == '\0') goto LAB_142dedddf;
LAB_142dede12:
        if (local_168[5] != 0) {
          local_608 = local_168[5];
          lStack_600 = local_168[0];
        }
      }
      local_248 = DAT_14ca968c0;
      if (lVar29 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_650 + 8) + 0x50) +
                  (longlong)*(int *)(lVar29 + 0xd4) * 8);
        if (lVar25 == 0) {
          lVar25 = FUN_1400bafc2(*(longlong *)(local_650 + 8),(longlong)*(int *)(lVar29 + 0xd4),1);
        }
      }
      uStack_240 = lVar25;
      if (local_608 == 0) {
        uVar28 = 0;
      }
      else {
        uVar28 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(lStack_600 + 8) + 0x50) +
                  (longlong)*(int *)(local_608 + 0xd4) * 8);
        if (uVar28 == 0) {
          uVar28 = FUN_1400bafc2(*(longlong *)(lStack_600 + 8),(longlong)*(int *)(local_608 + 0xd4),
                                 1);
        }
      }
      local_238 = uVar28;
      lVar29 = FUN_140028f18(param_1,&local_248);
      if ((lVar29 != 0) && ((local_180 & 0x10000000) == 0)) {
        *(undefined4 *)(local_638 + 4) = (undefined4)local_228;
        *(undefined4 *)((longlong)local_638 + 0x24) = local_228._4_4_;
        *(undefined4 *)(local_638 + 5) = (undefined4)uStack_220;
        *(undefined4 *)((longlong)local_638 + 0x2c) = uStack_220._4_4_;
        local_638[2] = local_238;
        local_638[3] = uStack_230;
        *(undefined4 *)local_638 = (undefined4)local_248;
        *(undefined4 *)((longlong)local_638 + 4) = local_248._4_4_;
        *(undefined4 *)(local_638 + 1) = (undefined4)uStack_240;
        *(undefined4 *)((longlong)local_638 + 0xc) = uStack_240._4_4_;
        puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar26 + 4;
        if ((undefined8 *)param_1[1] < puVar32) {
          FUN_140023dd8(param_1,0x28);
          puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar26 + 4;
        }
        *param_1 = (ulonglong)puVar32;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar26;
        param_1[6] = (ulonglong)(puVar26 + 1);
        puVar26[1] = 0;
        *puVar26 = &PTR_LAB_14a37d348;
        puVar26[2] = lVar29;
        *(uint *)(puVar26 + 3) = (int)local_658 + (uint)(iVar40 == 0) * 2 + 2;
        *(undefined1 *)((longlong)puVar26 + 0x1c) = 1;
      }
      lVar29 = local_688;
      if (local_688 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_650 + 8) + 0x50) +
                  (longlong)*(int *)(local_688 + 0xd4) * 8);
        if (lVar25 == 0) {
          lVar25 = FUN_1400bafc2(*(longlong *)(local_650 + 8),(longlong)*(int *)(local_688 + 0xd4),1
                                );
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9eba78) && (FUN_144b3d300(&DAT_14c9eba78), DAT_14c9eba78 == -1))
      {
        FUN_145d4bcae(&local_5b8);
        local_6a0 = (undefined1 *)((ulonglong)local_6a0 & 0xffffffffffffff00);
        local_6b0 = (undefined1 *)((ulonglong)local_6b0 & 0xffffffffffffff00);
        local_6d0 = "Unknown";
        local_6e0 = (longlong **)0x0;
        uStack_6d8 = (longlong *)0x0;
        local_6e8 = L"FParameters";
        local_6a8 = (undefined1 *)0x0;
        local_6c0 = (code *)CONCAT44(local_6c0._4_4_,0xa0);
        local_6c8 = (code *)CONCAT44(local_6c8._4_4_,0x133);
        local_6b8 = &local_5b8;
        FUN_140b49562(&DAT_14c9eb9f8,0,1);
        if (local_5b8 != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142def81d);
        _Init_thread_footer(&DAT_14c9eba78);
        uVar33 = local_680;
        lVar29 = local_688;
      }
      local_6e8 = (wchar_t *)local_2e8;
      FUN_1449cc26b(param_1,lVar25,lVar29,&DAT_14c9eb9f8);
      plVar27 = local_5f8;
      if (local_608 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lStack_600 + 8) + 0x50) +
                  (longlong)*(int *)(local_608 + 0xd4) * 8);
        if (lVar25 == 0) {
          lVar25 = FUN_1400bafc2(*(longlong *)(lStack_600 + 8),(longlong)*(int *)(local_608 + 0xd4),
                                 1);
        }
      }
      uStack_6d8 = plVar27;
      local_6e0 = &local_5f0;
      local_6e8 = param_2;
      FUN_14724661b(param_1,&local_608,lVar25,&local_4a8);
      uVar30 = DAT_14c9e9578;
      if (((uint)uVar33 | 2) == 3) {
        FUN_142ce821c(param_1,1);
      }
      else {
        puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar26 + 5;
        if ((undefined8 *)param_1[1] < puVar32) {
          FUN_140023dd8(param_1,0x30);
          puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar26 + 5;
        }
        *param_1 = (ulonglong)puVar32;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar26;
        param_1[6] = (ulonglong)(puVar26 + 1);
        puVar26[1] = 0;
        *puVar26 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar26 + 2) = 0;
        puVar26[3] = uVar30;
        *(undefined4 *)(puVar26 + 4) = 0;
        iVar22 = DAT_14c9e9560;
        uVar30 = DAT_14c9e9558;
        puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar32 = puVar26 + 6;
        if ((undefined8 *)param_1[1] < puVar32) {
          FUN_140023dd8(param_1,0x38);
          puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar32 = puVar26 + 6;
        }
        *param_1 = (ulonglong)puVar32;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar26;
        param_1[6] = (ulonglong)(puVar26 + 1);
        puVar26[1] = 0;
        *puVar26 = &PTR_FUN_14a1fb5b0;
        puVar26[2] = uVar30;
        puVar26[3] = 0;
        puVar26[4] = 0x1b0;
        *(int *)(puVar26 + 5) = iVar22 / 3;
        *(undefined4 *)((longlong)puVar26 + 0x2c) = 1;
        lVar29 = local_688;
      }
      iVar40 = iVar40 + 1;
    } while (iVar40 != local_628);
  }
  if ((local_f0 ^ (ulonglong)auStack_708) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142deeae6 FUN_142deeae6 body=105 status=ok
// SIG undefined FUN_142deeae6(void)

longlong FUN_142deeae6(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_1 != 0 && param_2 != 0) {
    piVar2 = (int *)((param_1 + -8) - (ulonglong)*(uint *)(param_1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 142deebd4 FUN_142deebd4 body=450 status=ok
// SIG undefined FUN_142deebd4(void)

void FUN_142deebd4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1472435cc(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142deed97 FUN_142deed97 body=81 status=ok
// SIG undefined FUN_142deed97(void)

void FUN_142deed97(undefined8 param_1,longlong *param_2)

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
  FUN_1472436c7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142deede8 FUN_142deede8 body=229 status=ok
// SIG undefined FUN_142deede8(void)

void FUN_142deede8(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca0e200,param_3);
  return;
}



// FUNCTION 142deeece FUN_142deeece body=38 status=ok
// SIG undefined FUN_142deeece(void)

undefined8 FUN_142deeece(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142deeef4 FUN_142deeef4 body=664 status=ok
// SIG undefined FUN_142deeef4(void)

void FUN_142deeef4(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  char local_b8;
  undefined7 uStack_b7;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar8 = local_c0;
    if ((undefined1 *)CONCAT71(uStack_b7,local_b8) != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_1446fe144(puVar9 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar3 = puVar9 + 2;
    }
    memcpy(puVar3,puVar8,(longlong)local_b0);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar8 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar8 = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar9 + 5;
    }
    memcpy(puVar3,puVar8,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_144821ef4(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145dd932e();
  FUN_14724383d(uVar4,param_1 + 0x1d0,uVar1);
  FUN_1472b057a(local_c0,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8),param_2);
  lVar6 = (ulonglong)*(byte *)(param_1 + 0x1e0) * 0x10;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13ae0 + lVar6);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13ae8 + lVar6);
  local_c8 = *(undefined4 *)(param_1 + 0x1f0);
  local_d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + 0x10);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar7 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar7,1);
    }
  }
  local_d8 = uVar4;
  FUN_1474130ae(param_2,uVar1,lVar5,uVar2);
  if (local_b8 == '\x01') {
    FUN_1471f3c22(local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142def18e FUN_142def18e body=450 status=ok
// SIG undefined FUN_142def18e(void)

void FUN_142def18e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147243bb2(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142def351 FUN_142def351 body=81 status=ok
// SIG undefined FUN_142def351(void)

void FUN_142def351(undefined8 param_1,longlong *param_2)

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
  FUN_147243cad(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142def3a2 FUN_142def3a2 body=229 status=ok
// SIG undefined FUN_142def3a2(void)

void FUN_142def3a2(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca0e398,param_3);
  return;
}



// FUNCTION 142def488 FUN_142def488 body=38 status=ok
// SIG undefined FUN_142def488(void)

undefined8 FUN_142def488(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142def4ae FUN_142def4ae body=664 status=ok
// SIG undefined FUN_142def4ae(void)

void FUN_142def4ae(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  char local_b8;
  undefined7 uStack_b7;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar8 = local_c0;
    if ((undefined1 *)CONCAT71(uStack_b7,local_b8) != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_1446fe144(puVar9 + 2,local_b0,0);
    puVar3 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar3 = puVar9 + 2;
    }
    memcpy(puVar3,puVar8,(longlong)local_b0);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar8 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar8 = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60,0);
    puVar3 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar9 + 5;
    }
    memcpy(puVar3,puVar8,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_144821ef4(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_145e2358a();
  FUN_147243e23(uVar4,param_1 + 0x1d0,uVar1);
  FUN_1472b057a(local_c0,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8),param_2);
  lVar6 = (ulonglong)*(byte *)(param_1 + 0x1e0) * 0x10;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13ae0 + lVar6);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13ae8 + lVar6);
  local_c8 = *(undefined4 *)(param_1 + 0x1f0);
  local_d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + 0x10);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar7 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar7,1);
    }
  }
  local_d8 = uVar4;
  FUN_1474130ae(param_2,uVar1,lVar5,uVar2);
  if (local_b8 == '\x01') {
    FUN_1471f3c22(local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142def82a FUN_142def82a body=481 status=ok
// SIG undefined FUN_142def82a(void)

void FUN_142def82a(longlong param_1,ulonglong *param_2)

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
  FUN_1472468f6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142defa0c FUN_142defa0c body=232 status=ok
// SIG undefined FUN_142defa0c(void)

void FUN_142defa0c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142defaf4 FUN_142defaf4 body=81 status=ok
// SIG undefined FUN_142defaf4(void)

void FUN_142defaf4(undefined8 param_1,longlong *param_2)

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
  FUN_147246999(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142defb46 FUN_142defb46 body=481 status=ok
// SIG undefined FUN_142defb46(void)

void FUN_142defb46(longlong param_1,ulonglong *param_2)

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
  FUN_147246cae(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142defd28 FUN_142defd28 body=232 status=ok
// SIG undefined FUN_142defd28(void)

void FUN_142defd28(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142defe10 FUN_142defe10 body=81 status=ok
// SIG undefined FUN_142defe10(void)

void FUN_142defe10(undefined8 param_1,longlong *param_2)

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
  FUN_147246d51(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142defe62 FUN_142defe62 body=481 status=ok
// SIG undefined FUN_142defe62(void)

void FUN_142defe62(longlong param_1,ulonglong *param_2)

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
  FUN_147247066(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df0044 FUN_142df0044 body=232 status=ok
// SIG undefined FUN_142df0044(void)

void FUN_142df0044(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142df012c FUN_142df012c body=81 status=ok
// SIG undefined FUN_142df012c(void)

void FUN_142df012c(undefined8 param_1,longlong *param_2)

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
  FUN_147247109(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142df017e FUN_142df017e body=450 status=ok
// SIG undefined FUN_142df017e(void)

void FUN_142df017e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1472475ee(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df0341 FUN_142df0341 body=81 status=ok
// SIG undefined FUN_142df0341(void)

void FUN_142df0341(undefined8 param_1,longlong *param_2)

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
  FUN_1472476e9(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142df0392 FUN_142df0392 body=229 status=ok
// SIG undefined FUN_142df0392(void)

void FUN_142df0392(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca0e5b8,param_3);
  return;
}



// FUNCTION 142df0478 FUN_142df0478 body=450 status=ok
// SIG undefined FUN_142df0478(void)

void FUN_142df0478(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147247c58(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df063b FUN_142df063b body=81 status=ok
// SIG undefined FUN_142df063b(void)

void FUN_142df063b(undefined8 param_1,longlong *param_2)

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
  FUN_147247d53(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142df068c FUN_142df068c body=229 status=ok
// SIG undefined FUN_142df068c(void)

void FUN_142df068c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca0e530,param_3);
  return;
}



// FUNCTION 142df0772 FUN_142df0772 body=450 status=ok
// SIG undefined FUN_142df0772(void)

void FUN_142df0772(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147248274(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df0935 FUN_142df0935 body=81 status=ok
// SIG undefined FUN_142df0935(void)

void FUN_142df0935(undefined8 param_1,longlong *param_2)

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
  FUN_14724836f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142df0986 FUN_142df0986 body=229 status=ok
// SIG undefined FUN_142df0986(void)

void FUN_142df0986(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca0e420,param_3);
  return;
}



// FUNCTION 142df0a6c FUN_142df0a6c body=450 status=ok
// SIG undefined FUN_142df0a6c(void)

void FUN_142df0a6c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
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
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147248854(param_1 + 0x1c0,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df0c2f FUN_142df0c2f body=81 status=ok
// SIG undefined FUN_142df0c2f(void)

void FUN_142df0c2f(undefined8 param_1,longlong *param_2)

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
  FUN_14724894f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142df0c80 FUN_142df0c80 body=229 status=ok
// SIG undefined FUN_142df0c80(void)

void FUN_142df0c80(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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
  FUN_14480864a(param_1,uVar1,*param_2,&DAT_14ca0e4a8,param_3);
  return;
}



// FUNCTION 142df0d66 FUN_142df0d66 body=113 status=ok
// SIG undefined FUN_142df0d66(void)

void FUN_142df0d66(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



// FUNCTION 142df0dd8 FUN_142df0dd8 body=617 status=ok
// SIG undefined FUN_142df0dd8(void)

void FUN_142df0dd8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_142df0e52;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_142df0e52:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 142df1068 FUN_142df1068 body=282 status=ok
// SIG undefined FUN_142df1068(void)

undefined8 * FUN_142df1068(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142df1041);
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



// FUNCTION 142df1182 FUN_142df1182 body=282 status=ok
// SIG undefined FUN_142df1182(void)

undefined8 * FUN_142df1182(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142df1041);
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



// FUNCTION 142df129c FUN_142df129c body=114 status=ok
// SIG undefined FUN_142df129c(void)

void FUN_142df129c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[0x6e];
  if (lVar1 != 0) {
    uVar3 = 0xff;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar3 = DAT_14c7585d4;
    }
    FUN_1447832fa(lVar1,uVar3);
  }
  lVar1 = *(longlong *)(*param_1 + 0x13bb0);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0x3a0);
    uVar2 = *(undefined4 *)(lVar1 + 0x3a4);
  }
  *(undefined4 *)(param_2 + 0x50) = uVar3;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  return;
}



// FUNCTION 142df1338 FUN_142df1338 body=29 status=ok
// SIG undefined FUN_142df1338(void)

undefined8 FUN_142df1338(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142df1356 FUN_142df1356 body=282 status=ok
// SIG undefined FUN_142df1356(void)

undefined8 * FUN_142df1356(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142df1041);
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



// FUNCTION 142df1486 FUN_142df1486 body=722 status=ok
// SIG undefined FUN_142df1486(void)

void FUN_142df1486(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [40];
  char *local_a0;
  undefined4 local_98;
  undefined1 local_94;
  ulonglong local_90;
  uint local_88;
  uint local_84;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_60;
  ulonglong local_50;
  ulonglong local_40;
  undefined1 local_26;
  undefined1 local_25;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca0ec48) && (FUN_144b3d300(&DAT_14ca0ec48), DAT_14ca0ec48 == -1)) {
    local_a0 = "BatchedPrimitive";
    local_98 = 0x10;
    local_94 = 0;
    uVar4 = FUN_14001a6c0(&local_a0,1);
    DAT_14ca0ec40 = (ulonglong)uVar4;
    _Init_thread_footer(&DAT_14ca0ec48);
  }
  FUN_1403ab9d2(&local_a0,L"DynamicBatchedPrimitive",0x10);
  uVar4 = local_88;
  local_24 = local_24 | 9;
  lVar9 = (longlong)(int)local_88;
  local_88 = local_88 + 1;
  if (local_84 < local_88) {
    FUN_141770dc0(&local_90,uVar4);
  }
  uVar8 = ((longlong)local_90 >> 0x18) + (longlong)&local_90;
  if ((local_90 & 1) == 0) {
    uVar8 = local_90;
  }
  *(undefined4 *)(uVar8 + lVar9 * 4) = 0x110000;
  plVar5 = (longlong *)FUN_1411d089c();
  local_26 = 0xff;
  if (0 < (longlong)(int)plVar5[1]) {
    lVar9 = 0;
    do {
      if (*(ulonglong *)(*plVar5 + lVar9 * 8) == DAT_14ca0ec40) {
        local_26 = (undefined1)lVar9;
        break;
      }
      lVar9 = lVar9 + 1;
    } while ((int)plVar5[1] != lVar9);
  }
  local_25 = 3;
  FUN_1403abc08(&local_a0);
  uVar8 = (longlong)&local_90 + ((longlong)local_90 >> 0x18);
  if ((local_90 & 1) == 0) {
    uVar8 = local_90;
  }
  *(undefined1 *)(uVar8 + 2) = 6;
  lVar9 = FUN_14001cc68(0x90,0x10);
  FUN_1404e4ca0(lVar9,&local_a0);
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar9;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar4 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar3 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar3;
        plVar5 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar5;
            LOCK();
            bVar10 = plVar5 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar5 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar5 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  if (local_40 != 0 && (local_40 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0 && (local_50 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0 && (local_60 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0 && (local_70 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0 && (local_80 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0 && (local_90 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_a0 != (char *)0x0 && ((ulonglong)local_a0 & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df175a FUN_142df175a body=244 status=ok
// SIG undefined FUN_142df175a(void)

void FUN_142df175a(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar8 = uVar7 & param_3;
  lVar2 = param_1 + 0x58;
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = lVar2;
  }
  lVar9 = (longlong)(int)uVar8;
  uVar4 = *(uint *)(lVar5 + lVar9 * 4);
  if (!SBORROW4(0,uVar4)) {
    puVar11 = (uint *)(lVar5 + lVar9 * 4);
    uVar10 = uVar8 - uVar4 & uVar7;
    uVar6 = 0;
    do {
      if (uVar10 < uVar6) {
        if (*(uint *)(param_1 + 0x74) < uVar6) {
          *(uint *)(param_1 + 0x74) = uVar6;
          uVar4 = *puVar11;
        }
        lVar3 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar3 = param_1 + 0x40;
        }
        uVar1 = *(undefined4 *)(lVar3 + lVar9 * 4);
        *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
        lVar3 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar3 = lVar2;
        }
        *(uint *)(lVar3 + lVar9 * 4) = param_3;
        uVar7 = *(uint *)(param_1 + 0x70);
        lVar3 = *(longlong *)(param_1 + 0x60);
        param_3 = uVar4;
        uVar6 = uVar10;
        param_2 = uVar1;
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 1 & uVar7;
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = lVar2;
      }
      lVar9 = (longlong)(int)uVar8;
      puVar11 = (uint *)(lVar5 + lVar9 * 4);
      uVar4 = *puVar11;
      uVar10 = uVar8 - uVar4 & uVar7;
    } while (!SBORROW4(0,uVar4));
    if (*(uint *)(param_1 + 0x74) < uVar6) {
      *(uint *)(param_1 + 0x74) = uVar6;
    }
  }
  lVar3 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  *(uint *)(lVar2 + lVar9 * 4) = param_3;
  return;
}



// FUNCTION 142df184e FUN_142df184e body=377 status=ok
// SIG undefined FUN_142df184e(void)

void FUN_142df184e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined1 local_26;
  undefined4 local_25;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x2000007010301;
  local_26 = 7;
  local_25 = 0;
  local_21 = 0xff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df1978;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df1978:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df19c8 FUN_142df19c8 body=368 status=ok
// SIG undefined FUN_142df19c8(void)

void FUN_142df19c8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0x80;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df1ae9;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df1ae9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df1b3a FUN_142df1b3a body=368 status=ok
// SIG undefined FUN_142df1b3a(void)

void FUN_142df1b3a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010300;
  local_26 = 7;
  local_22 = 0x80;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df1c5b;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df1c5b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df1cac FUN_142df1cac body=368 status=ok
// SIG undefined FUN_142df1cac(void)

void FUN_142df1cac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 4;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df1dcd;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df1dcd:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df1e1e FUN_142df1e1e body=368 status=ok
// SIG undefined FUN_142df1e1e(void)

void FUN_142df1e1e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 6;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df1f3f;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df1f3f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df1f90 FUN_142df1f90 body=368 status=ok
// SIG undefined FUN_142df1f90(void)

void FUN_142df1f90(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0x16;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df20b1;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df20b1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df2102 FUN_142df2102 body=368 status=ok
// SIG undefined FUN_142df2102(void)

void FUN_142df2102(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0x26;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2223;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2223:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df2274 FUN_142df2274 body=368 status=ok
// SIG undefined FUN_142df2274(void)

void FUN_142df2274(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0x46;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2395;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2395:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df23e6 FUN_142df23e6 body=368 status=ok
// SIG undefined FUN_142df23e6(void)

void FUN_142df23e6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0x14;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2507;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2507:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df2558 FUN_142df2558 body=368 status=ok
// SIG undefined FUN_142df2558(void)

void FUN_142df2558(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0x24;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2679;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2679:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df26ca FUN_142df26ca body=368 status=ok
// SIG undefined FUN_142df26ca(void)

void FUN_142df26ca(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010700;
  local_26 = 7;
  local_22 = 0x44;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df27eb;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df27eb:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df283c FUN_142df283c body=374 status=ok
// SIG undefined FUN_142df283c(void)

void FUN_142df283c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004000100;
  local_26 = 0x1000104;
  local_22 = 0x127;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2963;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2963:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df29b4 FUN_142df29b4 body=368 status=ok
// SIG undefined FUN_142df29b4(void)

void FUN_142df29b4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010300;
  local_26 = 7;
  local_22 = 0x26;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2ad5;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2ad5:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df2b26 FUN_142df2b26 body=374 status=ok
// SIG undefined FUN_142df2b26(void)

void FUN_142df2b26(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004000100;
  local_26 = 0x1000104;
  local_22 = 0x147;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2c4d;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2c4d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df2c9e FUN_142df2c9e body=368 status=ok
// SIG undefined FUN_142df2c9e(void)

void FUN_142df2c9e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010300;
  local_26 = 7;
  local_22 = 0x46;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2dbf;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2dbf:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df2e10 FUN_142df2e10 body=374 status=ok
// SIG undefined FUN_142df2e10(void)

void FUN_142df2e10(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004000100;
  local_26 = 0x1000104;
  local_22 = 0x117;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df2f37;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df2f37:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df2f88 FUN_142df2f88 body=368 status=ok
// SIG undefined FUN_142df2f88(void)

void FUN_142df2f88(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010300;
  local_26 = 7;
  local_22 = 0x16;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df30a9;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df30a9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df30fa FUN_142df30fa body=374 status=ok
// SIG undefined FUN_142df30fa(void)

void FUN_142df30fa(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004000100;
  local_26 = 0x1000104;
  local_22 = 0x125;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df3221;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df3221:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df3272 FUN_142df3272 body=368 status=ok
// SIG undefined FUN_142df3272(void)

void FUN_142df3272(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010300;
  local_26 = 7;
  local_22 = 0x24;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df3393;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df3393:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df33e4 FUN_142df33e4 body=374 status=ok
// SIG undefined FUN_142df33e4(void)

void FUN_142df33e4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004000100;
  local_26 = 0x1000104;
  local_22 = 0x145;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df350b;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df350b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df355c FUN_142df355c body=368 status=ok
// SIG undefined FUN_142df355c(void)

void FUN_142df355c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010300;
  local_26 = 7;
  local_22 = 0x44;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df367d;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df367d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df36ce FUN_142df36ce body=374 status=ok
// SIG undefined FUN_142df36ce(void)

void FUN_142df36ce(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x100000004000100;
  local_26 = 0x1000104;
  local_22 = 0x115;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df37f5;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df37f5:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df3846 FUN_142df3846 body=368 status=ok
// SIG undefined FUN_142df3846(void)

void FUN_142df3846(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x4010300;
  local_26 = 7;
  local_22 = 0x14;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df3967;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df3967:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df39b8 FUN_142df39b8 body=377 status=ok
// SIG undefined FUN_142df39b8(void)

void FUN_142df39b8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined1 local_26;
  undefined4 local_25;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x20007010300;
  local_26 = 7;
  local_25 = 0;
  local_21 = 1;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_142df3ae2;
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
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
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
LAB_142df3ae2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df3b32 FUN_142df3b32 body=5585 status=ok
// SIG undefined FUN_142df3b32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df3b32(void)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14ca085b0);
  if (cVar1 == '\0') {
    _DAT_14ca085b0 = 0;
    uRam000000014ca085b8 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca085c0,L"r.MegaLights.ScreenTraces",&local_58,
                L"Whether to use screen space tracing for shadow rays.");
  atexit(FUN_142de0f38);
  local_58._0_4_ = 0x32;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca085d8,L"r.MegaLights.ScreenTraces.MaxIterations",&local_58,
                L"Max iterations for HZB tracing.");
  atexit(FUN_142de0f7d);
  local_58._0_4_ = 100;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca085f0,L"r.MegaLights.ScreenTraces.MaxDistance",&local_58,
                L"Max distance in world space for screen space tracing.");
  atexit(FUN_142de0fc2);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08608,L"r.MegaLights.ScreenTraces.MinimumOccupancy",&local_58,
                L"Minimum number of threads still tracing before aborting the trace. Can be used for scalability to abandon traces that have a disproportionate cost."
               );
  atexit(FUN_142de1007);
  local_58._0_4_ = 0x3ba3d70a;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca08620,L"r.MegaLights.ScreenTraces.RelativeDepthThickness",&local_58,
                L"Determines depth thickness of objects hit by HZB tracing, as a relative depth threshold."
               );
  atexit(FUN_142de104c);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08638,L"r.MegaLights.WorldSpaceTraces",&local_58,
                L"Whether to trace world space shadow rays for samples. Useful for debugging.");
  atexit(FUN_142de1091);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08650,L"r.MegaLights.SoftwareRayTracing.Allow",&local_58,
                L"Whether to allow using software ray tracing when hardware ray tracing is not supported."
               );
  atexit(FUN_142de10d6);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08668,L"r.MegaLights.HardwareRayTracing",&local_58,
                L"Whether to use hardware ray tracing for shadow rays.");
  atexit(FUN_142de111b);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08680,L"r.MegaLights.HardwareRayTracing.Inline",&local_58,
                L"Uses hardware inline ray tracing for ray traced lighting, when available.");
  atexit(FUN_142de1160);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08698,L"r.MegaLights.HardwareRayTracing.EvaluateMaterialMode",&local_58,
                L"Which mode to use for material evaluation to support alpha masked materials.\n0 - Don\'t evaluate materials (default)1 - Retrace to evaluate materials"
               );
  atexit(FUN_142de11a5);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca086b0,L"r.MegaLights.HardwareRayTracing.Bias",&local_58,
                L"Constant bias for hardware ray traced shadow rays.");
  atexit(FUN_142de11ea);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca086c8,L"r.MegaLights.HardwareRayTracing.EndBias",&local_58,
                L"Constant bias for hardware ray traced shadow rays to prevent proxy geo self-occlusion near the lights."
               );
  atexit(FUN_142de122f);
  local_58._0_4_ = 0x3dcccccd;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca086e0,L"r.MegaLights.HardwareRayTracing.NormalBias",&local_58,
                L"Normal bias for hardware ray traced shadow rays.");
  atexit(FUN_142de1274);
  local_58._0_4_ = 0x3f800000;
  local_68 = 0x60;
  FUN_140a6b41e(&DAT_14ca086f8,L"r.MegaLights.HardwareRayTracing.PullbackBias",&local_58,
                L"Determines the pull-back bias when resuming a screen-trace ray.");
  atexit(FUN_142de12b9);
  local_58._0_4_ = 0x2000;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08710,L"r.MegaLights.HardwareRayTracing.MaxIterations",&local_58,
                L"Limit number of ray tracing traversal iterations on supported platfoms. Improves performance, but may add over-occlusion."
               );
  atexit(FUN_142de12fe);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08728,L"r.MegaLights.HardwareRayTracing.MeshSectionVisibilityTest",
                &local_58,
                L"Whether to test mesh section visibility at runtime.\nWhen enabled translucent mesh sections are automatically hidden based on the material, but it slows down performance due to extra visibility tests per intersection.\nWhen disabled translucent meshes can be hidden only if they are fully translucent. Individual mesh sections need to be hidden upfront inside the static mesh editor."
               );
  atexit(FUN_142de1343);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08740,L"r.MegaLights.HardwareRayTracing.AvoidSelfIntersections",&local_58,
                L"Whether to skip back face hits for a small distance in order to avoid self-intersections when BLAS mismatches rasterized geometry.\nCurrently shares config with Lumen:\n0 - Disabled. May have extra leaking, but it\'s the fastest mode.\n1 - Enabled. This mode retraces to skip first backface hit up to r.Lumen.HardwareRayTracing.SkipBackFaceHitDistance. Good default on most platforms.\n2 - Enabled. This mode uses AHS to skip any backface hits up to r.Lumen.HardwareRayTracing.SkipBackFaceHitDistance. Faster on platforms with inline AHS support."
               );
  atexit(FUN_142de1388);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08758,L"r.MegaLights.HairVoxelTraces",&local_58,
                L"Whether to trace hair voxels.");
  atexit(FUN_142de13cd);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca08770,L"r.MegaLights.Volume.WorldSpaceTraces",&local_58,
                L"Whether to trace world space shadow rays for volume samples. Useful for debugging."
               );
  atexit(FUN_142de1412);
  local_50 = FUN_145e88f6a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca088a0,&local_58);
  local_50 = FUN_145e894da;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca089c8,&local_58);
  local_50 = FUN_145e89a4a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca08af0,&local_58);
  local_50 = FUN_145dd920a;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca08c18,&local_58);
  local_50 = FUN_146094ffa;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca08d40,&local_58);
  local_50 = FUN_145e23466;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca08e68,&local_58);
  local_50 = FUN_146095268;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca08f90,&local_58);
  local_50 = FUN_145eb632e;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca090b8,&local_58);
  local_50 = FUN_145eb68a6;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca091e0,&local_58);
  local_50 = FUN_145f7afae;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca09308,&local_58);
  local_50 = FUN_145e89fba;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca09430,&local_58);
  FUN_145e17d24();
  atexit(FUN_142de463d);
  local_58._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca09440,L"r.MeshDrawCommands.ParallelPassSetup",&local_58,
                L"Whether to setup mesh draw command pass in parallel.");
  atexit(FUN_142de466c);
  local_58._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca09458,L"r.Mobile.MeshSortingMethod",&local_58,
                L"How to sort mesh commands on mobile:\n\t0: Sort by state, roughly front to back (Default).\n\t1: Strict front to back sorting.\n"
               );
  atexit(FUN_142de46b1);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca09470,L"r.MeshDrawCommands.AllowOnDemandShaderCreation",&DAT_14c760818,
                L"How to create RHI shaders:\n\t0: Always create them on a Rendering Thread, before executing other MDC tasks.\n\t1: If RHI supports multi-threaded shader creation, create them on demand on tasks threads, at the time of submitting the draws.\n"
               );
  atexit(FUN_142de46f6);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca09480,L"r.DeferredMeshPassSetupTaskSync",&local_58);
  atexit(FUN_142de473b);
  local_60 = 0xffffffff;
  local_68 = 0x200;
  FUN_1412c7f16(&DAT_14ca09498,L"TaskGraph.TaskPriorities.FMeshDrawCommandPassSetupTask",
                L"Task and thread priority for FMeshDrawCommandPassSetupTask.",0);
  atexit(FUN_142de4780);
  local_50 = FUN_145f4f6da;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca095f0,&local_58);
  InitializeSRWLock((PSRWLOCK)&DAT_14ca09618);
  FUN_1462ee44e();
  atexit((_func_5014 *)&LAB_142de5ea3);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca096a0,L"r.EmitMeshDrawEvents",&DAT_14ca0969c,
                L"Emits a GPU event around each drawing policy draw call.  /nUseful for seeing stats about each draw call, however it greatly distorts total time and time per draw call."
               );
  atexit(FUN_142de5ea8);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca096b0,L"r.SafeStateLookup",&local_58,
                L"Forces new-style safe state lookup for easy runtime perf comparison\n");
  atexit(FUN_142de5eed);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca096c8,L"r.SkipDrawOnPSOPrecaching",&DAT_14ca111f8,
                L"Skips mesh draw call when the PSO is still compiling (default 0).");
  atexit(FUN_142de5f32);
  local_68 = 0;
  FUN_14153156c(&DAT_14ca096d8,L"r.SkipUnloadedShaders",&DAT_14ca096e8,
                L"Skip the draw call when the shaders are not fully preloaded. Useful for debugging"
               );
  atexit(FUN_142de5f77);
  _DAT_14ca096f8 = 0xffffffff;
  _DAT_14ca096fc = 0x105;
  DAT_14ca096fe = 0;
  DAT_14ca09700 = 0;
  DAT_14ca096f0 = &PTR_FUN_14a2908c0;
  FUN_1462ee56e();
  atexit(FUN_142de609f);
  local_68 = 0x60;
  FUN_141471170(&DAT_14ca09710,L"r.Mobile.Forward.LocalLightsSinglePermutation",&DAT_14ca09708,
                L"Whether to use the same permutation regardless of local lights state. This may improve RT time at expense of some GPU time"
               );
  atexit(FUN_142de6c79);
  uVar2 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca0973c = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(undefined1 **)(&DAT_14cafe430 + uVar2 * 0x10) = &LAB_14723e522;
  *(wchar_t **)(&DAT_14cafe438 + uVar2 * 0x10) = L"BasePass";
  atexit((_func_5014 *)&LAB_142de7e1c);
  DAT_14ca09740 = 1;
  DAT_14ca119c0 = FUN_142de74e9;
  _DAT_14ca11d58 = 3;
  DAT_14ca11f28 = DAT_14ca0973c;
  atexit((_func_5014 *)&LAB_142de7e35);
  uVar2 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca09744 = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(undefined1 **)(&DAT_14cafe430 + uVar2 * 0x10) = &LAB_14723e52f;
  *(wchar_t **)(&DAT_14cafe438 + uVar2 * 0x10) = L"MobileBasePassCSM";
  atexit((_func_5014 *)&LAB_142de7e70);
  DAT_14ca09748 = 1;
  DAT_14ca11a68 = FUN_142de773a;
  DAT_14ca11dac = 3;
  DAT_14ca11f7c = DAT_14ca09744;
  atexit((_func_5014 *)&LAB_142de7e89);
  uVar2 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca0974c = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(undefined1 **)(&DAT_14cafe430 + uVar2 * 0x10) = &LAB_14723e53c;
  *(wchar_t **)(&DAT_14cafe438 + uVar2 * 0x10) = L"TranslucencyAll";
  atexit((_func_5014 *)&LAB_142de7ec9);
  DAT_14ca09750 = 1;
  DAT_14ca11a48 = FUN_142de7c96;
  DAT_14ca11d9c = 2;
  DAT_14ca11f6c = DAT_14ca0974c;
  atexit((_func_5014 *)&LAB_142de7ee2);
  uVar2 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca09754 = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(undefined1 **)(&DAT_14cafe430 + uVar2 * 0x10) = &LAB_14723e549;
  *(wchar_t **)(&DAT_14cafe438 + uVar2 * 0x10) = L"TranslucencyStandard";
  atexit((_func_5014 *)&LAB_142de7f22);
  DAT_14ca09758 = 1;
  DAT_14ca11a18 = FUN_142de798a;
  DAT_14ca11d84 = 2;
  DAT_14ca11f54 = DAT_14ca09754;
  atexit((_func_5014 *)&LAB_142de7f3b);
  uVar2 = (ulonglong)DAT_14c9c0cec;
  DAT_14ca0975c = DAT_14c9c0cec;
  DAT_14c9c0cec = DAT_14c9c0cec + 1;
  *(undefined1 **)(&DAT_14cafe430 + uVar2 * 0x10) = &LAB_14723e556;
  *(wchar_t **)(&DAT_14cafe438 + uVar2 * 0x10) = L"TranslucencyAfterDOF";
  atexit((_func_5014 *)&LAB_142de7f7b);
  DAT_14ca09760 = 1;
  DAT_14ca11a28 = FUN_142de7b10;
  DAT_14ca11d8c = 2;
  DAT_14ca11f5c = DAT_14ca0975c;
  atexit((_func_5014 *)&LAB_142de7f94);
  local_58._0_4_ = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca09768,L"r.Mobile.DisableVertexFog",&local_58,
                L"If true, vertex fog will be omitted from the most of the mobile base pass shaders. Instead, fog will be applied in a separate pass and only when scene has a fog component."
               );
  atexit(FUN_142de7fd4);
  local_58._0_4_ = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca09780,L"r.Mobile.EnableMovableSpotlightsShadow",&local_58,
                L"If 1 then enable movable spotlight shadow support");
  atexit(FUN_142de8019);
  local_58._0_4_ = 8;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca09798,L"r.Mobile.MaxVisibleMovableSpotLightShadows",&local_58,
                L"The max number of visible spotlights can cast shadow sorted by screen size, should be as less as possible for performance reason"
               );
  atexit(FUN_142de805e);
  local_58._0_4_ = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca097b0,L"r.Mobile.EnableMovablePointLightsShadows",&local_58,
                L"If 1 then enable movable point light shadow support");
  atexit(FUN_142de80a3);
  local_58._0_4_ = 1;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca097c8,L"r.Mobile.SceneDepthAux",&local_58,
                L"1: 16F SceneDepthAux Format2: 32F SceneDepthAux Format");
  atexit(FUN_142de80e8);
  local_58._0_4_ = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca097e0,L"r.Mobile.PropagateAlpha",&local_58,
                L"0: Disabled1: Propagate Full Alpha Propagate");
  atexit(FUN_142de812d);
  local_58._0_4_ = 0;
  local_68 = 0x60;
  FUN_14078dbce(&DAT_14ca097f8,L"r.Mobile.TonemapSubpass",&local_58,
                L" Whether to enable mobile tonemap subpass \n 0 = Off [default]\n 1 = On");
  atexit(FUN_142de8172);
  local_58._0_4_ = 0;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca09810,L"r.Mobile.EnableCapsuleShadows",&local_58,
                L"0: Capsule shadows are disabled in the mobile renderer1: Enables capsule shadowing on skinned components with bCastCapsuleDirectShadow or bCastCapsuleIndirectShadow enabled with the mobile renderer"
               );
  atexit(FUN_142de81b7);
  local_58 = (undefined *)((ulonglong)local_58._4_4_ << 0x20);
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca09828,L"r.Mobile.EnableCapsuleDirectShadows",&local_58,
                L"0: Capsule direct shadows are disabled in the mobile renderer1: Enables capsule direct shadowing on skinned components with bCastCapsuleDirectShadow enabled with the mobile renderer"
               );
  atexit(FUN_142de81fc);
  local_50 = FUN_145d50964;
  local_58 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca098c8,&local_58);
  local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca098d8,L"r.Mobile.UseHWsRGBEncoding",&local_58,
                L"0: Write sRGB encoding in the shader\n1: Use GPU HW to convert linear to sRGB automatically (device must support sRGB write control)\n"
               );
  atexit(FUN_142de824d);
  local_50 = FUN_145fd2cb0;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca09a08,&local_58);
  local_50 = FUN_145ce6b9e;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca09b30,&local_58);
  local_50 = FUN_1460c2ce8;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca09c58,&local_58);
  local_50 = FUN_1460c2f5c;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca09d80,&local_58);
  local_50 = FUN_1460c31d0;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca09ea8,&local_58);
  local_50 = FUN_1460c3444;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca09fd0,&local_58);
  local_50 = FUN_1460c36b8;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a0f8,&local_58);
  local_50 = FUN_145fd3228;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a220,&local_58);
  local_50 = FUN_145ce7266;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a348,&local_58);
  local_50 = FUN_1460c392c;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a470,&local_58);
  local_50 = FUN_1460c3ba0;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a598,&local_58);
  local_50 = FUN_1460c3e14;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a6c0,&local_58);
  local_50 = FUN_1460c4088;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a7e8,&local_58);
  local_50 = FUN_1460c42fc;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0a910,&local_58);
  local_50 = FUN_145fd37a0;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0aa38,&local_58);
  local_50 = FUN_145ce792e;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0ab60,&local_58);
  local_50 = FUN_1460c4570;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0ac88,&local_58);
  local_50 = FUN_1460c47e4;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0adb0,&local_58);
  local_50 = FUN_1460c4a58;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0aed8,&local_58);
  local_50 = FUN_1460c4ccc;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b000,&local_58);
  local_50 = FUN_1460c4f40;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b128,&local_58);
  local_50 = FUN_145fd3d18;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b250,&local_58);
  local_50 = FUN_145ce7ff6;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b378,&local_58);
  local_50 = FUN_1460c51b4;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b4a0,&local_58);
  local_50 = FUN_1460c5428;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b5c8,&local_58);
  local_50 = FUN_1460c569c;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b6f0,&local_58);
  local_50 = FUN_1460c5910;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b818,&local_58);
  local_50 = FUN_1460c5b84;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0b940,&local_58);
  local_50 = FUN_145fd4290;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0ba68,&local_58);
  local_50 = FUN_145ce86be;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0bb90,&local_58);
  local_50 = FUN_1460c5df8;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0bcb8,&local_58);
  local_50 = FUN_1460c606c;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0bde0,&local_58);
  local_50 = FUN_1460c62e0;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0bf08,&local_58);
  local_50 = FUN_1460c6554;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c030,&local_58);
  local_50 = FUN_1460c67c8;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c158,&local_58);
  local_50 = FUN_145fd4808;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c280,&local_58);
  local_50 = FUN_145ce8d86;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c3a8,&local_58);
  local_50 = FUN_1460c6a3c;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c4d0,&local_58);
  local_50 = FUN_1460c6cb0;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c5f8,&local_58);
  local_50 = FUN_1460c6f24;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c720,&local_58);
  local_50 = FUN_1460c7198;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c848,&local_58);
  local_50 = FUN_1460c740c;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0c970,&local_58);
  local_50 = FUN_145fd4d80;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0ca98,&local_58);
  local_50 = FUN_145ce944e;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0cbc0,&local_58);
  local_50 = FUN_1460c7680;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0cce8,&local_58);
  local_50 = FUN_1460c78f4;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0ce10,&local_58);
  local_50 = FUN_1460c7b68;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0cf38,&local_58);
  local_50 = FUN_1460c7ddc;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d060,&local_58);
  local_50 = FUN_1460c8050;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d188,&local_58);
  local_50 = FUN_145fd52f8;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d2b0,&local_58);
  local_50 = FUN_145ce9b16;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d3d8,&local_58);
  local_50 = FUN_1460c82c4;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d500,&local_58);
  local_50 = FUN_1460c8538;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d628,&local_58);
  local_50 = FUN_1460c87ac;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d750,&local_58);
  local_50 = FUN_1460c8a20;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d878,&local_58);
  local_50 = FUN_1460c8c94;
  local_58 = &DAT_141535a92;
  FUN_1412df486(&DAT_14ca0d9a0,&local_58);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca0d9b8,L"r.Mobile.UseClusteredDeferredShading",&DAT_14ca0d9b0,
                L"Toggle use of clustered deferred shading for lights that support it. 0 is off (default), 1 is on. (requires LightGrid: r.Mobile.Forward.EnableLocalLights=1)"
               );
  atexit(FUN_142de9b53);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca0d9c8,L"r.Mobile.UseLightStencilCulling",&DAT_14c760820,
                L"Whether to use stencil to cull local lights. 0 is off, 1 is on (default)");
  atexit(FUN_142de9b98);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca0d9e0,L"r.Mobile.IgnoreDeferredShadingSkyLightChannels",&DAT_14ca0d9d8,
                L"Whether to ignore primitive lighting channels when applying SkyLighting in a mobile deferred shading.\nThis may improve GPU performance at the cost of incorrect lighting for a primitves with non-default lighting channels"
               );
  atexit(FUN_142de9bdd);
  local_50 = FUN_146089f9c;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca0db08,&local_58);
  local_50 = FUN_14608a206;
  local_58 = &DAT_142bc70ae;
  FUN_1412df486(&DAT_14ca0dc30,&local_58);
  local_50 = FUN_145edcda2;
  local_58 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca0dd58,&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df5110 FUN_142df5110 body=1176 status=ok
// SIG undefined FUN_142df5110(void)

void FUN_142df5110(ulonglong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong *local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_55;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_70 = DAT_14ca83a68;
  uStack_80 = CONCAT44(DAT_14ca83a5c,DAT_14ca83a58);
  uStack_78 = (undefined *)CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
  local_a0 = param_5[1];
  uStack_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_a8 = param_5[2];
  local_56 = 0;
  local_88 = (undefined8 *)0x9;
  local_55 = 2;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_68 = 0;
  local_53 = 0xff;
  iVar3 = (int)*(undefined8 *)(*param_5 + 0x84);
  local_64 = DAT_14ca84e40;
  if (iVar3 < DAT_14ca84e40) {
    local_64 = iVar3;
  }
  if (local_64 < 2) {
    local_64 = 1;
  }
  iVar3 = (int)((ulonglong)*(undefined8 *)(*param_5 + 0x84) >> 0x20);
  local_60 = DAT_14ca84e40;
  if (iVar3 < DAT_14ca84e40) {
    local_60 = iVar3;
  }
  if (local_60 < 2) {
    local_60 = 1;
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar10 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar4 = uVar10 + 0x120;
  local_c0 = param_3;
  local_98 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8(puVar1,0x128);
    uVar10 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar4 = uVar10 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bbb8c(uVar10,L"DistortionAccumulatePass",&local_88,0);
  iVar3 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar3 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar3 * 8) = uVar10;
  *(int *)(uVar10 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar8 + 0x34;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x1b0);
    puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar8 + 0x34;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  *puVar8 = &PTR_FUN_14a299370;
  puVar5 = puVar8 + 2;
  FUN_14725b016(puVar5);
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar8;
  FUN_1448c58dc(param_4,&local_88);
  *(undefined4 *)(puVar8 + 4) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)puVar8 + 0x24) = uStack_78._4_4_;
  *(undefined4 *)(puVar8 + 5) = uStack_70;
  *(uint *)((longlong)puVar8 + 0x2c) = uStack_6c;
  *(undefined4 *)puVar5 = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_88._4_4_;
  *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_80._4_4_;
  uVar6 = FUN_14724d672(param_2,param_4);
  FUN_145f81274();
  cVar7 = '\x02';
  if (DAT_14ca12141 != '\x03') {
    cVar7 = DAT_14ca12141;
  }
  puVar8[6] = uVar6;
  *(char *)(puVar8 + 7) = cVar7;
  puVar8[0x14] = uVar10;
  puVar8[0x15] = 0;
  *(undefined4 *)(puVar8 + 0x16) = 0xffff0002;
  lVar2 = param_5[1];
  local_b0 = param_5[2];
  local_b8 = *(undefined8 *)(*param_5 + 0x84);
  if (*(char *)(param_4 + 0x6e80) == '\x01') {
    lVar9 = local_c0 + 0x3f08;
    if (*(int *)(DAT_14ca09490 + 4) == 0) {
      local_c0 = local_c0 + 0x3f08;
      FUN_144b112d8(param_4 + 0x6e40);
      lVar9 = local_c0;
    }
    local_c8 = puVar8 + 8;
    FUN_1401b6588(param_4 + 0x6e40,param_2,lVar9,0);
    *(undefined1 *)(param_4 + 0x6f88) = 1;
  }
  else {
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = 4;
    puVar8[10] = 0;
    *(undefined4 *)(puVar8 + 0xb) = 8;
    puVar8[0xc] = 0;
  }
  FUN_14725b0e4();
  FUN_140069376(param_2);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar11 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar8;
  uStack_80 = DAT_14ca18760;
  if (DAT_14ca18760 != 0) {
    LOCK();
    *(int *)(DAT_14ca18760 + 8) = *(int *)(DAT_14ca18760 + 8) + 1;
    UNLOCK();
  }
  uStack_78 = &DAT_14ca18718;
  local_c8 = (undefined8 *)CONCAT71(local_c8._1_7_,1);
  local_88 = puVar5;
  FUN_140068f1a(puVar11,&local_89,&local_88,1);
  *puVar11 = &PTR_FUN_14a299380;
  puVar11[0x37] = param_4;
  puVar11[0x38] = local_b8;
  puVar11[0x39] = lVar2;
  puVar11[0x3a] = local_b0;
  puVar11[0x3b] = puVar5;
  iVar3 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar11);
  *local_98 = uVar10;
  local_98[1] = local_a0;
  local_98[2] = local_a8;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df55b5 FUN_142df55b5 body=2344 status=ok
// SIG undefined FUN_142df55b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df55b5(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ushort *puVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined1 local_179;
  undefined4 local_178;
  undefined4 local_174;
  ulonglong *local_170;
  ulonglong local_168;
  ulonglong *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong *local_f8;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined1 local_e9;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  uVar6 = local_b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_e0 = _DAT_14ca83a30;
  uStack_d8 = _DAT_14ca83a38;
  local_100 = param_4[4];
  local_108 = param_4[5];
  local_e8 = 9;
  local_b8._6_2_ = SUB82(uVar6,6);
  local_b8._0_6_ = CONCAT24(0xff00,(uint)*(byte *)(*param_4 + 0x93) << 0x18);
  local_b8 = CONCAT62(local_b8._2_6_,0x101);
  local_d0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  uVar9 = (uint)*(undefined8 *)(param_4[3] + 0x84);
  uVar15 = DAT_14ca84e40;
  if ((int)uVar9 < (int)DAT_14ca84e40) {
    uVar15 = uVar9;
  }
  if ((int)uVar15 < 2) {
    uVar15 = 1;
  }
  uVar10 = (uint)((ulonglong)*(undefined8 *)(param_4[3] + 0x84) >> 0x20);
  uVar9 = DAT_14ca84e40;
  if ((int)uVar10 < (int)DAT_14ca84e40) {
    uVar9 = uVar10;
  }
  local_c8 = (ulonglong)uVar15 << 0x20;
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  local_c0 = CONCAT44(0x10001,uVar9);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  uVar20 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar20 + 0x120;
  local_f8 = param_1;
  if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
    FUN_140023dd8(puVar1,0x128);
    uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar11 = uVar20 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar20,L"DistortionMergePass",&local_e8);
  iVar4 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar4 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  uVar6 = *(undefined8 *)(param_3 + 0x13818);
  local_168 = uVar20;
  FUN_145f4fcd0();
  FUN_1448e935e(uVar6,&local_e8,&DAT_14ca12210);
  FUN_145f4fcd0();
  lVar8 = local_e8;
  local_110 = local_e0;
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar18 + 0x28;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(puVar1,0x150);
    puVar18 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar12 = puVar18 + 0x28;
  }
  *puVar1 = (ulonglong)puVar12;
  *puVar18 = &PTR_FUN_14a2993d8;
  puVar12 = puVar18 + 2;
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 1;
  *(undefined1 (*) [16])(puVar18 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar18 + 6) = (undefined1  [16])0x0;
  lVar13 = 0x52;
  do {
    *(undefined1 (*) [16])((longlong)puVar18 + lVar13 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar18 + lVar13 + -2) = 0xffff0000;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0x112);
  *(undefined4 *)((longlong)puVar18 + 0x114) = 0;
  *(undefined1 (*) [16])(puVar18 + 0x20) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar18 + 0x22) = 0;
  *(undefined4 *)(puVar18 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x11c) = 0xffffffff;
  *(undefined4 *)(puVar18 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)puVar18 + 0x124) = 0xffffffff;
  *(undefined4 *)(puVar18 + 0x25) = 0;
  *(undefined2 *)((longlong)puVar18 + 300) = 0;
  puVar18[0x26] = 0;
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar4);
  }
  uVar11 = local_168;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar18;
  puVar18[8] = local_168;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0xffff0002;
  lVar13 = FUN_1447e4f80();
  cVar14 = '\x02';
  if (*(char *)(lVar13 + 0x41) != '\x03') {
    cVar14 = *(char *)(lVar13 + 0x41);
  }
  puVar18[2] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar18 + 3) = cVar14;
  puVar18[4] = *param_4;
  uVar6 = DAT_14c9c0de0;
  puVar18[5] = DAT_14c9c0de0;
  puVar18[6] = param_4[3];
  puVar18[7] = uVar6;
  local_118 = param_4[1];
  local_120 = param_4[2];
  local_128 = *(undefined8 *)(*param_4 + 0x84);
  local_130 = *(undefined8 *)(uVar11 + 0x84);
  local_138 = (longlong)*(int *)(param_3 + 0x3090);
  local_174 = *(undefined4 *)(param_3 + 0x1dd4);
  local_178 = *(undefined4 *)(param_3 + 0x3094);
  local_179 = (&DAT_00001de6)[param_3];
  uVar6 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_138 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_1a0 = &LAB_14712ac08;
    local_1a8 = &LAB_14712ac0c;
    local_1b0 = &LAB_1472e3912;
    local_1b8 = &LAB_1472e3916;
    local_1c0 = FUN_1472e391a;
    local_1c8 = FUN_1472e3942;
    local_1e0 = L"ScreenPassVS";
    local_1e8 = L"/Engine/Private/ScreenPass.usf";
    local_190 = 0;
    local_198 = 0xe0;
    local_1d0 = 1;
    local_1d8 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar6,&local_e8,&DAT_14ca4b6d8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_1a0 = &LAB_14712ac08;
    local_1a8 = &LAB_14712ac0c;
    local_1b0 = &LAB_1472e3912;
    local_1b8 = &LAB_1472e3916;
    local_1c0 = FUN_1472e391a;
    local_1c8 = FUN_1472e3942;
    local_1e0 = L"ScreenPassVS";
    local_1e8 = L"/Engine/Private/ScreenPass.usf";
    local_190 = 0;
    local_198 = 0xe0;
    local_1d0 = 1;
    local_1d8 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_158 = local_e8;
  local_150 = local_e0;
  local_140 = DAT_14c9c0d50;
  local_148 = DAT_14c9c0d98;
  FUN_145f4ff3e();
  uVar20 = local_100;
  uVar11 = local_108;
  lVar13 = DAT_14ca16c30;
  iVar4 = *(int *)(DAT_14ca16c30 + 0x38);
  if (0 < (longlong)iVar4) {
    local_160 = (ulonglong *)(lVar8 + 0x30);
    local_170 = (ulonglong *)(lVar8 + 0x20);
    lVar22 = 0;
    iVar25 = 0;
    iVar17 = 0;
    iVar21 = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar13 + 0x30) + 2 + lVar22 * 4);
      if (bVar2 < 0x14) {
        uVar3 = *(ushort *)(*(longlong *)(lVar13 + 0x30) + lVar22 * 4);
        uVar19 = (ulonglong)uVar3;
        iVar16 = iVar17;
        if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
          if (bVar2 == 0x13) {
            if (iVar21 < *(int *)(lVar8 + 0x38)) {
              uVar7 = *local_160;
              uVar24 = ((longlong)uVar7 >> 0x18) + (longlong)local_160;
              if ((uVar7 & 1) == 0) {
                uVar24 = uVar7;
              }
              if (uVar3 == *(ushort *)(uVar24 + 2 + (longlong)iVar21 * 4)) {
                iVar21 = iVar21 + 1;
                goto LAB_142df5abf;
              }
            }
            if ((*(longlong *)((longlong)puVar12 + uVar19) != 0) &&
               ((*(byte *)((longlong)puVar18 + uVar19 + 0x18) & 2) == 0)) goto LAB_142df5ab7;
          }
        }
        else {
          iVar5 = *(int *)(lVar8 + 0x18);
          if (iVar25 < iVar5) {
            uVar7 = *(ulonglong *)(lVar8 + 0x10);
            uVar24 = ((longlong)uVar7 >> 0x18) + lVar8 + 0x10;
            if ((uVar7 & 1) == 0) {
              uVar24 = uVar7;
            }
            puVar23 = (ushort *)((longlong)iVar25 * 4 + uVar24);
            iVar26 = iVar25;
            do {
              if (uVar3 <= *puVar23) {
                iVar25 = iVar26;
                if (*puVar23 == uVar3) goto LAB_142df5abf;
                break;
              }
              iVar26 = iVar26 + 1;
              puVar23 = puVar23 + 2;
              iVar25 = iVar5;
            } while (iVar5 != iVar26);
          }
          iVar5 = *(int *)(lVar8 + 0x28);
          if (iVar17 < iVar5) {
            uVar7 = *local_170;
            uVar24 = ((longlong)uVar7 >> 0x18) + (longlong)local_170;
            if ((uVar7 & 1) == 0) {
              uVar24 = uVar7;
            }
            puVar23 = (ushort *)((longlong)iVar17 * 6 + uVar24);
            do {
              if (uVar3 <= *puVar23) {
                iVar16 = iVar17;
                if (*puVar23 == uVar3) goto LAB_142df5abf;
                break;
              }
              iVar17 = iVar17 + 1;
              puVar23 = puVar23 + 3;
              iVar16 = iVar5;
            } while (iVar5 != iVar17);
          }
LAB_142df5ab7:
          *(undefined8 *)((longlong)puVar12 + uVar19) = 0;
          iVar17 = iVar16;
        }
      }
LAB_142df5abf:
      lVar22 = lVar22 + 1;
    } while (lVar22 != iVar4);
  }
  local_e8 = CONCAT44(local_174,(int)local_138);
  local_e0 = CONCAT17(local_e9,CONCAT25(local_eb,CONCAT14(local_179,local_178)));
  uStack_d8 = local_130;
  local_d0 = local_100;
  local_c8 = local_108;
  local_c0 = local_128;
  local_b8 = local_118;
  local_b0 = local_120;
  local_a8 = local_158;
  local_a0 = local_150;
  local_98 = lVar8;
  local_90 = local_110;
  local_88 = local_140;
  local_80 = local_148;
  local_78 = DAT_14ca94df8;
  local_70 = 0;
  local_68 = lVar8;
  local_60 = local_110;
  local_50 = 0;
  local_58 = puVar12;
  FUN_145f4ff3e();
  FUN_14725b51c(param_2,&local_ec,puVar12,&local_e8);
  *local_f8 = local_168;
  local_f8[1] = uVar20;
  local_f8[2] = uVar11;
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df5ede FUN_142df5ede body=69 status=ok
// SIG undefined FUN_142df5ede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df5ede(void)

{
  _DAT_14ca122d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142df5f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca122d8,1);
  return;
}



// FUNCTION 142df5f23 FUN_142df5f23 body=69 status=ok
// SIG undefined FUN_142df5f23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df5f23(void)

{
  _DAT_14ca122e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142df5f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca122f0,1);
  return;
}



// FUNCTION 142df5f74 FUN_142df5f74 body=181 status=ok
// SIG undefined FUN_142df5f74(void)

undefined8 FUN_142df5f74(ushort *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined7 uVar8;
  undefined8 uVar7;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  if ((&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1) {
    uVar1 = *(uint *)(param_1 + 2);
    uVar9 = uVar1 + 3;
    uVar4 = uVar1 + 7;
    uVar5 = uVar1 + 0xf;
    if (-1 < (int)uVar1) {
      uVar9 = uVar1;
      uVar4 = uVar1;
      uVar5 = uVar1;
    }
    bVar10 = ((int)uVar9 >> 2 & 0x80000001U) == 1;
    bVar11 = ((int)uVar4 >> 3 & 0x80000001U) == 1;
    bVar12 = ((int)uVar5 >> 4 & 0x80000001U) == 1;
    uVar8 = 0x800000;
    bVar2 = bVar10;
    bVar3 = bVar11;
    bVar6 = bVar12;
    if ((uVar1 & 0x80000001) != 1) {
      bVar6 = false;
      uVar8 = 0;
      bVar2 = false;
      bVar3 = false;
      if (((int)uVar1 / 2 & 0x80000001U) == 1) {
        return 0;
      }
    }
    uVar7 = CONCAT71(uVar8,bVar6 == bVar12 && !(bool)(bVar3 ^ bVar11 | bVar2 ^ bVar10));
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 142df6036 FUN_142df6036 body=2470 status=ok
// SIG undefined FUN_142df6036(void)

void FUN_142df6036(longlong param_1,ulonglong *param_2,longlong param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  char cVar18;
  char cVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong *plVar24;
  byte bVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined7 uVar29;
  undefined8 *puVar28;
  undefined1 uVar30;
  bool bVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  char local_2bd;
  int local_2bc;
  undefined8 local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  char local_28c;
  undefined1 local_288;
  undefined1 local_284;
  undefined1 local_280;
  undefined1 local_27c;
  undefined1 local_278;
  char local_274;
  int local_270;
  longlong local_268;
  undefined1 local_260;
  undefined7 uStack_25f;
  undefined8 local_258;
  undefined1 local_250;
  undefined8 local_248 [14];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  float local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined5 uStack_f4;
  undefined3 uStack_ef;
  undefined5 uStack_ec;
  undefined8 uStack_e7;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca12558) && (FUN_144b3d300(&DAT_14ca12558), DAT_14ca12558 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar24 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.DisableVertexFog",1);
    if (plVar24 == (longlong *)0x0) {
      DAT_14ca12550 = 0;
    }
    else {
      DAT_14ca12550 = (**(code **)(*plVar24 + 0x68))(plVar24);
    }
    _Init_thread_footer(&DAT_14ca12558);
  }
  if ((DAT_14ca12550 != 0) && (*(int *)(DAT_14ca12550 + 4) == 0)) goto LAB_142df6937;
  iVar2 = *(int *)(DAT_14ca122e0 + 4);
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x4d18) < 1) {
    cVar18 = '\0';
  }
  else {
    cVar18 = FUN_140047f5c(*(undefined8 *)(param_3 + 8));
  }
  if ((((iVar2 < 1) || (plVar24 = *(longlong **)(param_1 + 8), plVar24 == (longlong *)0x0)) ||
      (plVar24[0x9a4] == 0)) || ((*(byte *)(*(longlong *)(param_3 + 8) + 0x5a) & 2) == 0)) {
LAB_142df6150:
    bVar31 = false;
  }
  else {
    if (*(code **)(*plVar24 + 0x2c0) != (code *)&LAB_1447ccd94) {
      (**(code **)(*plVar24 + 0x2c0))();
    }
    if (DAT_14c760dd5 != '\x01') goto LAB_142df6150;
    bVar31 = 0 < *(int *)(DAT_14ca5c7b8 + 4);
  }
  if (cVar18 == '\0' && bVar31 == false) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_2e8);
  }
  iVar3 = *(int *)(param_3 + 0x3104);
  iVar4 = *(int *)(param_3 + 0x3100);
  iVar5 = *(int *)(param_3 + 0x30fc);
  iVar6 = *(int *)(param_3 + 0x30f8);
  local_2bc = *(int *)(DAT_14ca122f8 + 4);
  puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar28 = puVar20 + 5;
  if ((undefined8 *)param_2[1] < puVar28) {
    FUN_140023dd8(param_2,0x30);
    puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar28 = puVar20 + 5;
  }
  local_2bd = iVar2 < 1;
  local_2b8 = CONCAT71(local_2b8._1_7_,0 < iVar2);
  *param_2 = (ulonglong)puVar28;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar20;
  param_2[6] = (ulonglong)(puVar20 + 1);
  uVar30 = 0;
  puVar20[1] = 0;
  *puVar20 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar20 + 2) = (float)iVar6;
  *(float *)((longlong)puVar20 + 0x14) = (float)iVar5;
  *(undefined4 *)(puVar20 + 3) = 0;
  *(float *)((longlong)puVar20 + 0x1c) = (float)iVar4;
  *(float *)(puVar20 + 4) = (float)iVar3;
  *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
  local_138 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_fc = 0;
  uStack_f4 = 0;
  uStack_ef = 0;
  uStack_ec = 0;
  uStack_e7 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  FUN_144b0e33a(param_2,&local_188);
  uStack_150 = DAT_14c9c0db0;
  local_130 = 0;
  puVar26 = &DAT_14c9c0d88;
  if (local_2bc != 0) {
    puVar26 = &DAT_14ca16a28;
  }
  local_148 = *(undefined8 *)(puVar26 + 0x10);
  local_158 = DAT_14ca16a50;
  uVar27 = *(undefined8 *)(param_3 + 0x13818);
  FUN_145edd288();
  FUN_1448e935e(uVar27,&local_268,&DAT_14ca12368,0);
  FUN_145edd288();
  local_2b0 = local_268;
  local_2a8 = CONCAT71(uStack_25f,local_260);
  fVar35 = *(float *)(param_3 + 0x11fb0);
  lVar23 = *(longlong *)(param_3 + 0x124d0);
  fVar34 = *(float *)(param_3 + 0x11fac);
  if (lVar23 == 0 && local_2bd == '\0') {
    fVar33 = (float)FUN_14064fe5c(param_3 + 0x12518);
    uVar30 = 1;
    if (fVar33 <= 0.0) {
      uVar30 = *(undefined1 *)(param_3 + 0x124f0);
    }
  }
  local_2b8 = CONCAT71(local_2b8._1_7_,(byte)local_2b8 & 0.0 < fVar35);
  local_2bd = FUN_141786b06(param_1);
  lVar21 = 0;
  bVar32 = false;
  uVar29 = 0;
  if (local_2bd != '\0') {
    cVar19 = FUN_1400838d1(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8));
    if (cVar19 != '\0') {
      uVar27 = *(undefined8 *)(param_1 + 8);
      cVar19 = FUN_1400838d1(uVar27,*(undefined8 *)(param_3 + 8));
      if (cVar19 != '\0') {
        bVar32 = 0 < *(int *)(DAT_14c9ec468 + 4);
        uVar29 = (undefined7)((ulonglong)uVar27 >> 8);
        goto LAB_142df6402;
      }
    }
    bVar32 = false;
    uVar29 = 0;
  }
LAB_142df6402:
  bVar25 = bVar32 | *(byte *)(param_3 + 0x119c8);
  local_288 = 0.0 < fVar34;
  local_284 = lVar23 != 0;
  local_280 = (byte)local_2b8;
  local_274 = local_2bd;
  local_270 = *(byte *)(param_3 + 0x119c8) + 1;
  if (bVar25 == 0) {
    local_270 = 0;
  }
  local_2b8 = CONCAT71(uVar29,bVar25);
  local_28c = cVar18;
  local_27c = uVar30;
  local_278 = bVar31;
  FUN_14724dba6(&local_2a0,*(undefined8 *)(param_3 + 0x13818));
  local_188 = DAT_14ca94e10;
  if (local_2b0 != 0) {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_2a8 + 8) + 0x50) +
              (longlong)*(int *)(local_2b0 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(local_2a8 + 8),(longlong)*(int *)(local_2b0 + 0xd4),1);
    }
  }
  uStack_180 = lVar21;
  if (local_2a0 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(local_298 + 8) + 0x50) +
              (longlong)*(int *)(local_2a0 + 0xd4) * 8);
    if (uVar22 == 0) {
      uVar22 = FUN_1400bafc2(*(longlong *)(local_298 + 8),(longlong)*(int *)(local_2a0 + 0xd4),1);
    }
  }
  bVar32 = local_2bc != 0;
  local_178 = uVar22;
  lVar23 = FUN_140028f18(param_2);
  if ((lVar23 != 0) && ((local_c0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_160._4_4_;
    param_2[0x33] = local_178;
    param_2[0x34] = uStack_170;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_188;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_188._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_180;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_180._4_4_;
    puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar28 = puVar20 + 4;
    if ((undefined8 *)param_2[1] < puVar28) {
      FUN_140023dd8(param_2,0x28);
      puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar20 + 4;
    }
    *param_2 = (ulonglong)puVar28;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar20;
    param_2[6] = (ulonglong)(puVar20 + 1);
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_14a37d348;
    puVar20[2] = lVar23;
    *(uint *)(puVar20 + 3) = (uint)bVar32 << 3;
    *(undefined1 *)((longlong)puVar20 + 0x1c) = 1;
  }
  lVar23 = local_2b0;
  if (cVar18 == '\0') {
    fVar35 = 30.0;
  }
  else {
    fVar35 = *(float *)(param_3 + 0x11fac);
    fVar34 = fVar35;
    if (local_2bd != '\0') {
      fVar34 = *(float *)(param_3 + 0x11ff8);
    }
    if (fVar34 <= fVar35) {
      fVar35 = fVar34;
    }
    fVar34 = fVar35;
    if (((byte)local_2b8 != '\0') && (fVar34 = (float)FUN_142d00b29(), fVar35 <= fVar34)) {
      fVar34 = fVar35;
    }
    fVar35 = 30.0;
    if (30.0 <= fVar34) {
      fVar35 = fVar34;
    }
  }
  fVar34 = fVar35;
  if (bVar31 != false) {
    plVar24 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x2c8))();
    fVar34 = 0.0;
    if (0.0 <= *(float *)(*plVar24 + 0xd0)) {
      fVar34 = *(float *)(*plVar24 + 0xd0);
    }
    fVar33 = fVar34 * 100000.0;
    if (fVar34 * 100000.0 <= *(float *)(param_3 + 0x2170)) {
      fVar33 = *(float *)(param_3 + 0x2170);
    }
    fVar34 = fVar33;
    if ((cVar18 != '\0') && (fVar34 = fVar35, fVar33 <= fVar35)) {
      fVar34 = fVar33;
    }
  }
  fVar35 = 0.1;
  if ((local_2bc != 0) && (0.0 < fVar34)) {
    dVar9 = *(double *)(param_3 + 0x880);
    dVar10 = *(double *)(param_3 + 0x888);
    dVar11 = *(double *)(param_3 + 0x8a0);
    dVar12 = *(double *)(param_3 + 0x8a8);
    dVar1 = *(double *)(param_3 + 0x858);
    dVar13 = *(double *)(param_3 + 0x840);
    dVar14 = *(double *)(param_3 + 0x848);
    dVar15 = *(double *)(param_3 + 0x860);
    dVar16 = *(double *)(param_3 + 0x868);
    dVar8 = atan(1.0 / *(double *)(param_3 + 0x830));
    dVar1 = atan(1.0 / dVar1);
    fVar35 = (float)dVar8;
    if ((float)dVar8 <= (float)dVar1) {
      fVar35 = (float)dVar1;
    }
    fVar33 = cosf(fVar35);
    fVar35 = fVar34 * fVar33;
    if (fVar34 * fVar33 <= *(float *)(param_3 + 0x2170)) {
      fVar35 = *(float *)(param_3 + 0x2170);
    }
    fVar35 = (float)(((double)fVar35 * dVar9 + dVar15 * 0.0 + dVar13 * 0.0 + dVar11) /
                    ((double)fVar35 * dVar10 + dVar16 * 0.0 + dVar14 * 0.0 + dVar12));
  }
  lVar21 = 0;
  local_1b8 = 0;
  local_1b0 = 1;
  local_1a8 = 0;
  local_1a0 = 1;
  FUN_1448c58dc(param_3,&local_1b8);
  local_198 = fVar35;
  if (lVar23 != 0) {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_2a8 + 8) + 0x50) +
              (longlong)*(int *)(lVar23 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(local_2a8 + 8),(longlong)*(int *)(lVar23 + 0xd4),1);
    }
  }
  FUN_145edd4f6();
  local_2c8 = &local_1b8;
  FUN_1449cc26b(param_2,lVar21,lVar23,&DAT_14ca16c70);
  lVar23 = 0;
  local_268 = 0;
  local_260 = 1;
  local_258 = 0;
  local_250 = 1;
  FUN_1448c58dc(param_3,&local_268);
  puVar28 = (undefined8 *)(param_3 + 72000);
  puVar20 = local_248;
  for (lVar21 = 0xd; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar20 = *puVar28;
    puVar28 = puVar28 + 1;
    puVar20 = puVar20 + 1;
  }
  local_1d8 = *(undefined8 *)(param_3 + 0x119e0);
  local_1c8 = *(undefined8 *)(param_3 + 0x119f0);
  local_1d0 = DAT_14c9c0de0;
  local_1c0 = DAT_14c9c0de0;
  if (local_2a0 != 0) {
    lVar23 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_298 + 8) + 0x50) +
              (longlong)*(int *)(local_2a0 + 0xd4) * 8);
    if (lVar23 == 0) {
      lVar23 = FUN_1400bafc2(*(longlong *)(local_298 + 8),(longlong)*(int *)(local_2a0 + 0xd4),1);
    }
  }
  FUN_145f50534();
  local_2c8 = &local_268;
  FUN_1449cc26b(param_2,lVar23,local_2a0,&DAT_14ca16cf8);
  uVar17 = local_2b8;
  uVar27 = DAT_14ca8c0f8;
  puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar28 = puVar20 + 5;
  if ((undefined8 *)param_2[1] < puVar28) {
    FUN_140023dd8(param_2,0x30);
    puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar28 = puVar20 + 5;
  }
  *param_2 = (ulonglong)puVar28;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar20;
  param_2[6] = (ulonglong)(puVar20 + 1);
  puVar20[1] = 0;
  *puVar20 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar20 + 2) = 0;
  puVar20[3] = uVar27;
  *(undefined4 *)(puVar20 + 4) = 0;
  uVar27 = DAT_14ca8c128;
  uVar7 = *(undefined4 *)(param_3 + 0x3094);
  puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar28 = puVar20 + 6;
  if ((undefined8 *)param_2[1] < puVar28) {
    FUN_140023dd8(param_2,0x38);
    puVar20 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar28 = puVar20 + 6;
  }
  *param_2 = (ulonglong)puVar28;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar20;
  param_2[6] = (ulonglong)(puVar20 + 1);
  puVar20[1] = 0;
  *puVar20 = &PTR_FUN_14a1fb5b0;
  puVar20[2] = uVar27;
  *(undefined4 *)(puVar20 + 3) = 0;
  *(undefined4 *)((longlong)puVar20 + 0x1c) = 0;
  *(undefined4 *)(puVar20 + 4) = 4;
  *(undefined4 *)((longlong)puVar20 + 0x24) = 0;
  *(undefined4 *)(puVar20 + 5) = 2;
  *(undefined4 *)((longlong)puVar20 + 0x2c) = uVar7;
  if ((char)uVar17 == '\0') {
    FUN_142d04d42(param_2,param_3);
  }
LAB_142df6937:
  if ((local_b0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df6a6b FUN_142df6a6b body=1076 status=ok
// SIG undefined FUN_142df6a6b(void)

void FUN_142df6a6b(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined1 local_f5;
  uint local_f4;
  longlong local_f0;
  int local_e4;
  ulonglong *local_e0;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_145f18e90();
  local_c0 = param_2;
  FUN_1448e935e(param_2,local_a0,&DAT_14ca12a78,0);
  FUN_145f18e90();
  local_f0 = param_3;
  if (1 < *(byte *)(param_3 + 0x90)) {
    local_e0 = (ulonglong *)(param_1 + 0x70);
    local_c8 = param_1 + 0x98;
    local_d0 = param_1 + 0x198;
    uVar6 = 1;
    local_d4 = (uint)*(byte *)(param_3 + 0x90);
    do {
      local_a8 = 1 << (~(byte)uVar6 + (char)local_d4 & 0x1f);
      local_b0 = 0;
      cVar1 = *(char *)(local_f0 + 0x92);
      if ((cVar1 == '\x04') || (cVar1 == '\x01')) {
        local_f4 = (uint)*(ushort *)(local_f0 + 0x8e);
      }
      else {
        local_f4 = 0;
      }
      if (DAT_14ca84e28 == '\0') {
        local_f5 = *(undefined1 *)(local_f0 + 0x90);
        if ((cVar1 == '\x04') || (cVar1 == '\x01')) {
          local_f4 = (uint)*(ushort *)(local_f0 + 0x8e);
        }
        else {
          local_f4 = 0;
        }
        local_e4 = 0;
      }
      else {
        local_f5 = 1;
        local_e4 = uVar6 - 1;
      }
      fVar10 = (float)local_a8;
      iVar8 = 0;
      local_a4 = local_a8;
      do {
        puVar3 = local_e0;
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar9 + 0x26;
        if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
          FUN_140023dd8(local_e0,0x140);
          puVar9 = (undefined8 *)(*puVar3 + 0xf & 0xfffffffffffffff0);
          puVar5 = puVar9 + 0x26;
        }
        *local_e0 = (ulonglong)puVar5;
        *puVar9 = &PTR_FUN_14a299608;
        puVar9[2] = 0;
        puVar9[3] = 0;
        lVar4 = 0x42;
        do {
          puVar5 = (undefined8 *)((longlong)puVar9 + lVar4 + -0x12);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined4 *)((longlong)puVar9 + lVar4 + -2) = 0xffff0000;
          lVar4 = lVar4 + 0x18;
        } while (lVar4 != 0x102);
        *(undefined4 *)((longlong)puVar9 + 0x104) = 0;
        puVar9[0x1e] = 0;
        puVar9[0x1f] = 0;
        *(undefined2 *)(puVar9 + 0x20) = 0;
        *(undefined4 *)(puVar9 + 0x21) = 0xffffffff;
        *(undefined4 *)((longlong)puVar9 + 0x10c) = 0xffffffff;
        *(undefined4 *)(puVar9 + 0x22) = 0xffffffff;
        *(undefined4 *)((longlong)puVar9 + 0x114) = 0xffffffff;
        *(undefined4 *)(puVar9 + 0x23) = 0;
        *(undefined2 *)((longlong)puVar9 + 0x11c) = 0;
        puVar9[0x24] = 0;
        iVar2 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
          FUN_1448cfae8(local_c8,iVar2);
        }
        puVar3 = local_e0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar9;
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar7 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
          FUN_140023dd8(local_e0,0x48);
          puVar7 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
          puVar5 = puVar7 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar5;
        puVar7[1] = *(undefined8 *)(local_f0 + 8);
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 1;
        *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
        *puVar7 = &PTR_FUN_14a203858;
        *(undefined1 *)(puVar7 + 5) = 0;
        *(char *)((longlong)puVar7 + 0x29) = (char)local_e4;
        *(undefined1 *)((longlong)puVar7 + 0x2a) = local_f5;
        *(undefined1 *)((longlong)puVar7 + 0x2b) = 0;
        *(undefined2 *)((longlong)puVar7 + 0x2c) = 0;
        *(short *)((longlong)puVar7 + 0x2e) = (short)local_f4;
        *(undefined1 *)(puVar7 + 6) = 0;
        *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
        puVar7[7] = local_f0;
        iVar2 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
          FUN_1447568fc(local_d0,iVar2);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar7;
        *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar9[2] = puVar7;
        puVar9[3] = DAT_14c9c0de0;
        *(int *)(puVar9 + 5) = iVar8;
        *(uint *)((longlong)puVar9 + 0x2c) = uVar6 - 1;
        *(float *)(puVar9 + 4) = 1.0 / fVar10;
        *(float *)((longlong)puVar9 + 0x24) = 1.0 / fVar10;
        puVar9[6] = local_f0;
        puVar9[7] = 0;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(byte *)((longlong)puVar9 + 0x41) = (byte)uVar6;
        *(short *)((longlong)puVar9 + 0x42) = (short)iVar8;
        local_100 = &local_b0;
        local_108 = puVar9 + 2;
        FUN_14724e338(param_1,local_c0,&local_b1,local_a0);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 6);
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_d4);
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df6ea0 FUN_142df6ea0 body=88 status=ok
// SIG undefined FUN_142df6ea0(void)

void FUN_142df6ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_142f85ed5();
  FUN_142df6a6b(param_1,param_2,param_3);
  if (param_4 != 0) {
    FUN_142f86110(param_1,param_2,param_3,param_4);
  }
  FUN_142f85960(param_1,param_2,param_3);
  return;
}



// FUNCTION 142df6ef8 FUN_142df6ef8 body=917 status=ok
// SIG undefined FUN_142df6ef8(void)

void FUN_142df6ef8(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  byte local_a9;
  undefined8 *local_a8;
  undefined1 local_99;
  undefined8 *local_98;
  longlong lStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4f;
  undefined3 uStack_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a9 = *(byte *)(param_4 + 9);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar8 + 0x32;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x1a0);
    puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar8 + 0x32;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar8 = &PTR_FUN_14a299628;
  local_a8 = puVar8 + 2;
  FUN_14725c63e();
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar8;
  puVar8[0x12] = *param_4;
  puVar8[0x13] = 0;
  *(undefined4 *)(puVar8 + 0x14) = 0xffff0001;
  if (local_a9 == 0) {
    cVar4 = FUN_14743049a(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2)
                         );
    if (cVar4 != '\0') {
      puVar8[0x15] = param_4[3];
      puVar8[0x16] = 0;
      *(undefined4 *)(puVar8 + 0x17) = 0xffff0001;
    }
    *(undefined1 *)((longlong)puVar8 + 0x17c) = 1;
  }
  puVar8[0x2a] = param_4[6];
  puVar8[0x2b] = 0;
  *(undefined2 *)(puVar8 + 0x2c) = 0x101;
  *(undefined4 *)((longlong)puVar8 + 0x164) = 0x11;
  lVar5 = FUN_1447e4f80();
  cVar4 = *(char *)(lVar5 + 0x41);
  if (cVar4 == '\x03') {
    cVar4 = '\x02';
  }
  puVar8[2] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar8 + 3) = cVar4;
  local_b8 = &local_98;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined *)0x0;
  uStack_80 = 0;
  local_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  uVar6 = FUN_147241975(param_1,param_3,2,0x86);
  lVar5 = FUN_145d50964();
  bVar3 = local_a9;
  cVar4 = *(char *)(lVar5 + 0x41);
  if (cVar4 == '\x03') {
    cVar4 = '\x02';
  }
  puVar8[4] = uVar6;
  *(char *)(puVar8 + 5) = cVar4;
  if (*(char *)(param_3 + 0x8050) == '\x01') {
    if (*(int *)(DAT_14ca09490 + 4) == 0) {
      FUN_144b112d8(param_3 + 0x8010);
    }
    local_b8 = (undefined8 **)(puVar8 + 6);
    FUN_1401b6588(param_3 + 0x8010,param_1,param_2 + 0x3f08,0);
    *(undefined1 *)(param_3 + 0x8158) = 1;
  }
  else {
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 7) = 4;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = 8;
    puVar8[10] = 0;
  }
  FUN_14725c700();
  FUN_140069376(param_1);
  puVar8 = local_a8;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 0x3a;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x1d8);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar9 + 0x3a;
  }
  *puVar1 = (ulonglong)puVar7;
  local_98 = puVar8;
  lStack_90 = DAT_14ca189f0;
  if (DAT_14ca189f0 != 0) {
    LOCK();
    *(int *)(DAT_14ca189f0 + 8) = *(int *)(DAT_14ca189f0 + 8) + 1;
    UNLOCK();
  }
  local_88 = &DAT_14ca189a8;
  local_b8 = (undefined8 **)CONCAT71(local_b8._1_7_,1);
  FUN_140068f1a(puVar9,&local_99,&local_98,1);
  *puVar9 = &PTR_FUN_14a299630;
  puVar9[0x37] = param_3;
  puVar9[0x38] = puVar8;
  *(byte *)(puVar9 + 0x39) = bVar3 ^ 1;
  *(undefined4 *)((longlong)puVar9 + 0x1c9) = local_4f;
  *(uint *)((longlong)puVar9 + 0x1cc) = CONCAT31(uStack_4b,local_4f._3_1_);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar9);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df728e FUN_142df728e body=69 status=ok
// SIG undefined FUN_142df728e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df728e(void)

{
  _DAT_14ca12b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142df72d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca12b40,1);
  return;
}



// FUNCTION 142df72d3 FUN_142df72d3 body=69 status=ok
// SIG undefined FUN_142df72d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df72d3(void)

{
  _DAT_14ca12b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142df7315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca12b58,1);
  return;
}



// FUNCTION 142df7318 FUN_142df7318 body=69 status=ok
// SIG undefined FUN_142df7318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df7318(void)

{
  _DAT_14ca12b68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142df735a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca12b70,1);
  return;
}



// FUNCTION 142df735d FUN_142df735d body=69 status=ok
// SIG undefined FUN_142df735d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df735d(void)

{
  _DAT_14ca12b80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142df739f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca12b88,1);
  return;
}



// FUNCTION 142df73a2 FUN_142df73a2 body=559 status=ok
// SIG undefined FUN_142df73a2(void)

void FUN_142df73a2(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_49;
  undefined *local_48;
  longlong local_40;
  undefined *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0xfb0) != param_3) {
    *(longlong *)(param_1 + 0xfb0) = param_3;
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 0x39;
    if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar4 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar4 + 0x39;
    }
    *puVar1 = (ulonglong)puVar3;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9e1d98) {
      FUN_144b3d300(&DAT_14c9e1d98);
      if (DAT_14c9e1d98 == -1) {
        FUN_14596f92a(&local_48);
        local_60 = 0;
        local_70 = 0;
        local_90 = "Unknown";
        local_a0 = 0;
        uStack_98 = 0;
        local_a8 = L"FEmptyShaderParameters";
        local_68 = 0;
        local_80 = 0x10;
        local_88 = 0x7a6;
        local_78 = &local_48;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_48 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142e2c814);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
    }
    local_48 = &DAT_14ca16aa0;
    local_40 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_38 = &DAT_14c9e1d18;
    local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140068f1a(puVar4,&local_49,&local_48,0x10);
    puVar4[0x37] = param_1;
    puVar4[0x38] = param_3;
    *puVar4 = &PTR_FUN_14a2998b0;
    iVar2 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar4;
    *(int *)((longlong)puVar4 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142df75d2 FUN_142df75d2 body=2342 status=ok
// SIG undefined FUN_142df75d2(void)

void FUN_142df75d2(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  byte param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined1 local_160;
  char local_151;
  longlong local_150;
  uint local_144;
  ulonglong *local_140;
  longlong local_138;
  ulonglong *local_130;
  undefined8 local_128;
  longlong local_120;
  undefined4 *local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_e9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined3 uStack_94;
  ulonglong local_90 [4];
  ulonglong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_70 = (ulonglong *)0x0;
  local_68 = 0x200000000;
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_150 = param_1;
  local_120 = param_4;
  local_118 = param_3;
  FUN_142df7ef9(&local_a8,local_90);
  puVar19 = local_70;
  if (local_70 == (ulonglong *)0x0) {
    puVar19 = local_90;
  }
  if ((longlong)(int)local_68 == 0) {
    local_128 = 0;
    local_151 = '\x01';
  }
  else {
    local_130 = puVar19 + (longlong)(int)local_68 * 2;
    local_140 = (ulonglong *)(param_2 + 0x70);
    local_138 = param_2 + 0x98;
    local_110 = param_2 + 0x168;
    local_151 = '\x01';
    local_128 = 0;
    do {
      iVar5 = DAT_14ca44da0;
      uVar1 = *puVar19;
      if (DAT_14ca44da0 != 0) {
        puVar8 = DAT_14ca44d98;
        if (DAT_14ca44d98 == (uint *)0x0) {
          puVar8 = &DAT_14ca44d88;
        }
        uVar17 = *puVar8;
        if (uVar17 == 0) {
          iVar14 = DAT_14ca44da0 + 0x1e;
          if (-1 < DAT_14ca44da0 + -1) {
            iVar14 = DAT_14ca44da0 + -1;
          }
          uVar22 = 0;
          uVar11 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar11 = uVar22;
          }
          iVar14 = 0;
          do {
            if (uVar11 == uVar22) goto LAB_142df76ae;
            iVar14 = iVar14 + 0x20;
            uVar17 = puVar8[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar22 = 0;
          iVar14 = 0;
        }
        uVar20 = (ulonglong)(-uVar17 & uVar17);
        uVar11 = uVar20 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar4 = (iVar14 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar4 < DAT_14ca44da0) {
          local_144 = 0xffffffff;
          do {
            plVar2 = *(longlong **)(DAT_14ca44d78 + (longlong)iVar4 * 0x10);
            (**(code **)(*plVar2 + 0x10))(plVar2,uVar1,1);
            local_144 = ~(uint)uVar20 & local_144;
            puVar8 = DAT_14ca44d98;
            if (DAT_14ca44d98 == (uint *)0x0) {
              puVar8 = &DAT_14ca44d88;
            }
            iVar4 = (int)uVar22;
            lVar7 = (longlong)iVar4;
            uVar17 = puVar8[lVar7] & local_144;
            if (uVar17 == 0) {
              iVar12 = DAT_14ca44da0 + 0x1e;
              if (-1 < DAT_14ca44da0 + -1) {
                iVar12 = DAT_14ca44da0 + -1;
              }
              iVar12 = iVar12 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar13 = iVar12;
              if (iVar12 < iVar4) {
                iVar13 = iVar4;
              }
              if (iVar4 < iVar12) {
                lVar18 = 0;
                do {
                  uVar17 = puVar8[lVar7 + lVar18 + 1];
                  if (uVar17 != 0) {
                    uVar22 = (ulonglong)(iVar4 + (int)lVar18 + 1);
                    local_144 = 0xffffffff;
                    goto LAB_142df7b0d;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar13 - lVar7 != lVar18);
                local_144 = 0xffffffff;
                iVar4 = iVar13;
              }
              uVar22 = (ulonglong)(iVar4 + 1);
              iVar4 = DAT_14ca44da0;
            }
            else {
LAB_142df7b0d:
              uVar20 = (ulonglong)(-uVar17 & uVar17);
              uVar11 = uVar20 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              iVar4 = (iVar14 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              if (DAT_14ca44da0 <= iVar4) {
                iVar4 = DAT_14ca44da0;
              }
            }
          } while (iVar4 != iVar5);
        }
      }
LAB_142df76ae:
      puVar23 = local_140;
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar15 + 0x40;
      if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
        FUN_140023dd8(local_140,0x210);
        puVar15 = (undefined8 *)(*puVar23 + 0xf & 0xfffffffffffffff0);
        puVar9 = puVar15 + 0x40;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar9;
      *puVar15 = &PTR_FUN_14a2996a8;
      puVar9 = puVar15 + 2;
      FUN_14725cba6(puVar9);
      iVar5 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar5 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar5 + 1U) {
        FUN_1448cfae8(local_138,iVar5);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar5 * 8) = puVar15;
      puVar15[0x38] = *(undefined8 *)(local_120 + 0x1c0);
      puVar15[0x39] = 0;
      *(undefined2 *)(puVar15 + 0x3a) = 0x202;
      *(undefined4 *)((longlong)puVar15 + 0x1d4) = 0x22;
      FUN_1448c58dc(uVar1,&local_e8);
      *(undefined4 *)(puVar15 + 4) = (undefined4)local_d8;
      *(undefined4 *)((longlong)puVar15 + 0x24) = local_d8._4_4_;
      *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_d0._4_4_;
      *(undefined4 *)puVar9 = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar15 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_e0._4_4_;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (undefined *)0x0;
      uStack_d0 = 0;
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      local_168 = &local_e8;
      uVar6 = FUN_147241975(param_2,uVar1,0,0);
      lVar7 = FUN_145d50964();
      cVar3 = *(char *)(lVar7 + 0x41);
      if (cVar3 == '\x03') {
        cVar3 = '\x02';
      }
      puVar15[0x12] = uVar6;
      *(char *)(puVar15 + 0x13) = cVar3;
      bVar10 = 2;
      if (*(char *)(uVar1 + 0x23f5) == '\0') {
        bVar10 = *(byte *)(uVar1 + 0x3099) >> 1 & 1;
      }
      *(byte *)((longlong)puVar15 + 0x1ed) = bVar10;
      if (*(char *)((longlong)puVar19 + 0xd) == '\x01') {
        uStack_98 = *(undefined4 *)((longlong)puVar15 + 0x99);
        uStack_94 = (undefined3)((uint)*(undefined4 *)((longlong)puVar15 + 0x9c) >> 8);
        local_151 = cVar3;
        local_128 = uVar6;
      }
      if (*(char *)((longlong)puVar19 + 0xc) == '\0') {
        *(undefined2 *)(puVar15 + 0x3a) = 0x101;
        *(undefined4 *)((longlong)puVar15 + 0x1d4) = 0x22;
      }
      if (*(char *)(uVar1 + 0x4ae0) == '\x01') {
        lVar7 = *(longlong *)(local_150 + 8);
        if (*(int *)(DAT_14ca09490 + 4) == 0) {
          FUN_144b112d8(uVar1 + 0x4aa0);
        }
        local_168 = puVar15 + 6;
        FUN_1401b6588(uVar1 + 0x4aa0,param_2,lVar7 + 0x3f08,0);
        *(undefined1 *)(uVar1 + 0x4be8) = 1;
      }
      else {
        puVar15[6] = 0;
        *(undefined4 *)(puVar15 + 7) = 4;
        puVar15[8] = 0;
        *(undefined4 *)(puVar15 + 9) = 8;
        puVar15[10] = 0;
      }
      FUN_14725ccb4();
      FUN_140069376(param_2);
      puVar23 = local_140;
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3a;
      if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
        FUN_140023dd8(local_140,0x1d8);
        puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar16 + 0x3a;
      }
      *local_140 = (ulonglong)puVar15;
      uStack_e0 = DAT_14ca18a78;
      if (DAT_14ca18a78 != 0) {
        LOCK();
        *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
        UNLOCK();
      }
      local_d8 = &DAT_14ca18a30;
      local_168 = (undefined8 *)CONCAT71(local_168._1_7_,1);
      local_e8 = puVar9;
      FUN_140068f1a(puVar16,&local_e9);
      *puVar16 = &PTR_FUN_14a2996b0;
      puVar16[0x37] = local_150;
      puVar16[0x38] = puVar9;
      puVar16[0x39] = uVar1;
      iVar5 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar5 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar5 + 1U) {
        FUN_14470e57a(local_110,iVar5);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar5 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar16);
      puVar19 = puVar19 + 2;
    } while (puVar19 != local_130);
  }
  if (*(int *)(*(longlong *)(local_150 + 8) + 0x35e8) == 5) {
    local_108 = *local_118;
    uStack_104 = local_118[1];
    uStack_100 = local_118[2];
    uStack_fc = local_118[3];
    local_160 = 0;
    local_168 = (undefined8 *)((ulonglong)local_168 & 0xffffffff00000000);
    FUN_1430ca164(local_150,param_2,&local_108,local_120);
  }
  puVar19 = local_90;
  if (local_70 != (ulonglong *)0x0) {
    puVar19 = local_70;
  }
  if ((longlong)(int)local_68 != 0) {
    puVar21 = puVar19 + (longlong)(int)local_68 * 2;
    puVar23 = (ulonglong *)(param_2 + 0x70);
    local_140 = (ulonglong *)(param_2 + 0x98);
    local_138 = param_2 + 0x168;
    bVar10 = DAT_14c7609fc;
    local_130 = puVar23;
    do {
      if ((*(char *)((longlong)puVar19 + 0xd) == '\x01') && (((param_5 ^ 1) & bVar10) != 0)) {
        uVar1 = *puVar19;
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar9 = puVar15 + 0x40;
        if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
          FUN_140023dd8(puVar23,0x210);
          puVar15 = (undefined8 *)(*puVar23 + 0xf & 0xfffffffffffffff0);
          puVar9 = puVar15 + 0x40;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar9;
        *puVar15 = &PTR_FUN_14a2996a8;
        puVar9 = puVar15 + 2;
        FUN_14725cba6(puVar9);
        iVar5 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar5 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar5 + 1U) {
          FUN_1448cfae8(local_140,iVar5);
        }
        *(undefined8 **)(*local_140 + (longlong)iVar5 * 8) = puVar15;
        puVar15[0x38] = *(undefined8 *)(local_120 + 0x1c0);
        puVar15[0x39] = 0;
        *(undefined2 *)(puVar15 + 0x3a) = 0x101;
        *(undefined4 *)((longlong)puVar15 + 0x1d4) = 0x11;
        FUN_1448c58dc(uVar1,&local_e8);
        *(undefined4 *)(puVar15 + 4) = (undefined4)local_d8;
        *(undefined4 *)((longlong)puVar15 + 0x24) = local_d8._4_4_;
        *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_d0._4_4_;
        *(undefined4 *)puVar9 = (undefined4)local_e8;
        *(undefined4 *)((longlong)puVar15 + 0x14) = local_e8._4_4_;
        *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_e0._4_4_;
        puVar15[0x12] = local_128;
        *(char *)(puVar15 + 0x13) = local_151;
        *(uint *)((longlong)puVar15 + 0x9c) = CONCAT31(uStack_94,uStack_98._3_1_);
        *(undefined4 *)((longlong)puVar15 + 0x99) = uStack_98;
        iVar5 = 0;
        if (0 < (longlong)*(int *)(local_150 + 0x3f0)) {
          lVar7 = 0;
          iVar5 = 0;
          do {
            iVar5 = iVar5 + *(int *)(*(longlong *)(local_150 + 1000) + 0x136a8 + lVar7) +
                    *(int *)(*(longlong *)(local_150 + 1000) + 0x136d0 + lVar7);
            lVar7 = lVar7 + 0x13c10;
          } while ((longlong)*(int *)(local_150 + 0x3f0) * 0x13c10 - lVar7 != 0);
        }
        *(int *)(puVar15 + 0x3d) = iVar5;
        FUN_14725ccb4();
        FUN_140069376(param_2);
        puVar23 = local_130;
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar16 + 0x38;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(local_130,0x1c8);
          puVar16 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar16 + 0x38;
        }
        *puVar23 = (ulonglong)puVar15;
        uStack_e0 = DAT_14ca18a78;
        if (DAT_14ca18a78 != 0) {
          LOCK();
          *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
          UNLOCK();
        }
        local_d8 = &DAT_14ca18a30;
        local_168 = (undefined8 *)CONCAT71(local_168._1_7_,1);
        local_e8 = puVar9;
        FUN_140068f1a(puVar16,&local_e9,&local_e8,0x11);
        *puVar16 = &PTR_FUN_14a299790;
        puVar16[0x37] = local_150;
        iVar5 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar5 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar5 + 1U) {
          FUN_14470e57a(local_138,iVar5);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar5 * 8) = puVar16;
        *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar16);
        bVar10 = DAT_14c7609fc;
      }
      puVar19 = puVar19 + 2;
    } while (puVar19 != puVar21);
  }
  FUN_142fdd5d4(local_150,param_2);
  FUN_142e2a674(&local_70);
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142df7ef9 FUN_142df7ef9 body=239 status=ok
// SIG undefined FUN_142df7ef9(void)

void FUN_142df7ef9(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar1 = *param_1;
      if ((((*(byte *)(lVar1 + 0x125b0 + lVar5) & 2) == 0) &&
          (*(char *)(lVar1 + 0x30c8 + lVar5) == '\0')) &&
         (((*(char *)(lVar1 + 0x23f2 + lVar5) == '\0' &&
           (*(char *)(lVar1 + 0x23f5 + lVar5) != '\x01')) || (*(int *)(lVar1 + 0x1dd0 + lVar5) != 2)
          ))) {
        iVar2 = *(int *)(param_2 + 0x28);
        *(uint *)(param_2 + 0x28) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x2c) < iVar2 + 1U) {
          FUN_1472550f2(param_2,iVar2);
        }
        lVar3 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar3 = param_2;
        }
        lVar4 = (longlong)iVar2 * 0x10;
        *(longlong *)(lVar3 + lVar4) = lVar1 + lVar5;
        *(int *)(lVar3 + 8 + lVar4) = (int)lVar6;
        *(bool *)(lVar3 + 0xc + lVar4) = (longlong)iVar2 == 0;
        *(undefined1 *)(lVar3 + 0xd + lVar4) = 0;
        iVar2 = (int)param_1[1];
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x13c10;
    } while (lVar6 < iVar2);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar5 = param_2;
    }
    *(undefined1 *)(lVar5 + 0xd + (longlong)(*(int *)(param_2 + 0x28) + -1) * 0x10) = 1;
  }
  return;
}



// FUNCTION 142df7fe8 FUN_142df7fe8 body=25469 status=ok
// SIG undefined FUN_142df7fe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df7fe8(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong *puVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  DWORD DVar16;
  DWORD DVar17;
  undefined8 uVar18;
  longlong *plVar19;
  int *piVar20;
  longlong *plVar21;
  undefined8 **ppuVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong *puVar33;
  longlong *plVar34;
  ulonglong uVar35;
  undefined1 auVar36 [8];
  ulonglong unaff_RBP;
  undefined8 *puVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  undefined8 *puVar41;
  longlong lVar42;
  ulonglong *puVar43;
  longlong lVar44;
  uint uVar45;
  undefined8 *puVar46;
  ulonglong uVar47;
  bool bVar48;
  bool bVar49;
  undefined4 uVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar67 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar68 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auStack_608 [32];
  longlong **local_5e8;
  undefined8 **local_5e0;
  undefined8 **local_5d8;
  undefined8 **local_5d0;
  longlong *local_5c8;
  undefined8 local_5c0;
  longlong *local_5b8;
  ulonglong *local_5b0;
  longlong *local_5a8;
  ulonglong *local_5a0;
  longlong *local_598;
  ulonglong *local_590;
  ulonglong local_588;
  ulonglong *local_580;
  longlong *local_578;
  ulonglong *local_570;
  undefined8 **local_568;
  ulonglong *local_560;
  undefined8 **local_558;
  undefined8 **local_550;
  undefined8 **local_548;
  longlong local_540;
  undefined8 *local_538;
  longlong *local_530;
  undefined8 *local_528;
  undefined8 *local_520;
  longlong *local_518;
  longlong local_510;
  longlong local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined4 local_4f0;
  longlong local_4e8;
  undefined4 local_4e0;
  longlong local_4d8;
  undefined4 local_4d0;
  longlong local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8;
  undefined4 local_4a0;
  undefined8 *local_498;
  longlong lStack_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined4 local_440;
  ulonglong local_438;
  ulonglong uStack_430;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 *local_410;
  undefined4 local_408;
  undefined8 *local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  longlong local_3e0;
  undefined4 local_3d8;
  undefined8 *local_3d0;
  longlong local_3c8;
  undefined4 local_3c0;
  longlong *local_3b8;
  ulonglong uStack_3b0;
  undefined1 local_399;
  ulonglong local_398;
  ulonglong uStack_390;
  undefined8 local_388;
  ulonglong uStack_380;
  undefined4 local_372;
  undefined3 uStack_36e;
  undefined2 local_36b;
  undefined1 local_369;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined *local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong local_338;
  undefined8 uStack_330;
  undefined8 local_268;
  int iStack_260;
  int iStack_25c;
  undefined *local_258;
  undefined8 uStack_250;
  undefined8 *local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  ulonglong uStack_220;
  undefined1 auStack_20a [2];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 auStack_1b8 [8];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  undefined2 uStack_126;
  int iStack_124;
  undefined1 auStack_110 [4];
  undefined1 local_10c;
  undefined1 auStack_f8 [8];
  ulonglong local_f0;
  undefined1 auStack_e0 [8];
  undefined1 auStack_80 [8];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_608;
  if ((*(byte *)((longlong)param_1 + 0xf2) & 0x40) == 0) goto LAB_142df807b;
  local_558 = (undefined8 **)(param_1 + 0x13);
  if (*(char *)(param_1[0x7d] + 0x23e8) == '\x01') {
    iVar12 = *(int *)((longlong)param_1 + 0x16c);
    if (iVar12 == 4) {
      local_588 = CONCAT44(local_588._4_4_,1);
      if (DAT_14ca46038 == 0) goto LAB_142df812a;
    }
    else {
      if ((iVar12 != 5) || (DAT_14ca46038 == 0)) {
        if (((iVar12 == 7) || (iVar12 == 6)) &&
           ((DAT_14ca46050 != 0 &&
            (cVar7 = FUN_144b1cd87(*(undefined2 *)
                                    (&DAT_14ca85070 + (longlong)*(int *)(param_1[1] + 8) * 2)),
            cVar7 == '\0')))) {
          FUN_142bb1437(local_558);
        }
        goto LAB_142df812a;
      }
      local_588 = CONCAT44(local_588._4_4_,1);
    }
  }
  else {
LAB_142df812a:
    local_588 = local_588 & 0xffffffff00000000;
  }
  local_5c8 = param_2;
  local_5a8 = (longlong *)FUN_1403c665e(param_1,param_2);
  local_3b8 = (longlong *)0x0;
  uStack_3b0 = 0;
  local_5b8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca12ba0) && (FUN_144b3d300(&DAT_14ca12ba0), DAT_14ca12ba0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca12b98 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DFShadowQuality",1);
    _Init_thread_footer(&DAT_14ca12ba0);
    param_1 = local_5b8;
  }
  plVar21 = param_1 + 0x7d;
  cVar7 = FUN_1474306c8((short)param_1[0x115]);
  local_598 = plVar21;
  if (((((cVar7 != '\0') && ((*(byte *)((longlong)param_1 + 0xed) & 0x80) != 0)) &&
       (*(char *)(*plVar21 + 0x23eb) == '\0')) &&
      ((*(char *)(*plVar21 + 0x23ec) == '\0' && (DAT_14ca12b98 != (longlong *)0x0)))) &&
     (iVar12 = (**(code **)(*DAT_14ca12b98 + 0xb0))(), (~(byte)local_588 & 0 < iVar12) != 0)) {
    FUN_142bd898e(param_1,local_5c8,&local_3b8);
    if ((longlong)(int)uStack_3b0 != 0) {
      plVar28 = local_3b8 + (longlong)(int)uStack_3b0 * 2;
      plVar19 = local_5c8 + 0xb3;
      plVar29 = local_3b8;
      do {
        bVar8 = 1;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14ca84e6a == '\x01' &&
            (bVar8 = *(byte *)((longlong)plVar29 + 0xc) & 3, DAT_14ca84e99 != '\0')))) {
          bVar8 = 1;
        }
        lVar38 = *plVar29;
        if ((*(byte *)(lVar38 + 0x20) & 0xc) == 0) {
          uVar15 = *(uint *)(plVar29 + 1);
          unaff_RBP = (ulonglong)uVar15;
          if ((*(byte *)(lVar38 + 0x20) & 0x10) != 0) {
            FUN_140069376(local_5c8);
          }
          iVar12 = (int)local_5c8[0xb4];
          *(uint *)(local_5c8 + 0xb4) = iVar12 + 1U;
          if (*(uint *)((longlong)local_5c8 + 0x5a4) < iVar12 + 1U) {
            FUN_1400f155a(plVar19,iVar12);
          }
          *(longlong *)(*plVar19 + (longlong)iVar12 * 8) = lVar38;
          *(uint *)(lVar38 + 0x1c) = uVar15;
          *(byte *)(lVar38 + 0x20) = bVar8 | *(byte *)(lVar38 + 0x20) & 0xe8 | 0x14;
          *(uint *)(lVar38 + 0x58) = uVar15;
        }
        plVar29 = plVar29 + 2;
        plVar21 = local_598;
      } while (plVar29 != plVar28);
    }
  }
  uVar27 = uStack_3b0 >> 0x20;
  uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
  if ((int)uVar27 != 0) {
    FUN_1400f146c(&local_3b8,0);
  }
  plVar19 = local_5c8;
  FUN_14071c710(&DAT_14ca8cb58,local_5c8);
  local_508 = param_1[1];
  FUN_141763a12(local_508 + 0x3f08,plVar19,param_1 + 0x123);
  if ((char)local_588 == '\0') {
    plVar29 = (longlong *)param_1[1];
    if (((plVar29 != (longlong *)0x0) && (plVar29[0x9a4] != 0)) &&
       ((*(byte *)((longlong)param_1 + 0xf2) & 2) != 0)) {
      if (*(code **)(*plVar29 + 0x2c0) != (code *)&LAB_1447ccd94) {
        (**(code **)(*plVar29 + 0x2c0))();
      }
      if ((DAT_14c760dd5 == '\x01') && (0 < *(int *)(DAT_14ca5c7b8 + 4))) {
        lVar38 = 0;
        bVar48 = true;
        do {
          bVar49 = bVar48;
          lVar40 = ((longlong *)param_1[1])[lVar38 + 0x6d7];
          if (lVar40 != 0) {
            uVar18 = (**(code **)(*(longlong *)param_1[1] + 0x2c8))();
            FUN_1402a6b45(uVar18,lVar38,lVar40);
          }
          lVar38 = 1;
          bVar48 = false;
        } while (bVar49);
        goto LAB_142df82e5;
      }
    }
    FUN_141782ff6(param_1[1]);
  }
LAB_142df82e5:
  FUN_140976f04(&DAT_14ca63b10,plVar19[3],*(undefined4 *)((longlong)param_1 + 0x8a4));
  FUN_1400510f2(plVar19);
  local_3c8 = param_1[0x7d];
  local_3c0 = (undefined4)param_1[0x7e];
  FUN_1405ef26f(plVar19);
  local_3d0 = (undefined8 *)0x0;
  if (*(char *)((longlong)param_1 + 0xd43) == '\x01') {
    FUN_1400dcde2(&local_1f8);
    if (*(char *)((longlong)param_1 + 0x1b2) == '\x01') {
      uStack_1e4 = 99999;
      uStack_1e0 = 99999;
      uStack_1dc = 99999;
    }
    local_5e8 = (longlong **)param_1[1];
    local_5e0 = (undefined8 **)&local_1f8;
    FUN_14312b36a(DAT_14ca712d8,&local_368,plVar19,*(undefined4 *)((longlong)param_1 + 0x8a4));
    puVar30 = local_3d0;
    local_3d0 = local_368;
    local_368 = (undefined8 *)0x0;
    FUN_144aaabd0(&local_3d0,puVar30);
    FUN_144aaabd0(&local_368,local_368);
    local_3e0 = param_1[0x7d];
    local_3d8 = (undefined4)param_1[0x7e];
    FUN_1403cd145(plVar19,&local_3e0,param_1[0x4c]);
  }
  lVar38 = DAT_14ca97170;
  local_590 = *(ulonglong **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar12 = (int)local_590[0x18c];
  if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
    uVar27 = 0;
  }
  else if (iVar12 == 1) {
    DVar16 = FUN_140ad26c0();
    DVar17 = GetCurrentThreadId();
    uVar27 = (ulonglong)(DVar16 != DVar17);
  }
  else {
    uVar27 = 1;
  }
  if ((0 < *(int *)(lVar38 + uVar27 * 4)) && ((longlong)(int)param_1[0x7e] != 0)) {
    lVar38 = param_1[0x7d];
    lVar40 = (longlong)(int)param_1[0x7e] * 0x13c10;
    do {
      FUN_143040abb(plVar19,lVar38);
      FUN_143099e32(plVar19,lVar38);
      lVar38 = lVar38 + 0x13c10;
      lVar40 = lVar40 + -0x13c10;
    } while (lVar40 != 0);
  }
  FUN_140795537(plVar19,param_1);
  if ((char)local_588 == '\0') {
    FUN_140803a51(plVar19,(short)param_1[0x115]);
    FUN_14081e1fa(&DAT_14cb016c8,plVar19,(short)param_1[0x115]);
    if (*(char *)((longlong)param_1 + 0xd41) == '\x01') {
      FUN_142f8052b(plVar19,*(undefined4 *)((longlong)param_1 + 0x8a4));
    }
    FUN_141764deb(plVar19,(short)param_1[0x115]);
    uVar13 = FUN_14005b4aa((short)param_1[0x115]);
    if (((int)DAT_14ca69230 < 0) ||
       (lVar38 = param_1[1], *(int *)(lVar38 + 0x5330) <= (int)DAT_14ca69230)) {
LAB_142dfe24a:
      uVar18 = 0;
    }
    else {
      lVar40 = lVar38 + 0x5318;
      if (*(longlong *)(lVar38 + 0x5328) != 0) {
        lVar40 = *(longlong *)(lVar38 + 0x5328);
      }
      if ((*(uint *)(lVar40 + (ulonglong)(DAT_14ca69230 >> 5) * 4) >> (DAT_14ca69230 & 0x1f) & 1) ==
          0) goto LAB_142dfe24a;
      uVar18 = *(undefined8 *)(*(longlong *)(lVar38 + 0x5308) + (ulonglong)DAT_14ca69230 * 8);
    }
    local_5e8 = (longlong **)(param_1 + 0x1c);
    FUN_1430cd558(param_1 + 0xb6,plVar19,uVar18,uVar13);
  }
  uVar10 = *(undefined1 *)(param_1[1] + 0x4284);
  local_550 = (undefined8 **)(param_1 + 2);
  puVar33 = (ulonglong *)(plVar19 + 0xe);
  puVar41 = (undefined8 *)(plVar19[0xe] + 0xfU & 0xfffffffffffffff0);
  puVar30 = puVar41 + 0xe;
  local_5b0 = puVar33;
  if ((undefined8 *)plVar19[0xf] < puVar30) {
    FUN_140023dd8(puVar33,0x80);
    puVar41 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    puVar30 = puVar41 + 0xe;
  }
  plVar19[0xe] = (longlong)puVar30;
  *puVar41 = &PTR_FUN_14a202e40;
  puVar41[1] = 0;
  *(undefined4 *)(puVar41 + 2) = 0;
  puVar41[4] = 0;
  *(undefined1 *)(puVar41 + 5) = 0;
  puVar41[6] = 0;
  puVar41[7] = 0;
  puVar41[8] = 0;
  puVar41[9] = local_550;
  *(undefined4 *)(puVar41 + 10) = 0;
  puVar41[0xb] = 0;
  puVar41[0xc] = 0;
  *(undefined1 *)(puVar41 + 0xd) = uVar10;
  plVar28 = plVar19;
  uVar18 = FUN_1403e6538(plVar19);
  puVar41[3] = uVar18;
  plVar29 = plVar19 + 0x13;
  iVar12 = (int)plVar19[0x14];
  *(uint *)(plVar19 + 0x14) = iVar12 + 1U;
  local_578 = plVar29;
  if (*(uint *)((longlong)plVar19 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(plVar29,iVar12);
    plVar28 = plVar29;
  }
  puVar30 = local_3d0;
  *(undefined8 **)(plVar19[0x13] + (longlong)iVar12 * 8) = puVar41;
  local_5a0 = (ulonglong *)plVar19[3];
  local_5c0 = (ulonglong *)
              CONCAT44(local_5c0._4_4_,(int)CONCAT71((int7)((ulonglong)plVar28 >> 8),1));
  if (*(char *)(*plVar21 + 0x23e8) == '\x01') {
    iVar12 = *(int *)((longlong)param_1 + 0x16c);
    if (iVar12 == 4) {
      if (DAT_14ca46038 != 0) goto LAB_142dfe32d;
    }
    else if ((iVar12 == 5) && (DAT_14ca46038 != 0)) {
LAB_142dfe32d:
      local_5c0 = (ulonglong *)((ulonglong)local_5c0._4_4_ << 0x20);
    }
    else if (((iVar12 == 7) || (iVar12 == 6)) &&
            ((DAT_14ca46050 != 0 &&
             (cVar7 = FUN_144b1cd87(*(undefined2 *)
                                     (&DAT_14ca85070 + (longlong)*(int *)(param_1[1] + 8) * 2)),
             cVar7 == '\0')))) {
      FUN_142bb1437(local_558);
    }
  }
  local_568 = (undefined8 **)(puVar41 + 1);
  FUN_143013602(param_1,plVar19);
  if (((*(char *)(puVar41 + 0xd) == '\x01') &&
      (plVar29 = *(longlong **)(param_1[1] + 0x5358), plVar29 != (longlong *)0x0)) &&
     (*plVar29 != 0)) {
    uVar18 = FUN_144735dd8(plVar19,plVar29,0);
    puVar41[4] = uVar18;
    *(undefined1 *)(puVar41 + 5) = *(undefined1 *)(*(longlong *)(param_1[1] + 0x5358) + 8);
  }
  FUN_140171dce(local_568,(int)param_1[0x7e]);
  if ((longlong)(int)param_1[0x7e] != 0) {
    lVar38 = param_1[0x7d];
    lVar40 = (longlong)(int)param_1[0x7e] * 0x13c10 + lVar38;
    do {
      uVar13 = FUN_1402afc0e(local_568,lVar38);
      *(undefined4 *)(lVar38 + 0x13b84) = uVar13;
      iVar12 = 1;
      if (((*(char *)(lVar38 + 0x23f2) == '\x01') && (*(int *)(lVar38 + 0x1dd0) != 0)) &&
         (plVar29 = *(longlong **)(DAT_14cb0d2b0 + 0xfd0), plVar29 != (longlong *)0x0)) {
        iVar12 = (**(code **)(*plVar29 + 0x20))(plVar29,1);
      }
      *(uint *)(lVar38 + 0x3094) = iVar12 + (uint)(iVar12 == 0);
      lVar38 = lVar38 + 0x13c10;
    } while (lVar38 != lVar40);
  }
  local_228 = 0;
  if ((((longlong *)param_1[0x121] != (longlong *)0x0) &&
      (cVar7 = (**(code **)(*(longlong *)param_1[0x121] + 0x78))(), cVar7 != '\0')) &&
     ((char)local_5c0 == '\x01' && 0 < (int)param_1[0x7e])) {
    lVar38 = *plVar21;
    if ((((*(char *)(lVar38 + 0x23f4) != '\0') || (*(char *)(lVar38 + 0x23f5) == '\x01')) &&
        (*(int *)(lVar38 + 0x1dd0) != 0)) && (lVar40 = *(longlong *)(lVar38 + 8), lVar40 != 0)) {
      iVar12 = *(int *)(lVar38 + 0x1dd8);
      if ((-2 < (longlong)iVar12) && (iVar12 + 1 < *(int *)(lVar40 + 0x10))) {
        lVar38 = *(longlong *)(*(longlong *)(lVar40 + 8) + 8 + (longlong)iVar12 * 8);
        cVar7 = FUN_144b2acc6(lVar38);
        if (lVar38 != 0 && cVar7 == '\x01') {
          FUN_1400eb35c(lVar38,0);
        }
      }
    }
    FUN_1400eb35c(param_1[0x7d],0);
    local_1f8 = (undefined8 *)param_1[0x7d];
    uStack_1f0 = CONCAT44((int)param_1[0x7e],0x13c10);
    (**(code **)(*(longlong *)param_1[0x121] + 0x60))
              ((longlong *)param_1[0x121],plVar19,&local_1f8,1);
  }
  plVar19 = local_5a8;
  (**(code **)(*local_5a8 + 0x10))(local_5a8);
  (**(code **)(*plVar19 + 0x18))(plVar19,0x22,local_568,puVar30);
  bVar8 = FUN_141786b06(param_1);
  if ((bVar8 & (byte)local_5c0) == 1) {
    FUN_140551a2a(param_1);
  }
  FUN_143015bf6(param_1,&local_228);
  (**(code **)(*(longlong *)param_1[0x19] + 0x28))();
  plVar19 = (longlong *)(**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  if (*plVar19 == 0) {
    cVar7 = '\0';
  }
  else {
    puVar30 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x19] + 0x10))();
    plVar19 = (longlong *)*puVar30;
    lVar38 = (**(code **)(*plVar19 + 8))(plVar19);
    uVar13 = *(undefined4 *)(lVar38 + 0x28);
    lVar38 = (**(code **)(*plVar19 + 8))(plVar19);
    local_388 = CONCAT44(uVar13,*(undefined4 *)(lVar38 + 0x24));
    puVar30 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x19] + 0x10))();
    lVar38 = (**(code **)(*(longlong *)*puVar30 + 8))();
    cVar7 = *(char *)(lVar38 + 0x33);
  }
  piVar20 = &DAT_14c760db4;
  if (param_1[0x1b] != 0) {
    piVar20 = (int *)(param_1[0x1b] + 8);
  }
  if (((int)param_1[0x11a] < (int)local_388) ||
     (*(int *)((longlong)param_1 + 0x8d4) < local_388._4_4_)) {
    bVar8 = 1 < *piVar20 | DAT_14c760e14;
  }
  else {
    bVar8 = 0;
  }
  cVar9 = FUN_142fe7364(param_1[0x7d]);
  uVar10 = 1;
  if (((((cVar9 == '\0') && ((bVar8 & 1) == 0)) && ((char)param_1[0x1a8] != '\0')) &&
      ((((*(uint *)(param_1 + 0x1e) & 0x3000000) != 0x3000000 &&
        (*(char *)(*plVar21 + 0x23e8) == '\0')) && (*(char *)(*plVar21 + 0x23eb) == '\0')))) &&
     (((int)param_1[0x1a9] < 2 ||
      (((*(longlong *)(&DAT_14ca814b0 + (ulonglong)*(ushort *)(param_1 + 0x115) * 0x3c) !=
         DAT_14ca838f8 ||
        ((*(byte *)(&DAT_14ca814c8 + (ulonglong)*(ushort *)(param_1 + 0x115) * 0xf) & 1) == 0)) &&
       ((cVar7 == '\0' || (cVar7 == *(char *)((longlong)param_1 + 0x27c))))))))) {
    uVar10 = *(undefined1 *)((longlong)param_1 + 0xd56);
  }
  *(undefined1 *)((longlong)param_1 + 0xd4c) = uVar10;
  bVar48 = *(int *)((longlong)param_1 + 0x16c) - 3U < 3;
  if ((longlong)(int)param_1[0x82] != 0) {
    lVar38 = 0;
    do {
      lVar40 = *(longlong *)(*(longlong *)(param_1[0x81] + lVar38) + 0x23e0);
      if ((lVar40 != 0) && (*(uint *)(lVar40 + 0x1c) < 3)) {
        bVar48 = true;
        break;
      }
      lVar38 = lVar38 + 8;
    } while ((longlong)(int)param_1[0x82] * 8 != lVar38);
  }
  lVar38 = param_1[1];
  local_580 = (ulonglong *)CONCAT71(local_580._1_7_,cVar9);
  if ((lVar38 == 0) || (*(int *)(lVar38 + 0x3720) < 1)) {
    puVar33 = (ulonglong *)0x0;
  }
  else {
    puVar33 = (ulonglong *)**(undefined8 **)(lVar38 + 0x3718);
  }
  cVar7 = FUN_14583c036((short)param_1[0x115]);
  if ((((cVar7 == '\0') || (iVar12 = FUN_147cee408(), puVar33 == (ulonglong *)0x0 || iVar12 < 1)) ||
      (puVar33[0x4b] == 0)) || (*(char *)(*local_598 + 0x23eb) != '\0')) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)((longlong)param_1 + 0xed) >> 7 & (byte)local_5c0;
  }
  *(byte *)((longlong)param_1 + 0xd51) = bVar8;
  cVar7 = FUN_147289d74((short)param_1[0x115]);
  if ((((cVar7 == '\0') || (lVar38 = *local_598, *(float *)(lVar38 + 0x2af0) <= 0.0)) ||
      ((*(float *)(lVar38 + 0x2af4) < 0.01 &&
       (((param_1[1] == 0 || (lVar40 = *(longlong *)(param_1[1] + 0x3608), lVar40 == 0)) ||
        ((*(longlong *)(lVar40 + 8) == 0 ||
         ((*(byte *)(*(longlong *)(lVar38 + 8) + 0x5b) & 0x20) == 0)))))))) ||
     (((*(byte *)((longlong)param_1 + 0xed) & 0x80) == 0 || (*(char *)(lVar38 + 0x23eb) != '\0'))))
  {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(byte *)(lVar38 + 0x23ec) ^ 1) & (byte)local_5c0;
  }
  *(byte *)((longlong)param_1 + 0xd52) = bVar8;
  uVar10 = (**(code **)(*param_1 + 0x38))(param_1);
  *(undefined1 *)((longlong)param_1 + 0xd53) = uVar10;
  cVar7 = FUN_14743086d();
  if (cVar7 == '\0') {
    local_368 = (longlong *)*local_598;
LAB_142df8b55:
    bVar8 = 0;
  }
  else {
    local_368 = (longlong *)param_1[0x7d];
    if (((*(byte *)((longlong)param_1 + 0xed) & 0x80) == 0) ||
       (*(char *)((longlong)local_368 + 0x23eb) != '\0')) goto LAB_142df8b55;
    bVar8 = (*(byte *)((longlong)local_368 + 0x23ec) ^ 1) & (byte)local_5c0;
  }
  *(byte *)((longlong)param_1 + 0xd5b) = bVar8;
  uStack_360 = CONCAT44(uStack_360._4_4_,(int)param_1[0x7e]);
  bVar8 = FUN_14724ee92(param_1);
  *(byte *)((longlong)param_1 + 0xd54) = bVar8 & (byte)local_5c0;
  uVar27 = (ulonglong)(int)param_1[0x7e];
  lVar38 = param_1[0x7d];
  if ((longlong)uVar27 < 1) {
    bVar49 = false;
  }
  else {
    bVar49 = true;
    if (*(int *)(lVar38 + 0x815c) < 1) {
      piVar20 = (int *)(lVar38 + 0x1bd6c);
      uVar47 = 0;
      do {
        uVar32 = uVar27;
        if (uVar27 - 1 == uVar47) break;
        uVar32 = uVar47 + 1;
        iVar12 = *piVar20;
        piVar20 = piVar20 + 0x4f04;
        uVar47 = uVar32;
      } while (iVar12 < 1);
      bVar49 = uVar32 < uVar27;
    }
  }
  iVar12 = *(int *)(DAT_14ca12b48 + 4);
  auVar65 = ZEXT816(0);
  local_570 = puVar33;
  if (((*(float *)(lVar38 + 0x2b6c) <= 0.0) ||
      (bVar8 = 1, (*(byte *)(*(longlong *)(lVar38 + 8) + 0x4d) & 8) == 0)) &&
     (bVar8 = 1, *(char *)(lVar38 + 0x13810) == '\0')) {
    unaff_RBP = 0;
    do {
      do {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca19610) &&
           (FUN_144b3d300(&DAT_14ca19610), DAT_14ca19610 == -1)) {
          FUN_1446f470e(&DAT_14ca19608,L"FPostProcessMaterialNode",1);
          _Init_thread_footer(&DAT_14ca19610);
        }
        do {
          if (unaff_RBP == 0) {
            uVar27 = *(ulonglong *)(lVar38 + 0x2fd8);
            unaff_RBP = uVar27;
          }
          else {
            unaff_RBP = (ulonglong)*(uint *)(unaff_RBP + 0xc) +
                        *(uint *)(unaff_RBP + 0x10) + unaff_RBP + 0x14;
            uVar27 = *(ulonglong *)(lVar38 + 0x2fd8);
          }
          if ((unaff_RBP == 0) || (unaff_RBP == uVar27 + (longlong)*(int *)(lVar38 + 0x2fe0)))
          goto LAB_142df8d22;
        } while (*(longlong *)(unaff_RBP + 4) != DAT_14ca19608);
        plVar21 = (longlong *)(*(uint *)(unaff_RBP + 0x10) + unaff_RBP + 0x14);
        if (plVar21 == (longlong *)0x0) {
LAB_142df8d22:
          bVar8 = FUN_14724d5af(*local_598);
          goto LAB_142df8d31;
        }
        plVar21 = (longlong *)*plVar21;
      } while (plVar21 == (longlong *)0x0);
      uVar18 = (**(code **)(*plVar21 + 0x2f0))();
      lVar40 = FUN_14485b2b4(uVar18,*(undefined4 *)(lVar38 + 0x3090));
      bVar8 = 1;
    } while ((*(byte *)(*(longlong *)(*(longlong *)(lVar40 + 0x18) + 0x28) + 0x238) & 2) == 0);
  }
LAB_142df8d31:
  if ((int)param_1[0x7e] < 2) {
    uVar27 = 0;
  }
  else {
    uVar27 = CONCAT71((int7)(unaff_RBP >> 8),*(undefined1 *)(*local_598 + 0x23f5)) ^ 1;
  }
  uVar1 = *(ushort *)(param_1 + 0x115);
  iVar14 = (int)param_1[0x1a9];
  bVar11 = FUN_14724efc6(iVar14,(ulonglong)uVar1);
  *(byte *)((longlong)param_1 + 0xd4d) = bVar11;
  cVar7 = '\x01';
  if (((((iVar12 != 1 && bVar11 == 0) && (!bVar49 && *(char *)((longlong)param_1 + 0xd51) == '\0'))
       && (*(char *)(*local_598 + 0x23eb) == '\0')) &&
      ((*(char *)((longlong)param_1 + 0xd41) != '\x01' || ((bVar8 & 1) == 0 && !bVar48)))) &&
     ((*(int *)(*local_598 + 0x3020) != 2 && (uVar27 & 1) == 0 &&
      (*(char *)((longlong)param_1 + 0xd56) == '\0')))) {
    cVar7 = *(char *)((longlong)param_1 + 0xd54);
  }
  if ((1 < iVar14) && ((char)param_1[0x1ab] != '\0')) {
    cVar7 = '\0';
  }
  if ((byte)local_580 != 0) {
    cVar7 = '\x01';
  }
  *(char *)((longlong)param_1 + 0xd4e) = cVar7;
  if (*(char *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) < '\0') {
    cVar7 = '\x01';
  }
  *(char *)((longlong)param_1 + 0xd4e) = cVar7;
  *(uint *)(param_1 + 0x79) =
       ((byte)~(bVar11 | (byte)local_580 | (byte)uVar27) & 1) << 7 |
       *(uint *)(param_1 + 0x79) & 0xffffff7b | (uint)(byte)(cVar7 << 2);
  *(int *)((longlong)param_1 + 0x274) = iVar14;
  param_1[0x52] = param_1[0x52] | (ulonglong)*(byte *)((longlong)param_1 + 0xd46) << 9;
  local_580 = (ulonglong *)(param_1 + 0x4a);
  FUN_1400529a8();
  if (*(char *)((longlong)param_1 + 0xd41) == '\x01') {
    FUN_1436a25d1(param_1 + 0x5d,
                  CONCAT71((int7)(uVar27 >> 8),(byte)uVar27 | *(byte *)((longlong)param_1 + 0xd4d))
                  & 0xffffff01);
  }
  ppuVar22 = DAT_14c967818;
  if (*(char *)((longlong)param_1 + 0xd51) == '\x01') {
    (**(code **)(*(longlong *)(local_570[0x4b] + 0x48) + 0x28))(local_570[0x4b] + 0x48,&local_268);
    ppuVar22 = (undefined8 **)CONCAT44(local_268._4_4_,(uint)local_268);
  }
  param_1[0x4d] = (longlong)ppuVar22;
  uVar15 = (*(uint *)(param_1 + 0x79) & 0xfffffff7) + (uint)*(byte *)(param_1 + 0x1ab) * 8;
  uVar45 = uVar15 | 0x10;
  if (!bVar48) {
    uVar45 = uVar15;
  }
  *(uint *)(param_1 + 0x79) = uVar45;
  bVar48 = true;
  if (*(longlong *)(param_1[1] + 0x10) != 0) {
    cVar7 = *(char *)(*(longlong *)(param_1[1] + 0x10) + 0x152);
    bVar48 = cVar7 != '\a' && cVar7 != '\x04';
  }
  puVar33 = local_590 + 0x18c;
  local_560 = puVar33;
  if (0 < (int)param_1[0x7e]) {
    lVar38 = param_1[0x7d];
    lVar40 = 0;
    do {
      lVar39 = DAT_14ca12b78;
      lVar42 = lVar40 * 0x13c10;
      if ((*(char *)(lVar38 + 0x36cd + lVar42) == '\0') && (DAT_14c761ae8 != 3)) {
        uVar15 = 0;
        bVar11 = 0;
      }
      else {
        iVar12 = (int)*puVar33;
        if (iVar12 == 0x40000002) {
          uVar27 = 0;
        }
        else {
          bVar49 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
            if (iVar12 == 1) {
              DVar16 = FUN_140ad26c0();
              DVar17 = GetCurrentThreadId();
              bVar49 = DVar16 == DVar17;
              puVar33 = local_560;
            }
            else {
              bVar49 = false;
            }
          }
          uVar27 = (ulonglong)(bVar49 ^ 1);
        }
        lVar38 = lVar38 + lVar42;
        if (*(int *)(lVar39 + uVar27 * 4) == 0) {
          uVar15 = 0;
          bVar8 = 0;
        }
        else {
          uVar45 = *(uint *)(lVar38 + 0x125b0) >> 0xb;
          bVar8 = (byte)uVar45 & 1;
          uVar45 = uVar45 & 1;
          uVar15 = 1;
          if ((*(uint *)(lVar38 + 0x125b0) >> 10 & 1) == 0) {
            uVar15 = uVar45;
          }
          bVar11 = bVar8;
          if ((char)uVar45 != '\0') goto LAB_142df9180;
        }
        lVar39 = 0;
        iVar12 = DAT_14ca19610;
        do {
          do {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < iVar12) &&
               (FUN_144b3d300(&DAT_14ca19610), puVar33 = local_560, iVar12 = DAT_14ca19610,
               DAT_14ca19610 == -1)) {
              FUN_1446f470e(&DAT_14ca19608,L"FPostProcessMaterialNode",1);
              _Init_thread_footer(&DAT_14ca19610);
              puVar33 = local_560;
              iVar12 = DAT_14ca19610;
            }
            do {
              if (lVar39 == 0) {
                lVar39 = *(longlong *)(lVar38 + 0x2fd8);
                lVar44 = lVar39;
              }
              else {
                lVar39 = (ulonglong)*(uint *)(lVar39 + 0xc) +
                         (ulonglong)*(uint *)(lVar39 + 0x10) + lVar39 + 0x14;
                lVar44 = *(longlong *)(lVar38 + 0x2fd8);
              }
              bVar11 = bVar8;
              if ((lVar39 == 0) || (lVar39 == lVar44 + *(int *)(lVar38 + 0x2fe0)))
              goto LAB_142df9180;
            } while (*(longlong *)(lVar39 + 4) != DAT_14ca19608);
            plVar21 = (longlong *)((ulonglong)*(uint *)(lVar39 + 0x10) + lVar39 + 0x14);
            if (plVar21 == (longlong *)0x0) goto LAB_142df9180;
            plVar21 = (longlong *)*plVar21;
          } while (plVar21 == (longlong *)0x0);
          uVar18 = (**(code **)(*plVar21 + 0x2f0))();
          plVar21 = (longlong *)FUN_14485b2b4(uVar18,*(undefined4 *)(lVar38 + 0x3090));
          local_590 = *(ulonglong **)(*(longlong *)(plVar21[3] + 0x28) + 0x238);
          cVar7 = (**(code **)(*plVar21 + 0x430))(plVar21);
          if (cVar7 != '\0') {
            uVar15 = 1;
          }
          if (((ulonglong)local_590 & 0x2002000) != 0) {
            uVar15 = 1;
          }
          bVar11 = 1;
          puVar33 = local_560;
          iVar12 = DAT_14ca19610;
        } while (((uint)local_590 >> 0x19 & 1) == 0);
      }
LAB_142df9180:
      uVar15 = uVar15 << 9;
      if (!bVar48) {
        uVar15 = 0;
      }
      *(uint *)(param_1[0x7d] + 0x125b0 + lVar42) =
           *(uint *)(param_1[0x7d] + 0x125b0 + lVar42) & 0xfffffdff | uVar15;
      lVar38 = param_1[0x7d];
      uVar45 = (uint)*(byte *)(param_1 + 0x1aa) | *(uint *)(lVar38 + 0x125b0 + lVar42) >> 9 & 1;
      uVar15 = (uint)(byte)(bVar11 << 6);
      if (uVar45 == 0) {
        uVar15 = 0;
      }
      *(char *)(param_1 + 0x1aa) = (char)uVar45;
      *(uint *)(param_1 + 0x79) = *(uint *)(param_1 + 0x79) | uVar15;
      lVar40 = lVar40 + 1;
    } while (lVar40 < (int)param_1[0x7e]);
  }
  memcpy(&DAT_14cb05410,local_580,0x188);
  plVar19 = local_598;
  plVar21 = local_5c8;
  if ((byte)local_5c0 != '\0') {
    plVar29 = (longlong *)param_1[1];
    if (((plVar29 != (longlong *)0x0) && (plVar29[0x9a4] != 0)) &&
       ((*(byte *)((longlong)param_1 + 0xf2) & 2) != 0)) {
      if (*(code **)(*plVar29 + 0x2c0) != (code *)&LAB_1447ccd94) {
        (**(code **)(*plVar29 + 0x2c0))();
      }
      if ((DAT_14c760dd5 == '\x01') && (0 < *(int *)(DAT_14ca5c7b8 + 4))) {
        FUN_14024332a(param_1,local_5a0,plVar21);
      }
    }
    plVar29 = DAT_14ca5b018;
    if (*(char *)((longlong)param_1 + 0xd5b) == '\x01') {
      if ((int)param_1[0x7e] < 1) {
        bVar8 = *(byte *)(param_1 + 0x79) & 1;
      }
      else {
        bVar8 = 1;
        if ((*(byte *)(param_1 + 0x79) & 1) == 0) {
          if (param_1[0x7d] == 0) {
            bVar8 = 0;
          }
          else {
            bVar8 = (*(byte *)(param_1[0x7d] + 0x3099) & 2) >> 1;
          }
        }
      }
      FUN_1472f4985(local_5a0,param_1 + 0x4c,bVar8);
    }
    else if (DAT_14ca5b018 != (longlong *)0x0) {
      DAT_14ca5b018 = (longlong *)0x0;
      (**(code **)(*plVar29 + 0x38))();
    }
  }
  local_268._0_4_ = 0;
  local_268._4_4_ = 0;
  iStack_260 = 0;
  iStack_25c = 0;
  lVar38 = (longlong)(int)param_1[0x7e];
  if (0 < lVar38) {
    lVar40 = lVar38 * 0x13c10;
    uVar27 = lVar38 + 1;
    do {
      lVar40 = lVar40 + -0x13c10;
      lVar38 = *plVar19;
      FUN_142ebc2f0(lVar38 + lVar40);
      FUN_1400eb35c(lVar38 + lVar40,0);
      uVar27 = uVar27 - 1;
    } while (1 < uVar27);
  }
  ppuVar22 = local_550;
  iVar12 = (int)param_1[0x80];
  if (0 < iVar12) {
    lVar38 = 0;
    do {
      lVar40 = (longlong)*(int *)(param_1[0x7f] + 0x360 + lVar38 * 0x3c0);
      if (lVar40 != 0) {
        lVar39 = *(longlong *)(param_1[0x7f] + 0x358 + lVar38 * 0x3c0);
        lVar40 = lVar40 * 0x13c10;
        do {
          FUN_1400eb35c(lVar39,0);
          lVar39 = lVar39 + 0x13c10;
          lVar40 = lVar40 + -0x13c10;
        } while (lVar40 != 0);
        iVar12 = (int)param_1[0x80];
      }
      lVar38 = lVar38 + 1;
    } while (lVar38 < iVar12);
  }
  if (0 < (int)param_1[0x82]) {
    lVar38 = 0;
    do {
      local_5e8 = (undefined8 **)0x0;
      FUN_14482edda(param_1[1] + 0x3f08,plVar21,*(undefined8 *)(param_1[0x81] + lVar38 * 8),0);
      FUN_142c3197e(param_1[1] + 0x3f08,plVar21,ppuVar22);
      lVar38 = lVar38 + 1;
    } while (lVar38 < (int)param_1[0x82]);
  }
  ppuVar22 = local_568;
  if ((byte)local_5c0 == '\0') {
    (**(code **)(*local_5a8 + 0x20))();
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0xeb) & 4) == 0) {
      FUN_14724e80e(param_1);
      ppuVar22 = local_568;
    }
    else {
      FUN_14730fa5c(param_1,plVar21,local_568);
    }
    plVar21 = local_5a8;
    (**(code **)(*local_5a8 + 0x20))(local_5a8);
    (**(code **)(*plVar21 + 0x28))(plVar21,&local_498);
    FUN_14724e9c6(param_1,&local_498,ppuVar22);
    uVar27 = local_228;
    if (local_228 != 0) {
      lVar38 = param_1[1];
      FUN_14009fd82(DAT_14c82b500,local_228,DAT_14c7585d4);
      local_5e0 = (undefined8 **)(uVar27 + 0x68);
      local_5e8 = (longlong **)(uVar27 + 0x58);
      FUN_142cbe1b6(lVar38 + 0x3930,lVar38,param_1,uVar27 + 8);
    }
  }
  if ((longlong)iStack_260 != 0) {
    plVar19 = (longlong *)CONCAT44(local_268._4_4_,(uint)local_268);
    plVar29 = plVar19 + (longlong)iStack_260 * 2;
    plVar21 = local_5c8 + 0xb3;
    do {
      bVar8 = 1;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14ca84e6a == '\x01' &&
          (bVar8 = *(byte *)((longlong)plVar19 + 0xc) & 3, DAT_14ca84e99 != '\0')))) {
        bVar8 = 1;
      }
      lVar38 = *plVar19;
      if ((*(byte *)(lVar38 + 0x20) & 0xc) == 0) {
        lVar40 = plVar19[1];
        if ((*(byte *)(lVar38 + 0x20) & 0x10) != 0) {
          FUN_140069376(local_5c8);
        }
        iVar12 = (int)local_5c8[0xb4];
        *(uint *)(local_5c8 + 0xb4) = iVar12 + 1U;
        if (*(uint *)((longlong)local_5c8 + 0x5a4) < iVar12 + 1U) {
          FUN_1400f155a(plVar21,iVar12);
        }
        *(longlong *)(*plVar21 + (longlong)iVar12 * 8) = lVar38;
        *(int *)(lVar38 + 0x1c) = (int)lVar40;
        *(byte *)(lVar38 + 0x20) = bVar8 | *(byte *)(lVar38 + 0x20) & 0xe8 | 0x14;
        *(int *)(lVar38 + 0x58) = (int)lVar40;
      }
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar29);
  }
  iStack_260 = 0;
  if (iStack_25c != 0) {
    FUN_1400f146c(&local_268,0);
  }
  FUN_142cdb982(local_568,local_5c8,param_1[1] + 0x3f08);
  plVar21 = local_5b8;
  if (DAT_14ca44da0 == 0) {
    uVar27 = 0;
    uVar32 = 1;
    iVar12 = 0;
    uVar15 = 0;
  }
  else {
    puVar23 = &DAT_14ca44d88;
    if (DAT_14ca44d98 != (uint *)0x0) {
      puVar23 = DAT_14ca44d98;
    }
    uVar15 = *puVar23;
    if (uVar15 == 0) {
      iVar12 = DAT_14ca44da0 + 0x1e;
      if (-1 < (int)(DAT_14ca44da0 - 1)) {
        iVar12 = DAT_14ca44da0 - 1;
      }
      uVar27 = 0;
      uVar47 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar47 = uVar27;
      }
      iVar12 = 0;
      do {
        if (uVar47 == uVar27) goto LAB_142df96c7;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar23[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar27 = 0;
      iVar12 = 0;
    }
    uVar32 = (ulonglong)(-uVar15 & uVar15);
    uVar47 = uVar32 * 2 + 1;
    lVar38 = 0x3f;
    if (uVar47 != 0) {
      for (; uVar47 >> lVar38 == 0; lVar38 = lVar38 + -1) {
      }
    }
    uVar15 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
    if ((int)DAT_14ca44da0 <= (int)uVar15) {
      uVar15 = DAT_14ca44da0;
    }
  }
  if (uVar15 != DAT_14ca44da0) {
    uVar45 = 0xffffffff;
    local_5a8 = (longlong *)(ulonglong)DAT_14ca44da0;
    do {
      plVar19 = *(longlong **)(DAT_14ca44d78 + (longlong)(int)uVar15 * 0x10);
      (**(code **)*plVar19)(plVar19);
      if (0 < (int)plVar21[0x7e]) {
        lVar40 = 0;
        lVar38 = 0;
        do {
          (**(code **)(*plVar19 + 8))(plVar19,plVar21[0x7d] + lVar40);
          lVar38 = lVar38 + 1;
          lVar40 = lVar40 + 0x13c10;
        } while (lVar38 < (int)plVar21[0x7e]);
      }
      uVar45 = uVar45 & ~(uint)uVar32;
      puVar23 = DAT_14ca44d98;
      if (DAT_14ca44d98 == (uint *)0x0) {
        puVar23 = &DAT_14ca44d88;
      }
      iVar14 = (int)uVar27;
      lVar38 = (longlong)iVar14;
      uVar15 = puVar23[lVar38] & uVar45;
      if (uVar15 == 0) {
        iVar31 = DAT_14ca44da0 + 0x1e;
        if (-1 < (int)(DAT_14ca44da0 - 1)) {
          iVar31 = DAT_14ca44da0 - 1;
        }
        iVar31 = iVar31 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar24 = iVar31;
        if (iVar31 < iVar14) {
          iVar24 = iVar14;
        }
        if (iVar14 < iVar31) {
          lVar40 = 0;
          do {
            uVar15 = (puVar23 + lVar38 + 1)[lVar40];
            if (uVar15 != 0) {
              uVar27 = (ulonglong)(iVar14 + (int)lVar40 + 1);
              uVar45 = 0xffffffff;
              goto LAB_142dfaaef;
            }
            iVar12 = iVar12 + 0x20;
            lVar40 = lVar40 + 1;
          } while (iVar24 - lVar38 != lVar40);
          uVar45 = 0xffffffff;
          iVar14 = iVar24;
        }
        uVar27 = (ulonglong)(iVar14 + 1);
        uVar15 = DAT_14ca44da0;
      }
      else {
LAB_142dfaaef:
        uVar32 = (ulonglong)(-uVar15 & uVar15);
        uVar47 = uVar32 * 2 + 1;
        lVar38 = 0x3f;
        if (uVar47 != 0) {
          for (; uVar47 >> lVar38 == 0; lVar38 = lVar38 + -1) {
          }
        }
        uVar15 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
        if ((int)DAT_14ca44da0 <= (int)uVar15) {
          uVar15 = DAT_14ca44da0;
        }
      }
    } while (uVar15 != (uint)local_5a8);
  }
LAB_142df96c7:
  plVar29 = local_598;
  plVar19 = local_5b8;
  plVar21 = local_5c8;
  if ((byte)local_5c0 != '\0') {
    if (((*(char *)((longlong)local_5b8 + 0xd41) != '\0') ||
        (*(char *)((longlong)local_5b8 + 0xd59) != '\0')) ||
       (*(char *)((longlong)local_5b8 + 0xd5a) == '\x01')) {
      FUN_1430175ba(local_5b8,local_5a0);
    }
    puVar33 = local_5a0;
    FUN_14724f050(plVar19,local_5a0);
    FUN_14482dc26(plVar19,puVar33);
    FUN_142df73a2(plVar19,plVar21,plVar19[0x7d]);
  }
  if (((char)local_588 == '\0') && (iVar12 = (int)plVar19[0x7e], 0 < iVar12)) {
    lVar38 = 0x1dd0;
    lVar40 = 0;
    do {
      lVar39 = *plVar29;
      if ((((*(byte *)(lVar39 + 0x107e0 + lVar38) & 2) == 0) &&
          (*(char *)(lVar39 + 0x12f8 + lVar38) == '\0')) &&
         ((((*(char *)(lVar39 + 0x622 + lVar38) == '\0' &&
            (*(char *)(lVar39 + 0x625 + lVar38) != '\x01')) || (*(int *)(lVar39 + lVar38) != 2)) &&
          ((lVar39 = *(longlong *)(lVar39 + 0x1338 + lVar38), lVar39 != 0 &&
           (*(int *)(lVar39 + 0x2a0) != -1)))))) {
        FUN_1472da6ca(lVar39 + 0x298,plVar21);
        iVar12 = (int)plVar19[0x7e];
      }
      lVar40 = lVar40 + 1;
      lVar38 = lVar38 + 0x13c10;
    } while (lVar40 < iVar12);
  }
  if ((char)plVar19[0x116] == '\x01') {
    *(undefined1 *)(plVar21 + 0xc9) = 1;
  }
  plVar28 = plVar19 + 10;
  FUN_1449b3dbc(plVar28,plVar21,local_550);
  local_518 = plVar28;
  FUN_144b0f36e(plVar28,plVar21);
  FUN_142bc9066(DAT_14cb0d2b0 + 0xe68,plVar21);
  FUN_143005434(plVar21,local_558,plVar19[0x11a]);
  puVar33 = local_5b0;
  plVar28 = (longlong *)plVar19[0x7c];
  puVar41 = (undefined8 *)(plVar21[0xe] + 0xfU & 0xfffffffffffffff0);
  puVar30 = puVar41 + 0xc;
  if ((undefined8 *)plVar21[0xf] < puVar30) {
    FUN_140023dd8(local_5b0,0x70);
    puVar41 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
    puVar30 = puVar41 + 0xc;
  }
  plVar21[0xe] = (longlong)puVar30;
  *puVar41 = &PTR_FUN_14a202e48;
  puVar41[1] = 0;
  puVar41[2] = 0;
  puVar41[3] = 0;
  puVar41[4] = 0;
  puVar41[5] = 0;
  puVar41[6] = 0;
  puVar41[7] = 0;
  puVar41[8] = 0;
  puVar41[9] = 0;
  puVar41[10] = 0;
  puVar41[0xb] = 0;
  iVar12 = (int)plVar21[0x14];
  *(uint *)(plVar21 + 0x14) = iVar12 + 1U;
  if (*(uint *)((longlong)plVar21 + 0xa4) < iVar12 + 1U) {
    FUN_1448cfae8(local_578,iVar12);
  }
  *(undefined8 **)(plVar21[0x13] + (longlong)iVar12 * 8) = puVar41;
  *(undefined4 *)((longlong)plVar28 + 0x1ac) = 0;
  bVar48 = false;
  uVar18 = FUN_1472e1757(plVar21,plVar28,0);
  plVar34 = local_5c8;
  *(undefined8 *)((longlong)plVar28 + 0x1a0) = uVar18;
  if (*(char *)((longlong)plVar19 + 0xd56) == '\x01') {
    bVar48 = 0 < *(int *)(DAT_14c9ec540 + 4);
  }
  local_548 = (undefined8 **)(puVar41 + 1);
  local_5a8 = plVar28;
  local_520 = puVar41;
  if ((char)local_588 == '\0') {
    if (*(char *)((longlong)plVar19 + 0xd43) == '\x01') {
      FUN_14312c5fa(DAT_14ca712d8,plVar21,&local_3d0,*(undefined4 *)((longlong)plVar19 + 0x8a4));
    }
    bVar8 = *(byte *)((longlong)plVar19 + 0xd41);
    if (((bVar8 == 0) && (*(char *)((longlong)plVar19 + 0xd59) == '\0')) &&
       (*(char *)((longlong)plVar19 + 0xd5a) != '\x01')) {
      FUN_1471d0c63(plVar21,(short)plVar19[0x115],plVar29);
    }
    else {
      bVar11 = *(byte *)((longlong)plVar19 + 0xd5b);
      FUN_142ce86da(plVar19);
      FUN_142ce996e(plVar19,local_548,
                    CONCAT71((int7)(int3)((uint)iVar12 >> 8),(bVar8 ^ 1) & bVar11) & 0xffffffff);
      if ((((*(char *)((longlong)plVar19 + 0xd5a) != '\0') ||
           (*(char *)((longlong)plVar19 + 0xd41) == '\x01')) &&
          (0 < *(int *)(plVar19[0x7d] + 0x13704) + *(int *)(plVar19[0x7d] + 0x13700))) ||
         (*(char *)((longlong)plVar19 + 0xd59) == '\x01')) {
        local_5e8 = local_548;
        FUN_142ce0dbe(plVar19,&local_1f8,plVar21,*(undefined1 *)((longlong)plVar19 + 0xd59));
      }
      FUN_142cddd72(plVar19 + 0xf9,plVar21,plVar29);
    }
    plVar28 = (longlong *)plVar19[0x121];
    if (plVar28 != (longlong *)0x0) {
      local_3f0 = plVar19[0x7d];
      local_3e4 = (undefined4)plVar19[0x7e];
      local_3e8 = 0x13c10;
      local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
      (**(code **)(*plVar28 + 0x88))(plVar28,plVar21,&local_3f0,local_550);
      lVar38 = (**(code **)(*(longlong *)plVar19[0x121] + 0x98))();
      if (lVar38 != 0) {
        FUN_143521108(lVar38,plVar21);
      }
    }
    plVar28 = (longlong *)plVar19[1];
    if (((plVar28 != (longlong *)0x0) && (plVar28[0x9a4] != 0)) &&
       ((*(byte *)((longlong)plVar19 + 0xf2) & 2) != 0)) {
      if (*(code **)(*plVar28 + 0x2c0) != (code *)&LAB_1447ccd94) {
        (**(code **)(*plVar28 + 0x2c0))();
      }
      if ((DAT_14c760dd5 == '\x01') && (0 < *(int *)(DAT_14ca5c7b8 + 4))) {
        local_1f8 = (undefined8 *)0x0;
        local_1b0 = 0;
        local_1a8 = 0x400000000;
        local_1a0 = 0;
        uStack_198 = 0;
        local_190 = 0;
        uStack_188 = 0;
        local_180 = 0;
        FUN_14309169e(plVar19,plVar21,&local_1f8);
        FUN_14032f814(&local_1f8,plVar21,&local_3b8);
        if (local_1b0 != 0) {
          FUN_1400020a8();
        }
      }
    }
    cVar7 = FUN_144b0f89b(4,*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(plVar19[1] + 8) * 2)
                         );
    puVar33 = local_5b0;
    if (cVar7 != '\0') {
      puVar41 = (undefined8 *)(plVar21[0xe] + 0xfU & 0xfffffffffffffff0);
      puVar30 = puVar41 + 0x16;
      if ((undefined8 *)plVar21[0xf] < puVar30) {
        FUN_140023dd8(local_5b0,0xc0);
        puVar41 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
        puVar30 = puVar41 + 0x16;
      }
      plVar21[0xe] = (longlong)puVar30;
      *puVar41 = &PTR_FUN_14a202e50;
      puVar41[3] = 0;
      puVar41[4] = 0;
      puVar41[1] = 0;
      puVar41[2] = 0;
      puVar41[5] = 0;
      *(undefined4 *)(puVar41 + 3) = 0xffffffff;
      *(undefined8 *)((longlong)puVar41 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar41 + 0x24) = 0;
      puVar41[6] = 0;
      puVar41[7] = 0;
      puVar41[8] = 0;
      puVar41[9] = 0;
      puVar41[10] = 0;
      puVar41[0xb] = 0;
      puVar41[0xc] = 0;
      puVar41[0xd] = 0;
      puVar41[0xe] = 0;
      puVar41[0xf] = 0;
      puVar41[0x10] = 0;
      puVar41[0x11] = 0;
      puVar41[0x12] = 0;
      puVar41[0x13] = 0;
      puVar41[0x14] = 0;
      puVar41[0x15] = 0;
      iVar12 = (int)plVar21[0x14];
      *(uint *)(plVar21 + 0x14) = iVar12 + 1U;
      if (*(uint *)((longlong)plVar21 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(local_578,iVar12);
      }
      plVar28 = local_5b8;
      *(undefined8 **)(*local_578 + (longlong)iVar12 * 8) = puVar41;
      plVar19 = local_5b8 + 0x83;
      FUN_1400f6b1e(local_5b8[1],local_5b8[0x7d],puVar41 + 1,1);
      FUN_1400f698c(puVar41 + 0x12,plVar19);
      plVar19 = local_5b8;
      puVar41[0xc] = *(undefined8 *)(plVar28[1] + 0x38c0);
      auVar67 = _DAT_149931e80;
      lVar38 = (longlong)(int)plVar28[0x7e];
      if (lVar38 != 0) {
        uVar27 = lVar38 * 0x13c10 - 0x13c10;
        auVar68._8_8_ = 0;
        auVar68._0_8_ = uVar27;
        uVar13 = SUB164(auVar68 * ZEXT816(0x19eb3e9edacacb9b),8);
        uVar52 = (undefined4)(uVar27 / 0x9e0800000);
        auVar54._0_8_ = CONCAT44(uVar52,uVar13);
        auVar54._8_4_ = uVar13;
        auVar54._12_4_ = uVar52;
        auVar50._0_8_ = auVar54._0_8_ >> 0xd;
        auVar50._8_8_ = auVar54._8_8_ >> 0xd;
        puVar30 = (undefined8 *)(local_5b8[0x7d] + 0x25610);
        uVar47 = 0;
        auVar65 = pmovsxbq(auVar65,0x100);
        auVar50 = auVar50 | _DAT_149931e80;
        lVar38 = auVar50._0_8_;
        in_XMM3._8_4_ = 0xffffffff;
        in_XMM3._0_8_ = 0xffffffffffffffff;
        in_XMM3._12_4_ = 0xffffffff;
        do {
          auVar62._8_8_ = 0;
          auVar62._0_8_ = uVar47;
          in_XMM5._0_8_ = -(ulonglong)(lVar38 < SUB168(auVar62 ^ auVar67,0));
          lVar40 = auVar50._8_8_;
          in_XMM5._8_8_ = -(ulonglong)(lVar40 < SUB168(auVar62 ^ auVar67,8));
          if ((~(uint)in_XMM5._0_8_ & 1) != 0) {
            puVar30[-0x2782] = 0;
          }
          auVar63._8_4_ = (int)uVar47;
          auVar63._0_8_ = uVar47;
          auVar63._12_4_ = (int)(uVar47 >> 0x20);
          auVar68 = (auVar63 | auVar65) ^ auVar67;
          auVar64._0_8_ = -(ulonglong)(lVar38 < auVar68._0_8_);
          auVar64._8_8_ = -(ulonglong)(lVar40 < auVar68._8_8_);
          in_XMM4 = auVar64 ^ in_XMM3;
          if ((in_XMM4[8] & 1) != 0) {
            *puVar30 = 0;
          }
          uVar47 = uVar47 + 2;
          puVar30 = puVar30 + 0x4f04;
          in_XMM2 = auVar67;
        } while ((uVar27 / 0x13c10 + 2 & 0xfffffffffffffffe) != uVar47);
      }
      if ((((puVar41[0xd] != 0) && (0 < *(int *)(puVar41[0xd] + 8))) && (0 < (int)local_5b8[0x7e]))
         && (DAT_14c9d2488 != (code *)0x0)) {
        (*DAT_14c9d2488)(plVar21,4,puVar41 + 1);
      }
    }
    local_5e8 = &local_3b8;
    FUN_143045d3c(plVar19,plVar21,0,local_568);
    if (0 < (longlong)(int)plVar21[0x2e]) {
      puVar23 = (uint *)(*(longlong *)(plVar21[0x2d] + -8 + (longlong)(int)plVar21[0x2e] * 8) + 0x34
                        );
      *puVar23 = *puVar23 | 0x100;
    }
    uVar10 = FUN_141786b06(plVar19);
    local_5e0 = (undefined8 **)CONCAT71(local_5e0._1_7_,bVar48);
    local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,uVar10);
    FUN_142d0158c(plVar19[1],plVar29,local_558,plVar21);
    cVar7 = FUN_141786b06();
    plVar28 = local_5a8;
    if (cVar7 != '\0') {
      FUN_143102cf4(plVar19,plVar21,local_5a8);
    }
    if ((longlong)(int)uStack_3b0 != 0) {
      plVar34 = local_3b8 + (longlong)(int)uStack_3b0 * 2;
      plVar21 = local_5c8 + 0xb3;
      plVar29 = local_3b8;
      do {
        bVar8 = 1;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14ca84e6a == '\x01' &&
            (bVar8 = *(byte *)((longlong)plVar29 + 0xc) & 3, DAT_14ca84e99 != '\0')))) {
          bVar8 = 1;
        }
        lVar38 = *plVar29;
        if ((*(byte *)(lVar38 + 0x20) & 0xc) == 0) {
          lVar40 = plVar29[1];
          if ((*(byte *)(lVar38 + 0x20) & 0x10) != 0) {
            FUN_140069376(local_5c8);
          }
          iVar12 = (int)local_5c8[0xb4];
          *(uint *)(local_5c8 + 0xb4) = iVar12 + 1U;
          if (*(uint *)((longlong)local_5c8 + 0x5a4) < iVar12 + 1U) {
            FUN_1400f155a(plVar21,iVar12);
          }
          *(longlong *)(*plVar21 + (longlong)iVar12 * 8) = lVar38;
          *(int *)(lVar38 + 0x1c) = (int)lVar40;
          *(byte *)(lVar38 + 0x20) = bVar8 | *(byte *)(lVar38 + 0x20) & 0xe8 | 0x14;
          *(int *)(lVar38 + 0x58) = (int)lVar40;
        }
        plVar29 = plVar29 + 2;
        plVar28 = local_5a8;
        plVar19 = local_5b8;
      } while (plVar29 != plVar34);
    }
    uVar27 = uStack_3b0 >> 0x20;
    uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
    if ((int)uVar27 != 0) {
      FUN_1400f146c(&local_3b8,0);
    }
    plVar21 = local_5c8;
    if ((char)plVar19[0x1aa] == '\x01') {
      local_400 = (undefined8 *)0x0;
      local_3f8 = 0;
      local_410 = (undefined8 *)0x0;
      local_408 = 0;
      FUN_140119f90(plVar28,&local_1f8,*(undefined4 *)((longlong)plVar19 + 0x8a4));
      local_5e8 = &local_410;
      local_5e0 = &local_400;
      FUN_142ba7762(plVar19,plVar21,(longlong)plVar28 + 0x230,&local_1f8);
    }
LAB_142df9fb0:
    if ((longlong)(int)plVar19[0x7e] != 0) {
      lVar38 = plVar19[0x7d];
      lVar40 = (longlong)(int)plVar19[0x7e] * 0x13c10;
      puVar33 = local_560;
      do {
        lVar39 = DAT_14ca1c5a0;
        if ((((*(byte *)(lVar38 + 0x125b0) & 2) == 0) && (*(char *)(lVar38 + 0x30c8) == '\0')) &&
           (((*(char *)(lVar38 + 0x23f2) == '\0' && (*(char *)(lVar38 + 0x23f5) != '\x01')) ||
            (*(int *)(lVar38 + 0x1dd0) != 2)))) {
          iVar12 = (int)*puVar33;
          if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
            uVar27 = 0;
          }
          else if (iVar12 == 1) {
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            uVar27 = (ulonglong)(DVar16 != DVar17);
            puVar33 = local_560;
          }
          else {
            uVar27 = 1;
          }
          plVar19 = local_5b8;
          if (0 < *(int *)(lVar39 + uVar27 * 4)) {
            FUN_142e6cdcf(local_5c8,lVar38,local_5b8[1] + 0x38d0,1);
            puVar33 = local_560;
          }
        }
        lVar38 = lVar38 + 0x13c10;
        lVar40 = lVar40 + -0x13c10;
      } while (lVar40 != 0);
    }
  }
  else if ((longlong)(int)plVar19[0x7e] != 0) {
    lVar38 = plVar19[0x7d];
    lVar40 = (longlong)(int)plVar19[0x7e] * 0x13c10;
    do {
      FUN_140048079(plVar34,lVar38);
      lVar38 = lVar38 + 0x13c10;
      lVar40 = lVar40 + -0x13c10;
    } while (lVar40 != 0);
    goto LAB_142df9fb0;
  }
  plVar21 = local_5c8;
  local_540 = FUN_14177f68f(local_5c8,local_558);
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_1f8,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp"
                  ,0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_1f8);
    plVar28 = local_5a8;
    plVar19 = local_5b8;
    plVar21 = local_5c8;
    if (local_1f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
      plVar28 = local_5a8;
      plVar19 = local_5b8;
      plVar21 = local_5c8;
    }
  }
  FUN_143138a24(plVar21,plVar19,plVar19[1]);
  plVar29 = local_598;
  if (0 < (int)plVar19[0x80]) {
    local_528 = (undefined8 *)CONCAT44(local_528._4_4_,*(undefined4 *)((longlong)plVar28 + 0x1ac));
    local_500 = *(undefined8 *)((longlong)plVar28 + 0x1a0);
    local_590 = (ulonglong *)((longlong)plVar28 + 0x1c0);
    local_580 = (ulonglong *)(plVar21 + 0x2d);
    local_570 = (ulonglong *)((longlong)plVar28 + 0x2e0);
    auVar65 = pmovsxbd(unaff_XMM7,0x1010101);
    puVar30 = (undefined8 *)0x0;
    do {
      lVar38 = plVar19[0x7f];
      lVar39 = (longlong)puVar30 * 0x3c0;
      plVar19 = *(longlong **)(lVar38 + lVar39);
      local_538 = puVar30;
      FUN_14366862a(plVar19,plVar21);
      local_530 = plVar19;
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar21);
      lVar40 = (longlong)*(int *)(lVar38 + 0x360 + lVar39);
      if (lVar40 != 0) {
        lVar42 = *(longlong *)(lVar38 + 0x358 + lVar39);
        lVar40 = lVar40 * 0x13c10;
        do {
          FUN_140048079(plVar21,lVar42);
          lVar42 = lVar42 + 0x13c10;
          lVar40 = lVar40 + -0x13c10;
        } while (lVar40 != 0);
      }
      plVar19 = local_5b8;
      lVar38 = lVar38 + lVar39;
      if (*(char *)((longlong)local_5b8 + 0xd56) == '\x01') {
        local_420 = *(undefined8 *)(lVar38 + 0x358);
        local_418 = *(undefined4 *)(lVar38 + 0x360);
        local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
        FUN_142df75d2(local_5b8,plVar21,&local_420,plVar28);
        if ((char)plVar19[0x1ab] == '\0') {
          local_438 = *local_590;
          uStack_430 = local_590[1];
          local_448 = *(undefined8 *)(lVar38 + 0x358);
          local_440 = *(undefined4 *)(lVar38 + 0x360);
          FUN_140282206(plVar21,&local_448,&local_438);
        }
      }
      if (((int)local_530[3] == 1) ||
         (((int)local_530[3] == 0 && (*(char *)((longlong)plVar19 + 0xd56) == '\0')))) {
        puVar30 = *(undefined8 **)(lVar38 + 0x358);
        uVar13 = *(undefined4 *)(lVar38 + 0x360);
        lVar40 = 0x12;
        do {
          *(undefined8 *)(auStack_20a + lVar40) = 0;
          *(undefined8 *)(local_208 + lVar40 + 6) = 0;
          *(undefined4 *)(local_200 + lVar40 + 6) = 0xffff0000;
          lVar40 = lVar40 + 0x18;
        } while (lVar40 != 0xd2);
        local_510 = lVar38;
        if (*(char *)((longlong)plVar19 + 0xd41) == '\x01') {
          FUN_14724f118(plVar19,&local_268,plVar28);
          FUN_14724f1fa(plVar19,&local_368,plVar28,&local_268);
          memcpy(&local_1f8,&local_368,0xf8);
          local_10c = 2;
          if (local_238 != 0) {
            FUN_1400020a8();
          }
          local_5a0 = (ulonglong *)CONCAT44(local_5a0._4_4_,2);
        }
        else {
          FUN_14724f2e0(plVar19,&local_368,local_540,plVar28);
          memcpy(&local_1f8,&local_368,0xf8);
          local_10c = 1;
          local_5a0 = (ulonglong *)CONCAT44(local_5a0._4_4_,1);
        }
        local_248 = (undefined8 *)0x0;
        uStack_240 = 0x200000000;
        lStack_490 = CONCAT44(lStack_490._4_4_,uVar13);
        local_498 = puVar30;
        FUN_142df7ef9(&local_498,&local_268);
        puVar30 = local_248;
        if (local_248 == (undefined8 *)0x0) {
          puVar30 = &local_268;
        }
        local_5c0 = (ulonglong *)(longlong)(int)uStack_240;
        if (local_5c0 != (ulonglong *)0x0) {
          local_5c0 = (ulonglong *)((longlong)local_5c0 << 4);
          puVar33 = (ulonglong *)0x0;
          do {
            puVar43 = local_5b0;
            lVar38 = *(longlong *)((longlong)puVar30 + (longlong)puVar33);
            bVar8 = *(byte *)((longlong)plVar19 + 0xd56);
            puVar37 = (undefined8 *)(local_5c8[0xe] + 0xfU & 0xfffffffffffffff0);
            puVar41 = puVar37 + 0x40;
            if ((undefined8 *)local_5c8[0xf] < puVar41) {
              FUN_140023dd8(local_5b0,0x210);
              puVar37 = (undefined8 *)(*puVar43 + 0xf & 0xfffffffffffffff0);
              puVar41 = puVar37 + 0x40;
            }
            plVar19 = local_5c8;
            local_5c8[0xe] = (longlong)puVar41;
            *puVar37 = &PTR_FUN_14a2996a8;
            plVar21 = puVar37 + 2;
            FUN_14725cba6(plVar21);
            iVar12 = (int)plVar19[0x14];
            *(uint *)(plVar19 + 0x14) = iVar12 + 1U;
            if (*(uint *)((longlong)plVar19 + 0xa4) < iVar12 + 1U) {
              FUN_1448cfae8(local_578,iVar12);
            }
            plVar19 = local_5c8;
            *(undefined8 **)(local_5c8[0x13] + (longlong)iVar12 * 8) = puVar37;
            FUN_1448c58dc(lVar38,&local_368);
            auVar67._8_8_ = uStack_350;
            auVar67._0_8_ = local_358;
            *(undefined1 (*) [16])(puVar37 + 4) = auVar67;
            *plVar21 = (longlong)local_368;
            puVar37[3] = uStack_360;
            local_338 = 0;
            uStack_330 = 0;
            local_348 = 0;
            uStack_340 = 0;
            local_358 = (undefined *)0x0;
            uStack_350 = 0;
            local_368 = (longlong *)0x0;
            uStack_360 = 0;
            local_5e8 = (longlong **)&local_368;
            uVar18 = FUN_147241975(plVar19,lVar38,1,(uint)bVar8 * 2);
            lVar40 = FUN_145d50964();
            cVar7 = *(char *)(lVar40 + 0x41);
            if (*(char *)(lVar40 + 0x41) == '\x03') {
              cVar7 = '\x02';
            }
            puVar37[0x12] = uVar18;
            *(char *)(puVar37 + 0x13) = cVar7;
            memcpy(puVar37 + 0x20,&local_1f8,0xf8);
            lVar40 = local_5b8[1];
            if (*(char *)(lVar40 + 0x4284) == '\x01') {
              if (*(char *)(lVar38 + 0x5200) == '\x01') {
                if (*(int *)(DAT_14ca09490 + 4) == 0) {
                  FUN_144b112d8(lVar38 + 0x51c0);
                }
                plVar19 = local_5c8;
                local_5e8 = (longlong **)(puVar37 + 6);
                FUN_1401b6588(lVar38 + 0x51c0,local_5c8,lVar40 + 0x3f08,0);
                *(undefined1 *)(lVar38 + 0x5308) = 1;
              }
              else {
                puVar37[6] = 0;
                *(undefined4 *)(puVar37 + 7) = 4;
                puVar37[8] = 0;
                *(undefined4 *)(puVar37 + 9) = 8;
                puVar37[10] = 0;
                plVar19 = local_5c8;
              }
            }
            plVar29 = local_5b8;
            local_228 = *(ulonglong *)((longlong)puVar30 + (longlong)puVar33);
            uStack_220 = ((ulonglong *)((longlong)puVar30 + (longlong)puVar33))[1];
            FUN_14725ccb4();
            FUN_140069376(plVar19);
            puVar43 = local_5b0;
            puVar37 = (undefined8 *)(plVar19[0xe] + 7U & 0xfffffffffffffff8);
            puVar41 = puVar37 + 0x3d;
            if ((undefined8 *)plVar19[0xf] < puVar41) {
              FUN_140023dd8(local_5b0,0x1f0);
              puVar37 = (undefined8 *)(*puVar43 + 7 & 0xfffffffffffffff8);
              puVar41 = puVar37 + 0x3d;
            }
            *local_5b0 = (ulonglong)puVar41;
            uStack_360 = DAT_14ca18a78;
            if (DAT_14ca18a78 != 0) {
              LOCK();
              *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
              UNLOCK();
            }
            local_358 = &DAT_14ca18a30;
            local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
            local_368 = plVar21;
            FUN_140068f1a(puVar37,&local_372,&local_368,1);
            plVar28 = local_5a8;
            *puVar37 = &PTR_FUN_14a2997b0;
            puVar37[0x37] = plVar29;
            puVar37[0x38] = plVar21;
            puVar37[0x39] = local_228;
            puVar37[0x3a] = uStack_220;
            puVar37[0x3b] = local_5a8;
            *(int *)(puVar37 + 0x3c) = (int)local_5a0;
            iVar12 = (int)local_5c8[0x2e];
            *(uint *)(local_5c8 + 0x2e) = iVar12 + 1U;
            if (*(uint *)((longlong)local_5c8 + 0x174) < iVar12 + 1U) {
              FUN_14470e57a(local_580,iVar12);
            }
            *(undefined8 **)(local_5c8[0x2d] + (longlong)iVar12 * 8) = puVar37;
            *(int *)((longlong)puVar37 + 0x2c) = (int)local_5c8[0x2e] + -1;
            FUN_140069100(local_5c8,puVar37);
            plVar19 = local_5b8;
            if (*(char *)((longlong)local_5b8 + 0xd56) == '\0') {
              local_388 = *local_590;
              uStack_380 = local_590[1];
              FUN_1402822c9(local_5c8,lVar38,&local_388);
            }
            plVar29 = local_598;
            if ((char)plVar19[0x1ab] == '\x01') {
              local_398 = *local_570;
              uStack_390 = local_570[1];
              FUN_14034d496(local_5c8,lVar38,&local_398);
            }
            puVar33 = puVar33 + 2;
          } while (local_5c0 != puVar33);
        }
        FUN_142e2a674(&local_248);
        lVar38 = local_510;
        plVar21 = local_5c8;
      }
      plVar34 = local_530;
      *(undefined4 *)((longlong)plVar28 + 0x1ac) = 0x83;
      uVar18 = FUN_1472e1757(plVar21,plVar28,0x83);
      *(undefined8 *)((longlong)plVar28 + 0x1a0) = uVar18;
      local_1f8 = *(undefined8 **)(lVar38 + 0x358);
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,*(undefined4 *)(lVar38 + 0x360));
      local_5e0 = (undefined8 **)&local_1f8;
      local_5e8 = local_558;
      FUN_140554065(plVar21,plVar28,plVar34[4],0);
      (**(code **)(*plVar34 + 0x20))(plVar34,plVar21);
      if (*(char *)(*(longlong *)(lVar38 + 0x358) + 0x23e8) == '\x01') {
        local_5e8 = (longlong **)((ulonglong)local_5e8 & 0xffffffff00000000);
        local_458 = auVar65;
        FUN_1431f463a(plVar21,*(undefined4 *)((longlong)plVar19 + 0x8a4),plVar34[4]);
      }
      FUN_143668904(plVar34,plVar21);
      *(undefined4 *)((longlong)plVar28 + 0x1ac) = local_528._0_4_;
      *(undefined8 *)((longlong)plVar28 + 0x1a0) = local_500;
      puVar30 = (undefined8 *)((longlong)local_538 + 1);
    } while ((longlong)puVar30 < (longlong)(int)plVar19[0x80]);
  }
  local_468 = ZEXT816(0);
  local_478 = ZEXT816(0);
  local_488 = ZEXT816(0);
  local_498 = (undefined8 *)0x0;
  lStack_490 = 0;
  if (*(char *)((longlong)plVar19 + 0xd56) == '\x01') {
    local_4a8 = plVar19[0x7d];
    local_4a0 = (undefined4)plVar19[0x7e];
    local_5e8 = (longlong **)((ulonglong)local_5e8 & 0xffffffffffffff00);
    FUN_142df75d2(plVar19,plVar21,&local_4a8,plVar28);
    if ((char)plVar19[0x1ab] == '\0') {
      local_4b8 = *(undefined8 *)((longlong)plVar28 + 0x1c0);
      uStack_4b0 = *(undefined8 *)((longlong)plVar28 + 0x1c8);
      local_4c8 = plVar19[0x7d];
      local_4c0 = (undefined4)plVar19[0x7e];
      FUN_140282206(plVar21);
    }
    *(undefined4 *)((longlong)plVar28 + 0x1ac) = 2;
    uVar18 = FUN_1472e1757(plVar21,plVar28,2);
    *(undefined8 *)((longlong)plVar28 + 0x1a0) = uVar18;
    if (*(char *)((longlong)plVar19 + 0xd54) == '\x01') {
      FUN_142dfe366(plVar19,plVar21,*(undefined8 *)((longlong)plVar28 + 0x1c8));
    }
    if (*(char *)((longlong)plVar19 + 0xd52) == '\x01') {
      FUN_142eb3640(plVar19,plVar21,*(undefined8 *)((longlong)plVar28 + 0x1c8),
                    *(undefined8 *)((longlong)plVar28 + 0x308));
    }
    if (*(char *)((longlong)plVar19 + 0xd5b) == '\x01') {
      FUN_143059160(plVar19,plVar21);
    }
    if ((char)local_588 == '\0') {
      cVar7 = FUN_14115befc((short)plVar19[0x115]);
      if ((cVar7 != '\0') && ((DAT_14ca964f0 != '\x01' || ((DAT_14c760e14 & 1) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca12a08) &&
           (FUN_144b3d300(&DAT_14ca12a08), DAT_14ca12a08 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14ca12a00 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Forward.LightGridPixelSize",1);
          _Init_thread_footer(&DAT_14ca12a08);
          plVar28 = local_5a8;
          plVar29 = local_598;
          plVar21 = local_5c8;
        }
        iVar14 = (**(code **)(*DAT_14ca12a00 + 0xb0))();
        iVar12 = (int)local_5b8[0x7e];
        if (0 < iVar12) {
          iVar31 = iVar14 + -1;
          puVar33 = (ulonglong *)(plVar21 + 0x31);
          puVar43 = (ulonglong *)(plVar21 + 0x33);
          ppuVar22 = (undefined8 **)(plVar21 + 0x2d);
          lVar38 = 0;
          do {
            puVar6 = local_5b0;
            piVar20 = *(int **)(*plVar29 + 0x13778 + lVar38 * 0x13c10);
            bVar48 = true;
            if (piVar20 != (int *)0x0) {
              bVar48 = *piVar20 == 0;
            }
            lVar40 = *plVar29 + lVar38 * 0x13c10;
            if (((*(byte *)(lVar40 + 0x125b0) & 2) == 0) && (*(char *)(lVar40 + 0x30c8) == '\0')) {
              if ((*(char *)(lVar40 + 0x23f2) != '\0') || (*(char *)(lVar40 + 0x23f5) == '\x01')) {
                bVar48 = (bool)(*(int *)(lVar40 + 0x1dd0) == 2 | bVar48);
              }
              if (!bVar48) {
                uVar27 = (longlong)
                         ((*(int *)(lVar40 + 0x3104) + iVar31) - *(int *)(lVar40 + 0x30fc)) /
                         (longlong)iVar14;
                local_5c0 = (ulonglong *)(uVar27 & 0xffffffff);
                local_570 = (ulonglong *)CONCAT44(local_570._4_4_,iVar31);
                local_5a0 = (ulonglong *)CONCAT44(local_5a0._4_4_,iVar14);
                uVar47 = (longlong)
                         ((*(int *)(lVar40 + 0x3100) + iVar31) - *(int *)(lVar40 + 0x30f8)) /
                         (longlong)iVar14;
                uVar15 = (int)uVar27 * (int)uVar47;
                local_538 = (undefined8 *)(ulonglong)uVar15;
                uVar45 = 4;
                if (DAT_14ca84e48 < 4) {
                  uVar45 = DAT_14ca84e48;
                }
                uVar15 = uVar15 * 2;
                uStack_1f0 = CONCAT44(uStack_1f0._4_4_,0x4109);
                uVar26 = DAT_14ca84e48;
                if (uVar15 < DAT_14ca84e48) {
                  uVar26 = uVar15;
                }
                local_1e8 = 0;
                uStack_1e4 = 0;
                local_1f8 = (undefined8 *)CONCAT44(uVar26 + (uVar26 == 0),uVar45 + (uVar45 == 0));
                uVar32 = plVar21[0xe] + 0xfU & 0xfffffffffffffff0;
                uVar27 = uVar32 + 0x150;
                local_590 = puVar43;
                local_580 = puVar33;
                if ((ulonglong)plVar21[0xf] < uVar27) {
                  FUN_140023dd8(local_5b0,0x160);
                  uVar32 = *puVar6 + 0xf & 0xfffffffffffffff0;
                  uVar27 = uVar32 + 0x150;
                }
                plVar21[0xe] = uVar27;
                local_558 = ppuVar22;
                FUN_1456bd266(uVar32,L"TileInfoBuffer",&local_1f8,0);
                iVar12 = (int)plVar21[0x32];
                *(uint *)(plVar21 + 0x32) = iVar12 + 1U;
                if (*(uint *)((longlong)plVar21 + 0x194) < iVar12 + 1U) {
                  FUN_144737178(local_580,iVar12);
                }
                puVar33 = local_5b0;
                *(ulonglong *)(plVar21[0x31] + (longlong)iVar12 * 8) = uVar32;
                *(int *)(uVar32 + 0x7c) = (int)plVar21[0x32] + -1;
                puVar41 = (undefined8 *)(plVar21[0xe] + 7U & 0xfffffffffffffff8);
                puVar30 = puVar41 + 8;
                if ((undefined8 *)plVar21[0xf] < puVar30) {
                  FUN_140023dd8(local_5b0,0x48);
                  puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                  puVar30 = puVar41 + 8;
                }
                plVar21[0xe] = (longlong)puVar30;
                puVar41[1] = *(undefined8 *)(uVar32 + 8);
                puVar41[2] = 0;
                *(undefined1 *)(puVar41 + 3) = 2;
                *(undefined8 *)((longlong)puVar41 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar41 + 5) = 0;
                *puVar41 = &PTR_FUN_14a1fb3e8;
                *(undefined2 *)(puVar41 + 6) = 0x1c;
                *(undefined1 *)((longlong)puVar41 + 0x32) = 0;
                puVar41[7] = uVar32;
                iVar12 = (int)plVar21[0x34];
                *(uint *)(plVar21 + 0x34) = iVar12 + 1U;
                if (*(uint *)((longlong)plVar21 + 0x1a4) < iVar12 + 1U) {
                  FUN_1447568fc(local_590,iVar12);
                }
                puVar33 = local_5b0;
                *(undefined8 **)(plVar21[0x33] + (longlong)iVar12 * 8) = puVar41;
                *(int *)((longlong)puVar41 + 0x1c) = (int)plVar21[0x34] + -1;
                puVar37 = (undefined8 *)(plVar21[0xe] + 7U & 0xfffffffffffffff8);
                puVar30 = puVar37 + 9;
                if ((undefined8 *)plVar21[0xf] < puVar30) {
                  FUN_140023dd8(local_5b0,0x50);
                  puVar37 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                  puVar30 = puVar37 + 9;
                }
                plVar21[0xe] = (longlong)puVar30;
                puVar37[1] = *(undefined8 *)(uVar32 + 8);
                puVar37[2] = 0;
                *(undefined1 *)(puVar37 + 3) = 3;
                *(undefined8 *)((longlong)puVar37 + 0x1c) = 0xffffffffffffffff;
                *puVar37 = &PTR_FUN_14a1fb168;
                *(undefined1 *)(puVar37 + 5) = 0x1c;
                *(undefined8 *)((longlong)puVar37 + 0x2c) = 0xffffffff00000000;
                puVar37[7] = 0;
                puVar37[8] = uVar32;
                iVar12 = (int)plVar21[0x34];
                *(uint *)(plVar21 + 0x34) = iVar12 + 1U;
                if (*(uint *)((longlong)plVar21 + 0x1a4) < iVar12 + 1U) {
                  FUN_1447568fc(local_590,iVar12);
                }
                puVar33 = local_5b0;
                *(undefined8 **)(plVar21[0x33] + (longlong)iVar12 * 8) = puVar37;
                *(int *)((longlong)puVar37 + 0x1c) = (int)plVar21[0x34] + -1;
                puVar46 = (undefined8 *)(plVar21[0xe] + 0xfU & 0xfffffffffffffff0);
                puVar30 = puVar46 + 8;
                if ((undefined8 *)plVar21[0xf] < puVar30) {
                  FUN_140023dd8(local_5b0,0x50);
                  puVar46 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
                  puVar30 = puVar46 + 8;
                }
                local_5c8[0xe] = (longlong)puVar30;
                *puVar46 = &PTR_FUN_14a299460;
                puVar46[2] = 0;
                puVar46[4] = 0;
                *(undefined1 *)(puVar46 + 5) = 1;
                iVar12 = (int)local_5c8[0x14];
                *(uint *)(local_5c8 + 0x14) = iVar12 + 1U;
                if (*(uint *)((longlong)local_5c8 + 0xa4) < iVar12 + 1U) {
                  FUN_1448cfae8(local_578,iVar12);
                }
                plVar21 = local_5c8;
                local_528 = puVar46 + 2;
                *(undefined8 **)(local_5c8[0x13] + (longlong)iVar12 * 8) = puVar46;
                puVar46[2] = puVar41;
                uVar18 = *(undefined8 *)(lVar40 + 0x13780);
                lVar39 = FUN_144a12b9e();
                cVar7 = *(char *)(lVar39 + 0x41);
                if (*(char *)(lVar39 + 0x41) == '\x03') {
                  cVar7 = '\x02';
                }
                puVar46[4] = uVar18;
                *(char *)(puVar46 + 5) = cVar7;
                plVar19 = (longlong *)(uVar47 & 0xffffffff | (longlong)local_5c0 << 0x20);
                puVar46[6] = plVar19;
                FUN_14724e088(*(undefined8 *)(lVar40 + 0x13818),&local_1f8);
                local_268._0_4_ = (int)local_538 + 7U >> 3;
                local_268._4_4_ = 1;
                iStack_260 = 1;
                local_5e8 = (longlong **)&local_268;
                FUN_14724e0f5(plVar21,&local_368,&local_1f8,local_528);
                puVar33 = local_5b0;
                if ((longlong)*(int *)(local_520 + 0xb) == 0) {
                  local_5c0 = (ulonglong *)((ulonglong)local_5c0 & 0xffffffff00000000);
                }
                else {
                  lVar39 = 0;
                  do {
                    uVar15 = *(uint *)(local_520[10] + lVar39);
                    plVar21 = local_5c8;
                    if ((uVar15 & 4) != 0 && (uVar15 & 3) != 0) {
                      local_5c0 = (ulonglong *)
                                  CONCAT44(local_5c0._4_4_,
                                           (int)CONCAT71((int7)((ulonglong)local_520[10] >> 8),1));
                      goto LAB_142dfb13c;
                    }
                    lVar39 = lVar39 + 0x18;
                  } while ((longlong)*(int *)(local_520 + 0xb) * 0x18 != lVar39);
                  local_5c0 = (ulonglong *)((ulonglong)local_5c0._4_4_ << 0x20);
                }
LAB_142dfb13c:
                puVar41 = (undefined8 *)(plVar21[0xe] + 0xfU & 0xfffffffffffffff0);
                puVar30 = puVar41 + 0x2e;
                local_530 = plVar19;
                if ((undefined8 *)plVar21[0xf] < puVar30) {
                  FUN_140023dd8(local_5b0,0x180);
                  puVar41 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
                  puVar30 = puVar41 + 0x2e;
                }
                plVar21 = local_5c8;
                local_5c8[0xe] = (longlong)puVar30;
                *puVar41 = &PTR_FUN_14a299488;
                local_538 = puVar41 + 2;
                FUN_14725bc34();
                iVar12 = (int)plVar21[0x14];
                *(uint *)(plVar21 + 0x14) = iVar12 + 1U;
                if (*(uint *)((longlong)plVar21 + 0xa4) < iVar12 + 1U) {
                  FUN_1448cfae8(local_578,iVar12);
                }
                plVar21 = local_5a8;
                *(undefined8 **)(*local_578 + (longlong)iVar12 * 8) = puVar41;
                puVar41[0xe] = *(undefined8 *)((longlong)local_5a8 + 0x2f8);
                bVar48 = false;
                puVar41[0xf] = 0;
                *(undefined4 *)(puVar41 + 0x10) = 0xffff0002;
                puVar41[0x11] = *(undefined8 *)((longlong)local_5a8 + 0x300);
                puVar41[0x12] = 0;
                *(undefined4 *)(puVar41 + 0x13) = 0xffff0002;
                if ((byte)local_5c0 != '\0') {
                  cVar7 = FUN_14743049a((short)local_5b8[0x115]);
                  if (cVar7 == '\0') {
                    cVar9 = '\x02' - ((*(byte *)(*(longlong *)((longlong)plVar21 + 0x1c8) + 0x61) &
                                      0x10) == 0);
                    uVar13 = 0x21;
                  }
                  else {
                    uVar13 = 0x22;
                    cVar9 = '\x02';
                  }
                  bVar48 = cVar7 != '\0';
                  puVar41[0x26] = *(longlong *)((longlong)plVar21 + 0x1c8);
                  puVar41[0x27] = 0;
                  *(char *)(puVar41 + 0x28) = cVar9;
                  *(char *)((longlong)puVar41 + 0x141) = cVar9;
                  *(undefined4 *)((longlong)puVar41 + 0x144) = uVar13;
                }
                FUN_140119f90(local_5a8,&local_1f8,*(undefined4 *)(lVar40 + 0x3090));
                auVar65._4_4_ = uStack_1e4;
                auVar65._0_4_ = local_1e8;
                auVar65._8_4_ = uStack_1e0;
                auVar65._12_4_ = uStack_1dc;
                *(undefined1 (*) [16])(puVar41 + 0xc) = auVar65;
                puVar41[10] = local_1f8;
                puVar41[0xb] = uStack_1f0;
                puVar41[2] = *(undefined8 *)(lVar40 + 0x18);
                *(undefined1 *)(puVar41 + 3) = 1;
                puVar41[4] = puVar37;
                *(int *)(puVar41 + 5) = (int)local_5a0;
                uVar18 = *(undefined8 *)(lVar40 + 0x13780);
                lVar39 = FUN_144a12b9e();
                cVar7 = *(char *)(lVar39 + 0x41);
                if (*(char *)(lVar39 + 0x41) == '\x03') {
                  cVar7 = '\x02';
                }
                puVar41[8] = uVar18;
                *(char *)(puVar41 + 9) = cVar7;
                puVar41[6] = *(undefined8 *)(lVar40 + 0x18);
                *(undefined1 *)(puVar41 + 7) = 1;
                FUN_14724e1a8(*(undefined8 *)(lVar40 + 0x13818),&local_368);
                puVar33 = local_5c0;
                uVar18 = *(undefined8 *)(lVar40 + 0x13818);
                FUN_145edd76e();
                FUN_1448e935e(uVar18,&local_1f8,&DAT_14ca12818,(ulonglong)puVar33 & 0xff);
                FUN_145edd76e();
                uVar18 = uStack_1f0;
                puVar41 = local_1f8;
                FUN_14725bd68();
                plVar21 = local_5c8;
                FUN_140069376(local_5c8);
                puVar33 = local_5b0;
                puVar37 = (undefined8 *)(plVar21[0xe] + 7U & 0xfffffffffffffff8);
                puVar30 = puVar37 + 0x40;
                if ((undefined8 *)plVar21[0xf] < puVar30) {
                  FUN_140023dd8(local_5b0,0x208);
                  puVar37 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                  puVar30 = puVar37 + 0x40;
                }
                puVar46 = local_538;
                *local_5b0 = (ulonglong)puVar30;
                local_1f8 = local_538;
                uStack_1f0 = DAT_14ca18938;
                if (DAT_14ca18938 != 0) {
                  LOCK();
                  *(int *)(DAT_14ca18938 + 8) = *(int *)(DAT_14ca18938 + 8) + 1;
                  UNLOCK();
                }
                local_1e8 = 0x4ca188f0;
                uStack_1e4 = 1;
                local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
                FUN_140068f1a(puVar37,&local_388,&local_1f8,1);
                ppuVar22 = local_558;
                plVar21 = local_5c8;
                *puVar37 = &PTR_FUN_14a299520;
                puVar37[0x37] = puVar46;
                puVar37[0x38] = local_368;
                puVar37[0x39] = uStack_360;
                puVar37[0x3a] = puVar41;
                puVar37[0x3b] = uVar18;
                puVar37[0x3c] = lVar40;
                puVar37[0x3d] = local_530;
                puVar37[0x3e] = local_548;
                *(char *)(puVar37 + 0x3f) = (char)local_5c0;
                *(bool *)((longlong)puVar37 + 0x1f9) = bVar48;
                *(undefined2 *)((longlong)puVar37 + 0x1fe) = local_228._4_2_;
                *(undefined4 *)((longlong)puVar37 + 0x1fa) = (undefined4)local_228;
                iVar12 = (int)local_5c8[0x2e];
                *(uint *)(local_5c8 + 0x2e) = iVar12 + 1U;
                if (*(uint *)((longlong)local_5c8 + 0x174) < iVar12 + 1U) {
                  FUN_14470e57a(local_558,iVar12);
                }
                *(undefined8 **)(plVar21[0x2d] + (longlong)iVar12 * 8) = puVar37;
                *(int *)((longlong)puVar37 + 0x2c) = (int)plVar21[0x2e] + -1;
                FUN_140069100(plVar21,puVar37);
                iVar12 = (int)local_5b8[0x7e];
                plVar28 = local_5a8;
                puVar43 = local_590;
                puVar33 = local_580;
                plVar29 = local_598;
                iVar31 = (int)local_570;
                iVar14 = (int)local_5a0;
              }
            }
            lVar38 = lVar38 + 1;
          } while (lVar38 < iVar12);
        }
      }
      plVar19 = local_5b8;
      if (*(char *)((longlong)local_5b8 + 0xd42) == '\x01') {
        if ((int)local_5b8[0x7e] < 1) {
          bVar8 = *(byte *)((longlong)plVar28 + 0x188) & 1;
        }
        else {
          bVar8 = 1;
          if ((*(byte *)((longlong)plVar28 + 0x188) & 1) == 0) {
            if (*plVar29 == 0) {
              bVar8 = 0;
            }
            else {
              bVar8 = (*(byte *)(*plVar29 + 0x3099) & 2) >> 1;
            }
          }
        }
        local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,bVar8);
        FUN_142ba9410(&local_1f8,plVar21,*(undefined8 *)((longlong)plVar28 + 0x20),
                      (short)local_5b8[0x115]);
        local_488._4_4_ = uStack_1e4;
        local_488._0_4_ = local_1e8;
        local_488._8_4_ = uStack_1e0;
        local_488._12_4_ = uStack_1dc;
        local_468 = local_1c8;
        local_478 = local_1d8;
        local_498 = local_1f8;
        lStack_490 = uStack_1f0;
        local_5e8 = local_568;
        FUN_142de99b8(plVar19,plVar21,plVar28);
        in_XMM2 = local_1d8;
        in_XMM3 = local_1c8;
      }
    }
    if ((longlong)(int)plVar19[0x7e] != 0) {
      lVar38 = plVar19[0x7d];
      lVar40 = (longlong)(int)plVar19[0x7e] * 0x13c10;
      do {
        if (*(char *)(lVar38 + 0x119c8) == '\x01') {
          FUN_142d05482(plVar21,lVar38);
        }
        lVar38 = lVar38 + 0x13c10;
        lVar40 = lVar40 + -0x13c10;
      } while (lVar40 != 0);
    }
  }
  lVar38 = plVar19[0x33];
  if ((longlong)(int)lVar38 != 0) {
    lVar40 = plVar19[0x32];
    lVar39 = 0;
    do {
      (**(code **)(**(longlong **)(lVar40 + lVar39) + 0x60))
                (*(longlong **)(lVar40 + lVar39),plVar21,*(undefined1 *)((longlong)plVar19 + 0xd56))
      ;
      lVar39 = lVar39 + 0x10;
    } while ((longlong)(int)lVar38 * 0x10 != lVar39);
  }
  if ((char)local_588 == '\0') {
    if (*(char *)((longlong)plVar19 + 0xd41) == '\x01') {
      if (*(char *)((longlong)plVar19 + 0xd4d) == '\x01') {
        FUN_14724f118(plVar19,&local_368,plVar28);
        FUN_14724f1fa(plVar19,&local_1f8,plVar28,&local_368);
        if (DAT_14c760a84 == -1) {
          FUN_145fdab76(&local_268,L"FRDGSystemTextures",
                        L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
          DAT_14c760a84 = FUN_145d12cf0(&local_268);
          plVar28 = local_5a8;
          plVar19 = local_5b8;
          plVar21 = local_5c8;
          if (CONCAT44(local_268._4_4_,(uint)local_268) != 0) {
            FUN_1400020a8();
            plVar28 = local_5a8;
            plVar19 = local_5b8;
            plVar21 = local_5c8;
          }
        }
        local_208 = (undefined1  [8])0x0;
        local_200 = (undefined1  [8])0x200000000;
        local_388 = plVar19[0x7d];
        uStack_380 = CONCAT44(uStack_380._4_4_,(int)plVar19[0x7e]);
        FUN_142df7ef9(&local_388,&local_228);
        auVar36 = local_208;
        if (local_208 == (undefined1  [8])0x0) {
          auVar36 = (undefined1  [8])&local_228;
        }
        if ((longlong)(int)local_200._0_4_ != 0) {
          local_5a0 = (ulonglong *)((longlong)auVar36 + (longlong)(int)local_200._0_4_ * 2 * 8);
          local_590 = (ulonglong *)(plVar21 + 0x2d);
          do {
            uVar27 = *(ulonglong *)auVar36;
            puVar33 = (ulonglong *)plVar21[3];
            if ((*(char *)(uVar27 + 0x23f2) == '\x01') && (*(int *)(uVar27 + 0x1dd0) != 0)) {
              cVar7 = FUN_144b2acba(uVar27);
              if (cVar7 == '\0') goto LAB_142dfc0fc;
              if ((((*(char *)(uVar27 + 0x23f4) == '\0') && (*(char *)(uVar27 + 0x23f5) != '\x01'))
                  || (*(int *)(uVar27 + 0x1dd0) == 0)) ||
                 (lVar38 = *(longlong *)(uVar27 + 8), lVar38 == 0)) {
LAB_142dfc5c7:
                lVar38 = 0;
              }
              else {
                iVar12 = *(int *)(uVar27 + 0x1dd8);
                if (((longlong)iVar12 < -1) || (*(int *)(lVar38 + 0x10) <= iVar12 + 1))
                goto LAB_142dfc5c7;
                lVar38 = *(longlong *)(*(longlong *)(lVar38 + 8) + 8 + (longlong)iVar12 * 8);
                cVar7 = FUN_144b2acc6(lVar38);
                if (cVar7 == '\0') {
                  lVar38 = 0;
                }
              }
              uVar15 = *(uint *)(uVar27 + 0x1de0) | *(uint *)(lVar38 + 0x1de0);
            }
            else {
LAB_142dfc0fc:
              uVar15 = *(uint *)(uVar27 + 0x1de0);
            }
            local_5c0 = (ulonglong *)CONCAT44(local_5c0._4_4_,*(uint *)((longlong)puVar33 + 0x17c));
            if (*(uint *)((longlong)puVar33 + 0x17c) != uVar15) {
              *(uint *)((longlong)puVar33 + 0x17c) = uVar15;
              puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
              puVar30 = puVar41 + 3;
              if ((undefined8 *)puVar33[1] < puVar30) {
                FUN_140023dd8(puVar33,0x20);
                puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
              }
              *puVar33 = (ulonglong)puVar30;
              *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
              *(undefined8 **)puVar33[6] = puVar41;
              puVar33[6] = (ulonglong)(puVar41 + 1);
              uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
              puVar41[1] = 0;
              *puVar41 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar41 + 2) = uVar13;
            }
            uVar15 = DAT_14ca44da0;
            if (DAT_14ca44da0 != 0) {
              puVar23 = DAT_14ca44d98;
              if (DAT_14ca44d98 == (uint *)0x0) {
                puVar23 = &DAT_14ca44d88;
              }
              uVar45 = *puVar23;
              if (uVar45 == 0) {
                iVar12 = DAT_14ca44da0 + 0x1e;
                if (-1 < (int)(DAT_14ca44da0 - 1)) {
                  iVar12 = DAT_14ca44da0 - 1;
                }
                uVar47 = 0;
                uVar32 = (ulonglong)(uint)(iVar12 >> 5);
                if (iVar12 >> 5 < 1) {
                  uVar32 = uVar47;
                }
                iVar12 = 0;
                do {
                  if (uVar32 == uVar47) goto LAB_142dfc183;
                  iVar12 = iVar12 + 0x20;
                  uVar45 = puVar23[uVar47 + 1];
                  uVar47 = uVar47 + 1;
                } while (uVar45 == 0);
              }
              else {
                iVar12 = 0;
                uVar47 = 0;
              }
              uVar35 = (ulonglong)(-uVar45 & uVar45);
              uVar32 = uVar35 * 2 + 1;
              lVar38 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                }
              }
              uVar45 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
              if ((int)uVar45 < (int)DAT_14ca44da0) {
                uVar26 = 0xffffffff;
                do {
                  plVar21 = *(longlong **)(DAT_14ca44d78 + (longlong)(int)uVar45 * 0x10);
                  (**(code **)(*plVar21 + 0x10))(plVar21,uVar27,1);
                  uVar26 = ~(uint)uVar35 & uVar26;
                  puVar23 = DAT_14ca44d98;
                  if (DAT_14ca44d98 == (uint *)0x0) {
                    puVar23 = &DAT_14ca44d88;
                  }
                  iVar14 = (int)uVar47;
                  lVar38 = (longlong)iVar14;
                  uVar45 = puVar23[lVar38] & uVar26;
                  if (uVar45 == 0) {
                    iVar31 = DAT_14ca44da0 + 0x1e;
                    if (-1 < (int)(DAT_14ca44da0 - 1)) {
                      iVar31 = DAT_14ca44da0 - 1;
                    }
                    iVar31 = iVar31 >> 5;
                    iVar12 = iVar12 + 0x20;
                    iVar24 = iVar31;
                    if (iVar31 < iVar14) {
                      iVar24 = iVar14;
                    }
                    if (iVar14 < iVar31) {
                      lVar40 = 0;
                      do {
                        uVar45 = puVar23[lVar38 + lVar40 + 1];
                        if (uVar45 != 0) {
                          uVar47 = (ulonglong)(iVar14 + (int)lVar40 + 1);
                          uVar26 = 0xffffffff;
                          goto LAB_142dfc6f9;
                        }
                        iVar12 = iVar12 + 0x20;
                        lVar40 = lVar40 + 1;
                      } while (iVar24 - lVar38 != lVar40);
                      uVar26 = 0xffffffff;
                      iVar14 = iVar24;
                    }
                    uVar47 = (ulonglong)(iVar14 + 1);
                    uVar45 = DAT_14ca44da0;
                  }
                  else {
LAB_142dfc6f9:
                    uVar35 = (ulonglong)(-uVar45 & uVar45);
                    uVar32 = uVar35 * 2 + 1;
                    lVar38 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                      }
                    }
                    uVar45 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
                    if ((int)DAT_14ca44da0 <= (int)uVar45) {
                      uVar45 = DAT_14ca44da0;
                    }
                  }
                } while (uVar45 != uVar15);
              }
            }
LAB_142dfc183:
            puVar43 = local_5b0;
            puVar41 = (undefined8 *)(local_5c8[0xe] + 0xfU & 0xfffffffffffffff0);
            puVar30 = puVar41 + 0x40;
            if ((undefined8 *)local_5c8[0xf] < puVar30) {
              FUN_140023dd8(local_5b0,0x210);
              puVar41 = (undefined8 *)(*puVar43 + 0xf & 0xfffffffffffffff0);
              puVar30 = puVar41 + 0x40;
            }
            plVar21 = local_5c8;
            local_5c8[0xe] = (longlong)puVar30;
            *puVar41 = &PTR_FUN_14a2996a8;
            plVar19 = puVar41 + 2;
            FUN_14725cba6(plVar19);
            iVar12 = (int)plVar21[0x14];
            *(uint *)(plVar21 + 0x14) = iVar12 + 1U;
            if (*(uint *)((longlong)plVar21 + 0xa4) < iVar12 + 1U) {
              FUN_1448cfae8(local_578,iVar12);
            }
            plVar21 = local_5c8;
            *(undefined8 **)(local_5c8[0x13] + (longlong)iVar12 * 8) = puVar41;
            FUN_1448c58dc(uVar27,&local_268);
            plVar29 = local_5b8;
            auVar3._8_8_ = uStack_250;
            auVar3._0_8_ = local_258;
            *(undefined1 (*) [16])(puVar41 + 4) = auVar3;
            *plVar19 = (longlong)local_268;
            puVar41[3] = CONCAT44(iStack_25c,iStack_260);
            local_238 = 0;
            uStack_230 = 0;
            local_248 = (undefined8 *)0x0;
            uStack_240 = 0;
            local_258 = (undefined *)0x0;
            uStack_250 = 0;
            local_268._0_4_ = 0;
            local_268._4_4_ = 0;
            iStack_260 = 0;
            iStack_25c = 0;
            local_5e8 = (longlong **)&local_268;
            uVar18 = FUN_147241975(plVar21,uVar27,1,(uint)*(byte *)((longlong)local_5b8 + 0xd56) * 2
                                  );
            lVar38 = FUN_145d50964();
            cVar7 = *(char *)(lVar38 + 0x41);
            if (*(char *)(lVar38 + 0x41) == '\x03') {
              cVar7 = '\x02';
            }
            puVar41[0x12] = uVar18;
            *(char *)(puVar41 + 0x13) = cVar7;
            memcpy(puVar41 + 0x20,&local_1f8,0xf8);
            plVar21 = local_5c8;
            if (*(char *)((longlong)auVar36 + 0xc) == '\0') {
              if (0 < (int)uStack_330) {
                puVar30 = puVar41 + 0x22;
                lVar38 = 0;
                do {
                  *(undefined1 *)puVar30 = 1;
                  lVar38 = lVar38 + 1;
                  puVar30 = puVar30 + 3;
                } while (lVar38 < (int)uStack_330);
              }
              *(undefined2 *)(puVar41 + 0x3a) = 0x101;
              *(uint *)((longlong)puVar41 + 0x1d4) =
                   0x22 - (uint)*(byte *)((longlong)local_5b8 + 0xd56);
              plVar29 = local_5b8;
            }
            uVar10 = 0;
            iVar12 = 0;
            if ((*(char *)((longlong)plVar29 + 0xd56) == '\0') &&
               (uVar10 = 0, *(char *)((longlong)auVar36 + 0xd) == '\x01')) {
              iVar12 = 0;
              if (DAT_14c7609fc == '\x01') {
                uVar10 = 1;
                if (0 < (longlong)(int)local_5b8[0x7e]) {
                  lVar38 = 0;
                  iVar12 = 0;
                  do {
                    iVar12 = iVar12 + *(int *)(*local_598 + 0x136a8 + lVar38) +
                             *(int *)(*local_598 + 0x136d0 + lVar38);
                    lVar38 = lVar38 + 0x13c10;
                  } while ((longlong)(int)local_5b8[0x7e] * 0x13c10 - lVar38 != 0);
                }
              }
              else {
                uVar10 = 0;
              }
            }
            *(int *)(puVar41 + 0x3d) = iVar12;
            FUN_14724fa4a(local_5b8,local_5c8,uVar27,plVar19);
            local_398 = *(ulonglong *)auVar36;
            uStack_390 = *(ulonglong *)((longlong)auVar36 + 8);
            FUN_14725ccb4();
            FUN_140069376(plVar21);
            puVar43 = local_5b0;
            puVar41 = (undefined8 *)(plVar21[0xe] + 7U & 0xfffffffffffffff8);
            puVar30 = puVar41 + 0x3d;
            if ((undefined8 *)plVar21[0xf] < puVar30) {
              FUN_140023dd8(local_5b0,0x1f0);
              puVar41 = (undefined8 *)(*puVar43 + 7 & 0xfffffffffffffff8);
              puVar30 = puVar41 + 0x3d;
            }
            *local_5b0 = (ulonglong)puVar30;
            iStack_260 = (int)DAT_14ca18a78;
            iStack_25c = (int)((ulonglong)DAT_14ca18a78 >> 0x20);
            if (DAT_14ca18a78 != 0) {
              LOCK();
              *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
              UNLOCK();
            }
            local_258 = &DAT_14ca18a30;
            local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
            local_268 = plVar19;
            FUN_140068f1a(puVar41,&local_36b,&local_268,1);
            plVar28 = local_5a8;
            *puVar41 = &PTR_FUN_14a299850;
            puVar41[0x37] = local_5b8;
            puVar41[0x38] = plVar19;
            puVar41[0x39] = local_398;
            puVar41[0x3a] = uStack_390;
            puVar41[0x3b] = local_5a8;
            *(undefined1 *)(puVar41 + 0x3c) = uVar10;
            *(uint *)((longlong)puVar41 + 0x1e4) = CONCAT31(uStack_36e,local_372._3_1_);
            *(undefined4 *)((longlong)puVar41 + 0x1e1) = local_372;
            iVar12 = (int)plVar21[0x2e];
            *(uint *)(plVar21 + 0x2e) = iVar12 + 1U;
            if (*(uint *)((longlong)plVar21 + 0x174) < iVar12 + 1U) {
              FUN_14470e57a(local_590,iVar12);
            }
            *(undefined8 **)(plVar21[0x2d] + (longlong)iVar12 * 8) = puVar41;
            *(int *)((longlong)puVar41 + 0x2c) = (int)plVar21[0x2e] + -1;
            FUN_140069100(plVar21,puVar41);
            if (*(int *)((longlong)puVar33 + 0x17c) != (int)local_5c0) {
              *(int *)((longlong)puVar33 + 0x17c) = (int)local_5c0;
              puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
              puVar30 = puVar41 + 3;
              if ((undefined8 *)puVar33[1] < puVar30) {
                FUN_140023dd8(puVar33,0x20);
                puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
              }
              *puVar33 = (ulonglong)puVar30;
              *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
              *(undefined8 **)puVar33[6] = puVar41;
              puVar33[6] = (ulonglong)(puVar41 + 1);
              uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
              puVar41[1] = 0;
              *puVar41 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar41 + 2) = uVar13;
            }
            auVar36 = (undefined1  [8])((longlong)auVar36 + 0x10);
          } while (auVar36 != (undefined1  [8])local_5a0);
        }
        plVar19 = local_5b8;
        if ((*(char *)((longlong)local_5b8 + 0xd54) != '\0') &&
           (*(char *)((longlong)local_5b8 + 0xd56) == '\0')) {
          FUN_142dfe366(local_5b8,plVar21,*(undefined8 *)((longlong)plVar28 + 0x1c0));
        }
        lVar38 = 0x10;
        do {
          if (*(longlong *)(local_208 + lVar38) == 0) break;
          *(undefined1 *)((longlong)&local_1f8 + lVar38) = 1;
          lVar38 = lVar38 + 0x18;
        } while (lVar38 != 0xd0);
        local_128 = 0x101;
        iStack_124 = 0x21;
        if (*(char *)((longlong)plVar19 + 0xd56) == '\0') {
          auVar36 = local_208;
          if (local_208 == (undefined1  [8])0x0) {
            auVar36 = (undefined1  [8])&local_228;
          }
          if (local_200._0_4_ != 0) {
            local_590 = (ulonglong *)((longlong)auVar36 + (longlong)(int)local_200._0_4_ * 2 * 8);
            local_580 = (ulonglong *)(plVar19 + 0x1de);
            local_570 = (ulonglong *)(plVar21 + 0x2d);
            do {
              puVar33 = *(ulonglong **)auVar36;
              local_5a0 = (ulonglong *)plVar21[3];
              local_5c0 = puVar33;
              if ((*(char *)((longlong)puVar33 + 0x23f2) == '\x01') && ((int)puVar33[0x3ba] != 0)) {
                cVar7 = FUN_144b2acba(puVar33);
                plVar19 = local_5b8;
                if (cVar7 == '\0') goto LAB_142dfb75d;
                if ((((*(char *)((longlong)local_5c0 + 0x23f4) == '\0') &&
                     (*(char *)((longlong)local_5c0 + 0x23f5) != '\x01')) ||
                    ((int)local_5c0[0x3ba] == 0)) || (uVar27 = local_5c0[1], uVar27 == 0)) {
LAB_142dfbb24:
                  lVar38 = 0;
                }
                else {
                  iVar12 = (int)local_5c0[0x3bb];
                  if (((longlong)iVar12 < -1) || (*(int *)(uVar27 + 0x10) <= iVar12 + 1))
                  goto LAB_142dfbb24;
                  lVar38 = *(longlong *)(*(longlong *)(uVar27 + 8) + 8 + (longlong)iVar12 * 8);
                  cVar7 = FUN_144b2acc6(lVar38);
                  if (cVar7 == '\0') {
                    lVar38 = 0;
                  }
                }
                uVar15 = (uint)puVar33[0x3bc] | *(uint *)(lVar38 + 0x1de0);
                plVar19 = local_5b8;
              }
              else {
LAB_142dfb75d:
                uVar15 = (uint)puVar33[0x3bc];
              }
              puVar33 = local_5a0;
              uVar45 = *(uint *)((longlong)local_5a0 + 0x17c);
              if (uVar45 != uVar15) {
                *(uint *)((longlong)local_5a0 + 0x17c) = uVar15;
                puVar41 = (undefined8 *)(*local_5a0 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
                if ((undefined8 *)local_5a0[1] < puVar30) {
                  FUN_140023dd8(local_5a0,0x20);
                  puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                  puVar30 = puVar41 + 3;
                }
                *puVar33 = (ulonglong)puVar30;
                *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
                *(undefined8 **)puVar33[6] = puVar41;
                puVar33[6] = (ulonglong)(puVar41 + 1);
                uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
                puVar41[1] = 0;
                *puVar41 = &PTR_FUN_14a1fb2c0;
                *(undefined4 *)(puVar41 + 2) = uVar13;
              }
              uVar15 = DAT_14ca44da0;
              if (DAT_14ca44da0 != 0) {
                puVar23 = DAT_14ca44d98;
                if (DAT_14ca44d98 == (uint *)0x0) {
                  puVar23 = &DAT_14ca44d88;
                }
                uVar26 = *puVar23;
                plVar19 = local_5b8;
                if (uVar26 == 0) {
                  iVar12 = DAT_14ca44da0 + 0x1e;
                  if (-1 < (int)(DAT_14ca44da0 - 1)) {
                    iVar12 = DAT_14ca44da0 - 1;
                  }
                  uVar27 = 0;
                  uVar47 = (ulonglong)(uint)(iVar12 >> 5);
                  if (iVar12 >> 5 < 1) {
                    uVar47 = uVar27;
                  }
                  iVar12 = 0;
                  do {
                    if (uVar47 == uVar27) goto LAB_142dfb7e3;
                    iVar12 = iVar12 + 0x20;
                    uVar26 = puVar23[uVar27 + 1];
                    uVar27 = uVar27 + 1;
                  } while (uVar26 == 0);
                }
                else {
                  iVar12 = 0;
                  uVar27 = 0;
                }
                uVar32 = (ulonglong)(-uVar26 & uVar26);
                uVar47 = uVar32 * 2 + 1;
                lVar38 = 0x3f;
                if (uVar47 != 0) {
                  for (; uVar47 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                  }
                }
                uVar26 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
                if ((int)uVar26 < (int)DAT_14ca44da0) {
                  uVar25 = 0xffffffff;
                  do {
                    plVar21 = *(longlong **)(DAT_14ca44d78 + (longlong)(int)uVar26 * 0x10);
                    (**(code **)(*plVar21 + 0x10))(plVar21,local_5c0,1);
                    uVar25 = ~(uint)uVar32 & uVar25;
                    puVar23 = DAT_14ca44d98;
                    if (DAT_14ca44d98 == (uint *)0x0) {
                      puVar23 = &DAT_14ca44d88;
                    }
                    iVar14 = (int)uVar27;
                    lVar38 = (longlong)iVar14;
                    uVar26 = puVar23[lVar38] & uVar25;
                    if (uVar26 == 0) {
                      iVar31 = DAT_14ca44da0 + 0x1e;
                      if (-1 < (int)(DAT_14ca44da0 - 1)) {
                        iVar31 = DAT_14ca44da0 - 1;
                      }
                      iVar31 = iVar31 >> 5;
                      iVar12 = iVar12 + 0x20;
                      iVar24 = iVar31;
                      if (iVar31 < iVar14) {
                        iVar24 = iVar14;
                      }
                      if (iVar14 < iVar31) {
                        lVar40 = 0;
                        do {
                          uVar26 = puVar23[lVar38 + lVar40 + 1];
                          if (uVar26 != 0) {
                            uVar27 = (ulonglong)(iVar14 + (int)lVar40 + 1);
                            uVar25 = 0xffffffff;
                            goto LAB_142dfbc64;
                          }
                          iVar12 = iVar12 + 0x20;
                          lVar40 = lVar40 + 1;
                        } while (iVar24 - lVar38 != lVar40);
                        uVar25 = 0xffffffff;
                        iVar14 = iVar24;
                      }
                      uVar27 = (ulonglong)(iVar14 + 1);
                      uVar26 = DAT_14ca44da0;
                    }
                    else {
LAB_142dfbc64:
                      uVar32 = (ulonglong)(-uVar26 & uVar26);
                      uVar47 = uVar32 * 2 + 1;
                      lVar38 = 0x3f;
                      if (uVar47 != 0) {
                        for (; uVar47 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                        }
                      }
                      uVar26 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
                      if ((int)DAT_14ca44da0 <= (int)uVar26) {
                        uVar26 = DAT_14ca44da0;
                      }
                    }
                    plVar19 = local_5b8;
                  } while (uVar26 != uVar15);
                }
              }
LAB_142dfb7e3:
              puVar33 = local_5b0;
              plVar21 = local_5c8;
              puVar41 = (undefined8 *)(local_5c8[0xe] + 0xfU & 0xfffffffffffffff0);
              puVar30 = puVar41 + 0x40;
              if ((undefined8 *)local_5c8[0xf] < puVar30) {
                FUN_140023dd8(local_5b0,0x210);
                puVar41 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
                puVar30 = puVar41 + 0x40;
              }
              plVar21[0xe] = (longlong)puVar30;
              *puVar41 = &PTR_FUN_14a2996a8;
              plVar29 = puVar41 + 2;
              FUN_14725cba6(plVar29);
              iVar12 = (int)plVar21[0x14];
              *(uint *)(plVar21 + 0x14) = iVar12 + 1U;
              if (*(uint *)((longlong)plVar21 + 0xa4) < iVar12 + 1U) {
                FUN_1448cfae8(local_578,iVar12);
              }
              puVar33 = local_5c0;
              *(undefined8 **)(plVar21[0x13] + (longlong)iVar12 * 8) = puVar41;
              FUN_1448c58dc(local_5c0,&local_268);
              auVar2._8_8_ = uStack_250;
              auVar2._0_8_ = local_258;
              *(undefined1 (*) [16])(puVar41 + 4) = auVar2;
              *plVar29 = (longlong)local_268;
              puVar41[3] = CONCAT44(iStack_25c,iStack_260);
              local_238 = 0;
              uStack_230 = 0;
              local_248 = (undefined8 *)0x0;
              uStack_240 = 0;
              local_258 = (undefined *)0x0;
              uStack_250 = 0;
              local_268._0_4_ = 0;
              local_268._4_4_ = 0;
              iStack_260 = 0;
              iStack_25c = 0;
              local_5e8 = (longlong **)&local_268;
              uVar18 = FUN_147241975(plVar21,puVar33,1,2);
              lVar38 = FUN_145d50964();
              cVar7 = *(char *)(lVar38 + 0x41);
              if (*(char *)(lVar38 + 0x41) == '\x03') {
                cVar7 = '\x02';
              }
              puVar41[0x12] = uVar18;
              *(char *)(puVar41 + 0x13) = cVar7;
              memcpy(puVar41 + 0x20,&local_1f8,0xf8);
              puVar33 = local_580;
              puVar43 = puVar41 + 6;
              for (lVar38 = 0xc; lVar38 != 0; lVar38 = lVar38 + -1) {
                *puVar43 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar43 = puVar43 + 1;
              }
              FUN_14725ccb4();
              FUN_140069376(plVar21);
              puVar33 = local_5b0;
              puVar41 = (undefined8 *)(plVar21[0xe] + 7U & 0xfffffffffffffff8);
              puVar30 = puVar41 + 0x3a;
              if ((undefined8 *)plVar21[0xf] < puVar30) {
                FUN_140023dd8(local_5b0,0x1d8);
                puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 0x3a;
              }
              *local_5b0 = (ulonglong)puVar30;
              iStack_260 = (int)DAT_14ca18a78;
              iStack_25c = (int)((ulonglong)DAT_14ca18a78 >> 0x20);
              if (DAT_14ca18a78 != 0) {
                LOCK();
                *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
                UNLOCK();
              }
              local_258 = &DAT_14ca18a30;
              local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
              local_268 = plVar29;
              FUN_140068f1a(puVar41,&local_398,&local_268,1);
              *puVar41 = &PTR_FUN_14a299870;
              puVar41[0x37] = plVar19;
              puVar41[0x38] = plVar29;
              puVar41[0x39] = local_5c0;
              iVar12 = (int)plVar21[0x2e];
              *(uint *)(plVar21 + 0x2e) = iVar12 + 1U;
              if (*(uint *)((longlong)plVar21 + 0x174) < iVar12 + 1U) {
                FUN_14470e57a(local_570,iVar12);
              }
              *(undefined8 **)(plVar21[0x2d] + (longlong)iVar12 * 8) = puVar41;
              *(int *)((longlong)puVar41 + 0x2c) = (int)plVar21[0x2e] + -1;
              FUN_140069100(plVar21,puVar41);
              puVar33 = local_5a0;
              plVar28 = local_5a8;
              if (*(uint *)((longlong)local_5a0 + 0x17c) != uVar45) {
                *(uint *)((longlong)local_5a0 + 0x17c) = uVar45;
                puVar41 = (undefined8 *)(*local_5a0 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
                if ((undefined8 *)local_5a0[1] < puVar30) {
                  FUN_140023dd8(local_5a0,0x20);
                  puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                  puVar30 = puVar41 + 3;
                }
                *puVar33 = (ulonglong)puVar30;
                *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
                *(undefined8 **)puVar33[6] = puVar41;
                puVar33[6] = (ulonglong)(puVar41 + 1);
                uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
                puVar41[1] = 0;
                *puVar41 = &PTR_FUN_14a1fb2c0;
                *(undefined4 *)(puVar41 + 2) = uVar13;
              }
              auVar36 = (undefined1  [8])((longlong)auVar36 + 0x10);
            } while (auVar36 != (undefined1  [8])local_590);
            goto LAB_142dfd31e;
          }
        }
        else {
LAB_142dfd31e:
          auVar36 = (undefined1  [8])&local_228;
          if (local_208 != (undefined1  [8])0x0) {
            auVar36 = local_208;
          }
          if (local_200._0_4_ != 0) {
            local_580 = (ulonglong *)((longlong)auVar36 + (longlong)(int)local_200._0_4_ * 2 * 8);
            local_590 = (ulonglong *)(plVar19 + 0x1d2);
            local_570 = (ulonglong *)(plVar21 + 0x2d);
            do {
              uVar27 = *(ulonglong *)auVar36;
              local_5c0 = (ulonglong *)plVar21[3];
              if ((*(char *)(uVar27 + 0x23f2) == '\x01') && (*(int *)(uVar27 + 0x1dd0) != 0)) {
                cVar7 = FUN_144b2acba(uVar27);
                plVar19 = local_5b8;
                if (cVar7 == '\0') goto LAB_142dfd5fe;
                if ((((*(char *)(uVar27 + 0x23f4) == '\0') && (*(char *)(uVar27 + 0x23f5) != '\x01')
                     ) || (*(int *)(uVar27 + 0x1dd0) == 0)) ||
                   (lVar38 = *(longlong *)(uVar27 + 8), lVar38 == 0)) {
LAB_142dfdaa2:
                  lVar38 = 0;
                }
                else {
                  iVar12 = *(int *)(uVar27 + 0x1dd8);
                  if (((longlong)iVar12 < -1) || (*(int *)(lVar38 + 0x10) <= iVar12 + 1))
                  goto LAB_142dfdaa2;
                  lVar38 = *(longlong *)(*(longlong *)(lVar38 + 8) + 8 + (longlong)iVar12 * 8);
                  cVar7 = FUN_144b2acc6(lVar38);
                  if (cVar7 == '\0') {
                    lVar38 = 0;
                  }
                }
                uVar15 = *(uint *)(uVar27 + 0x1de0) | *(uint *)(lVar38 + 0x1de0);
                plVar19 = local_5b8;
              }
              else {
LAB_142dfd5fe:
                uVar15 = *(uint *)(uVar27 + 0x1de0);
              }
              puVar33 = local_5c0;
              local_5a0 = (ulonglong *)
                          CONCAT44(local_5a0._4_4_,*(uint *)((longlong)local_5c0 + 0x17c));
              if (*(uint *)((longlong)local_5c0 + 0x17c) != uVar15) {
                *(uint *)((longlong)local_5c0 + 0x17c) = uVar15;
                puVar41 = (undefined8 *)(*local_5c0 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
                if ((undefined8 *)local_5c0[1] < puVar30) {
                  FUN_140023dd8(local_5c0,0x20);
                  puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                  puVar30 = puVar41 + 3;
                }
                *puVar33 = (ulonglong)puVar30;
                *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
                *(undefined8 **)puVar33[6] = puVar41;
                puVar33[6] = (ulonglong)(puVar41 + 1);
                uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
                puVar41[1] = 0;
                *puVar41 = &PTR_FUN_14a1fb2c0;
                *(undefined4 *)(puVar41 + 2) = uVar13;
              }
              uVar15 = DAT_14ca44da0;
              if (DAT_14ca44da0 != 0) {
                puVar23 = DAT_14ca44d98;
                if (DAT_14ca44d98 == (uint *)0x0) {
                  puVar23 = &DAT_14ca44d88;
                }
                uVar45 = *puVar23;
                plVar19 = local_5b8;
                local_588 = uVar27;
                if (uVar45 == 0) {
                  iVar12 = DAT_14ca44da0 + 0x1e;
                  if (-1 < (int)(DAT_14ca44da0 - 1)) {
                    iVar12 = DAT_14ca44da0 - 1;
                  }
                  uVar47 = 0;
                  uVar32 = (ulonglong)(uint)(iVar12 >> 5);
                  if (iVar12 >> 5 < 1) {
                    uVar32 = uVar47;
                  }
                  iVar12 = 0;
                  do {
                    if (uVar32 == uVar47) goto LAB_142dfd683;
                    iVar12 = iVar12 + 0x20;
                    uVar45 = puVar23[uVar47 + 1];
                    uVar47 = uVar47 + 1;
                  } while (uVar45 == 0);
                }
                else {
                  uVar47 = 0;
                  iVar12 = 0;
                }
                uVar35 = (ulonglong)(-uVar45 & uVar45);
                uVar32 = uVar35 * 2 + 1;
                lVar38 = 0x3f;
                if (uVar32 != 0) {
                  for (; uVar32 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                  }
                }
                uVar45 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
                if ((int)uVar45 < (int)DAT_14ca44da0) {
                  uVar26 = 0xffffffff;
                  do {
                    plVar21 = *(longlong **)(DAT_14ca44d78 + (longlong)(int)uVar45 * 0x10);
                    (**(code **)(*plVar21 + 0x10))(plVar21,local_588,1);
                    uVar26 = ~(uint)uVar35 & uVar26;
                    puVar23 = DAT_14ca44d98;
                    if (DAT_14ca44d98 == (uint *)0x0) {
                      puVar23 = &DAT_14ca44d88;
                    }
                    iVar14 = (int)uVar47;
                    lVar38 = (longlong)iVar14;
                    uVar45 = puVar23[lVar38] & uVar26;
                    if (uVar45 == 0) {
                      iVar31 = DAT_14ca44da0 + 0x1e;
                      if (-1 < (int)(DAT_14ca44da0 - 1)) {
                        iVar31 = DAT_14ca44da0 - 1;
                      }
                      iVar31 = iVar31 >> 5;
                      iVar12 = iVar12 + 0x20;
                      iVar24 = iVar31;
                      if (iVar31 < iVar14) {
                        iVar24 = iVar14;
                      }
                      if (iVar14 < iVar31) {
                        lVar40 = 0;
                        do {
                          uVar45 = puVar23[lVar38 + lVar40 + 1];
                          if (uVar45 != 0) {
                            uVar47 = (ulonglong)(iVar14 + (int)lVar40 + 1);
                            uVar26 = 0xffffffff;
                            goto LAB_142dfdc01;
                          }
                          iVar12 = iVar12 + 0x20;
                          lVar40 = lVar40 + 1;
                        } while (iVar24 - lVar38 != lVar40);
                        uVar26 = 0xffffffff;
                        iVar14 = iVar24;
                      }
                      uVar47 = (ulonglong)(iVar14 + 1);
                      uVar45 = DAT_14ca44da0;
                    }
                    else {
LAB_142dfdc01:
                      uVar35 = (ulonglong)(-uVar45 & uVar45);
                      uVar27 = uVar35 * 2 + 1;
                      lVar38 = 0x3f;
                      if (uVar27 != 0) {
                        for (; uVar27 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                        }
                      }
                      uVar45 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
                      if ((int)DAT_14ca44da0 <= (int)uVar45) {
                        uVar45 = DAT_14ca44da0;
                      }
                    }
                    uVar27 = local_588;
                    plVar19 = local_5b8;
                  } while (uVar45 != uVar15);
                }
              }
LAB_142dfd683:
              plVar21 = local_5c8;
              FUN_142df73a2(plVar19,local_5c8,uVar27);
              puVar33 = local_5b0;
              puVar41 = (undefined8 *)(plVar21[0xe] + 0xfU & 0xfffffffffffffff0);
              puVar30 = puVar41 + 0x40;
              if ((undefined8 *)plVar21[0xf] < puVar30) {
                FUN_140023dd8(local_5b0,0x210);
                puVar41 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
                puVar30 = puVar41 + 0x40;
              }
              plVar21[0xe] = (longlong)puVar30;
              *puVar41 = &PTR_FUN_14a2996a8;
              plVar29 = puVar41 + 2;
              FUN_14725cba6(plVar29);
              iVar12 = (int)plVar21[0x14];
              *(uint *)(plVar21 + 0x14) = iVar12 + 1U;
              if (*(uint *)((longlong)plVar21 + 0xa4) < iVar12 + 1U) {
                FUN_1448cfae8(local_578,iVar12);
              }
              *(undefined8 **)(plVar21[0x13] + (longlong)iVar12 * 8) = puVar41;
              FUN_1448c58dc(uVar27,&local_268);
              auVar5._8_8_ = uStack_250;
              auVar5._0_8_ = local_258;
              *(undefined1 (*) [16])(puVar41 + 4) = auVar5;
              *plVar29 = (longlong)local_268;
              puVar41[3] = CONCAT44(iStack_25c,iStack_260);
              local_238 = 0;
              uStack_230 = 0;
              local_248 = (undefined8 *)0x0;
              uStack_240 = 0;
              local_258 = (undefined *)0x0;
              uStack_250 = 0;
              local_268._0_4_ = 0;
              local_268._4_4_ = 0;
              iStack_260 = 0;
              iStack_25c = 0;
              local_5e8 = (longlong **)&local_268;
              uVar18 = FUN_147241975(plVar21,uVar27,2,0xfe);
              lVar38 = FUN_145d50964();
              cVar7 = *(char *)(lVar38 + 0x41);
              if (*(char *)(lVar38 + 0x41) == '\x03') {
                cVar7 = '\x02';
              }
              puVar41[0x12] = uVar18;
              *(char *)(puVar41 + 0x13) = cVar7;
              lVar38 = FUN_145d59ed4();
              cVar7 = *(char *)(lVar38 + 0x41);
              if (cVar7 == '\x03') {
                cVar7 = '\x02';
              }
              puVar41[0x14] = *(undefined8 *)(uVar27 + 0x13718);
              *(char *)(puVar41 + 0x15) = cVar7;
              puVar41[0x16] = *(undefined8 *)(uVar27 + 0x118f0);
              puVar41[0x17] = *(undefined8 *)(uVar27 + 0x11920);
              *(undefined4 *)(puVar41 + 0x18) = 4;
              puVar41[0x19] = *(undefined8 *)(uVar27 + 0x119b8);
              puVar41[0x1a] = *(undefined8 *)(uVar27 + 0x11910);
              puVar41[0x1b] = *(undefined8 *)(uVar27 + 0x119e0);
              puVar41[0x1c] = *(undefined8 *)(uVar27 + 0x119f0);
              puVar41[0x22] = CONCAT44(uStack_1e4,local_1e8);
              puVar41[0x20] = local_1f8;
              puVar41[0x21] = uStack_1f0;
              puVar41[0x38] = local_138;
              puVar41[0x39] = uStack_130;
              puVar41[0x3a] = CONCAT44(iStack_124,CONCAT22(uStack_126,local_128));
              puVar33 = local_590;
              puVar43 = puVar41 + 6;
              for (lVar38 = 0xc; lVar38 != 0; lVar38 = lVar38 + -1) {
                *puVar43 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar43 = puVar43 + 1;
              }
              uVar13 = FUN_14724fe42(uVar27,*(undefined1 *)((longlong)plVar19 + 0xd53));
              local_398 = *(ulonglong *)auVar36;
              uStack_390 = *(ulonglong *)((longlong)auVar36 + 8);
              FUN_14725ccb4();
              FUN_140069376(plVar21);
              puVar33 = local_5b0;
              puVar41 = (undefined8 *)(plVar21[0xe] + 7U & 0xfffffffffffffff8);
              puVar30 = puVar41 + 0x3e;
              if ((undefined8 *)plVar21[0xf] < puVar30) {
                FUN_140023dd8(local_5b0,0x1f8);
                puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 0x3e;
              }
              *local_5b0 = (ulonglong)puVar30;
              iStack_260 = (int)DAT_14ca18a78;
              iStack_25c = (int)((ulonglong)DAT_14ca18a78 >> 0x20);
              if (DAT_14ca18a78 != 0) {
                LOCK();
                *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
                UNLOCK();
              }
              local_258 = &DAT_14ca18a30;
              local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
              local_268 = plVar29;
              FUN_140068f1a(puVar41,&local_372,&local_268,1);
              plVar28 = local_5a8;
              *puVar41 = &PTR_FUN_14a299890;
              puVar41[0x37] = plVar19;
              puVar41[0x38] = plVar29;
              puVar41[0x39] = local_398;
              puVar41[0x3a] = uStack_390;
              *(undefined4 *)(puVar41 + 0x3b) = uVar13;
              puVar41[0x3c] = local_5a8;
              puVar41[0x3d] = local_548;
              iVar12 = (int)plVar21[0x2e];
              *(uint *)(plVar21 + 0x2e) = iVar12 + 1U;
              if (*(uint *)((longlong)plVar21 + 0x174) < iVar12 + 1U) {
                FUN_14470e57a(local_570,iVar12);
              }
              *(undefined8 **)(plVar21[0x2d] + (longlong)iVar12 * 8) = puVar41;
              *(int *)((longlong)puVar41 + 0x2c) = (int)plVar21[0x2e] + -1;
              FUN_140069100(plVar21,puVar41);
              puVar33 = local_5c0;
              if (*(int *)((longlong)local_5c0 + 0x17c) != (int)local_5a0) {
                *(int *)((longlong)local_5c0 + 0x17c) = (int)local_5a0;
                puVar41 = (undefined8 *)(*local_5c0 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
                if ((undefined8 *)local_5c0[1] < puVar30) {
                  FUN_140023dd8(local_5c0,0x20);
                  puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                  puVar30 = puVar41 + 3;
                }
                *puVar33 = (ulonglong)puVar30;
                *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
                *(undefined8 **)puVar33[6] = puVar41;
                puVar33[6] = (ulonglong)(puVar41 + 1);
                uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
                puVar41[1] = 0;
                *puVar41 = &PTR_FUN_14a1fb2c0;
                *(undefined4 *)(puVar41 + 2) = uVar13;
              }
              auVar36 = (undefined1  [8])((longlong)auVar36 + 0x10);
            } while (auVar36 != (undefined1  [8])local_580);
          }
        }
        FUN_142e2a674(local_208);
        plVar29 = local_598;
        if (local_338 != 0) {
          FUN_1400020a8();
          plVar29 = local_598;
        }
      }
      else {
        uVar13 = 0;
        if ((DAT_14ca84dff & 1) != 0) {
          uVar13 = _DAT_14ca84e00;
        }
        if (((&DAT_14ca814c8)[(ulonglong)*(ushort *)(plVar19 + 0x115) * 0xf] & 0x20) == 0) {
          uVar13 = 0;
        }
        local_590 = (ulonglong *)CONCAT44(local_590._4_4_,uVar13);
        FUN_14724f118(plVar19,&local_368,plVar28);
        FUN_14724f1fa(plVar19,&local_1f8,plVar28,&local_368);
        if (DAT_14c760a84 == -1) {
          FUN_145fdab76(&local_268,L"FRDGSystemTextures",
                        L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
          DAT_14c760a84 = FUN_145d12cf0(&local_268);
          plVar28 = local_5a8;
          plVar29 = local_598;
          plVar19 = local_5b8;
          plVar21 = local_5c8;
          if (CONCAT44(local_268._4_4_,(uint)local_268) != 0) {
            FUN_1400020a8();
            plVar28 = local_5a8;
            plVar29 = local_598;
            plVar19 = local_5b8;
            plVar21 = local_5c8;
          }
        }
        local_208 = (undefined1  [8])0x0;
        local_200 = (undefined1  [8])0x200000000;
        local_388 = plVar19[0x7d];
        uStack_380 = CONCAT44(uStack_380._4_4_,(int)plVar19[0x7e]);
        FUN_142df7ef9(&local_388,&local_228);
        auVar65 = _DAT_149931e80;
        auVar36 = local_208;
        if (local_208 == (undefined1  [8])0x0) {
          auVar36 = (undefined1  [8])&local_228;
        }
        if ((longlong)(int)local_200._0_4_ != 0) {
          local_580 = (ulonglong *)((longlong)auVar36 + (longlong)(int)local_200._0_4_ * 2 * 8);
          local_570 = (ulonglong *)(plVar21 + 0x2d);
          auVar66._8_4_ = 0xffffffff;
          auVar66._0_8_ = 0xffffffffffffffff;
          auVar66._12_4_ = 0xffffffff;
          auVar67 = pmovsxbq(unaff_XMM8,0x1010);
          do {
            uVar27 = *(ulonglong *)auVar36;
            local_5c0 = (ulonglong *)plVar21[3];
            if ((*(char *)(uVar27 + 0x23f2) == '\x01') && (*(int *)(uVar27 + 0x1dd0) != 0)) {
              cVar7 = FUN_144b2acba(uVar27);
              plVar19 = local_5b8;
              if (cVar7 == '\0') goto LAB_142dfc801;
              if ((((*(char *)(uVar27 + 0x23f4) == '\0') && (*(char *)(uVar27 + 0x23f5) != '\x01'))
                  || (*(int *)(uVar27 + 0x1dd0) == 0)) ||
                 (lVar38 = *(longlong *)(uVar27 + 8), lVar38 == 0)) {
LAB_142dfd103:
                lVar38 = 0;
              }
              else {
                iVar12 = *(int *)(uVar27 + 0x1dd8);
                if (((longlong)iVar12 < -1) || (*(int *)(lVar38 + 0x10) <= iVar12 + 1))
                goto LAB_142dfd103;
                lVar38 = *(longlong *)(*(longlong *)(lVar38 + 8) + 8 + (longlong)iVar12 * 8);
                cVar7 = FUN_144b2acc6(lVar38);
                if (cVar7 == '\0') {
                  lVar38 = 0;
                }
              }
              uVar15 = *(uint *)(uVar27 + 0x1de0) | *(uint *)(lVar38 + 0x1de0);
              plVar19 = local_5b8;
            }
            else {
LAB_142dfc801:
              uVar15 = *(uint *)(uVar27 + 0x1de0);
            }
            puVar33 = local_5c0;
            local_5a0 = (ulonglong *)
                        CONCAT44(local_5a0._4_4_,*(uint *)((longlong)local_5c0 + 0x17c));
            if (*(uint *)((longlong)local_5c0 + 0x17c) != uVar15) {
              *(uint *)((longlong)local_5c0 + 0x17c) = uVar15;
              puVar41 = (undefined8 *)(*local_5c0 + 7 & 0xfffffffffffffff8);
              puVar30 = puVar41 + 3;
              if ((undefined8 *)local_5c0[1] < puVar30) {
                FUN_140023dd8(local_5c0,0x20);
                puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
              }
              *puVar33 = (ulonglong)puVar30;
              *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
              *(undefined8 **)puVar33[6] = puVar41;
              puVar33[6] = (ulonglong)(puVar41 + 1);
              uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
              puVar41[1] = 0;
              *puVar41 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar41 + 2) = uVar13;
            }
            uVar15 = DAT_14ca44da0;
            if (*(char *)((longlong)auVar36 + 0xc) == '\0') {
              if (0 < (longlong)(int)uStack_330) {
                lVar38 = (longlong)(int)uStack_330 + -1;
                lVar40 = 0;
                unaff_XMM14 = pmovsxbq(unaff_XMM14,0x100);
                in_XMM2 = pmovsxbq(in_XMM2,0x302);
                in_XMM3 = pmovsxbq(in_XMM3,0x504);
                in_XMM4 = pmovsxbq(in_XMM4,0x706);
                in_XMM5 = pmovsxbq(in_XMM5,0x908);
                unaff_XMM9 = pmovsxbq(unaff_XMM9,0xb0a);
                unaff_XMM10 = pmovsxbq(unaff_XMM10,0xd0c);
                unaff_XMM11 = pmovsxbq(unaff_XMM11,0xf0e);
                do {
                  auVar51._8_4_ = (int)lVar38;
                  auVar51._0_8_ = lVar38;
                  auVar51._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
                  auVar51 = auVar51 ^ auVar65;
                  lVar39 = auVar51._0_8_;
                  auVar53._0_8_ = -(ulonglong)(lVar39 < SUB168(unaff_XMM14 ^ auVar65,0));
                  lVar42 = auVar51._8_8_;
                  auVar53._8_8_ = -(ulonglong)(lVar42 < SUB168(unaff_XMM14 ^ auVar65,8));
                  auVar68 = pshuflw(unaff_XMM13,auVar53,0xe8);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  if ((auVar68._0_4_ & 1) != 0) {
                    *(undefined1 *)((longlong)&local_1e8 + lVar40) = 1;
                  }
                  auVar54 = packssdw(auVar53,auVar53);
                  auVar54 = packssdw(auVar54 ^ auVar66,auVar54 ^ auVar66);
                  auVar54 = packsswb(auVar54,auVar54);
                  if ((auVar54[1] & 1) != 0) {
                    local_1d8[lVar40 + 8] = 1;
                  }
                  auVar55._0_8_ = -(ulonglong)(lVar39 < SUB168(in_XMM2 ^ auVar65,0));
                  auVar55._8_8_ = -(ulonglong)(lVar42 < SUB168(in_XMM2 ^ auVar65,8));
                  auVar68 = packssdw(auVar68,auVar55);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[2] & 1) != 0) {
                    auStack_1b8[lVar40] = 1;
                  }
                  auVar54 = pshufhw(auVar55,auVar55,0x84);
                  auVar54 = packssdw(auVar54 ^ auVar66,auVar54 ^ auVar66);
                  auVar54 = packsswb(auVar54,auVar54);
                  if ((auVar54[3] & 1) != 0) {
                    *(undefined1 *)((longlong)&local_1a0 + lVar40) = 1;
                  }
                  auVar56._0_8_ = -(ulonglong)(lVar39 < SUB168(in_XMM3 ^ auVar65,0));
                  auVar56._8_8_ = -(ulonglong)(lVar42 < SUB168(in_XMM3 ^ auVar65,8));
                  auVar68 = pshuflw(auVar68,auVar56,0xe8);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[4] & 1) != 0) {
                    *(undefined1 *)((longlong)&uStack_188 + lVar40) = 1;
                  }
                  auVar54 = packssdw(auVar56,auVar56);
                  auVar54 = packssdw(auVar54 ^ auVar66,auVar54 ^ auVar66);
                  auVar54 = packsswb(auVar54,auVar54);
                  if ((auVar54[5] & 1) != 0) {
                    auStack_170[lVar40] = 1;
                  }
                  auVar57._0_8_ = -(ulonglong)(lVar39 < SUB168(in_XMM4 ^ auVar65,0));
                  auVar57._8_8_ = -(ulonglong)(lVar42 < SUB168(in_XMM4 ^ auVar65,8));
                  auVar68 = packssdw(auVar68,auVar57);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[6] & 1) != 0) {
                    auStack_158[lVar40] = 1;
                  }
                  auVar54 = pshufhw(auVar57,auVar57,0x84);
                  auVar54 = packssdw(auVar54 ^ auVar66,auVar54 ^ auVar66);
                  auVar54 = packsswb(auVar54,auVar54);
                  if ((auVar54[7] & 1) != 0) {
                    auStack_140[lVar40] = 1;
                  }
                  auVar58._0_8_ = -(ulonglong)(lVar39 < SUB168(in_XMM5 ^ auVar65,0));
                  auVar58._8_8_ = -(ulonglong)(lVar42 < SUB168(in_XMM5 ^ auVar65,8));
                  auVar68 = pshuflw(auVar68,auVar58,0xe8);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[8] & 1) != 0) {
                    *(undefined1 *)((longlong)&local_128 + lVar40) = 1;
                  }
                  auVar54 = packssdw(auVar58,auVar58);
                  auVar54 = packssdw(auVar54 ^ auVar66,auVar54 ^ auVar66);
                  auVar54 = packsswb(auVar54,auVar54);
                  if ((auVar54[9] & 1) != 0) {
                    auStack_110[lVar40] = 1;
                  }
                  auVar59._0_8_ = -(ulonglong)(lVar39 < SUB168(unaff_XMM9 ^ auVar65,0));
                  auVar59._8_8_ = -(ulonglong)(lVar42 < SUB168(unaff_XMM9 ^ auVar65,8));
                  auVar68 = packssdw(auVar68,auVar59);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[10] & 1) != 0) {
                    auStack_f8[lVar40] = 1;
                  }
                  auVar54 = pshufhw(auVar59,auVar59,0x84);
                  auVar54 = packssdw(auVar54 ^ auVar66,auVar54 ^ auVar66);
                  auVar54 = packsswb(auVar54,auVar54);
                  if ((auVar54[0xb] & 1) != 0) {
                    auStack_e0[lVar40] = 1;
                  }
                  auVar60._0_8_ = -(ulonglong)(lVar39 < SUB168(unaff_XMM10 ^ auVar65,0));
                  auVar60._8_8_ = -(ulonglong)(lVar42 < SUB168(unaff_XMM10 ^ auVar65,8));
                  auVar68 = pshuflw(auVar68,auVar60,0xe8);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  unaff_XMM13 = packsswb(auVar68,auVar68);
                  if ((unaff_XMM13[0xc] & 1) != 0) {
                    (&stack0xffffffffffffff38)[lVar40] = 1;
                  }
                  auVar68 = packssdw(auVar60,auVar60);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[0xd] & 1) != 0) {
                    (&stack0xffffffffffffff50)[lVar40] = 1;
                  }
                  auVar61._0_8_ = -(ulonglong)(lVar39 < SUB168(unaff_XMM11 ^ auVar65,0));
                  auVar61._8_8_ = -(ulonglong)(lVar42 < SUB168(unaff_XMM11 ^ auVar65,8));
                  auVar68 = packssdw(auVar51,auVar61);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[0xe] & 1) != 0) {
                    (&stack0xffffffffffffff68)[lVar40] = 1;
                  }
                  auVar68 = pshufhw(auVar68,auVar61,0x84);
                  auVar68 = packssdw(auVar68 ^ auVar66,auVar68 ^ auVar66);
                  auVar68 = packsswb(auVar68,auVar68);
                  if ((auVar68[0xf] & 1) != 0) {
                    auStack_80[lVar40] = 1;
                  }
                  lVar42 = auVar67._0_8_;
                  lVar39 = unaff_XMM14._8_8_;
                  unaff_XMM14._0_8_ = unaff_XMM14._0_8_ + lVar42;
                  lVar44 = auVar67._8_8_;
                  unaff_XMM14._8_8_ = lVar39 + lVar44;
                  lVar39 = in_XMM2._8_8_;
                  in_XMM2._0_8_ = in_XMM2._0_8_ + lVar42;
                  in_XMM2._8_8_ = lVar39 + lVar44;
                  lVar39 = in_XMM3._8_8_;
                  in_XMM3._0_8_ = in_XMM3._0_8_ + lVar42;
                  in_XMM3._8_8_ = lVar39 + lVar44;
                  lVar39 = in_XMM4._8_8_;
                  in_XMM4._0_8_ = in_XMM4._0_8_ + lVar42;
                  in_XMM4._8_8_ = lVar39 + lVar44;
                  lVar39 = in_XMM5._8_8_;
                  in_XMM5._0_8_ = in_XMM5._0_8_ + lVar42;
                  in_XMM5._8_8_ = lVar39 + lVar44;
                  lVar39 = unaff_XMM9._8_8_;
                  unaff_XMM9._0_8_ = unaff_XMM9._0_8_ + lVar42;
                  unaff_XMM9._8_8_ = lVar39 + lVar44;
                  lVar39 = unaff_XMM10._8_8_;
                  unaff_XMM10._0_8_ = unaff_XMM10._0_8_ + lVar42;
                  unaff_XMM10._8_8_ = lVar39 + lVar44;
                  lVar39 = unaff_XMM11._8_8_;
                  unaff_XMM11._0_8_ = unaff_XMM11._0_8_ + lVar42;
                  unaff_XMM11._8_8_ = lVar39 + lVar44;
                  lVar40 = lVar40 + 0x180;
                } while ((ulonglong)((int)uStack_330 + 0xfU >> 4) * 0x180 != lVar40);
              }
              local_128 = 0x101;
              iStack_124 = 0x22 - (uint)*(byte *)((longlong)plVar19 + 0xd56);
            }
            if (DAT_14ca44da0 != 0) {
              puVar23 = DAT_14ca44d98;
              if (DAT_14ca44d98 == (uint *)0x0) {
                puVar23 = &DAT_14ca44d88;
              }
              uVar45 = *puVar23;
              plVar19 = local_5b8;
              if (uVar45 == 0) {
                iVar12 = DAT_14ca44da0 + 0x1e;
                if (-1 < (int)(DAT_14ca44da0 - 1)) {
                  iVar12 = DAT_14ca44da0 - 1;
                }
                uVar47 = 0;
                uVar32 = (ulonglong)(uint)(iVar12 >> 5);
                if (iVar12 >> 5 < 1) {
                  uVar32 = uVar47;
                }
                iVar12 = 0;
                do {
                  if (uVar32 == uVar47) goto LAB_142dfcc36;
                  iVar12 = iVar12 + 0x20;
                  uVar45 = puVar23[uVar47 + 1];
                  uVar47 = uVar47 + 1;
                } while (uVar45 == 0);
              }
              else {
                uVar47 = 0;
                iVar12 = 0;
              }
              uVar35 = (ulonglong)(-uVar45 & uVar45);
              uVar32 = uVar35 * 2 + 1;
              lVar38 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                }
              }
              uVar45 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
              if ((int)uVar45 < (int)DAT_14ca44da0) {
                uVar26 = 0xffffffff;
                do {
                  plVar21 = *(longlong **)(DAT_14ca44d78 + (longlong)(int)uVar45 * 0x10);
                  (**(code **)(*plVar21 + 0x10))(plVar21,uVar27,1);
                  uVar26 = ~(uint)uVar35 & uVar26;
                  puVar23 = DAT_14ca44d98;
                  if (DAT_14ca44d98 == (uint *)0x0) {
                    puVar23 = &DAT_14ca44d88;
                  }
                  iVar14 = (int)uVar47;
                  lVar38 = (longlong)iVar14;
                  uVar45 = puVar23[lVar38] & uVar26;
                  if (uVar45 == 0) {
                    iVar31 = DAT_14ca44da0 + 0x1e;
                    if (-1 < (int)(DAT_14ca44da0 - 1)) {
                      iVar31 = DAT_14ca44da0 - 1;
                    }
                    iVar31 = iVar31 >> 5;
                    iVar12 = iVar12 + 0x20;
                    iVar24 = iVar31;
                    if (iVar31 < iVar14) {
                      iVar24 = iVar14;
                    }
                    if (iVar14 < iVar31) {
                      lVar40 = 0;
                      do {
                        uVar45 = puVar23[lVar38 + lVar40 + 1];
                        if (uVar45 != 0) {
                          uVar47 = (ulonglong)(iVar14 + (int)lVar40 + 1);
                          uVar26 = 0xffffffff;
                          goto LAB_142dfd243;
                        }
                        iVar12 = iVar12 + 0x20;
                        lVar40 = lVar40 + 1;
                      } while (iVar24 - lVar38 != lVar40);
                      uVar26 = 0xffffffff;
                      iVar14 = iVar24;
                    }
                    uVar47 = (ulonglong)(iVar14 + 1);
                    uVar45 = DAT_14ca44da0;
                  }
                  else {
LAB_142dfd243:
                    uVar35 = (ulonglong)(-uVar45 & uVar45);
                    uVar32 = uVar35 * 2 + 1;
                    lVar38 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar38 == 0; lVar38 = lVar38 + -1) {
                      }
                    }
                    uVar45 = (iVar12 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
                    if ((int)DAT_14ca44da0 <= (int)uVar45) {
                      uVar45 = DAT_14ca44da0;
                    }
                  }
                  plVar19 = local_5b8;
                } while (uVar45 != uVar15);
              }
            }
LAB_142dfcc36:
            plVar21 = local_5c8;
            FUN_142df73a2(plVar19,local_5c8,uVar27);
            puVar33 = local_5b0;
            bVar8 = *(byte *)((longlong)plVar19 + 0xd56);
            puVar41 = (undefined8 *)(plVar21[0xe] + 0xfU & 0xfffffffffffffff0);
            puVar30 = puVar41 + 0x40;
            if ((undefined8 *)plVar21[0xf] < puVar30) {
              FUN_140023dd8(local_5b0,0x210);
              puVar41 = (undefined8 *)(*puVar33 + 0xf & 0xfffffffffffffff0);
              puVar30 = puVar41 + 0x40;
            }
            plVar21 = local_5c8;
            local_5c8[0xe] = (longlong)puVar30;
            *puVar41 = &PTR_FUN_14a2996a8;
            plVar28 = puVar41 + 2;
            FUN_14725cba6(plVar28);
            iVar12 = (int)plVar21[0x14];
            *(uint *)(plVar21 + 0x14) = iVar12 + 1U;
            if (*(uint *)((longlong)plVar21 + 0xa4) < iVar12 + 1U) {
              FUN_1448cfae8(local_578,iVar12);
            }
            plVar21 = local_5c8;
            *(undefined8 **)(local_5c8[0x13] + (longlong)iVar12 * 8) = puVar41;
            FUN_1448c58dc(uVar27,&local_268);
            auVar4._8_8_ = uStack_250;
            auVar4._0_8_ = local_258;
            *(undefined1 (*) [16])(puVar41 + 4) = auVar4;
            *plVar28 = (longlong)local_268;
            puVar41[3] = CONCAT44(iStack_25c,iStack_260);
            local_238 = 0;
            uStack_230 = 0;
            local_248 = (undefined8 *)0x0;
            uStack_240 = 0;
            local_258 = (undefined *)0x0;
            uStack_250 = 0;
            local_268._0_4_ = 0;
            local_268._4_4_ = 0;
            iStack_260 = 0;
            iStack_25c = 0;
            local_5e8 = (longlong **)&local_268;
            uVar18 = FUN_147241975(plVar21,uVar27,1,(uint)bVar8 * 2 + 4);
            lVar38 = FUN_145d50964();
            cVar7 = *(char *)(lVar38 + 0x41);
            if (cVar7 == '\x03') {
              cVar7 = '\x02';
            }
            puVar41[0x12] = uVar18;
            *(char *)(puVar41 + 0x13) = cVar7;
            lVar38 = FUN_145d59ed4();
            cVar7 = *(char *)(lVar38 + 0x41);
            if (cVar7 == '\x03') {
              cVar7 = '\x02';
            }
            puVar41[0x14] = *(undefined8 *)(uVar27 + 0x13718);
            *(char *)(puVar41 + 0x15) = cVar7;
            puVar41[0x16] = *(undefined8 *)(uVar27 + 0x118f0);
            puVar41[0x17] = *(undefined8 *)(uVar27 + 0x11920);
            *(undefined4 *)(puVar41 + 0x18) = 4;
            puVar41[0x19] = *(undefined8 *)(uVar27 + 0x119b8);
            puVar41[0x1a] = *(undefined8 *)(uVar27 + 0x11910);
            puVar41[0x1b] = *(undefined8 *)(uVar27 + 0x119e0);
            puVar41[0x1c] = *(undefined8 *)(uVar27 + 0x119f0);
            memcpy(puVar41 + 0x20,&local_1f8,0xf8);
            *(undefined1 *)((longlong)puVar41 + 0x1ec) = 2;
            uVar13 = FUN_14724fe42(uVar27,*(undefined1 *)((longlong)plVar19 + 0xd53));
            plVar29 = local_598;
            plVar21 = local_5c8;
            uVar10 = 0;
            iVar12 = 0;
            if ((*(char *)((longlong)plVar19 + 0xd56) == '\0') &&
               (uVar10 = 0, *(char *)((longlong)auVar36 + 0xd) == '\x01')) {
              iVar12 = 0;
              if (DAT_14c7609fc == '\x01') {
                uVar10 = 1;
                if (0 < (longlong)(int)plVar19[0x7e]) {
                  lVar38 = 0;
                  iVar12 = 0;
                  do {
                    iVar12 = iVar12 + *(int *)(*local_598 + 0x136a8 + lVar38) +
                             *(int *)(*local_598 + 0x136d0 + lVar38);
                    lVar38 = lVar38 + 0x13c10;
                  } while ((longlong)(int)plVar19[0x7e] * 0x13c10 - lVar38 != 0);
                }
              }
              else {
                uVar10 = 0;
              }
            }
            *(int *)(puVar41 + 0x3d) = iVar12;
            FUN_14724fa4a(plVar19,local_5c8,uVar27,plVar28);
            local_398 = *(ulonglong *)auVar36;
            uStack_390 = *(ulonglong *)((longlong)auVar36 + 8);
            FUN_14725ccb4();
            FUN_140069376(plVar21);
            puVar33 = local_5b0;
            puVar41 = (undefined8 *)(plVar21[0xe] + 7U & 0xfffffffffffffff8);
            puVar30 = puVar41 + 0x3e;
            if ((undefined8 *)plVar21[0xf] < puVar30) {
              FUN_140023dd8(local_5b0,0x1f8);
              puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
              puVar30 = puVar41 + 0x3e;
            }
            *local_5b0 = (ulonglong)puVar30;
            iStack_260 = (int)DAT_14ca18a78;
            iStack_25c = (int)((ulonglong)DAT_14ca18a78 >> 0x20);
            if (DAT_14ca18a78 != 0) {
              LOCK();
              *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
              UNLOCK();
            }
            local_258 = &DAT_14ca18a30;
            local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
            local_268 = plVar28;
            FUN_140068f1a(puVar41,&local_399,&local_268,0x41);
            *puVar41 = &PTR_FUN_14a299830;
            puVar41[0x37] = plVar19;
            puVar41[0x38] = plVar28;
            puVar41[0x39] = local_398;
            puVar41[0x3a] = uStack_390;
            *(undefined1 *)(puVar41 + 0x3b) = uVar10;
            *(undefined1 *)((longlong)puVar41 + 0x1db) = local_369;
            *(undefined2 *)((longlong)puVar41 + 0x1d9) = local_36b;
            *(undefined4 *)((longlong)puVar41 + 0x1dc) = uVar13;
            puVar41[0x3c] = local_548;
            *(char *)(puVar41 + 0x3d) = (char)local_590;
            *(undefined4 *)((longlong)puVar41 + 0x1e9) = local_372;
            *(uint *)((longlong)puVar41 + 0x1ec) = CONCAT31(uStack_36e,local_372._3_1_);
            iVar12 = (int)plVar21[0x2e];
            *(uint *)(plVar21 + 0x2e) = iVar12 + 1U;
            if (*(uint *)((longlong)plVar21 + 0x174) < iVar12 + 1U) {
              FUN_14470e57a(local_570,iVar12);
            }
            *(undefined8 **)(plVar21[0x2d] + (longlong)iVar12 * 8) = puVar41;
            *(int *)((longlong)puVar41 + 0x2c) = (int)plVar21[0x2e] + -1;
            FUN_140069100(plVar21,puVar41);
            plVar28 = local_5a8;
            puVar33 = local_5c0;
            if (*(int *)((longlong)local_5c0 + 0x17c) != (int)local_5a0) {
              *(int *)((longlong)local_5c0 + 0x17c) = (int)local_5a0;
              puVar41 = (undefined8 *)(*local_5c0 + 7 & 0xfffffffffffffff8);
              puVar30 = puVar41 + 3;
              if ((undefined8 *)local_5c0[1] < puVar30) {
                FUN_140023dd8(local_5c0,0x20);
                puVar41 = (undefined8 *)(*puVar33 + 7 & 0xfffffffffffffff8);
                puVar30 = puVar41 + 3;
              }
              *puVar33 = (ulonglong)puVar30;
              *(int *)(puVar33 + 0xc) = (int)puVar33[0xc] + 1;
              *(undefined8 **)puVar33[6] = puVar41;
              puVar33[6] = (ulonglong)(puVar41 + 1);
              uVar13 = *(undefined4 *)((longlong)puVar33 + 0x17c);
              puVar41[1] = 0;
              *puVar41 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar41 + 2) = uVar13;
            }
            auVar36 = (undefined1  [8])((longlong)auVar36 + 0x10);
          } while (auVar36 != (undefined1  [8])local_580);
        }
        FUN_142e2a674(local_208);
        if (local_338 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      local_5e8 = &local_498;
      FUN_14724f43e(plVar19,plVar21,local_540,plVar28);
    }
    iVar12 = (int)plVar19[0x7e];
    if (0 < iVar12) {
      lVar38 = 0x1dd0;
      lVar40 = 0;
      do {
        lVar39 = *plVar29;
        if (((((*(byte *)(lVar39 + 0x107e0 + lVar38) & 2) == 0) &&
             (*(char *)(lVar39 + 0x12f8 + lVar38) == '\0')) &&
            (((*(char *)(lVar39 + 0x622 + lVar38) == '\0' &&
              (*(char *)(lVar39 + 0x625 + lVar38) != '\x01')) || (*(int *)(lVar39 + lVar38) != 2))))
           && ((lVar39 = *(longlong *)(lVar39 + 0x1338 + lVar38), lVar39 != 0 &&
               (*(int *)(lVar39 + 0x2a0) != -1)))) {
          FUN_1472da7fc(lVar39 + 0x298,plVar21);
          iVar12 = (int)plVar19[0x7e];
        }
        lVar40 = lVar40 + 1;
        lVar38 = lVar38 + 0x13c10;
      } while (lVar40 < iVar12);
    }
    if (*(char *)((longlong)plVar19 + 0xd56) == '\0') {
      FUN_142fdd5d4(plVar19,plVar21);
    }
    *(undefined4 *)((longlong)plVar28 + 0x1ac) = 0xff;
    uVar18 = FUN_1472e1757(plVar21,plVar28,0xff);
    ppuVar22 = local_550;
    *(undefined8 *)((longlong)plVar28 + 0x1a0) = uVar18;
    if (*(char *)((longlong)plVar19 + 0xd53) == '\x01') {
      if ((plVar19[1] == 0) || (*(int *)(plVar19[1] + 0x35e8) != 5)) {
        local_4d8 = plVar19[0x7d];
        local_4d0 = (undefined4)plVar19[0x7e];
        local_5e0 = (undefined8 **)((ulonglong)local_5e0 & 0xffffffffffffff00);
        local_5e8 = (longlong **)((ulonglong)local_5e8 & 0xffffffff00000000);
        FUN_1430ca164(plVar19,plVar21,&local_4d8,plVar28);
      }
      local_4e8 = plVar19[0x7d];
      local_4e0 = (undefined4)plVar19[0x7e];
      local_5e0 = (undefined8 **)((ulonglong)local_5e0 & 0xffffffffffffff00);
      local_5e8 = (longlong **)CONCAT44(local_5e8._4_4_,1);
      FUN_1430ca164(plVar19,plVar21,&local_4e8,plVar28);
      *(undefined4 *)((longlong)plVar28 + 0x1ac) = 0x1ff;
      uVar18 = FUN_1472e1757(plVar21,plVar28,0x1ff);
      *(undefined8 *)((longlong)plVar28 + 0x1a0) = uVar18;
    }
    if (DAT_14cad8310 == 0) {
      FUN_1446f470e(&local_1f8,L"Renderer",1);
      puVar30 = local_1f8;
      uVar18 = FUN_144a52528();
      DAT_14cad8310 = FUN_14493e38c(uVar18,puVar30);
    }
    local_4f8 = plVar19[0x7d];
    local_4f0 = (undefined4)plVar19[0x7e];
    FUN_142fe7e9c(DAT_14cad8310,plVar21,&local_4f8,plVar28);
    plVar29 = (longlong *)plVar19[0x121];
    if (0 < (int)plVar19[0x7e] && plVar29 != (longlong *)0x0) {
      local_1f8 = (undefined8 *)plVar19[0x7d];
      uStack_1f0 = CONCAT44((int)plVar19[0x7e],0x13c10);
      local_5e8 = (longlong **)CONCAT71(local_5e8._1_7_,1);
      (**(code **)(*plVar29 + 0x90))(plVar29,plVar21,&local_1f8,ppuVar22);
      lVar38 = (**(code **)(*plVar29 + 0x98))(plVar29);
      if (lVar38 != 0) {
        FUN_143521408(lVar38,plVar21);
      }
    }
    if (*(char *)((longlong)plVar19 + 0xd51) == '\x01') {
      lVar38 = plVar19[1];
      if ((lVar38 == 0) || (*(int *)(lVar38 + 0x3720) < 1)) {
        local_5e0 = (undefined8 **)0x0;
      }
      else {
        local_5e0 = (undefined8 **)**(longlong **)(lVar38 + 0x3718);
      }
      local_5e8 = *(longlong ***)((longlong)plVar28 + 0x338);
      FUN_142f03bee(plVar19,plVar21,*(undefined8 *)((longlong)plVar28 + 0x1b8),
                    *(undefined8 *)((longlong)plVar28 + 0x1c8));
    }
    if (*(char *)((longlong)plVar19 + 0xd43) == '\x01') {
      FUN_1403d7370(&DAT_14ca45fc0,plVar21);
    }
    if (((*(char *)((longlong)plVar19 + 0x163) == '\x01') &&
        (*(char *)((longlong)plVar19 + 0xd4c) == '\x01')) &&
       (*(char *)((longlong)plVar19 + 0xd46) == '\0')) {
      local_1e8 = 0;
      uStack_1e4 = 0;
      uStack_1f0 = local_540;
      local_1f8 = (undefined8 *)FUN_1472e1757(plVar21,plVar28,0x1ff);
      uStack_1e0 = CONCAT31(uStack_1e0._1_3_,*(undefined1 *)((longlong)plVar19 + 0xd4d));
      plVar21 = local_5c8;
      if (0 < (int)plVar19[0x7e]) {
        lVar38 = 0;
        uVar27 = 0;
        do {
          lVar40 = *local_598;
          if ((((*(byte *)(lVar40 + 0x125b0 + lVar38) & 2) == 0) &&
              (*(char *)(lVar40 + 0x30c8 + lVar38) == '\0')) &&
             (((*(char *)(lVar40 + 0x23f2 + lVar38) == '\0' &&
               (*(char *)(lVar40 + 0x23f5 + lVar38) != '\x01')) ||
              (*(int *)(lVar40 + 0x1dd0 + lVar38) != 2)))) {
            if (*(char *)((longlong)plVar19 + 0xd45) == '\x01') {
              FUN_142f0fd51(local_5c8,lVar40 + lVar38,plVar28,local_540);
            }
            else {
              local_5d8 = local_568;
              local_5e8 = local_550;
              local_5e0 = (undefined8 **)&local_1f8;
              FUN_142ed2bcb(local_5c8,plVar19[1],lVar40 + lVar38,uVar27 & 0xffffffff);
            }
            lVar40 = DAT_14ca12b90;
            iVar12 = (int)*local_560;
            if (iVar12 == 0x40000002) {
              uVar47 = 0;
            }
            else {
              bVar48 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
                if (iVar12 == 1) {
                  DVar16 = FUN_140ad26c0();
                  DVar17 = GetCurrentThreadId();
                  bVar48 = DVar16 == DVar17;
                }
                else {
                  bVar48 = false;
                }
              }
              uVar47 = (ulonglong)(bVar48 ^ 1);
              plVar28 = local_5a8;
              plVar19 = local_5b8;
            }
            if (*(int *)(lVar40 + uVar47 * 4) == 1) {
              lVar40 = *local_598;
              local_368 = (longlong *)
                          CONCAT44(*(undefined4 *)(lVar40 + 0x1dd4 + lVar38),
                                   *(undefined4 *)(lVar40 + 0x3090 + lVar38));
              uStack_360._0_5_ =
                   CONCAT14((&DAT_00001de6)[lVar38 + lVar40],
                            *(undefined4 *)(lVar40 + 0x3094 + lVar38));
              local_5d0 = DAT_14c967818;
              local_5d8 = DAT_14c967818;
              local_5e0 = DAT_14c967818;
              local_5e8 = DAT_14c967818;
              FUN_143017f0c(local_5c8,&local_368,*(undefined8 *)((longlong)plVar28 + 0x1c0),
                            *(undefined8 *)((longlong)plVar28 + 0x1c8));
            }
          }
          uVar27 = uVar27 + 1;
          lVar38 = lVar38 + 0x13c10;
          plVar21 = local_5c8;
        } while ((longlong)uVar27 < (longlong)(int)plVar19[0x7e]);
      }
    }
    FUN_142bc9066(DAT_14cb0d2b0 + 0xe98,plVar21);
    FUN_144b0f518(local_518,plVar21);
    if ((*(char *)((longlong)plVar19 + 0xd54) == '\x01') &&
       (*(char *)((longlong)plVar19 + 0xd4d) == '\0')) {
      FUN_142dfe366(plVar19,plVar21,*(undefined8 *)((longlong)plVar28 + 0x1c8));
    }
  }
  else {
    FUN_142bc9066(DAT_14cb0d2b0 + 0xe98,plVar21);
    FUN_144b0f518(local_518,plVar21);
  }
  FUN_142fdaa76(plVar19,plVar21,local_540);
  FUN_14061a47e(&DAT_14ca4b2b8,plVar21,plVar28);
  if (*(longlong *)(plVar19[1] + 0x5358) != 0) {
    FUN_142cddab2(*(longlong *)(plVar19[1] + 0x5358),plVar21);
  }
  FUN_144aaabd0(&local_3d0,local_3d0);
  local_1f8 = (undefined8 *)plVar19[0x7d];
  uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(int)plVar19[0x7e]);
  FUN_141780428();
  *(undefined4 *)(local_508 + 0x4280) =
       *(undefined4 *)
        (*(longlong *)(local_508 + 0x4130) + 0x5224 +
        (ulonglong)*(byte *)(*(longlong *)(local_508 + 0x4130) + 0x52f0) * 4);
  *(undefined1 *)(local_508 + 0x4285) = 0;
  *(undefined8 *)(local_508 + 0x4288) = 0;
  *(undefined8 *)(local_508 + 0x4220) = 0;
  *(undefined8 *)(local_508 + 0x4228) = 0;
  *(undefined8 *)(local_508 + 0x4230) = 0;
  *(undefined8 *)(local_508 + 0x4238) = 0;
  *(undefined8 *)(local_508 + 0x4240) = 0;
  FUN_1401e384c(&DAT_14ca8cb58,plVar21);
LAB_142df807b:
  if ((local_f0 ^ (ulonglong)auStack_608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142dfe366 FUN_142dfe366 body=1523 status=ok
// SIG undefined FUN_142dfe366(void)

void FUN_142dfe366(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  int local_110;
  undefined2 local_108;
  wchar_t *local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c0;
  DWORD local_b4;
  char *local_b0;
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  int *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (0 < *(int *)(param_1 + 0x3f0)) {
    local_98 = (longlong *)(param_2 + 0x1b8);
    local_b0 = (char *)(param_2 + 0x4a8);
    local_a0 = (longlong *)(param_2 + 0x4b0);
    local_88 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    lVar15 = 0;
    lVar18 = 0;
    local_90 = param_2;
    local_80 = param_3;
    do {
      lVar4 = *(longlong *)(param_1 + 1000);
      if ((((*(byte *)(lVar4 + 0x125b0 + lVar15) & 2) == 0) &&
          (*(char *)(lVar4 + 0x30c8 + lVar15) == '\0')) &&
         (((*(char *)(lVar4 + 0x23f2 + lVar15) == '\0' &&
           (*(char *)(lVar4 + 0x23f5 + lVar15) != '\x01')) ||
          (*(int *)(lVar4 + 0x1dd0 + lVar15) != 2)))) {
        puVar5 = *(ulonglong **)(param_2 + 0x18);
        iVar3 = *(int *)(lVar4 + 0x1de0 + lVar15);
        local_a4 = *(int *)((longlong)puVar5 + 0x17c);
        if (local_a4 != iVar3) {
          *(int *)((longlong)puVar5 + 0x17c) = iVar3;
          puVar12 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar12 + 3;
          if ((undefined8 *)puVar5[1] < puVar16) {
            FUN_140023dd8(puVar5,0x20);
            puVar12 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar12 + 3;
          }
          *puVar5 = (ulonglong)puVar16;
          *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
          *(undefined8 **)puVar5[6] = puVar12;
          puVar5[6] = (ulonglong)(puVar12 + 1);
          uVar10 = *(undefined4 *)((longlong)puVar5 + 0x17c);
          puVar12[1] = 0;
          *puVar12 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar12 + 2) = uVar10;
        }
        local_78 = 0;
        local_110 = *(int *)(lVar4 + 0x3090 + lVar15);
        local_108 = *(undefined2 *)(&DAT_14ca85070 + (longlong)local_110 * 2);
        puVar1 = (undefined4 *)(lVar4 + 0x30f8 + lVar15);
        local_70 = *puVar1;
        uStack_6c = puVar1[1];
        uStack_68 = puVar1[2];
        uStack_64 = puVar1[3];
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = &local_78;
        local_f0 = L"MobileHZBFurthest";
        local_f8 = 0;
        local_100 = L"HZBClosest";
        local_118 = &local_70;
        local_e0 = 0x15;
        FUN_14078ce09(param_2,param_3,0,0);
        *(undefined8 *)(lVar4 + 0x137c8 + lVar15) = *(undefined8 *)(local_78 + 0x84);
        *(longlong *)(lVar4 + 0x136f0 + lVar15) = local_78;
        lVar6 = DAT_14c9e5330;
        if (*(longlong *)(lVar4 + 0x3108 + lVar15) != 0) {
          iVar3 = *local_88;
          lVar17 = local_78;
          if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
            uVar13 = 0;
          }
          else if (iVar3 == 1) {
            local_c0 = local_78;
            local_b4 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            uVar13 = (ulonglong)(local_b4 != DVar11);
            lVar17 = local_c0;
          }
          else {
            uVar13 = 1;
          }
          lVar14 = DAT_14c9e5348;
          if (*(int *)(lVar6 + uVar13 * 4) == 0) {
LAB_142dfe831:
            cVar8 = FUN_147430623(*(undefined2 *)(param_1 + 0x8a8));
            if ((cVar8 == '\0') || (*(char *)(param_1 + 0xd56) != '\0')) {
              lVar6 = *(longlong *)(lVar4 + 0x3108 + lVar15);
              plVar7 = *(longlong **)(lVar6 + 0x12c8);
              if (plVar7 != (longlong *)0x0) {
                *(undefined8 *)(lVar6 + 0x12c8) = 0;
                (**(code **)(*plVar7 + 0x38))();
              }
              goto LAB_142dfe72d;
            }
          }
          else {
            iVar3 = *local_88;
            if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
              uVar13 = 0;
            }
            else if (iVar3 == 1) {
              local_c0 = lVar17;
              local_b4 = FUN_140ad26c0();
              DVar11 = GetCurrentThreadId();
              uVar13 = (ulonglong)(local_b4 != DVar11);
              lVar17 = local_c0;
            }
            else {
              uVar13 = 1;
            }
            if (*(int *)(lVar14 + uVar13 * 4) == 0) goto LAB_142dfe831;
          }
          lVar6 = *(longlong *)(lVar4 + 0x3108 + lVar15);
          plVar7 = *(longlong **)(lVar6 + 0x12c8);
          puVar16 = (undefined8 *)(lVar6 + 0x12c8);
          if (plVar7 != (longlong *)0x0) {
            *puVar16 = 0;
            (**(code **)(*plVar7 + 0x38))();
          }
          bVar2 = *(byte *)(lVar17 + 0x24);
          *(byte *)(lVar17 + 0x24) = bVar2 | 2;
          *(undefined1 *)(lVar17 + 0x26) = 1;
          iVar3 = *(int *)(local_90 + 0x1c0);
          *(uint *)(local_90 + 0x1c0) = iVar3 + 1U;
          if (*(uint *)(local_90 + 0x1c4) < iVar3 + 1U) {
            local_c0 = lVar17;
            FUN_14017e38e(local_98,iVar3);
            lVar17 = local_c0;
          }
          param_3 = local_80;
          param_2 = local_90;
          lVar6 = *local_98;
          *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar17;
          *(undefined8 **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = puVar16;
          if ((bVar2 & 2) == 0) {
            LOCK();
            cVar8 = *local_b0;
            if (cVar8 == '\0') {
              *local_b0 = '\x01';
            }
            UNLOCK();
            if (cVar8 != '\0') {
              FUN_1447d2058(local_b0);
            }
            iVar3 = *(int *)(param_2 + 0x4b8);
            uVar9 = iVar3 + 1;
            *(uint *)(param_2 + 0x4b8) = uVar9;
            if (*(uint *)(param_2 + 0x4bc) < uVar9) {
              local_c0 = lVar17;
              FUN_1447f2dbc(local_a0);
              lVar17 = local_c0;
            }
            lVar6 = *local_a0;
            lVar14 = (longlong)iVar3 * 0x10;
            *(undefined8 *)(lVar6 + lVar14) = 2;
            *(longlong *)(lVar6 + 8 + lVar14) = lVar17;
            LOCK();
            cVar8 = *local_b0;
            if (cVar8 == '\x01') {
              *local_b0 = '\0';
            }
            UNLOCK();
            if (cVar8 != '\x01') {
              FUN_14008cdb0(local_b0);
            }
          }
        }
LAB_142dfe72d:
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x5358);
        if ((lVar6 != 0) && (*(longlong *)(lVar4 + 0x3108 + lVar15) != 0)) {
          uVar10 = FUN_142cdbab8(lVar6,param_2);
          *(undefined4 *)(*(longlong *)(lVar4 + 0x3108 + lVar15) + 0x12e8) = uVar10;
        }
        if (*(int *)((longlong)puVar5 + 0x17c) != local_a4) {
          *(int *)((longlong)puVar5 + 0x17c) = local_a4;
          puVar12 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar12 + 3;
          if ((undefined8 *)puVar5[1] < puVar16) {
            FUN_140023dd8(puVar5,0x20);
            puVar12 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar12 + 3;
          }
          *puVar5 = (ulonglong)puVar16;
          *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
          *(undefined8 **)puVar5[6] = puVar12;
          puVar5[6] = (ulonglong)(puVar12 + 1);
          uVar10 = *(undefined4 *)((longlong)puVar5 + 0x17c);
          puVar12[1] = 0;
          *puVar12 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar12 + 2) = uVar10;
        }
      }
      lVar18 = lVar18 + 1;
      lVar15 = lVar15 + 0x13c10;
    } while (lVar18 < *(int *)(param_1 + 0x3f0));
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142dfe95a FUN_142dfe95a body=1374 status=ok
// SIG undefined FUN_142dfe95a(void)

void FUN_142dfe95a(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_148 [32];
  undefined8 **local_128;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  ulonglong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_d9;
  undefined8 *local_d8;
  longlong lStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_67;
  undefined3 uStack_63;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = (undefined4)*param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = (undefined4)param_4[1];
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_110 = param_4;
  FUN_14725ccb4();
  FUN_140069376(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar9 + 0x3c;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar9 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar5;
  lStack_d0 = DAT_14ca18a78;
  if (DAT_14ca18a78 != 0) {
    LOCK();
    *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
    UNLOCK();
  }
  local_c8 = &DAT_14ca18a30;
  local_128 = (undefined8 **)CONCAT71(local_128._1_7_,1);
  local_d8 = param_3;
  FUN_140068f1a(puVar9,&local_67,&local_d8,1);
  *puVar9 = &PTR_FUN_14a2997f0;
  puVar9[0x37] = param_1;
  puVar9[0x38] = param_3;
  *(undefined4 *)(puVar9 + 0x39) = local_78;
  *(undefined4 *)((longlong)puVar9 + 0x1cc) = uStack_74;
  *(undefined4 *)(puVar9 + 0x3a) = uStack_70;
  *(undefined4 *)((longlong)puVar9 + 0x1d4) = uStack_6c;
  puVar9[0x3b] = param_5;
  lVar8 = param_2 + 0x168;
  iVar4 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(lVar8,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar9);
  local_118 = *local_110;
  if (*(char *)(param_1 + 0xd56) == '\0') {
    local_88 = *(undefined4 *)(param_5 + 0x1c0);
    uStack_84 = *(undefined4 *)(param_5 + 0x1c4);
    uStack_80 = *(undefined4 *)(param_5 + 0x1c8);
    uStack_7c = *(undefined4 *)(param_5 + 0x1cc);
    FUN_1402822c9(param_2,local_118);
  }
  if (*(char *)(param_1 + 0xd58) == '\x01') {
    local_98 = *(undefined4 *)(param_5 + 0x2e0);
    uStack_94 = *(undefined4 *)(param_5 + 0x2e4);
    uStack_90 = *(undefined4 *)(param_5 + 0x2e8);
    uStack_8c = *(undefined4 *)(param_5 + 0x2ec);
    FUN_14034d496(param_2,local_118);
  }
  if ((*(char *)(param_1 + 0xd54) == '\x01') && (*(char *)(param_1 + 0xd56) == '\0')) {
    FUN_142dfe366(param_1,param_2,*(undefined8 *)(param_5 + 0x1c8));
  }
  bVar2 = *(byte *)(param_1 + 0xd4f);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar9 + 0x40;
  local_108 = lVar8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x210);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar9 + 0x40;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  *puVar9 = &PTR_FUN_14a2996a8;
  puVar5 = puVar9 + 2;
  local_100 = puVar1;
  FUN_14725cba6(puVar5);
  iVar4 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar9;
  memcpy(puVar5,param_3,0x1f0);
  lVar8 = local_118;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined *)0x0;
  uStack_c0 = 0;
  local_d8 = (undefined8 *)0x0;
  lStack_d0 = 0;
  local_128 = &local_d8;
  uVar6 = FUN_147241975(param_2,local_118,2,0x86);
  lVar7 = FUN_145d50964();
  cVar3 = *(char *)(lVar7 + 0x41);
  if (*(char *)(lVar7 + 0x41) == '\x03') {
    cVar3 = '\x02';
  }
  puVar9[0x12] = uVar6;
  *(char *)(puVar9 + 0x13) = cVar3;
  lVar7 = FUN_145d59ed4();
  puVar1 = local_100;
  cVar3 = *(char *)(lVar7 + 0x41);
  if (cVar3 == '\x03') {
    cVar3 = '\x02';
  }
  puVar9[0x14] = *(undefined8 *)(lVar8 + 0x13718);
  *(char *)(puVar9 + 0x15) = cVar3;
  *(undefined1 *)(puVar9 + 0x22) = 1;
  puVar9[0x23] = 0;
  puVar9[0x24] = 0;
  puVar9[0x25] = 0xffff0000;
  *(undefined2 *)(puVar9 + 0x3a) = 0x101;
  *(uint *)((longlong)puVar9 + 0x1d4) = (uint)bVar2 * 0x10 + 0x11;
  uVar10 = 0;
  iVar4 = 0;
  if (*(char *)(param_1 + 0xd56) == '\0') {
    uVar10 = 0;
    iVar4 = 0;
    if (*(char *)((longlong)local_110 + 0xd) == '\x01') {
      iVar4 = 0;
      if (DAT_14c7609fc == '\x01') {
        uVar10 = 1;
        if (0 < (longlong)*(int *)(param_1 + 0x3f0)) {
          lVar8 = 0;
          iVar4 = 0;
          do {
            iVar4 = iVar4 + *(int *)(*(longlong *)(param_1 + 1000) + 0x136a8 + lVar8) +
                    *(int *)(*(longlong *)(param_1 + 1000) + 0x136d0 + lVar8);
            lVar8 = lVar8 + 0x13c10;
          } while ((longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 - lVar8 != 0);
        }
      }
      else {
        uVar10 = 0;
      }
    }
  }
  *(int *)(puVar9 + 0x3d) = iVar4;
  local_78 = (undefined4)*local_110;
  uStack_74 = *(undefined4 *)((longlong)local_110 + 4);
  uStack_70 = (undefined4)local_110[1];
  uStack_6c = *(undefined4 *)((longlong)local_110 + 0xc);
  FUN_14725ccb4();
  FUN_140069376(param_2);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 0x3d;
  if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar11 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar9;
  lStack_d0 = DAT_14ca18a78;
  if (DAT_14ca18a78 != 0) {
    LOCK();
    *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
    UNLOCK();
  }
  local_c8 = &DAT_14ca18a30;
  local_128 = (undefined8 **)CONCAT71(local_128._1_7_,1);
  local_d8 = puVar5;
  FUN_140068f1a(puVar11,&local_d9,&local_d8,1);
  *puVar11 = &PTR_FUN_14a299810;
  puVar11[0x37] = param_1;
  puVar11[0x38] = puVar5;
  *(undefined4 *)(puVar11 + 0x39) = local_78;
  *(undefined4 *)((longlong)puVar11 + 0x1cc) = uStack_74;
  *(undefined4 *)(puVar11 + 0x3a) = uStack_70;
  *(undefined4 *)((longlong)puVar11 + 0x1d4) = uStack_6c;
  *(undefined1 *)(puVar11 + 0x3b) = uVar10;
  *(uint *)((longlong)puVar11 + 0x1dc) = CONCAT31(uStack_63,local_67._3_1_);
  *(undefined4 *)((longlong)puVar11 + 0x1d9) = local_67;
  puVar11[0x3c] = param_5;
  iVar4 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(local_108,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar11);
  local_f8 = *(undefined4 *)(param_5 + 0x1b0);
  uStack_f4 = *(undefined4 *)(param_5 + 0x1b4);
  uStack_f0 = *(undefined4 *)(param_5 + 0x1b8);
  uStack_ec = *(undefined4 *)(param_5 + 0x1bc);
  FUN_14034d496(param_2,local_118);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142dfeeba FUN_142dfeeba body=643 status=ok
// SIG undefined FUN_142dfeeba(void)

void FUN_142dfeeba(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_4f;
  undefined3 uStack_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = '\x01';
  if (*(char *)(param_1 + 0xd46) == '\x01') {
    lVar4 = FUN_142eb67bd(param_2,*param_4);
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar4 + 0xac);
    }
    *(longlong *)(param_3 + 0xd8) = lVar4;
    *(undefined8 *)(param_3 + 0xe0) = uVar6;
    *(undefined4 *)(param_3 + 0xe8) = 0x60;
    cVar2 = (*(byte *)(param_1 + 0xd46) & 1) * '\x02' + '\x01';
  }
  *(char *)(param_3 + 0x1dc) = cVar2;
  uVar7 = 0;
  iVar3 = 0;
  if ((*(char *)(param_1 + 0xd56) == '\0') &&
     (uVar7 = 0, *(char *)((longlong)param_4 + 0xd) == '\x01')) {
    iVar3 = 0;
    if (DAT_14c7609fc == '\x01') {
      uVar7 = 1;
      if (0 < (longlong)*(int *)(param_1 + 0x3f0)) {
        lVar4 = 0;
        iVar3 = 0;
        do {
          iVar3 = iVar3 + *(int *)(*(longlong *)(param_1 + 1000) + 0x136a8 + lVar4) +
                  *(int *)(*(longlong *)(param_1 + 1000) + 0x136d0 + lVar4);
          lVar4 = lVar4 + 0x13c10;
        } while ((longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 - lVar4 != 0);
      }
    }
    else {
      uVar7 = 0;
    }
  }
  *(int *)(param_3 + 0x1d8) = iVar3;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  FUN_14725ccb4();
  FUN_140069376(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar8 + 0x3d;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar8 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar5;
  local_60 = DAT_14ca18a78;
  if (DAT_14ca18a78 != 0) {
    LOCK();
    *(int *)(DAT_14ca18a78 + 8) = *(int *)(DAT_14ca18a78 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca18a30;
  local_a8 = 1;
  local_68 = param_3;
  FUN_140068f1a(puVar8,&local_79,&local_68,0x41);
  *puVar8 = &PTR_FUN_14a2997d0;
  puVar8[0x37] = param_1;
  puVar8[0x38] = param_3;
  *(undefined4 *)(puVar8 + 0x39) = local_78;
  *(undefined4 *)((longlong)puVar8 + 0x1cc) = uStack_74;
  *(undefined4 *)(puVar8 + 0x3a) = uStack_70;
  *(undefined4 *)((longlong)puVar8 + 0x1d4) = uStack_6c;
  *(undefined1 *)(puVar8 + 0x3b) = uVar7;
  *(uint *)((longlong)puVar8 + 0x1dc) = CONCAT31(uStack_4b,local_4f._3_1_);
  *(undefined4 *)((longlong)puVar8 + 0x1d9) = local_4f;
  puVar8[0x3c] = param_5;
  iVar3 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar3 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar8);
  if ((DAT_14ca8507f == '\0') && (*(char *)(param_1 + 0xd56) == '\0')) {
    local_98 = *(undefined4 *)(param_5 + 0x1c0);
    uStack_94 = *(undefined4 *)(param_5 + 0x1c4);
    uStack_90 = *(undefined4 *)(param_5 + 0x1c8);
    uStack_8c = *(undefined4 *)(param_5 + 0x1cc);
    FUN_1402822c9(param_2,*param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142dff162 FUN_142dff162 body=1000 status=ok
// SIG undefined FUN_142dff162(void)

void FUN_142dff162(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1d8 [32];
  float local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined5 uStack_a4;
  undefined3 uStack_9f;
  undefined5 uStack_9c;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((DAT_14ca84dfb == '\x01') && (DAT_14ca84dfc == '\x01')) &&
     ((*(byte *)(param_1 + 0xe0) & 1) != 0)) {
    piVar6 = &DAT_14c760db4;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      piVar6 = (int *)(*(longlong *)(param_1 + 0xd8) + 8);
    }
    if (((*(longlong *)
           (&DAT_14ca814b0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar6 * 2) * 0x3c)
          == DAT_14ca838f8) &&
        ((*(byte *)(&DAT_14ca814c8 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar6 * 2) * 0xf) & 1) != 0))
       && ((1 < *(int *)(param_1 + 0xd48) && (*(char *)(param_1 + 0xd40) == '\0')))) {
      iVar1 = *(int *)(param_3 + 0x20);
      iVar2 = *(int *)(param_3 + 0x24);
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      uVar3 = *(undefined8 *)
               (&DAT_14ca8c1f0 +
               (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x8a4) * 2) * 8)
      ;
      FUN_147250062(&local_148,uVar3);
      FUN_1472500c6(&local_158,uVar3);
      lVar7 = 0;
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      uStack_9f = 0;
      uStack_9c = 0;
      uStack_97 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 1;
      local_68 = 0;
      FUN_144b0e33a(param_2,&local_138);
      local_108 = DAT_14ca16ac0;
      uStack_100 = DAT_14c9c0db0;
      local_f8 = DAT_14c9c0d98;
      local_138 = DAT_14ca94df8;
      if (CONCAT44(uStack_144,local_148) != 0) {
        lVar4 = *(longlong *)(CONCAT44(uStack_13c,uStack_140) + 8);
        lVar10 = (longlong)*(int *)(CONCAT44(uStack_144,local_148) + 0xd4);
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + lVar10 * 8);
        if (lVar7 == 0) {
          lVar7 = FUN_1400bafc2(lVar4,lVar10,1);
        }
      }
      uStack_130 = lVar7;
      if (local_158 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_150 + 8) + 0x50) +
                 (longlong)*(int *)(local_158 + 0xd4) * 8);
        if (lVar7 == 0) {
          lVar7 = FUN_1400bafc2(*(longlong *)(local_150 + 8),(longlong)*(int *)(local_158 + 0xd4),1)
          ;
        }
      }
      local_e0 = 0;
      local_128 = lVar7;
      lVar7 = FUN_140028f18(param_2);
      if ((lVar7 != 0) && ((local_70 & 0x10000000) == 0)) {
        *(undefined4 *)(param_2 + 0x35) = (undefined4)local_118;
        *(undefined4 *)((longlong)param_2 + 0x1ac) = local_118._4_4_;
        *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_110;
        *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_110._4_4_;
        *(undefined4 *)(param_2 + 0x33) = (undefined4)local_128;
        *(undefined4 *)((longlong)param_2 + 0x19c) = local_128._4_4_;
        *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_120;
        *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_120._4_4_;
        *(undefined4 *)(param_2 + 0x31) = (undefined4)local_138;
        *(undefined4 *)((longlong)param_2 + 0x18c) = local_138._4_4_;
        *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)param_2 + 0x194) = uStack_130._4_4_;
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar8 + 4;
        if ((undefined8 *)param_2[1] < puVar9) {
          FUN_140023dd8(param_2,0x28);
          puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar8 + 4;
        }
        *param_2 = (ulonglong)puVar9;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar8;
        param_2[6] = (ulonglong)(puVar8 + 1);
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_14a37d348;
        puVar8[2] = lVar7;
        *(undefined4 *)(puVar8 + 3) = 0;
        *(undefined1 *)((longlong)puVar8 + 0x1c) = 1;
      }
      fVar12 = (float)iVar2;
      fVar11 = (float)iVar1;
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 5;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x30);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar8 + 5;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_LAB_14a1e7fc8;
      *(undefined4 *)(puVar8 + 3) = 0;
      *(float *)((longlong)puVar8 + 0x1c) = fVar11;
      *(float *)(puVar8 + 4) = fVar12;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
      local_180 = &local_168;
      local_168 = local_148;
      uStack_164 = uStack_144;
      uStack_160 = uStack_140;
      uStack_15c = uStack_13c;
      local_170 = 1;
      local_178 = 1;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = fVar12;
      local_1a0 = fVar11;
      local_198 = fVar12;
      local_190 = uVar5;
      local_188 = uVar5;
      FUN_140094833(param_2,0,0,fVar11);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142dff54b FUN_142dff54b body=69 status=ok
// SIG undefined FUN_142dff54b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dff54b(void)

{
  _DAT_14ca12f40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142dff58d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca12f48,1);
  return;
}



// FUNCTION 142dff590 FUN_142dff590 body=69 status=ok
// SIG undefined FUN_142dff590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dff590(void)

{
  _DAT_14ca12f50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142dff5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca12f58,1);
  return;
}



// FUNCTION 142dff5d6 FUN_142dff5d6 body=580 status=ok
// SIG undefined FUN_142dff5d6(void)

void FUN_142dff5d6(longlong param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar1 = *(uint *)(param_1 + 0xd5c);
  lVar6 = (longlong)(int)uVar1;
  if (((lVar6 == 0) || (uVar1 == 6)) && ((longlong)*(int *)(param_1 + 0x3f0) != 0)) {
    lVar8 = *(longlong *)(param_1 + 1000);
    lVar10 = 0;
    do {
      if ((((((*(byte *)(lVar8 + 0x125b0 + lVar10) & 4) != 0) ||
            (*(int *)(lVar8 + 0x3d98 + lVar10) != 0)) ||
           ((*(int *)(lVar8 + 0x3da8 + lVar10) != 0 ||
            ((*(int *)(lVar8 + 0x3df8 + lVar10) != 0 || (*(int *)(lVar8 + 0x3f00 + lVar10) != 0)))))
           ) || (*(int *)(lVar8 + 0x3de8 + lVar10) != 0)) || (0 < *(int *)(lVar8 + 0x3db8 + lVar10))
         ) goto LAB_142dff6ff;
      lVar10 = lVar10 + 0x13c10;
    } while ((longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 - lVar10 != 0);
  }
  if ((uVar1 == 2) && (DAT_14c9f21d4 != 0)) {
LAB_142dff6ff:
    if ((*(byte *)(param_1 + 0xec) & 1) != 0) {
      iVar2 = *(int *)(param_3 + 0x3104);
      iVar3 = *(int *)(param_3 + 0x3100);
      iVar4 = *(int *)(param_3 + 0x30fc);
      iVar5 = *(int *)(param_3 + 0x30f8);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar7 + 5;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x30);
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar7 + 5;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar7;
      param_2[6] = (ulonglong)(puVar7 + 1);
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_14a1e7fc8;
      *(float *)(puVar7 + 2) = (float)iVar5;
      *(float *)((longlong)puVar7 + 0x14) = (float)iVar4;
      *(undefined4 *)(puVar7 + 3) = 0;
      *(float *)((longlong)puVar7 + 0x1c) = (float)iVar3;
      *(float *)(puVar7 + 4) = (float)iVar2;
      *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
      FUN_142de5b44(param_3 + (ulonglong)*(byte *)(param_1 + 0xd60) * 0x390 + 0x4860,param_2,
                    param_1 + 0xe90);
      return;
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x3f0) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x3f0) * 0x13c10;
    lVar8 = *(longlong *)(param_1 + 1000) + 0x3680;
    do {
      if (0 < *(int *)(lVar8 + lVar6 * 4)) goto LAB_142dff6ff;
      lVar11 = 0xf;
      if (uVar1 < 8) {
        lVar11 = *(longlong *)(&DAT_14a29b388 + lVar6 * 8);
      }
      if (0 < *(int *)(lVar8 + lVar11 * 4)) goto LAB_142dff6ff;
      lVar8 = lVar8 + 0x13c10;
      lVar10 = lVar10 + -0x13c10;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 142dff81a FUN_142dff81a body=69 status=ok
// SIG undefined FUN_142dff81a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dff81a(void)

{
  _DAT_14ca12f60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142dff85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca12f68,1);
  return;
}



// FUNCTION 142dff85f FUN_142dff85f body=47 status=ok
// SIG undefined FUN_142dff85f(void)

void FUN_142dff85f(void)

{
  DAT_14ca12fb8 = 0;
  if (DAT_14ca12fb0 != 0) {
    FUN_1400020a8();
  }
  FUN_1459c8bf6(&DAT_14ca12f70);
  return;
}



// FUNCTION 142dff88e FUN_142dff88e body=38 status=ok
// SIG undefined FUN_142dff88e(void)

void FUN_142dff88e(void)

{
  while (DAT_14ca19688 != (undefined8 *)0x0) {
    DAT_14ca19688 = (undefined8 *)*DAT_14ca19688;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142dff8b4 FUN_142dff8b4 body=38 status=ok
// SIG undefined FUN_142dff8b4(void)

void FUN_142dff8b4(void)

{
  while (DAT_14ca196a8 != (undefined8 *)0x0) {
    DAT_14ca196a8 = (undefined8 *)*DAT_14ca196a8;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 142dff8da FUN_142dff8da body=44 status=ok
// SIG undefined FUN_142dff8da(void)

void FUN_142dff8da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142dff90a FUN_142dff90a body=576 status=ok
// SIG undefined FUN_142dff90a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142dff90a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca130d0) {
    FUN_144b3d300(&DAT_14ca130d0);
    if (DAT_14ca130d0 == -1) {
      FUN_142e271fc();
      if ((DAT_14ca13027 & 2) == 0) {
        DAT_14ca13027 = DAT_14ca13027 | 2;
        _DAT_14ca12fc8 = L"FGbxExtractMatBinCS";
        _DAT_14ca12fe0 = FUN_146826540;
        _DAT_14ca12fe8 = FUN_146825d77;
        _DAT_14ca12ff0 = FUN_146825fd6;
        _DAT_14ca12ff8 = FUN_1407e02ea;
        _DAT_14ca13000 = FUN_146826273;
        _DAT_14ca12fd8 = FUN_142dff8da;
        _DAT_14ca13018 = 0xffffffff000000e0;
        _DAT_14ca13020 = 8;
        DAT_14ca13024 = 0;
        _DAT_14ca13008 = &LAB_142dff906;
        _DAT_14ca18b48 = L"BASE";
        DAT_14ca18b72 = 4;
        _DAT_14ca18b50 = FUN_140b35ae4();
        _DAT_14ca18b58 = DAT_14ca12fd0;
        _DAT_14ca18b60 = &LAB_14682652b;
        DAT_14ca12fd0 = &DAT_14ca18b48;
        DAT_14ca13025 = DAT_14ca13025 + '\x01';
        _DAT_14ca18b68 = 0x100000000;
        if (*(char *)(_DAT_14ca18b50 + 100) != '\0') {
          DAT_14ca13026 = DAT_14ca13026 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca12fc0);
      }
      FUN_140db5666(&DAT_14ca13028,0,&DAT_14ca12fc0,L"FGbxExtractMatBinCS",
                    L"/Engine/Private/GbxFetchMatBinVisibility.usf",L"MainCS",5,1,FUN_142dffbb2,
                    FUN_142dffb52,&LAB_142dffb4e,&LAB_142dffb4a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca17028);
      _DAT_14ca13028 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dffc3c);
      _Init_thread_footer(&DAT_14ca130d0);
    }
  }
  return &DAT_14ca13028;
}



// FUNCTION 142dffb52 FUN_142dffb52 body=96 status=ok
// SIG undefined FUN_142dffb52(void)

undefined8 FUN_142dffb52(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e271fc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17028,1);
  return uVar3;
}



// FUNCTION 142dffbb2 FUN_142dffbb2 body=138 status=ok
// SIG undefined FUN_142dffbb2(void)

void * FUN_142dffbb2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142dffc48 FUN_142dffc48 body=1925 status=ok
// SIG undefined FUN_142dffc48(void)

void FUN_142dffc48(longlong param_1,longlong param_2,longlong *param_3,uint param_4,uint param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar18;
  ushort *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int iVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  ulonglong *local_b0;
  uint local_a4;
  ulonglong *local_a0;
  ulonglong local_98;
  ulonglong *local_90;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  undefined6 uVar17;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14ca19690 == '\x01') {
    local_a4 = param_4 + 0x1f >> 5;
    uVar11 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar11 = DAT_14ca84e48;
    }
    local_58 = CONCAT44(local_58._4_4_,0x4129);
    local_50 = (undefined *)0x0;
    uVar15 = DAT_14ca84e48;
    if (local_a4 < DAT_14ca84e48) {
      uVar15 = local_a4;
    }
    local_60 = (undefined8 *)CONCAT44(uVar15 + (uVar15 == 0),uVar11 + (uVar11 == 0));
    puVar1 = (ulonglong *)(param_2 + 0x70);
    uVar14 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar9 = uVar14 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar9) {
      FUN_140023dd8(puVar1,0x160);
      uVar14 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar9 = uVar14 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar9;
    FUN_1456bd266(uVar14,L"GbxMatBinVisMask",&local_60,0);
    iVar4 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar4 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar4 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar4);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar4 * 8) = uVar14;
    *(int *)(uVar14 + 0x7c) = *(int *)(param_2 + 400) + -1;
    puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar23 + 6;
    local_98 = uVar14;
    if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x40);
      puVar23 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar10 = puVar23 + 6;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar10;
    *puVar23 = &PTR_FUN_14a299900;
    puVar23[4] = 0;
    puVar23[5] = 0;
    iVar4 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar23;
    *(uint *)(puVar23 + 2) = param_4;
    *(undefined8 *)((longlong)puVar23 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
    lVar6 = *param_3;
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar20 + 9;
    local_80 = (ulonglong)param_4;
    local_78 = param_1;
    if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x50);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar20 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar10;
    puVar20[1] = *(undefined8 *)(lVar6 + 8);
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 3;
    *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
    *puVar20 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar20 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar20 + 0x2c) = 0xffffffff00000000;
    puVar20[7] = 0;
    puVar20[8] = lVar6;
    iVar4 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
    local_b0 = puVar1;
    if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar4);
    }
    puVar1 = local_b0;
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar23[4] = puVar20;
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar20 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
      FUN_140023dd8(local_b0,0x48);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar20 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar10;
    puVar20[1] = *(undefined8 *)(local_98 + 8);
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 2;
    *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar20 + 5) = 0;
    *puVar20 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar20 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
    puVar20[7] = local_98;
    iVar4 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar23[5] = puVar20;
    puVar10 = puVar23 + 2;
    uVar7 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_142dff90a();
    uVar9 = 0;
    FUN_1448e935e(uVar7,&local_60,&DAT_14ca13028,0);
    FUN_142dff90a();
    lVar24 = (longlong)local_60;
    local_88 = local_58;
    FUN_142e271fc();
    lVar6 = DAT_14ca17070;
    iVar4 = *(int *)(DAT_14ca17070 + 0x38);
    if (0 < (longlong)iVar4) {
      local_90 = (ulonglong *)(lVar24 + 0x30);
      local_a0 = (ulonglong *)(lVar24 + 0x20);
      lVar21 = 0;
      iVar13 = 0;
      iVar22 = 0;
      do {
        bVar2 = *(byte *)(*(longlong *)(lVar6 + 0x30) + 2 + lVar21 * 4);
        if (bVar2 < 0x14) {
          uVar3 = *(ushort *)(*(longlong *)(lVar6 + 0x30) + lVar21 * 4);
          uVar14 = (ulonglong)uVar3;
          iVar12 = iVar13;
          if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
            if (bVar2 == 0x13) {
              if (iVar22 < *(int *)(lVar24 + 0x38)) {
                uVar8 = *local_90;
                uVar18 = ((longlong)uVar8 >> 0x18) + (longlong)local_90;
                if ((uVar8 & 1) == 0) {
                  uVar18 = uVar8;
                }
                if (uVar3 == *(ushort *)(uVar18 + 2 + (longlong)iVar22 * 4)) {
                  iVar22 = iVar22 + 1;
                  goto LAB_142e00034;
                }
              }
              if ((*(longlong *)((longlong)puVar10 + uVar14) != 0) &&
                 ((*(byte *)((longlong)puVar23 + uVar14 + 0x18) & 2) == 0)) goto LAB_142e0002c;
            }
          }
          else {
            uVar11 = *(uint *)(lVar24 + 0x18);
            if ((int)uVar9 < (int)uVar11) {
              uVar8 = *(ulonglong *)(lVar24 + 0x10);
              uVar18 = ((longlong)uVar8 >> 0x18) + lVar24 + 0x10;
              if ((uVar8 & 1) == 0) {
                uVar18 = uVar8;
              }
              puVar19 = (ushort *)(uVar18 + (longlong)(int)uVar9 * 4);
              do {
                if (uVar3 <= *puVar19) {
                  if (*puVar19 == uVar3) goto LAB_142e00034;
                  goto LAB_142e00020;
                }
                uVar15 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar15;
                puVar19 = puVar19 + 2;
              } while (uVar11 != uVar15);
              uVar9 = (ulonglong)uVar11;
            }
LAB_142e00020:
            iVar5 = *(int *)(lVar24 + 0x28);
            if (iVar13 < iVar5) {
              uVar8 = *local_a0;
              uVar18 = ((longlong)uVar8 >> 0x18) + (longlong)local_a0;
              if ((uVar8 & 1) == 0) {
                uVar18 = uVar8;
              }
              puVar19 = (ushort *)(uVar18 + (longlong)iVar13 * 6);
              do {
                if (uVar3 <= *puVar19) {
                  iVar12 = iVar13;
                  if (*puVar19 == uVar3) goto LAB_142e00034;
                  break;
                }
                iVar13 = iVar13 + 1;
                puVar19 = puVar19 + 3;
                iVar12 = iVar5;
              } while (iVar5 != iVar13);
            }
LAB_142e0002c:
            *(undefined8 *)((longlong)puVar10 + uVar14) = 0;
            iVar13 = iVar12;
          }
        }
LAB_142e00034:
        lVar21 = lVar21 + 1;
      } while (lVar21 != iVar4);
    }
    FUN_140069376(param_2);
    puVar1 = local_b0;
    uVar17 = (undefined6)(uVar9 >> 0x10);
    uVar16 = (undefined4)CONCAT62(uVar17,2);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar16 = (undefined4)CONCAT62(uVar17,4);
    }
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar23 = puVar20 + 0x3d;
    if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
      FUN_140023dd8(local_b0,0x1f0);
      puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar23 = puVar20 + 0x3d;
    }
    *local_b0 = (ulonglong)puVar23;
    local_58 = DAT_14ca17070;
    if (DAT_14ca17070 != 0) {
      LOCK();
      *(int *)(DAT_14ca17070 + 8) = *(int *)(DAT_14ca17070 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca17028;
    local_b8 = 2;
    local_60 = puVar10;
    FUN_140068f1a(puVar20,&local_61,&local_60,uVar16);
    *puVar20 = &PTR_FUN_14a299910;
    puVar20[0x37] = &DAT_14ca17028;
    puVar20[0x38] = puVar10;
    puVar20[0x39] = lVar24;
    puVar20[0x3a] = local_88;
    *(uint *)(puVar20 + 0x3b) = local_a4;
    *(undefined1 **)((longlong)puVar20 + 0x1dc) = &DAT_100000001;
    iVar4 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar4 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar4 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar4 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar20);
    puVar10 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    FUN_1446f470e(&local_70,L"Nanite.Gbx.MaterialBin",1);
    FUN_14047abb0(puVar10,local_70);
    lVar6 = local_78;
    *puVar10 = &PTR_FUN_14a37f800;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    iVar4 = *(int *)(local_78 + 0x18);
    lVar24 = (longlong)iVar4;
    *(uint *)(local_78 + 0x18) = iVar4 + 1U;
    if (*(uint *)(local_78 + 0x1c) < iVar4 + 1U) {
      FUN_142e2cd74(local_78 + 0x10,iVar4);
    }
    lVar21 = *(longlong *)(lVar6 + 0x10);
    *(undefined8 **)(lVar21 + lVar24 * 0x18) = puVar10;
    *(ulonglong *)(lVar21 + 8 + lVar24 * 0x18) = local_98;
    *(int *)(lVar21 + 0x10 + lVar24 * 0x18) = (int)local_80;
    *(uint *)(lVar21 + 0x14 + lVar24 * 0x18) = param_5;
    uVar11 = *(uint *)(lVar6 + 0x20);
    if (*(uint *)(lVar6 + 0x20) < param_5) {
      uVar11 = param_5;
    }
    *(uint *)(lVar6 + 0x20) = uVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e003ce FUN_142e003ce body=653 status=ok
// SIG undefined FUN_142e003ce(void)

void FUN_142e003ce(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14ca19690 == '\x01') && (iVar8 = *(int *)(param_1 + 3), iVar8 != 0)) {
    plVar12 = param_1 + 2;
    puVar1 = (ulonglong *)(param_2 + 0x70);
    local_90 = param_2 + 0x98;
    local_98 = param_2 + 0x168;
    local_88 = plVar12;
    do {
      lVar3 = *plVar12;
      lVar9 = (longlong)(iVar8 + -1);
      local_68 = *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18);
      puVar2 = (undefined4 *)(lVar3 + lVar9 * 0x18);
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      uVar4 = *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar13 + 4;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(puVar1,0x30);
        puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar11 = puVar13 + 4;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      *puVar13 = &PTR_FUN_14a20c998;
      puVar13[2] = 0;
      *(undefined4 *)(puVar13 + 3) = 0x80;
      iVar8 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar8 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar8 + 1U) {
        FUN_1448cfae8(local_90,iVar8);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar8 * 8) = puVar13;
      puVar13[2] = uVar4;
      *(undefined4 *)(puVar13 + 3) = 0x80;
      lVar10 = FUN_1406be90a();
      FUN_140069376(param_2);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar14 + 0x3a;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(puVar1,0x1d8);
        puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar14 + 0x3a;
      }
      local_60 = puVar13 + 2;
      *puVar1 = (ulonglong)puVar11;
      local_58 = *(longlong *)(lVar10 + 0x48);
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      local_a8 = 2;
      local_50 = lVar10;
      FUN_140068f1a(puVar14,&local_79,&local_60,0x18);
      *puVar14 = &PTR_FUN_14a299930;
      *(undefined4 *)(puVar14 + 0x37) = local_78;
      *(undefined4 *)((longlong)puVar14 + 0x1bc) = uStack_74;
      *(undefined4 *)(puVar14 + 0x38) = uStack_70;
      *(undefined4 *)((longlong)puVar14 + 0x1c4) = uStack_6c;
      puVar14[0x39] = local_68;
      iVar8 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar8 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar8 + 1U) {
        FUN_14470e57a(local_98,iVar8);
      }
      puVar2 = (undefined4 *)(lVar3 + lVar9 * 0x18);
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar8 * 8) = puVar14;
      *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar14);
      *(undefined8 *)(puVar2 + 2) = 0;
      puVar11 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      plVar12 = local_88;
      *puVar11 = 0;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *(undefined4 *)(puVar11 + 1) = *puVar2;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
      *(undefined4 *)(puVar11 + 2) = uVar6;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar7;
      puVar11[3] = *(undefined8 *)(puVar2 + 4);
      if (puVar11 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)*param_1;
        *param_1 = puVar11;
        *puVar13 = puVar11;
      }
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
      FUN_142e2d0e4(local_88);
      iVar8 = *(int *)(param_1 + 3);
    } while (iVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e0065c FUN_142e0065c body=1801 status=ok
// SIG undefined FUN_142e0065c(void)

void FUN_142e0065c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  void *_Dst;
  undefined1 *puVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  bool bVar28;
  uint local_6c;
  
  if (DAT_14ca19690 == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x28);
    iVar7 = *(int *)(param_1 + 0x30);
    uVar22 = *(int *)(param_1 + 0x20) + 1;
    if (iVar7 < (int)uVar22) {
      *(uint *)(param_1 + 0x30) = uVar22;
      if ((uint)(*(int *)(param_1 + 0x34) - iVar7) < uVar22 - iVar7) {
        FUN_142e2d290(plVar1,iVar7);
      }
      FUN_142e2d269((longlong)iVar7 * 0x20 + *plVar1,uVar22 - iVar7);
    }
    else {
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((ulonglong)uVar22);
      }
      iVar5 = iVar7 - uVar22;
      if (iVar5 != 0 && (int)uVar22 <= iVar7) {
        pvVar9 = (void *)((ulonglong)uVar22 * 0x20 + *(longlong *)(param_1 + 0x28));
        FUN_142e2d486(pvVar9,iVar5);
        iVar6 = *(int *)(param_1 + 0x30) - iVar7;
        if (iVar6 != 0) {
          memmove(pvVar9,(void *)((longlong)iVar5 * 0x20 + (longlong)pvVar9),(longlong)iVar6 << 5);
          iVar7 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar7 - iVar5;
        FUN_142e2d388(plVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (**(longlong **)(param_1 + 8) != 0) {
      puVar26 = (undefined8 *)0x0;
      uVar22 = 0;
      local_6c = 0;
      do {
        if (**(longlong **)(param_1 + 8) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)(**(longlong **)(param_1 + 8) + 8);
        }
        lVar24 = *(longlong *)(*plVar8 + 8);
        if ((lVar24 != 0) &&
           ((*(int *)(lVar24 + 0x10) != 0 ||
            (cVar3 = (**(code **)(**(longlong **)(*plVar8 + 8) + 0x18))(), cVar3 == '\0')))) break;
        lVar24 = **(longlong **)(param_1 + 8);
        if (lVar24 != 0) {
          puVar26 = *(undefined8 **)(lVar24 + 8);
          local_6c = *(uint *)(lVar24 + 0x18);
          uVar22 = *(uint *)(lVar24 + 0x1c);
          lVar16 = *(longlong *)(param_1 + 8);
          *(longlong *)(param_1 + 8) = lVar24;
          *(undefined8 *)(lVar24 + 8) = 0;
          *(undefined8 *)(lVar24 + 0x10) = 0;
          *(undefined8 *)(lVar24 + 0x18) = 0;
          if (lVar16 != 0) {
            FUN_1400020a8();
          }
        }
        if (uVar22 < *(uint *)(param_1 + 0x30)) {
          lVar24 = 0;
          iVar7 = 0;
          do {
            if ((longlong *)puVar26[lVar24 + 3] != (longlong *)0x0) {
              iVar5 = (**(code **)(*(longlong *)puVar26[lVar24 + 3] + 0x18))();
              iVar7 = iVar7 + iVar5;
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 != 8);
          uVar20 = iVar7 << 3;
          if (local_6c < (uint)(iVar7 << 3)) {
            uVar20 = local_6c;
          }
          uVar23 = *(uint *)(puVar26 + 2);
          if (uVar23 == 0) {
            uVar25 = 0x20;
          }
          else {
            uVar25 = 0;
            if (uVar23 != 0) {
              for (; (uVar23 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
              }
            }
          }
          lVar24 = puVar26[(ulonglong)uVar25 + 3];
          if (lVar24 != 0) {
            uVar20 = uVar20 + 0x1f & 0xffffffe0;
            uVar23 = uVar20 >> 3;
            *(uint *)((longlong)puVar26 + 0x14) = uVar25;
            pvVar9 = (void *)(**(code **)(*DAT_14ca83900 + 0xf8))
                                       (DAT_14ca83900,&DAT_14ca85100,lVar24,puVar26[1],0,uVar23);
            if (pvVar9 != (void *)0x0) {
              lVar24 = *plVar1;
              lVar16 = (longlong)(int)uVar22 * 0x20;
              *(undefined4 *)(lVar24 + 0x18 + lVar16) = 0;
              FUN_142e013fc((void *)(lVar24 + lVar16),uVar20,0);
              _Dst = *(void **)(lVar24 + 0x10 + lVar16);
              if (_Dst == (void *)0x0) {
                _Dst = (void *)(lVar24 + lVar16);
              }
              memcpy(_Dst,pvVar9,(ulonglong)uVar23);
              (**(code **)(*DAT_14ca83900 + 0x100))
                        (DAT_14ca83900,&DAT_14ca85100,
                         puVar26[(ulonglong)*(uint *)((longlong)puVar26 + 0x14) + 3]);
            }
          }
        }
        if (puVar26 != (undefined8 *)0x0) {
          lVar24 = 0x58;
          do {
            lVar16 = *(longlong *)((longlong)puVar26 + lVar24 + -8);
            if (lVar16 != 0) {
              LOCK();
              puVar2 = (uint *)(lVar16 + 8);
              uVar20 = *puVar2;
              *puVar2 = *puVar2 - 1;
              UNLOCK();
              if ((uVar20 & 0x3fffffff) == 1) {
                puVar2 = (uint *)(lVar16 + 8);
                LOCK();
                uVar20 = *puVar2;
                *puVar2 = *puVar2 | 0x40000000;
                UNLOCK();
                if ((uVar20 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar16 + 0xd);
                  plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar10[1] = lVar16;
                  plVar8 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar10 = (longlong)plVar8;
                      LOCK();
                      bVar28 = plVar8 != DAT_14ca843c0;
                      plVar11 = plVar10;
                      if (bVar28) {
                        plVar8 = DAT_14ca843c0;
                        plVar11 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar11;
                      UNLOCK();
                    } while (bVar28);
                  }
                  else {
                    do {
                      *plVar10 = (longlong)plVar11;
                      LOCK();
                      bVar28 = plVar11 != DAT_14ca843c8;
                      plVar8 = plVar10;
                      if (bVar28) {
                        plVar11 = DAT_14ca843c8;
                        plVar8 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar8;
                      UNLOCK();
                    } while (bVar28);
                  }
                }
              }
            }
            lVar24 = lVar24 + -8;
          } while (lVar24 != 0x18);
          *puVar26 = &PTR_LAB_14a217b60;
          lVar24 = puVar26[1];
          if (lVar24 != 0) {
            LOCK();
            puVar2 = (uint *)(lVar24 + 8);
            uVar20 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar20 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(lVar24 + 8);
              LOCK();
              uVar20 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar20 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)(lVar24 + 0xd);
                plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                plVar10[1] = lVar24;
                plVar8 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar10 = (longlong)plVar8;
                    LOCK();
                    bVar28 = plVar8 != DAT_14ca843c0;
                    plVar11 = plVar10;
                    if (bVar28) {
                      plVar8 = DAT_14ca843c0;
                      plVar11 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar11;
                    UNLOCK();
                  } while (bVar28);
                }
                else {
                  do {
                    *plVar10 = (longlong)plVar11;
                    LOCK();
                    bVar28 = plVar11 != DAT_14ca843c8;
                    plVar8 = plVar10;
                    if (bVar28) {
                      plVar11 = DAT_14ca843c8;
                      plVar8 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar8;
                    UNLOCK();
                  } while (bVar28);
                }
              }
            }
          }
          FUN_1400020a8(puVar26);
        }
      } while (**(longlong **)(param_1 + 8) != 0);
    }
    iVar7 = *(int *)(param_1 + 0x30);
    if (0 < iVar7) {
      lVar24 = param_1 + 0x38;
      if (lVar24 != *(longlong *)(param_1 + 0x28)) {
        FUN_14725cb18(lVar24);
        iVar7 = *(int *)(param_1 + 0x30);
      }
      if (1 < iVar7) {
        lVar16 = 1;
        do {
          lVar21 = *(longlong *)(param_1 + 0x28);
          iVar7 = *(int *)(param_1 + 0x50);
          iVar5 = *(int *)(lVar21 + 0x18 + lVar16 * 0x20);
          iVar6 = iVar5;
          if (iVar5 < iVar7) {
            iVar6 = iVar7;
          }
          iVar17 = iVar6 - iVar7;
          if (iVar17 < 0) {
            *(int *)(param_1 + 0x50) = iVar6;
            iVar7 = iVar6 + 0x1f;
            if (-1 < iVar6) {
              iVar7 = iVar6;
            }
            if (iVar6 % 0x20 != 0) {
              lVar12 = *(longlong *)(param_1 + 0x48);
              if (*(longlong *)(param_1 + 0x48) == 0) {
                lVar12 = lVar24;
              }
              bVar4 = -(char)(iVar6 % 0x20);
              *(uint *)(lVar12 + (longlong)(iVar7 >> 5) * 4) =
                   (uint)(*(int *)(lVar12 + (longlong)(iVar7 >> 5) * 4) << (bVar4 & 0x1f)) >>
                   (bVar4 & 0x1f);
              goto LAB_142e00afd;
            }
          }
          else {
            if (iVar7 < iVar5) {
              if (iVar7 == 0) {
                iVar5 = -1;
              }
              else {
                iVar5 = iVar7 + 0x1e;
                if (-1 < iVar7 + -1) {
                  iVar5 = iVar7 + -1;
                }
                iVar5 = iVar5 >> 5;
              }
              iVar19 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar19 = iVar6 + -1;
              }
              if (iVar19 >> 5 == iVar5) {
                *(int *)(param_1 + 0x50) = iVar6;
              }
              else {
                if (*(int *)(param_1 + 0x54) < iVar6) {
                  if (iVar6 + 0x1fU < 0xa0) {
                    iVar5 = 0x80;
                  }
                  else {
                    uVar22 = iVar6 + 0x1fU >> 5;
                    if (*(int *)(param_1 + 0x54) + 0x1fU < 0xa0) {
                      uVar20 = 4;
                      if (4 < uVar22) {
                        uVar20 = uVar22;
                      }
                    }
                    else {
                      uVar20 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
                    }
                    iVar5 = uVar20 << 5;
                    if (uVar20 < uVar22) {
                      iVar5 = -0x20;
                    }
                  }
                  *(int *)(param_1 + 0x54) = iVar5;
                  FUN_1401f5dc4(lVar24,iVar7);
                  iVar6 = *(int *)(param_1 + 0x50) + iVar17;
                }
                iVar5 = iVar6 + 0x1f;
                if (-1 < iVar6) {
                  iVar5 = iVar6;
                }
                *(int *)(param_1 + 0x50) = iVar6;
                if (iVar6 % 0x20 != 0) {
                  lVar12 = *(longlong *)(param_1 + 0x48);
                  if (*(longlong *)(param_1 + 0x48) == 0) {
                    lVar12 = lVar24;
                  }
                  bVar4 = -(char)(iVar6 % 0x20);
                  *(uint *)(lVar12 + (longlong)(iVar5 >> 5) * 4) =
                       (uint)(*(int *)(lVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
                       (bVar4 & 0x1f);
                }
              }
              FUN_142e2d4b0(lVar24,iVar7,iVar17,0);
            }
LAB_142e00afd:
            iVar6 = *(int *)(param_1 + 0x50);
          }
          if (iVar6 != 0) {
            lVar21 = lVar21 + lVar16 * 0x20;
            iVar7 = *(int *)(lVar21 + 0x18);
            if (*(longlong *)(lVar21 + 0x10) != 0) {
              lVar21 = *(longlong *)(lVar21 + 0x10);
            }
            puVar14 = (undefined1 *)(ulonglong)(0xffffffff >> (-(char)(iVar7 % 0x20) & 0x1fU));
            if (iVar7 % 0x20 < 1) {
              puVar14 = &DAT_ffffffff;
            }
            lVar12 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar12 = lVar24;
            }
            uVar22 = 0xffffffff >> (-(char)(iVar6 % 0x20) & 0x1fU);
            if (iVar6 % 0x20 < 1) {
              uVar22 = 0xffffffff;
            }
            if (0 < iVar6) {
              uVar20 = iVar6 + 0x1fU >> 5;
              iVar5 = iVar7 + 0x3e;
              if (-1 < iVar7 + 0x1f) {
                iVar5 = iVar7 + 0x1f;
              }
              uVar23 = -(uint)(uVar20 - 1 != 0) | uVar22;
              puVar27 = &DAT_ffffffff;
              if (iVar7 - 1U < 0x20) {
                puVar27 = puVar14;
              }
              uVar18 = 0;
              do {
                uVar25 = 0;
                if ((longlong)uVar18 < (longlong)(iVar5 >> 5)) {
                  uVar25 = (uint)puVar27 & *(uint *)(lVar21 + uVar18 * 4);
                }
                uVar13 = uVar23 & *(uint *)(lVar12 + uVar18 * 4);
                uVar15 = 0xffffffff;
                if (uVar20 - 1 == uVar18) {
                  uVar15 = uVar22;
                }
                uVar23 = 0xffffffff;
                if (uVar20 - 2 == uVar18) {
                  uVar23 = uVar22;
                }
                *(uint *)(lVar12 + uVar18 * 4) = uVar15 & (uVar13 | uVar25);
                bVar28 = (iVar5 >> 5) - 2 == uVar18;
                uVar18 = uVar18 + 1;
                puVar27 = &DAT_ffffffff;
                if (bVar28) {
                  puVar27 = puVar14;
                }
              } while (uVar20 != uVar18);
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(param_1 + 0x30));
      }
    }
    iVar7 = FUN_144a79e9a(param_2 + 0x2d70,1,*(undefined4 *)(param_2 + 0x2d88));
    if (*(uint *)(param_1 + 0x50) < iVar7 + 1U) {
      iVar7 = FUN_144a79e9a(param_2 + 0x2d70,1,*(undefined4 *)(param_2 + 0x2d88));
      FUN_142e013fc(param_1 + 0x38,iVar7 + 1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142e00d66 FUN_142e00d66 body=1227 status=ok
// SIG undefined FUN_142e00d66(void)

/* WARNING: Removing unreachable block (ram,0x000142e0122d) */

void FUN_142e00d66(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14ca19690 == '\0') {
    bVar18 = true;
    if (((*DAT_14ca196a8 == 0) && (*DAT_14ca19688 == 0)) &&
       (bVar18 = DAT_14ca12f78 != DAT_14ca12fa4, !bVar18)) goto LAB_142e011df;
  }
  else {
    bVar18 = false;
  }
  plVar7 = (longlong *)*DAT_14ca196a8;
  if (plVar7 != (longlong *)0x0) {
    do {
      plVar3 = DAT_14ca196a8;
      uVar13 = plVar7[1];
      DAT_14ca196a8 = plVar7;
      plVar7[1] = 0;
      if (plVar3 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar5 = uVar5 >> 0x10 ^ uVar5;
      if (DAT_14ca12f78 != DAT_14ca12fa4) {
        puVar8 = DAT_14ca12fb0;
        if (DAT_14ca12fb0 == (undefined *)0x0) {
          puVar8 = &DAT_14ca12fa8;
        }
        iVar10 = *(int *)(puVar8 + (ulonglong)(DAT_14ca12fb8 - 1U & uVar5) * 4);
        while (iVar10 != -1) {
          puVar1 = (ulonglong *)(DAT_14ca12f70 + (longlong)iVar10 * 0x18);
          if (*puVar1 == uVar13) {
            if (puVar1 != (ulonglong *)0x0) goto LAB_142e00f5d;
            break;
          }
          iVar10 = (int)puVar1[2];
        }
      }
      FUN_14725d788(&DAT_14ca12f70,local_50);
      puVar1 = local_48;
      iVar10 = local_50[0];
      *local_48 = uVar13;
      *(undefined4 *)(local_48 + 1) = 0;
      *(undefined4 *)(local_48 + 2) = 0xffffffff;
      local_58 = 0;
      cVar4 = FUN_14725d86e(&DAT_14ca12f70,uVar5,local_48,local_50);
      if (cVar4 == '\0') {
        uVar6 = DAT_14ca12f78 - DAT_14ca12fa4;
        iVar14 = 1;
        if (3 < uVar6) {
          uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
          lVar16 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar14 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((int)uVar6 < 1) || (iVar14 <= DAT_14ca12fb8)) {
          uVar5 = DAT_14ca12fb8 - 1U & uVar5;
          *(uint *)((longlong)puVar1 + 0x14) = uVar5;
          puVar8 = DAT_14ca12fb0;
          if (DAT_14ca12fb0 == (undefined *)0x0) {
            puVar8 = &DAT_14ca12fa8;
          }
          *(undefined4 *)(puVar1 + 2) =
               *(undefined4 *)(puVar8 + ((longlong)DAT_14ca12fb8 - 1U & (longlong)(int)uVar5) * 4);
          puVar8 = DAT_14ca12fb0;
          if (DAT_14ca12fb0 == (undefined *)0x0) {
            puVar8 = &DAT_14ca12fa8;
          }
          *(int *)(puVar8 + ((longlong)DAT_14ca12fb8 - 1U & (longlong)(int)uVar5) * 4) = iVar10;
        }
        else {
          DAT_14ca12fb8 = iVar14;
          FUN_14725d5ac(&DAT_14ca12f70);
        }
      }
      puVar1 = (ulonglong *)(DAT_14ca12f70 + (longlong)iVar10 * 0x18);
LAB_142e00f5d:
      *(undefined4 *)(puVar1 + 1) = 0x80;
      plVar7 = (longlong *)*DAT_14ca196a8;
    } while (plVar7 != (longlong *)0x0);
  }
  plVar3 = (longlong *)*DAT_14ca19688;
  plVar7 = DAT_14ca19688;
  while (DAT_14ca19688 = plVar3, DAT_14ca19688 != (longlong *)0x0) {
    uVar13 = DAT_14ca19688[1];
    DAT_14ca19688[1] = 0;
    if (plVar7 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14ca12f78 != DAT_14ca12fa4) {
      uVar5 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      puVar8 = DAT_14ca12fb0;
      if (DAT_14ca12fb0 == (undefined *)0x0) {
        puVar8 = &DAT_14ca12fa8;
      }
      for (iVar10 = *(int *)(puVar8 + ((longlong)(int)(uVar5 >> 0x10 ^ uVar5) &
                                      (longlong)DAT_14ca12fb8 - 1U) * 4); iVar10 != -1;
          iVar10 = *(int *)(DAT_14ca12f70 + (longlong)iVar10 * 0x18 + 0x10)) {
        if (*(ulonglong *)(DAT_14ca12f70 + (longlong)iVar10 * 0x18) == uVar13) {
          FUN_142e2d5a6();
          break;
        }
      }
    }
    plVar7 = DAT_14ca19688;
    plVar3 = (longlong *)*DAT_14ca19688;
  }
  DAT_14ca19688 = plVar7;
  if (DAT_14ca12f98 == 0) {
    uVar17 = 1;
    uVar13 = 0;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar15 = &DAT_14ca12f80;
    if (DAT_14ca12f90 != (uint *)0x0) {
      puVar15 = DAT_14ca12f90;
    }
    uVar5 = *puVar15;
    if (uVar5 == 0) {
      iVar10 = DAT_14ca12f98 + 0x1e;
      if (-1 < DAT_14ca12f98 + -1) {
        iVar10 = DAT_14ca12f98 + -1;
      }
      uVar13 = 0;
      uVar17 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar17 = uVar13;
      }
      iVar14 = 0;
      do {
        if (uVar17 == uVar13) goto LAB_142e011df;
        iVar14 = iVar14 + 0x20;
        uVar5 = puVar15[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar13 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar5 & uVar5);
    uVar2 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (DAT_14ca12f98 <= iVar10) {
      iVar10 = DAT_14ca12f98;
    }
  }
  if (iVar10 < DAT_14ca12f98) {
    uVar5 = 0xffffffff;
    do {
      lVar9 = (longlong)iVar10;
      lVar16 = *(longlong *)(DAT_14ca12f70 + lVar9 * 0x18);
      if (((bVar18) ||
          (iVar10 = *(int *)(DAT_14ca12f70 + 8 + lVar9 * 0x18),
          *(int *)(DAT_14ca12f70 + 8 + lVar9 * 0x18) = iVar10 + -1, iVar10 < 2)) ||
         ((*(longlong *)(lVar16 + 8) == 0 || (*(int *)(lVar16 + 0x78) == 0)))) {
        *(byte *)(lVar16 + 0x172) = *(byte *)(lVar16 + 0x172) & 0xef;
        FUN_142e2d5a6();
      }
      uVar5 = uVar5 & ~(uint)uVar17;
      puVar15 = DAT_14ca12f90;
      if (DAT_14ca12f90 == (uint *)0x0) {
        puVar15 = &DAT_14ca12f80;
      }
      iVar10 = (int)uVar13;
      lVar16 = (longlong)iVar10;
      uVar6 = puVar15[lVar16] & uVar5;
      if (uVar6 == 0) {
        iVar11 = DAT_14ca12f98 + 0x1e;
        if (-1 < DAT_14ca12f98 + -1) {
          iVar11 = DAT_14ca12f98 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar10) {
          iVar12 = iVar10;
        }
        if (iVar11 <= iVar10) break;
        lVar9 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar6 = puVar15[lVar16 + lVar9 + 1];
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar12 - lVar16 == lVar9) goto LAB_142e011df;
        }
        uVar13 = (ulonglong)(iVar10 + (int)lVar9 + 1);
        uVar5 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar10 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar10 < DAT_14ca12f98);
  }
LAB_142e011df:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e01232 FUN_142e01232 body=458 status=ok
// SIG undefined FUN_142e01232(void)

void FUN_142e01232(longlong param_1)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  if (DAT_14ca19690 == '\x01') {
    if (DAT_14ca12f98 == 0) {
      uVar11 = 1;
      uVar4 = 0;
      iVar10 = 0;
      iVar6 = 0;
    }
    else {
      puVar12 = &DAT_14ca12f80;
      if (DAT_14ca12f90 != (uint *)0x0) {
        puVar12 = DAT_14ca12f90;
      }
      uVar13 = *puVar12;
      if (uVar13 == 0) {
        iVar6 = DAT_14ca12f98 + 0x1e;
        if (-1 < DAT_14ca12f98 + -1) {
          iVar6 = DAT_14ca12f98 + -1;
        }
        uVar4 = 0;
        uVar11 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar11 = uVar4;
        }
        iVar10 = 0;
        do {
          if (uVar11 == uVar4) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar13 = puVar12[uVar4 + 1];
          uVar4 = uVar4 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar4 = 0;
        iVar10 = 0;
      }
      uVar11 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (DAT_14ca12f98 <= iVar6) {
        iVar6 = DAT_14ca12f98;
      }
    }
    if (iVar6 < DAT_14ca12f98) {
      uVar13 = 0xffffffff;
      iVar3 = DAT_14ca12f98;
      do {
        lVar9 = *(longlong *)(DAT_14ca12f70 + (longlong)iVar6 * 0x18);
        lVar8 = (longlong)*(int *)(lVar9 + 0x78);
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x70);
          lVar5 = 0;
          do {
            uVar2 = *(ushort *)(lVar9 + 4 + lVar5);
            if ((int)(uint)uVar2 < *(int *)(param_1 + 0x18)) {
              lVar16 = *(longlong *)(param_1 + 0x10);
              if (*(longlong *)(param_1 + 0x10) == 0) {
                lVar16 = param_1;
              }
              puVar12 = (uint *)(lVar16 + (ulonglong)(uVar2 >> 5) * 4);
              *puVar12 = *puVar12 | 1 << ((byte)uVar2 & 0x1f);
            }
            lVar5 = lVar5 + 8;
            iVar3 = DAT_14ca12f98;
          } while (lVar8 * 8 != lVar5);
        }
        uVar13 = uVar13 & ~(uint)uVar11;
        puVar12 = DAT_14ca12f90;
        if (DAT_14ca12f90 == (uint *)0x0) {
          puVar12 = &DAT_14ca12f80;
        }
        iVar6 = (int)uVar4;
        lVar9 = (longlong)iVar6;
        uVar7 = puVar12[lVar9] & uVar13;
        if (uVar7 == 0) {
          iVar14 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar14 = iVar3 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar6) {
            iVar15 = iVar6;
          }
          if (iVar14 <= iVar6) {
            return;
          }
          lVar8 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar7 = puVar12[lVar9 + lVar8 + 1];
            if (uVar7 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar15 - lVar9 == lVar8) {
              return;
            }
          }
          uVar4 = (ulonglong)(iVar6 + (int)lVar8 + 1);
          uVar13 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar11 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 142e013fc FUN_142e013fc body=293 status=ok
// SIG undefined FUN_142e013fc(void)

void FUN_142e013fc(void *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  *(int *)((longlong)param_1 + 0x18) = param_2;
  iVar5 = param_2;
  if (param_2 <= *(int *)((longlong)param_1 + 0x1c)) goto LAB_142e01488;
  uVar8 = iVar1 + 0x1fU >> 5;
  uVar4 = param_2 + 0x1fU >> 5;
  uVar7 = 4;
  if (4 < uVar4) {
    uVar7 = uVar4;
  }
  pvVar6 = *(void **)((longlong)param_1 + 0x10);
  if (param_2 + 0x1fU < 0xa0) {
    if (pvVar6 != (void *)0x0) {
      memmove(param_1,pvVar6,(ulonglong)(uVar8 << 2));
      uVar8 = 0;
      uVar4 = 0;
      goto LAB_142e01517;
    }
  }
  else {
    uVar4 = uVar7;
    if (pvVar6 == (void *)0x0) {
      FUN_140064110((longlong)param_1 + 0x10,0,uVar7,4);
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(ulonglong)(uVar8 << 2));
    }
    else {
LAB_142e01517:
      FUN_140064110((longlong)param_1 + 0x10,uVar8,uVar4,4);
    }
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar7 << 5;
  iVar5 = *(int *)((longlong)param_1 + 0x18);
LAB_142e01488:
  iVar2 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  if (iVar5 % 0x20 != 0) {
    pvVar6 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar6 = param_1;
    }
    bVar3 = -(char)(iVar5 % 0x20);
    *(uint *)((longlong)pvVar6 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
         (bVar3 & 0x1f);
  }
  if (param_2 - iVar1 == 0 || param_2 < iVar1) {
    return;
  }
  FUN_142e2d4b0(param_1,iVar1,param_2 - iVar1,param_3);
  return;
}



// FUNCTION 142e01521 FUN_142e01521 body=69 status=ok
// SIG undefined FUN_142e01521(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e01521(void)

{
  _DAT_14ca130e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e01563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca130f0,1);
  return;
}



// FUNCTION 142e01577 FUN_142e01577 body=69 status=ok
// SIG undefined FUN_142e01577(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e01577(void)

{
  _DAT_14ca13108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e015b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca13110,1);
  return;
}



// FUNCTION 142e01642 FUN_142e01642 body=578 status=ok
// SIG undefined FUN_142e01642(void)

longlong * FUN_142e01642(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  void *local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58;
  longlong local_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = *(longlong *)(param_2 + 500);
  FUN_1400021e4(&local_58,&local_48);
  local_80 = 0xffffffff;
  local_88 = 1;
  iVar1 = FUN_1447ee042(&local_48,&DAT_149e065c6,1,0);
  if (iVar1 != -1) {
    uVar3 = (ulonglong)(local_40 - 1);
    if (local_40 == 0) {
      uVar3 = 0;
    }
    uVar7 = iVar1 + 1;
    uVar2 = (uint)uVar3;
    if ((uVar2 - uVar7 != 0x7fffffff) &&
       ((longlong)(int)(uVar2 - uVar7) + (longlong)(int)uVar7 < 0x7fffffff)) {
      uVar5 = 0;
      if (0 < (int)uVar2) {
        uVar5 = uVar3;
      }
      uVar8 = uVar2 - (int)uVar5;
      if (0 < (int)uVar8) {
        iVar1 = local_40 - (uVar8 + (int)uVar5);
        if (iVar1 != 0) {
          pvVar4 = (void *)(uVar5 * 2 + (longlong)local_48);
          memmove(pvVar4,(void *)((longlong)pvVar4 + (ulonglong)uVar8 * 2),(longlong)iVar1 * 2);
        }
        local_40 = local_40 - uVar8;
        uVar2 = local_40 - 1;
        if (local_40 == 0) {
          uVar2 = 0;
        }
      }
    }
    if ((int)uVar7 < (int)uVar2) {
      uVar2 = uVar7;
    }
    if (0 < (int)uVar2) {
      if (local_40 - uVar2 != 0) {
        memmove(local_48,(void *)((longlong)local_48 + (ulonglong)uVar2 * 2),
                (longlong)(int)(local_40 - uVar2) * 2);
      }
      local_40 = local_40 - uVar2;
    }
  }
  FUN_1400021e4(param_2 + 0x1ec,local_68);
  pvVar4 = local_48;
  lVar6 = (longlong)local_40;
  local_78 = (void *)0x0;
  local_70 = local_40;
  FUN_1446dd670(&local_78,(uint)(lVar6 == 0) + local_40 + 1,0);
  if (lVar6 != 0) {
    memcpy(local_78,pvVar4,lVar6 * 2);
  }
  FUN_1400020e8(&local_78,&DAT_149e0635c,1);
  FUN_1401c7f3e(&local_58,&local_78,local_68);
  if (&local_58 == param_1) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_1 = local_58;
    local_58 = 0;
    param_1[1] = local_50;
    local_50 = 0;
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e01885 FUN_142e01885 body=512 status=ok
// SIG undefined FUN_142e01885(void)

void FUN_142e01885(longlong param_1)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined1 auStack_68 [30];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_1 != 0) && (DAT_14ca13118 != '\0')) && (*(int *)(DAT_14ca5b030 + 4) != 0)) {
    iVar5 = *(int *)(param_1 + 0x518);
    if (0 < iVar5) {
      lVar3 = 0;
      local_90 = param_1;
      do {
        lVar6 = **(longlong **)(*(longlong *)(param_1 + 0x510) + 0x38 + lVar3 * 0x48);
        if (((*(byte *)(lVar6 + 0x992) & 1) != 0) && (*(int *)(lVar6 + 0x30) != 0)) {
          FUN_142e01642(&local_78,*(undefined8 *)(*(longlong *)(lVar6 + 0xb60) + 0x28));
          FUN_1400020e8(&local_78,L"_Face_",6);
          iVar5 = 0;
          do {
            _Src = local_78;
            local_88 = (void *)0x0;
            lVar6 = (longlong)local_70;
            local_80 = local_70;
            if (lVar6 == 0) {
              local_7c = 0;
            }
            else {
              FUN_1446dd670(&local_88,local_70,0);
              memcpy(local_88,_Src,lVar6 * 2);
            }
            puVar1 = &local_4a;
            lVar6 = 0x1000000000;
            iVar2 = iVar5;
            do {
              lVar6 = lVar6 + -0x100000000;
              *puVar1 = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar2 % 10) * 2);
              uVar4 = iVar2 + 9;
              puVar1 = puVar1 + -1;
              iVar2 = iVar2 / 10;
            } while (0x12 < uVar4);
            FUN_1400020e8(&local_88,auStack_68 + (lVar6 >> 0x1f));
            if (local_88 != (void *)0x0) {
              FUN_1400020a8();
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 6);
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar5 = *(int *)(local_90 + 0x518);
          param_1 = local_90;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar5);
    }
  }
  DAT_14ca13118 = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e01a86 FUN_142e01a86 body=1571 status=ok
// SIG undefined FUN_142e01a86(void)

void FUN_142e01a86(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  undefined1 local_65;
  undefined1 *local_64;
  undefined4 local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caf1b90 == 0) {
    FUN_145e7ba6a(&DAT_14caf1948);
  }
  if ((((DAT_14caf1b90 & 1) != 0) && (DAT_14caf1998 != -1)) &&
     ((DAT_14caf1998 != 0 || (DAT_14caf1b58 == '\0')))) {
    lVar5 = *param_3;
    if (lVar5 == 0) {
      local_80 = 0;
      local_88 = (undefined1 **)CONCAT44(local_88._4_4_,2);
      lVar5 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,4);
    }
    lVar7 = param_3[3];
    if (lVar7 == 0) {
      lVar7 = FUN_14476842e(param_1,&DAT_14ca63c00,L"ZeroUIntDummy",2);
    }
    plVar8 = (longlong *)FUN_1449609de(param_1,lVar5);
    puVar9 = DAT_14ca1c570;
    puVar6 = (undefined8 *)*plVar8;
    if (DAT_14ca1c570 != puVar6) {
      DAT_14ca1c570 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar9 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
    }
    plVar8 = (longlong *)FUN_14495f742(param_1,lVar7);
    plVar4 = DAT_14ca1c578;
    plVar8 = (longlong *)*plVar8;
    if (DAT_14ca1c578 != plVar8) {
      DAT_14ca1c578 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
    }
  }
  if ((DAT_14ca19734 != 0) && (DAT_14ca1c568 != 0)) {
    plVar8 = (longlong *)(param_1 + 0x70);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar9 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(plVar8,0x50);
      puVar9 = (undefined8 *)(*plVar8 + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar9 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    *puVar9 = &PTR_FUN_14a299948;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    local_78 = plVar8;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar9;
    *(undefined4 *)(puVar9 + 2) = DAT_14ca1c520;
    lVar5 = FUN_144735dd8(param_1,&DAT_14ca1c568,0);
    plVar8 = local_78;
    cVar2 = *(char *)(lVar5 + 0x68);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(local_78,0x48);
      puVar10 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 8;
    }
    lVar7 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(lVar5 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 2;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar10 + 5) = 0;
    *puVar10 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar10 + 6) = cVar2 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar10 + 0x31) = 0;
    puVar10[7] = lVar5;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar7,iVar3);
    }
    plVar8 = local_78;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar9[3] = puVar10;
    *(undefined4 *)((longlong)puVar9 + 0x14) = param_4;
    lVar5 = *param_3;
    cVar2 = *(char *)(lVar5 + 0x68);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(local_78,0x50);
      puVar10 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(lVar5 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 3;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *puVar10 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar10 + 5) = cVar2 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
    puVar10[7] = 0;
    puVar10[8] = lVar5;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar7,iVar3);
    }
    plVar8 = local_78;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar9[4] = puVar10;
    lVar5 = param_3[2];
    cVar2 = *(char *)(lVar5 + 0x68);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      local_70 = lVar7;
      FUN_140023dd8(local_78,0x50);
      puVar10 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
      lVar7 = local_70;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(lVar5 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 3;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *puVar10 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar10 + 5) = cVar2 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
    puVar10[7] = 0;
    puVar10[8] = lVar5;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar7,iVar3);
    }
    plVar8 = local_78;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar9[5] = puVar10;
    lVar5 = param_3[1];
    cVar2 = *(char *)(lVar5 + 0x68);
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar10 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      local_70 = lVar7;
      FUN_140023dd8(local_78,0x50);
      puVar10 = (undefined8 *)(*plVar8 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar10 + 9;
      lVar7 = local_70;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    puVar10[1] = *(undefined8 *)(lVar5 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 3;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *puVar10 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar10 + 5) = cVar2 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
    puVar10[7] = 0;
    puVar10[8] = lVar5;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar7,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar9[6] = puVar10;
    FUN_147250cca(*(undefined8 *)(param_2 + 0x13818),local_58);
    local_88 = &local_64;
    local_64 = &DAT_100000001;
    local_5c = 1;
    FUN_147250d37(param_1,&local_65,local_58,puVar9 + 2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e020aa FUN_142e020aa body=1246 status=ok
// SIG undefined FUN_142e020aa(void)

void FUN_142e020aa(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 *local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((DAT_14ca19734 != 0) && (DAT_14ca1c568 != 0)) {
    local_b0 = (longlong *)(param_1 + 0x70);
    local_98 = param_1 + 0x98;
    lVar6 = param_2 + 0x13870;
    local_a8 = param_1 + 0x198;
    iVar8 = 0;
    local_a0 = lVar6;
    do {
      plVar4 = local_b0;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar9 + 0xc;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_b0,0x70);
        puVar9 = (undefined8 *)(*plVar4 + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar9 + 0xc;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar9 = &PTR_FUN_14a299968;
      puVar9[4] = 0;
      *(undefined1 *)(puVar9 + 5) = 1;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      iVar2 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
        FUN_1448cfae8(local_98,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar9;
      FUN_1472ea582(param_1,lVar6,puVar9 + 4);
      *(undefined4 *)(puVar9 + 2) = 0x80;
      *(undefined4 *)((longlong)puVar9 + 0x14) = DAT_14ca1c520;
      *(undefined4 *)(puVar9 + 3) = DAT_14ca1c524;
      lVar5 = FUN_144735dd8(param_1,&DAT_14ca1c568,0);
      plVar4 = local_b0;
      cVar1 = *(char *)(lVar5 + 0x68);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_b0,0x50);
        puVar10 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      puVar10[1] = *(undefined8 *)(lVar5 + 8);
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 3;
      *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
      *puVar10 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar10 + 5) = cVar1 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
      puVar10[7] = 0;
      puVar10[8] = lVar5;
      iVar2 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(local_a8,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar10;
      *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar9[8] = puVar10;
      lVar5 = FUN_144735dd8(param_1,&DAT_14ca1c558,0);
      plVar4 = local_b0;
      cVar1 = *(char *)(lVar5 + 0x68);
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(local_b0,0x50);
        puVar10 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      puVar10[1] = *(undefined8 *)(lVar5 + 8);
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 3;
      *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
      *puVar10 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar10 + 5) = cVar1 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
      puVar10[7] = 0;
      puVar10[8] = lVar5;
      iVar2 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(local_a8,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar10;
      *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar9[9] = puVar10;
      lVar5 = DAT_14ca1c560;
      if (DAT_14ca1c560 != 0) {
        lVar6 = FUN_144735dd8(param_1,&DAT_14ca1c560,0);
        plVar4 = local_b0;
        cVar1 = *(char *)(lVar6 + 0x68);
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
          FUN_140023dd8(local_b0,0x50);
          puVar10 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
          puVar7 = puVar10 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar7;
        puVar10[1] = *(undefined8 *)(lVar6 + 8);
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 3;
        *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
        *puVar10 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar10 + 5) = cVar1 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
        puVar10[7] = 0;
        puVar10[8] = lVar6;
        iVar2 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
          FUN_1447568fc(local_a8,iVar2);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar10;
        *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar9[10] = puVar10;
        lVar6 = local_a0;
      }
      uVar3 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f30f90();
      FUN_1448e935e(uVar3,&local_70,&DAT_14ca13750,(iVar8 + 1) - (uint)(lVar5 == 0));
      FUN_145f30f90();
      local_80 = local_70;
      uStack_7c = uStack_6c;
      uStack_78 = uStack_68;
      uStack_74 = uStack_64;
      local_8c = &DAT_100000001;
      local_84 = 1;
      local_b8 = &local_8c;
      FUN_147250de9(param_1,&local_70,&local_80,puVar9 + 2);
      iVar8 = iVar8 + 2;
    } while (iVar8 != 10);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e02589 FUN_142e02589 body=640 status=ok
// SIG undefined FUN_142e02589(void)

void FUN_142e02589(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5,ulonglong param_6,longlong param_7,undefined4 param_8,
                  byte param_9)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined1 local_81;
  ulonglong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar6 + 0x26;
  local_90 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x140);
    puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar6 + 0x26;
  }
  *puVar1 = (ulonglong)puVar4;
  *puVar6 = &PTR_FUN_14a299988;
  puVar6[5] = 0;
  lVar5 = 0x42;
  do {
    *(undefined1 (*) [16])((longlong)puVar6 + lVar5 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar6 + lVar5 + -2) = 0xffff0000;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x102);
  *(undefined4 *)((longlong)puVar6 + 0x104) = 0;
  *(undefined1 (*) [16])(puVar6 + 0x1e) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar6 + 0x20) = 0;
  *(undefined4 *)(puVar6 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)puVar6 + 0x10c) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)puVar6 + 0x114) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x23) = 0;
  *(undefined2 *)((longlong)puVar6 + 0x11c) = 0;
  puVar6[0x24] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  puVar4 = local_90;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar6;
  puVar6[2] = (ulonglong)(uint)((int)*param_5 - (int)param_6) |
              *param_5 - (param_6 & 0xffffffff00000000) & 0xffffffff00000000;
  *(float *)(puVar6 + 3) = (float)*(double *)(param_7 + 0x50);
  *(undefined4 *)((longlong)puVar6 + 0x1c) = param_8;
  puVar6[5] = *(undefined8 *)(param_3 + 0x50);
  puVar6[0x1e] = param_4;
  puVar6[0x1f] = 0;
  *(undefined2 *)(puVar6 + 0x20) = 1;
  *(undefined4 *)((longlong)puVar6 + 0x104) = 2;
  uVar3 = *local_90;
  FUN_145f206d6();
  FUN_1448e935e(uVar3,&local_70,&DAT_14ca13188,2 - (uint)param_9);
  FUN_145f206d6();
  local_80 = local_70;
  uStack_78 = uStack_68;
  local_70 = param_6;
  uStack_68 = CONCAT44(((int)(param_6 >> 0x20) + *(int *)((longlong)param_5 + 0xc)) -
                       *(int *)((longlong)param_5 + 4),
                       ((int)param_5[1] + (int)param_6) - (int)*param_5);
  local_98 = DAT_14ca19748;
  local_a8 = puVar6 + 2;
  local_a0 = &local_70;
  FUN_147250e9c(param_1,*puVar4,&local_81);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e0280a FUN_142e0280a body=922 status=ok
// SIG undefined FUN_142e0280a(void)

void FUN_142e0280a(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,char param_7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *param_2;
  local_98 = param_3;
  local_90 = param_4;
  FUN_145d4852c();
  FUN_1448e935e(uVar3,&local_60,&DAT_14ca132b0,param_7);
  FUN_145d4852c();
  local_78 = local_60;
  local_70 = local_58;
  uVar3 = *param_2;
  FUN_146095744();
  puVar7 = (undefined8 *)0x0;
  FUN_1448e935e(uVar3,&local_60,&DAT_14ca13500,0);
  FUN_146095744();
  local_88 = local_60;
  local_80 = local_58;
  if (param_7 == '\0') {
    local_a0 = 0;
  }
  else {
    uVar3 = *param_2;
    FUN_1460954d6();
    FUN_1448e935e(uVar3,&local_60,&DAT_14ca133d8,0);
    FUN_1460954d6();
    local_a0 = local_58;
    puVar7 = local_60;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar8 + 0x24;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x130);
    puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar8 + 0x24;
  }
  *puVar1 = (ulonglong)puVar6;
  *puVar8 = &PTR_FUN_14a2999a8;
  puVar8[2] = 0;
  lVar5 = 0x32;
  do {
    *(undefined1 (*) [16])((longlong)puVar8 + lVar5 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar8 + lVar5 + -2) = 0xffff0000;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xf2);
  *(undefined4 *)((longlong)puVar8 + 0xf4) = 0;
  *(undefined1 (*) [16])(puVar8 + 0x1c) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar8 + 0x1e) = 0;
  *(undefined4 *)(puVar8 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0xfc) = 0xffffffff;
  *(undefined4 *)(puVar8 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)puVar8 + 0x104) = 0xffffffff;
  *(undefined4 *)(puVar8 + 0x21) = 0;
  *(undefined2 *)((longlong)puVar8 + 0x10c) = 0;
  puVar8[0x22] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar8;
  *(undefined4 *)(puVar8 + 3) = param_6;
  puVar8[2] = *(undefined8 *)(local_98 + 0x50);
  puVar8[0x1c] = local_90;
  puVar8[0x1d] = 0;
  *(undefined2 *)(puVar8 + 0x1e) = 1;
  *(undefined4 *)((longlong)puVar8 + 0xf4) = 2;
  uVar3 = *param_5;
  uVar4 = param_5[1];
  FUN_145d48650();
  FUN_140069376(param_1);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x210);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x41;
  }
  *puVar1 = (ulonglong)puVar6;
  local_58 = DAT_14ca17180;
  if (DAT_14ca17180 != 0) {
    LOCK();
    *(int *)(DAT_14ca17180 + 8) = *(int *)(DAT_14ca17180 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14ca17138;
  local_a8 = 2;
  local_60 = puVar8 + 2;
  FUN_140068f1a(puVar9,&local_61,&local_60,1);
  *puVar9 = &PTR_FUN_14a2999b0;
  puVar9[0x37] = puVar8 + 2;
  puVar9[0x38] = local_78;
  puVar9[0x39] = local_70;
  puVar9[0x3a] = puVar7;
  puVar9[0x3b] = local_a0;
  puVar9[0x3c] = local_88;
  puVar9[0x3d] = local_80;
  puVar9[0x3e] = uVar3;
  puVar9[0x3f] = uVar4;
  *(undefined4 *)(puVar9 + 0x40) = param_6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar9;
  *(int *)((longlong)puVar9 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_140069100(param_1,puVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e02ba5 FUN_142e02ba5 body=69 status=ok
// SIG undefined FUN_142e02ba5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e02ba5(void)

{
  _DAT_14ca13810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142e02be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca13818,1);
  return;
}


