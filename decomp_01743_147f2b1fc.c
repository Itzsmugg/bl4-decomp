// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f2b1fc FUN_147f2b1fc body=302 status=ok
// SIG undefined FUN_147f2b1fc(void)

undefined4 * FUN_147f2b1fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  FUN_140b177d4(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_140b177d4(param_1 + 0x12,param_2 + 0x12);
  FUN_147f2b32a(param_1 + 0x1a,param_2 + 0x1a);
  param_1[0x1e] = param_2[0x1e];
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_140b177d4(param_1 + 0x22,param_2 + 0x22);
  FUN_147f2b382(param_1 + 0x2a,param_2 + 0x2a);
  if (param_1 == param_2) {
    FUN_147f2b382(param_1 + 0x46,param_2 + 0x46);
  }
  else {
    puVar7 = param_2 + 0x2e;
    if (*(undefined4 **)(param_2 + 0x42) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(param_2 + 0x42);
    }
    FUN_147f2b496(param_1 + 0x2e,puVar7,param_2[0x44],param_1[0x45]);
    FUN_147f2b382(param_1 + 0x46,param_2 + 0x46);
    puVar7 = param_2 + 0x4a;
    if (*(undefined4 **)(param_2 + 0x5e) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(param_2 + 0x5e);
    }
    FUN_147f2b496(param_1 + 0x4a,puVar7,param_2[0x60],param_1[0x61]);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x62);
  uVar5 = *(undefined8 *)(param_2 + 100);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_2 + 0x66);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x62) = uVar4;
  *(undefined8 *)(param_1 + 100) = uVar5;
  return param_1;
}



// FUNCTION 147f2b32a FUN_147f2b32a body=88 status=ok
// SIG undefined FUN_147f2b32a(void)

undefined8 * FUN_147f2b32a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145703074(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f2b382 FUN_147f2b382 body=93 status=ok
// SIG undefined FUN_147f2b382(void)

undefined8 * FUN_147f2b382(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1405214e6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f2b3e0(param_1,iVar1);
      FUN_147f2b453(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f2b3e0 FUN_147f2b3e0 body=115 status=ok
// SIG undefined FUN_147f2b3e0(void)

void FUN_147f2b3e0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f2b453 FUN_147f2b453 body=66 status=ok
// SIG undefined FUN_147f2b453(void)

void FUN_147f2b453(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14034cca6(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined4 *)(param_2 + 0x40);
    uVar3 = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 147f2b496 FUN_147f2b496 body=86 status=ok
// SIG undefined FUN_147f2b496(void)

void FUN_147f2b496(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x58) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 4;
    return;
  }
  FUN_147f2b4ec(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar1 = param_1;
  }
  FUN_147f2b560(lVar1,param_2,param_3);
  return;
}



// FUNCTION 147f2b4ec FUN_147f2b4ec body=116 status=ok
// SIG undefined FUN_147f2b4ec(void)

void FUN_147f2b4ec(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x14,0);
      iVar2 = (int)(uVar1 / 0x14);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14089e204(param_1,0,iVar3,0x14);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x5c) = param_3;
  return;
}



// FUNCTION 147f2b560 FUN_147f2b560 body=52 status=ok
// SIG undefined FUN_147f2b560(void)

void FUN_147f2b560(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147f5e030(param_1,param_2);
    param_1 = param_1 + 0x14;
    param_2 = param_2 + 0x14;
  }
  return;
}



// FUNCTION 147f2b606 FUN_147f2b606 body=59 status=ok
// SIG undefined FUN_147f2b606(void)

undefined8 FUN_147f2b606(longlong *param_1)

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



// FUNCTION 147f2b64c FUN_147f2b64c body=32 status=ok
// SIG undefined FUN_147f2b64c(void)

void FUN_147f2b64c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147f2b75c FUN_147f2b75c body=59 status=ok
// SIG undefined FUN_147f2b75c(void)

undefined8 FUN_147f2b75c(longlong *param_1)

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



// FUNCTION 147f2b7fe FUN_147f2b7fe body=37 status=ok
// SIG undefined FUN_147f2b7fe(void)

void FUN_147f2b7fe(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x3b0);
  FUN_141123976(param_2);
  return;
}



// FUNCTION 147f2b84a FUN_147f2b84a body=63 status=ok
// SIG undefined FUN_147f2b84a(void)

undefined1 FUN_147f2b84a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2b972(param_2,param_3);
    param_3 = param_3 + 0x3b0;
    param_2 = param_2 + 0x3b0;
  }
  return 1;
}



// FUNCTION 147f2b8b2 FUN_147f2b8b2 body=59 status=ok
// SIG undefined FUN_147f2b8b2(void)

undefined8 FUN_147f2b8b2(longlong *param_1)

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



// FUNCTION 147f2b8fe FUN_147f2b8fe body=38 status=ok
// SIG undefined FUN_147f2b8fe(void)

void FUN_147f2b8fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3b0) == '\x01') {
    FUN_140cbb262(param_2);
    *(undefined1 *)(param_2 + 0x3b0) = 0;
  }
  return;
}



// FUNCTION 147f2b972 FUN_147f2b972 body=320 status=ok
// SIG undefined FUN_147f2b972(void)

longlong FUN_147f2b972(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_2 != param_1) {
    FUN_147f2bab2(param_1,param_2);
  }
  FUN_14386402c(param_1 + 0x18,param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 100);
  uVar7 = *(undefined4 *)(param_2 + 0x68);
  uVar8 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_1403caf9a(param_1 + 0x78,param_2 + 0x78);
  FUN_1403caf9a(param_1 + 0x88,param_2 + 0x88);
  FUN_1403caf9a(param_1 + 0x98,param_2 + 0x98);
  uVar6 = *(undefined4 *)(param_2 + 0xac);
  uVar7 = *(undefined4 *)(param_2 + 0xb0);
  uVar8 = *(undefined4 *)(param_2 + 0xb4);
  uVar9 = *(undefined4 *)(param_2 + 0xb5);
  uVar10 = *(undefined4 *)(param_2 + 0xb9);
  uVar11 = *(undefined4 *)(param_2 + 0xbd);
  uVar12 = *(undefined4 *)(param_2 + 0xc1);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  *(undefined4 *)(param_1 + 0xb0) = uVar7;
  *(undefined4 *)(param_1 + 0xb4) = uVar8;
  *(undefined4 *)(param_1 + 0xb5) = uVar9;
  *(undefined4 *)(param_1 + 0xb9) = uVar10;
  *(undefined4 *)(param_1 + 0xbd) = uVar11;
  *(undefined4 *)(param_1 + 0xc1) = uVar12;
  FUN_14054d68c(param_1 + 200,param_2 + 200);
  uVar3 = *(undefined8 *)(param_2 + 0x340);
  lVar4 = *(longlong *)(param_2 + 0x348);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x340) = uVar3;
  *(longlong *)(param_1 + 0x348) = lVar4;
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
  *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x350);
  FUN_140b177d4(param_1 + 0x358,param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x378) = *(undefined1 *)(param_2 + 0x378);
  FUN_140b177d4(param_1 + 0x380,param_2 + 0x380);
  uVar3 = *(undefined8 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a8) = uVar3;
  return param_1;
}



// FUNCTION 147f2bab2 FUN_147f2bab2 body=304 status=ok
// SIG undefined FUN_147f2bab2(void)

void FUN_147f2bab2(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147f2bc3e FUN_147f2bc3e body=59 status=ok
// SIG undefined FUN_147f2bc3e(void)

undefined8 FUN_147f2bc3e(longlong *param_1)

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



// FUNCTION 147f2bcde FUN_147f2bcde body=55 status=ok
// SIG undefined FUN_147f2bcde(void)

void FUN_147f2bcde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22330 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22330 = FUN_140002ddd(FUN_146438157,uVar1,L"GbxTargetValueResolver");
  }
  return;
}



// FUNCTION 147f2bd98 FUN_147f2bd98 body=150 status=ok
// SIG undefined FUN_147f2bd98(void)

undefined8 FUN_147f2bd98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_1401f3db8(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      *(undefined4 *)(param_2 + lVar1 + 0x30) = *(undefined4 *)(param_3 + lVar1 + 0x30);
      FUN_147f2bf7c(param_2 + lVar1 + 0x38,param_3 + lVar1 + 0x38);
      *(undefined2 *)(param_2 + lVar1 + 0x88) = *(undefined2 *)(param_3 + lVar1 + 0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2be56 FUN_147f2be56 body=59 status=ok
// SIG undefined FUN_147f2be56(void)

undefined8 FUN_147f2be56(longlong *param_1)

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



// FUNCTION 147f2bea2 FUN_147f2bea2 body=38 status=ok
// SIG undefined FUN_147f2bea2(void)

void FUN_147f2bea2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_147f2befe(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147f2befe FUN_147f2befe body=125 status=ok
// SIG undefined FUN_147f2befe(void)

void FUN_147f2befe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac5d6a0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140e84dd2(param_1 + 7);
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 147f2bf7c FUN_147f2bf7c body=122 status=ok
// SIG undefined FUN_147f2bf7c(void)

longlong FUN_147f2bf7c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147f2bff6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f2bff6 FUN_147f2bff6 body=228 status=ok
// SIG undefined FUN_147f2bff6(void)

longlong * FUN_147f2bff6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e84e0a(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar4 = 0;
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 4 + lVar4) = *(undefined4 *)(lVar2 + 4 + lVar4);
        }
        else {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 8 + lVar4) = *(undefined4 *)(lVar2 + 8 + lVar4);
          *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
          *(undefined1 *)(lVar3 + 0x18 + lVar4) = *(undefined1 *)(lVar2 + 0x18 + lVar4);
          *(undefined8 *)(lVar3 + 0x20 + lVar4) = *(undefined8 *)(lVar2 + 0x20 + lVar4);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147f2c154 FUN_147f2c154 body=59 status=ok
// SIG undefined FUN_147f2c154(void)

undefined8 FUN_147f2c154(longlong *param_1)

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



// FUNCTION 147f2c276 FUN_147f2c276 body=44 status=ok
// SIG undefined FUN_147f2c276(void)

void FUN_147f2c276(undefined8 param_1,longlong *param_2)

{
  FUN_144760e21(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147f2c2b8 FUN_147f2c2b8 body=54 status=ok
// SIG undefined FUN_147f2c2b8(void)

undefined1 FUN_147f2c2b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2c3b2(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147f2c316 FUN_147f2c316 body=59 status=ok
// SIG undefined FUN_147f2c316(void)

undefined8 FUN_147f2c316(longlong *param_1)

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



// FUNCTION 147f2c3b2 FUN_147f2c3b2 body=107 status=ok
// SIG undefined FUN_147f2c3b2(void)

longlong FUN_147f2c3b2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != param_1) {
    FUN_140df772a(param_1,param_2);
  }
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  FUN_140d75dba(param_1 + 0x20,param_2 + 0x20);
  FUN_140d75dba(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return param_1;
}



// FUNCTION 147f2c41e FUN_147f2c41e body=48 status=ok
// SIG undefined FUN_147f2c41e(void)

void FUN_147f2c41e(longlong *param_1)

{
  if ((char)param_1[0xc] == '\x01') {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 147f2c476 FUN_147f2c476 body=1218 status=ok
// SIG undefined FUN_147f2c476(void)

void FUN_147f2c476(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_578 [36];
  undefined4 local_554;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined4 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 local_440;
  undefined4 local_418;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_2a0 = 0;
  local_298 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_244 = 0xffffffff00000080;
  local_23c = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0xffffffff00000000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_170 = 0;
  local_168 = 0x200000000;
  local_158 = 0;
  local_150 = 0x2000000000;
  uStack_148 = 0xffffffff;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f0 = 0;
  local_e8 = 0x2000000000;
  uStack_e0 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_88 = 0;
  local_80 = 0x2000000000;
  uStack_78 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_520 = 0;
  local_518 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  local_514 = 0xffffffff00000080;
  local_50c = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4c4 = 0xffffffff00000080;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0xffffffff00000000;
  local_470 = 0;
  local_468 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_418 = 0;
  local_3f0 = 0;
  local_3e8 = 0x200000000;
  local_3d8 = 0;
  local_3d0 = 0x2000000000;
  uStack_3c8 = 0xffffffff;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0x200000000;
  local_370 = 0;
  local_368 = 0x2000000000;
  uStack_360 = 0xffffffff;
  local_350 = 0;
  local_348 = 0;
  local_320 = 0;
  local_318 = 0x200000000;
  local_308 = 0;
  local_300 = 0x2000000000;
  uStack_2f8 = 0xffffffff;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_548);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_548);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_550 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_550);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_550);
  }
  local_554 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_554);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_554);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_548;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = &local_2c8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f5887c(puVar2,puVar1,local_550,local_554);
  local_548 = 0;
  FUN_14076ba36(&uStack_540);
  local_2c8 = 0;
  FUN_14076ba36(&uStack_2c0);
  if ((local_50 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f2c93a FUN_147f2c93a body=1231 status=ok
// SIG undefined FUN_147f2c93a(void)

void FUN_147f2c93a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined4 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 local_440;
  undefined4 local_418;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_2a0 = 0;
  local_298 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_244 = 0xffffffff00000080;
  local_23c = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0xffffffff00000000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_170 = 0;
  local_168 = 0x200000000;
  local_158 = 0;
  local_150 = 0x2000000000;
  uStack_148 = 0xffffffff;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f0 = 0;
  local_e8 = 0x2000000000;
  uStack_e0 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_88 = 0;
  local_80 = 0x2000000000;
  uStack_78 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_520 = 0;
  local_518 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  local_514 = 0xffffffff00000080;
  local_50c = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4c4 = 0xffffffff00000080;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0xffffffff00000000;
  local_470 = 0;
  local_468 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_418 = 0;
  local_3f0 = 0;
  local_3e8 = 0x200000000;
  local_3d8 = 0;
  local_3d0 = 0x2000000000;
  uStack_3c8 = 0xffffffff;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0x200000000;
  local_370 = 0;
  local_368 = 0x2000000000;
  uStack_360 = 0xffffffff;
  local_350 = 0;
  local_348 = 0;
  local_320 = 0;
  local_318 = 0x200000000;
  local_308 = 0;
  local_300 = 0x2000000000;
  uStack_2f8 = 0xffffffff;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_548);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_548);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_550 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_550);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_550);
  }
  local_558 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_558);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_558);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_548;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = &local_2c8;
  }
  puVar3 = &local_558;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147f58b90(puVar2,puVar1,local_550,puVar3);
  local_548 = 0;
  FUN_14076ba36(&uStack_540);
  local_2c8 = 0;
  FUN_14076ba36(&uStack_2c0);
  if ((local_50 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f2ce0a FUN_147f2ce0a body=1243 status=ok
// SIG undefined FUN_147f2ce0a(void)

void FUN_147f2ce0a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_5a8 [32];
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined4 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 local_440;
  undefined4 local_418;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  local_2a0 = 0;
  local_298 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_244 = 0xffffffff00000080;
  local_23c = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0xffffffff00000000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_170 = 0;
  local_168 = 0x200000000;
  local_158 = 0;
  local_150 = 0x2000000000;
  uStack_148 = 0xffffffff;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f0 = 0;
  local_e8 = 0x2000000000;
  uStack_e0 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_88 = 0;
  local_80 = 0x2000000000;
  uStack_78 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_520 = 0;
  local_518 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  local_514 = 0xffffffff00000080;
  local_50c = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4c4 = 0xffffffff00000080;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0xffffffff00000000;
  local_470 = 0;
  local_468 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_418 = 0;
  local_3f0 = 0;
  local_3e8 = 0x200000000;
  local_3d8 = 0;
  local_3d0 = 0x2000000000;
  uStack_3c8 = 0xffffffff;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0x200000000;
  local_370 = 0;
  local_368 = 0x2000000000;
  uStack_360 = 0xffffffff;
  local_350 = 0;
  local_348 = 0;
  local_320 = 0;
  local_318 = 0x200000000;
  local_308 = 0;
  local_300 = 0x2000000000;
  uStack_2f8 = 0xffffffff;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_548);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_548);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_550 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_550);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_550);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_568);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_568);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_548;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = &local_2c8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_578 = local_558;
  local_588 = local_568;
  uStack_584 = uStack_564;
  uStack_580 = uStack_560;
  uStack_57c = uStack_55c;
  FUN_147f589e4(puVar2,puVar1,local_550);
  local_548 = 0;
  FUN_14076ba36(&uStack_540);
  local_2c8 = 0;
  FUN_14076ba36(&uStack_2c0);
  if ((local_50 ^ (ulonglong)auStack_5a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f2d380 FUN_147f2d380 body=85 status=ok
// SIG undefined FUN_147f2d380(void)

void FUN_147f2d380(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 9,0,0xd8);
  *param_2 = 0x44bb800043fa0000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_14150d5fe(param_2 + 9);
  *(undefined2 *)(param_2 + 0x23) = 0;
  return;
}



// FUNCTION 147f2d3d6 FUN_147f2d3d6 body=64 status=ok
// SIG undefined FUN_147f2d3d6(void)

void FUN_147f2d3d6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x44bb800043fa0000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_14150d5fe(param_2 + 9);
  *(undefined2 *)(param_2 + 0x23) = 0;
  return;
}



// FUNCTION 147f2d432 FUN_147f2d432 body=63 status=ok
// SIG undefined FUN_147f2d432(void)

undefined1 FUN_147f2d432(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14053c976(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147f2d49a FUN_147f2d49a body=59 status=ok
// SIG undefined FUN_147f2d49a(void)

undefined8 FUN_147f2d49a(longlong *param_1)

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



// FUNCTION 147f2d4e6 FUN_147f2d4e6 body=38 status=ok
// SIG undefined FUN_147f2d4e6(void)

void FUN_147f2d4e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_14494dff0(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 147f2d56e FUN_147f2d56e body=63 status=ok
// SIG undefined FUN_147f2d56e(void)

undefined1 FUN_147f2d56e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458df8c6(param_2,param_3);
    param_3 = param_3 + 0x378;
    param_2 = param_2 + 0x378;
  }
  return 1;
}



// FUNCTION 147f2d5d6 FUN_147f2d5d6 body=59 status=ok
// SIG undefined FUN_147f2d5d6(void)

undefined8 FUN_147f2d5d6(longlong *param_1)

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



// FUNCTION 147f2d622 FUN_147f2d622 body=38 status=ok
// SIG undefined FUN_147f2d622(void)

void FUN_147f2d622(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x378) == '\x01') {
    FUN_140315562(param_2);
    *(undefined1 *)(param_2 + 0x378) = 0;
  }
  return;
}



// FUNCTION 147f2d710 FUN_147f2d710 body=59 status=ok
// SIG undefined FUN_147f2d710(void)

undefined8 FUN_147f2d710(longlong *param_1)

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



// FUNCTION 147f2d7b0 FUN_147f2d7b0 body=55 status=ok
// SIG undefined FUN_147f2d7b0(void)

void FUN_147f2d7b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22500 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22500 = FUN_140002ddd(FUN_146438c71,uVar1,L"GbxTerritoryValueResolver");
  }
  return;
}



// FUNCTION 147f2d8b2 FUN_147f2d8b2 body=86 status=ok
// SIG undefined FUN_147f2d8b2(void)

undefined8 FUN_147f2d8b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2d930 FUN_147f2d930 body=59 status=ok
// SIG undefined FUN_147f2d930(void)

undefined8 FUN_147f2d930(longlong *param_1)

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



// FUNCTION 147f2d976 FUN_147f2d976 body=32 status=ok
// SIG undefined FUN_147f2d976(void)

void FUN_147f2d976(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f2d9e4 FUN_147f2d9e4 body=38 status=ok
// SIG undefined FUN_147f2d9e4(void)

undefined8 FUN_147f2d9e4(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2da0a FUN_147f2da0a body=55 status=ok
// SIG undefined FUN_147f2da0a(void)

void FUN_147f2da0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb225a8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb225a8 = FUN_140002ddd(FUN_146438fab,uVar1,L"GpsConditionSettings");
  }
  return;
}



// FUNCTION 147f2daca FUN_147f2daca body=54 status=ok
// SIG undefined FUN_147f2daca(void)

undefined1 FUN_147f2daca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2dc6e(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f2db28 FUN_147f2db28 body=59 status=ok
// SIG undefined FUN_147f2db28(void)

undefined8 FUN_147f2db28(longlong *param_1)

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



// FUNCTION 147f2db6e FUN_147f2db6e body=52 status=ok
// SIG undefined FUN_147f2db6e(void)

void FUN_147f2db6e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14ac64bf0;
    if (*(char *)((longlong)param_2 + 0x51) == '\x01') {
      *(undefined1 *)((longlong)param_2 + 0x51) = 0;
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 147f2dbf0 FUN_147f2dbf0 body=61 status=ok
// SIG undefined FUN_147f2dbf0(void)

undefined8 * FUN_147f2dbf0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac64bf0;
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2dc2e FUN_147f2dc2e body=55 status=ok
// SIG undefined FUN_147f2dc2e(void)

void FUN_147f2dc2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb225c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb225c0 = FUN_140002ddd(FUN_14643900c,uVar1,L"GpsCondition");
  }
  return;
}



// FUNCTION 147f2dc6e FUN_147f2dc6e body=115 status=ok
// SIG undefined FUN_147f2dc6e(void)

longlong FUN_147f2dc6e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  else {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    if (*(char *)(param_2 + 0x51) == '\x01') {
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
    else if (*(char *)(param_1 + 0x51) == '\x01') {
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
  }
  return param_1;
}



// FUNCTION 147f2dd12 FUN_147f2dd12 body=99 status=ok
// SIG undefined FUN_147f2dd12(void)

undefined8 FUN_147f2dd12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x38);
      uVar2 = *(undefined4 *)(param_3 + -0x34);
      uVar3 = *(undefined4 *)(param_3 + -0x30);
      uVar4 = *(undefined4 *)(param_3 + -0x2c);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x38) = uVar1;
      *(undefined4 *)(param_2 + -0x34) = uVar2;
      *(undefined4 *)(param_2 + -0x30) = uVar3;
      *(undefined4 *)(param_2 + -0x2c) = uVar4;
      FUN_1470d00c2(param_2 + -0x18,param_3 + -0x18);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2dd9e FUN_147f2dd9e body=59 status=ok
// SIG undefined FUN_147f2dd9e(void)

undefined8 FUN_147f2dd9e(longlong *param_1)

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



// FUNCTION 147f2dde4 FUN_147f2dde4 body=51 status=ok
// SIG undefined FUN_147f2dde4(void)

void FUN_147f2dde4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac64e20;
    FUN_144a2da94(param_2 + 8);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f2df1c FUN_147f2df1c body=63 status=ok
// SIG undefined FUN_147f2df1c(void)

undefined1 FUN_147f2df1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2e0be(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 147f2df84 FUN_147f2df84 body=59 status=ok
// SIG undefined FUN_147f2df84(void)

undefined8 FUN_147f2df84(longlong *param_1)

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



// FUNCTION 147f2dfd0 FUN_147f2dfd0 body=38 status=ok
// SIG undefined FUN_147f2dfd0(void)

void FUN_147f2dfd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_147f2e044(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 147f2e044 FUN_147f2e044 body=122 status=ok
// SIG undefined FUN_147f2e044(void)

void FUN_147f2e044(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac65020;
  plVar1 = param_1 + 0xb;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xf) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac64bf0;
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f2e0be FUN_147f2e0be body=295 status=ok
// SIG undefined FUN_147f2e0be(void)

longlong FUN_147f2e0be(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *_Dst;
  undefined8 *_Src;
  
  FUN_147f2dc6e();
  _Dst = (longlong *)(param_1 + 0x58);
  _Src = (undefined8 *)(param_2 + 0x58);
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == *(byte *)(param_2 + 0x78)) {
    if (0x18 < *(ushort *)(param_2 + 0x70)) {
      _Src = *(undefined8 **)(param_2 + 0x58);
    }
    if (0x18 < *(ushort *)(param_1 + 0x70)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar5 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x70)) {
        plVar5 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 0x70)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0x78);
    uVar2 = *(ushort *)(param_2 + 0x70);
    *(ushort *)(param_1 + 0x70) = uVar2;
    plVar5 = _Dst;
    if (0x18 < uVar2) {
      plVar5 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar5;
      _Src = (undefined8 *)*_Src;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar5,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar3)(plVar5,_Src);
    }
    *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  }
  return param_1;
}



// FUNCTION 147f2e27a FUN_147f2e27a body=86 status=ok
// SIG undefined FUN_147f2e27a(void)

undefined8 FUN_147f2e27a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2e2f8 FUN_147f2e2f8 body=59 status=ok
// SIG undefined FUN_147f2e2f8(void)

undefined8 FUN_147f2e2f8(longlong *param_1)

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



// FUNCTION 147f2e33e FUN_147f2e33e body=32 status=ok
// SIG undefined FUN_147f2e33e(void)

void FUN_147f2e33e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f2e436 FUN_147f2e436 body=54 status=ok
// SIG undefined FUN_147f2e436(void)

undefined1 FUN_147f2e436(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2dc6e(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147f2e494 FUN_147f2e494 body=59 status=ok
// SIG undefined FUN_147f2e494(void)

undefined8 FUN_147f2e494(longlong *param_1)

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



// FUNCTION 147f2e4da FUN_147f2e4da body=52 status=ok
// SIG undefined FUN_147f2e4da(void)

void FUN_147f2e4da(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14ac64bf0;
    if (*(char *)((longlong)param_2 + 0x51) == '\x01') {
      *(undefined1 *)((longlong)param_2 + 0x51) = 0;
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 147f2e55c FUN_147f2e55c body=61 status=ok
// SIG undefined FUN_147f2e55c(void)

undefined8 * FUN_147f2e55c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac64bf0;
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2e59a FUN_147f2e59a body=55 status=ok
// SIG undefined FUN_147f2e59a(void)

void FUN_147f2e59a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22620 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22620 = FUN_140002ddd(FUN_1464391fa,uVar1,L"GpsCondition_IsFirstRun");
  }
  return;
}



// FUNCTION 147f2e602 FUN_147f2e602 body=63 status=ok
// SIG undefined FUN_147f2e602(void)

undefined1 FUN_147f2e602(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2e70c(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 147f2e66a FUN_147f2e66a body=59 status=ok
// SIG undefined FUN_147f2e66a(void)

undefined8 FUN_147f2e66a(longlong *param_1)

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



// FUNCTION 147f2e70c FUN_147f2e70c body=139 status=ok
// SIG undefined FUN_147f2e70c(void)

longlong FUN_147f2e70c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_144983130(param_1 + 0x40,param_2 + 0x40);
  lVar8 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar8;
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 147f2e798 FUN_147f2e798 body=69 status=ok
// SIG undefined FUN_147f2e798(void)

void FUN_147f2e798(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_14ac65680;
    FUN_144a2da94(param_1 + 0x11);
    FUN_144a2da94(param_1 + 8);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147f2e7de FUN_147f2e7de body=85 status=ok
// SIG undefined FUN_147f2e7de(void)

void FUN_147f2e7de(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0xe0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14ac65880;
  FUN_1414f1cb4(param_2 + 0xc);
  return;
}



// FUNCTION 147f2e898 FUN_147f2e898 body=91 status=ok
// SIG undefined FUN_147f2e898(void)

undefined8 FUN_147f2e898(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      FUN_147f2dc6e(param_2 + -0x60,param_3 + -0x60);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_141689bc8(param_2,param_3);
      param_3 = param_3 + 0x118;
      param_2 = param_2 + 0x118;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2e91c FUN_147f2e91c body=59 status=ok
// SIG undefined FUN_147f2e91c(void)

undefined8 FUN_147f2e91c(longlong *param_1)

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



// FUNCTION 147f2e968 FUN_147f2e968 body=40 status=ok
// SIG undefined FUN_147f2e968(void)

void FUN_147f2e968(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_147f2ea3c(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 147f2e9de FUN_147f2e9de body=38 status=ok
// SIG undefined FUN_147f2e9de(void)

undefined8 FUN_147f2e9de(undefined8 param_1,int param_2)

{
  FUN_147f2ea3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2ea04 FUN_147f2ea04 body=55 status=ok
// SIG undefined FUN_147f2ea04(void)

void FUN_147f2ea04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22650 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22650 = FUN_140002ddd(FUN_1464392f0,uVar1,L"GpsCondition_Ticket");
  }
  return;
}



// FUNCTION 147f2ea3c FUN_147f2ea3c body=84 status=ok
// SIG undefined FUN_147f2ea3c(void)

void FUN_147f2ea3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac65880;
  FUN_144a2da94(param_1 + 0x1c);
  FUN_144a2da94(param_1 + 0x14);
  FUN_144a2da94(param_1 + 0xd);
  *param_1 = &PTR_FUN_14ac64bf0;
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f2eb66 FUN_147f2eb66 body=155 status=ok
// SIG undefined FUN_147f2eb66(void)

undefined8 FUN_147f2eb66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined8 *)(param_2 + 0x38 + lVar10) = *(undefined8 *)(param_3 + 0x38 + lVar10);
      *(undefined4 *)(param_2 + 0x40 + lVar10) = *(undefined4 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x58 + lVar10) = *(undefined1 *)(param_3 + 0x58 + lVar10);
      *(undefined8 *)(param_2 + 0x50 + lVar10) = *(undefined8 *)(param_3 + 0x50 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      lVar10 = lVar10 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2ec2a FUN_147f2ec2a body=59 status=ok
// SIG undefined FUN_147f2ec2a(void)

undefined8 FUN_147f2ec2a(longlong *param_1)

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



// FUNCTION 147f2ec70 FUN_147f2ec70 body=32 status=ok
// SIG undefined FUN_147f2ec70(void)

void FUN_147f2ec70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f2edbc FUN_147f2edbc body=63 status=ok
// SIG undefined FUN_147f2edbc(void)

undefined1 FUN_147f2edbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2efdc(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 147f2ee24 FUN_147f2ee24 body=59 status=ok
// SIG undefined FUN_147f2ee24(void)

undefined8 FUN_147f2ee24(longlong *param_1)

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



// FUNCTION 147f2ee70 FUN_147f2ee70 body=40 status=ok
// SIG undefined FUN_147f2ee70(void)

void FUN_147f2ee70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_147f2ef44(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 147f2eee6 FUN_147f2eee6 body=38 status=ok
// SIG undefined FUN_147f2eee6(void)

undefined8 FUN_147f2eee6(undefined8 param_1,int param_2)

{
  FUN_147f2ef44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2ef0c FUN_147f2ef0c body=55 status=ok
// SIG undefined FUN_147f2ef0c(void)

void FUN_147f2ef0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb226d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb226d8 = FUN_140002ddd(FUN_146439416,uVar1,L"GpsCondition_Timer");
  }
  return;
}



// FUNCTION 147f2ef44 FUN_147f2ef44 body=151 status=ok
// SIG undefined FUN_147f2ef44(void)

void FUN_147f2ef44(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ac65d30;
  plVar2 = (longlong *)param_1[0x14];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = param_1 + 0xd;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x11) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x10)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x10)) {
    FUN_1400020a8(*plVar2);
  }
  *param_1 = &PTR_FUN_14ac64bf0;
  if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f2efdc FUN_147f2efdc body=420 status=ok
// SIG undefined FUN_147f2efdc(void)

longlong FUN_147f2efdc(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *_Src;
  longlong *plVar9;
  
  FUN_147f2dc6e();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  plVar9 = (longlong *)(param_1 + 0x68);
  _Src = (undefined8 *)(param_2 + 0x68);
  bVar2 = *(byte *)(param_1 + 0x88);
  if (bVar2 == *(byte *)(param_2 + 0x88)) {
    if (0x18 < *(ushort *)(param_2 + 0x80)) {
      _Src = *(undefined8 **)(param_2 + 0x68);
    }
    if (0x18 < *(ushort *)(param_1 + 0x80)) {
      plVar9 = (longlong *)*plVar9;
    }
    uVar7 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar9,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar4)(plVar9,_Src);
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar4 != (code *)0x0) {
      plVar8 = plVar9;
      if (0x18 < *(ushort *)(param_1 + 0x80)) {
        plVar8 = (longlong *)*plVar9;
      }
      (*pcVar4)(plVar8);
    }
    if (0x18 < *(ushort *)(param_1 + 0x80)) {
      FUN_1400020a8(*plVar9);
    }
    bVar2 = *(byte *)(param_2 + 0x88);
    uVar3 = *(ushort *)(param_2 + 0x80);
    *(ushort *)(param_1 + 0x80) = uVar3;
    plVar8 = plVar9;
    if (0x18 < uVar3) {
      plVar8 = (longlong *)FUN_14001cc68(uVar3,0);
      *plVar9 = (longlong)plVar8;
      _Src = (undefined8 *)*_Src;
    }
    uVar7 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar8,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar4)(plVar8,_Src);
    }
    *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  lVar6 = *(longlong *)(param_2 + 0xa0);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(longlong *)(param_1 + 0xa0) = lVar6;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 147f2f182 FUN_147f2f182 body=37 status=ok
// SIG undefined FUN_147f2f182(void)

void FUN_147f2f182(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_1414c243c(param_2);
  return;
}



// FUNCTION 147f2f1c8 FUN_147f2f1c8 body=214 status=ok
// SIG undefined FUN_147f2f1c8(void)

undefined8 FUN_147f2f1c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      puVar4 = (undefined8 *)(param_2 + 0x20 + lVar6);
      *(undefined4 *)(puVar4 + -4) = *puVar1;
      puVar4[-2] = *(undefined8 *)(puVar1 + 4);
      *(undefined1 *)(puVar4 + -1) = *(undefined1 *)(puVar1 + 6);
      puVar3 = (undefined8 *)(puVar1 + 8);
      puVar5 = puVar4;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(puVar4 + 0xb) = *(undefined1 *)(puVar1 + 0x1e);
      puVar4[10] = *(undefined8 *)(puVar1 + 0x1c);
      puVar3 = (undefined8 *)(param_3 + lVar6 + 0x80);
      puVar5 = (undefined8 *)(param_2 + lVar6 + 0x80);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(puVar4 + 0x1b) = *(undefined1 *)(puVar1 + 0x3e);
      *(undefined1 *)(puVar4 + 0x1e) = *(undefined1 *)(puVar1 + 0x44);
      puVar4[0x1d] = *(undefined8 *)(puVar1 + 0x42);
      puVar4 = (undefined8 *)(param_3 + lVar6 + 0x118);
      puVar3 = (undefined8 *)(param_2 + lVar6 + 0x118);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      lVar6 = lVar6 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2f2ca FUN_147f2f2ca body=59 status=ok
// SIG undefined FUN_147f2f2ca(void)

undefined8 FUN_147f2f2ca(longlong *param_1)

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



// FUNCTION 147f2f3d4 FUN_147f2f3d4 body=84 status=ok
// SIG undefined FUN_147f2f3d4(void)

undefined8 FUN_147f2f3d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2f450 FUN_147f2f450 body=59 status=ok
// SIG undefined FUN_147f2f450(void)

undefined8 FUN_147f2f450(longlong *param_1)

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



// FUNCTION 147f2f496 FUN_147f2f496 body=32 status=ok
// SIG undefined FUN_147f2f496(void)

void FUN_147f2f496(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f2f5a8 FUN_147f2f5a8 body=97 status=ok
// SIG undefined FUN_147f2f5a8(void)

undefined8 FUN_147f2f5a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f2f822(param_2 + 0x418,param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x428) = *(undefined4 *)(param_3 + 0x428);
    param_2 = param_2 + 0x430;
    param_3 = param_3 + 0x430;
  }
  return 1;
}



// FUNCTION 147f2f632 FUN_147f2f632 body=59 status=ok
// SIG undefined FUN_147f2f632(void)

undefined8 FUN_147f2f632(longlong *param_1)

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



// FUNCTION 147f2f67e FUN_147f2f67e body=65 status=ok
// SIG undefined FUN_147f2f67e(void)

void FUN_147f2f67e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x86) == '\x01') {
    *param_2 = &PTR_FUN_14ac66330;
    if (param_2[0x83] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x86) = 0;
  }
  return;
}



// FUNCTION 147f2f710 FUN_147f2f710 body=38 status=ok
// SIG undefined FUN_147f2f710(void)

undefined8 FUN_147f2f710(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f2f73c FUN_147f2f73c body=229 status=ok
// SIG undefined FUN_147f2f73c(void)

longlong FUN_147f2f73c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined4 *)(param_2 + 0x40);
    uVar3 = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    FUN_147f2f87a(param_1 + 0x50,param_2 + 0x50);
  }
  else {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined4 *)(param_2 + 0x40);
    uVar3 = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    FUN_147f2f87a(param_1 + 0x50,param_2 + 0x50);
    if (*(char *)(param_2 + 0x3e4) == '\x01') {
      *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
      *(undefined1 *)(param_1 + 0x3e4) = 1;
    }
    else if (*(char *)(param_1 + 0x3e4) == '\x01') {
      *(undefined1 *)(param_1 + 0x3e4) = 0;
    }
  }
  FUN_147f2f8d2(param_1 + 1000,param_2 + 1000);
  FUN_147f2f92a(param_1 + 0x3f8,param_2 + 0x3f8);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_2 + 0x408);
  *(undefined1 *)(param_1 + 0x410) = *(undefined1 *)(param_2 + 0x410);
  return param_1;
}



// FUNCTION 147f2f822 FUN_147f2f822 body=88 status=ok
// SIG undefined FUN_147f2f822(void)

undefined8 * FUN_147f2f822(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f2fa46(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f2f87a FUN_147f2f87a body=88 status=ok
// SIG undefined FUN_147f2f87a(void)

longlong FUN_147f2f87a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x380);
    if (*(longlong *)(param_1 + 0x380) == 0) {
      lVar1 = param_1;
    }
    FUN_1448090f0(lVar1,*(undefined4 *)(param_1 + 0x388));
    lVar1 = *(longlong *)(param_2 + 0x380);
    if (*(longlong *)(param_2 + 0x380) == 0) {
      lVar1 = param_2;
    }
    FUN_140348956(param_1,lVar1,*(undefined4 *)(param_2 + 0x388),*(undefined4 *)(param_1 + 0x38c));
  }
  return param_1;
}



// FUNCTION 147f2f8d2 FUN_147f2f8d2 body=88 status=ok
// SIG undefined FUN_147f2f8d2(void)

undefined8 * FUN_147f2f8d2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f2f982(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f2f92a FUN_147f2f92a body=88 status=ok
// SIG undefined FUN_147f2f92a(void)

undefined8 * FUN_147f2f92a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f2f9e4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f2f982 FUN_147f2f982 body=98 status=ok
// SIG undefined FUN_147f2f982(void)

void FUN_147f2f982(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f2f9e4 FUN_147f2f9e4 body=98 status=ok
// SIG undefined FUN_147f2f9e4(void)

void FUN_147f2f9e4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f2fa46 FUN_147f2fa46 body=98 status=ok
// SIG undefined FUN_147f2fa46(void)

void FUN_147f2fa46(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f2fb06 FUN_147f2fb06 body=84 status=ok
// SIG undefined FUN_147f2fb06(void)

undefined8 FUN_147f2fb06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2fb82 FUN_147f2fb82 body=59 status=ok
// SIG undefined FUN_147f2fb82(void)

undefined8 FUN_147f2fb82(longlong *param_1)

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



// FUNCTION 147f2fbc8 FUN_147f2fbc8 body=32 status=ok
// SIG undefined FUN_147f2fbc8(void)

void FUN_147f2fbc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f2fcda FUN_147f2fcda body=97 status=ok
// SIG undefined FUN_147f2fcda(void)

undefined8 FUN_147f2fcda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f2f822(param_2 + 0x418,param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x428) = *(undefined4 *)(param_3 + 0x428);
    param_2 = param_2 + 0x430;
    param_3 = param_3 + 0x430;
  }
  return 1;
}



// FUNCTION 147f2fd64 FUN_147f2fd64 body=59 status=ok
// SIG undefined FUN_147f2fd64(void)

undefined8 FUN_147f2fd64(longlong *param_1)

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



// FUNCTION 147f2fdb0 FUN_147f2fdb0 body=65 status=ok
// SIG undefined FUN_147f2fdb0(void)

void FUN_147f2fdb0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x86) == '\x01') {
    *param_2 = &PTR_FUN_14ac66330;
    if (param_2[0x83] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x86) = 0;
  }
  return;
}



// FUNCTION 147f2fe9e FUN_147f2fe9e body=84 status=ok
// SIG undefined FUN_147f2fe9e(void)

undefined8 FUN_147f2fe9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f2ff1a FUN_147f2ff1a body=59 status=ok
// SIG undefined FUN_147f2ff1a(void)

undefined8 FUN_147f2ff1a(longlong *param_1)

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



// FUNCTION 147f2ff60 FUN_147f2ff60 body=32 status=ok
// SIG undefined FUN_147f2ff60(void)

void FUN_147f2ff60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f30072 FUN_147f30072 body=97 status=ok
// SIG undefined FUN_147f30072(void)

undefined8 FUN_147f30072(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f2f822(param_2 + 0x418,param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x428) = *(undefined4 *)(param_3 + 0x428);
    param_2 = param_2 + 0x430;
    param_3 = param_3 + 0x430;
  }
  return 1;
}



// FUNCTION 147f300fc FUN_147f300fc body=59 status=ok
// SIG undefined FUN_147f300fc(void)

undefined8 FUN_147f300fc(longlong *param_1)

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



// FUNCTION 147f30148 FUN_147f30148 body=65 status=ok
// SIG undefined FUN_147f30148(void)

void FUN_147f30148(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x86) == '\x01') {
    *param_2 = &PTR_FUN_14ac66330;
    if (param_2[0x83] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x86) = 0;
  }
  return;
}



// FUNCTION 147f30236 FUN_147f30236 body=84 status=ok
// SIG undefined FUN_147f30236(void)

undefined8 FUN_147f30236(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f302b2 FUN_147f302b2 body=59 status=ok
// SIG undefined FUN_147f302b2(void)

undefined8 FUN_147f302b2(longlong *param_1)

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



// FUNCTION 147f302f8 FUN_147f302f8 body=32 status=ok
// SIG undefined FUN_147f302f8(void)

void FUN_147f302f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f3040a FUN_147f3040a body=97 status=ok
// SIG undefined FUN_147f3040a(void)

undefined8 FUN_147f3040a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f2f822(param_2 + 0x418,param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x428) = *(undefined4 *)(param_3 + 0x428);
    param_2 = param_2 + 0x430;
    param_3 = param_3 + 0x430;
  }
  return 1;
}



// FUNCTION 147f30494 FUN_147f30494 body=59 status=ok
// SIG undefined FUN_147f30494(void)

undefined8 FUN_147f30494(longlong *param_1)

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



// FUNCTION 147f304e0 FUN_147f304e0 body=65 status=ok
// SIG undefined FUN_147f304e0(void)

void FUN_147f304e0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x86) == '\x01') {
    *param_2 = &PTR_FUN_14ac66330;
    if (param_2[0x83] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x86) = 0;
  }
  return;
}



// FUNCTION 147f30624 FUN_147f30624 body=84 status=ok
// SIG undefined FUN_147f30624(void)

undefined8 FUN_147f30624(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f306a0 FUN_147f306a0 body=59 status=ok
// SIG undefined FUN_147f306a0(void)

undefined8 FUN_147f306a0(longlong *param_1)

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



// FUNCTION 147f306e6 FUN_147f306e6 body=32 status=ok
// SIG undefined FUN_147f306e6(void)

void FUN_147f306e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f30754 FUN_147f30754 body=38 status=ok
// SIG undefined FUN_147f30754(void)

undefined8 FUN_147f30754(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3077a FUN_147f3077a body=55 status=ok
// SIG undefined FUN_147f3077a(void)

void FUN_147f3077a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22858 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22858 = FUN_140002ddd(FUN_14180e617,uVar1,L"GpsGeneratorSettings");
  }
  return;
}



// FUNCTION 147f307b2 FUN_147f307b2 body=115 status=ok
// SIG undefined FUN_147f307b2(void)

void FUN_147f307b2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x3e0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14ac67560;
  return;
}



// FUNCTION 147f308c0 FUN_147f308c0 body=63 status=ok
// SIG undefined FUN_147f308c0(void)

undefined1 FUN_147f308c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    param_3 = param_3 + 0x418;
    param_2 = param_2 + 0x418;
  }
  return 1;
}



// FUNCTION 147f30928 FUN_147f30928 body=59 status=ok
// SIG undefined FUN_147f30928(void)

undefined8 FUN_147f30928(longlong *param_1)

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



// FUNCTION 147f30974 FUN_147f30974 body=38 status=ok
// SIG undefined FUN_147f30974(void)

void FUN_147f30974(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x418) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x418) = 0;
  }
  return;
}



// FUNCTION 147f309e8 FUN_147f309e8 body=38 status=ok
// SIG undefined FUN_147f309e8(void)

undefined8 FUN_147f309e8(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f30a0e FUN_147f30a0e body=55 status=ok
// SIG undefined FUN_147f30a0e(void)

void FUN_147f30a0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22870 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22870 = FUN_140002ddd(FUN_14180e648,uVar1,L"GpsGenerator");
  }
  return;
}



// FUNCTION 147f30ae2 FUN_147f30ae2 body=90 status=ok
// SIG undefined FUN_147f30ae2(void)

undefined8 FUN_147f30ae2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f30b64 FUN_147f30b64 body=59 status=ok
// SIG undefined FUN_147f30b64(void)

undefined8 FUN_147f30b64(longlong *param_1)

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



// FUNCTION 147f30baa FUN_147f30baa body=32 status=ok
// SIG undefined FUN_147f30baa(void)

void FUN_147f30baa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147f30cb4 FUN_147f30cb4 body=63 status=ok
// SIG undefined FUN_147f30cb4(void)

undefined1 FUN_147f30cb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    param_3 = param_3 + 0x418;
    param_2 = param_2 + 0x418;
  }
  return 1;
}



// FUNCTION 147f30d1c FUN_147f30d1c body=59 status=ok
// SIG undefined FUN_147f30d1c(void)

undefined8 FUN_147f30d1c(longlong *param_1)

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



// FUNCTION 147f30d68 FUN_147f30d68 body=38 status=ok
// SIG undefined FUN_147f30d68(void)

void FUN_147f30d68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x418) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x418) = 0;
  }
  return;
}



// FUNCTION 147f30dde FUN_147f30dde body=37 status=ok
// SIG undefined FUN_147f30dde(void)

void FUN_147f30dde(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_147f30f80(param_2);
  return;
}



// FUNCTION 147f30e24 FUN_147f30e24 body=136 status=ok
// SIG undefined FUN_147f30e24(void)

undefined8 FUN_147f30e24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0xb8;
    do {
      *(undefined1 *)(param_2 + -0xa8 + lVar1) = *(undefined1 *)(param_3 + -0xa8 + lVar1);
      *(undefined8 *)(param_2 + -0xb0 + lVar1) = *(undefined8 *)(param_3 + -0xb0 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1 + -0xa0);
      puVar4 = (undefined8 *)(param_2 + lVar1 + -0xa0);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 *)(param_2 + -0x28 + lVar1) = *(undefined1 *)(param_3 + -0x28 + lVar1);
      *(undefined1 *)(param_2 + -0x10 + lVar1) = *(undefined1 *)(param_3 + -0x10 + lVar1);
      *(undefined8 *)(param_2 + -0x18 + lVar1) = *(undefined8 *)(param_3 + -0x18 + lVar1);
      *(undefined4 *)(param_2 + -8 + lVar1) = *(undefined4 *)(param_3 + -8 + lVar1);
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f30ed4 FUN_147f30ed4 body=59 status=ok
// SIG undefined FUN_147f30ed4(void)

undefined8 FUN_147f30ed4(longlong *param_1)

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



// FUNCTION 147f30f80 FUN_147f30f80 body=168 status=ok
// SIG undefined FUN_147f30f80(void)

void FUN_147f30f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14a1ca850;
  param_1[1] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 2) = 2;
  *param_1 = &PTR_FUN_14a1a0a60;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  uVar1 = DAT_14c846500;
  param_1[9] = DAT_14c8464f8;
  param_1[10] = uVar1;
  param_1[0xb] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x11] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x13] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x16) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return;
}



// FUNCTION 147f3102a FUN_147f3102a body=49 status=ok
// SIG undefined FUN_147f3102a(void)

void FUN_147f3102a(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14044066a(param_2,10,1);
  *(undefined1 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 147f3105c FUN_147f3105c body=31 status=ok
// SIG undefined FUN_147f3105c(void)

void FUN_147f3105c(undefined8 param_1,longlong param_2)

{
  FUN_14044066a(param_2,10,1);
  *(undefined1 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 147f3109a FUN_147f3109a body=60 status=ok
// SIG undefined FUN_147f3109a(void)

undefined1 FUN_147f3109a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_3 + 0x38);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 147f310fe FUN_147f310fe body=59 status=ok
// SIG undefined FUN_147f310fe(void)

undefined8 FUN_147f310fe(longlong *param_1)

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



// FUNCTION 147f31144 FUN_147f31144 body=32 status=ok
// SIG undefined FUN_147f31144(void)

void FUN_147f31144(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f311b4 FUN_147f311b4 body=37 status=ok
// SIG undefined FUN_147f311b4(void)

void FUN_147f311b4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1c8);
  FUN_1412ebe6c(param_2);
  return;
}



// FUNCTION 147f31226 FUN_147f31226 body=63 status=ok
// SIG undefined FUN_147f31226(void)

undefined1 FUN_147f31226(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f313ac(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 147f3128e FUN_147f3128e body=59 status=ok
// SIG undefined FUN_147f3128e(void)

undefined8 FUN_147f3128e(longlong *param_1)

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



// FUNCTION 147f312da FUN_147f312da body=38 status=ok
// SIG undefined FUN_147f312da(void)

void FUN_147f312da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_140ff0132(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 147f3134e FUN_147f3134e body=38 status=ok
// SIG undefined FUN_147f3134e(void)

undefined8 FUN_147f3134e(undefined8 param_1,int param_2)

{
  FUN_140ff0132();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f31374 FUN_147f31374 body=55 status=ok
// SIG undefined FUN_147f31374(void)

void FUN_147f31374(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22900 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22900 = FUN_140002ddd(FUN_146439dc9,uVar1,L"GpsGeneratorSettings_Actors");
  }
  return;
}



// FUNCTION 147f313ac FUN_147f313ac body=401 status=ok
// SIG undefined FUN_147f313ac(void)

longlong FUN_147f313ac(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  puVar9 = (undefined8 *)(param_2 + 0x58);
  puVar10 = (undefined8 *)(param_1 + 0x58);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  FUN_144983130(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  FUN_147f3153e(param_1 + 0x150,param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  FUN_147f3153e(param_1 + 0x168,param_2 + 0x168);
  *(undefined2 *)(param_1 + 0x178) = *(undefined2 *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 400) = *(undefined1 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  FUN_147f3159c(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_147f3159c(param_1 + 0x1b0,param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 147f3153e FUN_147f3153e body=93 status=ok
// SIG undefined FUN_147f3153e(void)

undefined8 * FUN_147f3153e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b86e6c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f315ec(param_1,iVar1);
      FUN_147f3165f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f3159c FUN_147f3159c body=79 status=ok
// SIG undefined FUN_147f3159c(void)

undefined8 * FUN_147f3159c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f316e6(param_1,iVar1);
      FUN_147f31748(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f315ec FUN_147f315ec body=115 status=ok
// SIG undefined FUN_147f315ec(void)

void FUN_147f315ec(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f3165f FUN_147f3165f body=134 status=ok
// SIG undefined FUN_147f3165f(void)

void FUN_147f3165f(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f316e6 FUN_147f316e6 body=98 status=ok
// SIG undefined FUN_147f316e6(void)

void FUN_147f316e6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f31748 FUN_147f31748 body=78 status=ok
// SIG undefined FUN_147f31748(void)

void FUN_147f31748(longlong param_1,longlong param_2,int param_3)

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
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147f31798 FUN_147f31798 body=115 status=ok
// SIG undefined FUN_147f31798(void)

void FUN_147f31798(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x410);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14ac68180;
  return;
}



// FUNCTION 147f318aa FUN_147f318aa body=104 status=ok
// SIG undefined FUN_147f318aa(void)

undefined1 FUN_147f318aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 147f3193a FUN_147f3193a body=59 status=ok
// SIG undefined FUN_147f3193a(void)

undefined8 FUN_147f3193a(longlong *param_1)

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



// FUNCTION 147f31986 FUN_147f31986 body=38 status=ok
// SIG undefined FUN_147f31986(void)

void FUN_147f31986(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 147f319fa FUN_147f319fa body=38 status=ok
// SIG undefined FUN_147f319fa(void)

undefined8 FUN_147f319fa(undefined8 param_1,int param_2)

{
  FUN_1405f0b44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f31a20 FUN_147f31a20 body=55 status=ok
// SIG undefined FUN_147f31a20(void)

void FUN_147f31a20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22918 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22918 = FUN_140002ddd(FUN_146439e61,uVar1,L"GpsGenerator_Actors");
  }
  return;
}



// FUNCTION 147f31a88 FUN_147f31a88 body=428 status=ok
// SIG undefined FUN_147f31a88(void)

undefined8 FUN_147f31a88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar11);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar11);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar11);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar11,param_3 + 0x28 + lVar11);
      *(undefined4 *)(param_2 + 0x38 + lVar11) = *(undefined4 *)(param_3 + 0x38 + lVar11);
      *(undefined1 *)(param_2 + 0x50 + lVar11) = *(undefined1 *)(param_3 + 0x50 + lVar11);
      *(undefined8 *)(param_2 + 0x48 + lVar11) = *(undefined8 *)(param_3 + 0x48 + lVar11);
      *(undefined4 *)(param_2 + 0x58 + lVar11) = *(undefined4 *)(param_3 + 0x58 + lVar11);
      *(undefined1 *)(param_2 + 0x70 + lVar11) = *(undefined1 *)(param_3 + 0x70 + lVar11);
      *(undefined8 *)(param_2 + 0x68 + lVar11) = *(undefined8 *)(param_3 + 0x68 + lVar11);
      puVar12 = (undefined8 *)(param_3 + 0x178 + lVar11 + -0x100);
      puVar13 = (undefined8 *)(param_2 + 0x178 + lVar11 + -0x100);
      for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)(param_2 + 0xf0 + lVar11) = *(undefined1 *)(param_3 + 0xf0 + lVar11);
      *(undefined1 *)(param_2 + 0xf8 + lVar11) = *(undefined1 *)(param_3 + 0xf8 + lVar11);
      *(undefined8 *)(param_2 + 0x108 + lVar11) = *(undefined8 *)(param_3 + 0x108 + lVar11);
      *(undefined1 *)(param_2 + 0x110 + lVar11) = *(undefined1 *)(param_3 + 0x110 + lVar11);
      *(undefined4 *)(param_2 + 0x118 + lVar11) = *(undefined4 *)(param_3 + 0x118 + lVar11);
      *(undefined8 *)(param_2 + 0x128 + lVar11) = *(undefined8 *)(param_3 + 0x128 + lVar11);
      *(undefined1 *)(param_2 + 0x130 + lVar11) = *(undefined1 *)(param_3 + 0x130 + lVar11);
      *(undefined4 *)(param_2 + 0x138 + lVar11) = *(undefined4 *)(param_3 + 0x138 + lVar11);
      *(undefined1 *)(param_2 + 0x150 + lVar11) = *(undefined1 *)(param_3 + 0x150 + lVar11);
      *(undefined8 *)(param_2 + 0x148 + lVar11) = *(undefined8 *)(param_3 + 0x148 + lVar11);
      *(undefined4 *)(param_2 + 0x158 + lVar11) = *(undefined4 *)(param_3 + 0x158 + lVar11);
      *(undefined1 *)(param_2 + 0x170 + lVar11) = *(undefined1 *)(param_3 + 0x170 + lVar11);
      *(undefined8 *)(param_2 + 0x168 + lVar11) = *(undefined8 *)(param_3 + 0x168 + lVar11);
      *(undefined4 *)(param_2 + 0x178 + lVar11) = *(undefined4 *)(param_3 + 0x178 + lVar11);
      lVar11 = lVar11 + 0x180;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f31c5c FUN_147f31c5c body=59 status=ok
// SIG undefined FUN_147f31c5c(void)

undefined8 FUN_147f31c5c(longlong *param_1)

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



// FUNCTION 147f31ca8 FUN_147f31ca8 body=38 status=ok
// SIG undefined FUN_147f31ca8(void)

void FUN_147f31ca8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 147f31eac FUN_147f31eac body=104 status=ok
// SIG undefined FUN_147f31eac(void)

undefined1 FUN_147f31eac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x438);
    uVar9 = *(undefined4 *)(param_3 + 0x43c);
    uVar10 = *(undefined4 *)(param_3 + 0x440);
    uVar11 = *(undefined4 *)(param_3 + 0x444);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x438) = uVar8;
    *(undefined4 *)(param_2 + 0x43c) = uVar9;
    *(undefined4 *)(param_2 + 0x440) = uVar10;
    *(undefined4 *)(param_2 + 0x444) = uVar11;
    param_2 = param_2 + 0x448;
    param_3 = param_3 + 0x448;
  }
  return 1;
}



// FUNCTION 147f31f3c FUN_147f31f3c body=59 status=ok
// SIG undefined FUN_147f31f3c(void)

undefined8 FUN_147f31f3c(longlong *param_1)

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



// FUNCTION 147f31f88 FUN_147f31f88 body=38 status=ok
// SIG undefined FUN_147f31f88(void)

void FUN_147f31f88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x448) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x448) = 0;
  }
  return;
}



// FUNCTION 147f3202e FUN_147f3202e body=63 status=ok
// SIG undefined FUN_147f3202e(void)

undefined1 FUN_147f3202e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f32156(param_2,param_3);
    param_3 = param_3 + 0x158;
    param_2 = param_2 + 0x158;
  }
  return 1;
}



// FUNCTION 147f32096 FUN_147f32096 body=59 status=ok
// SIG undefined FUN_147f32096(void)

undefined8 FUN_147f32096(longlong *param_1)

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



// FUNCTION 147f320e2 FUN_147f320e2 body=38 status=ok
// SIG undefined FUN_147f320e2(void)

void FUN_147f320e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 147f32156 FUN_147f32156 body=289 status=ok
// SIG undefined FUN_147f32156(void)

longlong FUN_147f32156(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  puVar9 = (undefined8 *)(param_2 + 0x78);
  puVar10 = (undefined8 *)(param_1 + 0x78);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  lVar8 = *(longlong *)(param_2 + 0x110);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x110);
    }
  }
  *(longlong *)(param_1 + 0x110) = lVar8;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_2 + 0x150);
  return param_1;
}



// FUNCTION 147f32318 FUN_147f32318 body=105 status=ok
// SIG undefined FUN_147f32318(void)

undefined1 FUN_147f32318(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f32486(param_2 + 0x418,param_3 + 0x418);
    param_3 = param_3 + 0x428;
    param_2 = param_2 + 0x428;
  }
  return 1;
}



// FUNCTION 147f323aa FUN_147f323aa body=59 status=ok
// SIG undefined FUN_147f323aa(void)

undefined8 FUN_147f323aa(longlong *param_1)

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



// FUNCTION 147f323f6 FUN_147f323f6 body=65 status=ok
// SIG undefined FUN_147f323f6(void)

void FUN_147f323f6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x85) == '\x01') {
    *param_2 = &PTR_FUN_14ac68af0;
    if (param_2[0x83] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x85) = 0;
  }
  return;
}



// FUNCTION 147f32486 FUN_147f32486 body=88 status=ok
// SIG undefined FUN_147f32486(void)

undefined8 * FUN_147f32486(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f324de(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f324de FUN_147f324de body=98 status=ok
// SIG undefined FUN_147f324de(void)

void FUN_147f324de(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f32572 FUN_147f32572 body=446 status=ok
// SIG undefined FUN_147f32572(void)

undefined8 FUN_147f32572(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      lVar1 = lVar15 + param_2 + 0x1b8;
      lVar2 = param_3 + 0x1b8 + lVar15;
      puVar3 = (undefined4 *)(param_3 + 8 + lVar15);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar15);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x18 + lVar15);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      puVar3 = (undefined4 *)(param_2 + 8 + lVar15);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_1470d00c2(param_2 + 0x28 + lVar15,param_3 + 0x28 + lVar15);
      *(undefined4 *)(param_2 + 0x38 + lVar15) = *(undefined4 *)(param_3 + 0x38 + lVar15);
      *(undefined1 *)(param_2 + 0x50 + lVar15) = *(undefined1 *)(param_3 + 0x50 + lVar15);
      *(undefined8 *)(param_2 + 0x48 + lVar15) = *(undefined8 *)(param_3 + 0x48 + lVar15);
      puVar13 = (undefined8 *)(lVar2 + -0x160);
      puVar14 = (undefined8 *)(lVar1 + -0x160);
      for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)(param_2 + 0xd0 + lVar15) = *(undefined1 *)(param_3 + 0xd0 + lVar15);
      *(undefined1 *)(param_2 + 0xe8 + lVar15) = *(undefined1 *)(param_3 + 0xe8 + lVar15);
      *(undefined8 *)(param_2 + 0xe0 + lVar15) = *(undefined8 *)(param_3 + 0xe0 + lVar15);
      puVar13 = (undefined8 *)(lVar2 + -200);
      puVar14 = (undefined8 *)(lVar1 + -200);
      for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)(param_2 + 0x148 + lVar15) = *(undefined1 *)(param_3 + 0x148 + lVar15);
      *(undefined8 *)(param_2 + 0x140 + lVar15) = *(undefined8 *)(param_3 + 0x140 + lVar15);
      *(undefined4 *)(param_2 + 0x150 + lVar15) = *(undefined4 *)(param_3 + 0x150 + lVar15);
      *(undefined1 *)(param_2 + 0x168 + lVar15) = *(undefined1 *)(param_3 + 0x168 + lVar15);
      *(undefined8 *)(param_2 + 0x160 + lVar15) = *(undefined8 *)(param_3 + 0x160 + lVar15);
      *(undefined4 *)(param_2 + 0x170 + lVar15) = *(undefined4 *)(param_3 + 0x170 + lVar15);
      *(undefined1 *)(param_2 + 0x178 + lVar15) = *(undefined1 *)(param_3 + 0x178 + lVar15);
      *(undefined8 *)(param_2 + 0x188 + lVar15) = *(undefined8 *)(param_3 + 0x188 + lVar15);
      *(undefined1 *)(param_2 + 400 + lVar15) = *(undefined1 *)(param_3 + 400 + lVar15);
      *(undefined4 *)(param_2 + 0x198 + lVar15) = *(undefined4 *)(param_3 + 0x198 + lVar15);
      *(undefined1 *)(param_2 + 0x1b0 + lVar15) = *(undefined1 *)(param_3 + 0x1b0 + lVar15);
      *(undefined8 *)(param_2 + 0x1a8 + lVar15) = *(undefined8 *)(param_3 + 0x1a8 + lVar15);
      *(undefined4 *)(param_2 + 0x1b8 + lVar15) = *(undefined4 *)(param_3 + 0x1b8 + lVar15);
      lVar15 = lVar15 + 0x1c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f32758 FUN_147f32758 body=59 status=ok
// SIG undefined FUN_147f32758(void)

undefined8 FUN_147f32758(longlong *param_1)

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



// FUNCTION 147f327a4 FUN_147f327a4 body=38 status=ok
// SIG undefined FUN_147f327a4(void)

void FUN_147f327a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 147f32a56 FUN_147f32a56 body=118 status=ok
// SIG undefined FUN_147f32a56(void)

undefined1 FUN_147f32a56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x438);
    uVar9 = *(undefined4 *)(param_3 + 0x43c);
    uVar10 = *(undefined4 *)(param_3 + 0x440);
    uVar11 = *(undefined4 *)(param_3 + 0x444);
    uVar12 = *(undefined4 *)(param_3 + 0x448);
    uVar13 = *(undefined4 *)(param_3 + 0x44c);
    uVar14 = *(undefined4 *)(param_3 + 0x450);
    uVar15 = *(undefined4 *)(param_3 + 0x454);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x438) = uVar8;
    *(undefined4 *)(param_2 + 0x43c) = uVar9;
    *(undefined4 *)(param_2 + 0x440) = uVar10;
    *(undefined4 *)(param_2 + 0x444) = uVar11;
    *(undefined4 *)(param_2 + 0x448) = uVar12;
    *(undefined4 *)(param_2 + 0x44c) = uVar13;
    *(undefined4 *)(param_2 + 0x450) = uVar14;
    *(undefined4 *)(param_2 + 0x454) = uVar15;
    param_2 = param_2 + 0x458;
    param_3 = param_3 + 0x458;
  }
  return 1;
}



// FUNCTION 147f32af4 FUN_147f32af4 body=59 status=ok
// SIG undefined FUN_147f32af4(void)

undefined8 FUN_147f32af4(longlong *param_1)

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



// FUNCTION 147f32b40 FUN_147f32b40 body=38 status=ok
// SIG undefined FUN_147f32b40(void)

void FUN_147f32b40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x458) = 0;
  }
  return;
}



// FUNCTION 147f32c7e FUN_147f32c7e body=155 status=ok
// SIG undefined FUN_147f32c7e(void)

undefined8 FUN_147f32c7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined4 *)(param_2 + 0x38 + lVar10) = *(undefined4 *)(param_3 + 0x38 + lVar10);
      *(undefined1 *)(param_2 + 0x50 + lVar10) = *(undefined1 *)(param_3 + 0x50 + lVar10);
      *(undefined8 *)(param_2 + 0x48 + lVar10) = *(undefined8 *)(param_3 + 0x48 + lVar10);
      *(undefined4 *)(param_2 + 0x58 + lVar10) = *(undefined4 *)(param_3 + 0x58 + lVar10);
      *(undefined1 *)(param_2 + 0x60 + lVar10) = *(undefined1 *)(param_3 + 0x60 + lVar10);
      lVar10 = lVar10 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f32d42 FUN_147f32d42 body=59 status=ok
// SIG undefined FUN_147f32d42(void)

undefined8 FUN_147f32d42(longlong *param_1)

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



// FUNCTION 147f32d88 FUN_147f32d88 body=32 status=ok
// SIG undefined FUN_147f32d88(void)

void FUN_147f32d88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f32e94 FUN_147f32e94 body=74 status=ok
// SIG undefined FUN_147f32e94(void)

undefined8 FUN_147f32e94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    param_2 = param_2 + 0x420;
    param_3 = param_3 + 0x420;
  }
  return 1;
}



// FUNCTION 147f32f06 FUN_147f32f06 body=59 status=ok
// SIG undefined FUN_147f32f06(void)

undefined8 FUN_147f32f06(longlong *param_1)

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



// FUNCTION 147f32f52 FUN_147f32f52 body=38 status=ok
// SIG undefined FUN_147f32f52(void)

void FUN_147f32f52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x420) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x420) = 0;
  }
  return;
}



// FUNCTION 147f3305c FUN_147f3305c body=45 status=ok
// SIG undefined FUN_147f3305c(void)

longlong FUN_147f3305c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3308a FUN_147f3308a body=45 status=ok
// SIG undefined FUN_147f3308a(void)

longlong FUN_147f3308a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f330d8 FUN_147f330d8 body=45 status=ok
// SIG undefined FUN_147f330d8(void)

longlong FUN_147f330d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1415ae37e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f33106 FUN_147f33106 body=48 status=ok
// SIG undefined FUN_147f33106(void)

longlong FUN_147f33106(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1415ae37e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f33136 FUN_147f33136 body=48 status=ok
// SIG undefined FUN_147f33136(void)

longlong FUN_147f33136(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1415ae37e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f33166 FUN_147f33166 body=48 status=ok
// SIG undefined FUN_147f33166(void)

longlong FUN_147f33166(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1415ae37e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f331c6 FUN_147f331c6 body=63 status=ok
// SIG undefined FUN_147f331c6(void)

undefined1 FUN_147f331c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f33440(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 147f3322e FUN_147f3322e body=59 status=ok
// SIG undefined FUN_147f3322e(void)

undefined8 FUN_147f3322e(longlong *param_1)

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



// FUNCTION 147f3327a FUN_147f3327a body=62 status=ok
// SIG undefined FUN_147f3327a(void)

void FUN_147f3327a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x41) == '\x01') {
    *param_2 = &PTR_FUN_14ac6e410;
    if (param_2[0xe] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x41) = 0;
  }
  return;
}



// FUNCTION 147f3330a FUN_147f3330a body=65 status=ok
// SIG undefined FUN_147f3330a(void)

undefined8 * FUN_147f3330a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac6e410;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3334c FUN_147f3334c body=55 status=ok
// SIG undefined FUN_147f3334c(void)

void FUN_147f3334c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22ac0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22ac0 = FUN_140002ddd(FUN_14643aa46,uVar1,L"GpsGeneratorSettings_Project");
  }
  return;
}



// FUNCTION 147f33384 FUN_147f33384 body=38 status=ok
// SIG undefined FUN_147f33384(void)

undefined8 FUN_147f33384(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f333aa FUN_147f333aa body=55 status=ok
// SIG undefined FUN_147f333aa(void)

void FUN_147f333aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22e00 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22e00 = FUN_140002ddd(FUN_14643b9fc,uVar1,L"GpsResultsNodeSettings");
  }
  return;
}



// FUNCTION 147f333e2 FUN_147f333e2 body=38 status=ok
// SIG undefined FUN_147f333e2(void)

undefined8 FUN_147f333e2(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f33408 FUN_147f33408 body=55 status=ok
// SIG undefined FUN_147f33408(void)

void FUN_147f33408(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22da0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22da0 = FUN_140002ddd(FUN_14643b869,uVar1,L"GpsNodeSettings");
  }
  return;
}



// FUNCTION 147f33440 FUN_147f33440 body=409 status=ok
// SIG undefined FUN_147f33440(void)

longlong FUN_147f33440(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  uVar5 = *(undefined4 *)(param_2 + 0x50);
  uVar6 = *(undefined4 *)(param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0x58);
  uVar8 = *(undefined4 *)(param_2 + 0x5c);
  uVar9 = *(undefined4 *)(param_2 + 99);
  uVar10 = *(undefined4 *)(param_2 + 0x67);
  uVar11 = *(undefined4 *)(param_2 + 0x6b);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x5f);
  *(undefined4 *)(param_1 + 99) = uVar9;
  *(undefined4 *)(param_1 + 0x67) = uVar10;
  *(undefined4 *)(param_1 + 0x6b) = uVar11;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar8;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  FUN_147f335da(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  puVar13 = (undefined8 *)(param_2 + 0x98);
  puVar14 = (undefined8 *)(param_1 + 0x98);
  for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  puVar13 = (undefined8 *)(param_2 + 0x178);
  puVar14 = (undefined8 *)(param_1 + 0x178);
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  return param_1;
}



// FUNCTION 147f335da FUN_147f335da body=87 status=ok
// SIG undefined FUN_147f335da(void)

undefined8 * FUN_147f335da(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f33632(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f33632 FUN_147f33632 body=96 status=ok
// SIG undefined FUN_147f33632(void)

void FUN_147f33632(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 2,1);
    iVar1 = (int)(uVar2 >> 1);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,2,1);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147f336c0 FUN_147f336c0 body=130 status=ok
// SIG undefined FUN_147f336c0(void)

undefined8 FUN_147f336c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f3395a(param_2 + 0x418,param_3 + 0x418);
    puVar2 = (undefined8 *)(param_3 + 0x468);
    puVar3 = (undefined8 *)(param_2 + 0x468);
    for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_2 + 0x4a8) = *(undefined4 *)(param_3 + 0x4a8);
    param_2 = param_2 + 0x4b0;
    param_3 = param_3 + 0x4b0;
  }
  return 1;
}



// FUNCTION 147f3376a FUN_147f3376a body=59 status=ok
// SIG undefined FUN_147f3376a(void)

undefined8 FUN_147f3376a(longlong *param_1)

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



// FUNCTION 147f337b6 FUN_147f337b6 body=65 status=ok
// SIG undefined FUN_147f337b6(void)

void FUN_147f337b6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x96) == '\x01') {
    *param_2 = &PTR_FUN_14ac6e840;
    if (param_2[0x8b] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x96) = 0;
  }
  return;
}



// FUNCTION 147f33846 FUN_147f33846 body=57 status=ok
// SIG undefined FUN_147f33846(void)

void FUN_147f33846(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22a78 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22a78 = FUN_140002ddd(FUN_14643aaa6,uVar1,L"GpsGenerator_Line");
  }
  return;
}



// FUNCTION 147f33880 FUN_147f33880 body=68 status=ok
// SIG undefined FUN_147f33880(void)

undefined8 * FUN_147f33880(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac6e840;
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f338c4 FUN_147f338c4 body=55 status=ok
// SIG undefined FUN_147f338c4(void)

void FUN_147f338c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22ad8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22ad8 = FUN_140002ddd(FUN_14643aad5,uVar1,L"GpsGenerator_Project");
  }
  return;
}



// FUNCTION 147f338fc FUN_147f338fc body=38 status=ok
// SIG undefined FUN_147f338fc(void)

undefined8 FUN_147f338fc(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f33922 FUN_147f33922 body=55 status=ok
// SIG undefined FUN_147f33922(void)

void FUN_147f33922(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22db8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22db8 = FUN_140002ddd(FUN_14643b8ca,uVar1,L"GpsNodeState");
  }
  return;
}



// FUNCTION 147f3395a FUN_147f3395a body=104 status=ok
// SIG undefined FUN_147f3395a(void)

void * FUN_147f3395a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    }
    else {
      FUN_147f339c2(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147f339c2 FUN_147f339c2 body=101 status=ok
// SIG undefined FUN_147f339c2(void)

void FUN_147f339c2(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1457ef5d8(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 147f33a58 FUN_147f33a58 body=177 status=ok
// SIG undefined FUN_147f33a58(void)

undefined8 FUN_147f33a58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar11);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar11);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar11);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar11,param_3 + 0x28 + lVar11);
      *(undefined4 *)(param_2 + 0x38 + lVar11) = *(undefined4 *)(param_3 + 0x38 + lVar11);
      *(undefined1 *)(param_2 + 0x50 + lVar11) = *(undefined1 *)(param_3 + 0x50 + lVar11);
      *(undefined8 *)(param_2 + 0x48 + lVar11) = *(undefined8 *)(param_3 + 0x48 + lVar11);
      puVar12 = (undefined8 *)(param_3 + 0x58 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x58 + lVar11);
      for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)(param_2 + 0xd0 + lVar11) = *(undefined1 *)(param_3 + 0xd0 + lVar11);
      lVar11 = lVar11 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f33b32 FUN_147f33b32 body=59 status=ok
// SIG undefined FUN_147f33b32(void)

undefined8 FUN_147f33b32(longlong *param_1)

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



// FUNCTION 147f33b7e FUN_147f33b7e body=38 status=ok
// SIG undefined FUN_147f33b7e(void)

void FUN_147f33b7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f33d4a FUN_147f33d4a body=90 status=ok
// SIG undefined FUN_147f33d4a(void)

undefined8 FUN_147f33d4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined8 *)(param_2 + 0x428) = *(undefined8 *)(param_3 + 0x428);
    param_2 = param_2 + 0x430;
    param_3 = param_3 + 0x430;
  }
  return 1;
}



// FUNCTION 147f33dcc FUN_147f33dcc body=59 status=ok
// SIG undefined FUN_147f33dcc(void)

undefined8 FUN_147f33dcc(longlong *param_1)

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



// FUNCTION 147f33e18 FUN_147f33e18 body=38 status=ok
// SIG undefined FUN_147f33e18(void)

void FUN_147f33e18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x430) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x430) = 0;
  }
  return;
}



// FUNCTION 147f33f60 FUN_147f33f60 body=129 status=ok
// SIG undefined FUN_147f33f60(void)

undefined8 FUN_147f33f60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x68);
      uVar2 = *(undefined4 *)(param_3 + -100);
      uVar3 = *(undefined4 *)(param_3 + -0x60);
      uVar4 = *(undefined4 *)(param_3 + -0x5c);
      uVar5 = *(undefined4 *)(param_3 + -0x54);
      uVar6 = *(undefined4 *)(param_3 + -0x50);
      uVar7 = *(undefined4 *)(param_3 + -0x4c);
      *(undefined4 *)(param_2 + -0x58) = *(undefined4 *)(param_3 + -0x58);
      *(undefined4 *)(param_2 + -0x54) = uVar5;
      *(undefined4 *)(param_2 + -0x50) = uVar6;
      *(undefined4 *)(param_2 + -0x4c) = uVar7;
      *(undefined4 *)(param_2 + -0x68) = uVar1;
      *(undefined4 *)(param_2 + -100) = uVar2;
      *(undefined4 *)(param_2 + -0x60) = uVar3;
      *(undefined4 *)(param_2 + -0x5c) = uVar4;
      FUN_1470d00c2(param_2 + -0x48,param_3 + -0x48);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      uVar1 = *(undefined4 *)(param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x2c);
      uVar3 = *(undefined4 *)(param_3 + -0x28);
      uVar4 = *(undefined4 *)(param_3 + -0x24);
      uVar5 = *(undefined4 *)(param_3 + -0x20);
      uVar6 = *(undefined4 *)(param_3 + -0x1c);
      uVar7 = *(undefined4 *)(param_3 + -0x18);
      uVar8 = *(undefined4 *)(param_3 + -0x14);
      uVar9 = *(undefined4 *)(param_3 + -0xd);
      uVar10 = *(undefined4 *)(param_3 + -9);
      uVar11 = *(undefined4 *)(param_3 + -5);
      *(undefined4 *)(param_2 + -0x11) = *(undefined4 *)(param_3 + -0x11);
      *(undefined4 *)(param_2 + -0xd) = uVar9;
      *(undefined4 *)(param_2 + -9) = uVar10;
      *(undefined4 *)(param_2 + -5) = uVar11;
      *(undefined4 *)(param_2 + -0x20) = uVar5;
      *(undefined4 *)(param_2 + -0x1c) = uVar6;
      *(undefined4 *)(param_2 + -0x18) = uVar7;
      *(undefined4 *)(param_2 + -0x14) = uVar8;
      *(undefined4 *)(param_2 + -0x30) = uVar1;
      *(undefined4 *)(param_2 + -0x2c) = uVar2;
      *(undefined4 *)(param_2 + -0x28) = uVar3;
      *(undefined4 *)(param_2 + -0x24) = uVar4;
      FUN_147f335da(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3400a FUN_147f3400a body=59 status=ok
// SIG undefined FUN_147f3400a(void)

undefined8 FUN_147f3400a(longlong *param_1)

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



// FUNCTION 147f34056 FUN_147f34056 body=62 status=ok
// SIG undefined FUN_147f34056(void)

void FUN_147f34056(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14ac6e410;
    if (param_2[0xe] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 147f340e4 FUN_147f340e4 body=149 status=ok
// SIG undefined FUN_147f340e4(void)

void FUN_147f340e4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x420);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14ac6e840;
  param_2[0x8b] = 0;
  param_2[0x8c] = 0x800000000;
  return;
}



// FUNCTION 147f3422e FUN_147f3422e body=85 status=ok
// SIG undefined FUN_147f3422e(void)

undefined1 FUN_147f3422e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f3395a(param_2 + 0x418,param_3 + 0x418);
    param_2 = param_2 + 0x468;
    param_3 = param_3 + 0x468;
  }
  return 1;
}



// FUNCTION 147f342ac FUN_147f342ac body=59 status=ok
// SIG undefined FUN_147f342ac(void)

undefined8 FUN_147f342ac(longlong *param_1)

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



// FUNCTION 147f342f8 FUN_147f342f8 body=65 status=ok
// SIG undefined FUN_147f342f8(void)

void FUN_147f342f8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x8d) == '\x01') {
    *param_2 = &PTR_FUN_14ac6e840;
    if (param_2[0x8b] != 0) {
      FUN_1400020a8();
    }
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x8d) = 0;
  }
  return;
}



// FUNCTION 147f343ba FUN_147f343ba body=118 status=ok
// SIG undefined FUN_147f343ba(void)

undefined8 FUN_147f343ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f34518(param_2,param_3);
    *(undefined8 *)(param_2 + 0x2c8) = *(undefined8 *)(param_3 + 0x2c8);
    *(undefined1 *)(param_2 + 0x2d0) = *(undefined1 *)(param_3 + 0x2d0);
    *(undefined8 *)(param_2 + 0x2d8) = *(undefined8 *)(param_3 + 0x2d8);
    param_3 = param_3 + 0x2e0;
    param_2 = param_2 + 0x2e0;
  }
  return 1;
}



// FUNCTION 147f34458 FUN_147f34458 body=59 status=ok
// SIG undefined FUN_147f34458(void)

undefined8 FUN_147f34458(longlong *param_1)

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



// FUNCTION 147f344a4 FUN_147f344a4 body=38 status=ok
// SIG undefined FUN_147f344a4(void)

void FUN_147f344a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 147f34518 FUN_147f34518 body=444 status=ok
// SIG undefined FUN_147f34518(void)

longlong FUN_147f34518(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  puVar9 = (undefined8 *)(param_2 + 0x98);
  puVar10 = (undefined8 *)(param_1 + 0x98);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  puVar9 = (undefined8 *)(param_2 + 0x178);
  puVar10 = (undefined8 *)(param_1 + 0x178);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  puVar9 = (undefined8 *)(param_2 + 0x1d8);
  puVar10 = (undefined8 *)(param_1 + 0x1d8);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x250);
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  puVar9 = (undefined8 *)(param_2 + 0x270);
  puVar10 = (undefined8 *)(param_1 + 0x270);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 0x2b8);
  return param_1;
}



// FUNCTION 147f34770 FUN_147f34770 body=116 status=ok
// SIG undefined FUN_147f34770(void)

undefined8 FUN_147f34770(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x41c);
    uVar2 = *(undefined4 *)(param_3 + 0x420);
    uVar3 = *(undefined4 *)(param_3 + 0x424);
    uVar4 = *(undefined4 *)(param_3 + 0x428);
    uVar5 = *(undefined4 *)(param_3 + 0x42c);
    uVar6 = *(undefined4 *)(param_3 + 0x430);
    uVar7 = *(undefined4 *)(param_3 + 0x434);
    uVar8 = *(undefined4 *)(param_3 + 0x434);
    uVar9 = *(undefined4 *)(param_3 + 0x438);
    uVar10 = *(undefined4 *)(param_3 + 0x43c);
    uVar11 = *(undefined4 *)(param_3 + 0x440);
    *(undefined4 *)(param_2 + 0x418) = *(undefined4 *)(param_3 + 0x418);
    *(undefined4 *)(param_2 + 0x41c) = uVar1;
    *(undefined4 *)(param_2 + 0x420) = uVar2;
    *(undefined4 *)(param_2 + 0x424) = uVar3;
    *(undefined4 *)(param_2 + 0x428) = uVar4;
    *(undefined4 *)(param_2 + 0x42c) = uVar5;
    *(undefined4 *)(param_2 + 0x430) = uVar6;
    *(undefined4 *)(param_2 + 0x434) = uVar7;
    *(undefined4 *)(param_2 + 0x434) = uVar8;
    *(undefined4 *)(param_2 + 0x438) = uVar9;
    *(undefined4 *)(param_2 + 0x43c) = uVar10;
    *(undefined4 *)(param_2 + 0x440) = uVar11;
    *(undefined4 *)(param_2 + 0x448) = *(undefined4 *)(param_3 + 0x448);
    param_2 = param_2 + 0x450;
    param_3 = param_3 + 0x450;
  }
  return 1;
}



// FUNCTION 147f3480c FUN_147f3480c body=59 status=ok
// SIG undefined FUN_147f3480c(void)

undefined8 FUN_147f3480c(longlong *param_1)

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



// FUNCTION 147f34858 FUN_147f34858 body=38 status=ok
// SIG undefined FUN_147f34858(void)

void FUN_147f34858(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x450) == '\x01') {
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0x450) = 0;
  }
  return;
}



// FUNCTION 147f348fe FUN_147f348fe body=63 status=ok
// SIG undefined FUN_147f348fe(void)

undefined1 FUN_147f348fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f34518(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 147f34966 FUN_147f34966 body=59 status=ok
// SIG undefined FUN_147f34966(void)

undefined8 FUN_147f34966(longlong *param_1)

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


