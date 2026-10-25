// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475ada76 FUN_1475ada76 body=38 status=ok
// SIG undefined FUN_1475ada76(void)

void FUN_1475ada76(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1475adaea FUN_1475adaea body=86 status=ok
// SIG undefined FUN_1475adaea(void)

longlong * FUN_1475adaea(longlong *param_1,longlong *param_2)

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
  return param_1;
}



// FUNCTION 1475adb41 FUN_1475adb41 body=204 status=ok
// SIG undefined FUN_1475adb41(void)

undefined8 FUN_1475adb41(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  uStack_a0 = 8;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475adc5e FUN_1475adc5e body=113 status=ok
// SIG undefined FUN_1475adc5e(void)

undefined1 FUN_1475adc5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475adcf8 FUN_1475adcf8 body=59 status=ok
// SIG undefined FUN_1475adcf8(void)

undefined8 FUN_1475adcf8(longlong *param_1)

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



// FUNCTION 1475add9a FUN_1475add9a body=37 status=ok
// SIG undefined FUN_1475add9a(void)

void FUN_1475add9a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_145e6d978(param_2);
  return;
}



// FUNCTION 1475addec FUN_1475addec body=63 status=ok
// SIG undefined FUN_1475addec(void)

undefined1 FUN_1475addec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475adf3c(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1475ade54 FUN_1475ade54 body=59 status=ok
// SIG undefined FUN_1475ade54(void)

undefined8 FUN_1475ade54(longlong *param_1)

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



// FUNCTION 1475adea0 FUN_1475adea0 body=40 status=ok
// SIG undefined FUN_1475adea0(void)

void FUN_1475adea0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145d38d30(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1475adf16 FUN_1475adf16 body=38 status=ok
// SIG undefined FUN_1475adf16(void)

undefined8 FUN_1475adf16(undefined8 param_1,int param_2)

{
  FUN_145d38d30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475adf3c FUN_1475adf3c body=65 status=ok
// SIG undefined FUN_1475adf3c(void)

longlong FUN_1475adf3c(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  FUN_147539dac(param_1 + 0x50,param_2 + 0x50);
  FUN_1475adf7e(param_1 + 0x60,param_2 + 0x60);
  FUN_147a408e2(param_1 + 0x70);
  return param_1;
}



// FUNCTION 1475adf7e FUN_1475adf7e body=79 status=ok
// SIG undefined FUN_1475adf7e(void)

undefined8 * FUN_1475adf7e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1475adfce(param_1,iVar1);
      FUN_1475ae041(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475adfce FUN_1475adfce body=115 status=ok
// SIG undefined FUN_1475adfce(void)

void FUN_1475adfce(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1475ae041 FUN_1475ae041 body=110 status=ok
// SIG undefined FUN_1475ae041(void)

void FUN_1475ae041(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar11);
      *(longlong *)(param_1 + lVar11) = lVar2;
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_1456cec3c();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      lVar11 = lVar11 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475ae160 FUN_1475ae160 body=70 status=ok
// SIG undefined FUN_1475ae160(void)

undefined8 FUN_1475ae160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147539d66(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 1475ae1ce FUN_1475ae1ce body=59 status=ok
// SIG undefined FUN_1475ae1ce(void)

undefined8 FUN_1475ae1ce(longlong *param_1)

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



// FUNCTION 1475ae214 FUN_1475ae214 body=32 status=ok
// SIG undefined FUN_1475ae214(void)

void FUN_1475ae214(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1404dbac8(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1475ae284 FUN_1475ae284 body=59 status=ok
// SIG undefined FUN_1475ae284(void)

undefined8 * FUN_1475ae284(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4a9c30;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ae2c0 FUN_1475ae2c0 body=78 status=ok
// SIG undefined FUN_1475ae2c0(void)

undefined8 FUN_1475ae2c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475ae390();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ae310 FUN_1475ae310 body=57 status=ok
// SIG undefined FUN_1475ae310(void)

void FUN_1475ae310(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1475ae34a FUN_1475ae34a body=70 status=ok
// SIG undefined FUN_1475ae34a(void)

void FUN_1475ae34a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_1475ae4be(param_1 + 8,lVar1,(int)lVar2);
  FUN_147563f92(param_1 + 0x30,lVar1,(int)lVar2);
  return;
}



// FUNCTION 1475ae390 FUN_1475ae390 body=300 status=ok
// SIG undefined FUN_1475ae390(void)

undefined2 * FUN_1475ae390(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x30));
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x48) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_1475ae4be(param_1 + 8,local_78,local_70);
    FUN_147563f92(param_1 + 0x30,lVar1,uVar2);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ae4be FUN_1475ae4be body=157 status=ok
// SIG undefined FUN_1475ae4be(void)

void FUN_1475ae4be(short *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *param_1) goto LAB_1475ae4f1;
      plVar6 = plVar6 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1475ae4f1:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  lVar4 = *plVar6;
  lVar5 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar6 + 0x1c);
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar4 + lVar5);
  *puVar1 = *(undefined8 *)(param_1 + 4);
  puVar1[1] = uVar3;
  if ((char)param_1[0x10] == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1475ae57c FUN_1475ae57c body=48 status=ok
// SIG undefined FUN_1475ae57c(void)

void FUN_1475ae57c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475ae5c2 FUN_1475ae5c2 body=96 status=ok
// SIG undefined FUN_1475ae5c2(void)

undefined1 FUN_1475ae5c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar6 + 0x20,param_3 + lVar6 + 0x20);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475ae64a FUN_1475ae64a body=59 status=ok
// SIG undefined FUN_1475ae64a(void)

undefined8 FUN_1475ae64a(longlong *param_1)

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



// FUNCTION 1475ae6e8 FUN_1475ae6e8 body=52 status=ok
// SIG undefined FUN_1475ae6e8(void)

void FUN_1475ae6e8(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1475ae768 FUN_1475ae768 body=54 status=ok
// SIG undefined FUN_1475ae768(void)

undefined1 FUN_1475ae768(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475ae880(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1475ae7c6 FUN_1475ae7c6 body=59 status=ok
// SIG undefined FUN_1475ae7c6(void)

undefined8 FUN_1475ae7c6(longlong *param_1)

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



// FUNCTION 1475ae80c FUN_1475ae80c body=38 status=ok
// SIG undefined FUN_1475ae80c(void)

void FUN_1475ae80c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1475ae880 FUN_1475ae880 body=248 status=ok
// SIG undefined FUN_1475ae880(void)

longlong * FUN_1475ae880(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
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
  plVar1 = param_2 + 1;
  lVar3 = FUN_1446ddbd2();
  if (param_2[1] == 0) {
    if ((int)param_2[4] != 0) goto LAB_1475ae8cf;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 2);
    if ((cVar2 != '\0') || ((int)param_2[4] == 0)) {
      lVar4 = *plVar1;
      goto LAB_1475ae942;
    }
LAB_1475ae8cf:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_1475ae8f4;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1475ae8f4:
        *plVar1 = lVar4;
        goto LAB_1475ae942;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_1475ae942:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1475ae9b2 FUN_1475ae9b2 body=54 status=ok
// SIG undefined FUN_1475ae9b2(void)

undefined1 FUN_1475ae9b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475ae880(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1475aea10 FUN_1475aea10 body=59 status=ok
// SIG undefined FUN_1475aea10(void)

undefined8 FUN_1475aea10(longlong *param_1)

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



// FUNCTION 1475aea56 FUN_1475aea56 body=38 status=ok
// SIG undefined FUN_1475aea56(void)

void FUN_1475aea56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1475aeacc FUN_1475aeacc body=37 status=ok
// SIG undefined FUN_1475aeacc(void)

void FUN_1475aeacc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_1432f3828(param_2);
  return;
}



// FUNCTION 1475aeb1e FUN_1475aeb1e body=63 status=ok
// SIG undefined FUN_1475aeb1e(void)

undefined1 FUN_1475aeb1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475aec6c(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1475aeb86 FUN_1475aeb86 body=59 status=ok
// SIG undefined FUN_1475aeb86(void)

undefined8 FUN_1475aeb86(longlong *param_1)

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



// FUNCTION 1475aebd2 FUN_1475aebd2 body=38 status=ok
// SIG undefined FUN_1475aebd2(void)

void FUN_1475aebd2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_140f00b48(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1475aec46 FUN_1475aec46 body=38 status=ok
// SIG undefined FUN_1475aec46(void)

undefined8 FUN_1475aec46(undefined8 param_1,int param_2)

{
  FUN_140f00b48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475aec6c FUN_1475aec6c body=65 status=ok
// SIG undefined FUN_1475aec6c(void)

longlong FUN_1475aec6c(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  FUN_147539dac(param_1 + 0x50,param_2 + 0x50);
  FUN_1475aecae(param_1 + 0x60,param_2 + 0x60);
  FUN_147a408e2(param_1 + 0x70);
  return param_1;
}



// FUNCTION 1475aecae FUN_1475aecae body=93 status=ok
// SIG undefined FUN_1475aecae(void)

undefined8 * FUN_1475aecae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f00c57(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475aed0c(param_1,iVar1);
      FUN_1475aed7f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475aed0c FUN_1475aed0c body=115 status=ok
// SIG undefined FUN_1475aed0c(void)

void FUN_1475aed0c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1475aed7f FUN_1475aed7f body=52 status=ok
// SIG undefined FUN_1475aed7f(void)

void FUN_1475aed7f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141133e44(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1475aee64 FUN_1475aee64 body=70 status=ok
// SIG undefined FUN_1475aee64(void)

undefined8 FUN_1475aee64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147539d66(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 1475aeed2 FUN_1475aeed2 body=59 status=ok
// SIG undefined FUN_1475aeed2(void)

undefined8 FUN_1475aeed2(longlong *param_1)

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



// FUNCTION 1475aef18 FUN_1475aef18 body=32 status=ok
// SIG undefined FUN_1475aef18(void)

void FUN_1475aef18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1404dbac8(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1475aefbc FUN_1475aefbc body=63 status=ok
// SIG undefined FUN_1475aefbc(void)

undefined1 FUN_1475aefbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475af10e(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 1475af028 FUN_1475af028 body=59 status=ok
// SIG undefined FUN_1475af028(void)

undefined8 FUN_1475af028(longlong *param_1)

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



// FUNCTION 1475af074 FUN_1475af074 body=38 status=ok
// SIG undefined FUN_1475af074(void)

void FUN_1475af074(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_14156b236(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 1475af0e8 FUN_1475af0e8 body=38 status=ok
// SIG undefined FUN_1475af0e8(void)

undefined8 FUN_1475af0e8(undefined8 param_1,int param_2)

{
  FUN_14156b236();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475af10e FUN_1475af10e body=90 status=ok
// SIG undefined FUN_1475af10e(void)

longlong FUN_1475af10e(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  FUN_147539dac(param_1 + 0x50,param_2 + 0x50);
  FUN_140bee9ec(param_1 + 0x60,param_2 + 0x60);
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_147a408e2(param_1 + 0x88);
  return param_1;
}



// FUNCTION 1475af16a FUN_1475af16a body=38 status=ok
// SIG undefined FUN_1475af16a(void)

undefined8 FUN_1475af16a(undefined8 param_1,int param_2)

{
  FUN_1475a4d22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475af190 FUN_1475af190 body=39 status=ok
// SIG undefined FUN_1475af190(void)

void FUN_1475af190(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x88,0x10);
  FUN_1475af1b8(uVar1,param_1);
  return;
}



// FUNCTION 1475af1b8 FUN_1475af1b8 body=220 status=ok
// SIG undefined FUN_1475af1b8(void)

undefined8 * FUN_1475af1b8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a4aa4a0;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0x70);
  _Src = *(void **)(param_2 + 0x68);
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1475af294(param_1 + 0xf,iVar1,0);
    FUN_1475af307(param_1[0xf],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1475af294 FUN_1475af294 body=115 status=ok
// SIG undefined FUN_1475af294(void)

void FUN_1475af294(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1475af307 FUN_1475af307 body=148 status=ok
// SIG undefined FUN_1475af307(void)

void FUN_1475af307(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475af39b FUN_1475af39b body=47 status=ok
// SIG undefined FUN_1475af39b(void)

void FUN_1475af39b(longlong param_1,int param_2)

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



// FUNCTION 1475af3ca FUN_1475af3ca body=59 status=ok
// SIG undefined FUN_1475af3ca(void)

undefined8 * FUN_1475af3ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4aa4d0;
  if (*(char *)((longlong)param_1 + 0x1e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475af406 FUN_1475af406 body=78 status=ok
// SIG undefined FUN_1475af406(void)

undefined8 FUN_1475af406(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475a6afc();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475af456 FUN_1475af456 body=82 status=ok
// SIG undefined FUN_1475af456(void)

void FUN_1475af456(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1475af4f0(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475af4aa FUN_1475af4aa body=70 status=ok
// SIG undefined FUN_1475af4aa(void)

void FUN_1475af4aa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_1475af532(param_1 + 8,lVar1,(int)lVar2);
  FUN_140dbd8a8(param_1 + 0x18,lVar1,(int)lVar2);
  return;
}



// FUNCTION 1475af4f0 FUN_1475af4f0 body=65 status=ok
// SIG undefined FUN_1475af4f0(void)

void FUN_1475af4f0(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[8]);
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0xd]);
  return;
}



// FUNCTION 1475af532 FUN_1475af532 body=148 status=ok
// SIG undefined FUN_1475af532(void)

void FUN_1475af532(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1475af565;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1475af565:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 2);
  if ((char)param_1[6] == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1475af5c6 FUN_1475af5c6 body=113 status=ok
// SIG undefined FUN_1475af5c6(void)

void FUN_1475af5c6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 1475af638 FUN_1475af638 body=210 status=ok
// SIG undefined FUN_1475af638(void)

int * FUN_1475af638(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x24) < iVar5) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar8 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar8 * 0x24) <= iVar5)) {
      piVar9 = (int *)(lVar7 + (ulonglong)uVar8 * 0x24);
      goto LAB_1475af6d3;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1475af70a(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar4 = (ulonglong)uVar8 * 0x24;
  memmove((void *)(lVar7 + lVar4 + 0x24),(void *)(lVar7 + lVar4),(ulonglong)(uVar2 - uVar8) * 0x24);
  piVar9 = (int *)(lVar4 + *param_1);
  iVar5 = *param_2;
LAB_1475af6d3:
  *piVar9 = iVar5;
  piVar9[1] = 0;
  piVar9[2] = 0;
  piVar9[3] = 0;
  piVar9[4] = 0;
  piVar9[4] = 0;
  piVar9[5] = 0;
  piVar9[6] = 0;
  piVar9[7] = 0;
  piVar9[8] = -1;
  return piVar9 + 1;
}



// FUNCTION 1475af70a FUN_1475af70a body=147 status=ok
// SIG undefined FUN_1475af70a(void)

void FUN_1475af70a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475af79e FUN_1475af79e body=316 status=ok
// SIG undefined FUN_1475af79e(void)

undefined4 * FUN_1475af79e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475af8dc(param_1,local_48);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined2 *)param_3[1];
  local_40[4] = puVar1[4];
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar3 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar6;
  local_40[2] = uVar7;
  local_40[3] = uVar3;
  *(undefined2 *)(local_40 + 5) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = FUN_144a78877(local_40[1] ^ *local_40,local_40[3] ^ local_40[2] ^ local_40[4]);
  cVar5 = FUN_1475af9c2(param_1,uVar6,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_40[7] = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1475afba2(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475af8dc FUN_1475af8dc body=229 status=ok
// SIG undefined FUN_1475af8dc(void)

int * FUN_1475af8dc(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 1475af9c2 FUN_1475af9c2 body=93 status=ok
// SIG undefined FUN_1475af9c2(void)

undefined8 FUN_1475af9c2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1475afa20(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1475afb30(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1475afa20 FUN_1475afa20 body=271 status=ok
// SIG undefined FUN_1475afa20(void)

int FUN_1475afa20(longlong *param_1,uint param_2,int *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x20;
        local_68 = *(int *)(lVar3 + 0x10 + lVar5);
        local_70 = *(undefined8 *)(lVar3 + 8 + lVar5);
        if ((*(int *)(lVar3 + lVar5) == *param_3) && (*(int *)(lVar3 + 4 + lVar5) == param_3[1])) {
          local_48 = param_3[4];
          local_50 = *(undefined8 *)(param_3 + 2);
          local_60 = local_70;
          local_58 = local_68;
          cVar1 = FUN_1401246e4(&local_60,&local_50);
          if ((cVar1 != '\0') && (local_58 == local_48)) goto LAB_1475afa4b;
          lVar3 = *param_1;
        }
        iVar4 = *(int *)(lVar3 + 0x18 + lVar5);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1475afa4b:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1475afb30 FUN_1475afb30 body=114 status=ok
// SIG undefined FUN_1475afb30(void)

void FUN_1475afb30(longlong *param_1,int param_2)

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



// FUNCTION 1475afba2 FUN_1475afba2 body=464 status=ok
// SIG undefined FUN_1475afba2(void)

void FUN_1475afba2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a78877(*(uint *)(lVar3 + 4 + lVar10) ^ *(uint *)(lVar3 + lVar10),
                              *(uint *)(lVar3 + 0xc + lVar10) ^ *(uint *)(lVar3 + 8 + lVar10) ^
                              *(uint *)(lVar3 + 0x10 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475afd74 FUN_1475afd74 body=88 status=ok
// SIG undefined FUN_1475afd74(void)

void FUN_1475afd74(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14a4ab760;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = DAT_14cab4520;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0xffffffff;
  FUN_1406ed278(param_2 + 7);
  *(undefined2 *)(param_2 + 0x29) = 0;
  *(byte *)((longlong)param_2 + 0x14c) = *(byte *)((longlong)param_2 + 0x14c) & 0xf8;
  return;
}



// FUNCTION 1475afdcc FUN_1475afdcc body=88 status=ok
// SIG undefined FUN_1475afdcc(void)

void FUN_1475afdcc(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14a4ab760;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = DAT_14cab4520;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0xffffffff;
  FUN_1406ed278(param_2 + 7);
  *(undefined2 *)(param_2 + 0x29) = 0;
  *(byte *)((longlong)param_2 + 0x14c) = *(byte *)((longlong)param_2 + 0x14c) & 0xf8;
  return;
}



// FUNCTION 1475afe48 FUN_1475afe48 body=172 status=ok
// SIG undefined FUN_1475afe48(void)

undefined8 FUN_1475afe48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 8 + lVar6) = *(undefined1 *)(param_3 + 8 + lVar6);
      *(undefined8 *)(param_2 + 0x10 + lVar6) = *(undefined8 *)(param_3 + 0x10 + lVar6);
      *(undefined4 *)(param_2 + 0x18 + lVar6) = *(undefined4 *)(param_3 + 0x18 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x30 + lVar6) = *(undefined8 *)(param_3 + 0x30 + lVar6);
      FUN_14753be88(param_2 + 0x38 + lVar6,param_3 + 0x38 + lVar6);
      *(undefined4 *)(param_2 + 0x148 + lVar6) = *(undefined4 *)(param_3 + 0x148 + lVar6);
      *(undefined1 *)(param_2 + 0x14c + lVar6) = *(undefined1 *)(param_3 + 0x14c + lVar6);
      lVar6 = lVar6 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475aff1c FUN_1475aff1c body=59 status=ok
// SIG undefined FUN_1475aff1c(void)

undefined8 FUN_1475aff1c(longlong *param_1)

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



// FUNCTION 1475aff68 FUN_1475aff68 body=49 status=ok
// SIG undefined FUN_1475aff68(void)

void FUN_1475aff68(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2a) == '\x01') {
    *param_2 = &PTR_FUN_14a4ab760;
    FUN_1404dbc70(param_2 + 7);
    *(undefined1 *)(param_2 + 0x2a) = 0;
  }
  return;
}



// FUNCTION 1475affea FUN_1475affea body=159 status=ok
// SIG undefined FUN_1475affea(void)

undefined8 * FUN_1475affea(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_14a464410;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  if (param_2 == param_1) {
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 2;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    param_1[9] = 2;
  }
  else {
    FUN_1407377d4(param_1 + 1,param_2 + 1);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 2;
    FUN_1407377d4(param_1 + 4,param_2 + 4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 2;
    FUN_140737960(param_1 + 7,param_2 + 7);
  }
  return param_1;
}



// FUNCTION 1475b008a FUN_1475b008a body=29 status=ok
// SIG undefined FUN_1475b008a(void)

undefined8 FUN_1475b008a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b00a8 FUN_1475b00a8 body=102 status=ok
// SIG undefined FUN_1475b00a8(void)

void FUN_1475b00a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14092ee58();
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



// FUNCTION 1475b0110 FUN_1475b0110 body=1241 status=ok
// SIG undefined FUN_1475b0110(void)

void FUN_1475b0110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  double local_298;
  undefined1 local_290 [16];
  ulonglong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_1d8 [128];
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  fVar13 = *(float *)(param_1 + 0x20);
  fVar12 = 0.0;
  if ((fVar13 < 0.0) || (fVar12 = 1.0, 1.0 < fVar13)) {
    *(float *)(param_1 + 0x20) = fVar12;
    fVar13 = fVar12;
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    fVar13 = 1.0 - fVar13;
    *(float *)(param_1 + 0x20) = fVar13;
  }
  local_2d8 = 1;
  FUN_147a1f6fc(param_3,&local_158,fVar13,1);
  *(double *)(param_4 + 4) = local_148;
  *param_4 = (undefined4)local_158;
  param_4[1] = local_158._4_4_;
  param_4[2] = (undefined4)uStack_150;
  param_4[3] = uStack_150._4_4_;
  local_2d8 = 1;
  FUN_147a20c86(param_3,&local_158,*(undefined4 *)(param_1 + 0x20),1);
  param_5[2] = local_148;
  *param_5 = local_158;
  param_5[1] = uStack_150;
  dVar7 = *param_5;
  dVar1 = param_5[1];
  dVar2 = param_5[2];
  dVar4 = sin(dVar7 * 0.01745329238474369);
  dVar5 = sin(dVar1 * 0.01745329238474369);
  dVar6 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar7 = cos(dVar7 * 0.01745329238474369);
  dVar1 = cos(dVar1 * 0.01745329238474369);
  dVar2 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  local_158 = dVar7 * dVar1;
  uStack_150 = dVar5 * dVar7;
  local_138 = dVar4 * dVar6 * dVar1 - dVar5 * dVar2;
  local_130 = dVar4 * dVar6 * dVar5 + dVar1 * dVar2;
  local_128 = -dVar6 * dVar7;
  local_118 = -(dVar4 * dVar2 * dVar1 + dVar5 * dVar6);
  local_110 = dVar1 * dVar6 - dVar5 * dVar4 * dVar2;
  local_108 = dVar7 * dVar2;
  local_140 = 0;
  local_120 = 0;
  local_100 = 0;
  local_f8 = DAT_14c8464e0;
  uStack_f0 = DAT_14c8464e8;
  local_e8 = DAT_14c8464f0;
  uVar8 = 0x3ff0000000000000;
  local_e0 = 0x3ff0000000000000;
  local_268 = 0;
  local_278 = 0;
  uStack_270 = 0;
  switch(*(undefined1 *)(param_1 + 0x25)) {
  case 2:
    goto LAB_1475b044e;
  case 3:
    uVar8 = 0xbff0000000000000;
  case 0:
    uStack_270 = 0;
    local_268 = 0;
    local_278 = uVar8;
    break;
  case 4:
    uVar8 = 0xbff0000000000000;
  case 1:
    uStack_270 = uVar8;
    break;
  case 5:
    uVar8 = 0xbff0000000000000;
LAB_1475b044e:
    uStack_270 = 0;
    local_278 = 0;
    local_268 = uVar8;
  }
  bVar3 = *(byte *)(param_1 + 0x24);
  local_280 = 0;
  uVar8 = 0;
  uVar14 = 0;
  uVar15 = 0;
  if ((ulonglong)bVar3 < 6) {
    local_280 = *(ulonglong *)(&DAT_14a4abdb0 + (uint)bVar3 * 8);
    uVar8 = *(undefined8 *)(&DAT_14a4abde0 + (ulonglong)bVar3 * 8);
    uVar14 = (undefined4)*(undefined8 *)(&DAT_14a4abe10 + (uint)bVar3 * 8);
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_14a4abe10 + (uint)bVar3 * 8) >> 0x20);
  }
  local_290._8_4_ = (int)uVar8;
  local_290._0_8_ = CONCAT44(uVar15,uVar14) ^ 0x8000000000000000;
  local_290._12_4_ = (uint)((ulonglong)uVar8 >> 0x20) ^ 0x80000000;
  local_280 = local_280 ^ 0x8000000000000000;
  local_148 = dVar4;
  FUN_14099e850(local_1d8,local_290,&local_278);
  FUN_1447fea8d(&local_258,local_1d8,&local_158);
  puVar10 = &local_258;
  puVar11 = &local_158;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_144a90b9e(&local_158,&local_258);
  param_5[2] = local_248;
  *(undefined4 *)param_5 = (undefined4)local_258;
  *(undefined4 *)((longlong)param_5 + 4) = local_258._4_4_;
  *(undefined4 *)(param_5 + 1) = uStack_250;
  *(undefined4 *)((longlong)param_5 + 0xc) = uStack_24c;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_5 = 0.0;
    param_5[2] = 0.0;
  }
  if (*(char *)(param_1 + 0x26) == '\0') {
    FUN_14480333a(param_2,&local_258);
    local_2c8 = (undefined4)local_258;
    uStack_2c4 = local_258._4_4_;
    uStack_2c0 = uStack_250;
    uStack_2bc = uStack_24c;
    local_2b8 = local_248;
    uStack_2b0 = uStack_240;
    FUN_1448052ee(&local_2c8,&local_2a8);
    param_5[2] = local_298;
    *(undefined4 *)param_5 = local_2a8;
    *(undefined4 *)((longlong)param_5 + 4) = uStack_2a4;
    *(undefined4 *)(param_5 + 1) = uStack_2a0;
    *(undefined4 *)((longlong)param_5 + 0xc) = uStack_29c;
  }
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b05ea FUN_1475b05ea body=29 status=ok
// SIG undefined FUN_1475b05ea(void)

undefined8 FUN_1475b05ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b0608 FUN_1475b0608 body=29 status=ok
// SIG undefined FUN_1475b0608(void)

undefined8 FUN_1475b0608(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b069e FUN_1475b069e body=111 status=ok
// SIG undefined FUN_1475b069e(void)

undefined8 FUN_1475b069e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined1 *)(param_2 + -0x30) = *(undefined1 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_1475b0838(param_2,param_3);
      param_3 = param_3 + 0x158;
      param_2 = param_2 + 0x158;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475b0736 FUN_1475b0736 body=59 status=ok
// SIG undefined FUN_1475b0736(void)

undefined8 FUN_1475b0736(longlong *param_1)

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



// FUNCTION 1475b0782 FUN_1475b0782 body=65 status=ok
// SIG undefined FUN_1475b0782(void)

void FUN_1475b0782(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2b) == '\x01') {
    *param_2 = &PTR_FUN_14a4abba0;
    FUN_145bfd3a0(param_2 + 7);
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2b) = 0;
  }
  return;
}



// FUNCTION 1475b0812 FUN_1475b0812 body=38 status=ok
// SIG undefined FUN_1475b0812(void)

undefined8 FUN_1475b0812(undefined8 param_1,int param_2)

{
  FUN_145bfd3a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b0838 FUN_1475b0838 body=99 status=ok
// SIG undefined FUN_1475b0838(void)

longlong FUN_1475b0838(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_147539d66();
  FUN_147539dac(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0x70);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  uVar7 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  FUN_1475b089c(param_1 + 0x88,param_2 + 0x88);
  FUN_147a408e2(param_1 + 0x98);
  return param_1;
}



// FUNCTION 1475b089c FUN_1475b089c body=89 status=ok
// SIG undefined FUN_1475b089c(void)

undefined8 * FUN_1475b089c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1475b08f6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1475b08f6 FUN_1475b08f6 body=115 status=ok
// SIG undefined FUN_1475b08f6(void)

void FUN_1475b08f6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,4);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475b09d6 FUN_1475b09d6 body=59 status=ok
// SIG undefined FUN_1475b09d6(void)

undefined8 FUN_1475b09d6(longlong *param_1)

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



// FUNCTION 1475b0a78 FUN_1475b0a78 body=56 status=ok
// SIG undefined FUN_1475b0a78(void)

void FUN_1475b0a78(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14a4abc80;
  FUN_14608ef32(param_2 + 4);
  *(byte *)(param_2 + 0x23) = *(byte *)(param_2 + 0x23) & 0xfc;
  return;
}



// FUNCTION 1475b0ab0 FUN_1475b0ab0 body=56 status=ok
// SIG undefined FUN_1475b0ab0(void)

void FUN_1475b0ab0(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14a4abc80;
  FUN_14608ef32(param_2 + 4);
  *(byte *)(param_2 + 0x23) = *(byte *)(param_2 + 0x23) & 0xfc;
  return;
}



// FUNCTION 1475b0b0c FUN_1475b0b0c body=130 status=ok
// SIG undefined FUN_1475b0b0c(void)

undefined8 FUN_1475b0b0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + 8 + lVar1) = *(undefined1 *)(param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x10 + lVar1) = *(undefined8 *)(param_3 + 0x10 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      FUN_1475b0cae(param_2 + 0x20 + lVar1,param_3 + 0x20 + lVar1);
      *(undefined1 *)(param_2 + 0x118 + lVar1) = *(undefined1 *)(param_3 + 0x118 + lVar1);
      lVar1 = lVar1 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475b0bb6 FUN_1475b0bb6 body=59 status=ok
// SIG undefined FUN_1475b0bb6(void)

undefined8 FUN_1475b0bb6(longlong *param_1)

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



// FUNCTION 1475b0c02 FUN_1475b0c02 body=51 status=ok
// SIG undefined FUN_1475b0c02(void)

void FUN_1475b0c02(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14a4abc80;
    FUN_145c31fda(param_2 + 4);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1475b0c84 FUN_1475b0c84 body=38 status=ok
// SIG undefined FUN_1475b0c84(void)

undefined8 FUN_1475b0c84(undefined8 param_1,int param_2)

{
  FUN_145c31fda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b0cae FUN_1475b0cae body=65 status=ok
// SIG undefined FUN_1475b0cae(void)

longlong FUN_1475b0cae(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  FUN_147539dac(param_1 + 0x50,param_2 + 0x50);
  FUN_1475b0cf0(param_1 + 0x60,param_2 + 0x60);
  FUN_147a408e2(param_1 + 0x70);
  return param_1;
}



// FUNCTION 1475b0cf0 FUN_1475b0cf0 body=95 status=ok
// SIG undefined FUN_1475b0cf0(void)

undefined8 * FUN_1475b0cf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c3202e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475b0d50(param_1,iVar1);
      FUN_1475b0dc3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475b0d50 FUN_1475b0d50 body=115 status=ok
// SIG undefined FUN_1475b0d50(void)

void FUN_1475b0d50(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1475b0dc3 FUN_1475b0dc3 body=68 status=ok
// SIG undefined FUN_1475b0dc3(void)

void FUN_1475b0dc3(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1475b0e08(param_1,param_2);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475b0e08 FUN_1475b0e08 body=183 status=ok
// SIG undefined FUN_1475b0e08(void)

undefined4 * FUN_1475b0e08(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar2 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1475b0ec0 FUN_1475b0ec0 body=69 status=ok
// SIG undefined FUN_1475b0ec0(void)

undefined8 * FUN_1475b0ec0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4aaad0;
  FUN_1475b5c2c(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b0f96 FUN_1475b0f96 body=63 status=ok
// SIG undefined FUN_1475b0f96(void)

undefined1 FUN_1475b0f96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475b10c0(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1475b0ffe FUN_1475b0ffe body=59 status=ok
// SIG undefined FUN_1475b0ffe(void)

undefined8 FUN_1475b0ffe(longlong *param_1)

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



// FUNCTION 1475b104a FUN_1475b104a body=40 status=ok
// SIG undefined FUN_1475b104a(void)

void FUN_1475b104a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1475b1abc(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1475b10c0 FUN_1475b10c0 body=123 status=ok
// SIG undefined FUN_1475b10c0(void)

longlong FUN_1475b10c0(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1475b113c(param_1 + 0x20,param_2 + 0x20);
  FUN_1475b119c(param_1 + 0x30,param_2 + 0x30);
  FUN_1475b11fc(param_1 + 0x40,param_2 + 0x40);
  FUN_1475b125c(param_1 + 0x50,param_2 + 0x50);
  FUN_1475b12bc(param_1 + 0x60,param_2 + 0x60);
  FUN_1475b131c(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 1475b113c FUN_1475b113c body=95 status=ok
// SIG undefined FUN_1475b113c(void)

undefined8 * FUN_1475b113c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458c57f7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475b137c(param_1,iVar1);
      FUN_1475b13ee(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475b119c FUN_1475b119c body=95 status=ok
// SIG undefined FUN_1475b119c(void)

undefined8 * FUN_1475b119c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458c5826(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475b143a(param_1,iVar1);
      FUN_1475b14ac(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475b11fc FUN_1475b11fc body=95 status=ok
// SIG undefined FUN_1475b11fc(void)

undefined8 * FUN_1475b11fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458c5855(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475b1624(param_1,iVar1);
      FUN_1475b1696(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475b125c FUN_1475b125c body=95 status=ok
// SIG undefined FUN_1475b125c(void)

undefined8 * FUN_1475b125c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458c5893(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475b1704(param_1,iVar1);
      FUN_1475b177a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475b12bc FUN_1475b12bc body=95 status=ok
// SIG undefined FUN_1475b12bc(void)

undefined8 * FUN_1475b12bc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458c58dd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475b1806(param_1,iVar1);
      FUN_1475b187c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475b131c FUN_1475b131c body=95 status=ok
// SIG undefined FUN_1475b131c(void)

undefined8 * FUN_1475b131c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458c57cc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1475b1988(param_1,iVar1);
      FUN_1475b19fa(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1475b137c FUN_1475b137c body=114 status=ok
// SIG undefined FUN_1475b137c(void)

void FUN_1475b137c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x118,8);
    iVar2 = (int)(uVar1 / 0x118);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x118,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475b13ee FUN_1475b13ee body=76 status=ok
// SIG undefined FUN_1475b13ee(void)

void FUN_1475b13ee(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_140737604(param_1,param_2);
      param_1 = param_1 + 0x118;
      param_2 = param_2 + 0x118;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475b143a FUN_1475b143a body=114 status=ok
// SIG undefined FUN_1475b143a(void)

void FUN_1475b143a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475b14ac FUN_1475b14ac body=76 status=ok
// SIG undefined FUN_1475b14ac(void)

void FUN_1475b14ac(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1475b14f8(param_1,param_2);
      param_1 = param_1 + 0x110;
      param_2 = param_2 + 0x110;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475b14f8 FUN_1475b14f8 body=300 status=ok
// SIG undefined FUN_1475b14f8(void)

undefined8 * FUN_1475b14f8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46e9c0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  pvVar2 = *(void **)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1);
  }
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1475b1624 FUN_1475b1624 body=114 status=ok
// SIG undefined FUN_1475b1624(void)

void FUN_1475b1624(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x228,8);
    iVar2 = (int)(uVar1 / 0x228);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x228,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475b1696 FUN_1475b1696 body=109 status=ok
// SIG undefined FUN_1475b1696(void)

void FUN_1475b1696(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x118;
    param_2 = param_2 + 0x118;
    do {
      *(undefined8 *)(param_1 + -0x118) = *(undefined8 *)(param_2 + -0x118);
      FUN_140737604(param_1 + -0x110,param_2 + -0x110);
      FUN_140737604(param_1,param_2);
      param_1 = param_1 + 0x228;
      param_2 = param_2 + 0x228;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475b1704 FUN_1475b1704 body=118 status=ok
// SIG undefined FUN_1475b1704(void)

void FUN_1475b1704(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x338,8);
    iVar2 = (int)(uVar1 / 0x338);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x338,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475b177a FUN_1475b177a body=139 status=ok
// SIG undefined FUN_1475b177a(void)

void FUN_1475b177a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      FUN_140737604();
      FUN_140737604(param_1 + lVar1 + 0x118,param_2 + lVar1 + 0x118);
      FUN_140737604(param_1 + lVar1 + 0x228,param_2 + lVar1 + 0x228);
      lVar1 = lVar1 + 0x338;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475b1806 FUN_1475b1806 body=118 status=ok
// SIG undefined FUN_1475b1806(void)

void FUN_1475b1806(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x448,8);
    iVar2 = (int)(uVar1 / 0x448);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x448,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475b187c FUN_1475b187c body=60 status=ok
// SIG undefined FUN_1475b187c(void)

void FUN_1475b187c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1475b18b8(param_1,param_2);
    param_1 = param_1 + 0x448;
    param_2 = param_2 + 0x448;
  }
  return;
}



// FUNCTION 1475b18b8 FUN_1475b18b8 body=95 status=ok
// SIG undefined FUN_1475b18b8(void)

undefined8 * FUN_1475b18b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_140737604(param_1 + 1,param_2 + 1);
  FUN_140737604(param_1 + 0x23,param_2 + 0x23);
  FUN_140737604(param_1 + 0x45,param_2 + 0x45);
  FUN_140737604(param_1 + 0x67,param_2 + 0x67);
  return param_1;
}



// FUNCTION 1475b1918 FUN_1475b1918 body=112 status=ok
// SIG undefined FUN_1475b1918(void)

void FUN_1475b1918(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_1404dbc70(param_1 + 0x888 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != -0x330);
  lVar1 = 0x558;
  do {
    FUN_1404dbc70(param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != 0x228);
  lVar1 = 0x228;
  do {
    FUN_1404dbc70(param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != -0x108);
  return;
}



// FUNCTION 1475b1988 FUN_1475b1988 body=114 status=ok
// SIG undefined FUN_1475b1988(void)

void FUN_1475b1988(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x998,8);
    iVar2 = (int)(uVar1 / 0x998);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x998,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1475b19fa FUN_1475b19fa body=60 status=ok
// SIG undefined FUN_1475b19fa(void)

void FUN_1475b19fa(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1475b1a36(param_1,param_2);
    param_1 = param_1 + 0x998;
    param_2 = param_2 + 0x998;
  }
  return;
}



// FUNCTION 1475b1a36 FUN_1475b1a36 body=132 status=ok
// SIG undefined FUN_1475b1a36(void)

undefined8 * FUN_1475b1a36(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = 8;
  do {
    FUN_140737604((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x338);
  lVar1 = 0x338;
  do {
    FUN_140737604((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x668);
  lVar1 = 0x668;
  do {
    FUN_140737604((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x998);
  return param_1;
}



// FUNCTION 1475b1abc FUN_1475b1abc body=186 status=ok
// SIG undefined FUN_1475b1abc(void)

void FUN_1475b1abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4abd60;
  FUN_1458c57cc(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c58dd(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c5893(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c5855(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c5826(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c57f7(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475b1b76 FUN_1475b1b76 body=225 status=ok
// SIG undefined FUN_1475b1b76(void)

void FUN_1475b1b76(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_147526062();
  if (uVar2 != param_2) {
    plVar5 = *(longlong **)(param_1 + 0x18);
    lVar4 = (longlong)(int)param_2;
    plVar1 = (longlong *)(*plVar5 + lVar4 * 0x28);
    local_60 = *plVar1;
    if ((DAT_14c950c29 == '\x01') && (local_60 != 0)) {
      FUN_1456cec3c();
      plVar5 = *(longlong **)(param_1 + 0x18);
    }
    local_58 = (undefined4)plVar1[1];
    uStack_54 = *(undefined4 *)((longlong)plVar1 + 0xc);
    uStack_50 = (undefined4)plVar1[2];
    uStack_4c = *(undefined4 *)((longlong)plVar1 + 0x14);
    local_48 = plVar1[3];
    lStack_40 = plVar1[4];
    iVar3 = (int)plVar5[1];
    if (~param_2 + iVar3 != 0) {
      memmove((void *)(*plVar5 + lVar4 * 0x28),(void *)(*plVar5 + lVar4 * 0x28 + 0x28),
              (longlong)(int)(~param_2 + iVar3) * 0x28);
      iVar3 = (int)plVar5[1];
    }
    *(int *)(plVar5 + 1) = iVar3 + -1;
    FUN_1475b1c58(*(undefined8 *)(param_1 + 0x18),&local_60,uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b1c58 FUN_1475b1c58 body=161 status=ok
// SIG undefined FUN_1475b1c58(void)

int FUN_1475b1c58(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1475b1cfa(param_1,iVar2);
  }
  lVar4 = (longlong)param_3 * 0x28;
  memmove((void *)(*param_1 + lVar4 + 0x28),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar2 - param_3) * 0x28);
  lVar1 = *param_1 + lVar4;
  lVar3 = *param_2;
  *(longlong *)(*param_1 + lVar4) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar3 = param_2[1];
  lVar4 = param_2[2];
  lVar5 = param_2[4];
  *(longlong *)(lVar1 + 0x18) = param_2[3];
  *(longlong *)(lVar1 + 0x20) = lVar5;
  *(longlong *)(lVar1 + 8) = lVar3;
  *(longlong *)(lVar1 + 0x10) = lVar4;
  return param_3;
}



// FUNCTION 1475b1cfa FUN_1475b1cfa body=147 status=ok
// SIG undefined FUN_1475b1cfa(void)

void FUN_1475b1cfa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b1d8e FUN_1475b1d8e body=215 status=ok
// SIG undefined FUN_1475b1d8e(void)

ulonglong FUN_1475b1d8e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_1475b1c58(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b1e66 FUN_1475b1e66 body=350 status=ok
// SIG undefined FUN_1475b1e66(void)

void FUN_1475b1e66(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x28),
            (void *)(*plVar3 + (longlong)(int)param_2 * 0x28 + 0x28),(longlong)iVar6 * 0x28);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b1fc6 FUN_1475b1fc6 body=48 status=ok
// SIG undefined FUN_1475b1fc6(void)

void FUN_1475b1fc6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1475b1ff6 FUN_1475b1ff6 body=59 status=ok
// SIG undefined FUN_1475b1ff6(void)

undefined8 * FUN_1475b1ff6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4a9c30;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b2032 FUN_1475b2032 body=147 status=ok
// SIG undefined FUN_1475b2032(void)

void FUN_1475b2032(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14a4a9c30;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 0x28);
  *(char *)(param_1 + 5) = cVar2;
  if (cVar2 == '\x01') {
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[3] = uVar3;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x30);
  cVar2 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar2;
  if (cVar2 == '\x01') {
    param_1[7] = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  *param_1 = &PTR_FUN_14a4aac50;
  return;
}



// FUNCTION 1475b20c6 FUN_1475b20c6 body=373 status=ok
// SIG undefined FUN_1475b20c6(void)

void FUN_1475b20c6(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cab4898 == 0) {
    uVar5 = FUN_140d2a6db();
    DAT_14cab4898 = FUN_140002ddd(FUN_146345723,uVar5,L"MovieSceneDoublePerlinNoiseChannel");
  }
  local_50 = *(longlong *)(DAT_14cab4898 + 0x18);
  uVar9 = *(uint *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar6 = param_1;
  }
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    local_70 = param_2;
    do {
      uVar1 = uVar8 + (uVar9 >> 1);
      local_68 = *(longlong *)(lVar6 + (ulonglong)uVar1 * 0x18);
      iVar4 = FUN_144a78538(&local_68,&local_50);
      uVar1 = (uVar9 & 1) + uVar1;
      if (-1 < iVar4) {
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(param_1 + 0x20);
    param_2 = local_70;
  }
  if ((int)uVar8 < (int)uVar9) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    lVar7 = lVar6;
    if (lVar6 == 0) {
      lVar7 = param_1;
    }
    if (*(longlong *)(lVar7 + (ulonglong)uVar8 * 0x18) == local_50) goto LAB_1475b21dd;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = local_50;
  FUN_140f93936(param_1,&local_68,uVar8);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
LAB_1475b21dd:
  if (lVar6 != 0) {
    param_1 = lVar6;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar8 * 0x18);
  iVar4 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
    FUN_140aec898(plVar2,iVar4);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar4 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b223c FUN_1475b223c body=145 status=ok
// SIG undefined FUN_1475b223c(void)

void FUN_1475b223c(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = FUN_147526062();
  if (iVar1 != param_2) {
    FUN_141133e44(local_50,(longlong)param_2 * 0x28 + **(longlong **)(param_1 + 0x18));
    FUN_1475b2348(*(undefined8 *)(param_1 + 0x18),param_2);
    FUN_1475b22ce(*(undefined8 *)(param_1 + 0x18),local_50,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b22ce FUN_1475b22ce body=122 status=ok
// SIG undefined FUN_1475b22ce(void)

int FUN_1475b22ce(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1475b23a2(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x28;
  memmove((void *)(*param_1 + lVar2 + 0x28),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x28);
  FUN_141133e44(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 1475b2348 FUN_1475b2348 body=90 status=ok
// SIG undefined FUN_1475b2348(void)

void FUN_1475b2348(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1475b23a2 FUN_1475b23a2 body=147 status=ok
// SIG undefined FUN_1475b23a2(void)

void FUN_1475b23a2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b2436 FUN_1475b2436 body=215 status=ok
// SIG undefined FUN_1475b2436(void)

ulonglong FUN_1475b2436(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_1475b22ce(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b250e FUN_1475b250e body=298 status=ok
// SIG undefined FUN_1475b250e(void)

void FUN_1475b250e(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  if (~param_2 + iVar4 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar4) << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  FUN_1475b2348(param_1[3],param_2);
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b263a FUN_1475b263a body=48 status=ok
// SIG undefined FUN_1475b263a(void)

void FUN_1475b263a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1475b266a FUN_1475b266a body=373 status=ok
// SIG undefined FUN_1475b266a(void)

void FUN_1475b266a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cab4928 == 0) {
    uVar5 = FUN_140d2a6db();
    DAT_14cab4928 = FUN_140002ddd(FUN_146345a45,uVar5,L"MovieSceneFloatPerlinNoiseChannel");
  }
  local_50 = *(longlong *)(DAT_14cab4928 + 0x18);
  uVar9 = *(uint *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar6 = param_1;
  }
  if ((int)uVar9 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    local_70 = param_2;
    do {
      uVar1 = uVar8 + (uVar9 >> 1);
      local_68 = *(longlong *)(lVar6 + (ulonglong)uVar1 * 0x18);
      iVar4 = FUN_144a78538(&local_68,&local_50);
      uVar1 = (uVar9 & 1) + uVar1;
      if (-1 < iVar4) {
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    uVar9 = *(uint *)(param_1 + 0x20);
    param_2 = local_70;
  }
  if ((int)uVar8 < (int)uVar9) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    lVar7 = lVar6;
    if (lVar6 == 0) {
      lVar7 = param_1;
    }
    if (*(longlong *)(lVar7 + (ulonglong)uVar8 * 0x18) == local_50) goto LAB_1475b2781;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = local_50;
  FUN_140f93936(param_1,&local_68,uVar8);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
LAB_1475b2781:
  if (lVar6 != 0) {
    param_1 = lVar6;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar8 * 0x18);
  iVar4 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
    FUN_140aec898(plVar2,iVar4);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar4 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b27e0 FUN_1475b27e0 body=226 status=ok
// SIG undefined FUN_1475b27e0(void)

void FUN_1475b27e0(longlong param_1,int param_2)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_147526062();
  if (iVar1 != param_2) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    local_48 = (void *)0x0;
    local_40 = *(int *)(*plVar2 + 8 + (longlong)param_2 * 0x10);
    lVar3 = (longlong)local_40;
    _Src = *(void **)(*plVar2 + (longlong)param_2 * 0x10);
    if (lVar3 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar3 * 2);
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    FUN_14101da94(plVar2,param_2);
    FUN_14127e8fc(*(undefined8 *)(param_1 + 0x18),&local_48,iVar1);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b28c4 FUN_1475b28c4 body=215 status=ok
// SIG undefined FUN_1475b28c4(void)

ulonglong FUN_1475b28c4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_147525f8a();
  FUN_14127e8fc(*(undefined8 *)(param_1 + 0x18),param_3,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar1 + 8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar3) != 0)) {
        local_38 = (ulonglong *)0x0;
        uStack_30 = 1;
        FUN_14753e66a(&local_38,0);
        *local_38 = (ulonglong)uVar2 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_38);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(lVar1 + 0x10) * 0x10 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (ulonglong)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b299c FUN_1475b299c body=293 status=ok
// SIG undefined FUN_1475b299c(void)

void FUN_1475b299c(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  if (~param_2 + iVar4 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar4) << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  FUN_14101da94(param_1[3],param_2);
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b2ac2 FUN_1475b2ac2 body=166 status=ok
// SIG undefined FUN_1475b2ac2(void)

bool FUN_1475b2ac2(longlong param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 == 0) {
    if (*(char *)(param_1 + 0x80) != '\x01') {
      return false;
    }
    puVar4 = (undefined8 *)(param_1 + 0x70);
  }
  else {
    if ((int)uVar1 < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar3 = (ulonglong)uVar1;
      do {
        uVar5 = (int)(uVar3 >> 1) + (int)uVar6;
        uVar1 = (uint)uVar3;
        if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar5 * 4) <= param_2) {
          uVar6 = (ulonglong)(uVar5 + (uVar1 & 1));
        }
        uVar3 = uVar3 >> 1;
      } while (1 < uVar1);
    }
    uVar3 = 1;
    if (1 < (int)uVar6) {
      uVar3 = uVar6;
    }
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar3 * 0x10 + -0x10);
  }
  if (puVar4 == (undefined8 *)0x0) {
    return false;
  }
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 == *(int *)(puVar4 + 1)) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = FUN_144a80a00(*param_3,*puVar4);
    bVar7 = iVar2 == 0;
  }
  else {
    bVar7 = *(int *)(puVar4 + 1) + iVar2 == 1;
  }
  return bVar7;
}



// FUNCTION 1475b2b68 FUN_1475b2b68 body=31 status=ok
// SIG undefined FUN_1475b2b68(void)

undefined8 FUN_1475b2b68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b2ba2 FUN_1475b2ba2 body=29 status=ok
// SIG undefined FUN_1475b2ba2(void)

bool FUN_1475b2ba2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1475b2bc0 FUN_1475b2bc0 body=26 status=ok
// SIG undefined FUN_1475b2bc0(void)

bool FUN_1475b2bc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1475b2bda FUN_1475b2bda body=24 status=ok
// SIG undefined FUN_1475b2bda(void)

bool FUN_1475b2bda(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1475b2bfe FUN_1475b2bfe body=60 status=ok
// SIG undefined FUN_1475b2bfe(void)

void FUN_1475b2bfe(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a4ab7b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a4aac70;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1475b2c3a FUN_1475b2c3a body=60 status=ok
// SIG undefined FUN_1475b2c3a(void)

void FUN_1475b2c3a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_14a4ab7b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a4aac70;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1475b2c76 FUN_1475b2c76 body=100 status=ok
// SIG undefined FUN_1475b2c76(void)

void FUN_1475b2c76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_14a4ab7b0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a4aac70;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475b2ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1475b2cda FUN_1475b2cda body=59 status=ok
// SIG undefined FUN_1475b2cda(void)

undefined8 FUN_1475b2cda(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1475b2d16 FUN_1475b2d16 body=155 status=ok
// SIG undefined FUN_1475b2d16(void)

bool FUN_1475b2d16(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,local_48);
    lVar3 = local_48[0];
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,local_48,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b2db4 FUN_1475b2db4 body=59 status=ok
// SIG undefined FUN_1475b2db4(void)

undefined8 * FUN_1475b2db4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4aa4d0;
  if (*(char *)((longlong)param_1 + 0x1e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b2df0 FUN_1475b2df0 body=326 status=ok
// SIG undefined FUN_1475b2df0(void)

void FUN_1475b2df0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar3 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar4 + 0x1e) == *(short *)(lVar3 + 0x11a)) goto LAB_1475b2e53;
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
    lVar4 = 0;
LAB_1475b2e53:
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar4 != 0);
  }
  lVar3 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar4 + 0x1e) == *(short *)(lVar3 + 0x10a)) {
        if (lVar4 != 0) {
          if (uVar8 != 0) {
            uVar7 = 0;
            do {
              local_48 = *(undefined8 *)(param_3 + uVar7 * 8);
              uVar2 = FUN_1475b2f38(param_1,*(undefined2 *)(lVar1 + uVar7 * 2),&local_48,
                                    uVar6 & 0xffffffff);
              *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x18 + (ulonglong)uVar2 * 0x1c) = 1;
              uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
          }
          goto LAB_1475b2eb7;
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      local_48 = *(undefined8 *)(param_3 + uVar7 * 8);
      FUN_1475b2f38(param_1,*(undefined2 *)(lVar1 + uVar7 * 2),&local_48,uVar6 & 0xffffffff);
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
LAB_1475b2eb7:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b2f38 FUN_1475b2f38 body=473 status=ok
// SIG undefined FUN_1475b2f38(void)

uint FUN_1475b2f38(longlong param_1,undefined2 param_2,undefined8 param_3,char param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [36];
  ushort local_54;
  undefined2 local_52;
  ushort *local_50;
  ushort *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_52 = param_2;
  uVar3 = FUN_1475b3112();
  uVar2 = FUN_1475b3180(param_1,param_3);
  local_54 = uVar2;
  if ((ushort)uVar3 == uVar2) {
    if (param_4 != '\0') {
      lVar5 = param_1 + 0x128;
      iVar6 = ((uint)uVar2 - *(int *)(param_1 + 0x140)) + 1;
      if (0 < iVar6) {
        uVar4 = FUN_144a54ea4(lVar5,iVar6);
        FUN_1447c6044(lVar5,uVar4,iVar6,0);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x138);
      }
      puVar1 = (uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    }
  }
  else {
    if ((ushort)uVar3 != 0xffff) {
      lVar5 = param_1 + 0x128;
      iVar6 = ((uVar3 & 0xffff) - *(int *)(param_1 + 0x140)) + 1;
      if (0 < iVar6) {
        uVar4 = FUN_144a54ea4(lVar5,iVar6);
        FUN_1447c6044(lVar5,uVar4,iVar6,0);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x138);
      }
      puVar1 = (uint *)(lVar5 + (ulonglong)((uVar3 & 0xffff) >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
      FUN_14086b58e(param_1 + 0x50,uVar3,&local_52);
      FUN_140bbeb1c(param_1,&local_52);
    }
    lVar5 = param_1 + 0x128;
    iVar6 = ((uint)uVar2 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar6) {
      uVar4 = FUN_144a54ea4(lVar5,iVar6);
      FUN_1447c6044(lVar5,uVar4,iVar6,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x138);
    }
    puVar1 = (uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    local_50 = &local_52;
    local_48 = &local_54;
    FUN_140bbf6f4(param_1,local_3c,&local_50,0);
    local_50 = &local_54;
    local_48 = &local_52;
    FUN_140bbf5de(param_1 + 0x50,local_3c,&local_50,0);
    uVar3 = (uint)local_54;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b3112 FUN_1475b3112 body=109 status=ok
// SIG undefined FUN_1475b3112(void)

ushort FUN_1475b3112(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0xc);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ushort *)0x0 || puVar1 == (ushort *)0x0) {
            return 0xffff;
          }
          return puVar1[1];
        }
        iVar2 = *(int *)(puVar1 + 2);
      } while (iVar2 != -1);
    }
  }
  return 0xffff;
}



// FUNCTION 1475b3180 FUN_1475b3180 body=261 status=ok
// SIG undefined FUN_1475b3180(void)

ulonglong FUN_1475b3180(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [34];
  ushort local_46;
  undefined1 local_44 [4];
  undefined8 *local_40;
  ushort *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = FUN_1475b3286();
  if ((short)uVar4 == -1) {
    uVar2 = *param_2;
    FUN_1475b3316(param_1 + 0xf0,&local_40);
    *(undefined8 *)local_38 = uVar2;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    local_38[8] = 0xffff;
    local_38[9] = 0xffff;
    local_38[10] = 0xffff;
    local_38[0xb] = 0xffff;
    *(undefined1 *)(local_38 + 0xc) = 0;
    local_46 = (ushort)local_40;
    lVar6 = param_1 + 0x148;
    iVar5 = (((uint)local_40 & 0xffff) - *(int *)(param_1 + 0x160)) + 1;
    if (0 < iVar5) {
      uVar3 = FUN_144a54ea4(lVar6,iVar5);
      FUN_1447c6044(lVar6,uVar3,iVar5,0);
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x158);
    }
    puVar1 = (uint *)(lVar6 + (ulonglong)((uint)local_40 >> 3 & 0x1ffc));
    *puVar1 = *puVar1 | 1 << ((byte)local_40 & 0x1f);
    local_38 = &local_46;
    local_40 = param_2;
    FUN_1475b3412(param_1 + 0xa0,local_44);
    uVar4 = (ulonglong)local_46;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b3286 FUN_1475b3286 body=143 status=ok
// SIG undefined FUN_1475b3286(void)

undefined2 FUN_1475b3286(longlong param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    uVar2 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & (param_2[1] ^ *param_2)) *
                              4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)(int)uVar2 * 0x14);
        if ((*puVar1 == *param_2) &&
           (*(uint *)(*(longlong *)(param_1 + 0xa0) + 4 + (longlong)(int)uVar2 * 0x14) == param_2[1]
           )) {
          if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) {
            return 0xffff;
          }
          return (short)puVar1[2];
        }
        uVar2 = puVar1[3];
      } while (uVar2 != 0xffffffff);
    }
  }
  return 0xffff;
}



// FUNCTION 1475b3316 FUN_1475b3316 body=251 status=ok
// SIG undefined FUN_1475b3316(void)

int * FUN_1475b3316(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1475b3412 FUN_1475b3412 body=299 status=ok
// SIG undefined FUN_1475b3412(void)

undefined4 * FUN_1475b3412(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475b353e(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_1475b3624(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1475b3724(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b353e FUN_1475b353e body=230 status=ok
// SIG undefined FUN_1475b353e(void)

int * FUN_1475b353e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1475b3624 FUN_1475b3624 body=142 status=ok
// SIG undefined FUN_1475b3624(void)

undefined8 FUN_1475b3624(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar4 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1475b36b2(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1475b36b2 FUN_1475b36b2 body=114 status=ok
// SIG undefined FUN_1475b36b2(void)

void FUN_1475b36b2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1475b3724 FUN_1475b3724 body=431 status=ok
// SIG undefined FUN_1475b3724(void)

void FUN_1475b3724(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)(*(uint *)(lVar3 + 4 + lVar6 * 0x14) ^ *(uint *)(lVar3 + lVar6 * 0x14)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 1475b38d4 FUN_1475b38d4 body=185 status=ok
// SIG undefined FUN_1475b38d4(void)

void FUN_1475b38d4(longlong param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2a = param_2;
  uVar2 = FUN_1475b3112();
  if ((short)uVar2 != -1) {
    uVar6 = uVar2 & 0xffff;
    FUN_14086b58e(param_1 + 0x50,uVar2,&local_2a);
    FUN_140bbeb1c(param_1,&local_2a);
    lVar4 = param_1 + 0x128;
    iVar5 = (uVar6 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar5) {
      uVar3 = FUN_144a54ea4(lVar4,iVar5);
      FUN_1447c6044(lVar4,uVar3,iVar5,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x138);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b398e FUN_1475b398e body=99 status=ok
// SIG undefined FUN_1475b398e(void)

void FUN_1475b398e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 1)) {
        uVar2 = uVar1 >> 1 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = (int)uVar2;
    FUN_1475b39f2(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,2);
    return;
  }
  return;
}



// FUNCTION 1475b39f2 FUN_1475b39f2 body=131 status=ok
// SIG undefined FUN_1475b39f2(void)

void FUN_1475b39f2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1475b3a76 FUN_1475b3a76 body=114 status=ok
// SIG undefined FUN_1475b3a76(void)

void FUN_1475b3a76(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 * 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 1)) {
        uVar4 = uVar2 >> 1 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar4;
    FUN_1475b39f2(param_1,param_2,uVar4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1475b3aea FUN_1475b3aea body=97 status=ok
// SIG undefined FUN_1475b3aea(void)

void FUN_1475b3aea(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(param_2[1] ^ *param_2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(uint *)(lVar2 + lVar4 * 0x14) == *param_2) &&
           (*(uint *)(lVar2 + 4 + lVar4 * 0x14) == param_2[1])) {
          FUN_1475b3b4c();
          return;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1475b3b4c FUN_1475b3b4c body=87 status=ok
// SIG undefined FUN_1475b3b4c(void)

void FUN_1475b3b4c(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x14;
  lVar6 = (longlong)*(int *)(lVar1 + 0x10);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0xc + lVar6 * 0x14);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x14 + 0xc);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0xc);
  FUN_1475b36b2();
  return;
}



// FUNCTION 1475b3ba4 FUN_1475b3ba4 body=118 status=ok
// SIG undefined FUN_1475b3ba4(void)

void FUN_1475b3ba4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x1c + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475b3c1a FUN_1475b3c1a body=96 status=ok
// SIG undefined FUN_1475b3c1a(void)

void FUN_1475b3c1a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1475b3c7a FUN_1475b3c7a body=110 status=ok
// SIG undefined FUN_1475b3c7a(void)

void FUN_1475b3c7a(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145c380aa(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1475b3e2c(param_1);
    return;
  }
  FUN_1475b3ce8(param_1);
  FUN_145c380aa(param_1,param_2);
  return;
}



// FUNCTION 1475b3ce8 FUN_1475b3ce8 body=322 status=ok
// SIG undefined FUN_1475b3ce8(void)

void FUN_1475b3ce8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 1475b3e2c FUN_1475b3e2c body=446 status=ok
// SIG undefined FUN_1475b3e2c(void)

void FUN_1475b3e2c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x14),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x14));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x10 + lVar10 * 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x14) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b3fec FUN_1475b3fec body=301 status=ok
// SIG undefined FUN_1475b3fec(void)

undefined4 * FUN_1475b3fec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1475b411a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  cVar3 = FUN_1475b4200(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_40 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1475b3e2c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b411a FUN_1475b411a body=230 status=ok
// SIG undefined FUN_1475b411a(void)

int * FUN_1475b411a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1475b4200 FUN_1475b4200 body=142 status=ok
// SIG undefined FUN_1475b4200(void)

undefined8 FUN_1475b4200(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar4 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1475b428e(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1475b428e FUN_1475b428e body=114 status=ok
// SIG undefined FUN_1475b428e(void)

void FUN_1475b428e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1475b4300 FUN_1475b4300 body=132 status=ok
// SIG undefined FUN_1475b4300(void)

void FUN_1475b4300(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b4386 FUN_1475b4386 body=181 status=ok
// SIG undefined FUN_1475b4386(void)

void FUN_1475b4386(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  lVar2 = *param_1;
  uVar6 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar5 = (int)(uVar3 >> 1) + uVar6;
      uVar4 = (uint)uVar3;
      if (*(int *)(lVar2 + (ulonglong)uVar5 * 0x24) < param_2) {
        uVar6 = uVar5 + (uVar4 & 1);
      }
      uVar3 = uVar3 >> 1;
    } while (1 < uVar4);
  }
  if (((int)uVar6 < (int)uVar1) && (*(int *)(lVar2 + (ulonglong)uVar6 * 0x24) <= param_2)) {
    lVar2 = lVar2 + (ulonglong)uVar6 * 0x24;
    if ((undefined8 *)(lVar2 + 4) != (undefined8 *)0x0) {
      local_38 = *(undefined8 *)(lVar2 + 4);
      uStack_30 = *(undefined4 *)(lVar2 + 0xc);
      uStack_2c = *(undefined4 *)(lVar2 + 0x10);
      uStack_28 = *(undefined4 *)(lVar2 + 0x14);
      uStack_24 = *(undefined8 *)(lVar2 + 0x18);
      local_1c = *(undefined4 *)(lVar2 + 0x20);
      goto LAB_1475b43f8;
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_1c = 0xffffffff;
LAB_1475b43f8:
  FUN_14479d2ce(&local_38);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475b443c FUN_1475b443c body=93 status=ok
// SIG undefined FUN_1475b443c(void)

int * FUN_1475b443c(longlong *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  uVar6 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(*param_1 + (ulonglong)uVar1 * 0x24) < param_2) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  if ((int)uVar7 < (int)uVar3) {
    piVar2 = (int *)(*param_1 + (ulonglong)uVar7 * 0x24);
    piVar5 = (int *)0x0;
    if (*piVar2 <= param_2) {
      piVar5 = piVar2 + 1;
    }
  }
  else {
    piVar5 = (int *)0x0;
  }
  return piVar5;
}



// FUNCTION 1475b449a FUN_1475b449a body=148 status=ok
// SIG undefined FUN_1475b449a(void)

undefined8 * FUN_1475b449a(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[8] = 0x10000000000;
  param_2[0xd] = 0x10000000000;
  param_2[0x14] = 0x10000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x19] = 0x10000000000;
  FUN_1475b4674(param_2,param_2 + 4);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b4530 FUN_1475b4530 body=161 status=ok
// SIG undefined FUN_1475b4530(void)

undefined8 * FUN_1475b4530(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  ulonglong *local_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_22 = *(undefined2 *)param_2;
  local_30 = &local_20;
  local_38 = &local_22;
  FUN_1447c44f6(param_2 + 2);
  FUN_140dad9c2(param_2 + 2,param_3,2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b45d2 FUN_1475b45d2 body=107 status=ok
// SIG undefined FUN_1475b45d2(void)

void FUN_1475b45d2(longlong *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  uVar5 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar7 >> 1) + uVar5;
      if (*(int *)(lVar3 + (ulonglong)uVar1 * 0x24) < param_3) {
        uVar5 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  uVar6 = 0xffffffff;
  if ((((int)uVar5 < (int)uVar2) && (*(int *)(lVar3 + (ulonglong)uVar5 * 0x24) <= param_3)) &&
     (lVar3 = lVar3 + (ulonglong)uVar5 * 0x24, lVar3 != -4)) {
    uVar6 = *(undefined4 *)(lVar3 + 0x20);
  }
  *param_2 = uVar6;
  return;
}



// FUNCTION 1475b463e FUN_1475b463e body=54 status=ok
// SIG undefined FUN_1475b463e(void)

void FUN_1475b463e(longlong *param_1)

{
  FUN_1475b4acc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475b4674 FUN_1475b4674 body=383 status=ok
// SIG undefined FUN_1475b4674(void)

void FUN_1475b4674(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[6];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[7];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[8];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[9];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b47f4 FUN_1475b47f4 body=388 status=ok
// SIG undefined FUN_1475b47f4(void)

void FUN_1475b47f4(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475b496a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475b4978 FUN_1475b4978 body=88 status=ok
// SIG undefined FUN_1475b4978(void)

undefined8 * FUN_1475b4978(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1475b49d0(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475b49d0 FUN_1475b49d0 body=117 status=ok
// SIG undefined FUN_1475b49d0(void)

longlong * FUN_1475b49d0(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 8 + *param_2;
  }
  return param_1;
}



// FUNCTION 1475b4a46 FUN_1475b4a46 body=132 status=ok
// SIG undefined FUN_1475b4a46(void)

void FUN_1475b4a46(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b4acc FUN_1475b4acc body=355 status=ok
// SIG undefined FUN_1475b4acc(void)

void FUN_1475b4acc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x10) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14474875a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1475b4c32 FUN_1475b4c32 body=112 status=ok
// SIG undefined FUN_1475b4c32(void)

void FUN_1475b4c32(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1475b4e28(param_1,iVar1);
    }
    FUN_1402426b3((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1475b4ebc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1475b4ca4 FUN_1475b4ca4 body=54 status=ok
// SIG undefined FUN_1475b4ca4(void)

void FUN_1475b4ca4(longlong *param_1)

{
  FUN_1475b4f6a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475b4cda FUN_1475b4cda body=333 status=ok
// SIG undefined FUN_1475b4cda(void)

int * FUN_1475b4cda(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_14021b4e8(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x48) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x48) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x48) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 0x48);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 0x48);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x48) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x48) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 1475b4e28 FUN_1475b4e28 body=147 status=ok
// SIG undefined FUN_1475b4e28(void)

void FUN_1475b4e28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b4ebc FUN_1475b4ebc body=62 status=ok
// SIG undefined FUN_1475b4ebc(void)

void FUN_1475b4ebc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475b4efa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1475b4efa FUN_1475b4efa body=112 status=ok
// SIG undefined FUN_1475b4efa(void)

ulonglong FUN_1475b4efa(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1475b4f34;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_1475b4f34:
  return param_2 & 0xffffffff;
}



// FUNCTION 1475b4f6a FUN_1475b4f6a body=130 status=ok
// SIG undefined FUN_1475b4f6a(void)

void FUN_1475b4f6a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1475b4fee FUN_1475b4fee body=333 status=ok
// SIG undefined FUN_1475b4fee(void)

int * FUN_1475b4fee(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_1446efaca(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x10) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x10) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3 * 0x10;
  iVar3 = *(int *)(lVar7 + lVar4);
  iVar5 = *(int *)(lVar7 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x10) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 + *param_1;
  return param_2;
}



// FUNCTION 1475b513c FUN_1475b513c body=333 status=ok
// SIG undefined FUN_1475b513c(void)

int * FUN_1475b513c(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_1446efaca(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x10) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x10) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3 * 0x10;
  iVar3 = *(int *)(lVar7 + lVar4);
  iVar5 = *(int *)(lVar7 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x10) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 + *param_1;
  return param_2;
}



// FUNCTION 1475b528a FUN_1475b528a body=106 status=ok
// SIG undefined FUN_1475b528a(void)

undefined8 FUN_1475b528a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x48,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x48)) {
    uVar5 = uVar2 / 0x48 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x48,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1475b52f4 FUN_1475b52f4 body=112 status=ok
// SIG undefined FUN_1475b52f4(void)

void FUN_1475b52f4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 1475b5364 FUN_1475b5364 body=61 status=ok
// SIG undefined FUN_1475b5364(void)

void FUN_1475b5364(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1475b53a2(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1475b53a2 FUN_1475b53a2 body=52 status=ok
// SIG undefined FUN_1475b53a2(void)

void FUN_1475b53a2(longlong *param_1)

{
  FUN_1475b53d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475b53d6 FUN_1475b53d6 body=89 status=ok
// SIG undefined FUN_1475b53d6(void)

void FUN_1475b53d6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1475b5430 FUN_1475b5430 body=89 status=ok
// SIG undefined FUN_1475b5430(void)

void FUN_1475b5430(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1475b548a FUN_1475b548a body=309 status=ok
// SIG undefined FUN_1475b548a(void)

int * FUN_1475b548a(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_14055ddfe(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 8) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 8) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 8) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 8);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 8);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 8) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 8) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 8 + *param_1;
  return param_2;
}



// FUNCTION 1475b55c0 FUN_1475b55c0 body=134 status=ok
// SIG undefined FUN_1475b55c0(void)

void FUN_1475b55c0(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x630))) {
    lVar1 = param_1 + 0x618;
    if (*(longlong *)(param_1 + 0x628) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x628);
    }
    if ((*(uint *)(lVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    goto LAB_1475b560c;
  }
  FUN_1475b548a(param_1 + 0x608,local_28);
  *local_20 = param_3;
LAB_1475b560c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b5648 FUN_1475b5648 body=333 status=ok
// SIG undefined FUN_1475b5648(void)

int * FUN_1475b5648(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_1446efaca(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x10) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x10) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3 * 0x10;
  iVar3 = *(int *)(lVar7 + lVar4);
  iVar5 = *(int *)(lVar7 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x10) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 + *param_1;
  return param_2;
}



// FUNCTION 1475b5796 FUN_1475b5796 body=104 status=ok
// SIG undefined FUN_1475b5796(void)

void FUN_1475b5796(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x10 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475b57fe FUN_1475b57fe body=184 status=ok
// SIG undefined FUN_1475b57fe(void)

undefined8 * FUN_1475b57fe(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b58b8 FUN_1475b58b8 body=107 status=ok
// SIG undefined FUN_1475b58b8(void)

void FUN_1475b58b8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[4]) {
      uVar3 = param_1[4];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[5] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475b5915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475b5924 FUN_1475b5924 body=166 status=ok
// SIG undefined FUN_1475b5924(void)

void FUN_1475b5924(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b59cc FUN_1475b59cc body=140 status=ok
// SIG undefined FUN_1475b59cc(void)

void FUN_1475b59cc(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475b5a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475b5a58 FUN_1475b5a58 body=29 status=ok
// SIG undefined FUN_1475b5a58(void)

undefined8 FUN_1475b5a58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b5a76 FUN_1475b5a76 body=29 status=ok
// SIG undefined FUN_1475b5a76(void)

undefined8 FUN_1475b5a76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b5a94 FUN_1475b5a94 body=151 status=ok
// SIG undefined FUN_1475b5a94(void)

longlong FUN_1475b5a94(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [120];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_a8 = FUN_145c97f3e(uVar1,param_3);
  local_b0 = &PTR_FUN_14a4aad28;
  FUN_1457bdd22(local_a0,uVar1);
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfe;
  FUN_1475b5b9a(param_2,&local_b0);
  local_b0 = &PTR_FUN_14a4aad28;
  FUN_140e9522c(local_a0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b5b2c FUN_1475b5b2c body=52 status=ok
// SIG undefined FUN_1475b5b2c(void)

undefined8 * FUN_1475b5b2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4aad28;
  FUN_140e9522c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475b5b60 FUN_1475b5b60 body=58 status=ok
// SIG undefined FUN_1475b5b60(void)

void FUN_1475b5b60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_145eff0c2(param_3);
  if (lVar1 != 0) {
    FUN_140f5dbda(param_1 + 0x10,param_2,*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 1475b5b9a FUN_1475b5b9a body=146 status=ok
// SIG undefined FUN_1475b5b9a(void)

void FUN_1475b5b9a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
  puVar3 = (undefined8 *)FUN_14001cc68(0x88,8);
  *param_1 = puVar3;
  bVar1 = *(byte *)(param_1 + 4);
  *(byte *)(param_1 + 4) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar3;
  }
  *param_1 = &PTR_FUN_14a4aad28;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1457bdca4(param_1 + 2,param_2 + 0x10);
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar2;
  return;
}



// FUNCTION 1475b5c2c FUN_1475b5c2c body=61 status=ok
// SIG undefined FUN_1475b5c2c(void)

void FUN_1475b5c2c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1475b5c6a FUN_1475b5c6a body=147 status=ok
// SIG undefined FUN_1475b5c6a(void)

void FUN_1475b5c6a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b5cfe FUN_1475b5cfe body=139 status=ok
// SIG undefined FUN_1475b5cfe(void)

void FUN_1475b5cfe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      iVar5 = (int)(uVar4 / 0xc);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_1475b5d8a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b5d8a FUN_1475b5d8a body=140 status=ok
// SIG undefined FUN_1475b5d8a(void)

void FUN_1475b5d8a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0xc);
  return;
}



// FUNCTION 1475b5e16 FUN_1475b5e16 body=139 status=ok
// SIG undefined FUN_1475b5e16(void)

void FUN_1475b5e16(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      iVar5 = (int)(uVar4 / 0xc);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_1475b5ea2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b5ea2 FUN_1475b5ea2 body=140 status=ok
// SIG undefined FUN_1475b5ea2(void)

void FUN_1475b5ea2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0xc);
  return;
}



// FUNCTION 1475b5f2e FUN_1475b5f2e body=139 status=ok
// SIG undefined FUN_1475b5f2e(void)

void FUN_1475b5f2e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar6;
    FUN_1475b5fba(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b5fba FUN_1475b5fba body=140 status=ok
// SIG undefined FUN_1475b5fba(void)

void FUN_1475b5fba(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x18);
  return;
}



// FUNCTION 1475b6046 FUN_1475b6046 body=124 status=ok
// SIG undefined FUN_1475b6046(void)

void FUN_1475b6046(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x4c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 5,0);
      iVar3 = (int)(uVar4 >> 5);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar6;
    FUN_1475b60c4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b60c4 FUN_1475b60c4 body=132 status=ok
// SIG undefined FUN_1475b60c4(void)

void FUN_1475b60c4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x20);
  return;
}



// FUNCTION 1475b6148 FUN_1475b6148 body=139 status=ok
// SIG undefined FUN_1475b6148(void)

void FUN_1475b6148(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar6;
    FUN_1475b61d4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b61d4 FUN_1475b61d4 body=140 status=ok
// SIG undefined FUN_1475b61d4(void)

void FUN_1475b61d4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x18);
  return;
}



// FUNCTION 1475b6260 FUN_1475b6260 body=148 status=ok
// SIG undefined FUN_1475b6260(void)

void FUN_1475b6260(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xac) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x50,0);
      iVar5 = (int)(uVar4 / 0x50);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0xac) = iVar6;
    FUN_1475b62f6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475b62f6 FUN_1475b62f6 body=149 status=ok
// SIG undefined FUN_1475b62f6(void)

void FUN_1475b62f6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x50);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x50);
  return;
}



// FUNCTION 1475b638c FUN_1475b638c body=32 status=ok
// SIG undefined FUN_1475b638c(void)

undefined8 * FUN_1475b638c(undefined8 *param_1)

{
  FUN_1475ac02e();
  *param_1 = &PTR_FUN_14a4c7f50;
  return param_1;
}



// FUNCTION 1475b63ac FUN_1475b63ac body=918 status=ok
// SIG undefined FUN_1475b63ac(void)

void FUN_1475b63ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_378 [40];
  undefined **local_350;
  undefined1 local_348 [24];
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_350 = &PTR_FUN_14a4c06b0;
  local_330 = 0;
  local_328 = 0x200000000;
  local_308 = 0;
  local_300 = 0x200000000;
  local_2c8 = 0;
  local_2c0 = 0x200000000;
  local_278 = 0;
  local_270 = 0x200000000;
  local_238 = 0;
  local_230 = 0x200000000;
  local_188 = 0;
  local_180 = 0x200000000;
  FUN_1475ac228(param_1,param_3,local_348);
  puVar3 = (undefined8 *)FUN_14001cc68(0x1d8,8);
  *puVar3 = &PTR_FUN_14a4c06b0;
  FUN_147612aea(puVar3 + 1,local_348);
  local_138 = param_5[0x22];
  lStack_130 = param_5[0x23];
  local_128 = (undefined4)param_5[0x24];
  uStack_124 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
  uStack_11c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
  uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
  local_110 = (undefined4)param_5[0x27];
  uStack_10c = *(undefined4 *)((longlong)param_5 + 0x13c);
  uStack_108 = (undefined4)param_5[0x28];
  uStack_104 = *(undefined4 *)((longlong)param_5 + 0x144);
  local_100 = (undefined4)param_5[0x29];
  uStack_fc = *(undefined4 *)((longlong)param_5 + 0x14c);
  uStack_f8 = (undefined4)param_5[0x2a];
  uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x154);
  local_f0 = param_5[0x2b];
  FUN_144a3f8b4(&local_e8,param_5 + 0x2c);
  FUN_144b1f2a6(&local_c8,param_5 + 0x30);
  local_a0 = (undefined5)param_5[0x35];
  uStack_9b = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
  uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
  local_50 = (local_50 & 0xfc) + 1;
  local_58 = local_148;
  local_68 = local_158;
  uStack_64 = uStack_154;
  uStack_60 = uStack_150;
  uStack_5c = uStack_14c;
  uStack_78 = local_168;
  uStack_74 = uStack_164;
  uStack_70 = uStack_160;
  uStack_6c = uStack_15c;
  uStack_88 = local_178;
  uStack_84 = uStack_174;
  uStack_80 = uStack_170;
  uStack_7c = uStack_16c;
  iVar2 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar2 + 1U;
  local_90 = puVar3;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
    FUN_140ac5684(param_5,iVar2);
  }
  lVar4 = *param_5;
  plVar1 = (longlong *)((longlong)iVar2 * 0xf0 + lVar4);
  *(undefined4 *)(plVar1 + 4) = uStack_118;
  plVar1[2] = CONCAT44(uStack_124,local_128);
  plVar1[3] = CONCAT44(uStack_11c,uStack_120);
  *plVar1 = local_138;
  plVar1[1] = lStack_130;
  plVar1[9] = local_f0;
  *(undefined4 *)(plVar1 + 7) = local_100;
  *(undefined4 *)((longlong)plVar1 + 0x3c) = uStack_fc;
  *(undefined4 *)(plVar1 + 8) = uStack_f8;
  *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_f4;
  *(undefined4 *)(plVar1 + 5) = local_110;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = uStack_10c;
  *(undefined4 *)(plVar1 + 6) = uStack_108;
  *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_104;
  plVar1[10] = local_e8;
  *(undefined4 *)(plVar1 + 0xb) = local_e0;
  plVar1[0xc] = 0;
  plVar1[0xc] = local_d8;
  local_d8 = 0;
  *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_d0;
  *(undefined4 *)((longlong)plVar1 + 0x6c) = local_d0._4_4_;
  local_d0 = 0;
  plVar1[0xe] = 0;
  plVar1[0xe] = local_c8;
  local_c8 = 0;
  *(undefined4 *)(plVar1 + 0xf) = (undefined4)local_c0;
  *(undefined4 *)((longlong)plVar1 + 0x7c) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined1 *)(plVar1 + 0x10) = local_b8;
  plVar1[0x11] = 0;
  plVar1[0x11] = local_b0;
  local_b0 = 0;
  *(undefined4 *)(plVar1 + 0x12) = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar1 + 0x94) = local_a8._4_4_;
  local_a8 = 0;
  *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_98,uStack_9b);
  plVar1[0x13] = CONCAT35(uStack_9b,local_a0);
  *(byte *)(plVar1 + 0x1d) = *(byte *)(plVar1 + 0x1d) & 0xfc | 2;
  FUN_144adeb48(plVar1 + 0x15);
  if ((local_50 & 1) != 0) {
    lVar4 = lVar4 + (longlong)iVar2 * 0xf0;
    *(byte *)(lVar4 + 0xe8) = *(byte *)(lVar4 + 0xe8) | 1;
    *(byte *)(lVar4 + 0xe8) = *(byte *)(lVar4 + 0xe8) & 0xfd | local_50 & 2;
    plVar1[0x1b] = CONCAT44(uStack_5c,uStack_60);
    plVar1[0x1c] = local_58;
    plVar1[0x19] = CONCAT44(uStack_6c,uStack_70);
    plVar1[0x1a] = CONCAT44(uStack_64,local_68);
    plVar1[0x17] = CONCAT44(uStack_7c,uStack_80);
    plVar1[0x18] = CONCAT44(uStack_74,uStack_78);
    *(undefined4 *)(plVar1 + 0x15) = (undefined4)local_90;
    *(undefined4 *)((longlong)plVar1 + 0xac) = local_90._4_4_;
    *(undefined4 *)(plVar1 + 0x16) = uStack_88;
    *(undefined4 *)((longlong)plVar1 + 0xb4) = uStack_84;
    local_50 = local_50 & 0xfe;
  }
  if ((local_50 & 1) != 0) {
    puVar3 = &local_90;
    if ((local_50 & 2) == 0) {
      puVar3 = local_90;
    }
    local_50 = local_50 & 0xfe;
    (**(code **)*puVar3)(puVar3,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(local_90);
    }
  }
  FUN_144adeafa(&local_110);
  local_350 = &PTR_FUN_14a4c06b0;
  FUN_1475d38f4(local_348);
  if ((local_48 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b6744 FUN_1475b6744 body=70 status=ok
// SIG undefined FUN_1475b6744(void)

undefined8 * FUN_1475b6744(undefined8 *param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4c7f00;
  FUN_1475d3b00(param_1 + 4,param_2 + 0xf8);
  param_1[4] = &PTR_FUN_14a4c7fa0;
  return param_1;
}



// FUNCTION 1475b678a FUN_1475b678a body=322 status=ok
// SIG undefined FUN_1475b678a(void)

undefined8 * FUN_1475b678a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined2 **)(param_3 + 0x108);
  FUN_1400021e4(&local_50,&local_40);
  FUN_1475579bc(param_1,*(undefined8 *)(param_3 + 0x100),&local_40);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a4c7eb0;
  FUN_1475b14f8(param_1 + 7,param_2 + 0x100);
  local_30 = param_1[4];
  FUN_1400021e4(&local_30,&local_40);
  FUN_1400b22c2(&local_50,&DAT_149e430b6);
  iVar2 = local_48 + -1;
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
    iVar2 = 0;
  }
  FUN_140c540b4(&local_40,puVar1,iVar2,0);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar1,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  param_1[4] = local_50;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b68ec FUN_1475b68ec body=412 status=ok
// SIG undefined FUN_1475b68ec(void)

void FUN_1475b68ec(undefined4 *param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  char local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar2 = (double)param_2[0x4c];
  dVar3 = (double)param_2[0x4d];
  dVar4 = (double)param_2[0x4e];
  if ((param_2[0x15] == 0) ||
     (plVar1 = *(longlong **)(param_2[0x15] + 0x1c8), plVar1 == (longlong *)0x0)) {
    local_e0 = '\0';
  }
  else {
    local_e0 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
    local_e0 = local_e0 * '\x02';
  }
  local_48 = *(undefined8 *)(param_1 + 10);
  local_58 = *(undefined8 *)(param_1 + 6);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  local_68 = *(undefined8 *)(param_1 + 4);
  local_e8 = 0;
  FUN_1401ca0e6(param_2,&local_78,&local_58,0);
  local_88 = *(undefined8 *)(param_1 + 0x10);
  local_98 = param_1[0xc];
  uStack_94 = param_1[0xd];
  uStack_90 = param_1[0xe];
  uStack_8c = param_1[0xf];
  (**(code **)(*param_2 + 0x478))(param_2);
  local_a8 = *(undefined8 *)(param_1 + 4);
  local_b8 = *param_1;
  uStack_b4 = param_1[1];
  uStack_b0 = param_1[2];
  uStack_ac = param_1[3];
  FUN_144a48320(param_2);
  local_c8 = *(undefined8 *)(param_1 + 10);
  local_d8 = param_1[6];
  uStack_d4 = param_1[7];
  uStack_d0 = param_1[8];
  uStack_cc = param_1[9];
  FUN_144b21d44(param_2);
  if (0.0 < DAT_14c759090) {
    dVar5 = 1.0 / DAT_14c759090;
    param_2[0x3c] = (longlong)(dVar5 * ((double)param_2[0x4c] - dVar2));
    param_2[0x3d] = (longlong)(((double)param_2[0x4d] - dVar3) * dVar5);
    param_2[0x3e] = (longlong)(((double)param_2[0x4e] - dVar4) * dVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b6a8a FUN_1475b6a8a body=304 status=ok
// SIG undefined FUN_1475b6a8a(void)

undefined8 * FUN_1475b6a8a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = DAT_14c846508;
  local_108 = (undefined4)DAT_14c8464f8;
  uStack_104 = DAT_14c8464f8._4_4_;
  uStack_100 = (undefined4)DAT_14c846500;
  uStack_fc = DAT_14c846500._4_4_;
  FUN_14480333a(param_3,&local_e8);
  local_88 = local_e8;
  uStack_84 = uStack_e4;
  uStack_80 = uStack_e0;
  uStack_7c = uStack_dc;
  local_78 = local_d8;
  uStack_74 = uStack_d4;
  uStack_70 = uStack_d0;
  uStack_6c = uStack_cc;
  FUN_1448052ee(&local_88,&local_108);
  bVar1 = *(byte *)(param_2 + 4);
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar2;
  *(byte *)(param_2 + 4) = (bVar1 & 0xfc) + 1;
  puVar2[1] = local_c8;
  puVar2[2] = uStack_c0;
  puVar2[3] = local_b8;
  puVar2[6] = local_f8;
  *(undefined4 *)(puVar2 + 4) = local_108;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_104;
  *(undefined4 *)(puVar2 + 5) = uStack_100;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_fc;
  puVar2[7] = local_a8;
  puVar2[8] = uStack_a0;
  puVar2[9] = local_98;
  *puVar2 = &PTR_FUN_14a4c0a00;
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475b6bbc FUN_1475b6bbc body=41 status=ok
// SIG undefined FUN_1475b6bbc(void)

undefined8 * FUN_1475b6bbc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  FUN_1406ed278(param_1 + 1);
  *param_1 = param_2;
  return param_1;
}


