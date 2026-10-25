// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1490978ae FUN_1490978ae body=42 status=ok
// SIG undefined FUN_1490978ae(void)

void FUN_1490978ae(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490978e0 FUN_1490978e0 body=96 status=ok
// SIG undefined FUN_1490978e0(void)

undefined8 FUN_1490978e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f26d8c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfc858,1);
  return uVar3;
}



// FUNCTION 149097940 FUN_149097940 body=52 status=ok
// SIG undefined FUN_149097940(void)

void FUN_149097940(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149097974 FUN_149097974 body=42 status=ok
// SIG undefined FUN_149097974(void)

void FUN_149097974(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490979a6 FUN_1490979a6 body=96 status=ok
// SIG undefined FUN_1490979a6(void)

undefined8 FUN_1490979a6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3b668();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfc8e0,1);
  return uVar3;
}



// FUNCTION 149097a06 FUN_149097a06 body=52 status=ok
// SIG undefined FUN_149097a06(void)

void FUN_149097a06(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149097a3a FUN_149097a3a body=151 status=ok
// SIG undefined FUN_149097a3a(void)

undefined4 * FUN_149097a3a(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_3;
  uVar3 = 4;
  if (iVar1 != 4) {
    uVar2 = 2;
    if (iVar1 != 0x10) {
      uVar2 = iVar1 == 0x20;
    }
    uVar3 = 3;
    if (iVar1 != 8) {
      uVar3 = uVar2;
    }
  }
  FUN_145f26b20();
  FUN_1448e935e(param_2,&local_38,&DAT_14cbfa948,uVar3);
  FUN_145f26b20();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149097ad2 FUN_149097ad2 body=177 status=ok
// SIG undefined FUN_149097ad2(void)

void FUN_149097ad2(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f26d8c();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfc858,param_4);
  local_78 = &DAT_14cbfc858;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b52de(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149097b84 FUN_149097b84 body=177 status=ok
// SIG undefined FUN_149097b84(void)

void FUN_149097b84(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f3b668();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfc8e0,param_4);
  local_78 = &DAT_14cbfc8e0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b56be(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149097c36 FUN_149097c36 body=316 status=ok
// SIG undefined FUN_149097c36(void)

void FUN_149097c36(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1490b5a80(param_2,iVar2);
  }
  puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x70);
  puVar5 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x70);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined4 *)puVar5 = 0xffffffff;
  *(undefined4 *)(puVar5 + 4) = 0xbf800000;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x130) + 0x14);
  }
  puVar1[2] = uVar6;
  puVar1[1] = *(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + 0x404);
  *(longlong *)(puVar1 + 0xc) = *(longlong *)(param_1 + 0x40) + 0x110;
  *(longlong *)(puVar1 + 0xe) = *(longlong *)(param_1 + 0x58) + 0x90;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xb0);
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  puVar5[2] = *(undefined8 *)(lVar3 + 0x30);
  puVar5[3] = uVar4;
  *(longlong *)(puVar1 + 0x10) = *(longlong *)(param_1 + 0x58) + 0x50;
  *(longlong *)(puVar1 + 0x12) = *(longlong *)(param_1 + 0x58) + 0x70;
  *puVar1 = *(undefined4 *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x3a0);
  *(longlong *)(puVar1 + 0x1a) = lVar3;
  puVar1[9] = *(undefined4 *)(lVar3 + 0x480);
  puVar1[8] = *(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + 0x47c);
  *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(*(longlong *)(param_1 + 0x3a0) + 0x484);
  *(int *)(lVar3 + 0x3f0) = iVar2;
  return;
}



// FUNCTION 149097d72 FUN_149097d72 body=192 status=ok
// SIG undefined FUN_149097d72(void)

void FUN_149097d72(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  longlong local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_1427d8b6a(local_40,uVar1);
  local_50 = 0;
  uStack_48 = 0;
  local_68[0] = 3;
  local_60 = param_2;
  local_58 = local_40;
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_2 + 0x14) < iVar2) {
    FUN_1490b5c42(param_2 + 8,iVar2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,local_68);
  FUN_146888c22(local_58,param_3);
  FUN_1427d8b4c(local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149097e34 FUN_149097e34 body=138 status=ok
// SIG undefined FUN_149097e34(void)

void FUN_149097e34(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_40[0] = 5;
  local_38 = param_2;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_2 + 0x14) < iVar1) {
    FUN_1490b5c42(param_2 + 8,iVar1);
  }
  (**(code **)(*param_1 + 0x18))(param_1,local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149097ec0 FUN_149097ec0 body=114 status=ok
// SIG undefined FUN_149097ec0(void)

void FUN_149097ec0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 8))();
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 4;
  local_30 = param_2;
  local_28 = param_3;
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149097f34 FUN_149097f34 body=331 status=ok
// SIG undefined FUN_149097f34(void)

void FUN_149097f34(int *param_1,longlong param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong in_stack_ffffffffffffffc0;
  
  iVar1 = *param_1;
  if (iVar1 == 4) {
    lVar3 = *(longlong *)(param_1 + 6);
    if ((*(byte *)(lVar3 + 0x28) & 4) != 0) {
      FUN_14688874a(param_2 + 8,0x400);
      lVar3 = *(longlong *)(param_1 + 6);
    }
    FUN_140430222(param_2 + 8,lVar3,*(undefined8 *)(param_1 + 8),0,1,
                  in_stack_ffffffffffffffc0 & 0xffffffffffffff00);
    return;
  }
  if (iVar1 == 5) {
    uVar2 = *param_3;
    if (param_4 <= *param_3) {
      uVar2 = param_4;
    }
    *param_3 = uVar2;
    lVar3 = FUN_149098080(*(longlong *)(param_1 + 2) + 8);
    *(undefined4 *)(lVar3 + 0x1c) = 4;
    *(longlong *)(lVar3 + 0x20) = param_2;
    *(uint *)(lVar3 + 0x14) = param_4;
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    if (param_4 == 0) {
      *param_3 = 0;
      param_4 = FUN_1427d8864(param_2 + 8);
    }
    uVar2 = *param_3;
    lVar3 = FUN_149098080(*(longlong *)(param_1 + 2) + 8);
    if ((int)uVar2 < (int)param_4) {
      *(undefined4 *)(lVar3 + 0x1c) = 1;
      *(longlong *)(lVar3 + 0x20) = param_2;
      *(uint *)(lVar3 + 0x14) = param_4 - *param_3;
      *(uint *)(lVar3 + 0x10) = *param_3;
      *(uint *)(lVar3 + 0x18) = param_4;
      *(longlong *)(param_2 + 0x30) = lVar3;
      FUN_1449baf38(*(undefined8 *)(param_1 + 4),param_2 + 8,*param_3,*(undefined4 *)(lVar3 + 0x14),
                    3,lVar3 + 8,0);
      return;
    }
    *(undefined4 *)(lVar3 + 0x1c) = 2;
    *(longlong *)(lVar3 + 0x20) = param_2;
    *(uint *)(lVar3 + 0x14) = param_4 - *param_3;
  }
  *(uint *)(lVar3 + 0x10) = *param_3;
  *(uint *)(lVar3 + 0x18) = param_4;
  *(longlong *)(param_2 + 0x30) = lVar3;
  return;
}



// FUNCTION 149098080 FUN_149098080 body=63 status=ok
// SIG undefined FUN_149098080(void)

longlong FUN_149098080(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490b5cdc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_1490b5cb2(lVar2);
  return lVar2;
}



// FUNCTION 1490980c0 thunk_FUN_1462727b8 body=5 status=ok
// SIG undefined thunk_FUN_1462727b8(void)

bool thunk_FUN_1462727b8(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    bVar2 = true;
  }
  else {
    iVar1 = (**(code **)(*(longlong *)*param_1 + 0x20))();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 1490980c6 FUN_1490980c6 body=141 status=ok
// SIG undefined FUN_1490980c6(void)

undefined8 FUN_1490980c6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 8) + 0x1c + lVar4) == 4) {
        return 1;
      }
      lVar4 = lVar4 + 0x28;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0x28 != lVar4);
  }
  cVar1 = FUN_144aa1b00(param_1);
  iVar3 = *(int *)(param_1 + 0x10);
  if (cVar1 != '\0') {
    if (iVar3 == 0) {
      return 1;
    }
    lVar4 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar4 + 0x1c + lVar5) = 2;
      **(undefined4 **)(lVar4 + 0x20 + lVar5) = *(undefined4 *)(lVar4 + 0x18 + lVar5);
      lVar5 = lVar5 + 0x28;
    } while ((longlong)iVar3 * 0x28 != lVar5);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 == 0) {
    return 1;
  }
  uVar2 = FUN_144aa1b00(param_1);
  return uVar2;
}



// FUNCTION 149098154 FUN_149098154 body=121 status=ok
// SIG undefined FUN_149098154(void)

void FUN_149098154(longlong param_1,int param_2,undefined4 param_3,longlong *param_4,char param_5)

{
  int iVar1;
  undefined1 *in_stack_00000048;
  
  iVar1 = (**(code **)(*param_4 + 0x10))(param_4);
  if ((param_2 == 0) || (iVar1 == 0)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    FUN_149097d72(param_4,param_1,param_1);
    if (param_5 != '\0') {
      FUN_146888c0a(param_1);
    }
  }
  if (in_stack_00000048 != (undefined1 *)0x0) {
    *in_stack_00000048 = 1;
  }
  return;
}



// FUNCTION 1490981ce FUN_1490981ce body=145 status=ok
// SIG undefined FUN_1490981ce(void)

void FUN_1490981ce(longlong param_1)

{
  undefined1 auStack_148 [40];
  int local_120 [66];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_142766232(param_1 + 8,local_120);
  if (local_120[0] != 0) {
    FUN_1467e8feb(local_120);
  }
  FUN_144afd59a(local_120,&DAT_14c845ecc);
  FUN_1400020a8(local_18);
  FUN_144afd5c2(local_120,1);
  FUN_144afd598(local_120);
  if ((local_10 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149098260 FUN_149098260 body=1837 status=ok
// SIG undefined FUN_149098260(void)

void FUN_149098260(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x20))();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xc),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x1c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_140119d96(param_2,param_1 + 5);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 3) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  lVar3 = 0;
  do {
    puVar1 = (undefined4 *)((longlong)param_1 + lVar3 + 100);
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar1,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *puVar1 = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x14);
  lVar3 = 0;
  do {
    puVar1 = (undefined4 *)((longlong)param_1 + lVar3 + 0x78);
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar1,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *puVar1 = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xc);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x84),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x84) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x11,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x11) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447a84cc(param_2,param_1 + 0x12);
  FUN_146db24e8(param_2,param_1 + 0x14);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x19,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x19) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xcc),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xcc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1a,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xd4),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xd4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1b,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1b) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xdc),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xe4),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xe4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1d,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1d) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xec),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xec) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447712aa(param_2,param_1 + 0x16);
  FUN_1447712aa(param_2,(longlong)param_1 + 0xbc);
  return;
}



// FUNCTION 14909898e FUN_14909898e body=55 status=ok
// SIG undefined FUN_14909898e(void)

void FUN_14909898e(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
                    /* WARNING: Could not recover jumptable at 0x0001490989c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  return;
}



// FUNCTION 1490989cc FUN_1490989cc body=476 status=ok
// SIG undefined FUN_1490989cc(void)

void FUN_1490989cc(longlong param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = 0;
  if ((*param_2 < 6) && ((0x2aU >> (*param_2 & 0x1f) & 1) != 0)) {
    uVar6 = *(uint *)(*(longlong *)(param_2 + 2) + 0x18);
    if (*(uint *)(param_1 + 8) < *(uint *)(*(longlong *)(param_2 + 2) + 0x18)) {
      uVar6 = *(uint *)(param_1 + 8);
    }
    iVar4 = 0;
    uVar5 = 0;
    iVar8 = 0;
    iVar1 = 0;
    uVar7 = 0;
    if (uVar6 == 0) goto LAB_149098acf;
    iVar2 = uVar6 - 1;
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 4);
    uVar7 = uVar6;
    if (uVar5 != 0) {
      uVar6 = *(uint *)(param_1 + 0xc);
      if (uVar5 <= *(uint *)(param_1 + 0xc)) {
        uVar6 = uVar5;
      }
      iVar4 = (((uVar6 + *(uint *)(param_1 + 0xe8)) - 1) / *(uint *)(param_1 + 0xe8)) *
              *(int *)(param_1 + 0xd8);
      iVar8 = ((iVar2 + *(uint *)(param_1 + 0xe4)) / *(uint *)(param_1 + 0xe4)) *
              *(int *)(param_1 + 0xd4);
      iVar2 = (((uVar6 + *(uint *)(param_1 + 0xe0)) - 1) / *(uint *)(param_1 + 0xe0)) *
              *(int *)(param_1 + 0xd0);
      iVar1 = (((uVar6 + *(uint *)(param_1 + 0xec)) - 1) / *(uint *)(param_1 + 0xec)) *
              *(int *)(param_1 + 0xdc);
      goto LAB_149098acf;
    }
    iVar8 = ((iVar2 + *(uint *)(param_1 + 0xe4)) / *(uint *)(param_1 + 0xe4)) *
            *(int *)(param_1 + 0xd4);
  }
  else {
    uVar7 = 0;
    iVar8 = 0;
  }
  uVar5 = 0;
  iVar2 = 0;
  iVar4 = 0;
  iVar1 = 0;
LAB_149098acf:
  if ((*(uint *)(param_1 + 0x60) & 1) == 0) {
    return;
  }
  lVar3 = 0x128;
  if ((*(uint *)(param_1 + 0x60) & 4) == 0) {
    iVar1 = uVar5 * *(int *)(param_1 + 200);
    lVar3 = 0xf0;
  }
  FUN_149097f34(param_2,lVar3 + param_1,lVar3 + param_1,iVar1);
  FUN_149097f34(param_2,param_1 + 0x160,param_1 + 0x160,iVar8);
  if ((*(byte *)(param_1 + 0x60) & 2) != 0) {
    FUN_149097f34(param_2,param_1 + 0x198,param_1 + 0x198,iVar4);
  }
  FUN_149097f34(param_2,param_1 + 0x1d0,param_1 + 0x1d0,iVar2);
  FUN_149097f34(param_2,param_1 + 0x208,param_1 + 0x208,uVar7 * *(int *)(param_1 + 0xcc));
  return;
}



// FUNCTION 149098bd0 FUN_149098bd0 body=125 status=ok
// SIG undefined FUN_149098bd0(void)

float FUN_149098bd0(longlong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < iVar1) {
    uVar2 = iVar1 - 1;
    fVar5 = (float)iVar1 * param_2;
    if ((float)(int)uVar2 <= (float)iVar1 * param_2) {
      fVar5 = (float)(int)uVar2;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    auVar4 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar1 = (int)(longlong)auVar4._0_4_;
    uVar3 = iVar1 + 1;
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    fVar5 = fVar5 - (float)((longlong)auVar4._0_4_ & 0xffffffff);
    return (1.0 - fVar5) * *(float *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 4) +
           fVar5 * *(float *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar2 * 4);
  }
  return 1.0;
}



// FUNCTION 149098c4e FUN_149098c4e body=407 status=ok
// SIG undefined FUN_149098c4e(void)

void FUN_149098c4e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xc),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0x18);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149098d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar2);
    return;
  }
  *puVar2 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 149098df0 FUN_149098df0 body=149 status=ok
// SIG undefined FUN_149098df0(void)

void FUN_149098df0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    return;
  }
  uVar3 = 0;
  if (*param_2 < 6) {
    uVar2 = 0;
    if ((0x2aU >> (*param_2 & 0x1f) & 1) != 0) {
      uVar3 = *(uint *)(*(longlong *)(param_2 + 2) + 0x18);
      uVar1 = *(uint *)(*(longlong *)(param_2 + 2) + 0x1c);
      uVar2 = uVar1 + 1 & 0xfffffffe;
      if ((*(uint *)(param_1 + 8) & 2) == 0) {
        uVar2 = uVar1;
      }
      if (*(uint *)(param_1 + 0x10) < uVar3) {
        uVar3 = *(uint *)(param_1 + 0x10);
      }
      if (*(uint *)(param_1 + 0xc) < uVar2) {
        uVar2 = *(uint *)(param_1 + 0xc);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_149097f34(param_2,param_1 + 0x20,param_1 + 0x20,uVar3 * *(int *)(param_1 + 0x14));
  FUN_149097f34(param_2,param_1 + 0x58,param_1 + 0x58,uVar2 * *(int *)(param_1 + 0x18));
  return;
}



// FUNCTION 149098ea2 FUN_149098ea2 body=1213 status=ok
// SIG undefined FUN_149098ea2(void)

void FUN_149098ea2(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 auStack_68 [40];
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x24),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x28),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x2c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447e46aa(param_2,param_1 + 0x30);
  local_40 = *(uint *)(param_1 + 0x18);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_40,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_40);
    }
  }
  else {
    local_40 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  plVar2 = (longlong *)(param_1 + 0x10);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1490840b0(plVar2,local_40,1);
  }
  if (local_40 != 0) {
    uVar8 = 0;
    do {
      lVar6 = (longlong)(int)uVar8;
      puVar7 = (undefined4 *)(lVar6 * 0x14 + *plVar2);
      puVar3 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *puVar7 = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar7 = (undefined4 *)(*plVar2 + lVar6 * 0x14 + 4);
      puVar3 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *puVar7 = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar7 = (undefined4 *)(*plVar2 + lVar6 * 0x14 + 8);
      puVar3 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *puVar7 = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar7 = (undefined4 *)(*plVar2 + lVar6 * 0x14 + 0xc);
      puVar3 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *puVar7 = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      pbVar9 = (byte *)(*plVar2 + lVar6 * 0x14 + 0x10);
      piVar5 = *(int **)param_2[1];
      if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
        local_3c = (uint)*pbVar9;
        (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
        if (1 < local_3c) {
          FUN_14572541c(param_2);
        }
        *pbVar9 = local_3c != 0;
      }
      else {
        *pbVar9 = *piVar5 != 0;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_40);
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x40),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x44),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar7 = (undefined4 *)(param_1 + 0x48);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
    }
    else {
      thunk_FUN_14572512c(param_2,puVar7);
    }
  }
  else {
    *puVar7 = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149099366 FUN_149099366 body=177 status=ok
// SIG undefined FUN_149099366(void)

void FUN_149099366(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar1 = 0;
  if (*param_2 < 6) {
    uVar2 = 0;
    if ((0x2aU >> (*param_2 & 0x1f) & 1) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_2 + 2) + 0x18);
      uVar2 = *(uint *)(*(longlong *)(param_2 + 2) + 0x1c);
      if (*(uint *)(param_1 + 0x2c) < uVar1) {
        uVar1 = *(uint *)(param_1 + 0x2c);
      }
      if (*(uint *)(param_1 + 0x28) < uVar2) {
        uVar2 = *(uint *)(param_1 + 0x28);
      }
      uVar2 = uVar2 + 7 >> 3;
    }
  }
  else {
    uVar2 = 0;
  }
  FUN_149097f34(param_2,param_1 + 0x50,param_1 + 0x50,
                *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x40));
  FUN_149097f34(param_2,param_1 + 0x88,param_1 + 0x88,uVar1 * *(int *)(param_1 + 0x44));
  FUN_149097f34(param_2,param_1 + 0xc0,param_1 + 0xc0,uVar2 * *(int *)(param_1 + 0x48));
  return;
}



// FUNCTION 149099418 FUN_149099418 body=112 status=ok
// SIG undefined FUN_149099418(void)

longlong FUN_149099418(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  iVar3 = (int)param_2;
  iVar4 = *(int *)(param_1 + 0x18) + -1;
  iVar1 = iVar4;
  if (iVar3 < iVar4) {
    iVar1 = iVar3;
  }
  iVar2 = iVar3 + 1;
  if (iVar4 <= iVar3 + 1) {
    iVar2 = iVar4;
  }
  return (longlong)
         ((float)*(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x14) *
          (param_2 - (float)(int)param_2) +
         (1.0 - (param_2 - (float)(int)param_2)) *
         (float)*(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 0x14));
}



// FUNCTION 149099488 FUN_149099488 body=1034 status=ok
// SIG undefined FUN_149099488(void)

void FUN_149099488(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xc),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x1c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447a84cc(param_2,param_1 + 0x20);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x18),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x30),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x34),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x38),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x3c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x40),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x44),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0x48);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001490997cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar2);
    return;
  }
  *puVar2 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 149099898 FUN_149099898 body=256 status=ok
// SIG undefined FUN_149099898(void)

void FUN_149099898(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if (((*param_2 < 6) && ((0x2aU >> (*param_2 & 0x1f) & 1) != 0)) &&
     (*(uint *)(*(longlong *)(param_2 + 2) + 0x18) <= uVar2)) {
    uVar2 = *(uint *)(*(longlong *)(param_2 + 2) + 0x18);
  }
  FUN_149097f34(param_2,param_1 + 0x50,param_1 + 0x50,*(int *)(param_1 + 0x30) * uVar2);
  FUN_149097f34(param_2,param_1 + 0x88,param_1 + 0x88,uVar2 * *(int *)(param_1 + 0x34));
  FUN_149097f34(param_2,param_1 + 0xc0,param_1 + 0xc0,
                *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x1c));
  FUN_149097f34(param_2,param_1 + 0xf8,param_1 + 0xf8,
                *(int *)(param_1 + 0x3c) * *(int *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  iVar1 = FUN_14908d0f0();
  FUN_149097f34(param_2,param_1 + 0x130,param_1 + 0x130,iVar1 * *(int *)(param_1 + 0x40));
  FUN_149097f34(param_2,param_1 + 0x168,param_1 + 0x168,
                *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x14));
  FUN_149097f34(param_2,param_1 + 0x1a0,param_1 + 0x1a0,
                *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x14));
  return;
}



// FUNCTION 149099998 FUN_149099998 body=139 status=ok
// SIG undefined FUN_149099998(void)

int FUN_149099998(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = FUN_1427d8864(param_1 + 0x58);
  iVar2 = FUN_1427d8864(param_1 + 0x90);
  iVar3 = FUN_1427d8864(param_1 + 200);
  iVar4 = FUN_1427d8864(param_1 + 0x100);
  iVar5 = FUN_1427d8864(param_1 + 0x138);
  iVar6 = FUN_1427d8864(param_1 + 0x170);
  iVar7 = FUN_1427d8864(param_1 + 0x1a8);
  return iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + iVar1;
}



// FUNCTION 149099a4e FUN_149099a4e body=165 status=ok
// SIG undefined FUN_149099a4e(void)

void FUN_149099a4e(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  iVar3 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  *param_2 = iVar3;
  param_2[1] = *(int *)(param_1 + 0xe4);
  param_2[2] = *(int *)(param_1 + 0xd4);
  uVar1 = *(uint *)(param_1 + 0xe8);
  iVar3 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  param_2[3] = iVar3;
  param_2[4] = *(int *)(param_1 + 0xe8);
  param_2[5] = *(int *)(param_1 + 0xd8);
  param_2[8] = -1;
  param_2[9] = -1;
  param_2[10] = -1;
  param_2[0xb] = -1;
  param_2[0xc] = -1;
  param_2[0xd] = -1;
  param_2[0xe] = -1;
  param_2[0xf] = -1;
  uVar4 = 0;
  do {
    param_2[(uVar4 >> 2 & 0x3fffffff) * 4 + (ulonglong)((uint)uVar4 & 3) + 8] =
         *(int *)(param_1 + 100 + uVar4 * 4);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 5);
  param_2[0x10] = -1;
  param_2[0x11] = -1;
  param_2[0x12] = -1;
  param_2[0x13] = -1;
  lVar2 = 0;
  do {
    param_2[lVar2 + 0x10] = *(int *)(param_1 + 0x78 + lVar2 * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}



// FUNCTION 149099af3 FUN_149099af3 body=561 status=ok
// SIG undefined FUN_149099af3(void)

undefined8 * FUN_149099af3(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  iVar1 = *(int *)(param_3 + 1);
  if (0 < iVar1) {
    if (param_3[8] == 0) {
      local_68 = (ulonglong)(uint)(iVar1 * 0xc);
      local_48 = 0;
      local_58 = 4;
      local_54 = CONCAT44(0x4109,iVar1 * 3);
      local_60 = local_60 & 0xffffffffffffff00;
      lVar2 = FUN_1400489e9(param_2,L"GroomCache_PositionBuffer",&local_58,*param_3);
      FUN_144827a6e(param_2,lVar2,param_3 + 8);
    }
    else {
      lVar2 = FUN_144735dd8(param_2,param_3 + 8,0);
    }
    local_58 = CONCAT31(local_58._1_3_,0xd);
    local_54 = 0xffffffff00000000;
    local_48 = 0;
    local_40 = lVar2;
    uVar3 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,lVar2 + 8);
    *param_1 = uVar3;
  }
  iVar1 = *(int *)(param_3 + 3);
  if (iVar1 == 0) {
    local_60 = 0;
    local_68 = local_68 & 0xffffffff00000000;
    lVar2 = FUN_14489a2c5(param_2,&DAT_14ca63c48,&DAT_14ca63c78,4);
  }
  else {
    if (param_3[9] == 0) {
      local_68 = (ulonglong)(uint)(iVar1 * 4);
      local_48 = 0;
      local_58 = 4;
      local_54 = CONCAT44(0x4109,iVar1);
      local_60 = local_60 & 0xffffffffffffff00;
      lVar2 = FUN_1400489e9(param_2,L"GroomCache_RadiusBuffer",&local_58,param_3[2]);
      FUN_144827a6e(param_2,lVar2,param_3 + 9);
    }
    else {
      lVar2 = FUN_144735dd8(param_2,param_3 + 9,0);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  local_58 = CONCAT31(local_58._1_3_,0xd);
  local_48 = 0;
  local_54 = 0xffffffff00000000;
  local_40 = lVar2;
  uVar3 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,lVar2 + 8);
  param_1[1] = uVar3;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149099d26 FUN_149099d26 body=42 status=ok
// SIG undefined FUN_149099d26(void)

void FUN_149099d26(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149099d58 FUN_149099d58 body=89 status=ok
// SIG undefined FUN_149099d58(void)

undefined8 FUN_149099d58(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145f7850c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 149099db2 FUN_149099db2 body=52 status=ok
// SIG undefined FUN_149099db2(void)

void FUN_149099db2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149099de6 FUN_149099de6 body=207 status=ok
// SIG undefined FUN_149099de6(void)

void FUN_149099de6(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_145f7850c();
  local_78 = *param_5;
  local_70 = *(undefined4 *)(param_5 + 1);
  local_68 = 0;
  uStack_60 = 0;
  FUN_1448f70da(*param_3,uVar1,param_4,&local_68);
  local_58 = *(undefined4 *)param_3;
  uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_48 = local_78;
  local_40 = local_70;
  local_88 = 2;
  local_80 = &local_68;
  local_68 = uVar1;
  uStack_60 = param_4;
  FUN_1490b5d8e(param_1,param_2,uVar1,param_4);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149099eb6 FUN_149099eb6 body=42 status=ok
// SIG undefined FUN_149099eb6(void)

void FUN_149099eb6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149099ee8 FUN_149099ee8 body=96 status=ok
// SIG undefined FUN_149099ee8(void)

undefined8 FUN_149099ee8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9df4a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfc9f0,1);
  return uVar3;
}



// FUNCTION 149099f48 FUN_149099f48 body=52 status=ok
// SIG undefined FUN_149099f48(void)

void FUN_149099f48(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149099f7c FUN_149099f7c body=177 status=ok
// SIG undefined FUN_149099f7c(void)

void FUN_149099f7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e9df4a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfc9f0,param_4);
  local_78 = &DAT_14cbfc9f0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b631e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a02e FUN_14909a02e body=42 status=ok
// SIG undefined FUN_14909a02e(void)

void FUN_14909a02e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909a060 FUN_14909a060 body=96 status=ok
// SIG undefined FUN_14909a060(void)

undefined8 FUN_14909a060(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f27380();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfca78,1);
  return uVar3;
}



// FUNCTION 14909a0c0 FUN_14909a0c0 body=52 status=ok
// SIG undefined FUN_14909a0c0(void)

void FUN_14909a0c0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909a0f4 FUN_14909a0f4 body=177 status=ok
// SIG undefined FUN_14909a0f4(void)

void FUN_14909a0f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f27380();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfca78,param_4);
  local_78 = &DAT_14cbfca78;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b66fe(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a1a6 FUN_14909a1a6 body=174 status=ok
// SIG undefined FUN_14909a1a6(void)

char * FUN_14909a1a6(char *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  lVar2 = *(longlong *)(param_3 + 8);
  cVar1 = *(char *)(lVar2 + 0x80);
  *param_1 = cVar1;
  if (cVar1 == '\x01') {
    local_48 = 0;
    FUN_14716cfd3(param_1 + 8,param_2,lVar2 + 0x20,3);
    local_48 = 0;
    FUN_14716cfd3(&local_40,param_2,*(longlong *)(param_3 + 8) + 0x60,3);
    *(undefined8 *)(param_1 + 0x30) = local_30;
    *(undefined4 *)(param_1 + 0x20) = local_40;
    *(undefined4 *)(param_1 + 0x24) = uStack_3c;
    *(undefined4 *)(param_1 + 0x28) = uStack_38;
    *(undefined4 *)(param_1 + 0x2c) = uStack_34;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a256 FUN_14909a256 body=42 status=ok
// SIG undefined FUN_14909a256(void)

void FUN_14909a256(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909a284 FUN_14909a284 body=96 status=ok
// SIG undefined FUN_14909a284(void)

undefined8 FUN_14909a284(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5f3ee();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcb00,1);
  return uVar3;
}



// FUNCTION 14909a2e4 FUN_14909a2e4 body=52 status=ok
// SIG undefined FUN_14909a2e4(void)

void FUN_14909a2e4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909a318 FUN_14909a318 body=194 status=ok
// SIG undefined FUN_14909a318(void)

undefined4 * FUN_14909a318(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_3 + 1);
  bVar2 = *(byte *)(param_3 + 2);
  bVar3 = *(byte *)(param_3 + 3);
  iVar5 = param_3[4];
  uVar7 = 2;
  if (iVar5 != 8) {
    uVar7 = (uint)(iVar5 == 0x10);
  }
  uVar6 = 3;
  if (iVar5 != 4) {
    uVar6 = uVar7;
  }
  bVar4 = *(byte *)(param_3 + 5);
  iVar5 = *param_3;
  FUN_145f5f180();
  FUN_1448e935e(param_2,&local_38,&DAT_14cbfafc8,
                (uint)bVar1 * 4 + iVar5 +
                ((uint)bVar4 * 0x10 + uVar6 * 4 + (uint)bVar3 * 2 | (uint)bVar2) * 8);
  FUN_145f5f180();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a3db FUN_14909a3db body=177 status=ok
// SIG undefined FUN_14909a3db(void)

void FUN_14909a3db(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f5f3ee();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfcb00,param_4);
  local_78 = &DAT_14cbfcb00;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b6ade(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a48e FUN_14909a48e body=42 status=ok
// SIG undefined FUN_14909a48e(void)

void FUN_14909a48e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909a4c0 FUN_14909a4c0 body=96 status=ok
// SIG undefined FUN_14909a4c0(void)

undefined8 FUN_14909a4c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0f49c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcb88,1);
  return uVar3;
}



// FUNCTION 14909a520 FUN_14909a520 body=52 status=ok
// SIG undefined FUN_14909a520(void)

void FUN_14909a520(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909a554 FUN_14909a554 body=177 status=ok
// SIG undefined FUN_14909a554(void)

void FUN_14909a554(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f0f49c();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfcb88,param_4);
  local_78 = &DAT_14cbfcb88;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b6ebe(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a606 FUN_14909a606 body=42 status=ok
// SIG undefined FUN_14909a606(void)

void FUN_14909a606(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909a638 FUN_14909a638 body=96 status=ok
// SIG undefined FUN_14909a638(void)

undefined8 FUN_14909a638(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5f900();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcc10,1);
  return uVar3;
}



// FUNCTION 14909a698 FUN_14909a698 body=52 status=ok
// SIG undefined FUN_14909a698(void)

void FUN_14909a698(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909a6cc FUN_14909a6cc body=177 status=ok
// SIG undefined FUN_14909a6cc(void)

void FUN_14909a6cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f5f900();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfcc10,param_4);
  local_78 = &DAT_14cbfcc10;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b729e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a77e FUN_14909a77e body=42 status=ok
// SIG undefined FUN_14909a77e(void)

void FUN_14909a77e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909a7b0 FUN_14909a7b0 body=96 status=ok
// SIG undefined FUN_14909a7b0(void)

undefined8 FUN_14909a7b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5fe12();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcc98,1);
  return uVar3;
}



// FUNCTION 14909a810 FUN_14909a810 body=52 status=ok
// SIG undefined FUN_14909a810(void)

void FUN_14909a810(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909a844 FUN_14909a844 body=42 status=ok
// SIG undefined FUN_14909a844(void)

void FUN_14909a844(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909a876 FUN_14909a876 body=96 status=ok
// SIG undefined FUN_14909a876(void)

undefined8 FUN_14909a876(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7a81e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcd20,1);
  return uVar3;
}



// FUNCTION 14909a8d6 FUN_14909a8d6 body=52 status=ok
// SIG undefined FUN_14909a8d6(void)

void FUN_14909a8d6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909a90a FUN_14909a90a body=177 status=ok
// SIG undefined FUN_14909a90a(void)

void FUN_14909a90a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e7a81e();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfcd20,param_4);
  local_78 = &DAT_14cbfcd20;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b7e98(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909a9bc FUN_14909a9bc body=42 status=ok
// SIG undefined FUN_14909a9bc(void)

void FUN_14909a9bc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909a9ee FUN_14909a9ee body=96 status=ok
// SIG undefined FUN_14909a9ee(void)

undefined8 FUN_14909a9ee(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9e3d6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcda8,1);
  return uVar3;
}



// FUNCTION 14909aa4e FUN_14909aa4e body=52 status=ok
// SIG undefined FUN_14909aa4e(void)

void FUN_14909aa4e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909aa82 FUN_14909aa82 body=177 status=ok
// SIG undefined FUN_14909aa82(void)

void FUN_14909aa82(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e9e3d6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfcda8,param_4);
  local_78 = &DAT_14cbfcda8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b8102(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909ab34 FUN_14909ab34 body=42 status=ok
// SIG undefined FUN_14909ab34(void)

void FUN_14909ab34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909ab66 FUN_14909ab66 body=89 status=ok
// SIG undefined FUN_14909ab66(void)

undefined8 FUN_14909ab66(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145ee091e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 14909abc0 FUN_14909abc0 body=52 status=ok
// SIG undefined FUN_14909abc0(void)

void FUN_14909abc0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909abf4 FUN_14909abf4 body=207 status=ok
// SIG undefined FUN_14909abf4(void)

void FUN_14909abf4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_145ee091e();
  local_78 = *param_5;
  local_70 = *(undefined4 *)(param_5 + 1);
  local_68 = 0;
  uStack_60 = 0;
  FUN_1448f70da(*param_3,uVar1,param_4,&local_68);
  local_58 = *(undefined4 *)param_3;
  uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_48 = local_78;
  local_40 = local_70;
  local_88 = 2;
  local_80 = &local_68;
  local_68 = uVar1;
  uStack_60 = param_4;
  FUN_1490b84e2(param_1,param_2,uVar1,param_4);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909acc4 FUN_14909acc4 body=3152 status=ok
// SIG undefined FUN_14909acc4(void)

void * FUN_14909acc4(void *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  bool bVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  
  bVar15 = (byte)param_4;
  memset(param_1,0,0xf1);
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121) = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  *(undefined8 *)((longlong)param_1 + 0x149) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x161) = 0;
  *(undefined8 *)((longlong)param_1 + 0x169) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x181) = 0;
  *(undefined8 *)((longlong)param_1 + 0x189) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined2 *)((longlong)param_1 + 0x372) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 3;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0;
  *(undefined4 *)((longlong)param_1 + 0x390) = 0;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  *(undefined4 *)((longlong)param_1 + 0x398) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  iVar17 = DAT_14c764a20;
  if ((param_3 == 0) || (*(int *)(param_3 + 0x3a8) != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x360) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x364) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x368) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x36c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x350) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x354) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x358) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x35c) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x340) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x344) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x348) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34c) = 0xffffffff;
  }
  else {
    lVar20 = (longlong)param_1 + 0xf8;
    lVar1 = (longlong)param_1 + 0x118;
    lVar2 = (longlong)param_1 + 0x138;
    lVar3 = (longlong)param_1 + 0x158;
    lVar4 = (longlong)param_1 + 0x178;
    lVar5 = (longlong)param_1 + 0x198;
    lVar6 = (longlong)param_1 + 0x1b8;
    lVar7 = (longlong)param_1 + 0x1d8;
    lVar8 = (longlong)param_1 + 0x1f8;
    bVar24 = *(longlong *)(param_3 + 0x18) == 0;
    if (bVar15 != 1 || bVar24) {
      lVar14 = *(longlong *)(param_3 + 0x48);
      if (lVar14 == 0) {
        FUN_144441fbf(param_2,param_1,(longlong)param_1 + 0xd8,lVar8,
                      *(longlong *)(param_3 + 0x40) + 0x50);
        FUN_144441fbf(param_2,(longlong)param_1 + 0x18,lVar20,(longlong)param_1 + 0x200,
                      *(longlong *)(param_3 + 0x40) + 0x50);
        FUN_144441fbf(param_2,(longlong)param_1 + 0x30,lVar1,(longlong)param_1 + 0x208,
                      *(longlong *)(param_3 + 0x40) + 0x90);
        if ((bVar15 & 0xfe) == 0xe) {
          lVar20 = param_3 + 0x98;
        }
        else {
          lVar20 = *(longlong *)(param_3 + 0x40) + 0xd0;
        }
        FUN_144441fbf(param_2,(longlong)param_1 + 0x48,lVar2,(longlong)param_1 + 0x210,lVar20);
        FUN_144441fbf(param_2,(longlong)param_1 + 0x60,lVar3,(longlong)param_1 + 0x218,
                      *(longlong *)(param_3 + 0x40) + 0xb0);
        FUN_144441fbf(param_2,(longlong)param_1 + 0x78,lVar4,(longlong)param_1 + 0x220,
                      *(longlong *)(param_3 + 0x40) + 0xf0);
        FUN_144441fbf(param_2,(longlong)param_1 + 0xc0,lVar7,(longlong)param_1 + 0x238,
                      *(longlong *)(param_3 + 0x40) + 0x110);
        FUN_144441fbf(param_2,(longlong)param_1 + 0x90,lVar5,(longlong)param_1 + 0x228,
                      *(longlong *)(param_3 + 0x40) + 0x70);
        FUN_144441fbf(param_2,(longlong)param_1 + 0xa8,lVar6,(longlong)param_1 + 0x230,
                      *(longlong *)(param_3 + 0x40) + 0x70);
        lVar20 = *(longlong *)(param_3 + 0x40);
        lVar1 = *(longlong *)(lVar20 + 0x130);
        dVar9 = *(double *)(lVar1 + 0x38);
        dVar10 = *(double *)(lVar1 + 0x50);
        dVar11 = *(double *)(lVar1 + 0x30);
        dVar12 = *(double *)(lVar1 + 0x48);
        *(float *)((longlong)param_1 + 0x280) =
             (float)((*(double *)(lVar1 + 0x28) + *(double *)(lVar1 + 0x40)) * 0.5);
        *(float *)((longlong)param_1 + 0x284) = (float)((dVar11 + dVar12) * 0.5);
        *(float *)((longlong)param_1 + 0x288) = (float)((dVar9 + dVar10) * 0.5);
        lVar20 = *(longlong *)(lVar20 + 0x130);
        dVar9 = *(double *)(lVar20 + 0x38);
        dVar10 = *(double *)(lVar20 + 0x50);
        dVar11 = *(double *)(lVar20 + 0x30);
        dVar12 = *(double *)(lVar20 + 0x48);
        *(float *)((longlong)param_1 + 0x290) =
             (float)((*(double *)(lVar20 + 0x28) + *(double *)(lVar20 + 0x40)) * 0.5);
        *(float *)((longlong)param_1 + 0x294) = (float)((dVar11 + dVar12) * 0.5);
        *(float *)((longlong)param_1 + 0x298) = (float)((dVar9 + dVar10) * 0.5);
        uVar18 = FUN_14716cb14(*(undefined8 *)(param_3 + 0x3a0),0);
        *(undefined4 *)((longlong)param_1 + 0x268) = uVar18;
        puVar19 = (undefined4 *)(*(longlong *)(param_3 + 0x3a0) + 0x490);
      }
      else {
        uVar23 = *(uint *)(lVar14 + 0x188);
        iVar22 = *(int *)(lVar14 + 0x18c + (ulonglong)uVar23 * 4);
        iVar13 = *(int *)(lVar14 + 0x18c + (ulonglong)(1 - uVar23) * 4);
        FUN_144441fbf(param_2,param_1,(longlong)param_1 + 0xd8,lVar8,
                      lVar14 + (ulonglong)uVar23 * 0x20 + 0x50);
        lVar8 = *(longlong *)(param_3 + 0x48);
        if ((iVar17 == 0) || (iVar22 == iVar13)) {
          FUN_144441fbf(param_2,(longlong)param_1 + 0x18,lVar20,(longlong)param_1 + 0x200,
                        lVar8 + (ulonglong)(1 - *(uint *)(lVar8 + 0x188)) * 0x20 + 0x50);
          FUN_144441fbf(param_2,(longlong)param_1 + 0x90,lVar5,(longlong)param_1 + 0x228,
                        *(longlong *)(param_3 + 0x48) + 0x90 +
                        (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x48) + 0x188) * 0x20);
          FUN_144441fbf(param_2,(longlong)param_1 + 0xa8,lVar6,(longlong)param_1 + 0x230,
                        *(longlong *)(param_3 + 0x48) + 0x90 +
                        (ulonglong)(1 - *(int *)(*(longlong *)(param_3 + 0x48) + 0x188)) * 0x20);
          lVar20 = *(longlong *)(param_3 + 0x48);
          uVar21 = (ulonglong)*(uint *)(lVar20 + 0x188);
          dVar9 = *(double *)(lVar20 + 0x160 + uVar21 * 0x18);
          dVar10 = *(double *)(lVar20 + 0x158 + uVar21 * 0x18);
          *(float *)((longlong)param_1 + 0x280) = (float)*(double *)(lVar20 + 0x150 + uVar21 * 0x18)
          ;
          *(float *)((longlong)param_1 + 0x284) = (float)dVar10;
          *(float *)((longlong)param_1 + 0x288) = (float)dVar9;
          uVar23 = 1 - *(int *)(lVar20 + 0x188);
        }
        else {
          FUN_144441fbf(param_2,(longlong)param_1 + 0x18,lVar20,(longlong)param_1 + 0x200,
                        lVar8 + (ulonglong)*(uint *)(lVar8 + 0x188) * 0x20 + 0x50);
          FUN_144441fbf(param_2,(longlong)param_1 + 0x90,lVar5,(longlong)param_1 + 0x228,
                        *(longlong *)(param_3 + 0x48) + 0x90 +
                        (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x48) + 0x188) * 0x20);
          FUN_144441fbf(param_2,(longlong)param_1 + 0xa8,lVar6,(longlong)param_1 + 0x230,
                        *(longlong *)(param_3 + 0x48) + 0x90 +
                        (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x48) + 0x188) * 0x20);
          lVar20 = *(longlong *)(param_3 + 0x48);
          uVar21 = (ulonglong)*(uint *)(lVar20 + 0x188);
          dVar9 = *(double *)(lVar20 + 0x160 + uVar21 * 0x18);
          dVar10 = *(double *)(lVar20 + 0x158 + uVar21 * 0x18);
          *(float *)((longlong)param_1 + 0x280) = (float)*(double *)(lVar20 + 0x150 + uVar21 * 0x18)
          ;
          *(float *)((longlong)param_1 + 0x284) = (float)dVar10;
          *(float *)((longlong)param_1 + 0x288) = (float)dVar9;
          uVar23 = *(uint *)(lVar20 + 0x188);
        }
        uVar21 = (ulonglong)uVar23;
        dVar9 = *(double *)(lVar20 + 0x160 + uVar21 * 0x18);
        dVar10 = *(double *)(lVar20 + 0x158 + uVar21 * 0x18);
        *(float *)((longlong)param_1 + 0x290) = (float)*(double *)(lVar20 + 0x150 + uVar21 * 0x18);
        *(float *)((longlong)param_1 + 0x294) = (float)dVar10;
        *(float *)((longlong)param_1 + 0x298) = (float)dVar9;
        if ((bVar15 < 0x10) && ((0xc004U >> (param_4 & 0x1f) & 1) != 0)) {
          FUN_144441fbf(param_2,(longlong)param_1 + 0x30,lVar1,(longlong)param_1 + 0x208,
                        lVar20 + 0xd0);
          lVar20 = param_3 + 0x98;
          bVar16 = true;
        }
        else {
          FUN_144441fbf(param_2,(longlong)param_1 + 0x30,lVar1,(longlong)param_1 + 0x208,
                        lVar20 + 0xd0);
          lVar20 = *(longlong *)(param_3 + 0x40) + 0xd0;
          bVar16 = false;
        }
        FUN_144441fbf(param_2,(longlong)param_1 + 0x48,lVar2,(longlong)param_1 + 0x210,lVar20);
        FUN_144441fbf(param_2,(longlong)param_1 + 0x60,lVar3,(longlong)param_1 + 0x218,
                      *(longlong *)(param_3 + 0x40) + 0xb0);
        FUN_144441fbf(param_2,(longlong)param_1 + 0x78,lVar4,(longlong)param_1 + 0x220,
                      *(longlong *)(param_3 + 0x40) + 0xf0);
        FUN_144441fbf(param_2,(longlong)param_1 + 0xc0,lVar7,(longlong)param_1 + 0x238,
                      *(longlong *)(param_3 + 0x40) + 0x110);
        if (!bVar16) {
          lVar20 = *(longlong *)(param_3 + 0x48);
          if (*(longlong *)(lVar20 + 0x130) != 0) {
            FUN_144441fbf(param_2,(longlong)param_1 + 0x48,lVar2,(longlong)param_1 + 0x210,
                          lVar20 + 0x130);
            lVar20 = *(longlong *)(param_3 + 0x48);
          }
          if (*(longlong *)(lVar20 + 0x110) != 0) {
            FUN_144441fbf(param_2,(longlong)param_1 + 0x60,lVar3,(longlong)param_1 + 0x218,
                          lVar20 + 0x110);
          }
        }
        uVar18 = FUN_14716cb14(*(undefined8 *)(param_3 + 0x3a0),0);
        *(undefined4 *)((longlong)param_1 + 0x268) = uVar18;
        puVar19 = (undefined4 *)(*(longlong *)(param_3 + 0x3a0) + 0x490);
      }
    }
    else {
      FUN_144441fbf(param_2,param_1,(longlong)param_1 + 0xd8,lVar8,
                    *(longlong *)(param_3 + 0x20) +
                    (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x20) + 0x188) * 0x20 + 0x50);
      FUN_144441fbf(param_2,(longlong)param_1 + 0x18,lVar20,(longlong)param_1 + 0x200,
                    *(longlong *)(param_3 + 0x20) +
                    (ulonglong)(1 - *(int *)(*(longlong *)(param_3 + 0x20) + 0x188)) * 0x20 + 0x50);
      FUN_144441fbf(param_2,(longlong)param_1 + 0x30,lVar1,(longlong)param_1 + 0x208,
                    *(longlong *)(param_3 + 0x20) + 0xd0);
      FUN_144441fbf(param_2,(longlong)param_1 + 0x48,lVar2,(longlong)param_1 + 0x210,
                    *(longlong *)(param_3 + 0x18) + 0xd0);
      FUN_144441fbf(param_2,(longlong)param_1 + 0x60,lVar3,(longlong)param_1 + 0x218,
                    *(longlong *)(param_3 + 0x18) + 0xb0);
      FUN_144441fbf(param_2,(longlong)param_1 + 0xc0,lVar7,(longlong)param_1 + 0x238,
                    *(longlong *)(param_3 + 0x18) + 0x110);
      FUN_144441fbf(param_2,(longlong)param_1 + 0x78,lVar4,(longlong)param_1 + 0x220,
                    *(longlong *)(param_3 + 0x18) + 0xf0);
      FUN_144441fbf(param_2,(longlong)param_1 + 0x90,lVar5,(longlong)param_1 + 0x228,
                    *(longlong *)(param_3 + 0x20) + 0x90 +
                    (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x20) + 0x188) * 0x20);
      FUN_144441fbf(param_2,(longlong)param_1 + 0xa8,lVar6,(longlong)param_1 + 0x230,
                    *(longlong *)(param_3 + 0x20) + 0x90 +
                    (ulonglong)(1 - *(int *)(*(longlong *)(param_3 + 0x20) + 0x188)) * 0x20);
      lVar20 = *(longlong *)(param_3 + 0x20);
      uVar21 = (ulonglong)*(uint *)(lVar20 + 0x188);
      dVar9 = *(double *)(lVar20 + 0x160 + uVar21 * 0x18);
      dVar10 = *(double *)(lVar20 + 0x158 + uVar21 * 0x18);
      *(float *)((longlong)param_1 + 0x280) = (float)*(double *)(lVar20 + 0x150 + uVar21 * 0x18);
      *(float *)((longlong)param_1 + 0x284) = (float)dVar10;
      *(float *)((longlong)param_1 + 0x288) = (float)dVar9;
      uVar21 = (ulonglong)(1 - *(int *)(lVar20 + 0x188));
      dVar9 = *(double *)(lVar20 + 0x160 + uVar21 * 0x18);
      dVar10 = *(double *)(lVar20 + 0x158 + uVar21 * 0x18);
      *(float *)((longlong)param_1 + 0x290) = (float)*(double *)(lVar20 + 0x150 + uVar21 * 0x18);
      *(float *)((longlong)param_1 + 0x294) = (float)dVar10;
      *(float *)((longlong)param_1 + 0x298) = (float)dVar9;
      lVar20 = *(longlong *)(param_3 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x268) =
           *(undefined4 *)(*(longlong *)(lVar20 + 0x130) + 0xc);
      puVar19 = (undefined4 *)(*(longlong *)(lVar20 + 0x130) + 8);
    }
    *(undefined4 *)((longlong)param_1 + 0x26c) = *puVar19;
    uVar23 = 0;
    if (*(longlong *)(param_3 + 0x78) != 0) {
      uVar23 = (*(uint *)(param_3 + 0x84) & 1) << 2;
    }
    *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)(param_3 + 0x10);
    fVar25 = DAT_14cbfab70;
    if (DAT_14cbfab70 <= 0.0) {
      fVar25 = *(float *)(param_3 + 0xbc);
    }
    *(float *)((longlong)param_1 + 0x244) = fVar25 * 0.5;
    fVar25 = (float)FUN_14716dc06(*(undefined8 *)(param_3 + 0x3a0));
    *(float *)((longlong)param_1 + 0x244) = fVar25 * *(float *)((longlong)param_1 + 0x244);
    *(undefined4 *)((longlong)param_1 + 0x248) = *(undefined4 *)(param_3 + 0xc4);
    *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)(param_3 + 0xcc);
    fVar25 = DAT_14cbfab48;
    if (DAT_14cbfab48 <= 0.0) {
      fVar25 = *(float *)(param_3 + 0xdc);
    }
    *(float *)((longlong)param_1 + 600) = fVar25;
    *(undefined4 *)((longlong)param_1 + 0x250) = *(undefined4 *)(param_3 + 0xb8);
    *(undefined4 *)((longlong)param_1 + 0x240) = *(undefined4 *)(param_3 + 0xd4);
    iVar17 = (uVar23 | *(byte *)(param_3 + 0xea)) + (uint)*(byte *)(param_3 + 0xe8) * 2;
    *(int *)((longlong)param_1 + 0x274) = iVar17;
    lVar20 = *(longlong *)(param_3 + 0x168);
    iVar17 = iVar17 + (*(byte *)(lVar20 + 0x77) & 1) * 8;
    *(int *)((longlong)param_1 + 0x274) = iVar17;
    iVar22 = 4;
    if (DAT_14c764a14 < 4) {
      iVar22 = DAT_14c764a14;
    }
    uVar23 = 1;
    if (iVar22 < 2) {
      iVar22 = 1;
    }
    *(uint *)((longlong)param_1 + 0x274) = iVar17 + (*(byte *)(lVar20 + 0x72) & 2) * 8;
    *(int *)((longlong)param_1 + 0x270) = iVar22;
    *(undefined4 *)((longlong)param_1 + 0x260) = *(undefined4 *)(param_3 + 0x130);
    *(undefined4 *)((longlong)param_1 + 0x264) = *(undefined4 *)(param_3 + 0x134);
    if (*(char *)(param_3 + 0x38) == '\0') {
      uVar23 = (uint)*(byte *)(param_3 + 0x3b);
    }
    *(uint *)((longlong)param_1 + 0x278) = uVar23;
    uVar23 = 0;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      uVar23 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x50) + 0x90) + 8) >> 1 & 1;
    }
    *(uint *)((longlong)param_1 + 0x27c) = uVar23;
    if (bVar15 != 1 || bVar24) {
      lVar20 = *(longlong *)(param_3 + 0x40);
    }
    else {
      lVar20 = *(longlong *)(param_3 + 0x18);
    }
    FUN_149099a4e(*(undefined8 *)(lVar20 + 0x130),(longlong)param_1 + 800);
  }
  return param_1;
}



// FUNCTION 14909b914 FUN_14909b914 body=30 status=ok
// SIG undefined FUN_14909b914(void)

undefined8 FUN_14909b914(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14909acc4(param_1,0,param_2,param_3);
  return param_1;
}



// FUNCTION 14909b932 FUN_14909b932 body=95 status=ok
// SIG undefined FUN_14909b932(void)

undefined1 FUN_14909b932(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 800) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 800) + 8))();
    uVar1 = 0;
    if ((-1 < *(int *)(param_1 + 0x130)) && (*(int *)(param_1 + 0x130) < *(int *)(lVar2 + 8))) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 800) + 0x10))();
      uVar1 = 0;
      if ((-1 < *(int *)(param_1 + 0x130)) &&
         (uVar1 = 0, *(int *)(param_1 + 0x130) < *(int *)(lVar2 + 8))) {
        uVar1 = *(undefined1 *)(param_1 + 0x165);
      }
    }
  }
  return uVar1;
}



// FUNCTION 14909b992 FUN_14909b992 body=42 status=ok
// SIG undefined FUN_14909b992(void)

void FUN_14909b992(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909b9c0 FUN_14909b9c0 body=96 status=ok
// SIG undefined FUN_14909b9c0(void)

undefined8 FUN_14909b9c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0fa8a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfceb8,1);
  return uVar3;
}



// FUNCTION 14909ba20 FUN_14909ba20 body=52 status=ok
// SIG undefined FUN_14909ba20(void)

void FUN_14909ba20(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909ba54 FUN_14909ba54 body=149 status=ok
// SIG undefined FUN_14909ba54(void)

undefined4 * FUN_14909ba54(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  bVar5 = param_3[4];
  FUN_145f0f81c();
  FUN_1448e935e(param_2,&local_38,&DAT_14cbfb800,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8 | (uint)bVar5 << 4
               );
  FUN_145f0f81c();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909baea FUN_14909baea body=42 status=ok
// SIG undefined FUN_14909baea(void)

void FUN_14909baea(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909bb1c FUN_14909bb1c body=96 status=ok
// SIG undefined FUN_14909bb1c(void)

undefined8 FUN_14909bb1c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f60324();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcf40,1);
  return uVar3;
}



// FUNCTION 14909bb7c FUN_14909bb7c body=52 status=ok
// SIG undefined FUN_14909bb7c(void)

void FUN_14909bb7c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909bbb0 FUN_14909bbb0 body=42 status=ok
// SIG undefined FUN_14909bbb0(void)

void FUN_14909bbb0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909bbe2 FUN_14909bbe2 body=96 status=ok
// SIG undefined FUN_14909bbe2(void)

undefined8 FUN_14909bbe2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f10078();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfcfc8,1);
  return uVar3;
}



// FUNCTION 14909bc42 FUN_14909bc42 body=52 status=ok
// SIG undefined FUN_14909bc42(void)

void FUN_14909bc42(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909bc76 FUN_14909bc76 body=42 status=ok
// SIG undefined FUN_14909bc76(void)

void FUN_14909bc76(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909bca8 FUN_14909bca8 body=96 status=ok
// SIG undefined FUN_14909bca8(void)

undefined8 FUN_14909bca8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6091a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfd050,1);
  return uVar3;
}



// FUNCTION 14909bd08 FUN_14909bd08 body=52 status=ok
// SIG undefined FUN_14909bd08(void)

void FUN_14909bd08(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909bd3c FUN_14909bd3c body=177 status=ok
// SIG undefined FUN_14909bd3c(void)

void FUN_14909bd3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f6091a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfd050,param_4);
  local_78 = &DAT_14cbfd050;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b9734(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909bdee FUN_14909bdee body=42 status=ok
// SIG undefined FUN_14909bdee(void)

void FUN_14909bdee(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909be20 FUN_14909be20 body=96 status=ok
// SIG undefined FUN_14909be20(void)

undefined8 FUN_14909be20(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f60f10();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfd0d8,1);
  return uVar3;
}



// FUNCTION 14909be80 FUN_14909be80 body=52 status=ok
// SIG undefined FUN_14909be80(void)

void FUN_14909be80(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909beb4 FUN_14909beb4 body=177 status=ok
// SIG undefined FUN_14909beb4(void)

void FUN_14909beb4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f60f10();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfd0d8,param_4);
  local_78 = &DAT_14cbfd0d8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490b9b14(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909bf66 FUN_14909bf66 body=42 status=ok
// SIG undefined FUN_14909bf66(void)

void FUN_14909bf66(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909bf98 FUN_14909bf98 body=96 status=ok
// SIG undefined FUN_14909bf98(void)

undefined8 FUN_14909bf98(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f94c34();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfd160,1);
  return uVar3;
}



// FUNCTION 14909bff8 FUN_14909bff8 body=52 status=ok
// SIG undefined FUN_14909bff8(void)

void FUN_14909bff8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909c02c FUN_14909c02c body=42 status=ok
// SIG undefined FUN_14909c02c(void)

void FUN_14909c02c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909c05e FUN_14909c05e body=96 status=ok
// SIG undefined FUN_14909c05e(void)

undefined8 FUN_14909c05e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f95096();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfd270,1);
  return uVar3;
}



// FUNCTION 14909c0be FUN_14909c0be body=52 status=ok
// SIG undefined FUN_14909c0be(void)

void FUN_14909c0be(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909c0f2 FUN_14909c0f2 body=42 status=ok
// SIG undefined FUN_14909c0f2(void)

void FUN_14909c0f2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909c124 FUN_14909c124 body=96 status=ok
// SIG undefined FUN_14909c124(void)

undefined8 FUN_14909c124(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3bc5c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfd2f8,1);
  return uVar3;
}



// FUNCTION 14909c184 FUN_14909c184 body=52 status=ok
// SIG undefined FUN_14909c184(void)

void FUN_14909c184(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909c1b8 FUN_14909c1b8 body=42 status=ok
// SIG undefined FUN_14909c1b8(void)

void FUN_14909c1b8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909c1ea FUN_14909c1ea body=96 status=ok
// SIG undefined FUN_14909c1ea(void)

undefined8 FUN_14909c1ea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e69a6e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfd380,1);
  return uVar3;
}



// FUNCTION 14909c24a FUN_14909c24a body=52 status=ok
// SIG undefined FUN_14909c24a(void)

void FUN_14909c24a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909c27e FUN_14909c27e body=177 status=ok
// SIG undefined FUN_14909c27e(void)

void FUN_14909c27e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e69a6e();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfd380,param_4);
  local_78 = &DAT_14cbfd380;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1490ba120(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909c330 FUN_14909c330 body=29 status=ok
// SIG undefined FUN_14909c330(void)

undefined4 FUN_14909c330(ushort param_1)

{
  return CONCAT31((int3)((uint)~(&DAT_14ca814c8)[(ulonglong)param_1 * 0xf] >> 8),
                  (~(&DAT_14ca814c8)[(ulonglong)param_1 * 0xf] & 0x1400000) == 0);
}



// FUNCTION 14909c34e FUN_14909c34e body=466 status=ok
// SIG undefined FUN_14909c34e(void)

void * FUN_14909c34e(longlong param_1,void *param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_438 [32];
  undefined1 local_418 [504];
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [424];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_438;
  FUN_14909acc4(local_418,0,param_1,param_3);
  *(undefined8 *)((longlong)param_2 + 0x188) = 0;
  memcpy(param_2,local_1d8,0x130);
  *(longlong *)((longlong)param_2 + 0x130) = local_220;
  *(longlong *)((longlong)param_2 + 0x138) = local_1f0;
  *(longlong *)((longlong)param_2 + 0x160) = local_200;
  *(longlong *)((longlong)param_2 + 0x158) = local_208;
  *(longlong *)((longlong)param_2 + 0x140) = local_1e0;
  *(longlong *)((longlong)param_2 + 0x148) = local_1f8;
  *(longlong *)((longlong)param_2 + 0x150) = local_210;
  *(longlong *)((longlong)param_2 + 0x170) = local_218;
  *(longlong *)((longlong)param_2 + 0x178) = local_1e8;
  if (local_220 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x130) = DAT_14cbfc238;
  }
  if (local_1f0 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x138) = DAT_14cbfc220;
  }
  if (local_208 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x158) = DAT_14cbfc238;
  }
  if (local_200 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x160) = DAT_14cbfc238;
  }
  if (local_1e0 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x140) = DAT_14cbfc238;
  }
  if (local_1f8 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x148) = DAT_14cbfc238;
  }
  if (local_210 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x150) = DAT_14cbfc220;
  }
  if (local_218 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x170) = DAT_14cbfc238;
  }
  if (local_1e8 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x178) = DAT_14cbfc220;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3a0) + 8);
  uVar2 = (uint)*(byte *)(lVar1 + 0x80);
  *(uint *)((longlong)param_2 + 0x180) = uVar2;
  puVar3 = &DAT_14cbfc218;
  if (uVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x68);
  }
  *(undefined8 *)((longlong)param_2 + 0x188) = *puVar3;
  FUN_1490846d2(local_418);
  if ((local_30 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909c52e FUN_14909c52e body=338 status=ok
// SIG undefined FUN_14909c52e(void)

void FUN_14909c52e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  longlong local_250;
  undefined1 local_248 [408];
  undefined1 local_b0 [136];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*(char *)(param_1 + 0x138) == '\0') {
    FUN_14006bf18();
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(undefined1 *)(param_1 + 299) = 0;
    local_28 = 0x1100000000;
    local_258 = 0xff;
    cVar4 = FUN_1447f936a(param_1,0,local_b0,0xd);
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 299) = 1;
    }
    FUN_1447f9616(param_1,local_b0,0);
    FUN_14909c34e(*(undefined8 *)(param_1 + 0x130),local_248,0);
    FUN_1444451c2(&local_250,local_248,2,1);
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x130) + 0xf8);
    if (plVar5 != &local_250) {
      lVar3 = *plVar5;
      *plVar5 = local_250;
      local_250 = 0;
      if (lVar3 == 0) goto LAB_14909c553;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_250 != 0) {
      LOCK();
      puVar1 = (uint *)(local_250 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_14909c553:
  if ((local_20 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909c6b4 FUN_14909c6b4 body=290 status=ok
// SIG undefined FUN_14909c6b4(void)

undefined1 * FUN_14909c6b4(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 0x118);
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    dVar7 = 0.0;
  }
  else {
    fVar5 = (float)FUN_14907bea8();
    dVar7 = (double)fVar5;
  }
  dVar9 = ((double)(int)uVar2 * dVar7) / (double)(int)((ulonglong)uVar2 >> 0x20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar9;
  auVar8 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar8._0_8_;
  dVar9 = dVar9 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  iVar1 = (int)dVar9;
  fVar6 = (float)dVar9 - (float)iVar1;
  fVar5 = fVar6;
  if (0.99999994 <= fVar6) {
    fVar5 = 0.99999994;
  }
  fVar5 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar5 & -(uint)(0.0 < fVar6)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar4 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
          (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar4;
  param_2[8] = 0;
  *(int *)(param_2 + 0xc) = iVar1 + iVar4 + (int)dVar7 + (int)(fVar5 + 0.5) + 1;
  param_2[0x10] = 1;
  return param_2;
}



// FUNCTION 14909c7d6 FUN_14909c7d6 body=238 status=ok
// SIG undefined FUN_14909c7d6(void)

void FUN_14909c7d6(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144757f48(param_1,8);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    if ((char)param_3 != '\0') {
      uVar2 = FUN_14073751e();
      lVar3 = FUN_144a78ede(param_1,uVar2);
      uVar4 = *(ulonglong *)(param_1 + 0x98) & 0xff;
      uVar5 = 0;
      if (uVar4 != 2) {
        local_68 = *(undefined8 *)(lVar3 + 0x118);
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        FUN_14909c8c5(&local_34,&local_48,param_1 + 0xf8,
                      (uint)((int)uVar4 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20));
        uVar5 = local_34;
      }
      *(undefined4 *)(param_1 + 0x100) = uVar5;
    }
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_147575be8(param_1,&local_58,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909c8c5 FUN_14909c8c5 body=558 status=ok
// SIG undefined FUN_14909c8c5(void)

int * FUN_14909c8c5(int *param_1,undefined8 *param_2,longlong *param_3,int param_4,longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar8 = *(float *)((longlong)param_3 + 0x14);
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (*param_3 == 0) {
    dVar13 = 0.0;
  }
  else {
    fVar7 = (float)FUN_14907bea8();
    dVar13 = (double)fVar7;
  }
  fVar7 = (float)((ulonglong)uVar2 >> 0x20);
  auVar15 = roundps(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),1);
  fVar7 = (fVar7 - auVar15._0_4_) + 0.5 + -0.5;
  auVar11 = ZEXT416((uint)fVar7);
  if (0.99999994 <= fVar7) {
    auVar11 = ZEXT416(0x3f7fffff);
  }
  if (auVar11._0_4_ <= 0.0) {
    auVar6._12_4_ = 0;
    auVar6._0_12_ = auVar11._4_12_;
    auVar11 = auVar6 << 0x20;
  }
  if (ABS(fVar8) <= 1e-08) {
    dVar14 = 1.0;
  }
  else {
    dVar14 = (double)fVar8;
  }
  dVar9 = (((double)((longlong)(((int)uVar2 - param_4) + (int)auVar15._0_4_) * (lVar3 >> 0x20)) +
           (double)(int)((ulonglong)lVar3 >> 0x20) * (double)auVar11._0_4_) / (double)(int)lVar3) *
          dVar14;
  auVar5._4_8_ = (ulonglong)dVar9 >> 0x20;
  auVar5._0_4_ = (float)dVar9;
  lVar3 = param_3[2];
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  dVar9 = (double)(int)((ulonglong)param_5 >> 0x20);
  dVar4 = (double)(int)param_5;
  fVar8 = (float)FUN_1447c7e44(auVar5._0_8_);
  dVar10 = ((double)fVar8 * dVar4) / dVar9;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar10;
  auVar15 = roundpd(auVar15,auVar15,1);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (double)(int)(dVar10 - auVar15._0_8_) + dVar10;
  auVar11 = roundpd(auVar11,auVar11,1);
  dVar10 = auVar11._0_8_;
  if (2147483647.0 <= dVar10) {
    dVar10 = 2147483647.0;
  }
  if (dVar10 <= -2147483648.0) {
    dVar10 = -2147483648.0;
  }
  dVar9 = ((double)(float)(dVar13 - (((double)((param_5 >> 0x20) *
                                              ((longlong)iVar1 + (longlong)(int)lVar3)) +
                                     (double)((ulonglong)dVar9 & 0x8000000000000000)) / dVar4) /
                                    dVar14) * dVar4) / dVar9;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar9;
  auVar11 = roundpd(auVar16,auVar16,1);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (double)(int)(dVar9 - auVar11._0_8_) + dVar9;
  auVar11 = roundpd(auVar12,auVar12,1);
  dVar13 = auVar11._0_8_;
  if (2147483647.0 <= dVar13) {
    dVar13 = 2147483647.0;
  }
  if (dVar13 <= -2147483648.0) {
    dVar13 = -2147483648.0;
  }
  *param_1 = ((int)dVar10 + (int)param_3[1]) % (int)dVar13;
  return param_1;
}



// FUNCTION 14909caf4 FUN_14909caf4 body=262 status=ok
// SIG undefined FUN_14909caf4(void)

longlong FUN_14909caf4(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  uVar5 = *(ulonglong *)(param_1 + 0x98) & 0xff;
  if (uVar5 == 2) {
    local_2c = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x118);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14909c8c5(&local_2c,&local_48,param_1 + 0xf8,
                  (uint)((int)uVar5 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20));
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  lVar3 = FUN_1475759e6(param_1,&local_58,param_3);
  if (lVar3 != 0) {
    lVar4 = FUN_145b9dd3a();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (lVar6 = lVar3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30)) {
      lVar6 = 0;
    }
    *(undefined4 *)(lVar6 + 0x100) = local_2c;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909cbfc FUN_14909cbfc body=846 status=ok
// SIG undefined FUN_14909cbfc(void)

void FUN_14909cbfc(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  float fVar20;
  double dVar21;
  undefined1 unaff_XMM8 [16];
  
  FUN_147539898();
  uVar4 = FUN_14073751e();
  lVar5 = FUN_144a78ede(param_1,uVar4);
  lVar5 = *(longlong *)(lVar5 + 0x118);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  fVar16 = ABS(*(float *)(param_1 + 0x10c));
  if (fVar16 <= 1e-08) {
    dVar14 = 1.0;
  }
  else {
    dVar14 = (double)*(float *)(param_1 + 0x10c);
  }
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    dVar17 = 0.0;
  }
  else {
    fVar16 = (float)FUN_14907bea8(*(longlong *)(param_1 + 0xf8),fVar16,0);
    dVar17 = (double)fVar16;
  }
  dVar13 = (double)(int)((ulonglong)lVar5 >> 0x20);
  dVar2 = (double)(int)lVar5;
  dVar17 = (double)(float)(dVar17 - (((double)(((longlong)*(int *)(param_1 + 0x104) +
                                               (longlong)*(int *)(param_1 + 0x108)) *
                                              (lVar5 >> 0x20)) +
                                     (double)((ulonglong)dVar13 & 0x8000000000000000)) / dVar2) /
                                    dVar14);
  dVar19 = (dVar2 * dVar17) / dVar13;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar19;
  auVar18 = roundpd(unaff_XMM8,auVar18,1);
  dVar21 = auVar18._0_8_;
  dVar19 = dVar19 - dVar21;
  if (2147483647.0 <= dVar21) {
    dVar21 = 2147483647.0;
  }
  if (dVar21 <= -2147483648.0) {
    dVar21 = -2147483648.0;
  }
  iVar6 = (int)dVar19;
  iVar8 = (int)dVar21 + iVar6;
  if (1 < iVar8) {
    iVar7 = (uint)((char)uVar4 != '\x01') + (int)((ulonglong)uVar4 >> 0x20);
    iVar10 = (int)((ulonglong)uVar1 >> 0x20) + -1 + (uint)((char)uVar1 == '\x01');
    fVar20 = (float)dVar19 - (float)iVar6;
    fVar16 = fVar20;
    if (0.99999994 <= fVar20) {
      fVar16 = 0.99999994;
    }
    fVar16 = (float)(~-(uint)(0.0 < fVar20) & (uint)fVar20 | (uint)fVar16 & -(uint)(0.0 < fVar20)) +
             0.5 + -0.5;
    dVar13 = ((double)(float)(dVar17 - (((double)((ulonglong)dVar13 & 0x8000000000000000) +
                                        (double)((lVar5 >> 0x20) *
                                                (longlong)*(int *)(param_1 + 0x100))) / dVar2) /
                                       dVar14) * dVar2) / dVar13;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar13;
    auVar18 = roundpd(auVar15,auVar15,1);
    dVar14 = auVar18._0_8_;
    dVar13 = dVar13 - dVar14;
    if (2147483647.0 <= dVar14) {
      dVar14 = 2147483647.0;
    }
    if (dVar14 <= -2147483648.0) {
      dVar14 = -2147483648.0;
    }
    iVar6 = (int)dVar13;
    if (0.99999994 <= fVar16) {
      fVar16 = 0.99999994;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar11 = (float)dVar13 - (float)iVar6;
    fVar20 = fVar11;
    if (0.99999994 <= fVar11) {
      fVar20 = 0.99999994;
    }
    fVar20 = (float)(~-(uint)(0.0 < fVar11) & (uint)fVar11 | (uint)fVar20 & -(uint)(0.0 < fVar11)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar20) {
      fVar20 = 0.99999994;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    bVar9 = true;
    for (fVar11 = 0.0; (iVar7 < iVar10 || ((iVar7 == iVar10 && (fVar11 < 0.0))));
        fVar11 = fVar11 - auVar18._0_4_) {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14753e8f2(param_2,iVar3);
      }
      *(int *)(*param_2 + (longlong)iVar3 * 4) = iVar7;
      if (bVar9) {
        fVar11 = fVar11 + fVar20;
        fVar12 = fVar11 + fVar11;
        iVar3 = (int)dVar14 + iVar6;
      }
      else {
        fVar11 = fVar11 + fVar16;
        fVar12 = fVar11 + fVar11;
        iVar3 = iVar8;
      }
      iVar7 = iVar7 + iVar3 + ((int)ROUND(fVar12 + -0.5) >> 1);
      auVar18 = roundss(ZEXT816(0),ZEXT416((uint)fVar11),9);
      bVar9 = false;
    }
  }
  return;
}



// FUNCTION 14909cf4a FUN_14909cf4a body=208 status=ok
// SIG undefined FUN_14909cf4a(void)

void FUN_14909cf4a(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  local_68 = *(longlong *)(param_1 + 0xf8);
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (uint)((char)uVar1 != '\x01') + (int)((ulonglong)uVar1 >> 0x20);
  local_44 = (uint)((char)uVar2 == '\x01') + (int)((ulonglong)uVar2 >> 0x20);
  local_50 = *(undefined1 *)(param_1 + 0x110);
  local_60 = *(undefined4 *)(param_1 + 0x100);
  uStack_5c = *(undefined4 *)(param_1 + 0x104);
  uStack_58 = *(undefined4 *)(param_1 + 0x108);
  uStack_54 = *(undefined4 *)(param_1 + 0x10c);
  FUN_14909d01c(&local_68,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909d01c FUN_14909d01c body=881 status=ok
// SIG undefined FUN_14909d01c(void)

void FUN_14909d01c(longlong param_1,float param_2,ulonglong param_3,longlong param_4)

{
  uint uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  double dVar17;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x24) - 1;
  uVar7 = param_3;
  if ((int)uVar4 <= (int)(uint)param_3) {
    if (0.0 <= (float)(param_3 >> 0x20)) {
      uVar7 = (ulonglong)uVar4;
    }
    if (uVar4 != (uint)param_3) {
      uVar7 = (ulonglong)uVar4;
    }
    param_3 = uVar7 & 0xffffffff;
  }
  dVar2 = (double)(int)param_4;
  dVar11 = (double)(int)((ulonglong)param_4 >> 0x20);
  iVar6 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
  uVar4 = (uint)param_3;
  if ((int)uVar4 <= (int)uVar1) {
    if ((float)(uVar7 >> 0x20) <= 0.0) {
      uVar7 = (ulonglong)uVar1;
    }
    if (uVar1 != uVar4) {
      uVar7 = (ulonglong)uVar1;
    }
    uVar4 = (uint)uVar7;
  }
  param_4 = param_4 >> 0x20;
  fVar16 = (float)(uVar7 >> 0x20);
  auVar14 = roundps(unaff_XMM10,ZEXT416((uint)fVar16),1);
  fVar9 = (float)((double)param_2 -
                 ((double)(iVar6 * param_4) + (double)((ulonglong)dVar11 & 0x8000000000000000)) /
                 dVar2);
  fVar16 = (fVar16 - auVar14._0_4_) + 0.5 + -0.5;
  auVar13 = ZEXT416((uint)fVar16);
  if (0.99999994 <= fVar16) {
    auVar13 = ZEXT416(0x3f7fffff);
  }
  if (auVar13._0_4_ <= 0.0) {
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar13._4_12_;
    auVar13 = auVar3 << 0x20;
  }
  if (ABS(*(float *)(param_1 + 0x14)) <= 1e-08) {
    dVar8 = 1.0;
  }
  else {
    dVar8 = (double)*(float *)(param_1 + 0x14);
  }
  dVar8 = dVar8 * ((double)auVar13._0_4_ + (double)(int)((uVar4 - uVar1) + (int)auVar14._0_4_));
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar8;
  auVar14 = roundpd(auVar14,auVar14,1);
  dVar17 = auVar14._0_8_;
  dVar8 = dVar8 - dVar17;
  if (2147483647.0 <= dVar17) {
    dVar17 = 2147483647.0;
  }
  if (dVar17 <= -2147483648.0) {
    dVar17 = -2147483648.0;
  }
  fVar16 = (float)dVar8;
  if (0.99999994 <= fVar16) {
    fVar16 = 0.99999994;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar16 = fVar16 + 0.5 + -0.5;
  if (0.99999994 <= fVar16) {
    fVar16 = 0.99999994;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (0.0 < fVar9) {
    dVar8 = ((double)param_2 * dVar2) / dVar11;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar8;
    auVar14 = roundpd(auVar13,auVar13,1);
    dVar12 = auVar14._0_8_;
    dVar8 = dVar8 - dVar12;
    iVar5 = (int)dVar8;
    fVar10 = (float)dVar8 - (float)iVar5;
    fVar15 = fVar10;
    if (0.99999994 <= fVar10) {
      fVar15 = 0.99999994;
    }
    fVar15 = (float)(~-(uint)(0.0 < fVar10) & (uint)fVar10 | (uint)fVar15 & -(uint)(0.0 < fVar10)) +
             0.5 + -0.5;
    if (2147483647.0 <= dVar12) {
      dVar12 = 2147483647.0;
    }
    if (dVar12 <= -2147483648.0) {
      dVar12 = -2147483648.0;
    }
    if (0.99999994 <= fVar15) {
      fVar15 = 0.99999994;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (((int)(fVar15 + 0.5) + (int)dVar12 + iVar5 + 1 <
         (int)((iVar6 + *(int *)(param_1 + 0x24)) - uVar1)) ||
       (0.0001 < ABS((float)((double)(float)(((double)((int)dVar17 * param_4) +
                                             (double)fVar16 * dVar11) / dVar2) +
                            ((double)(*(int *)(param_1 + 8) * param_4) +
                            (double)((ulonglong)dVar11 & 0x8000000000000000)) / dVar2) - fVar9))) {
      FUN_1447c7e44();
    }
  }
  return;
}



// FUNCTION 14909d38e FUN_14909d38e body=158 status=ok
// SIG undefined FUN_14909d38e(void)

undefined8 * FUN_14909d38e(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14baac6d0;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  lVar3 = *(longlong *)(param_2 + 0xf8);
  param_1[4] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x110);
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  param_1[5] = *(undefined8 *)(param_2 + 0x100);
  param_1[6] = uVar4;
  *(uint *)(param_1 + 8) = (uint)((char)uVar1 != '\x01') + (int)((ulonglong)uVar1 >> 0x20);
  *(uint *)((longlong)param_1 + 0x44) =
       (uint)((char)uVar2 == '\x01') + (int)((ulonglong)uVar2 >> 0x20);
  return param_1;
}



// FUNCTION 14909d430 FUN_14909d430 body=393 status=ok
// SIG undefined FUN_14909d430(void)

longlong * FUN_14909d430(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_145b9dd3a();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_14909d454;
  }
  plVar1 = (longlong *)0x0;
LAB_14909d454:
  uVar2 = FUN_14073751e();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if (*(longlong *)(param_3 + 0x668) == 0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)*(float *)(*(longlong *)(param_3 + 0x668) + 0x60);
  }
  dVar8 = ((double)(int)*(undefined8 *)(lVar3 + 0x118) * dVar6) /
          (double)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x118) >> 0x20);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar8;
  auVar7 = roundpd(auVar7,auVar7,1);
  dVar6 = auVar7._0_8_;
  dVar8 = dVar8 - dVar6;
  if (2147483647.0 <= dVar6) {
    dVar6 = 2147483647.0;
  }
  if (dVar6 <= -2147483648.0) {
    dVar6 = -2147483648.0;
  }
  iVar4 = (int)dVar8;
  fVar5 = (float)dVar8 - (float)iVar4;
  fVar9 = fVar5;
  if (0.99999994 <= fVar5) {
    fVar9 = 0.99999994;
  }
  fVar9 = (float)(~-(uint)(0.0 < fVar5) & (uint)fVar5 | (uint)fVar9 & -(uint)(0.0 < fVar5)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar9) {
    fVar9 = 0.99999994;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  (**(code **)(*plVar1 + 0x308))
            (plVar1,param_1 + 0x20,param_2,(int)(fVar9 + 0.5) + (int)dVar6 + iVar4 + 1,0xffffffff);
  lVar3 = *(longlong *)(param_3 + 0x668);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  plVar1[0x1f] = lVar3;
  (**(code **)(*param_1 + 0x318))(param_1,plVar1);
  return plVar1;
}



// FUNCTION 14909d5ba FUN_14909d5ba body=165 status=ok
// SIG undefined FUN_14909d5ba(void)

undefined8 * FUN_14909d5ba(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14909d38e(local_60,param_3);
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 3;
  *(undefined1 *)(param_2 + 1) = local_58;
  *(undefined4 *)(param_2 + 3) = local_48;
  param_2[2] = local_50;
  *param_2 = &PTR_FUN_14baac6d0;
  param_2[4] = local_40;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_2 + 7) = local_28;
  *(undefined4 *)(param_2 + 5) = local_38;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_34;
  *(undefined4 *)(param_2 + 6) = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_2c;
  param_2[8] = local_20;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909d668 FUN_14909d668 body=75 status=ok
// SIG undefined FUN_14909d668(void)

bool FUN_14909d668(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14909d6a1;
    }
  }
  lVar2 = 0;
LAB_14909d6a1:
  lVar1 = FUN_145b9dd3a();
  return lVar2 == lVar1;
}



// FUNCTION 14909d6b9 FUN_14909d6b9 body=174 status=ok
// SIG undefined FUN_14909d6b9(void)

undefined8 FUN_14909d6b9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b9dd3a();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909d7c2 FUN_14909d7c2 body=132 status=ok
// SIG undefined FUN_14909d7c2(void)

void FUN_14909d7c2(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 14909d846 FUN_14909d846 body=106 status=ok
// SIG undefined FUN_14909d846(void)

void FUN_14909d846(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909d8b2 FUN_14909d8b2 body=95 status=ok
// SIG undefined FUN_14909d8b2(void)

void FUN_14909d8b2(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 14909d922 FUN_14909d922 body=124 status=ok
// SIG undefined FUN_14909d922(void)

void FUN_14909d922(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0x278) == '\x01') && (*(longlong *)(param_1 + 0x38) != 0)) {
    uVar2 = 0;
    FUN_1481de234(param_1 + 0x38,param_2,L"ParamsScaleBuffer",0xd,4,0x80,0);
    uVar1 = FUN_1481de29a(param_1 + 0x38,param_2);
    FUN_1447759b4(param_2,uVar1,param_1 + 0x60,0x200,uVar2 & 0xffffff00);
  }
  return;
}



// FUNCTION 14909d99e FUN_14909d99e body=313 status=ok
// SIG undefined FUN_14909d99e(void)

void FUN_14909d99e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_6e8 [32];
  uint local_6c8;
  undefined4 local_6c0;
  undefined4 local_6b8;
  undefined1 local_6a8 [1656];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  if (*(char *)(param_1 + 0x278) == '\x01') {
    FUN_1407779ba(local_6a8,&DAT_14ca85100,param_3,0);
    lVar1 = param_1 + 0x10;
    local_6b8 = 0;
    local_6c8 = 4;
    local_6c0 = 0x18;
    FUN_1481de234(lVar1,local_6a8,L"BoundingBoxBuffer",0x1c);
    uVar2 = FUN_1481de29a(lVar1,local_6a8);
    local_6c8 = CONCAT31(local_6c8._1_3_,1);
    FUN_1447759b4(local_6a8,uVar2,&DAT_14baadf60,0x60);
    FUN_1481de412(lVar1);
    lVar1 = param_1 + 0x38;
    local_6b8 = 0;
    local_6c8 = 4;
    local_6c0 = 0x80;
    FUN_1481de234(lVar1,local_6a8,L"ParamsScaleBuffer",0xd);
    uVar2 = FUN_1481de29a(lVar1,local_6a8);
    local_6c8 = local_6c8 & 0xffffff00;
    FUN_1447759b4(local_6a8,uVar2,param_1 + 0x60,0x200);
    FUN_1481de412(lVar1);
    FUN_140779360(local_6a8);
    FUN_140778010(local_6a8);
  }
  if ((local_30 ^ (ulonglong)auStack_6e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909dad8 FUN_14909dad8 body=50 status=ok
// SIG undefined FUN_14909dad8(void)

void FUN_14909dad8(longlong param_1)

{
  if (*(char *)(param_1 + 0x278) == '\x01') {
    FUN_143abafa4(param_1 + 0x10);
    FUN_143abafa4(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 14909db0a FUN_14909db0a body=124 status=ok
// SIG undefined FUN_14909db0a(void)

char FUN_14909db0a(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  byte bVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  lVar2 = FUN_14479d2ce(&local_20);
  if (lVar2 == 0) {
    cVar3 = '\0';
  }
  else {
    lVar2 = FUN_14479d2ce(&local_20);
    bVar4 = *(byte *)(lVar2 + 0x49);
    lVar2 = FUN_14479d2ce(&local_20);
    bVar1 = (byte)*(undefined4 *)(lVar2 + 0x48);
    if (bVar1 < bVar4) {
      bVar1 = bVar4;
    }
    bVar4 = 5;
    if (bVar1 < 5) {
      bVar4 = bVar1;
    }
    cVar3 = bVar4 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909db88 FUN_14909db88 body=4193 status=ok
// SIG undefined FUN_14909db88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14909db88(double *param_1,longlong param_2,int *param_3,float param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  bool bVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  double dVar26;
  double dVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auStack_3f8 [32];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_378 [16];
  double local_2f8 [16];
  double local_278 [5];
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if ((param_2 == 0) || ((char)param_3[0x1c] != '\x01')) goto LAB_14909dfca;
  pdVar13 = (double *)(param_2 + 0x50);
  lVar4 = FUN_14479d2ce(pdVar13);
  lVar4 = *(longlong *)(lVar4 + 0x660);
  pdVar10 = (double *)(param_3 + 4);
  pdVar11 = param_1;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar11 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar11 = pdVar11 + 1;
  }
  cVar2 = FUN_144729dda(pdVar13);
  if (((cVar2 == '\0') || (cVar2 = FUN_14909f61c(pdVar13), cVar2 != '\0')) ||
     (lVar9 = FUN_14479d2ce(pdVar13), lVar4 == 0 || *(longlong *)(lVar9 + 0x688) == 0)) {
    *(undefined1 *)(param_1 + 0x2d) = 0;
LAB_14909dc65:
    bVar14 = false;
  }
  else {
    uVar3 = FUN_149071dd0(lVar4,*param_3,param_3[1]);
    *(undefined1 *)(param_1 + 0x2d) = uVar3;
    lVar9 = FUN_14479d2ce(pdVar13);
    lVar9 = FUN_149072a9c(*(undefined8 *)(lVar9 + 0x688));
    if (lVar9 == 0) goto LAB_14909dc65;
    lVar9 = FUN_14479d2ce(pdVar13);
    lVar9 = FUN_149072ad2(*(undefined8 *)(lVar9 + 0x688));
    if (lVar9 == 0) goto LAB_14909dc65;
    lVar9 = FUN_14479d2ce(pdVar13);
    lVar9 = FUN_149072a9c(*(undefined8 *)(lVar9 + 0x688));
    lVar7 = FUN_14479d2ce(pdVar13);
    lVar7 = FUN_149072ad2(*(undefined8 *)(lVar7 + 0x688));
    bVar14 = lVar9 != lVar7;
  }
  *(bool *)((longlong)param_1 + 0x169) = bVar14;
  cVar2 = FUN_144729dda(pdVar13);
  uVar15 = 0;
  if ((cVar2 != '\0') && (cVar2 = FUN_14909f61c(pdVar13), cVar2 == '\0')) {
    uVar15 = FUN_14909db0a(*pdVar13);
  }
  *(undefined4 *)(param_1 + 0x85) = uVar15;
  cVar2 = FUN_144729dda(pdVar13);
  if ((cVar2 == '\0') || (cVar2 = FUN_14909f61c(pdVar13), cVar2 != '\0')) {
    if (lVar4 == 0) goto LAB_14909e159;
    cVar2 = FUN_149071d40(lVar4,*param_3,param_3[1]);
  }
  else {
    uVar6 = FUN_14479d2ce(pdVar13);
    cVar2 = FUN_14907fc5c(uVar6,*param_3,param_3[1]);
    if (lVar4 == 0) goto LAB_14909e159;
  }
  lVar9 = FUN_1490712b8(lVar4);
  if (((cVar2 != '\0') && (-1 < *param_3)) && (*param_3 < *(int *)(lVar9 + 8))) {
    plVar5 = (longlong *)FUN_1490712b8(lVar4);
    iVar1 = *param_3;
    lVar4 = *plVar5;
    *(uint *)(param_1 + 0x2e) = (uint)*(byte *)(lVar4 + 0x250 + (longlong)iVar1 * 0x2e8);
    cVar2 = FUN_144729dda(pdVar13);
    iVar8 = -1;
    if (cVar2 != '\0') {
      cVar2 = FUN_14909f61c(pdVar13);
      iVar8 = -1;
      if (cVar2 == '\0') {
        iVar8 = *param_3;
      }
    }
    lVar4 = lVar4 + (longlong)iVar1 * 0x2e8;
    *(int *)(param_1 + 0x30) = iVar8;
    cVar2 = FUN_144729dda(pdVar13);
    if ((cVar2 == '\0') || (cVar2 = FUN_14909f61c(pdVar13), pdVar10 = pdVar13, cVar2 != '\0')) {
      auVar39._8_8_ = 0;
      auVar39._0_8_ = local_178._8_8_;
      local_178 = auVar39 << 0x40;
      FUN_14485c47a(local_178,0);
      pdVar10 = (double *)local_178;
    }
    param_1[0x32] = *pdVar10;
    *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)(lVar4 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar4 + 0x38);
    dVar38 = *(double *)(lVar4 + 0x48);
    param_1[0x35] = *(double *)(lVar4 + 0x40);
    param_1[0x36] = dVar38;
    param_1[0x37] = *(double *)(lVar4 + 0x50);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar4 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(lVar4 + 0x58);
    dVar38 = *(double *)(lVar4 + 0x68);
    param_1[0x39] = *(double *)(lVar4 + 0x60);
    param_1[0x3a] = dVar38;
    param_1[0x3b] = *(double *)(lVar4 + 0x70);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(lVar4 + 0x78);
    *(undefined1 *)((longlong)param_1 + 0x1e1) = *(undefined1 *)(lVar4 + 0x79);
    *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(lVar4 + 0x7c);
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(lVar4 + 0x80);
    *(undefined1 *)((longlong)param_1 + 0x1ec) = *(undefined1 *)(lVar4 + 0x110);
    *(undefined1 *)((longlong)param_1 + 0x1ed) = *(undefined1 *)(lVar4 + 0x111);
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(lVar4 + 0x114);
    *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(lVar4 + 0x118);
    *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(lVar4 + 0x1a8);
    *(undefined1 *)((longlong)param_1 + 0x1f9) = *(undefined1 *)(lVar4 + 0x1a9);
    *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(lVar4 + 0x1ac);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar4 + 0x1b0);
    *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(lVar4 + 0x1b4);
    param_1[0x41] = *(double *)(lVar4 + 0x1b8);
    *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(lVar4 + 0x1c0);
    *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)(lVar4 + 0x1c4);
    *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(lVar4 + 0x254);
    *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)(lVar4 + 600);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar4 + 0x25c);
    if (0 < *(int *)(param_1 + 0x2e)) {
      lVar9 = 0;
      do {
        uVar6 = FUN_1401e2d36(lVar4 + 0x88);
        uVar15 = FUN_1448c9f94(uVar6);
        *(undefined4 *)((longlong)param_1 + lVar9 * 4 + 0x2a4) = uVar15;
        uVar6 = FUN_1401e2d36(lVar4 + 0x120);
        uVar15 = FUN_1448c9f94(uVar6);
        *(undefined4 *)((longlong)param_1 + lVar9 * 4 + 0x224) = uVar15;
        uVar6 = FUN_1401e2d36(lVar4 + 0x1c8);
        uVar15 = FUN_1448c9f94(uVar6);
        *(undefined4 *)((longlong)param_1 + lVar9 * 4 + 0x324) = uVar15;
        uVar6 = FUN_1401e2d36(lVar4 + 0x260);
        uVar15 = FUN_1448c9f94(uVar6);
        *(undefined4 *)((longlong)param_1 + lVar9 * 4 + 0x3a4) = uVar15;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x2e));
    }
    *(int *)((longlong)param_1 + 0x16c) = param_3[3];
    *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
    pdVar10 = param_1 + 0xc;
    pdVar11 = (double *)&DAT_14c846480;
    pdVar12 = pdVar10;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pdVar12 = *pdVar11;
      pdVar11 = pdVar11 + 1;
      pdVar12 = pdVar12 + 1;
    }
    cVar2 = FUN_144729dda(pdVar13);
    if ((cVar2 != '\0') && (cVar2 = FUN_14909f61c(pdVar13), cVar2 == '\0')) {
      lVar4 = FUN_14479d2ce(pdVar13);
      *(undefined1 *)((longlong)param_1 + 0x42c) = *(undefined1 *)(lVar4 + 0x6b2);
      uVar6 = FUN_14479d2ce(pdVar13);
      FUN_149082e6c(uVar6,pdVar10);
      auVar41 = _DAT_149935300;
      auVar39 = _DAT_149934d80;
      dVar38 = param_1[0xc];
      dVar17 = param_1[0xd];
      dVar34 = param_1[0xe];
      dVar20 = param_1[0xf];
      dVar26 = dVar34 * dVar34 + dVar38 * dVar38;
      dVar31 = dVar20 * dVar20 + dVar17 * dVar17;
      auVar27._0_8_ = dVar26 + dVar31;
      auVar27._8_8_ = dVar26 + dVar31;
      auVar42._8_8_ = -(ulonglong)(1e-08 <= auVar27._8_8_);
      auVar42._0_8_ = -(ulonglong)(1e-08 <= auVar27._0_8_);
      auVar28 = sqrtpd(auVar27,auVar27);
      dVar26 = (double)DAT_149934d80;
      dVar31 = DAT_149934d80._8_8_;
      auVar28 = divpd(_DAT_149934d80,auVar28);
      auVar35._0_8_ = auVar28._0_8_ * dVar34;
      auVar35._8_8_ = auVar28._8_8_ * dVar20;
      dVar20 = (double)((ulonglong)(dVar38 * auVar28._0_8_) & -(ulonglong)(1e-08 <= auVar27._0_8_));
      dVar22 = (double)((ulonglong)(dVar17 * auVar28._8_8_) & -(ulonglong)(1e-08 <= auVar27._8_8_));
      auVar42 = blendvpd(_DAT_149935300,auVar35,auVar42);
      param_1[0xc] = dVar20;
      param_1[0xd] = dVar22;
      *(undefined1 (*) [16])(param_1 + 0xe) = auVar42;
      dVar32 = dVar22 + dVar22;
      dVar37 = auVar42._0_8_;
      dVar43 = auVar42._8_8_;
      dVar17 = dVar37 + dVar37;
      dVar34 = (dVar20 + dVar20) * dVar20;
      dVar38 = param_1[0x14];
      local_158 = param_1[0x15];
      dStack_130 = param_1[0x16];
      dStack_150 = (dVar31 - (dVar17 * dVar37 + dVar34)) * local_158;
      local_128 = (1.0 - (dVar34 + dVar32 * dVar22)) * dStack_130;
      auVar28._8_4_ = auVar42._8_4_;
      auVar28._0_8_ = dVar43;
      auVar28._12_4_ = auVar42._12_4_;
      dVar34 = (dVar20 + dVar20) * auVar28._8_8_;
      dVar21 = (dVar32 * dVar20 + dVar17 * dVar43) * dVar38;
      local_148 = (dVar17 * dVar22 + dVar34) * local_158;
      local_138 = (dVar20 * dVar17 + dVar32 * dVar43) * dStack_130;
      local_168 = (dVar20 * dVar17 - dVar32 * dVar43) * dVar38;
      local_158 = (dVar32 * dVar20 - dVar17 * dVar43) * local_158;
      dStack_130 = (dVar17 * dVar22 - dVar34) * dStack_130;
      local_178._8_4_ = SUB84(dVar21,0);
      local_178._0_8_ = (dVar26 - (dVar17 * dVar37 + dVar32 * dVar22)) * dVar38;
      local_178._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      uStack_160 = 0;
      uStack_140 = 0;
      uStack_120 = 0;
      local_118 = param_1[0x10];
      dStack_110 = param_1[0x11];
      local_108 = param_1[0x12];
      uStack_100 = 0x3ff0000000000000;
      dVar17 = *param_1;
      dVar34 = param_1[1];
      dVar38 = param_1[2];
      local_1e8 = param_1[8];
      local_1d8 = param_1[9];
      dStack_1b0 = param_1[10];
      dVar32 = dVar34 + dVar34;
      dVar20 = dVar38 + dVar38;
      dVar21 = dVar17 * (dVar17 + dVar17);
      local_1f8 = (dVar26 - (dVar38 * dVar20 + dVar34 * dVar32)) * local_1e8;
      dStack_1d0 = (dVar31 - (dVar38 * dVar20 + dVar21)) * local_1d8;
      local_1a8 = (1.0 - (dVar21 + dVar34 * dVar32)) * dStack_1b0;
      dVar38 = param_1[3];
      dVar21 = dVar20 * dVar38;
      dVar22 = (dVar17 + dVar17) * param_1[3];
      dVar38 = dVar32 * dVar38;
      dStack_1f0 = (dVar32 * dVar17 + dVar21) * local_1e8;
      local_1c8 = (dVar20 * dVar34 + dVar22) * local_1d8;
      local_1b8 = (dVar38 + *param_1 * dVar20) * dStack_1b0;
      local_1e8 = (*param_1 * dVar20 - dVar38) * local_1e8;
      local_1d8 = (dVar32 * dVar17 - dVar21) * local_1d8;
      dStack_1b0 = (dVar20 * dVar34 - dVar22) * dStack_1b0;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = param_1[4];
      dStack_190 = param_1[5];
      local_188 = param_1[6];
      uStack_180 = 0x3ff0000000000000;
      if (((param_4 == 0.0) && (!NAN(param_4))) || (*(char *)((longlong)param_1 + 0x174) != '\0')) {
        *(undefined4 *)(param_1 + 0x25) = DAT_14c846338;
        param_1[0x24] = DAT_14c846330;
        *(undefined4 *)(param_1 + 0x28) = DAT_14c846338;
        param_1[0x27] = DAT_14c846330;
        param_1[0x2a] = DAT_14c846330;
        *(undefined4 *)(param_1 + 0x2b) = DAT_14c846338;
        *(double *)((longlong)param_1 + 0x15c) = DAT_14c846330;
        *(undefined4 *)((longlong)param_1 + 0x164) = DAT_14c846338;
      }
      else {
        dVar17 = param_1[0x18];
        dVar34 = param_1[0x19];
        dVar38 = param_1[0x1a];
        local_278[2] = param_1[0x20];
        local_278[4] = param_1[0x21];
        dStack_230 = param_1[0x22];
        dVar21 = dVar34 + dVar34;
        dVar20 = dVar38 + dVar38;
        dVar22 = dVar17 * (dVar17 + dVar17);
        local_278[0] = (dVar26 - (dVar38 * dVar20 + dVar34 * dVar21)) * local_278[2];
        dStack_250 = (dVar31 - (dVar38 * dVar20 + dVar22)) * local_278[4];
        local_228 = (1.0 - (dVar22 + dVar34 * dVar21)) * dStack_230;
        dVar38 = param_1[0x1b];
        dVar26 = dVar20 * dVar38;
        dVar31 = (dVar17 + dVar17) * param_1[0x1b];
        dVar38 = dVar21 * dVar38;
        local_278[1] = (dVar21 * dVar17 + dVar26) * local_278[2];
        local_248 = (dVar20 * dVar34 + dVar31) * local_278[4];
        local_238 = (dVar38 + param_1[0x18] * dVar20) * dStack_230;
        local_278[2] = (param_1[0x18] * dVar20 - dVar38) * local_278[2];
        local_278[4] = (dVar21 * dVar17 - dVar26) * local_278[4];
        dStack_230 = (dVar20 * dVar34 - dVar31) * dStack_230;
        local_278[3] = 0.0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = param_1[0x1c];
        dStack_210 = param_1[0x1d];
        local_208 = param_1[0x1e];
        uStack_200 = 0x3ff0000000000000;
        FUN_14494412e(local_278,local_378);
        FUN_1447fea8d(local_2f8,local_178,local_378);
        pdVar11 = local_2f8;
        pdVar13 = local_378;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *pdVar13 = *pdVar11;
          pdVar11 = pdVar11 + 1;
          pdVar13 = pdVar13 + 1;
        }
        FUN_1448ac920(&local_3d8);
        fVar16 = *(float *)(lVar4 + 0x6b4);
        if (1.0 <= fVar16) {
          fVar16 = 1.0;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        dVar38 = (double)fVar16;
        dVar26 = 1.0 / (double)param_4;
        fVar16 = (float)(local_3a8 * dVar38 * dVar26);
        fVar25 = (float)(local_3b0 * dVar38 * dVar26);
        fVar33 = (float)(dVar26 * dVar38 * local_3b8);
        *(float *)(param_1 + 0x24) = fVar33;
        *(float *)((longlong)param_1 + 0x124) = fVar25;
        *(float *)(param_1 + 0x25) = fVar16;
        param_4 = 1.0 / param_4;
        *(float *)(param_1 + 0x2a) = (fVar33 - *(float *)((longlong)param_1 + 300)) * param_4;
        *(float *)((longlong)param_1 + 0x154) = (fVar25 - *(float *)(param_1 + 0x26)) * param_4;
        auVar36._0_8_ = local_3d8 * local_3d8;
        auVar36._8_8_ = dStack_3d0 * dStack_3d0;
        dVar38 = local_3c8 * local_3c8 + auVar36._0_8_;
        auVar30._0_8_ = dVar38 + auVar36._8_8_ + 0.0;
        auVar30._8_8_ = dVar38 + auVar36._8_8_ + 0.0;
        *(float *)(param_1 + 0x2b) = (fVar16 - *(float *)((longlong)param_1 + 0x134)) * param_4;
        auVar19._8_8_ = -(ulonglong)(1e-08 <= auVar30._8_8_);
        auVar19._0_8_ = -(ulonglong)(1e-08 <= auVar30._0_8_);
        auVar42 = sqrtpd(auVar36,auVar30);
        auVar42 = divpd(auVar39,auVar42);
        auVar24._0_8_ = local_3d8 * auVar42._0_8_;
        auVar24._8_8_ = dStack_3d0 * auVar42._8_8_;
        auVar28 = blendvpd(ZEXT816(0x3ff0000000000000),auVar24,auVar19);
        if ((-(ulonglong)(1e-08 <= auVar30._0_8_) & 1) == 0) {
          dVar38 = 0.0;
        }
        else {
          dVar38 = local_3c8 * auVar42._0_8_;
        }
        dVar26 = dStack_3c0;
        if (1.0 <= dStack_3c0) {
          dVar26 = 1.0;
        }
        dVar26 = acos((double)(-(ulonglong)(dStack_3c0 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dStack_3c0 < -1.0) & (ulonglong)dVar26));
        dVar26 = dVar26 + dVar26;
        fVar16 = *(float *)(lVar4 + 0x6b8);
        if (1.0 <= fVar16) {
          fVar16 = 1.0;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        dVar31 = (double)fVar16;
        dVar20 = dVar26 * auVar28._0_8_ * dVar31 * param_1[0x14];
        dVar21 = auVar28._8_8_ * dVar26 * dVar31 * param_1[0x15];
        dVar22 = dVar38 * dVar26 * dVar31 * param_1[0x16];
        dVar31 = param_1[0xc];
        dVar17 = param_1[0xd];
        dVar34 = param_1[0xe];
        dVar38 = param_1[0xf];
        dVar32 = dVar21 * dVar31 - dVar17 * dVar20;
        dVar37 = dVar22 * dVar17 - dVar34 * dVar21;
        dVar26 = dVar20 * dVar34 - dVar31 * dVar22;
        dVar37 = dVar37 + dVar37;
        dVar26 = dVar26 + dVar26;
        dVar32 = dVar32 + dVar32;
        fVar16 = (float)(dVar32 * dVar38 + dVar22 + (dVar26 * dVar31 - dVar37 * dVar17)) * param_4;
        fVar33 = (float)((dVar34 * dVar37 - dVar31 * dVar32) + param_1[0xf] * dVar26 + dVar21) *
                 param_4;
        fVar25 = (float)((dVar32 * dVar17 - dVar26 * dVar34) + dVar38 * dVar37 + dVar20) * param_4;
        *(float *)(param_1 + 0x27) = fVar25;
        *(float *)((longlong)param_1 + 0x13c) = fVar33;
        *(float *)(param_1 + 0x28) = fVar16;
        *(float *)((longlong)param_1 + 0x15c) =
             (fVar25 - *(float *)((longlong)param_1 + 0x144)) * param_4;
        *(float *)(param_1 + 0x2c) = (fVar33 - *(float *)(param_1 + 0x29)) * param_4;
        *(float *)((longlong)param_1 + 0x164) =
             (fVar16 - *(float *)((longlong)param_1 + 0x14c)) * param_4;
      }
      pdVar11 = pdVar10;
      pdVar13 = param_1 + 0x18;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar13 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar13 = pdVar13 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)(param_1 + 0x25);
      *(double *)((longlong)param_1 + 300) = param_1[0x24];
      *(double *)((longlong)param_1 + 0x144) = param_1[0x27];
      *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x28);
      FUN_14494412e(&local_1f8,local_2f8);
      FUN_1447fea8d(local_278,local_178,local_2f8);
      pdVar11 = local_278;
      pdVar13 = (double *)local_178;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar13 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar13 = pdVar13 + 1;
      }
      pdVar11 = (double *)local_178;
      pdVar13 = local_278;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar13 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar13 = pdVar13 + 1;
      }
      FUN_1448ac920(local_2f8);
      pdVar11 = local_2f8;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar10 = *pdVar11;
        pdVar11 = pdVar11 + 1;
        pdVar10 = pdVar10 + 1;
      }
      dVar38 = param_1[0xc];
      dVar26 = param_1[0xd];
      dVar31 = param_1[0xe];
      dVar17 = param_1[0xf];
      auVar23._0_8_ = dVar38 * dVar38;
      auVar23._8_8_ = dVar26 * dVar26;
      dVar34 = dVar31 * dVar31 + auVar23._0_8_;
      dVar20 = dVar17 * dVar17 + auVar23._8_8_;
      auVar29._0_8_ = dVar34 + dVar20;
      auVar29._8_8_ = dVar34 + dVar20;
      auVar42 = sqrtpd(auVar23,auVar29);
      auVar39 = divpd(auVar39,auVar42);
      auVar40._0_8_ = auVar39._0_8_ * dVar31;
      auVar40._8_8_ = auVar39._8_8_ * dVar17;
      auVar18._8_8_ = -(ulonglong)(1e-08 <= auVar29._8_8_);
      auVar18._0_8_ = -(ulonglong)(1e-08 <= auVar29._0_8_);
      auVar41 = blendvpd(auVar41,auVar40,auVar18);
      param_1[0xc] = (double)((ulonglong)(dVar38 * auVar39._0_8_) &
                             -(ulonglong)(1e-08 <= auVar29._0_8_));
      param_1[0xd] = (double)((ulonglong)(dVar26 * auVar39._8_8_) &
                             -(ulonglong)(1e-08 <= auVar29._8_8_));
      *(undefined1 (*) [16])(param_1 + 0xe) = auVar41;
      if (*(char *)(lVar4 + 0x6a8) == '\x01') {
        param_1[0x37] = *(double *)(lVar4 + 0x6f0);
        dVar38 = *(double *)(lVar4 + 0x6e8);
        param_1[0x35] = *(double *)(lVar4 + 0x6e0);
        param_1[0x36] = dVar38;
        *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(lVar4 + 0x6f8);
        param_1[0x3b] = *(double *)(lVar4 + 0x710);
        dVar38 = *(double *)(lVar4 + 0x708);
        param_1[0x39] = *(double *)(lVar4 + 0x700);
        param_1[0x3a] = dVar38;
        *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(lVar4 + 0x718);
        *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(lVar4 + 0x71c);
        *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(lVar4 + 0x720);
        *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(lVar4 + 0x724);
        *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(lVar4 + 0x728);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar4 + 0x72c);
        *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(lVar4 + 0x730);
        *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)(lVar4 + 0x734);
      }
    }
LAB_14909dfca:
    if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_14909e159:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3f8);
}



// FUNCTION 14909ec5e FUN_14909ec5e body=653 status=ok
// SIG undefined FUN_14909ec5e(void)

void FUN_14909ec5e(undefined8 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3ff00000;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x25) = DAT_14c846338;
  param_1[0x24] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x28) = DAT_14c846338;
  param_1[0x27] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x2b) = DAT_14c846338;
  param_1[0x2a] = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x164) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x15c) = DAT_14c846330;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3ff00000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ff00000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 300) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x14c) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x144) = DAT_14c846330;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  lVar2 = 0;
  local_38 = 0;
  FUN_14485c47a(&local_38,0);
  param_1[0x32] = local_38;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x1400000005;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0xc08ea80000000000;
  param_1[0x38] = 0x3dcccccd00000000;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0x3c23d70a3c23d70a;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 1;
  param_1[0x3e] = 0x3f8000003c23d70a;
  *(undefined2 *)(param_1 + 0x3f) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x1e3f800000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x1e0000001e;
  *(undefined1 **)((longlong)param_1 + 0x214) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3c23d70a3dcccccd;
  *(undefined4 *)(param_1 + 0x85) = 0;
  do {
    puVar1 = (undefined4 *)((longlong)param_1 + lVar2 * 4 + 0x224);
    *puVar1 = 0x3f800000;
    puVar1[1] = 0x3f800000;
    puVar1[2] = 0x3f800000;
    puVar1[3] = 0x3f800000;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x80);
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909eeec FUN_14909eeec body=345 status=ok
// SIG undefined FUN_14909eeec(void)

void FUN_14909eeec(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8 [12];
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (param_2 != 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    puVar1 = &DAT_14c846480;
    puVar3 = local_b8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    local_58 = 0;
    FUN_14909f046(param_2,param_3,&local_c8);
    FUN_14909db88(param_1,param_2,&local_c8,0);
    puVar1 = (undefined8 *)FUN_14001cc68(0x280);
    memset(puVar1,0,0x280);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0xc) = 0x105;
    *puVar1 = &PTR_FUN_14bab0390;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x274) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x27c) = 0;
    *(undefined8 **)(param_1 + 0x178) = puVar1;
    *(undefined1 *)(puVar1 + 0x4f) = local_58;
    memcpy(puVar1 + 0xc,(void *)(param_1 + 0x224),0x200);
    FUN_140308182(puVar1,0);
    *(undefined1 *)(param_1 + 0x174) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909f046 FUN_14909f046 body=604 status=ok
// SIG undefined FUN_14909f046(void)

void FUN_14909f046(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  
  FUN_14909f62c();
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = -1;
  param_3[1] = -1;
  piVar13 = param_3 + 4;
  puVar11 = &DAT_14c846480;
  piVar12 = piVar13;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined8 *)piVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    piVar12 = piVar12 + 2;
  }
  *(undefined1 *)(param_3 + 0x1c) = 0;
  lVar10 = param_1 + 0x50;
  cVar4 = FUN_144729dda(lVar10);
  if (((cVar4 == '\0') || (cVar4 = FUN_14909f61c(lVar10), param_2 == 0)) || (cVar4 != '\0')) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      param_3[2] = 0;
      param_3[0] = 0;
      param_3[1] = 0;
      puVar11 = &DAT_14c846480;
      if (param_2 != 0) {
        puVar11 = (undefined8 *)(param_2 + 0x50);
      }
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined8 *)piVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        piVar13 = piVar13 + 2;
      }
    }
  }
  else {
    lVar6 = FUN_14479d2ce(lVar10);
    lVar6 = (longlong)*(int *)(lVar6 + 0x678);
    if (0 < lVar6) {
      lVar14 = 0;
      do {
        while( true ) {
          lVar7 = FUN_14479d2ce(lVar10);
          lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x670) + lVar14 * 8);
          if (lVar7 == 0) break;
          lVar2 = *(longlong *)(lVar7 + 0x760);
          plVar9 = *(longlong **)(lVar7 + 0x768);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar12 = (int *)((longlong)plVar9 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          if ((lVar2 == 0) ||
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x100) != *(longlong *)(param_2 + 0x100)))
          {
            bVar3 = false;
          }
          else {
            *param_3 = (int)lVar14;
            bVar3 = true;
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar12 = (int *)((longlong)plVar9 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          lVar14 = lVar14 + 1;
          if (bVar3 || lVar14 == lVar6) goto LAB_14909f1cd;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar6);
    }
LAB_14909f1cd:
    iVar5 = *param_3;
    if ((-1 < iVar5) && (lVar6 = FUN_14479d2ce(lVar10), iVar5 < *(int *)(lVar6 + 0x678))) {
      uVar8 = FUN_14479d2ce(lVar10);
      iVar5 = FUN_1490806d0(uVar8);
      param_3[1] = iVar5;
      lVar6 = FUN_14479d2ce(lVar10);
      puVar11 = (undefined8 *)(lVar6 + 0x240);
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *(undefined8 *)piVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        piVar13 = piVar13 + 2;
      }
      lVar6 = FUN_14479d2ce(lVar10);
      if (*(longlong *)(lVar6 + 0x660) != 0) {
        lVar6 = FUN_14479d2ce(lVar10);
        lVar6 = FUN_14906fdf4(*(undefined8 *)(lVar6 + 0x660));
        if ((-1 < *param_3) && (*param_3 < *(int *)(lVar6 + 8))) {
          lVar6 = FUN_14479d2ce(lVar10);
          plVar9 = (longlong *)FUN_14906fdf4(*(undefined8 *)(lVar6 + 0x660));
          lVar6 = *plVar9;
          param_3[2] = *(int *)(lVar6 + 0xc + (longlong)*param_3 * 0x690);
          param_3[3] = *(int *)(lVar6 + 8 + (longlong)*param_3 * 0x690);
          uVar8 = FUN_14479d2ce(lVar10);
          lVar10 = FUN_149082766(uVar8,*param_3);
          *(bool *)(param_3 + 0x1c) = lVar10 != 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 14909f2a2 FUN_14909f2a2 body=889 status=ok
// SIG undefined FUN_14909f2a2(void)

void FUN_14909f2a2(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != (undefined8 *)0x0) {
    param_1[0x2f] = param_2[0x2f];
    puVar5 = param_2;
    puVar6 = param_1;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = param_2 + 0xc;
    puVar6 = param_1 + 0xc;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
    param_1[0x24] = param_2[0x24];
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    param_1[0x27] = param_2[0x27];
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
    param_1[0x2a] = param_2[0x2a];
    *(undefined8 *)((longlong)param_1 + 0x15c) = *(undefined8 *)((longlong)param_2 + 0x15c);
    *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
    puVar5 = param_2 + 0x18;
    puVar6 = param_1 + 0x18;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
    *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
    *(undefined8 *)((longlong)param_1 + 0x144) = *(undefined8 *)((longlong)param_2 + 0x144);
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
    *(undefined1 *)((longlong)param_1 + 0x169) = *(undefined1 *)((longlong)param_2 + 0x169);
    *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
    param_1[0x32] = param_2[0x32];
    param_1[0x31] = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    cVar2 = FUN_14909f61c(param_1 + 0x32);
    if (cVar2 == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar3 = FUN_14479d2ce(param_1 + 0x32);
      uVar3 = FUN_14907fa97(uVar3,uVar1);
      param_1[0x31] = uVar3;
    }
    *(undefined1 *)((longlong)param_1 + 0x174) = *(undefined1 *)((longlong)param_2 + 0x174);
    *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
    *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)((longlong)param_2 + 0x19c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    uVar3 = param_2[0x36];
    param_1[0x35] = param_2[0x35];
    param_1[0x36] = uVar3;
    param_1[0x37] = param_2[0x37];
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
    uVar3 = param_2[0x3a];
    param_1[0x39] = param_2[0x39];
    param_1[0x3a] = uVar3;
    param_1[0x3b] = param_2[0x3b];
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    *(undefined1 *)((longlong)param_1 + 0x1e1) = *(undefined1 *)((longlong)param_2 + 0x1e1);
    *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x1e4);
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
    *(undefined1 *)((longlong)param_1 + 0x1ec) = *(undefined1 *)((longlong)param_2 + 0x1ec);
    *(undefined1 *)((longlong)param_1 + 0x1ed) = *(undefined1 *)((longlong)param_2 + 0x1ed);
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
    *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)((longlong)param_2 + 500);
    *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
    *(undefined1 *)((longlong)param_1 + 0x1f9) = *(undefined1 *)((longlong)param_2 + 0x1f9);
    *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)((longlong)param_2 + 0x1fc);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
    param_1[0x41] = param_2[0x41];
    *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
    *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
    *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
    *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)((longlong)param_2 + 0x21c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    memcpy((void *)((longlong)param_1 + 0x224),(void *)((longlong)param_2 + 0x224),0x200);
    *(undefined4 *)((longlong)param_1 + 0x424) = *(undefined4 *)((longlong)param_2 + 0x424);
    *(undefined4 *)(param_1 + 0x85) = *(undefined4 *)(param_2 + 0x85);
    *(undefined1 *)((longlong)param_1 + 0x42c) = *(undefined1 *)((longlong)param_2 + 0x42c);
  }
  return;
}



// FUNCTION 14909f61c FUN_14909f61c body=16 status=ok
// SIG undefined FUN_14909f61c(void)

byte FUN_14909f61c(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 14909f62c FUN_14909f62c body=657 status=ok
// SIG undefined FUN_14909f62c(void)

void FUN_14909f62c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
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
  local_80 = (longlong *)0x0;
  FUN_14485c47a(&local_80,0);
  lVar1 = param_1 + 0x50;
  *(longlong **)(param_1 + 0x50) = local_80;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar8 = local_68;
    if ((param_2 == 0) ||
       (lVar6 = FUN_14479d2ce(param_2 + 0x48), lVar5 = lVar6, uVar8 = local_68, lVar6 == 0))
    goto LAB_14909f6cc;
    do {
      lVar7 = FUN_14586a468();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30 &&
          (*(longlong *)(lVar5 + 0x660) != 0)))) {
        FUN_14485c47a(lVar1,lVar5);
        break;
      }
      plVar2 = (longlong *)(lVar5 + 0x120);
      lVar5 = *plVar2;
    } while (*plVar2 != 0);
    cVar3 = FUN_144729dda(lVar1);
    uVar8 = local_68;
    if (cVar3 != '\0') goto LAB_14909f6cc;
    uVar8 = FUN_14586a468();
    lVar5 = FUN_144a78ede(lVar6,uVar8);
    if (lVar5 == 0) {
      do {
        lVar5 = lVar6;
        lVar6 = *(longlong *)(lVar5 + 0x120);
      } while (lVar6 != 0);
      lVar6 = *(longlong *)(lVar5 + 0xa8);
      uVar8 = local_68;
      if (lVar6 != 0) {
        plVar2 = (longlong *)(lVar6 + 0x240);
        lVar7 = lVar6 + 0x250;
        local_58 = 0x100000000;
        local_48 = 0xffffffff;
        uStack_40 = 0;
        uStack_50 = lVar7;
        if (*(int *)(lVar6 + 0x268) == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_58);
          iVar9 = *(int *)(lVar6 + 0x268);
        }
        local_78 = (undefined4)local_58;
        uStack_74 = local_58._4_4_;
        uStack_70 = (undefined4)uStack_50;
        uStack_6c = uStack_50._4_4_;
        uStack_60 = CONCAT44(uStack_3c,uStack_40);
        local_68 = local_48;
        uVar8 = local_68;
        local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
        local_80 = plVar2;
        if ((local_68._4_4_ != iVar9) || (uStack_50 != lVar7)) {
          iVar4 = local_68._4_4_;
          local_68 = uVar8;
          do {
            lVar5 = *(longlong *)(*local_80 + (longlong)iVar4 * 0x10);
            if (lVar5 != 0) {
              lVar6 = FUN_14586a468();
              if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                 (*(longlong *)(lVar5 + 0x660) != 0)) goto LAB_14909f6c7;
            }
            local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
            FUN_1449c0562(&local_78);
            iVar4 = local_68._4_4_;
            uVar8 = local_68;
          } while (local_80 != plVar2 ||
                   (CONCAT44(uStack_6c,uStack_70) != lVar7 || local_68._4_4_ != iVar9));
        }
      }
      goto LAB_14909f6cc;
    }
  }
  else {
    lVar5 = FUN_145b9db66();
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (((lVar6 == 0) || (lVar5 == 0)) ||
       ((lVar7 = *(longlong *)(lVar6 + 0x10), lVar7 == 0 ||
        ((*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)))))) {
      lVar5 = FUN_14909f8be();
    }
    else {
      lVar5 = *(longlong *)(lVar6 + 0x390);
    }
  }
LAB_14909f6c7:
  FUN_14485c47a(lVar1,lVar5);
  uVar8 = local_68;
LAB_14909f6cc:
  local_68 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14909f8be FUN_14909f8be body=102 status=ok
// SIG undefined FUN_14909f8be(void)

void FUN_14909f8be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14586a468();
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



// FUNCTION 14909f936 FUN_14909f936 body=48 status=ok
// SIG undefined FUN_14909f936(void)

undefined1 FUN_14909f936(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14909f966(param_2);
  FUN_14909eeec(param_2,param_1,param_3);
  return 1;
}



// FUNCTION 14909f966 FUN_14909f966 body=179 status=ok
// SIG undefined FUN_14909f966(void)

undefined8 * FUN_14909f966(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3ff00000;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3ff00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ff00000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_14909ec5e();
  return param_1;
}



// FUNCTION 14909fa1a FUN_14909fa1a body=42 status=ok
// SIG undefined FUN_14909fa1a(void)

void FUN_14909fa1a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909fa4c FUN_14909fa4c body=96 status=ok
// SIG undefined FUN_14909fa4c(void)

undefined8 FUN_14909fa4c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f61506();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfd498,1);
  return uVar3;
}



// FUNCTION 14909faac FUN_14909faac body=52 status=ok
// SIG undefined FUN_14909faac(void)

void FUN_14909faac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909fae0 FUN_14909fae0 body=2476 status=ok
// SIG undefined FUN_14909fae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14909fae0(undefined8 *param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar27;
  double dVar28;
  double dVar33;
  undefined1 auVar29 [16];
  double dVar25;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar26;
  double dVar35;
  double dVar36;
  undefined1 auVar32 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auStack_2c8 [32];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  auVar43 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_2 != (undefined1 (*) [16])0x0) {
    lVar1 = *param_3;
    pauVar15 = (undefined1 (*) [16])(lVar1 + 0x1a0);
    if (lVar1 == 0) {
      pauVar15 = param_2;
    }
    auVar32 = *pauVar15;
    dVar38 = auVar32._0_8_;
    dVar27 = auVar32._8_8_;
    auVar23 = pauVar15[1];
    dVar45 = *(double *)(*pauVar15 + 8);
    dVar46 = *(double *)pauVar15[1];
    dVar42 = auVar23._0_8_;
    dVar19 = auVar23._8_8_;
    auVar21._8_8_ = -(ulonglong)((double)((ulonglong)dVar27 & 0x7ff0000000000000) == INFINITY);
    auVar21._0_8_ = -(ulonglong)((double)((ulonglong)dVar38 & 0x7ff0000000000000) == INFINITY);
    iVar16 = movmskpd((int)lVar1,auVar21);
    auVar39._8_8_ = -(ulonglong)((double)((ulonglong)dVar19 & 0x7ff0000000000000) == INFINITY);
    auVar39._0_8_ = -(ulonglong)((double)((ulonglong)dVar42 & 0x7ff0000000000000) == INFINITY);
    uVar17 = movmskpd((int)param_2,auVar39);
    if ((uVar17 & 0x3fffffff) == 0 && iVar16 == 0) {
      dVar48 = *(double *)pauVar15[2];
      dVar8 = *(double *)(pauVar15[2] + 8);
      dVar9 = *(double *)pauVar15[3];
      auVar30._8_8_ = -(ulonglong)((double)((ulonglong)dVar8 & 0x7ff0000000000000) == INFINITY);
      auVar30._0_8_ = -(ulonglong)((double)((ulonglong)dVar48 & 0x7ff0000000000000) == INFINITY);
      iVar16 = movmskpd(iVar16,auVar30);
      auVar40._8_8_ =
           -(ulonglong)((double)(*(ulonglong *)(pauVar15[3] + 8) & 0x7ff0000000000000) == INFINITY);
      auVar40._0_8_ = -(ulonglong)((double)((ulonglong)dVar9 & 0x7ff0000000000000) == INFINITY);
      uVar17 = movmskpd(0,auVar40);
      if ((uVar17 & 0x3fffffff) == 0 && iVar16 == 0) {
        auVar21 = pauVar15[4];
        dVar2 = auVar21._0_8_;
        dVar5 = auVar21._8_8_;
        auVar39 = pauVar15[5];
        dVar3 = auVar39._0_8_;
        auVar7._8_8_ = -(ulonglong)((double)((ulonglong)dVar5 & 0x7ff0000000000000) == INFINITY);
        auVar7._0_8_ = -(ulonglong)((double)((ulonglong)dVar2 & 0x7ff0000000000000) == INFINITY);
        iVar13 = movmskpd((int)pauVar15,auVar7);
        auVar20._8_8_ =
             -(ulonglong)((double)((ulonglong)auVar39._8_8_ & 0x7ff0000000000000) == INFINITY);
        auVar20._0_8_ = -(ulonglong)((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY);
        uVar17 = movmskpd(iVar16,auVar20);
        if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
          dVar24 = dVar42 * dVar42 + dVar38 * dVar38;
          dVar33 = dVar19 * dVar19 + dVar27 * dVar27;
          dVar4 = (double)DAT_149934d80;
          dVar6 = DAT_149934d80._8_8_;
          auVar29._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(dVar6 - (dVar24 + dVar33)));
          auVar29._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(dVar4 - (dVar24 + dVar33)));
          iVar16 = movmskpd(iVar13,auVar29);
          if (iVar16 == 0) {
            iVar16 = (int)param_2 + 0x60;
            uVar14 = FUN_144a78e48();
            if ((char)uVar14 == '\0') {
              dVar24 = *(double *)param_2[6];
              dVar33 = *(double *)(param_2[6] + 8);
              dVar28 = *(double *)param_2[7];
              dVar37 = *(double *)(param_2[7] + 8);
              dVar25 = dVar28 * dVar28 + dVar24 * dVar24;
              dVar34 = dVar37 * dVar37 + dVar33 * dVar33;
              auVar47._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(dVar6 - (dVar25 + dVar34)));
              auVar47._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(dVar4 - (dVar25 + dVar34)));
              iVar13 = movmskpd(uVar14,auVar47);
              if (iVar13 == 0) {
                local_278 = param_2[10];
                local_288 = param_2[0xb];
                auVar21 = minpd(local_278,auVar21);
                auVar30 = minpd(local_288,auVar39);
                auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
                auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
                iVar13 = movmskpd(0,auVar22);
                auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
                auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
                uVar17 = movmskpd(iVar16,auVar31);
                uVar10 = local_288._0_8_;
                uVar11 = local_278._0_8_;
                uVar12 = local_278._8_8_;
                if ((uVar17 & 0x3fffffff) == 0 && iVar13 == 0) {
                  dVar34 = dVar33 * dVar42 * -1.0 +
                           dVar28 * dVar27 + dVar38 * dVar37 * 1.0 + dVar19 * dVar24;
                  dVar26 = dVar24 * dVar42 * 1.0 +
                           dVar37 * dVar27 + dVar38 * dVar28 * -1.0 + dVar19 * dVar33;
                  auVar43._0_8_ =
                       dVar37 * dVar42 * 1.0 +
                       ((dVar38 * dVar33 * 1.0 + dVar19 * dVar28) - dVar27 * dVar24);
                  auVar43._8_8_ =
                       dVar28 * dVar42 * -1.0 +
                       ((dVar38 * dVar24 * -1.0 + dVar19 * dVar37) - dVar27 * dVar33);
                  dVar24 = *(double *)param_2[8] * dVar2;
                  dVar33 = *(double *)(param_2[8] + 8) * dVar5;
                  dVar35 = *(double *)param_2[9] * dVar3;
                  dVar28 = dVar33 * dVar38 - dVar24 * dVar27;
                  dVar37 = dVar35 * dVar27 - dVar33 * dVar42;
                  auVar32 = blendpd(auVar32,auVar23,2);
                  dVar25 = dVar24 * dVar42 - dVar35 * auVar32._0_8_;
                  dVar37 = dVar37 + dVar37;
                  dVar25 = dVar25 + dVar25;
                  dVar28 = dVar28 + dVar28;
                  local_e8 = (dVar28 * dVar27 - dVar25 * dVar46) + dVar19 * dVar37 + dVar24 + dVar48
                  ;
                  dStack_e0 = (dVar37 * dVar42 - dVar28 * auVar32._0_8_) + dVar19 * dVar25 + dVar33
                              + dVar8;
                  local_d8 = (dVar25 * dVar38 - dVar37 * dVar45) + dVar19 * dVar28 + dVar35 + dVar9;
                  local_2a8 = dVar45;
                  dStack_2a0 = dVar46;
                  local_298 = dVar19;
                  dStack_290 = dVar19;
                }
                else {
                  dVar35 = dVar27 + dVar27;
                  dVar45 = dVar42 + dVar42;
                  dVar25 = (dVar38 + dVar38) * dVar38;
                  dVar46 = (dVar38 + dVar38) * dVar19;
                  dVar34 = (double)local_288._0_8_ * dVar3;
                  dStack_2a0 = (double)local_288._8_8_ * auVar39._8_8_;
                  local_178 = (1.0 - (dVar25 + dVar35 * dVar27)) * dVar3;
                  local_188 = (dVar35 * dVar19 + dVar38 * dVar45) * dVar3;
                  local_1a8 = (dVar35 * dVar38 - dVar45 * dVar19) * dVar5;
                  dStack_180 = (dVar45 * dVar27 - dVar46) * dVar3;
                  dVar26 = (double)local_278._0_8_ * dVar2;
                  dVar36 = (double)local_278._8_8_ * dVar5;
                  local_1c8 = (dVar4 - (dVar45 * dVar42 + dVar35 * dVar27)) * dVar2;
                  dStack_1a0 = (dVar6 - (dVar45 * dVar42 + dVar25)) * dVar5;
                  dStack_1c0 = (dVar35 * dVar38 + dVar45 * dVar19) * dVar2;
                  local_198 = (dVar45 * dVar27 + dVar46) * dVar5;
                  local_1b8 = (dVar38 * dVar45 - dVar35 * dVar19) * dVar2;
                  uStack_1b0 = 0;
                  uStack_190 = 0;
                  uStack_170 = 0;
                  local_158._8_4_ = 0;
                  local_158._0_8_ = dVar9;
                  local_158._12_4_ = 0x3ff00000;
                  dVar45 = dVar33 + dVar33;
                  dVar42 = dVar28 + dVar28;
                  dVar19 = dVar24 * (dVar24 + dVar24);
                  local_1f8 = (1.0 - (dVar19 + dVar33 * dVar45)) * (double)local_288._0_8_;
                  dVar27 = (dVar24 + dVar24) * dVar37;
                  local_228 = (dVar45 * dVar24 - dVar42 * dVar37) * (double)local_278._8_8_;
                  dVar38 = (dVar42 * dVar33 - dVar27) * (double)local_288._0_8_;
                  local_248 = (dVar4 - (dVar28 * dVar42 + dVar33 * dVar45)) *
                              (double)local_278._0_8_;
                  dStack_220 = (dVar6 - (dVar28 * dVar42 + dVar19)) * (double)local_278._8_8_;
                  dStack_240 = (dVar45 * dVar24 + dVar42 * dVar37) * (double)local_278._0_8_;
                  local_218 = (dVar42 * dVar33 + dVar27) * (double)local_278._8_8_;
                  local_238 = (dVar24 * dVar42 - dVar45 * dVar37) * (double)local_278._0_8_;
                  uStack_230 = 0;
                  uStack_210 = 0;
                  local_208._8_4_ = SUB84(dVar38,0);
                  local_208._0_8_ = (dVar45 * dVar37 + dVar24 * dVar42) * (double)local_288._0_8_;
                  local_208._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                  uStack_1f0 = 0;
                  local_1e8 = *(undefined8 *)param_2[8];
                  uStack_1e0 = *(undefined8 *)(param_2[8] + 8);
                  local_1d8 = *(undefined8 *)param_2[9];
                  uStack_1d0 = 0x3ff0000000000000;
                  local_2a8 = dVar34;
                  local_298 = dVar26;
                  dStack_290 = dVar36;
                  local_168 = dVar48;
                  dStack_160 = dVar8;
                  FUN_1447fea8d(local_148);
                  FUN_144a1c686(local_148,0x3e45798ee0000000);
                  auVar32._8_8_ = -(ulonglong)(0.0 <= dVar36);
                  auVar32._0_8_ = -(ulonglong)(0.0 <= dVar26);
                  auVar32 = blendvpd(_DAT_149936790,auVar43,auVar32);
                  uVar18 = -(ulonglong)(0.0 <= dVar34);
                  dVar38 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
                  dVar42 = auVar32._0_8_;
                  local_138 = local_138 * dVar42;
                  local_148._8_8_ = (double)local_148._8_8_ * dVar42;
                  local_148._0_8_ = (double)local_148._0_8_ * dVar42;
                  dVar42 = auVar32._8_8_;
                  local_118 = local_118 * dVar42;
                  local_128._8_8_ = (double)local_128._8_8_ * dVar42;
                  local_128._0_8_ = dVar42 * (double)local_128._0_8_;
                  local_f8 = local_f8 * dVar38;
                  dStack_100 = dStack_100 * dVar38;
                  local_108 = dVar38 * local_108;
                  FUN_14481fd10(&local_268,local_148);
                  dVar38 = local_258 * local_258 + local_268 * local_268;
                  dVar42 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
                  auVar41._0_8_ = dVar38 + dVar42;
                  auVar41._8_8_ = dVar38 + dVar42;
                  auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
                  auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
                  auVar32 = sqrtpd(auVar41,auVar41);
                  auVar43 = divpd(auVar43,auVar32);
                  auVar44._0_8_ = auVar43._0_8_ * local_258;
                  auVar44._8_8_ = auVar43._8_8_ * dStack_250;
                  dVar34 = (double)((ulonglong)(local_268 * auVar43._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
                  dVar26 = (double)((ulonglong)(dStack_260 * auVar43._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
                  auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar23);
                }
                dVar5 = (double)uVar12 * dVar5;
                dVar2 = (double)uVar11 * dVar2;
                dStack_100 = (double)uVar10 * dVar3;
                dVar42 = dVar26 + dVar26;
                dVar46 = auVar43._0_8_;
                dVar48 = auVar43._8_8_;
                dVar27 = dVar46 + dVar46;
                dVar19 = dVar34 * (dVar34 + dVar34);
                dVar38 = (dVar6 - (dVar46 * dVar27 + dVar19)) * dVar5;
                local_f8 = (1.0 - (dVar19 + dVar26 * dVar42)) * dStack_100;
                dVar19 = (dVar34 + dVar34) * dVar48;
                dVar45 = (dVar42 * dVar34 + dVar27 * dVar48) * dVar2;
                local_118 = (dVar27 * dVar26 + dVar19) * dVar5;
                local_108 = (dVar34 * dVar27 + dVar42 * dVar48) * dStack_100;
                dStack_100 = (dVar27 * dVar26 - dVar19) * dStack_100;
                local_138 = (dVar34 * dVar27 - dVar42 * dVar48) * dVar2;
                local_148._8_4_ = SUB84(dVar45,0);
                local_148._0_8_ = (dVar4 - (dVar46 * dVar27 + dVar26 * dVar42)) * dVar2;
                local_148._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                uStack_130 = 0;
                local_128._8_4_ = SUB84(dVar38,0);
                local_128._0_8_ = (dVar42 * dVar34 - dVar27 * dVar48) * dVar5;
                local_128._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                uStack_110 = 0;
                uStack_f0 = 0;
                uStack_d0 = 0x3ff0000000000000;
                FUN_144a928e2(param_1);
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_2c8);
              }
            }
          }
        }
      }
    }
  }
  uVar10 = _DAT_14c846288;
  param_1[6] = _DAT_14c846280;
  param_1[7] = uVar10;
  uVar10 = _DAT_14c846278;
  param_1[4] = _DAT_14c846270;
  param_1[5] = uVar10;
  uVar10 = _DAT_14c846268;
  param_1[2] = _DAT_14c846260;
  param_1[3] = uVar10;
  uVar10 = DAT_14c846258;
  *param_1 = _DAT_14c846250;
  param_1[1] = uVar10;
  if ((local_c0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a0492 FUN_1490a0492 body=2032 status=ok
// SIG undefined FUN_1490a0492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1490a0492(float *param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  int iVar26;
  double *pdVar27;
  int iVar28;
  uint uVar29;
  double *pdVar30;
  float *pfVar31;
  longlong lVar32;
  longlong lVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auStack_348 [32];
  undefined1 local_328 [128];
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e0;
  
  uVar24 = _DAT_14c846288;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (param_2 == (double *)0x0) {
    *(undefined8 *)(param_1 + 0xc) = _DAT_14c846280;
    *(undefined8 *)(param_1 + 0xe) = uVar24;
    uVar24 = _DAT_14c846278;
    *(undefined8 *)(param_1 + 8) = _DAT_14c846270;
    *(undefined8 *)(param_1 + 10) = uVar24;
    uVar24 = _DAT_14c846268;
    *(undefined8 *)(param_1 + 4) = _DAT_14c846260;
    *(undefined8 *)(param_1 + 6) = uVar24;
    fVar23 = DAT_14c846258._4_4_;
    fVar22 = (float)DAT_14c846258;
    fVar21 = DAT_14c846254;
    *param_1 = DAT_14c846250;
    param_1[1] = fVar21;
    param_1[2] = fVar22;
    param_1[3] = fVar23;
    if ((local_e0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  pdVar30 = param_2;
  FUN_14909fae0(&local_128);
  uVar24 = _DAT_14c846288;
  lVar33 = *param_3;
  pdVar27 = param_2;
  if (lVar33 != 0) {
    pdVar30 = (double *)(lVar33 + 0x200);
    pdVar27 = (double *)(lVar33 + 0x1a0);
    if (*(int *)(lVar33 + 0x3ac) == 2) {
      pdVar27 = pdVar30;
    }
  }
  dVar8 = *pdVar27;
  dVar10 = pdVar27[1];
  dVar19 = pdVar27[2];
  dVar20 = pdVar27[3];
  lVar32 = -(ulonglong)((double)((ulonglong)dVar10 & 0x7ff0000000000000) == INFINITY);
  auVar4._8_4_ = (int)lVar32;
  auVar4._0_8_ = -(ulonglong)((double)((ulonglong)dVar8 & 0x7ff0000000000000) == INFINITY);
  auVar4._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
  iVar28 = movmskpd((int)lVar33,auVar4);
  lVar33 = -(ulonglong)((double)((ulonglong)dVar20 & 0x7ff0000000000000) == INFINITY);
  auVar5._8_4_ = (int)lVar33;
  auVar5._0_8_ = -(ulonglong)((double)((ulonglong)dVar19 & 0x7ff0000000000000) == INFINITY);
  auVar5._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
  uVar29 = movmskpd((int)pdVar30,auVar5);
  if ((uVar29 & 0x3fffffff) == 0 && iVar28 == 0) {
    auVar35._8_8_ = -(ulonglong)((double)((ulonglong)pdVar27[5] & 0x7ff0000000000000) == INFINITY);
    auVar35._0_8_ = -(ulonglong)((double)((ulonglong)pdVar27[4] & 0x7ff0000000000000) == INFINITY);
    iVar28 = movmskpd(iVar28,auVar35);
    auVar37._8_8_ = -(ulonglong)((double)((ulonglong)pdVar27[7] & 0x7ff0000000000000) == INFINITY);
    auVar37._0_8_ = -(ulonglong)((double)((ulonglong)pdVar27[6] & 0x7ff0000000000000) == INFINITY);
    uVar29 = movmskpd(0,auVar37);
    if ((uVar29 & 0x3fffffff) == 0 && iVar28 == 0) {
      dVar2 = SUB168(*(undefined1 (*) [16])(pdVar27 + 8),0);
      dVar1 = SUB168(*(undefined1 (*) [16])(pdVar27 + 8),8);
      dVar3 = SUB168(*(undefined1 (*) [16])(pdVar27 + 10),0);
      lVar33 = -(ulonglong)((double)((ulonglong)dVar1 & 0x7ff0000000000000) == INFINITY);
      auVar14._8_4_ = (int)lVar33;
      auVar14._0_8_ = -(ulonglong)((double)((ulonglong)dVar2 & 0x7ff0000000000000) == INFINITY);
      auVar14._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      iVar26 = movmskpd((int)pdVar27,auVar14);
      lVar33 = -(ulonglong)
                ((double)(SUB168(*(undefined1 (*) [16])(pdVar27 + 10),8) & 0x7ff0000000000000) ==
                INFINITY);
      auVar11._8_4_ = (int)lVar33;
      auVar11._0_8_ = -(ulonglong)((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY);
      auVar11._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
      uVar29 = movmskpd(iVar28,auVar11);
      if ((uVar29 & 0x3fffffff) == 0 && iVar26 == 0) {
        dVar9 = dVar19 * dVar19 + dVar8 * dVar8;
        dVar18 = dVar20 * dVar20 + dVar10 * dVar10;
        auVar12._8_4_ = SUB84(dVar18,0);
        auVar12._0_8_ = dVar9;
        auVar12._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        lVar33 = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar9 + auVar12._8_8_)));
        auVar13._8_4_ = (int)lVar33;
        auVar13._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar9 + dVar18)));
        auVar13._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
        iVar28 = movmskpd(iVar26,auVar13);
        if (iVar28 == 0) {
          dVar18 = dVar10 + dVar10;
          dVar15 = dVar19 + dVar19;
          dVar17 = (dVar8 + dVar8) * dVar8;
          dVar9 = (1.0 - (dVar15 * dVar19 + dVar17)) * dVar1;
          dVar16 = (dVar8 + dVar8) * dVar20;
          dVar34 = (dVar18 * dVar8 + dVar15 * dVar20) * dVar2;
          local_178 = (dVar15 * dVar10 + dVar16) * dVar1;
          dVar16 = (dVar15 * dVar10 - dVar16) * dVar3;
          local_158._8_8_ = 0;
          local_158._0_8_ = (1.0 - (dVar17 + dVar18 * dVar10)) * dVar3;
          local_198._8_8_ = 0;
          local_198._0_8_ = (dVar8 * dVar15 - dVar18 * dVar20) * dVar2;
          local_1a8._8_4_ = SUB84(dVar34,0);
          local_1a8._0_8_ = (1.0 - (dVar15 * dVar19 + dVar18 * dVar10)) * dVar2;
          local_1a8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          local_188._8_4_ = SUB84(dVar9,0);
          local_188._0_8_ = (dVar18 * dVar8 - dVar15 * dVar20) * dVar1;
          local_188._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          uStack_170 = 0;
          local_168._8_4_ = SUB84(dVar16,0);
          local_168._0_8_ = (dVar18 * dVar20 + dVar8 * dVar15) * dVar3;
          local_168._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          local_138._8_4_ = 0;
          local_138._0_8_ = pdVar27[6];
          local_138._12_4_ = 0x3ff00000;
          local_148 = pdVar27[4];
          dStack_140 = pdVar27[5];
          FUN_144a928e2(param_1);
          goto LAB_1490a067b;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0xc) = _DAT_14c846280;
  *(undefined8 *)(param_1 + 0xe) = uVar24;
  uVar24 = _DAT_14c846278;
  *(undefined8 *)(param_1 + 8) = _DAT_14c846270;
  *(undefined8 *)(param_1 + 10) = uVar24;
  uVar24 = _DAT_14c846268;
  *(undefined8 *)(param_1 + 4) = _DAT_14c846260;
  *(undefined8 *)(param_1 + 6) = uVar24;
  fVar23 = DAT_14c846258._4_4_;
  fVar22 = (float)DAT_14c846258;
  fVar21 = DAT_14c846254;
  *param_1 = DAT_14c846250;
  param_1[1] = fVar21;
  param_1[2] = fVar22;
  param_1[3] = fVar23;
LAB_1490a067b:
  if (*(char *)((longlong)param_2 + 0x42c) == '\x01') {
    FUN_144b10ee8(local_1a8,param_1);
    local_228 = (double)local_128;
    local_220 = (double)local_124;
    local_218 = (double)local_120;
    local_210 = (double)local_11c;
    local_208 = (double)local_118;
    local_200 = (double)local_114;
    local_1f8 = (double)local_110;
    local_1f0 = (double)local_10c;
    local_1e8 = (double)local_108;
    local_1e0 = (double)local_104;
    local_1d8 = (double)local_100;
    local_1d0 = (double)local_fc;
    local_1c8 = (double)local_f8;
    local_1c0 = (double)local_f4;
    local_1b8 = (double)local_f0;
    local_1b0 = (double)local_ec;
    FUN_14494412e(&local_228,local_328);
    FUN_1447fea8d(&local_2a8,local_1a8,local_328);
    *param_1 = (float)local_2a8;
    param_1[1] = (float)local_2a0;
    param_1[2] = (float)local_298;
    param_1[3] = (float)local_290;
    param_1[4] = (float)local_288;
    param_1[5] = (float)local_280;
    param_1[6] = (float)local_278;
    param_1[7] = (float)local_270;
    param_1[8] = (float)local_268;
    param_1[9] = (float)local_260;
    param_1[10] = (float)local_258;
    param_1[0xb] = (float)local_250;
    param_1[0xc] = (float)local_248;
    param_1[0xd] = (float)local_240;
    param_1[0xe] = (float)local_238;
    param_1[0xf] = (float)local_230;
  }
  lVar33 = 0;
  pfVar31 = param_1;
  do {
    lVar32 = 0;
    do {
      iVar28 = _finite((double)pfVar31[lVar32]);
      if (iVar28 == 0) {
        uVar25 = FUN_144a78e48(param_2);
        if ((char)uVar25 == '\0') {
          dVar19 = *param_2;
          dVar20 = param_2[1];
          dVar2 = param_2[2];
          dVar3 = param_2[3];
          dVar8 = dVar2 * dVar2 + dVar19 * dVar19;
          dVar10 = dVar3 * dVar3 + dVar20 * dVar20;
          auVar6._8_4_ = SUB84(dVar10,0);
          auVar6._0_8_ = dVar8;
          auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          lVar33 = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar8 + auVar6._8_8_)));
          auVar7._8_4_ = (int)lVar33;
          auVar7._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar8 + dVar10)));
          auVar7._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
          iVar28 = movmskpd(uVar25,auVar7);
          if (iVar28 == 0) {
            dVar34 = dVar20 + dVar20;
            dVar36 = dVar2 + dVar2;
            dVar9 = dVar19 * (dVar19 + dVar19);
            dVar15 = param_2[8];
            dVar16 = param_2[9];
            dVar17 = param_2[10];
            dVar18 = (dVar19 + dVar19) * dVar3;
            dVar8 = param_2[4];
            dVar10 = param_2[5];
            dVar1 = param_2[6];
            *param_1 = (float)((1.0 - (dVar2 * dVar36 + dVar20 * dVar34)) * dVar15);
            param_1[1] = (float)((dVar34 * dVar19 + dVar36 * dVar3) * dVar15);
            param_1[2] = (float)((dVar36 * dVar19 - dVar34 * dVar3) * dVar15);
            param_1[3] = 0.0;
            param_1[4] = (float)((dVar34 * dVar19 - dVar36 * dVar3) * dVar16);
            param_1[5] = (float)((1.0 - (dVar2 * dVar36 + dVar9)) * dVar16);
            param_1[6] = (float)((dVar36 * dVar20 + dVar18) * dVar16);
            param_1[7] = 0.0;
            param_1[8] = (float)((dVar34 * dVar3 + dVar36 * dVar19) * dVar17);
            param_1[9] = (float)((dVar36 * dVar20 - dVar18) * dVar17);
            param_1[10] = (float)((1.0 - (dVar9 + dVar20 * dVar34)) * dVar17);
            param_1[0xb] = 0.0;
            param_1[0xc] = (float)dVar8;
            param_1[0xd] = (float)dVar10;
            param_1[0xe] = (float)dVar1;
            param_1[0xf] = 1.0;
          }
        }
        goto LAB_1490a0a8f;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 4);
    lVar33 = lVar33 + 1;
    pfVar31 = pfVar31 + 4;
  } while (lVar33 != 4);
LAB_1490a0a8f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_348);
}



// FUNCTION 1490a0c88 FUN_1490a0c88 body=613 status=ok
// SIG undefined FUN_1490a0c88(void)

longlong * FUN_1490a0c88(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0) {
    lVar4 = FUN_144a84c36();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      uVar5 = FUN_143a7c40e(param_3);
      FUN_1449b8608(local_78,uVar5,&DAT_149e0635c);
      FUN_144a7dea0(local_68,local_78,&DAT_14cb3af70);
      FUN_144a882a8(local_58,local_68,&DAT_149e0635c);
      FUN_144a882a8(&local_48,local_58,L"NodePosition");
      iVar2 = local_40 + -1;
      if (local_40 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(&local_38,iVar2,local_48,1);
      uVar5 = local_38;
      *(undefined4 *)(param_2 + 1) = 1;
      FUN_14024cd4c(param_2,0);
      puVar1 = (undefined8 *)*param_2;
      *puVar1 = uVar5;
      uVar3 = FUN_144830b78(puVar1 + 1,&DAT_14cb42140);
      *(undefined4 *)(puVar1 + 1) = uVar3;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      uVar5 = FUN_143a7c40e(param_3);
      FUN_1449b8608(local_78,uVar5,&DAT_149e0635c);
      FUN_144a7dea0(local_68,local_78,&DAT_14cb3af70);
      FUN_144a882a8(local_58,local_68,&DAT_149e0635c);
      FUN_144a882a8(&local_48,local_58,L"RestPosition");
      iVar2 = local_40 + -1;
      if (local_40 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(&local_38,iVar2,local_48,1);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_14024cd4c(param_2,iVar2);
      }
      puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0xc);
      puVar6 = puVar1 + 1;
      *puVar1 = local_38;
      uVar3 = FUN_144830b78(puVar6,&DAT_14cb42140);
      *(undefined4 *)puVar6 = uVar3;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a0eee FUN_1490a0eee body=114 status=ok
// SIG undefined FUN_1490a0eee(void)

undefined4 FUN_1490a0eee(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1414db5a0();
  if ((char)uVar2 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (DAT_14c950c29 == 1) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(param_1 + 0x48);
      }
    }
    bVar1 = DAT_14c950c29;
    *(longlong *)(param_2 + 0x48) = lVar3;
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if ((bVar1 & 1) != 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(param_1 + 0x40);
      }
    }
    *(longlong *)(param_2 + 0x40) = lVar3;
  }
  return uVar2;
}



// FUNCTION 1490a0f60 FUN_1490a0f60 body=124 status=ok
// SIG undefined FUN_1490a0f60(void)

undefined8 FUN_1490a0f60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x48) == lVar1) &&
       (uVar3 = FUN_1490a0fdc(param_2 + 0x50,param_1 + 0x50), (char)uVar3 != '\0')) {
      lVar1 = *(longlong *)(param_1 + 0x40);
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
        uVar4 = extraout_var;
      }
      return CONCAT71(uVar4,*(longlong *)(param_2 + 0x40) == lVar1);
    }
  }
  return 0;
}



// FUNCTION 1490a0fdc FUN_1490a0fdc body=53 status=ok
// SIG undefined FUN_1490a0fdc(void)

ulonglong FUN_1490a0fdc(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1490a16bc FUN_1490a16bc body=165 status=ok
// SIG undefined FUN_1490a16bc(void)

void FUN_1490a16bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab06a0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1762 FUN_1490a1762 body=165 status=ok
// SIG undefined FUN_1490a1762(void)

void FUN_1490a1762(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0710;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1808 FUN_1490a1808 body=165 status=ok
// SIG undefined FUN_1490a1808(void)

void FUN_1490a1808(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0780;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a18ae FUN_1490a18ae body=165 status=ok
// SIG undefined FUN_1490a18ae(void)

void FUN_1490a18ae(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab07f0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1954 FUN_1490a1954 body=165 status=ok
// SIG undefined FUN_1490a1954(void)

void FUN_1490a1954(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0860;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a19fa FUN_1490a19fa body=165 status=ok
// SIG undefined FUN_1490a19fa(void)

void FUN_1490a19fa(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab08d0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1aa0 FUN_1490a1aa0 body=165 status=ok
// SIG undefined FUN_1490a1aa0(void)

void FUN_1490a1aa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0940;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1b46 FUN_1490a1b46 body=165 status=ok
// SIG undefined FUN_1490a1b46(void)

void FUN_1490a1b46(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab09b0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1bec FUN_1490a1bec body=165 status=ok
// SIG undefined FUN_1490a1bec(void)

void FUN_1490a1bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0a20;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1c92 FUN_1490a1c92 body=165 status=ok
// SIG undefined FUN_1490a1c92(void)

void FUN_1490a1c92(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0a90;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1d38 FUN_1490a1d38 body=165 status=ok
// SIG undefined FUN_1490a1d38(void)

void FUN_1490a1d38(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0b00;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1dde FUN_1490a1dde body=165 status=ok
// SIG undefined FUN_1490a1dde(void)

void FUN_1490a1dde(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0b70;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1e84 FUN_1490a1e84 body=165 status=ok
// SIG undefined FUN_1490a1e84(void)

void FUN_1490a1e84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0be0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1f2a FUN_1490a1f2a body=165 status=ok
// SIG undefined FUN_1490a1f2a(void)

void FUN_1490a1f2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0c50;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a1fd0 FUN_1490a1fd0 body=165 status=ok
// SIG undefined FUN_1490a1fd0(void)

void FUN_1490a1fd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0cc0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2076 FUN_1490a2076 body=165 status=ok
// SIG undefined FUN_1490a2076(void)

void FUN_1490a2076(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0d30;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a211c FUN_1490a211c body=165 status=ok
// SIG undefined FUN_1490a211c(void)

void FUN_1490a211c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0da0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a21c2 FUN_1490a21c2 body=165 status=ok
// SIG undefined FUN_1490a21c2(void)

void FUN_1490a21c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0e10;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2268 FUN_1490a2268 body=165 status=ok
// SIG undefined FUN_1490a2268(void)

void FUN_1490a2268(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0e80;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a230e FUN_1490a230e body=165 status=ok
// SIG undefined FUN_1490a230e(void)

void FUN_1490a230e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0ef0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a23b4 FUN_1490a23b4 body=165 status=ok
// SIG undefined FUN_1490a23b4(void)

void FUN_1490a23b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0f60;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a245a FUN_1490a245a body=165 status=ok
// SIG undefined FUN_1490a245a(void)

void FUN_1490a245a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab0fd0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2500 FUN_1490a2500 body=165 status=ok
// SIG undefined FUN_1490a2500(void)

void FUN_1490a2500(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1040;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a25a6 FUN_1490a25a6 body=165 status=ok
// SIG undefined FUN_1490a25a6(void)

void FUN_1490a25a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab10b0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a264c FUN_1490a264c body=165 status=ok
// SIG undefined FUN_1490a264c(void)

void FUN_1490a264c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1120;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a26f2 FUN_1490a26f2 body=165 status=ok
// SIG undefined FUN_1490a26f2(void)

void FUN_1490a26f2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1190;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2798 FUN_1490a2798 body=165 status=ok
// SIG undefined FUN_1490a2798(void)

void FUN_1490a2798(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1200;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a283e FUN_1490a283e body=165 status=ok
// SIG undefined FUN_1490a283e(void)

void FUN_1490a283e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1270;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a28e4 FUN_1490a28e4 body=165 status=ok
// SIG undefined FUN_1490a28e4(void)

void FUN_1490a28e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab12e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a298a FUN_1490a298a body=165 status=ok
// SIG undefined FUN_1490a298a(void)

void FUN_1490a298a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1350;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2a30 FUN_1490a2a30 body=165 status=ok
// SIG undefined FUN_1490a2a30(void)

void FUN_1490a2a30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab13c0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2ad6 FUN_1490a2ad6 body=165 status=ok
// SIG undefined FUN_1490a2ad6(void)

void FUN_1490a2ad6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1430;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2b7c FUN_1490a2b7c body=165 status=ok
// SIG undefined FUN_1490a2b7c(void)

void FUN_1490a2b7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab14a0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2c22 FUN_1490a2c22 body=165 status=ok
// SIG undefined FUN_1490a2c22(void)

void FUN_1490a2c22(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1510;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2cc8 FUN_1490a2cc8 body=165 status=ok
// SIG undefined FUN_1490a2cc8(void)

void FUN_1490a2cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1580;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2d6e FUN_1490a2d6e body=165 status=ok
// SIG undefined FUN_1490a2d6e(void)

void FUN_1490a2d6e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab15f0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2e14 FUN_1490a2e14 body=165 status=ok
// SIG undefined FUN_1490a2e14(void)

void FUN_1490a2e14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1660;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2eba FUN_1490a2eba body=165 status=ok
// SIG undefined FUN_1490a2eba(void)

void FUN_1490a2eba(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab16d0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a2f60 FUN_1490a2f60 body=165 status=ok
// SIG undefined FUN_1490a2f60(void)

void FUN_1490a2f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1740;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3006 FUN_1490a3006 body=165 status=ok
// SIG undefined FUN_1490a3006(void)

void FUN_1490a3006(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab17b0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a30ac FUN_1490a30ac body=165 status=ok
// SIG undefined FUN_1490a30ac(void)

void FUN_1490a30ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1820;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3152 FUN_1490a3152 body=165 status=ok
// SIG undefined FUN_1490a3152(void)

void FUN_1490a3152(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1890;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a31f8 FUN_1490a31f8 body=165 status=ok
// SIG undefined FUN_1490a31f8(void)

void FUN_1490a31f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1900;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a329e FUN_1490a329e body=165 status=ok
// SIG undefined FUN_1490a329e(void)

void FUN_1490a329e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1970;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3344 FUN_1490a3344 body=165 status=ok
// SIG undefined FUN_1490a3344(void)

void FUN_1490a3344(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab19e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a33ea FUN_1490a33ea body=165 status=ok
// SIG undefined FUN_1490a33ea(void)

void FUN_1490a33ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1a50;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3490 FUN_1490a3490 body=165 status=ok
// SIG undefined FUN_1490a3490(void)

void FUN_1490a3490(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1ac0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3536 FUN_1490a3536 body=165 status=ok
// SIG undefined FUN_1490a3536(void)

void FUN_1490a3536(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1b30;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a35dc FUN_1490a35dc body=165 status=ok
// SIG undefined FUN_1490a35dc(void)

void FUN_1490a35dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1ba0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3682 FUN_1490a3682 body=165 status=ok
// SIG undefined FUN_1490a3682(void)

void FUN_1490a3682(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1c10;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3728 FUN_1490a3728 body=165 status=ok
// SIG undefined FUN_1490a3728(void)

void FUN_1490a3728(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1c80;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a37ce FUN_1490a37ce body=165 status=ok
// SIG undefined FUN_1490a37ce(void)

void FUN_1490a37ce(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1cf0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3874 FUN_1490a3874 body=165 status=ok
// SIG undefined FUN_1490a3874(void)

void FUN_1490a3874(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1d60;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a391a FUN_1490a391a body=165 status=ok
// SIG undefined FUN_1490a391a(void)

void FUN_1490a391a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1dd0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a39c0 FUN_1490a39c0 body=165 status=ok
// SIG undefined FUN_1490a39c0(void)

void FUN_1490a39c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1e40;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3a66 FUN_1490a3a66 body=165 status=ok
// SIG undefined FUN_1490a3a66(void)

void FUN_1490a3a66(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1eb0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3b0c FUN_1490a3b0c body=165 status=ok
// SIG undefined FUN_1490a3b0c(void)

void FUN_1490a3b0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1f20;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3bb2 FUN_1490a3bb2 body=165 status=ok
// SIG undefined FUN_1490a3bb2(void)

void FUN_1490a3bb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab1f90;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3c58 FUN_1490a3c58 body=165 status=ok
// SIG undefined FUN_1490a3c58(void)

void FUN_1490a3c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2000;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3cfe FUN_1490a3cfe body=165 status=ok
// SIG undefined FUN_1490a3cfe(void)

void FUN_1490a3cfe(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2070;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3da4 FUN_1490a3da4 body=165 status=ok
// SIG undefined FUN_1490a3da4(void)

void FUN_1490a3da4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab20e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3e4a FUN_1490a3e4a body=165 status=ok
// SIG undefined FUN_1490a3e4a(void)

void FUN_1490a3e4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2150;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3ef0 FUN_1490a3ef0 body=165 status=ok
// SIG undefined FUN_1490a3ef0(void)

void FUN_1490a3ef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab21c0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a3f96 FUN_1490a3f96 body=165 status=ok
// SIG undefined FUN_1490a3f96(void)

void FUN_1490a3f96(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2230;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a403c FUN_1490a403c body=165 status=ok
// SIG undefined FUN_1490a403c(void)

void FUN_1490a403c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab22a0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a40e2 FUN_1490a40e2 body=165 status=ok
// SIG undefined FUN_1490a40e2(void)

void FUN_1490a40e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2310;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4188 FUN_1490a4188 body=165 status=ok
// SIG undefined FUN_1490a4188(void)

void FUN_1490a4188(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2380;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a422e FUN_1490a422e body=165 status=ok
// SIG undefined FUN_1490a422e(void)

void FUN_1490a422e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab23f0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a42d4 FUN_1490a42d4 body=165 status=ok
// SIG undefined FUN_1490a42d4(void)

void FUN_1490a42d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2460;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a437a FUN_1490a437a body=165 status=ok
// SIG undefined FUN_1490a437a(void)

void FUN_1490a437a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab24d0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4420 FUN_1490a4420 body=165 status=ok
// SIG undefined FUN_1490a4420(void)

void FUN_1490a4420(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2540;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a44c6 FUN_1490a44c6 body=165 status=ok
// SIG undefined FUN_1490a44c6(void)

void FUN_1490a44c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab25b0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a456c FUN_1490a456c body=165 status=ok
// SIG undefined FUN_1490a456c(void)

void FUN_1490a456c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2620;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4612 FUN_1490a4612 body=165 status=ok
// SIG undefined FUN_1490a4612(void)

void FUN_1490a4612(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2690;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a46b8 FUN_1490a46b8 body=165 status=ok
// SIG undefined FUN_1490a46b8(void)

void FUN_1490a46b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2700;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a475e FUN_1490a475e body=165 status=ok
// SIG undefined FUN_1490a475e(void)

void FUN_1490a475e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2770;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4804 FUN_1490a4804 body=165 status=ok
// SIG undefined FUN_1490a4804(void)

void FUN_1490a4804(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab27e0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a48aa FUN_1490a48aa body=165 status=ok
// SIG undefined FUN_1490a48aa(void)

void FUN_1490a48aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2850;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4950 FUN_1490a4950 body=165 status=ok
// SIG undefined FUN_1490a4950(void)

void FUN_1490a4950(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab28c0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a49f6 FUN_1490a49f6 body=165 status=ok
// SIG undefined FUN_1490a49f6(void)

void FUN_1490a49f6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2930;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4a9c FUN_1490a4a9c body=165 status=ok
// SIG undefined FUN_1490a4a9c(void)

void FUN_1490a4a9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14ad81180;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab29a0;
  puVar1[3] = param_1;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4b42 FUN_1490a4b42 body=949 status=ok
// SIG undefined FUN_1490a4b42(void)

void FUN_1490a4b42(double *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_138 [32];
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float *local_58;
  int local_50;
  float *local_48;
  int local_40;
  float *local_38;
  int local_30;
  float *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144a76c20(&local_28);
  FUN_144a76c20(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_144a76c20(&local_58,param_2);
  FUN_144a76c20(&local_68,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_f8,param_2);
  FUN_144a76c20(&local_108,param_2);
  FUN_144a76c20(&local_118,param_2);
  piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar2 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar1 = 0;
    do {
      *local_28 = (float)*param_1;
      local_28 = local_28 + local_20;
      *local_38 = (float)param_1[1];
      local_38 = local_38 + local_30;
      *local_48 = (float)param_1[2];
      local_48 = local_48 + local_40;
      *local_58 = (float)param_1[3];
      local_58 = local_58 + local_50;
      *local_68 = (float)param_1[4];
      local_68 = local_68 + local_60;
      *local_78 = (float)param_1[5];
      local_78 = local_78 + local_70;
      *local_88 = (float)param_1[6];
      local_88 = local_88 + local_80;
      *local_98 = (float)param_1[7];
      local_98 = local_98 + local_90;
      *local_a8 = (float)param_1[8];
      local_a8 = local_a8 + local_a0;
      *local_b8 = (float)param_1[9];
      local_b8 = local_b8 + local_b0;
      *local_c8 = (float)param_1[10];
      local_c8 = local_c8 + local_c0;
      *local_d8 = (float)param_1[0xb];
      local_d8 = local_d8 + local_d0;
      *local_e8 = (float)param_1[0xc];
      local_e8 = local_e8 + local_e0;
      *local_f8 = (float)param_1[0xd];
      local_f8 = local_f8 + local_f0;
      *local_108 = (float)param_1[0xe];
      local_108 = local_108 + local_100;
      *local_118 = (float)param_1[0xf];
      local_118 = local_118 + local_110;
      iVar1 = iVar1 + 1;
      piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar2 = (int *)(param_2 + 0x3c);
      }
    } while (iVar1 < *piVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4ef8 FUN_1490a4ef8 body=163 status=ok
// SIG undefined FUN_1490a4ef8(void)

void FUN_1490a4ef8(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x16c);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a4f9c FUN_1490a4f9c body=148 status=ok
// SIG undefined FUN_1490a4f9c(void)

void FUN_1490a4f9c(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1490a5030 FUN_1490a5030 body=163 status=ok
// SIG undefined FUN_1490a5030(void)

void FUN_1490a5030(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x170);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a50d4 FUN_1490a50d4 body=163 status=ok
// SIG undefined FUN_1490a50d4(void)

void FUN_1490a50d4(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x19c);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5178 FUN_1490a5178 body=163 status=ok
// SIG undefined FUN_1490a5178(void)

void FUN_1490a5178(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x1a0);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a521c FUN_1490a521c body=281 status=ok
// SIG undefined FUN_1490a521c(void)

void FUN_1490a521c(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_50,param_1);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      pfVar1 = local_30 + local_28;
      *local_30 = (float)*(double *)(local_18 + 0x1a8);
      pfVar2 = local_40 + local_38;
      *local_40 = (float)*(double *)(local_18 + 0x1b0);
      pfVar3 = local_50 + local_48;
      *local_50 = (float)*(double *)(local_18 + 0x1b8);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = pfVar3;
      local_40 = pfVar2;
      local_30 = pfVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5336 FUN_1490a5336 body=166 status=ok
// SIG undefined FUN_1490a5336(void)

void FUN_1490a5336(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x1c0);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a53de FUN_1490a53de body=166 status=ok
// SIG undefined FUN_1490a53de(void)

void FUN_1490a53de(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x1c4);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5486 FUN_1490a5486 body=281 status=ok
// SIG undefined FUN_1490a5486(void)

void FUN_1490a5486(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_50,param_1);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      pfVar1 = local_30 + local_28;
      *local_30 = (float)*(double *)(local_18 + 0x1c8);
      pfVar2 = local_40 + local_38;
      *local_40 = (float)*(double *)(local_18 + 0x1d0);
      pfVar3 = local_50 + local_48;
      *local_50 = (float)*(double *)(local_18 + 0x1d8);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = pfVar3;
      local_40 = pfVar2;
      local_30 = pfVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a55a0 FUN_1490a55a0 body=164 status=ok
// SIG undefined FUN_1490a55a0(void)

void FUN_1490a55a0(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = (uint)*(byte *)(local_18 + 0x1e0);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5646 FUN_1490a5646 body=164 status=ok
// SIG undefined FUN_1490a5646(void)

void FUN_1490a5646(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = (uint)*(byte *)(local_18 + 0x1e1);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a56ec FUN_1490a56ec body=166 status=ok
// SIG undefined FUN_1490a56ec(void)

void FUN_1490a56ec(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x1e4);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5794 FUN_1490a5794 body=166 status=ok
// SIG undefined FUN_1490a5794(void)

void FUN_1490a5794(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x1e8);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a583c FUN_1490a583c body=164 status=ok
// SIG undefined FUN_1490a583c(void)

void FUN_1490a583c(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = (uint)*(byte *)(local_18 + 0x1ec);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a58e2 FUN_1490a58e2 body=164 status=ok
// SIG undefined FUN_1490a58e2(void)

void FUN_1490a58e2(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = (uint)*(byte *)(local_18 + 0x1ed);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5988 FUN_1490a5988 body=166 status=ok
// SIG undefined FUN_1490a5988(void)

void FUN_1490a5988(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x1f0);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5a30 FUN_1490a5a30 body=166 status=ok
// SIG undefined FUN_1490a5a30(void)

void FUN_1490a5a30(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 500);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5ad8 FUN_1490a5ad8 body=164 status=ok
// SIG undefined FUN_1490a5ad8(void)

void FUN_1490a5ad8(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = (uint)*(byte *)(local_18 + 0x1f8);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490a5b7e FUN_1490a5b7e body=164 status=ok
// SIG undefined FUN_1490a5b7e(void)

void FUN_1490a5b7e(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1490a4f9c(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar3 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = (uint)*(byte *)(local_18 + 0x1f9);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar3 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


