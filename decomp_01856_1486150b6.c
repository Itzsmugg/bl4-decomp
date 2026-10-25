// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486150b6 FUN_1486150b6 body=84 status=ok
// SIG undefined FUN_1486150b6(void)

longlong * FUN_1486150b6(longlong *param_1,longlong *param_2)

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



// FUNCTION 14861510c FUN_14861510c body=104 status=ok
// SIG undefined FUN_14861510c(void)

undefined8 FUN_14861510c(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_141862a0e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148615176 FUN_148615176 body=28 status=ok
// SIG undefined FUN_148615176(void)

undefined8 FUN_148615176(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486151c2 FUN_1486151c2 body=63 status=ok
// SIG undefined FUN_1486151c2(void)

undefined1 FUN_1486151c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486152d6(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 14861522a FUN_14861522a body=59 status=ok
// SIG undefined FUN_14861522a(void)

undefined8 FUN_14861522a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148615276 FUN_148615276 body=38 status=ok
// SIG undefined FUN_148615276(void)

void FUN_148615276(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_1410fa4b4(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 1486152d6 FUN_1486152d6 body=130 status=ok
// SIG undefined FUN_1486152d6(void)

longlong FUN_1486152d6(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_144983130(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_144983130(param_1 + 0x58,param_2 + 0x58);
  FUN_144983130(param_1 + 0x90,param_2 + 0x90);
  FUN_144983130(param_1 + 200,param_2 + 200);
  FUN_144983130(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  return param_1;
}



// FUNCTION 14861535a FUN_14861535a body=28 status=ok
// SIG undefined FUN_14861535a(void)

undefined8 FUN_14861535a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486153c8 FUN_1486153c8 body=54 status=ok
// SIG undefined FUN_1486153c8(void)

undefined1 FUN_1486153c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140115bdc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1486153fe FUN_1486153fe body=31 status=ok
// SIG undefined FUN_1486153fe(void)

undefined1
FUN_1486153fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14861541e FUN_14861541e body=262 status=ok
// SIG undefined FUN_14861541e(void)

undefined4
FUN_14861541e(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  (**(code **)(*param_1 + 8))(0,local_78);
  if ((local_6c & 2) == 0) {
    FUN_141862a24(local_68);
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    (**(code **)(local_68[0] + 0x58))(local_68,0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148615526 FUN_148615526 body=41 status=ok
// SIG undefined FUN_148615526(void)

void FUN_148615526(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 148615564 FUN_148615564 body=59 status=ok
// SIG undefined FUN_148615564(void)

undefined8 FUN_148615564(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148615600 FUN_148615600 body=82 status=ok
// SIG undefined FUN_148615600(void)

void FUN_148615600(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_140115c12(param_1 + 2,0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148615686 FUN_148615686 body=63 status=ok
// SIG undefined FUN_148615686(void)

undefined1 FUN_148615686(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486157b2(param_2,param_3);
    param_3 = param_3 + 0x6f0;
    param_2 = param_2 + 0x6f0;
  }
  return 1;
}



// FUNCTION 1486156ee FUN_1486156ee body=59 status=ok
// SIG undefined FUN_1486156ee(void)

undefined8 FUN_1486156ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861573a FUN_14861573a body=38 status=ok
// SIG undefined FUN_14861573a(void)

void FUN_14861573a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6f0) == '\x01') {
    FUN_140adedd4(param_2);
    *(undefined1 *)(param_2 + 0x6f0) = 0;
  }
  return;
}



// FUNCTION 1486157b2 FUN_1486157b2 body=1874 status=ok
// SIG undefined FUN_1486157b2(void)

longlong FUN_1486157b2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  FUN_147e1a790();
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  memcpy((void *)(param_1 + 0xb8),(void *)(param_2 + 0xb8),0x98);
  if ((*(longlong *)(param_1 + 0x150) != *(longlong *)(param_2 + 0x150)) ||
     (*(int *)(param_1 + 0x158) != *(int *)(param_2 + 0x158))) {
    *(longlong *)(param_1 + 0x150) = *(longlong *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x168);
  uVar9 = *(undefined8 *)(param_2 + 0x170);
  uVar1 = *(undefined4 *)(param_2 + 0x178);
  uVar2 = *(undefined4 *)(param_2 + 0x17c);
  uVar3 = *(undefined4 *)(param_2 + 0x180);
  uVar4 = *(undefined4 *)(param_2 + 0x184);
  uVar5 = *(undefined4 *)(param_2 + 0x185);
  uVar6 = *(undefined4 *)(param_2 + 0x189);
  uVar7 = *(undefined4 *)(param_2 + 0x18d);
  *(undefined4 *)(param_1 + 0x181) = *(undefined4 *)(param_2 + 0x181);
  *(undefined4 *)(param_1 + 0x185) = uVar5;
  *(undefined4 *)(param_1 + 0x189) = uVar6;
  *(undefined4 *)(param_1 + 0x18d) = uVar7;
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  *(undefined4 *)(param_1 + 0x180) = uVar3;
  *(undefined4 *)(param_1 + 0x184) = uVar4;
  *(undefined8 *)(param_1 + 0x168) = uVar8;
  *(undefined8 *)(param_1 + 0x170) = uVar9;
  puVar12 = (undefined8 *)(param_2 + 0x1a0);
  puVar13 = (undefined8 *)(param_1 + 0x1a0);
  for (lVar11 = 0xf; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  uVar1 = *(undefined4 *)(param_2 + 0x22c);
  uVar2 = *(undefined4 *)(param_2 + 0x230);
  uVar3 = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  FUN_144a787a6(param_1 + 0x238,param_2 + 0x238);
  *(undefined1 *)(param_1 + 0x24c) = *(undefined1 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined2 *)(param_1 + 600) = *(undefined2 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  if ((*(longlong *)(param_1 + 0x260) != *(longlong *)(param_2 + 0x260)) ||
     (*(int *)(param_1 + 0x268) != *(int *)(param_2 + 0x268))) {
    *(longlong *)(param_1 + 0x260) = *(longlong *)(param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  uVar1 = *(undefined4 *)(param_2 + 0x27c);
  uVar2 = *(undefined4 *)(param_2 + 0x280);
  uVar3 = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = uVar1;
  *(undefined4 *)(param_1 + 0x280) = uVar2;
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  if ((*(longlong *)(param_1 + 0x290) != *(longlong *)(param_2 + 0x290)) ||
     (*(int *)(param_1 + 0x298) != *(int *)(param_2 + 0x298))) {
    *(longlong *)(param_1 + 0x290) = *(longlong *)(param_2 + 0x290);
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  FUN_14118c70e(param_1 + 0x2a8,param_2 + 0x2a8);
  if ((*(longlong *)(param_1 + 0x2e8) != *(longlong *)(param_2 + 0x2e8)) ||
     (*(int *)(param_1 + 0x2f0) != *(int *)(param_2 + 0x2f0))) {
    *(longlong *)(param_1 + 0x2e8) = *(longlong *)(param_2 + 0x2e8);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
  }
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  FUN_1401f3db8(param_1 + 0x308,param_2 + 0x308);
  *(byte *)(param_1 + 800) = *(byte *)(param_1 + 800) & 0xfe | *(byte *)(param_2 + 800) & 1;
  *(undefined1 *)(param_1 + 0x328) = *(undefined1 *)(param_2 + 0x328);
  FUN_140115bdc(param_1 + 0x330,param_2 + 0x330);
  FUN_140115bdc(param_1 + 0x350,param_2 + 0x350);
  FUN_1401f3db8(param_1 + 0x370,param_2 + 0x370);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x388);
  FUN_148615f04(param_1 + 0x390,param_2 + 0x390);
  FUN_14861620a(param_1 + 0x3a0,param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
  *(undefined1 *)(param_1 + 0x3b4) = *(undefined1 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  if ((*(longlong *)(param_1 + 0x3c8) != *(longlong *)(param_2 + 0x3c8)) ||
     (*(int *)(param_1 + 0x3d0) != *(int *)(param_2 + 0x3d0))) {
    *(longlong *)(param_1 + 0x3c8) = *(longlong *)(param_2 + 0x3c8);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
    *(undefined8 *)(param_1 + 0x3d8) = 0;
  }
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_2 + 0x3e0);
  *(undefined2 *)(param_1 + 1000) = *(undefined2 *)(param_2 + 1000);
  *(undefined1 *)(param_1 + 0x3ea) = *(undefined1 *)(param_2 + 0x3ea);
  FUN_147f2b382(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_147f2b382(param_1 + 0x400,param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_2 + 0x418);
  if ((*(longlong *)(param_1 + 0x428) != *(longlong *)(param_2 + 0x428)) ||
     (*(int *)(param_1 + 0x430) != *(int *)(param_2 + 0x430))) {
    *(longlong *)(param_1 + 0x428) = *(longlong *)(param_2 + 0x428);
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
    *(undefined8 *)(param_1 + 0x438) = 0;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x440);
  uVar9 = *(undefined8 *)(param_2 + 0x448);
  uVar10 = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0x450);
  *(undefined8 *)(param_1 + 0x458) = uVar10;
  *(undefined8 *)(param_1 + 0x440) = uVar8;
  *(undefined8 *)(param_1 + 0x448) = uVar9;
  if ((*(longlong *)(param_1 + 0x460) != *(longlong *)(param_2 + 0x460)) ||
     (*(int *)(param_1 + 0x468) != *(int *)(param_2 + 0x468))) {
    *(longlong *)(param_1 + 0x460) = *(longlong *)(param_2 + 0x460);
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
    *(undefined8 *)(param_1 + 0x470) = 0;
  }
  *(undefined8 *)(param_1 + 0x485) = *(undefined8 *)(param_2 + 0x485);
  uVar8 = *(undefined8 *)(param_2 + 0x480);
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_2 + 0x478);
  *(undefined8 *)(param_1 + 0x480) = uVar8;
  uVar1 = *(undefined4 *)(param_2 + 0x49c);
  uVar2 = *(undefined4 *)(param_2 + 0x4a0);
  uVar3 = *(undefined4 *)(param_2 + 0x4a4);
  uVar4 = *(undefined4 *)(param_2 + 0x4a8);
  uVar5 = *(undefined4 *)(param_2 + 0x4ac);
  uVar6 = *(undefined4 *)(param_2 + 0x4b0);
  uVar7 = *(undefined4 *)(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = uVar1;
  *(undefined4 *)(param_1 + 0x4a0) = uVar2;
  *(undefined4 *)(param_1 + 0x4a4) = uVar3;
  *(undefined4 *)(param_1 + 0x4a8) = uVar4;
  *(undefined4 *)(param_1 + 0x4ac) = uVar5;
  *(undefined4 *)(param_1 + 0x4b0) = uVar6;
  *(undefined4 *)(param_1 + 0x4b4) = uVar7;
  FUN_1486162fa(param_1 + 0x4b8,param_2 + 0x4b8);
  *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_2 + 0x4c8);
  FUN_148615f62(param_1 + 0x4d0,param_2 + 0x4d0);
  if ((*(longlong *)(param_1 + 0x4e0) != *(longlong *)(param_2 + 0x4e0)) ||
     (*(int *)(param_1 + 0x4e8) != *(int *)(param_2 + 0x4e8))) {
    *(longlong *)(param_1 + 0x4e0) = *(longlong *)(param_2 + 0x4e0);
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
  }
  FUN_144a7bb84(param_1 + 0x4f8,param_2 + 0x4f8);
  FUN_144a7bb84(param_1 + 0x510,param_2 + 0x510);
  FUN_144a7bb84(param_1 + 0x528,param_2 + 0x528);
  FUN_144a7bb84(param_1 + 0x540,param_2 + 0x540);
  FUN_144a7bb84(param_1 + 0x558,param_2 + 0x558);
  FUN_14123c256(param_1 + 0x570,param_2 + 0x570);
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_2 + 0x588);
  *(undefined1 *)(param_1 + 0x590) = *(undefined1 *)(param_2 + 0x590);
  *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_2 + 0x598);
  uVar1 = *(undefined4 *)(param_2 + 0x5a4);
  uVar2 = *(undefined4 *)(param_2 + 0x5a8);
  uVar3 = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_2 + 0x5a0);
  *(undefined4 *)(param_1 + 0x5a4) = uVar1;
  *(undefined4 *)(param_1 + 0x5a8) = uVar2;
  *(undefined4 *)(param_1 + 0x5ac) = uVar3;
  FUN_144a787a6(param_1 + 0x5b0,param_2 + 0x5b0);
  if ((*(longlong *)(param_1 + 0x5c0) != *(longlong *)(param_2 + 0x5c0)) ||
     (*(int *)(param_1 + 0x5c8) != *(int *)(param_2 + 0x5c8))) {
    *(longlong *)(param_1 + 0x5c0) = *(longlong *)(param_2 + 0x5c0);
    *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x608) = *(undefined8 *)(param_2 + 0x608);
  uVar8 = *(undefined8 *)(param_2 + 0x5d8);
  uVar9 = *(undefined8 *)(param_2 + 0x5e0);
  uVar1 = *(undefined4 *)(param_2 + 0x5e8);
  uVar2 = *(undefined4 *)(param_2 + 0x5ec);
  uVar3 = *(undefined4 *)(param_2 + 0x5f0);
  uVar4 = *(undefined4 *)(param_2 + 0x5f4);
  uVar5 = *(undefined4 *)(param_2 + 0x5fc);
  uVar6 = *(undefined4 *)(param_2 + 0x600);
  uVar7 = *(undefined4 *)(param_2 + 0x604);
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x5fc) = uVar5;
  *(undefined4 *)(param_1 + 0x600) = uVar6;
  *(undefined4 *)(param_1 + 0x604) = uVar7;
  *(undefined4 *)(param_1 + 0x5e8) = uVar1;
  *(undefined4 *)(param_1 + 0x5ec) = uVar2;
  *(undefined4 *)(param_1 + 0x5f0) = uVar3;
  *(undefined4 *)(param_1 + 0x5f4) = uVar4;
  *(undefined8 *)(param_1 + 0x5d8) = uVar8;
  *(undefined8 *)(param_1 + 0x5e0) = uVar9;
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_2 + 0x610);
  uVar1 = *(undefined4 *)(param_2 + 0x61c);
  uVar2 = *(undefined4 *)(param_2 + 0x620);
  uVar3 = *(undefined4 *)(param_2 + 0x624);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x618);
  *(undefined4 *)(param_1 + 0x61c) = uVar1;
  *(undefined4 *)(param_1 + 0x620) = uVar2;
  *(undefined4 *)(param_1 + 0x624) = uVar3;
  FUN_144a787a6(param_1 + 0x628,param_2 + 0x628);
  if ((*(longlong *)(param_1 + 0x638) != *(longlong *)(param_2 + 0x638)) ||
     (*(int *)(param_1 + 0x640) != *(int *)(param_2 + 0x640))) {
    *(longlong *)(param_1 + 0x638) = *(longlong *)(param_2 + 0x638);
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x640);
    *(undefined8 *)(param_1 + 0x648) = 0;
  }
  puVar12 = (undefined8 *)(param_2 + 0x650);
  puVar13 = (undefined8 *)(param_1 + 0x650);
  for (lVar11 = 8; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)(param_1 + 0x694) = *(undefined2 *)(param_2 + 0x694);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 0x690);
  if ((*(longlong *)(param_1 + 0x698) != *(longlong *)(param_2 + 0x698)) ||
     (*(int *)(param_1 + 0x6a0) != *(int *)(param_2 + 0x6a0))) {
    *(longlong *)(param_1 + 0x698) = *(longlong *)(param_2 + 0x698);
    *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 0x6a0);
    *(undefined8 *)(param_1 + 0x6a8) = 0;
  }
  *(undefined1 *)(param_1 + 0x6b0) = *(undefined1 *)(param_2 + 0x6b0);
  *(undefined8 *)(param_1 + 0x6b8) = *(undefined8 *)(param_2 + 0x6b8);
  uVar1 = *(undefined4 *)(param_2 + 0x6c4);
  uVar2 = *(undefined4 *)(param_2 + 0x6c8);
  uVar3 = *(undefined4 *)(param_2 + 0x6cc);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_2 + 0x6c0);
  *(undefined4 *)(param_1 + 0x6c4) = uVar1;
  *(undefined4 *)(param_1 + 0x6c8) = uVar2;
  *(undefined4 *)(param_1 + 0x6cc) = uVar3;
  FUN_144a787a6(param_1 + 0x6d0,param_2 + 0x6d0);
  FUN_148615fc0(param_1 + 0x6e0,param_2 + 0x6e0);
  return param_1;
}



// FUNCTION 148615f04 FUN_148615f04 body=93 status=ok
// SIG undefined FUN_148615f04(void)

undefined8 * FUN_148615f04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140653573(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861601e(param_1,iVar1);
      FUN_148616090(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148615f62 FUN_148615f62 body=93 status=ok
// SIG undefined FUN_148615f62(void)

undefined8 * FUN_148615f62(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140adf0db(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148616414(param_1,iVar1);
      FUN_148616487(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148615fc0 FUN_148615fc0 body=93 status=ok
// SIG undefined FUN_148615fc0(void)

undefined8 * FUN_148615fc0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140753a84(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486164bc(param_1,iVar1);
      FUN_14861652f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861601e FUN_14861601e body=114 status=ok
// SIG undefined FUN_14861601e(void)

void FUN_14861601e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,8);
    iVar2 = (int)(uVar1 / 0xf0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148616090 FUN_148616090 body=60 status=ok
// SIG undefined FUN_148616090(void)

void FUN_148616090(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486160cc(param_1,param_2);
    param_1 = param_1 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return;
}



// FUNCTION 1486160cc FUN_1486160cc body=318 status=ok
// SIG undefined FUN_1486160cc(void)

undefined8 * FUN_1486160cc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_145c4cb64(param_1 + 7,iVar1,0);
    FUN_141502622(param_1[7],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  FUN_144a7f96e(param_1 + 10,param_2 + 10);
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  param_1[0xf] = param_2[0xf];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  FUN_144a7f96e(param_1 + 0x14,param_2 + 0x14);
  uVar2 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar2;
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  return param_1;
}



// FUNCTION 14861620a FUN_14861620a body=79 status=ok
// SIG undefined FUN_14861620a(void)

undefined8 * FUN_14861620a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861625a(param_1,iVar1);
      FUN_1486162cd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861625a FUN_14861625a body=115 status=ok
// SIG undefined FUN_14861625a(void)

void FUN_14861625a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486162cd FUN_1486162cd body=44 status=ok
// SIG undefined FUN_1486162cd(void)

void FUN_1486162cd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486162fa FUN_1486162fa body=79 status=ok
// SIG undefined FUN_1486162fa(void)

undefined8 * FUN_1486162fa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861634a(param_1,iVar1);
      FUN_1486163bd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861634a FUN_14861634a body=115 status=ok
// SIG undefined FUN_14861634a(void)

void FUN_14861634a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486163bd FUN_1486163bd body=87 status=ok
// SIG undefined FUN_1486163bd(void)

void FUN_1486163bd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1) = *(undefined4 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 4 + lVar1) = *(undefined4 *)(param_2 + 4 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0xc + lVar1) = *(undefined4 *)(param_2 + 0xc + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      *(undefined4 *)(param_1 + 0x14 + lVar1) = *(undefined4 *)(param_2 + 0x14 + lVar1);
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148616414 FUN_148616414 body=115 status=ok
// SIG undefined FUN_148616414(void)

void FUN_148616414(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148616487 FUN_148616487 body=52 status=ok
// SIG undefined FUN_148616487(void)

void FUN_148616487(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486164bc FUN_1486164bc body=115 status=ok
// SIG undefined FUN_1486164bc(void)

void FUN_1486164bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861652f FUN_14861652f body=134 status=ok
// SIG undefined FUN_14861652f(void)

void FUN_14861652f(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 1486165b6 FUN_1486165b6 body=43 status=ok
// SIG undefined FUN_1486165b6(void)

undefined8 FUN_1486165b6(undefined8 param_1,int param_2)

{
  FUN_140adedd4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 1486165e8 FUN_1486165e8 body=28 status=ok
// SIG undefined FUN_1486165e8(void)

undefined8 FUN_1486165e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148616648 FUN_148616648 body=138 status=ok
// SIG undefined FUN_148616648(void)

undefined1 FUN_148616648(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + 4 + lVar5) = *(undefined2 *)(param_3 + 4 + lVar5);
      *(undefined4 *)(param_2 + lVar5) = *(undefined4 *)(param_3 + lVar5);
      lVar4 = *(longlong *)(param_3 + 8 + lVar5);
      if ((bVar3 & 1) != 0) {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_14689c22e();
          lVar4 = *(longlong *)(param_3 + 8 + lVar5);
          bVar3 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar5;
      *(longlong *)(lVar1 + 8) = lVar4;
      uVar2 = *(undefined8 *)(param_3 + 0x15 + lVar5);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + 0x10 + lVar5);
      *(undefined8 *)(lVar1 + 0x15) = uVar2;
      lVar5 = lVar5 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486166fa FUN_1486166fa body=59 status=ok
// SIG undefined FUN_1486166fa(void)

undefined8 FUN_1486166fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486167d0 FUN_1486167d0 body=62 status=ok
// SIG undefined FUN_1486167d0(void)

undefined1 FUN_1486167d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148616836 FUN_148616836 body=59 status=ok
// SIG undefined FUN_148616836(void)

undefined8 FUN_148616836(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861687c FUN_14861687c body=43 status=ok
// SIG undefined FUN_14861687c(void)

void FUN_14861687c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486168fc FUN_1486168fc body=28 status=ok
// SIG undefined FUN_1486168fc(void)

undefined8 FUN_1486168fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14861692a caseD_3 body=14 status=ok
// SIG undefined caseD_3(void)

void switchD_148704b3c::caseD_3(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 148616956 FUN_148616956 body=166 status=ok
// SIG undefined FUN_148616956(void)

undefined8 FUN_148616956(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      lVar1 = param_3 + lVar7;
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      lVar2 = param_2 + 0x18 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)(lVar2 + -0xc) = uVar4;
      *(undefined4 *)(lVar2 + -8) = uVar5;
      *(undefined4 *)(lVar2 + -4) = uVar6;
      FUN_1418443e8(lVar2,lVar1 + 0x18);
      uVar3 = *(undefined8 *)(lVar1 + 0x35);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x1d) = uVar3;
      FUN_1470c5506(param_2 + lVar7 + 0x40,param_3 + lVar7 + 0x40);
      FUN_1459a0a08(param_2 + lVar7 + 0xb0,param_3 + lVar7 + 0xb0);
      lVar7 = lVar7 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148616a24 FUN_148616a24 body=59 status=ok
// SIG undefined FUN_148616a24(void)

undefined8 FUN_148616a24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148616a70 FUN_148616a70 body=57 status=ok
// SIG undefined FUN_148616a70(void)

void FUN_148616a70(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *param_2 = &PTR_FUN_14aff06f0;
    if (param_2[0x16] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148616af6 FUN_148616af6 body=46 status=ok
// SIG undefined FUN_148616af6(void)

void FUN_148616af6(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff08c0;
  return;
}



// FUNCTION 148616b24 FUN_148616b24 body=32 status=ok
// SIG undefined FUN_148616b24(void)

void FUN_148616b24(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff08c0;
  return;
}



// FUNCTION 148616b68 FUN_148616b68 body=70 status=ok
// SIG undefined FUN_148616b68(void)

undefined8 FUN_148616b68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140115bdc(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148616bd6 FUN_148616bd6 body=59 status=ok
// SIG undefined FUN_148616bd6(void)

undefined8 FUN_148616bd6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148616c1c FUN_148616c1c body=34 status=ok
// SIG undefined FUN_148616c1c(void)

void FUN_148616c1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861ae00(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148616c8c FUN_148616c8c body=43 status=ok
// SIG undefined FUN_148616c8c(void)

undefined8 FUN_148616c8c(undefined8 param_1,int param_2)

{
  FUN_14861ae00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148616cb8 FUN_148616cb8 body=55 status=ok
// SIG undefined FUN_148616cb8(void)

void FUN_148616cb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54b90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54b90 = FUN_140002ddd(FUN_1464ae989,uVar1,L"AvatarAspectGameData");
  }
  return;
}



// FUNCTION 148616cf0 FUN_148616cf0 body=43 status=ok
// SIG undefined FUN_148616cf0(void)

undefined8 FUN_148616cf0(undefined8 param_1,int param_2)

{
  FUN_14861ae00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148616d56 FUN_148616d56 body=83 status=ok
// SIG undefined FUN_148616d56(void)

undefined8 FUN_148616d56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_141289ada(param_2 + -0x18,param_3 + -0x18);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148616dd2 FUN_148616dd2 body=59 status=ok
// SIG undefined FUN_148616dd2(void)

undefined8 FUN_148616dd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148616e18 FUN_148616e18 body=34 status=ok
// SIG undefined FUN_148616e18(void)

void FUN_148616e18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148616e8e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148616e8e FUN_148616e8e body=85 status=ok
// SIG undefined FUN_148616e8e(void)

void FUN_148616e8e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aff0a40;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148616ee4 FUN_148616ee4 body=43 status=ok
// SIG undefined FUN_148616ee4(void)

undefined8 FUN_148616ee4(undefined8 param_1,int param_2)

{
  FUN_148616e8e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 148616f10 FUN_148616f10 body=55 status=ok
// SIG undefined FUN_148616f10(void)

void FUN_148616f10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54ba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54ba8 = FUN_140002ddd(FUN_1464ae9e8,uVar1,L"AvatarAspectDef");
  }
  return;
}



// FUNCTION 148616f48 FUN_148616f48 body=104 status=ok
// SIG undefined FUN_148616f48(void)

undefined8 FUN_148616f48(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e5528(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148616fb2 FUN_148616fb2 body=28 status=ok
// SIG undefined FUN_148616fb2(void)

undefined8 FUN_148616fb2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486170bc FUN_1486170bc body=63 status=ok
// SIG undefined FUN_1486170bc(void)

undefined1 FUN_1486170bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486172ae(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148617124 FUN_148617124 body=59 status=ok
// SIG undefined FUN_148617124(void)

undefined8 FUN_148617124(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148617170 FUN_148617170 body=40 status=ok
// SIG undefined FUN_148617170(void)

void FUN_148617170(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_148617258(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486171f4 FUN_1486171f4 body=43 status=ok
// SIG undefined FUN_1486171f4(void)

undefined8 FUN_1486171f4(undefined8 param_1,int param_2)

{
  FUN_148617258();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 148617220 FUN_148617220 body=55 status=ok
// SIG undefined FUN_148617220(void)

void FUN_148617220(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54bc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54bc0 = FUN_140002ddd(FUN_1464aea81,uVar1,L"AvatarMaterialSlot");
  }
  return;
}



// FUNCTION 148617258 FUN_148617258 body=86 status=ok
// SIG undefined FUN_148617258(void)

void FUN_148617258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff0bf0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0xb);
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486172ae FUN_1486172ae body=96 status=ok
// SIG undefined FUN_1486172ae(void)

longlong FUN_1486172ae(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14861730e(param_1 + 0x40,param_2 + 0x40);
  FUN_141262aba(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14861730e FUN_14861730e body=84 status=ok
// SIG undefined FUN_14861730e(void)

longlong * FUN_14861730e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148617414 FUN_148617414 body=59 status=ok
// SIG undefined FUN_148617414(void)

undefined8 FUN_148617414(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486174b4 FUN_1486174b4 body=34 status=ok
// SIG undefined FUN_1486174b4(void)

undefined8 FUN_1486174b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1486174d6 FUN_1486174d6 body=55 status=ok
// SIG undefined FUN_1486174d6(void)

void FUN_1486174d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54bd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54bd8 = FUN_140002ddd(FUN_1464aeb17,uVar1,L"AvatarViewableFeatureState");
  }
  return;
}



// FUNCTION 148617596 FUN_148617596 body=59 status=ok
// SIG undefined FUN_148617596(void)

undefined8 FUN_148617596(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148617644 FUN_148617644 body=38 status=ok
// SIG undefined FUN_148617644(void)

void FUN_148617644(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1487e626e(param_2);
  *param_2 = &PTR_FUN_14aff1050;
  return;
}



// FUNCTION 14861766a FUN_14861766a body=32 status=ok
// SIG undefined FUN_14861766a(void)

void FUN_14861766a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487e626e(param_2);
  *param_2 = &PTR_FUN_14aff1050;
  return;
}



// FUNCTION 1486176f4 FUN_1486176f4 body=59 status=ok
// SIG undefined FUN_1486176f4(void)

undefined8 FUN_1486176f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486177a0 FUN_1486177a0 body=34 status=ok
// SIG undefined FUN_1486177a0(void)

undefined8 FUN_1486177a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1486177c2 FUN_1486177c2 body=55 status=ok
// SIG undefined FUN_1486177c2(void)

void FUN_1486177c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54c08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54c08 = FUN_140002ddd(FUN_1464aec45,uVar1,L"AvatarOptionFeatureByAspect");
  }
  return;
}



// FUNCTION 148617870 FUN_148617870 body=83 status=ok
// SIG undefined FUN_148617870(void)

undefined8 FUN_148617870(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_148617a88(param_2 + -0x20,param_3 + -0x20);
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_148617adc(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486178ec FUN_1486178ec body=59 status=ok
// SIG undefined FUN_1486178ec(void)

undefined8 FUN_1486178ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148617932 FUN_148617932 body=34 status=ok
// SIG undefined FUN_148617932(void)

void FUN_148617932(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148617a06(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1486179a2 FUN_1486179a2 body=43 status=ok
// SIG undefined FUN_1486179a2(void)

undefined8 FUN_1486179a2(undefined8 param_1,int param_2)

{
  FUN_148617a06();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1486179ce FUN_1486179ce body=55 status=ok
// SIG undefined FUN_1486179ce(void)

void FUN_1486179ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54c20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54c20 = FUN_140002ddd(FUN_1464aecdd,uVar1,L"AvatarOptionFeatures");
  }
  return;
}



// FUNCTION 148617a06 FUN_148617a06 body=56 status=ok
// SIG undefined FUN_148617a06(void)

void FUN_148617a06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff11e0;
  FUN_148617a3e(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148617a3e FUN_148617a3e body=73 status=ok
// SIG undefined FUN_148617a3e(void)

void FUN_148617a3e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
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



// FUNCTION 148617a88 FUN_148617a88 body=84 status=ok
// SIG undefined FUN_148617a88(void)

longlong * FUN_148617a88(longlong *param_1,longlong *param_2)

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



// FUNCTION 148617adc FUN_148617adc body=95 status=ok
// SIG undefined FUN_148617adc(void)

undefined8 * FUN_148617adc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148617a3e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148617b3c(param_1,iVar1);
      FUN_148617baf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148617b3c FUN_148617b3c body=115 status=ok
// SIG undefined FUN_148617b3c(void)

void FUN_148617b3c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148617baf FUN_148617baf body=52 status=ok
// SIG undefined FUN_148617baf(void)

void FUN_148617baf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148617c86 FUN_148617c86 body=59 status=ok
// SIG undefined FUN_148617c86(void)

undefined8 FUN_148617c86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148617d26 FUN_148617d26 body=34 status=ok
// SIG undefined FUN_148617d26(void)

undefined8 FUN_148617d26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148617d48 FUN_148617d48 body=55 status=ok
// SIG undefined FUN_148617d48(void)

void FUN_148617d48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54c38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54c38 = FUN_140002ddd(FUN_1464aed73,uVar1,L"AvatarParameterExport");
  }
  return;
}



// FUNCTION 148617e46 FUN_148617e46 body=139 status=ok
// SIG undefined FUN_148617e46(void)

undefined8 FUN_148617e46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      uVar4 = *(undefined8 *)(param_3 + -0x40);
      uVar5 = *(undefined8 *)(param_3 + -0x38);
      uVar1 = *(undefined4 *)(param_3 + -0x2c);
      uVar2 = *(undefined4 *)(param_3 + -0x28);
      uVar3 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar1;
      *(undefined4 *)(param_2 + -0x28) = uVar2;
      *(undefined4 *)(param_2 + -0x24) = uVar3;
      *(undefined8 *)(param_2 + -0x40) = uVar4;
      *(undefined8 *)(param_2 + -0x38) = uVar5;
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148617efa FUN_148617efa body=59 status=ok
// SIG undefined FUN_148617efa(void)

undefined8 FUN_148617efa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148617f46 FUN_148617f46 body=40 status=ok
// SIG undefined FUN_148617f46(void)

void FUN_148617f46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_148618020(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148617fbc FUN_148617fbc body=43 status=ok
// SIG undefined FUN_148617fbc(void)

undefined8 FUN_148617fbc(undefined8 param_1,int param_2)

{
  FUN_148618020();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 148617fe8 FUN_148617fe8 body=55 status=ok
// SIG undefined FUN_148617fe8(void)

void FUN_148617fe8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54c68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54c68 = FUN_140002ddd(FUN_1464aee3b,uVar1,L"AvatarParameterSource");
  }
  return;
}



// FUNCTION 148618020 FUN_148618020 body=58 status=ok
// SIG undefined FUN_148618020(void)

void FUN_148618020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff1550;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486180e8 FUN_1486180e8 body=115 status=ok
// SIG undefined FUN_1486180e8(void)

undefined8 FUN_1486180e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      uVar4 = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x20) = uVar4;
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148618184 FUN_148618184 body=59 status=ok
// SIG undefined FUN_148618184(void)

undefined8 FUN_148618184(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486181ca FUN_1486181ca body=34 status=ok
// SIG undefined FUN_1486181ca(void)

void FUN_1486181ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14861829e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14861823a FUN_14861823a body=43 status=ok
// SIG undefined FUN_14861823a(void)

undefined8 FUN_14861823a(undefined8 param_1,int param_2)

{
  FUN_14861829e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 148618266 FUN_148618266 body=55 status=ok
// SIG undefined FUN_148618266(void)

void FUN_148618266(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54c80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54c80 = FUN_140002ddd(FUN_1464aeed3,uVar1,L"AvatarParameterPreset");
  }
  return;
}



// FUNCTION 14861829e FUN_14861829e body=58 status=ok
// SIG undefined FUN_14861829e(void)

void FUN_14861829e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff16c0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486183ba FUN_1486183ba body=59 status=ok
// SIG undefined FUN_1486183ba(void)

undefined8 FUN_1486183ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861845a FUN_14861845a body=34 status=ok
// SIG undefined FUN_14861845a(void)

undefined8 FUN_14861845a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14861847c FUN_14861847c body=55 status=ok
// SIG undefined FUN_14861847c(void)

void FUN_14861847c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54c98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54c98 = FUN_140002ddd(FUN_1464aef69,uVar1,L"AvatarParameterPresetVector");
  }
  return;
}



// FUNCTION 14861852c FUN_14861852c body=59 status=ok
// SIG undefined FUN_14861852c(void)

undefined8 FUN_14861852c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148618604 FUN_148618604 body=87 status=ok
// SIG undefined FUN_148618604(void)

undefined1 FUN_148618604(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486187b0(param_2,param_3);
    FUN_1457d258e(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148618684 FUN_148618684 body=59 status=ok
// SIG undefined FUN_148618684(void)

undefined8 FUN_148618684(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486186ca FUN_1486186ca body=34 status=ok
// SIG undefined FUN_1486186ca(void)

void FUN_1486186ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14861873a(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14861873a FUN_14861873a body=70 status=ok
// SIG undefined FUN_14861873a(void)

void FUN_14861873a(longlong *param_1)

{
  FUN_140595ef6(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_148618780(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148618780 FUN_148618780 body=47 status=ok
// SIG undefined FUN_148618780(void)

void FUN_148618780(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1486187b0 FUN_1486187b0 body=95 status=ok
// SIG undefined FUN_1486187b0(void)

undefined8 * FUN_1486187b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148618780(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148618810(param_1,iVar1);
      FUN_148618883(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148618810 FUN_148618810 body=115 status=ok
// SIG undefined FUN_148618810(void)

void FUN_148618810(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148618883 FUN_148618883 body=134 status=ok
// SIG undefined FUN_148618883(void)

void FUN_148618883(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 14861893e FUN_14861893e body=131 status=ok
// SIG undefined FUN_14861893e(void)

undefined1 FUN_14861893e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined1 *)(param_2 + lVar1 + 0x18) = *(undefined1 *)(param_3 + lVar1 + 0x18);
      FUN_148618aa4(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_148618b04(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486189ea FUN_1486189ea body=59 status=ok
// SIG undefined FUN_1486189ea(void)

undefined8 FUN_1486189ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148618a30 FUN_148618a30 body=34 status=ok
// SIG undefined FUN_148618a30(void)

void FUN_148618a30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148618c4e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148618aa4 FUN_148618aa4 body=95 status=ok
// SIG undefined FUN_148618aa4(void)

undefined8 * FUN_148618aa4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148618b5c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148618ba6(param_1,iVar1);
      FUN_148618c19(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148618b04 FUN_148618b04 body=88 status=ok
// SIG undefined FUN_148618b04(void)

undefined8 * FUN_148618b04(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14012afbc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148618b5c FUN_148618b5c body=73 status=ok
// SIG undefined FUN_148618b5c(void)

void FUN_148618b5c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
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



// FUNCTION 148618ba6 FUN_148618ba6 body=115 status=ok
// SIG undefined FUN_148618ba6(void)

void FUN_148618ba6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148618c19 FUN_148618c19 body=52 status=ok
// SIG undefined FUN_148618c19(void)

void FUN_148618c19(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148618c4e FUN_148618c4e body=85 status=ok
// SIG undefined FUN_148618c4e(void)

void FUN_148618c4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff1d70;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_148618b5c(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148618ca4 FUN_148618ca4 body=43 status=ok
// SIG undefined FUN_148618ca4(void)

undefined8 FUN_148618ca4(undefined8 param_1,int param_2)

{
  FUN_148618c4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 148618cd0 FUN_148618cd0 body=55 status=ok
// SIG undefined FUN_148618cd0(void)

void FUN_148618cd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54d78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54d78 = FUN_140002ddd(FUN_1464af18d,uVar1,L"AvatarFeatureDef");
  }
  return;
}



// FUNCTION 148618d08 FUN_148618d08 body=104 status=ok
// SIG undefined FUN_148618d08(void)

undefined8 FUN_148618d08(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e3976(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148618d72 FUN_148618d72 body=28 status=ok
// SIG undefined FUN_148618d72(void)

undefined8 FUN_148618d72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148618da0 FUN_148618da0 body=46 status=ok
// SIG undefined FUN_148618da0(void)

void FUN_148618da0(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff1f20;
  return;
}



// FUNCTION 148618dce FUN_148618dce body=32 status=ok
// SIG undefined FUN_148618dce(void)

void FUN_148618dce(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff1f20;
  return;
}



// FUNCTION 148618e12 FUN_148618e12 body=70 status=ok
// SIG undefined FUN_148618e12(void)

undefined8 FUN_148618e12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140115bdc(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148618e80 FUN_148618e80 body=59 status=ok
// SIG undefined FUN_148618e80(void)

undefined8 FUN_148618e80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148618ec6 FUN_148618ec6 body=34 status=ok
// SIG undefined FUN_148618ec6(void)

void FUN_148618ec6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861ae00(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148618f36 FUN_148618f36 body=43 status=ok
// SIG undefined FUN_148618f36(void)

undefined8 FUN_148618f36(undefined8 param_1,int param_2)

{
  FUN_14861ae00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148618f62 FUN_148618f62 body=55 status=ok
// SIG undefined FUN_148618f62(void)

void FUN_148618f62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54d90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54d90 = FUN_140002ddd(FUN_1464af223,uVar1,L"AvatarFormGameData");
  }
  return;
}



// FUNCTION 148618fce FUN_148618fce body=63 status=ok
// SIG undefined FUN_148618fce(void)

undefined1 FUN_148618fce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148619108(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 148619036 FUN_148619036 body=59 status=ok
// SIG undefined FUN_148619036(void)

undefined8 FUN_148619036(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148619082 FUN_148619082 body=40 status=ok
// SIG undefined FUN_148619082(void)

void FUN_148619082(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_145ca69da(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 148619108 FUN_148619108 body=301 status=ok
// SIG undefined FUN_148619108(void)

longlong FUN_148619108(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  FUN_148619236(param_1 + 0x38,param_2 + 0x38);
  FUN_148617a88(param_1 + 0x88,param_2 + 0x88);
  FUN_1486192b0(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140115bdc(param_1 + 0xf0,param_2 + 0xf0);
  FUN_140115bdc(param_1 + 0x110,param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  FUN_140115bdc(param_1 + 0x138,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  FUN_140115bdc(param_1 + 0x160,param_2 + 0x160);
  FUN_14861932a(param_1 + 0x180,param_2 + 0x180);
  FUN_1486197a4(param_1 + 400,param_2 + 400);
  FUN_148619896(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_14861938a(param_1 + 0x230,param_2 + 0x230);
  FUN_14184443c(param_1 + 0x240,param_2 + 0x240);
  FUN_1401f3db8(param_1 + 600,param_2 + 600);
  return param_1;
}



// FUNCTION 148619236 FUN_148619236 body=122 status=ok
// SIG undefined FUN_148619236(void)

longlong FUN_148619236(longlong param_1,longlong param_2)

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
    FUN_1486193ea(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486192b0 FUN_1486192b0 body=122 status=ok
// SIG undefined FUN_1486192b0(void)

longlong FUN_1486192b0(longlong param_1,longlong param_2)

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
    FUN_148619504(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861932a FUN_14861932a body=95 status=ok
// SIG undefined FUN_14861932a(void)

undefined8 * FUN_14861932a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ca6c64(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861961e(param_1,iVar1);
      FUN_148619680(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861938a FUN_14861938a body=95 status=ok
// SIG undefined FUN_14861938a(void)

undefined8 * FUN_14861938a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ca6c63(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861998a(param_1,iVar1);
      FUN_1486199fd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486193ea FUN_1486193ea body=210 status=ok
// SIG undefined FUN_1486193ea(void)

undefined8 * FUN_1486193ea(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ca6e82(param_1,(ulonglong)uVar1);
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
          FUN_1486194bc(puVar6,puVar4);
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



// FUNCTION 1486194bc FUN_1486194bc body=71 status=ok
// SIG undefined FUN_1486194bc(void)

undefined8 * FUN_1486194bc(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148619504 FUN_148619504 body=210 status=ok
// SIG undefined FUN_148619504(void)

undefined8 * FUN_148619504(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ca6e06(param_1,(ulonglong)uVar1);
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
          FUN_1486195d6(puVar6,puVar4);
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



// FUNCTION 1486195d6 FUN_1486195d6 body=71 status=ok
// SIG undefined FUN_1486195d6(void)

undefined8 * FUN_1486195d6(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14861961e FUN_14861961e body=98 status=ok
// SIG undefined FUN_14861961e(void)

void FUN_14861961e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148619680 FUN_148619680 body=60 status=ok
// SIG undefined FUN_148619680(void)

void FUN_148619680(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486196bc(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 1486196bc FUN_1486196bc body=232 status=ok
// SIG undefined FUN_1486196bc(void)

undefined8 * FUN_1486196bc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_14aff1550;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  pvVar2 = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1486197a4 FUN_1486197a4 body=122 status=ok
// SIG undefined FUN_1486197a4(void)

longlong FUN_1486197a4(longlong param_1,longlong param_2)

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
    FUN_14861981e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861981e FUN_14861981e body=119 status=ok
// SIG undefined FUN_14861981e(void)

undefined8 * FUN_14861981e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14087ebc4(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 148619896 FUN_148619896 body=122 status=ok
// SIG undefined FUN_148619896(void)

longlong FUN_148619896(longlong param_1,longlong param_2)

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
    FUN_148619910(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148619910 FUN_148619910 body=121 status=ok
// SIG undefined FUN_148619910(void)

undefined8 * FUN_148619910(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ca6d8c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 14861998a FUN_14861998a body=115 status=ok
// SIG undefined FUN_14861998a(void)

void FUN_14861998a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486199fd FUN_1486199fd body=51 status=ok
// SIG undefined FUN_1486199fd(void)

void FUN_1486199fd(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      *(undefined ***)(param_1 + lVar6) = &PTR_FUN_14aff1350;
      puVar1 = (undefined8 *)(param_2 + 8 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x18 + lVar6);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x18 + lVar6);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar6 = lVar6 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148619a32 FUN_148619a32 body=43 status=ok
// SIG undefined FUN_148619a32(void)

undefined8 FUN_148619a32(undefined8 param_1,int param_2)

{
  FUN_145ca69da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 148619a5e FUN_148619a5e body=55 status=ok
// SIG undefined FUN_148619a5e(void)

void FUN_148619a5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54da8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54da8 = FUN_140002ddd(FUN_1464af282,uVar1,L"AvatarFormDef");
  }
  return;
}



// FUNCTION 148619a96 FUN_148619a96 body=57 status=ok
// SIG undefined FUN_148619a96(void)

undefined8 * FUN_148619a96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148619ad8 FUN_148619ad8 body=104 status=ok
// SIG undefined FUN_148619ad8(void)

undefined8 FUN_148619ad8(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e553e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148619b42 FUN_148619b42 body=28 status=ok
// SIG undefined FUN_148619b42(void)

undefined8 FUN_148619b42(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148619bfc FUN_148619bfc body=89 status=ok
// SIG undefined FUN_148619bfc(void)

undefined8 FUN_148619bfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_141289ada(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148618b04(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148619c7e FUN_148619c7e body=59 status=ok
// SIG undefined FUN_148619c7e(void)

undefined8 FUN_148619c7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148619cc4 FUN_148619cc4 body=34 status=ok
// SIG undefined FUN_148619cc4(void)

void FUN_148619cc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148619d9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148619d34 FUN_148619d34 body=43 status=ok
// SIG undefined FUN_148619d34(void)

undefined8 FUN_148619d34(undefined8 param_1,int param_2)

{
  FUN_148619d9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 148619d60 FUN_148619d60 body=55 status=ok
// SIG undefined FUN_148619d60(void)

void FUN_148619d60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54dc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54dc0 = FUN_140002ddd(FUN_1464af349,uVar1,L"AvatarTemplateNonDef");
  }
  return;
}



// FUNCTION 148619d9e FUN_148619d9e body=59 status=ok
// SIG undefined FUN_148619d9e(void)

void FUN_148619d9e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff2240;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148619dda FUN_148619dda body=46 status=ok
// SIG undefined FUN_148619dda(void)

void FUN_148619dda(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff23d0;
  return;
}



// FUNCTION 148619e08 FUN_148619e08 body=32 status=ok
// SIG undefined FUN_148619e08(void)

void FUN_148619e08(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff23d0;
  return;
}



// FUNCTION 148619e4c FUN_148619e4c body=70 status=ok
// SIG undefined FUN_148619e4c(void)

undefined8 FUN_148619e4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140115bdc(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148619eba FUN_148619eba body=59 status=ok
// SIG undefined FUN_148619eba(void)

undefined8 FUN_148619eba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148619f00 FUN_148619f00 body=34 status=ok
// SIG undefined FUN_148619f00(void)

void FUN_148619f00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861ae00(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148619f70 FUN_148619f70 body=43 status=ok
// SIG undefined FUN_148619f70(void)

undefined8 FUN_148619f70(undefined8 param_1,int param_2)

{
  FUN_14861ae00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148619f9c FUN_148619f9c body=55 status=ok
// SIG undefined FUN_148619f9c(void)

void FUN_148619f9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54dd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54dd8 = FUN_140002ddd(FUN_1464af3df,uVar1,L"AvatarOptionGameData");
  }
  return;
}



// FUNCTION 14861a008 FUN_14861a008 body=63 status=ok
// SIG undefined FUN_14861a008(void)

undefined1 FUN_14861a008(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14861a142(param_2,param_3);
    param_3 = param_3 + 0x330;
    param_2 = param_2 + 0x330;
  }
  return 1;
}



// FUNCTION 14861a070 FUN_14861a070 body=59 status=ok
// SIG undefined FUN_14861a070(void)

undefined8 FUN_14861a070(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861a0bc FUN_14861a0bc body=40 status=ok
// SIG undefined FUN_14861a0bc(void)

void FUN_14861a0bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x330) == '\x01') {
    FUN_14861a7ec(param_2);
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  return;
}



// FUNCTION 14861a142 FUN_14861a142 body=479 status=ok
// SIG undefined FUN_14861a142(void)

longlong FUN_14861a142(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_148618b04(param_1 + 0x30,param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  FUN_14861a322(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FUN_148618aa4(param_1 + 0x68,param_2 + 0x68);
  FUN_14861a376(param_1 + 0x78,param_2 + 0x78);
  *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_2 + 200);
  FUN_14861a3f0(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  FUN_140115bdc(param_1 + 0xe8,param_2 + 0xe8);
  FUN_140115bdc(param_1 + 0x108,param_2 + 0x108);
  FUN_140115bdc(param_1 + 0x128,param_2 + 0x128);
  FUN_140115bdc(param_1 + 0x148,param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  FUN_1486197a4(param_1 + 0x170,param_2 + 0x170);
  FUN_148619896(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_14861932a(param_1 + 0x210,param_2 + 0x210);
  FUN_14861938a(param_1 + 0x220,param_2 + 0x220);
  uVar1 = *(undefined4 *)(param_2 + 0x234);
  uVar2 = *(undefined4 *)(param_2 + 0x238);
  uVar3 = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = uVar3;
  FUN_14184443c(param_1 + 0x240,param_2 + 0x240);
  FUN_1401f3db8(param_1 + 600,param_2 + 600);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  FUN_140115bdc(param_1 + 0x280,param_2 + 0x280);
  FUN_1486197a4(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_14861a450(param_1 + 0x2f0,param_2 + 0x2f0);
  FUN_14861a450(param_1 + 0x300,param_2 + 0x300);
  FUN_14861a450(param_1 + 0x310,param_2 + 0x310);
  uVar4 = *(undefined8 *)(param_2 + 0x328);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x328) = uVar4;
  return param_1;
}



// FUNCTION 14861a322 FUN_14861a322 body=84 status=ok
// SIG undefined FUN_14861a322(void)

longlong * FUN_14861a322(longlong *param_1,longlong *param_2)

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



// FUNCTION 14861a376 FUN_14861a376 body=122 status=ok
// SIG undefined FUN_14861a376(void)

longlong FUN_14861a376(longlong param_1,longlong param_2)

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
    FUN_14861a4a8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861a3f0 FUN_14861a3f0 body=95 status=ok
// SIG undefined FUN_14861a3f0(void)

undefined8 * FUN_14861a3f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14861a643(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861a66a(param_1,iVar1);
      FUN_14861a6d9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14861a450 FUN_14861a450 body=88 status=ok
// SIG undefined FUN_14861a450(void)

undefined8 * FUN_14861a450(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14861a788(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14861a4a8 FUN_14861a4a8 body=210 status=ok
// SIG undefined FUN_14861a4a8(void)

undefined8 * FUN_14861a4a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14861a57a(param_1,(ulonglong)uVar1);
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
          FUN_14861a5fc(puVar6,puVar4);
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



// FUNCTION 14861a57a FUN_14861a57a body=128 status=ok
// SIG undefined FUN_14861a57a(void)

void FUN_14861a57a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 14861a5fc FUN_14861a5fc body=71 status=ok
// SIG undefined FUN_14861a5fc(void)

undefined8 * FUN_14861a5fc(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14861a643 FUN_14861a643 body=38 status=ok
// SIG undefined FUN_14861a643(void)

void FUN_14861a643(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148617a06(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 14861a66a FUN_14861a66a body=111 status=ok
// SIG undefined FUN_14861a66a(void)

void FUN_14861a66a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861a6d9 FUN_14861a6d9 body=52 status=ok
// SIG undefined FUN_14861a6d9(void)

void FUN_14861a6d9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14861a70e(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14861a70e FUN_14861a70e body=121 status=ok
// SIG undefined FUN_14861a70e(void)

undefined8 * FUN_14861a70e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14aff11e0;
  FUN_1486194bc(param_1 + 1,param_2 + 8);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_148617b3c(param_1 + 5,iVar1,0);
    FUN_148617baf(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14861a788 FUN_14861a788 body=98 status=ok
// SIG undefined FUN_14861a788(void)

void FUN_14861a788(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14861a7ec FUN_14861a7ec body=743 status=ok
// SIG undefined FUN_14861a7ec(void)

void FUN_14861a7ec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aff2540;
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_14087e9d8(param_1 + 0x54);
  param_1[0x50] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (*(int *)((longlong)param_1 + 0x29c) != 0) {
    FUN_140115c12(param_1 + 0x52,0);
  }
  param_1[0x51] = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4c];
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
  FUN_145ca6c63(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca6c64(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca6cfc(param_1 + 0x2e);
  param_1[0x29] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)((longlong)param_1 + 0x164) != 0) {
    FUN_140115c12(param_1 + 0x2b,0);
  }
  param_1[0x2a] = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x25] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)((longlong)param_1 + 0x144) != 0) {
    FUN_140115c12(param_1 + 0x27,0);
  }
  param_1[0x26] = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  param_1[0x21] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)((longlong)param_1 + 0x124) != 0) {
    FUN_140115c12(param_1 + 0x23,0);
  }
  param_1[0x22] = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1d] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)((longlong)param_1 + 0x104) != 0) {
    FUN_140115c12(param_1 + 0x1f,0);
  }
  param_1[0x1e] = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_14861a643(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14861ab38(param_1 + 0xf);
  FUN_148618b5c(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_148619d9e(param_1);
  return;
}



// FUNCTION 14861aad4 FUN_14861aad4 body=43 status=ok
// SIG undefined FUN_14861aad4(void)

undefined8 FUN_14861aad4(undefined8 param_1,int param_2)

{
  FUN_14861a7ec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14861ab00 FUN_14861ab00 body=55 status=ok
// SIG undefined FUN_14861ab00(void)

void FUN_14861ab00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54df0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54df0 = FUN_140002ddd(FUN_1464af2b1,uVar1,L"AvatarOptionDef");
  }
  return;
}



// FUNCTION 14861ab38 FUN_14861ab38 body=54 status=ok
// SIG undefined FUN_14861ab38(void)

void FUN_14861ab38(longlong *param_1)

{
  FUN_14861a57a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861ab6e FUN_14861ab6e body=104 status=ok
// SIG undefined FUN_14861ab6e(void)

undefined8 FUN_14861ab6e(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e3e9e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861abd8 FUN_14861abd8 body=28 status=ok
// SIG undefined FUN_14861abd8(void)

undefined8 FUN_14861abd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14861ac06 FUN_14861ac06 body=46 status=ok
// SIG undefined FUN_14861ac06(void)

void FUN_14861ac06(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff26f0;
  return;
}



// FUNCTION 14861ac34 FUN_14861ac34 body=32 status=ok
// SIG undefined FUN_14861ac34(void)

void FUN_14861ac34(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487e35ae(param_2);
  *param_2 = &PTR_FUN_14aff26f0;
  return;
}



// FUNCTION 14861ac78 FUN_14861ac78 body=70 status=ok
// SIG undefined FUN_14861ac78(void)

undefined8 FUN_14861ac78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140115bdc(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861ace6 FUN_14861ace6 body=59 status=ok
// SIG undefined FUN_14861ace6(void)

undefined8 FUN_14861ace6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861ad2c FUN_14861ad2c body=34 status=ok
// SIG undefined FUN_14861ad2c(void)

void FUN_14861ad2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14861ae00(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14861ad9c FUN_14861ad9c body=43 status=ok
// SIG undefined FUN_14861ad9c(void)

undefined8 FUN_14861ad9c(undefined8 param_1,int param_2)

{
  FUN_14861ae00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14861adc8 FUN_14861adc8 body=55 status=ok
// SIG undefined FUN_14861adc8(void)

void FUN_14861adc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54e08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54e08 = FUN_140002ddd(FUN_1464af4dd,uVar1,L"AvatarPartGameData");
  }
  return;
}



// FUNCTION 14861ae00 FUN_14861ae00 body=89 status=ok
// SIG undefined FUN_14861ae00(void)

void FUN_14861ae00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff08d0;
  param_1[2] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_140115c12(param_1 + 4,0);
  }
  param_1[3] = 0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861ae8e FUN_14861ae8e body=63 status=ok
// SIG undefined FUN_14861ae8e(void)

undefined1 FUN_14861ae8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14861afc8(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 14861aef6 FUN_14861aef6 body=59 status=ok
// SIG undefined FUN_14861aef6(void)

undefined8 FUN_14861aef6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861af42 FUN_14861af42 body=40 status=ok
// SIG undefined FUN_14861af42(void)

void FUN_14861af42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_14861b3b8(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 14861afc8 FUN_14861afc8 body=209 status=ok
// SIG undefined FUN_14861afc8(void)

longlong FUN_14861afc8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_148618b04(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  FUN_140115bdc(param_1 + 0x58,param_2 + 0x58);
  FUN_140115bdc(param_1 + 0x78,param_2 + 0x78);
  FUN_140115bdc(param_1 + 0x98,param_2 + 0x98);
  FUN_1401f3db8(param_1 + 0xb8,param_2 + 0xb8);
  FUN_14861a450(param_1 + 0xd0,param_2 + 0xd0);
  FUN_14861a450(param_1 + 0xe0,param_2 + 0xe0);
  FUN_14861a450(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14861b09a(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 14861b09a FUN_14861b09a body=122 status=ok
// SIG undefined FUN_14861b09a(void)

longlong FUN_14861b09a(longlong param_1,longlong param_2)

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
    FUN_14861b114(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861b114 FUN_14861b114 body=201 status=ok
// SIG undefined FUN_14861b114(void)

undefined8 * FUN_14861b114(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14861b1de(param_1,(ulonglong)uVar1);
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
          FUN_14861b344(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14861b1de FUN_14861b1de body=356 status=ok
// SIG undefined FUN_14861b1de(void)

void FUN_14861b1de(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 14861b344 FUN_14861b344 body=114 status=ok
// SIG undefined FUN_14861b344(void)

undefined8 * FUN_14861b344(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14861a788(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 14861b3b8 FUN_14861b3b8 body=370 status=ok
// SIG undefined FUN_14861b3b8(void)

void FUN_14861b3b8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aff2860;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14861b58e(param_1 + 0x20);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x18];
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
  param_1[0x13] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_140115c12(param_1 + 0x15,0);
  }
  param_1[0x14] = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  param_1[0xf] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_140115c12(param_1 + 0x11,0);
  }
  param_1[0x10] = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_148619d9e(param_1);
  return;
}



// FUNCTION 14861b52a FUN_14861b52a body=43 status=ok
// SIG undefined FUN_14861b52a(void)

undefined8 FUN_14861b52a(undefined8 param_1,int param_2)

{
  FUN_14861b3b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14861b556 FUN_14861b556 body=55 status=ok
// SIG undefined FUN_14861b556(void)

void FUN_14861b556(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54e20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54e20 = FUN_140002ddd(FUN_1464af573,uVar1,L"AvatarPartDef");
  }
  return;
}



// FUNCTION 14861b58e FUN_14861b58e body=54 status=ok
// SIG undefined FUN_14861b58e(void)

void FUN_14861b58e(longlong *param_1)

{
  FUN_14861b1de(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14861b5c4 FUN_14861b5c4 body=104 status=ok
// SIG undefined FUN_14861b5c4(void)

undefined8 FUN_14861b5c4(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e51a8(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861b62e FUN_14861b62e body=28 status=ok
// SIG undefined FUN_14861b62e(void)

undefined8 FUN_14861b62e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14861b690 FUN_14861b690 body=63 status=ok
// SIG undefined FUN_14861b690(void)

undefined1 FUN_14861b690(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14861b7be(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14861b6f8 FUN_14861b6f8 body=59 status=ok
// SIG undefined FUN_14861b6f8(void)

undefined8 FUN_14861b6f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861b744 FUN_14861b744 body=40 status=ok
// SIG undefined FUN_14861b744(void)

void FUN_14861b744(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14861b902(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14861b7be FUN_14861b7be body=153 status=ok
// SIG undefined FUN_14861b7be(void)

longlong FUN_14861b7be(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_14861b858(param_1 + 0x20,param_2 + 0x20);
  FUN_14861b8ac(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140115bdc(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_14861a322(param_1 + 0x88,param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 14861b858 FUN_14861b858 body=84 status=ok
// SIG undefined FUN_14861b858(void)

longlong * FUN_14861b858(longlong *param_1,longlong *param_2)

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



// FUNCTION 14861b8ac FUN_14861b8ac body=84 status=ok
// SIG undefined FUN_14861b8ac(void)

longlong * FUN_14861b8ac(longlong *param_1,longlong *param_2)

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



// FUNCTION 14861b902 FUN_14861b902 body=104 status=ok
// SIG undefined FUN_14861b902(void)

void FUN_14861b902(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff2a10;
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14861b96a FUN_14861b96a body=43 status=ok
// SIG undefined FUN_14861b96a(void)

undefined8 FUN_14861b96a(undefined8 param_1,int param_2)

{
  FUN_14861b902();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14861b996 FUN_14861b996 body=55 status=ok
// SIG undefined FUN_14861b996(void)

void FUN_14861b996(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54e38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54e38 = FUN_140002ddd(FUN_1464af5d2,uVar1,L"AvatarSelectorDef");
  }
  return;
}



// FUNCTION 14861b9ce FUN_14861b9ce body=104 status=ok
// SIG undefined FUN_14861b9ce(void)

undefined8 FUN_14861b9ce(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e5aec(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861ba38 FUN_14861ba38 body=28 status=ok
// SIG undefined FUN_14861ba38(void)

undefined8 FUN_14861ba38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14861ba9a FUN_14861ba9a body=152 status=ok
// SIG undefined FUN_14861ba9a(void)

undefined8 FUN_14861ba9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
      *(undefined2 *)(lVar1 + 0x30) = *(undefined2 *)(lVar2 + 0x30);
      FUN_140115bdc(param_2 + lVar3 + 0x38,param_3 + lVar3 + 0x38);
      FUN_14861bc2c(param_2 + lVar3 + 0x58,param_3 + lVar3 + 0x58);
      lVar3 = lVar3 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14861bb5a FUN_14861bb5a body=59 status=ok
// SIG undefined FUN_14861bb5a(void)

undefined8 FUN_14861bb5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861bba6 FUN_14861bba6 body=40 status=ok
// SIG undefined FUN_14861bba6(void)

void FUN_14861bba6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_145d8b3e2(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14861bc2c FUN_14861bc2c body=122 status=ok
// SIG undefined FUN_14861bc2c(void)

longlong FUN_14861bc2c(longlong param_1,longlong param_2)

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
    FUN_14861bca6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14861bca6 FUN_14861bca6 body=210 status=ok
// SIG undefined FUN_14861bca6(void)

undefined8 * FUN_14861bca6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145d8b4b0(param_1,(ulonglong)uVar1);
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
          FUN_14861bd78(puVar6,puVar4);
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



// FUNCTION 14861bd78 FUN_14861bd78 body=71 status=ok
// SIG undefined FUN_14861bd78(void)

undefined8 * FUN_14861bd78(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14861bdc0 FUN_14861bdc0 body=43 status=ok
// SIG undefined FUN_14861bdc0(void)

undefined8 FUN_14861bdc0(undefined8 param_1,int param_2)

{
  FUN_145d8b3e2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14861bdec FUN_14861bdec body=55 status=ok
// SIG undefined FUN_14861bdec(void)

void FUN_14861bdec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54e50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54e50 = FUN_140002ddd(FUN_1464af632,uVar1,L"AvatarArchetypeDef");
  }
  return;
}



// FUNCTION 14861be24 FUN_14861be24 body=104 status=ok
// SIG undefined FUN_14861be24(void)

undefined8 FUN_14861be24(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1487e5c76(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861be8e FUN_14861be8e body=28 status=ok
// SIG undefined FUN_14861be8e(void)

undefined8 FUN_14861be8e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14861bebc FUN_14861bebc body=38 status=ok
// SIG undefined FUN_14861bebc(void)

void FUN_14861bebc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487e6004();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14861bef8 FUN_14861bef8 body=346 status=ok
// SIG undefined FUN_14861bef8(void)

void FUN_14861bef8(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_144a63fc8();
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
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  FUN_1487e6010(param_1,local_30,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861c0a8 FUN_14861c0a8 body=679 status=ok
// SIG undefined FUN_14861c0a8(void)

void FUN_14861c0a8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_65;
  int local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
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
  local_60 = 0;
  local_58 = 0xa56a7a52;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  local_65 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_65);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_65);
  }
  _Src = local_48;
  puVar3 = &local_65;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_60;
  local_88 = local_58;
  local_80 = 0;
  local_a0 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_98 = (int)uStack_40;
  if (lVar2 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,uStack_40 & 0xffffffff,0);
    memcpy(local_a0,_Src,lVar2 * 2);
  }
  local_a8 = puVar3;
  FUN_1487f1e8a(&local_78,&local_a0,&local_90,iVar1 != 0);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861c356 FUN_14861c356 body=443 status=ok
// SIG undefined FUN_14861c356(void)

void FUN_14861c356(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48 [3];
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
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487f2232(local_28,puVar2,local_48,local_4c);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861c512 FUN_14861c512 body=260 status=ok
// SIG undefined FUN_14861c512(void)

void FUN_14861c512(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = 0xa56a7a01;
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
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_1487f1e02(&local_48);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861c618 FUN_14861c618 body=258 status=ok
// SIG undefined FUN_14861c618(void)

void FUN_14861c618(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487f1b5c(&local_38,plVar1);
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
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861c722 FUN_14861c722 body=376 status=ok
// SIG undefined FUN_14861c722(void)

void FUN_14861c722(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar2 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487f22ae(local_48[3],plVar2,plVar3);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861c8a2 FUN_14861c8a2 body=588 status=ok
// SIG undefined FUN_14861c8a2(void)

void FUN_14861c8a2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_c8 [40];
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_61;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
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
  local_60 = 0;
  local_58 = 0xa56a7a52;
  local_50 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_61 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  _Src = local_48;
  puVar1 = &local_61;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_60;
  local_88 = local_58;
  local_80 = 0;
  local_a0 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_98 = (int)uStack_40;
  if (lVar2 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,uStack_40 & 0xffffffff,0);
    memcpy(local_a0,_Src,lVar2 * 2);
  }
  FUN_1487f2070(&local_78,&local_a0,&local_90,puVar1);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14861caf8 FUN_14861caf8 body=362 status=ok
// SIG undefined FUN_14861caf8(void)

void FUN_14861caf8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_34;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487fe0b8(local_30,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


