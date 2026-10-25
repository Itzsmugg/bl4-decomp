// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146892a7e FUN_146892a7e body=32 status=ok
// SIG undefined FUN_146892a7e(void)

undefined8 FUN_146892a7e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FAnsiString");
  return param_2;
}



// FUNCTION 146892ab4 FUN_146892ab4 body=207 status=ok
// SIG undefined FUN_146892ab4(void)

ulonglong FUN_146892ab4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  void *unaff_RBX;
  bool bVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == (undefined8 *)0x0) {
    uStack_30 = 0;
LAB_146892b1f:
    local_38 = (void *)0x0;
    iVar2 = 0;
  }
  else {
    local_38 = (void *)0x0;
    uVar1 = *(uint *)(param_3 + 1);
    unaff_RBX = (void *)*param_3;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_30 = (ulonglong)uVar1;
      goto LAB_146892b1f;
    }
    FUN_1409e00a6(&local_38,uVar1,0);
    memcpy(local_38,unaff_RBX,(longlong)(int)uVar1);
    iVar2 = (int)uStack_30;
  }
  if (*(int *)(param_2 + 1) == iVar2) {
    unaff_RBX = (void *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (iVar2 < 2) goto LAB_146892b48;
    iVar2 = FUN_144afd37c(*param_2,local_38);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = *(int *)(param_2 + 1) + iVar2 == 1;
  }
  unaff_RBX = (void *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3);
LAB_146892b48:
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146892b94 FUN_146892b94 body=53 status=ok
// SIG undefined FUN_146892b94(void)

void FUN_146892b94(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14681b27a(param_2,param_3);
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 146892be6 FUN_146892be6 body=66 status=ok
// SIG undefined FUN_146892be6(void)

void FUN_146892be6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_2 + *(int *)(param_1 + 0x34) * lVar2) != 0) {
        FUN_1400020a8();
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 146892c76 FUN_146892c76 body=54 status=ok
// SIG undefined FUN_146892c76(void)

void FUN_146892c76(undefined8 param_1,longlong *param_2)

{
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
    param_2[1] = -0x100000000;
  }
  return;
}



// FUNCTION 146892cc8 FUN_146892cc8 body=19 status=ok
// SIG undefined FUN_146892cc8(void)

undefined1 FUN_146892cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1427da658(param_3);
  return 1;
}



// FUNCTION 146892cde FUN_146892cde body=21 status=ok
// SIG undefined FUN_146892cde(void)

undefined1 FUN_146892cde(void)

{
  undefined8 in_stack_00000028;
  
  FUN_1427dab5c(in_stack_00000028);
  return 1;
}



// FUNCTION 146892d06 FUN_146892d06 body=63 status=ok
// SIG undefined FUN_146892d06(void)

undefined1 FUN_146892d06(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1401fa0f0(param_2,*param_3,param_3[1]);
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 146892d46 FUN_146892d46 body=59 status=ok
// SIG undefined FUN_146892d46(void)

undefined8
FUN_146892d46(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 extraout_AL;
  undefined8 in_RAX;
  undefined7 extraout_var;
  undefined7 uVar3;
  
  if ((param_3 == (longlong *)0x0) || (lVar1 = *param_2, lVar1 != *param_3)) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else if (lVar1 == 0) {
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
    uVar2 = 1;
  }
  else {
    FUN_14470ec92(lVar1,param_2[1],param_3[1]);
    uVar2 = extraout_AL;
    uVar3 = extraout_var;
  }
  *param_5 = uVar2;
  return CONCAT71(uVar3,1);
}



// FUNCTION 146892d82 FUN_146892d82 body=219 status=ok
// SIG undefined FUN_146892d82(void)

undefined8
FUN_146892d82(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*param_1 + 8))(param_1,local_78);
    if ((local_6c & 2) == 0) {
      local_68 = 0;
      uStack_60 = 0;
    }
    local_80 = param_7;
    local_88 = param_6;
    FUN_14688be4e(param_3,param_2,&local_68,param_5);
    (**(code **)(*param_1 + 8))(param_1,local_78);
  }
  else {
    local_80 = param_7;
    local_88 = param_6;
    FUN_14688be4e(param_3,param_2,param_4,param_5);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146892e5e FUN_146892e5e body=39 status=ok
// SIG undefined FUN_146892e5e(void)

void FUN_146892e5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14688bf62(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 146892ea6 FUN_146892ea6 body=59 status=ok
// SIG undefined FUN_146892ea6(void)

undefined8 FUN_146892ea6(longlong *param_1)

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



// FUNCTION 146892ef8 FUN_146892ef8 body=112 status=ok
// SIG undefined FUN_146892ef8(void)

undefined8
FUN_146892ef8(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)*param_3;
  uVar3 = CONCAT71((int7)(local_8 >> 8),1);
  if ((plVar1 != (longlong *)0x0) && (lVar2 = ((longlong *)*param_3)[1], lVar2 != 0)) {
    local_28 = *param_4;
    local_20 = param_4[1];
    local_10 = param_3[1];
    local_18 = lVar2;
    uVar3 = (**(code **)(*plVar1 + 0x330))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146892fce FUN_146892fce body=75 status=ok
// SIG undefined FUN_146892fce(void)

void FUN_146892fce(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((char)param_1[2] == '\x01') {
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      plVar2 = (longlong *)*param_1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
      }
      FUN_1400020a8(lVar1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 146893056 FUN_146893056 body=54 status=ok
// SIG undefined FUN_146893056(void)

undefined1 FUN_146893056(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14688c546(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14689308c FUN_14689308c body=34 status=ok
// SIG undefined FUN_14689308c(void)

undefined1
FUN_14689308c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14688cd68(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1468930ae FUN_1468930ae body=238 status=ok
// SIG undefined FUN_1468930ae(void)

undefined8
FUN_1468930ae(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*param_1 + 8))(param_1,local_78);
    if ((local_6c & 2) == 0) {
      local_68 = 0;
      uStack_60 = 0;
    }
    local_80 = param_7;
    local_88 = param_6;
    FUN_14688cffc(param_3,param_2,&local_68,param_5);
    (**(code **)(*param_1 + 8))(param_1,local_78);
    if ((local_6c & 4) != 0) {
      FUN_1459cb75c(&local_68);
    }
  }
  else {
    local_80 = param_7;
    local_88 = param_6;
    FUN_14688cffc(param_3,param_2,param_4,param_5);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689319e FUN_14689319e body=39 status=ok
// SIG undefined FUN_14689319e(void)

void FUN_14689319e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14688d1d2(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1468931da FUN_1468931da body=59 status=ok
// SIG undefined FUN_1468931da(void)

undefined8 FUN_1468931da(longlong *param_1)

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



// FUNCTION 146893220 FUN_146893220 body=34 status=ok
// SIG undefined FUN_146893220(void)

void FUN_146893220(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_1459cb75c(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14689330a FUN_14689330a body=122 status=ok
// SIG undefined FUN_14689330a(void)

ulonglong FUN_14689330a(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))();
  if ((ulonglong)*(byte *)(param_2 + 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    do {
      uVar1 = (ulonglong)
              ((uint)uVar1 ^
              (uint)*(byte *)(param_2 + uVar2) + (int)(uVar1 >> 2) + (uint)uVar1 * 0x40 + 0x9e3779b9
              );
      uVar2 = uVar2 + 1;
    } while (*(byte *)(param_2 + 2) != uVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 146893430 FUN_146893430 body=75 status=ok
// SIG undefined FUN_146893430(void)

undefined8 FUN_146893430(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1468934a4 FUN_1468934a4 body=151 status=ok
// SIG undefined FUN_1468934a4(void)

void FUN_1468934a4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = *(int *)(param_2 + 2);
  if (iVar1 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)param_2[1];
  }
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar3,puVar6);
  uVar2 = *param_2;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  FUN_144a78877(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4),uVar5);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146893546 FUN_146893546 body=38 status=ok
// SIG undefined FUN_146893546(void)

void FUN_146893546(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1468935fe FUN_1468935fe body=122 status=ok
// SIG undefined FUN_1468935fe(void)

undefined1 FUN_1468935fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_1456cec3c();
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
      plVar1[5] = *(longlong *)(param_3 + 0x28 + lVar13);
      lVar13 = lVar13 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1468936a0 FUN_1468936a0 body=59 status=ok
// SIG undefined FUN_1468936a0(void)

undefined8 FUN_1468936a0(longlong *param_1)

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



// FUNCTION 146893752 FUN_146893752 body=65 status=ok
// SIG undefined FUN_146893752(void)

void FUN_146893752(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)*param_2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
    }
    FUN_1400020a8(lVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 146893798 FUN_146893798 body=19 status=ok
// SIG undefined FUN_146893798(void)

undefined1 FUN_146893798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141156ce0(param_3);
  return 1;
}



// FUNCTION 1468937c4 FUN_1468937c4 body=63 status=ok
// SIG undefined FUN_1468937c4(void)

undefined1 FUN_1468937c4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1401fa0f0(param_2,*param_3,param_3[1]);
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 146893804 FUN_146893804 body=59 status=ok
// SIG undefined FUN_146893804(void)

undefined8
FUN_146893804(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 extraout_AL;
  undefined8 in_RAX;
  undefined7 extraout_var;
  undefined7 uVar3;
  
  if ((param_3 == (longlong *)0x0) || (lVar1 = *param_2, lVar1 != *param_3)) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else if (lVar1 == 0) {
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
    uVar2 = 1;
  }
  else {
    FUN_14470ec92(lVar1,param_2[1],param_3[1]);
    uVar2 = extraout_AL;
    uVar3 = extraout_var;
  }
  *param_5 = uVar2;
  return CONCAT71(uVar3,1);
}



// FUNCTION 14689385c FUN_14689385c body=59 status=ok
// SIG undefined FUN_14689385c(void)

undefined8 FUN_14689385c(longlong *param_1)

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



// FUNCTION 1468938f8 FUN_1468938f8 body=75 status=ok
// SIG undefined FUN_1468938f8(void)

void FUN_1468938f8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((char)param_1[2] == '\x01') {
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      plVar2 = (longlong *)*param_1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
      }
      FUN_1400020a8(lVar1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14689398c FUN_14689398c body=59 status=ok
// SIG undefined FUN_14689398c(void)

undefined8 FUN_14689398c(longlong *param_1)

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



// FUNCTION 146893b08 FUN_146893b08 body=181 status=ok
// SIG undefined FUN_146893b08(void)

void FUN_146893b08(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *_Dst;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = _wtoi(param_3);
  local_19 = (char)iVar2;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (undefined1 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_19) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_19,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_19,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146893bbe FUN_146893bbe body=175 status=ok
// SIG undefined FUN_146893bbe(void)

undefined1 FUN_146893bbe(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 *_Src;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined1 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_19) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_19,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_19,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146893c72 FUN_146893c72 body=175 status=ok
// SIG undefined FUN_146893c72(void)

undefined1 FUN_146893c72(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 *_Src;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined1 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_19) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_19,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_19,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146893d2a FUN_146893d2a body=202 status=ok
// SIG undefined FUN_146893d2a(void)

undefined8 FUN_146893d2a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 *_Src;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined1 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_21) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_21,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_21,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_21);
  }
  FUN_140002266(param_2,&DAT_149e061aa,local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146893eaa FUN_146893eaa body=181 status=ok
// SIG undefined FUN_146893eaa(void)

void FUN_146893eaa(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  int *_Dst;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = _wtoi(param_3);
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (int *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_1c,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_1c,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146893f60 FUN_146893f60 body=178 status=ok
// SIG undefined FUN_146893f60(void)

longlong FUN_146893f60(longlong *param_1,longlong param_2)

{
  char cVar1;
  int *_Src;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (int *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1c,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1c,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894018 FUN_146894018 body=178 status=ok
// SIG undefined FUN_146894018(void)

longlong FUN_146894018(longlong *param_1,longlong param_2)

{
  char cVar1;
  int *_Src;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (int *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1c,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1c,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468940d2 FUN_1468940d2 body=204 status=ok
// SIG undefined FUN_1468940d2(void)

undefined8 FUN_1468940d2(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 *_Src;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined4 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_24) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_24,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_24,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_24);
  }
  FUN_140002266(param_2,&DAT_149e063bc,local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894250 FUN_146894250 body=181 status=ok
// SIG undefined FUN_146894250(void)

void FUN_146894250(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 *_Dst;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = _wtoi64(param_3);
  local_1c = (int)lVar2;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (undefined4 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_1c,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_1c,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894306 FUN_146894306 body=177 status=ok
// SIG undefined FUN_146894306(void)

undefined4 FUN_146894306(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 *_Src;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined4 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1c,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1c,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468943b8 FUN_1468943b8 body=177 status=ok
// SIG undefined FUN_1468943b8(void)

undefined4 FUN_1468943b8(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 *_Src;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined4 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1c,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1c,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894472 FUN_146894472 body=204 status=ok
// SIG undefined FUN_146894472(void)

undefined8 FUN_146894472(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined4 *_Src;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined4 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_24) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_24,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_24,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_24);
  }
  FUN_140002266(param_2,&DAT_149e061aa,local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689460c FUN_14689460c body=26 status=ok
// SIG undefined FUN_14689460c(void)

void FUN_14689460c(undefined8 param_1,longlong *param_2,wchar_t *param_3)

{
  longlong lVar1;
  
  lVar1 = _wtoi64(param_3);
  *param_2 = lVar1;
  return;
}



// FUNCTION 146894626 FUN_146894626 body=182 status=ok
// SIG undefined FUN_146894626(void)

void FUN_146894626(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  longlong *_Dst;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = _wtoi64(param_3);
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (longlong *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_20,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_20,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468946e2 FUN_1468946e2 body=179 status=ok
// SIG undefined FUN_1468946e2(void)

undefined8 FUN_1468946e2(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *_Src;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined8 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_20,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_20,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689479a FUN_14689479a body=179 status=ok
// SIG undefined FUN_14689479a(void)

undefined8 FUN_14689479a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *_Src;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined8 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_20,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_20,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894854 FUN_146894854 body=35 status=ok
// SIG undefined FUN_146894854(void)

undefined8 FUN_146894854(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_140002266(param_2,L"%lld",*param_3);
  return param_2;
}



// FUNCTION 146894878 FUN_146894878 body=205 status=ok
// SIG undefined FUN_146894878(void)

undefined8 FUN_146894878(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 *_Src;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_28) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_28,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_28,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_28);
  }
  FUN_140002266(param_2,L"%lld",local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894a3a FUN_146894a3a body=31 status=ok
// SIG undefined FUN_146894a3a(void)

void FUN_146894a3a(undefined8 param_1,ulonglong *param_2,wchar_t *param_3)

{
  ulonglong uVar1;
  
  uVar1 = _wcstoui64(param_3,(wchar_t **)0x0,0);
  *param_2 = uVar1;
  return;
}



// FUNCTION 146894a5a FUN_146894a5a body=187 status=ok
// SIG undefined FUN_146894a5a(void)

void FUN_146894a5a(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  ulonglong *_Dst;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = _wcstoui64(param_3,(wchar_t **)0x0,0);
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (ulonglong *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_20,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_20,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894b16 FUN_146894b16 body=179 status=ok
// SIG undefined FUN_146894b16(void)

undefined8 FUN_146894b16(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *_Src;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined8 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_20,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_20,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894bce FUN_146894bce body=179 status=ok
// SIG undefined FUN_146894bce(void)

undefined8 FUN_146894bce(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *_Src;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined8 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_20,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_20,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894c9a FUN_146894c9a body=35 status=ok
// SIG undefined FUN_146894c9a(void)

undefined8 FUN_146894c9a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_140002266(param_2,L"%llu",*param_3);
  return param_2;
}



// FUNCTION 146894cbe FUN_146894cbe body=205 status=ok
// SIG undefined FUN_146894cbe(void)

undefined8 FUN_146894cbe(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 *_Src;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_28) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_28,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_28,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_28);
  }
  FUN_140002266(param_2,L"%llu",local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894e8c FUN_146894e8c body=187 status=ok
// SIG undefined FUN_146894e8c(void)

void FUN_146894e8c(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  float *_Dst;
  double dVar2;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar2 = _wtof(param_3);
  local_1c = (float)dVar2;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (float *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_1c,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_1c,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146894f4e FUN_146894f4e body=180 status=ok
// SIG undefined FUN_146894f4e(void)

longlong FUN_146894f4e(longlong *param_1,longlong param_2)

{
  char cVar1;
  float *_Src;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (float *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1c,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1c,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146895028 FUN_146895028 body=213 status=ok
// SIG undefined FUN_146895028(void)

ulonglong FUN_146895028(longlong *param_1,longlong param_2)

{
  char cVar1;
  float *_Src;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (float *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1c) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1c,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1c,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)(local_1c - 9.223372e+18) & (longlong)local_1c >> 0x3f | (longlong)local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468950fe FUN_1468950fe body=210 status=ok
// SIG undefined FUN_1468950fe(void)

undefined8 FUN_1468950fe(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  float *_Src;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0.0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (float *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_24) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_24,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_24,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_24);
  }
  FUN_140002266(param_2,&DAT_149e02016,(double)local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468952e8 FUN_1468952e8 body=185 status=ok
// SIG undefined FUN_1468952e8(void)

void FUN_1468952e8(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  double *_Dst;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = wcstod(param_3,(wchar_t **)0x0);
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (double *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_20,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_20,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468953a8 FUN_1468953a8 body=181 status=ok
// SIG undefined FUN_1468953a8(void)

longlong FUN_1468953a8(longlong *param_1,longlong param_2)

{
  char cVar1;
  double *_Src;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (double *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_20,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_20,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146895482 FUN_146895482 body=214 status=ok
// SIG undefined FUN_146895482(void)

ulonglong FUN_146895482(longlong *param_1,longlong param_2)

{
  char cVar1;
  double *_Src;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (double *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_20) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_20,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_20,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)(local_20 - 9.223372036854776e+18) & (longlong)local_20 >> 0x3f |
           (longlong)local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689555a FUN_14689555a body=42 status=ok
// SIG undefined FUN_14689555a(void)

undefined8 FUN_14689555a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_140002266(param_2,&DAT_149e02016,*param_3);
  return param_2;
}



// FUNCTION 146895584 FUN_146895584 body=211 status=ok
// SIG undefined FUN_146895584(void)

undefined8 FUN_146895584(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 *_Src;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_28) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_28,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_28,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_28);
  }
  FUN_140002266(param_2,&DAT_149e02016,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689577e FUN_14689577e body=54 status=ok
// SIG undefined FUN_14689577e(void)

void FUN_14689577e(undefined8 param_1,longlong *param_2)

{
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
    param_2[1] = -0x100000000;
  }
  return;
}



// FUNCTION 1468957be FUN_1468957be body=128 status=ok
// SIG undefined FUN_1468957be(void)

void FUN_1468957be(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(&local_28);
  plVar1 = (longlong *)*param_2;
  if (plVar1 != local_28) {
    *param_2 = (longlong)local_28;
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_2 + 1) = local_20;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14689585c FUN_14689585c body=42 status=ok
// SIG undefined FUN_14689585c(void)

void FUN_14689585c(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 14689596a FUN_14689596a body=120 status=ok
// SIG undefined FUN_14689596a(void)

void FUN_14689596a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)((longlong)param_2 + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146895a04 FUN_146895a04 body=38 status=ok
// SIG undefined FUN_146895a04(void)

void FUN_146895a04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146895a40 FUN_146895a40 body=56 status=ok
// SIG undefined FUN_146895a40(void)

void FUN_146895a40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146895a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146895a8e FUN_146895a8e body=54 status=ok
// SIG undefined FUN_146895a8e(void)

undefined1 FUN_146895a8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146895bd4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 146895ac4 FUN_146895ac4 body=31 status=ok
// SIG undefined FUN_146895ac4(void)

undefined1
FUN_146895ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14688f7de(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 146895b00 FUN_146895b00 body=59 status=ok
// SIG undefined FUN_146895b00(void)

undefined8 FUN_146895b00(longlong *param_1)

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



// FUNCTION 146895b46 FUN_146895b46 body=64 status=ok
// SIG undefined FUN_146895b46(void)

void FUN_146895b46(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146895bd4 FUN_146895bd4 body=80 status=ok
// SIG undefined FUN_146895bd4(void)

undefined8 * FUN_146895bd4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 146895c24 FUN_146895c24 body=67 status=ok
// SIG undefined FUN_146895c24(void)

void FUN_146895c24(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    lVar1 = (longlong)*(int *)(*param_1 + 0x5c);
    thunk_FUN_140497476(param_2,param_1,-lVar1 & (longlong)param_1 + lVar1 + 7,0,0);
  }
  return;
}



// FUNCTION 146895c78 FUN_146895c78 body=56 status=ok
// SIG undefined FUN_146895c78(void)

void FUN_146895c78(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146895ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146895cc6 FUN_146895cc6 body=54 status=ok
// SIG undefined FUN_146895cc6(void)

undefined1 FUN_146895cc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146895e0c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 146895cfc FUN_146895cfc body=31 status=ok
// SIG undefined FUN_146895cfc(void)

undefined1
FUN_146895cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14688f72a(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 146895d38 FUN_146895d38 body=59 status=ok
// SIG undefined FUN_146895d38(void)

undefined8 FUN_146895d38(longlong *param_1)

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



// FUNCTION 146895d7e FUN_146895d7e body=64 status=ok
// SIG undefined FUN_146895d7e(void)

void FUN_146895d7e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 146895e0c FUN_146895e0c body=80 status=ok
// SIG undefined FUN_146895e0c(void)

undefined8 * FUN_146895e0c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 146895e5c FUN_146895e5c body=67 status=ok
// SIG undefined FUN_146895e5c(void)

void FUN_146895e5c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    lVar1 = (longlong)*(int *)(*param_1 + 0x5c);
    thunk_FUN_140497476(param_2,param_1,-lVar1 & (longlong)param_1 + lVar1 + 7,0,0);
  }
  return;
}



// FUNCTION 146895ea0 FUN_146895ea0 body=29 status=ok
// SIG undefined FUN_146895ea0(void)

undefined8 FUN_146895ea0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146895ebe FUN_146895ebe body=29 status=ok
// SIG undefined FUN_146895ebe(void)

undefined8 FUN_146895ebe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146895edc FUN_146895edc body=38 status=ok
// SIG undefined FUN_146895edc(void)

undefined8 FUN_146895edc(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146895f02 FUN_146895f02 body=64 status=ok
// SIG undefined FUN_146895f02(void)

undefined8 * FUN_146895f02(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146895f4a FUN_146895f4a body=147 status=ok
// SIG undefined FUN_146895f4a(void)

void FUN_146895f4a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146895fde FUN_146895fde body=38 status=ok
// SIG undefined FUN_146895fde(void)

undefined8 FUN_146895fde(undefined8 param_1,int param_2)

{
  FUN_141713a8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146896004 FUN_146896004 body=312 status=ok
// SIG undefined FUN_146896004(void)

undefined4 * FUN_146896004(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_14689613e(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_146896224(param_1,uVar3,local_40,&local_4c);
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
      FUN_146896312(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689613e FUN_14689613e body=229 status=ok
// SIG undefined FUN_14689613e(void)

int * FUN_14689613e(longlong *param_1,int *param_2)

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



// FUNCTION 146896224 FUN_146896224 body=124 status=ok
// SIG undefined FUN_146896224(void)

undefined8 FUN_146896224(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1468962a0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468962a0 FUN_1468962a0 body=114 status=ok
// SIG undefined FUN_1468962a0(void)

void FUN_1468962a0(longlong *param_1,int param_2)

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



// FUNCTION 146896312 FUN_146896312 body=477 status=ok
// SIG undefined FUN_146896312(void)

void FUN_146896312(longlong *param_1)

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



// FUNCTION 1468964f0 FUN_1468964f0 body=57 status=ok
// SIG undefined FUN_1468964f0(void)

undefined8 * FUN_1468964f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e6e610;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14689652a FUN_14689652a body=193 status=ok
// SIG undefined FUN_14689652a(void)

void FUN_14689652a(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar5 = DAT_14c950c29;
  *(longlong *)(lVar3 + 0xe0) = lVar4;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((lVar4 != 0) && ((bVar5 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(lVar3 + 0x110) = lVar4;
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xd4);
  *puVar1 = *puVar1 | *(uint *)(param_1 + 0x20);
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 8) + 0xd8);
  *puVar2 = *puVar2 | *(ulonglong *)(param_1 + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xc0) = *(undefined8 *)(param_1 + 0x40);
  FUN_14689664e(*(longlong *)(param_1 + 8) + 0x1f0,param_1 + 0x48);
  return;
}



// FUNCTION 1468965ec FUN_1468965ec body=98 status=ok
// SIG undefined FUN_1468965ec(void)

void FUN_1468965ec(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14689664e FUN_14689664e body=88 status=ok
// SIG undefined FUN_14689664e(void)

undefined8 * FUN_14689664e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1468965ec(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1468966a6 FUN_1468966a6 body=38 status=ok
// SIG undefined FUN_1468966a6(void)

undefined8 FUN_1468966a6(undefined8 param_1,int param_2)

{
  FUN_145a3576c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468966dc FUN_1468966dc body=83 status=ok
// SIG undefined FUN_1468966dc(void)

undefined8 * FUN_1468966dc(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146896730 FUN_146896730 body=114 status=ok
// SIG undefined FUN_146896730(void)

void FUN_146896730(longlong *param_1,int param_2)

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



// FUNCTION 1468967a2 FUN_1468967a2 body=93 status=ok
// SIG undefined FUN_1468967a2(void)

void FUN_1468967a2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14574276e(param_1,param_2,1);
  return;
}



// FUNCTION 146896800 FUN_146896800 body=86 status=ok
// SIG undefined FUN_146896800(void)

void FUN_146896800(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146896856 FUN_146896856 body=132 status=ok
// SIG undefined FUN_146896856(void)

void FUN_146896856(longlong param_1,int param_2)

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



// FUNCTION 1468968dc FUN_1468968dc body=86 status=ok
// SIG undefined FUN_1468968dc(void)

void FUN_1468968dc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146896932 FUN_146896932 body=132 status=ok
// SIG undefined FUN_146896932(void)

void FUN_146896932(longlong param_1,int param_2)

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



// FUNCTION 1468969b7 FUN_1468969b7 body=91 status=ok
// SIG undefined FUN_1468969b7(void)

void FUN_1468969b7(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      plVar2 = (longlong *)*param_1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
      }
      FUN_1400020a8(lVar1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146896a12 FUN_146896a12 body=7 status=ok
// SIG undefined FUN_146896a12(void)

void FUN_146896a12(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 146896a1a FUN_146896a1a body=119 status=ok
// SIG undefined FUN_146896a1a(void)

void FUN_146896a1a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_146896a92(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146896a92 FUN_146896a92 body=141 status=ok
// SIG undefined FUN_146896a92(void)

void FUN_146896a92(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,0x10);
  return;
}



// FUNCTION 146896b20 FUN_146896b20 body=62 status=ok
// SIG undefined FUN_146896b20(void)

void FUN_146896b20(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146896b5e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 146896b5e FUN_146896b5e body=112 status=ok
// SIG undefined FUN_146896b5e(void)

ulonglong FUN_146896b5e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146896b98;
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
LAB_146896b98:
  return param_2 & 0xffffffff;
}



// FUNCTION 146896bce FUN_146896bce body=147 status=ok
// SIG undefined FUN_146896bce(void)

void FUN_146896bce(longlong param_1,int param_2)

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



// FUNCTION 146896c62 FUN_146896c62 body=438 status=ok
// SIG undefined FUN_146896c62(void)

longlong * FUN_146896c62(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146896e93(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146896ec2(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 8;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      (**(code **)(*param_1 + 0x160))(param_1,lVar3 + lVar5 + -8);
      FUN_14021219d(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146896e1a(param_2);
    if (0 < (int)local_3c) {
      iVar4 = 0;
      do {
        lVar5 = FUN_146896e54(param_2);
        (**(code **)(*param_1 + 0x160))(param_1,lVar5);
        FUN_14021219d(param_1,lVar5 + 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146896e1a FUN_146896e1a body=57 status=ok
// SIG undefined FUN_146896e1a(void)

void FUN_146896e1a(undefined8 *param_1,int param_2)

{
  FUN_146896e93(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146896ec2(param_1,param_2);
  return;
}



// FUNCTION 146896e54 FUN_146896e54 body=63 status=ok
// SIG undefined FUN_146896e54(void)

longlong FUN_146896e54(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146896f42(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_146896f32(lVar2);
  return lVar2;
}



// FUNCTION 146896e93 FUN_146896e93 body=47 status=ok
// SIG undefined FUN_146896e93(void)

void FUN_146896e93(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146896ec2 FUN_146896ec2 body=112 status=ok
// SIG undefined FUN_146896ec2(void)

void FUN_146896ec2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 146896f32 FUN_146896f32 body=15 status=ok
// SIG undefined FUN_146896f32(void)

void FUN_146896f32(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 146896f42 FUN_146896f42 body=147 status=ok
// SIG undefined FUN_146896f42(void)

void FUN_146896f42(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146896fd6 FUN_146896fd6 body=231 status=ok
// SIG undefined FUN_146896fd6(void)

void FUN_146896fd6(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined1 **local_a0;
  undefined1 **local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = *param_1;
  local_18 = &local_28;
  local_98 = &local_20;
  local_20 = &LAB_1468973a0;
  local_30 = &local_60;
  local_50 = *(undefined4 *)(param_1 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_48 = *(undefined4 *)(param_1 + 3);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_40 = *(undefined4 *)(param_1 + 4);
  local_a0 = &local_38;
  local_38 = &LAB_1468973c0;
  local_68 = &local_78;
  local_a8 = &local_70;
  local_70 = &LAB_14689741e;
  local_80 = &local_90;
  local_88 = &LAB_146897438;
  local_78 = local_90;
  local_60 = local_90;
  local_58 = param_2;
  local_28 = local_90;
  FUN_1468970be(param_1[1],param_2,param_1 + 2);
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468970be FUN_1468970be body=272 status=ok
// SIG undefined FUN_1468970be(void)

void FUN_1468970be(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = param_2;
  uVar1 = (*(code *)*param_4)(param_4[1]);
  local_58 = *param_5;
  local_88 = &local_58;
  local_50 = param_5[1];
  iVar2 = FUN_1468971d0(param_1,param_2,param_3,uVar1);
  if (iVar2 == -1) {
    local_68 = *param_6;
    local_88 = &local_68;
    local_60 = param_6[1];
    local_78 = *param_4;
    local_70 = param_4[1];
    FUN_1468972aa(param_1,param_3,&local_78,uVar1);
  }
  else {
    lVar3 = (longlong)iVar2 * (longlong)*(int *)(param_3 + 0x10) + *param_1;
    local_48 = lVar3;
    (*(code *)*param_7)(param_7[1],&local_48);
    local_48 = lVar3;
    (*(code *)*param_6)(param_6[1],&local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468971d0 FUN_1468971d0 body=217 status=ok
// SIG undefined FUN_1468971d0(void)

int FUN_1468971d0(longlong *param_1,undefined8 param_2,int *param_3,int param_4,undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + ((longlong)param_4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      pcVar1 = (code *)*param_5;
      uVar2 = param_5[1];
      do {
        lVar6 = (longlong)iVar5 * (longlong)param_3[4] + *param_1;
        local_58 = param_2;
        local_50 = lVar6;
        cVar3 = (*pcVar1)(uVar2,&local_58,&local_50);
        if (cVar3 != '\0') goto LAB_1468971fc;
        iVar5 = *(int *)(lVar6 + *param_3);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_1468971fc:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1468972aa FUN_1468972aa body=244 status=ok
// SIG undefined FUN_1468972aa(void)

int FUN_1468972aa(longlong *param_1,int *param_2,undefined8 *param_3,uint param_4,
                 undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = FUN_14491444c(param_1,param_2 + 3);
  lVar8 = (longlong)iVar3 * (longlong)param_2[4] + *param_1;
  local_48 = lVar8;
  (*(code *)*param_5)(param_5[1]);
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar4) {
    uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar1 = (int)param_1[9];
  if ((iVar1 == 0) || (iVar1 < iVar6)) {
    local_58 = *param_3;
    local_50 = param_3[1];
    FUN_1402609e8(param_1,param_2);
  }
  else {
    param_4 = iVar1 - 1U & param_4;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    *(uint *)(lVar8 + param_2[1]) = param_4;
    *(undefined4 *)(lVar8 + *param_2) =
         *(undefined4 *)((longlong)plVar7 + (longlong)(int)param_4 * 4);
    *(int *)((longlong)plVar7 + (longlong)(int)param_4 * 4) = iVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468973c8 FUN_1468973c8 body=86 status=ok
// SIG undefined FUN_1468973c8(void)

void FUN_1468973c8(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,param_2);
  }
  else {
    memset(param_2,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x00014689741b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,param_2,param_1[1]);
  return;
}



// FUNCTION 146897444 FUN_146897444 body=306 status=ok
// SIG undefined FUN_146897444(void)

undefined4 * FUN_146897444(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146897578(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_146897686(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c948e80 - DAT_14c948eac;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14c948ec0)) {
      uVar7 = DAT_14c948ec0 - 1U & uVar7;
      local_38[5] = uVar7;
      puVar6 = DAT_14c948eb8;
      if (DAT_14c948eb8 == (undefined *)0x0) {
        puVar6 = &DAT_14c948eb0;
      }
      local_38[4] = *(uint *)(puVar6 + ((longlong)DAT_14c948ec0 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14c948eb8;
      if (DAT_14c948eb8 == (undefined *)0x0) {
        puVar6 = &DAT_14c948eb0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c948ec0 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14c948ec0 = iVar9;
      FUN_1468977d2(&DAT_14c948e78);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146897578 FUN_146897578 body=270 status=ok
// SIG undefined FUN_146897578(void)

int * FUN_146897578(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c948ea8;
  iVar4 = DAT_14c948e80;
  if (DAT_14c948eac == 0) {
    iVar2 = DAT_14c948e80 + 1;
    bVar7 = DAT_14c948e84 == DAT_14c948e80;
    DAT_14c948e80 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c948e78,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c948e88,1);
    puVar3 = DAT_14c948e98;
    if (DAT_14c948e98 == (undefined *)0x0) {
      puVar3 = &DAT_14c948e88;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c948ea8;
    DAT_14c948ea8 = *(int *)(DAT_14c948e78 + 4 + lVar6 * 0x18);
    DAT_14c948eac = DAT_14c948eac + -1;
    iVar4 = iVar2;
    if (DAT_14c948eac != 0) {
      *(undefined4 *)(DAT_14c948e78 + (longlong)DAT_14c948ea8 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c948e88;
  if (DAT_14c948e98 != (undefined *)0x0) {
    puVar3 = DAT_14c948e98;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c948e78;
  return param_1;
}



// FUNCTION 146897686 FUN_146897686 body=149 status=ok
// SIG undefined FUN_146897686(void)

undefined8 FUN_146897686(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c948e80 - DAT_14c948eac != 1) && (DAT_14c948e80 != DAT_14c948eac)) {
    puVar6 = &DAT_14c948eb0;
    if (DAT_14c948eb8 != (undefined *)0x0) {
      puVar6 = DAT_14c948eb8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c948ec0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(DAT_14c948e78 + (longlong)iVar5 * 0x18);
        if (*piVar1 == *param_2) {
          iVar2 = param_2[1];
          iVar3 = param_2[2];
          iVar4 = param_2[3];
          *piVar1 = *param_2;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_14689771c(&DAT_14c948e78,*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = piVar1[4];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14689771c FUN_14689771c body=114 status=ok
// SIG undefined FUN_14689771c(void)

void FUN_14689771c(longlong *param_1,int param_2)

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



// FUNCTION 14689778e FUN_14689778e body=68 status=ok
// SIG undefined FUN_14689778e(void)

void FUN_14689778e(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1468977d2(param_1);
  return;
}



// FUNCTION 1468977d2 FUN_1468977d2 body=419 status=ok
// SIG undefined FUN_1468977d2(void)

void FUN_1468977d2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 146897976 FUN_146897976 body=87 status=ok
// SIG undefined FUN_146897976(void)

void FUN_146897976(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14689771c();
  return;
}



// FUNCTION 1468979ce FUN_1468979ce body=268 status=ok
// SIG undefined FUN_1468979ce(void)

undefined4 * FUN_1468979ce(longlong param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a6ca48(param_1,local_48);
  *local_40 = *param_4;
  local_40[1] = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_144aff926(param_1,param_3,local_40,local_48);
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
      local_40[2] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[1] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_1449809d4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146897adc FUN_146897adc body=119 status=ok
// SIG undefined FUN_146897adc(void)

void FUN_146897adc(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_146897b54(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146897b54 FUN_146897b54 body=141 status=ok
// SIG undefined FUN_146897b54(void)

void FUN_146897b54(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 146897be2 FUN_146897be2 body=249 status=ok
// SIG undefined FUN_146897be2(void)

void FUN_146897be2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  
  piVar1 = (int *)(param_1 + 0x18);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    uVar4 = *(int *)(param_1 + 0x18) + 0x1fU >> 5;
    uVar7 = 4;
    if (4 < uVar4) {
      uVar7 = uVar4;
    }
    *(uint *)(param_1 + 0x1c) = uVar7 << 5;
    FUN_1446efbd8(param_1,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar8 = param_1;
  }
  (**(code **)(*param_2 + 0x170))(param_2,lVar8,*(int *)(param_1 + 0x18) + 0x1fU >> 3 & 0xfffffffc);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((*(byte *)((longlong)param_2 + 0x2b) & 10) == 0)) {
    iVar2 = *piVar1;
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    if (iVar2 % 0x20 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar8 = param_1;
      }
      bVar6 = -(char)(iVar2 % 0x20);
      *(uint *)(lVar8 + (longlong)(iVar5 >> 5) * 4) =
           (uint)(*(int *)(lVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
    }
  }
  return;
}



// FUNCTION 146897cdc FUN_146897cdc body=135 status=ok
// SIG undefined FUN_146897cdc(void)

undefined8 *
FUN_146897cdc(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e6e120;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146897d64 FUN_146897d64 body=137 status=ok
// SIG undefined FUN_146897d64(void)

undefined8 * FUN_146897d64(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8000000000200);
  *param_1 = &PTR_LAB_149e6e120;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146897dee FUN_146897dee body=150 status=ok
// SIG undefined FUN_146897dee(void)

void FUN_146897dee(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146897f04 FUN_146897f04 body=59 status=ok
// SIG undefined FUN_146897f04(void)

undefined8 FUN_146897f04(longlong *param_1)

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



// FUNCTION 146897fa6 FUN_146897fa6 body=96 status=ok
// SIG undefined FUN_146897fa6(void)

undefined8 * FUN_146897fa6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_1400163b0();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149e5e270;
  return puVar3;
}



// FUNCTION 146898006 FUN_146898006 body=312 status=ok
// SIG undefined FUN_146898006(void)

undefined4 * FUN_146898006(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_146898140(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_146898226(param_1,uVar3,local_40,&local_4c);
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
      FUN_146898314(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146898140 FUN_146898140 body=229 status=ok
// SIG undefined FUN_146898140(void)

int * FUN_146898140(longlong *param_1,int *param_2)

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



// FUNCTION 146898226 FUN_146898226 body=124 status=ok
// SIG undefined FUN_146898226(void)

undefined8 FUN_146898226(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1468982a2(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468982a2 FUN_1468982a2 body=114 status=ok
// SIG undefined FUN_1468982a2(void)

void FUN_1468982a2(longlong *param_1,int param_2)

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



// FUNCTION 146898314 FUN_146898314 body=477 status=ok
// SIG undefined FUN_146898314(void)

void FUN_146898314(longlong *param_1)

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



// FUNCTION 1468984f2 FUN_1468984f2 body=132 status=ok
// SIG undefined FUN_1468984f2(void)

void FUN_1468984f2(longlong param_1,int param_2)

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



// FUNCTION 146898578 FUN_146898578 body=143 status=ok
// SIG undefined FUN_146898578(void)

undefined8 * FUN_146898578(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_1449e2fb2();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  *puVar3 = &PTR_FUN_149e6b8b0;
  puVar3[0x15] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  return puVar3;
}



// FUNCTION 146898608 FUN_146898608 body=143 status=ok
// SIG undefined FUN_146898608(void)

undefined8 * FUN_146898608(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_1446f4bba();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  puVar3[0x15] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *puVar3 = &PTR_FUN_149e6bd00;
  return puVar3;
}



// FUNCTION 146898697 FUN_146898697 body=472 status=ok
// SIG undefined FUN_146898697(void)

void FUN_146898697(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar5;
joined_r0x0001468986c9:
    do {
      iVar4 = iVar5 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar8 = iVar5 * 2 + 2;
        if (iVar8 < (int)param_2) {
          uVar6 = *(ulonglong *)(param_1[iVar8] + 0x18);
          if ((int)uVar6 == (int)*(undefined8 *)(param_1[iVar4] + 0x18)) {
            iVar3 = (int)(uVar6 >> 0x20) -
                    (int)((ulonglong)*(undefined8 *)(param_1[iVar4] + 0x18) >> 0x20);
          }
          else {
            iVar3 = FUN_14002c2bd(uVar6 & 0xffffffff);
          }
          if (-1 < iVar3) {
            iVar4 = iVar8;
          }
        }
        uVar6 = *(ulonglong *)(param_1[iVar5] + 0x18);
        if ((int)uVar6 == (int)*(undefined8 *)(param_1[iVar4] + 0x18)) {
          iVar8 = (int)(uVar6 >> 0x20) -
                  (int)((ulonglong)*(undefined8 *)(param_1[iVar4] + 0x18) >> 0x20);
        }
        else {
          iVar8 = FUN_14002c2bd(uVar6 & 0xffffffff);
        }
        if (iVar8 < 0) {
          uVar1 = param_1[iVar5];
          param_1[iVar5] = param_1[iVar4];
          param_1[iVar4] = uVar1;
          iVar5 = iVar4;
          goto joined_r0x0001468986c9;
        }
      }
      bVar10 = iVar9 != 0;
      iVar5 = iVar9 + -1;
      iVar9 = iVar5;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar5 = 0;
          iVar4 = 1;
          iVar9 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar8 = iVar4;
            if ((longlong)iVar5 < (longlong)uVar7) {
              uVar2 = *(ulonglong *)(param_1[iVar5] + 0x18);
              if ((int)uVar2 == (int)*(undefined8 *)(param_1[iVar4] + 0x18)) {
                iVar4 = (int)(uVar2 >> 0x20) -
                        (int)((ulonglong)*(undefined8 *)(param_1[iVar4] + 0x18) >> 0x20);
              }
              else {
                iVar4 = FUN_14002c2bd(uVar2 & 0xffffffff);
              }
              if (-1 < iVar4) {
                iVar8 = iVar5;
              }
            }
            uVar2 = *(ulonglong *)(param_1[iVar9] + 0x18);
            if ((int)uVar2 == (int)*(undefined8 *)(param_1[iVar8] + 0x18)) {
              iVar5 = (int)(uVar2 >> 0x20) -
                      (int)((ulonglong)*(undefined8 *)(param_1[iVar8] + 0x18) >> 0x20);
            }
            else {
              iVar5 = FUN_14002c2bd(uVar2 & 0xffffffff);
            }
            if (-1 < iVar5) break;
            uVar1 = param_1[iVar9];
            param_1[iVar9] = param_1[iVar8];
            param_1[iVar8] = uVar1;
            iVar5 = iVar8 * 2;
            iVar4 = iVar8 * 2 + 1;
            iVar9 = iVar8;
          } while ((longlong)iVar4 < (longlong)uVar7);
          uVar1 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar1;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 146898870 FUN_146898870 body=132 status=ok
// SIG undefined FUN_146898870(void)

void FUN_146898870(longlong param_1,int param_2)

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



// FUNCTION 1468988f6 FUN_1468988f6 body=48 status=ok
// SIG undefined FUN_1468988f6(void)

void FUN_1468988f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146898926 FUN_146898926 body=67 status=ok
// SIG undefined FUN_146898926(void)

void FUN_146898926(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1403dd6aa(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14073e928(param_1);
    return;
  }
  FUN_14689896a(param_1);
  FUN_1403dd6aa(param_1,0);
  return;
}



// FUNCTION 14689896a FUN_14689896a body=322 status=ok
// SIG undefined FUN_14689896a(void)

void FUN_14689896a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146898aae FUN_146898aae body=79 status=ok
// SIG undefined FUN_146898aae(void)

void FUN_146898aae(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_14c951640;
  uVar1 = FUN_144a797b2();
  uVar2 = FUN_140010cf7(uVar1,uVar2,0,0x510,0,0,0,0);
  FUN_146898afe(uVar2,param_1);
  return;
}



// FUNCTION 146898afe FUN_146898afe body=332 status=ok
// SIG undefined FUN_146898afe(void)

undefined8 * FUN_146898afe(undefined8 *param_1)

{
  FUN_1468be472();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_149e70a50;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2f));
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x3a));
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  return param_1;
}



// FUNCTION 146898c4a FUN_146898c4a body=143 status=ok
// SIG undefined FUN_146898c4a(void)

undefined8 * FUN_146898c4a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_140010bca();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  puVar3[0x15] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *puVar3 = &PTR_FUN_149e6e840;
  return puVar3;
}



// FUNCTION 146898cda FUN_146898cda body=143 status=ok
// SIG undefined FUN_146898cda(void)

undefined8 * FUN_146898cda(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_1400181a8();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  puVar3[0x15] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *puVar3 = &PTR_FUN_149e6c690;
  return puVar3;
}



// FUNCTION 146898d6a FUN_146898d6a body=150 status=ok
// SIG undefined FUN_146898d6a(void)

undefined8 * FUN_146898d6a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_140019b7c();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  puVar3[0x15] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *puVar3 = &PTR_FUN_149e6ca10;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  return puVar3;
}



// FUNCTION 146898e0c FUN_146898e0c body=270 status=ok
// SIG undefined FUN_146898e0c(void)

void FUN_146898e0c(longlong param_1,longlong param_2)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_145dd2478();
    FUN_146820ec8(param_1);
  }
  if (param_2 == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = *(longlong *)(param_2 + 0x50);
  }
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_9a = 0;
  local_b0 = param_2;
  FUN_14688bc9a(&local_b0);
  if (local_a8 != 0) {
    do {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_140bb2a1a(&local_98);
      local_a8 = *(longlong *)(local_a8 + 0x18);
      FUN_14688bc9a(&local_b0);
    } while (local_a8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146898f1c FUN_146898f1c body=141 status=ok
// SIG undefined FUN_146898f1c(void)

void FUN_146898f1c(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(longlong *)(param_1 + 0x50);
  }
  local_18 = 0xffffffff;
  local_14 = 0;
  local_12 = 0;
  local_28 = param_1;
  FUN_144a2daf0(&local_28);
  if (local_20 != 0) {
    do {
      local_20 = *(longlong *)(local_20 + 0x18);
      FUN_144a2daf0(&local_28);
    } while (local_20 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146898fba FUN_146898fba body=47 status=ok
// SIG undefined FUN_146898fba(void)

void FUN_146898fba(longlong param_1)

{
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) {
    return;
  }
  FUN_145dd2478(param_1 + 0x28);
  FUN_146820ec8(param_1 + 0x28);
  return;
}



// FUNCTION 14689904c FUN_14689904c body=459 status=ok
// SIG undefined FUN_14689904c(void)

void FUN_14689904c(longlong param_1,longlong param_2)

{
  undefined1 auStack_168 [40];
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_146898e0c(param_1 + 0x28);
  if (param_2 == 0) {
    local_130 = 0;
  }
  else {
    local_130 = *(longlong *)(param_2 + 0x48);
  }
  local_128 = 0xffffffff;
  local_124 = 0;
  local_122 = 0;
  local_138 = param_2;
  FUN_1468b2202(&local_138);
  if (local_130 != 0) {
    do {
      local_e8 = 0;
      local_e0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_146898e0c(&local_108);
      if ((local_d4 < (int)uStack_100) || (local_84 < (int)uStack_b0)) {
        local_140 = *(undefined8 *)(local_130 + 0x18);
        local_120 = &local_140;
        local_118 = &local_108;
        FUN_1468b22b8(param_1 + 200,local_10c,&local_120);
      }
      FUN_145caebfe(&local_108);
      local_130 = *(longlong *)(local_130 + 0x28);
      FUN_1468b2202(&local_138);
    } while (local_130 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146899218 FUN_146899218 body=361 status=ok
// SIG undefined FUN_146899218(void)

void FUN_146899218(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146898f1c(param_2);
  if (param_2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(longlong *)(param_2 + 0x48);
  }
  local_28 = 0xffffffff;
  local_24 = 0;
  local_22 = 0;
  local_38 = param_2;
  FUN_14164c386(&local_38);
  if (local_30 != 0) {
    do {
      if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
        lVar1 = *(longlong *)(local_30 + 0x18);
        uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar4 = (uint)lVar1 & 0xffff;
        lVar3 = *(longlong *)(param_1 + 0x108);
        if (*(longlong *)(param_1 + 0x108) == 0) {
          lVar3 = param_1 + 0x100;
        }
        iVar5 = *(int *)(lVar3 + (ulonglong)
                                 (*(int *)(param_1 + 0x110) - 1U &
                                 (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            lVar3 = *(longlong *)(param_1 + 200) + (longlong)iVar5 * 0xb0;
            if (*(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar5 * 0xb0) == lVar1) {
              if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
                FUN_146898f1c();
              }
              break;
            }
            iVar5 = *(int *)(lVar3 + 0xa8);
          } while (iVar5 != -1);
        }
      }
      local_30 = *(longlong *)(local_30 + 0x28);
      FUN_14164c386(&local_38);
    } while (local_30 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146899382 FUN_146899382 body=99 status=ok
// SIG undefined FUN_146899382(void)

void FUN_146899382(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 1468993e6 FUN_1468993e6 body=124 status=ok
// SIG undefined FUN_1468993e6(void)

undefined8 * FUN_1468993e6(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_14050315a(param_1,param_2,0);
  return param_1;
}



// FUNCTION 146899462 FUN_146899462 body=392 status=ok
// SIG undefined FUN_146899462(void)

void FUN_146899462(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x10) * 0x18,
             (longlong)*(int *)(param_1 + 0x14) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x30) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x34) + 0x1fU >> 3 & 0xfffffffc);
  lVar4 = (longlong)*(int *)(param_1 + 0x50) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar4,lVar4);
  lVar4 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar4;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar4)) {
    do {
      lVar2 = *local_80;
      lVar3 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x18) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,0xd0,0xd0);
        FUN_1468995ec(*(undefined8 *)(lVar2 + lVar3 * 0x18 + 8),param_2);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar4 || iStack_64 != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468995ec FUN_1468995ec body=250 status=ok
// SIG undefined FUN_1468995ec(void)

void FUN_1468995ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x28) * 0x18,
             (longlong)*(int *)(param_1 + 0x2c) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x38) * 0x18,
             (longlong)*(int *)(param_1 + 0x3c) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x58) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x5c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x78) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x88) * 0x18,
             (longlong)*(int *)(param_1 + 0x8c) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0xa8) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0xac) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 200) << 2;
                    /* WARNING: Could not recover jumptable at 0x0001468996e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 1468996ee FUN_1468996ee body=318 status=ok
// SIG undefined FUN_1468996ee(void)

void FUN_1468996ee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x38) << 4,
               (longlong)*(int *)(param_1 + 0x3c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x58) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x5c) + 0x1fU >> 3 & 0xfffffffc);
    lVar1 = (longlong)*(int *)(param_1 + 0x78) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x88) << 4,
               (longlong)*(int *)(param_1 + 0x8c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0xa8) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0xac) + 0x1fU >> 3 & 0xfffffffc);
    lVar1 = (longlong)*(int *)(param_1 + 200) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1c8);
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146899842 FUN_146899842 body=42 status=ok
// SIG undefined FUN_146899842(void)

void FUN_146899842(undefined8 param_1,longlong *param_2)

{
  FUN_146821de0();
                    /* WARNING: Could not recover jumptable at 0x000146899869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0x10,0x10);
  return;
}



// FUNCTION 14689986c FUN_14689986c body=84 status=ok
// SIG undefined FUN_14689986c(void)

undefined8 * FUN_14689986c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14626c74e();
  *param_1 = &PTR_FUN_149e73df0;
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = 0;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0xb8) + -8))();
    param_1[0x17] = uVar1;
  }
  return param_1;
}



// FUNCTION 1468998c0 FUN_1468998c0 body=42 status=ok
// SIG undefined FUN_1468998c0(void)

void FUN_1468998c0(undefined8 param_1,longlong *param_2)

{
  FUN_146821cfa();
                    /* WARNING: Could not recover jumptable at 0x0001468998e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0x10,0x10);
  return;
}



// FUNCTION 1468998ea FUN_1468998ea body=8 status=ok
// SIG undefined FUN_1468998ea(void)

void FUN_1468998ea(undefined8 param_1)

{
  DAT_14c949520 = param_1;
  return;
}



// FUNCTION 1468998f2 FUN_1468998f2 body=105 status=ok
// SIG undefined FUN_1468998f2(void)

undefined8 FUN_1468998f2(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (DAT_14c9495b0 != DAT_14c9495dc) {
    puVar2 = &DAT_14c9495e0;
    if (DAT_14c9495e8 != (undefined4 *)0x0) {
      puVar2 = DAT_14c9495e8;
    }
    uVar3 = puVar2[DAT_14c9495f0 - 1U & param_1];
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(DAT_14c9495a8 + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_1) {
          if (puVar1 == (uint *)0x0) {
            return 0;
          }
          return *(undefined8 *)(puVar1 + 2);
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14689995c FUN_14689995c body=119 status=ok
// SIG undefined FUN_14689995c(void)

undefined4
FUN_14689995c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  
  FUN_141519128(&DAT_14c949608);
  uVar1 = FUN_140159c68(param_1,param_2,param_3,param_4,param_5);
  if (DAT_14c949614 < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c949608);
  }
  else {
    GetCurrentThreadId();
    DAT_14c949614 = DAT_14c949614 + -1;
  }
  return uVar1;
}



// FUNCTION 1468999d4 FUN_1468999d4 body=258 status=ok
// SIG undefined FUN_1468999d4(void)

undefined4 FUN_1468999d4(uint param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [40];
  uint *local_e0;
  undefined4 local_d8;
  longlong local_d0 [2];
  uint local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c0 = param_1 | param_3 | 0x20000;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_ac = param_2[2];
  local_50 = 0;
  local_48 = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_7c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_bc._0_4_ = (undefined4)uVar1;
  local_bc._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_b4._0_4_ = (undefined4)uVar2;
  uStack_b4._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_a4 = (undefined4)local_bc;
  uStack_a0 = local_bc._4_4_;
  uStack_9c = (undefined4)uStack_b4;
  uStack_98 = uStack_b4._4_4_;
  local_bc = uVar1;
  uStack_b4 = uVar2;
  local_94 = local_ac;
  FUN_140056680(local_d0,L"RemoveKnownMissing");
  local_d8 = 1;
  local_e0 = &local_c0;
  uVar3 = FUN_1427dfc98();
  if (local_d0[0] != 0) {
    FUN_1400020a8();
  }
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_70);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146899ad8 FUN_146899ad8 body=152 status=ok
// SIG undefined FUN_146899ad8(void)

void FUN_146899ad8(uint param_1,uint param_2)

{
  DWORD DVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &DAT_14c949608;
  local_20 = 0;
  DVar1 = GetCurrentThreadId();
  if (DAT_14c949610 != DVar1) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c949608);
    LOCK();
    UNLOCK();
    DAT_14c949610 = DVar1;
  }
  DAT_14c949614 = DAT_14c949614 + 1;
  lVar2 = FUN_1468998f2(param_1 | param_2 | 0x20000);
  if (lVar2 != 0) {
    FUN_1468b34dc(lVar2);
  }
  FUN_141072054(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146899b72 FUN_146899b72 body=527 status=ok
// SIG undefined FUN_146899b72(void)

ulonglong FUN_146899b72(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  
  uVar1 = *param_1;
  plVar3 = (longlong *)FUN_1468998f2(uVar1);
  if (plVar3 != (longlong *)0x0) {
    uVar14 = uVar1 & 0x3000000;
    if (uVar14 == 0) {
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        lVar12 = *(longlong *)(param_1 + (ulonglong)((uVar1 & 0xc0) != 0) * 4 + 1);
        uVar2 = (uint)((ulonglong)lVar12 >> 0x10);
        uVar7 = (uint)lVar12 & 0xffff;
        plVar6 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar3[8];
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar3[9] - 1U &
                        (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar7) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            lVar10 = *plVar3 + (longlong)iVar8 * 0x20;
            if (*(longlong *)(*plVar3 + (longlong)iVar8 * 0x20) == lVar12) {
              if (lVar10 != 0) {
                puVar13 = (undefined8 *)(lVar10 + 8);
                goto LAB_146899bb9;
              }
              break;
            }
            iVar8 = *(int *)(lVar10 + 0x18);
          } while (iVar8 != -1);
        }
      }
    }
    else {
      if (uVar14 == 0x3000000) {
        puVar13 = (undefined8 *)plVar3[10];
      }
      else if ((uVar1 >> 0x18 & 1) == 0) {
        if ((uVar1 >> 0x19 & 1) == 0) goto LAB_146899c9b;
        puVar13 = (undefined8 *)(plVar3[10] + 0x20);
      }
      else {
        puVar13 = (undefined8 *)(plVar3[10] + 0x10);
      }
LAB_146899bb9:
      if ((puVar13 != (undefined8 *)0x0) &&
         (uVar4 = (ulonglong)*(int *)(puVar13 + 1), 0 < (longlong)uVar4)) {
        puVar5 = (uint *)*puVar13;
        uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        uVar9 = 0;
        do {
          if (((((*puVar5 == uVar1) && (*(longlong *)(puVar5 + 1) == *(longlong *)(param_1 + 1))) &&
               (*(longlong *)(puVar5 + 3) == *(longlong *)(param_1 + 3))) &&
              ((*(longlong *)(puVar5 + 5) == *(longlong *)(param_1 + 5) &&
               (*(longlong *)(puVar5 + 7) == *(longlong *)(param_1 + 7))))) &&
             ((*(longlong *)(puVar5 + 9) == *(longlong *)(param_1 + 9) &&
              (*(longlong *)(puVar5 + 0xb) == *(longlong *)(param_1 + 0xb))))) {
            FUN_1468b36d2(puVar13);
            FUN_1468b374a(puVar13);
            break;
          }
          uVar9 = uVar9 + 1;
          uVar11 = CONCAT71((int7)(uVar11 >> 8),uVar9 < uVar4);
          puVar5 = puVar5 + 0x28;
        } while (uVar4 != uVar9);
        if ((uVar14 != 0) && ((char)uVar11 != '\0')) {
          plVar3 = (longlong *)plVar3[10];
          *(undefined2 *)(plVar3 + 8) = 0x10;
          memset((void *)((longlong)plVar3 + 0x42),(int)CONCAT71((int7)(uVar9 >> 8),0xff),0x400);
          uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
          if ((longlong)(int)plVar3[1] != 0) {
            lVar12 = *plVar3;
            lVar10 = (longlong)(int)plVar3[1] * 0xa0;
            do {
              FUN_1415d68b8(plVar3,lVar12);
              lVar12 = lVar12 + 0xa0;
              lVar10 = lVar10 + -0xa0;
            } while (lVar10 != 0);
          }
        }
        goto LAB_146899c9d;
      }
    }
  }
LAB_146899c9b:
  uVar11 = 0;
LAB_146899c9d:
  return uVar11 & 0xffffff01;
}



// FUNCTION 146899d82 FUN_146899d82 body=396 status=ok
// SIG undefined FUN_146899d82(void)

undefined8 FUN_146899d82(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  cVar1 = FUN_1403f35db(param_1,&DAT_14c8687c0);
  if (cVar1 != '\0') {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar2 = 2;
    if ((((DAT_14c892ce4 == param_2) || (uVar2 = 4, DAT_14c892ce8 == param_2)) ||
        (uVar2 = 8, DAT_14c892e6c == param_2)) ||
       ((uVar2 = 0x40, DAT_14c892e7c == param_2 || (uVar2 = 0x10, DAT_14c892cec == param_2))))
    goto LAB_146899ef0;
    FUN_1400021e4(&local_28,local_38);
    cVar1 = FUN_144a38768(local_38,L"Property",8,1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0x20;
    if (cVar1 != '\0') goto LAB_146899ef0;
  }
  FUN_1400021e4(&local_28,local_38);
  cVar1 = FUN_144a38768(local_38,L"GeneratedClass",0xe,1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  uVar2 = 2;
  if (cVar1 == '\0') {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar2 = 1;
    if (DAT_14c892f38 == param_2) {
      uVar2 = 8;
    }
  }
LAB_146899ef0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146899f10 FUN_146899f10 body=42 status=ok
// SIG undefined FUN_146899f10(void)

void FUN_146899f10(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1409ce9d2();
    return;
  }
  return;
}



// FUNCTION 146899f3c FUN_146899f3c body=295 status=ok
// SIG undefined FUN_146899f3c(void)

void FUN_146899f3c(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_14689a064(param_1,&local_40);
    local_60 = *(undefined2 **)(param_1 + 0x18);
    FUN_1400021e4(&local_60,&local_50);
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
      lVar4 = (longlong)*(int *)(param_1 + 0x48) << 4;
      do {
        FUN_1400021e4(puVar3,&local_60);
        puVar2 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar2 = local_50;
        }
        puVar1 = &DAT_149dfb77a;
        if (local_38 != 0) {
          puVar1 = local_40;
        }
        FUN_1448097c4(&local_60,puVar1,puVar2,1);
        puVar2 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar2 = local_60;
        }
        FUN_1446f470e(&local_68,puVar2,1);
        *puVar3 = local_68;
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar3 = puVar3 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689a064 FUN_14689a064 body=177 status=ok
// SIG undefined FUN_14689a064(void)

longlong FUN_14689a064(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x48) < 1) {
    local_20 = 0;
  }
  else {
    local_20 = *(undefined8 *)
                (*(longlong *)(param_1 + 0x40) + -0x10 + (longlong)*(int *)(param_1 + 0x48) * 0x10);
  }
  FUN_1400021e4(&local_20,param_2);
  local_38 = 0;
  local_30 = 0xffffffff;
  iVar1 = FUN_1447ee042(param_2,&DAT_149e5e24e,2,0);
  iVar2 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  FUN_14496493a(param_2,iVar3,-(iVar1 - iVar2),0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689a11a FUN_14689a11a body=186 status=ok
// SIG undefined FUN_14689a11a(void)

undefined8 FUN_14689a11a(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined *local_60;
  undefined4 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  code *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &local_11;
  local_11 = '\x01';
  local_40 = &local_20;
  local_20 = 0;
  local_28 = &local_50;
  local_30 = FUN_1427f0728;
  local_60 = &DAT_149e06184;
  local_58 = 1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_50 = param_1;
  local_38 = param_3;
  FUN_1403deae6(&local_78,&local_60,&local_30,6);
  uVar1 = 0xffffffffffffffff;
  if (local_11 != '\0') {
    uVar1 = local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689a1d6 FUN_14689a1d6 body=142 status=ok
// SIG undefined FUN_14689a1d6(void)

bool FUN_14689a1d6(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
    if ((int)uVar1 < 1) {
      bVar5 = false;
    }
    else {
      lVar3 = 0;
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar3) == param_2) {
          return true;
        }
        bVar4 = (ulonglong)uVar1 * 0x10 + -0x10 != lVar3;
        bVar5 = false;
        lVar3 = lVar3 + 0x10;
      } while (bVar4);
    }
  }
  else {
    bVar5 = param_2 == 0;
    if ((!bVar5) && (uVar1 - 1 != 0)) {
      lVar3 = 0;
      do {
        uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar3);
        param_2 = (-(ulonglong)((uVar2 - 1 & uVar2) != 0) | ~uVar2) & param_2;
        if (param_2 == 0) {
          return true;
        }
        bVar4 = (ulonglong)(uVar1 - 1) * 0x10 + -0x10 != lVar3;
        bVar5 = false;
        lVar3 = lVar3 + 0x10;
      } while (bVar4);
    }
  }
  return bVar5;
}



// FUNCTION 14689a264 FUN_14689a264 body=615 status=ok
// SIG undefined FUN_14689a264(void)

longlong FUN_14689a264(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88 [2];
  undefined8 local_80;
  byte *local_78;
  byte local_69;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  local_78 = &local_69;
  local_69 = 0;
  local_88[0] = param_2;
  local_80 = param_3;
  if (param_1 == 0) {
    local_60 = 0x100000000;
    uStack_58 = &DAT_14c949630;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    if (DAT_14c949648 == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar6 = DAT_14c949648;
    }
    uStack_90 = CONCAT44(uStack_44,uStack_48);
    local_98 = local_50;
    uVar3 = local_98;
    local_a8 = (undefined4)local_60;
    uStack_a4 = local_60._4_4_;
    uStack_a0 = (undefined4)uStack_58;
    uStack_9c = uStack_58._4_4_;
    local_b0 = &DAT_14c949620;
    local_98._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if ((local_98._4_4_ != iVar6) || (uStack_58 != &DAT_14c949630)) {
      iVar4 = local_98._4_4_;
      local_98 = uVar3;
      do {
        FUN_1427e122c(local_88,&local_68,*(undefined8 *)(*local_b0 + (longlong)iVar4 * 0x60));
        lVar8 = local_68;
        if (((local_68 != 0) && ((param_2 & 8) == 0)) && ((local_69 & 1) != 0)) break;
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
        FUN_1449c0562(&local_a8);
        iVar4 = local_98._4_4_;
      } while (local_b0 != &DAT_14c949620 ||
               ((undefined *)CONCAT44(uStack_9c,uStack_a0) != &DAT_14c949630 ||
               local_98._4_4_ != iVar6));
      goto LAB_14689a3d5;
    }
  }
  else {
    uVar3 = local_98;
    if (DAT_14c949628 != DAT_14c949654) {
      uVar2 = (uint)((ulonglong)param_1 >> 0x10);
      uVar5 = (uint)param_1 & 0xffff;
      puVar7 = &DAT_14c949658;
      if (DAT_14c949660 != (undefined *)0x0) {
        puVar7 = DAT_14c949660;
      }
      iVar6 = *(int *)(puVar7 + (ulonglong)
                                (DAT_14c949668 - 1U &
                                (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar5)
                                + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        lVar8 = 0;
        do {
          lVar1 = DAT_14c949620 + (longlong)iVar6 * 0x60;
          if (*(longlong *)(DAT_14c949620 + (longlong)iVar6 * 0x60) == param_1) {
            if (lVar1 == -8 || lVar1 == 0) goto LAB_14689a3d3;
            FUN_1427e122c(local_88,&local_68,param_1);
            lVar8 = local_68;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x58);
        } while (iVar6 != -1);
        goto LAB_14689a3d5;
      }
    }
  }
LAB_14689a3d3:
  local_98 = uVar3;
  lVar8 = 0;
LAB_14689a3d5:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 14689a4cc FUN_14689a4cc body=345 status=ok
// SIG undefined FUN_14689a4cc(void)

undefined8 * FUN_14689a4cc(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && ((*(byte *)((longlong)param_1 + 0x51) & 1) != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    puVar6 = (undefined4 *)&DAT_149dfb77a;
    do {
      uVar3 = -param_3 & param_3;
      uVar4 = 0xffffffff;
      if (0 < (longlong)(int)param_1[9]) {
        puVar1 = (ulonglong *)(param_1[8] + 8);
        uVar2 = 0;
        do {
          if (*puVar1 == uVar3) {
            uVar4 = uVar2 & 0xffffffff;
            break;
          }
          uVar2 = uVar2 + 1;
          puVar1 = puVar1 + 2;
        } while ((longlong)(int)param_1[9] != uVar2);
      }
      (**(code **)(*param_1 + 0x2b8))(param_1,&local_58,uVar4);
      puVar5 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar5 = local_58;
      }
      FUN_1407c8b48(param_2,L"%s%s",puVar6,puVar5);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      bVar7 = uVar3 == param_3;
      puVar6 = &DAT_149e895f6;
      param_3 = uVar3 ^ param_3;
      if (bVar7) {
        if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    } while( true );
  }
  uVar3 = 0xffffffff;
  if (0 < (longlong)(int)param_1[9]) {
    puVar1 = (ulonglong *)(param_1[8] + 8);
    uVar4 = 0;
    do {
      if (*puVar1 == param_3) {
        uVar3 = uVar4 & 0xffffffff;
        break;
      }
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 2;
    } while ((longlong)(int)param_1[9] != uVar4);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 14689a626 FUN_14689a626 body=291 status=ok
// SIG undefined FUN_14689a626(void)

undefined8 FUN_14689a626(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2;
  local_70 = param_1;
  if ((param_3 == 0) || ((*(byte *)(param_1 + 0x51) & 1) == 0)) {
    FUN_1427f07e4(&local_70,local_68,param_3);
  }
  else {
    local_68[0] = 0;
    local_68[1] = 0;
    puVar2 = (undefined4 *)&DAT_149dfb77a;
    do {
      uVar4 = -param_3 & param_3;
      FUN_1427f07e4(&local_70,local_68 + 2,uVar4);
      puVar3 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar3 = local_58;
      }
      FUN_1407c8b48(local_68,L"%s%s",puVar2,puVar3);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      bVar5 = uVar4 != param_3;
      puVar2 = &DAT_149e895f6;
      param_3 = uVar4 ^ param_3;
    } while (bVar5);
  }
  uVar1 = local_78;
  FUN_140233b1a(local_78,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14689a74a FUN_14689a74a body=22 status=ok
// SIG undefined FUN_14689a74a(void)

undefined8 FUN_14689a74a(undefined8 param_1,undefined8 param_2)

{
  FUN_1401cfb1c();
  return param_2;
}



// FUNCTION 14689a760 FUN_14689a760 body=80 status=ok
// SIG undefined FUN_14689a760(void)

undefined8 FUN_14689a760(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar1 = 0xffffffff;
  if (0 < (longlong)(int)param_1[9]) {
    plVar2 = (longlong *)(param_1[8] + 8);
    uVar3 = 0;
    do {
      if (*plVar2 == param_3) {
        uVar1 = uVar3 & 0xffffffff;
        break;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 2;
    } while ((longlong)(int)param_1[9] != uVar3);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 14689a7b0 FUN_14689a7b0 body=48 status=ok
// SIG undefined FUN_14689a7b0(void)

undefined8 FUN_14689a7b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1401e9588();
  if (iVar1 == -1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar1 * 0x10);
  }
  return uVar2;
}



// FUNCTION 14689a7e0 FUN_14689a7e0 body=176 status=ok
// SIG undefined FUN_14689a7e0(void)

longlong FUN_14689a7e0(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  local_30 = *param_1;
  cVar1 = FUN_146816c14();
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    puVar3 = local_28;
    if ((int)uStack_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_38,puVar3,0);
    lVar2 = FUN_1409678c4(0,local_38,0,0);
    if (lVar2 != -1) {
      *param_1 = local_30;
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14689a898 FUN_14689a898 body=173 status=ok
// SIG undefined FUN_14689a898(void)

void FUN_14689a898(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x70);
  if (lVar2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(undefined8 *)(lVar2 + 0x20);
  }
  local_38 = param_1;
  plVar1 = (longlong *)
           (**(code **)(*(longlong *)(lVar2 + 8) + 0x40))
                     (&local_38,&local_30,*(undefined4 *)(lVar2 + 0x28));
  (**(code **)(*plVar1 + 0x48))(plVar1,lVar2);
  *(longlong **)(param_1 + 0x70) = plVar1;
  FUN_145a1bbc6(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689a946 FUN_14689a946 body=171 status=ok
// SIG undefined FUN_14689a946(void)

undefined8 FUN_14689a946(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  FUN_140056680(param_2,L"ENUM");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689a9f2 FUN_14689a9f2 body=202 status=ok
// SIG undefined FUN_14689a9f2(void)

undefined8 FUN_14689a9f2(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
            (*(longlong **)(param_1 + 0x70),&local_40,0,0);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FUN_1400021e4(&local_30,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"enum class %s : %s;",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689aabe FUN_14689aabe body=54 status=ok
// SIG undefined FUN_14689aabe(void)

void FUN_14689aabe(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14689aaf4 FUN_14689aaf4 body=1 status=ok
// SIG undefined FUN_14689aaf4(void)

void FUN_14689aaf4(void)

{
  return;
}



// FUNCTION 14689aaf5 FUN_14689aaf5 body=141 status=ok
// SIG undefined FUN_14689aaf5(void)

void FUN_14689aaf5(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(*param_1 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  puVar1 = (undefined1 *)*puVar3 + 1;
  if ((undefined1 *)puVar3[1] < puVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_29,1);
  }
  else {
    local_29 = *(undefined1 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  FUN_1427e15ea(local_29,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689ab83 FUN_14689ab83 body=141 status=ok
// SIG undefined FUN_14689ab83(void)

void FUN_14689ab83(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(*param_1 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  puVar1 = (undefined1 *)*puVar3 + 1;
  if ((undefined1 *)puVar3[1] < puVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_29,1);
  }
  else {
    local_29 = *(undefined1 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  FUN_1427f0920(local_29,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689ac2c FUN_14689ac2c body=95 status=ok
// SIG undefined FUN_14689ac2c(void)

void FUN_14689ac2c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1468984f2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00014689ac71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),param_2);
    return;
  }
  return;
}



// FUNCTION 14689ac8c FUN_14689ac8c body=222 status=ok
// SIG undefined FUN_14689ac8c(void)

undefined8 FUN_14689ac8c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1403a5ef6();
  if (DAT_14c949700 != DAT_14c94972c) {
    lVar3 = *param_1;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c949730;
    if (DAT_14c949738 != (undefined *)0x0) {
      puVar7 = DAT_14c949738;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c949740 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c9496f8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        if (plVar1[1] == 0) {
          return 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014689ad67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(plVar1[1] + 0x40))(param_2,param_3,param_4);
        return uVar5;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  return 0;
}



// FUNCTION 14689ad6a FUN_14689ad6a body=285 status=ok
// SIG undefined FUN_14689ad6a(void)

longlong * FUN_14689ad6a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = *(longlong *)*param_2;
  }
  (**(code **)(*param_1 + 0x160))();
  if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_14689adca;
  if ((local_20 == 0) || (FUN_1403a5ef6(), DAT_14c949700 == DAT_14c94972c)) {
LAB_14689adc5:
    lVar3 = 0;
  }
  else {
    uVar2 = (uint)((ulonglong)local_20 >> 0x10);
    uVar4 = (uint)local_20 & 0xffff;
    puVar5 = &DAT_14c949730;
    if (DAT_14c949738 != (undefined *)0x0) {
      puVar5 = DAT_14c949738;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14c949740 - 1U &
                              (int)((ulonglong)local_20 >> 0x20) + ((uint)local_20 << 0x10 | uVar4)
                              + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar6 == -1) goto LAB_14689adc5;
    lVar3 = 0;
    do {
      plVar1 = (longlong *)(DAT_14c9496f8 + (longlong)iVar6 * 0x18);
      if (*plVar1 == local_20) {
        if (plVar1 == (longlong *)0x0) goto LAB_14689adc5;
        lVar3 = plVar1[1];
        break;
      }
      iVar6 = (int)plVar1[2];
    } while (iVar6 != -1);
  }
  *param_2 = lVar3;
LAB_14689adca:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14689ae88 FUN_14689ae88 body=91 status=ok
// SIG undefined FUN_14689ae88(void)

ulonglong * FUN_14689ae88(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulonglong *)(uVar1 + 0x10);
    *param_2 = uVar1;
    if ((uVar1 & 1) == 0) {
      return param_2;
    }
    if ((uVar1 & 0xfffffffffffffffe) == 0) {
      return param_2;
    }
    if (DAT_14c950c29 != '\x01') {
      return param_2;
    }
  }
  else {
    uVar1 = *(ulonglong *)((uVar1 & 0xfffffffffffffffe) + 0x20);
    *param_2 = uVar1 | 1;
    if ((uVar1 & 0xfffffffffffffffe) == 0) {
      return param_2;
    }
    if (DAT_14c950c29 == '\0') {
      return param_2;
    }
  }
  FUN_1456cec3c();
  return param_2;
}



// FUNCTION 14689aee4 FUN_14689aee4 body=21 status=ok
// SIG undefined FUN_14689aee4(void)

ulonglong FUN_14689aee4(ulonglong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  wchar_t *pwStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  wchar_t *pwStack_60;
  undefined4 uStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [8];
  ulonglong uStack_28;
  
  uVar4 = *param_1;
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_14570ab3e(uVar4 & 0xfffffffffffffffe);
    return uVar4;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(ulonglong *)(uVar4 + 0x10);
  if ((uVar4 & 1) == 0) {
    if (1 < uVar4) {
      uVar5 = 0;
      do {
        uVar4 = *(ulonglong *)(uVar4 + 0x10);
        if ((uVar4 & 1) != 0) goto LAB_14496b416;
      } while (1 < uVar4);
      goto LAB_14496b457;
    }
  }
  else {
LAB_14496b416:
    uVar5 = uVar4 & 0xfffffffffffffffe;
    if (uVar5 != 0) {
      if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c(uVar5);
      }
      if (DAT_14c949118 == 0) {
        pcStack_38 = FUN_140631fbe;
        lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar1;
        FUN_1446f470e(auStack_30,L"Class",1);
        puStack_48 = &LAB_146891e90;
        puStack_50 = &LAB_146273097;
        pwStack_60 = L"Engine";
        uStack_58 = 199;
        uStack_68 = 0x20;
        uStack_70 = 0x10000000;
        pwStack_78 = (wchar_t *)CONCAT44(pwStack_78._4_4_,8);
        ppcStack_40 = &pcStack_38;
        FUN_14574b4b2(lVar1);
        DAT_14c949118 = lVar1;
        uVar2 = FUN_144a7a812();
        lVar1 = DAT_14c949118;
        uVar3 = FUN_1449e2fb2();
        pwStack_78 = L"Class";
        FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
      }
      if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_28 ^ (ulonglong)auStack_98);
      }
      goto LAB_14496b457;
    }
  }
  uVar5 = 0;
LAB_14496b457:
  if ((uStack_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14689aefa FUN_14689aefa body=153 status=ok
// SIG undefined FUN_14689aefa(void)

undefined8 FUN_14689aefa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(*(undefined8 *)(param_1 + 8));
  FUN_1400020e8(param_2,&DAT_149e001d8,1);
  FUN_14689af94(param_1,&local_38,0);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_38,iVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689af94 FUN_14689af94 body=194 status=ok
// SIG undefined FUN_14689af94(void)

undefined8 * FUN_14689af94(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_14689b1ec(param_1,param_3,&local_238);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_248,local_238,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  if ((undefined8 *)&local_248 == param_2) {
    if (CONCAT44(uStack_244,local_248) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_248;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_244;
    *(undefined4 *)(param_2 + 1) = uStack_240;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_23c;
  }
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689b058 FUN_14689b058 body=125 status=ok
// SIG undefined FUN_14689b058(void)

undefined8 FUN_14689b058(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    if (uVar1 == 0) {
      FUN_140056680(param_2,&DAT_149e01fe8);
      if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    puVar2 = (undefined8 *)(uVar1 + 0x20);
  }
  else {
    local_18 = *(undefined8 *)((uVar1 & 0xfffffffffffffffe) + 0x18);
    puVar2 = &local_18;
  }
  FUN_1400021e4(puVar2,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14689b0d6 FUN_14689b0d6 body=88 status=ok
// SIG undefined FUN_14689b0d6(void)

void FUN_14689b0d6(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  do {
    if ((uVar1 & 1) != 0) {
      if ((uVar1 & 0xfffffffffffffffe) == 0) {
        uVar1 = 0;
      }
      else if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c();
      }
      uVar1 = uVar1 & 0xfffffffffffffffe;
LAB_14689b121:
      FUN_144a79778(uVar1);
      return;
    }
    if (uVar1 < 2) {
      uVar1 = 0;
      goto LAB_14689b121;
    }
    uVar1 = *(ulonglong *)(uVar1 + 0x10);
  } while( true );
}



// FUNCTION 14689b13c FUN_14689b13c body=1 status=ok
// SIG undefined FUN_14689b13c(void)

void FUN_14689b13c(void)

{
  return;
}



// FUNCTION 14689b13e FUN_14689b13e body=139 status=ok
// SIG undefined FUN_14689b13e(void)

uint FUN_14689b13e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  for (uVar2 = *(ulonglong *)(param_1 + 0x10); (uVar2 & 1) == 0;
      uVar2 = *(ulonglong *)(uVar2 + 0x10)) {
    if (uVar2 < 2) goto LAB_14689b1b7;
  }
  uVar2 = uVar2 & 0xfffffffffffffffe;
  if (uVar2 == 0) {
LAB_14689b1b7:
    uVar1 = 0;
  }
  else {
    if (DAT_14c950c29 != '\0') {
      FUN_1456cec3c(uVar2);
    }
    do {
      uVar1 = *(uint *)(uVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      uVar1 = *(uint *)(lVar3 + 8) >> 0x1e & 1;
    } while ((uVar1 == 0) && (uVar2 = *(ulonglong *)(uVar2 + 0x20), uVar2 != 0));
  }
  return uVar1;
}



// FUNCTION 14689b1ca FUN_14689b1ca body=34 status=ok
// SIG undefined FUN_14689b1ca(void)

void FUN_14689b1ca(void)

{
  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Field.cpp",0x225,L"FField::AddCppProperty");
  return;
}



// FUNCTION 14689b1ec FUN_14689b1ec body=548 status=ok
// SIG undefined FUN_14689b1ec(void)

void FUN_14689b1ec(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  local_e0 = uVar6;
  if ((((uVar6 & 1) != 0) && ((uVar6 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  if (1 < uVar6) {
    do {
      uVar2 = local_50;
      if ((uVar6 & 1) != 0) {
        FUN_144750bde(uVar6 & 0xfffffffffffffffe,param_2,param_3);
        puVar5 = *(undefined2 **)(param_3 + 8);
        if (*(undefined2 **)(param_3 + 0x10) <= puVar5 + 1) {
          FUN_140213274(param_3,1);
          puVar5 = *(undefined2 **)(param_3 + 8);
        }
        *(undefined2 **)(param_3 + 8) = puVar5 + 1;
        *puVar5 = 0x3a;
        break;
      }
      uVar1 = *(undefined8 *)(uVar6 + 0x20);
      lVar7 = (longlong)(int)local_50;
      uVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar3);
      if (local_50._4_4_ < uVar3) {
        FUN_1468b3bb8(local_d8,uVar2 & 0xffffffff);
      }
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_d8;
      }
      *(undefined8 *)(puVar4 + lVar7 * 8) = uVar1;
      FUN_14689ae88(&local_e0,&local_e8);
      uVar6 = local_e8;
      local_e0 = local_e8;
      if ((((local_e8 & 1) != 0) && ((local_e8 & 0xfffffffffffffffe) != 0)) &&
         (DAT_14c950c29 == '\x01')) {
        FUN_1456cec3c();
      }
    } while (1 < uVar6);
  }
  lVar7 = (longlong)(int)local_50;
  if (0 < lVar7) {
    lVar8 = lVar7 * 8;
    uVar6 = lVar7 + 1;
    do {
      lVar8 = lVar8 + -8;
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_d8;
      }
      FUN_14005eb5c(puVar4 + lVar8,param_3);
      puVar5 = *(undefined2 **)(param_3 + 8);
      if (*(undefined2 **)(param_3 + 0x10) <= puVar5 + 1) {
        FUN_140213274(param_3,1);
        puVar5 = *(undefined2 **)(param_3 + 8);
      }
      *puVar5 = 0x2e;
      *(undefined2 **)(param_3 + 8) = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  if (param_1 == 0) {
    local_e0 = 0;
  }
  else {
    local_e0 = *(ulonglong *)(param_1 + 0x20);
  }
  FUN_14005eb5c(&local_e0,param_3);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14689b411 FUN_14689b411 body=50 status=ok
// SIG undefined FUN_14689b411(void)

undefined8 FUN_14689b411(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_140056680(param_1,&DAT_149e62e78);
  }
  else {
    FUN_14689aefa(param_2,param_1);
  }
  return param_1;
}



// FUNCTION 14689b444 FUN_14689b444 body=416 status=ok
// SIG undefined FUN_14689b444(void)

undefined8 FUN_14689b444(longlong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_50 = &local_59;
  local_58 = FUN_141073f72;
  lVar3 = FUN_144a773aa(&local_58,&DAT_14c75ec34);
  lVar3 = *(longlong *)(lVar3 + 0x58);
  if ((lVar3 != 0) && (lVar6 = *(longlong *)(lVar3 + 0x30), lVar6 != 0)) {
    lVar4 = FUN_1449e2fb2();
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      local_58 = (code *)0x0;
      uStack_50 = (undefined1 *)0x0;
      lVar6 = *(longlong *)(lVar3 + 0x30);
      if (lVar6 == 0) {
        iVar7 = *(int *)(param_1 + 0x18);
        uStack_50._0_4_ = 0;
        if (0 < iVar7) goto LAB_14689b59f;
LAB_14689b5cb:
        uVar5 = 0;
      }
      else {
        do {
          puVar1 = uStack_50;
          uVar5 = *(undefined8 *)(lVar6 + 0x18);
          lVar4 = (longlong)(int)uStack_50;
          uVar2 = (int)uStack_50 + 1;
          uStack_50 = (undefined1 *)CONCAT44(uStack_50._4_4_,uVar2);
          if (uStack_50._4_4_ < uVar2) {
            FUN_1446f84a2(&local_58,(ulonglong)puVar1 & 0xffffffff);
          }
          *(undefined8 *)(local_58 + lVar4 * 8) = uVar5;
          lVar6 = *(longlong *)(lVar6 + 0x20);
        } while (lVar6 != 0);
        iVar7 = *(int *)(param_1 + 0x18);
        if (iVar7 <= (int)uStack_50) goto LAB_14689b5cb;
        if (0 < (int)uStack_50) {
          uVar5 = 0;
          lVar6 = 0;
          do {
            if (*(longlong *)(local_58 + (longlong)((int)uStack_50 + -1 + (int)lVar6) * 8) !=
                *(longlong *)
                 (*(longlong *)(param_1 + 0x10) + (longlong)(iVar7 + -1 + (int)lVar6) * 8))
            goto LAB_14689b5cd;
            lVar6 = lVar6 + -1;
          } while (((ulonglong)uStack_50 & 0xffffffff) + lVar6 != 0);
        }
LAB_14689b59f:
        iVar7 = (int)uStack_50 - iVar7;
        uVar5 = *(undefined8 *)(lVar3 + 0x30);
        FUN_14485c47a(param_1 + 8,uVar5);
        if (*(int *)(param_1 + 0x18) + iVar7 != 0) {
          *(int *)(param_1 + 0x18) = -iVar7;
          FUN_1406ce816(param_1 + 0x10);
        }
      }
LAB_14689b5cd:
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14689b4be;
    }
  }
  uVar5 = 0;
LAB_14689b4be:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14689b5e6 FUN_14689b5e6 body=361 status=ok
// SIG undefined FUN_14689b5e6(void)

longlong * FUN_14689b5e6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = FUN_14479d2ce(param_1 + 1);
  if (lVar2 == 0) {
    FUN_1427e1b0a(&local_38,param_1 + 2);
joined_r0x00014689b6f2:
    if (&local_38 != param_2) {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      *(int *)(param_2 + 1) = (int)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
      goto LAB_14689b6b9;
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_14689af94(*param_1,&local_38,0);
      goto joined_r0x00014689b6f2;
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_1401031ac(lVar2,0,&local_38);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      local_38 = 0;
      *(int *)(param_2 + 1) = (int)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
    }
    FUN_140002184(param_2,0x3a);
    FUN_1427e1b0a(&local_38,param_1 + 2);
    iVar1 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar1);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_14689b6b9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689b750 FUN_14689b750 body=180 status=ok
// SIG undefined FUN_14689b750(void)

undefined8 * FUN_14689b750(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_140be4b84();
  puVar1[1] = &DAT_14c9497a8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e89600;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14689b806(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689b806 FUN_14689b806 body=134 status=ok
// SIG undefined FUN_14689b806(void)

undefined8 *
FUN_14689b806(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14689b88e(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e89600;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689b88e FUN_14689b88e body=135 status=ok
// SIG undefined FUN_14689b88e(void)

undefined8 *
FUN_14689b88e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e88a90;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x20;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689b916 FUN_14689b916 body=532 status=ok
// SIG undefined FUN_14689b916(void)

uint FUN_14689b916(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong lStack_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_2;
  lStack_40 = param_2[1];
  local_38 = (void *)0x0;
  local_30 = (int)param_2[3];
  lVar5 = (longlong)local_30;
  pvVar1 = (void *)param_2[2];
  if (lVar5 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1401b309e(&local_38,local_30,0);
    memcpy(local_38,pvVar1,lVar5 << 3);
  }
  if (param_3 != (undefined4 *)0x0) {
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = (void *)0x0;
    local_50 = param_3[6];
    lVar5 = (longlong)local_50;
    pvVar1 = *(void **)(param_3 + 4);
    if (lVar5 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1401b309e(&local_58,local_50,0);
      memcpy(local_58,pvVar1,lVar5 << 3);
    }
    cVar2 = FUN_14000ba0a(&lStack_40,&uStack_60);
    if ((cVar2 == '\0') || (local_30 != local_50)) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_14000b9e1(local_38,local_58);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14689ba11;
  }
  FUN_140342cba();
  if (local_48 == 0) {
    if (local_30 == 0) {
      uVar3 = 1;
      goto LAB_14689ba11;
    }
  }
  else {
    cVar2 = FUN_144729dda(&lStack_40);
    if ((cVar2 != '\0') || (local_30 == 0)) {
      uVar3 = (uint)(local_48 == 0);
      goto LAB_14689ba11;
    }
  }
  lVar5 = FUN_14007daa4(&local_48,0,0);
  if (lVar5 == 0) {
LAB_14689bb0f:
    uVar3 = 1;
    if (local_48 != 0) {
      local_48 = 0;
      lStack_40 = 0;
    }
  }
  else {
    puVar4 = *(undefined **)(lVar5 + 8);
    if (DAT_14c949758 == 0) {
      bVar6 = puVar4 != (undefined *)0x0;
      if (puVar4 != &DAT_14c949750 && bVar6) {
        do {
          puVar4 = *(undefined **)(puVar4 + 0x30);
          bVar6 = puVar4 != (undefined *)0x0;
          if (puVar4 == &DAT_14c949750) break;
        } while (puVar4 != (undefined *)0x0);
      }
      if (!bVar6) goto LAB_14689bb0f;
    }
    else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c949758) == 0) goto LAB_14689bb0f;
    uVar3 = 0;
    local_48 = lVar5;
  }
LAB_14689ba11:
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689bb2c FUN_14689bb2c body=455 status=ok
// SIG undefined FUN_14689bb2c(void)

void FUN_14689bb2c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar2 == '\0') {
        param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
        if (param_3 != &local_48) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,&local_48,param_3,(int)param_1[6]);
          }
          else {
            memcpy(&local_48,param_3,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_48);
      }
      goto LAB_14689bbc4;
    }
    param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
  }
  local_48 = *param_3;
  uStack_40 = param_3[1];
  FUN_1406fa324(local_38,param_3 + 2);
LAB_14689bbc4:
  if (((param_7 >> 0x13 & 1) == 0) || ((param_7 & 1) == 0)) {
    FUN_14689b5e6(&local_48,&local_58);
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_58,iVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1400020e8(param_2,&DAT_149e01f5a,1);
    FUN_14689b5e6(&local_48,&local_58);
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_58,iVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(param_2,&DAT_149e01f5a,1);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689bcf4 FUN_14689bcf4 body=762 status=ok
// SIG undefined FUN_14689bcf4(void)

longlong FUN_14689bcf4(longlong *param_1,longlong param_2,undefined8 *param_3,int param_4,
                      undefined8 param_5,byte param_6,undefined8 param_7)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  short *psVar4;
  int iVar5;
  undefined8 *_Src;
  longlong lVar6;
  size_t _Size;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  short *local_78;
  undefined8 uStack_70;
  short *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (short *)0x0;
  uStack_60 = 0;
  if ((param_6 & 1) == 0) {
    FUN_14020fad6(&local_68,param_2);
    iVar5 = (uint)uStack_60 - 1;
    if ((uint)uStack_60 == 0) {
      iVar5 = 0;
    }
    uVar7 = (ulonglong)iVar5;
    uVar2 = (uint)uStack_60;
  }
  else {
    uVar7 = 0;
    while ((uVar3 = (ulonglong)*(ushort *)(param_2 + uVar7 * 2), 0x2c < uVar3 ||
           ((0x120000000001U >> (uVar3 & 0x3f) & 1) == 0))) {
      uVar7 = uVar7 + 1;
    }
    FUN_14006620a(&local_78,param_2,uVar7 & 0xffffffff);
    if (local_68 != (short *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    uStack_60 = uStack_70;
    uVar2 = (uint)uStack_70;
  }
  param_2 = param_2 + uVar7 * 2;
  if (uVar2 < 2) goto LAB_14689bdbf;
  FUN_14124722a(&local_68,0);
  if (*local_68 == 0x22) {
    local_78 = (short *)0x0;
    uStack_70 = 0;
    psVar4 = local_68;
    if ((uint)uStack_60 == 0) {
      psVar4 = &DAT_149dfb77a;
    }
    cVar1 = FUN_140c9761d(psVar4,&local_78,0);
    if (cVar1 == '\0') {
      psVar4 = &DAT_149dfb77a;
      if ((uint)uStack_60 != 0) {
        psVar4 = local_68;
      }
      FUN_146816218(param_7,3,L"FieldPathProperty: Bad quoted string: %s",psVar4);
      if (local_78 != (short *)0x0) {
        FUN_1400020a8();
      }
      param_2 = 0;
      goto LAB_14689bdbf;
    }
    if (local_68 != (short *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    uStack_60 = uStack_70;
  }
  FUN_1427e1f68(&local_78,&local_68);
  if (local_68 != (short *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_78;
  uStack_60 = uStack_70;
  psVar4 = &DAT_149dfb77a;
  if ((uint)uStack_70 != 0) {
    psVar4 = local_78;
  }
  FUN_140380e92(&local_58,psVar4);
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar1 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_14689bf3b;
    }
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_58);
      goto LAB_14689bdbf;
    }
    param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
    if (param_3 == &local_58) goto LAB_14689bdbf;
    if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
      (**(code **)(*param_1 + 0x100))(param_1,param_3,&local_58,(int)param_1[6]);
      goto LAB_14689bdbf;
    }
    _Size = (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34);
    _Src = &local_58;
  }
  else {
LAB_14689bf3b:
    _Src = local_48;
    *param_3 = local_58;
    param_3[1] = uStack_50;
    if (param_3 == &local_58) goto LAB_14689bdbf;
    iVar5 = (int)uStack_40;
    lVar6 = (longlong)(int)uStack_40;
    *(int *)(param_3 + 3) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_3 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_3 + 0x1c) = 0;
      goto LAB_14689bdbf;
    }
    FUN_1401b309e(param_3 + 2,uStack_40 & 0xffffffff);
    if (iVar5 == 0) goto LAB_14689bdbf;
    param_3 = (undefined8 *)param_3[2];
    _Size = lVar6 << 3;
  }
  memcpy(param_3,_Src,_Size);
LAB_14689bdbf:
  if (local_68 != (short *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689bff0 FUN_14689bff0 body=38 status=ok
// SIG undefined FUN_14689bff0(void)

void FUN_14689bff0(longlong param_1,undefined8 param_2)

{
  FUN_1403a658e();
  FUN_14689ad6a(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 14689c016 FUN_14689c016 body=217 status=ok
// SIG undefined FUN_14689c016(void)

undefined8 FUN_14689c016(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(*(undefined8 *)(param_1 + 0x70),&local_40);
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,L"TFieldPath<F%s>",puVar1);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"TFIELDPATH");
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14689c0f0 FUN_14689c0f0 body=123 status=ok
// SIG undefined FUN_14689c0f0(void)

undefined8 FUN_14689c0f0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(*(undefined8 *)(param_1 + 0x70),&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"class F%s;",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14689c16c FUN_14689c16c body=175 status=ok
// SIG undefined FUN_14689c16c(void)

undefined8 FUN_14689c16c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    FUN_14020fad6(param_3,&DAT_149e748f2);
    FUN_1400021e4(*(undefined8 *)(param_1 + 0x70),&local_30);
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_3,local_30,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020e8(param_3,&DAT_149e06342,1);
  }
  FUN_140056680(param_2,L"TFieldPath");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689c21f FUN_14689c21f body=15 status=ok
// SIG undefined FUN_14689c21f(void)

undefined4 FUN_14689c21f(void)

{
  return CONCAT31((int3)((uint)*DAT_14c950c20 >> 8),*DAT_14c950c20 != 0);
}



// FUNCTION 14689c22e FUN_14689c22e body=5 status=ok
// SIG undefined FUN_14689c22e(void)

void FUN_14689c22e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = DAT_14c75ec9c;
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((int)uVar4 < DAT_14c9647dc) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
    uVar4 = *(uint *)((longlong)puVar3 + 0xc);
    if ((int)uVar4 < 1) {
      return;
    }
    if ((int)uVar4 < DAT_14c9647dc) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
    if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) == 0) {
      return;
    }
    if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) == 0) {
      return;
    }
    uVar5 = ~DAT_14c75ec9c;
    uVar4 = *(uint *)(puVar3 + 1);
    do {
      LOCK();
      uVar2 = *(uint *)(puVar3 + 1);
      bVar6 = uVar4 == uVar2;
      if (bVar6) {
        *(uint *)(puVar3 + 1) = uVar4 & uVar5;
        uVar2 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar2;
    } while (!bVar6);
  }
  else {
    if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) == 0) {
      return;
    }
    uVar4 = ~DAT_14c75ec9c;
    uVar2 = *(uint *)(puVar3 + 1);
    do {
      LOCK();
      uVar5 = *(uint *)(puVar3 + 1);
      bVar6 = uVar2 == uVar5;
      if (bVar6) {
        *(uint *)(puVar3 + 1) = uVar2 & uVar4;
        uVar5 = uVar2;
      }
      uVar2 = uVar5;
      UNLOCK();
    } while (!bVar6);
  }
  LOCK();
  *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
  UNLOCK();
  if ((uVar2 & uVar1) == 0) {
    return;
  }
  if (-1 < *(int *)((longlong)puVar3 + 0xc)) {
    FUN_1468b43fc(*puVar3);
    return;
  }
  FUN_1468b44f6();
  return;
}



// FUNCTION 14689c233 FUN_14689c233 body=235 status=ok
// SIG undefined FUN_14689c233(void)

void FUN_14689c233(undefined4 param_1)

{
  undefined1 auStack_c98 [40];
  uint local_c70;
  undefined8 *local_c68;
  undefined1 *local_c58;
  code *local_c50;
  undefined1 **local_c48;
  undefined8 local_c40;
  undefined4 local_c38;
  undefined1 local_c30 [3072];
  undefined8 local_30;
  ulonglong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c98;
  local_30 = 0;
  local_28 = 0x2000000000;
  local_20 = 0;
  FUN_14689c320(local_c30,param_1);
  local_c48 = &local_c58;
  local_c68 = &local_c40;
  local_c40 = 0;
  local_c38 = 0;
  local_c50 = FUN_1427f0c24;
  local_c70 = (uint)((int)local_28 == 1);
  local_c58 = local_c30;
  FUN_1411ca36e(L"GC.OnDisregardForGCSetDisabled",local_28 & 0xffffffff,1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
  FUN_14689c3ec(local_c30);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c949e68);
  FUN_14689d8b6(local_c30);
  if ((local_18 ^ (ulonglong)auStack_c98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689c320 FUN_14689c320 body=203 status=ok
// SIG undefined FUN_14689c320(void)

void FUN_14689c320(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = 1;
  if (0 < param_2) {
    uVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
    uVar2 = 1;
    if (1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = (param_2 + 99U) / 100;
    uVar9 = (ulonglong)uVar2;
    if (uVar1 < uVar2) {
      uVar9 = (ulonglong)uVar1;
    }
  }
  iVar3 = param_2 / (int)uVar9 + 1;
  FUN_1468b3cc4(param_1,uVar9);
  uVar2 = (int)uVar9 - 1;
  iVar5 = 0;
  lVar6 = 0xc;
  uVar7 = 0;
  do {
    lVar8 = *(longlong *)(param_1 + 0xc00);
    if (*(longlong *)(param_1 + 0xc00) == 0) {
      lVar8 = param_1;
    }
    *(int *)(lVar8 + -0xc + lVar6) = iVar5;
    *(int *)(lVar8 + -8 + lVar6) = iVar5;
    iVar4 = param_2 - iVar3 * uVar2;
    if (uVar7 < uVar2) {
      iVar4 = iVar3;
    }
    *(int *)(lVar8 + -4 + lVar6) = iVar4;
    iVar4 = iVar4 + iVar5 + -1;
    if (param_2 + -1 < iVar4) {
      iVar4 = param_2 + -1;
    }
    *(int *)(lVar8 + lVar6) = iVar4;
    uVar7 = uVar7 + 1;
    iVar5 = iVar5 + iVar3;
    lVar6 = lVar6 + 0x60;
  } while (uVar9 != uVar7);
  return;
}



// FUNCTION 14689c3ec FUN_14689c3ec body=170 status=ok
// SIG undefined FUN_14689c3ec(void)

void FUN_14689c3ec(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 0xc08) == 1) && (DAT_14c949e20 == DAT_14c949e4c)) {
    lVar2 = *(longlong *)(param_1 + 0xc00);
    if (*(longlong *)(param_1 + 0xc00) == 0) {
      lVar2 = param_1;
    }
    FUN_145be27ca(&DAT_14c949e18,lVar2 + 0x10);
  }
  else {
    cVar1 = FUN_1468b3e76(param_1);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0xc00);
      if (*(longlong *)(param_1 + 0xc00) == 0) {
        lVar2 = param_1;
      }
      if ((longlong)*(int *)(param_1 + 0xc08) != 0) {
        lVar3 = (longlong)*(int *)(param_1 + 0xc08) * 0x60;
        lVar2 = lVar2 + 0x10;
        do {
          FUN_1468b3f6e(&DAT_14c949e18,lVar2);
          lVar2 = lVar2 + 0x60;
          lVar3 = lVar3 + -0x60;
        } while (lVar3 != 0);
      }
    }
  }
  FUN_1468b3f26(param_1);
  *(undefined1 *)(param_1 + 0xc10) = 0;
  return;
}



// FUNCTION 14689c496 FUN_14689c496 body=190 status=ok
// SIG undefined FUN_14689c496(void)

undefined8 FUN_14689c496(int param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = ((longlong)param_1 * (longlong)DAT_14c95004c + (longlong)*(int *)(param_3 + 0x30)) * 0x80;
  puVar1 = (uint *)(DAT_14c950050 + lVar5);
  uVar6 = *(uint *)(DAT_14c950050 + lVar5);
  *(undefined8 *)(*(longlong *)(DAT_14c950050 + 8 + lVar5) + 8 + (ulonglong)(uVar6 & 0x1ff) * 8) =
       param_2;
  uVar3 = DAT_14c9503c0;
  uVar6 = uVar6 + 1;
  if ((~uVar6 & 0x1ff) == 0) {
    puVar2 = *(uint **)(puVar1 + 2);
    if ((DAT_14c9503c4 & 1) == 0) {
      LOCK();
      UNLOCK();
      if (DAT_14c9503c0 < 0x100) {
        DAT_14c9503c0 = DAT_14c9503c0 + 1;
        lVar5 = FUN_1400305d2(&DAT_14c949ec0,puVar1[4]);
        (&DAT_14c950400)[uVar3] = lVar5;
        if (lVar5 != 0) {
          uVar6 = uVar3 << 9;
          *(longlong *)(puVar1 + 2) = lVar5;
          *puVar2 = uVar6;
          goto LAB_14689c4e5;
        }
      }
      else {
        DAT_14c9503c4 = 1;
        LOCK();
        UNLOCK();
      }
    }
    uVar4 = 0;
  }
  else {
LAB_14689c4e5:
    *puVar1 = uVar6;
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 14689c554 FUN_14689c554 body=238 status=ok
// SIG undefined FUN_14689c554(void)

undefined8 *
FUN_14689c554(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4,
             undefined1 param_5,char param_6,undefined1 param_7)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = false;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e75090;
  param_1[2] = param_2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = param_3;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x79) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7b) = param_7;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_38 = *param_2;
  FUN_14689c644(param_1 + 3);
  if (param_6 != '\0') {
    bVar2 = param_1[0xd] != 0;
  }
  *(bool *)((longlong)param_1 + 0x7a) = bVar2;
  if (param_3 != 0) {
    lVar1 = FUN_144b00dc8(param_3);
    if (lVar1 != 0) {
      param_1[0xe] = *(undefined8 *)(lVar1 + 0x2b0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689c644 FUN_14689c644 body=199 status=ok
// SIG undefined FUN_14689c644(void)

void FUN_14689c644(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_14688ad20(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_14688aece(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_14688b0ac(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689c70e FUN_14689c70e body=92 status=ok
// SIG undefined FUN_14689c70e(void)

void FUN_14689c70e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e75090;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14688b3fa(param_1 + 3);
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014689c767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 14689c76a FUN_14689c76a body=103 status=ok
// SIG undefined FUN_14689c76a(void)

void FUN_14689c76a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = FUN_144a797b2();
  if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    FUN_1400f1774(param_1,*(undefined8 *)(param_2 + 0x10),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00014689c7ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_2 + 0x10) + 0xc0))(param_2,param_1);
  return;
}



// FUNCTION 14689c7d2 FUN_14689c7d2 body=14 status=ok
// SIG undefined FUN_14689c7d2(void)

void FUN_14689c7d2(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014689c7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0xc0))();
  return;
}



// FUNCTION 14689c7e0 FUN_14689c7e0 body=223 status=ok
// SIG undefined FUN_14689c7e0(void)

void FUN_14689c7e0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [7];
  char local_39;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_2;
  if (lVar4 == 0) goto LAB_14689c82c;
  if ((param_1[0xd] != 0) && (*(longlong *)(lVar4 + 0x20) != param_1[0xd])) {
    if ((char)param_1[0xf] != '\0') goto LAB_14689c82c;
    cVar3 = FUN_144b00bde();
    if (cVar3 == '\0') goto LAB_14689c82c;
    lVar4 = *param_2;
  }
  local_38 = lVar4;
  FUN_14688b0ac(param_1 + 3,local_40,&local_38,&local_39);
  if (local_39 == '\0') {
    plVar2 = (longlong *)param_1[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1447f76d2(plVar2,iVar1);
    }
    *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = local_38;
    if (*(char *)((longlong)param_1 + 0x7a) == '\x01') {
      (**(code **)(*param_1 + 0xa0))(param_1,local_38,param_3,param_4);
    }
  }
LAB_14689c82c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689c8c0 FUN_14689c8c0 body=44 status=ok
// SIG undefined FUN_14689c8c0(void)

int FUN_14689c8c0(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
  if (0xf < iVar1) {
    iVar1 = 0x10;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}



// FUNCTION 14689c8ec FUN_14689c8ec body=174 status=ok
// SIG undefined FUN_14689c8ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14689c8ec(double param_1)

{
  bool bVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = 0.0 < param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  DAT_14c9501c0 = param_1;
  QueryPerformanceCounter(&local_30);
  _DAT_14c950180 = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  QueryPerformanceCounter(&local_30);
  FUN_14110ab78(DAT_14c950c20);
  QueryPerformanceCounter(&local_30);
  FUN_1414521f4(&DAT_14c9500c0,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14689c99b FUN_14689c99b body=9 status=ok
// SIG undefined FUN_14689c99b(void)

undefined8 FUN_14689c99b(void)

{
  return DAT_14c950378;
}



// FUNCTION 14689c9a4 FUN_14689c9a4 body=9 status=ok
// SIG undefined FUN_14689c9a4(void)

undefined8 FUN_14689c9a4(void)

{
  return DAT_14c75ec90;
}



// FUNCTION 14689c9f7 FUN_14689c9f7 body=611 status=ok
// SIG undefined FUN_14689c9f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_14689c9f7(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = *(longlong **)(param_1 + 0x48);
  lVar13 = FUN_1456b25e2((int)(*(longlong *)(param_1 + 0x28) - 0x14c94b440U >> 6) * 0x286bca1b);
  *param_3 = lVar13;
  cVar10 = '\x01';
  if (lVar13 != 0) goto LAB_14689ca5f;
  cVar10 = FUN_1447113d8(param_1);
  if (cVar10 != '\0') {
    cVar10 = '\x02';
    goto LAB_14689ca5f;
  }
  if ((param_4 & 8) == 0) {
    iVar4 = (int)plVar5[1];
    if (((int)plVar5[8] < iVar4) && (iVar4 != 0)) {
      lVar13 = *plVar5;
      lVar14 = 0;
      do {
        LOCK();
        lVar3 = *(longlong *)(lVar13 + lVar14);
        *(longlong *)(lVar13 + lVar14) = 0;
        UNLOCK();
        if (lVar3 != 0) {
          LOCK();
          *(int *)(plVar5 + 8) = (int)plVar5[8] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar5 + 0x44) = *(int *)((longlong)plVar5 + 0x44) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar5 + 0x4c) = *(int *)((longlong)plVar5 + 0x4c) + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 9) = (int)plVar5[9] + -1;
          UNLOCK();
          uVar9 = *(undefined8 *)(lVar3 + 0x40);
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
          *(undefined8 *)(param_1 + 0x40) = uVar9;
          uVar6 = *(undefined4 *)(lVar3 + 0xc);
          uVar7 = *(undefined4 *)(lVar3 + 0x10);
          uVar8 = *(undefined4 *)(lVar3 + 0x14);
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar3 + 8);
          *(undefined4 *)(param_1 + 0xc) = uVar6;
          *(undefined4 *)(param_1 + 0x10) = uVar7;
          *(undefined4 *)(param_1 + 0x14) = uVar8;
          cVar10 = '\x03';
          goto LAB_14689ca5f;
        }
        lVar14 = lVar14 + 0x40;
      } while ((longlong)iVar4 * 0x40 != lVar14);
    }
  }
  LOCK();
  *(int *)((longlong)plVar5 + 0x44) = *(int *)((longlong)plVar5 + 0x44) + 1;
  UNLOCK();
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 == 1) {
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_14689caf2;
    }
    LOCK();
    plVar1 = plVar5 + 9;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 + -1 < 0) goto LAB_14689caf2;
  }
  else {
LAB_14689caf2:
    if (*(int *)((longlong)plVar5 + 0x44) < (int)plVar5[1]) {
      do {
        lVar13 = FUN_1456b25e2((int)(*(longlong *)(param_1 + 0x28) - 0x14c94b440U >> 6) * 0x286bca1b
                              );
        *param_3 = lVar13;
        if ((lVar13 != 0) || (cVar10 = FUN_1447113d8(param_1,param_2), cVar10 != '\0')) {
          LOCK();
          *(int *)((longlong)plVar5 + 0x44) = *(int *)((longlong)plVar5 + 0x44) + -1;
          UNLOCK();
          cVar10 = (*param_3 == 0) + '\x01';
          goto LAB_14689ca5f;
        }
        if ((0.0 < DAT_14c9501c0) &&
           (QueryPerformanceCounter(&local_78),
           DAT_14c9501c0 <=
           ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c950180)) {
          *(undefined1 *)(param_1 + 0x78) = 1;
          cVar10 = '\0';
          if (*(longlong *)(param_1 + 0x48) != 0) {
            LOCK();
            piVar2 = (int *)(*(longlong *)(param_1 + 0x48) + 0x4c);
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          goto LAB_14689ca5f;
        }
      } while (*(int *)((longlong)plVar5 + 0x44) < (int)plVar5[1]);
    }
  }
  LOCK();
  *(int *)((longlong)plVar5 + 0x4c) = *(int *)((longlong)plVar5 + 0x4c) + 1;
  UNLOCK();
  cVar10 = '\0';
LAB_14689ca5f:
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar10;
}



// FUNCTION 14689cc5c FUN_14689cc5c body=29 status=ok
// SIG undefined FUN_14689cc5c(void)

undefined8 FUN_14689cc5c(void)

{
  longlong *in_stack_00000028;
  
  if (*in_stack_00000028 != 0) {
    FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 14689ccb6 FUN_14689ccb6 body=70 status=ok
// SIG undefined FUN_14689ccb6(void)

undefined8 * FUN_14689ccb6(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e73df0;
  lVar1 = param_1[0x17];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FUN_144a8b802(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14689cd02 FUN_14689cd02 body=29 status=ok
// SIG undefined FUN_14689cd02(void)

undefined8 FUN_14689cd02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14689cd2a FUN_14689cd2a body=77 status=ok
// SIG undefined FUN_14689cd2a(void)

void FUN_14689cd2a(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + 0x10;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1406fa324(param_2,param_3);
      param_2 = param_2 + 0x20;
      param_3 = param_3 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14689cd9e FUN_14689cd9e body=67 status=ok
// SIG undefined FUN_14689cd9e(void)

void FUN_14689cd9e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_2 + 0x10 + *(int *)(param_1 + 0x34) * lVar2) != 0) {
        FUN_1400020a8();
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 14689ce22 FUN_14689ce22 body=38 status=ok
// SIG undefined FUN_14689ce22(void)

void FUN_14689ce22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14689ce48 FUN_14689ce48 body=38 status=ok
// SIG undefined FUN_14689ce48(void)

undefined8 FUN_14689ce48(undefined8 param_1,int param_2)

{
  FUN_14689c70e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


