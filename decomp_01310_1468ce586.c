// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468ce586 FUN_1468ce586 body=96 status=ok
// SIG undefined FUN_1468ce586(void)

void FUN_1468ce586(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468ce5e6(param_1,param_2,param_3,DAT_14c892dc4,DAT_14c892dc8,DAT_14c892dcc);
  return;
}



// FUNCTION 1468ce5e6 FUN_1468ce5e6 body=132 status=ok
// SIG undefined FUN_1468ce5e6(void)

undefined8
FUN_1468ce5e6(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_140b9be50(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468ce620;
    }
    FUN_1468ce66b(param_3,local_28);
    *param_1 = local_20 << 0x20 | (ulonglong)local_28[0];
  }
  uVar1 = 1;
LAB_1468ce620:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ce66b FUN_1468ce66b body=172 status=ok
// SIG undefined FUN_1468ce66b(void)

longlong * FUN_1468ce66b(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1468ce73c FUN_1468ce73c body=22 status=ok
// SIG undefined FUN_1468ce73c(void)

undefined1 FUN_1468ce73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468ce66b(param_2,param_3);
  return 1;
}



// FUNCTION 1468ce79a FUN_1468ce79a body=267 status=ok
// SIG undefined FUN_1468ce79a(void)

void FUN_1468ce79a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468ce875;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468ce875:
  FUN_1468ce960(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ce8aa FUN_1468ce8aa body=79 status=ok
// SIG undefined FUN_1468ce8aa(void)

void FUN_1468ce8aa(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ce960 FUN_1468ce960 body=96 status=ok
// SIG undefined FUN_1468ce960(void)

void FUN_1468ce960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468ce9c0(param_1,param_2,param_3,DAT_14c892dc4,DAT_14c892dcc,DAT_14c892dc8);
  return;
}



// FUNCTION 1468ce9c0 FUN_1468ce9c0 body=129 status=ok
// SIG undefined FUN_1468ce9c0(void)

undefined8
FUN_1468ce9c0(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    FUN_1468ce66b(param_3,param_1);
  }
  else {
    if (param_2 != param_4 && param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cea13;
    }
    FUN_140b9be50(param_3,&local_20);
    *param_1 = local_20 & 0xffffffff;
    param_1[1] = local_20 >> 0x20;
  }
  uVar1 = 1;
LAB_1468cea13:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ceab6 FUN_1468ceab6 body=267 status=ok
// SIG undefined FUN_1468ceab6(void)

void FUN_1468ceab6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468ceb91;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468ceb91:
  FUN_1468cec7c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cebc6 FUN_1468cebc6 body=78 status=ok
// SIG undefined FUN_1468cebc6(void)

void FUN_1468cebc6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0xc,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cec7c FUN_1468cec7c body=96 status=ok
// SIG undefined FUN_1468cec7c(void)

void FUN_1468cec7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cecdc(param_1,param_2,param_3,DAT_14c892cbc,DAT_14c892d98,DAT_14c892d9c);
  return;
}



// FUNCTION 1468cecdc FUN_1468cecdc body=164 status=ok
// SIG undefined FUN_1468cecdc(void)

undefined8
FUN_1468cecdc(uint *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  uint local_30 [2];
  uint local_28 [2];
  uint local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_140333cf8(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468ced19;
    }
    uVar1 = FUN_1408383eb(param_3,local_30);
    uVar1 = FUN_1408383eb(uVar1,local_28);
    FUN_1408383eb(uVar1,local_20);
    *param_1 = local_30[0];
    param_1[1] = local_28[0];
    param_1[2] = local_20[0];
  }
  uVar1 = 1;
LAB_1468ced19:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cedb6 FUN_1468cedb6 body=54 status=ok
// SIG undefined FUN_1468cedb6(void)

undefined1 FUN_1468cedb6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408383eb(param_2,param_3);
  uVar1 = FUN_1408383eb(uVar1,param_3 + 8);
  FUN_1408383eb(uVar1,param_3 + 0x10);
  return 1;
}



// FUNCTION 1468cee3e FUN_1468cee3e body=267 status=ok
// SIG undefined FUN_1468cee3e(void)

void FUN_1468cee3e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cef19;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cef19:
  FUN_1468cf004(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cef4e FUN_1468cef4e body=78 status=ok
// SIG undefined FUN_1468cef4e(void)

void FUN_1468cef4e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cf004 FUN_1468cf004 body=96 status=ok
// SIG undefined FUN_1468cf004(void)

void FUN_1468cf004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cf064(param_1,param_2,param_3,DAT_14c892cbc,DAT_14c892d9c,DAT_14c892d98);
  return;
}



// FUNCTION 1468cf064 FUN_1468cf064 body=162 status=ok
// SIG undefined FUN_1468cf064(void)

undefined8
FUN_1468cf064(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    uVar1 = FUN_1408383eb(param_3,param_1);
    uVar1 = FUN_1408383eb(uVar1,param_1 + 1);
    FUN_1408383eb(uVar1,param_1 + 2);
  }
  else {
    if (param_2 != param_4 && param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cf0ab;
    }
    FUN_140333cf8(param_3,&local_24);
    *param_1 = (longlong)local_24;
    param_1[1] = (longlong)local_20;
    param_1[2] = (longlong)local_1c;
  }
  uVar1 = 1;
LAB_1468cf0ab:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cf12e FUN_1468cf12e body=22 status=ok
// SIG undefined FUN_1468cf12e(void)

undefined1 FUN_1468cf12e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468cf356(param_2,param_3);
  return 1;
}



// FUNCTION 1468cf192 FUN_1468cf192 body=267 status=ok
// SIG undefined FUN_1468cf192(void)

void FUN_1468cf192(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cf26d;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cf26d:
  FUN_1468cf44c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cf2a2 FUN_1468cf2a2 body=78 status=ok
// SIG undefined FUN_1468cf2a2(void)

void FUN_1468cf2a2(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0xc,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cf356 FUN_1468cf356 body=244 status=ok
// SIG undefined FUN_1468cf356(void)

longlong * FUN_1468cf356(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1468cf44c FUN_1468cf44c body=96 status=ok
// SIG undefined FUN_1468cf44c(void)

void FUN_1468cf44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cf4ac(param_1,param_2,param_3,DAT_14c892cc4,DAT_14c892da0,DAT_14c892da4);
  return;
}



// FUNCTION 1468cf4ac FUN_1468cf4ac body=129 status=ok
// SIG undefined FUN_1468cf4ac(void)

undefined8
FUN_1468cf4ac(uint *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  uint local_30 [2];
  uint local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    FUN_1468cf356(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cf4df;
    }
    FUN_1468cf52e(param_3,local_30);
    *param_1 = local_30[0];
    param_1[1] = local_28;
    param_1[2] = local_20;
  }
  uVar1 = 1;
LAB_1468cf4df:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cf52e FUN_1468cf52e body=250 status=ok
// SIG undefined FUN_1468cf52e(void)

longlong * FUN_1468cf52e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1468cf65c FUN_1468cf65c body=22 status=ok
// SIG undefined FUN_1468cf65c(void)

undefined1 FUN_1468cf65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468cf52e(param_2,param_3);
  return 1;
}



// FUNCTION 1468cf6c4 FUN_1468cf6c4 body=267 status=ok
// SIG undefined FUN_1468cf6c4(void)

void FUN_1468cf6c4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cf79f;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cf79f:
  FUN_1468cf88a(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cf7d4 FUN_1468cf7d4 body=78 status=ok
// SIG undefined FUN_1468cf7d4(void)

void FUN_1468cf7d4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cf88a FUN_1468cf88a body=96 status=ok
// SIG undefined FUN_1468cf88a(void)

void FUN_1468cf88a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cf8ea(param_1,param_2,param_3,DAT_14c892cc4,DAT_14c892da4,DAT_14c892da0);
  return;
}



// FUNCTION 1468cf8ea FUN_1468cf8ea body=126 status=ok
// SIG undefined FUN_1468cf8ea(void)

undefined8
FUN_1468cf8ea(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    FUN_1468cf52e(param_3,param_1);
  }
  else {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      uVar1 = 0;
      goto LAB_1468cf917;
    }
    FUN_1468cf356(param_3,&local_24);
    *param_1 = (ulonglong)local_24;
    param_1[1] = (ulonglong)local_20;
    param_1[2] = (ulonglong)local_1c;
  }
  uVar1 = 1;
LAB_1468cf917:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cf980 FUN_1468cf980 body=22 status=ok
// SIG undefined FUN_1468cf980(void)

undefined1 FUN_1468cf980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468cfbb2(param_2,param_3);
  return 1;
}



// FUNCTION 1468cf9ee FUN_1468cf9ee body=267 status=ok
// SIG undefined FUN_1468cf9ee(void)

void FUN_1468cf9ee(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cfac9;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cfac9:
  FUN_1468cfcf8(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cfafe FUN_1468cfafe body=79 status=ok
// SIG undefined FUN_1468cfafe(void)

void FUN_1468cfafe(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cfbb2 FUN_1468cfbb2 body=324 status=ok
// SIG undefined FUN_1468cfbb2(void)

longlong * FUN_1468cfbb2(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1468cfcf8 FUN_1468cfcf8 body=96 status=ok
// SIG undefined FUN_1468cfcf8(void)

void FUN_1468cfcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cfd58(param_1,param_2,param_3,DAT_14c892cc0,DAT_14c892da8,DAT_14c892dac);
  return;
}



// FUNCTION 1468cfd58 FUN_1468cfd58 body=137 status=ok
// SIG undefined FUN_1468cfd58(void)

undefined8
FUN_1468cfd58(uint *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  uint local_30;
  uint local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    FUN_1468cfbb2(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cfd8b;
    }
    FUN_1468cfde2(param_3,local_38);
    *param_1 = local_38[0];
    param_1[1] = local_30;
    param_1[2] = local_28;
    param_1[3] = local_20;
  }
  uVar1 = 1;
LAB_1468cfd8b:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cfde2 FUN_1468cfde2 body=57 status=ok
// SIG undefined FUN_1468cfde2(void)

void FUN_1468cfde2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408383eb();
  uVar1 = FUN_1408383eb(uVar1,param_2 + 8);
  uVar1 = FUN_1408383eb(uVar1,param_2 + 0x10);
  FUN_1408383eb(uVar1,param_2 + 0x18);
  return;
}



// FUNCTION 1468cfe48 FUN_1468cfe48 body=22 status=ok
// SIG undefined FUN_1468cfe48(void)

undefined1 FUN_1468cfe48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468cfde2(param_2,param_3);
  return 1;
}



// FUNCTION 1468cfeba FUN_1468cfeba body=267 status=ok
// SIG undefined FUN_1468cfeba(void)

void FUN_1468cfeba(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cff95;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cff95:
  FUN_1468d0080(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cffca FUN_1468cffca body=79 status=ok
// SIG undefined FUN_1468cffca(void)

void FUN_1468cffca(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,0x20,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d0080 FUN_1468d0080 body=96 status=ok
// SIG undefined FUN_1468d0080(void)

void FUN_1468d0080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d00e0(param_1,param_2,param_3,DAT_14c892cc0,DAT_14c892dac,DAT_14c892da8);
  return;
}



// FUNCTION 1468d00e0 FUN_1468d00e0 body=137 status=ok
// SIG undefined FUN_1468d00e0(void)

undefined8
FUN_1468d00e0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    FUN_1468cfde2(param_3,param_1);
  }
  else {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      uVar1 = 0;
      goto LAB_1468d010d;
    }
    FUN_1468cfbb2(param_3,&local_28);
    *param_1 = (longlong)local_28;
    param_1[1] = (longlong)local_24;
    param_1[2] = (longlong)local_20;
    param_1[3] = (longlong)local_1c;
  }
  uVar1 = 1;
LAB_1468d010d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d0180 FUN_1468d0180 body=22 status=ok
// SIG undefined FUN_1468d0180(void)

undefined1 FUN_1468d0180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468d03b2(param_2,param_3);
  return 1;
}



// FUNCTION 1468d01ee FUN_1468d01ee body=267 status=ok
// SIG undefined FUN_1468d01ee(void)

void FUN_1468d01ee(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d02c9;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d02c9:
  FUN_1468d04f8(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d02fe FUN_1468d02fe body=79 status=ok
// SIG undefined FUN_1468d02fe(void)

void FUN_1468d02fe(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d03b2 FUN_1468d03b2 body=324 status=ok
// SIG undefined FUN_1468d03b2(void)

longlong * FUN_1468d03b2(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1468d04f8 FUN_1468d04f8 body=96 status=ok
// SIG undefined FUN_1468d04f8(void)

void FUN_1468d04f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d0558(param_1,param_2,param_3,DAT_14c892cc8,DAT_14c892db0,DAT_14c892db4);
  return;
}



// FUNCTION 1468d0558 FUN_1468d0558 body=137 status=ok
// SIG undefined FUN_1468d0558(void)

undefined8
FUN_1468d0558(uint *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  uint local_30;
  uint local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    FUN_1468d03b2(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d058b;
    }
    FUN_1468d05e2(param_3,local_38);
    *param_1 = local_38[0];
    param_1[1] = local_30;
    param_1[2] = local_28;
    param_1[3] = local_20;
  }
  uVar1 = 1;
LAB_1468d058b:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d05e2 FUN_1468d05e2 body=332 status=ok
// SIG undefined FUN_1468d05e2(void)

longlong * FUN_1468d05e2(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1468d075a FUN_1468d075a body=22 status=ok
// SIG undefined FUN_1468d075a(void)

undefined1 FUN_1468d075a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468d05e2(param_2,param_3);
  return 1;
}



// FUNCTION 1468d07cc FUN_1468d07cc body=267 status=ok
// SIG undefined FUN_1468d07cc(void)

void FUN_1468d07cc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d08a7;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d08a7:
  FUN_1468d0992(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d08dc FUN_1468d08dc body=79 status=ok
// SIG undefined FUN_1468d08dc(void)

void FUN_1468d08dc(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,0x20,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d0992 FUN_1468d0992 body=96 status=ok
// SIG undefined FUN_1468d0992(void)

void FUN_1468d0992(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d09f2(param_1,param_2,param_3,DAT_14c892cc8,DAT_14c892db4,DAT_14c892db0);
  return;
}



// FUNCTION 1468d09f2 FUN_1468d09f2 body=134 status=ok
// SIG undefined FUN_1468d09f2(void)

undefined8
FUN_1468d09f2(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    FUN_1468d05e2(param_3,param_1);
  }
  else {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      uVar1 = 0;
      goto LAB_1468d0a1f;
    }
    FUN_1468d03b2(param_3,&local_28);
    *param_1 = (ulonglong)local_28;
    param_1[1] = (ulonglong)local_24;
    param_1[2] = (ulonglong)local_20;
    param_1[3] = (ulonglong)local_1c;
  }
  uVar1 = 1;
LAB_1468d0a1f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d0a92 FUN_1468d0a92 body=21 status=ok
// SIG undefined FUN_1468d0a92(void)

undefined1 FUN_1468d0a92(void)

{
  undefined8 in_stack_00000028;
  
  FUN_1468d0cae(in_stack_00000028);
  return 1;
}



// FUNCTION 1468d0af6 FUN_1468d0af6 body=267 status=ok
// SIG undefined FUN_1468d0af6(void)

void FUN_1468d0af6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d0bd1;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d0bd1:
  FUN_1468d0e9a(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d0c06 FUN_1468d0c06 body=78 status=ok
// SIG undefined FUN_1468d0c06(void)

void FUN_1468d0c06(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,8,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d0cae FUN_1468d0cae body=446 status=ok
// SIG undefined FUN_1468d0cae(void)

void FUN_1468d0cae(undefined4 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x15 < uVar3) {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar4 != 0x1a) {
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
        }
        else {
          FUN_14572512c(param_2,param_1);
        }
      }
      else {
        *param_1 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar2 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
      param_1[1] = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      goto LAB_1468d0d8c;
    }
  }
  puVar1 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  puVar1 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
    }
    else {
      FUN_14572512c(param_2,&local_28);
    }
  }
  else {
    local_28 = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  *param_1 = local_24;
  param_1[1] = local_28;
LAB_1468d0d8c:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d0e9a FUN_1468d0e9a body=96 status=ok
// SIG undefined FUN_1468d0e9a(void)

void FUN_1468d0e9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d0efa(param_1,param_2,param_3,DAT_14c892c18,DAT_14c892ca8,DAT_14c892cac);
  return;
}



// FUNCTION 1468d0efa FUN_1468d0efa body=137 status=ok
// SIG undefined FUN_1468d0efa(void)

undefined8
FUN_1468d0efa(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
LAB_1468d0f19:
    FUN_14280e057(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d0f19;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d0f26;
    }
    FUN_14010abd4(param_3,&local_28);
    *param_1 = (float)local_28;
    param_1[1] = (float)local_20;
  }
  uVar1 = 1;
LAB_1468d0f26:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d0fbc FUN_1468d0fbc body=267 status=ok
// SIG undefined FUN_1468d0fbc(void)

void FUN_1468d0fbc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d1097;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d1097:
  FUN_1468d117e(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d10cc FUN_1468d10cc body=78 status=ok
// SIG undefined FUN_1468d10cc(void)

void FUN_1468d10cc(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d117e FUN_1468d117e body=96 status=ok
// SIG undefined FUN_1468d117e(void)

void FUN_1468d117e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d11de(param_1,param_2,param_3,DAT_14c892c18,DAT_14c892cac,DAT_14c892ca8);
  return;
}



// FUNCTION 1468d11de FUN_1468d11de body=134 status=ok
// SIG undefined FUN_1468d11de(void)

undefined8
FUN_1468d11de(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_14010abd4(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d1218;
    }
    FUN_14280e057(param_3,&local_20);
    *param_1 = (double)local_20;
    param_1[1] = (double)local_1c;
  }
  uVar1 = 1;
LAB_1468d1218:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d12a2 FUN_1468d12a2 body=267 status=ok
// SIG undefined FUN_1468d12a2(void)

void FUN_1468d12a2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d137d;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d137d:
  FUN_1468d145c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d13b2 FUN_1468d13b2 body=78 status=ok
// SIG undefined FUN_1468d13b2(void)

void FUN_1468d13b2(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d145c FUN_1468d145c body=108 status=ok
// SIG undefined FUN_1468d145c(void)

undefined8 FUN_1468d145c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1467fcc06();
  if (cVar1 == '\0') {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar2 = FUN_1468d14c8(param_1,param_2,param_3,DAT_14c892c24,DAT_14c892c98,DAT_14c892c9c);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1468d14c8 FUN_1468d14c8 body=200 status=ok
// SIG undefined FUN_1468d14c8(void)

undefined8
FUN_1468d14c8(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_5) {
LAB_1468d14ea:
    FUN_1447e46aa(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d14ea;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d14f7;
    }
    local_38 = 0.0;
    dStack_30 = 0.0;
    local_28 = 0.0;
    local_20 = 1.0;
    FUN_140c5e5ec(param_3,&local_38);
    *param_1 = (float)local_38;
    param_1[1] = (float)dStack_30;
    param_1[2] = (float)local_28;
    param_1[3] = (float)local_20;
  }
  uVar1 = 1;
LAB_1468d14f7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d15d6 FUN_1468d15d6 body=267 status=ok
// SIG undefined FUN_1468d15d6(void)

void FUN_1468d15d6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d16b1;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d16b1:
  FUN_1468d1790(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d16e6 FUN_1468d16e6 body=78 status=ok
// SIG undefined FUN_1468d16e6(void)

void FUN_1468d16e6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x20,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d1790 FUN_1468d1790 body=108 status=ok
// SIG undefined FUN_1468d1790(void)

undefined8 FUN_1468d1790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1467fcf14();
  if (cVar1 == '\0') {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar2 = FUN_1468d17fc(param_1,param_2,param_3,DAT_14c892c24,DAT_14c892c9c,DAT_14c892c98);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1468d17fc FUN_1468d17fc body=167 status=ok
// SIG undefined FUN_1468d17fc(void)

undefined8
FUN_1468d17fc(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_140c5e5ec(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d1836;
    }
    local_28 = 0.0;
    fStack_24 = 0.0;
    fStack_20 = 0.0;
    fStack_1c = 1.0;
    FUN_1447e46aa(param_3,&local_28);
    *param_1 = (double)local_28;
    param_1[1] = (double)fStack_24;
    param_1[2] = (double)fStack_20;
    param_1[3] = (double)fStack_1c;
  }
  uVar1 = 1;
LAB_1468d1836:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d18ba FUN_1468d18ba body=22 status=ok
// SIG undefined FUN_1468d18ba(void)

undefined1 FUN_1468d18ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141717eee(param_2,param_3);
  return 1;
}



// FUNCTION 1468d18d2 FUN_1468d18d2 body=24 status=ok
// SIG undefined FUN_1468d18d2(void)

undefined1
FUN_1468d18d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1468d1b18(param_5,param_2,param_4);
  return 1;
}



// FUNCTION 1468d1954 FUN_1468d1954 body=267 status=ok
// SIG undefined FUN_1468d1954(void)

void FUN_1468d1954(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d1a2f;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d1a2f:
  FUN_1468d1e88(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d1a64 FUN_1468d1a64 body=78 status=ok
// SIG undefined FUN_1468d1a64(void)

void FUN_1468d1a64(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0xc,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d1b18 FUN_1468d1b18 body=877 status=ok
// SIG undefined FUN_1468d1b18(void)

void FUN_1468d1b18(float *param_1,longlong *param_2,undefined1 *param_3)

{
  short *psVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [32];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_22 = (short)((uint)(int)ROUND(*param_1 + *param_1 + 0.5) >> 1);
    local_24 = (short)((uint)(int)ROUND(param_1[1] + param_1[1] + 0.5) >> 1);
    local_26 = (short)((uint)(int)ROUND(param_1[2] + param_1[2] + 0.5) >> 1);
    local_28 = (short)((uint)(int)ROUND(param_1[3] + param_1[3] + 0.5) >> 1);
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_22,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_22);
      }
    }
    else {
      local_22 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_24);
      }
    }
    else {
      local_24 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_26,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_26);
      }
    }
    else {
      local_26 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_28);
      }
    }
    else {
      *puVar2 = *puVar2 + 2;
    }
  }
  else {
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_22,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_22);
      }
    }
    else {
      local_22 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_24);
      }
    }
    else {
      local_24 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_26,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_26);
      }
    }
    else {
      local_26 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_28);
      }
    }
    else {
      local_28 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    *param_1 = (float)(int)local_22;
    param_1[1] = (float)(int)local_24;
    param_1[2] = (float)(int)local_26;
    param_1[3] = (float)(int)local_28;
  }
  *param_3 = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d1e88 FUN_1468d1e88 body=96 status=ok
// SIG undefined FUN_1468d1e88(void)

void FUN_1468d1e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d1ee8(param_1,param_2,param_3,DAT_14c892c3c,DAT_14c892c68,DAT_14c892c6c);
  return;
}



// FUNCTION 1468d1ee8 FUN_1468d1ee8 body=163 status=ok
// SIG undefined FUN_1468d1ee8(void)

undefined8
FUN_1468d1ee8(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_5) {
LAB_1468d1f0a:
    FUN_141717eee(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d1f0a;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d1f17;
    }
    FUN_1468d1f8c(param_3,&local_38);
    *param_1 = (float)local_38;
    param_1[1] = (float)local_30;
    param_1[2] = (float)local_28;
    param_1[3] = (float)local_20;
  }
  uVar1 = 1;
LAB_1468d1f17:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d1f8c FUN_1468d1f8c body=239 status=ok
// SIG undefined FUN_1468d1f8c(void)

longlong * FUN_1468d1f8c(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14480c34d();
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    *(double *)(param_2 + 0x18) = (double)local_1c;
  }
  else {
    puVar4 = (undefined8 *)(param_2 + 0x18);
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar4,8);
      }
      else {
        thunk_FUN_146821949(param_1,puVar4);
      }
    }
    else {
      *puVar4 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d209a FUN_1468d209a body=22 status=ok
// SIG undefined FUN_1468d209a(void)

undefined1 FUN_1468d209a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468d1f8c(param_2,param_3);
  return 1;
}



// FUNCTION 1468d20b2 FUN_1468d20b2 body=24 status=ok
// SIG undefined FUN_1468d20b2(void)

undefined1
FUN_1468d20b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1468d22fc(param_5,param_2,param_4);
  return 1;
}



// FUNCTION 1468d2138 FUN_1468d2138 body=267 status=ok
// SIG undefined FUN_1468d2138(void)

void FUN_1468d2138(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d2213;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d2213:
  FUN_1468d2670(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d2248 FUN_1468d2248 body=78 status=ok
// SIG undefined FUN_1468d2248(void)

void FUN_1468d2248(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d22fc FUN_1468d22fc body=881 status=ok
// SIG undefined FUN_1468d22fc(void)

void FUN_1468d22fc(double *param_1,longlong *param_2,undefined1 *param_3)

{
  short *psVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [32];
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_22 = (short)((ulonglong)(longlong)ROUND(*param_1 + *param_1 + 0.5) >> 1);
    local_24 = (short)((ulonglong)(longlong)ROUND(param_1[1] + param_1[1] + 0.5) >> 1);
    local_26 = (short)((ulonglong)(longlong)ROUND(param_1[2] + param_1[2] + 0.5) >> 1);
    local_28 = (short)((ulonglong)(longlong)ROUND(param_1[3] + param_1[3] + 0.5) >> 1);
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_22,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_22);
      }
    }
    else {
      local_22 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_24);
      }
    }
    else {
      local_24 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_26,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_26);
      }
    }
    else {
      local_26 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    if (puVar2[1] < *puVar2 + 2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_28);
      }
    }
    else {
      *puVar2 = *puVar2 + 2;
    }
  }
  else {
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_22,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_22);
      }
    }
    else {
      local_22 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_24);
      }
    }
    else {
      local_24 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_26,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_26);
      }
    }
    else {
      local_26 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    psVar1 = (short *)*puVar2 + 1;
    if ((short *)puVar2[1] < psVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_28);
      }
    }
    else {
      local_28 = *(short *)*puVar2;
      *puVar2 = (ulonglong)psVar1;
    }
    *param_1 = (double)(int)local_22;
    param_1[1] = (double)(int)local_24;
    param_1[2] = (double)(int)local_26;
    param_1[3] = (double)(int)local_28;
  }
  *param_3 = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d2670 FUN_1468d2670 body=96 status=ok
// SIG undefined FUN_1468d2670(void)

void FUN_1468d2670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d26d0(param_1,param_2,param_3,DAT_14c892c3c,DAT_14c892c6c,DAT_14c892c68);
  return;
}



// FUNCTION 1468d26d0 FUN_1468d26d0 body=145 status=ok
// SIG undefined FUN_1468d26d0(void)

undefined8
FUN_1468d26d0(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    FUN_1468d1f8c(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d2733;
    }
    FUN_141717eee(param_3,&local_28);
    *param_1 = (double)local_28;
    param_1[1] = (double)local_24;
    param_1[2] = (double)local_20;
    param_1[3] = (double)local_1c;
  }
  uVar1 = 1;
LAB_1468d2733:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d2788 FUN_1468d2788 body=22 status=ok
// SIG undefined FUN_1468d2788(void)

undefined1 FUN_1468d2788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1467fab5c(param_2,param_3);
  return 1;
}



// FUNCTION 1468d2806 FUN_1468d2806 body=267 status=ok
// SIG undefined FUN_1468d2806(void)

void FUN_1468d2806(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d28e1;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d28e1:
  FUN_1468d29b8(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d2916 FUN_1468d2916 body=59 status=ok
// SIG undefined FUN_1468d2916(void)

undefined8 FUN_1468d2916(longlong *param_1)

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



// FUNCTION 1468d29b8 FUN_1468d29b8 body=96 status=ok
// SIG undefined FUN_1468d29b8(void)

void FUN_1468d29b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d2a18(param_1,param_2,param_3,DAT_14c892c30,DAT_14c892ca0,DAT_14c892ca4);
  return;
}



// FUNCTION 1468d2a18 FUN_1468d2a18 body=151 status=ok
// SIG undefined FUN_1468d2a18(void)

undefined8
FUN_1468d2a18(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_5) {
LAB_1468d2aa3:
    FUN_1467fab5c(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d2aa3;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d2a77;
    }
    FUN_1401fb57a(param_3,&local_30);
    *param_1 = (float)local_30;
    param_1[1] = (float)local_28;
    param_1[2] = (float)local_20;
  }
  uVar1 = 1;
LAB_1468d2a77:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d2af8 FUN_1468d2af8 body=267 status=ok
// SIG undefined FUN_1468d2af8(void)

void FUN_1468d2af8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d2bd3;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d2bd3:
  FUN_1468d2ca6(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d2c08 FUN_1468d2c08 body=59 status=ok
// SIG undefined FUN_1468d2c08(void)

undefined8 FUN_1468d2c08(longlong *param_1)

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



// FUNCTION 1468d2ca6 FUN_1468d2ca6 body=96 status=ok
// SIG undefined FUN_1468d2ca6(void)

void FUN_1468d2ca6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d2d06(param_1,param_2,param_3,DAT_14c892c30,DAT_14c892ca4,DAT_14c892ca0);
  return;
}



// FUNCTION 1468d2d06 FUN_1468d2d06 body=144 status=ok
// SIG undefined FUN_1468d2d06(void)

undefined8
FUN_1468d2d06(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_1401fb57a(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d2d40;
    }
    FUN_1467fab5c(param_3,&local_24);
    *param_1 = (double)local_24;
    param_1[1] = (double)local_20;
    param_1[2] = (double)local_1c;
  }
  uVar1 = 1;
LAB_1468d2d40:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d2db6 FUN_1468d2db6 body=22 status=ok
// SIG undefined FUN_1468d2db6(void)

undefined1 FUN_1468d2db6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140333aca(param_2,param_3);
  return 1;
}



// FUNCTION 1468d2e7e FUN_1468d2e7e body=267 status=ok
// SIG undefined FUN_1468d2e7e(void)

void FUN_1468d2e7e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d2f59;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d2f59:
  FUN_1468d3030(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d2f8e FUN_1468d2f8e body=59 status=ok
// SIG undefined FUN_1468d2f8e(void)

undefined8 FUN_1468d2f8e(longlong *param_1)

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



// FUNCTION 1468d3030 FUN_1468d3030 body=96 status=ok
// SIG undefined FUN_1468d3030(void)

void FUN_1468d3030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d3090(param_1,param_2,param_3,DAT_14c892c14,DAT_14c892c88,DAT_14c892c8c);
  return;
}



// FUNCTION 1468d3090 FUN_1468d3090 body=197 status=ok
// SIG undefined FUN_1468d3090(void)

undefined8
FUN_1468d3090(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == param_5) {
LAB_1468d30b2:
    FUN_140333aca(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d30b2;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d30bf;
    }
    local_20 = 0;
    FUN_140119d96(param_3,&local_50);
    *param_1 = (float)local_50;
    param_1[1] = (float)local_48;
    param_1[2] = (float)local_40;
    param_1[3] = (float)local_38;
    param_1[4] = (float)local_30;
    param_1[5] = (float)local_28;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  uVar1 = 1;
LAB_1468d30bf:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d323c FUN_1468d323c body=267 status=ok
// SIG undefined FUN_1468d323c(void)

void FUN_1468d323c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d3317;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d3317:
  FUN_1468d33e2(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d334c FUN_1468d334c body=59 status=ok
// SIG undefined FUN_1468d334c(void)

undefined8 FUN_1468d334c(longlong *param_1)

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



// FUNCTION 1468d33e2 FUN_1468d33e2 body=96 status=ok
// SIG undefined FUN_1468d33e2(void)

void FUN_1468d33e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d3442(param_1,param_2,param_3,DAT_14c892c14,DAT_14c892c8c,DAT_14c892c88);
  return;
}



// FUNCTION 1468d3442 FUN_1468d3442 body=188 status=ok
// SIG undefined FUN_1468d3442(void)

undefined8
FUN_1468d3442(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_140119d96(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d347f;
    }
    local_1c = 0;
    FUN_140333aca(param_3,&local_34);
    *param_1 = (double)local_34;
    param_1[1] = (double)local_30;
    param_1[2] = (double)local_2c;
    param_1[3] = (double)local_28;
    param_1[4] = (double)local_24;
    param_1[5] = (double)local_20;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  uVar1 = 1;
LAB_1468d347f:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d35a2 FUN_1468d35a2 body=267 status=ok
// SIG undefined FUN_1468d35a2(void)

void FUN_1468d35a2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d367d;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d367d:
  FUN_1468d3754(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d36b2 FUN_1468d36b2 body=59 status=ok
// SIG undefined FUN_1468d36b2(void)

undefined8 FUN_1468d36b2(longlong *param_1)

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



// FUNCTION 1468d3754 FUN_1468d3754 body=96 status=ok
// SIG undefined FUN_1468d3754(void)

void FUN_1468d3754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d37b4(param_1,param_2,param_3,DAT_14c892cb0,DAT_14c892cb4,DAT_14c892cb8);
  return;
}



// FUNCTION 1468d37b4 FUN_1468d37b4 body=276 status=ok
// SIG undefined FUN_1468d37b4(void)

undefined8
FUN_1468d37b4(float *param_1,longlong param_2,longlong *param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  char local_58;
  undefined7 uStack_57;
  double local_50;
  double local_48;
  double local_40;
  char local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == param_5) {
LAB_1468d37dc:
    uVar2 = FUN_14280e057(param_3,param_1);
    FUN_14280e057(uVar2,param_1 + 2);
    local_58 = *(char *)(param_1 + 4);
    (**(code **)(*param_3 + 0x170))(param_3,&local_58,1);
    cVar1 = local_58;
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)((longlong)param_3 + 0x44) < 0x3ec) goto LAB_1468d37dc;
    }
    else if (param_2 != param_6) {
      uVar2 = 0;
      goto LAB_1468d381b;
    }
    uVar2 = FUN_14010abd4(param_3,&local_58);
    FUN_14010abd4(uVar2,&local_48);
    local_29 = local_38;
    (**(code **)(*param_3 + 0x170))(param_3,&local_29,1);
    *param_1 = (float)(double)CONCAT71(uStack_57,local_58);
    param_1[1] = (float)local_50;
    param_1[2] = (float)local_48;
    param_1[3] = (float)local_40;
    cVar1 = local_29;
  }
  *(bool *)(param_1 + 4) = cVar1 != '\0';
  uVar2 = 1;
LAB_1468d381b:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1468d397c FUN_1468d397c body=267 status=ok
// SIG undefined FUN_1468d397c(void)

void FUN_1468d397c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d3a57;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d3a57:
  FUN_1468d3b2e(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d3a8c FUN_1468d3a8c body=59 status=ok
// SIG undefined FUN_1468d3a8c(void)

undefined8 FUN_1468d3a8c(longlong *param_1)

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



// FUNCTION 1468d3b2e FUN_1468d3b2e body=96 status=ok
// SIG undefined FUN_1468d3b2e(void)

void FUN_1468d3b2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d3b8e(param_1,param_2,param_3,DAT_14c892cb0,DAT_14c892cb8,DAT_14c892cb4);
  return;
}



// FUNCTION 1468d3b8e FUN_1468d3b8e body=278 status=ok
// SIG undefined FUN_1468d3b8e(void)

undefined8
FUN_1468d3b8e(double *param_1,longlong param_2,longlong *param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  char local_30;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == param_4 || param_2 == param_5) {
    uVar2 = FUN_14010abd4(param_3,param_1);
    FUN_14010abd4(uVar2,param_1 + 2);
    local_40 = (float)CONCAT31(local_40._1_3_,*(undefined1 *)(param_1 + 4));
    (**(code **)(*param_3 + 0x170))(param_3,&local_40,1);
    cVar1 = local_40._0_1_;
  }
  else {
    if (param_2 != param_6) {
      uVar2 = 0;
      goto LAB_1468d3c03;
    }
    uVar2 = FUN_14280e057(param_3,&local_40);
    FUN_14280e057(uVar2,&local_38);
    local_29 = local_30;
    (**(code **)(*param_3 + 0x170))(param_3,&local_29,1);
    *param_1 = (double)local_40;
    param_1[1] = (double)local_3c;
    param_1[2] = (double)local_38;
    param_1[3] = (double)local_34;
    cVar1 = local_29;
  }
  *(bool *)(param_1 + 4) = cVar1 != '\0';
  uVar2 = 1;
LAB_1468d3c03:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d3cd4 FUN_1468d3cd4 body=22 status=ok
// SIG undefined FUN_1468d3cd4(void)

undefined1 FUN_1468d3cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1467fd008(param_2,param_3);
  return 1;
}



// FUNCTION 1468d3d5a FUN_1468d3d5a body=267 status=ok
// SIG undefined FUN_1468d3d5a(void)

void FUN_1468d3d5a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d3e35;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d3e35:
  FUN_1468d3f0c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d3e6a FUN_1468d3e6a body=59 status=ok
// SIG undefined FUN_1468d3e6a(void)

undefined8 FUN_1468d3e6a(longlong *param_1)

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



// FUNCTION 1468d3f0c FUN_1468d3f0c body=96 status=ok
// SIG undefined FUN_1468d3f0c(void)

void FUN_1468d3f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d3f6c(param_1,param_2,param_3,DAT_14c892c40,DAT_14c892c70,DAT_14c892c74);
  return;
}



// FUNCTION 1468d3f6c FUN_1468d3f6c body=541 status=ok
// SIG undefined FUN_1468d3f6c(void)

undefined8
FUN_1468d3f6c(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_168 [32];
  double local_148;
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
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 == param_5) {
LAB_1468d408f:
    FUN_1467fd008(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d408f;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d4009;
    }
    FUN_1467fd8a5(param_3,&local_148);
    *param_1 = (float)local_148;
    param_1[1] = (float)local_140;
    param_1[2] = (float)local_138;
    param_1[3] = (float)local_130;
    param_1[4] = (float)local_128;
    param_1[5] = (float)local_120;
    param_1[6] = (float)local_118;
    param_1[7] = (float)local_110;
    param_1[8] = (float)local_108;
    param_1[9] = (float)local_100;
    param_1[10] = (float)local_f8;
    param_1[0xb] = (float)local_f0;
    param_1[0xc] = (float)local_e8;
    param_1[0xd] = (float)local_e0;
    param_1[0xe] = (float)local_d8;
    param_1[0xf] = (float)local_d0;
  }
  uVar1 = 1;
LAB_1468d4009:
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d41d8 FUN_1468d41d8 body=22 status=ok
// SIG undefined FUN_1468d41d8(void)

undefined1 FUN_1468d41d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1467fd8a5(param_2,param_3);
  return 1;
}



// FUNCTION 1468d425e FUN_1468d425e body=267 status=ok
// SIG undefined FUN_1468d425e(void)

void FUN_1468d425e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d4339;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d4339:
  FUN_1468d441c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d436e FUN_1468d436e body=59 status=ok
// SIG undefined FUN_1468d436e(void)

undefined8 FUN_1468d436e(longlong *param_1)

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



// FUNCTION 1468d441c FUN_1468d441c body=96 status=ok
// SIG undefined FUN_1468d441c(void)

void FUN_1468d441c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d447c(param_1,param_2,param_3,DAT_14c892c40,DAT_14c892c74,DAT_14c892c70);
  return;
}



// FUNCTION 1468d447c FUN_1468d447c body=519 status=ok
// SIG undefined FUN_1468d447c(void)

undefined8
FUN_1468d447c(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    FUN_1467fd8a5(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d4513;
    }
    FUN_1467fd008(param_3,&local_108);
    *param_1 = (double)local_108;
    param_1[1] = (double)local_104;
    param_1[2] = (double)local_100;
    param_1[3] = (double)local_fc;
    param_1[4] = (double)local_f8;
    param_1[5] = (double)local_f4;
    param_1[6] = (double)local_f0;
    param_1[7] = (double)local_ec;
    param_1[8] = (double)local_e8;
    param_1[9] = (double)local_e4;
    param_1[10] = (double)local_e0;
    param_1[0xb] = (double)local_dc;
    param_1[0xc] = (double)local_d8;
    param_1[0xd] = (double)local_d4;
    param_1[0xe] = (double)local_d0;
    param_1[0xf] = (double)local_cc;
  }
  uVar1 = 1;
LAB_1468d4513:
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d4740 FUN_1468d4740 body=204 status=ok
// SIG undefined FUN_1468d4740(void)

undefined8 FUN_1468d4740(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b68) {
    local_24 = *(undefined4 *)(param_2 + 8);
    FUN_14281b48e();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d4812 FUN_1468d4812 body=59 status=ok
// SIG undefined FUN_1468d4812(void)

undefined8 FUN_1468d4812(longlong *param_1)

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



// FUNCTION 1468d498e FUN_1468d498e body=204 status=ok
// SIG undefined FUN_1468d498e(void)

undefined8 FUN_1468d498e(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b68) {
    local_24 = *(undefined4 *)(param_2 + 8);
    FUN_14281b48e();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d4a60 FUN_1468d4a60 body=59 status=ok
// SIG undefined FUN_1468d4a60(void)

undefined8 FUN_1468d4a60(longlong *param_1)

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



// FUNCTION 1468d4bc6 FUN_1468d4bc6 body=59 status=ok
// SIG undefined FUN_1468d4bc6(void)

undefined8 FUN_1468d4bc6(longlong *param_1)

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



// FUNCTION 1468d4c7a FUN_1468d4c7a body=22 status=ok
// SIG undefined FUN_1468d4c7a(void)

undefined1 FUN_1468d4c7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1408ef3d7(param_2,param_3);
  return 1;
}



// FUNCTION 1468d4cbe FUN_1468d4cbe body=78 status=ok
// SIG undefined FUN_1468d4cbe(void)

void FUN_1468d4cbe(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d4db4 FUN_1468d4db4 body=64 status=ok
// SIG undefined FUN_1468d4db4(void)

undefined4 FUN_1468d4db4(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d4e76 FUN_1468d4e76 body=22 status=ok
// SIG undefined FUN_1468d4e76(void)

undefined1 FUN_1468d4e76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140a4aa2c(param_2,param_3);
  return 1;
}



// FUNCTION 1468d4f02 FUN_1468d4f02 body=267 status=ok
// SIG undefined FUN_1468d4f02(void)

void FUN_1468d4f02(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d4fdd;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d4fdd:
  FUN_1468d50c8(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d5012 FUN_1468d5012 body=78 status=ok
// SIG undefined FUN_1468d5012(void)

void FUN_1468d5012(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d50c8 FUN_1468d50c8 body=96 status=ok
// SIG undefined FUN_1468d50c8(void)

void FUN_1468d50c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d5128(param_1,param_2,param_3,DAT_14c892c54,DAT_14c892c78,DAT_14c892c7c);
  return;
}



// FUNCTION 1468d5128 FUN_1468d5128 body=163 status=ok
// SIG undefined FUN_1468d5128(void)

undefined8
FUN_1468d5128(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_5) {
LAB_1468d514a:
    FUN_140a4aa2c(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d514a;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d5157;
    }
    FUN_1400f4f7e(param_3,&local_38);
    *param_1 = (float)local_38;
    param_1[1] = (float)local_30;
    param_1[2] = (float)local_28;
    param_1[3] = (float)local_20;
  }
  uVar1 = 1;
LAB_1468d5157:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d5212 FUN_1468d5212 body=267 status=ok
// SIG undefined FUN_1468d5212(void)

void FUN_1468d5212(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d52ed;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d52ed:
  FUN_1468d53d4(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d5322 FUN_1468d5322 body=78 status=ok
// SIG undefined FUN_1468d5322(void)

void FUN_1468d5322(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x20,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d53d4 FUN_1468d53d4 body=96 status=ok
// SIG undefined FUN_1468d53d4(void)

void FUN_1468d53d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d5434(param_1,param_2,param_3,DAT_14c892c54,DAT_14c892c7c,DAT_14c892c78);
  return;
}



// FUNCTION 1468d5434 FUN_1468d5434 body=154 status=ok
// SIG undefined FUN_1468d5434(void)

undefined8
FUN_1468d5434(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_1400f4f7e(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d546e;
    }
    FUN_140a4aa2c(param_3,&local_28);
    *param_1 = (double)local_28;
    param_1[1] = (double)local_24;
    param_1[2] = (double)local_20;
    param_1[3] = (double)local_1c;
  }
  uVar1 = 1;
LAB_1468d546e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d54f6 FUN_1468d54f6 body=42 status=ok
// SIG undefined FUN_1468d54f6(void)

undefined1 FUN_1468d54f6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14480c34d(param_2,param_3);
  FUN_14480c34d(uVar1,param_3 + 0x18);
  return 1;
}



// FUNCTION 1468d55ba FUN_1468d55ba body=59 status=ok
// SIG undefined FUN_1468d55ba(void)

undefined8 FUN_1468d55ba(longlong *param_1)

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



// FUNCTION 1468d56ce FUN_1468d56ce body=31 status=ok
// SIG undefined FUN_1468d56ce(void)

undefined1
FUN_1468d56ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1468d58b2(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1468d5702 FUN_1468d5702 body=267 status=ok
// SIG undefined FUN_1468d5702(void)

void FUN_1468d5702(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d57dd;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d57dd:
  FUN_1468d590a(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d5812 FUN_1468d5812 body=59 status=ok
// SIG undefined FUN_1468d5812(void)

undefined8 FUN_1468d5812(longlong *param_1)

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



// FUNCTION 1468d58b2 FUN_1468d58b2 body=86 status=ok
// SIG undefined FUN_1468d58b2(void)

byte FUN_1468d58b2(float *param_1,float *param_2)

{
  byte bVar1;
  
  if ((((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) || (param_1[1] != param_2[1]))
       || ((NAN(param_1[1]) || NAN(param_2[1]) || (param_1[2] != param_2[2])))) ||
      ((NAN(param_1[2]) || NAN(param_2[2]) ||
       ((param_1[3] != param_2[3] || (NAN(param_1[3]) || NAN(param_2[3]))))))) ||
     ((param_1[4] != param_2[4] || (NAN(param_1[4]) || NAN(param_2[4]))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(param_2[5] == param_1[5]) & 1;
  }
  return bVar1;
}



// FUNCTION 1468d590a FUN_1468d590a body=96 status=ok
// SIG undefined FUN_1468d590a(void)

void FUN_1468d590a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d596a(param_1,param_2,param_3,DAT_14c892de4,DAT_14c892de8,DAT_14c892dec);
  return;
}



// FUNCTION 1468d596a FUN_1468d596a body=271 status=ok
// SIG undefined FUN_1468d596a(void)

undefined8
FUN_1468d596a(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == param_5) {
LAB_1468d598d:
    uVar1 = FUN_1447712aa(param_3,param_1);
    FUN_1447712aa(uVar1,param_1 + 3);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d598d;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d59a9;
    }
    local_48 = DAT_14c8464f0;
    local_58 = DAT_14c8464e0;
    dStack_50 = DAT_14c8464e8;
    local_40 = 0.0;
    dStack_38 = 0.0;
    local_30 = 1.0;
    uVar1 = FUN_14480c34d(param_3,&local_58);
    FUN_14480c34d(uVar1,&local_40);
    *param_1 = (float)local_58;
    param_1[1] = (float)dStack_50;
    param_1[2] = (float)local_48;
    param_1[3] = (float)local_40;
    param_1[4] = (float)dStack_38;
    param_1[5] = (float)local_30;
  }
  uVar1 = 1;
LAB_1468d59a9:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d5aee FUN_1468d5aee body=31 status=ok
// SIG undefined FUN_1468d5aee(void)

undefined1
FUN_1468d5aee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1468d5cd2(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1468d5b22 FUN_1468d5b22 body=267 status=ok
// SIG undefined FUN_1468d5b22(void)

void FUN_1468d5b22(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d5bfd;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d5bfd:
  FUN_1468d5d30(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d5c32 FUN_1468d5c32 body=59 status=ok
// SIG undefined FUN_1468d5c32(void)

undefined8 FUN_1468d5c32(longlong *param_1)

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



// FUNCTION 1468d5cd2 FUN_1468d5cd2 body=92 status=ok
// SIG undefined FUN_1468d5cd2(void)

byte FUN_1468d5cd2(double *param_1,double *param_2)

{
  byte bVar1;
  
  if ((((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) || (param_1[1] != param_2[1]))
       || ((NAN(param_1[1]) || NAN(param_2[1]) || (param_1[2] != param_2[2])))) ||
      ((NAN(param_1[2]) || NAN(param_2[2]) ||
       ((param_1[3] != param_2[3] || (NAN(param_1[3]) || NAN(param_2[3]))))))) ||
     ((param_1[4] != param_2[4] || (NAN(param_1[4]) || NAN(param_2[4]))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(param_2[5] == param_1[5]) & 1;
  }
  return bVar1;
}



// FUNCTION 1468d5d30 FUN_1468d5d30 body=96 status=ok
// SIG undefined FUN_1468d5d30(void)

void FUN_1468d5d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d5d90(param_1,param_2,param_3,DAT_14c892de4,DAT_14c892dec,DAT_14c892de8);
  return;
}



// FUNCTION 1468d5d90 FUN_1468d5d90 body=261 status=ok
// SIG undefined FUN_1468d5d90(void)

undefined8
FUN_1468d5d90(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_4 || param_2 == param_5) {
    uVar1 = FUN_14480c34d(param_3,param_1);
    FUN_14480c34d(uVar1,param_1 + 3);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d5ddd;
    }
    local_30 = DAT_14c846338;
    local_38 = DAT_14c846330;
    local_2c = 0;
    local_24 = 1.0;
    uVar1 = FUN_1447712aa(param_3,&local_38);
    FUN_1447712aa(uVar1,&local_2c);
    *param_1 = (double)(float)local_38;
    param_1[1] = (double)local_38._4_4_;
    param_1[2] = (double)local_30;
    param_1[3] = (double)(float)local_2c;
    param_1[4] = (double)local_2c._4_4_;
    param_1[5] = (double)local_24;
  }
  uVar1 = 1;
LAB_1468d5ddd:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d5f2e FUN_1468d5f2e body=267 status=ok
// SIG undefined FUN_1468d5f2e(void)

void FUN_1468d5f2e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d6009;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d6009:
  FUN_1468d60e0(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d603e FUN_1468d603e body=59 status=ok
// SIG undefined FUN_1468d603e(void)

undefined8 FUN_1468d603e(longlong *param_1)

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



// FUNCTION 1468d60e0 FUN_1468d60e0 body=96 status=ok
// SIG undefined FUN_1468d60e0(void)

void FUN_1468d60e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d6140(param_1,param_2,param_3,DAT_14c892c10,DAT_14c892df0,DAT_14c892df4);
  return;
}



// FUNCTION 1468d6140 FUN_1468d6140 body=161 status=ok
// SIG undefined FUN_1468d6140(void)

undefined8
FUN_1468d6140(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_5) {
LAB_1468d619b:
    FUN_1468d61e2(param_3,param_1);
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d619b;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d6173;
    }
    FUN_1468d6249(param_3,&local_38);
    *param_1 = (float)local_38;
    param_1[1] = (float)local_30;
    param_1[2] = (float)local_28;
    param_1[3] = (float)local_20;
  }
  uVar1 = 1;
LAB_1468d6173:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d61e2 FUN_1468d61e2 body=103 status=ok
// SIG undefined FUN_1468d61e2(void)

undefined8 FUN_1468d61e2(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  plVar2 = (longlong *)FUN_1447712aa();
  puVar3 = (undefined4 *)(param_2 + 0xc);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,puVar3,4);
    }
    else {
      FUN_14572512c(plVar2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  return param_1;
}



// FUNCTION 1468d6249 FUN_1468d6249 body=239 status=ok
// SIG undefined FUN_1468d6249(void)

longlong * FUN_1468d6249(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14480c34d();
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    *(double *)(param_2 + 0x18) = (double)local_1c;
  }
  else {
    puVar4 = (undefined8 *)(param_2 + 0x18);
    puVar2 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar4,8);
      }
      else {
        thunk_FUN_146821949(param_1,puVar4);
      }
    }
    else {
      *puVar4 = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d63d0 FUN_1468d63d0 body=267 status=ok
// SIG undefined FUN_1468d63d0(void)

void FUN_1468d63d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d64ab;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d64ab:
  FUN_1468d6582(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d64e0 FUN_1468d64e0 body=59 status=ok
// SIG undefined FUN_1468d64e0(void)

undefined8 FUN_1468d64e0(longlong *param_1)

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



// FUNCTION 1468d6582 FUN_1468d6582 body=96 status=ok
// SIG undefined FUN_1468d6582(void)

void FUN_1468d6582(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468d65e2(param_1,param_2,param_3,DAT_14c892c10,DAT_14c892df4,DAT_14c892df0);
  return;
}



// FUNCTION 1468d65e2 FUN_1468d65e2 body=145 status=ok
// SIG undefined FUN_1468d65e2(void)

undefined8
FUN_1468d65e2(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    FUN_1468d6249(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d660f;
    }
    FUN_1468d61e2(param_3,&local_28);
    *param_1 = (double)local_28;
    param_1[1] = (double)local_24;
    param_1[2] = (double)local_20;
    param_1[3] = (double)local_1c;
  }
  uVar1 = 1;
LAB_1468d660f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d66d0 FUN_1468d66d0 body=59 status=ok
// SIG undefined FUN_1468d66d0(void)

undefined8 FUN_1468d66d0(longlong *param_1)

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



// FUNCTION 1468d67ea FUN_1468d67ea body=59 status=ok
// SIG undefined FUN_1468d67ea(void)

undefined8 FUN_1468d67ea(longlong *param_1)

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



// FUNCTION 1468d690c FUN_1468d690c body=59 status=ok
// SIG undefined FUN_1468d690c(void)

undefined8 FUN_1468d690c(longlong *param_1)

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



// FUNCTION 1468d6a3e FUN_1468d6a3e body=59 status=ok
// SIG undefined FUN_1468d6a3e(void)

undefined8 FUN_1468d6a3e(longlong *param_1)

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



// FUNCTION 1468d6b34 FUN_1468d6b34 body=68 status=ok
// SIG undefined FUN_1468d6b34(void)

undefined8 FUN_1468d6b34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa0);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1468d6ba0 FUN_1468d6ba0 body=59 status=ok
// SIG undefined FUN_1468d6ba0(void)

undefined8 FUN_1468d6ba0(longlong *param_1)

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



// FUNCTION 1468d6cc2 FUN_1468d6cc2 body=59 status=ok
// SIG undefined FUN_1468d6cc2(void)

undefined8 FUN_1468d6cc2(longlong *param_1)

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



// FUNCTION 1468d6d76 FUN_1468d6d76 body=22 status=ok
// SIG undefined FUN_1468d6d76(void)

undefined1 FUN_1468d6d76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1402ac1b3(param_2,param_3);
  return 1;
}



// FUNCTION 1468d6d9e FUN_1468d6d9e body=234 status=ok
// SIG undefined FUN_1468d6d9e(void)

undefined4
FUN_1468d6d9e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    FUN_146812252(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 2) == 0) {
    local_68 = 0;
    uStack_60 = 0;
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = FUN_146812252(param_3,param_2,&local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d6fea FUN_1468d6fea body=267 status=ok
// SIG undefined FUN_1468d6fea(void)

void FUN_1468d6fea(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d70c5;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d70c5:
  FUN_1468d71a8(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d70fa FUN_1468d70fa body=70 status=ok
// SIG undefined FUN_1468d70fa(void)

void FUN_1468d70fa(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1468d7378(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d71a8 FUN_1468d71a8 body=104 status=ok
// SIG undefined FUN_1468d71a8(void)

undefined8 FUN_1468d71a8(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892c5c == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1468d7210(param_1,param_2,param_3,(ulonglong)DAT_14c892c5c,DAT_14c892c80,
                          DAT_14c892c84);
  }
  return uVar1;
}



// FUNCTION 1468d7210 FUN_1468d7210 body=359 status=ok
// SIG undefined FUN_1468d7210(void)

undefined8
FUN_1468d7210(float *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == param_5) {
LAB_1468d723e:
    FUN_140a4aa2c(param_3,param_1);
    FUN_1447712aa(param_3,param_1 + 4);
    FUN_1447712aa(param_3,param_1 + 8);
    uVar1 = 1;
    if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
      param_1[7] = 0.0;
      param_1[0xb] = 0.0;
    }
  }
  else {
    if (param_2 == param_4) {
      if (*(int *)(param_3 + 0x44) < 0x3ec) goto LAB_1468d723e;
    }
    else if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468d7271;
    }
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3ff00000;
    local_68 = 0.0;
    dStack_60 = 0.0;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_48 = 0;
    uStack_44 = 0x3ff00000;
    uStack_40 = 0;
    uStack_3c = 0x3ff00000;
    local_38 = 1.0;
    dStack_30 = 0.0;
    FUN_1400f4f7e(param_3,&local_88);
    FUN_14480c34d(param_3,&local_68);
    FUN_14480c34d(param_3,&local_48);
    if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
      dStack_50 = 0.0;
      dStack_30 = 0.0;
    }
    *param_1 = (float)local_88;
    param_1[1] = (float)dStack_80;
    param_1[2] = (float)(double)CONCAT44(uStack_74,local_78);
    param_1[3] = (float)(double)CONCAT44(uStack_6c,uStack_70);
    param_1[4] = (float)local_68;
    param_1[5] = (float)dStack_60;
    param_1[6] = (float)local_58;
    param_1[7] = (float)dStack_50;
    param_1[8] = (float)(double)CONCAT44(uStack_44,local_48);
    param_1[9] = (float)(double)CONCAT44(uStack_3c,uStack_40);
    param_1[10] = (float)local_38;
    param_1[0xb] = (float)dStack_30;
    uVar1 = 1;
  }
LAB_1468d7271:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d7378 FUN_1468d7378 body=202 status=ok
// SIG undefined FUN_1468d7378(void)

uint FUN_1468d7378(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = SUB168(*(undefined1 (*) [16])(param_1 + 2),0);
  uStack_40 = extractps(*(undefined1 (*) [16])(param_1 + 2),2);
  uVar1 = FUN_1448eb174(&local_48,0xc,0);
  local_48 = *param_1;
  uStack_40 = param_1[1];
  iVar2 = FUN_1448eb174(&local_48,0x10,0);
  uVar1 = iVar2 + -0x61c88647 + (uVar1 >> 2) + uVar1 * 0x40 ^ uVar1;
  local_48 = SUB168(*(undefined1 (*) [16])(param_1 + 4),0);
  uStack_40 = extractps(*(undefined1 (*) [16])(param_1 + 4),2);
  iVar2 = FUN_1448eb174(&local_48,0xc,0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2 + -0x61c88647 + (uVar1 >> 2) + uVar1 * 0x40 ^ uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d74a8 FUN_1468d74a8 body=267 status=ok
// SIG undefined FUN_1468d74a8(void)

void FUN_1468d74a8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468d7583;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468d7583:
  FUN_1468d765a(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d75b8 FUN_1468d75b8 body=70 status=ok
// SIG undefined FUN_1468d75b8(void)

void FUN_1468d75b8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1468d7805(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d765a FUN_1468d765a body=104 status=ok
// SIG undefined FUN_1468d765a(void)

undefined8 FUN_1468d765a(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892c5c == param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1468d76c2(param_1,param_2,param_3,(ulonglong)DAT_14c892c5c,DAT_14c892c84,
                          DAT_14c892c80);
  }
  return uVar1;
}



// FUNCTION 1468d76c2 FUN_1468d76c2 body=322 status=ok
// SIG undefined FUN_1468d76c2(void)

undefined8
FUN_1468d76c2(double *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_1400f4f7e(param_3,param_1);
    FUN_14480c34d(param_3,param_1 + 4);
    FUN_14480c34d(param_3,param_1 + 8);
    uVar2 = 1;
    if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
      param_1[7] = 0.0;
      param_1[0xb] = 0.0;
    }
  }
  else if (param_2 == param_6) {
    local_58 = 0;
    uStack_50 = 0x3f80000000000000;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 1.0;
    fStack_34 = 1.0;
    fStack_30 = 1.0;
    fStack_2c = 0.0;
    FUN_140a4aa2c(param_3,&local_58);
    FUN_1447712aa(param_3,&local_48);
    FUN_1447712aa(param_3,&local_38);
    if ((*(byte *)(param_3 + 0x28) & 1) != 0) {
      uStack_40 = uStack_40 & 0xffffffff;
      fStack_2c = 0.0;
    }
    *param_1 = (double)(float)local_58;
    param_1[1] = (double)(float)((ulonglong)local_58 >> 0x20);
    param_1[2] = (double)(float)uStack_50;
    param_1[3] = (double)(float)((ulonglong)uStack_50 >> 0x20);
    param_1[4] = (double)(float)local_48;
    param_1[5] = (double)(float)((ulonglong)local_48 >> 0x20);
    param_1[6] = (double)(float)uStack_40;
    param_1[7] = (double)(float)(uStack_40 >> 0x20);
    auVar1._8_4_ = SUB84((double)fStack_34,0);
    auVar1._0_8_ = (double)local_38;
    auVar1._12_4_ = (int)((ulonglong)(double)fStack_34 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 8) = auVar1;
    param_1[10] = (double)fStack_30;
    param_1[0xb] = (double)fStack_2c;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d7805 FUN_1468d7805 body=216 status=ok
// SIG undefined FUN_1468d7805(void)

uint FUN_1468d7805(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_1[4];
  uStack_50 = param_1[5];
  local_48 = param_1[6];
  uVar1 = FUN_1448eb174(&local_58,0x18,0);
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = *(undefined4 *)(param_1 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
  iVar2 = FUN_1448eb174(&local_58,0x20,0);
  uVar1 = iVar2 + -0x61c88647 + (uVar1 >> 2) + uVar1 * 0x40 ^ uVar1;
  local_58 = param_1[8];
  uStack_50 = param_1[9];
  local_48 = param_1[10];
  iVar2 = FUN_1448eb174(&local_58,0x18,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar2 + -0x61c88647 + (uVar1 >> 2) + uVar1 * 0x40 ^ uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d794a FUN_1468d794a body=59 status=ok
// SIG undefined FUN_1468d794a(void)

undefined8 FUN_1468d794a(longlong *param_1)

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



// FUNCTION 1468d7a30 FUN_1468d7a30 body=229 status=ok
// SIG undefined FUN_1468d7a30(void)

undefined4
FUN_1468d7a30(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_60 = param_7;
    local_68 = param_6;
    FUN_14680ed8e(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  local_48 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_4c & 2) == 0) {
    local_48 = 0;
  }
  local_60 = param_7;
  local_68 = param_6;
  uVar1 = FUN_14680ed8e(param_3,param_2,&local_48,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d7b16 FUN_1468d7b16 body=39 status=ok
// SIG undefined FUN_1468d7b16(void)

void FUN_1468d7b16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14680ef7c(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1468d7b52 FUN_1468d7b52 body=82 status=ok
// SIG undefined FUN_1468d7b52(void)

int FUN_1468d7b52(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d7c6c FUN_1468d7c6c body=229 status=ok
// SIG undefined FUN_1468d7c6c(void)

undefined4
FUN_1468d7c6c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_60 = param_7;
    local_68 = param_6;
    FUN_14681ea12(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  local_48 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_4c & 2) == 0) {
    local_48 = 0;
  }
  local_60 = param_7;
  local_68 = param_6;
  uVar1 = FUN_14681ea12(param_3,param_2,&local_48,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d7d52 FUN_1468d7d52 body=39 status=ok
// SIG undefined FUN_1468d7d52(void)

void FUN_1468d7d52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14681edd0(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1468d7d8e FUN_1468d7d8e body=70 status=ok
// SIG undefined FUN_1468d7d8e(void)

void FUN_1468d7d8e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14681f449(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d7e8c FUN_1468d7e8c body=64 status=ok
// SIG undefined FUN_1468d7e8c(void)

undefined4 FUN_1468d7e8c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d7fbc FUN_1468d7fbc body=72 status=ok
// SIG undefined FUN_1468d7fbc(void)

void FUN_1468d7fbc(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d80ee FUN_1468d80ee body=59 status=ok
// SIG undefined FUN_1468d80ee(void)

undefined8 FUN_1468d80ee(longlong *param_1)

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



// FUNCTION 1468d8204 FUN_1468d8204 body=59 status=ok
// SIG undefined FUN_1468d8204(void)

undefined8 FUN_1468d8204(longlong *param_1)

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



// FUNCTION 1468d8364 FUN_1468d8364 body=59 status=ok
// SIG undefined FUN_1468d8364(void)

undefined8 FUN_1468d8364(longlong *param_1)

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



// FUNCTION 1468d8430 FUN_1468d8430 body=278 status=ok
// SIG undefined FUN_1468d8430(void)

undefined4
FUN_1468d8430(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    FUN_1468fc1fc(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 2) == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = FUN_1468fc1fc(param_3,param_2,&local_78,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if (((local_7c & 4) != 0) && (local_68 != 0)) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d8560 FUN_1468d8560 body=247 status=ok
// SIG undefined FUN_1468d8560(void)

void FUN_1468d8560(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 8))(param_1,local_30);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
  iVar8 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(param_2 + 3) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)param_2[2];
    iVar8 = *(int *)(param_2 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar8,puVar7);
  FUN_144a78877(uVar5,uVar6);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d8662 FUN_1468d8662 body=38 status=ok
// SIG undefined FUN_1468d8662(void)

void FUN_1468d8662(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1468d870c FUN_1468d870c body=31 status=ok
// SIG undefined FUN_1468d870c(void)

undefined1
FUN_1468d870c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144a7afa6(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1468d872c FUN_1468d872c body=278 status=ok
// SIG undefined FUN_1468d872c(void)

undefined4
FUN_1468d872c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    FUN_1468fc1fc(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 2) == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = FUN_1468fc1fc(param_3,param_2,&local_78,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if (((local_7c & 4) != 0) && (local_68 != 0)) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d885c FUN_1468d885c body=247 status=ok
// SIG undefined FUN_1468d885c(void)

void FUN_1468d885c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 8))(param_1,local_30);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
  iVar8 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(param_2 + 3) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)param_2[2];
    iVar8 = *(int *)(param_2 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar8,puVar7);
  FUN_144a78877(uVar5,uVar6);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468d895e FUN_1468d895e body=38 status=ok
// SIG undefined FUN_1468d895e(void)

void FUN_1468d895e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1468d8a2a FUN_1468d8a2a body=134 status=ok
// SIG undefined FUN_1468d8a2a(void)

undefined8
FUN_1468d8a2a(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 8))(param_1,local_38);
    FUN_1468c78c2(param_3,param_2,param_6);
    (**(code **)(*param_1 + 8))(param_1,local_38);
  }
  else {
    FUN_1468c78c2(param_3,param_2,param_6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d8ad2 FUN_1468d8ad2 body=109 status=ok
// SIG undefined FUN_1468d8ad2(void)

int FUN_1468d8ad2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d8c0c FUN_1468d8c0c body=134 status=ok
// SIG undefined FUN_1468d8c0c(void)

undefined8
FUN_1468d8c0c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 8))(param_1,local_38);
    FUN_1468c7c20(param_3,param_2,param_6);
    (**(code **)(*param_1 + 8))(param_1,local_38);
  }
  else {
    FUN_1468c7c20(param_3,param_2,param_6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d8cb4 FUN_1468d8cb4 body=70 status=ok
// SIG undefined FUN_1468d8cb4(void)

void FUN_1468d8cb4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1415cecbb(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d8da2 FUN_1468d8da2 body=48 status=ok
// SIG undefined FUN_1468d8da2(void)

void FUN_1468d8da2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468d8dec FUN_1468d8dec body=54 status=ok
// SIG undefined FUN_1468d8dec(void)

undefined1 FUN_1468d8dec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1468d8ee6(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1468d8e4a FUN_1468d8e4a body=59 status=ok
// SIG undefined FUN_1468d8e4a(void)

undefined8 FUN_1468d8e4a(longlong *param_1)

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



// FUNCTION 1468d8ee6 FUN_1468d8ee6 body=112 status=ok
// SIG undefined FUN_1468d8ee6(void)

longlong * FUN_1468d8ee6(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar3 = param_2[7];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(int *)(param_1 + 7) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 1468d8f58 FUN_1468d8f58 body=52 status=ok
// SIG undefined FUN_1468d8f58(void)

void FUN_1468d8f58(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1468d8fd4 FUN_1468d8fd4 body=59 status=ok
// SIG undefined FUN_1468d8fd4(void)

undefined8 FUN_1468d8fd4(longlong *param_1)

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



// FUNCTION 1468d9090 FUN_1468d9090 body=266 status=ok
// SIG undefined FUN_1468d9090(void)

undefined4
FUN_1468d9090(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    FUN_14686d3dc(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  (**(code **)(*param_1 + 8))(0,local_78);
  if ((local_6c & 2) == 0) {
    FUN_144a63cba(&local_68);
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = FUN_14686d3dc(param_3,param_2,&local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    FUN_144a73aae(&local_68);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468d91b0 FUN_1468d91b0 body=64 status=ok
// SIG undefined FUN_1468d91b0(void)

undefined4 FUN_1468d91b0(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d91fc FUN_1468d91fc body=32 status=ok
// SIG undefined FUN_1468d91fc(void)

void FUN_1468d91fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_144a73aae(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1468d92a2 FUN_1468d92a2 body=95 status=ok
// SIG undefined FUN_1468d92a2(void)

ulonglong FUN_1468d92a2(longlong *param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  iVar1 = FUN_144aff4b2(param_2);
  if (iVar1 == 0) {
    uVar2 = (ulonglong)*param_2;
  }
  else {
    uVar2 = FUN_144a78877(*param_2,iVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1468d93af FUN_1468d93af body=554 status=ok
// SIG undefined FUN_1468d93af(void)

void FUN_1468d93af(longlong param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar8 = &local_348;
    do {
      piVar2 = (int *)*plVar8;
      piVar9 = (int *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar2) >> 2);
      piVar7 = piVar2;
      piVar12 = piVar9;
      if (iVar11 != 0) {
LAB_1468d9470:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          iVar4 = piVar2[uVar5];
          piVar2[uVar5] = *piVar2;
          *piVar2 = iVar4;
          piVar6 = piVar9 + 1;
          piVar3 = piVar2;
          do {
            piVar1 = piVar3 + 1;
            piVar10 = piVar3 + 1;
            do {
              piVar3 = piVar10;
              piVar13 = piVar1;
              if (piVar9 < piVar3) break;
              piVar1 = piVar13 + 1;
              piVar10 = piVar3 + 1;
            } while (*piVar2 <= *piVar3);
            piVar1 = piVar6 + -2;
            do {
              piVar10 = piVar6;
              piVar14 = piVar1;
              piVar6 = piVar10 + -1;
              if (piVar6 <= piVar2) break;
              piVar1 = piVar14 + -1;
            } while (*piVar6 <= *piVar2);
            if (piVar6 < piVar3) goto LAB_1468d94e6;
            iVar4 = *piVar3;
            *piVar3 = *piVar6;
            *piVar6 = iVar4;
          } while( true );
        }
        if (piVar2 < piVar9) {
          do {
            piVar7 = piVar2;
            if (piVar2 + 1 <= piVar9) {
              iVar11 = *piVar2;
              piVar12 = piVar2 + 1;
              do {
                if (*piVar12 < iVar11) {
                  piVar7 = piVar12;
                  iVar11 = *piVar12;
                }
                piVar12 = piVar12 + 1;
              } while (piVar12 <= piVar9);
            }
            iVar11 = *piVar7;
            *piVar7 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar2 < piVar9);
        }
        goto LAB_1468d95b8;
      }
LAB_1468d95cd:
      FUN_1468d95da(piVar2);
LAB_1468d95b8:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1468d94e6:
  iVar4 = *piVar2;
  *piVar2 = *piVar6;
  *piVar6 = iVar4;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar14 - (longlong)piVar7 < (longlong)piVar12 - (longlong)piVar13) {
    if (piVar3 < piVar9) {
      *plVar8 = (longlong)piVar3;
      plVar8[1] = (longlong)piVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar13 = piVar2;
    if (piVar6 <= piVar2 + 1) goto LAB_1468d95b8;
  }
  else {
    if (piVar2 + 1 < piVar6) {
      *plVar8 = (longlong)piVar2;
      plVar8[1] = (longlong)piVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar2 = piVar3;
    piVar10 = piVar9;
    piVar14 = piVar9;
    if (piVar9 <= piVar3) goto LAB_1468d95b8;
  }
  iVar4 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar13) >> 2);
  piVar7 = piVar13;
  piVar9 = piVar10;
  piVar12 = piVar14;
  if (iVar11 == 0) goto LAB_1468d95cd;
  goto LAB_1468d9470;
}



// FUNCTION 1468d95da FUN_1468d95da body=278 status=ok
// SIG undefined FUN_1468d95da(void)

void FUN_1468d95da(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x0001468d95fb:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && ((int)param_1[iVar6] <= (int)param_1[iVar5])) {
          iVar5 = iVar6;
        }
        iVar6 = param_1[iVar2];
        if ((int)param_1[iVar5] < iVar6) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar6;
          iVar2 = iVar5;
          goto joined_r0x0001468d95fb;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) && ((int)param_1[iVar2] <= (int)param_1[iVar5]))
            {
              iVar6 = iVar2;
            }
            iVar2 = param_1[iVar7];
            if (iVar2 <= (int)param_1[iVar6]) break;
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = iVar2;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 1468d96f0 FUN_1468d96f0 body=178 status=ok
// SIG undefined FUN_1468d96f0(void)

undefined8 * FUN_1468d96f0(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_1446f4b16();
  puVar1[1] = &DAT_14c951c78;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e98410;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a6280(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d97a4 FUN_1468d97a4 body=140 status=ok
// SIG undefined FUN_1468d97a4(void)

void FUN_1468d97a4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_144a817a2();
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_18 = param_1;
      FUN_1468eaa82(lVar1 + 800);
    }
  }
  FUN_14689b13c(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d9831 FUN_1468d9831 body=478 status=ok
// SIG undefined FUN_1468d9831(void)

ulonglong FUN_1468d9831(longlong *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  DWORD dwTlsIndex;
  byte bVar2;
  char cVar3;
  uint uVar4;
  LPVOID lpTlsValue;
  LPVOID pvVar5;
  LPVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  
  dwTlsIndex = DAT_14c75ecdc;
  lpTlsValue = TlsGetValue(DAT_14c75ecdc);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0xd0,0x10);
    *(undefined8 *)((longlong)lpTlsValue + 0xc0) = 0;
    *(undefined8 *)((longlong)lpTlsValue + 200) = 0x800000000;
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  pvVar5 = *(LPVOID *)((longlong)lpTlsValue + 0xc0);
  pvVar6 = pvVar5;
  if (pvVar5 == (LPVOID)0x0) {
    pvVar6 = lpTlsValue;
  }
  iVar1 = *(int *)((longlong)lpTlsValue + 200);
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar9 = 0;
    do {
      if (((*(longlong **)((longlong)pvVar6 + lVar9) == param_1) &&
          (*(longlong *)((longlong)pvVar6 + lVar9 + 8) == param_2)) &&
         (*(uint *)((longlong)pvVar6 + lVar9 + 0x10) == param_3)) {
        uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        goto LAB_1468d99f8;
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar10 * 0x18 != lVar9);
  }
  *(uint *)((longlong)lpTlsValue + 200) = iVar1 + 1U;
  if (*(uint *)((longlong)lpTlsValue + 0xcc) < iVar1 + 1U) {
    FUN_14281a786(lpTlsValue,iVar1);
    pvVar5 = *(LPVOID *)((longlong)lpTlsValue + 0xc0);
  }
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = lpTlsValue;
  }
  *(longlong **)((longlong)pvVar5 + lVar10 * 0x18) = param_1;
  *(longlong *)((longlong)pvVar5 + lVar10 * 0x18 + 8) = param_2;
  *(uint *)((longlong)pvVar5 + lVar10 * 0x18 + 0x10) = param_3;
  plVar11 = *(longlong **)(param_1[2] + 0x70);
  if (plVar11 != (longlong *)0x0) {
    bVar12 = true;
    do {
      if ((param_3 >> 0xb & 1) == 0) {
        bVar2 = FUN_1468dc14e(plVar11);
      }
      else {
        bVar2 = *(byte *)(plVar11 + 7) & 1;
      }
      if (((bVar2 != 0) && (0 < (int)plVar11[6])) && (bVar12)) {
        lVar10 = 1;
        do {
          lVar7 = (longlong)*(int *)((longlong)plVar11 + 0x34) * (lVar10 + -1);
          lVar9 = param_2 + *(int *)((longlong)plVar11 + 0x44) + lVar7;
          if (param_2 == 0) {
            lVar9 = 0;
          }
          cVar3 = (**(code **)(*plVar11 + 200))
                            (plVar11,(longlong)param_1 + lVar7 + *(int *)((longlong)plVar11 + 0x44),
                             lVar9,param_3);
          bVar12 = cVar3 != '\0';
        } while ((lVar10 < (int)plVar11[6]) && (lVar10 = lVar10 + 1, bVar12));
      }
      plVar11 = (longlong *)plVar11[9];
    } while ((plVar11 != (longlong *)0x0) && (bVar12));
    if (!bVar12) {
      uVar8 = 0;
      goto LAB_1468d99ea;
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,param_2);
  uVar8 = (ulonglong)uVar4;
LAB_1468d99ea:
  *(int *)((longlong)lpTlsValue + 200) = *(int *)((longlong)lpTlsValue + 200) + -1;
  FUN_14281a980(lpTlsValue);
LAB_1468d99f8:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1468d9a10 FUN_1468d9a10 body=64 status=ok
// SIG undefined FUN_1468d9a10(void)

void FUN_1468d9a10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 1468d9a50 FUN_1468d9a50 body=239 status=ok
// SIG undefined FUN_1468d9a50(void)

void FUN_1468d9a50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar2 = FUN_144a817a2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_28 = param_1;
      FUN_1468eabe6(param_2 + 800,local_1c,&local_28,0);
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_144a817a2();
    lVar2 = *(longlong *)(param_1 + 0x70);
    if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_30 = param_1;
      FUN_1468eaa82(lVar2 + 800);
    }
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x70) = param_2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d9b40 FUN_1468d9b40 body=312 status=ok
// SIG undefined FUN_1468d9b40(void)

undefined8 * FUN_1468d9b40(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_298 [40];
  longlong local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 *local_258;
  undefined1 *local_250;
  ulonglong *local_248;
  char local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_258 = local_238;
  local_240 = '\0';
  local_248 = &local_38;
  local_268 = *param_2;
  local_250 = local_258;
  FUN_14005eb5c(&local_268,&local_258);
  uVar2 = FUN_14280c760(&local_258,L".Preview");
  local_270 = param_2[1];
  FUN_14005eb5c(&local_270,uVar2);
  uVar2 = FUN_14280c760(uVar2,L"\'Saturday");
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_1449668a2(uVar2,*param_3,iVar1);
  FUN_14280c760(uVar2,L"\'Saturday");
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_268,local_258,(ulonglong)((longlong)local_250 - (longlong)local_258) >> 1);
  if (&local_268 == param_1) {
    if (local_268 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = (undefined4)local_268;
    *(undefined4 *)((longlong)param_1 + 4) = local_268._4_4_;
    *(undefined4 *)(param_1 + 1) = uStack_260;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_25c;
  }
  if (local_240 == '\x01') {
    FUN_1400020a8(local_258);
  }
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d9c7a FUN_1468d9c7a body=583 status=ok
// SIG undefined FUN_1468d9c7a(void)

longlong *
FUN_1468d9c7a(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_5 & 4) == 0) {
LAB_1468d9cac:
    if ((param_3 != 0 & (byte)(param_5 >> 0xd) & 1) != 0) {
      param_4 = FUN_144a79778(param_3);
      goto LAB_1468d9cc9;
    }
LAB_1468d9cd1:
    lVar2 = *param_2;
    if (lVar2 == 0) {
      FUN_140056680(&local_48,&DAT_149e01fe8);
      goto LAB_1468d9d45;
    }
    param_3 = 0;
  }
  else {
    if (param_3 != 0 && param_4 == 0) {
      param_4 = FUN_144a79778(param_3);
    }
    if (param_4 == 0) {
      param_4 = 0;
    }
    else {
      cVar1 = FUN_144b00bde(*param_2,param_4);
      if ((cVar1 == '\0') &&
         ((param_4 = *(longlong *)(param_4 + 0x20), param_4 == 0 ||
          (cVar1 = FUN_144b00bde(*param_2,param_4), cVar1 == '\0')))) goto LAB_1468d9cac;
    }
    if ((param_3 == 0) || (cVar1 = FUN_144b00bde(*param_2,param_3), cVar1 == '\0')) {
LAB_1468d9cc9:
      param_3 = param_4;
      if (param_3 == 0) goto LAB_1468d9cd1;
    }
    lVar2 = *param_2;
  }
  uStack_40 = 0;
  local_48 = (undefined2 *)0x0;
  FUN_1401031ac(lVar2,param_3);
LAB_1468d9d45:
  if (*param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*param_2 + 0x10);
  }
  FUN_1414d7078(uVar3,&local_58);
  puVar4 = local_48;
  if ((int)uStack_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_68,puVar4);
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  FUN_1468d9b40(param_1,&local_78,&local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((param_5 & 1) != 0) {
    FUN_1468d9ec2(param_1,&local_88);
    puVar4 = local_88;
    if (local_80 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,L"\"%s\"",puVar4);
    if (&local_68 == param_1) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_60;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_60._4_4_;
      local_60 = 0;
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468d9ec2 FUN_1468d9ec2 body=161 status=ok
// SIG undefined FUN_1468d9ec2(void)

undefined8 FUN_1468d9ec2(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_1;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_1467ad05c(&local_38,param_2);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468d9f64 FUN_1468d9f64 body=846 status=ok
// SIG undefined FUN_1468d9f64(void)

void FUN_1468d9f64(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5,longlong param_6,uint param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 **_Src;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined2 *local_68 [2];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = (undefined2 *)0x0;
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
      goto LAB_1468d9fdb;
    }
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      _Src = (undefined2 **)(param_3 + *(int *)((longlong)param_1 + 0x44));
      puVar1 = local_38;
      if (_Src != &local_38) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_38,_Src,(int)param_1[6]);
          puVar1 = local_38;
        }
        else {
          memcpy(&local_38,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          puVar1 = local_38;
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_38);
      puVar1 = local_38;
    }
  }
  else {
LAB_1468d9fdb:
    (**(code **)(*param_1 + 0x218))(param_1,&local_48,param_3);
    puVar1 = local_48;
    if (DAT_14c950c29 == '\x01') {
      if (local_48 == (undefined2 *)0x0) {
        puVar1 = (undefined2 *)0x0;
      }
      else {
        FUN_1456cec3c(local_48);
        puVar1 = local_48;
      }
    }
  }
  local_38 = puVar1;
  if (local_38 == (undefined2 *)0x0) {
    FUN_1400020e8(param_2,&DAT_149e01fe8,4);
    goto LAB_1468da11a;
  }
  if ((param_7 >> 0x15 & 1) == 0) {
    if (((param_6 == 0) || ((*(uint *)(param_6 + 8) & 0x10) != 0)) ||
       (cVar2 = FUN_14008df84(local_38), puVar1 = local_38, cVar2 == '\0')) {
LAB_1468da26f:
      local_58 = local_38;
      if ((DAT_14c950c29 == '\x01') && (local_38 != (undefined2 *)0x0)) {
        FUN_1456cec3c(local_38);
      }
      local_78 = param_7;
      FUN_1468d9c7a(&local_48,&local_58,param_6,param_8);
    }
    else {
      uVar3 = FUN_144b00a7c(param_6);
      cVar2 = FUN_144b00bde(puVar1,uVar3);
      puVar1 = local_38;
      if (cVar2 == '\0') goto LAB_1468da26f;
      if ((param_7 & 1) != 0) {
        if (local_38 == (undefined2 *)0x0) {
          FUN_140056680(&local_48,&DAT_149e01fe8);
        }
        else {
          local_48 = *(undefined2 **)(local_38 + 0xc);
          FUN_1400021e4(&local_48,local_68);
          FUN_1467ad05c(local_68,&local_58);
          puVar5 = local_58;
          if (local_50 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          FUN_140002266(&local_48,L"\"%s\"",puVar5);
        }
        iVar4 = local_40 + -1;
        if (local_40 == 0) {
          iVar4 = 0;
        }
        FUN_1400020e8(param_2,local_48,iVar4);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar1 == (undefined2 *)0x0) goto LAB_1468da11a;
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1468da110;
      }
      if (local_38 == (undefined2 *)0x0) {
        local_58 = (undefined2 *)0x0;
      }
      else {
        FUN_1468bee0d(&local_58);
      }
      FUN_1400021e4(&local_58,&local_48);
    }
    iVar4 = local_40 + -1;
    if (local_40 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar4);
    local_68[0] = local_48;
  }
  else {
    FUN_144750a86(local_38,&local_48,0,0);
    iVar4 = local_40 + -1;
    if (local_40 == 0) {
      iVar4 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar4);
    local_68[0] = local_48;
  }
LAB_1468da110:
  if (local_68[0] != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1468da11a:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468da2e4 FUN_1468da2e4 body=346 status=ok
// SIG undefined FUN_1468da2e4(void)

longlong FUN_1468da2e4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_31;
  local_30 = FUN_141073f72;
  lVar3 = FUN_144a773aa(&local_30,&DAT_14c75ec34);
  if ((*(longlong *)(lVar3 + 0x58) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x58) + 0x30), lVar3 == 0)) {
    lVar3 = DAT_14c951640;
  }
  if ((param_2 == 0) || (plVar1 = *(longlong **)(param_2 + 0x10), plVar1 == (longlong *)0x0)) {
LAB_1468da398:
    if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xd4) & 1) == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_50 = 0;
      local_58 = 0;
      param_2 = FUN_140584627(lVar3,*(longlong *)(param_1 + 0x70),0,0);
    }
    else {
      param_2 = 0;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar5 = param_2;
    if ((lVar2 == 0) ||
       (((int)plVar1[7] < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(plVar1[6] + (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)))) {
      lVar4 = (**(code **)(*plVar1 + 0x358))();
      lVar2 = *(longlong *)(param_1 + 0x70);
      if ((lVar2 == 0) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) goto LAB_1468da398;
    }
    do {
      if ((*(uint *)(lVar5 + 8) & 0x30) != 0) {
        if (*(longlong *)(param_2 + 0x20) != lVar3) {
          local_48 = 0;
          uStack_40 = 0;
          local_50 = 0;
          local_58 = param_2;
          param_2 = FUN_140584627(lVar3,*(undefined8 *)(param_2 + 0x10),0,0);
          if (param_2 == 0) goto LAB_1468da398;
        }
        break;
      }
      plVar1 = (longlong *)(lVar5 + 0x20);
      lVar5 = *plVar1;
    } while (*plVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468da440 FUN_1468da440 body=220 status=ok
// SIG undefined FUN_1468da440(void)

undefined8
FUN_1468da440(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(*param_2 + 0x15 + (longlong)((int)param_2[1] + -1) * 0x18) = 1;
  local_38 = *param_4;
  local_30 = param_4[1];
  uVar1 = FUN_1468c826c(param_1);
  if ((char)uVar1 == '\x03') {
    lVar2 = (**(code **)(*param_1 + 0x210))(param_1,*param_3);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar2 == 0) {
        uVar1 = 3;
        goto LAB_1468da4ee;
      }
    }
    else {
      FUN_1456cec3c(lVar2);
    }
    local_40 = param_3[1];
    local_58 = *param_4;
    local_50 = param_4[1];
    local_48 = lVar2;
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x330))
                      (*(longlong **)(lVar2 + 0x10),param_2);
  }
LAB_1468da4ee:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468da51e FUN_1468da51e body=88 status=ok
// SIG undefined FUN_1468da51e(void)

undefined8 FUN_1468da51e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x210))();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001468da560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x338))
                    (*(longlong **)(lVar1 + 0x10),lVar1,param_3);
  return uVar2;
}



// FUNCTION 1468da59e FUN_1468da59e body=274 status=ok
// SIG undefined FUN_1468da59e(void)

undefined8 FUN_1468da59e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x73) == -1) {
    pwVar2 = L"UBOOL";
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    switch(uVar1) {
    case 1:
      pwVar2 = L"UBOOL8";
      break;
    case 2:
      pwVar2 = L"UBOOL16";
      break;
    default:
      if (param_1 == 0) {
        FUN_140056680(&local_28,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(param_1 + 0x20,&local_28);
      }
      puVar3 = local_28;
      if (local_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      local_38 = uVar1;
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/PropertyBool.cpp",0xe9,
                    L"Unsupported FBoolProperty %s size %d.",puVar3);
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(param_2,L"UBOOL32");
      if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    case 4:
      pwVar2 = L"UBOOL32";
      break;
    case 8:
      pwVar2 = L"UBOOL64";
    }
  }
  FUN_140056680(param_2,pwVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1468da6b1 FUN_1468da6b1 body=137 status=ok
// SIG undefined FUN_1468da6b1(void)

void FUN_1468da6b1(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144aa02de(*param_3,&local_2c);
  lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          *(int *)(param_1 + 0x44) + param_4;
  bVar2 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar1);
  if (local_2c == 0) {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73);
  }
  else {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73) | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar1 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468da73b FUN_1468da73b body=173 status=ok
// SIG undefined FUN_1468da73b(void)

void FUN_1468da73b(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(*param_3 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          param_4 + *(int *)(param_1 + 0x44);
  bVar5 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar4) & ~*(byte *)(param_1 + 0x73);
  if (local_29 != '\0') {
    bVar5 = bVar5 | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar4 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468da7e9 FUN_1468da7e9 body=138 status=ok
// SIG undefined FUN_1468da7e9(void)

void FUN_1468da7e9(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458ec23e(*param_3,&local_2a);
  lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          *(int *)(param_1 + 0x44) + param_4;
  bVar2 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar1);
  if (local_2a == 0) {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73);
  }
  else {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73) | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar1 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468da874 FUN_1468da874 body=141 status=ok
// SIG undefined FUN_1468da874(void)

void FUN_1468da874(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
  lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          *(int *)(param_1 + 0x44) + param_4;
  bVar2 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar1);
  if (local_30 == 0) {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73);
  }
  else {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73) | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar1 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468da902 FUN_1468da902 body=173 status=ok
// SIG undefined FUN_1468da902(void)

void FUN_1468da902(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(*param_3 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          param_4 + *(int *)(param_1 + 0x44);
  bVar5 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar4) & ~*(byte *)(param_1 + 0x73);
  if (local_29 != '\0') {
    bVar5 = bVar5 | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar4 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468da9b0 FUN_1468da9b0 body=138 status=ok
// SIG undefined FUN_1468da9b0(void)

void FUN_1468da9b0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144afeef0(*param_3,&local_2a);
  lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          *(int *)(param_1 + 0x44) + param_4;
  bVar2 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar1);
  if (local_2a == 0) {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73);
  }
  else {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73) | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar1 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468daa3b FUN_1468daa3b body=137 status=ok
// SIG undefined FUN_1468daa3b(void)

void FUN_1468daa3b(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144afef32(*param_3,&local_2c);
  lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          *(int *)(param_1 + 0x44) + param_4;
  bVar2 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar1);
  if (local_2c == 0) {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73);
  }
  else {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73) | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar1 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468daac5 FUN_1468daac5 body=137 status=ok
// SIG undefined FUN_1468daac5(void)

void FUN_1468daac5(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144aa04bc(*param_3,&local_30);
  lVar1 = (longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
          *(int *)(param_1 + 0x44) + param_4;
  bVar2 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + lVar1);
  if (local_30 == 0) {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73);
  }
  else {
    bVar2 = bVar2 & ~*(byte *)(param_1 + 0x73) | *(byte *)(param_1 + 0x72);
  }
  *(byte *)(lVar1 + (ulonglong)*(byte *)(param_1 + 0x71)) = bVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dab6c FUN_1468dab6c body=62 status=ok
// SIG undefined FUN_1468dab6c(void)

void FUN_1468dab6c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_14689aaf4();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1468dabe8 FUN_1468dabe8 body=64 status=ok
// SIG undefined FUN_1468dabe8(void)

void FUN_1468dabe8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 1468dac28 FUN_1468dac28 body=32 status=ok
// SIG undefined FUN_1468dac28(void)

undefined8 FUN_1468dac28(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"uint8");
  return param_2;
}



// FUNCTION 1468dac48 FUN_1468dac48 body=314 status=ok
// SIG undefined FUN_1468dac48(void)

undefined8 FUN_1468dac48(longlong param_1,uint param_2)

{
  undefined2 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong local_250;
  undefined2 *local_248;
  undefined2 *local_240;
  ulonglong *local_238;
  char local_230;
  undefined2 local_228 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  cVar2 = FUN_1468c83be();
  uVar6 = 0;
  if (cVar2 != '\0') {
    uVar5 = 0;
    if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
                    (ulonglong)(param_2 & 0x1fff) * 0xc)) {
      uVar5 = param_2 + 1;
    }
    local_250 = *(longlong *)
                 (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar5 >> 0xd) * 8) +
                 (ulonglong)(uVar5 & 0x1fff) * 0xc);
    uVar6 = CONCAT71((uint7)(uint3)((uVar5 & 0x1fff) >> 8),1);
    if (local_250 != 0) {
      local_248 = local_228;
      local_230 = '\0';
      local_238 = &local_28;
      local_240 = local_248;
      FUN_14005eb5c(&local_250,&local_248);
      *local_240 = 0;
      puVar1 = local_248;
      uVar3 = FUN_140851d9a();
      local_258 = 0;
      lVar4 = FUN_140277cc4(uVar3,puVar1,4,0);
      if (local_230 == '\x01') {
        FUN_1400020a8(local_248);
      }
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        *(longlong *)(param_1 + 0x70) = lVar4;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dad84 FUN_1468dad84 body=217 status=ok
// SIG undefined FUN_1468dad84(void)

byte FUN_1468dad84(longlong *param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
           (ulonglong)(param_2 & 0x1fff) * 0xc);
  (**(code **)(*param_1 + 0x168))(param_1,&local_48);
  bVar3 = 0;
  if (lVar1 == local_48) {
    uVar4 = 0;
    if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
                    (ulonglong)(param_2 & 0x1fff) * 0xc)) {
      uVar4 = param_2 + 1;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
             (ulonglong)(uVar4 & 0x1fff) * 0xc);
    lVar2 = param_1[0xe];
    if (lVar2 != 0) {
      param_3 = lVar1 == *(longlong *)(lVar2 + 0x18);
    }
    bVar3 = lVar1 == 0;
    if (lVar2 != 0) {
      bVar3 = param_3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3 & 1;
}



// FUNCTION 1468dae5e FUN_1468dae5e body=138 status=ok
// SIG undefined FUN_1468dae5e(void)

void FUN_1468dae5e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar3 = FUN_144a817a2();
    lVar1 = *(longlong *)(param_1 + 0x78);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_18 = param_1;
      FUN_1468eaa82(lVar1 + 800);
    }
  }
  FUN_1468d97a4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468daeea FUN_1468daeea body=101 status=ok
// SIG undefined FUN_1468daeea(void)

void FUN_1468daeea(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x78);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x78) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x70);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar2;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 1468daf50 FUN_1468daf50 body=239 status=ok
// SIG undefined FUN_1468daf50(void)

void FUN_1468daf50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar2 = FUN_144a817a2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_28 = param_1;
      FUN_1468eabe6(param_2 + 800,local_1c,&local_28,0);
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar3 = FUN_144a817a2();
    lVar2 = *(longlong *)(param_1 + 0x78);
    if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_30 = param_1;
      FUN_1468eaa82(lVar2 + 800);
    }
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x78) = param_2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468db040 FUN_1468db040 body=159 status=ok
// SIG undefined FUN_1468db040(void)

undefined8 FUN_1468db040(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x308))();
  FUN_140002266(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468db0e0 FUN_1468db0e0 body=311 status=ok
// SIG undefined FUN_1468db0e0(void)

undefined8 FUN_1468db0e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x3f) & 1) != 0) {
    local_40 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1400021e4(&local_40,&local_50);
    puVar2 = local_50;
    if (local_48 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
    FUN_140002266(&local_40,L"TObjectPtr<%s%s>",uVar1,puVar2);
    if (&local_40 == param_3) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_40;
      local_40 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(param_2,L"OBJECTPTR");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  FUN_14020fad6(param_3,L"UClass");
  FUN_140056680(param_2,L"OBJECT");
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468db218 FUN_1468db218 body=69 status=ok
// SIG undefined FUN_1468db218(void)

undefined8 FUN_1468db218(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_142811f30();
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x78);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x78) == lVar1);
  }
  return uVar2;
}



// FUNCTION 1468db25e FUN_1468db25e body=64 status=ok
// SIG undefined FUN_1468db25e(void)

void FUN_1468db25e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  FUN_145a1bbc6(param_1,param_2);
  return;
}


