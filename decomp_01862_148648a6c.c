// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148648a6c FUN_148648a6c body=122 status=ok
// SIG undefined FUN_148648a6c(void)

longlong FUN_148648a6c(longlong param_1,longlong param_2)

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
    FUN_148648ae6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148648ae6 FUN_148648ae6 body=304 status=ok
// SIG undefined FUN_148648ae6(void)

longlong * FUN_148648ae6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14118aec6(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1403e7a24(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0)
        {
          *(undefined4 *)(lVar3 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar3 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar5 + lVar2);
          FUN_1400750e6();
          FUN_14883b452(lVar3 + lVar5 + 0x40,lVar5 + lVar2 + 0x40);
          *(undefined8 *)(lVar3 + lVar5 + 0x50) = *(undefined8 *)(lVar5 + lVar2 + 0x50);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x58;
      } while ((ulonglong)uVar1 * 0x58 - lVar5 != 0);
    }
  }
  return param_1;
}



// FUNCTION 148648c60 FUN_148648c60 body=31 status=ok
// SIG undefined FUN_148648c60(void)

undefined1
FUN_148648c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1403218c0(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148648c80 FUN_148648c80 body=234 status=ok
// SIG undefined FUN_148648c80(void)

undefined4
FUN_148648c80(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
    FUN_14883dad8(param_3,param_2,param_4,param_5);
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
  uVar1 = FUN_14883dad8(param_3,param_2,&local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148648d6c FUN_148648d6c body=39 status=ok
// SIG undefined FUN_148648d6c(void)

void FUN_148648d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_14883d9b2(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 148648da8 FUN_148648da8 body=59 status=ok
// SIG undefined FUN_148648da8(void)

undefined8 FUN_148648da8(longlong *param_1)

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



// FUNCTION 148648e4c FUN_148648e4c body=118 status=ok
// SIG undefined FUN_148648e4c(void)

void FUN_148648e4c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14b0673c0;
  FUN_144928b90(param_2 + 2,0);
  FUN_144a7a8f6(param_2 + 9);
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 148648ec2 FUN_148648ec2 body=105 status=ok
// SIG undefined FUN_148648ec2(void)

void FUN_148648ec2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b0673c0;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_144928b90(param_2 + 2,0);
  FUN_144a7a8f6(param_2 + 9);
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 148648f50 FUN_148648f50 body=117 status=ok
// SIG undefined FUN_148648f50(void)

undefined8 FUN_148648f50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
    do {
      *(undefined1 *)(param_2 + -0x50) = *(undefined1 *)(param_3 + -0x50);
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(param_3 + -0x48);
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      FUN_1447715ec(param_2 + -0x38,param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148648a6c(param_2,param_3);
      param_3 = param_3 + 0xa8;
      param_2 = param_2 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148648fee FUN_148648fee body=59 status=ok
// SIG undefined FUN_148648fee(void)

undefined8 FUN_148648fee(longlong *param_1)

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



// FUNCTION 14864903a FUN_14864903a body=40 status=ok
// SIG undefined FUN_14864903a(void)

void FUN_14864903a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14864912e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486490b0 FUN_1486490b0 body=38 status=ok
// SIG undefined FUN_1486490b0(void)

undefined8 FUN_1486490b0(undefined8 param_1,int param_2)

{
  FUN_14864912e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486490d6 FUN_1486490d6 body=55 status=ok
// SIG undefined FUN_1486490d6(void)

void FUN_1486490d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57ac0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57ac0 = FUN_140002ddd(FUN_1464be717,uVar1,L"FactValueResolver");
  }
  return;
}



// FUNCTION 14864912e FUN_14864912e body=79 status=ok
// SIG undefined FUN_14864912e(void)

void FUN_14864912e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0673c0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14118ae8e(param_1 + 0xb);
  if (param_1[7] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1486491d6 FUN_1486491d6 body=39 status=ok
// SIG undefined FUN_1486491d6(void)

undefined8 FUN_1486491d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148649226 FUN_148649226 body=59 status=ok
// SIG undefined FUN_148649226(void)

undefined8 FUN_148649226(longlong *param_1)

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



// FUNCTION 148649302 FUN_148649302 body=89 status=ok
// SIG undefined FUN_148649302(void)

undefined8 FUN_148649302(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_148649424(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148649384 FUN_148649384 body=59 status=ok
// SIG undefined FUN_148649384(void)

undefined8 FUN_148649384(longlong *param_1)

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



// FUNCTION 1486493ca FUN_1486493ca body=32 status=ok
// SIG undefined FUN_1486493ca(void)

void FUN_1486493ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_140daba44(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148649424 FUN_148649424 body=85 status=ok
// SIG undefined FUN_148649424(void)

undefined8 * FUN_148649424(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14864947a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x68);
      }
    }
  }
  return param_1;
}



// FUNCTION 14864947a FUN_14864947a body=111 status=ok
// SIG undefined FUN_14864947a(void)

void FUN_14864947a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486494ea FUN_1486494ea body=28 status=ok
// SIG undefined FUN_1486494ea(void)

undefined8 FUN_1486494ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148649584 FUN_148649584 body=59 status=ok
// SIG undefined FUN_148649584(void)

undefined8 FUN_148649584(longlong *param_1)

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



// FUNCTION 14864965e FUN_14864965e body=59 status=ok
// SIG undefined FUN_14864965e(void)

undefined8 FUN_14864965e(longlong *param_1)

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



// FUNCTION 148649746 FUN_148649746 body=75 status=ok
// SIG undefined FUN_148649746(void)

undefined8 FUN_148649746(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140d02432();
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486497ba FUN_1486497ba body=59 status=ok
// SIG undefined FUN_1486497ba(void)

undefined8 FUN_1486497ba(longlong *param_1)

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



// FUNCTION 1486498f2 FUN_1486498f2 body=75 status=ok
// SIG undefined FUN_1486498f2(void)

undefined1 FUN_1486498f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_148649a76(param_2 + -0x10,param_3 + -0x10);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148649966 FUN_148649966 body=59 status=ok
// SIG undefined FUN_148649966(void)

undefined8 FUN_148649966(longlong *param_1)

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



// FUNCTION 1486499ac FUN_1486499ac body=48 status=ok
// SIG undefined FUN_1486499ac(void)

void FUN_1486499ac(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14b067d60;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 148649a2a FUN_148649a2a body=55 status=ok
// SIG undefined FUN_148649a2a(void)

void FUN_148649a2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57bb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57bb8 = FUN_140002ddd(FUN_1464beae5,uVar1,L"GameplayTagBasedAttributeValueResolver");
  }
  return;
}



// FUNCTION 148649a76 FUN_148649a76 body=79 status=ok
// SIG undefined FUN_148649a76(void)

undefined8 * FUN_148649a76(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148649ac6(param_1,iVar1);
      FUN_148649b35(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148649ac6 FUN_148649ac6 body=111 status=ok
// SIG undefined FUN_148649ac6(void)

void FUN_148649ac6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148649b35 FUN_148649b35 body=118 status=ok
// SIG undefined FUN_148649b35(void)

void FUN_148649b35(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      param_1 = param_1 + 0x58;
      param_2 = param_2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148649be0 FUN_148649be0 body=87 status=ok
// SIG undefined FUN_148649be0(void)

undefined8 FUN_148649be0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined2 *)(param_2 + 0x18 + lVar1) = *(undefined2 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148649c60 FUN_148649c60 body=59 status=ok
// SIG undefined FUN_148649c60(void)

undefined8 FUN_148649c60(longlong *param_1)

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



// FUNCTION 148649ca6 FUN_148649ca6 body=43 status=ok
// SIG undefined FUN_148649ca6(void)

void FUN_148649ca6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148649d16 FUN_148649d16 body=37 status=ok
// SIG undefined FUN_148649d16(void)

void FUN_148649d16(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2d0);
  FUN_143c3fa40(param_2);
  return;
}



// FUNCTION 148649d68 FUN_148649d68 body=63 status=ok
// SIG undefined FUN_148649d68(void)

undefined1 FUN_148649d68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148649e90(param_2,param_3);
    param_3 = param_3 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 148649dd0 FUN_148649dd0 body=59 status=ok
// SIG undefined FUN_148649dd0(void)

undefined8 FUN_148649dd0(longlong *param_1)

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



// FUNCTION 148649e1c FUN_148649e1c body=38 status=ok
// SIG undefined FUN_148649e1c(void)

void FUN_148649e1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d0) == '\x01') {
    FUN_141109f18(param_2);
    *(undefined1 *)(param_2 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 148649e90 FUN_148649e90 body=647 status=ok
// SIG undefined FUN_148649e90(void)

longlong FUN_148649e90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_14117bcd8(param_1 + 0x20,param_2 + 0x20);
  FUN_14117bcd8(param_1 + 0x2c,param_2 + 0x2c);
  FUN_14117bcd8(param_1 + 0x38,param_2 + 0x38);
  FUN_140841e06(param_1 + 0x44,param_2 + 0x44);
  FUN_14117bcd8(param_1 + 0x50,param_2 + 0x50);
  FUN_14117bcd8(param_1 + 0x5c,param_2 + 0x5c);
  FUN_14117bcd8(param_1 + 0x68,param_2 + 0x68);
  FUN_14117bcd8(param_1 + 0x74,param_2 + 0x74);
  FUN_14117bcd8(param_1 + 0x80,param_2 + 0x80);
  FUN_14117bcd8(param_1 + 0x8c,param_2 + 0x8c);
  FUN_14117bcd8(param_1 + 0x98,param_2 + 0x98);
  FUN_14117bcd8(param_1 + 0xa4,param_2 + 0xa4);
  FUN_140841e06(param_1 + 0xb0,param_2 + 0xb0);
  FUN_14117bcd8(param_1 + 0xbc,param_2 + 0xbc);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)(param_1 + 0xd4) = uVar3;
  FUN_14117bcd8(param_1 + 0xd8,param_2 + 0xd8);
  FUN_14117bcd8(param_1 + 0xe4,param_2 + 0xe4);
  puVar5 = (undefined8 *)(param_2 + 0xf0);
  puVar6 = (undefined8 *)(param_1 + 0xf0);
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  if (param_2 != param_1) {
    FUN_14864a118(param_1 + 0x138,param_2 + 0x138);
    FUN_14864a24a(param_1 + 0x150,param_2 + 0x150);
    FUN_14864a37c(param_1 + 0x168,param_2 + 0x168);
    FUN_14864a37c(param_1 + 0x180,param_2 + 0x180);
    FUN_14864a37c(param_1 + 0x198,param_2 + 0x198);
    FUN_14864a37c(param_1 + 0x1b0,param_2 + 0x1b0);
    FUN_14864a4ae(param_1 + 0x1c8,param_2 + 0x1c8);
    FUN_14864a4ae(param_1 + 0x1e0,param_2 + 0x1e0);
    FUN_14864a4ae(param_1 + 0x1f8,param_2 + 0x1f8);
    FUN_14864a4ae(param_1 + 0x210,param_2 + 0x210);
    FUN_14864a4ae(param_1 + 0x228,param_2 + 0x228);
    FUN_14864a37c(param_1 + 0x240,param_2 + 0x240);
    FUN_14864a37c(param_1 + 600,param_2 + 600);
    FUN_14864a37c(param_1 + 0x270,param_2 + 0x270);
    FUN_14864a37c(param_1 + 0x288,param_2 + 0x288);
    FUN_14864a37c(param_1 + 0x2a0,param_2 + 0x2a0);
    FUN_14864a118(param_1 + 0x2b8,param_2 + 0x2b8);
  }
  return param_1;
}



// FUNCTION 14864a118 FUN_14864a118 body=304 status=ok
// SIG undefined FUN_14864a118(void)

void FUN_14864a118(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14864a24a FUN_14864a24a body=304 status=ok
// SIG undefined FUN_14864a24a(void)

void FUN_14864a24a(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14864a37c FUN_14864a37c body=304 status=ok
// SIG undefined FUN_14864a37c(void)

void FUN_14864a37c(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14864a4ae FUN_14864a4ae body=304 status=ok
// SIG undefined FUN_14864a4ae(void)

void FUN_14864a4ae(undefined8 param_1,longlong *param_2)

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



// FUNCTION 14864a67c FUN_14864a67c body=59 status=ok
// SIG undefined FUN_14864a67c(void)

undefined8 FUN_14864a67c(longlong *param_1)

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



// FUNCTION 14864a710 FUN_14864a710 body=55 status=ok
// SIG undefined FUN_14864a710(void)

void FUN_14864a710(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c40 = FUN_140002ddd(FUN_1464bed07,uVar1,L"GameResourcePoolContextResolver");
  }
  return;
}



// FUNCTION 14864a802 FUN_14864a802 body=59 status=ok
// SIG undefined FUN_14864a802(void)

undefined8 FUN_14864a802(longlong *param_1)

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



// FUNCTION 14864a8a2 FUN_14864a8a2 body=55 status=ok
// SIG undefined FUN_14864a8a2(void)

void FUN_14864a8a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57c58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57c58 = FUN_140002ddd(FUN_1464bed9d,uVar1,L"GameResourcePoolCurrentValueResolver");
  }
  return;
}



// FUNCTION 14864a908 FUN_14864a908 body=63 status=ok
// SIG undefined FUN_14864a908(void)

undefined1 FUN_14864a908(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864ac54(param_2,param_3);
    param_3 = param_3 + 0x378;
    param_2 = param_2 + 0x378;
  }
  return 1;
}



// FUNCTION 14864a970 FUN_14864a970 body=59 status=ok
// SIG undefined FUN_14864a970(void)

undefined8 FUN_14864a970(longlong *param_1)

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



// FUNCTION 14864a9bc FUN_14864a9bc body=49 status=ok
// SIG undefined FUN_14864a9bc(void)

void FUN_14864a9bc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x6f) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x6f) = 0;
  }
  return;
}



// FUNCTION 14864ac54 FUN_14864ac54 body=311 status=ok
// SIG undefined FUN_14864ac54(void)

longlong FUN_14864ac54(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_140d02432(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_140d02432(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  FUN_140d02432(param_1 + 0xf0,param_2 + 0xf0);
  FUN_140d02432(param_1 + 0x140,param_2 + 0x140);
  FUN_140d02432(param_1 + 400,param_2 + 400);
  FUN_140d02432(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_140d02432(param_1 + 0x230,param_2 + 0x230);
  FUN_140d02432(param_1 + 0x280,param_2 + 0x280);
  FUN_140d02432(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_140d02432(param_1 + 800,param_2 + 800);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
  *(undefined2 *)(param_1 + 0x374) = *(undefined2 *)(param_2 + 0x374);
  return param_1;
}



// FUNCTION 14864ade8 FUN_14864ade8 body=59 status=ok
// SIG undefined FUN_14864ade8(void)

undefined8 FUN_14864ade8(longlong *param_1)

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



// FUNCTION 14864ae2e FUN_14864ae2e body=32 status=ok
// SIG undefined FUN_14864ae2e(void)

void FUN_14864ae2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_140da32a2(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14864aeee FUN_14864aeee body=59 status=ok
// SIG undefined FUN_14864aeee(void)

undefined8 FUN_14864aeee(longlong *param_1)

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



// FUNCTION 14864b008 FUN_14864b008 body=59 status=ok
// SIG undefined FUN_14864b008(void)

undefined8 FUN_14864b008(longlong *param_1)

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



// FUNCTION 14864b0a4 FUN_14864b0a4 body=55 status=ok
// SIG undefined FUN_14864b0a4(void)

void FUN_14864b0a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57d90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57d90 = FUN_140002ddd(FUN_1464bf35b,uVar1,L"GameResourcePoolStateResolver");
  }
  return;
}



// FUNCTION 14864b184 FUN_14864b184 body=59 status=ok
// SIG undefined FUN_14864b184(void)

undefined8 FUN_14864b184(longlong *param_1)

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



// FUNCTION 14864b220 FUN_14864b220 body=55 status=ok
// SIG undefined FUN_14864b220(void)

void FUN_14864b220(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57dc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57dc0 = FUN_140002ddd(FUN_1464bf421,uVar1,L"GameResourcePoolValueResolver");
  }
  return;
}



// FUNCTION 14864b2d0 FUN_14864b2d0 body=59 status=ok
// SIG undefined FUN_14864b2d0(void)

undefined8 FUN_14864b2d0(longlong *param_1)

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



// FUNCTION 14864b370 FUN_14864b370 body=29 status=ok
// SIG undefined FUN_14864b370(void)

undefined8 FUN_14864b370(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14864b38e FUN_14864b38e body=55 status=ok
// SIG undefined FUN_14864b38e(void)

void FUN_14864b38e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57dd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57dd8 = FUN_140002ddd(FUN_1464bf4b7,uVar1,L"GameResourcePoolCurrentValueResolver_NoDef")
    ;
  }
  return;
}



// FUNCTION 14864b3f4 FUN_14864b3f4 body=63 status=ok
// SIG undefined FUN_14864b3f4(void)

undefined1 FUN_14864b3f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864b554(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14864b45c FUN_14864b45c body=59 status=ok
// SIG undefined FUN_14864b45c(void)

undefined8 FUN_14864b45c(longlong *param_1)

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



// FUNCTION 14864b508 FUN_14864b508 body=55 status=ok
// SIG undefined FUN_14864b508(void)

void FUN_14864b508(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57df0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57df0 = FUN_140002ddd(FUN_1464bf54d,uVar1,L"GameResourcePoolWeightValueResolver");
  }
  return;
}



// FUNCTION 14864b554 FUN_14864b554 body=144 status=ok
// SIG undefined FUN_14864b554(void)

longlong FUN_14864b554(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_140d02432(param_1 + 0x28,param_2 + 0x28);
  FUN_140d02432(param_1 + 0x78,param_2 + 0x78);
  FUN_140d02432(param_1 + 200,param_2 + 200);
  FUN_140d02432(param_1 + 0x118,param_2 + 0x118);
  FUN_140d02432(param_1 + 0x168,param_2 + 0x168);
  return param_1;
}



// FUNCTION 14864b6c0 FUN_14864b6c0 body=63 status=ok
// SIG undefined FUN_14864b6c0(void)

undefined1 FUN_14864b6c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864b7ea(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 14864b728 FUN_14864b728 body=59 status=ok
// SIG undefined FUN_14864b728(void)

undefined8 FUN_14864b728(longlong *param_1)

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



// FUNCTION 14864b774 FUN_14864b774 body=40 status=ok
// SIG undefined FUN_14864b774(void)

void FUN_14864b774(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145ed1be0(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14864b7ea FUN_14864b7ea body=132 status=ok
// SIG undefined FUN_14864b7ea(void)

longlong FUN_14864b7ea(longlong param_1,longlong param_2)

{
  FUN_141848d72(param_1 + 8,param_2 + 8);
  FUN_141848d72(param_1 + 0x20,param_2 + 0x20);
  FUN_14864b91c(param_1 + 0x38,param_2 + 0x38);
  FUN_14864b86e(param_1 + 0x88,param_2 + 0x88);
  FUN_14864b86e(param_1 + 0x98,param_2 + 0x98);
  FUN_14864b8be(param_1 + 0xa8,param_2 + 0xa8);
  FUN_14864b8be(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 14864b86e FUN_14864b86e body=79 status=ok
// SIG undefined FUN_14864b86e(void)

undefined8 * FUN_14864b86e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1456ed578(param_1,iVar1);
      FUN_1403e3b2e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14864b8be FUN_14864b8be body=93 status=ok
// SIG undefined FUN_14864b8be(void)

undefined8 * FUN_14864b8be(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140134bd1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14864ba72(param_1,iVar1);
      FUN_140134cf6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14864b91c FUN_14864b91c body=122 status=ok
// SIG undefined FUN_14864b91c(void)

longlong FUN_14864b91c(longlong param_1,longlong param_2)

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
    FUN_14864b996(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14864b996 FUN_14864b996 body=219 status=ok
// SIG undefined FUN_14864b996(void)

undefined8 * FUN_14864b996(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14588b342(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1456ed72e(puVar6,puVar4);
          puVar6[6] = puVar4[6];
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14864ba72 FUN_14864ba72 body=115 status=ok
// SIG undefined FUN_14864ba72(void)

void FUN_14864ba72(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14864bb22 FUN_14864bb22 body=180 status=ok
// SIG undefined FUN_14864bb22(void)

void FUN_14864bb22(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487ae6c4(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864bbd8 FUN_14864bbd8 body=169 status=ok
// SIG undefined FUN_14864bbd8(void)

void FUN_14864bbd8(undefined8 param_1,longlong param_2)

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
  FUN_1487adea4(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864bca2 FUN_14864bca2 body=75 status=ok
// SIG undefined FUN_14864bca2(void)

void FUN_14864bca2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_141862f3a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864bd22 FUN_14864bd22 body=881 status=ok
// SIG undefined FUN_14864bd22(void)

void FUN_14864bd22(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined **local_f8 [4];
  undefined **local_d8 [4];
  undefined8 local_b8;
  undefined2 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  int local_94;
  undefined2 *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
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
  local_70 = 0;
  local_68 = 0x3860a972;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar3 = &local_70;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_141862a24(&local_90);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  FUN_141862a24(&local_b0);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar1 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406022be(local_d8,&local_b0);
  local_d8[0] = &PTR_FUN_14b075650;
  FUN_1406022be(local_f8,&local_90);
  local_f8[0] = &PTR_FUN_14b075650;
  local_110 = local_58;
  uVar2 = FUN_14477b664(uStack_50);
  local_108 = FUN_14477b664(uVar2);
  local_100 = local_48;
  local_118 = uVar1;
  FUN_1487b1c7e(&local_110,puVar3,local_f8,local_d8);
  local_b0 = &DAT_14a171d50;
  local_98 = 0;
  if (local_94 != 0) {
    FUN_140115c12(&local_a0,0);
  }
  local_a8 = 0;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  local_90 = &DAT_14a171d50;
  local_78 = 0;
  if (local_74 != 0) {
    FUN_140115c12(&local_80,0);
  }
  local_88 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c094 FUN_14864c094 body=221 status=ok
// SIG undefined FUN_14864c094(void)

void FUN_14864c094(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487b1896(&local_30,local_20);
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
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c172 FUN_14864c172 body=156 status=ok
// SIG undefined FUN_14864c172(void)

void FUN_14864c172(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1487b12d6(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c210 FUN_14864c210 body=139 status=ok
// SIG undefined FUN_14864c210(void)

void FUN_14864c210(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487b12a4(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c29c FUN_14864c29c body=117 status=ok
// SIG undefined FUN_14864c29c(void)

void FUN_14864c29c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487b0f10(&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c312 FUN_14864c312 body=317 status=ok
// SIG undefined FUN_14864c312(void)

void FUN_14864c312(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_48[2];
  uVar1 = FUN_14477b664(local_48[3]);
  local_58 = FUN_14477b664(uVar1);
  local_50 = local_48[4];
  FUN_1487b1ea4(&local_60,plVar2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c450 FUN_14864c450 body=365 status=ok
// SIG undefined FUN_14864c450(void)

void FUN_14864c450(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_68 = (int)uStack_40;
  if (lVar1 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,uStack_40 & 0xffffffff,0);
    memcpy(local_70,_Src,lVar1 * 2);
  }
  FUN_1487b1632(&local_60,local_30,&local_70);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c5be FUN_14864c5be body=221 status=ok
// SIG undefined FUN_14864c5be(void)

void FUN_14864c5be(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487b1384(&local_30,local_20);
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
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c69c FUN_14864c69c body=221 status=ok
// SIG undefined FUN_14864c69c(void)

void FUN_14864c69c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c8fc1e(&local_30,local_20);
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
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c77a FUN_14864c77a body=139 status=ok
// SIG undefined FUN_14864c77a(void)

void FUN_14864c77a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487b1960(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c80c FUN_14864c80c body=232 status=ok
// SIG undefined FUN_14864c80c(void)

void FUN_14864c80c(undefined8 param_1,longlong param_2)

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
  FUN_1487b0dd4(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864c8fc FUN_14864c8fc body=324 status=ok
// SIG undefined FUN_14864c8fc(void)

void FUN_14864c8fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  FUN_144a63fc8();
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
  FUN_1487b0c22(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864caaa FUN_14864caaa body=45 status=ok
// SIG undefined FUN_14864caaa(void)

longlong FUN_14864caaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d49cac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14864cad8 FUN_14864cad8 body=48 status=ok
// SIG undefined FUN_14864cad8(void)

longlong FUN_14864cad8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145d49cac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14864cb08 FUN_14864cb08 body=48 status=ok
// SIG undefined FUN_14864cb08(void)

longlong FUN_14864cb08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145d49cac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14864cb38 FUN_14864cb38 body=48 status=ok
// SIG undefined FUN_14864cb38(void)

longlong FUN_14864cb38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145d49cac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14864cbbc FUN_14864cbbc body=107 status=ok
// SIG undefined FUN_14864cbbc(void)

undefined1 FUN_14864cbbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_1447715ec(param_2 + -0x28,param_3 + -0x28);
      FUN_1447715ec(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x2c);
      uVar2 = *(undefined4 *)(param_3 + 0x30);
      uVar3 = *(undefined4 *)(param_3 + 0x34);
      uVar4 = *(undefined4 *)(param_3 + 0x38);
      uVar5 = *(undefined4 *)(param_3 + 0x3c);
      uVar6 = *(undefined4 *)(param_3 + 0x40);
      uVar7 = *(undefined4 *)(param_3 + 0x44);
      uVar8 = *(undefined4 *)(param_3 + 0x44);
      uVar9 = *(undefined4 *)(param_3 + 0x48);
      uVar10 = *(undefined4 *)(param_3 + 0x4c);
      uVar11 = *(undefined4 *)(param_3 + 0x50);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x2c) = uVar1;
      *(undefined4 *)(param_2 + 0x30) = uVar2;
      *(undefined4 *)(param_2 + 0x34) = uVar3;
      *(undefined4 *)(param_2 + 0x38) = uVar4;
      *(undefined4 *)(param_2 + 0x3c) = uVar5;
      *(undefined4 *)(param_2 + 0x40) = uVar6;
      *(undefined4 *)(param_2 + 0x44) = uVar7;
      *(undefined4 *)(param_2 + 0x44) = uVar8;
      *(undefined4 *)(param_2 + 0x48) = uVar9;
      *(undefined4 *)(param_2 + 0x4c) = uVar10;
      *(undefined4 *)(param_2 + 0x50) = uVar11;
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864cc50 FUN_14864cc50 body=59 status=ok
// SIG undefined FUN_14864cc50(void)

undefined8 FUN_14864cc50(longlong *param_1)

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



// FUNCTION 14864ccf4 FUN_14864ccf4 body=72 status=ok
// SIG undefined FUN_14864ccf4(void)

void FUN_14864ccf4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *param_1 = &PTR_FUN_14b0703c0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 14864cd3c FUN_14864cd3c body=80 status=ok
// SIG undefined FUN_14864cd3c(void)

undefined8 * FUN_14864cd3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0703c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14864cd8c FUN_14864cd8c body=55 status=ok
// SIG undefined FUN_14864cd8c(void)

void FUN_14864cd8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57ec0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57ec0 = FUN_140002ddd(FUN_1464bfab9,uVar1,L"GbxActiveProfileSaveGameHeader");
  }
  return;
}



// FUNCTION 14864cdf2 FUN_14864cdf2 body=54 status=ok
// SIG undefined FUN_14864cdf2(void)

undefined1 FUN_14864cdf2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864cf04(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14864ce50 FUN_14864ce50 body=59 status=ok
// SIG undefined FUN_14864ce50(void)

undefined8 FUN_14864ce50(longlong *param_1)

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



// FUNCTION 14864ce96 FUN_14864ce96 body=32 status=ok
// SIG undefined FUN_14864ce96(void)

void FUN_14864ce96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1404d58fc(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14864cf04 FUN_14864cf04 body=112 status=ok
// SIG undefined FUN_14864cf04(void)

longlong FUN_14864cf04(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_142b160e2();
  FUN_140115bdc(param_1 + 8,param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x28) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x30);
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar2;
  return param_1;
}



// FUNCTION 14864cf94 FUN_14864cf94 body=63 status=ok
// SIG undefined FUN_14864cf94(void)

undefined1 FUN_14864cf94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864d0a8(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14864cffc FUN_14864cffc body=59 status=ok
// SIG undefined FUN_14864cffc(void)

undefined8 FUN_14864cffc(longlong *param_1)

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



// FUNCTION 14864d048 FUN_14864d048 body=38 status=ok
// SIG undefined FUN_14864d048(void)

void FUN_14864d048(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_140c7e900(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14864d0a8 FUN_14864d0a8 body=177 status=ok
// SIG undefined FUN_14864d0a8(void)

longlong FUN_14864d0a8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_14864d15a(param_1 + 0x40,param_2 + 0x40);
  FUN_140115bdc(param_1 + 0x58,param_2 + 0x58);
  FUN_140115bdc(param_1 + 0x78,param_2 + 0x78);
  FUN_1408ff324(param_1 + 0x98,param_2 + 0x98);
  FUN_14864d1ae(param_1 + 0xe8,param_2 + 0xe8);
  puVar5 = (undefined8 *)(param_2 + 0x138);
  puVar6 = (undefined8 *)(param_1 + 0x138);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  return param_1;
}



// FUNCTION 14864d15a FUN_14864d15a body=84 status=ok
// SIG undefined FUN_14864d15a(void)

longlong * FUN_14864d15a(longlong *param_1,longlong *param_2)

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



// FUNCTION 14864d1ae FUN_14864d1ae body=122 status=ok
// SIG undefined FUN_14864d1ae(void)

longlong FUN_14864d1ae(longlong param_1,longlong param_2)

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
    FUN_14864d228(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14864d228 FUN_14864d228 body=211 status=ok
// SIG undefined FUN_14864d228(void)

undefined8 * FUN_14864d228(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c7eac0(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14864d2fc(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar4 + 6);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14864d2fc FUN_14864d2fc body=71 status=ok
// SIG undefined FUN_14864d2fc(void)

undefined8 * FUN_14864d2fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14864d344 FUN_14864d344 body=28 status=ok
// SIG undefined FUN_14864d344(void)

undefined8 FUN_14864d344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14864d38a FUN_14864d38a body=47 status=ok
// SIG undefined FUN_14864d38a(void)

void FUN_14864d38a(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14864d3d0 FUN_14864d3d0 body=67 status=ok
// SIG undefined FUN_14864d3d0(void)

undefined1 FUN_14864d3d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14864d43c FUN_14864d43c body=59 status=ok
// SIG undefined FUN_14864d43c(void)

undefined8 FUN_14864d43c(longlong *param_1)

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



// FUNCTION 14864d4da FUN_14864d4da body=51 status=ok
// SIG undefined FUN_14864d4da(void)

void FUN_14864d4da(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14864d50e FUN_14864d50e body=117 status=ok
// SIG undefined FUN_14864d50e(void)

void FUN_14864d50e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  *param_2 = &PTR_FUN_14b0756b8;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 14864d604 FUN_14864d604 body=139 status=ok
// SIG undefined FUN_14864d604(void)

undefined8 FUN_14864d604(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
    do {
      puVar5 = (undefined8 *)(param_3 + -0x88);
      puVar6 = (undefined8 *)(param_2 + -0x88);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_14065c7a4(param_2,param_3);
      param_3 = param_3 + 0xb0;
      param_2 = param_2 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864d6b8 FUN_14864d6b8 body=59 status=ok
// SIG undefined FUN_14864d6b8(void)

undefined8 FUN_14864d6b8(longlong *param_1)

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



// FUNCTION 14864d704 FUN_14864d704 body=40 status=ok
// SIG undefined FUN_14864d704(void)

void FUN_14864d704(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14864d7de(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14864d77a FUN_14864d77a body=43 status=ok
// SIG undefined FUN_14864d77a(void)

undefined8 FUN_14864d77a(undefined8 param_1,int param_2)

{
  FUN_14864d7de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14864d7a6 FUN_14864d7a6 body=55 status=ok
// SIG undefined FUN_14864d7a6(void)

void FUN_14864d7a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58000 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58000 = FUN_140002ddd(FUN_1464bff93,uVar1,L"StampAlwaysLoadedActor");
  }
  return;
}



// FUNCTION 14864d7de FUN_14864d7de body=64 status=ok
// SIG undefined FUN_14864d7de(void)

void FUN_14864d7de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0756b8;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14864d88e FUN_14864d88e body=63 status=ok
// SIG undefined FUN_14864d88e(void)

undefined1 FUN_14864d88e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864d9a2(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14864d8f6 FUN_14864d8f6 body=59 status=ok
// SIG undefined FUN_14864d8f6(void)

undefined8 FUN_14864d8f6(longlong *param_1)

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



// FUNCTION 14864d942 FUN_14864d942 body=38 status=ok
// SIG undefined FUN_14864d942(void)

void FUN_14864d942(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1409717ac(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14864d9a2 FUN_14864d9a2 body=120 status=ok
// SIG undefined FUN_14864d9a2(void)

longlong FUN_14864d9a2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_14864da1a(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_140115bdc(param_1 + 0x50,param_2 + 0x50);
  FUN_140115bdc(param_1 + 0x70,param_2 + 0x70);
  FUN_14864da78(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 14864da1a FUN_14864da1a body=93 status=ok
// SIG undefined FUN_14864da1a(void)

undefined8 * FUN_14864da1a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14097191c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14864dad6(param_1,iVar1);
      FUN_14864db48(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14864da78 FUN_14864da78 body=93 status=ok
// SIG undefined FUN_14864da78(void)

undefined8 * FUN_14864da78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140971947(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14864dc74(param_1,iVar1);
      FUN_14864dce7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14864dad6 FUN_14864dad6 body=114 status=ok
// SIG undefined FUN_14864dad6(void)

void FUN_14864dad6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,0x10);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14864db48 FUN_14864db48 body=60 status=ok
// SIG undefined FUN_14864db48(void)

void FUN_14864db48(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14864db84(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 14864db84 FUN_14864db84 body=240 status=ok
// SIG undefined FUN_14864db84(void)

undefined8 * FUN_14864db84(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_14b0756b8;
  puVar7 = (undefined8 *)(param_2 + 0x10);
  puVar8 = param_1 + 2;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  uVar4 = *(undefined4 *)(param_2 + 0x80);
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  _Src = *(void **)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1405bd402(param_1 + 0x13,iVar1,0);
    FUN_1405bd2e2(param_1[0x13],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14864dc74 FUN_14864dc74 body=115 status=ok
// SIG undefined FUN_14864dc74(void)

void FUN_14864dc74(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14864dce7 FUN_14864dce7 body=52 status=ok
// SIG undefined FUN_14864dce7(void)

void FUN_14864dce7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14864dd1c FUN_14864dd1c body=28 status=ok
// SIG undefined FUN_14864dd1c(void)

undefined8 FUN_14864dd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14864ddc0 FUN_14864ddc0 body=96 status=ok
// SIG undefined FUN_14864ddc0(void)

undefined1 FUN_14864ddc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      FUN_141289ada(param_2 + -0x60,param_3 + -0x60);
      FUN_1408ff324(param_2 + -0x50,param_3 + -0x50);
      FUN_14864d1ae(param_2,param_3);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864de48 FUN_14864de48 body=59 status=ok
// SIG undefined FUN_14864de48(void)

undefined8 FUN_14864de48(longlong *param_1)

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



// FUNCTION 14864de94 FUN_14864de94 body=38 status=ok
// SIG undefined FUN_14864de94(void)

void FUN_14864de94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14864def4(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14864def4 FUN_14864def4 body=120 status=ok
// SIG undefined FUN_14864def4(void)

void FUN_14864def4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b075620;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140c7ea88(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ff272(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14864df6e FUN_14864df6e body=104 status=ok
// SIG undefined FUN_14864df6e(void)

undefined8 FUN_14864df6e(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487aef48(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864dfd8 FUN_14864dfd8 body=28 status=ok
// SIG undefined FUN_14864dfd8(void)

undefined8 FUN_14864dfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14864e06e FUN_14864e06e body=59 status=ok
// SIG undefined FUN_14864e06e(void)

undefined8 FUN_14864e06e(longlong *param_1)

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



// FUNCTION 14864e10e FUN_14864e10e body=34 status=ok
// SIG undefined FUN_14864e10e(void)

undefined8 FUN_14864e10e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14864e130 FUN_14864e130 body=55 status=ok
// SIG undefined FUN_14864e130(void)

void FUN_14864e130(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58078 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58078 = FUN_140002ddd(FUN_1464bfff2,uVar1,L"GbxActivityAreaStampLayoutSwitch");
  }
  return;
}



// FUNCTION 14864e220 FUN_14864e220 body=99 status=ok
// SIG undefined FUN_14864e220(void)

undefined8 FUN_14864e220(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_14864e422(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864e2ac FUN_14864e2ac body=59 status=ok
// SIG undefined FUN_14864e2ac(void)

undefined8 FUN_14864e2ac(longlong *param_1)

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



// FUNCTION 14864e2f8 FUN_14864e2f8 body=40 status=ok
// SIG undefined FUN_14864e2f8(void)

void FUN_14864e2f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14864e3d2(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14864e36e FUN_14864e36e body=43 status=ok
// SIG undefined FUN_14864e36e(void)

undefined8 FUN_14864e36e(undefined8 param_1,int param_2)

{
  FUN_14864e3d2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14864e39a FUN_14864e39a body=55 status=ok
// SIG undefined FUN_14864e39a(void)

void FUN_14864e39a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58090 = FUN_140002ddd(FUN_1464c0183,uVar1,L"GbxActivityAreaStampLayoutSwitchNamed");
  }
  return;
}



// FUNCTION 14864e3d2 FUN_14864e3d2 body=80 status=ok
// SIG undefined FUN_14864e3d2(void)

void FUN_14864e3d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b070f70;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c82386(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14864e422 FUN_14864e422 body=122 status=ok
// SIG undefined FUN_14864e422(void)

longlong FUN_14864e422(longlong param_1,longlong param_2)

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
    FUN_14864e49c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14864e49c FUN_14864e49c body=210 status=ok
// SIG undefined FUN_14864e49c(void)

undefined8 * FUN_14864e49c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c82558(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14864e56e(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14864e56e FUN_14864e56e body=114 status=ok
// SIG undefined FUN_14864e56e(void)

undefined8 * FUN_14864e56e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14864e6be FUN_14864e6be body=175 status=ok
// SIG undefined FUN_14864e6be(void)

undefined8 FUN_14864e6be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x14);
      uVar4 = *(undefined4 *)(lVar1 + 0x18);
      uVar5 = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_14864e422(lVar1 + 0x30,lVar2 + 0x30);
      *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(lVar2 + 0x88);
      FUN_1447715ec(param_2 + lVar6 + 0x90,param_3 + lVar6 + 0x90);
      lVar6 = lVar6 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864e796 FUN_14864e796 body=59 status=ok
// SIG undefined FUN_14864e796(void)

undefined8 FUN_14864e796(longlong *param_1)

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



// FUNCTION 14864e7e2 FUN_14864e7e2 body=69 status=ok
// SIG undefined FUN_14864e7e2(void)

void FUN_14864e7e2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b071100;
    if (param_2[0x15] != 0) {
      FUN_1400020a8();
    }
    FUN_14864e3d2(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 14864e876 FUN_14864e876 body=75 status=ok
// SIG undefined FUN_14864e876(void)

undefined8 * FUN_14864e876(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b071100;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14864e3d2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14864e8c2 FUN_14864e8c2 body=55 status=ok
// SIG undefined FUN_14864e8c2(void)

void FUN_14864e8c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb580a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb580a8 = FUN_140002ddd(FUN_1464c0219,uVar1,L"GbxActivityAreaStampLayoutSwitchFact");
  }
  return;
}



// FUNCTION 14864e8fa FUN_14864e8fa body=96 status=ok
// SIG undefined FUN_14864e8fa(void)

undefined8 * FUN_14864e8fa(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14864e9aa FUN_14864e9aa body=63 status=ok
// SIG undefined FUN_14864e9aa(void)

undefined1 FUN_14864e9aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864eac6(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14864ea12 FUN_14864ea12 body=59 status=ok
// SIG undefined FUN_14864ea12(void)

undefined8 FUN_14864ea12(longlong *param_1)

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



// FUNCTION 14864ea5e FUN_14864ea5e body=38 status=ok
// SIG undefined FUN_14864ea5e(void)

void FUN_14864ea5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14184902c(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14864eac6 FUN_14864eac6 body=82 status=ok
// SIG undefined FUN_14864eac6(void)

longlong FUN_14864eac6(longlong param_1,longlong param_2)

{
  FUN_1457b9446();
  FUN_144983130(param_1 + 0x18,param_2 + 0x18);
  FUN_1470d42aa(param_1 + 0x50,param_2 + 0x50);
  FUN_1470d42aa(param_1 + 0x60,param_2 + 0x60);
  FUN_1400fce78(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 14864eb38 FUN_14864eb38 body=63 status=ok
// SIG undefined FUN_14864eb38(void)

undefined1 FUN_14864eb38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864ec48(param_2,param_3);
    param_3 = param_3 + 0x290;
    param_2 = param_2 + 0x290;
  }
  return 1;
}



// FUNCTION 14864eba0 FUN_14864eba0 body=59 status=ok
// SIG undefined FUN_14864eba0(void)

undefined8 FUN_14864eba0(longlong *param_1)

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



// FUNCTION 14864ebec FUN_14864ebec body=38 status=ok
// SIG undefined FUN_14864ebec(void)

void FUN_14864ebec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_140c63414(param_2);
    *(undefined1 *)(param_2 + 0x290) = 0;
  }
  return;
}



// FUNCTION 14864ec48 FUN_14864ec48 body=304 status=ok
// SIG undefined FUN_14864ec48(void)

longlong FUN_14864ec48(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_144983130(param_1 + 0x18,param_2 + 0x18);
  FUN_144983130(param_1 + 0x50,param_2 + 0x50);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_144983130(param_1 + 200,param_2 + 200);
  FUN_144983130(param_1 + 0x100,param_2 + 0x100);
  FUN_144983130(param_1 + 0x138,param_2 + 0x138);
  FUN_1470d42aa(param_1 + 0x170,param_2 + 0x170);
  FUN_1470d42aa(param_1 + 0x180,param_2 + 0x180);
  FUN_1400fce78(param_1 + 400,param_2 + 400);
  *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
  FUN_144983130(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1e0) = *(undefined1 *)(param_2 + 0x1e0);
  FUN_1457b9446(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_14864ed78(param_1 + 0x200,param_2 + 0x200);
  FUN_14864edd6(param_1 + 0x210,param_2 + 0x210);
  FUN_14709170c(param_1 + 0x220,param_2 + 0x220);
  return param_1;
}



// FUNCTION 14864ed78 FUN_14864ed78 body=93 status=ok
// SIG undefined FUN_14864ed78(void)

undefined8 * FUN_14864ed78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c638d7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140ad25e8(param_1,iVar1);
      FUN_140ad2494(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14864edd6 FUN_14864edd6 body=93 status=ok
// SIG undefined FUN_14864edd6(void)

undefined8 * FUN_14864edd6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c6388c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14864ee34(param_1,iVar1);
      FUN_14864eea7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14864ee34 FUN_14864ee34 body=115 status=ok
// SIG undefined FUN_14864ee34(void)

void FUN_14864ee34(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14864eea7 FUN_14864eea7 body=52 status=ok
// SIG undefined FUN_14864eea7(void)

void FUN_14864eea7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14864eee0 FUN_14864eee0 body=28 status=ok
// SIG undefined FUN_14864eee0(void)

undefined8 FUN_14864eee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14864ef0e FUN_14864ef0e body=156 status=ok
// SIG undefined FUN_14864ef0e(void)

void FUN_14864ef0e(undefined8 param_1,longlong param_2)

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
  FUN_1487b2942(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14864eff4 FUN_14864eff4 body=197 status=ok
// SIG undefined FUN_14864eff4(void)

void FUN_14864eff4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb58360) {
    FUN_144b3d300(&DAT_14cb58360);
    if (DAT_14cb58360 == -1) {
      FUN_1446f470e(&DAT_14cb58358,L"VFXTemplate",1);
      _Init_thread_footer(&DAT_14cb58360);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5836c) {
    FUN_144b3d300(&DAT_14cb5836c);
    if (DAT_14cb5836c == -1) {
      FUN_1446f470e(&DAT_14cb58364,L"ParticleParameters",1);
      _Init_thread_footer(&DAT_14cb5836c);
      return;
    }
  }
  return;
}



// FUNCTION 14864f19c FUN_14864f19c body=59 status=ok
// SIG undefined FUN_14864f19c(void)

undefined8 FUN_14864f19c(longlong *param_1)

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



// FUNCTION 14864f23c FUN_14864f23c body=29 status=ok
// SIG undefined FUN_14864f23c(void)

undefined8 FUN_14864f23c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14864f25a FUN_14864f25a body=55 status=ok
// SIG undefined FUN_14864f25a(void)

void FUN_14864f25a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb581c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb581c8 = FUN_140002ddd(FUN_1464c0ab1,uVar1,L"GbxActivityEffect");
  }
  return;
}



// FUNCTION 14864f2c2 FUN_14864f2c2 body=62 status=ok
// SIG undefined FUN_14864f2c2(void)

undefined1 FUN_14864f2c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1457b9446(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864f328 FUN_14864f328 body=59 status=ok
// SIG undefined FUN_14864f328(void)

undefined8 FUN_14864f328(longlong *param_1)

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



// FUNCTION 14864f3e4 FUN_14864f3e4 body=63 status=ok
// SIG undefined FUN_14864f3e4(void)

undefined1 FUN_14864f3e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864f50e(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14864f44c FUN_14864f44c body=59 status=ok
// SIG undefined FUN_14864f44c(void)

undefined8 FUN_14864f44c(longlong *param_1)

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



// FUNCTION 14864f498 FUN_14864f498 body=40 status=ok
// SIG undefined FUN_14864f498(void)

void FUN_14864f498(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_14584ac00(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14864f50e FUN_14864f50e body=77 status=ok
// SIG undefined FUN_14864f50e(void)

longlong FUN_14864f50e(longlong param_1,longlong param_2)

{
  FUN_14709170c();
  FUN_14709170c(param_1 + 0x70,param_2 + 0x70);
  FUN_14709170c(param_1 + 0xe0,param_2 + 0xe0);
  FUN_14864f55c(param_1 + 0x150,param_2 + 0x150);
  return param_1;
}



// FUNCTION 14864f55c FUN_14864f55c body=122 status=ok
// SIG undefined FUN_14864f55c(void)

longlong FUN_14864f55c(longlong param_1,longlong param_2)

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
    FUN_14864f5d6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14864f5d6 FUN_14864f5d6 body=340 status=ok
// SIG undefined FUN_14864f5d6(void)

longlong * FUN_14864f5d6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14584ac8c(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_14021b4e8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          puVar5 = (undefined8 *)(lVar6 + lVar3);
          *(undefined2 *)puVar5 = 0;
          *(undefined8 *)((longlong)puVar5 + 4) = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *(undefined4 *)(puVar5 + 4) = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((undefined8 *)(lVar2 + lVar6) + 1);
          *puVar5 = *(undefined8 *)(lVar2 + lVar6);
          FUN_1447715ec(lVar3 + 0x10 + lVar6,lVar2 + 0x10 + lVar6);
          puVar5[7] = *(undefined8 *)(lVar2 + 0x38 + lVar6);
          puVar5[8] = *(undefined8 *)(lVar2 + 0x40 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x48;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 14864f74a FUN_14864f74a body=63 status=ok
// SIG undefined FUN_14864f74a(void)

undefined1 FUN_14864f74a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14864f8ae(param_2,param_3);
    param_3 = param_3 + 0x2c8;
    param_2 = param_2 + 0x2c8;
  }
  return 1;
}



// FUNCTION 14864f7b2 FUN_14864f7b2 body=59 status=ok
// SIG undefined FUN_14864f7b2(void)

undefined8 FUN_14864f7b2(longlong *param_1)

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



// FUNCTION 14864f7fe FUN_14864f7fe body=40 status=ok
// SIG undefined FUN_14864f7fe(void)

void FUN_14864f7fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c8) == '\x01') {
    FUN_145c82226(param_2);
    *(undefined1 *)(param_2 + 0x2c8) = 0;
  }
  return;
}



// FUNCTION 14864f874 FUN_14864f874 body=57 status=ok
// SIG undefined FUN_14864f874(void)

void FUN_14864f874(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58218 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58218 = FUN_140002ddd(FUN_1464c0c3d,uVar1,L"GbxActivityGlobals");
  }
  return;
}



// FUNCTION 14864f8ae FUN_14864f8ae body=452 status=ok
// SIG undefined FUN_14864f8ae(void)

longlong FUN_14864f8ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0x58);
  uVar8 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar8;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined4 *)(param_2 + 0x7c);
  uVar7 = *(undefined4 *)(param_2 + 0x80);
  uVar8 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  FUN_144983130(param_1 + 0xb0,param_2 + 0xb0);
  FUN_144983130(param_1 + 0xe8,param_2 + 0xe8);
  FUN_144983130(param_1 + 0x120,param_2 + 0x120);
  FUN_144983130(param_1 + 0x158,param_2 + 0x158);
  FUN_144983130(param_1 + 400,param_2 + 400);
  FUN_14864fa72(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_14864e422(param_1 + 0x218,param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  uVar6 = *(undefined4 *)(param_2 + 0x274);
  uVar7 = *(undefined4 *)(param_2 + 0x278);
  uVar8 = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = uVar6;
  *(undefined4 *)(param_1 + 0x278) = uVar7;
  *(undefined4 *)(param_1 + 0x27c) = uVar8;
  FUN_144a787a6(param_1 + 0x280,param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  uVar6 = *(undefined4 *)(param_2 + 0x29c);
  uVar7 = *(undefined4 *)(param_2 + 0x2a0);
  uVar8 = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = uVar6;
  *(undefined4 *)(param_1 + 0x2a0) = uVar7;
  *(undefined4 *)(param_1 + 0x2a4) = uVar8;
  FUN_144a787a6(param_1 + 0x2a8,param_2 + 0x2a8);
  uVar3 = *(undefined8 *)(param_2 + 0x2b8);
  lVar4 = *(longlong *)(param_2 + 0x2c0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  *(longlong *)(param_1 + 0x2c0) = lVar4;
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



// FUNCTION 14864fa72 FUN_14864fa72 body=122 status=ok
// SIG undefined FUN_14864fa72(void)

longlong FUN_14864fa72(longlong param_1,longlong param_2)

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
    FUN_14864faec(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14864faec FUN_14864faec body=287 status=ok
// SIG undefined FUN_14864faec(void)

longlong * FUN_14864faec(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c823f6(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_14619ed96(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 8 + lVar6) = *(undefined4 *)(lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x10 + lVar6) = 0;
          FUN_14864fc0c(lVar3 + 0x18 + lVar6,lVar2 + 0x18 + lVar6);
          *(undefined8 *)(lVar3 + 0x1b8 + lVar6) = *(undefined8 *)(lVar2 + 0x1b8 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x1c0;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14864fc0c FUN_14864fc0c body=138 status=ok
// SIG undefined FUN_14864fc0c(void)

longlong FUN_14864fc0c(longlong param_1,longlong param_2)

{
  FUN_147091680();
  FUN_147091680(param_1 + 0x70,param_2 + 0x70);
  FUN_147091680(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  FUN_14864f55c(param_1 + 0x150,param_2 + 0x150);
  return param_1;
}



// FUNCTION 14864fcdc FUN_14864fcdc body=73 status=ok
// SIG undefined FUN_14864fcdc(void)

undefined8 FUN_14864fcdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_14864d15a();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864fd4e FUN_14864fd4e body=59 status=ok
// SIG undefined FUN_14864fd4e(void)

undefined8 FUN_14864fd4e(longlong *param_1)

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



// FUNCTION 14864fe4a FUN_14864fe4a body=81 status=ok
// SIG undefined FUN_14864fe4a(void)

undefined1 FUN_14864fe4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_14864ffb4(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14864fec4 FUN_14864fec4 body=59 status=ok
// SIG undefined FUN_14864fec4(void)

undefined8 FUN_14864fec4(longlong *param_1)

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



// FUNCTION 14864ff0a FUN_14864ff0a body=34 status=ok
// SIG undefined FUN_14864ff0a(void)

void FUN_14864ff0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145984954(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14864ff7a FUN_14864ff7a body=57 status=ok
// SIG undefined FUN_14864ff7a(void)

void FUN_14864ff7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58280 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58280 = FUN_140002ddd(FUN_1464c0e19,uVar1,L"GbxActivityMapInitializationDef");
  }
  return;
}



// FUNCTION 14864ffb4 FUN_14864ffb4 body=79 status=ok
// SIG undefined FUN_14864ffb4(void)

undefined8 * FUN_14864ffb4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148650004(param_1,iVar1);
      FUN_148650066(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148650004 FUN_148650004 body=98 status=ok
// SIG undefined FUN_148650004(void)

void FUN_148650004(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148650066 FUN_148650066 body=66 status=ok
// SIG undefined FUN_148650066(void)

void FUN_148650066(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_14184912c(param_1,param_2);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148650134 FUN_148650134 body=63 status=ok
// SIG undefined FUN_148650134(void)

undefined1 FUN_148650134(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486502de(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14865019c FUN_14865019c body=59 status=ok
// SIG undefined FUN_14865019c(void)

undefined8 FUN_14865019c(longlong *param_1)

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



// FUNCTION 1486501e8 FUN_1486501e8 body=38 status=ok
// SIG undefined FUN_1486501e8(void)

void FUN_1486501e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1405d8850(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14865025c FUN_14865025c body=38 status=ok
// SIG undefined FUN_14865025c(void)

undefined8 FUN_14865025c(undefined8 param_1,int param_2)

{
  FUN_1405d8850();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148650282 FUN_148650282 body=83 status=ok
// SIG undefined FUN_148650282(void)

undefined8 * FUN_148650282(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b082a90;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486502de FUN_1486502de body=103 status=ok
// SIG undefined FUN_1486502de(void)

longlong FUN_1486502de(longlong param_1,longlong param_2)

{
  FUN_14861edc2();
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_1410d4484(param_1 + 0x60,param_2 + 0x60);
  FUN_140ffff0a(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 148650346 FUN_148650346 body=38 status=ok
// SIG undefined FUN_148650346(void)

undefined8 FUN_148650346(undefined8 param_1,int param_2)

{
  FUN_14125d002();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486503ca FUN_1486503ca body=54 status=ok
// SIG undefined FUN_1486503ca(void)

undefined1 FUN_1486503ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650538(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148650428 FUN_148650428 body=59 status=ok
// SIG undefined FUN_148650428(void)

undefined8 FUN_148650428(longlong *param_1)

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



// FUNCTION 14865046e FUN_14865046e body=34 status=ok
// SIG undefined FUN_14865046e(void)

void FUN_14865046e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1486504de(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1486504de FUN_1486504de body=90 status=ok
// SIG undefined FUN_1486504de(void)

void FUN_1486504de(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148650538 FUN_148650538 body=75 status=ok
// SIG undefined FUN_148650538(void)

longlong FUN_148650538(longlong param_1,longlong param_2)

{
  FUN_148650584();
  FUN_14862fb42(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  FUN_1403de7ba(param_1 + 0x30,param_2 + 0x30);
  FUN_1403de7ba(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148650584 FUN_148650584 body=84 status=ok
// SIG undefined FUN_148650584(void)

longlong * FUN_148650584(longlong *param_1,longlong *param_2)

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



// FUNCTION 148650642 FUN_148650642 body=59 status=ok
// SIG undefined FUN_148650642(void)

undefined8 FUN_148650642(longlong *param_1)

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



// FUNCTION 1486506e2 FUN_1486506e2 body=29 status=ok
// SIG undefined FUN_1486506e2(void)

undefined8 FUN_1486506e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148650700 FUN_148650700 body=55 status=ok
// SIG undefined FUN_148650700(void)

void FUN_148650700(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58490 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58490 = FUN_140002ddd(FUN_1464c12f9,uVar1,L"GbxActorPartInsertInfo");
  }
  return;
}



// FUNCTION 148650768 FUN_148650768 body=75 status=ok
// SIG undefined FUN_148650768(void)

undefined1 FUN_148650768(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_1409e3b3c(param_2 + -0x18,param_3 + -0x18);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486507dc FUN_1486507dc body=59 status=ok
// SIG undefined FUN_1486507dc(void)

undefined8 FUN_1486507dc(longlong *param_1)

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



// FUNCTION 148650822 FUN_148650822 body=32 status=ok
// SIG undefined FUN_148650822(void)

void FUN_148650822(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1486508bc(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148650884 FUN_148650884 body=55 status=ok
// SIG undefined FUN_148650884(void)

void FUN_148650884(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb584a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb584a8 = FUN_140002ddd(FUN_1464c1391,uVar1,L"GbxActorPartInsertItem");
  }
  return;
}



// FUNCTION 1486508bc FUN_1486508bc body=65 status=ok
// SIG undefined FUN_1486508bc(void)

void FUN_1486508bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b082af8;
  plVar3 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x0001486508f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148650932 FUN_148650932 body=63 status=ok
// SIG undefined FUN_148650932(void)

undefined1 FUN_148650932(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14865099a FUN_14865099a body=59 status=ok
// SIG undefined FUN_14865099a(void)

undefined8 FUN_14865099a(longlong *param_1)

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



// FUNCTION 1486509e6 FUN_1486509e6 body=38 status=ok
// SIG undefined FUN_1486509e6(void)

void FUN_1486509e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148650a5e FUN_148650a5e body=174 status=ok
// SIG undefined FUN_148650a5e(void)

longlong FUN_148650a5e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
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
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x44);
  FUN_14862fb42(param_1 + 0x48,param_2 + 0x48);
  FUN_148650b0c(param_1 + 0x58,param_2 + 0x58);
  FUN_148650b0c(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 148650b0c FUN_148650b0c body=93 status=ok
// SIG undefined FUN_148650b0c(void)

undefined8 * FUN_148650b0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403d7755(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148650b6a(param_1,iVar1);
      FUN_148650bd9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148650b6a FUN_148650b6a body=111 status=ok
// SIG undefined FUN_148650b6a(void)

void FUN_148650b6a(longlong param_1,int param_2,int param_3)

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
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148650bd9 FUN_148650bd9 body=88 status=ok
// SIG undefined FUN_148650bd9(void)

void FUN_148650bd9(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined ***)(param_1 + -0x20) = &PTR_FUN_14b082af8;
      FUN_141845010(param_1 + -0x18,param_2 + -0x18);
      FUN_1401f3da4(param_1,param_2);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148650c32 FUN_148650c32 body=38 status=ok
// SIG undefined FUN_148650c32(void)

undefined8 FUN_148650c32(undefined8 param_1,int param_2)

{
  FUN_1403d767a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148650c58 FUN_148650c58 body=55 status=ok
// SIG undefined FUN_148650c58(void)

void FUN_148650c58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb584c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb584c0 = FUN_140002ddd(FUN_1418490c1,uVar1,L"GbxActorPartBaseDef");
  }
  return;
}



// FUNCTION 148650cb4 FUN_148650cb4 body=48 status=ok
// SIG undefined FUN_148650cb4(void)

void FUN_148650cb4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07d230;
  return;
}



// FUNCTION 148650ce4 FUN_148650ce4 body=32 status=ok
// SIG undefined FUN_148650ce4(void)

void FUN_148650ce4(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07d230;
  return;
}



// FUNCTION 148650d28 FUN_148650d28 body=63 status=ok
// SIG undefined FUN_148650d28(void)

undefined1 FUN_148650d28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148650d90 FUN_148650d90 body=59 status=ok
// SIG undefined FUN_148650d90(void)

undefined8 FUN_148650d90(longlong *param_1)

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



// FUNCTION 148650ddc FUN_148650ddc body=38 status=ok
// SIG undefined FUN_148650ddc(void)

void FUN_148650ddc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148650e54 FUN_148650e54 body=38 status=ok
// SIG undefined FUN_148650e54(void)

undefined8 FUN_148650e54(undefined8 param_1,int param_2)

{
  FUN_1403d767a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148650e7a FUN_148650e7a body=55 status=ok
// SIG undefined FUN_148650e7a(void)

void FUN_148650e7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb584d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb584d8 = FUN_140002ddd(FUN_1464c1260,uVar1,L"GbxActorPartDef");
  }
  return;
}



// FUNCTION 148650f00 FUN_148650f00 body=42 status=ok
// SIG undefined FUN_148650f00(void)

void FUN_148650f00(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86928(param_2);
  return;
}



// FUNCTION 148650f40 FUN_148650f40 body=54 status=ok
// SIG undefined FUN_148650f40(void)

undefined1 FUN_148650f40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865105c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148650f9e FUN_148650f9e body=59 status=ok
// SIG undefined FUN_148650f9e(void)

undefined8 FUN_148650f9e(longlong *param_1)

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



// FUNCTION 148650fe4 FUN_148650fe4 body=53 status=ok
// SIG undefined FUN_148650fe4(void)

void FUN_148650fe4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140c86928(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14865105c FUN_14865105c body=122 status=ok
// SIG undefined FUN_14865105c(void)

longlong FUN_14865105c(longlong param_1,longlong param_2)

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
    FUN_1486510d6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486510d6 FUN_1486510d6 body=211 status=ok
// SIG undefined FUN_1486510d6(void)

undefined8 * FUN_1486510d6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c86bc6(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1486511aa(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486511aa FUN_1486511aa body=114 status=ok
// SIG undefined FUN_1486511aa(void)

undefined8 * FUN_1486511aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14865127e FUN_14865127e body=97 status=ok
// SIG undefined FUN_14865127e(void)

undefined1 FUN_14865127e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865105c(param_2,param_3);
    FUN_148651414(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 148651308 FUN_148651308 body=59 status=ok
// SIG undefined FUN_148651308(void)

undefined8 FUN_148651308(longlong *param_1)

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



// FUNCTION 148651354 FUN_148651354 body=38 status=ok
// SIG undefined FUN_148651354(void)

void FUN_148651354(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1486513bc(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}


