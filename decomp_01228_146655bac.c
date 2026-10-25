// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146655bac FUN_146655bac body=38 status=ok
// SIG undefined FUN_146655bac(void)

undefined8 FUN_146655bac(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655bd2 FUN_146655bd2 body=110 status=ok
// SIG undefined FUN_146655bd2(void)

void FUN_146655bd2(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x140,0x10);
  FUN_1408f3f9e(puVar1);
  *puVar1 = &PTR_FUN_14b905400;
  FUN_1456e1756(puVar1 + 0x16);
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0x25) = *(byte *)(puVar1 + 0x25) & 0xfe;
  FUN_140056680(puVar1 + 0x26,&DAT_149dfb77a);
  FUN_140de79e2(param_1,puVar1);
  return;
}



// FUNCTION 146655c40 FUN_146655c40 body=70 status=ok
// SIG undefined FUN_146655c40(void)

undefined8 * FUN_146655c40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655c86 FUN_146655c86 body=38 status=ok
// SIG undefined FUN_146655c86(void)

undefined8 FUN_146655c86(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655cac FUN_146655cac body=70 status=ok
// SIG undefined FUN_146655cac(void)

undefined8 * FUN_146655cac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655cf2 FUN_146655cf2 body=38 status=ok
// SIG undefined FUN_146655cf2(void)

undefined8 FUN_146655cf2(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655d18 FUN_146655d18 body=38 status=ok
// SIG undefined FUN_146655d18(void)

undefined8 FUN_146655d18(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MenuClosed",1);
  return param_2;
}



// FUNCTION 146655d3e FUN_146655d3e body=29 status=ok
// SIG undefined FUN_146655d3e(void)

undefined8 FUN_146655d3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655d5c FUN_146655d5c body=38 status=ok
// SIG undefined FUN_146655d5c(void)

undefined8 FUN_146655d5c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UpdateStandIn",1);
  return param_2;
}



// FUNCTION 146655d82 FUN_146655d82 body=54 status=ok
// SIG undefined FUN_146655d82(void)

longlong FUN_146655d82(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_1449db362(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655db8 FUN_146655db8 body=38 status=ok
// SIG undefined FUN_146655db8(void)

undefined8 FUN_146655db8(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655dde FUN_146655dde body=70 status=ok
// SIG undefined FUN_146655dde(void)

undefined8 * FUN_146655dde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655e24 FUN_146655e24 body=104 status=ok
// SIG undefined FUN_146655e24(void)

void FUN_146655e24(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(200);
  memset(_Dst,0,200);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8adc60;
  *(undefined1 *)(_Dst + 0x16) = 1;
  FUN_140056680(_Dst + 0x17,L"LegalSplashTextPC");
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146655e8c FUN_146655e8c body=29 status=ok
// SIG undefined FUN_146655e8c(void)

undefined8 FUN_146655e8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655eaa FUN_146655eaa body=38 status=ok
// SIG undefined FUN_146655eaa(void)

undefined8 FUN_146655eaa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ReadSaveGames",1);
  return param_2;
}



// FUNCTION 146655ed0 FUN_146655ed0 body=29 status=ok
// SIG undefined FUN_146655ed0(void)

undefined8 FUN_146655ed0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655eee FUN_146655eee body=38 status=ok
// SIG undefined FUN_146655eee(void)

undefined8 FUN_146655eee(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_SpecialNavMenuActiveStatusChanged",1);
  return param_2;
}



// FUNCTION 146655f14 FUN_146655f14 body=29 status=ok
// SIG undefined FUN_146655f14(void)

undefined8 FUN_146655f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655f32 FUN_146655f32 body=38 status=ok
// SIG undefined FUN_146655f32(void)

undefined8 FUN_146655f32(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"LoadCharacter_LateJoinMode",1);
  return param_2;
}



// FUNCTION 146655f58 FUN_146655f58 body=49 status=ok
// SIG undefined FUN_146655f58(void)

longlong FUN_146655f58(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655f8a FUN_146655f8a body=38 status=ok
// SIG undefined FUN_146655f8a(void)

undefined8 FUN_146655f8a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FocusCharacterSlot",1);
  return param_2;
}



// FUNCTION 146655fb0 FUN_146655fb0 body=29 status=ok
// SIG undefined FUN_146655fb0(void)

undefined8 FUN_146655fb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655fce FUN_146655fce body=47 status=ok
// SIG undefined FUN_146655fce(void)

longlong FUN_146655fce(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146655ffe FUN_146655ffe body=38 status=ok
// SIG undefined FUN_146655ffe(void)

undefined8 FUN_146655ffe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_SelectPlayer",1);
  return param_2;
}



// FUNCTION 146656024 FUN_146656024 body=47 status=ok
// SIG undefined FUN_146656024(void)

longlong FUN_146656024(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146656054 FUN_146656054 body=47 status=ok
// SIG undefined FUN_146656054(void)

longlong FUN_146656054(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146656084 FUN_146656084 body=38 status=ok
// SIG undefined FUN_146656084(void)

undefined8 FUN_146656084(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_ContextItemSelected",1);
  return param_2;
}



// FUNCTION 1466560aa FUN_1466560aa body=29 status=ok
// SIG undefined FUN_1466560aa(void)

undefined8 FUN_1466560aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466560c8 FUN_1466560c8 body=38 status=ok
// SIG undefined FUN_1466560c8(void)

undefined8 FUN_1466560c8(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466560ee FUN_1466560ee body=70 status=ok
// SIG undefined FUN_1466560ee(void)

undefined8 * FUN_1466560ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146656134 FUN_146656134 body=70 status=ok
// SIG undefined FUN_146656134(void)

undefined8 * FUN_146656134(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665617a FUN_14665617a body=38 status=ok
// SIG undefined FUN_14665617a(void)

undefined8 FUN_14665617a(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466561a0 FUN_1466561a0 body=38 status=ok
// SIG undefined FUN_1466561a0(void)

undefined8 FUN_1466561a0(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466561c6 FUN_1466561c6 body=70 status=ok
// SIG undefined FUN_1466561c6(void)

undefined8 * FUN_1466561c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665620c FUN_14665620c body=29 status=ok
// SIG undefined FUN_14665620c(void)

undefined8 FUN_14665620c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665622a FUN_14665622a body=38 status=ok
// SIG undefined FUN_14665622a(void)

undefined8 FUN_14665622a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PauseGame_Start",1);
  return param_2;
}



// FUNCTION 146656250 FUN_146656250 body=29 status=ok
// SIG undefined FUN_146656250(void)

undefined8 FUN_146656250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665626e FUN_14665626e body=38 status=ok
// SIG undefined FUN_14665626e(void)

undefined8 FUN_14665626e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_RefreshExperiences",1);
  return param_2;
}



// FUNCTION 146656294 FUN_146656294 body=29 status=ok
// SIG undefined FUN_146656294(void)

undefined8 FUN_146656294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466562b2 FUN_1466562b2 body=38 status=ok
// SIG undefined FUN_1466562b2(void)

undefined8 FUN_1466562b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PauseGame_End",1);
  return param_2;
}



// FUNCTION 1466562d8 FUN_1466562d8 body=70 status=ok
// SIG undefined FUN_1466562d8(void)

undefined8 * FUN_1466562d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665631e FUN_14665631e body=29 status=ok
// SIG undefined FUN_14665631e(void)

undefined8 FUN_14665631e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665633c FUN_14665633c body=38 status=ok
// SIG undefined FUN_14665633c(void)

undefined8 FUN_14665633c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Close",1);
  return param_2;
}



// FUNCTION 146656362 FUN_146656362 body=70 status=ok
// SIG undefined FUN_146656362(void)

undefined8 * FUN_146656362(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466563a8 FUN_1466563a8 body=38 status=ok
// SIG undefined FUN_1466563a8(void)

undefined8 FUN_1466563a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PlayerController",1);
  return param_2;
}



// FUNCTION 1466563ce FUN_1466563ce body=29 status=ok
// SIG undefined FUN_1466563ce(void)

undefined8 FUN_1466563ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466563ec FUN_1466563ec body=118 status=ok
// SIG undefined FUN_1466563ec(void)

void FUN_1466563ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146656462 FUN_146656462 body=101 status=ok
// SIG undefined FUN_146656462(void)

void FUN_146656462(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1466564c8 FUN_1466564c8 body=147 status=ok
// SIG undefined FUN_1466564c8(void)

void FUN_1466564c8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 14665655c FUN_14665655c body=132 status=ok
// SIG undefined FUN_14665655c(void)

void FUN_14665655c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1466565e0 FUN_1466565e0 body=96 status=ok
// SIG undefined FUN_1466565e0(void)

void FUN_1466565e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_14588cd9e();
  *(undefined2 *)(param_1 + 0x300) = 0x100;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar2 = &PTR_FUN_14b9d0210;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 146656682 FUN_146656682 body=79 status=ok
// SIG undefined FUN_146656682(void)

void FUN_146656682(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2810;
  puVar1[2] = FUN_1442f4ae0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"SharedProgression",puVar1);
  return;
}



// FUNCTION 1466566d8 FUN_1466566d8 body=1044 status=ok
// SIG undefined FUN_1466566d8(void)

void FUN_1466566d8(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if (*param_2 == 0) {
      *(undefined1 *)(lVar2 + 0xb2) = 0;
      FUN_14020fad6(lVar2 + 0xb8,&DAT_149dfb77a);
      plVar9 = (longlong *)FUN_140e82300();
      plVar14 = (longlong *)*plVar9;
      plVar13 = *(longlong **)(lVar2 + 200);
      if (plVar13 != plVar14) {
        *(longlong **)(lVar2 + 200) = plVar14;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      *(int *)(lVar2 + 0xd0) = (int)plVar9[1];
      plVar9 = (longlong *)FUN_140e82300();
      plVar14 = (longlong *)*plVar9;
      plVar13 = *(longlong **)(lVar2 + 0xd8);
      if (plVar13 != plVar14) {
        *(longlong **)(lVar2 + 0xd8) = plVar14;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      *(int *)(lVar2 + 0xe0) = (int)plVar9[1];
      plVar9 = (longlong *)FUN_140e82300();
      plVar14 = (longlong *)*plVar9;
      plVar13 = *(longlong **)(lVar2 + 0xe8);
      if (plVar13 != plVar14) {
        *(longlong **)(lVar2 + 0xe8) = plVar14;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      *(int *)(lVar2 + 0xf0) = (int)plVar9[1];
      puVar3 = *(ushort **)(lVar2 + 0x80);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      }
    }
    else if ((longlong)*(int *)(lVar2 + 0x100) != 0) {
      plVar14 = *(longlong **)(lVar2 + 0xf8);
      plVar13 = plVar14 + (longlong)*(int *)(lVar2 + 0x100) * 0xf;
      do {
        if (*plVar14 == *param_2) {
          *(undefined1 *)(lVar2 + 0xb2) = 1;
          FUN_1400021e4(param_2,&local_88);
          lVar5 = local_88;
          iVar6 = (int)uStack_80;
          uVar8 = (int)uStack_80 - 1;
          if ((int)uStack_80 == 0) {
            uVar8 = 0;
          }
          if (0 < (int)uVar8) {
            uVar11 = 0;
            do {
              uVar1 = *(ushort *)(local_88 + uVar11 * 2);
              *(ushort *)(local_88 + uVar11 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
              uVar11 = uVar11 + 1;
            } while (uVar8 != uVar11);
          }
          uVar7 = uStack_80._4_4_;
          local_88 = 0;
          uStack_80 = 0;
          if (*(longlong *)(lVar2 + 0xb8) == 0) {
            *(longlong *)(lVar2 + 0xb8) = lVar5;
            *(int *)(lVar2 + 0xc0) = iVar6;
            *(undefined4 *)(lVar2 + 0xc4) = uVar7;
          }
          else {
            FUN_1400020a8();
            *(longlong *)(lVar2 + 0xb8) = lVar5;
            *(int *)(lVar2 + 0xc0) = iVar6;
            *(undefined4 *)(lVar2 + 0xc4) = uVar7;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          plVar9 = (longlong *)plVar14[6];
          plVar4 = *(longlong **)(lVar2 + 200);
          if (plVar4 != plVar9) {
            *(longlong **)(lVar2 + 200) = plVar9;
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(int *)(lVar2 + 0xd0) = (int)plVar14[7];
          plVar9 = (longlong *)plVar14[8];
          plVar4 = *(longlong **)(lVar2 + 0xd8);
          if (plVar4 != plVar9) {
            *(longlong **)(lVar2 + 0xd8) = plVar9;
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(int *)(lVar2 + 0xe0) = (int)plVar14[9];
          plVar9 = (longlong *)plVar14[10];
          plVar4 = *(longlong **)(lVar2 + 0xe8);
          if (plVar4 != plVar9) {
            *(longlong **)(lVar2 + 0xe8) = plVar9;
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(int *)(lVar2 + 0xf0) = (int)plVar14[0xb];
          puVar3 = *(ushort **)(lVar2 + 0x80);
          if (puVar3 != (ushort *)0x0) {
            *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
          }
          if (plVar14[5] != 0) {
            pcVar12 = "newgame";
            if (*(char *)((longlong)plVar14 + 0x72) != '\0') {
              pcVar12 = "dlc";
            }
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            FUN_1446ddda2(&local_88,pcVar12,0);
            FUN_1402b5374(&local_88,1,plVar14[5]);
            uVar10 = FUN_14001cc68(0x48,0x10);
            local_98 = DAT_14cbdff04;
            local_90 = DAT_14cbdff0c;
            FUN_148e949f4(uVar10);
            FUN_140391314(param_1,uVar10);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
        }
        plVar14 = plVar14 + 0xf;
      } while (plVar14 != plVar13);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146656aee FUN_146656aee body=95 status=ok
// SIG undefined FUN_146656aee(void)

undefined8 * FUN_146656aee(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d0240;
  *(undefined4 *)(_Dst + 0x53) = 0x40a00000;
  *(undefined2 *)((longlong)_Dst + 0x29c) = 0;
  *(undefined4 *)(_Dst + 0x54) = 0xffffffff;
  return _Dst;
}



// FUNCTION 146656b4e FUN_146656b4e body=95 status=ok
// SIG undefined FUN_146656b4e(void)

undefined8 * FUN_146656b4e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2a8);
  memset(_Dst,0,0x2a8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d0240;
  *(undefined4 *)(_Dst + 0x53) = 0x40a00000;
  *(undefined2 *)((longlong)_Dst + 0x29c) = 0;
  *(undefined4 *)(_Dst + 0x54) = 0xffffffff;
  return _Dst;
}



// FUNCTION 146656bae FUN_146656bae body=77 status=ok
// SIG undefined FUN_146656bae(void)

void FUN_146656bae(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  FUN_1407cbe30();
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar2 = &DAT_14c9a1308;
  }
  else {
    plVar2 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe05e8);
  }
  if (*plVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14000584e(*plVar2,0);
  }
  *(undefined1 *)(param_1 + 0x29d) = uVar1;
  return;
}



// FUNCTION 146656bfc FUN_146656bfc body=270 status=ok
// SIG undefined FUN_146656bfc(void)

void FUN_146656bfc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2910;
  puVar1[2] = FUN_148ebda00;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PrevPage",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2910;
  puVar1[2] = FUN_14122385c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"NextPage",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2910;
  puVar1[2] = FUN_148ebdaca;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"ExpandNews",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2910;
  puVar1[2] = &LAB_145c27b84;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"CloseExpandedNews",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2910;
  puVar1[2] = FUN_1442f4e92;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"FollowLink",puVar1);
  return;
}



// FUNCTION 146656d0a FUN_146656d0a body=31 status=ok
// SIG undefined FUN_146656d0a(void)

void FUN_146656d0a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x330,0x10);
  FUN_145bfaef4(uVar1);
  return;
}



// FUNCTION 146656d2a FUN_146656d2a body=235 status=ok
// SIG undefined FUN_146656d2a(void)

void FUN_146656d2a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_14152681e();
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d0358;
      FUN_14039144e(lVar1,puVar2);
      puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_14b9cd388;
      FUN_14039144e(lVar1,puVar2);
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d0210;
      FUN_14039144e(lVar1,puVar2);
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d0368;
      FUN_14039144e(lVar1,puVar2);
    }
    FUN_146028c4e(param_1);
    return;
  }
  return;
}



// FUNCTION 146656e1c FUN_146656e1c body=36 status=ok
// SIG undefined FUN_146656e1c(void)

void FUN_146656e1c(undefined8 param_1)

{
  FUN_1414dd5aa();
  FUN_145812e9c(param_1,1);
  FUN_145812e48(param_1);
  return;
}



// FUNCTION 146656e40 FUN_146656e40 body=36 status=ok
// SIG undefined FUN_146656e40(void)

void FUN_146656e40(undefined8 param_1)

{
  FUN_145812e9c(param_1,0);
  FUN_145812e48(param_1);
  FUN_1411502c2(param_1);
  return;
}



// FUNCTION 146656eac FUN_146656eac body=52 status=ok
// SIG undefined FUN_146656eac(void)

void FUN_146656eac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x668);
  memset(_Dst,0,0x668);
  FUN_1457ba05e(_Dst);
  return;
}



// FUNCTION 146656ee0 FUN_146656ee0 body=568 status=ok
// SIG undefined FUN_146656ee0(void)

void FUN_146656ee0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      FUN_1446ddc76(&local_30,"Option_GameSettings_DiscreteValueUpdate",1);
      FUN_1401cd85c(lVar1,local_30,param_1 + 0x2c0);
    }
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      FUN_1446ddc76(&local_38,"Option_GameSettings_SliderUpdate",1);
      FUN_1401cd85c(lVar1,local_38,param_1 + 0x2c8);
    }
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      FUN_1446ddc76(&local_40,"Option_GameSettings_ColorUpdate",1);
      FUN_1401cd85c(lVar1,local_40,param_1 + 0x2d0);
    }
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
      FUN_1446ddc76(&local_48,"Option_GameSettings_SettingEnabledChanged",1);
      FUN_1401cd85c(lVar1,local_48,param_1 + 0x2d8);
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      FUN_1446ddc76(&local_50,"Option_GameSettings_SettingDiscreteOptionsChanged",1);
      FUN_1401cd85c(lVar1,local_50,param_1 + 0x2e0);
    }
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_1446ddc76(&local_58,"Option_GameSettings_RebindingUpdated",1);
      FUN_1401cd85c(lVar1,local_58,param_1 + 0x2e8);
    }
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      FUN_1446ddc76(&local_60,"InputDeviceChanged",1);
      FUN_1401cd85c(lVar1,local_60,param_1 + 0x2f0);
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b9d0500;
    *(undefined1 *)(puVar2 + 1) = 0;
    FUN_14039144e(lVar1,puVar2);
  }
  FUN_1446ddc76(local_68,"PauseMenu",1);
  FUN_1415b967e(1,local_68);
  FUN_1459249be(param_1);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665711a FUN_14665711a body=551 status=ok
// SIG undefined FUN_14665711a(void)

void FUN_14665711a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2a80;
  puVar1[2] = FUN_1461e9a0a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnSliderValueChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2aa0;
  puVar1[2] = FUN_146192c8e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnToggleValueChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2ac0;
  puVar1[2] = FUN_14624d340;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnStepperValueChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2ac0;
  puVar1[2] = FUN_148ebe886;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnDropdownItemSelected",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2ae0;
  puVar1[2] = FUN_148ebe922;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnRebindEntrySelect",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2b00;
  puVar1[2] = FUN_148ebe986;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnResetBindingSelected",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2b00;
  puVar1[2] = FUN_148ebe9d6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnClearBindingSelected",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2b20;
  puVar1[2] = &LAB_148ebea26;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"RestoreSettings",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2b40;
  puVar1[2] = FUN_148ebea2c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"InputSelectionChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2b60;
  puVar1[2] = FUN_148ebeab0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnControllerInputFocused",puVar1);
  return;
}



// FUNCTION 146657342 FUN_146657342 body=185 status=ok
// SIG undefined FUN_146657342(void)

void FUN_146657342(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [16];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    local_38 = FUN_148ebeb16;
    local_30 = 0;
    FUN_14600c440(local_48,param_1);
    FUN_1446ddc76(&local_50,"RefreshOptions",1);
    FUN_140391af6(lVar1,&local_38,local_50,local_48);
    *(code **)(param_1 + 0x2b8) = local_38;
    FUN_1449db362(local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466573fc FUN_1466573fc body=324 status=ok
// SIG undefined FUN_1466573fc(void)

void FUN_1466573fc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      FUN_1446ddc76(&local_30,"RefreshOptions",1);
      FUN_1401cd85c(lVar1,local_30,param_1 + 0x2b8);
    }
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      FUN_1446ddc76(&local_38,"Option_GameSettings_SliderUpdate",1);
      FUN_1401cd85c(lVar1,local_38,param_1 + 0x2c8);
    }
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      FUN_1446ddc76(&local_40,"Option_GameSettings_ColorUpdate",1);
      FUN_1401cd85c(lVar1,local_40,param_1 + 0x2d0);
    }
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
      FUN_1446ddc76(&local_48,"Option_GameSettings_SettingEnabledChanged",1);
      FUN_1401cd85c(lVar1,local_48,param_1 + 0x2d8);
    }
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146657542 FUN_146657542 body=1277 status=ok
// SIG undefined FUN_146657542(void)

void FUN_146657542(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  longlong *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined4 local_80;
  ulonglong local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1407cbc56();
  lVar2 = param_1 + 0x160;
  plVar11 = (longlong *)FUN_144a06846(lVar2,&DAT_14cbe0bc8);
  if (*plVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_14000584e(*plVar11,0);
  }
  *(undefined1 *)(param_1 + 0x661) = uVar10;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    plVar11 = (longlong *)FUN_144a06846(lVar2,&DAT_14cbe0b50);
    if (*plVar11 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_14000584e(*plVar11,0);
    }
    *(undefined1 *)(lVar3 + 0xf4) = uVar10;
    plVar11 = (longlong *)FUN_144a06846(lVar2,&DAT_14cbe0b78);
    if (*plVar11 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_14000584e(*plVar11,0);
    }
    *(undefined1 *)(lVar3 + 0xf5) = uVar10;
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
    plVar11 = (longlong *)FUN_140e82300();
    local_b8 = (longlong *)*plVar11;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
    local_b0 = (undefined4)plVar11[1];
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = (longlong *)((ulonglong)local_68._4_4_ << 0x20);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(local_78,"GamepadTitleText",0);
    FUN_140ac6c96(local_78,&local_b8);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_d8,&local_b8,1);
    local_90 = &uStack_58;
    local_78[0] = local_78[0] & 0xffffffff00000000;
    local_78[1] = 0;
    local_68 = (longlong *)0x0;
    local_60 = local_60 & 0xffffffff00000000;
    local_98 = local_78;
    FUN_14010d304(&local_88);
    local_a8 = local_d8;
    local_a0 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_d0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    FUN_140008f88(lVar3 + 0x338,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    plVar11 = (longlong *)FUN_140e82300();
    local_88 = (longlong *)*plVar11;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    local_80 = (undefined4)plVar11[1];
    plVar11 = (longlong *)FUN_140e82300();
    local_98 = (ulonglong *)*plVar11;
    if (local_98 != (ulonglong *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
    local_90 = (undefined8 *)CONCAT44(local_90._4_4_,(int)plVar11[1]);
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(local_78,"DefaultGamepadSpecialLeftDescription",0);
    FUN_140ac6c96(local_78,&local_88);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_78[0] = 0;
    local_78[1] = 0;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(local_78,"DefaultGamepadSpecialRightDescription",0);
    FUN_140ac6c96(local_78,&local_98);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    plVar8 = local_88;
    plVar11 = *(longlong **)(lVar3 + 0x178);
    if (plVar11 != local_88) {
      *(longlong **)(lVar3 + 0x178) = local_88;
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 8))(local_88);
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    uVar9 = local_80;
    puVar6 = local_98;
    *(undefined4 *)(lVar3 + 0x180) = local_80;
    puVar5 = *(ulonglong **)(lVar3 + 0x250);
    if (puVar5 != local_98) {
      *(ulonglong **)(lVar3 + 0x250) = local_98;
      if (local_98 != (ulonglong *)0x0) {
        (**(code **)(*local_98 + 8))(local_98);
      }
      if (puVar5 != (ulonglong *)0x0) {
        (**(code **)(*puVar5 + 0x10))(puVar5);
      }
    }
    uVar7 = local_90._0_4_;
    *(undefined4 *)(lVar3 + 600) = local_90._0_4_;
    plVar11 = *(longlong **)(param_1 + 0x300);
    if (plVar11 != plVar8) {
      *(longlong **)(param_1 + 0x300) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    *(undefined4 *)(param_1 + 0x308) = uVar9;
    puVar5 = *(ulonglong **)(param_1 + 0x3d8);
    if (puVar5 != puVar6) {
      *(ulonglong **)(param_1 + 0x3d8) = puVar6;
      if (puVar6 != (ulonglong *)0x0) {
        (**(code **)(*puVar6 + 8))(puVar6);
      }
      if (puVar5 != (ulonglong *)0x0) {
        (**(code **)(*puVar5 + 0x10))(puVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x3e0) = uVar7;
    plVar11 = *(longlong **)(param_1 + 0x4b0);
    if (plVar11 != plVar8) {
      *(longlong **)(param_1 + 0x4b0) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    *(undefined4 *)(param_1 + 0x4b8) = uVar9;
    puVar5 = *(ulonglong **)(param_1 + 0x588);
    if (puVar5 != puVar6) {
      *(ulonglong **)(param_1 + 0x588) = puVar6;
      if (puVar6 != (ulonglong *)0x0) {
        (**(code **)(*puVar6 + 8))(puVar6);
      }
      if (puVar5 != (ulonglong *)0x0) {
        (**(code **)(*puVar5 + 0x10))(puVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x590) = uVar7;
    if (puVar6 != (ulonglong *)0x0) {
      (**(code **)(*puVar6 + 0x10))(puVar6);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146657a40 FUN_146657a40 body=120 status=ok
// SIG undefined FUN_146657a40(void)

undefined8 * FUN_146657a40(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x368);
  memset(_Dst,0,0x368);
  FUN_14586bda8(_Dst);
  *_Dst = &PTR_FUN_14b9d0580;
  *(undefined1 *)(_Dst + 0x68) = 0;
  _Dst[0x69] = 0;
  *(undefined4 *)(_Dst + 0x6a) = 0;
  *(undefined1 *)((longlong)_Dst + 0x354) = 0;
  *(undefined4 *)(_Dst + 0x6b) = 0;
  *(undefined8 *)((longlong)_Dst + 0x35c) = 0;
  *(undefined4 *)((longlong)_Dst + 0x364) = 0xffffffff;
  return _Dst;
}



// FUNCTION 146657ab8 FUN_146657ab8 body=120 status=ok
// SIG undefined FUN_146657ab8(void)

undefined8 * FUN_146657ab8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x368);
  memset(_Dst,0,0x368);
  FUN_14586bda8(_Dst);
  *_Dst = &PTR_FUN_14b9d0580;
  *(undefined1 *)(_Dst + 0x68) = 0;
  _Dst[0x69] = 0;
  *(undefined4 *)(_Dst + 0x6a) = 0;
  *(undefined1 *)((longlong)_Dst + 0x354) = 0;
  *(undefined4 *)(_Dst + 0x6b) = 0;
  *(undefined8 *)((longlong)_Dst + 0x35c) = 0;
  *(undefined4 *)((longlong)_Dst + 0x364) = 0xffffffff;
  return _Dst;
}



// FUNCTION 146657b30 FUN_146657b30 body=209 status=ok
// SIG undefined FUN_146657b30(void)

void FUN_146657b30(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 != DAT_14cbe0d20) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  lVar2 = FUN_140391552(param_1);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar1 = *(undefined1 *)(param_1 + 0x340);
    FUN_14000bbd8(local_58,param_3,0);
    *puVar3 = &PTR_FUN_14b9b5de8;
    FUN_1447a97f4(puVar3 + 1,local_58);
    *(undefined1 *)(puVar3 + 6) = uVar1;
    FUN_14039144e(lVar2,puVar3);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146657c1a FUN_146657c1a body=63 status=ok
// SIG undefined FUN_146657c1a(void)

void FUN_146657c1a(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  FUN_1407cb6b6();
  plVar2 = (longlong *)FUN_144a06846(param_1 + 0x160,&DAT_14cbe0d28);
  if (*plVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14000584e(*plVar2,0);
  }
  *(undefined1 *)(param_1 + 0x340) = uVar1;
  return;
}



// FUNCTION 146657c5a FUN_146657c5a body=151 status=ok
// SIG undefined FUN_146657c5a(void)

void FUN_146657c5a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x340) == '\x01') {
    lVar1 = FUN_140391552(param_1);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x348) != 0)) {
      FUN_1446ddc76(&local_30,"ChangeFirstTimeCalibrationNavBar",1);
      FUN_1401cd85c(lVar1,local_30,param_1 + 0x348);
    }
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146657cf2 FUN_146657cf2 body=243 status=ok
// SIG undefined FUN_146657cf2(void)

void FUN_146657cf2(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2f30;
  puVar1[2] = FUN_148ec11aa;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_OptionsGroupEntryClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2f50;
  puVar1[2] = FUN_1442f6752;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_SliderChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2f70;
  puVar1[2] = FUN_148ebf814;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_ToggleChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d2f90;
  puVar1[2] = FUN_148ec0072;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_StepperChanged",puVar1);
  return;
}



// FUNCTION 146657de6 FUN_146657de6 body=66 status=ok
// SIG undefined FUN_146657de6(void)

undefined8 * FUN_146657de6(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9d0920;
  return _Dst;
}



// FUNCTION 146657e28 FUN_146657e28 body=66 status=ok
// SIG undefined FUN_146657e28(void)

undefined8 * FUN_146657e28(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9d0920;
  return _Dst;
}



// FUNCTION 146657e6a FUN_146657e6a body=405 status=ok
// SIG undefined FUN_146657e6a(void)

void FUN_146657e6a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407cbc56();
  puVar3 = &DAT_14c9a1308;
  puVar2 = &DAT_14c9a1308;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    puVar2 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe0fe0);
  }
  uVar1 = FUN_144a7cdd6(puVar2,0);
  FUN_1446ddc76(&local_50,uVar1,1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9d0a90;
  FUN_1446ddc76(&local_48,"SetPanelDef",1);
  FUN_14039176c(puVar2,uVar1,local_48,1);
  *puVar2 = &PTR_FUN_14b9d0a90;
  puVar2[7] = local_50;
  *(undefined4 *)(puVar2 + 8) = 1;
  FUN_140391314(param_1,puVar2);
  if (*(longlong *)(param_1 + 0x160) != 0) {
    puVar3 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe0fe8);
  }
  uVar1 = FUN_144a7cdd6(puVar3,0);
  FUN_1446ddc76(&local_58,uVar1,1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9d0a90;
  FUN_1446ddc76(&local_48,"SetPanelDef",1);
  FUN_14039176c(puVar2,uVar1,local_48,1);
  *puVar2 = &PTR_FUN_14b9d0a90;
  puVar2[7] = local_58;
  *(undefined4 *)(puVar2 + 8) = 2;
  FUN_140391314(param_1,puVar2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146658000 FUN_146658000 body=83 status=ok
// SIG undefined FUN_146658000(void)

undefined8 * FUN_146658000(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x380);
  memset(_Dst,0,0x380);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d0ac0;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  _Dst[0x6f] = 0;
  return _Dst;
}



// FUNCTION 146658054 FUN_146658054 body=83 status=ok
// SIG undefined FUN_146658054(void)

undefined8 * FUN_146658054(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x380);
  memset(_Dst,0,0x380);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d0ac0;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  _Dst[0x6f] = 0;
  return _Dst;
}



// FUNCTION 1466580a8 FUN_1466580a8 body=66 status=ok
// SIG undefined FUN_1466580a8(void)

undefined8 * FUN_1466580a8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x360);
  memset(_Dst,0,0x360);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d0d30;
  return _Dst;
}



// FUNCTION 1466580ea FUN_1466580ea body=66 status=ok
// SIG undefined FUN_1466580ea(void)

undefined8 * FUN_1466580ea(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x360);
  memset(_Dst,0,0x360);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d0d30;
  return _Dst;
}



// FUNCTION 146658132 FUN_146658132 body=52 status=ok
// SIG undefined FUN_146658132(void)

void FUN_146658132(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x398);
  memset(_Dst,0,0x398);
  FUN_145cd015a(_Dst);
  return;
}



// FUNCTION 14665816c FUN_14665816c body=743 status=ok
// SIG undefined FUN_14665816c(void)

void FUN_14665816c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_1410c2540();
  plVar1 = (longlong *)(param_1 + 0x310);
  uVar6 = *(uint *)(param_1 + 0x31c);
  if ((int)uVar6 < 5) {
    FUN_1408be2c4(plVar1,5);
    uVar6 = *(uint *)(param_1 + 0x31c);
  }
  iVar3 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar3 + 1U;
  if (uVar6 < iVar3 + 1U) {
    FUN_1447a1bd6(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar7 = (longlong)iVar3 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar7);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  iVar3 = DAT_14cbe2018;
  pvVar5 = DAT_14cbe2010;
  lVar8 = (longlong)DAT_14cbe2018;
  *(int *)(lVar4 + 8 + lVar7) = DAT_14cbe2018;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar3,0);
    memcpy((void *)*puVar2,pvVar5,lVar8 * 2);
  }
  iVar3 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x31c) < iVar3 + 1U) {
    FUN_1447a1bd6(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar7 = (longlong)iVar3 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar7);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  iVar3 = DAT_14cbe2028;
  pvVar5 = DAT_14cbe2020;
  lVar8 = (longlong)DAT_14cbe2028;
  *(int *)(lVar4 + 8 + lVar7) = DAT_14cbe2028;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar3,0);
    memcpy((void *)*puVar2,pvVar5,lVar8 * 2);
  }
  iVar3 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x31c) < iVar3 + 1U) {
    FUN_1447a1bd6(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar7 = (longlong)iVar3 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar7);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  iVar3 = DAT_14cbe2038;
  pvVar5 = DAT_14cbe2030;
  lVar8 = (longlong)DAT_14cbe2038;
  *(int *)(lVar4 + 8 + lVar7) = DAT_14cbe2038;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar3,0);
    memcpy((void *)*puVar2,pvVar5,lVar8 * 2);
  }
  iVar3 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x31c) < iVar3 + 1U) {
    FUN_1447a1bd6(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar7 = (longlong)iVar3 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar7);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  iVar3 = DAT_14cbe2048;
  pvVar5 = DAT_14cbe2040;
  lVar8 = (longlong)DAT_14cbe2048;
  *(int *)(lVar4 + 8 + lVar7) = DAT_14cbe2048;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar3,0);
    memcpy((void *)*puVar2,pvVar5,lVar8 * 2);
  }
  iVar3 = *(int *)(param_1 + 0x318);
  *(uint *)(param_1 + 0x318) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x31c) < iVar3 + 1U) {
    FUN_1447a1bd6(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar7 = (longlong)iVar3 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar7);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  iVar3 = DAT_14cbe2058;
  pvVar5 = DAT_14cbe2050;
  lVar8 = (longlong)DAT_14cbe2058;
  *(int *)(lVar4 + 8 + lVar7) = DAT_14cbe2058;
  if (lVar8 != 0) {
    FUN_1446dd670(puVar2,iVar3,0);
    memcpy((void *)*puVar2,pvVar5,lVar8 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  return;
}



// FUNCTION 146658454 FUN_146658454 body=121 status=ok
// SIG undefined FUN_146658454(void)

void FUN_146658454(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      puVar4 = (undefined8 *)(param_1 + 0x308);
      lVar3 = FUN_144a61814(uVar1,puVar4);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar1,*puVar4);
      }
      *puVar4 = 0;
    }
  }
  return;
}



// FUNCTION 1466584ce FUN_1466584ce body=580 status=ok
// SIG undefined FUN_1466584ce(void)

void FUN_1466584ce(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3420;
  puVar1[2] = FUN_1459bbdec;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnNodeClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3440;
  puVar1[2] = FUN_145850e64;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnNodeEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3460;
  puVar1[2] = FUN_14625ec6a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnActionSkillClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3480;
  puVar1[2] = FUN_145e025e6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnActionSkillEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3460;
  puVar1[2] = &LAB_148ec4ce8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnTraitEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3460;
  puVar1[2] = &LAB_148ec4d14;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnClassModEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d34a0;
  puVar1[2] = FUN_148ec4d40;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnLoadoutClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d34a0;
  puVar1[2] = FUN_148ec4d78;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnLoadoutEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3460;
  puVar1[2] = &LAB_1457dfa06;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnLeave",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3460;
  puVar1[2] = FUN_14623cba8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Input_Menu_NavLeft",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3460;
  puVar1[2] = FUN_148ec4e8a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Input_Menu_NavRight",puVar1);
  return;
}



// FUNCTION 146658718 FUN_146658718 body=52 status=ok
// SIG undefined FUN_146658718(void)

void FUN_146658718(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x318);
  memset(_Dst,0,0x318);
  FUN_145c173cc(_Dst);
  return;
}



// FUNCTION 146658752 FUN_146658752 body=293 status=ok
// SIG undefined FUN_146658752(void)

void FUN_146658752(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d37b0;
  puVar1[2] = FUN_148ec5ea8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnNodeClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d37b0;
  puVar1[2] = FUN_148ec61ae;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnNodeEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d37d0;
  puVar1[2] = FUN_148ec620c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnNodeLeave",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d37f0;
  puVar1[2] = FUN_148ec626e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnLoadoutClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3810;
  puVar1[2] = FUN_148ec62d2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnLoadoutEnter",puVar1);
  return;
}



// FUNCTION 146658878 FUN_146658878 body=66 status=ok
// SIG undefined FUN_146658878(void)

undefined8 * FUN_146658878(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d16a0;
  return _Dst;
}



// FUNCTION 1466588ba FUN_1466588ba body=66 status=ok
// SIG undefined FUN_1466588ba(void)

undefined8 * FUN_1466588ba(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d16a0;
  return _Dst;
}



// FUNCTION 1466588fc FUN_1466588fc body=86 status=ok
// SIG undefined FUN_1466588fc(void)

undefined8 * FUN_1466588fc(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  *_Dst = &PTR_FUN_14b9d1810;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  return _Dst;
}



// FUNCTION 146658952 FUN_146658952 body=94 status=ok
// SIG undefined FUN_146658952(void)

undefined8 * FUN_146658952(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x360);
  memset(_Dst,0,0x360);
  FUN_14586bda8(_Dst);
  *_Dst = &PTR_FUN_14b9d1a10;
  *(undefined1 *)(_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x344) = 0;
  *(undefined8 *)((longlong)_Dst + 0x34c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x351) = 0;
  return _Dst;
}



// FUNCTION 1466589b0 FUN_1466589b0 body=94 status=ok
// SIG undefined FUN_1466589b0(void)

undefined8 * FUN_1466589b0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x360);
  memset(_Dst,0,0x360);
  FUN_14586bda8(_Dst);
  *_Dst = &PTR_FUN_14b9d1a10;
  *(undefined1 *)(_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x344) = 0;
  *(undefined8 *)((longlong)_Dst + 0x34c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x351) = 0;
  return _Dst;
}



// FUNCTION 146658a0e FUN_146658a0e body=174 status=ok
// SIG undefined FUN_146658a0e(void)

void FUN_146658a0e(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x358) == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar1 = &PTR_FUN_14b9cd570;
    FUN_1446ddc76(&local_30,"MenuClosed",1);
    FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
    *puVar1 = &PTR_FUN_14b9cd570;
    FUN_140391314(param_1,puVar1);
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  FUN_141497d7e(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146658abe FUN_146658abe body=211 status=ok
// SIG undefined FUN_146658abe(void)

void FUN_146658abe(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    FUN_14573e1ce(uVar2,&DAT_14cbe2648,0);
  }
  FUN_145da7d00(param_1);
  if (*(char *)(param_1 + 0x358) == '\x01') {
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar3 = &PTR_FUN_14b9cd570;
    FUN_1446ddc76(&local_30,"MenuClosed",1);
    FUN_14039176c(puVar3,*(undefined8 *)(param_1 + 0x30),local_30,1);
    *puVar3 = &PTR_FUN_14b9cd570;
    FUN_140391314(param_1,puVar3);
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146658b92 FUN_146658b92 body=172 status=ok
// SIG undefined FUN_146658b92(void)

void FUN_146658b92(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  
  FUN_145e14c82();
  plVar3 = (longlong *)FUN_140714ba2(param_1);
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  if (*(longlong *)(param_1 + 0x2e0) == *(longlong *)(lVar1 + 0x30)) {
    if (*(int *)(lVar1 + 0x38) == 0) {
      iVar5 = 1;
      goto LAB_146658bd4;
    }
  }
  else {
    iVar5 = *(int *)(lVar1 + 0x38) + 1;
LAB_146658bd4:
    *(longlong *)(lVar1 + 0x30) = *(longlong *)(param_1 + 0x2e0);
    *(int *)(lVar1 + 0x38) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  puVar4 = (undefined8 *)FUN_140714ba2(param_1);
  pcVar2 = (char *)*puVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar2 + 0xa0));
  *(int *)(pcVar2 + 0x98) = *(int *)(pcVar2 + 0x98) + 1;
  if (*pcVar2 == '\0') {
    if (*(int *)(pcVar2 + 4) != 0) goto LAB_146658c11;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(pcVar2 + 4) + 1;
  }
  *pcVar2 = '\0';
  *(int *)(pcVar2 + 4) = iVar5;
LAB_146658c11:
                    /* WARNING: Could not recover jumptable at 0x000146658c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar2 + 0xa0));
  return;
}



// FUNCTION 146658c3e FUN_146658c3e body=55 status=ok
// SIG undefined FUN_146658c3e(void)

ulonglong FUN_146658c3e(void)

{
  PSRWLOCK SRWLock;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBX;
  
  puVar3 = (undefined8 *)FUN_140714ba2();
  puVar2 = (undefined1 *)*puVar3;
  SRWLock = (PSRWLOCK)(puVar2 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *puVar2;
  ReleaseSRWLockShared(SRWLock);
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) ^ 1) & 0xffffffff;
}



// FUNCTION 146658c76 FUN_146658c76 body=123 status=ok
// SIG undefined FUN_146658c76(void)

longlong FUN_146658c76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146658cf2 FUN_146658cf2 body=174 status=ok
// SIG undefined FUN_146658cf2(void)

void FUN_146658cf2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"FGbxUIEvent_StatusMenu_Damage",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x350);
    FUN_1446ddc76(&local_38,"FGbxUIEvent_StatusMenu_ShieldBreak",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x348);
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146658da2 FUN_146658da2 body=104 status=ok
// SIG undefined FUN_146658da2(void)

undefined8 * FUN_146658da2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d1da0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined1 *)(_Dst + 0x55) = 0;
  *(undefined4 *)((longlong)_Dst + 0x2ac) = 0xffffffff;
  *(undefined1 *)(_Dst + 0x56) = 0;
  return _Dst;
}



// FUNCTION 146658e0a FUN_146658e0a body=104 status=ok
// SIG undefined FUN_146658e0a(void)

undefined8 * FUN_146658e0a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d1da0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0;
  *(undefined1 *)(_Dst + 0x55) = 0;
  *(undefined4 *)((longlong)_Dst + 0x2ac) = 0xffffffff;
  *(undefined1 *)(_Dst + 0x56) = 0;
  return _Dst;
}



// FUNCTION 146658e72 FUN_146658e72 body=103 status=ok
// SIG undefined FUN_146658e72(void)

void FUN_146658e72(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_145cb307a(param_1,0);
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14b9d1ea0;
    *(undefined1 *)(puVar2 + 4) = 0;
    FUN_14039144e(lVar1,puVar2);
  }
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 146658eda FUN_146658eda body=174 status=ok
// SIG undefined FUN_146658eda(void)

void FUN_146658eda(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401cd71c();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"TitleReset",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x298);
    FUN_1446ddc76(&local_38,"TitleLoginStarted",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x2a0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146658f8a FUN_146658f8a body=77 status=ok
// SIG undefined FUN_146658f8a(void)

void FUN_146658f8a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 146658fd8 FUN_146658fd8 body=132 status=ok
// SIG undefined FUN_146658fd8(void)

void FUN_146658fd8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3e50;
  puVar1[2] = FUN_145ff1a26;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_OnActivateAnimStarted",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3e50;
  puVar1[2] = FUN_145ff1ae6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_OnActivateAnimFinished",puVar1);
  return;
}



// FUNCTION 14665905c FUN_14665905c body=28 status=ok
// SIG undefined FUN_14665905c(void)

void FUN_14665905c(undefined8 param_1)

{
  FUN_145cb307a(param_1,0);
  FUN_141497d7e(param_1);
  return;
}



// FUNCTION 146659078 FUN_146659078 body=90 status=ok
// SIG undefined FUN_146659078(void)

undefined8 * FUN_146659078(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9d1eb0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2cc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2d4) = 0;
  return _Dst;
}



// FUNCTION 1466590d2 FUN_1466590d2 body=83 status=ok
// SIG undefined FUN_1466590d2(void)

undefined8 * FUN_1466590d2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x380);
  memset(_Dst,0,0x380);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d20d0;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  *(undefined8 *)((longlong)_Dst + 0x36c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x374) = 0;
  return _Dst;
}



// FUNCTION 146659126 FUN_146659126 body=66 status=ok
// SIG undefined FUN_146659126(void)

undefined8 * FUN_146659126(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d23a0;
  return _Dst;
}



// FUNCTION 146659168 FUN_146659168 body=52 status=ok
// SIG undefined FUN_146659168(void)

void FUN_146659168(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x380);
  memset(_Dst,0,0x380);
  FUN_145d233b4(_Dst);
  return;
}



// FUNCTION 14665919c FUN_14665919c body=849 status=ok
// SIG undefined FUN_14665919c(void)

void FUN_14665919c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ece072;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnVaultCardClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ece09a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnGearItemEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ece45a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnGearItemLeave",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ece51c;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnGearItemClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ece662;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnCosmeticItemEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ece8be;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnCosmeticItemLeave",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ece980;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnCosmeticItemClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40f0;
  puVar1[2] = FUN_148eceb84;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnRewardEnter",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40f0;
  puVar1[2] = FUN_148ecef32;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnRewardLeave",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40f0;
  puVar1[2] = FUN_144300b48;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnRewardClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40f0;
  puVar1[2] = FUN_148ecefd6;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnActivateClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40f0;
  puVar1[2] = &LAB_148ecf088;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnPurchaseClick",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d4110;
  puVar1[2] = &LAB_148ecf08e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnCloseCelebrationWindow",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40d0;
  puVar1[2] = FUN_148ecf0c4;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnDropdownItemFocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d4130;
  puVar1[2] = FUN_148ecf408;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnDropdownItemClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40f0;
  puVar1[2] = FUN_14430118a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnNavLeft",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40f0;
  puVar1[2] = FUN_1443011f2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnNavRight",puVar1);
  return;
}



// FUNCTION 1466594ee FUN_1466594ee body=29 status=ok
// SIG undefined FUN_1466594ee(void)

undefined8 FUN_1466594ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665950c FUN_14665950c body=38 status=ok
// SIG undefined FUN_14665950c(void)

undefined8 FUN_14665950c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RefreshNewGameProfiles",1);
  return param_2;
}



// FUNCTION 146659532 FUN_146659532 body=29 status=ok
// SIG undefined FUN_146659532(void)

undefined8 FUN_146659532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659550 FUN_146659550 body=38 status=ok
// SIG undefined FUN_146659550(void)

undefined8 FUN_146659550(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"StartNewGame",1);
  return param_2;
}



// FUNCTION 146659576 FUN_146659576 body=38 status=ok
// SIG undefined FUN_146659576(void)

undefined8 FUN_146659576(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665959c FUN_14665959c body=29 status=ok
// SIG undefined FUN_14665959c(void)

undefined8 FUN_14665959c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466595ba FUN_1466595ba body=38 status=ok
// SIG undefined FUN_1466595ba(void)

undefined8 FUN_1466595ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"OakMainMenuActive",1);
  return param_2;
}



// FUNCTION 1466595e0 FUN_1466595e0 body=29 status=ok
// SIG undefined FUN_1466595e0(void)

undefined8 FUN_1466595e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466595fe FUN_1466595fe body=38 status=ok
// SIG undefined FUN_1466595fe(void)

undefined8 FUN_1466595fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"OptionsMenuActiveChanged",1);
  return param_2;
}



// FUNCTION 146659624 FUN_146659624 body=29 status=ok
// SIG undefined FUN_146659624(void)

undefined8 FUN_146659624(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659642 FUN_146659642 body=38 status=ok
// SIG undefined FUN_146659642(void)

undefined8 FUN_146659642(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ApplyChangedSettings",1);
  return param_2;
}



// FUNCTION 146659668 FUN_146659668 body=38 status=ok
// SIG undefined FUN_146659668(void)

undefined8 FUN_146659668(undefined8 param_1,int param_2)

{
  FUN_1457f3312();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665968e FUN_14665968e body=78 status=ok
// SIG undefined FUN_14665968e(void)

void FUN_14665968e(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x238);
  memset(_Dst,0,0x238);
  FUN_1459653a2(_Dst);
  *_Dst = &PTR_FUN_14b8c1e30;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1466596dc FUN_1466596dc body=70 status=ok
// SIG undefined FUN_1466596dc(void)

undefined8 * FUN_1466596dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659722 FUN_146659722 body=70 status=ok
// SIG undefined FUN_146659722(void)

undefined8 * FUN_146659722(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659768 FUN_146659768 body=111 status=ok
// SIG undefined FUN_146659768(void)

void FUN_146659768(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8c32f0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  *(undefined4 *)(_Dst + 0x18) = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  *(undefined4 *)(_Dst + 0x1b) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1466597d8 FUN_1466597d8 body=38 status=ok
// SIG undefined FUN_1466597d8(void)

undefined8 FUN_1466597d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetPanelDef",1);
  return param_2;
}



// FUNCTION 1466597fe FUN_1466597fe body=29 status=ok
// SIG undefined FUN_1466597fe(void)

undefined8 FUN_1466597fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665981c FUN_14665981c body=38 status=ok
// SIG undefined FUN_14665981c(void)

undefined8 FUN_14665981c(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659842 FUN_146659842 body=38 status=ok
// SIG undefined FUN_146659842(void)

undefined8 FUN_146659842(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659868 FUN_146659868 body=49 status=ok
// SIG undefined FUN_146659868(void)

longlong FUN_146659868(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665989a FUN_14665989a body=38 status=ok
// SIG undefined FUN_14665989a(void)

undefined8 FUN_14665989a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_Progression_CaptureAnalytics",1);
  return param_2;
}



// FUNCTION 1466598c0 FUN_1466598c0 body=29 status=ok
// SIG undefined FUN_1466598c0(void)

undefined8 FUN_1466598c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466598de FUN_1466598de body=38 status=ok
// SIG undefined FUN_1466598de(void)

undefined8 FUN_1466598de(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_SkillTree_Activate",1);
  return param_2;
}



// FUNCTION 146659904 FUN_146659904 body=29 status=ok
// SIG undefined FUN_146659904(void)

undefined8 FUN_146659904(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659922 FUN_146659922 body=38 status=ok
// SIG undefined FUN_146659922(void)

undefined8 FUN_146659922(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_Skills_Profile",1);
  return param_2;
}



// FUNCTION 146659948 FUN_146659948 body=52 status=ok
// SIG undefined FUN_146659948(void)

void FUN_146659948(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x228,0x10);
  FUN_1456decc0(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 14665997c FUN_14665997c body=38 status=ok
// SIG undefined FUN_14665997c(void)

undefined8 FUN_14665997c(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466599a2 FUN_1466599a2 body=78 status=ok
// SIG undefined FUN_1466599a2(void)

void FUN_1466599a2(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xb0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8cb250;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1466599f0 FUN_1466599f0 body=29 status=ok
// SIG undefined FUN_1466599f0(void)

undefined8 FUN_1466599f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659a0e FUN_146659a0e body=29 status=ok
// SIG undefined FUN_146659a0e(void)

undefined8 FUN_146659a0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659a2c FUN_146659a2c body=38 status=ok
// SIG undefined FUN_146659a2c(void)

undefined8 FUN_146659a2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_ContinueGame",1);
  return param_2;
}



// FUNCTION 146659a52 FUN_146659a52 body=29 status=ok
// SIG undefined FUN_146659a52(void)

undefined8 FUN_146659a52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659a70 FUN_146659a70 body=38 status=ok
// SIG undefined FUN_146659a70(void)

undefined8 FUN_146659a70(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OpenShiftMenu",1);
  return param_2;
}



// FUNCTION 146659a96 FUN_146659a96 body=29 status=ok
// SIG undefined FUN_146659a96(void)

undefined8 FUN_146659a96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659ab4 FUN_146659ab4 body=29 status=ok
// SIG undefined FUN_146659ab4(void)

undefined8 FUN_146659ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659ad2 FUN_146659ad2 body=70 status=ok
// SIG undefined FUN_146659ad2(void)

undefined8 * FUN_146659ad2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659b18 FUN_146659b18 body=29 status=ok
// SIG undefined FUN_146659b18(void)

undefined8 FUN_146659b18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659b36 FUN_146659b36 body=38 status=ok
// SIG undefined FUN_146659b36(void)

undefined8 FUN_146659b36(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_RefreshXp",1);
  return param_2;
}



// FUNCTION 146659b5c FUN_146659b5c body=38 status=ok
// SIG undefined FUN_146659b5c(void)

undefined8 FUN_146659b5c(undefined8 param_1,int param_2)

{
  FUN_1457f3312();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659b82 FUN_146659b82 body=52 status=ok
// SIG undefined FUN_146659b82(void)

void FUN_146659b82(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x238,0x10);
  FUN_1459653a2(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 146659bb6 FUN_146659bb6 body=38 status=ok
// SIG undefined FUN_146659bb6(void)

undefined8 FUN_146659bb6(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659bdc FUN_146659bdc body=29 status=ok
// SIG undefined FUN_146659bdc(void)

undefined8 FUN_146659bdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659bfa FUN_146659bfa body=38 status=ok
// SIG undefined FUN_146659bfa(void)

undefined8 FUN_146659bfa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TitleScreenStatusChanged",1);
  return param_2;
}



// FUNCTION 146659c20 FUN_146659c20 body=38 status=ok
// SIG undefined FUN_146659c20(void)

undefined8 FUN_146659c20(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659c46 FUN_146659c46 body=38 status=ok
// SIG undefined FUN_146659c46(void)

undefined8 FUN_146659c46(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146659c6c FUN_146659c6c body=147 status=ok
// SIG undefined FUN_146659c6c(void)

void FUN_146659c6c(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,2);
    puVar4 = &DAT_149dfb77a;
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      puVar3 = (undefined2 *)*param_3;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar3);
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_4);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar2;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar4);
                    /* WARNING: Could not recover jumptable at 0x000146659cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 146659d00 FUN_146659d00 body=118 status=ok
// SIG undefined FUN_146659d00(void)

void FUN_146659d00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d2d50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146659d76 FUN_146659d76 body=118 status=ok
// SIG undefined FUN_146659d76(void)

void FUN_146659d76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d3740;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146659dec FUN_146659dec body=104 status=ok
// SIG undefined FUN_146659dec(void)

undefined8 * FUN_146659dec(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x3b0);
  memset(_Dst,0,0x3b0);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d8180;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  _Dst[0x6e] = 0;
  _Dst[0x6f] = 0;
  _Dst[0x70] = 0;
  _Dst[0x71] = 0;
  _Dst[0x72] = 0;
  _Dst[0x73] = 0;
  _Dst[0x74] = 0;
  _Dst[0x75] = 0;
  return _Dst;
}



// FUNCTION 146659e54 FUN_146659e54 body=108 status=ok
// SIG undefined FUN_146659e54(void)

undefined8 * FUN_146659e54(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x378);
  memset(_Dst,0,0x378);
  FUN_14586bda8(_Dst);
  *_Dst = &PTR_FUN_14b9d8440;
  *(undefined1 *)(_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x36c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x344) = 0;
  *(undefined8 *)((longlong)_Dst + 0x34c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x354) = 0;
  *(undefined8 *)((longlong)_Dst + 0x35c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x361) = 0;
  return _Dst;
}



// FUNCTION 146659ec0 FUN_146659ec0 body=108 status=ok
// SIG undefined FUN_146659ec0(void)

undefined8 * FUN_146659ec0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x378);
  memset(_Dst,0,0x378);
  FUN_14586bda8(_Dst);
  *_Dst = &PTR_FUN_14b9d8440;
  *(undefined1 *)(_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x36c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x344) = 0;
  *(undefined8 *)((longlong)_Dst + 0x34c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x354) = 0;
  *(undefined8 *)((longlong)_Dst + 0x35c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x361) = 0;
  return _Dst;
}



// FUNCTION 146659f2c FUN_146659f2c body=502 status=ok
// SIG undefined FUN_146659f2c(void)

/* WARNING: Removing unreachable block (ram,0x00014665a0f6) */

void FUN_146659f2c(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407cb6b6();
  plVar1 = (longlong *)(param_1 + 0x358);
  iVar6 = *(int *)(param_1 + 0x364);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x358),*(undefined4 *)(param_1 + 0x360));
  *(undefined4 *)(param_1 + 0x360) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0x364) != 0)) {
    FUN_1408be2c4(plVar1,0);
  }
  uVar7 = FUN_144a7cdc2(param_1 + 0x160,&DAT_14cbe2db8);
  puVar8 = (undefined8 *)FUN_1407cbaec(uVar7);
  if ((longlong)*(int *)(puVar8 + 2) != 0) {
    puVar9 = (undefined8 *)*puVar8;
    lVar10 = (longlong)*(int *)(puVar8 + 2) << 4;
    do {
      if ((((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) != 0)) &&
         (cVar4 = FUN_144a8ab0e(puVar9), cVar4 != '\0')) {
        pbVar2 = (byte *)*puVar9;
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(pbVar2 + 8);
        }
        FUN_1400b22c2(&local_50,uVar7);
        iVar6 = *(int *)(param_1 + 0x360);
        uVar5 = iVar6 + 1;
        *(uint *)(param_1 + 0x360) = uVar5;
        if (*(uint *)(param_1 + 0x364) < uVar5) {
          FUN_1447a1bd6(plVar1);
        }
        lVar3 = *plVar1;
        lVar11 = (longlong)iVar6 * 0x10;
        *(undefined8 *)(lVar3 + lVar11) = 0;
        *(longlong *)(lVar3 + lVar11) = local_50;
        local_50 = 0;
        *(undefined4 *)(lVar3 + 8 + lVar11) = (undefined4)local_48;
        *(undefined4 *)(lVar3 + 0xc + lVar11) = local_48._4_4_;
        local_48 = 0;
      }
      puVar9 = puVar9 + 2;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  lVar10 = *(longlong *)(param_1 + 0x288);
  if (((lVar10 != 0) && (*(int *)(param_1 + 0x370) == 0)) && (*(char *)(param_1 + 0x340) != '\x02'))
  {
    FUN_1400b22c2(&local_50,"vending_buy_back");
    iVar6 = FUN_1405e9454(lVar10 + 0x188,&local_50);
    if (iVar6 != -1) {
      *(int *)(lVar10 + 0x198) = *(int *)(lVar10 + 0x198) + 1;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665a124 FUN_14665a124 body=61 status=ok
// SIG undefined FUN_14665a124(void)

void FUN_14665a124(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_145a3c3c1(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_148eee7de(param_1);
  return;
}



// FUNCTION 14665a162 FUN_14665a162 body=694 status=ok
// SIG undefined FUN_14665a162(void)

void FUN_14665a162(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1457fc9d2();
  puVar3 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14cbe2e50);
  pbVar1 = (byte *)*puVar3;
  pcVar5 = "claimed_rewards";
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
    pcVar5 = "claimed_rewards";
    if (*(char **)(pbVar1 + 8) != (char *)0x0) {
      pcVar5 = *(char **)(pbVar1 + 8);
    }
  }
  FUN_1400b22c2(&local_30,pcVar5);
  if ((longlong *)(param_1 + 0xb50) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xb50) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xb50) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0xb58) = local_28;
    *(undefined4 *)(param_1 + 0xb5c) = local_24;
  }
  puVar3 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14cbe4030);
  pbVar1 = (byte *)*puVar3;
  pcVar5 = "claimed_rewards_medium";
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
    pcVar5 = "claimed_rewards_medium";
    if (*(char **)(pbVar1 + 8) != (char *)0x0) {
      pcVar5 = *(char **)(pbVar1 + 8);
    }
  }
  FUN_1400b22c2(&local_30,pcVar5);
  if ((longlong *)(param_1 + 0xb60) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xb60) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xb60) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0xb68) = local_28;
    *(undefined4 *)(param_1 + 0xb6c) = local_24;
  }
  puVar3 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14cbe4038);
  pbVar1 = (byte *)*puVar3;
  pcVar5 = "claimed_rewards_large";
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
    pcVar5 = "claimed_rewards_large";
    if (*(char **)(pbVar1 + 8) != (char *)0x0) {
      pcVar5 = *(char **)(pbVar1 + 8);
    }
  }
  FUN_1400b22c2(&local_30,pcVar5);
  if ((longlong *)(param_1 + 0xb70) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xb70) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xb70) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0xb78) = local_28;
    *(undefined4 *)(param_1 + 0xb7c) = local_24;
  }
  uVar4 = FUN_144a7cdc2(param_2,&DAT_14cbe4020);
  uVar2 = FUN_140e1edd4(uVar4,6);
  *(undefined4 *)(param_1 + 0xb80) = uVar2;
  uVar4 = FUN_144a7cdc2(param_2,&DAT_14cbe4028);
  uVar2 = FUN_140e1edd4(uVar4,0xc);
  *(undefined4 *)(param_1 + 0xb84) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14665a41a FUN_14665a41a body=76 status=ok
// SIG undefined FUN_14665a41a(void)

undefined8 FUN_14665a41a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145966786(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014665a45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14665a466 FUN_14665a466 body=26 status=ok
// SIG undefined FUN_14665a466(void)

void FUN_14665a466(longlong param_1)

{
  FUN_140e436b6();
  *(undefined1 *)(param_1 + 0x380) = 1;
  return;
}



// FUNCTION 14665a480 FUN_14665a480 body=22 status=ok
// SIG undefined FUN_14665a480(void)

undefined8 FUN_14665a480(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cbe4310;
  if (DAT_14cbe4310 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbe4310 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe4310 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbe4310[0x3a] <= *(int *)((longlong)DAT_14cbe4310 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cbe4310 + 0x300))(DAT_14cbe4310);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14665a496 FUN_14665a496 body=526 status=ok
// SIG undefined FUN_14665a496(void)

void FUN_14665a496(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_39;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a63f30();
  if (((*(uint *)(param_1 + 8) & 0x30) == 0) && (0 < *(int *)(param_1 + 0x30))) {
    lVar4 = FUN_14050fd64();
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = &local_39;
    FUN_140a1e0be(lVar4 + 0x1e8,&local_38,*(longlong *)(param_1 + 0x28) + 8);
    plVar1 = local_30;
    if ((undefined8 *)(param_1 + 0xc0) != &local_38) {
      *(undefined8 *)(param_1 + 0xc0) = local_38;
      local_38 = 0;
      plVar3 = *(longlong **)(param_1 + 200);
      if (local_30 != plVar3) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 200) = plVar1;
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
      }
    }
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_1449db362(&local_58);
    if (1 < *(int *)(param_1 + 0x30)) {
      lVar4 = FUN_14050fd64();
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      local_60 = &local_39;
      FUN_140a1e0be(lVar4 + 0x1e8,&local_38,*(longlong *)(param_1 + 0x28) + 0x30);
      plVar1 = local_30;
      if ((undefined8 *)(param_1 + 0xd0) != &local_38) {
        *(undefined8 *)(param_1 + 0xd0) = local_38;
        local_38 = 0;
        plVar3 = *(longlong **)(param_1 + 0xd8);
        if (local_30 != plVar3) {
          local_30 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xd8) = plVar1;
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
        }
      }
      plVar1 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1449db362(&local_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665a6a6 FUN_14665a6a6 body=46 status=ok
// SIG undefined FUN_14665a6a6(void)

void FUN_14665a6a6(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x30) == 0) {
    FUN_148ee9c1c(param_1);
    FUN_148ee9d9e(param_1);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14665a6d4 FUN_14665a6d4 body=22 status=ok
// SIG undefined FUN_14665a6d4(void)

undefined4 FUN_14665a6d4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  return *(undefined4 *)(lVar1 + 0x15c);
}



// FUNCTION 14665a6ea FUN_14665a6ea body=177 status=ok
// SIG undefined FUN_14665a6ea(void)

undefined8 FUN_14665a6ea(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_141147c94();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665a79c FUN_14665a79c body=177 status=ok
// SIG undefined FUN_14665a79c(void)

undefined8 FUN_14665a79c(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140bf2008();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665a84e FUN_14665a84e body=76 status=ok
// SIG undefined FUN_14665a84e(void)

undefined8 FUN_14665a84e(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145982ebc(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014665a88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14665a8a0 FUN_14665a8a0 body=203 status=ok
// SIG undefined FUN_14665a8a0(void)

void FUN_14665a8a0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448729ea(param_1 + 0x18,local_58);
  fVar3 = (float)FUN_144a7b41a(local_58,0);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  FUN_145ca5bd6(param_1,param_2,DAT_14cbe4e28,fVar3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665a972 FUN_14665a972 body=38 status=ok
// SIG undefined FUN_14665a972(void)

undefined8 FUN_14665a972(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665a998 FUN_14665a998 body=47 status=ok
// SIG undefined FUN_14665a998(void)

longlong FUN_14665a998(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665a9c8 FUN_14665a9c8 body=104 status=ok
// SIG undefined FUN_14665a9c8(void)

void FUN_14665a9c8(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(600);
  memset(_Dst,0,600);
  FUN_1459653a2(_Dst);
  *_Dst = &PTR_FUN_14b8d6c00;
  *(undefined4 *)(_Dst + 0x4a) = 0;
  _Dst[0x47] = 0;
  _Dst[0x48] = 0;
  *(undefined4 *)(_Dst + 0x49) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14665aa30 FUN_14665aa30 body=29 status=ok
// SIG undefined FUN_14665aa30(void)

undefined8 FUN_14665aa30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665aa4e FUN_14665aa4e body=132 status=ok
// SIG undefined FUN_14665aa4e(void)

void FUN_14665aa4e(longlong param_1,int param_2)

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



// FUNCTION 14665aad2 FUN_14665aad2 body=29 status=ok
// SIG undefined FUN_14665aad2(void)

bool FUN_14665aad2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14665aaf0 FUN_14665aaf0 body=24 status=ok
// SIG undefined FUN_14665aaf0(void)

bool FUN_14665aaf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665ab08 FUN_14665ab08 body=147 status=ok
// SIG undefined FUN_14665ab08(void)

void FUN_14665ab08(longlong param_1,int param_2)

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



// FUNCTION 14665ab9c FUN_14665ab9c body=132 status=ok
// SIG undefined FUN_14665ab9c(void)

void FUN_14665ab9c(longlong param_1,int param_2)

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



// FUNCTION 14665ac22 FUN_14665ac22 body=188 status=ok
// SIG undefined FUN_14665ac22(void)

void FUN_14665ac22(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == *(longlong *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 0x88) == 0) {
      iVar1 = 1;
      goto LAB_14665ac4f;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88) + 1;
LAB_14665ac4f:
    *(longlong *)(param_1 + 0x80) = *param_2;
    *(int *)(param_1 + 0x88) = iVar1;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar1 = *(int *)(param_1 + 0x2c) + 1;
LAB_14665ac67:
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = 1;
    goto LAB_14665ac67;
  }
  iVar1 = 1;
  FUN_1446ddc76(&local_28,&DAT_14a491dee,1);
  if (local_28 == *(longlong *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x38) != 0) goto LAB_14665aca4;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38) + 1;
  }
  *(longlong *)(param_1 + 0x30) = local_28;
  *(int *)(param_1 + 0x38) = iVar1;
LAB_14665aca4:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14665ace0 FUN_14665ace0 body=534 status=ok
// SIG undefined FUN_14665ace0(void)

void FUN_14665ace0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_41;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = param_1;
  lVar6 = FUN_1402735c8();
  lVar6 = FUN_1402d1dc0(lVar6 + 0x9f0);
  if (lVar6 == 0) {
    lVar7 = FUN_14050fd64();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar5 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_58[2] = lVar8;
    *local_58 = &PTR_FUN_14b9db2b0;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,uVar3);
    puVar5[4] = param_1;
    lVar6 = FUN_1402735c8();
    local_60 = &local_41;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    FUN_140a1e0be(lVar7 + 0x1e8,&local_40,lVar6 + 0x9f8,&local_58);
    plVar1 = local_38;
    if ((longlong *)(param_1 + 0x18) != &local_40) {
      *(longlong *)(param_1 + 0x18) = local_40;
      local_40 = 0;
      plVar4 = *(longlong **)(param_1 + 0x20);
      if (local_38 != plVar4) {
        local_38 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x20) = plVar1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_1449db362(&local_58);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if ((lVar6 != 0) && (*DAT_14cbe54e0 == '\x01')) {
      FUN_140bd4428(lVar6,0,1);
    }
  }
  else {
    FUN_1443331f6(&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665aef8 FUN_14665aef8 body=587 status=ok
// SIG undefined FUN_14665aef8(void)

ulonglong FUN_14665aef8(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong unaff_RDI;
  longlong *plVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*DAT_14cbe54c8 == '\0') {
    if (param_1 != (longlong *)0x0) {
      lVar8 = FUN_144a79464();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        cVar5 = (**(code **)(*param_1 + 0x490))(param_1);
        if (cVar5 != '\0') goto LAB_14665b13d;
        unaff_RDI = param_1[9];
        if (unaff_RDI != 0) {
          lVar8 = FUN_140b6d0be();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            FUN_14127bdbc(unaff_RDI,&local_58);
            iVar4 = local_50;
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),param_3 == 1);
            if (0 < iVar4) goto LAB_14665afca;
          }
        }
        if (1 < param_3) {
          plVar9 = (longlong *)FUN_144a7c8f0(param_1);
          unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
          if ((longlong)(int)plVar9[1] != 0) {
            plVar12 = (longlong *)*plVar9;
            lVar8 = *(longlong *)(*plVar12 + 0x30);
            if (lVar8 != 0) {
              plVar9 = plVar12 + (int)plVar9[1];
              while( true ) {
                lVar10 = FUN_144a5dd5e();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) break;
                uVar11 = FUN_1447210f0(lVar8);
                FUN_14154b34a(&local_58,uVar11);
                if (local_58 == 0) {
                  bVar6 = 0;
                }
                else {
                  bVar6 = FUN_143cd99ec();
                }
                plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
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
                bVar7 = FUN_141107632(lVar8);
                if (lVar8 == param_2) {
                  if ((bVar6 & bVar7) != 0) break;
                }
                else {
                  lVar8 = lVar8 + 0xd98;
                  cVar5 = FUN_140426394(lVar8,&DAT_14cbd9658);
                  if ((((cVar5 == '\0') &&
                       (cVar5 = FUN_14030d2b6(lVar8,&DAT_14cbd96d0), cVar5 == '\0')) &&
                      (cVar5 = FUN_14030d2b6(lVar8,&DAT_14cbd96c8), cVar5 == '\0')) &&
                     (cVar5 = FUN_14030d2b6(lVar8,&DAT_14cbd96c0), cVar5 == '\0'))
                  goto LAB_14665b13d;
                }
                plVar12 = plVar12 + 1;
                if ((plVar12 == plVar9) || (lVar8 = *(longlong *)(*plVar12 + 0x30), lVar8 == 0))
                break;
              }
            }
          }
          goto LAB_14665afca;
        }
      }
    }
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),param_3 == 1);
  }
  else {
LAB_14665b13d:
    unaff_RDI = 0;
  }
LAB_14665afca:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 14665b144 FUN_14665b144 body=151 status=ok
// SIG undefined FUN_14665b144(void)

void FUN_14665b144(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  short local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_1447210f0();
    lVar2 = FUN_1400f6f32(uVar1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x68) != 0)) {
      FUN_140d27df6(*(longlong *)(lVar2 + 0x68),local_1c,*(undefined8 *)(param_1 + 0x28));
      if ((-1 < local_1c[0]) && (*(longlong *)(lVar2 + 0x30) != 0)) {
        local_38 = 0;
        uStack_30 = 0;
        FUN_140ceec8e(*(longlong *)(lVar2 + 0x30),local_40,local_1c);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665b1dc FUN_14665b1dc body=339 status=ok
// SIG undefined FUN_14665b1dc(void)

void FUN_14665b1dc(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = 1;
      goto LAB_14665b2c6;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 1;
LAB_14665b2c6:
    *param_1 = '\0';
    *(int *)(param_1 + 4) = iVar1;
  }
  if (param_1[8] == '\0') {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 1;
      goto LAB_14665b2d6;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) + 1;
LAB_14665b2d6:
    param_1[8] = '\0';
    *(int *)(param_1 + 0xc) = iVar1;
  }
  if (param_1[0x10] == '\0') {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = 1;
      goto LAB_14665b2e7;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
LAB_14665b2e7:
    param_1[0x10] = '\0';
    *(int *)(param_1 + 0x14) = iVar1;
  }
  if (param_1[0x20] == '\0') {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar1 = 1;
      goto LAB_14665b22e;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + 1;
LAB_14665b22e:
    param_1[0x20] = '\0';
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (param_1[0x28] == '\0') {
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar1 = 1;
      goto LAB_14665b2f8;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c) + 1;
LAB_14665b2f8:
    param_1[0x28] = '\0';
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  FUN_1414cfa40(param_1 + 0x30,&DAT_149eda618);
  FUN_1414cfa40(param_1 + 0x3c,&DAT_149eda618);
  if (*(int *)(param_1 + 0x60) == -1) {
    if (*(int *)(param_1 + 100) != 0) goto LAB_14665b276;
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 100) + 1;
  }
  param_1[0x60] = -1;
  param_1[0x61] = -1;
  param_1[0x62] = -1;
  param_1[99] = -1;
  *(int *)(param_1 + 100) = iVar1;
LAB_14665b276:
  if (DAT_14caa8578 == *(longlong *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 0x88) != 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88) + 1;
  }
  *(longlong *)(param_1 + 0x80) = DAT_14caa8578;
  *(int *)(param_1 + 0x88) = iVar1;
  return;
}



// FUNCTION 14665b330 FUN_14665b330 body=244 status=ok
// SIG undefined FUN_14665b330(void)

undefined8 FUN_14665b330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9db380;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14594332c;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665b426 FUN_14665b426 body=785 status=ok
// SIG undefined FUN_14665b426(void)

void FUN_14665b426(longlong *param_1,byte param_2,double *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_2d8 [32];
  double local_2b8;
  double local_2b0;
  undefined **local_2a8;
  undefined2 local_2a0;
  undefined1 local_29e;
  undefined4 local_29c;
  undefined4 local_298;
  undefined8 local_290;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  undefined8 *local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined2 local_244;
  undefined7 local_240;
  undefined4 uStack_239;
  undefined1 local_230 [184];
  undefined1 local_178 [184];
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined8 local_94;
  byte local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  plVar3 = DAT_14c966ea8;
  uVar4 = DAT_14c966ea0;
  uVar6 = DAT_14c966e98;
  if (lVar5 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_284 = (float)param_3[1];
    local_288 = (float)*param_3;
    local_2a0 = 0;
    local_29e = 0;
    local_290 = 0;
    local_2a8 = &PTR_FUN_149eda650;
    local_274 = local_284 - local_284;
    local_278 = local_288 - local_288;
    local_270 = &local_88;
    local_268 = uVar6;
    local_260 = uVar4;
    local_258 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_250 = 10;
    local_248 = 0x3f800000;
    local_244 = 0;
    local_240 = 0;
    uStack_239 = 0;
    local_29c = param_4;
    local_298 = param_4;
    local_280 = local_288;
    local_27c = local_284;
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
    uVar6 = FUN_1449baec6(lVar5);
    FUN_14039c14e(uVar6,&local_2b8);
    local_bc = (float)local_2b0;
    local_c0 = (float)local_2b8;
    plVar3 = (longlong *)param_1[5];
    local_b8 = *(float *)(plVar3 + 0x1b);
    local_a4 = local_b8 + 0.0;
    local_a0 = local_b8 * 0.0 + 0.0;
    local_94 = 0;
    local_8c = local_8c & 0xfe;
    local_b4 = 0;
    uStack_ac = 0;
    puVar7 = local_230;
    if (param_2 != 0) {
      puVar7 = local_178;
    }
    local_9c = local_a0;
    local_98 = local_a4;
    (**(code **)((ulonglong)(param_2 ^ 1) * 0x10 + 0x58 + *plVar3))
              (plVar3,puVar7,&local_c0,&local_2a8);
    FUN_14493db24(puVar7);
    plVar3 = local_258;
    local_2a8 = &PTR_FUN_149eda650;
    if (local_258 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_258 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_258)(local_258);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_1405535a6(&local_88);
  }
  if ((local_38 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665b738 FUN_14665b738 body=52 status=ok
// SIG undefined FUN_14665b738(void)

void FUN_14665b738(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_145c41ea6(_Dst);
  return;
}



// FUNCTION 14665b76c FUN_14665b76c body=72 status=ok
// SIG undefined FUN_14665b76c(void)

void FUN_14665b76c(longlong param_1)

{
  FUN_1410c2540();
  FUN_1412d7f26(param_1 + 0x2d8,2);
  FUN_1412d7f26(param_1 + 0x2c8,2);
  FUN_1412d7f26(param_1 + 0x2e8,4);
  return;
}



// FUNCTION 14665b7b4 FUN_14665b7b4 body=26 status=ok
// SIG undefined FUN_14665b7b4(void)

void FUN_14665b7b4(undefined8 param_1)

{
  FUN_145bfd8c6();
  FUN_141497d7e(param_1);
  return;
}



// FUNCTION 14665b7ce FUN_14665b7ce body=592 status=ok
// SIG undefined FUN_14665b7ce(void)

void FUN_14665b7ce(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db580;
  puVar1[2] = FUN_148ef0d18;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"InputFocusChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db580;
  puVar1[2] = FUN_145eb290e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"InputSelectionChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db5a0;
  puVar1[2] = FUN_148ef0e6a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"TextChanged",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db5c0;
  puVar1[2] = FUN_148ef0ebe;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"TextChangedWithIdent",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db5e0;
  puVar1[2] = &LAB_148ef14ae;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnDropdownClicked",puVar1);
  FUN_1446ddc76(local_48,"Event_OnDropdownClicked",1);
  uVar3 = local_48._0_4_ & 0xffff;
  puVar1 = (undefined8 *)
           FUN_140db173c(param_1 + 0x38,
                         (local_48._0_4_ << 0x10 | uVar3) + local_48._4_4_ +
                         (local_48._2_4_ << 0x13 | local_48._2_4_ & 0xffff) + (uVar3 >> 4),local_48)
  ;
  *puVar1 = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db600;
  puVar1[2] = &LAB_148ef14bc;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnDropdownItemClicked",puVar1);
  FUN_1446ddc76(local_48,"Event_OnDropdownItemClicked",1);
  uVar3 = local_48._0_4_ & 0xffff;
  puVar1 = (undefined8 *)
           FUN_140db173c(param_1 + 0x38,
                         (local_48._0_4_ << 0x10 | uVar3) + local_48._4_4_ +
                         (local_48._2_4_ << 0x13 | local_48._2_4_ & 0xffff) + (uVar3 >> 4),local_48)
  ;
  *puVar1 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665ba20 FUN_14665ba20 body=654 status=ok
// SIG undefined FUN_14665ba20(void)

void FUN_14665ba20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_238 [32];
  undefined1 **local_218;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined1 *local_1f8;
  longlong *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [256];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1448d5e3c(&local_1f8,param_1 + 0x208);
  plVar3 = *(longlong **)(local_1f8 + 0x160);
  AcquireSRWLockShared((PSRWLOCK)(plVar3 + 4));
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  uVar5 = FUN_14479d2ce(param_1 + 0x30);
  local_1fc = 0xffffffff;
  local_1f8 = local_1d8;
  local_1e0 = '\0';
  local_1e8 = local_d8;
  local_1f0 = (longlong *)local_1f8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"FocusInput",&local_1f8);
  local_58 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar6 = wcslen(_Str);
    FUN_1446fe5a4(local_d8,_Str,sVar6 & 0xffffffff,1);
  }
  FUN_140c7f7d4(uVar5,local_50,&local_1fc);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_1e0 == '\x01') {
    FUN_1400020a8(local_1f8);
  }
  if ((((longlong)(int)plVar3[1] != 0) &&
      (lVar7 = (longlong)(int)plVar3[1] * 200 + *plVar3, lVar7 != 200)) &&
     (*(char *)(lVar7 + -0x54) == '\x01')) {
    lVar7 = FUN_140391552(param_1);
    if (lVar7 != 0) {
      uVar5 = FUN_14001cc68(0x40,0x10);
      FUN_1400b22c2(&local_1f8,&DAT_149e02088);
      lVar8 = FUN_14479d2ce(param_1 + 0x30);
      if (lVar8 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_141580320(lVar8,0);
      }
      FUN_1446ddc76(&local_208,"Cancel",1);
      local_218 = &local_1f8;
      FUN_145eb2d72(uVar5,local_208,uVar4,1);
      FUN_14039144e(lVar7,uVar5);
      if (local_1f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x2b0) = 1;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(plVar3 + 4));
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665bcb0 FUN_14665bcb0 body=66 status=ok
// SIG undefined FUN_14665bcb0(void)

undefined8 * FUN_14665bcb0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9da700;
  return _Dst;
}



// FUNCTION 14665bcf2 FUN_14665bcf2 body=66 status=ok
// SIG undefined FUN_14665bcf2(void)

undefined8 * FUN_14665bcf2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9da700;
  return _Dst;
}



// FUNCTION 14665bd3a FUN_14665bd3a body=382 status=ok
// SIG undefined FUN_14665bd3a(void)

void FUN_14665bd3a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db800;
  puVar1[2] = FUN_148ef2fcc;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_PlayerEntrySelected",puVar1);
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db820;
  puVar1[2] = &DAT_148ef2fca;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_PlayerNextSortingOptionClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2c0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db820;
  puVar1[2] = FUN_148ef2f52;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_RefreshPlayersClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2b8) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db820;
  puVar1[2] = &LAB_148ef30a2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_BackButtonClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2c8) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db840;
  puVar1[2] = &LAB_148ef30ac;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnSortDropdownClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2d0) = uVar2;
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db860;
  puVar1[2] = FUN_148ef30da;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"Event_OnSortDropDownItemClicked",puVar1);
  *(undefined8 *)(param_1 + 0x2d8) = uVar2;
  return;
}



// FUNCTION 14665beb8 FUN_14665beb8 body=159 status=ok
// SIG undefined FUN_14665beb8(void)

void FUN_14665beb8(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x2b0);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2c0);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2b8);
  FUN_141346d9a(param_1,&local_20);
  local_20 = *(undefined8 *)(param_1 + 0x2c8);
  FUN_141346d9a(param_1,&local_20);
  FUN_141346e22(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665bf58 FUN_14665bf58 body=76 status=ok
// SIG undefined FUN_14665bf58(void)

undefined8 * FUN_14665bf58(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9da8b0;
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14665bfa4 FUN_14665bfa4 body=215 status=ok
// SIG undefined FUN_14665bfa4(void)

void FUN_14665bfa4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db8f0;
  puVar1[2] = FUN_146140e5e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  uVar2 = FUN_140db1ba0(param_1,L"OnPromptClicked",puVar1);
  FUN_1446ddc76(local_28,"OnPromptClicked",1);
  uVar3 = local_28._0_4_ & 0xffff;
  puVar1 = (undefined8 *)
           FUN_140db173c(param_1 + 0x38,
                         (local_28._0_4_ << 0x10 | uVar3) + local_28._4_4_ +
                         (local_28._2_4_ << 0x13 | local_28._2_4_ & 0xffff) + (uVar3 >> 4),local_28)
  ;
  *puVar1 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c07c FUN_14665c07c body=101 status=ok
// SIG undefined FUN_14665c07c(void)

undefined8 * FUN_14665c07c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9dabf0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0x3f80000000000000;
  _Dst[0x55] = 0;
  *(undefined4 *)(_Dst + 0x56) = 0;
  return _Dst;
}



// FUNCTION 14665c0e2 FUN_14665c0e2 body=101 status=ok
// SIG undefined FUN_14665c0e2(void)

undefined8 * FUN_14665c0e2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9dabf0;
  _Dst[0x53] = 0;
  _Dst[0x54] = 0x3f80000000000000;
  _Dst[0x55] = 0;
  *(undefined4 *)(_Dst + 0x56) = 0;
  return _Dst;
}



// FUNCTION 14665c148 FUN_14665c148 body=66 status=ok
// SIG undefined FUN_14665c148(void)

undefined8 * FUN_14665c148(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9dacf0;
  return _Dst;
}



// FUNCTION 14665c18a FUN_14665c18a body=136 status=ok
// SIG undefined FUN_14665c18a(void)

longlong * FUN_14665c18a(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b9db930;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 14665c212 FUN_14665c212 body=136 status=ok
// SIG undefined FUN_14665c212(void)

longlong * FUN_14665c212(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b9db9a0;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 14665c29a FUN_14665c29a body=118 status=ok
// SIG undefined FUN_14665c29a(void)

undefined8 * FUN_14665c29a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"GetOnFootGamepadStickPreset",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c312 FUN_14665c312 body=118 status=ok
// SIG undefined FUN_14665c312(void)

undefined8 * FUN_14665c312(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"SetOnFootGamepadStickPreset",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c38a FUN_14665c38a body=118 status=ok
// SIG undefined FUN_14665c38a(void)

undefined8 * FUN_14665c38a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"GetVehicleGamepadStickPreset",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c402 FUN_14665c402 body=118 status=ok
// SIG undefined FUN_14665c402(void)

undefined8 * FUN_14665c402(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"SetVehicleGamepadStickPreset",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c47a FUN_14665c47a body=118 status=ok
// SIG undefined FUN_14665c47a(void)

undefined8 * FUN_14665c47a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"GetPushToTalkEnabled",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c4f2 FUN_14665c4f2 body=118 status=ok
// SIG undefined FUN_14665c4f2(void)

undefined8 * FUN_14665c4f2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"SetPushToTalkEnabled",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c56a FUN_14665c56a body=118 status=ok
// SIG undefined FUN_14665c56a(void)

undefined8 * FUN_14665c56a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"GetShiftProfileVisibility",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c5e2 FUN_14665c5e2 body=118 status=ok
// SIG undefined FUN_14665c5e2(void)

undefined8 * FUN_14665c5e2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"SetShiftProfileVisibility",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c65a FUN_14665c65a body=118 status=ok
// SIG undefined FUN_14665c65a(void)

undefined8 * FUN_14665c65a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"GetVoiceChatEnabled",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c6d2 FUN_14665c6d2 body=118 status=ok
// SIG undefined FUN_14665c6d2(void)

undefined8 * FUN_14665c6d2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(local_38,L"SetVoiceChatEnabled",1);
  FUN_1400021e4(local_38,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c74a FUN_14665c74a body=320 status=ok
// SIG undefined FUN_14665c74a(void)

void FUN_14665c74a(longlong param_1)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  lVar2 = DAT_14cb0d2b0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar1 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar1 = *(longlong *)(lVar2 + 0x2c8);
      if (lVar1 == 0) goto LAB_14665c82b;
    }
    if (*(int *)(param_1 + 0x138) == 1) {
      local_30 = *(int *)(lVar1 + 0x2c0);
      _Src = *(void **)(lVar1 + 0x2b8);
    }
    else {
      local_30 = *(int *)(lVar1 + 0x2b0);
      _Src = *(void **)(lVar1 + 0x2a8);
    }
    local_38 = (void *)0x0;
    lVar2 = (longlong)local_30;
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
    if ((void **)(param_1 + 0x158) == &local_38) {
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x158) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0x158) = local_38;
      *(int *)(param_1 + 0x160) = local_30;
      *(undefined4 *)(param_1 + 0x164) = local_2c;
    }
  }
LAB_14665c82b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14665c89c FUN_14665c89c body=129 status=ok
// SIG undefined FUN_14665c89c(void)

void FUN_14665c89c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_1449db7f2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14665c8de;
  }
  lVar2 = 0;
LAB_14665c8de:
  FUN_141237a6a(&local_30,lVar2,0);
  *(undefined4 *)(param_1 + 0xa8) = local_30;
  *(undefined4 *)(param_1 + 0xac) = uStack_2c;
  *(undefined4 *)(param_1 + 0xb0) = uStack_28;
  *(undefined4 *)(param_1 + 0xb4) = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c91e FUN_14665c91e body=126 status=ok
// SIG undefined FUN_14665c91e(void)

void FUN_14665c91e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_1449db7f2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14665c960;
  }
  lVar2 = 0;
LAB_14665c960:
  FUN_141237a6a(&local_30,lVar2,0);
  *(undefined4 *)(param_1 + 0x30) = local_30;
  *(undefined4 *)(param_1 + 0x34) = uStack_2c;
  *(undefined4 *)(param_1 + 0x38) = uStack_28;
  *(undefined4 *)(param_1 + 0x3c) = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665c99e FUN_14665c99e body=244 status=ok
// SIG undefined FUN_14665c99e(void)

undefined8
FUN_14665c99e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b9dc0f0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665ca94 FUN_14665ca94 body=239 status=ok
// SIG undefined FUN_14665ca94(void)

undefined8 FUN_14665ca94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14b961ce0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b9dc160;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1459ce40e;
  FUN_14127be6a(&DAT_14cbd0b78,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665cb84 FUN_14665cb84 body=66 status=ok
// SIG undefined FUN_14665cb84(void)

undefined8 FUN_14665cb84(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(char *)(lVar1 + 0x178) == '\x03');
    }
  }
  return 0;
}



// FUNCTION 14665cbc6 FUN_14665cbc6 body=91 status=ok
// SIG undefined FUN_14665cbc6(void)

undefined8 * FUN_14665cbc6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * -0x45d1745d;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405bd402(param_1,iVar2,0);
    FUN_1405bd2e2(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 14665cc22 FUN_14665cc22 body=49 status=ok
// SIG undefined FUN_14665cc22(void)

longlong FUN_14665cc22(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cc54 FUN_14665cc54 body=38 status=ok
// SIG undefined FUN_14665cc54(void)

undefined8 FUN_14665cc54(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_DialogBoxChoiceSelected",1);
  return param_2;
}



// FUNCTION 14665cc7a FUN_14665cc7a body=70 status=ok
// SIG undefined FUN_14665cc7a(void)

undefined8 * FUN_14665cc7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665ccc0 FUN_14665ccc0 body=70 status=ok
// SIG undefined FUN_14665ccc0(void)

undefined8 * FUN_14665ccc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cd06 FUN_14665cd06 body=57 status=ok
// SIG undefined FUN_14665cd06(void)

undefined8 * FUN_14665cd06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9dabd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cd40 FUN_14665cd40 body=38 status=ok
// SIG undefined FUN_14665cd40(void)

undefined8 FUN_14665cd40(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MenuTutorial_SkipSeq",1);
  return param_2;
}



// FUNCTION 14665cd66 FUN_14665cd66 body=57 status=ok
// SIG undefined FUN_14665cd66(void)

undefined8 * FUN_14665cd66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9dabe0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cda0 FUN_14665cda0 body=38 status=ok
// SIG undefined FUN_14665cda0(void)

undefined8 FUN_14665cda0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MenuTutorial_CompleteSeq",1);
  return param_2;
}



// FUNCTION 14665cdc6 FUN_14665cdc6 body=38 status=ok
// SIG undefined FUN_14665cdc6(void)

undefined8 FUN_14665cdc6(undefined8 param_1,int param_2)

{
  FUN_1410ecf08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cdec FUN_14665cdec body=142 status=ok
// SIG undefined FUN_14665cdec(void)

void FUN_14665cdec(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8ca820;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *(undefined4 *)((longlong)_Dst + 0xcc) = 0;
  *(undefined1 *)(_Dst + 0x1a) = 0;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0;
  *(undefined1 *)(_Dst + 0x1b) = 0;
  *(undefined8 *)((longlong)_Dst + 0xdc) = 0;
  *(undefined4 *)((longlong)_Dst + 0xe4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb4) = 0;
  *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc1) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14665ce7a FUN_14665ce7a body=70 status=ok
// SIG undefined FUN_14665ce7a(void)

undefined8 * FUN_14665ce7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cec0 FUN_14665cec0 body=132 status=ok
// SIG undefined FUN_14665cec0(void)

void FUN_14665cec0(longlong param_1,int param_2)

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



// FUNCTION 14665cf46 FUN_14665cf46 body=29 status=ok
// SIG undefined FUN_14665cf46(void)

undefined8 FUN_14665cf46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cf64 FUN_14665cf64 body=50 status=ok
// SIG undefined FUN_14665cf64(void)

void FUN_14665cf64(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1449db362(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014665cf92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14665cf96 FUN_14665cf96 body=29 status=ok
// SIG undefined FUN_14665cf96(void)

undefined8 FUN_14665cf96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14665cfb4 FUN_14665cfb4 body=374 status=ok
// SIG undefined FUN_14665cfb4(void)

longlong *
FUN_14665cfb4(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x28);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14665d0be:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_14665d0be;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b9db1b0;
  puVar5[1] = *param_4;
  puVar5[2] = *param_5;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[3] = lVar11;
  *puVar5 = &PTR_FUN_14b9db140;
  puVar5[4] = uVar12;
  puVar5[5] = plVar10;
  if (bVar9) {
    puVar5[6] = uVar4;
    *(undefined4 *)(puVar5 + 7) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 7) = uVar3;
    puVar5[6] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 14665d12a FUN_14665d12a body=29 status=ok
// SIG undefined FUN_14665d12a(void)

bool FUN_14665d12a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14665d148 FUN_14665d148 body=24 status=ok
// SIG undefined FUN_14665d148(void)

bool FUN_14665d148(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665d160 FUN_14665d160 body=144 status=ok
// SIG undefined FUN_14665d160(void)

bool FUN_14665d160(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14665d1f2 FUN_14665d1f2 body=26 status=ok
// SIG undefined FUN_14665d1f2(void)

bool FUN_14665d1f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665d20c FUN_14665d20c body=24 status=ok
// SIG undefined FUN_14665d20c(void)

bool FUN_14665d20c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665d224 FUN_14665d224 body=99 status=ok
// SIG undefined FUN_14665d224(void)

void FUN_14665d224(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014665d283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014665d266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14665d288 FUN_14665d288 body=26 status=ok
// SIG undefined FUN_14665d288(void)

bool FUN_14665d288(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665d2a2 FUN_14665d2a2 body=24 status=ok
// SIG undefined FUN_14665d2a2(void)

bool FUN_14665d2a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665d2ba FUN_14665d2ba body=24 status=ok
// SIG undefined FUN_14665d2ba(void)

bool FUN_14665d2ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14665d2d2 FUN_14665d2d2 body=26 status=ok
// SIG undefined FUN_14665d2d2(void)

bool FUN_14665d2d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14665d2ec FUN_14665d2ec body=24 status=ok
// SIG undefined FUN_14665d2ec(void)

bool FUN_14665d2ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}


