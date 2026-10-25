// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c54a96 FUN_148c54a96 body=102 status=ok
// SIG undefined FUN_148c54a96(void)

undefined8 FUN_148c54a96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c54b24 FUN_148c54b24 body=59 status=ok
// SIG undefined FUN_148c54b24(void)

undefined8 FUN_148c54b24(longlong *param_1)

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



// FUNCTION 148c54b6a FUN_148c54b6a body=38 status=ok
// SIG undefined FUN_148c54b6a(void)

void FUN_148c54b6a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c54be0 FUN_148c54be0 body=37 status=ok
// SIG undefined FUN_148c54be0(void)

void FUN_148c54be0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_1456ded70(param_2);
  return;
}



// FUNCTION 148c54c2c FUN_148c54c2c body=63 status=ok
// SIG undefined FUN_148c54c2c(void)

undefined1 FUN_148c54c2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c54d56(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148c54c94 FUN_148c54c94 body=59 status=ok
// SIG undefined FUN_148c54c94(void)

undefined8 FUN_148c54c94(longlong *param_1)

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



// FUNCTION 148c54ce0 FUN_148c54ce0 body=40 status=ok
// SIG undefined FUN_148c54ce0(void)

void FUN_148c54ce0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_145887e9c(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148c54d56 FUN_148c54d56 body=497 status=ok
// SIG undefined FUN_148c54d56(void)

undefined4 * FUN_148c54d56(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x12] = param_2[0x12];
  plVar1 = *(longlong **)(param_2 + 0x14);
  plVar2 = *(longlong **)(param_1 + 0x14);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x14) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x16] = param_2[0x16];
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x1a] = param_2[0x1a];
  plVar1 = *(longlong **)(param_2 + 0x1c);
  plVar2 = *(longlong **)(param_1 + 0x1c);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x1c) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x1e] = param_2[0x1e];
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x22] = param_2[0x22];
  plVar1 = *(longlong **)(param_2 + 0x24);
  plVar2 = *(longlong **)(param_1 + 0x24);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x24) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0x26] = param_2[0x26];
  FUN_148c54f48(param_1 + 0x28,param_2 + 0x28);
  FUN_1489fde4e(param_1 + 0x2c,param_2 + 0x2c);
  return param_1;
}



// FUNCTION 148c54f48 FUN_148c54f48 body=95 status=ok
// SIG undefined FUN_148c54f48(void)

undefined8 * FUN_148c54f48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145887f85(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c54fa8(param_1,iVar1);
      FUN_148c5500a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c54fa8 FUN_148c54fa8 body=98 status=ok
// SIG undefined FUN_148c54fa8(void)

void FUN_148c54fa8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c5500a FUN_148c5500a body=73 status=ok
// SIG undefined FUN_148c5500a(void)

void FUN_148c5500a(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c550ba FUN_148c550ba body=48 status=ok
// SIG undefined FUN_148c550ba(void)

void FUN_148c550ba(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c55100 FUN_148c55100 body=54 status=ok
// SIG undefined FUN_148c55100(void)

undefined1 FUN_148c55100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c551fa(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c5515e FUN_148c5515e body=59 status=ok
// SIG undefined FUN_148c5515e(void)

undefined8 FUN_148c5515e(longlong *param_1)

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



// FUNCTION 148c551fa FUN_148c551fa body=176 status=ok
// SIG undefined FUN_148c551fa(void)

undefined8 * FUN_148c551fa(undefined8 *param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 1) != *(int *)(param_2 + 1)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
    *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  if (*(int *)(param_1 + 3) != *(int *)(param_2 + 3)) {
    *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  }
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)(param_1 + 7) != *(int *)(param_2 + 7)) {
    FUN_144a787a6(param_1 + 5,param_2 + 5);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (*(int *)(param_1 + 10) != *(int *)(param_2 + 10)) {
    FUN_144a787a6(param_1 + 8,param_2 + 8);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  }
  if (*(int *)((longlong)param_1 + 0x5c) != *(int *)((longlong)param_2 + 0x5c)) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  }
  return param_1;
}



// FUNCTION 148c552ac FUN_148c552ac body=52 status=ok
// SIG undefined FUN_148c552ac(void)

void FUN_148c552ac(longlong param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c552e0 FUN_148c552e0 body=37 status=ok
// SIG undefined FUN_148c552e0(void)

void FUN_148c552e0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  FUN_14588969c(param_2);
  return;
}



// FUNCTION 148c5532c FUN_148c5532c body=63 status=ok
// SIG undefined FUN_148c5532c(void)

undefined1 FUN_148c5532c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c55456(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148c55394 FUN_148c55394 body=59 status=ok
// SIG undefined FUN_148c55394(void)

undefined8 FUN_148c55394(longlong *param_1)

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



// FUNCTION 148c553e0 FUN_148c553e0 body=40 status=ok
// SIG undefined FUN_148c553e0(void)

void FUN_148c553e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_145887e2e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148c55456 FUN_148c55456 body=284 status=ok
// SIG undefined FUN_148c55456(void)

undefined8 * FUN_148c55456(undefined8 *param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 1) != *(int *)(param_2 + 1)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  FUN_140ae1244(param_1 + 2,param_2 + 2);
  if (*(int *)((longlong)param_1 + 0x2c) != *(int *)((longlong)param_2 + 0x2c)) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  if (*(int *)((longlong)param_1 + 0x34) != *(int *)((longlong)param_2 + 0x34)) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  }
  if (*(int *)((longlong)param_1 + 0x3c) != *(int *)((longlong)param_2 + 0x3c)) {
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  }
  if (*(int *)((longlong)param_1 + 0x44) != *(int *)((longlong)param_2 + 0x44)) {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  }
  if (*(int *)(param_1 + 0xb) != *(int *)(param_2 + 0xb)) {
    FUN_144a787a6(param_1 + 9,param_2 + 9);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  }
  if (*(int *)(param_1 + 0xe) != *(int *)(param_2 + 0xe)) {
    FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  }
  if ((*(int *)(param_1 + 0x11) == 0) || (*(int *)(param_1 + 0x11) != *(int *)(param_2 + 0x11))) {
    *(int *)(param_1 + 0x11) = *(int *)(param_2 + 0x11);
    FUN_148c55572(param_1 + 0xf,param_2 + 0xf);
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14) || *(int *)(param_1 + 0x14) == 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
    FUN_14054c6c4(param_1 + 0x12,param_2 + 0x12);
  }
  return param_1;
}



// FUNCTION 148c55572 FUN_148c55572 body=93 status=ok
// SIG undefined FUN_148c55572(void)

undefined8 * FUN_148c55572(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14129c8ee(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c555d0(param_1,iVar1);
      FUN_148c55643(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c555d0 FUN_148c555d0 body=115 status=ok
// SIG undefined FUN_148c555d0(void)

void FUN_148c555d0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c55643 FUN_148c55643 body=52 status=ok
// SIG undefined FUN_148c55643(void)

void FUN_148c55643(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1457ddd8e(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 148c556ac FUN_148c556ac body=63 status=ok
// SIG undefined FUN_148c556ac(void)

undefined1 FUN_148c556ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c557d6(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148c55714 FUN_148c55714 body=59 status=ok
// SIG undefined FUN_148c55714(void)

undefined8 FUN_148c55714(longlong *param_1)

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



// FUNCTION 148c55760 FUN_148c55760 body=40 status=ok
// SIG undefined FUN_148c55760(void)

void FUN_148c55760(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_145887d82(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148c557d6 FUN_148c557d6 body=493 status=ok
// SIG undefined FUN_148c557d6(void)

longlong FUN_148c557d6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1489fb7d2();
  FUN_145e28436(param_1 + 0xb0,param_2 + 0xb0);
  uVar1 = *(undefined4 *)(param_2 + 0xd4);
  uVar2 = *(undefined4 *)(param_2 + 0xd8);
  uVar3 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf0) || *(int *)(param_1 + 0xf0) == 0) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_2 + 0xf0);
    FUN_14054c6c4(param_1 + 0xe0,param_2 + 0xe0);
  }
  FUN_148c54d56(param_1 + 0xf8,param_2 + 0xf8);
  if (*(int *)(param_1 + 0x1bc) != *(int *)(param_2 + 0x1bc)) {
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  }
  if ((*(int *)(param_1 + 0x1d0) == 0) || (*(int *)(param_1 + 0x1d0) != *(int *)(param_2 + 0x1d0)))
  {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_2 + 0x1d0);
    FUN_148c559c4(param_1 + 0x1c0,param_2 + 0x1c0);
  }
  if ((*(int *)(param_1 + 0x1e8) == 0) || (*(int *)(param_1 + 0x1e8) != *(int *)(param_2 + 0x1e8)))
  {
    *(int *)(param_1 + 0x1e8) = *(int *)(param_2 + 0x1e8);
    FUN_148c55572(param_1 + 0x1d8,param_2 + 0x1d8);
  }
  if (*(int *)(param_1 + 500) != *(int *)(param_2 + 500)) {
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  }
  if (*(int *)(param_1 + 0x1fc) != *(int *)(param_2 + 0x1fc)) {
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  }
  if (*(int *)(param_1 + 0x204) != *(int *)(param_2 + 0x204)) {
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  }
  if (*(int *)(param_1 + 0x20c) != *(int *)(param_2 + 0x20c)) {
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  }
  if (*(int *)(param_1 + 0x214) != *(int *)(param_2 + 0x214)) {
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  }
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  return param_1;
}



// FUNCTION 148c559c4 FUN_148c559c4 body=95 status=ok
// SIG undefined FUN_148c559c4(void)

undefined8 * FUN_148c559c4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145887e04(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c55a24(param_1,iVar1);
      FUN_148c55a96(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c55a24 FUN_148c55a24 body=114 status=ok
// SIG undefined FUN_148c55a24(void)

void FUN_148c55a24(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c55a96 FUN_148c55a96 body=60 status=ok
// SIG undefined FUN_148c55a96(void)

void FUN_148c55a96(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c55ad2(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return;
}



// FUNCTION 148c55ad2 FUN_148c55ad2 body=305 status=ok
// SIG undefined FUN_148c55ad2(void)

undefined8 * FUN_148c55ad2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_140dd90de(param_1 + 2,param_2 + 2);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144a787a6(param_1 + 9,param_2 + 9);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  FUN_148c55c04(param_1 + 0xf,param_2 + 0xf);
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  _Src = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 148c55c04 FUN_148c55c04 body=90 status=ok
// SIG undefined FUN_148c55c04(void)

undefined8 * FUN_148c55c04(undefined8 *param_1,undefined8 *param_2)

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
    FUN_148c555d0(param_1,iVar1,0);
    FUN_148c55643(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 148c55c60 FUN_148c55c60 body=57 status=ok
// SIG undefined FUN_148c55c60(void)

void FUN_148c55c60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb0e30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb0e30 = FUN_140002ddd(FUN_1465f3245,uVar1,L"OakUIBlackboard_Specializations");
  }
  return;
}



// FUNCTION 148c55ce2 FUN_148c55ce2 body=54 status=ok
// SIG undefined FUN_148c55ce2(void)

undefined1 FUN_148c55ce2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c55df6(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c55d40 FUN_148c55d40 body=59 status=ok
// SIG undefined FUN_148c55d40(void)

undefined8 FUN_148c55d40(longlong *param_1)

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



// FUNCTION 148c55d86 FUN_148c55d86 body=34 status=ok
// SIG undefined FUN_148c55d86(void)

void FUN_148c55d86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145a5bbf4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c55df6 FUN_148c55df6 body=104 status=ok
// SIG undefined FUN_148c55df6(void)

longlong FUN_148c55df6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 148c55e8e FUN_148c55e8e body=54 status=ok
// SIG undefined FUN_148c55e8e(void)

undefined1 FUN_148c55e8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c55fa2(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c55eec FUN_148c55eec body=59 status=ok
// SIG undefined FUN_148c55eec(void)

undefined8 FUN_148c55eec(longlong *param_1)

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



// FUNCTION 148c55f32 FUN_148c55f32 body=34 status=ok
// SIG undefined FUN_148c55f32(void)

void FUN_148c55f32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145a5bcda(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c55fa2 FUN_148c55fa2 body=72 status=ok
// SIG undefined FUN_148c55fa2(void)

longlong FUN_148c55fa2(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 148c56020 FUN_148c56020 body=63 status=ok
// SIG undefined FUN_148c56020(void)

undefined1 FUN_148c56020(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c5614a(param_2,param_3);
    param_3 = param_3 + 0xa20;
    param_2 = param_2 + 0xa20;
  }
  return 1;
}



// FUNCTION 148c56088 FUN_148c56088 body=59 status=ok
// SIG undefined FUN_148c56088(void)

undefined8 FUN_148c56088(longlong *param_1)

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



// FUNCTION 148c560d4 FUN_148c560d4 body=40 status=ok
// SIG undefined FUN_148c560d4(void)

void FUN_148c560d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa20) == '\x01') {
    FUN_145a5bb0c(param_2);
    *(undefined1 *)(param_2 + 0xa20) = 0;
  }
  return;
}



// FUNCTION 148c5614a FUN_148c5614a body=832 status=ok
// SIG undefined FUN_148c5614a(void)

longlong FUN_148c5614a(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0x318) != *(int *)(param_2 + 0x318)) {
    FUN_14135191a(param_1 + 0xb0,param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  }
  if (*(int *)(param_1 + 0x588) != *(int *)(param_2 + 0x588)) {
    FUN_14135191a(param_1 + 800,param_2 + 800);
    *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  }
  if (*(int *)(param_1 + 0x7f8) != *(int *)(param_2 + 0x7f8)) {
    FUN_14135191a(param_1 + 0x590,param_2 + 0x590);
    *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_2 + 0x7f8);
  }
  if (*(int *)(param_1 + 0x868) != *(int *)(param_2 + 0x868)) {
    FUN_148c5648a(param_1 + 0x800,param_2 + 0x800);
    *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_2 + 0x868);
  }
  if (*(int *)(param_1 + 0x8b8) != *(int *)(param_2 + 0x8b8)) {
    FUN_148c55df6(param_1 + 0x870,param_2 + 0x870);
    *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_2 + 0x8b8);
  }
  if (*(int *)(param_1 + 0x908) != *(int *)(param_2 + 0x908)) {
    FUN_148c55df6(param_1 + 0x8c0,param_2 + 0x8c0);
    *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_2 + 0x908);
  }
  if (*(int *)(param_1 + 0x958) != *(int *)(param_2 + 0x958)) {
    FUN_148c55fa2(param_1 + 0x910,param_2 + 0x910);
    *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_2 + 0x958);
  }
  if ((*(int *)(param_1 + 0x970) == 0) || (*(int *)(param_1 + 0x970) != *(int *)(param_2 + 0x970)))
  {
    *(int *)(param_1 + 0x970) = *(int *)(param_2 + 0x970);
    FUN_148c56694(param_1 + 0x960,param_2 + 0x960);
  }
  FUN_140ae1244(param_1 + 0x978,param_2 + 0x978);
  FUN_140ae1244(param_1 + 0x990,param_2 + 0x990);
  FUN_140ae1244(param_1 + 0x9a8,param_2 + 0x9a8);
  if (*(int *)(param_1 + 0x9c4) != *(int *)(param_2 + 0x9c4)) {
    *(undefined1 *)(param_1 + 0x9c0) = *(undefined1 *)(param_2 + 0x9c0);
    *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(param_2 + 0x9c4);
  }
  if (*(int *)(param_1 + 0x9cc) != *(int *)(param_2 + 0x9cc)) {
    *(undefined1 *)(param_1 + 0x9c8) = *(undefined1 *)(param_2 + 0x9c8);
    *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_2 + 0x9cc);
  }
  if (*(int *)(param_1 + 0x9d4) != *(int *)(param_2 + 0x9d4)) {
    *(undefined1 *)(param_1 + 0x9d0) = *(undefined1 *)(param_2 + 0x9d0);
    *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_2 + 0x9d4);
  }
  if (*(int *)(param_1 + 0x9dc) != *(int *)(param_2 + 0x9dc)) {
    *(undefined1 *)(param_1 + 0x9d8) = *(undefined1 *)(param_2 + 0x9d8);
    *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(param_2 + 0x9dc);
  }
  if (*(int *)(param_1 + 0x9e4) != *(int *)(param_2 + 0x9e4)) {
    *(undefined1 *)(param_1 + 0x9e0) = *(undefined1 *)(param_2 + 0x9e0);
    *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(param_2 + 0x9e4);
  }
  if (*(int *)(param_1 + 0x9ec) != *(int *)(param_2 + 0x9ec)) {
    *(undefined1 *)(param_1 + 0x9e8) = *(undefined1 *)(param_2 + 0x9e8);
    *(undefined4 *)(param_1 + 0x9ec) = *(undefined4 *)(param_2 + 0x9ec);
  }
  if (*(int *)(param_1 + 0x9f4) != *(int *)(param_2 + 0x9f4)) {
    *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_2 + 0x9f0);
    *(undefined4 *)(param_1 + 0x9f4) = *(undefined4 *)(param_2 + 0x9f4);
  }
  if (*(int *)(param_1 + 0x9fc) != *(int *)(param_2 + 0x9fc)) {
    *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(param_2 + 0x9f8);
    *(undefined4 *)(param_1 + 0x9fc) = *(undefined4 *)(param_2 + 0x9fc);
  }
  if (*(int *)(param_1 + 0xa10) != *(int *)(param_2 + 0xa10)) {
    FUN_144a787a6(param_1 + 0xa00,param_2 + 0xa00);
    *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(param_2 + 0xa10);
  }
  *(undefined2 *)(param_1 + 0xa18) = *(undefined2 *)(param_2 + 0xa18);
  return param_1;
}



// FUNCTION 148c5648a FUN_148c5648a body=171 status=ok
// SIG undefined FUN_148c5648a(void)

longlong FUN_148c5648a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  FUN_148c56536(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x40) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 148c56536 FUN_148c56536 body=93 status=ok
// SIG undefined FUN_148c56536(void)

undefined8 * FUN_148c56536(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1413543a1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c56594(param_1,iVar1);
      FUN_148c5660a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c56594 FUN_148c56594 body=118 status=ok
// SIG undefined FUN_148c56594(void)

void FUN_148c56594(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c5660a FUN_148c5660a body=60 status=ok
// SIG undefined FUN_148c5660a(void)

void FUN_148c5660a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c56646(param_1,param_2);
    param_1 = param_1 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return;
}



// FUNCTION 148c56646 FUN_148c56646 body=77 status=ok
// SIG undefined FUN_148c56646(void)

longlong * FUN_148c56646(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe | *(byte *)(param_2 + 2) & 1;
  FUN_140bb15ba(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 148c56694 FUN_148c56694 body=93 status=ok
// SIG undefined FUN_148c56694(void)

undefined8 * FUN_148c56694(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a5bc9c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c566f2(param_1,iVar1);
      FUN_148c56754(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c566f2 FUN_148c566f2 body=98 status=ok
// SIG undefined FUN_148c566f2(void)

void FUN_148c566f2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c56754 FUN_148c56754 body=52 status=ok
// SIG undefined FUN_148c56754(void)

void FUN_148c56754(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c56788(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c56788 FUN_148c56788 body=156 status=ok
// SIG undefined FUN_148c56788(void)

undefined8 * FUN_148c56788(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c56826 FUN_148c56826 body=38 status=ok
// SIG undefined FUN_148c56826(void)

undefined8 FUN_148c56826(undefined8 param_1,int param_2)

{
  FUN_145a5bb0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5684c FUN_148c5684c body=55 status=ok
// SIG undefined FUN_148c5684c(void)

void FUN_148c5684c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb1968 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb1968 = FUN_140002ddd(FUN_1465f3439,uVar1,L"OakUIBlackboard_TransferMenu");
  }
  return;
}



// FUNCTION 148c568d0 FUN_148c568d0 body=54 status=ok
// SIG undefined FUN_148c568d0(void)

undefined1 FUN_148c568d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c56a72(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148c5692e FUN_148c5692e body=59 status=ok
// SIG undefined FUN_148c5692e(void)

undefined8 FUN_148c5692e(longlong *param_1)

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



// FUNCTION 148c56974 FUN_148c56974 body=34 status=ok
// SIG undefined FUN_148c56974(void)

void FUN_148c56974(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148c56a22(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c569e4 FUN_148c569e4 body=62 status=ok
// SIG undefined FUN_148c569e4(void)

longlong FUN_148c569e4(longlong param_1)

{
  FUN_144a5dc74();
  FUN_144a5dc74(param_1 + 0x10);
  FUN_144a5dc74(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_144a5dc74(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 148c56a22 FUN_148c56a22 body=80 status=ok
// SIG undefined FUN_148c56a22(void)

void FUN_148c56a22(longlong *param_1)

{
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c56a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c56a72 FUN_148c56a72 body=231 status=ok
// SIG undefined FUN_148c56a72(void)

longlong * FUN_148c56a72(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(int *)(param_1 + 6) = (int)param_2[6];
  plVar1 = (longlong *)param_2[7];
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != plVar1) {
    param_1[7] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 8) = (int)param_2[8];
  lVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar3;
  return param_1;
}



// FUNCTION 148c56b5a FUN_148c56b5a body=174 status=ok
// SIG undefined FUN_148c56b5a(void)

void FUN_148c56b5a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x208);
  *(undefined4 *)((longlong)param_2 + 0x48) = 3;
  FUN_140c5455a((longlong)param_2 + 0x58);
  *(undefined8 *)((longlong)param_2 + 400) = 0;
  *(undefined8 *)((longlong)param_2 + 0x198) = 0x8000000000;
  *(undefined8 *)((longlong)param_2 + 0x1a0) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_2 + 0x140) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  *(undefined8 *)((longlong)param_2 + 0x158) = 0;
  *(undefined8 *)((longlong)param_2 + 0x160) = 0;
  *(undefined8 *)((longlong)param_2 + 0x168) = 0;
  *(undefined8 *)((longlong)param_2 + 0x170) = 0;
  *(undefined8 *)((longlong)param_2 + 0x178) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1e8) = 0xf;
  *(undefined2 *)((longlong)param_2 + 0x1f0) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  return;
}



// FUNCTION 148c56c08 FUN_148c56c08 body=192 status=ok
// SIG undefined FUN_148c56c08(void)

void FUN_148c56c08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 3;
  *(undefined1 *)(param_2 + 10) = 0;
  FUN_140c5455a(param_2 + 0xb);
  param_2[0x32] = 0;
  param_2[0x33] = 0x8000000000;
  param_2[0x34] = 0xffffffff;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0xf;
  *(undefined2 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  return;
}



// FUNCTION 148c56ce6 FUN_148c56ce6 body=63 status=ok
// SIG undefined FUN_148c56ce6(void)

undefined1 FUN_148c56ce6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c56e46(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 148c56d4e FUN_148c56d4e body=59 status=ok
// SIG undefined FUN_148c56d4e(void)

undefined8 FUN_148c56d4e(longlong *param_1)

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



// FUNCTION 148c56d9a FUN_148c56d9a body=38 status=ok
// SIG undefined FUN_148c56d9a(void)

void FUN_148c56d9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_148c56e0e(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 148c56e0e FUN_148c56e0e body=55 status=ok
// SIG undefined FUN_148c56e0e(void)

void FUN_148c56e0e(longlong param_1)

{
  FUN_140368b56(param_1 + 0x130);
  FUN_1407dde54(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c56e46 FUN_148c56e46 body=112 status=ok
// SIG undefined FUN_148c56e46(void)

undefined4 * FUN_148c56e46(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  FUN_1409e3140(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  FUN_1413511f6(param_1 + 0x16,param_2 + 0x16);
  FUN_1407b25f0(param_1 + 0x4c,param_2 + 0x4c);
  return param_1;
}



// FUNCTION 148c56eb8 FUN_148c56eb8 body=37 status=ok
// SIG undefined FUN_148c56eb8(void)

void FUN_148c56eb8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  FUN_14163c10c(param_2);
  return;
}



// FUNCTION 148c56f04 FUN_148c56f04 body=63 status=ok
// SIG undefined FUN_148c56f04(void)

undefined1 FUN_148c56f04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14596e30e(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 148c56f6c FUN_148c56f6c body=59 status=ok
// SIG undefined FUN_148c56f6c(void)

undefined8 FUN_148c56f6c(longlong *param_1)

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



// FUNCTION 148c56fb8 FUN_148c56fb8 body=38 status=ok
// SIG undefined FUN_148c56fb8(void)

void FUN_148c56fb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_141045c30(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148c5702e FUN_148c5702e body=103 status=ok
// SIG undefined FUN_148c5702e(void)

void FUN_148c5702e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x128);
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0x80;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x108) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x110) = 1;
  *(undefined8 *)((longlong)param_2 + 0x114) = 0;
  *(undefined8 *)((longlong)param_2 + 0x11c) = 0;
  return;
}



// FUNCTION 148c5714a FUN_148c5714a body=63 status=ok
// SIG undefined FUN_148c5714a(void)

undefined1 FUN_148c5714a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457e3a18(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 148c571b2 FUN_148c571b2 body=59 status=ok
// SIG undefined FUN_148c571b2(void)

undefined8 FUN_148c571b2(longlong *param_1)

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



// FUNCTION 148c571fe FUN_148c571fe body=40 status=ok
// SIG undefined FUN_148c571fe(void)

void FUN_148c571fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_14596ebe4(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 148c57276 FUN_148c57276 body=264 status=ok
// SIG undefined FUN_148c57276(void)

void FUN_148c57276(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  memset(param_2,0,0x120);
  *param_2 = 1;
  FUN_1400b22c2(&local_38,&DAT_149e62dd2);
  *(undefined8 *)(param_2 + 8) = local_38;
  *(undefined4 *)(param_2 + 0x10) = local_30;
  *(undefined4 *)(param_2 + 0x14) = local_2c;
  *(undefined4 *)(param_2 + 0x18) = 0;
  FUN_1400b22c2(&local_38);
  *(undefined8 *)(param_2 + 0x20) = local_38;
  *(undefined4 *)(param_2 + 0x28) = local_30;
  *(undefined4 *)(param_2 + 0x2c) = local_2c;
  *(undefined4 *)(param_2 + 0x30) = 0;
  memset(param_2 + 0x38,0,0xd8);
  *(undefined4 *)(param_2 + 0xa4) = 0x80;
  *(undefined4 *)(param_2 + 0xa8) = 0xffffffff;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0xf;
  param_2[0xf8] = 1;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined4 *)(param_2 + 0x118) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c57380 FUN_148c57380 body=251 status=ok
// SIG undefined FUN_148c57380(void)

void FUN_148c57380(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e62dd2);
  *(undefined8 *)(param_2 + 8) = local_38;
  *(undefined4 *)(param_2 + 0x10) = local_30;
  *(undefined4 *)(param_2 + 0x14) = local_2c;
  *(undefined4 *)(param_2 + 0x18) = 0;
  FUN_1400b22c2(&local_38);
  *(undefined8 *)(param_2 + 0x20) = local_38;
  *(undefined4 *)(param_2 + 0x28) = local_30;
  *(undefined4 *)(param_2 + 0x2c) = local_2c;
  *(undefined4 *)(param_2 + 0x30) = 0;
  memset(param_2 + 0x38,0,0xd8);
  *(undefined4 *)(param_2 + 0xa4) = 0x80;
  *(undefined4 *)(param_2 + 0xa8) = 0xffffffff;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0xf;
  param_2[0xf8] = 1;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined4 *)(param_2 + 0x118) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5749a FUN_148c5749a body=63 status=ok
// SIG undefined FUN_148c5749a(void)

undefined1 FUN_148c5749a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c575c4(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148c57502 FUN_148c57502 body=59 status=ok
// SIG undefined FUN_148c57502(void)

undefined8 FUN_148c57502(longlong *param_1)

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



// FUNCTION 148c5754e FUN_148c5754e body=40 status=ok
// SIG undefined FUN_148c5754e(void)

void FUN_148c5754e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_145846e1a(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148c575c4 FUN_148c575c4 body=133 status=ok
// SIG undefined FUN_148c575c4(void)

undefined1 * FUN_148c575c4(undefined1 *param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
    FUN_144a787a6(param_1 + 8,param_2 + 8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) {
    FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  FUN_1407b25f0(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 148c576c6 FUN_148c576c6 body=78 status=ok
// SIG undefined FUN_148c576c6(void)

undefined1 FUN_148c576c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1401b31d8(param_2 + 8,param_3 + 8);
      FUN_148c5786e(param_2 + 0x20,param_3 + 0x20);
    }
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148c5773c FUN_148c5773c body=59 status=ok
// SIG undefined FUN_148c5773c(void)

undefined8 FUN_148c5773c(longlong *param_1)

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



// FUNCTION 148c57782 FUN_148c57782 body=34 status=ok
// SIG undefined FUN_148c57782(void)

void FUN_148c57782(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148c5781c(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c577f2 FUN_148c577f2 body=38 status=ok
// SIG undefined FUN_148c577f2(void)

undefined8 FUN_148c577f2(undefined8 param_1,int param_2)

{
  FUN_148c5781c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5781c FUN_148c5781c body=82 status=ok
// SIG undefined FUN_148c5781c(void)

void FUN_148c5781c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b826b20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c5786e FUN_148c5786e body=304 status=ok
// SIG undefined FUN_148c5786e(void)

void FUN_148c5786e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c579be FUN_148c579be body=54 status=ok
// SIG undefined FUN_148c579be(void)

undefined1 FUN_148c579be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c57b90(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c57a1c FUN_148c57a1c body=59 status=ok
// SIG undefined FUN_148c57a1c(void)

undefined8 FUN_148c57a1c(longlong *param_1)

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



// FUNCTION 148c57a62 FUN_148c57a62 body=32 status=ok
// SIG undefined FUN_148c57a62(void)

void FUN_148c57a62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148c57b34(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c57ac4 FUN_148c57ac4 body=112 status=ok
// SIG undefined FUN_148c57ac4(void)

longlong * FUN_148c57ac4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  FUN_140056680(param_1 + 2,&DAT_149dfb77a);
  FUN_140056680(param_1 + 4,&DAT_149dfb77a);
  FUN_140056680(param_1 + 6,&DAT_149dfb77a);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 148c57b34 FUN_148c57b34 body=92 status=ok
// SIG undefined FUN_148c57b34(void)

void FUN_148c57b34(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c57b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c57b90 FUN_148c57b90 body=139 status=ok
// SIG undefined FUN_148c57b90(void)

longlong * FUN_148c57b90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_148b9e3fa(param_1 + 8,param_2 + 8);
  FUN_148c4ecf0(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 148c57c1c FUN_148c57c1c body=50 status=ok
// SIG undefined FUN_148c57c1c(void)

void FUN_148c57c1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b827570;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 148c57c64 FUN_148c57c64 body=75 status=ok
// SIG undefined FUN_148c57c64(void)

undefined1 FUN_148c57c64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_148c57dc0(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c57cd8 FUN_148c57cd8 body=59 status=ok
// SIG undefined FUN_148c57cd8(void)

undefined8 FUN_148c57cd8(longlong *param_1)

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



// FUNCTION 148c57d1e FUN_148c57d1e body=34 status=ok
// SIG undefined FUN_148c57d1e(void)

void FUN_148c57d1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1458d3684(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c57d86 FUN_148c57d86 body=57 status=ok
// SIG undefined FUN_148c57d86(void)

void FUN_148c57d86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb1b28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb1b28 = FUN_140002ddd(FUN_1465f3a21,uVar1,L"OakUIChallengeListDef");
  }
  return;
}



// FUNCTION 148c57dc0 FUN_148c57dc0 body=93 status=ok
// SIG undefined FUN_148c57dc0(void)

undefined8 * FUN_148c57dc0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141302908(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c57e1e(param_1,iVar1);
      FUN_148c57e8d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c57e1e FUN_148c57e1e body=111 status=ok
// SIG undefined FUN_148c57e1e(void)

void FUN_148c57e1e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c57e8d FUN_148c57e8d body=52 status=ok
// SIG undefined FUN_148c57e8d(void)

void FUN_148c57e8d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141240d4a(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148c57ec2 FUN_148c57ec2 body=28 status=ok
// SIG undefined FUN_148c57ec2(void)

undefined8 FUN_148c57ec2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c57ef0 FUN_148c57ef0 body=93 status=ok
// SIG undefined FUN_148c57ef0(void)

void FUN_148c57ef0(undefined8 param_1,undefined8 *param_2)

{
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b826f80;
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  FUN_140056680(param_2 + 5,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c57f4e FUN_148c57f4e body=78 status=ok
// SIG undefined FUN_148c57f4e(void)

void FUN_148c57f4e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b826f80;
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  FUN_140056680(param_2 + 5,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c57fc0 FUN_148c57fc0 body=88 status=ok
// SIG undefined FUN_148c57fc0(void)

undefined1 FUN_148c57fc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c58040 FUN_148c58040 body=59 status=ok
// SIG undefined FUN_148c58040(void)

undefined8 FUN_148c58040(longlong *param_1)

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



// FUNCTION 148c58086 FUN_148c58086 body=34 status=ok
// SIG undefined FUN_148c58086(void)

void FUN_148c58086(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148c58158(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c580fa FUN_148c580fa body=38 status=ok
// SIG undefined FUN_148c580fa(void)

undefined8 FUN_148c580fa(undefined8 param_1,int param_2)

{
  FUN_148c58158();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c58120 FUN_148c58120 body=55 status=ok
// SIG undefined FUN_148c58120(void)

void FUN_148c58120(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb1b40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb1b40 = FUN_140002ddd(FUN_1465f3ab7,uVar1,L"GbxUIDisplayDataDef_SimpleReward");
  }
  return;
}



// FUNCTION 148c58158 FUN_148c58158 body=73 status=ok
// SIG undefined FUN_148c58158(void)

void FUN_148c58158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b826f80;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c581a2 FUN_148c581a2 body=175 status=ok
// SIG undefined FUN_148c581a2(void)

void FUN_148c581a2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_28 = 0;
  uStack_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_1c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f6a136(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58268 FUN_148c58268 body=151 status=ok
// SIG undefined FUN_148c58268(void)

void FUN_148c58268(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_1410aade0(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58300 FUN_148c58300 body=350 status=ok
// SIG undefined FUN_148c58300(void)

void FUN_148c58300(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145e39b3e(param_1,puVar2,local_4c,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58460 FUN_148c58460 body=262 status=ok
// SIG undefined FUN_148c58460(void)

void FUN_148c58460(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14605866a(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58568 FUN_148c58568 body=263 status=ok
// SIG undefined FUN_148c58568(void)

void FUN_148c58568(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140280c1c(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58676 FUN_148c58676 body=232 status=ok
// SIG undefined FUN_148c58676(void)

void FUN_148c58676(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148e28382(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5877c FUN_148c5877c body=264 status=ok
// SIG undefined FUN_148c5877c(void)

void FUN_148c5877c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e2a170(param_1,local_28,local_2c != 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5891c FUN_148c5891c body=324 status=ok
// SIG undefined FUN_148c5891c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148c5891c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_d8 [44];
  int local_ac [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [24];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_ac[1] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_144a6ccf8(local_60);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ac + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ac + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_ac[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ac);
  }
  if (piVar1 == (int *)0x0) {
    piVar1 = local_ac + 1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145df997e(param_1,piVar1,local_ac[0] != 0);
  FUN_14583d64e(local_ac + 1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58a68 FUN_148c58a68 body=324 status=ok
// SIG undefined FUN_148c58a68(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148c58a68(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_d8 [44];
  int local_ac [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [24];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_ac[1] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_144a6ccf8(local_60);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ac + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ac + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_ac[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_ac);
  }
  if (piVar1 == (int *)0x0) {
    piVar1 = local_ac + 1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1415614d6(param_1,piVar1,local_ac[0] != 0);
  FUN_14583d64e(local_ac + 1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58be2 FUN_148c58be2 body=263 status=ok
// SIG undefined FUN_148c58be2(void)

void FUN_148c58be2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407fac48(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58cea FUN_148c58cea body=175 status=ok
// SIG undefined FUN_148c58cea(void)

void FUN_148c58cea(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_28 = 0;
  uStack_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_1c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141312432(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58de2 FUN_148c58de2 body=371 status=ok
// SIG undefined FUN_148c58de2(void)

void FUN_148c58de2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  local_78 = 0;
  local_70 = 0x100;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  puVar2 = &local_f8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a0cca8(param_1,local_30,puVar2);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c58f7e FUN_148c58f7e body=329 status=ok
// SIG undefined FUN_148c58f7e(void)

void FUN_148c58f7e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461e11b6(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c590e8 FUN_148c590e8 body=169 status=ok
// SIG undefined FUN_148c590e8(void)

void FUN_148c590e8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461c7490(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c591e4 FUN_148c591e4 body=241 status=ok
// SIG undefined FUN_148c591e4(void)

void FUN_148c591e4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_148e45bf4(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c592dc FUN_148c592dc body=241 status=ok
// SIG undefined FUN_148c592dc(void)

void FUN_148c592dc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_148e45ce0(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c593e4 FUN_148c593e4 body=151 status=ok
// SIG undefined FUN_148c593e4(void)

void FUN_148c593e4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14624b9f0(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5947c FUN_148c5947c body=156 status=ok
// SIG undefined FUN_148c5947c(void)

void FUN_148c5947c(undefined8 param_1,longlong param_2)

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
  FUN_140ba5cee(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5951c FUN_148c5951c body=51 status=ok
// SIG undefined FUN_148c5951c(void)

longlong FUN_148c5951c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c59556 FUN_148c59556 body=47 status=ok
// SIG undefined FUN_148c59556(void)

longlong FUN_148c59556(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59586 FUN_148c59586 body=51 status=ok
// SIG undefined FUN_148c59586(void)

longlong FUN_148c59586(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x48;
  FUN_140af926c(param_1 + -0x10);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c595c0 FUN_148c595c0 body=45 status=ok
// SIG undefined FUN_148c595c0(void)

longlong FUN_148c595c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1458fc8e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c595ee FUN_148c595ee body=45 status=ok
// SIG undefined FUN_148c595ee(void)

longlong FUN_148c595ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1458fc8e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5961c FUN_148c5961c body=45 status=ok
// SIG undefined FUN_148c5961c(void)

longlong FUN_148c5961c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145afc922(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5964a FUN_148c5964a body=45 status=ok
// SIG undefined FUN_148c5964a(void)

longlong FUN_148c5964a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145afc922(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59678 FUN_148c59678 body=51 status=ok
// SIG undefined FUN_148c59678(void)

longlong FUN_148c59678(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c596ac FUN_148c596ac body=47 status=ok
// SIG undefined FUN_148c596ac(void)

longlong FUN_148c596ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c596dc FUN_148c596dc body=45 status=ok
// SIG undefined FUN_148c596dc(void)

longlong FUN_148c596dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5970a FUN_148c5970a body=45 status=ok
// SIG undefined FUN_148c5970a(void)

longlong FUN_148c5970a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59738 FUN_148c59738 body=45 status=ok
// SIG undefined FUN_148c59738(void)

longlong FUN_148c59738(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a05398(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59766 FUN_148c59766 body=45 status=ok
// SIG undefined FUN_148c59766(void)

longlong FUN_148c59766(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145a05398(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59794 FUN_148c59794 body=45 status=ok
// SIG undefined FUN_148c59794(void)

longlong FUN_148c59794(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145aa6e24(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c597c2 FUN_148c597c2 body=45 status=ok
// SIG undefined FUN_148c597c2(void)

longlong FUN_148c597c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145aa6e24(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5980a FUN_148c5980a body=51 status=ok
// SIG undefined FUN_148c5980a(void)

longlong FUN_148c5980a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c5983e FUN_148c5983e body=47 status=ok
// SIG undefined FUN_148c5983e(void)

longlong FUN_148c5983e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5986e FUN_148c5986e body=45 status=ok
// SIG undefined FUN_148c5986e(void)

longlong FUN_148c5986e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145983730(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c598a2 FUN_148c598a2 body=45 status=ok
// SIG undefined FUN_148c598a2(void)

longlong FUN_148c598a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145983730(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c598d0 FUN_148c598d0 body=45 status=ok
// SIG undefined FUN_148c598d0(void)

longlong FUN_148c598d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c598fe FUN_148c598fe body=45 status=ok
// SIG undefined FUN_148c598fe(void)

longlong FUN_148c598fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5992c FUN_148c5992c body=45 status=ok
// SIG undefined FUN_148c5992c(void)

longlong FUN_148c5992c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14108b4b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59960 FUN_148c59960 body=45 status=ok
// SIG undefined FUN_148c59960(void)

longlong FUN_148c59960(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14108b4b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5998e FUN_148c5998e body=45 status=ok
// SIG undefined FUN_148c5998e(void)

longlong FUN_148c5998e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x48;
  FUN_14108b4b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c599c2 FUN_148c599c2 body=45 status=ok
// SIG undefined FUN_148c599c2(void)

longlong FUN_148c599c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c599f0 FUN_148c599f0 body=45 status=ok
// SIG undefined FUN_148c599f0(void)

longlong FUN_148c599f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59a1e FUN_148c59a1e body=45 status=ok
// SIG undefined FUN_148c59a1e(void)

longlong FUN_148c59a1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59a4c FUN_148c59a4c body=45 status=ok
// SIG undefined FUN_148c59a4c(void)

longlong FUN_148c59a4c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59a7a FUN_148c59a7a body=45 status=ok
// SIG undefined FUN_148c59a7a(void)

longlong FUN_148c59a7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59aa8 FUN_148c59aa8 body=45 status=ok
// SIG undefined FUN_148c59aa8(void)

longlong FUN_148c59aa8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59ad6 FUN_148c59ad6 body=45 status=ok
// SIG undefined FUN_148c59ad6(void)

longlong FUN_148c59ad6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59b04 FUN_148c59b04 body=45 status=ok
// SIG undefined FUN_148c59b04(void)

longlong FUN_148c59b04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59b32 FUN_148c59b32 body=45 status=ok
// SIG undefined FUN_148c59b32(void)

longlong FUN_148c59b32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59b60 FUN_148c59b60 body=45 status=ok
// SIG undefined FUN_148c59b60(void)

longlong FUN_148c59b60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59b8e FUN_148c59b8e body=51 status=ok
// SIG undefined FUN_148c59b8e(void)

longlong FUN_148c59b8e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c59bc2 FUN_148c59bc2 body=47 status=ok
// SIG undefined FUN_148c59bc2(void)

longlong FUN_148c59bc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59bf2 FUN_148c59bf2 body=51 status=ok
// SIG undefined FUN_148c59bf2(void)

longlong FUN_148c59bf2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c59c26 FUN_148c59c26 body=47 status=ok
// SIG undefined FUN_148c59c26(void)

longlong FUN_148c59c26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59c70 FUN_148c59c70 body=45 status=ok
// SIG undefined FUN_148c59c70(void)

longlong FUN_148c59c70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59c9e FUN_148c59c9e body=45 status=ok
// SIG undefined FUN_148c59c9e(void)

longlong FUN_148c59c9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59ccc FUN_148c59ccc body=45 status=ok
// SIG undefined FUN_148c59ccc(void)

longlong FUN_148c59ccc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1459bbc60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59cfa FUN_148c59cfa body=45 status=ok
// SIG undefined FUN_148c59cfa(void)

longlong FUN_148c59cfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1459bbc60(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59d28 FUN_148c59d28 body=45 status=ok
// SIG undefined FUN_148c59d28(void)

longlong FUN_148c59d28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59d56 FUN_148c59d56 body=45 status=ok
// SIG undefined FUN_148c59d56(void)

longlong FUN_148c59d56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59d98 FUN_148c59d98 body=45 status=ok
// SIG undefined FUN_148c59d98(void)

longlong FUN_148c59d98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1459b40fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59dc6 FUN_148c59dc6 body=45 status=ok
// SIG undefined FUN_148c59dc6(void)

longlong FUN_148c59dc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1459b40fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59df4 FUN_148c59df4 body=45 status=ok
// SIG undefined FUN_148c59df4(void)

longlong FUN_148c59df4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14588c322(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59e22 FUN_148c59e22 body=45 status=ok
// SIG undefined FUN_148c59e22(void)

longlong FUN_148c59e22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14588c322(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59e50 FUN_148c59e50 body=45 status=ok
// SIG undefined FUN_148c59e50(void)

longlong FUN_148c59e50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145984e9a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59e7e FUN_148c59e7e body=45 status=ok
// SIG undefined FUN_148c59e7e(void)

longlong FUN_148c59e7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145984e9a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59eac FUN_148c59eac body=45 status=ok
// SIG undefined FUN_148c59eac(void)

longlong FUN_148c59eac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59eda FUN_148c59eda body=45 status=ok
// SIG undefined FUN_148c59eda(void)

longlong FUN_148c59eda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59f08 FUN_148c59f08 body=45 status=ok
// SIG undefined FUN_148c59f08(void)

longlong FUN_148c59f08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14151ee08(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59f36 FUN_148c59f36 body=45 status=ok
// SIG undefined FUN_148c59f36(void)

longlong FUN_148c59f36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14151ee08(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59f64 FUN_148c59f64 body=45 status=ok
// SIG undefined FUN_148c59f64(void)

longlong FUN_148c59f64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59f92 FUN_148c59f92 body=45 status=ok
// SIG undefined FUN_148c59f92(void)

longlong FUN_148c59f92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59fc0 FUN_148c59fc0 body=45 status=ok
// SIG undefined FUN_148c59fc0(void)

longlong FUN_148c59fc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c59fee FUN_148c59fee body=45 status=ok
// SIG undefined FUN_148c59fee(void)

longlong FUN_148c59fee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a01c FUN_148c5a01c body=45 status=ok
// SIG undefined FUN_148c5a01c(void)

longlong FUN_148c5a01c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c38f4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a04a FUN_148c5a04a body=45 status=ok
// SIG undefined FUN_148c5a04a(void)

longlong FUN_148c5a04a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145c38f4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a078 FUN_148c5a078 body=45 status=ok
// SIG undefined FUN_148c5a078(void)

longlong FUN_148c5a078(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a0a6 FUN_148c5a0a6 body=45 status=ok
// SIG undefined FUN_148c5a0a6(void)

longlong FUN_148c5a0a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a0d4 FUN_148c5a0d4 body=45 status=ok
// SIG undefined FUN_148c5a0d4(void)

longlong FUN_148c5a0d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a102 FUN_148c5a102 body=45 status=ok
// SIG undefined FUN_148c5a102(void)

longlong FUN_148c5a102(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a130 FUN_148c5a130 body=51 status=ok
// SIG undefined FUN_148c5a130(void)

longlong FUN_148c5a130(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c5a164 FUN_148c5a164 body=47 status=ok
// SIG undefined FUN_148c5a164(void)

longlong FUN_148c5a164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a194 FUN_148c5a194 body=45 status=ok
// SIG undefined FUN_148c5a194(void)

longlong FUN_148c5a194(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1458f3e84(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a1c2 FUN_148c5a1c2 body=45 status=ok
// SIG undefined FUN_148c5a1c2(void)

longlong FUN_148c5a1c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1458f3e84(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a1f0 FUN_148c5a1f0 body=45 status=ok
// SIG undefined FUN_148c5a1f0(void)

longlong FUN_148c5a1f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1459b0630(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a21e FUN_148c5a21e body=45 status=ok
// SIG undefined FUN_148c5a21e(void)

longlong FUN_148c5a21e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1459b0630(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a260 FUN_148c5a260 body=51 status=ok
// SIG undefined FUN_148c5a260(void)

longlong FUN_148c5a260(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c5a29a FUN_148c5a29a body=47 status=ok
// SIG undefined FUN_148c5a29a(void)

longlong FUN_148c5a29a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5a2e8 FUN_148c5a2e8 body=83 status=ok
// SIG undefined FUN_148c5a2e8(void)

undefined8 FUN_148c5a2e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x34);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    FUN_144a787a6(param_2 + 0x40,param_3 + 0x40);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 148c5a364 FUN_148c5a364 body=59 status=ok
// SIG undefined FUN_148c5a364(void)

undefined8 FUN_148c5a364(longlong *param_1)

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



// FUNCTION 148c5a3aa FUN_148c5a3aa body=56 status=ok
// SIG undefined FUN_148c5a3aa(void)

void FUN_148c5a3aa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b8357e0;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148c5a434 FUN_148c5a434 body=57 status=ok
// SIG undefined FUN_148c5a434(void)

void FUN_148c5a434(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb2288 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb2288 = FUN_140002ddd(FUN_1465f4d73,uVar1,L"OakUIDisplayDataDef_CustomizationEntry");
  }
  return;
}



// FUNCTION 148c5a46e FUN_148c5a46e body=138 status=ok
// SIG undefined FUN_148c5a46e(void)

void FUN_148c5a46e(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c5a50c FUN_148c5a50c body=256 status=ok
// SIG undefined FUN_148c5a50c(void)

void FUN_148c5a50c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e4c07a(param_1,puVar2,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5a664 FUN_148c5a664 body=246 status=ok
// SIG undefined FUN_148c5a664(void)

void FUN_148c5a664(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141438c8c(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5a766 FUN_148c5a766 body=336 status=ok
// SIG undefined FUN_148c5a766(void)

void FUN_148c5a766(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
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
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412919d4(param_1,iVar2 != 0,iVar1 != 0,local_31);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5a8c2 FUN_148c5a8c2 body=246 status=ok
// SIG undefined FUN_148c5a8c2(void)

void FUN_148c5a8c2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459dafa6(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5a9c4 FUN_148c5a9c4 body=154 status=ok
// SIG undefined FUN_148c5a9c4(void)

void FUN_148c5a9c4(undefined8 param_1,longlong param_2)

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
  FUN_1411c140a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5aa60 FUN_148c5aa60 body=334 status=ok
// SIG undefined FUN_148c5aa60(void)

void FUN_148c5aa60(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_44;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0xffffffffffffffff;
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = FUN_1410050b8();
  local_44 = '\0';
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1408fdd00(param_1,puVar2);
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_38 + 0x10))();
    }
  }
  if (local_44 == '\x01') {
    local_44 = '\0';
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5abda FUN_148c5abda body=238 status=ok
// SIG undefined FUN_148c5abda(void)

void FUN_148c5abda(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_148e56660(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5acec FUN_148c5acec body=175 status=ok
// SIG undefined FUN_148c5acec(void)

void FUN_148c5acec(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_28 = 0;
  uStack_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_1c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a9e014(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5adb2 FUN_148c5adb2 body=350 status=ok
// SIG undefined FUN_148c5adb2(void)

void FUN_148c5adb2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e5775a(param_1,puVar2,local_4c,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5af12 FUN_148c5af12 body=263 status=ok
// SIG undefined FUN_148c5af12(void)

void FUN_148c5af12(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140b45978(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b04c FUN_148c5b04c body=156 status=ok
// SIG undefined FUN_148c5b04c(void)

void FUN_148c5b04c(undefined8 param_1,longlong param_2)

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
  FUN_145a5d05e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b0ea FUN_148c5b0ea body=156 status=ok
// SIG undefined FUN_148c5b0ea(void)

void FUN_148c5b0ea(undefined8 param_1,longlong param_2)

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
  FUN_14615c3e4(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b1a2 FUN_148c5b1a2 body=237 status=ok
// SIG undefined FUN_148c5b1a2(void)

void FUN_148c5b1a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e5ba50(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b296 FUN_148c5b296 body=241 status=ok
// SIG undefined FUN_148c5b296(void)

void FUN_148c5b296(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_148e5b932(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b388 FUN_148c5b388 body=332 status=ok
// SIG undefined FUN_148c5b388(void)

void FUN_148c5b388(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [40];
  longlong local_70;
  undefined2 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_a0 = 0;
  FUN_144928b90(local_98,0);
  local_48 = 1;
  local_44 = 2;
  local_40 = 0;
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e5b4ce(param_1,local_b0,puVar1);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b4d6 FUN_148c5b4d6 body=332 status=ok
// SIG undefined FUN_148c5b4d6(void)

void FUN_148c5b4d6(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [40];
  longlong local_70;
  undefined2 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_a0 = 0;
  FUN_144928b90(local_98,0);
  local_48 = 1;
  local_44 = 2;
  local_40 = 0;
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e5b7c8(param_1,local_b0,puVar1);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b626 FUN_148c5b626 body=350 status=ok
// SIG undefined FUN_148c5b626(void)

void FUN_148c5b626(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e5bbfe(param_1,puVar2,local_4c,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b786 FUN_148c5b786 body=263 status=ok
// SIG undefined FUN_148c5b786(void)

void FUN_148c5b786(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140e8c2d0(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b8bc FUN_148c5b8bc body=175 status=ok
// SIG undefined FUN_148c5b8bc(void)

void FUN_148c5b8bc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_28 = 0;
  uStack_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_1c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145881828(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5b96c FUN_148c5b96c body=350 status=ok
// SIG undefined FUN_148c5b96c(void)

void FUN_148c5b96c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145cdf962(param_1,puVar2,local_4c,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5bacc FUN_148c5bacc body=262 status=ok
// SIG undefined FUN_148c5bacc(void)

void FUN_148c5bacc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148e5bda6(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5bbd4 FUN_148c5bbd4 body=263 status=ok
// SIG undefined FUN_148c5bbd4(void)

void FUN_148c5bbd4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141359288(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5bcfa FUN_148c5bcfa body=350 status=ok
// SIG undefined FUN_148c5bcfa(void)

void FUN_148c5bcfa(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412e52e4(param_1,puVar2,local_4c,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5be5a FUN_148c5be5a body=263 status=ok
// SIG undefined FUN_148c5be5a(void)

void FUN_148c5be5a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_2c = 0xff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140971450(param_1,puVar2,local_4c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5bf62 FUN_148c5bf62 body=156 status=ok
// SIG undefined FUN_148c5bf62(void)

void FUN_148c5bf62(undefined8 param_1,longlong param_2)

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
  FUN_14601f6a0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5c006 FUN_148c5c006 body=241 status=ok
// SIG undefined FUN_148c5c006(void)

void FUN_148c5c006(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  thunk_FUN_1412a82ae(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c5c0fc FUN_148c5c0fc body=45 status=ok
// SIG undefined FUN_148c5c0fc(void)

longlong FUN_148c5c0fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145ccc1f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c12a FUN_148c5c12a body=45 status=ok
// SIG undefined FUN_148c5c12a(void)

longlong FUN_148c5c12a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145ccc1f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c158 FUN_148c5c158 body=45 status=ok
// SIG undefined FUN_148c5c158(void)

longlong FUN_148c5c158(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140e3eae6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c186 FUN_148c5c186 body=45 status=ok
// SIG undefined FUN_148c5c186(void)

longlong FUN_148c5c186(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140e3eae6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c1b4 FUN_148c5c1b4 body=51 status=ok
// SIG undefined FUN_148c5c1b4(void)

longlong FUN_148c5c1b4(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x30;
  FUN_140af926c(param_1 + 8);
  FUN_144760e82(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148c5c1e8 FUN_148c5c1e8 body=47 status=ok
// SIG undefined FUN_148c5c1e8(void)

longlong FUN_148c5c1e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140af926c();
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c218 FUN_148c5c218 body=45 status=ok
// SIG undefined FUN_148c5c218(void)

longlong FUN_148c5c218(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145caa5b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c246 FUN_148c5c246 body=45 status=ok
// SIG undefined FUN_148c5c246(void)

longlong FUN_148c5c246(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145caa5b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c274 FUN_148c5c274 body=45 status=ok
// SIG undefined FUN_148c5c274(void)

longlong FUN_148c5c274(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c2a2 FUN_148c5c2a2 body=45 status=ok
// SIG undefined FUN_148c5c2a2(void)

longlong FUN_148c5c2a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_140b3fd78(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c2d0 FUN_148c5c2d0 body=45 status=ok
// SIG undefined FUN_148c5c2d0(void)

longlong FUN_148c5c2d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145cc9860(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c2fe FUN_148c5c2fe body=45 status=ok
// SIG undefined FUN_148c5c2fe(void)

longlong FUN_148c5c2fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145cc9860(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c32c FUN_148c5c32c body=45 status=ok
// SIG undefined FUN_148c5c32c(void)

longlong FUN_148c5c32c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1414b7318(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c35e FUN_148c5c35e body=45 status=ok
// SIG undefined FUN_148c5c35e(void)

longlong FUN_148c5c35e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1414b7318(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c38c FUN_148c5c38c body=45 status=ok
// SIG undefined FUN_148c5c38c(void)

longlong FUN_148c5c38c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140c68e48(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c5c3ba FUN_148c5c3ba body=45 status=ok
// SIG undefined FUN_148c5c3ba(void)

longlong FUN_148c5c3ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140c68e48(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


