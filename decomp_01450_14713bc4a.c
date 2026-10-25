// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14713bc4a FUN_14713bc4a body=132 status=ok
// SIG undefined FUN_14713bc4a(void)

void FUN_14713bc4a(longlong param_1,int param_2)

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



// FUNCTION 14713bcd0 FUN_14713bcd0 body=87 status=ok
// SIG undefined FUN_14713bcd0(void)

void FUN_14713bcd0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x1b8);
  local_10 = *(undefined4 *)(param_1 + 0x1c0);
  FUN_144775c46(param_2,&local_18,0,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14713bd28 FUN_14713bd28 body=79 status=ok
// SIG undefined FUN_14713bd28(void)

undefined8 * FUN_14713bd28(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a1fab60;
  puVar2 = (undefined8 *)param_1[0x39];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713bd78 FUN_14713bd78 body=38 status=ok
// SIG undefined FUN_14713bd78(void)

undefined8 FUN_14713bd78(undefined8 param_1,int param_2)

{
  FUN_1462b533e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713bdd2 FUN_14713bdd2 body=38 status=ok
// SIG undefined FUN_14713bdd2(void)

undefined8 FUN_14713bdd2(undefined8 param_1,int param_2)

{
  FUN_1462b5386();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713be2e FUN_14713be2e body=54 status=ok
// SIG undefined FUN_14713be2e(void)

void FUN_14713be2e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713be68 FUN_14713be68 body=54 status=ok
// SIG undefined FUN_14713be68(void)

void FUN_14713be68(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713beaa FUN_14713beaa body=54 status=ok
// SIG undefined FUN_14713beaa(void)

void FUN_14713beaa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713bee4 FUN_14713bee4 body=54 status=ok
// SIG undefined FUN_14713bee4(void)

void FUN_14713bee4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713bf28 FUN_14713bf28 body=94 status=ok
// SIG undefined FUN_14713bf28(void)

longlong FUN_14713bf28(longlong param_1,longlong param_2)

{
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  FUN_147440b96(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"TranslucentSelfShadow",0);
  FUN_147440b96(param_1 + 0x10a,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713bf86 FUN_14713bf86 body=54 status=ok
// SIG undefined FUN_14713bf86(void)

void FUN_14713bf86(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713bfc0 FUN_14713bfc0 body=54 status=ok
// SIG undefined FUN_14713bfc0(void)

void FUN_14713bfc0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713c004 FUN_14713c004 body=512 status=ok
// SIG undefined FUN_14713c004(void)

longlong FUN_14713c004(longlong param_1,longlong param_2)

{
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  *(undefined8 *)(param_1 + 0x116) = 0;
  *(undefined8 *)(param_1 + 0x11b) = 0;
  FUN_147440b96(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"TranslucentSelfShadow",0);
  FUN_147440b96(param_1 + 0x10a,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x10c,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11b,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x11c,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x11d,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713c204 FUN_14713c204 body=54 status=ok
// SIG undefined FUN_14713c204(void)

void FUN_14713c204(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713c23e FUN_14713c23e body=54 status=ok
// SIG undefined FUN_14713c23e(void)

void FUN_14713c23e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713c278 FUN_14713c278 body=54 status=ok
// SIG undefined FUN_14713c278(void)

void FUN_14713c278(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14713c2b2 FUN_14713c2b2 body=54 status=ok
// SIG undefined FUN_14713c2b2(void)

void FUN_14713c2b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14713c2fe FUN_14713c2fe body=94 status=ok
// SIG undefined FUN_14713c2fe(void)

longlong FUN_14713c2fe(longlong param_1,longlong param_2)

{
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  FUN_14713c35c(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28));
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713c35c FUN_14713c35c body=102 status=ok
// SIG undefined FUN_14713c35c(void)

void FUN_14713c35c(longlong param_1,undefined8 param_2)

{
  FUN_147440b96(param_1,param_2,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 2,param_2,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 4,param_2,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 6,param_2,L"TranslucentSelfShadow",0);
  return;
}



// FUNCTION 14713c3c2 FUN_14713c3c2 body=54 status=ok
// SIG undefined FUN_14713c3c2(void)

void FUN_14713c3c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14713c3fc FUN_14713c3fc body=54 status=ok
// SIG undefined FUN_14713c3fc(void)

void FUN_14713c3fc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14713c448 FUN_14713c448 body=504 status=ok
// SIG undefined FUN_14713c448(void)

longlong FUN_14713c448(longlong param_1,longlong param_2)

{
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x121) = 0;
  FUN_14713c640(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28));
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x127,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x128,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713c640 FUN_14713c640 body=102 status=ok
// SIG undefined FUN_14713c640(void)

void FUN_14713c640(longlong param_1,undefined8 param_2)

{
  FUN_147440b96(param_1,param_2,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 2,param_2,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 4,param_2,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 6,param_2,L"TranslucentSelfShadow",0);
  return;
}



// FUNCTION 14713c6a6 FUN_14713c6a6 body=54 status=ok
// SIG undefined FUN_14713c6a6(void)

void FUN_14713c6a6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713c6e0 FUN_14713c6e0 body=54 status=ok
// SIG undefined FUN_14713c6e0(void)

void FUN_14713c6e0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713c71a FUN_14713c71a body=54 status=ok
// SIG undefined FUN_14713c71a(void)

void FUN_14713c71a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14713c754 FUN_14713c754 body=54 status=ok
// SIG undefined FUN_14713c754(void)

void FUN_14713c754(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14713c7a0 FUN_14713c7a0 body=94 status=ok
// SIG undefined FUN_14713c7a0(void)

longlong FUN_14713c7a0(longlong param_1,longlong param_2)

{
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  FUN_14713c7fe(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28));
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713c7fe FUN_14713c7fe body=102 status=ok
// SIG undefined FUN_14713c7fe(void)

void FUN_14713c7fe(longlong param_1,undefined8 param_2)

{
  FUN_147440b96(param_1,param_2,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 2,param_2,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 4,param_2,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 6,param_2,L"TranslucentSelfShadow",0);
  return;
}



// FUNCTION 14713c864 FUN_14713c864 body=54 status=ok
// SIG undefined FUN_14713c864(void)

void FUN_14713c864(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14713c89e FUN_14713c89e body=54 status=ok
// SIG undefined FUN_14713c89e(void)

void FUN_14713c89e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14713c8ea FUN_14713c8ea body=504 status=ok
// SIG undefined FUN_14713c8ea(void)

longlong FUN_14713c8ea(longlong param_1,longlong param_2)

{
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x121) = 0;
  FUN_14713cae2(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28));
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x127,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x128,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713cae2 FUN_14713cae2 body=102 status=ok
// SIG undefined FUN_14713cae2(void)

void FUN_14713cae2(longlong param_1,undefined8 param_2)

{
  FUN_147440b96(param_1,param_2,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 2,param_2,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 4,param_2,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 6,param_2,L"TranslucentSelfShadow",0);
  return;
}



// FUNCTION 14713cb48 FUN_14713cb48 body=54 status=ok
// SIG undefined FUN_14713cb48(void)

void FUN_14713cb48(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713cb82 FUN_14713cb82 body=54 status=ok
// SIG undefined FUN_14713cb82(void)

void FUN_14713cb82(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713cbbc FUN_14713cbbc body=166 status=ok
// SIG undefined FUN_14713cbbc(void)

longlong FUN_14713cbbc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713cc62 FUN_14713cc62 body=54 status=ok
// SIG undefined FUN_14713cc62(void)

void FUN_14713cc62(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713cc9c FUN_14713cc9c body=54 status=ok
// SIG undefined FUN_14713cc9c(void)

void FUN_14713cc9c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713ccd6 FUN_14713ccd6 body=166 status=ok
// SIG undefined FUN_14713ccd6(void)

longlong FUN_14713ccd6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713cd7c FUN_14713cd7c body=54 status=ok
// SIG undefined FUN_14713cd7c(void)

void FUN_14713cd7c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713cdb6 FUN_14713cdb6 body=54 status=ok
// SIG undefined FUN_14713cdb6(void)

void FUN_14713cdb6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713cdf0 FUN_14713cdf0 body=593 status=ok
// SIG undefined FUN_14713cdf0(void)

longlong FUN_14713cdf0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x118,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713d042 FUN_14713d042 body=54 status=ok
// SIG undefined FUN_14713d042(void)

void FUN_14713d042(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d07c FUN_14713d07c body=54 status=ok
// SIG undefined FUN_14713d07c(void)

void FUN_14713d07c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d0b6 FUN_14713d0b6 body=166 status=ok
// SIG undefined FUN_14713d0b6(void)

longlong FUN_14713d0b6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713d15c FUN_14713d15c body=54 status=ok
// SIG undefined FUN_14713d15c(void)

void FUN_14713d15c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d196 FUN_14713d196 body=54 status=ok
// SIG undefined FUN_14713d196(void)

void FUN_14713d196(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d1d0 FUN_14713d1d0 body=166 status=ok
// SIG undefined FUN_14713d1d0(void)

longlong FUN_14713d1d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713d276 FUN_14713d276 body=54 status=ok
// SIG undefined FUN_14713d276(void)

void FUN_14713d276(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713d2b0 FUN_14713d2b0 body=54 status=ok
// SIG undefined FUN_14713d2b0(void)

void FUN_14713d2b0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713d2ea FUN_14713d2ea body=593 status=ok
// SIG undefined FUN_14713d2ea(void)

longlong FUN_14713d2ea(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x118,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713d53c FUN_14713d53c body=54 status=ok
// SIG undefined FUN_14713d53c(void)

void FUN_14713d53c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d576 FUN_14713d576 body=54 status=ok
// SIG undefined FUN_14713d576(void)

void FUN_14713d576(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d5b0 FUN_14713d5b0 body=166 status=ok
// SIG undefined FUN_14713d5b0(void)

longlong FUN_14713d5b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713d656 FUN_14713d656 body=54 status=ok
// SIG undefined FUN_14713d656(void)

void FUN_14713d656(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d690 FUN_14713d690 body=54 status=ok
// SIG undefined FUN_14713d690(void)

void FUN_14713d690(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713d6ca FUN_14713d6ca body=166 status=ok
// SIG undefined FUN_14713d6ca(void)

longlong FUN_14713d6ca(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713d770 FUN_14713d770 body=54 status=ok
// SIG undefined FUN_14713d770(void)

void FUN_14713d770(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713d7aa FUN_14713d7aa body=54 status=ok
// SIG undefined FUN_14713d7aa(void)

void FUN_14713d7aa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713d7e4 FUN_14713d7e4 body=593 status=ok
// SIG undefined FUN_14713d7e4(void)

longlong FUN_14713d7e4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x118,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713da36 FUN_14713da36 body=54 status=ok
// SIG undefined FUN_14713da36(void)

void FUN_14713da36(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713da70 FUN_14713da70 body=54 status=ok
// SIG undefined FUN_14713da70(void)

void FUN_14713da70(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713daaa FUN_14713daaa body=166 status=ok
// SIG undefined FUN_14713daaa(void)

longlong FUN_14713daaa(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713db50 FUN_14713db50 body=54 status=ok
// SIG undefined FUN_14713db50(void)

void FUN_14713db50(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713db8a FUN_14713db8a body=54 status=ok
// SIG undefined FUN_14713db8a(void)

void FUN_14713db8a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713dbc4 FUN_14713dbc4 body=166 status=ok
// SIG undefined FUN_14713dbc4(void)

longlong FUN_14713dbc4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713dc6a FUN_14713dc6a body=54 status=ok
// SIG undefined FUN_14713dc6a(void)

void FUN_14713dc6a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713dca4 FUN_14713dca4 body=54 status=ok
// SIG undefined FUN_14713dca4(void)

void FUN_14713dca4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713dcde FUN_14713dcde body=593 status=ok
// SIG undefined FUN_14713dcde(void)

longlong FUN_14713dcde(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x118,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713df30 FUN_14713df30 body=54 status=ok
// SIG undefined FUN_14713df30(void)

void FUN_14713df30(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713df6a FUN_14713df6a body=54 status=ok
// SIG undefined FUN_14713df6a(void)

void FUN_14713df6a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713dfa4 FUN_14713dfa4 body=166 status=ok
// SIG undefined FUN_14713dfa4(void)

longlong FUN_14713dfa4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713e04a FUN_14713e04a body=54 status=ok
// SIG undefined FUN_14713e04a(void)

void FUN_14713e04a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e084 FUN_14713e084 body=54 status=ok
// SIG undefined FUN_14713e084(void)

void FUN_14713e084(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e0be FUN_14713e0be body=166 status=ok
// SIG undefined FUN_14713e0be(void)

longlong FUN_14713e0be(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713e164 FUN_14713e164 body=54 status=ok
// SIG undefined FUN_14713e164(void)

void FUN_14713e164(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713e19e FUN_14713e19e body=54 status=ok
// SIG undefined FUN_14713e19e(void)

void FUN_14713e19e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713e1d8 FUN_14713e1d8 body=593 status=ok
// SIG undefined FUN_14713e1d8(void)

longlong FUN_14713e1d8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x118,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713e42a FUN_14713e42a body=54 status=ok
// SIG undefined FUN_14713e42a(void)

void FUN_14713e42a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e464 FUN_14713e464 body=54 status=ok
// SIG undefined FUN_14713e464(void)

void FUN_14713e464(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e49e FUN_14713e49e body=166 status=ok
// SIG undefined FUN_14713e49e(void)

longlong FUN_14713e49e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713e544 FUN_14713e544 body=54 status=ok
// SIG undefined FUN_14713e544(void)

void FUN_14713e544(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e57e FUN_14713e57e body=54 status=ok
// SIG undefined FUN_14713e57e(void)

void FUN_14713e57e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e5b8 FUN_14713e5b8 body=166 status=ok
// SIG undefined FUN_14713e5b8(void)

longlong FUN_14713e5b8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713e65e FUN_14713e65e body=54 status=ok
// SIG undefined FUN_14713e65e(void)

void FUN_14713e65e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713e698 FUN_14713e698 body=54 status=ok
// SIG undefined FUN_14713e698(void)

void FUN_14713e698(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713e6d2 FUN_14713e6d2 body=593 status=ok
// SIG undefined FUN_14713e6d2(void)

longlong FUN_14713e6d2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x118,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713e924 FUN_14713e924 body=54 status=ok
// SIG undefined FUN_14713e924(void)

void FUN_14713e924(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e95e FUN_14713e95e body=54 status=ok
// SIG undefined FUN_14713e95e(void)

void FUN_14713e95e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713e998 FUN_14713e998 body=166 status=ok
// SIG undefined FUN_14713e998(void)

longlong FUN_14713e998(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713ea3e FUN_14713ea3e body=54 status=ok
// SIG undefined FUN_14713ea3e(void)

void FUN_14713ea3e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713ea78 FUN_14713ea78 body=54 status=ok
// SIG undefined FUN_14713ea78(void)

void FUN_14713ea78(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14713eab2 FUN_14713eab2 body=166 status=ok
// SIG undefined FUN_14713eab2(void)

longlong FUN_14713eab2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 14713eb58 FUN_14713eb58 body=54 status=ok
// SIG undefined FUN_14713eb58(void)

void FUN_14713eb58(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713eb92 FUN_14713eb92 body=54 status=ok
// SIG undefined FUN_14713eb92(void)

void FUN_14713eb92(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x128);
  return;
}



// FUNCTION 14713ebcc FUN_14713ebcc body=593 status=ok
// SIG undefined FUN_14713ebcc(void)

longlong FUN_14713ebcc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ReflectionCapture",0);
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs",0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"ViewRect",0);
  FUN_1474409b8(param_1 + 0x118,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440b34(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget0")
  ;
  FUN_147440b34(param_1 + 0x11f,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget1")
  ;
  FUN_147440b34(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget2")
  ;
  FUN_147440b34(param_1 + 0x121,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget3")
  ;
  FUN_147440b34(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget4")
  ;
  FUN_147440b34(param_1 + 0x123,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget5")
  ;
  FUN_147440b34(param_1 + 0x124,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget6")
  ;
  FUN_147440b34(param_1 + 0x125,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTarget7")
  ;
  FUN_147440b34(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ComputeShadingOutputs.OutTargets")
  ;
  return param_1;
}



// FUNCTION 14713ee1e FUN_14713ee1e body=38 status=ok
// SIG undefined FUN_14713ee1e(void)

undefined8 FUN_14713ee1e(undefined8 param_1,int param_2)

{
  FUN_1462b53ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713ee78 FUN_14713ee78 body=38 status=ok
// SIG undefined FUN_14713ee78(void)

undefined8 FUN_14713ee78(undefined8 param_1,int param_2)

{
  FUN_1462b5416();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713eea4 FUN_14713eea4 body=38 status=ok
// SIG undefined FUN_14713eea4(void)

undefined8 FUN_14713eea4(undefined8 param_1,int param_2)

{
  FUN_1462b545e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713eed0 FUN_14713eed0 body=38 status=ok
// SIG undefined FUN_14713eed0(void)

undefined8 FUN_14713eed0(undefined8 param_1,int param_2)

{
  FUN_1462b54a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713ef2a FUN_14713ef2a body=38 status=ok
// SIG undefined FUN_14713ef2a(void)

undefined8 FUN_14713ef2a(undefined8 param_1,int param_2)

{
  FUN_1462b54ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713ef56 FUN_14713ef56 body=38 status=ok
// SIG undefined FUN_14713ef56(void)

undefined8 FUN_14713ef56(undefined8 param_1,int param_2)

{
  FUN_1462b5536();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713efb0 FUN_14713efb0 body=38 status=ok
// SIG undefined FUN_14713efb0(void)

undefined8 FUN_14713efb0(undefined8 param_1,int param_2)

{
  FUN_1462b557e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713efdc FUN_14713efdc body=38 status=ok
// SIG undefined FUN_14713efdc(void)

undefined8 FUN_14713efdc(undefined8 param_1,int param_2)

{
  FUN_1462b55c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f036 FUN_14713f036 body=38 status=ok
// SIG undefined FUN_14713f036(void)

undefined8 FUN_14713f036(undefined8 param_1,int param_2)

{
  FUN_1462b560e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f090 FUN_14713f090 body=38 status=ok
// SIG undefined FUN_14713f090(void)

undefined8 FUN_14713f090(undefined8 param_1,int param_2)

{
  FUN_1462b5656();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f0ea FUN_14713f0ea body=38 status=ok
// SIG undefined FUN_14713f0ea(void)

undefined8 FUN_14713f0ea(undefined8 param_1,int param_2)

{
  FUN_1462b569e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f116 FUN_14713f116 body=38 status=ok
// SIG undefined FUN_14713f116(void)

undefined8 FUN_14713f116(undefined8 param_1,int param_2)

{
  FUN_1462b56e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f142 FUN_14713f142 body=38 status=ok
// SIG undefined FUN_14713f142(void)

undefined8 FUN_14713f142(undefined8 param_1,int param_2)

{
  FUN_1462b572e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f16e FUN_14713f16e body=38 status=ok
// SIG undefined FUN_14713f16e(void)

undefined8 FUN_14713f16e(undefined8 param_1,int param_2)

{
  FUN_1462b5776();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f1c8 FUN_14713f1c8 body=38 status=ok
// SIG undefined FUN_14713f1c8(void)

undefined8 FUN_14713f1c8(undefined8 param_1,int param_2)

{
  FUN_1462b57be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f222 FUN_14713f222 body=38 status=ok
// SIG undefined FUN_14713f222(void)

undefined8 FUN_14713f222(undefined8 param_1,int param_2)

{
  FUN_1462b5806();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f27c FUN_14713f27c body=38 status=ok
// SIG undefined FUN_14713f27c(void)

undefined8 FUN_14713f27c(undefined8 param_1,int param_2)

{
  FUN_1462b584e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f2a8 FUN_14713f2a8 body=38 status=ok
// SIG undefined FUN_14713f2a8(void)

undefined8 FUN_14713f2a8(undefined8 param_1,int param_2)

{
  FUN_1462b5896();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f302 FUN_14713f302 body=38 status=ok
// SIG undefined FUN_14713f302(void)

undefined8 FUN_14713f302(undefined8 param_1,int param_2)

{
  FUN_1462b58de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f32e FUN_14713f32e body=38 status=ok
// SIG undefined FUN_14713f32e(void)

undefined8 FUN_14713f32e(undefined8 param_1,int param_2)

{
  FUN_1462b5926();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713f387 FUN_14713f387 body=101 status=ok
// SIG undefined FUN_14713f387(void)

void FUN_14713f387(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460b8fe8();
      puVar2 = &DAT_14c9b0938;
    }
    else {
      FUN_1460b99b8();
      puVar2 = &DAT_14c9b0dd8;
    }
  }
  else if (param_2 == '\0') {
    FUN_145c93b0a();
    puVar2 = &DAT_14c9b0810;
  }
  else {
    FUN_1460b9744();
    puVar2 = &DAT_14c9b0cb0;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f3ec FUN_14713f3ec body=101 status=ok
// SIG undefined FUN_14713f3ec(void)

void FUN_14713f3ec(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460b94d0();
      puVar2 = &DAT_14c9b0b88;
    }
    else {
      FUN_1460b9ea0();
      puVar2 = &DAT_14c9b1028;
    }
  }
  else if (param_2 == '\0') {
    FUN_1460b925c();
    puVar2 = &DAT_14c9b0a60;
  }
  else {
    FUN_1460b9c2c();
    puVar2 = &DAT_14c9b0f00;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f451 FUN_14713f451 body=101 status=ok
// SIG undefined FUN_14713f451(void)

void FUN_14713f451(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460ba870();
      puVar2 = &DAT_14c9b1840;
    }
    else {
      FUN_1460bb240();
      puVar2 = &DAT_14c9b1ce0;
    }
  }
  else if (param_2 == '\0') {
    FUN_145c940e8();
    puVar2 = &DAT_14c9b1718;
  }
  else {
    FUN_1460bafcc();
    puVar2 = &DAT_14c9b1bb8;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f4b6 FUN_14713f4b6 body=101 status=ok
// SIG undefined FUN_14713f4b6(void)

void FUN_14713f4b6(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460bad58();
      puVar2 = &DAT_14c9b1a90;
    }
    else {
      FUN_1460bb728();
      puVar2 = &DAT_14c9b1f30;
    }
  }
  else if (param_2 == '\0') {
    FUN_1460baae4();
    puVar2 = &DAT_14c9b1968;
  }
  else {
    FUN_1460bb4b4();
    puVar2 = &DAT_14c9b1e08;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f51b FUN_14713f51b body=101 status=ok
// SIG undefined FUN_14713f51b(void)

void FUN_14713f51b(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460bc0f8();
      puVar2 = &DAT_14c9b2748;
    }
    else {
      FUN_1460bcac8();
      puVar2 = &DAT_14c9b2be8;
    }
  }
  else if (param_2 == '\0') {
    FUN_145c946c6();
    puVar2 = &DAT_14c9b2620;
  }
  else {
    FUN_1460bc854();
    puVar2 = &DAT_14c9b2ac0;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f580 FUN_14713f580 body=101 status=ok
// SIG undefined FUN_14713f580(void)

void FUN_14713f580(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460bc5e0();
      puVar2 = &DAT_14c9b2998;
    }
    else {
      FUN_1460bcfb0();
      puVar2 = &DAT_14c9b2e38;
    }
  }
  else if (param_2 == '\0') {
    FUN_1460bc36c();
    puVar2 = &DAT_14c9b2870;
  }
  else {
    FUN_1460bcd3c();
    puVar2 = &DAT_14c9b2d10;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f5e5 FUN_14713f5e5 body=101 status=ok
// SIG undefined FUN_14713f5e5(void)

void FUN_14713f5e5(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460bd980();
      puVar2 = &DAT_14c9b3650;
    }
    else {
      FUN_1460be350();
      puVar2 = &DAT_14c9b3af0;
    }
  }
  else if (param_2 == '\0') {
    FUN_145c94ca4();
    puVar2 = &DAT_14c9b3528;
  }
  else {
    FUN_1460be0dc();
    puVar2 = &DAT_14c9b39c8;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f64a FUN_14713f64a body=101 status=ok
// SIG undefined FUN_14713f64a(void)

void FUN_14713f64a(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460bde68();
      puVar2 = &DAT_14c9b38a0;
    }
    else {
      FUN_1460be838();
      puVar2 = &DAT_14c9b3d40;
    }
  }
  else if (param_2 == '\0') {
    FUN_1460bdbf4();
    puVar2 = &DAT_14c9b3778;
  }
  else {
    FUN_1460be5c4();
    puVar2 = &DAT_14c9b3c18;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f6af FUN_14713f6af body=101 status=ok
// SIG undefined FUN_14713f6af(void)

void FUN_14713f6af(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460bf208();
      puVar2 = &DAT_14c9b4558;
    }
    else {
      FUN_1460bfbd8();
      puVar2 = &DAT_14c9b49f8;
    }
  }
  else if (param_2 == '\0') {
    FUN_145c95282();
    puVar2 = &DAT_14c9b4430;
  }
  else {
    FUN_1460bf964();
    puVar2 = &DAT_14c9b48d0;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f714 FUN_14713f714 body=101 status=ok
// SIG undefined FUN_14713f714(void)

void FUN_14713f714(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460bf6f0();
      puVar2 = &DAT_14c9b47a8;
    }
    else {
      FUN_1460c00c0();
      puVar2 = &DAT_14c9b4c48;
    }
  }
  else if (param_2 == '\0') {
    FUN_1460bf47c();
    puVar2 = &DAT_14c9b4680;
  }
  else {
    FUN_1460bfe4c();
    puVar2 = &DAT_14c9b4b20;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f779 FUN_14713f779 body=101 status=ok
// SIG undefined FUN_14713f779(void)

void FUN_14713f779(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460c0a90();
      puVar2 = &DAT_14c9b5460;
    }
    else {
      FUN_1460c1460();
      puVar2 = &DAT_14c9b5900;
    }
  }
  else if (param_2 == '\0') {
    FUN_145c95860();
    puVar2 = &DAT_14c9b5338;
  }
  else {
    FUN_1460c11ec();
    puVar2 = &DAT_14c9b57d8;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f7de FUN_14713f7de body=101 status=ok
// SIG undefined FUN_14713f7de(void)

void FUN_14713f7de(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460c0f78();
      puVar2 = &DAT_14c9b56b0;
    }
    else {
      FUN_1460c1948();
      puVar2 = &DAT_14c9b5b50;
    }
  }
  else if (param_2 == '\0') {
    FUN_1460c0d04();
    puVar2 = &DAT_14c9b5588;
  }
  else {
    FUN_1460c16d4();
    puVar2 = &DAT_14c9b5a28;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f843 FUN_14713f843 body=101 status=ok
// SIG undefined FUN_14713f843(void)

void FUN_14713f843(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460b83a4();
      puVar2 = &DAT_14c9afc80;
    }
    else {
      FUN_1460b888c();
      puVar2 = &DAT_14c9b0120;
    }
  }
  else if (param_2 == '\0') {
    FUN_1460b8130();
    puVar2 = &DAT_14c9afb58;
  }
  else {
    FUN_1460b8618();
    puVar2 = &DAT_14c9afff8;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713f8a8 FUN_14713f8a8 body=108 status=ok
// SIG undefined FUN_14713f8a8(void)

void FUN_14713f8a8(char param_1,char param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_2 == '\v') {
    if (param_1 == '\0') {
      FUN_1460ba5fc();
      puVar2 = &DAT_14c9b14c8;
    }
    else {
      FUN_1460ba388();
      puVar2 = &DAT_14c9b13a0;
    }
  }
  else {
    if (param_2 != '\x05') {
      return;
    }
    if (param_1 == '\0') {
      FUN_1460ba114();
      puVar2 = &DAT_14c9b1278;
    }
    else {
      FUN_145d04b6e();
      puVar2 = &DAT_14c9b1150;
    }
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  return;
}



// FUNCTION 14713f914 FUN_14713f914 body=108 status=ok
// SIG undefined FUN_14713f914(void)

void FUN_14713f914(char param_1,char param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_2 == '\v') {
    if (param_1 == '\0') {
      FUN_1460bbe84();
      puVar2 = &DAT_14c9b23d0;
    }
    else {
      FUN_1460bbc10();
      puVar2 = &DAT_14c9b22a8;
    }
  }
  else {
    if (param_2 != '\x05') {
      return;
    }
    if (param_1 == '\0') {
      FUN_1460bb99c();
      puVar2 = &DAT_14c9b2180;
    }
    else {
      FUN_145d056fa();
      puVar2 = &DAT_14c9b2058;
    }
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  return;
}



// FUNCTION 14713f980 FUN_14713f980 body=108 status=ok
// SIG undefined FUN_14713f980(void)

void FUN_14713f980(char param_1,char param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_2 == '\v') {
    if (param_1 == '\0') {
      FUN_1460bd70c();
      puVar2 = &DAT_14c9b32d8;
    }
    else {
      FUN_1460bd498();
      puVar2 = &DAT_14c9b31b0;
    }
  }
  else {
    if (param_2 != '\x05') {
      return;
    }
    if (param_1 == '\0') {
      FUN_1460bd224();
      puVar2 = &DAT_14c9b3088;
    }
    else {
      FUN_145d06286();
      puVar2 = &DAT_14c9b2f60;
    }
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  return;
}



// FUNCTION 14713f9ec FUN_14713f9ec body=108 status=ok
// SIG undefined FUN_14713f9ec(void)

void FUN_14713f9ec(char param_1,char param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_2 == '\v') {
    if (param_1 == '\0') {
      FUN_1460bef94();
      puVar2 = &DAT_14c9b41e0;
    }
    else {
      FUN_1460bed20();
      puVar2 = &DAT_14c9b40b8;
    }
  }
  else {
    if (param_2 != '\x05') {
      return;
    }
    if (param_1 == '\0') {
      FUN_1460beaac();
      puVar2 = &DAT_14c9b3f90;
    }
    else {
      FUN_145d06e12();
      puVar2 = &DAT_14c9b3e68;
    }
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  return;
}



// FUNCTION 14713fa58 FUN_14713fa58 body=108 status=ok
// SIG undefined FUN_14713fa58(void)

void FUN_14713fa58(char param_1,char param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_2 == '\v') {
    if (param_1 == '\0') {
      FUN_1460c081c();
      puVar2 = &DAT_14c9b50e8;
    }
    else {
      FUN_1460c05a8();
      puVar2 = &DAT_14c9b4fc0;
    }
  }
  else {
    if (param_2 != '\x05') {
      return;
    }
    if (param_1 == '\0') {
      FUN_1460c0334();
      puVar2 = &DAT_14c9b4e98;
    }
    else {
      FUN_145d0799e();
      puVar2 = &DAT_14c9b4d70;
    }
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  return;
}



// FUNCTION 14713fac4 FUN_14713fac4 body=108 status=ok
// SIG undefined FUN_14713fac4(void)

void FUN_14713fac4(char param_1,char param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_2 == '\v') {
    if (param_1 == '\0') {
      FUN_1460c20a4();
      puVar2 = &DAT_14c9b5ff0;
    }
    else {
      FUN_1460c1e30();
      puVar2 = &DAT_14c9b5ec8;
    }
  }
  else {
    if (param_2 != '\x05') {
      return;
    }
    if (param_1 == '\0') {
      FUN_1460c1bbc();
      puVar2 = &DAT_14c9b5da0;
    }
    else {
      FUN_145d0852a();
      puVar2 = &DAT_14c9b5c78;
    }
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  return;
}



// FUNCTION 14713fb30 FUN_14713fb30 body=38 status=ok
// SIG undefined FUN_14713fb30(void)

undefined8 FUN_14713fb30(undefined8 param_1,int param_2)

{
  FUN_1462b596e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713fb8a FUN_14713fb8a body=38 status=ok
// SIG undefined FUN_14713fb8a(void)

undefined8 FUN_14713fb8a(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713fbb0 FUN_14713fbb0 body=38 status=ok
// SIG undefined FUN_14713fbb0(void)

undefined8 FUN_14713fbb0(undefined8 param_1,int param_2)

{
  FUN_1462b59b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713fc0a FUN_14713fc0a body=38 status=ok
// SIG undefined FUN_14713fc0a(void)

undefined8 FUN_14713fc0a(undefined8 param_1,int param_2)

{
  FUN_1462b59fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14713fc63 FUN_14713fc63 body=323 status=ok
// SIG undefined FUN_14713fc63(void)

void FUN_14713fc63(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6,undefined1 param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  undefined8 auStack_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_d0,0,0x98);
  if (param_5 != (longlong *)0x0) {
    FUN_14600eb9a();
    auStack_c8[DAT_14c9ae920] = &DAT_14c9ae8d8;
    auStack_68[DAT_14c9ae920] = 0;
  }
  if (param_6 != (longlong *)0x0) {
    FUN_14713fda7(param_3,param_4,local_d0,param_7);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  cVar1 = FUN_14007744c(param_1,local_d0,param_2);
  if (cVar1 != '\0') {
    if (local_138 != 0) {
      *param_5 = local_138;
      param_5[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_6 = lStack_120;
      param_6[1] = local_148;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14713fda7 FUN_14713fda7 body=101 status=ok
// SIG undefined FUN_14713fda7(void)

void FUN_14713fda7(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460b68a8();
      puVar2 = &DAT_14c9aeb28;
    }
    else {
      FUN_1460b7278();
      puVar2 = &DAT_14c9aefc8;
    }
  }
  else if (param_2 == '\0') {
    FUN_145cd49a8();
    puVar2 = &DAT_14c9aea00;
  }
  else {
    FUN_1460b7004();
    puVar2 = &DAT_14c9aeea0;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 14713fe0c FUN_14713fe0c body=168 status=ok
// SIG undefined FUN_14713fe0c(void)

void FUN_14713fe0c(longlong param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfe0c) {
    FUN_144b3d300(&DAT_14c9bfe0c);
    if (DAT_14c9bfe0c == -1) {
      cVar1 = FUN_14473b0f0();
      if (cVar1 == '\0') {
        DAT_14c9bfe08 = '\0';
      }
      else {
        DAT_14c9bfe08 = FUN_1474312f5(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2));
      }
      _Init_thread_footer(&DAT_14c9bfe0c);
    }
  }
  puVar2 = &DAT_14c9b7af0;
  if (DAT_14c9bfe08 != '\0') {
    puVar2 = &DAT_14c9b7ad8;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14713feb4 FUN_14713feb4 body=168 status=ok
// SIG undefined FUN_14713feb4(void)

void FUN_14713feb4(longlong param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfe14) {
    FUN_144b3d300(&DAT_14c9bfe14);
    if (DAT_14c9bfe14 == -1) {
      cVar1 = FUN_14473b0f0();
      if (cVar1 == '\0') {
        DAT_14c9bfe10 = '\0';
      }
      else {
        DAT_14c9bfe10 = FUN_1474312f5(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2));
      }
      _Init_thread_footer(&DAT_14c9bfe14);
    }
  }
  puVar2 = &DAT_14c9b7b20;
  if (DAT_14c9bfe10 != '\0') {
    puVar2 = &DAT_14c9b7b08;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14713ff5c FUN_14713ff5c body=168 status=ok
// SIG undefined FUN_14713ff5c(void)

void FUN_14713ff5c(longlong param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfe1c) {
    FUN_144b3d300(&DAT_14c9bfe1c);
    if (DAT_14c9bfe1c == -1) {
      cVar1 = FUN_14473b0f0();
      if (cVar1 == '\0') {
        DAT_14c9bfe18 = '\0';
      }
      else {
        DAT_14c9bfe18 = FUN_1474312f5(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2));
      }
      _Init_thread_footer(&DAT_14c9bfe1c);
    }
  }
  puVar2 = &DAT_14c9b7b50;
  if (DAT_14c9bfe18 != '\0') {
    puVar2 = &DAT_14c9b7b38;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147140004 FUN_147140004 body=38 status=ok
// SIG undefined FUN_147140004(void)

undefined8 FUN_147140004(undefined8 param_1,int param_2)

{
  FUN_1462b5a46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147140030 FUN_147140030 body=38 status=ok
// SIG undefined FUN_147140030(void)

undefined8 FUN_147140030(undefined8 param_1,int param_2)

{
  FUN_1462b5a8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14714008a FUN_14714008a body=38 status=ok
// SIG undefined FUN_14714008a(void)

undefined8 FUN_14714008a(undefined8 param_1,int param_2)

{
  FUN_1462b5ad6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471400b6 FUN_1471400b6 body=38 status=ok
// SIG undefined FUN_1471400b6(void)

undefined8 FUN_1471400b6(undefined8 param_1,int param_2)

{
  FUN_1462b5b1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471400e2 FUN_1471400e2 body=38 status=ok
// SIG undefined FUN_1471400e2(void)

undefined8 FUN_1471400e2(undefined8 param_1,int param_2)

{
  FUN_1462b5b66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14714010e FUN_14714010e body=38 status=ok
// SIG undefined FUN_14714010e(void)

undefined8 FUN_14714010e(undefined8 param_1,int param_2)

{
  FUN_1462b5bae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14714013a FUN_14714013a body=38 status=ok
// SIG undefined FUN_14714013a(void)

undefined8 FUN_14714013a(undefined8 param_1,int param_2)

{
  FUN_1462b5bf6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147140166 FUN_147140166 body=38 status=ok
// SIG undefined FUN_147140166(void)

undefined8 FUN_147140166(undefined8 param_1,int param_2)

{
  FUN_1462b5c3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471401bf FUN_1471401bf body=323 status=ok
// SIG undefined FUN_1471401bf(void)

void FUN_1471401bf(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6,undefined1 param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  undefined8 auStack_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_d0,0,0x98);
  if (param_5 != (longlong *)0x0) {
    FUN_14600e5ac();
    auStack_c8[DAT_14c9ada18] = &DAT_14c9ad9d0;
    auStack_68[DAT_14c9ada18] = 0;
  }
  if (param_6 != (longlong *)0x0) {
    FUN_147140303(param_3,param_4,local_d0,param_7);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  cVar1 = FUN_14007744c(param_1,local_d0,param_2);
  if (cVar1 != '\0') {
    if (local_138 != 0) {
      *param_5 = local_138;
      param_5[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_6 = lStack_120;
      param_6[1] = local_148;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147140303 FUN_147140303 body=101 status=ok
// SIG undefined FUN_147140303(void)

void FUN_147140303(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460b5294();
      puVar2 = &DAT_14c9adc20;
    }
    else {
      FUN_1460b5c64();
      puVar2 = &DAT_14c9ae0c0;
    }
  }
  else if (param_2 == '\0') {
    FUN_145cd4206();
    puVar2 = &DAT_14c9adaf8;
  }
  else {
    FUN_1460b59f0();
    puVar2 = &DAT_14c9adf98;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 147140368 FUN_147140368 body=323 status=ok
// SIG undefined FUN_147140368(void)

void FUN_147140368(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6,undefined1 param_7)

{
  char cVar1;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  undefined8 auStack_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_d0,0,0x98);
  if (param_5 != (longlong *)0x0) {
    FUN_145e16692();
    auStack_c8[DAT_14c9acb10] = &DAT_14c9acac8;
    auStack_68[DAT_14c9acb10] = 0;
  }
  if (param_6 != (longlong *)0x0) {
    FUN_1471404ac(param_3,param_4,local_d0,param_7);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  cVar1 = FUN_14007744c(param_1,local_d0,param_2);
  if (cVar1 != '\0') {
    if (local_138 != 0) {
      *param_5 = local_138;
      param_5[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_6 = lStack_120;
      param_6[1] = local_148;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471404ac FUN_1471404ac body=101 status=ok
// SIG undefined FUN_1471404ac(void)

void FUN_1471404ac(char param_1,char param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      FUN_1460b3c80();
      puVar2 = &DAT_14c9acd18;
    }
    else {
      FUN_1460b43dc();
      puVar2 = &DAT_14c9ad1b8;
    }
  }
  else if (param_2 == '\0') {
    FUN_145c85e3e();
    puVar2 = &DAT_14c9acbf0;
  }
  else {
    FUN_1460b4168();
    puVar2 = &DAT_14c9ad090;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(uint *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = param_4 & 0xff;
  return;
}



// FUNCTION 147140512 FUN_147140512 body=124 status=ok
// SIG undefined FUN_147140512(void)

void FUN_147140512(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 2,0);
      iVar3 = (int)(uVar4 >> 2);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_147140590(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147140590 FUN_147140590 body=132 status=ok
// SIG undefined FUN_147140590(void)

void FUN_147140590(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,4);
  return;
}



// FUNCTION 147140614 FUN_147140614 body=569 status=ok
// SIG undefined FUN_147140614(void)

void FUN_147140614(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulonglong param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined1 *local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e0 = param_11;
  local_e8 = param_10;
  local_f0 = param_9;
  local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,param_8);
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_7);
  local_108 = param_6;
  local_d4 = param_1;
  FUN_142b98422(param_2,param_3,param_4,param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfe58) {
    FUN_144b3d300(&DAT_14c9bfe58);
    if (DAT_14c9bfe58 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.PSOPrecache.PrecacheAlphaColorChannel",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bfe50 = 0;
      }
      else {
        DAT_14c9bfe50 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bfe58);
    }
  }
  lVar4 = DAT_14c9bfe50;
  if (DAT_14c9bfe50 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar2 = 0;
    }
    else {
      bVar1 = FUN_144a61b4f();
      uVar2 = (ulonglong)(bVar1 ^ 1);
    }
    if (0 < *(int *)(lVar4 + uVar2 * 4)) {
      puVar5 = param_5;
      puVar6 = &local_b8;
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_f8 = &local_c8;
      local_100 = &local_b9;
      local_108 = local_108 & 0xffffffffffffff00;
      local_d0 = param_4;
      FUN_1400530af(local_d4,1,0,*(undefined2 *)(param_5 + 0xd));
      local_b8._4_1_ = local_b9;
      local_a8 = local_c8;
      local_e0 = param_11;
      local_e8 = param_10;
      local_f0 = param_9;
      local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,param_8);
      local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_7);
      local_108 = param_6;
      FUN_142b98422(param_2,param_3,local_d0,&local_b8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14714084e FUN_14714084e body=569 status=ok
// SIG undefined FUN_14714084e(void)

void FUN_14714084e(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulonglong param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined1 *local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e0 = param_11;
  local_e8 = param_10;
  local_f0 = param_9;
  local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,param_8);
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_7);
  local_108 = param_6;
  local_d4 = param_1;
  FUN_142b98d5c(param_2,param_3,param_4,param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfe78) {
    FUN_144b3d300(&DAT_14c9bfe78);
    if (DAT_14c9bfe78 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.PSOPrecache.PrecacheAlphaColorChannel",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bfe70 = 0;
      }
      else {
        DAT_14c9bfe70 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bfe78);
    }
  }
  lVar4 = DAT_14c9bfe70;
  if (DAT_14c9bfe70 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar2 = 0;
    }
    else {
      bVar1 = FUN_144a61b4f();
      uVar2 = (ulonglong)(bVar1 ^ 1);
    }
    if (0 < *(int *)(lVar4 + uVar2 * 4)) {
      puVar5 = param_5;
      puVar6 = &local_b8;
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_f8 = &local_c8;
      local_100 = &local_b9;
      local_108 = local_108 & 0xffffffffffffff00;
      local_d0 = param_4;
      FUN_1400530af(local_d4,1,0,*(undefined2 *)(param_5 + 0xd));
      local_b8._4_1_ = local_b9;
      local_a8 = local_c8;
      local_e0 = param_11;
      local_e8 = param_10;
      local_f0 = param_9;
      local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,param_8);
      local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_7);
      local_108 = param_6;
      FUN_142b98d5c(param_2,param_3,local_d0,&local_b8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147140a88 FUN_147140a88 body=569 status=ok
// SIG undefined FUN_147140a88(void)

void FUN_147140a88(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulonglong param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined1 *local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e0 = param_11;
  local_e8 = param_10;
  local_f0 = param_9;
  local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,param_8);
  local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_7);
  local_108 = param_6;
  local_d4 = param_1;
  FUN_142b99696(param_2,param_3,param_4,param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bfe98) {
    FUN_144b3d300(&DAT_14c9bfe98);
    if (DAT_14c9bfe98 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.PSOPrecache.PrecacheAlphaColorChannel",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9bfe90 = 0;
      }
      else {
        DAT_14c9bfe90 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9bfe98);
    }
  }
  lVar4 = DAT_14c9bfe90;
  if (DAT_14c9bfe90 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar2 = 0;
    }
    else {
      bVar1 = FUN_144a61b4f();
      uVar2 = (ulonglong)(bVar1 ^ 1);
    }
    if (0 < *(int *)(lVar4 + uVar2 * 4)) {
      puVar5 = param_5;
      puVar6 = &local_b8;
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_f8 = &local_c8;
      local_100 = &local_b9;
      local_108 = local_108 & 0xffffffffffffff00;
      local_d0 = param_4;
      FUN_1400530af(local_d4,1,0,*(undefined2 *)(param_5 + 0xd));
      local_b8._4_1_ = local_b9;
      local_a8 = local_c8;
      local_e0 = param_11;
      local_e8 = param_10;
      local_f0 = param_9;
      local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,param_8);
      local_100 = (undefined1 *)CONCAT44(local_100._4_4_,param_7);
      local_108 = param_6;
      FUN_142b99696(param_2,param_3,local_d0,&local_b8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147140cc2 FUN_147140cc2 body=127 status=ok
// SIG undefined FUN_147140cc2(void)

void FUN_147140cc2(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x1a] = 0;
  param_1[0x3c] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// FUNCTION 147140d42 FUN_147140d42 body=29 status=ok
// SIG undefined FUN_147140d42(void)

undefined8 FUN_147140d42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147140d60 FUN_147140d60 body=384 status=ok
// SIG undefined FUN_147140d60(void)

void FUN_147140d60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9b8108;
  if (DAT_14c9b8108 != 0) {
    LOCK();
    *(int *)(DAT_14c9b8108 + 8) = *(int *)(DAT_14c9b8108 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9b80c0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a1f6400;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147140ee2 FUN_147140ee2 body=38 status=ok
// SIG undefined FUN_147140ee2(void)

undefined8 FUN_147140ee2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147140f08 FUN_147140f08 body=163 status=ok
// SIG undefined FUN_147140f08(void)

void FUN_147140f08(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142b9a1b2();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142b9a29a(param_1,param_2);
  return;
}



// FUNCTION 147140fab FUN_147140fab body=374 status=ok
// SIG undefined FUN_147140fab(void)

void FUN_147140fab(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147141122 FUN_147141122 body=174 status=ok
// SIG undefined FUN_147141122(void)

void FUN_147141122(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0x14] = 0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  lVar1 = 0xc0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x180);
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x36] = 0;
  return;
}



// FUNCTION 1471411d0 FUN_1471411d0 body=29 status=ok
// SIG undefined FUN_1471411d0(void)

undefined8 FUN_1471411d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471411ee FUN_1471411ee body=258 status=ok
// SIG undefined FUN_1471411ee(void)

void FUN_1471411ee(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0018) {
    FUN_144b3d300(&DAT_14c9c0018);
    if (DAT_14c9c0018 == -1) {
      FUN_1471412f2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FUpsampleCapsuleShadowParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x159;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9bff98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b9a9c5);
      _Init_thread_footer(&DAT_14c9c0018);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471412f2 FUN_1471412f2 body=226 status=ok
// SIG undefined FUN_1471412f2(void)

longlong * FUN_1471412f2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1471413d6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471413d6 FUN_1471413d6 body=136 status=ok
// SIG undefined FUN_1471413d6(void)

code * FUN_1471413d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000015d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14714145e;
}



// FUNCTION 14714145e FUN_14714145e body=142 status=ok
// SIG undefined FUN_14714145e(void)

code * FUN_14714145e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa00000015c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471414ec;
}



// FUNCTION 1471414ec FUN_1471414ec body=144 status=ok
// SIG undefined FUN_1471414ec(void)

code * FUN_1471414ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145f7044e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCapsuleShadowingUpsamplePS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000015b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b81d0;
  return FUN_14714157c;
}



// FUNCTION 14714157c FUN_14714157c body=138 status=ok
// SIG undefined FUN_14714157c(void)

undefined1 * FUN_14714157c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e7e0ee();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCapsuleShadowingUpsampleVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b8148;
  return &LAB_147141606;
}



// FUNCTION 14714160a FUN_14714160a body=38 status=ok
// SIG undefined FUN_14714160a(void)

undefined8 FUN_14714160a(undefined8 param_1,int param_2)

{
  FUN_1462b5c86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147141636 FUN_147141636 body=38 status=ok
// SIG undefined FUN_147141636(void)

undefined8 FUN_147141636(undefined8 param_1,int param_2)

{
  FUN_1462b5cce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147141662 FUN_147141662 body=38 status=ok
// SIG undefined FUN_147141662(void)

undefined8 FUN_147141662(undefined8 param_1,int param_2)

{
  FUN_1462b5d16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471416bc FUN_1471416bc body=119 status=ok
// SIG undefined FUN_1471416bc(void)

void FUN_1471416bc(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147141734(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147141734 FUN_147141734 body=141 status=ok
// SIG undefined FUN_147141734(void)

void FUN_147141734(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 1471417c2 FUN_1471417c2 body=119 status=ok
// SIG undefined FUN_1471417c2(void)

void FUN_1471417c2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14714183a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14714183a FUN_14714183a body=141 status=ok
// SIG undefined FUN_14714183a(void)

void FUN_14714183a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 1471418c8 FUN_1471418c8 body=112 status=ok
// SIG undefined FUN_1471418c8(void)

void FUN_1471418c8(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x10 + lVar2);
  FUN_14175e92a(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x88);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x88) = iVar1 - param_3;
  return;
}



// FUNCTION 147141938 FUN_147141938 body=67 status=ok
// SIG undefined FUN_147141938(void)

void FUN_147141938(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14714197c(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14714183a(param_1,*(undefined4 *)(param_1 + 0x88),iVar1);
  return;
}



// FUNCTION 14714197c FUN_14714197c body=108 status=ok
// SIG undefined FUN_14714197c(void)

ulonglong FUN_14714197c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1471419e8 FUN_1471419e8 body=29 status=ok
// SIG undefined FUN_1471419e8(void)

undefined8 FUN_1471419e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147141a06 FUN_147141a06 body=564 status=ok
// SIG undefined FUN_147141a06(void)

void FUN_147141a06(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9b8540;
    if (DAT_14c9b8540 != 0) {
      LOCK();
      *(int *)(DAT_14c9b8540 + 8) = *(int *)(DAT_14c9b8540 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b84f8;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f65b0;
    uVar14 = param_5[1];
    uVar2 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9b8540;
    if (DAT_14c9b8540 != 0) {
      LOCK();
      *(int *)(DAT_14c9b8540 + 8) = *(int *)(DAT_14c9b8540 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b84f8;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f65b0;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a1f6590;
    *(undefined4 *)(puVar16 + 0x3d) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147141c3c FUN_147141c3c body=38 status=ok
// SIG undefined FUN_147141c3c(void)

undefined8 FUN_147141c3c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147141c62 FUN_147141c62 body=219 status=ok
// SIG undefined FUN_147141c62(void)

void FUN_147141c62(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142b9b4b0(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 147141d3e FUN_147141d3e body=38 status=ok
// SIG undefined FUN_147141d3e(void)

undefined8 FUN_147141d3e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147141d64 FUN_147141d64 body=163 status=ok
// SIG undefined FUN_147141d64(void)

void FUN_147141d64(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142b9b692();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142b9b77a(param_1,param_2);
  return;
}



// FUNCTION 147141e07 FUN_147141e07 body=374 status=ok
// SIG undefined FUN_147141e07(void)

void FUN_147141e07(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147141f7e FUN_147141f7e body=38 status=ok
// SIG undefined FUN_147141f7e(void)

undefined8 FUN_147141f7e(undefined8 param_1,int param_2)

{
  FUN_1462b5d5e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147141fd8 FUN_147141fd8 body=29 status=ok
// SIG undefined FUN_147141fd8(void)

undefined8 FUN_147141fd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147141ff6 FUN_147141ff6 body=564 status=ok
// SIG undefined FUN_147141ff6(void)

void FUN_147141ff6(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9b86d8;
    if (DAT_14c9b86d8 != 0) {
      LOCK();
      *(int *)(DAT_14c9b86d8 + 8) = *(int *)(DAT_14c9b86d8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b8690;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f65f0;
    uVar14 = param_5[1];
    uVar2 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9b86d8;
    if (DAT_14c9b86d8 != 0) {
      LOCK();
      *(int *)(DAT_14c9b86d8 + 8) = *(int *)(DAT_14c9b86d8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b8690;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f65f0;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a1f65d0;
    *(undefined4 *)(puVar16 + 0x3d) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14714222c FUN_14714222c body=38 status=ok
// SIG undefined FUN_14714222c(void)

undefined8 FUN_14714222c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147142252 FUN_147142252 body=219 status=ok
// SIG undefined FUN_147142252(void)

void FUN_147142252(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142b9b940(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14714232e FUN_14714232e body=38 status=ok
// SIG undefined FUN_14714232e(void)

undefined8 FUN_14714232e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147142354 FUN_147142354 body=163 status=ok
// SIG undefined FUN_147142354(void)

void FUN_147142354(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142b9bb22();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142b9bc0a(param_1,param_2);
  return;
}



// FUNCTION 1471423f7 FUN_1471423f7 body=374 status=ok
// SIG undefined FUN_1471423f7(void)

void FUN_1471423f7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14714256e FUN_14714256e body=176 status=ok
// SIG undefined FUN_14714256e(void)

longlong * FUN_14714256e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 2);
  }
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  param_1[10] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 0xc;
    if ((longlong *)param_2[10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[10];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 10);
  }
  lVar1 = param_2[0x10];
  param_1[0x10] = lVar1;
  param_1[0x12] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 0x14;
    if ((longlong *)param_2[0x12] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[0x12];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 0x12);
  }
  return param_1;
}



// FUNCTION 14714261e FUN_14714261e body=116 status=ok
// SIG undefined FUN_14714261e(void)

void FUN_14714261e(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000147142687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1471426c6 FUN_1471426c6 body=29 status=ok
// SIG undefined FUN_1471426c6(void)

undefined8 FUN_1471426c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471426e4 FUN_1471426e4 body=99 status=ok
// SIG undefined FUN_1471426e4(void)

void FUN_1471426e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  lVar2 = 0x5c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xac);
  lVar2 = 0x18c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1dc);
  param_1[0x3a] = 0;
  return;
}



// FUNCTION 147142748 FUN_147142748 body=29 status=ok
// SIG undefined FUN_147142748(void)

undefined8 FUN_147142748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147142766 FUN_147142766 body=564 status=ok
// SIG undefined FUN_147142766(void)

void FUN_147142766(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9b8760;
    if (DAT_14c9b8760 != 0) {
      LOCK();
      *(int *)(DAT_14c9b8760 + 8) = *(int *)(DAT_14c9b8760 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b8718;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f66c0;
    uVar14 = param_5[1];
    uVar2 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9b8760;
    if (DAT_14c9b8760 != 0) {
      LOCK();
      *(int *)(DAT_14c9b8760 + 8) = *(int *)(DAT_14c9b8760 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b8718;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f66c0;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a1f66a0;
    *(undefined4 *)(puVar16 + 0x3d) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14714299c FUN_14714299c body=38 status=ok
// SIG undefined FUN_14714299c(void)

undefined8 FUN_14714299c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471429c2 FUN_1471429c2 body=219 status=ok
// SIG undefined FUN_1471429c2(void)

void FUN_1471429c2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142b9cb20(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 147142a9e FUN_147142a9e body=38 status=ok
// SIG undefined FUN_147142a9e(void)

undefined8 FUN_147142a9e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147142ac4 FUN_147142ac4 body=163 status=ok
// SIG undefined FUN_147142ac4(void)

void FUN_147142ac4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142b9cd02();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142b9cdea(param_1,param_2);
  return;
}



// FUNCTION 147142b67 FUN_147142b67 body=374 status=ok
// SIG undefined FUN_147142b67(void)

void FUN_147142b67(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147142cde FUN_147142cde body=190 status=ok
// SIG undefined FUN_147142cde(void)

void FUN_147142cde(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  lVar2 = 0x3c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x8c);
  lVar2 = 0x16c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1bc);
  *(undefined1 (*) [16])(param_1 + 0x36) = (undefined1  [16])0x0;
  lVar2 = 0x1c0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar2) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar2 + 0x10) = 0xffff0000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x280);
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x56] = 0;
  return;
}



// FUNCTION 147142d9c FUN_147142d9c body=29 status=ok
// SIG undefined FUN_147142d9c(void)

undefined8 FUN_147142d9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147142dba FUN_147142dba body=198 status=ok
// SIG undefined FUN_147142dba(void)

void FUN_147142dba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_147142e80(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 147142e80 FUN_147142e80 body=244 status=ok
// SIG undefined FUN_147142e80(void)

undefined8 *
FUN_147142e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14c9b8870;
  if (DAT_14c9b8870 != 0) {
    LOCK();
    *(int *)(DAT_14c9b8870 + 8) = *(int *)(DAT_14c9b8870 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14c9b8828;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a1f66e0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147142f76 FUN_147142f76 body=38 status=ok
// SIG undefined FUN_147142f76(void)

undefined8 FUN_147142f76(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147142f9c FUN_147142f9c body=253 status=ok
// SIG undefined FUN_147142f9c(void)

void FUN_147142f9c(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142b9d044(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14714309a FUN_14714309a body=98 status=ok
// SIG undefined FUN_14714309a(void)

void FUN_14714309a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  lVar2 = 0x5c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xac);
  lVar2 = 0x18c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1dc);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}



// FUNCTION 1471430fc FUN_1471430fc body=29 status=ok
// SIG undefined FUN_1471430fc(void)

undefined8 FUN_1471430fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14714311a FUN_14714311a body=409 status=ok
// SIG undefined FUN_14714311a(void)

void FUN_14714311a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 unaff_RBP;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) {
    unaff_RBP = CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),4);
    uVar15 = (undefined4)unaff_RBP;
    if ((DAT_14ca84e99 & 1) == 0) goto LAB_147143180;
  }
  uVar15 = (undefined4)CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),2);
LAB_147143180:
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x3e;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x1f8);
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x3e;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar13;
  uVar1 = *(undefined4 *)(param_1 + 0x660);
  local_50 = DAT_14c9b88f8;
  if (DAT_14c9b88f8 != 0) {
    LOCK();
    *(int *)(DAT_14c9b88f8 + 8) = *(int *)(DAT_14c9b88f8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9b88b0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_58,uVar15);
  *puVar14 = &PTR_FUN_14a1f6720;
  uVar15 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar14 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar14 + 0x1bc) = uVar15;
  *(undefined4 *)(puVar14 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar14 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar14 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar14 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar14 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar14 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar14 + 0x1e4) = uVar12;
  *puVar14 = &PTR_FUN_14a1f6700;
  *(undefined4 *)(puVar14 + 0x3d) = uVar1;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471432b4 FUN_1471432b4 body=38 status=ok
// SIG undefined FUN_1471432b4(void)

undefined8 FUN_1471432b4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471432da FUN_1471432da body=219 status=ok
// SIG undefined FUN_1471432da(void)

void FUN_1471432da(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142b9d0c0(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1471433b6 FUN_1471433b6 body=38 status=ok
// SIG undefined FUN_1471433b6(void)

undefined8 FUN_1471433b6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471433dc FUN_1471433dc body=163 status=ok
// SIG undefined FUN_1471433dc(void)

void FUN_1471433dc(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142b9d2a2();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142b9d38a(param_1,param_2);
  return;
}



// FUNCTION 14714347f FUN_14714347f body=374 status=ok
// SIG undefined FUN_14714347f(void)

void FUN_14714347f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1471435f6 FUN_1471435f6 body=120 status=ok
// SIG undefined FUN_1471435f6(void)

void FUN_1471435f6(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  lVar2 = 0x2c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x7c);
  lVar2 = 0x15c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1ac);
  param_1[0x34] = 0;
  param_1[0x35] = 0x3f80000000000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return;
}



// FUNCTION 14714366e FUN_14714366e body=29 status=ok
// SIG undefined FUN_14714366e(void)

undefined8 FUN_14714366e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14714368c FUN_14714368c body=38 status=ok
// SIG undefined FUN_14714368c(void)

undefined8 FUN_14714368c(undefined8 param_1,int param_2)

{
  FUN_1462b5da6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471436e6 FUN_1471436e6 body=384 status=ok
// SIG undefined FUN_1471436e6(void)

void FUN_1471436e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9b8980;
  if (DAT_14c9b8980 != 0) {
    LOCK();
    *(int *)(DAT_14c9b8980 + 8) = *(int *)(DAT_14c9b8980 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9b8938;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a1f6770;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147143868 FUN_147143868 body=38 status=ok
// SIG undefined FUN_147143868(void)

undefined8 FUN_147143868(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14714388e FUN_14714388e body=163 status=ok
// SIG undefined FUN_14714388e(void)

void FUN_14714388e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142b9d738();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142b9d820(param_1,param_2);
  return;
}



// FUNCTION 147143931 FUN_147143931 body=374 status=ok
// SIG undefined FUN_147143931(void)

void FUN_147143931(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147143aa8 FUN_147143aa8 body=83 status=ok
// SIG undefined FUN_147143aa8(void)

void FUN_147143aa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  lVar2 = 0x2c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x7c);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f80000000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f80000000000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}



// FUNCTION 147143afc FUN_147143afc body=29 status=ok
// SIG undefined FUN_147143afc(void)

undefined8 FUN_147143afc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147143b1a FUN_147143b1a body=564 status=ok
// SIG undefined FUN_147143b1a(void)

void FUN_147143b1a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9b8a08;
    if (DAT_14c9b8a08 != 0) {
      LOCK();
      *(int *)(DAT_14c9b8a08 + 8) = *(int *)(DAT_14c9b8a08 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b89c0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f67b0;
    uVar14 = param_5[1];
    uVar2 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9b8a08;
    if (DAT_14c9b8a08 != 0) {
      LOCK();
      *(int *)(DAT_14c9b8a08 + 8) = *(int *)(DAT_14c9b8a08 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9b89c0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a1f67b0;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a1f6790;
    *(undefined4 *)(puVar16 + 0x3d) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147143d50 FUN_147143d50 body=38 status=ok
// SIG undefined FUN_147143d50(void)

undefined8 FUN_147143d50(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147143d76 FUN_147143d76 body=219 status=ok
// SIG undefined FUN_147143d76(void)

void FUN_147143d76(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142b9d872(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 147143e52 FUN_147143e52 body=38 status=ok
// SIG undefined FUN_147143e52(void)

undefined8 FUN_147143e52(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147143e78 FUN_147143e78 body=163 status=ok
// SIG undefined FUN_147143e78(void)

void FUN_147143e78(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142b9da54();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142b9db3c(param_1,param_2);
  return;
}



// FUNCTION 147143f1b FUN_147143f1b body=374 status=ok
// SIG undefined FUN_147143f1b(void)

void FUN_147143f1b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147144092 FUN_147144092 body=29 status=ok
// SIG undefined FUN_147144092(void)

undefined8 FUN_147144092(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471440b0 FUN_1471440b0 body=198 status=ok
// SIG undefined FUN_1471440b0(void)

void FUN_1471440b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_147144176(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 147144176 FUN_147144176 body=244 status=ok
// SIG undefined FUN_147144176(void)

undefined8 *
FUN_147144176(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14c9b8a90;
  if (DAT_14c9b8a90 != 0) {
    LOCK();
    *(int *)(DAT_14c9b8a90 + 8) = *(int *)(DAT_14c9b8a90 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14c9b8a48;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a1f67d0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14714426c FUN_14714426c body=38 status=ok
// SIG undefined FUN_14714426c(void)

undefined8 FUN_14714426c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147144292 FUN_147144292 body=253 status=ok
// SIG undefined FUN_147144292(void)

void FUN_147144292(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142b9dd96(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147144390 FUN_147144390 body=38 status=ok
// SIG undefined FUN_147144390(void)

undefined8 FUN_147144390(undefined8 param_1,int param_2)

{
  FUN_1462b5dee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471443ea FUN_1471443ea body=38 status=ok
// SIG undefined FUN_1471443ea(void)

undefined8 FUN_1471443ea(undefined8 param_1,int param_2)

{
  FUN_1462b5e36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147144444 FUN_147144444 body=38 status=ok
// SIG undefined FUN_147144444(void)

undefined8 FUN_147144444(undefined8 param_1,int param_2)

{
  FUN_1462b5e7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14714449e FUN_14714449e body=38 status=ok
// SIG undefined FUN_14714449e(void)

undefined8 FUN_14714449e(undefined8 param_1,int param_2)

{
  FUN_1462b5ec6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471444ca FUN_1471444ca body=38 status=ok
// SIG undefined FUN_1471444ca(void)

undefined8 FUN_1471444ca(undefined8 param_1,int param_2)

{
  FUN_1462b5f0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


