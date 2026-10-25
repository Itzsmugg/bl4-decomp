// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486d7de6 FUN_1486d7de6 body=111 status=ok
// SIG undefined FUN_1486d7de6(void)

void FUN_1486d7de6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b1c0740;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined2 *)(param_2 + 0x19) = 0;
  return;
}



// FUNCTION 1486d7ee0 FUN_1486d7ee0 body=63 status=ok
// SIG undefined FUN_1486d7ee0(void)

undefined1 FUN_1486d7ee0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d8066(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 1486d7f48 FUN_1486d7f48 body=59 status=ok
// SIG undefined FUN_1486d7f48(void)

undefined8 FUN_1486d7f48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d7f94 FUN_1486d7f94 body=38 status=ok
// SIG undefined FUN_1486d7f94(void)

void FUN_1486d7f94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_143c5ecd2(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1486d8008 FUN_1486d8008 body=38 status=ok
// SIG undefined FUN_1486d8008(void)

undefined8 FUN_1486d8008(undefined8 param_1,int param_2)

{
  FUN_143c5ecd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d802e FUN_1486d802e body=55 status=ok
// SIG undefined FUN_1486d802e(void)

void FUN_1486d802e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61158 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61158 = FUN_140002ddd(FUN_1464f150d,uVar1,L"GbxMomentNodeState_UsePerch");
  }
  return;
}



// FUNCTION 1486d8066 FUN_1486d8066 body=380 status=ok
// SIG undefined FUN_1486d8066(void)

longlong FUN_1486d8066(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *_Src;
  longlong *_Dst;
  
  FUN_1486c86fa();
  _Dst = (longlong *)(param_1 + 0x70);
  _Src = (undefined8 *)(param_2 + 0x70);
  bVar1 = *(byte *)(param_1 + 0x90);
  if (bVar1 == *(byte *)(param_2 + 0x90)) {
    if (0x18 < *(ushort *)(param_2 + 0x88)) {
      _Src = *(undefined8 **)(param_2 + 0x70);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar9 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar9);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar10 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x88)) {
        plVar10 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar10);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0x90);
    uVar2 = *(ushort *)(param_2 + 0x88);
    *(ushort *)(param_1 + 0x88) = uVar2;
    plVar10 = _Dst;
    if (0x18 < uVar2) {
      plVar10 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar10;
      _Src = (undefined8 *)*_Src;
    }
    uVar9 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar10,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
    }
    else {
      (*pcVar3)(plVar10,_Src);
    }
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  }
  *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  uVar8 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  return param_1;
}



// FUNCTION 1486d81e4 FUN_1486d81e4 body=37 status=ok
// SIG undefined FUN_1486d81e4(void)

void FUN_1486d81e4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1486d8380(param_2);
  return;
}



// FUNCTION 1486d8256 FUN_1486d8256 body=63 status=ok
// SIG undefined FUN_1486d8256(void)

undefined1 FUN_1486d8256(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d848c(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1486d82be FUN_1486d82be body=59 status=ok
// SIG undefined FUN_1486d82be(void)

undefined8 FUN_1486d82be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d830a FUN_1486d830a body=40 status=ok
// SIG undefined FUN_1486d830a(void)

void FUN_1486d830a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1486d8442(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1486d8380 FUN_1486d8380 body=100 status=ok
// SIG undefined FUN_1486d8380(void)

undefined8 * FUN_1486d8380(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1c0960;
  FUN_14044066a(param_1 + 0x10,7,7);
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(bool *)(param_1 + 0x1d) = (DAT_14c9a8634 & 0x20) == 0;
  return param_1;
}



// FUNCTION 1486d83e4 FUN_1486d83e4 body=38 status=ok
// SIG undefined FUN_1486d83e4(void)

undefined8 FUN_1486d83e4(undefined8 param_1,int param_2)

{
  FUN_1486d8442();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d840a FUN_1486d840a body=55 status=ok
// SIG undefined FUN_1486d840a(void)

void FUN_1486d840a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61170 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61170 = FUN_140002ddd(FUN_1464f15a3,uVar1,L"GbxMomentNodeSettings_Wait");
  }
  return;
}



// FUNCTION 1486d8442 FUN_1486d8442 body=74 status=ok
// SIG undefined FUN_1486d8442(void)

void FUN_1486d8442(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1c0960;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d848c FUN_1486d848c body=113 status=ok
// SIG undefined FUN_1486d848c(void)

longlong FUN_1486d848c(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1486d85a4 FUN_1486d85a4 body=54 status=ok
// SIG undefined FUN_1486d85a4(void)

undefined1 FUN_1486d85a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d8602 FUN_1486d8602 body=59 status=ok
// SIG undefined FUN_1486d8602(void)

undefined8 FUN_1486d8602(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d8696 FUN_1486d8696 body=55 status=ok
// SIG undefined FUN_1486d8696(void)

void FUN_1486d8696(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61188 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61188 = FUN_140002ddd(FUN_1464f1639,uVar1,L"GbxMomentNodeState_Wait");
  }
  return;
}



// FUNCTION 1486d86ce FUN_1486d86ce body=37 status=ok
// SIG undefined FUN_1486d86ce(void)

void FUN_1486d86ce(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x130);
  FUN_1486d886a(param_2);
  return;
}



// FUNCTION 1486d8740 FUN_1486d8740 body=63 status=ok
// SIG undefined FUN_1486d8740(void)

undefined1 FUN_1486d8740(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d89a6(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 1486d87a8 FUN_1486d87a8 body=59 status=ok
// SIG undefined FUN_1486d87a8(void)

undefined8 FUN_1486d87a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d87f4 FUN_1486d87f4 body=40 status=ok
// SIG undefined FUN_1486d87f4(void)

void FUN_1486d87f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_1486d8950(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1486d886a FUN_1486d886a body=131 status=ok
// SIG undefined FUN_1486d886a(void)

undefined8 * FUN_1486d886a(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1c0de0;
  FUN_14044066a(param_1 + 0x10,0x11,7);
  FUN_14044066a(param_1 + 0x17,0x11,7);
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x22) = 4;
  *(undefined4 *)(param_1 + 0x1f) = 0x40000000;
  *(undefined1 *)(param_1 + 0x23) = 3;
  *(char *)(param_1 + 0x24) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 1486d88ee FUN_1486d88ee body=38 status=ok
// SIG undefined FUN_1486d88ee(void)

undefined8 FUN_1486d88ee(undefined8 param_1,int param_2)

{
  FUN_1486d8950();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d8914 FUN_1486d8914 body=55 status=ok
// SIG undefined FUN_1486d8914(void)

void FUN_1486d8914(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb611a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb611a0 = FUN_140002ddd(FUN_1464f16cf,uVar1,L"GbxMomentNodeSettings_WeaponAttack");
  }
  return;
}



// FUNCTION 1486d8950 FUN_1486d8950 body=86 status=ok
// SIG undefined FUN_1486d8950(void)

void FUN_1486d8950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1c0de0;
  FUN_144a2da94(param_1 + 0x1e);
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486d89a6 FUN_1486d89a6 body=139 status=ok
// SIG undefined FUN_1486d89a6(void)

longlong FUN_1486d89a6(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144983130(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  return param_1;
}



// FUNCTION 1486d8b00 FUN_1486d8b00 body=98 status=ok
// SIG undefined FUN_1486d8b00(void)

undefined8 FUN_1486d8b00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    uVar4 = *(undefined4 *)(param_3 + 0x80);
    uVar5 = *(undefined4 *)(param_3 + 0x84);
    uVar6 = *(undefined4 *)(param_3 + 0x88);
    uVar7 = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    *(undefined4 *)(param_2 + 0x80) = uVar4;
    *(undefined4 *)(param_2 + 0x84) = uVar5;
    *(undefined4 *)(param_2 + 0x88) = uVar6;
    *(undefined4 *)(param_2 + 0x8c) = uVar7;
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_3 + 0x90);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 1486d8b8a FUN_1486d8b8a body=59 status=ok
// SIG undefined FUN_1486d8b8a(void)

undefined8 FUN_1486d8b8a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d8c24 FUN_1486d8c24 body=55 status=ok
// SIG undefined FUN_1486d8c24(void)

void FUN_1486d8c24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb611b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb611b8 = FUN_140002ddd(FUN_1464f1765,uVar1,L"GbxMomentNodeState_WeaponAttack");
  }
  return;
}



// FUNCTION 1486d8cea FUN_1486d8cea body=73 status=ok
// SIG undefined FUN_1486d8cea(void)

undefined8 FUN_1486d8cea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_144983130();
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d8d5c FUN_1486d8d5c body=59 status=ok
// SIG undefined FUN_1486d8d5c(void)

undefined8 FUN_1486d8d5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d8da2 FUN_1486d8da2 body=33 status=ok
// SIG undefined FUN_1486d8da2(void)

void FUN_1486d8da2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2 + 8);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486d8e9a FUN_1486d8e9a body=104 status=ok
// SIG undefined FUN_1486d8e9a(void)

void FUN_1486d8e9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb61410) {
    FUN_144b3d300(&DAT_14cb61410);
    if (DAT_14cb61410 == -1) {
      FUN_1446f470e(&DAT_14cb61408,L"ReplicatedMoveState",1);
      _Init_thread_footer(&DAT_14cb61410);
      return;
    }
  }
  return;
}



// FUNCTION 1486d8f12 FUN_1486d8f12 body=180 status=ok
// SIG undefined FUN_1486d8f12(void)

void FUN_1486d8f12(undefined8 param_1,longlong param_2)

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
  FUN_1489291a6(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d8fda FUN_1486d8fda body=321 status=ok
// SIG undefined FUN_1486d8fda(void)

void FUN_1486d8fda(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489291de(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9122 FUN_1486d9122 body=322 status=ok
// SIG undefined FUN_1486d9122(void)

void FUN_1486d9122(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489291a8(local_18,local_1c,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9266 FUN_1486d9266 body=272 status=ok
// SIG undefined FUN_1486d9266(void)

void FUN_1486d9266(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 local_138 [288];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  FUN_14126e142(local_138);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_138;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14892924e(local_140,puVar1);
  FUN_14129d1b2(local_138);
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9378 FUN_1486d9378 body=414 status=ok
// SIG undefined FUN_1486d9378(void)

void FUN_1486d9378(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e0252a(local_18,local_1c,puVar1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9518 FUN_1486d9518 body=266 status=ok
// SIG undefined FUN_1486d9518(void)

void FUN_1486d9518(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = *puVar1;
  local_30 = puVar1[1];
  FUN_148929220(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9624 FUN_1486d9624 body=277 status=ok
// SIG undefined FUN_1486d9624(void)

void FUN_1486d9624(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_168 [36];
  undefined4 local_144;
  undefined1 local_140 [288];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14126e142(local_140);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_140);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_144 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_144);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_144);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_140;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929282(puVar1,local_144);
  FUN_14129d1b2(local_140);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d973a FUN_1486d973a body=277 status=ok
// SIG undefined FUN_1486d973a(void)

void FUN_1486d973a(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_168 [36];
  undefined4 local_144;
  undefined1 local_140 [288];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14126e142(local_140);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_140);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_144 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_144);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_144);
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_140;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929290(puVar1,local_144);
  FUN_14129d1b2(local_140);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9926 FUN_1486d9926 body=69 status=ok
// SIG undefined FUN_1486d9926(void)

undefined8 * FUN_1486d9926(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000030;
  
  *param_2 = 0;
  plVar3 = *(longlong **)(in_stack_00000030 + 8);
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
  return param_2;
}



// FUNCTION 1486d996c FUN_1486d996c body=45 status=ok
// SIG undefined FUN_1486d996c(void)

longlong FUN_1486d996c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458df08a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d99a0 FUN_1486d99a0 body=48 status=ok
// SIG undefined FUN_1486d99a0(void)

longlong FUN_1486d99a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1458df08a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d99d8 FUN_1486d99d8 body=48 status=ok
// SIG undefined FUN_1486d99d8(void)

longlong FUN_1486d99d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1458df08a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d9a10 FUN_1486d9a10 body=48 status=ok
// SIG undefined FUN_1486d9a10(void)

longlong FUN_1486d9a10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1458df08a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d9a48 FUN_1486d9a48 body=45 status=ok
// SIG undefined FUN_1486d9a48(void)

longlong FUN_1486d9a48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145743628(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486d9aa4 FUN_1486d9aa4 body=63 status=ok
// SIG undefined FUN_1486d9aa4(void)

undefined1 FUN_1486d9aa4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d9bcc(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 1486d9b0c FUN_1486d9b0c body=59 status=ok
// SIG undefined FUN_1486d9b0c(void)

undefined8 FUN_1486d9b0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9b58 FUN_1486d9b58 body=38 status=ok
// SIG undefined FUN_1486d9b58(void)

void FUN_1486d9b58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1418553f6(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 1486d9bcc FUN_1486d9bcc body=145 status=ok
// SIG undefined FUN_1486d9bcc(void)

longlong FUN_1486d9bcc(longlong param_1,longlong param_2)

{
  FUN_1470d0d20();
  FUN_14863e1cc(param_1 + 0xa8,param_2 + 0xa8);
  if ((*(longlong *)(param_1 + 0xb8) != *(longlong *)(param_2 + 0xb8)) ||
     (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0))) {
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  FUN_144983130(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 1486d9c68 FUN_1486d9c68 body=37 status=ok
// SIG undefined FUN_1486d9c68(void)

void FUN_1486d9c68(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a8);
  FUN_14597dc8e(param_2);
  return;
}



// FUNCTION 1486d9ce6 FUN_1486d9ce6 body=59 status=ok
// SIG undefined FUN_1486d9ce6(void)

undefined8 FUN_1486d9ce6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9d32 FUN_1486d9d32 body=40 status=ok
// SIG undefined FUN_1486d9d32(void)

void FUN_1486d9d32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_14574e722(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1486d9dce FUN_1486d9dce body=100 status=ok
// SIG undefined FUN_1486d9dce(void)

undefined1 FUN_1486d9dce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined1 *)(param_2 + 8 + lVar3) = *(undefined1 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486d9e5a FUN_1486d9e5a body=59 status=ok
// SIG undefined FUN_1486d9e5a(void)

undefined8 FUN_1486d9e5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486d9efc FUN_1486d9efc body=37 status=ok
// SIG undefined FUN_1486d9efc(void)

void FUN_1486d9efc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_143c5f6a8(param_2);
  return;
}



// FUNCTION 1486d9f4e FUN_1486d9f4e body=63 status=ok
// SIG undefined FUN_1486d9f4e(void)

undefined1 FUN_1486d9f4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486da09c(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1486d9fb6 FUN_1486d9fb6 body=59 status=ok
// SIG undefined FUN_1486d9fb6(void)

undefined8 FUN_1486d9fb6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486da002 FUN_1486da002 body=38 status=ok
// SIG undefined FUN_1486da002(void)

void FUN_1486da002(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_14185547e(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1486da076 FUN_1486da076 body=38 status=ok
// SIG undefined FUN_1486da076(void)

undefined8 FUN_1486da076(undefined8 param_1,int param_2)

{
  FUN_14185547e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486da09c FUN_1486da09c body=65 status=ok
// SIG undefined FUN_1486da09c(void)

longlong FUN_1486da09c(longlong param_1,longlong param_2)

{
  FUN_147539d66();
  FUN_147539dac(param_1 + 0x50,param_2 + 0x50);
  FUN_1486da0de(param_1 + 0x60,param_2 + 0x60);
  FUN_147a408e2(param_1 + 0x70);
  return param_1;
}



// FUNCTION 1486da0de FUN_1486da0de body=79 status=ok
// SIG undefined FUN_1486da0de(void)

undefined8 * FUN_1486da0de(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486da12e(param_1,iVar1);
      FUN_1486da190(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486da12e FUN_1486da12e body=98 status=ok
// SIG undefined FUN_1486da12e(void)

void FUN_1486da12e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486da190 FUN_1486da190 body=96 status=ok
// SIG undefined FUN_1486da190(void)

void FUN_1486da190(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined1 *)(param_1 + 8 + lVar3) = *(undefined1 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486da236 FUN_1486da236 body=86 status=ok
// SIG undefined FUN_1486da236(void)

undefined8 FUN_1486da236(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1486da36e(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486da2b4 FUN_1486da2b4 body=59 status=ok
// SIG undefined FUN_1486da2b4(void)

undefined8 FUN_1486da2b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486da2fa FUN_1486da2fa body=38 status=ok
// SIG undefined FUN_1486da2fa(void)

void FUN_1486da2fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486da36e FUN_1486da36e body=88 status=ok
// SIG undefined FUN_1486da36e(void)

undefined8 * FUN_1486da36e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486da3c6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486da3c6 FUN_1486da3c6 body=98 status=ok
// SIG undefined FUN_1486da3c6(void)

void FUN_1486da3c6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486da42a FUN_1486da42a body=139 status=ok
// SIG undefined FUN_1486da42a(void)

void FUN_1486da42a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x90) = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe3) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe8) = 0x3f800000;
  return;
}



// FUNCTION 1486da554 FUN_1486da554 body=68 status=ok
// SIG undefined FUN_1486da554(void)

undefined8 FUN_1486da554(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xf0);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486da5c0 FUN_1486da5c0 body=59 status=ok
// SIG undefined FUN_1486da5c0(void)

undefined8 FUN_1486da5c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486da66e FUN_1486da66e body=30 status=ok
// SIG undefined FUN_1486da66e(void)

void FUN_1486da66e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



// FUNCTION 1486da68c FUN_1486da68c body=30 status=ok
// SIG undefined FUN_1486da68c(void)

void FUN_1486da68c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}



// FUNCTION 1486da6c2 FUN_1486da6c2 body=39 status=ok
// SIG undefined FUN_1486da6c2(void)

undefined8 FUN_1486da6c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486da712 FUN_1486da712 body=59 status=ok
// SIG undefined FUN_1486da712(void)

undefined8 FUN_1486da712(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486da7b4 FUN_1486da7b4 body=64 status=ok
// SIG undefined FUN_1486da7b4(void)

void FUN_1486da7b4(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 4);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140785382(param_2 + 0x1c,7);
  param_2[0x2a] = 0x3f800000;
  return;
}



// FUNCTION 1486da80a FUN_1486da80a body=110 status=ok
// SIG undefined FUN_1486da80a(void)

undefined1 FUN_1486da80a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      puVar2 = (undefined8 *)(param_3 + lVar4);
      puVar3 = (undefined8 *)(param_2 + lVar4);
      for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_144983130(param_2 + lVar4 + 0x70,param_3 + lVar4 + 0x70);
      *(undefined4 *)(param_2 + lVar4 + 0xa8) = *(undefined4 *)(param_3 + lVar4 + 0xa8);
      lVar4 = lVar4 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486da8a0 FUN_1486da8a0 body=59 status=ok
// SIG undefined FUN_1486da8a0(void)

undefined8 FUN_1486da8a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486da8ec FUN_1486da8ec body=39 status=ok
// SIG undefined FUN_1486da8ec(void)

void FUN_1486da8ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_144a2da94(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1486daa08 FUN_1486daa08 body=59 status=ok
// SIG undefined FUN_1486daa08(void)

undefined8 FUN_1486daa08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486daac8 FUN_1486daac8 body=63 status=ok
// SIG undefined FUN_1486daac8(void)

undefined1 FUN_1486daac8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145816fcc(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 1486dab30 FUN_1486dab30 body=59 status=ok
// SIG undefined FUN_1486dab30(void)

undefined8 FUN_1486dab30(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dab7c FUN_1486dab7c body=38 status=ok
// SIG undefined FUN_1486dab7c(void)

void FUN_1486dab7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_14129d1b2(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1486dac20 FUN_1486dac20 body=63 status=ok
// SIG undefined FUN_1486dac20(void)

undefined1 FUN_1486dac20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486dad48(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 1486dac88 FUN_1486dac88 body=59 status=ok
// SIG undefined FUN_1486dac88(void)

undefined8 FUN_1486dac88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dacd4 FUN_1486dacd4 body=38 status=ok
// SIG undefined FUN_1486dacd4(void)

void FUN_1486dacd4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1407777dc(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1486dad48 FUN_1486dad48 body=117 status=ok
// SIG undefined FUN_1486dad48(void)

longlong FUN_1486dad48(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_14115e11a();
  lVar5 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_14115e0ba(param_1 + 0x30,param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 1486dae26 FUN_1486dae26 body=59 status=ok
// SIG undefined FUN_1486dae26(void)

undefined8 FUN_1486dae26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486daec6 FUN_1486daec6 body=29 status=ok
// SIG undefined FUN_1486daec6(void)

undefined8 FUN_1486daec6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486daee4 FUN_1486daee4 body=55 status=ok
// SIG undefined FUN_1486daee4(void)

void FUN_1486daee4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61620 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61620 = FUN_140002ddd(FUN_1464f3145,uVar1,L"GbxMusicAction");
  }
  return;
}



// FUNCTION 1486daf86 FUN_1486daf86 body=54 status=ok
// SIG undefined FUN_1486daf86(void)

undefined1 FUN_1486daf86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486db14e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1486dafe4 FUN_1486dafe4 body=59 status=ok
// SIG undefined FUN_1486dafe4(void)

undefined8 FUN_1486dafe4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486db02a FUN_1486db02a body=34 status=ok
// SIG undefined FUN_1486db02a(void)

void FUN_1486db02a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1486db0f8(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486db09a FUN_1486db09a body=38 status=ok
// SIG undefined FUN_1486db09a(void)

undefined8 FUN_1486db09a(undefined8 param_1,int param_2)

{
  FUN_1486db0f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486db0c0 FUN_1486db0c0 body=55 status=ok
// SIG undefined FUN_1486db0c0(void)

void FUN_1486db0c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61638 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61638 = FUN_140002ddd(FUN_1464f31dd,uVar1,L"GbxMusicAction_PlayAudioGraph");
  }
  return;
}



// FUNCTION 1486db0f8 FUN_1486db0f8 body=85 status=ok
// SIG undefined FUN_1486db0f8(void)

void FUN_1486db0f8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1ccf30;
  plVar3 = (longlong *)param_1[7];
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486db14e FUN_1486db14e body=114 status=ok
// SIG undefined FUN_1486db14e(void)

longlong FUN_1486db14e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
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



// FUNCTION 1486db246 FUN_1486db246 body=59 status=ok
// SIG undefined FUN_1486db246(void)

undefined8 FUN_1486db246(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486db292 FUN_1486db292 body=38 status=ok
// SIG undefined FUN_1486db292(void)

void FUN_1486db292(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1486db2fa(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1486db2fa FUN_1486db2fa body=107 status=ok
// SIG undefined FUN_1486db2fa(void)

void FUN_1486db2fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1cd0d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  if ((param_1[0xd] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd] + 0x50));
  }
  if ((param_1[6] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[6] + 0x50));
    return;
  }
  return;
}



// FUNCTION 1486db3be FUN_1486db3be body=59 status=ok
// SIG undefined FUN_1486db3be(void)

undefined8 FUN_1486db3be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486db49c FUN_1486db49c body=62 status=ok
// SIG undefined FUN_1486db49c(void)

undefined1 FUN_1486db49c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_14065c7f4(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486db502 FUN_1486db502 body=59 status=ok
// SIG undefined FUN_1486db502(void)

undefined8 FUN_1486db502(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486db548 FUN_1486db548 body=48 status=ok
// SIG undefined FUN_1486db548(void)

void FUN_1486db548(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b1cd410;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486db5c8 FUN_1486db5c8 body=77 status=ok
// SIG undefined FUN_1486db5c8(void)

void FUN_1486db5c8(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b1cd5c0;
  FUN_144928b90(param_2 + 1,0);
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 1486db616 FUN_1486db616 body=54 status=ok
// SIG undefined FUN_1486db616(void)

void FUN_1486db616(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1cd5c0;
  FUN_144928b90(param_2 + 1,0);
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 1486db670 FUN_1486db670 body=113 status=ok
// SIG undefined FUN_1486db670(void)

undefined8 FUN_1486db670(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(param_2 + 0x10 + lVar6) = *(undefined4 *)(param_3 + 0x10 + lVar6);
      *(undefined8 *)(param_2 + 8 + lVar6) = *(undefined8 *)(param_3 + 8 + lVar6);
      FUN_1447715ec(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x40 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x40 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486db70a FUN_1486db70a body=59 status=ok
// SIG undefined FUN_1486db70a(void)

undefined8 FUN_1486db70a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486db750 FUN_1486db750 body=50 status=ok
// SIG undefined FUN_1486db750(void)

void FUN_1486db750(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b1cd5c0;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1486db7d0 FUN_1486db7d0 body=59 status=ok
// SIG undefined FUN_1486db7d0(void)

undefined8 * FUN_1486db7d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1cd5c0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486db80c FUN_1486db80c body=55 status=ok
// SIG undefined FUN_1486db80c(void)

void FUN_1486db80c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61698 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61698 = FUN_140002ddd(FUN_1464f3435,uVar1,L"GbxMusicAction_SetFact");
  }
  return;
}



// FUNCTION 1486db84c FUN_1486db84c body=230 status=ok
// SIG undefined FUN_1486db84c(void)

void FUN_1486db84c(undefined8 param_1,longlong param_2)

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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929930(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486db936 FUN_1486db936 body=179 status=ok
// SIG undefined FUN_1486db936(void)

void FUN_1486db936(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0x4000;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488acf44(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486db9ea FUN_1486db9ea body=179 status=ok
// SIG undefined FUN_1486db9ea(void)

void FUN_1486db9ea(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xc;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488acf9c(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dbaa1 FUN_1486dbaa1 body=55 status=ok
// SIG undefined FUN_1486dbaa1(void)

void FUN_1486dbaa1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61908 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61908 = FUN_14171c317(FUN_1464f42fa,uVar1,L"EGbxNpcPlayerGreetingType");
  }
  return;
}



// FUNCTION 1486dbae8 FUN_1486dbae8 body=37 status=ok
// SIG undefined FUN_1486dbae8(void)

void FUN_1486dbae8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487dee20();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486dbb12 FUN_1486dbb12 body=150 status=ok
// SIG undefined FUN_1486dbb12(void)

void FUN_1486dbb12(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487dee24(local_14 != 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dbbc8 FUN_1486dbbc8 body=70 status=ok
// SIG undefined FUN_1486dbbc8(void)

void FUN_1486dbbc8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_145996dac();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *param_3 = lVar2;
  return;
}



// FUNCTION 1486dbc0e FUN_1486dbc0e body=51 status=ok
// SIG undefined FUN_1486dbc0e(void)

void FUN_1486dbc0e(undefined8 param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0,1);
  return;
}



// FUNCTION 1486dbc76 FUN_1486dbc76 body=155 status=ok
// SIG undefined FUN_1486dbc76(void)

void FUN_1486dbc76(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_143e05fd8(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dbd12 FUN_1486dbd12 body=148 status=ok
// SIG undefined FUN_1486dbd12(void)

void FUN_1486dbd12(undefined8 param_1,longlong param_2)

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
  FUN_143e05fe0(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dbda8 FUN_1486dbda8 body=148 status=ok
// SIG undefined FUN_1486dbda8(void)

void FUN_1486dbda8(undefined8 param_1,longlong param_2)

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
  FUN_143e05fe2(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dbe46 FUN_1486dbe46 body=699 status=ok
// SIG undefined FUN_1486dbe46(void)

void FUN_1486dbe46(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  int local_ac;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
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
  local_48 = 0;
  local_40 = 0x4000;
  local_38 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar1 = local_ac;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_a8;
  puVar5 = local_118;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_130 = local_48;
  local_128 = local_40;
  local_120 = 0;
  local_138 = iVar1 != 0;
  uVar2 = FUN_143e05fdc(local_28,local_30);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc10a FUN_1486dc10a body=117 status=ok
// SIG undefined FUN_1486dc10a(void)

void FUN_1486dc10a(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a7a8f6(&local_30);
  local_30 = *param_2;
  local_28 = *(undefined4 *)(param_2 + 1);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61b78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc180 FUN_1486dc180 body=161 status=ok
// SIG undefined FUN_1486dc180(void)

void FUN_1486dc180(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a7a8f6(local_24);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xf98))(param_1,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc22e FUN_1486dc22e body=47 status=ok
// SIG undefined FUN_1486dc22e(void)

void FUN_1486dc22e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb61ba8);
                    /* WARNING: Could not recover jumptable at 0x0001486dc25a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486dc278 FUN_1486dc278 body=119 status=ok
// SIG undefined FUN_1486dc278(void)

void FUN_1486dc278(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61bc8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc2f0 FUN_1486dc2f0 body=175 status=ok
// SIG undefined FUN_1486dc2f0(void)

void FUN_1486dc2f0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xfd0))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc3a6 FUN_1486dc3a6 body=129 status=ok
// SIG undefined FUN_1486dc3a6(void)

void FUN_1486dc3a6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_30 = param_2;
  FUN_144a787a6(local_28,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61be8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc428 FUN_1486dc428 body=265 status=ok
// SIG undefined FUN_1486dc428(void)

void FUN_1486dc428(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xf20))(param_1,local_20,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc532 FUN_1486dc532 body=188 status=ok
// SIG undefined FUN_1486dc532(void)

void FUN_1486dc532(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [80];
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14583e8ce(local_198);
  FUN_145dd7080(local_198,param_2);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61c08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_198);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(local_148);
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_2 + 0x50);
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc5f0 FUN_1486dc5f0 body=245 status=ok
// SIG undefined FUN_1486dc5f0(void)

void FUN_1486dc5f0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_338 [40];
  undefined1 local_310 [376];
  undefined1 local_198 [80];
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_14583e8ce(local_198);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14154dd46(local_310,local_198);
  (**(code **)(*param_1 + 0xf68))(param_1,local_310);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(local_148);
  if ((local_20 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc6e6 FUN_1486dc6e6 body=45 status=ok
// SIG undefined FUN_1486dc6e6(void)

void FUN_1486dc6e6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0xc08);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486dc714 FUN_1486dc714 body=38 status=ok
// SIG undefined FUN_1486dc714(void)

void FUN_1486dc714(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1486dc73a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486dc73a FUN_1486dc73a body=60 status=ok
// SIG undefined FUN_1486dc73a(void)

undefined8 FUN_1486dc73a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0xc08);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xc08);
    uVar3 = FUN_14479d2ce(lVar2 + 0x3b8);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1486dc77c FUN_1486dc77c body=129 status=ok
// SIG undefined FUN_1486dc77c(void)

void FUN_1486dc77c(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a7a8f6(&local_38);
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_2c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61c70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc7fe FUN_1486dc7fe body=242 status=ok
// SIG undefined FUN_1486dc7fe(void)

void FUN_1486dc7fe(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a7a8f6(local_24);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  local_28 = 0;
  FUN_144a8cc30();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xfa8))(param_1,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc8fe FUN_1486dc8fe body=119 status=ok
// SIG undefined FUN_1486dc8fe(void)

void FUN_1486dc8fe(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14cb61cc0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dc976 FUN_1486dc976 body=216 status=ok
// SIG undefined FUN_1486dc976(void)

void FUN_1486dc976(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xf28))(param_1,local_28);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSendTextChat_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xf30))(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dca62 FUN_1486dca62 body=45 status=ok
// SIG undefined FUN_1486dca62(void)

longlong FUN_1486dca62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_141401e38(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcad8 FUN_1486dcad8 body=45 status=ok
// SIG undefined FUN_1486dcad8(void)

longlong FUN_1486dcad8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcb06 FUN_1486dcb06 body=48 status=ok
// SIG undefined FUN_1486dcb06(void)

longlong FUN_1486dcb06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcb36 FUN_1486dcb36 body=48 status=ok
// SIG undefined FUN_1486dcb36(void)

longlong FUN_1486dcb36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcb66 FUN_1486dcb66 body=48 status=ok
// SIG undefined FUN_1486dcb66(void)

longlong FUN_1486dcb66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcb96 FUN_1486dcb96 body=45 status=ok
// SIG undefined FUN_1486dcb96(void)

longlong FUN_1486dcb96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b61880(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcbc4 FUN_1486dcbc4 body=48 status=ok
// SIG undefined FUN_1486dcbc4(void)

longlong FUN_1486dcbc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140b61880(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcbf4 FUN_1486dcbf4 body=48 status=ok
// SIG undefined FUN_1486dcbf4(void)

longlong FUN_1486dcbf4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140b61880(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcc24 FUN_1486dcc24 body=48 status=ok
// SIG undefined FUN_1486dcc24(void)

longlong FUN_1486dcc24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140b61880(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcc54 FUN_1486dcc54 body=45 status=ok
// SIG undefined FUN_1486dcc54(void)

longlong FUN_1486dcc54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1456ef722(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcd44 FUN_1486dcd44 body=48 status=ok
// SIG undefined FUN_1486dcd44(void)

longlong FUN_1486dcd44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9a0;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcd7c FUN_1486dcd7c body=48 status=ok
// SIG undefined FUN_1486dcd7c(void)

longlong FUN_1486dcd7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9a8;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcdb8 FUN_1486dcdb8 body=48 status=ok
// SIG undefined FUN_1486dcdb8(void)

longlong FUN_1486dcdb8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9b0;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dcdf8 FUN_1486dcdf8 body=91 status=ok
// SIG undefined FUN_1486dcdf8(void)

void FUN_1486dcdf8(undefined8 param_1,undefined8 *param_2)

{
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b1d74f0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  param_2[0x6c] = 0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  param_2[0x6f] = 0;
  param_2[0x70] = 0;
  param_2[0x71] = 0;
  param_2[0x72] = 0;
  param_2[0x73] = 0;
  param_2[0x74] = 0;
  return;
}



// FUNCTION 1486dce78 FUN_1486dce78 body=164 status=ok
// SIG undefined FUN_1486dce78(void)

undefined1 FUN_1486dce78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f74370(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x304);
    uVar2 = *(undefined4 *)(param_3 + 0x308);
    uVar3 = *(undefined4 *)(param_3 + 0x30c);
    uVar4 = *(undefined4 *)(param_3 + 0x310);
    uVar5 = *(undefined4 *)(param_3 + 0x314);
    uVar6 = *(undefined4 *)(param_3 + 0x318);
    uVar7 = *(undefined4 *)(param_3 + 0x31c);
    uVar8 = *(undefined4 *)(param_3 + 800);
    uVar9 = *(undefined4 *)(param_3 + 0x324);
    uVar10 = *(undefined4 *)(param_3 + 0x328);
    uVar11 = *(undefined4 *)(param_3 + 0x32c);
    *(undefined4 *)(param_2 + 0x300) = *(undefined4 *)(param_3 + 0x300);
    *(undefined4 *)(param_2 + 0x304) = uVar1;
    *(undefined4 *)(param_2 + 0x308) = uVar2;
    *(undefined4 *)(param_2 + 0x30c) = uVar3;
    *(undefined4 *)(param_2 + 0x310) = uVar4;
    *(undefined4 *)(param_2 + 0x314) = uVar5;
    *(undefined4 *)(param_2 + 0x318) = uVar6;
    *(undefined4 *)(param_2 + 0x31c) = uVar7;
    *(undefined4 *)(param_2 + 800) = uVar8;
    *(undefined4 *)(param_2 + 0x324) = uVar9;
    *(undefined4 *)(param_2 + 0x328) = uVar10;
    *(undefined4 *)(param_2 + 0x32c) = uVar11;
    FUN_144a787a6(param_2 + 0x330,param_3 + 0x330);
    puVar13 = (undefined8 *)(param_3 + 0x340);
    puVar14 = (undefined8 *)(param_2 + 0x340);
    for (lVar12 = 0xd; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    param_2 = param_2 + 0x3b0;
    param_3 = param_3 + 0x3b0;
  }
  return 1;
}



// FUNCTION 1486dcf44 FUN_1486dcf44 body=59 status=ok
// SIG undefined FUN_1486dcf44(void)

undefined8 FUN_1486dcf44(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dcf90 FUN_1486dcf90 body=65 status=ok
// SIG undefined FUN_1486dcf90(void)

void FUN_1486dcf90(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x76) == '\x01') {
    *param_2 = &PTR_FUN_14b1d74f0;
    if (param_2[0x66] != 0) {
      FUN_1400020a8();
    }
    FUN_14060fc84(param_2);
    *(undefined1 *)(param_2 + 0x76) = 0;
  }
  return;
}



// FUNCTION 1486dd020 FUN_1486dd020 body=57 status=ok
// SIG undefined FUN_1486dd020(void)

void FUN_1486dd020(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb616b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb616b8 = FUN_140002ddd(FUN_1464f38c9,uVar1,L"GbxMusicAudioProvider");
  }
  return;
}



// FUNCTION 1486dd05a FUN_1486dd05a body=32 status=ok
// SIG undefined FUN_1486dd05a(void)

void FUN_1486dd05a(undefined8 param_1,undefined8 *param_2)

{
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b1d76c0;
  return;
}



// FUNCTION 1486dd090 FUN_1486dd090 body=63 status=ok
// SIG undefined FUN_1486dd090(void)

undefined1 FUN_1486dd090(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f75384(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1486dd0f8 FUN_1486dd0f8 body=59 status=ok
// SIG undefined FUN_1486dd0f8(void)

undefined8 FUN_1486dd0f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dd144 FUN_1486dd144 body=38 status=ok
// SIG undefined FUN_1486dd144(void)

void FUN_1486dd144(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1407f61d0(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1486dd1b8 FUN_1486dd1b8 body=57 status=ok
// SIG undefined FUN_1486dd1b8(void)

void FUN_1486dd1b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb616d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb616d0 = FUN_140002ddd(FUN_1464f395f,uVar1,L"GbxMusicAudioProviderDef");
  }
  return;
}



// FUNCTION 1486dd25a FUN_1486dd25a body=59 status=ok
// SIG undefined FUN_1486dd25a(void)

undefined8 FUN_1486dd25a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dd2fa FUN_1486dd2fa body=29 status=ok
// SIG undefined FUN_1486dd2fa(void)

undefined8 FUN_1486dd2fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dd318 FUN_1486dd318 body=55 status=ok
// SIG undefined FUN_1486dd318(void)

void FUN_1486dd318(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb616e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb616e8 = FUN_140002ddd(FUN_1464f39f5,uVar1,L"GbxMusicCondition");
  }
  return;
}



// FUNCTION 1486dd354 FUN_1486dd354 body=55 status=ok
// SIG undefined FUN_1486dd354(void)

void FUN_1486dd354(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001486dd387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486dd3ee FUN_1486dd3ee body=59 status=ok
// SIG undefined FUN_1486dd3ee(void)

undefined8 FUN_1486dd3ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dd434 FUN_1486dd434 body=32 status=ok
// SIG undefined FUN_1486dd434(void)

void FUN_1486dd434(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1486dd49e(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486dd49e FUN_1486dd49e body=65 status=ok
// SIG undefined FUN_1486dd49e(void)

void FUN_1486dd49e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1d79f0;
  FUN_1407e878c(param_1 + 3);
  FUN_1447cd778(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486dd548 FUN_1486dd548 body=59 status=ok
// SIG undefined FUN_1486dd548(void)

undefined8 FUN_1486dd548(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dd5e8 FUN_1486dd5e8 body=29 status=ok
// SIG undefined FUN_1486dd5e8(void)

undefined8 FUN_1486dd5e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dd606 FUN_1486dd606 body=55 status=ok
// SIG undefined FUN_1486dd606(void)

void FUN_1486dd606(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61718 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61718 = FUN_140002ddd(FUN_1464f3b23,uVar1,L"GbxMusicCondition_ChildrenCanPlay");
  }
  return;
}



// FUNCTION 1486dd6a2 FUN_1486dd6a2 body=59 status=ok
// SIG undefined FUN_1486dd6a2(void)

undefined8 FUN_1486dd6a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dd6e8 FUN_1486dd6e8 body=32 status=ok
// SIG undefined FUN_1486dd6e8(void)

void FUN_1486dd6e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140beec42(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1486dd74c FUN_1486dd74c body=37 status=ok
// SIG undefined FUN_1486dd74c(void)

void FUN_1486dd74c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  FUN_143c60060(param_2);
  return;
}



// FUNCTION 1486dd79e FUN_1486dd79e body=63 status=ok
// SIG undefined FUN_1486dd79e(void)

undefined1 FUN_1486dd79e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486dd928(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 1486dd806 FUN_1486dd806 body=59 status=ok
// SIG undefined FUN_1486dd806(void)

undefined8 FUN_1486dd806(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dd852 FUN_1486dd852 body=38 status=ok
// SIG undefined FUN_1486dd852(void)

void FUN_1486dd852(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_141855702(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 1486dd8ca FUN_1486dd8ca body=38 status=ok
// SIG undefined FUN_1486dd8ca(void)

undefined8 FUN_1486dd8ca(undefined8 param_1,int param_2)

{
  FUN_141855702();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486dd8f0 FUN_1486dd8f0 body=55 status=ok
// SIG undefined FUN_1486dd8f0(void)

void FUN_1486dd8f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61748 = FUN_140002ddd(FUN_1464f3c1a,uVar1,L"GbxMusicDef");
  }
  return;
}



// FUNCTION 1486dd928 FUN_1486dd928 body=106 status=ok
// SIG undefined FUN_1486dd928(void)

longlong FUN_1486dd928(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_141026712(param_1 + 0x30,param_2 + 0x30);
  FUN_145eff776(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 1486dd994 FUN_1486dd994 body=28 status=ok
// SIG undefined FUN_1486dd994(void)

undefined8 FUN_1486dd994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486dd9c2 FUN_1486dd9c2 body=113 status=ok
// SIG undefined FUN_1486dd9c2(void)

void FUN_1486dd9c2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  *(undefined4 *)((longlong)param_2 + 8) = 0x4000;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0xc;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0xc;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined1 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 1486ddaa8 FUN_1486ddaa8 body=63 status=ok
// SIG undefined FUN_1486ddaa8(void)

undefined1 FUN_1486ddaa8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ddc66(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 1486ddb10 FUN_1486ddb10 body=59 status=ok
// SIG undefined FUN_1486ddb10(void)

undefined8 FUN_1486ddb10(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486ddb5c FUN_1486ddb5c body=40 status=ok
// SIG undefined FUN_1486ddb5c(void)

void FUN_1486ddb5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1486ddbd2(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1486ddbd2 FUN_1486ddbd2 body=147 status=ok
// SIG undefined FUN_1486ddbd2(void)

void FUN_1486ddbd2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xb8);
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
  plVar3 = *(longlong **)(param_1 + 0xa0);
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
  plVar3 = *(longlong **)(param_1 + 0x88);
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
                    /* WARNING: Could not recover jumptable at 0x0001486ddc59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486ddc66 FUN_1486ddc66 body=620 status=ok
// SIG undefined FUN_1486ddc66(void)

longlong * FUN_1486ddc66(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  lVar6 = param_2[3];
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[3];
    }
  }
  bVar5 = DAT_14c950c29;
  param_1[3] = lVar6;
  lVar6 = param_2[4];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[4];
      bVar5 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar6;
  lVar6 = param_2[5];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[5];
    }
  }
  param_1[5] = lVar6;
  if ((param_1[6] != param_2[6]) || ((int)param_1[7] != (int)param_2[7])) {
    param_1[6] = param_2[6];
    *(int *)(param_1 + 7) = (int)param_2[7];
    param_1[8] = 0;
  }
  lVar6 = param_2[9];
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[9];
    }
  }
  param_1[9] = lVar6;
  *(int *)(param_1 + 10) = (int)param_2[10];
  if ((param_1[0xb] != param_2[0xb]) || ((int)param_1[0xc] != (int)param_2[0xc])) {
    param_1[0xb] = param_2[0xb];
    *(int *)(param_1 + 0xc) = (int)param_2[0xc];
    param_1[0xd] = 0;
  }
  lVar6 = param_2[0xe];
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[0xe];
    }
  }
  param_1[0xe] = lVar6;
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  lVar6 = param_2[0x10];
  lVar3 = param_2[0x11];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x11];
  param_1[0x10] = lVar6;
  param_1[0x11] = lVar3;
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
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  lVar6 = param_2[0x13];
  lVar3 = param_2[0x14];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x14];
  param_1[0x13] = lVar6;
  param_1[0x14] = lVar3;
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
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  lVar6 = param_2[0x16];
  lVar3 = param_2[0x17];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x17];
  param_1[0x16] = lVar6;
  param_1[0x17] = lVar3;
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
  return param_1;
}



// FUNCTION 1486ddf24 FUN_1486ddf24 body=85 status=ok
// SIG undefined FUN_1486ddf24(void)

undefined8 FUN_1486ddf24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1418557ae(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486ddfa2 FUN_1486ddfa2 body=59 status=ok
// SIG undefined FUN_1486ddfa2(void)

undefined8 FUN_1486ddfa2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486de042 FUN_1486de042 body=29 status=ok
// SIG undefined FUN_1486de042(void)

undefined8 FUN_1486de042(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486de060 FUN_1486de060 body=55 status=ok
// SIG undefined FUN_1486de060(void)

void FUN_1486de060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61830 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61830 = FUN_140002ddd(FUN_1464f3f4f,uVar1,L"GbxNodeActivationLevel_ValueResolver");
  }
  return;
}



// FUNCTION 1486de0fe FUN_1486de0fe body=95 status=ok
// SIG undefined FUN_1486de0fe(void)

undefined8 FUN_1486de0fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1418557ae(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      *(undefined8 *)(param_2 + 0x28 + lVar1) = *(undefined8 *)(param_3 + 0x28 + lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486de186 FUN_1486de186 body=59 status=ok
// SIG undefined FUN_1486de186(void)

undefined8 FUN_1486de186(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486de226 FUN_1486de226 body=55 status=ok
// SIG undefined FUN_1486de226(void)

void FUN_1486de226(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61848 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61848 = FUN_140002ddd(FUN_1464f3fe5,uVar1,L"GbxNodeIsActivated_ValueResolver");
  }
  return;
}



// FUNCTION 1486de2a2 FUN_1486de2a2 body=62 status=ok
// SIG undefined FUN_1486de2a2(void)

undefined8 FUN_1486de2a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e7790a(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1486de308 FUN_1486de308 body=59 status=ok
// SIG undefined FUN_1486de308(void)

undefined8 FUN_1486de308(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486de3a2 FUN_1486de3a2 body=37 status=ok
// SIG undefined FUN_1486de3a2(void)

void FUN_1486de3a2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x130);
  FUN_1486a765e(param_2);
  return;
}



// FUNCTION 1486de3d0 FUN_1486de3d0 body=40 status=ok
// SIG undefined FUN_1486de3d0(void)

void FUN_1486de3d0(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0xf8);
  FUN_144a2da94(param_2 + 0xc0);
  return;
}



// FUNCTION 1486de40e FUN_1486de40e body=63 status=ok
// SIG undefined FUN_1486de40e(void)

undefined1 FUN_1486de40e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a79cc(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 1486de476 FUN_1486de476 body=59 status=ok
// SIG undefined FUN_1486de476(void)

undefined8 FUN_1486de476(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486de4c2 FUN_1486de4c2 body=54 status=ok
// SIG undefined FUN_1486de4c2(void)

void FUN_1486de4c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_144a2da94(param_2 + 0xf8);
    FUN_144a2da94(param_2 + 0xc0);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1486de5cc FUN_1486de5cc body=59 status=ok
// SIG undefined FUN_1486de5cc(void)

undefined8 FUN_1486de5cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486de68c FUN_1486de68c body=63 status=ok
// SIG undefined FUN_1486de68c(void)

undefined1 FUN_1486de68c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a775c(param_2,param_3);
    param_3 = param_3 + 0xd50;
    param_2 = param_2 + 0xd50;
  }
  return 1;
}



// FUNCTION 1486de6f4 FUN_1486de6f4 body=59 status=ok
// SIG undefined FUN_1486de6f4(void)

undefined8 FUN_1486de6f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486de740 FUN_1486de740 body=40 status=ok
// SIG undefined FUN_1486de740(void)

void FUN_1486de740(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd50) == '\x01') {
    FUN_1456c30b6(param_2);
    *(undefined1 *)(param_2 + 0xd50) = 0;
  }
  return;
}



// FUNCTION 1486de7d6 FUN_1486de7d6 body=63 status=ok
// SIG undefined FUN_1486de7d6(void)

undefined1 FUN_1486de7d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486de99e(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1486de83e FUN_1486de83e body=59 status=ok
// SIG undefined FUN_1486de83e(void)

undefined8 FUN_1486de83e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486de88a FUN_1486de88a body=38 status=ok
// SIG undefined FUN_1486de88a(void)

void FUN_1486de88a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1486de954(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1486de8ea FUN_1486de8ea body=106 status=ok
// SIG undefined FUN_1486de8ea(void)

undefined8 * FUN_1486de8ea(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b1dcf30;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  *(undefined4 *)((longlong)param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0xd) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42700000;
  *(undefined4 *)(param_1 + 0xe) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f4ccccd;
  FUN_140def630(param_1 + 0xf);
  return param_1;
}



// FUNCTION 1486de954 FUN_1486de954 body=73 status=ok
// SIG undefined FUN_1486de954(void)

void FUN_1486de954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1dcf30;
  FUN_1447cd778(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1486de99e FUN_1486de99e body=101 status=ok
// SIG undefined FUN_1486de99e(void)

longlong FUN_1486de99e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_144a7bb84(param_1 + 0x18,param_2 + 0x18);
  FUN_144a7bb84(param_1 + 0x30,param_2 + 0x30);
  FUN_1400fce78(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 1486dea04 FUN_1486dea04 body=28 status=ok
// SIG undefined FUN_1486dea04(void)

undefined8 FUN_1486dea04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486dea2c FUN_1486dea2c body=128 status=ok
// SIG undefined FUN_1486dea2c(void)

void FUN_1486dea2c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x360);
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b1dcf60;
  param_2[0x60] = &DAT_3f8000003f800000;
  param_2[0x65] = 0;
  *(undefined4 *)(param_2 + 0x66) = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  *(undefined8 *)((longlong)param_2 + 0x334) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x33c) = 0;
  param_2[0x69] = 0;
  *(undefined4 *)(param_2 + 0x6a) = 0;
  return;
}



// FUNCTION 1486deaac FUN_1486deaac body=110 status=ok
// SIG undefined FUN_1486deaac(void)

void FUN_1486deaac(undefined8 param_1,undefined8 *param_2)

{
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b1dcf60;
  param_2[0x60] = &DAT_3f8000003f800000;
  param_2[0x65] = 0;
  *(undefined4 *)(param_2 + 0x66) = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  *(undefined8 *)((longlong)param_2 + 0x334) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x33c) = 0;
  param_2[0x69] = 0;
  *(undefined4 *)(param_2 + 0x6a) = 0;
  return;
}



// FUNCTION 1486deb3e FUN_1486deb3e body=99 status=ok
// SIG undefined FUN_1486deb3e(void)

undefined8 FUN_1486deb3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f74370(param_2,param_3);
    *(undefined8 *)(param_2 + 0x300) = *(undefined8 *)(param_3 + 0x300);
    FUN_1486decea(param_2 + 0x308,param_3 + 0x308);
    param_2 = param_2 + 0x360;
    param_3 = param_3 + 0x360;
  }
  return 1;
}



// FUNCTION 1486debca FUN_1486debca body=59 status=ok
// SIG undefined FUN_1486debca(void)

undefined8 FUN_1486debca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486dec16 FUN_1486dec16 body=40 status=ok
// SIG undefined FUN_1486dec16(void)

void FUN_1486dec16(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_145ac2d3c(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 1486dec8c FUN_1486dec8c body=38 status=ok
// SIG undefined FUN_1486dec8c(void)

undefined8 FUN_1486dec8c(undefined8 param_1,int param_2)

{
  FUN_145ac2d3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486decb2 FUN_1486decb2 body=55 status=ok
// SIG undefined FUN_1486decb2(void)

void FUN_1486decb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61a58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61a58 = FUN_140002ddd(FUN_1464f4723,uVar1,L"OpportunisticAmbientAudioProvider");
  }
  return;
}



// FUNCTION 1486decea FUN_1486decea body=122 status=ok
// SIG undefined FUN_1486decea(void)

longlong FUN_1486decea(longlong param_1,longlong param_2)

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
    FUN_1486ded64(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486ded64 FUN_1486ded64 body=260 status=ok
// SIG undefined FUN_1486ded64(void)

longlong * FUN_1486ded64(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_145ac2dbc(param_1,(ulonglong)uVar3);
    lVar11 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar11 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar11) < uVar3) {
      FUN_1406fba42(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar3) {
      lVar11 = *param_1;
      lVar4 = *param_2;
      lVar12 = 0;
      uVar13 = 0;
      do {
        plVar14 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar14 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar14 + (uVar13 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar13 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar11 + lVar12) = *(undefined4 *)(lVar4 + lVar12);
          *(undefined4 *)(lVar11 + 4 + lVar12) = *(undefined4 *)(lVar4 + 4 + lVar12);
        }
        else {
          *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(lVar4 + lVar12);
          lVar5 = *(longlong *)(lVar4 + 8 + lVar12);
          *(longlong *)(lVar11 + 8 + lVar12) = lVar5;
          if (lVar5 != 0) {
            *(int *)(lVar5 + 0x108) = *(int *)(lVar5 + 0x108) + 1;
          }
          *(undefined8 *)(lVar11 + 0x40 + lVar12) = *(undefined8 *)(lVar4 + 0x40 + lVar12);
          puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar12);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar12);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar12);
          uVar10 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar12);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar12);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          *(undefined8 *)(lVar11 + 0x48 + lVar12) = *(undefined8 *)(lVar4 + 0x48 + lVar12);
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x50;
      } while (uVar3 != uVar13);
    }
  }
  return param_1;
}



// FUNCTION 1486dee6a FUN_1486dee6a body=65 status=ok
// SIG undefined FUN_1486dee6a(void)

void FUN_1486dee6a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x150);
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b1d93b0;
  param_2[0x29] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1486deeac FUN_1486deeac body=49 status=ok
// SIG undefined FUN_1486deeac(void)

void FUN_1486deeac(undefined8 param_1,undefined8 *param_2)

{
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b1d93b0;
  param_2[0x29] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1486def02 FUN_1486def02 body=76 status=ok
// SIG undefined FUN_1486def02(void)

undefined8 FUN_1486def02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f75384(param_2,param_3);
    *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_3 + 0x148);
    param_2 = param_2 + 0x150;
    param_3 = param_3 + 0x150;
  }
  return 1;
}



// FUNCTION 1486def76 FUN_1486def76 body=59 status=ok
// SIG undefined FUN_1486def76(void)

undefined8 FUN_1486def76(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486defc2 FUN_1486defc2 body=38 status=ok
// SIG undefined FUN_1486defc2(void)

void FUN_1486defc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1407f61d0(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1486df036 FUN_1486df036 body=38 status=ok
// SIG undefined FUN_1486df036(void)

undefined8 FUN_1486df036(undefined8 param_1,int param_2)

{
  FUN_1407f61d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486df05c FUN_1486df05c body=55 status=ok
// SIG undefined FUN_1486df05c(void)

void FUN_1486df05c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61a70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61a70 = FUN_140002ddd(FUN_1464f47b9,uVar1,L"OpportunisticAmbientAudioProviderDef");
  }
  return;
}



// FUNCTION 1486df0e2 FUN_1486df0e2 body=59 status=ok
// SIG undefined FUN_1486df0e2(void)

undefined8 FUN_1486df0e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486df128 FUN_1486df128 body=38 status=ok
// SIG undefined FUN_1486df128(void)

void FUN_1486df128(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486df21e FUN_1486df21e body=59 status=ok
// SIG undefined FUN_1486df21e(void)

undefined8 FUN_1486df21e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486df2be FUN_1486df2be body=55 status=ok
// SIG undefined FUN_1486df2be(void)

void FUN_1486df2be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61ae8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61ae8 = FUN_140002ddd(FUN_1464f4945,uVar1,L"GbxPerchUserValueResolver");
  }
  return;
}



// FUNCTION 1486df374 FUN_1486df374 body=46 status=ok
// SIG undefined FUN_1486df374(void)

void FUN_1486df374(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1400fd330(param_2 + 0x10);
  return;
}



// FUNCTION 1486df3b8 FUN_1486df3b8 body=104 status=ok
// SIG undefined FUN_1486df3b8(void)

undefined8 FUN_1486df3b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_1486df512(lVar2,puVar1 + 4);
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(puVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x58) = puVar1[0x1a];
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486df448 FUN_1486df448 body=59 status=ok
// SIG undefined FUN_1486df448(void)

undefined8 FUN_1486df448(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486df48e FUN_1486df48e body=54 status=ok
// SIG undefined FUN_1486df48e(void)

void FUN_1486df48e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_1400fd330(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1486df512 FUN_1486df512 body=122 status=ok
// SIG undefined FUN_1486df512(void)

longlong FUN_1486df512(longlong param_1,longlong param_2)

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
    FUN_1486df58c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486df58c FUN_1486df58c body=119 status=ok
// SIG undefined FUN_1486df58c(void)

undefined8 * FUN_1486df58c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1400fd368(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1486df622 FUN_1486df622 body=63 status=ok
// SIG undefined FUN_1486df622(void)

undefined1 FUN_1486df622(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486df78a(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 1486df68a FUN_1486df68a body=59 status=ok
// SIG undefined FUN_1486df68a(void)

undefined8 FUN_1486df68a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486df6d6 FUN_1486df6d6 body=40 status=ok
// SIG undefined FUN_1486df6d6(void)

void FUN_1486df6d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14574b74c(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 1486df750 FUN_1486df750 body=57 status=ok
// SIG undefined FUN_1486df750(void)

void FUN_1486df750(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61b50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61b50 = FUN_140002ddd(FUN_1464f4b37,uVar1,L"GbxPlayerBotDef");
  }
  return;
}



// FUNCTION 1486df78a FUN_1486df78a body=193 status=ok
// SIG undefined FUN_1486df78a(void)

longlong FUN_1486df78a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_147f22736(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  if ((*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) ||
     (*(int *)(param_1 + 0xd0) != *(int *)(param_2 + 0xd0))) {
    *(longlong *)(param_1 + 200) = *(longlong *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return param_1;
}



// FUNCTION 1486df84c FUN_1486df84c body=104 status=ok
// SIG undefined FUN_1486df84c(void)

undefined8 FUN_1486df84c(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_148931714(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486df8b6 FUN_1486df8b6 body=28 status=ok
// SIG undefined FUN_1486df8b6(void)

undefined8 FUN_1486df8b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}


