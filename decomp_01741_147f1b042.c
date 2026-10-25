// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f1b042 FUN_147f1b042 body=32 status=ok
// SIG undefined FUN_147f1b042(void)

void FUN_147f1b042(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3ab40;
  return;
}



// FUNCTION 147f1b086 FUN_147f1b086 body=63 status=ok
// SIG undefined FUN_147f1b086(void)

undefined1 FUN_147f1b086(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 147f1b0ee FUN_147f1b0ee body=59 status=ok
// SIG undefined FUN_147f1b0ee(void)

undefined8 FUN_147f1b0ee(longlong *param_1)

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



// FUNCTION 147f1b13a FUN_147f1b13a body=38 status=ok
// SIG undefined FUN_147f1b13a(void)

void FUN_147f1b13a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f1b1ae FUN_147f1b1ae body=38 status=ok
// SIG undefined FUN_147f1b1ae(void)

undefined8 FUN_147f1b1ae(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1b1d4 FUN_147f1b1d4 body=55 status=ok
// SIG undefined FUN_147f1b1d4(void)

void FUN_147f1b1d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21360 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21360 = FUN_140002ddd(FUN_146432b83,uVar1,L"GbxBrainAspect_GameplayTags");
  }
  return;
}



// FUNCTION 147f1b240 FUN_147f1b240 body=63 status=ok
// SIG undefined FUN_147f1b240(void)

undefined1 FUN_147f1b240(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1b368(param_2,param_3);
    param_3 = param_3 + 0x338;
    param_2 = param_2 + 0x338;
  }
  return 1;
}



// FUNCTION 147f1b2a8 FUN_147f1b2a8 body=59 status=ok
// SIG undefined FUN_147f1b2a8(void)

undefined8 FUN_147f1b2a8(longlong *param_1)

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



// FUNCTION 147f1b2f4 FUN_147f1b2f4 body=38 status=ok
// SIG undefined FUN_147f1b2f4(void)

void FUN_147f1b2f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x338) == '\x01') {
    FUN_145cb973a(param_2);
    *(undefined1 *)(param_2 + 0x338) = 0;
  }
  return;
}



// FUNCTION 147f1b368 FUN_147f1b368 body=132 status=ok
// SIG undefined FUN_147f1b368(void)

longlong FUN_147f1b368(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_14054d68c(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x2f8,param_2 + 0x2f8);
  *(undefined2 *)(param_1 + 0x330) = *(undefined2 *)(param_2 + 0x330);
  return param_1;
}



// FUNCTION 147f1b3f6 FUN_147f1b3f6 body=46 status=ok
// SIG undefined FUN_147f1b3f6(void)

void FUN_147f1b3f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3afe0;
  FUN_143860306(param_2 + 0x1b);
  return;
}



// FUNCTION 147f1b448 FUN_147f1b448 body=85 status=ok
// SIG undefined FUN_147f1b448(void)

undefined1 FUN_147f1b448(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_147f1b59c(param_2 + 0xd8,param_3 + 0xd8);
    param_2 = param_2 + 0x210;
    param_3 = param_3 + 0x210;
  }
  return 1;
}



// FUNCTION 147f1b4c6 FUN_147f1b4c6 body=59 status=ok
// SIG undefined FUN_147f1b4c6(void)

undefined8 FUN_147f1b4c6(longlong *param_1)

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



// FUNCTION 147f1b512 FUN_147f1b512 body=60 status=ok
// SIG undefined FUN_147f1b512(void)

void FUN_147f1b512(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14ac3afe0;
    FUN_140cabc42(param_2 + 0x1b);
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 147f1b59c FUN_147f1b59c body=535 status=ok
// SIG undefined FUN_147f1b59c(void)

longlong FUN_147f1b59c(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *_Src;
  longlong *plVar12;
  
  if (param_2 != param_1) {
    FUN_147f1b7b4(param_1,param_2);
  }
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  FUN_14054d9c0(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_1447f8f6a(param_1 + 0xb8,param_2 + 0xb8);
  FUN_14495544a(param_1 + 0xe0,param_2 + 0xe0);
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  lVar5 = *(longlong *)(param_2 + 0xf0);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar12 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  *(longlong *)(param_1 + 0xf0) = lVar5;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = (longlong *)(param_1 + 0xf8);
  _Src = (undefined8 *)(param_2 + 0xf8);
  bVar2 = *(byte *)(param_1 + 0x118);
  if (bVar2 == *(byte *)(param_2 + 0x118)) {
    if (0x18 < *(ushort *)(param_2 + 0x110)) {
      _Src = *(undefined8 **)(param_2 + 0xf8);
    }
    if (0x18 < *(ushort *)(param_1 + 0x110)) {
      plVar12 = (longlong *)*plVar12;
    }
    uVar10 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar10);
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar12,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
    }
    else {
      (*pcVar6)(plVar12,_Src);
    }
  }
  else {
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar6 != (code *)0x0) {
      plVar11 = plVar12;
      if (0x18 < *(ushort *)(param_1 + 0x110)) {
        plVar11 = (longlong *)*plVar12;
      }
      (*pcVar6)(plVar11);
    }
    if (0x18 < *(ushort *)(param_1 + 0x110)) {
      FUN_1400020a8(*plVar12);
    }
    bVar2 = *(byte *)(param_2 + 0x118);
    uVar3 = *(ushort *)(param_2 + 0x110);
    *(ushort *)(param_1 + 0x110) = uVar3;
    plVar11 = plVar12;
    if (0x18 < uVar3) {
      plVar11 = (longlong *)FUN_14001cc68(uVar3,0);
      *plVar12 = (longlong)plVar11;
      _Src = (undefined8 *)*_Src;
    }
    uVar10 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar10);
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar11,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
    }
    else {
      (*pcVar6)(plVar11,_Src);
    }
    *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  }
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  return param_1;
}



// FUNCTION 147f1b7b4 FUN_147f1b7b4 body=304 status=ok
// SIG undefined FUN_147f1b7b4(void)

void FUN_147f1b7b4(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147f1b916 FUN_147f1b916 body=63 status=ok
// SIG undefined FUN_147f1b916(void)

undefined1 FUN_147f1b916(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1ba3e(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 147f1b97e FUN_147f1b97e body=59 status=ok
// SIG undefined FUN_147f1b97e(void)

undefined8 FUN_147f1b97e(longlong *param_1)

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



// FUNCTION 147f1b9ca FUN_147f1b9ca body=38 status=ok
// SIG undefined FUN_147f1b9ca(void)

void FUN_147f1b9ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_140e9fa56(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 147f1ba3e FUN_147f1ba3e body=173 status=ok
// SIG undefined FUN_147f1ba3e(void)

longlong FUN_147f1ba3e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  FUN_144983130(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x132) = *(undefined1 *)(param_2 + 0x132);
  return param_1;
}



// FUNCTION 147f1baec FUN_147f1baec body=42 status=ok
// SIG undefined FUN_147f1baec(void)

void FUN_147f1baec(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3b3c0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f1bb3a FUN_147f1bb3a body=63 status=ok
// SIG undefined FUN_147f1bb3a(void)

undefined1 FUN_147f1bb3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14386054e(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f1bba2 FUN_147f1bba2 body=59 status=ok
// SIG undefined FUN_147f1bba2(void)

undefined8 FUN_147f1bba2(longlong *param_1)

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



// FUNCTION 147f1bbee FUN_147f1bbee body=38 status=ok
// SIG undefined FUN_147f1bbee(void)

void FUN_147f1bbee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_143860504(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f1bcb8 FUN_147f1bcb8 body=63 status=ok
// SIG undefined FUN_147f1bcb8(void)

undefined1 FUN_147f1bcb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1bde2(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 147f1bd20 FUN_147f1bd20 body=59 status=ok
// SIG undefined FUN_147f1bd20(void)

undefined8 FUN_147f1bd20(longlong *param_1)

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



// FUNCTION 147f1bd6c FUN_147f1bd6c body=40 status=ok
// SIG undefined FUN_147f1bd6c(void)

void FUN_147f1bd6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_147f1be66(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 147f1bde2 FUN_147f1bde2 body=130 status=ok
// SIG undefined FUN_147f1bde2(void)

longlong FUN_147f1bde2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  return param_1;
}



// FUNCTION 147f1be66 FUN_147f1be66 body=74 status=ok
// SIG undefined FUN_147f1be66(void)

void FUN_147f1be66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac3cc50;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 147f1beb0 FUN_147f1beb0 body=38 status=ok
// SIG undefined FUN_147f1beb0(void)

undefined8 FUN_147f1beb0(undefined8 param_1,int param_2)

{
  FUN_147f1be66();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1bed6 FUN_147f1bed6 body=55 status=ok
// SIG undefined FUN_147f1bed6(void)

void FUN_147f1bed6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21430 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21430 = FUN_140002ddd(FUN_146432dc9,uVar1,L"GbxBrainAspectSettings_InLineOfFire");
  }
  return;
}



// FUNCTION 147f1bf12 FUN_147f1bf12 body=58 status=ok
// SIG undefined FUN_147f1bf12(void)

void FUN_147f1bf12(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe8);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3b7a0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f1bf4c FUN_147f1bf4c body=42 status=ok
// SIG undefined FUN_147f1bf4c(void)

void FUN_147f1bf4c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3b7a0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f1bf9a FUN_147f1bf9a body=76 status=ok
// SIG undefined FUN_147f1bf9a(void)

undefined1 FUN_147f1bf9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f1c00e FUN_147f1c00e body=59 status=ok
// SIG undefined FUN_147f1c00e(void)

undefined8 FUN_147f1c00e(longlong *param_1)

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



// FUNCTION 147f1c05a FUN_147f1c05a body=38 status=ok
// SIG undefined FUN_147f1c05a(void)

void FUN_147f1c05a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f1c0ce FUN_147f1c0ce body=38 status=ok
// SIG undefined FUN_147f1c0ce(void)

undefined8 FUN_147f1c0ce(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1c0f4 FUN_147f1c0f4 body=55 status=ok
// SIG undefined FUN_147f1c0f4(void)

void FUN_147f1c0f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21448 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21448 = FUN_140002ddd(FUN_146432e5f,uVar1,L"GbxBrainAspect_InLineOfFire");
  }
  return;
}



// FUNCTION 147f1c162 FUN_147f1c162 body=60 status=ok
// SIG undefined FUN_147f1c162(void)

undefined1 FUN_147f1c162(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_3 + 0x38);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 147f1c1c6 FUN_147f1c1c6 body=59 status=ok
// SIG undefined FUN_147f1c1c6(void)

undefined8 FUN_147f1c1c6(longlong *param_1)

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



// FUNCTION 147f1c20c FUN_147f1c20c body=32 status=ok
// SIG undefined FUN_147f1c20c(void)

void FUN_147f1c20c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147f1c28c FUN_147f1c28c body=42 status=ok
// SIG undefined FUN_147f1c28c(void)

void FUN_147f1c28c(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x80);
  FUN_144a2da94(param_2 + 0x40);
  FUN_144a2da94(param_2);
  return;
}



// FUNCTION 147f1c2cc FUN_147f1c2cc body=63 status=ok
// SIG undefined FUN_147f1c2cc(void)

undefined1 FUN_147f1c2cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1c3d6(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 147f1c334 FUN_147f1c334 body=59 status=ok
// SIG undefined FUN_147f1c334(void)

undefined8 FUN_147f1c334(longlong *param_1)

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



// FUNCTION 147f1c3d6 FUN_147f1c3d6 body=107 status=ok
// SIG undefined FUN_147f1c3d6(void)

longlong FUN_147f1c3d6(longlong param_1,longlong param_2)

{
  FUN_144983130();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  FUN_144983130(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  return param_1;
}



// FUNCTION 147f1c442 FUN_147f1c442 body=59 status=ok
// SIG undefined FUN_147f1c442(void)

void FUN_147f1c442(longlong param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_144a2da94(param_1 + 0x80);
    FUN_144a2da94(param_1 + 0x40);
    FUN_144a2da94(param_1);
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



// FUNCTION 147f1c4ae FUN_147f1c4ae body=63 status=ok
// SIG undefined FUN_147f1c4ae(void)

undefined1 FUN_147f1c4ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1c5d6(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 147f1c516 FUN_147f1c516 body=59 status=ok
// SIG undefined FUN_147f1c516(void)

undefined8 FUN_147f1c516(longlong *param_1)

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



// FUNCTION 147f1c562 FUN_147f1c562 body=38 status=ok
// SIG undefined FUN_147f1c562(void)

void FUN_147f1c562(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140e34d98(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 147f1c5d6 FUN_147f1c5d6 body=200 status=ok
// SIG undefined FUN_147f1c5d6(void)

longlong FUN_147f1c5d6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  FUN_144983130(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  FUN_144983130(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  FUN_147f1c3d6(param_1 + 0x140,param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x208) = *(undefined1 *)(param_2 + 0x208);
  return param_1;
}



// FUNCTION 147f1c6a0 FUN_147f1c6a0 body=42 status=ok
// SIG undefined FUN_147f1c6a0(void)

void FUN_147f1c6a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3bfe0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 147f1c6ee FUN_147f1c6ee body=74 status=ok
// SIG undefined FUN_147f1c6ee(void)

undefined8 FUN_147f1c6ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f1c760 FUN_147f1c760 body=59 status=ok
// SIG undefined FUN_147f1c760(void)

undefined8 FUN_147f1c760(longlong *param_1)

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



// FUNCTION 147f1c7ac FUN_147f1c7ac body=38 status=ok
// SIG undefined FUN_147f1c7ac(void)

void FUN_147f1c7ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f1c854 FUN_147f1c854 body=63 status=ok
// SIG undefined FUN_147f1c854(void)

undefined1 FUN_147f1c854(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1c97c(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 147f1c8bc FUN_147f1c8bc body=59 status=ok
// SIG undefined FUN_147f1c8bc(void)

undefined8 FUN_147f1c8bc(longlong *param_1)

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



// FUNCTION 147f1c908 FUN_147f1c908 body=38 status=ok
// SIG undefined FUN_147f1c908(void)

void FUN_147f1c908(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_140e9689e(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 147f1c97c FUN_147f1c97c body=195 status=ok
// SIG undefined FUN_147f1c97c(void)

longlong FUN_147f1c97c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_144983130(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  FUN_144983130(param_1 + 0x108,param_2 + 0x108);
  uVar1 = *(undefined4 *)(param_2 + 0x143);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x143) = uVar1;
  return param_1;
}



// FUNCTION 147f1ca40 FUN_147f1ca40 body=77 status=ok
// SIG undefined FUN_147f1ca40(void)

void FUN_147f1ca40(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac3c4a0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0xff7fffff;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  return;
}



// FUNCTION 147f1cada FUN_147f1cada body=59 status=ok
// SIG undefined FUN_147f1cada(void)

undefined8 FUN_147f1cada(longlong *param_1)

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



// FUNCTION 147f1cc46 FUN_147f1cc46 body=55 status=ok
// SIG undefined FUN_147f1cc46(void)

void FUN_147f1cc46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21838 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21838 = FUN_14171c317(FUN_1464342e1,uVar1,L"EGbxBrainAspectSetParamOnStartBehavior");
  }
  return;
}



// FUNCTION 147f1cc7d FUN_147f1cc7d body=55 status=ok
// SIG undefined FUN_147f1cc7d(void)

void FUN_147f1cc7d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21850 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21850 = FUN_14171c317(FUN_146434310,uVar1,L"EGbxBrainAspectSetParamOnStopBehavior");
  }
  return;
}



// FUNCTION 147f1cd28 FUN_147f1cd28 body=232 status=ok
// SIG undefined FUN_147f1cd28(void)

void FUN_147f1cd28(undefined8 param_1,longlong param_2)

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
  FUN_14387f092(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1ce12 FUN_147f1ce12 body=230 status=ok
// SIG undefined FUN_147f1ce12(void)

void FUN_147f1ce12(undefined8 param_1,longlong param_2)

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
  FUN_14387f2a4(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1cefa FUN_147f1cefa body=148 status=ok
// SIG undefined FUN_147f1cefa(void)

void FUN_147f1cefa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14387f43c(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1cf90 FUN_147f1cf90 body=464 status=ok
// SIG undefined FUN_147f1cf90(void)

void FUN_147f1cf90(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0;
  lStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_58 = lStack_38;
  if ((lStack_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  puVar2 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147f56c46(local_20,local_28,puVar2,&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1d162 FUN_147f1d162 body=464 status=ok
// SIG undefined FUN_147f1d162(void)

void FUN_147f1d162(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0;
  lStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_58 = lStack_38;
  if ((lStack_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  puVar2 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147f56ee2(local_20,local_28,puVar2,&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1d334 FUN_147f1d334 body=230 status=ok
// SIG undefined FUN_147f1d334(void)

void FUN_147f1d334(undefined8 param_1,longlong param_2)

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
  FUN_14387f10c(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1d41c FUN_147f1d41c body=508 status=ok
// SIG undefined FUN_147f1d41c(void)

void FUN_147f1d41c(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
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
    FUN_14689c22e();
  }
  puVar2 = &local_39;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_88 = local_28;
  local_98 = local_38;
  uStack_94 = uStack_34;
  uStack_90 = uStack_30;
  uStack_8c = uStack_2c;
  FUN_147f5717e(local_20,&local_98,puVar2,&local_78);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1d61a FUN_147f1d61a body=148 status=ok
// SIG undefined FUN_147f1d61a(void)

void FUN_147f1d61a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14387f4a8(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1d6bc FUN_147f1d6bc body=413 status=ok
// SIG undefined FUN_147f1d6bc(void)

void FUN_147f1d6bc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407ca566(local_20,local_28,iVar1 != 0,local_30 != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1d85a FUN_147f1d85a body=230 status=ok
// SIG undefined FUN_147f1d85a(void)

void FUN_147f1d85a(undefined8 param_1,longlong param_2)

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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14387eff0(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f1d974 FUN_147f1d974 body=63 status=ok
// SIG undefined FUN_147f1d974(void)

undefined1 FUN_147f1d974(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1da9e(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 147f1d9dc FUN_147f1d9dc body=59 status=ok
// SIG undefined FUN_147f1d9dc(void)

undefined8 FUN_147f1d9dc(longlong *param_1)

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



// FUNCTION 147f1da28 FUN_147f1da28 body=40 status=ok
// SIG undefined FUN_147f1da28(void)

void FUN_147f1da28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145851b84(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 147f1da9e FUN_147f1da9e body=132 status=ok
// SIG undefined FUN_147f1da9e(void)

longlong FUN_147f1da9e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_2 + 0xf0);
  return param_1;
}



// FUNCTION 147f1db24 FUN_147f1db24 body=42 status=ok
// SIG undefined FUN_147f1db24(void)

void FUN_147f1db24(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac42ce0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f1db72 FUN_147f1db72 body=63 status=ok
// SIG undefined FUN_147f1db72(void)

undefined1 FUN_147f1db72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1dcd6(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f1dbda FUN_147f1dbda body=59 status=ok
// SIG undefined FUN_147f1dbda(void)

undefined8 FUN_147f1dbda(longlong *param_1)

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



// FUNCTION 147f1dc26 FUN_147f1dc26 body=40 status=ok
// SIG undefined FUN_147f1dc26(void)

void FUN_147f1dc26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_145c1dafc(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f1dc9c FUN_147f1dc9c body=57 status=ok
// SIG undefined FUN_147f1dc9c(void)

void FUN_147f1dc9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21598 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21598 = FUN_140002ddd(FUN_146433843,uVar1,L"GbxBrainAspect_IsNavReachable");
  }
  return;
}



// FUNCTION 147f1dcd6 FUN_147f1dcd6 body=105 status=ok
// SIG undefined FUN_147f1dcd6(void)

longlong FUN_147f1dcd6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f186d8();
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  lVar4 = *(longlong *)(param_2 + 0xe0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  *(longlong *)(param_1 + 0xe0) = lVar4;
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



// FUNCTION 147f1dd94 FUN_147f1dd94 body=63 status=ok
// SIG undefined FUN_147f1dd94(void)

undefined1 FUN_147f1dd94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1de9e(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 147f1ddfc FUN_147f1ddfc body=59 status=ok
// SIG undefined FUN_147f1ddfc(void)

undefined8 FUN_147f1ddfc(longlong *param_1)

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



// FUNCTION 147f1de9e FUN_147f1de9e body=127 status=ok
// SIG undefined FUN_147f1de9e(void)

longlong FUN_147f1de9e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 147f1df1e FUN_147f1df1e body=79 status=ok
// SIG undefined FUN_147f1df1e(void)

void FUN_147f1df1e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *param_1 = &PTR_FUN_14ac47a10;
    FUN_144a2da94(param_1 + 0x11);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 147f1df6e FUN_147f1df6e body=82 status=ok
// SIG undefined FUN_147f1df6e(void)

undefined8 * FUN_147f1df6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac47a10;
  FUN_144a2da94(param_1 + 0x11);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1dfc0 FUN_147f1dfc0 body=55 status=ok
// SIG undefined FUN_147f1dfc0(void)

void FUN_147f1dfc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb215c8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb215c8 = FUN_140002ddd(FUN_146433903,uVar1,L"GbxBrainAspectSettings_IsOnTerrain");
  }
  return;
}



// FUNCTION 147f1dff8 FUN_147f1dff8 body=48 status=ok
// SIG undefined FUN_147f1dff8(void)

void FUN_147f1dff8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac43160;
  return;
}



// FUNCTION 147f1e028 FUN_147f1e028 body=32 status=ok
// SIG undefined FUN_147f1e028(void)

void FUN_147f1e028(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac43160;
  return;
}



// FUNCTION 147f1e06c FUN_147f1e06c body=63 status=ok
// SIG undefined FUN_147f1e06c(void)

undefined1 FUN_147f1e06c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 147f1e0d4 FUN_147f1e0d4 body=59 status=ok
// SIG undefined FUN_147f1e0d4(void)

undefined8 FUN_147f1e0d4(longlong *param_1)

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



// FUNCTION 147f1e120 FUN_147f1e120 body=38 status=ok
// SIG undefined FUN_147f1e120(void)

void FUN_147f1e120(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f1e194 FUN_147f1e194 body=38 status=ok
// SIG undefined FUN_147f1e194(void)

undefined8 FUN_147f1e194(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1e1ba FUN_147f1e1ba body=55 status=ok
// SIG undefined FUN_147f1e1ba(void)

void FUN_147f1e1ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb215e0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb215e0 = FUN_140002ddd(FUN_146433995,uVar1,L"GbxBrainAspect_IsOnTerrain");
  }
  return;
}



// FUNCTION 147f1e23e FUN_147f1e23e body=195 status=ok
// SIG undefined FUN_147f1e23e(void)

undefined8 FUN_147f1e23e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x7c + lVar10) = *(undefined1 *)(param_3 + 0x7c + lVar10);
      *(undefined4 *)(param_2 + 0x78 + lVar10) = *(undefined4 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x80 + lVar10) = *(undefined8 *)(param_3 + 0x80 + lVar10);
      *(undefined1 *)(param_2 + 0x88 + lVar10) = *(undefined1 *)(param_3 + 0x88 + lVar10);
      lVar10 = lVar10 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f1e32a FUN_147f1e32a body=59 status=ok
// SIG undefined FUN_147f1e32a(void)

undefined8 FUN_147f1e32a(longlong *param_1)

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



// FUNCTION 147f1e376 FUN_147f1e376 body=57 status=ok
// SIG undefined FUN_147f1e376(void)

void FUN_147f1e376(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 147f1e400 FUN_147f1e400 body=43 status=ok
// SIG undefined FUN_147f1e400(void)

void FUN_147f1e400(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac43540;
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 147f1e450 FUN_147f1e450 body=76 status=ok
// SIG undefined FUN_147f1e450(void)

undefined8 FUN_147f1e450(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f1e4c4 FUN_147f1e4c4 body=59 status=ok
// SIG undefined FUN_147f1e4c4(void)

undefined8 FUN_147f1e4c4(longlong *param_1)

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



// FUNCTION 147f1e510 FUN_147f1e510 body=38 status=ok
// SIG undefined FUN_147f1e510(void)

void FUN_147f1e510(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f1e5b6 FUN_147f1e5b6 body=63 status=ok
// SIG undefined FUN_147f1e5b6(void)

undefined1 FUN_147f1e5b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1e6de(param_2,param_3);
    param_3 = param_3 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return 1;
}



// FUNCTION 147f1e61e FUN_147f1e61e body=59 status=ok
// SIG undefined FUN_147f1e61e(void)

undefined8 FUN_147f1e61e(longlong *param_1)

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



// FUNCTION 147f1e66a FUN_147f1e66a body=38 status=ok
// SIG undefined FUN_147f1e66a(void)

void FUN_147f1e66a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_1413d1302(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 147f1e6de FUN_147f1e6de body=226 status=ok
// SIG undefined FUN_147f1e6de(void)

longlong FUN_147f1e6de(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_144983130(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
  FUN_144983130(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  FUN_144983130(param_1 + 0x148,param_2 + 0x148);
  *(undefined2 *)(param_1 + 0x180) = *(undefined2 *)(param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x182) = *(undefined1 *)(param_2 + 0x182);
  return param_1;
}



// FUNCTION 147f1e7c2 FUN_147f1e7c2 body=42 status=ok
// SIG undefined FUN_147f1e7c2(void)

void FUN_147f1e7c2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac43920;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f1e810 FUN_147f1e810 body=76 status=ok
// SIG undefined FUN_147f1e810(void)

undefined1 FUN_147f1e810(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f1e884 FUN_147f1e884 body=59 status=ok
// SIG undefined FUN_147f1e884(void)

undefined8 FUN_147f1e884(longlong *param_1)

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



// FUNCTION 147f1e8d0 FUN_147f1e8d0 body=38 status=ok
// SIG undefined FUN_147f1e8d0(void)

void FUN_147f1e8d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f1e944 FUN_147f1e944 body=57 status=ok
// SIG undefined FUN_147f1e944(void)

void FUN_147f1e944(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21640 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21640 = FUN_140002ddd(FUN_146433b35,uVar1,L"GbxBrainAspect_Loop");
  }
  return;
}



// FUNCTION 147f1e9ae FUN_147f1e9ae body=221 status=ok
// SIG undefined FUN_147f1e9ae(void)

undefined8 FUN_147f1e9ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(lVar2 + 0xb8);
      *(undefined1 *)(lVar1 + 0xbc) = *(undefined1 *)(lVar2 + 0xbc);
      lVar10 = lVar10 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f1eab4 FUN_147f1eab4 body=59 status=ok
// SIG undefined FUN_147f1eab4(void)

undefined8 FUN_147f1eab4(longlong *param_1)

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



// FUNCTION 147f1eb58 FUN_147f1eb58 body=79 status=ok
// SIG undefined FUN_147f1eb58(void)

void FUN_147f1eb58(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_14ac47b90;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147f1eba8 FUN_147f1eba8 body=42 status=ok
// SIG undefined FUN_147f1eba8(void)

void FUN_147f1eba8(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac43d00;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 147f1ebf6 FUN_147f1ebf6 body=74 status=ok
// SIG undefined FUN_147f1ebf6(void)

undefined8 FUN_147f1ebf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f1ec68 FUN_147f1ec68 body=59 status=ok
// SIG undefined FUN_147f1ec68(void)

undefined8 FUN_147f1ec68(longlong *param_1)

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



// FUNCTION 147f1ecb4 FUN_147f1ecb4 body=38 status=ok
// SIG undefined FUN_147f1ecb4(void)

void FUN_147f1ecb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f1ed2c FUN_147f1ed2c body=48 status=ok
// SIG undefined FUN_147f1ed2c(void)

void FUN_147f1ed2c(undefined8 param_1,undefined8 *param_2)

{
  FUN_141333e36(param_2);
  *param_2 = &PTR_FUN_14ac43f80;
  FUN_140785382(param_2 + 0x3d,10);
  return;
}



// FUNCTION 147f1ed84 FUN_147f1ed84 body=85 status=ok
// SIG undefined FUN_147f1ed84(void)

undefined1 FUN_147f1ed84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1ef36(param_2,param_3);
    FUN_144983130(param_2 + 0x1e8,param_3 + 0x1e8);
    param_2 = param_2 + 0x220;
    param_3 = param_3 + 0x220;
  }
  return 1;
}



// FUNCTION 147f1ee02 FUN_147f1ee02 body=59 status=ok
// SIG undefined FUN_147f1ee02(void)

undefined8 FUN_147f1ee02(longlong *param_1)

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



// FUNCTION 147f1ee4e FUN_147f1ee4e body=60 status=ok
// SIG undefined FUN_147f1ee4e(void)

void FUN_147f1ee4e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14ac43f80;
    FUN_144a2da94(param_2 + 0x3d);
    FUN_140d29fd0(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 147f1eed8 FUN_147f1eed8 body=38 status=ok
// SIG undefined FUN_147f1eed8(void)

undefined8 FUN_147f1eed8(undefined8 param_1,int param_2)

{
  FUN_140d29fd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1eefe FUN_147f1eefe body=55 status=ok
// SIG undefined FUN_147f1eefe(void)

void FUN_147f1eefe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21718 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21718 = FUN_140002ddd(FUN_146433caa,uVar1,L"GbxBrainAspectSettings_Navigation");
  }
  return;
}



// FUNCTION 147f1ef36 FUN_147f1ef36 body=249 status=ok
// SIG undefined FUN_147f1ef36(void)

longlong FUN_147f1ef36(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  if (param_2 != param_1) {
    FUN_147f1f030(param_1 + 0x80,param_2 + 0x80);
  }
  FUN_144955a78(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  FUN_144983130(param_1 + 0x120,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  FUN_144983130(param_1 + 0x160,param_2 + 0x160);
  uVar1 = *(undefined8 *)(param_2 + 0x19d);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x19d) = uVar1;
  FUN_144983130(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x1e0) = *(undefined2 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 147f1f030 FUN_147f1f030 body=304 status=ok
// SIG undefined FUN_147f1f030(void)

void FUN_147f1f030(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147f1f162 FUN_147f1f162 body=79 status=ok
// SIG undefined FUN_147f1f162(void)

void FUN_147f1f162(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *param_2 = &PTR_FUN_14ac44180;
  return;
}



// FUNCTION 147f1f1d6 FUN_147f1f1d6 body=63 status=ok
// SIG undefined FUN_147f1f1d6(void)

undefined1 FUN_147f1f1d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1f36a(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147f1f23e FUN_147f1f23e body=59 status=ok
// SIG undefined FUN_147f1f23e(void)

undefined8 FUN_147f1f23e(longlong *param_1)

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



// FUNCTION 147f1f28a FUN_147f1f28a body=38 status=ok
// SIG undefined FUN_147f1f28a(void)

void FUN_147f1f28a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_14180bfea(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 147f1f2fe FUN_147f1f2fe body=38 status=ok
// SIG undefined FUN_147f1f2fe(void)

undefined8 FUN_147f1f2fe(undefined8 param_1,int param_2)

{
  FUN_14180bfea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1f324 FUN_147f1f324 body=55 status=ok
// SIG undefined FUN_147f1f324(void)

void FUN_147f1f324(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21730 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21730 = FUN_140002ddd(FUN_146433d36,uVar1,L"GbxBrainAspect_Navigation");
  }
  return;
}



// FUNCTION 147f1f36a FUN_147f1f36a body=269 status=ok
// SIG undefined FUN_147f1f36a(void)

longlong FUN_147f1f36a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f186d8();
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  lVar4 = *(longlong *)(param_2 + 0xe0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  *(longlong *)(param_1 + 0xe0) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  lVar4 = *(longlong *)(param_2 + 0xf0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(longlong *)(param_1 + 0xf0) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  lVar4 = *(longlong *)(param_2 + 0x110);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  *(longlong *)(param_1 + 0x110) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  return param_1;
}



// FUNCTION 147f1f478 FUN_147f1f478 body=69 status=ok
// SIG undefined FUN_147f1f478(void)

void FUN_147f1f478(undefined8 param_1,undefined8 *param_2)

{
  FUN_141333e36(param_2);
  *param_2 = &PTR_FUN_14ac44560;
  param_2[0x3d] = 0;
  FUN_14112fbd2(param_2 + 0x3e);
  param_2[0x8b] = 0;
  *(undefined1 *)(param_2 + 0x8c) = 0;
  return;
}



// FUNCTION 147f1f4e6 FUN_147f1f4e6 body=97 status=ok
// SIG undefined FUN_147f1f4e6(void)

undefined1 FUN_147f1f4e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1ef36(param_2,param_3);
    FUN_14054d68c(param_2 + 0x1e8,param_3 + 0x1e8);
    *(undefined1 *)(param_2 + 0x460) = *(undefined1 *)(param_3 + 0x460);
    param_2 = param_2 + 0x468;
    param_3 = param_3 + 0x468;
  }
  return 1;
}



// FUNCTION 147f1f570 FUN_147f1f570 body=59 status=ok
// SIG undefined FUN_147f1f570(void)

undefined8 FUN_147f1f570(longlong *param_1)

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



// FUNCTION 147f1f5bc FUN_147f1f5bc body=71 status=ok
// SIG undefined FUN_147f1f5bc(void)

void FUN_147f1f5bc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x8d) == '\x01') {
    *param_2 = &PTR_FUN_14ac44560;
    param_2[0x3d] = 0;
    FUN_14076ba36(param_2 + 0x3e);
    FUN_140d29fd0(param_2);
    *(undefined1 *)(param_2 + 0x8d) = 0;
  }
  return;
}



// FUNCTION 147f1f65c FUN_147f1f65c body=93 status=ok
// SIG undefined FUN_147f1f65c(void)

void FUN_147f1f65c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *param_2 = &PTR_FUN_14ac44760;
  FUN_143860306(param_2 + 0x24);
  return;
}



// FUNCTION 147f1f6de FUN_147f1f6de body=85 status=ok
// SIG undefined FUN_147f1f6de(void)

undefined1 FUN_147f1f6de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1f36a(param_2,param_3);
    FUN_147f1b59c(param_2 + 0x120,param_3 + 0x120);
    param_2 = param_2 + 600;
    param_3 = param_3 + 600;
  }
  return 1;
}



// FUNCTION 147f1f75c FUN_147f1f75c body=59 status=ok
// SIG undefined FUN_147f1f75c(void)

undefined8 FUN_147f1f75c(longlong *param_1)

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



// FUNCTION 147f1f7a8 FUN_147f1f7a8 body=60 status=ok
// SIG undefined FUN_147f1f7a8(void)

void FUN_147f1f7a8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4b) == '\x01') {
    *param_2 = &PTR_FUN_14ac44760;
    FUN_140cabc42(param_2 + 0x24);
    FUN_14180bfea(param_2);
    *(undefined1 *)(param_2 + 0x4b) = 0;
  }
  return;
}



// FUNCTION 147f1f834 FUN_147f1f834 body=37 status=ok
// SIG undefined FUN_147f1f834(void)

void FUN_147f1f834(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_141333e36(param_2);
  return;
}



// FUNCTION 147f1f8a6 FUN_147f1f8a6 body=63 status=ok
// SIG undefined FUN_147f1f8a6(void)

undefined1 FUN_147f1f8a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1ef36(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 147f1f90e FUN_147f1f90e body=59 status=ok
// SIG undefined FUN_147f1f90e(void)

undefined8 FUN_147f1f90e(longlong *param_1)

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



// FUNCTION 147f1f95a FUN_147f1f95a body=38 status=ok
// SIG undefined FUN_147f1f95a(void)

void FUN_147f1f95a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_140d29fd0(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 147f1f9d0 FUN_147f1f9d0 body=97 status=ok
// SIG undefined FUN_147f1f9d0(void)

void FUN_147f1f9d0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x120);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac442c0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 147f1fa32 FUN_147f1fa32 body=79 status=ok
// SIG undefined FUN_147f1fa32(void)

void FUN_147f1fa32(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac442c0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 147f1faa6 FUN_147f1faa6 body=63 status=ok
// SIG undefined FUN_147f1faa6(void)

undefined1 FUN_147f1faa6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1f36a(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147f1fb0e FUN_147f1fb0e body=59 status=ok
// SIG undefined FUN_147f1fb0e(void)

undefined8 FUN_147f1fb0e(longlong *param_1)

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



// FUNCTION 147f1fb5a FUN_147f1fb5a body=38 status=ok
// SIG undefined FUN_147f1fb5a(void)

void FUN_147f1fb5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_14180bfea(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 147f1fc00 FUN_147f1fc00 body=206 status=ok
// SIG undefined FUN_147f1fc00(void)

undefined8 FUN_147f1fc00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
      lVar10 = lVar10 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f1fcf6 FUN_147f1fcf6 body=59 status=ok
// SIG undefined FUN_147f1fcf6(void)

undefined8 FUN_147f1fcf6(longlong *param_1)

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



// FUNCTION 147f1fd9a FUN_147f1fd9a body=79 status=ok
// SIG undefined FUN_147f1fd9a(void)

void FUN_147f1fd9a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_14ac44de0;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147f1fdea FUN_147f1fdea body=73 status=ok
// SIG undefined FUN_147f1fdea(void)

void FUN_147f1fdea(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac45000;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x1d] = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  return;
}



// FUNCTION 147f1fe34 FUN_147f1fe34 body=55 status=ok
// SIG undefined FUN_147f1fe34(void)

void FUN_147f1fe34(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac45000;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x1d] = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  return;
}



// FUNCTION 147f1fe90 FUN_147f1fe90 body=90 status=ok
// SIG undefined FUN_147f1fe90(void)

undefined8 FUN_147f1fe90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_3 + 0xe8);
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + 0xf0;
  }
  return 1;
}



// FUNCTION 147f1ff12 FUN_147f1ff12 body=59 status=ok
// SIG undefined FUN_147f1ff12(void)

undefined8 FUN_147f1ff12(longlong *param_1)

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



// FUNCTION 147f1ff5e FUN_147f1ff5e body=38 status=ok
// SIG undefined FUN_147f1ff5e(void)

void FUN_147f1ff5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147f1ffd2 FUN_147f1ffd2 body=38 status=ok
// SIG undefined FUN_147f1ffd2(void)

undefined8 FUN_147f1ffd2(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f1fff8 FUN_147f1fff8 body=55 status=ok
// SIG undefined FUN_147f1fff8(void)

void FUN_147f1fff8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21760 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21760 = FUN_140002ddd(FUN_146433fff,uVar1,L"GbxBrainAspect_NavLink");
  }
  return;
}



// FUNCTION 147f2005e FUN_147f2005e body=63 status=ok
// SIG undefined FUN_147f2005e(void)

undefined1 FUN_147f2005e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141490570(param_2,param_3);
    param_3 = param_3 + 0x250;
    param_2 = param_2 + 0x250;
  }
  return 1;
}



// FUNCTION 147f200c6 FUN_147f200c6 body=59 status=ok
// SIG undefined FUN_147f200c6(void)

undefined8 FUN_147f200c6(longlong *param_1)

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



// FUNCTION 147f20112 FUN_147f20112 body=38 status=ok
// SIG undefined FUN_147f20112(void)

void FUN_147f20112(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_140fb9bfe(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 147f201d4 FUN_147f201d4 body=85 status=ok
// SIG undefined FUN_147f201d4(void)

undefined1 FUN_147f201d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f1ef36(param_2,param_3);
    FUN_141490570(param_2 + 0x1e8,param_3 + 0x1e8);
    param_2 = param_2 + 0x438;
    param_3 = param_3 + 0x438;
  }
  return 1;
}



// FUNCTION 147f20252 FUN_147f20252 body=59 status=ok
// SIG undefined FUN_147f20252(void)

undefined8 FUN_147f20252(longlong *param_1)

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



// FUNCTION 147f2029e FUN_147f2029e body=60 status=ok
// SIG undefined FUN_147f2029e(void)

void FUN_147f2029e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x87) == '\x01') {
    *param_2 = &PTR_FUN_14ac47c30;
    FUN_140fb9bfe(param_2 + 0x3d);
    FUN_140d29fd0(param_2);
    *(undefined1 *)(param_2 + 0x87) = 0;
  }
  return;
}



// FUNCTION 147f20356 FUN_147f20356 body=63 status=ok
// SIG undefined FUN_147f20356(void)

undefined1 FUN_147f20356(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1438618e0(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 147f203be FUN_147f203be body=59 status=ok
// SIG undefined FUN_147f203be(void)

undefined8 FUN_147f203be(longlong *param_1)

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



// FUNCTION 147f205a4 FUN_147f205a4 body=63 status=ok
// SIG undefined FUN_147f205a4(void)

undefined1 FUN_147f205a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f206cc(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 147f2060c FUN_147f2060c body=59 status=ok
// SIG undefined FUN_147f2060c(void)

undefined8 FUN_147f2060c(longlong *param_1)

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



// FUNCTION 147f20658 FUN_147f20658 body=38 status=ok
// SIG undefined FUN_147f20658(void)

void FUN_147f20658(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_140f4672c(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 147f206cc FUN_147f206cc body=147 status=ok
// SIG undefined FUN_147f206cc(void)

longlong FUN_147f206cc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  return param_1;
}



// FUNCTION 147f20760 FUN_147f20760 body=49 status=ok
// SIG undefined FUN_147f20760(void)

void FUN_147f20760(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac459e0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 147f207b6 FUN_147f207b6 body=90 status=ok
// SIG undefined FUN_147f207b6(void)

undefined1 FUN_147f207b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    uVar4 = *(undefined4 *)(param_3 + 0xe8);
    uVar5 = *(undefined4 *)(param_3 + 0xec);
    uVar6 = *(undefined4 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar6;
    *(undefined4 *)(param_2 + 0xf4) = uVar7;
    param_2 = param_2 + 0xf8;
    param_3 = param_3 + 0xf8;
  }
  return 1;
}



// FUNCTION 147f20838 FUN_147f20838 body=59 status=ok
// SIG undefined FUN_147f20838(void)

undefined8 FUN_147f20838(longlong *param_1)

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



// FUNCTION 147f20884 FUN_147f20884 body=38 status=ok
// SIG undefined FUN_147f20884(void)

void FUN_147f20884(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 147f208fa FUN_147f208fa body=97 status=ok
// SIG undefined FUN_147f208fa(void)

void FUN_147f208fa(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xe] = 0;
  FUN_14044066a(param_2,1,0);
  *(undefined4 *)(param_2 + 7) = 0;
  FUN_140440628(param_2 + 8,&DAT_14cb23ee8,0);
  return;
}



// FUNCTION 147f2095c FUN_147f2095c body=57 status=ok
// SIG undefined FUN_147f2095c(void)

void FUN_147f2095c(undefined8 param_1,longlong param_2)

{
  FUN_14044066a(param_2,1,0);
  *(undefined4 *)(param_2 + 0x38) = 0;
  FUN_140440628(param_2 + 0x40,&DAT_14cb23ee8,0);
  return;
}



// FUNCTION 147f20996 FUN_147f20996 body=30 status=ok
// SIG undefined FUN_147f20996(void)

void FUN_147f20996(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x40);
  FUN_144a2da94(param_2);
  return;
}



// FUNCTION 147f209ca FUN_147f209ca body=73 status=ok
// SIG undefined FUN_147f209ca(void)

undefined8 FUN_147f209ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    FUN_144983130(param_2 + 0x40,param_3 + 0x40);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 147f20a3c FUN_147f20a3c body=59 status=ok
// SIG undefined FUN_147f20a3c(void)

undefined8 FUN_147f20a3c(longlong *param_1)

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



// FUNCTION 147f20a82 FUN_147f20a82 body=41 status=ok
// SIG undefined FUN_147f20a82(void)

void FUN_147f20a82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_144a2da94(param_2 + 0x40);
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147f20b2c FUN_147f20b2c body=63 status=ok
// SIG undefined FUN_147f20b2c(void)

undefined1 FUN_147f20b2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f20c56(param_2,param_3);
    param_3 = param_3 + 0x1f8;
    param_2 = param_2 + 0x1f8;
  }
  return 1;
}



// FUNCTION 147f20b94 FUN_147f20b94 body=59 status=ok
// SIG undefined FUN_147f20b94(void)

undefined8 FUN_147f20b94(longlong *param_1)

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



// FUNCTION 147f20be0 FUN_147f20be0 body=40 status=ok
// SIG undefined FUN_147f20be0(void)

void FUN_147f20be0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    FUN_145852782(param_2);
    *(undefined1 *)(param_2 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 147f20c56 FUN_147f20c56 body=251 status=ok
// SIG undefined FUN_147f20c56(void)

longlong FUN_147f20c56(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_144983130(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  FUN_144983130(param_1 + 0x100,param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  FUN_144983130(param_1 + 0x140,param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  FUN_144983130(param_1 + 0x180,param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  FUN_144983130(param_1 + 0x1c0,param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 147f20d52 FUN_147f20d52 body=48 status=ok
// SIG undefined FUN_147f20d52(void)

void FUN_147f20d52(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac46220;
  *(undefined2 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 147f20da6 FUN_147f20da6 body=63 status=ok
// SIG undefined FUN_147f20da6(void)

undefined1 FUN_147f20da6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f20f40(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147f20e0e FUN_147f20e0e body=59 status=ok
// SIG undefined FUN_147f20e0e(void)

undefined8 FUN_147f20e0e(longlong *param_1)

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



// FUNCTION 147f20e5a FUN_147f20e5a body=38 status=ok
// SIG undefined FUN_147f20e5a(void)

void FUN_147f20e5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_147f20ece(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f20ece FUN_147f20ece body=114 status=ok
// SIG undefined FUN_147f20ece(void)

void FUN_147f20ece(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac46220;
  plVar1 = param_1 + 0x1b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1e)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14049e650(param_1);
  return;
}



// FUNCTION 147f20f40 FUN_147f20f40 body=335 status=ok
// SIG undefined FUN_147f20f40(void)

longlong FUN_147f20f40(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *_Dst;
  undefined8 *_Src;
  
  FUN_147f186d8();
  _Dst = (longlong *)(param_1 + 0xd8);
  _Src = (undefined8 *)(param_2 + 0xd8);
  bVar1 = *(byte *)(param_1 + 0xf8);
  if (bVar1 == *(byte *)(param_2 + 0xf8)) {
    if (0x18 < *(ushort *)(param_2 + 0xf0)) {
      _Src = *(undefined8 **)(param_2 + 0xd8);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf0)) {
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
      if (0x18 < *(ushort *)(param_1 + 0xf0)) {
        plVar5 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar5);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf0)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0xf8);
    uVar2 = *(ushort *)(param_2 + 0xf0);
    *(ushort *)(param_1 + 0xf0) = uVar2;
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
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  }
  return param_1;
}



// FUNCTION 147f210c0 FUN_147f210c0 body=63 status=ok
// SIG undefined FUN_147f210c0(void)

undefined1 FUN_147f210c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f211fc(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 147f21128 FUN_147f21128 body=59 status=ok
// SIG undefined FUN_147f21128(void)

undefined8 FUN_147f21128(longlong *param_1)

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



// FUNCTION 147f21174 FUN_147f21174 body=57 status=ok
// SIG undefined FUN_147f21174(void)

void FUN_147f21174(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 147f211fc FUN_147f211fc body=144 status=ok
// SIG undefined FUN_147f211fc(void)

longlong FUN_147f211fc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  if ((*(longlong *)(param_1 + 0x80) != *(longlong *)(param_2 + 0x80)) ||
     (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88))) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return param_1;
}



// FUNCTION 147f2128e FUN_147f2128e body=42 status=ok
// SIG undefined FUN_147f2128e(void)

void FUN_147f2128e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac46600;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 147f212dc FUN_147f212dc body=76 status=ok
// SIG undefined FUN_147f212dc(void)

undefined1 FUN_147f212dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    param_2 = param_2 + 0xe8;
    param_3 = param_3 + 0xe8;
  }
  return 1;
}



// FUNCTION 147f21350 FUN_147f21350 body=59 status=ok
// SIG undefined FUN_147f21350(void)

undefined8 FUN_147f21350(longlong *param_1)

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



// FUNCTION 147f2139c FUN_147f2139c body=38 status=ok
// SIG undefined FUN_147f2139c(void)

void FUN_147f2139c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 147f2145e FUN_147f2145e body=191 status=ok
// SIG undefined FUN_147f2145e(void)

undefined8 FUN_147f2145e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f21546 FUN_147f21546 body=59 status=ok
// SIG undefined FUN_147f21546(void)

undefined8 FUN_147f21546(longlong *param_1)

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



// FUNCTION 147f215ea FUN_147f215ea body=79 status=ok
// SIG undefined FUN_147f215ea(void)

void FUN_147f215ea(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *param_1 = &PTR_FUN_14ac47e10;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}



// FUNCTION 147f2163a FUN_147f2163a body=32 status=ok
// SIG undefined FUN_147f2163a(void)

void FUN_147f2163a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac469e0;
  return;
}



// FUNCTION 147f2167e FUN_147f2167e body=63 status=ok
// SIG undefined FUN_147f2167e(void)

undefined1 FUN_147f2167e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 147f216e6 FUN_147f216e6 body=59 status=ok
// SIG undefined FUN_147f216e6(void)

undefined8 FUN_147f216e6(longlong *param_1)

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



// FUNCTION 147f21732 FUN_147f21732 body=38 status=ok
// SIG undefined FUN_147f21732(void)

void FUN_147f21732(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f217d8 FUN_147f217d8 body=63 status=ok
// SIG undefined FUN_147f217d8(void)

undefined1 FUN_147f217d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f21a40(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 147f21840 FUN_147f21840 body=59 status=ok
// SIG undefined FUN_147f21840(void)

undefined8 FUN_147f21840(longlong *param_1)

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



// FUNCTION 147f2188c FUN_147f2188c body=38 status=ok
// SIG undefined FUN_147f2188c(void)

void FUN_147f2188c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x178) == '\x01') {
    FUN_140df8d8e(param_2);
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 147f21900 FUN_147f21900 body=319 status=ok
// SIG undefined FUN_147f21900(void)

undefined8 * FUN_147f21900(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14ac46c60;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x16) = 3;
  *(char *)(param_1 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 4;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 3;
  *(char *)(param_1 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 4;
  *(undefined4 *)(param_1 + 0x29) = 10;
  *(undefined1 *)(param_1 + 0x2d) = 2;
  *(byte *)(param_1 + 0x2e) = (byte)~DAT_14c9a8754 >> 4 & 2;
  return param_1;
}



// FUNCTION 147f21a40 FUN_147f21a40 body=133 status=ok
// SIG undefined FUN_147f21a40(void)

longlong FUN_147f21a40(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_141689bc8(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  FUN_144983130(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 147f21ac6 FUN_147f21ac6 body=42 status=ok
// SIG undefined FUN_147f21ac6(void)

void FUN_147f21ac6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac46e60;
  *(undefined4 *)(param_2 + 0x1b) = 0x7f7fffff;
  return;
}



// FUNCTION 147f21b14 FUN_147f21b14 body=78 status=ok
// SIG undefined FUN_147f21b14(void)

undefined1 FUN_147f21b14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 147f21b8a FUN_147f21b8a body=59 status=ok
// SIG undefined FUN_147f21b8a(void)

undefined8 FUN_147f21b8a(longlong *param_1)

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



// FUNCTION 147f21bd6 FUN_147f21bd6 body=38 status=ok
// SIG undefined FUN_147f21bd6(void)

void FUN_147f21bd6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f21c7c FUN_147f21c7c body=63 status=ok
// SIG undefined FUN_147f21c7c(void)

undefined1 FUN_147f21c7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f21da4(param_2,param_3);
    param_3 = param_3 + 0x340;
    param_2 = param_2 + 0x340;
  }
  return 1;
}



// FUNCTION 147f21ce4 FUN_147f21ce4 body=59 status=ok
// SIG undefined FUN_147f21ce4(void)

undefined8 FUN_147f21ce4(longlong *param_1)

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



// FUNCTION 147f21d30 FUN_147f21d30 body=38 status=ok
// SIG undefined FUN_147f21d30(void)

void FUN_147f21d30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x340) == '\x01') {
    FUN_140d6e310(param_2);
    *(undefined1 *)(param_2 + 0x340) = 0;
  }
  return;
}



// FUNCTION 147f21da4 FUN_147f21da4 body=403 status=ok
// SIG undefined FUN_147f21da4(void)

longlong FUN_147f21da4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  FUN_144983130(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  FUN_144983130(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  FUN_144983130(param_1 + 0x140,param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
  FUN_144983130(param_1 + 0x180,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
  FUN_144983130(param_1 + 0x1c0,param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
  FUN_144983130(param_1 + 0x200,param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x238) = *(undefined1 *)(param_2 + 0x238);
  FUN_144983130(param_1 + 0x240,param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  FUN_144983130(param_1 + 0x280,param_2 + 0x280);
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 0x2b8);
  FUN_144983130(param_1 + 0x2c0,param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
  FUN_144983130(param_1 + 0x300,param_2 + 0x300);
  *(undefined1 *)(param_1 + 0x338) = *(undefined1 *)(param_2 + 0x338);
  return param_1;
}



// FUNCTION 147f21f38 FUN_147f21f38 body=94 status=ok
// SIG undefined FUN_147f21f38(void)

void FUN_147f21f38(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac47240;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0xbf800000bf800000;
  *(undefined1 *)((longlong)param_2 + 0xf4) = 0;
  param_2[0x1f] = 0;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 147f21fba FUN_147f21fba body=104 status=ok
// SIG undefined FUN_147f21fba(void)

undefined1 FUN_147f21fba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    uVar4 = *(undefined4 *)(param_3 + 0xe8);
    uVar5 = *(undefined4 *)(param_3 + 0xec);
    uVar6 = *(undefined4 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf4);
    uVar8 = *(undefined4 *)(param_3 + 0xf1);
    uVar9 = *(undefined4 *)(param_3 + 0xf5);
    uVar10 = *(undefined4 *)(param_3 + 0xf9);
    uVar11 = *(undefined4 *)(param_3 + 0xfd);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar6;
    *(undefined4 *)(param_2 + 0xf4) = uVar7;
    *(undefined4 *)(param_2 + 0xf1) = uVar8;
    *(undefined4 *)(param_2 + 0xf5) = uVar9;
    *(undefined4 *)(param_2 + 0xf9) = uVar10;
    *(undefined4 *)(param_2 + 0xfd) = uVar11;
    param_2 = param_2 + 0x108;
    param_3 = param_3 + 0x108;
  }
  return 1;
}



// FUNCTION 147f2204a FUN_147f2204a body=59 status=ok
// SIG undefined FUN_147f2204a(void)

undefined8 FUN_147f2204a(longlong *param_1)

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



// FUNCTION 147f22096 FUN_147f22096 body=38 status=ok
// SIG undefined FUN_147f22096(void)

void FUN_147f22096(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 147f2213e FUN_147f2213e body=63 status=ok
// SIG undefined FUN_147f2213e(void)

undefined1 FUN_147f2213e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f22268(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 147f221a6 FUN_147f221a6 body=59 status=ok
// SIG undefined FUN_147f221a6(void)

undefined8 FUN_147f221a6(longlong *param_1)

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



// FUNCTION 147f221f2 FUN_147f221f2 body=40 status=ok
// SIG undefined FUN_147f221f2(void)

void FUN_147f221f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_1458391a8(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 147f22268 FUN_147f22268 body=172 status=ok
// SIG undefined FUN_147f22268(void)

longlong FUN_147f22268(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
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
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  FUN_141459e2c(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144983130(param_1 + 0x200,param_2 + 0x200);
  FUN_144983130(param_1 + 0x238,param_2 + 0x238);
  return param_1;
}



// FUNCTION 147f22316 FUN_147f22316 body=59 status=ok
// SIG undefined FUN_147f22316(void)

void FUN_147f22316(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14ac476d0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 147f22376 FUN_147f22376 body=102 status=ok
// SIG undefined FUN_147f22376(void)

undefined8 FUN_147f22376(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    uVar4 = *(undefined4 *)(param_3 + 0xe8);
    uVar5 = *(undefined4 *)(param_3 + 0xec);
    uVar6 = *(undefined4 *)(param_3 + 0xf0);
    uVar7 = *(undefined4 *)(param_3 + 0xf4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined4 *)(param_2 + 0xe8) = uVar4;
    *(undefined4 *)(param_2 + 0xec) = uVar5;
    *(undefined4 *)(param_2 + 0xf0) = uVar6;
    *(undefined4 *)(param_2 + 0xf4) = uVar7;
    *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_3 + 0xf8);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 147f22404 FUN_147f22404 body=59 status=ok
// SIG undefined FUN_147f22404(void)

undefined8 FUN_147f22404(longlong *param_1)

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



// FUNCTION 147f22450 FUN_147f22450 body=38 status=ok
// SIG undefined FUN_147f22450(void)

void FUN_147f22450(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f22586 FUN_147f22586 body=105 status=ok
// SIG undefined FUN_147f22586(void)

undefined8 FUN_147f22586(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_147f22736(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f22618 FUN_147f22618 body=59 status=ok
// SIG undefined FUN_147f22618(void)

undefined8 FUN_147f22618(longlong *param_1)

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



// FUNCTION 147f22664 FUN_147f22664 body=38 status=ok
// SIG undefined FUN_147f22664(void)

void FUN_147f22664(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1408206ec(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f226d8 FUN_147f226d8 body=38 status=ok
// SIG undefined FUN_147f226d8(void)

undefined8 FUN_147f226d8(undefined8 param_1,int param_2)

{
  FUN_1408206ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f226fe FUN_147f226fe body=55 status=ok
// SIG undefined FUN_147f226fe(void)

void FUN_147f226fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb219a0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb219a0 = FUN_140002ddd(FUN_14643487d,uVar1,L"GbxBrainDef");
  }
  return;
}



// FUNCTION 147f22736 FUN_147f22736 body=122 status=ok
// SIG undefined FUN_147f22736(void)

longlong FUN_147f22736(longlong param_1,longlong param_2)

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
    FUN_147f227b0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147f227b0 FUN_147f227b0 body=211 status=ok
// SIG undefined FUN_147f227b0(void)

undefined8 * FUN_147f227b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140820778(param_1,(ulonglong)uVar1);
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
          FUN_147f22884(puVar6,puVar4);
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



// FUNCTION 147f22884 FUN_147f22884 body=114 status=ok
// SIG undefined FUN_147f22884(void)

undefined8 * FUN_147f22884(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 147f22929 FUN_147f22929 body=55 status=ok
// SIG undefined FUN_147f22929(void)

void FUN_147f22929(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21b70 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21b70 = FUN_14171c317(FUN_1464357c0,uVar1,L"EGbxBrainTaskState");
  }
  return;
}



// FUNCTION 147f22960 FUN_147f22960 body=55 status=ok
// SIG undefined FUN_147f22960(void)

void FUN_147f22960(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21b88 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21b88 = FUN_14171c317(FUN_1464357ef,uVar1,L"EGbxBrainTaskExecutionStage");
  }
  return;
}



// FUNCTION 147f22997 FUN_147f22997 body=55 status=ok
// SIG undefined FUN_147f22997(void)

void FUN_147f22997(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21ba0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21ba0 = FUN_14171c317(FUN_14643581e,uVar1,L"EGbxBrainTaskCanStartResult");
  }
  return;
}



// FUNCTION 147f229ce FUN_147f229ce body=55 status=ok
// SIG undefined FUN_147f229ce(void)

void FUN_147f229ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21bb8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21bb8 = FUN_14171c317(FUN_14643584d,uVar1,L"EGbxBrainTaskResult");
  }
  return;
}



// FUNCTION 147f22a66 FUN_147f22a66 body=42 status=ok
// SIG undefined FUN_147f22a66(void)

void FUN_147f22a66(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x5d8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147f22b08 FUN_147f22b08 body=45 status=ok
// SIG undefined FUN_147f22b08(void)

longlong FUN_147f22b08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f22b36 FUN_147f22b36 body=45 status=ok
// SIG undefined FUN_147f22b36(void)

longlong FUN_147f22b36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f22b6a FUN_147f22b6a body=45 status=ok
// SIG undefined FUN_147f22b6a(void)

longlong FUN_147f22b6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f22b98 FUN_147f22b98 body=45 status=ok
// SIG undefined FUN_147f22b98(void)

longlong FUN_147f22b98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f22bc6 FUN_147f22bc6 body=45 status=ok
// SIG undefined FUN_147f22bc6(void)

longlong FUN_147f22bc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bccac6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


