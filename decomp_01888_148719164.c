// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148719164 FUN_148719164 body=55 status=ok
// SIG undefined FUN_148719164(void)

void FUN_148719164(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65138 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65138 = FUN_140002ddd(FUN_146508495,uVar1,L"GbxSkillLatentAction_SpawnAtGpsLocation");
  }
  return;
}



// FUNCTION 148719246 FUN_148719246 body=75 status=ok
// SIG undefined FUN_148719246(void)

undefined1 FUN_148719246(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_14054d9c0(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487192ba FUN_1487192ba body=59 status=ok
// SIG undefined FUN_1487192ba(void)

undefined8 FUN_1487192ba(longlong *param_1)

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



// FUNCTION 148719300 FUN_148719300 body=34 status=ok
// SIG undefined FUN_148719300(void)

void FUN_148719300(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1487193d8(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148719374 FUN_148719374 body=43 status=ok
// SIG undefined FUN_148719374(void)

undefined8 FUN_148719374(undefined8 param_1,int param_2)

{
  FUN_1487193d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1487193a0 FUN_1487193a0 body=55 status=ok
// SIG undefined FUN_1487193a0(void)

void FUN_1487193a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65150 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65150 = FUN_140002ddd(FUN_1465084f4,uVar1,L"GbxSkillLibraryDef");
  }
  return;
}



// FUNCTION 1487193d8 FUN_1487193d8 body=75 status=ok
// SIG undefined FUN_1487193d8(void)

void FUN_1487193d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b256de0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148719424 FUN_148719424 body=104 status=ok
// SIG undefined FUN_148719424(void)

undefined8 FUN_148719424(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_14896fe38(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871948e FUN_14871948e body=28 status=ok
// SIG undefined FUN_14871948e(void)

undefined8 FUN_14871948e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14871951c FUN_14871951c body=95 status=ok
// SIG undefined FUN_14871951c(void)

undefined8 FUN_14871951c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      FUN_146130eee(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined1 *)(param_2 + 0x28 + lVar1) = *(undefined1 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487195a4 FUN_1487195a4 body=59 status=ok
// SIG undefined FUN_1487195a4(void)

undefined8 FUN_1487195a4(longlong *param_1)

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



// FUNCTION 148719644 FUN_148719644 body=34 status=ok
// SIG undefined FUN_148719644(void)

undefined8 FUN_148719644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148719666 FUN_148719666 body=55 status=ok
// SIG undefined FUN_148719666(void)

void FUN_148719666(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65168 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65168 = FUN_140002ddd(FUN_14650858b,uVar1,L"GbxSkillLibraryEntryResolver");
  }
  return;
}



// FUNCTION 148719716 FUN_148719716 body=54 status=ok
// SIG undefined FUN_148719716(void)

undefined1 FUN_148719716(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148719856(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148719774 FUN_148719774 body=59 status=ok
// SIG undefined FUN_148719774(void)

undefined8 FUN_148719774(longlong *param_1)

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



// FUNCTION 1487197ba FUN_1487197ba body=34 status=ok
// SIG undefined FUN_1487197ba(void)

void FUN_1487197ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145887382(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14871982a FUN_14871982a body=43 status=ok
// SIG undefined FUN_14871982a(void)

undefined8 FUN_14871982a(undefined8 param_1,int param_2)

{
  FUN_145887382();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 148719856 FUN_148719856 body=92 status=ok
// SIG undefined FUN_148719856(void)

longlong FUN_148719856(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  FUN_1487198b2(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 1487198b2 FUN_1487198b2 body=95 status=ok
// SIG undefined FUN_1487198b2(void)

undefined8 * FUN_1487198b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458873d9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148719912(param_1,iVar1);
      FUN_148719985(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148719912 FUN_148719912 body=115 status=ok
// SIG undefined FUN_148719912(void)

void FUN_148719912(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148719985 FUN_148719985 body=52 status=ok
// SIG undefined FUN_148719985(void)

void FUN_148719985(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487199ba(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 1487199ba FUN_1487199ba body=76 status=ok
// SIG undefined FUN_1487199ba(void)

undefined8 * FUN_1487199ba(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  if (param_2 != param_1) {
    FUN_148719a06(param_1,param_2);
  }
  param_1[3] = param_2[3];
  FUN_1487187e8(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 148719a06 FUN_148719a06 body=304 status=ok
// SIG undefined FUN_148719a06(void)

void FUN_148719a06(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148719b70 FUN_148719b70 body=103 status=ok
// SIG undefined FUN_148719b70(void)

undefined8 FUN_148719b70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + 0x28 + lVar6) = *(undefined4 *)(param_3 + 0x28 + lVar6);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148719c00 FUN_148719c00 body=59 status=ok
// SIG undefined FUN_148719c00(void)

undefined8 FUN_148719c00(longlong *param_1)

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



// FUNCTION 148719c46 FUN_148719c46 body=43 status=ok
// SIG undefined FUN_148719c46(void)

void FUN_148719c46(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148719cae FUN_148719cae body=28 status=ok
// SIG undefined FUN_148719cae(void)

undefined8 FUN_148719cae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148719d46 FUN_148719d46 body=59 status=ok
// SIG undefined FUN_148719d46(void)

undefined8 FUN_148719d46(longlong *param_1)

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



// FUNCTION 148719e50 FUN_148719e50 body=59 status=ok
// SIG undefined FUN_148719e50(void)

undefined8 FUN_148719e50(longlong *param_1)

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



// FUNCTION 148719ef0 FUN_148719ef0 body=34 status=ok
// SIG undefined FUN_148719ef0(void)

undefined8 FUN_148719ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148719f12 FUN_148719f12 body=55 status=ok
// SIG undefined FUN_148719f12(void)

void FUN_148719f12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb652e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb652e0 = FUN_140002ddd(FUN_146508b9d,uVar1,L"GbxSkillOwnerContextResolver");
  }
  return;
}



// FUNCTION 148719f7e FUN_148719f7e body=78 status=ok
// SIG undefined FUN_148719f7e(void)

undefined8 FUN_148719f7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148719ff4 FUN_148719ff4 body=59 status=ok
// SIG undefined FUN_148719ff4(void)

undefined8 FUN_148719ff4(longlong *param_1)

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



// FUNCTION 14871a03a FUN_14871a03a body=48 status=ok
// SIG undefined FUN_14871a03a(void)

void FUN_14871a03a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b256d10;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14871a0b4 FUN_14871a0b4 body=55 status=ok
// SIG undefined FUN_14871a0b4(void)

void FUN_14871a0b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65310 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65310 = FUN_140002ddd(FUN_146508c67,uVar1,L"GbxSkillParamValueResolver");
  }
  return;
}



// FUNCTION 14871a10c FUN_14871a10c body=104 status=ok
// SIG undefined FUN_14871a10c(void)

undefined8 FUN_14871a10c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb654b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871a1c0 FUN_14871a1c0 body=48 status=ok
// SIG undefined FUN_14871a1c0(void)

longlong FUN_14871a1c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_140e315e6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871a1fc FUN_14871a1fc body=56 status=ok
// SIG undefined FUN_14871a1fc(void)

void FUN_14871a1fc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014871a229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14871a24a FUN_14871a24a body=75 status=ok
// SIG undefined FUN_14871a24a(void)

undefined8 FUN_14871a24a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1401f3db8();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871a2be FUN_14871a2be body=59 status=ok
// SIG undefined FUN_14871a2be(void)

undefined8 FUN_14871a2be(longlong *param_1)

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



// FUNCTION 14871a304 FUN_14871a304 body=64 status=ok
// SIG undefined FUN_14871a304(void)

void FUN_14871a304(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14871a3ec FUN_14871a3ec body=120 status=ok
// SIG undefined FUN_14871a3ec(void)

undefined8 FUN_14871a3ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0x18;
    do {
      uVar4 = *(undefined8 *)(param_3 + -0x10 + lVar10);
      lVar5 = *(longlong *)(param_3 + -8 + lVar10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + -8 + lVar10);
      *(undefined8 *)(param_2 + -0x10 + lVar10) = uVar4;
      *(longlong *)(param_2 + -8 + lVar10) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(undefined1 *)(param_2 + 0x10 + lVar10) = *(undefined1 *)(param_3 + 0x10 + lVar10);
      puVar2 = (undefined4 *)(param_3 + lVar10);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      lVar10 = lVar10 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871a48c FUN_14871a48c body=59 status=ok
// SIG undefined FUN_14871a48c(void)

undefined8 FUN_14871a48c(longlong *param_1)

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



// FUNCTION 14871a4d2 FUN_14871a4d2 body=55 status=ok
// SIG undefined FUN_14871a4d2(void)

void FUN_14871a4d2(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b2629f0;
    plVar2 = (longlong *)param_2[2];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14871a558 FUN_14871a558 body=64 status=ok
// SIG undefined FUN_14871a558(void)

undefined8 * FUN_14871a558(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b2629f0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871a598 FUN_14871a598 body=55 status=ok
// SIG undefined FUN_14871a598(void)

void FUN_14871a598(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65470 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65470 = FUN_140002ddd(FUN_1465098ad,uVar1,L"GbxSkillService");
  }
  return;
}



// FUNCTION 14871a626 FUN_14871a626 body=110 status=ok
// SIG undefined FUN_14871a626(void)

undefined8 FUN_14871a626(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0x18;
    do {
      uVar4 = *(undefined8 *)(param_3 + -0x10 + lVar10);
      lVar5 = *(longlong *)(param_3 + -8 + lVar10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + -8 + lVar10);
      *(undefined8 *)(param_2 + -0x10 + lVar10) = uVar4;
      *(longlong *)(param_2 + -8 + lVar10) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      puVar2 = (undefined4 *)(param_3 + lVar10);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      lVar10 = lVar10 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871a6bc FUN_14871a6bc body=59 status=ok
// SIG undefined FUN_14871a6bc(void)

undefined8 FUN_14871a6bc(longlong *param_1)

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



// FUNCTION 14871a702 FUN_14871a702 body=55 status=ok
// SIG undefined FUN_14871a702(void)

void FUN_14871a702(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b258290;
    plVar2 = (longlong *)param_2[2];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14871a816 FUN_14871a816 body=142 status=ok
// SIG undefined FUN_14871a816(void)

undefined1 FUN_14871a816(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  longlong lVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    bVar16 = DAT_14c950c29;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar18);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x10 + lVar18);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x10 + lVar18);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar3 = (undefined4 *)(param_2 + lVar18);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      lVar17 = *(longlong *)(param_3 + 0x20 + lVar18);
      if ((bVar16 & 1) != 0) {
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar17 = *(longlong *)(param_3 + 0x20 + lVar18);
          bVar16 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar18;
      *(longlong *)(lVar1 + 0x20) = lVar17;
      puVar2 = (undefined8 *)(param_3 + 0x28 + lVar18);
      uVar13 = puVar2[1];
      puVar5 = (undefined8 *)(param_3 + 0x38 + lVar18);
      uVar14 = *puVar5;
      uVar15 = puVar5[1];
      *(undefined8 *)(lVar1 + 0x28) = *puVar2;
      *(undefined8 *)(lVar1 + 0x30) = uVar13;
      *(undefined8 *)(lVar1 + 0x38) = uVar14;
      *(undefined8 *)(lVar1 + 0x40) = uVar15;
      lVar18 = lVar18 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871a8cc FUN_14871a8cc body=59 status=ok
// SIG undefined FUN_14871a8cc(void)

undefined8 FUN_14871a8cc(longlong *param_1)

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



// FUNCTION 14871a99c FUN_14871a99c body=89 status=ok
// SIG undefined FUN_14871a99c(void)

undefined8 FUN_14871a99c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_14871aad2(param_2 + -0x18,param_3 + -0x18);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14009d848(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871aa1e FUN_14871aa1e body=59 status=ok
// SIG undefined FUN_14871aa1e(void)

undefined8 FUN_14871aa1e(longlong *param_1)

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



// FUNCTION 14871aa64 FUN_14871aa64 body=32 status=ok
// SIG undefined FUN_14871aa64(void)

void FUN_14871aa64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1418587a0(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14871aad2 FUN_14871aad2 body=93 status=ok
// SIG undefined FUN_14871aad2(void)

undefined8 * FUN_14871aad2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e0eb50(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14871ab30(param_1,iVar1);
      FUN_14871aba3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14871ab30 FUN_14871ab30 body=115 status=ok
// SIG undefined FUN_14871ab30(void)

void FUN_14871ab30(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14871aba3 FUN_14871aba3 body=60 status=ok
// SIG undefined FUN_14871aba3(void)

void FUN_14871aba3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14871abe0(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 14871abe0 FUN_14871abe0 body=243 status=ok
// SIG undefined FUN_14871abe0(void)

undefined8 * FUN_14871abe0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  if (param_2 != param_1) {
    FUN_140f86ba4(param_1 + 1,param_2 + 1);
  }
  FUN_1407b7224(param_1 + 4,param_2 + 4);
  FUN_1407b7224(param_1 + 6,param_2 + 6);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 9);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 10);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar8 = *(undefined4 *)(param_2 + 0xb);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  *(undefined4 *)(param_1 + 0xb) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar9;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  puVar10 = (undefined8 *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 2;
  }
  else {
    _Src = param_2 + 0xc;
    if (puVar10 != (undefined8 *)0x0) {
      _Src = puVar10;
    }
    FUN_140204e64(param_1 + 0xc,iVar1,0);
    puVar10 = (undefined8 *)param_1[0xd];
    if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
      puVar10 = param_1 + 0xc;
    }
    memcpy(puVar10,_Src,(longlong)iVar1 << 2);
  }
  param_1[0xf] = param_2[0xf];
  lVar2 = param_2[0x10];
  param_1[0x10] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return param_1;
}



// FUNCTION 14871ad62 FUN_14871ad62 body=59 status=ok
// SIG undefined FUN_14871ad62(void)

undefined8 FUN_14871ad62(longlong *param_1)

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



// FUNCTION 14871ae02 FUN_14871ae02 body=29 status=ok
// SIG undefined FUN_14871ae02(void)

undefined8 FUN_14871ae02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871ae20 FUN_14871ae20 body=55 status=ok
// SIG undefined FUN_14871ae20(void)

void FUN_14871ae20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb654f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb654f8 = FUN_140002ddd(FUN_14185876e,uVar1,L"GbxSkillStateConditionData");
  }
  return;
}



// FUNCTION 14871ae58 FUN_14871ae58 body=54 status=ok
// SIG undefined FUN_14871ae58(void)

undefined8 * FUN_14871ae58(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Skills/GbxSkillStateConditionData.h"
                ,0x23,L"Pure virtual not implemented (%s)",L"DoCreateCondition");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14871aef4 FUN_14871aef4 body=54 status=ok
// SIG undefined FUN_14871aef4(void)

undefined1 FUN_14871aef4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14871b108(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14871af52 FUN_14871af52 body=59 status=ok
// SIG undefined FUN_14871af52(void)

undefined8 FUN_14871af52(longlong *param_1)

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



// FUNCTION 14871af98 FUN_14871af98 body=34 status=ok
// SIG undefined FUN_14871af98(void)

void FUN_14871af98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14871b066(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14871b008 FUN_14871b008 body=38 status=ok
// SIG undefined FUN_14871b008(void)

undefined8 FUN_14871b008(undefined8 param_1,int param_2)

{
  FUN_14871b066();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871b02e FUN_14871b02e body=55 status=ok
// SIG undefined FUN_14871b02e(void)

void FUN_14871b02e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65510 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65510 = FUN_140002ddd(FUN_146509bf7,uVar1,L"GbxSkillStateConditionProvider");
  }
  return;
}



// FUNCTION 14871b066 FUN_14871b066 body=88 status=ok
// SIG undefined FUN_14871b066(void)

void FUN_14871b066(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b2629c0;
  FUN_14871b0be(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b2629f0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014871b0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14871b0be FUN_14871b0be body=73 status=ok
// SIG undefined FUN_14871b0be(void)

void FUN_14871b0be(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14871b108 FUN_14871b108 body=98 status=ok
// SIG undefined FUN_14871b108(void)

longlong FUN_14871b108(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  FUN_14871b16a(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 14871b16a FUN_14871b16a body=95 status=ok
// SIG undefined FUN_14871b16a(void)

undefined8 * FUN_14871b16a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14871b0be(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14871b1ca(param_1,iVar1);
      FUN_14871b23d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14871b1ca FUN_14871b1ca body=115 status=ok
// SIG undefined FUN_14871b1ca(void)

void FUN_14871b1ca(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14871b23d FUN_14871b23d body=55 status=ok
// SIG undefined FUN_14871b23d(void)

void FUN_14871b23d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
      *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14871b2ac FUN_14871b2ac body=75 status=ok
// SIG undefined FUN_14871b2ac(void)

undefined1 FUN_14871b2ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871b320 FUN_14871b320 body=59 status=ok
// SIG undefined FUN_14871b320(void)

undefined8 FUN_14871b320(longlong *param_1)

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



// FUNCTION 14871b366 FUN_14871b366 body=32 status=ok
// SIG undefined FUN_14871b366(void)

void FUN_14871b366(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14871b3c0(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14871b3c0 FUN_14871b3c0 body=85 status=ok
// SIG undefined FUN_14871b3c0(void)

void FUN_14871b3c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b262a20;
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



// FUNCTION 14871b416 FUN_14871b416 body=28 status=ok
// SIG undefined FUN_14871b416(void)

undefined8 FUN_14871b416(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14871b478 FUN_14871b478 body=68 status=ok
// SIG undefined FUN_14871b478(void)

undefined1 FUN_14871b478(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14871b578(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871b4e4 FUN_14871b4e4 body=59 status=ok
// SIG undefined FUN_14871b4e4(void)

undefined8 FUN_14871b4e4(longlong *param_1)

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



// FUNCTION 14871b578 FUN_14871b578 body=84 status=ok
// SIG undefined FUN_14871b578(void)

longlong * FUN_14871b578(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14871b5fa FUN_14871b5fa body=68 status=ok
// SIG undefined FUN_14871b5fa(void)

undefined1 FUN_14871b5fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14871b746(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871b666 FUN_14871b666 body=59 status=ok
// SIG undefined FUN_14871b666(void)

undefined8 FUN_14871b666(longlong *param_1)

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



// FUNCTION 14871b6ac FUN_14871b6ac body=32 status=ok
// SIG undefined FUN_14871b6ac(void)

void FUN_14871b6ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14871b70e(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14871b70e FUN_14871b70e body=56 status=ok
// SIG undefined FUN_14871b70e(void)

void FUN_14871b70e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b25e6c0;
  FUN_140a271cf(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14871b746 FUN_14871b746 body=93 status=ok
// SIG undefined FUN_14871b746(void)

undefined8 * FUN_14871b746(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a271cf(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14871b7a4(param_1,iVar1);
      FUN_14871b817(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14871b7a4 FUN_14871b7a4 body=115 status=ok
// SIG undefined FUN_14871b7a4(void)

void FUN_14871b7a4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14871b817 FUN_14871b817 body=52 status=ok
// SIG undefined FUN_14871b817(void)

void FUN_14871b817(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14871b8cc FUN_14871b8cc body=59 status=ok
// SIG undefined FUN_14871b8cc(void)

undefined8 FUN_14871b8cc(longlong *param_1)

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



// FUNCTION 14871b96c FUN_14871b96c body=55 status=ok
// SIG undefined FUN_14871b96c(void)

void FUN_14871b96c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65570 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65570 = FUN_140002ddd(FUN_146509e19,uVar1,L"GbxSkillStateConditionData_Cinematic");
  }
  return;
}



// FUNCTION 14871b9a4 FUN_14871b9a4 body=51 status=ok
// SIG undefined FUN_14871b9a4(void)

void FUN_14871b9a4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *param_2 = &PTR_FUN_14b25e9c0;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0xf) = 0;
  return;
}



// FUNCTION 14871ba2c FUN_14871ba2c body=76 status=ok
// SIG undefined FUN_14871ba2c(void)

undefined1 FUN_14871ba2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148686d7e(param_2,param_3);
      param_3 = param_3 + 0x98;
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871baa0 FUN_14871baa0 body=59 status=ok
// SIG undefined FUN_14871baa0(void)

undefined8 FUN_14871baa0(longlong *param_1)

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



// FUNCTION 14871baec FUN_14871baec body=79 status=ok
// SIG undefined FUN_14871baec(void)

void FUN_14871baec(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b25e9c0;
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 0x12)])(param_2 + 0xb)
    ;
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 9)])(param_2 + 2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 14871bb8a FUN_14871bb8a body=57 status=ok
// SIG undefined FUN_14871bb8a(void)

void FUN_14871bb8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65588 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65588 = FUN_140002ddd(FUN_146509eaf,uVar1,L"GbxSkillStateConditionData_Comparison");
  }
  return;
}



// FUNCTION 14871bc52 FUN_14871bc52 body=59 status=ok
// SIG undefined FUN_14871bc52(void)

undefined8 FUN_14871bc52(longlong *param_1)

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



// FUNCTION 14871bcf2 FUN_14871bcf2 body=55 status=ok
// SIG undefined FUN_14871bcf2(void)

void FUN_14871bcf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb655a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb655a0 = FUN_140002ddd(FUN_146509f45,uVar1,L"GbxSkillStateConditionData_Constant");
  }
  return;
}



// FUNCTION 14871bd62 FUN_14871bd62 body=87 status=ok
// SIG undefined FUN_14871bd62(void)

undefined1 FUN_14871bd62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_145c56af0(param_2 + -0x18,param_3 + -0x18);
      FUN_145c43818(param_2,param_3);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871bde2 FUN_14871bde2 body=59 status=ok
// SIG undefined FUN_14871bde2(void)

undefined8 FUN_14871bde2(longlong *param_1)

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



// FUNCTION 14871beb0 FUN_14871beb0 body=86 status=ok
// SIG undefined FUN_14871beb0(void)

undefined8 FUN_14871beb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1458170ae(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_3 + 0x14);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871bf2e FUN_14871bf2e body=59 status=ok
// SIG undefined FUN_14871bf2e(void)

undefined8 FUN_14871bf2e(longlong *param_1)

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



// FUNCTION 14871bf74 FUN_14871bf74 body=48 status=ok
// SIG undefined FUN_14871bf74(void)

void FUN_14871bf74(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b25ef50;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14871bfe6 FUN_14871bfe6 body=55 status=ok
// SIG undefined FUN_14871bfe6(void)

void FUN_14871bfe6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb655e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb655e8 =
         FUN_140002ddd(FUN_14650a0a1,uVar1,L"GbxSkillStateConditionData_GbxCharacterMovement");
  }
  return;
}



// FUNCTION 14871c07c FUN_14871c07c body=95 status=ok
// SIG undefined FUN_14871c07c(void)

undefined8 FUN_14871c07c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_14871c1de(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 0x28 + lVar1) = *(undefined8 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871c104 FUN_14871c104 body=59 status=ok
// SIG undefined FUN_14871c104(void)

undefined8 FUN_14871c104(longlong *param_1)

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



// FUNCTION 14871c1a4 FUN_14871c1a4 body=57 status=ok
// SIG undefined FUN_14871c1a4(void)

void FUN_14871c1a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65600 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65600 =
         FUN_140002ddd(FUN_14650a137,uVar1,L"GbxSkillStateConditionData_ManagedResourceCount");
  }
  return;
}



// FUNCTION 14871c1de FUN_14871c1de body=84 status=ok
// SIG undefined FUN_14871c1de(void)

longlong * FUN_14871c1de(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14871c2d6 FUN_14871c2d6 body=95 status=ok
// SIG undefined FUN_14871c2d6(void)

undefined1 FUN_14871c2d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined1 *)(param_2 + -0x28) = *(undefined1 *)(param_3 + -0x28);
      FUN_14871c1de(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871c35e FUN_14871c35e body=59 status=ok
// SIG undefined FUN_14871c35e(void)

undefined8 FUN_14871c35e(longlong *param_1)

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



// FUNCTION 14871c40a FUN_14871c40a body=55 status=ok
// SIG undefined FUN_14871c40a(void)

void FUN_14871c40a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65618 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65618 =
         FUN_140002ddd(FUN_14650a1cd,uVar1,L"GbxSkillStateConditionData_ManagedResourceCountEx");
  }
  return;
}



// FUNCTION 14871c46e FUN_14871c46e body=68 status=ok
// SIG undefined FUN_14871c46e(void)

undefined1 FUN_14871c46e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14871b746(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871c4da FUN_14871c4da body=59 status=ok
// SIG undefined FUN_14871c4da(void)

undefined8 FUN_14871c4da(longlong *param_1)

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



// FUNCTION 14871c520 FUN_14871c520 body=32 status=ok
// SIG undefined FUN_14871c520(void)

void FUN_14871c520(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14871c5bc(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14871c582 FUN_14871c582 body=57 status=ok
// SIG undefined FUN_14871c582(void)

void FUN_14871c582(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65630 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65630 = FUN_140002ddd(FUN_14650a263,uVar1,L"GbxSkillStateConditionData_Or");
  }
  return;
}



// FUNCTION 14871c5bc FUN_14871c5bc body=55 status=ok
// SIG undefined FUN_14871c5bc(void)

void FUN_14871c5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b25f3d0;
  FUN_140a271cf(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14871c690 FUN_14871c690 body=59 status=ok
// SIG undefined FUN_14871c690(void)

undefined8 FUN_14871c690(longlong *param_1)

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



// FUNCTION 14871c730 FUN_14871c730 body=29 status=ok
// SIG undefined FUN_14871c730(void)

undefined8 FUN_14871c730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871c74e FUN_14871c74e body=55 status=ok
// SIG undefined FUN_14871c74e(void)

void FUN_14871c74e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65660 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65660 = FUN_140002ddd(FUN_14650a329,uVar1,L"GbxSkillStateConditionData_Possession");
  }
  return;
}



// FUNCTION 14871c7ba FUN_14871c7ba body=68 status=ok
// SIG undefined FUN_14871c7ba(void)

undefined1 FUN_14871c7ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871c826 FUN_14871c826 body=59 status=ok
// SIG undefined FUN_14871c826(void)

undefined8 FUN_14871c826(longlong *param_1)

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



// FUNCTION 14871c86c FUN_14871c86c body=32 status=ok
// SIG undefined FUN_14871c86c(void)

void FUN_14871c86c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14871c906(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14871c8ce FUN_14871c8ce body=55 status=ok
// SIG undefined FUN_14871c8ce(void)

void FUN_14871c8ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65678 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65678 = FUN_140002ddd(FUN_14650a3bf,uVar1,L"GbxSkillStateConditionData_Progression");
  }
  return;
}



// FUNCTION 14871c906 FUN_14871c906 body=65 status=ok
// SIG undefined FUN_14871c906(void)

void FUN_14871c906(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b25f800;
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x00014871c943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14871ca04 FUN_14871ca04 body=59 status=ok
// SIG undefined FUN_14871ca04(void)

undefined8 FUN_14871ca04(longlong *param_1)

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



// FUNCTION 14871cb72 FUN_14871cb72 body=59 status=ok
// SIG undefined FUN_14871cb72(void)

undefined8 FUN_14871cb72(longlong *param_1)

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



// FUNCTION 14871cc06 FUN_14871cc06 body=57 status=ok
// SIG undefined FUN_14871cc06(void)

void FUN_14871cc06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb656c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb656c0 = FUN_140002ddd(FUN_14650a51b,uVar1,L"GbxSkillStateConditionData_ResourcePool");
  }
  return;
}



// FUNCTION 14871cc40 FUN_14871cc40 body=37 status=ok
// SIG undefined FUN_14871cc40(void)

undefined8 FUN_14871cc40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14011c2be(param_1 + 0x20);
  FUN_1410a642a(param_2,uVar1);
  return param_2;
}



// FUNCTION 14871cccc FUN_14871cccc body=82 status=ok
// SIG undefined FUN_14871cccc(void)

undefined8 FUN_14871cccc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14583573e(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871cd46 FUN_14871cd46 body=59 status=ok
// SIG undefined FUN_14871cd46(void)

undefined8 FUN_14871cd46(longlong *param_1)

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



// FUNCTION 14871cde6 FUN_14871cde6 body=55 status=ok
// SIG undefined FUN_14871cde6(void)

void FUN_14871cde6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb656d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb656d8 =
         FUN_140002ddd(FUN_14650a5b1,uVar1,L"GbxSkillStateConditionData_ResourcePoolAlias");
  }
  return;
}



// FUNCTION 14871ce56 FUN_14871ce56 body=95 status=ok
// SIG undefined FUN_14871ce56(void)

undefined1 FUN_14871ce56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_148687156(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined1 *)(param_2 + 0x28 + lVar1) = *(undefined1 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871cede FUN_14871cede body=59 status=ok
// SIG undefined FUN_14871cede(void)

undefined8 FUN_14871cede(longlong *param_1)

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



// FUNCTION 14871cf72 FUN_14871cf72 body=57 status=ok
// SIG undefined FUN_14871cf72(void)

void FUN_14871cf72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb656f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb656f0 = FUN_140002ddd(FUN_14650a647,uVar1,L"GbxSkillStateConditionData_SkillCondition");
  }
  return;
}



// FUNCTION 14871d054 FUN_14871d054 body=59 status=ok
// SIG undefined FUN_14871d054(void)

undefined8 FUN_14871d054(longlong *param_1)

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



// FUNCTION 14871d0f4 FUN_14871d0f4 body=55 status=ok
// SIG undefined FUN_14871d0f4(void)

void FUN_14871d0f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65708 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65708 = FUN_140002ddd(FUN_14650a6dd,uVar1,L"GbxSkillStateConditionData_SkillLocks");
  }
  return;
}



// FUNCTION 14871d184 FUN_14871d184 body=84 status=ok
// SIG undefined FUN_14871d184(void)

undefined8 FUN_14871d184(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871d200 FUN_14871d200 body=59 status=ok
// SIG undefined FUN_14871d200(void)

undefined8 FUN_14871d200(longlong *param_1)

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



// FUNCTION 14871d246 FUN_14871d246 body=48 status=ok
// SIG undefined FUN_14871d246(void)

void FUN_14871d246(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b260270;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 14871d2c4 FUN_14871d2c4 body=55 status=ok
// SIG undefined FUN_14871d2c4(void)

void FUN_14871d2c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65720 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65720 =
         FUN_140002ddd(FUN_14650a773,uVar1,L"GbxSkillStateConditionData_SkillParam_IsDefault");
  }
  return;
}



// FUNCTION 14871d3b6 FUN_14871d3b6 body=59 status=ok
// SIG undefined FUN_14871d3b6(void)

undefined8 FUN_14871d3b6(longlong *param_1)

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



// FUNCTION 14871d4e4 FUN_14871d4e4 body=59 status=ok
// SIG undefined FUN_14871d4e4(void)

undefined8 FUN_14871d4e4(longlong *param_1)

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



// FUNCTION 14871d578 FUN_14871d578 body=57 status=ok
// SIG undefined FUN_14871d578(void)

void FUN_14871d578(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65750 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65750 = FUN_140002ddd(FUN_14650a89f,uVar1,L"GbxSkillStateConditionData_SkillTimer");
  }
  return;
}



// FUNCTION 14871d5ea FUN_14871d5ea body=95 status=ok
// SIG undefined FUN_14871d5ea(void)

undefined8 FUN_14871d5ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_1486f89f0(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 0x28 + lVar1) = *(undefined8 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871d672 FUN_14871d672 body=59 status=ok
// SIG undefined FUN_14871d672(void)

undefined8 FUN_14871d672(longlong *param_1)

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



// FUNCTION 14871d70e FUN_14871d70e body=55 status=ok
// SIG undefined FUN_14871d70e(void)

void FUN_14871d70e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65768 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65768 =
         FUN_140002ddd(FUN_14650a935,uVar1,L"GbxSkillStateCondition_StateMachineRegister");
  }
  return;
}



// FUNCTION 14871d7b4 FUN_14871d7b4 body=95 status=ok
// SIG undefined FUN_14871d7b4(void)

undefined1 FUN_14871d7b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_14871d932(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined1 *)(param_2 + 0x28 + lVar1) = *(undefined1 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871d83c FUN_14871d83c body=59 status=ok
// SIG undefined FUN_14871d83c(void)

undefined8 FUN_14871d83c(longlong *param_1)

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



// FUNCTION 14871d8dc FUN_14871d8dc body=29 status=ok
// SIG undefined FUN_14871d8dc(void)

undefined8 FUN_14871d8dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871d8fa FUN_14871d8fa body=55 status=ok
// SIG undefined FUN_14871d8fa(void)

void FUN_14871d8fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65780 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65780 = FUN_140002ddd(FUN_14650a9cb,uVar1,L"GbxSkillStateCondition_StateMachineState");
  }
  return;
}



// FUNCTION 14871d932 FUN_14871d932 body=84 status=ok
// SIG undefined FUN_14871d932(void)

longlong * FUN_14871d932(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14871d9c0 FUN_14871d9c0 body=95 status=ok
// SIG undefined FUN_14871d9c0(void)

undefined8 FUN_14871d9c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      FUN_14870773e(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 0x28 + lVar1) = *(undefined8 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871da48 FUN_14871da48 body=59 status=ok
// SIG undefined FUN_14871da48(void)

undefined8 FUN_14871da48(longlong *param_1)

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



// FUNCTION 14871dae4 FUN_14871dae4 body=57 status=ok
// SIG undefined FUN_14871dae4(void)

void FUN_14871dae4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65798 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65798 = FUN_140002ddd(FUN_14650aa61,uVar1,L"GbxSkillStateConditionData_TargetList");
  }
  return;
}



// FUNCTION 14871dbce FUN_14871dbce body=95 status=ok
// SIG undefined FUN_14871dbce(void)

undefined1 FUN_14871dbce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined1 *)(param_2 + -0x28) = *(undefined1 *)(param_3 + -0x28);
      FUN_14870773e(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871dc56 FUN_14871dc56 body=59 status=ok
// SIG undefined FUN_14871dc56(void)

undefined8 FUN_14871dc56(longlong *param_1)

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



// FUNCTION 14871dd02 FUN_14871dd02 body=31 status=ok
// SIG undefined FUN_14871dd02(void)

undefined8 FUN_14871dd02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871dd22 FUN_14871dd22 body=57 status=ok
// SIG undefined FUN_14871dd22(void)

void FUN_14871dd22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb657b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb657b0 = FUN_140002ddd(FUN_14650aaf7,uVar1,L"GbxSkillStateConditionData_TargetListEx");
  }
  return;
}



// FUNCTION 14871dd86 FUN_14871dd86 body=73 status=ok
// SIG undefined FUN_14871dd86(void)

undefined1 FUN_14871dd86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_1401f3db8();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871ddf8 FUN_14871ddf8 body=59 status=ok
// SIG undefined FUN_14871ddf8(void)

undefined8 FUN_14871ddf8(longlong *param_1)

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



// FUNCTION 14871de3e FUN_14871de3e body=64 status=ok
// SIG undefined FUN_14871de3e(void)

void FUN_14871de3e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14871defc FUN_14871defc body=123 status=ok
// SIG undefined FUN_14871defc(void)

undefined8 FUN_14871defc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      lVar1 = *(longlong *)(param_3 + 0x18 + lVar2);
      if ((*(longlong *)(param_2 + 0x18 + lVar2) != lVar1) ||
         (*(int *)(param_2 + 0x20 + lVar2) != *(int *)(param_3 + 0x20 + lVar2))) {
        *(longlong *)(param_2 + 0x18 + lVar2) = lVar1;
        *(undefined4 *)(param_2 + 0x20 + lVar2) = *(undefined4 *)(param_3 + 0x20 + lVar2);
        *(undefined8 *)(param_2 + 0x28 + lVar2) = 0;
      }
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871dfa0 FUN_14871dfa0 body=59 status=ok
// SIG undefined FUN_14871dfa0(void)

undefined8 FUN_14871dfa0(longlong *param_1)

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



// FUNCTION 14871dfe6 FUN_14871dfe6 body=43 status=ok
// SIG undefined FUN_14871dfe6(void)

void FUN_14871dfe6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14871e04e FUN_14871e04e body=28 status=ok
// SIG undefined FUN_14871e04e(void)

undefined8 FUN_14871e04e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14871e0d4 FUN_14871e0d4 body=54 status=ok
// SIG undefined FUN_14871e0d4(void)

undefined1 FUN_14871e0d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14871e2e8(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14871e132 FUN_14871e132 body=59 status=ok
// SIG undefined FUN_14871e132(void)

undefined8 FUN_14871e132(longlong *param_1)

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



// FUNCTION 14871e178 FUN_14871e178 body=34 status=ok
// SIG undefined FUN_14871e178(void)

void FUN_14871e178(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14871e246(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14871e1e8 FUN_14871e1e8 body=38 status=ok
// SIG undefined FUN_14871e1e8(void)

undefined8 FUN_14871e1e8(undefined8 param_1,int param_2)

{
  FUN_14871e246();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871e20e FUN_14871e20e body=55 status=ok
// SIG undefined FUN_14871e20e(void)

void FUN_14871e20e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb657f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb657f8 = FUN_140002ddd(FUN_14650ac25,uVar1,L"GbxSkillSharedAttributeEffects");
  }
  return;
}



// FUNCTION 14871e246 FUN_14871e246 body=88 status=ok
// SIG undefined FUN_14871e246(void)

void FUN_14871e246(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b262a80;
  FUN_14871e29e(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014871e293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14871e29e FUN_14871e29e body=73 status=ok
// SIG undefined FUN_14871e29e(void)

void FUN_14871e29e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14871e2e8 FUN_14871e2e8 body=92 status=ok
// SIG undefined FUN_14871e2e8(void)

longlong FUN_14871e2e8(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  FUN_14871e344(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 14871e344 FUN_14871e344 body=95 status=ok
// SIG undefined FUN_14871e344(void)

undefined8 * FUN_14871e344(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14871e29e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14871e3a4(param_1,iVar1);
      FUN_14871e406(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14871e3a4 FUN_14871e3a4 body=98 status=ok
// SIG undefined FUN_14871e3a4(void)

void FUN_14871e3a4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14871e406 FUN_14871e406 body=65 status=ok
// SIG undefined FUN_14871e406(void)

void FUN_14871e406(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x18 + lVar2);
      *(longlong *)(param_1 + 0x18 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14871e4fa FUN_14871e4fa body=106 status=ok
// SIG undefined FUN_14871e4fa(void)

undefined8 FUN_14871e4fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      FUN_1470c5506(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined2 *)(param_2 + 0x80 + lVar1) = *(undefined2 *)(param_3 + 0x80 + lVar1);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871e58c FUN_14871e58c body=59 status=ok
// SIG undefined FUN_14871e58c(void)

undefined8 FUN_14871e58c(longlong *param_1)

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



// FUNCTION 14871e638 FUN_14871e638 body=29 status=ok
// SIG undefined FUN_14871e638(void)

undefined8 FUN_14871e638(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871e656 FUN_14871e656 body=55 status=ok
// SIG undefined FUN_14871e656(void)

void FUN_14871e656(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65828 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65828 =
         FUN_140002ddd(FUN_14650aceb,uVar1,L"GbxSkillStateMachineStateAction_AddAttributeEffect");
  }
  return;
}



// FUNCTION 14871e68e FUN_14871e68e body=32 status=ok
// SIG undefined FUN_14871e68e(void)

undefined8 FUN_14871e68e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGbxSkillStateMachineStateAction");
  return param_2;
}



// FUNCTION 14871e742 FUN_14871e742 body=59 status=ok
// SIG undefined FUN_14871e742(void)

undefined8 FUN_14871e742(longlong *param_1)

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



// FUNCTION 14871e7e2 FUN_14871e7e2 body=29 status=ok
// SIG undefined FUN_14871e7e2(void)

undefined8 FUN_14871e7e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871e800 FUN_14871e800 body=55 status=ok
// SIG undefined FUN_14871e800(void)

void FUN_14871e800(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65840 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65840 =
         FUN_140002ddd(FUN_14650ad81,uVar1,L"GbxSkillStateMachineStateAction_RemoveAttributeEffect")
    ;
  }
  return;
}



// FUNCTION 14871e8ea FUN_14871e8ea body=106 status=ok
// SIG undefined FUN_14871e8ea(void)

undefined8 FUN_14871e8ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      FUN_1470c5506(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined2 *)(param_2 + 0x80 + lVar1) = *(undefined2 *)(param_3 + 0x80 + lVar1);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871e97c FUN_14871e97c body=59 status=ok
// SIG undefined FUN_14871e97c(void)

undefined8 FUN_14871e97c(longlong *param_1)

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



// FUNCTION 14871ea28 FUN_14871ea28 body=29 status=ok
// SIG undefined FUN_14871ea28(void)

undefined8 FUN_14871ea28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871ea46 FUN_14871ea46 body=55 status=ok
// SIG undefined FUN_14871ea46(void)

void FUN_14871ea46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65858 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65858 =
         FUN_140002ddd(FUN_14650ae17,uVar1,L"GbxSkillStateMachineStateAction_ToggleAttributeEffect")
    ;
  }
  return;
}



// FUNCTION 14871eab8 FUN_14871eab8 body=43 status=ok
// SIG undefined FUN_14871eab8(void)

void FUN_14871eab8(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14871eafa FUN_14871eafa body=101 status=ok
// SIG undefined FUN_14871eafa(void)

undefined8 FUN_14871eafa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_144983130(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871eb88 FUN_14871eb88 body=59 status=ok
// SIG undefined FUN_14871eb88(void)

undefined8 FUN_14871eb88(longlong *param_1)

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



// FUNCTION 14871ebce FUN_14871ebce body=47 status=ok
// SIG undefined FUN_14871ebce(void)

void FUN_14871ebce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_144a2da94(param_2 + 0x28);
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14871ec9c FUN_14871ec9c body=81 status=ok
// SIG undefined FUN_14871ec9c(void)

undefined1 FUN_14871ec9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1486f8992(param_2,param_3);
      FUN_14871ee04(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871ed16 FUN_14871ed16 body=59 status=ok
// SIG undefined FUN_14871ed16(void)

undefined8 FUN_14871ed16(longlong *param_1)

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



// FUNCTION 14871ed5c FUN_14871ed5c body=34 status=ok
// SIG undefined FUN_14871ed5c(void)

void FUN_14871ed5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145a2505a(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14871edcc FUN_14871edcc body=55 status=ok
// SIG undefined FUN_14871edcc(void)

void FUN_14871edcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65888 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65888 =
         FUN_140002ddd(FUN_14650af43,uVar1,L"GbxSkillStateMachineStateAction_GbxSkillParams");
  }
  return;
}



// FUNCTION 14871ee04 FUN_14871ee04 body=95 status=ok
// SIG undefined FUN_14871ee04(void)

undefined8 * FUN_14871ee04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a250ad(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14871ee64(param_1,iVar1);
      FUN_14871eed7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14871ee64 FUN_14871ee64 body=115 status=ok
// SIG undefined FUN_14871ee64(void)

void FUN_14871ee64(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14871eed7 FUN_14871eed7 body=52 status=ok
// SIG undefined FUN_14871eed7(void)

void FUN_14871eed7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14871ef0c(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 14871ef0c FUN_14871ef0c body=129 status=ok
// SIG undefined FUN_14871ef0c(void)

undefined8 * FUN_14871ef0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  FUN_14034cca6(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 14871f040 FUN_14871f040 body=59 status=ok
// SIG undefined FUN_14871f040(void)

undefined8 FUN_14871f040(longlong *param_1)

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



// FUNCTION 14871f0e0 FUN_14871f0e0 body=55 status=ok
// SIG undefined FUN_14871f0e0(void)

void FUN_14871f0e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb658a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb658a0 =
         FUN_140002ddd(FUN_14650afd9,uVar1,L"GbxSkillStateMachineStateAction_GbxSkillTimer");
  }
  return;
}



// FUNCTION 14871f1a6 FUN_14871f1a6 body=59 status=ok
// SIG undefined FUN_14871f1a6(void)

undefined8 FUN_14871f1a6(longlong *param_1)

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



// FUNCTION 14871f246 FUN_14871f246 body=29 status=ok
// SIG undefined FUN_14871f246(void)

undefined8 FUN_14871f246(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871f264 FUN_14871f264 body=55 status=ok
// SIG undefined FUN_14871f264(void)

void FUN_14871f264(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb658d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb658d0 = FUN_140002ddd(FUN_14650b09f,uVar1,L"GbxSkillStateMachineStateAction_MachineOp");
  }
  return;
}



// FUNCTION 14871f2dc FUN_14871f2dc body=73 status=ok
// SIG undefined FUN_14871f2dc(void)

undefined1 FUN_14871f2dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_1411ef922();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14871f34e FUN_14871f34e body=59 status=ok
// SIG undefined FUN_14871f34e(void)

undefined8 FUN_14871f34e(longlong *param_1)

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



// FUNCTION 14871f394 FUN_14871f394 body=38 status=ok
// SIG undefined FUN_14871f394(void)

void FUN_14871f394(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14871f46c FUN_14871f46c body=59 status=ok
// SIG undefined FUN_14871f46c(void)

undefined8 FUN_14871f46c(longlong *param_1)

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



// FUNCTION 14871f4b2 FUN_14871f4b2 body=34 status=ok
// SIG undefined FUN_14871f4b2(void)

void FUN_14871f4b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1457e7422(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14871f522 FUN_14871f522 body=55 status=ok
// SIG undefined FUN_14871f522(void)

void FUN_14871f522(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65918 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65918 = FUN_140002ddd(FUN_14650b1fb,uVar1,L"GbxSkillStateMachineStateAction_RegisterOp")
    ;
  }
  return;
}



// FUNCTION 14871f5f4 FUN_14871f5f4 body=59 status=ok
// SIG undefined FUN_14871f5f4(void)

undefined8 FUN_14871f5f4(longlong *param_1)

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



// FUNCTION 14871f694 FUN_14871f694 body=29 status=ok
// SIG undefined FUN_14871f694(void)

undefined8 FUN_14871f694(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14871f6b2 FUN_14871f6b2 body=55 status=ok
// SIG undefined FUN_14871f6b2(void)

void FUN_14871f6b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65948 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65948 =
         FUN_140002ddd(FUN_14650b2c1,uVar1,L"GbxSkillStateMachineStateAction_ResourcePoolBase");
  }
  return;
}



// FUNCTION 14871f6ee FUN_14871f6ee body=32 status=ok
// SIG undefined FUN_14871f6ee(void)

undefined8 FUN_14871f6ee(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149e1423e);
  return param_2;
}



// FUNCTION 14871f7e0 FUN_14871f7e0 body=59 status=ok
// SIG undefined FUN_14871f7e0(void)

undefined8 FUN_14871f7e0(longlong *param_1)

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



// FUNCTION 14871f880 FUN_14871f880 body=55 status=ok
// SIG undefined FUN_14871f880(void)

void FUN_14871f880(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65960 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65960 =
         FUN_140002ddd(FUN_14650b357,uVar1,L"GbxSkillStateMachineStateAction_ResourcePool");
  }
  return;
}



// FUNCTION 14871f91c FUN_14871f91c body=59 status=ok
// SIG undefined FUN_14871f91c(void)

undefined8 FUN_14871f91c(longlong *param_1)

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



// FUNCTION 14871f9b0 FUN_14871f9b0 body=55 status=ok
// SIG undefined FUN_14871f9b0(void)

void FUN_14871f9b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65978 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65978 =
         FUN_140002ddd(FUN_14650b3ed,uVar1,L"GbxSkillStateMachineStateAction_ResourcePoolAlias");
  }
  return;
}



// FUNCTION 14871f9f8 FUN_14871f9f8 body=558 status=ok
// SIG undefined FUN_14871f9f8(void)

void FUN_14871f9f8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  bVar2 = local_6c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_68;
  uVar1 = FUN_14477b664(uStack_60);
  local_80 = FUN_14477b664(uVar1);
  local_78 = local_58;
  local_a0 = local_48;
  uVar1 = FUN_14477b664(uStack_40);
  local_98 = FUN_14477b664(uVar1);
  local_90 = local_38;
  FUN_143e352ce(local_28,&local_a0,&local_88,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871fc2e FUN_14871fc2e body=295 status=ok
// SIG undefined FUN_14871fc2e(void)

void FUN_14871fc2e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_148986ed4(local_20,&local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871fd5c FUN_14871fd5c body=230 status=ok
// SIG undefined FUN_14871fd5c(void)

void FUN_14871fd5c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
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
  FUN_148986dee(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14871fe44 FUN_14871fe44 body=687 status=ok
// SIG undefined FUN_14871fe44(void)

void FUN_14871fe44(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_3a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0;
  lStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68 = lStack_48;
  if ((lStack_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_88 = &local_3a;
  if (puVar2 != (undefined1 *)0x0) {
    local_88 = puVar2;
  }
  puVar2 = &local_39;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_80 = &local_78;
  FUN_148986a70(local_28,local_30,local_38,puVar2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487200f4 FUN_1487200f4 body=453 status=ok
// SIG undefined FUN_1487200f4(void)

void FUN_1487200f4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_58;
  uVar1 = FUN_14477b664(uStack_50);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_48;
  local_88 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_80 = FUN_14477b664(uVar1);
  local_78 = local_28;
  FUN_148986fc0(local_20,&local_88,&local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487202c8 FUN_1487202c8 body=102 status=ok
// SIG undefined FUN_1487202c8(void)

void FUN_1487202c8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148720336 FUN_148720336 body=363 status=ok
// SIG undefined FUN_148720336(void)

void FUN_148720336(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x19105;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_40;
  local_58 = local_38;
  local_50 = 0;
  uVar1 = FUN_1489913b4(local_28,&local_60,local_48);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487204a2 FUN_1487204a2 body=273 status=ok
// SIG undefined FUN_1487204a2(void)

void FUN_1487204a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x19105;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  local_40 = 0;
  FUN_148991570(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487205ba FUN_1487205ba body=383 status=ok
// SIG undefined FUN_1487205ba(void)

void FUN_1487205ba(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_60 = FUN_14477b664(uVar3);
  local_58 = local_38;
  uVar2 = FUN_14899179e(local_28,&local_68,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872073a FUN_14872073a body=395 status=ok
// SIG undefined FUN_14872073a(void)

void FUN_14872073a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_70 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_28;
  FUN_143e3bce2(local_20,&local_70,&local_58);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487208c6 FUN_1487208c6 body=280 status=ok
// SIG undefined FUN_1487208c6(void)

void FUN_1487208c6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x19105;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  uVar1 = FUN_1489915fa(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487209e6 FUN_1487209e6 body=363 status=ok
// SIG undefined FUN_1487209e6(void)

void FUN_1487209e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x19105;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_40;
  local_58 = local_38;
  local_50 = 0;
  uVar1 = FUN_1489914d0(local_28,&local_60,local_48);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148720b55 FUN_148720b55 body=102 status=ok
// SIG undefined FUN_148720b55(void)

void FUN_148720b55(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148720bbc FUN_148720bbc body=395 status=ok
// SIG undefined FUN_148720bbc(void)

void FUN_148720bbc(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_70 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_28;
  FUN_148987486(local_20,&local_70,&local_58);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148720d48 FUN_148720d48 body=295 status=ok
// SIG undefined FUN_148720d48(void)

void FUN_148720d48(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  uVar1 = FUN_148987318(local_20,&local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148720ed4 FUN_148720ed4 body=93 status=ok
// SIG undefined FUN_148720ed4(void)

undefined1 FUN_148720ed4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_146130eee(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148720f5a FUN_148720f5a body=59 status=ok
// SIG undefined FUN_148720f5a(void)

undefined8 FUN_148720f5a(longlong *param_1)

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



// FUNCTION 148720ffa FUN_148720ffa body=34 status=ok
// SIG undefined FUN_148720ffa(void)

undefined8 FUN_148720ffa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14872101c FUN_14872101c body=55 status=ok
// SIG undefined FUN_14872101c(void)

void FUN_14872101c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65990 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65990 =
         FUN_140002ddd(FUN_14650ba37,uVar1,L"GbxSkillStateMachineStateAction_SkillComponent");
  }
  return;
}



// FUNCTION 148721056 FUN_148721056 body=34 status=ok
// SIG undefined FUN_148721056(void)

undefined8 FUN_148721056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148721078 FUN_148721078 body=55 status=ok
// SIG undefined FUN_148721078(void)

void FUN_148721078(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65af8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65af8 = FUN_140002ddd(FUN_141858901,uVar1,L"GbxSkillStateMachineStateAction");
  }
  return;
}



// FUNCTION 1487210b0 FUN_1487210b0 body=41 status=ok
// SIG undefined FUN_1487210b0(void)

void FUN_1487210b0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Skills/StateMachine/GbxSkillStateMachineStateDef.h"
                ,0x1e,L"Pure virtual not implemented (%s)",
                L"FGbxSkillStateMachineStateAction::DoAction");
  return;
}



// FUNCTION 14872110a FUN_14872110a body=62 status=ok
// SIG undefined FUN_14872110a(void)

undefined1 FUN_14872110a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1486fec9e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148721170 FUN_148721170 body=59 status=ok
// SIG undefined FUN_148721170(void)

undefined8 FUN_148721170(longlong *param_1)

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



// FUNCTION 14872120c FUN_14872120c body=55 status=ok
// SIG undefined FUN_14872120c(void)

void FUN_14872120c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb659a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb659a8 = FUN_140002ddd(FUN_14650bacd,uVar1,L"GbxSkillStateMachineStateAction_SkillEvent")
    ;
  }
  return;
}



// FUNCTION 1487212b4 FUN_1487212b4 body=59 status=ok
// SIG undefined FUN_1487212b4(void)

undefined8 FUN_1487212b4(longlong *param_1)

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



// FUNCTION 148721350 FUN_148721350 body=55 status=ok
// SIG undefined FUN_148721350(void)

void FUN_148721350(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb659c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb659c0 =
         FUN_140002ddd(FUN_14650bb63,uVar1,L"GbxSkillStateMachineStateAction_SkillScriptEvent");
  }
  return;
}



// FUNCTION 1487213dc FUN_1487213dc body=68 status=ok
// SIG undefined FUN_1487213dc(void)

undefined1 FUN_1487213dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_140fdd436(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148721448 FUN_148721448 body=59 status=ok
// SIG undefined FUN_148721448(void)

undefined8 FUN_148721448(longlong *param_1)

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



// FUNCTION 14872148e FUN_14872148e body=48 status=ok
// SIG undefined FUN_14872148e(void)

void FUN_14872148e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14b268c00;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14872150c FUN_14872150c body=62 status=ok
// SIG undefined FUN_14872150c(void)

undefined8 * FUN_14872150c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b268c00;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14872154a FUN_14872154a body=55 status=ok
// SIG undefined FUN_14872154a(void)

void FUN_14872154a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb659d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb659d8 =
         FUN_140002ddd(FUN_14650bbf9,uVar1,L"GbxSkillStateMachineStateAction_StopActions");
  }
  return;
}


