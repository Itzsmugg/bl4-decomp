// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147f3d892 FUN_147f3d892 body=32 status=ok
// SIG undefined FUN_147f3d892(void)

void FUN_147f3d892(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f3d900 FUN_147f3d900 body=38 status=ok
// SIG undefined FUN_147f3d900(void)

undefined8 FUN_147f3d900(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f3d926 FUN_147f3d926 body=55 status=ok
// SIG undefined FUN_147f3d926(void)

void FUN_147f3d926(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23290 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23290 = FUN_140002ddd(FUN_14643d3a1,uVar1,L"GpsTest_FlightNavNear");
  }
  return;
}



// FUNCTION 147f3d95e FUN_147f3d95e body=103 status=ok
// SIG undefined FUN_147f3d95e(void)

longlong FUN_147f3d95e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 147f3d9f6 FUN_147f3d9f6 body=63 status=ok
// SIG undefined FUN_147f3d9f6(void)

undefined1 FUN_147f3d9f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3db22(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 147f3da5e FUN_147f3da5e body=59 status=ok
// SIG undefined FUN_147f3da5e(void)

undefined8 FUN_147f3da5e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3daaa FUN_147f3daaa body=38 status=ok
// SIG undefined FUN_147f3daaa(void)

void FUN_147f3daaa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f3db22 FUN_147f3db22 body=275 status=ok
// SIG undefined FUN_147f3db22(void)

longlong FUN_147f3db22(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  lVar9 = *(longlong *)(param_2 + 0xa0);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0xa0);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xa0) = lVar9;
  lVar9 = *(longlong *)(param_2 + 0xa8);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0xa8);
    }
  }
  *(longlong *)(param_1 + 0xa8) = lVar9;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 147f3dc94 FUN_147f3dc94 body=54 status=ok
// SIG undefined FUN_147f3dc94(void)

undefined1 FUN_147f3dc94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3de2e(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f3dcf2 FUN_147f3dcf2 body=59 status=ok
// SIG undefined FUN_147f3dcf2(void)

undefined8 FUN_147f3dcf2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3dd38 FUN_147f3dd38 body=32 status=ok
// SIG undefined FUN_147f3dd38(void)

void FUN_147f3dd38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_147f3dda6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f3dda6 FUN_147f3dda6 body=136 status=ok
// SIG undefined FUN_147f3dda6(void)

void FUN_147f3dda6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac7ceb0;
  plVar3 = (longlong *)param_1[0xd];
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
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147f3de2e FUN_147f3de2e body=161 status=ok
// SIG undefined FUN_147f3de2e(void)

longlong FUN_147f3de2e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  lVar4 = *(longlong *)(param_2 + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(longlong *)(param_1 + 0x68) = lVar4;
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



// FUNCTION 147f3df00 FUN_147f3df00 body=63 status=ok
// SIG undefined FUN_147f3df00(void)

undefined1 FUN_147f3df00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3e028(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 147f3df68 FUN_147f3df68 body=59 status=ok
// SIG undefined FUN_147f3df68(void)

undefined8 FUN_147f3df68(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3dfb4 FUN_147f3dfb4 body=38 status=ok
// SIG undefined FUN_147f3dfb4(void)

void FUN_147f3dfb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x178) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 147f3e028 FUN_147f3e028 body=252 status=ok
// SIG undefined FUN_147f3e028(void)

longlong FUN_147f3e028(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
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
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  FUN_147f374bc(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 147f3e218 FUN_147f3e218 body=63 status=ok
// SIG undefined FUN_147f3e218(void)

undefined1 FUN_147f3e218(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3e340(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 147f3e280 FUN_147f3e280 body=59 status=ok
// SIG undefined FUN_147f3e280(void)

undefined8 FUN_147f3e280(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3e2cc FUN_147f3e2cc body=38 status=ok
// SIG undefined FUN_147f3e2cc(void)

void FUN_147f3e2cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1413eb0de(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147f3e340 FUN_147f3e340 body=285 status=ok
// SIG undefined FUN_147f3e340(void)

longlong FUN_147f3e340(longlong param_1,longlong param_2)

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
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar6 = *(undefined4 *)(param_2 + 0x60);
  uVar7 = *(undefined4 *)(param_2 + 100);
  uVar8 = *(undefined4 *)(param_2 + 0x68);
  uVar9 = *(undefined4 *)(param_2 + 0x6c);
  uVar10 = *(undefined4 *)(param_2 + 0x74);
  uVar11 = *(undefined4 *)(param_2 + 0x78);
  uVar12 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar10;
  *(undefined4 *)(param_1 + 0x78) = uVar11;
  *(undefined4 *)(param_1 + 0x7c) = uVar12;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  *(undefined4 *)(param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  lVar4 = *(longlong *)(param_2 + 0x88);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(longlong *)(param_1 + 0x88) = lVar4;
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
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  lVar4 = *(longlong *)(param_2 + 0xa8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(longlong *)(param_1 + 0xa8) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 147f3e45e FUN_147f3e45e body=39 status=ok
// SIG undefined FUN_147f3e45e(void)

void FUN_147f3e45e(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c19b8c(param_2);
  *param_2 = &PTR_FUN_14ac7d490;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  return;
}



// FUNCTION 147f3e4ae FUN_147f3e4ae body=329 status=ok
// SIG undefined FUN_147f3e4ae(void)

undefined8 FUN_147f3e4ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined1 *)(param_2 + 0x84 + lVar10) = *(undefined1 *)(param_3 + 0x84 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      *(undefined8 *)(param_2 + 0x90 + lVar10) = *(undefined8 *)(param_3 + 0x90 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      *(undefined1 *)(param_2 + 0xb8 + lVar10) = *(undefined1 *)(param_3 + 0xb8 + lVar10);
      *(undefined4 *)(param_2 + 0xc0 + lVar10) = *(undefined4 *)(param_3 + 0xc0 + lVar10);
      *(undefined8 *)(param_2 + 200 + lVar10) = *(undefined8 *)(param_3 + 200 + lVar10);
      *(undefined1 *)(param_2 + 0xd0 + lVar10) = *(undefined1 *)(param_3 + 0xd0 + lVar10);
      lVar10 = lVar10 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3e620 FUN_147f3e620 body=59 status=ok
// SIG undefined FUN_147f3e620(void)

undefined8 FUN_147f3e620(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3e66c FUN_147f3e66c body=38 status=ok
// SIG undefined FUN_147f3e66c(void)

void FUN_147f3e66c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f3e740 FUN_147f3e740 body=54 status=ok
// SIG undefined FUN_147f3e740(void)

undefined1 FUN_147f3e740(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3c1d0(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f3e79e FUN_147f3e79e body=59 status=ok
// SIG undefined FUN_147f3e79e(void)

undefined8 FUN_147f3e79e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3e7e4 FUN_147f3e7e4 body=56 status=ok
// SIG undefined FUN_147f3e7e4(void)

void FUN_147f3e7e4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7b6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f3e89c FUN_147f3e89c body=315 status=ok
// SIG undefined FUN_147f3e89c(void)

undefined8 FUN_147f3e89c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x88 + lVar10) = *(undefined8 *)(param_3 + 0x88 + lVar10);
      *(undefined1 *)(param_2 + 0x90 + lVar10) = *(undefined1 *)(param_3 + 0x90 + lVar10);
      *(undefined4 *)(param_2 + 0x98 + lVar10) = *(undefined4 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      *(undefined1 *)(param_2 + 0xb8 + lVar10) = *(undefined1 *)(param_3 + 0xb8 + lVar10);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      *(undefined4 *)(param_2 + 0xc0 + lVar10) = *(undefined4 *)(param_3 + 0xc0 + lVar10);
      *(undefined1 *)(param_2 + 200 + lVar10) = *(undefined1 *)(param_3 + 200 + lVar10);
      *(undefined1 *)(param_2 + 0xd0 + lVar10) = *(undefined1 *)(param_3 + 0xd0 + lVar10);
      lVar10 = lVar10 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3ea00 FUN_147f3ea00 body=59 status=ok
// SIG undefined FUN_147f3ea00(void)

undefined8 FUN_147f3ea00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3ea4c FUN_147f3ea4c body=38 status=ok
// SIG undefined FUN_147f3ea4c(void)

void FUN_147f3ea4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 147f3eb6e FUN_147f3eb6e body=54 status=ok
// SIG undefined FUN_147f3eb6e(void)

undefined1 FUN_147f3eb6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3d456(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f3ebcc FUN_147f3ebcc body=59 status=ok
// SIG undefined FUN_147f3ebcc(void)

undefined8 FUN_147f3ebcc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3ec12 FUN_147f3ec12 body=56 status=ok
// SIG undefined FUN_147f3ec12(void)

void FUN_147f3ec12(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7c6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f3ecca FUN_147f3ecca body=160 status=ok
// SIG undefined FUN_147f3ecca(void)

undefined8 FUN_147f3ecca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x78);
      uVar2 = *(undefined4 *)(param_3 + -0x74);
      uVar3 = *(undefined4 *)(param_3 + -0x70);
      uVar4 = *(undefined4 *)(param_3 + -0x6c);
      uVar5 = *(undefined4 *)(param_3 + -100);
      uVar6 = *(undefined4 *)(param_3 + -0x60);
      uVar7 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar5;
      *(undefined4 *)(param_2 + -0x60) = uVar6;
      *(undefined4 *)(param_2 + -0x5c) = uVar7;
      *(undefined4 *)(param_2 + -0x78) = uVar1;
      *(undefined4 *)(param_2 + -0x74) = uVar2;
      *(undefined4 *)(param_2 + -0x70) = uVar3;
      *(undefined4 *)(param_2 + -0x6c) = uVar4;
      FUN_1470d00c2(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      *(undefined1 *)(param_2 + -0x38) = *(undefined1 *)(param_3 + -0x38);
      *(undefined2 *)(param_2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_140c19bee(param_2,param_3);
      param_3 = param_3 + 200;
      param_2 = param_2 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3ed92 FUN_147f3ed92 body=59 status=ok
// SIG undefined FUN_147f3ed92(void)

undefined8 FUN_147f3ed92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3edde FUN_147f3edde body=60 status=ok
// SIG undefined FUN_147f3edde(void)

void FUN_147f3edde(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *param_2 = &PTR_FUN_14ac80f40;
    FUN_1412dafa6(param_2 + 0x10);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  return;
}



// FUNCTION 147f3ef04 FUN_147f3ef04 body=118 status=ok
// SIG undefined FUN_147f3ef04(void)

undefined8 FUN_147f3ef04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147f3efa2 FUN_147f3efa2 body=59 status=ok
// SIG undefined FUN_147f3efa2(void)

undefined8 FUN_147f3efa2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3efe8 FUN_147f3efe8 body=32 status=ok
// SIG undefined FUN_147f3efe8(void)

void FUN_147f3efe8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f3f058 FUN_147f3f058 body=145 status=ok
// SIG undefined FUN_147f3f058(void)

void FUN_147f3f058(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7c3d0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x13) = 0x447a0000;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x15] = &PTR_FUN_14a1a0aa0;
  *(undefined4 *)(param_2 + 0x18) = 2;
  *(undefined1 *)(param_2 + 0x19) = 0;
  return;
}



// FUNCTION 147f3f0ea FUN_147f3f0ea body=124 status=ok
// SIG undefined FUN_147f3f0ea(void)

void FUN_147f3f0ea(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7c3d0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x13) = 0x447a0000;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x15] = &PTR_FUN_14a1a0aa0;
  *(undefined4 *)(param_2 + 0x18) = 2;
  *(undefined1 *)(param_2 + 0x19) = 0;
  return;
}



// FUNCTION 147f3f1aa FUN_147f3f1aa body=299 status=ok
// SIG undefined FUN_147f3f1aa(void)

undefined8 FUN_147f3f1aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x88 + lVar10) = *(undefined8 *)(param_3 + 0x88 + lVar10);
      *(undefined1 *)(param_2 + 0x90 + lVar10) = *(undefined1 *)(param_3 + 0x90 + lVar10);
      *(undefined4 *)(param_2 + 0x98 + lVar10) = *(undefined4 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      *(undefined1 *)(param_2 + 0xb8 + lVar10) = *(undefined1 *)(param_3 + 0xb8 + lVar10);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      *(undefined4 *)(param_2 + 0xc0 + lVar10) = *(undefined4 *)(param_3 + 0xc0 + lVar10);
      *(undefined1 *)(param_2 + 200 + lVar10) = *(undefined1 *)(param_3 + 200 + lVar10);
      lVar10 = lVar10 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3f2fe FUN_147f3f2fe body=59 status=ok
// SIG undefined FUN_147f3f2fe(void)

undefined8 FUN_147f3f2fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3f34a FUN_147f3f34a body=38 status=ok
// SIG undefined FUN_147f3f34a(void)

void FUN_147f3f34a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f3f46c FUN_147f3f46c body=54 status=ok
// SIG undefined FUN_147f3f46c(void)

undefined1 FUN_147f3f46c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3d456(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f3f4ca FUN_147f3f4ca body=59 status=ok
// SIG undefined FUN_147f3f4ca(void)

undefined8 FUN_147f3f4ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3f510 FUN_147f3f510 body=56 status=ok
// SIG undefined FUN_147f3f510(void)

void FUN_147f3f510(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7c6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f3f598 FUN_147f3f598 body=32 status=ok
// SIG undefined FUN_147f3f598(void)

void FUN_147f3f598(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c19b8c(param_2);
  *param_2 = &PTR_FUN_14ac7e390;
  return;
}



// FUNCTION 147f3f5e0 FUN_147f3f5e0 body=313 status=ok
// SIG undefined FUN_147f3f5e0(void)

undefined8 FUN_147f3f5e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined1 *)(param_2 + 0x84 + lVar10) = *(undefined1 *)(param_3 + 0x84 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      *(undefined8 *)(param_2 + 0x90 + lVar10) = *(undefined8 *)(param_3 + 0x90 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      *(undefined1 *)(param_2 + 0xb8 + lVar10) = *(undefined1 *)(param_3 + 0xb8 + lVar10);
      *(undefined4 *)(param_2 + 0xc0 + lVar10) = *(undefined4 *)(param_3 + 0xc0 + lVar10);
      *(undefined8 *)(param_2 + 200 + lVar10) = *(undefined8 *)(param_3 + 200 + lVar10);
      lVar10 = lVar10 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3f742 FUN_147f3f742 body=59 status=ok
// SIG undefined FUN_147f3f742(void)

undefined8 FUN_147f3f742(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3f78e FUN_147f3f78e body=38 status=ok
// SIG undefined FUN_147f3f78e(void)

void FUN_147f3f78e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f3f862 FUN_147f3f862 body=54 status=ok
// SIG undefined FUN_147f3f862(void)

undefined1 FUN_147f3f862(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3c1d0(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f3f8c0 FUN_147f3f8c0 body=59 status=ok
// SIG undefined FUN_147f3f8c0(void)

undefined8 FUN_147f3f8c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3f906 FUN_147f3f906 body=56 status=ok
// SIG undefined FUN_147f3f906(void)

void FUN_147f3f906(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7b6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f3f98e FUN_147f3f98e body=39 status=ok
// SIG undefined FUN_147f3f98e(void)

void FUN_147f3f98e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7e7e0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 147f3f9de FUN_147f3f9de body=207 status=ok
// SIG undefined FUN_147f3f9de(void)

undefined8 FUN_147f3f9de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined1 *)(param_2 + 0x80 + lVar10) = *(undefined1 *)(param_3 + 0x80 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3fad6 FUN_147f3fad6 body=59 status=ok
// SIG undefined FUN_147f3fad6(void)

undefined8 FUN_147f3fad6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3fb22 FUN_147f3fb22 body=38 status=ok
// SIG undefined FUN_147f3fb22(void)

void FUN_147f3fb22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f3fbf6 FUN_147f3fbf6 body=54 status=ok
// SIG undefined FUN_147f3fbf6(void)

undefined1 FUN_147f3fbf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3fd08(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f3fc54 FUN_147f3fc54 body=59 status=ok
// SIG undefined FUN_147f3fc54(void)

undefined8 FUN_147f3fc54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3fc9a FUN_147f3fc9a body=32 status=ok
// SIG undefined FUN_147f3fc9a(void)

void FUN_147f3fc9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f3fd08 FUN_147f3fd08 body=103 status=ok
// SIG undefined FUN_147f3fd08(void)

longlong FUN_147f3fd08(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 147f3fda0 FUN_147f3fda0 body=207 status=ok
// SIG undefined FUN_147f3fda0(void)

undefined8 FUN_147f3fda0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f3fe98 FUN_147f3fe98 body=59 status=ok
// SIG undefined FUN_147f3fe98(void)

undefined8 FUN_147f3fe98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f3fee4 FUN_147f3fee4 body=38 status=ok
// SIG undefined FUN_147f3fee4(void)

void FUN_147f3fee4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147f3fff4 FUN_147f3fff4 body=118 status=ok
// SIG undefined FUN_147f3fff4(void)

undefined8 FUN_147f3fff4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147f40092 FUN_147f40092 body=59 status=ok
// SIG undefined FUN_147f40092(void)

undefined8 FUN_147f40092(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f400d8 FUN_147f400d8 body=32 status=ok
// SIG undefined FUN_147f400d8(void)

void FUN_147f400d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f40146 FUN_147f40146 body=38 status=ok
// SIG undefined FUN_147f40146(void)

undefined8 FUN_147f40146(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f4016c FUN_147f4016c body=55 status=ok
// SIG undefined FUN_147f4016c(void)

void FUN_147f4016c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23440 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23440 = FUN_140002ddd(FUN_14643db59,uVar1,L"GpsTest_IsPlayer");
  }
  return;
}



// FUNCTION 147f401a4 FUN_147f401a4 body=81 status=ok
// SIG undefined FUN_147f401a4(void)

void FUN_147f401a4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7efc0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x11] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x14) = 0x42a00000;
  return;
}



// FUNCTION 147f4021e FUN_147f4021e body=253 status=ok
// SIG undefined FUN_147f4021e(void)

undefined8 FUN_147f4021e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined1 *)(param_2 + 0x80 + lVar10) = *(undefined1 *)(param_3 + 0x80 + lVar10);
      *(undefined8 *)(param_2 + 0x90 + lVar10) = *(undefined8 *)(param_3 + 0x90 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      lVar10 = lVar10 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f40344 FUN_147f40344 body=59 status=ok
// SIG undefined FUN_147f40344(void)

undefined8 FUN_147f40344(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f40390 FUN_147f40390 body=38 status=ok
// SIG undefined FUN_147f40390(void)

void FUN_147f40390(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 147f40466 FUN_147f40466 body=54 status=ok
// SIG undefined FUN_147f40466(void)

undefined1 FUN_147f40466(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f40578(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f404c4 FUN_147f404c4 body=59 status=ok
// SIG undefined FUN_147f404c4(void)

undefined8 FUN_147f404c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4050a FUN_147f4050a body=32 status=ok
// SIG undefined FUN_147f4050a(void)

void FUN_147f4050a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_143868c5c(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147f40578 FUN_147f40578 body=119 status=ok
// SIG undefined FUN_147f40578(void)

longlong FUN_147f40578(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_147f405f0(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 147f405f0 FUN_147f405f0 body=93 status=ok
// SIG undefined FUN_147f405f0(void)

undefined8 * FUN_147f405f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e62ec9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f4064e(param_1,iVar1);
      FUN_147f406c1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f4064e FUN_147f4064e body=115 status=ok
// SIG undefined FUN_147f4064e(void)

void FUN_147f4064e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f406c1 FUN_147f406c1 body=52 status=ok
// SIG undefined FUN_147f406c1(void)

void FUN_147f406c1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_143868cd4(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147f4074a FUN_147f4074a body=166 status=ok
// SIG undefined FUN_147f4074a(void)

undefined8 FUN_147f4074a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x78);
      uVar2 = *(undefined4 *)(param_3 + -0x74);
      uVar3 = *(undefined4 *)(param_3 + -0x70);
      uVar4 = *(undefined4 *)(param_3 + -0x6c);
      uVar5 = *(undefined4 *)(param_3 + -100);
      uVar6 = *(undefined4 *)(param_3 + -0x60);
      uVar7 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar5;
      *(undefined4 *)(param_2 + -0x60) = uVar6;
      *(undefined4 *)(param_2 + -0x5c) = uVar7;
      *(undefined4 *)(param_2 + -0x78) = uVar1;
      *(undefined4 *)(param_2 + -0x74) = uVar2;
      *(undefined4 *)(param_2 + -0x70) = uVar3;
      *(undefined4 *)(param_2 + -0x6c) = uVar4;
      FUN_1470d00c2(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      *(undefined1 *)(param_2 + -0x38) = *(undefined1 *)(param_3 + -0x38);
      *(undefined2 *)(param_2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f40818 FUN_147f40818 body=59 status=ok
// SIG undefined FUN_147f40818(void)

undefined8 FUN_147f40818(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f40864 FUN_147f40864 body=60 status=ok
// SIG undefined FUN_147f40864(void)

void FUN_147f40864(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *param_2 = &PTR_FUN_14ac80fe0;
    FUN_144a2da94(param_2 + 0x10);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147f408f0 FUN_147f408f0 body=63 status=ok
// SIG undefined FUN_147f408f0(void)

undefined8 * FUN_147f408f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac80fe0;
  FUN_144a2da94(param_1 + 0x10);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f40930 FUN_147f40930 body=55 status=ok
// SIG undefined FUN_147f40930(void)

void FUN_147f40930(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb234a0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb234a0 = FUN_140002ddd(FUN_14643dd05,uVar1,L"GpsTestSettings_MatchingActor");
  }
  return;
}



// FUNCTION 147f40a06 FUN_147f40a06 body=54 status=ok
// SIG undefined FUN_147f40a06(void)

undefined1 FUN_147f40a06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f40b76(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147f40a64 FUN_147f40a64 body=59 status=ok
// SIG undefined FUN_147f40a64(void)

undefined8 FUN_147f40a64(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f40aaa FUN_147f40aaa body=32 status=ok
// SIG undefined FUN_147f40aaa(void)

void FUN_147f40aaa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f40b18 FUN_147f40b18 body=38 status=ok
// SIG undefined FUN_147f40b18(void)

undefined8 FUN_147f40b18(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f40b3e FUN_147f40b3e body=55 status=ok
// SIG undefined FUN_147f40b3e(void)

void FUN_147f40b3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb234b8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb234b8 = FUN_140002ddd(FUN_14643dd97,uVar1,L"GpsTest_MatchingActor");
  }
  return;
}



// FUNCTION 147f40b76 FUN_147f40b76 body=103 status=ok
// SIG undefined FUN_147f40b76(void)

longlong FUN_147f40b76(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f40bde FUN_147f40bde body=83 status=ok
// SIG undefined FUN_147f40bde(void)

void FUN_147f40bde(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7f830;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  return;
}



// FUNCTION 147f40c32 FUN_147f40c32 body=63 status=ok
// SIG undefined FUN_147f40c32(void)

void FUN_147f40c32(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7f830;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  return;
}



// FUNCTION 147f40cb6 FUN_147f40cb6 body=63 status=ok
// SIG undefined FUN_147f40cb6(void)

undefined1 FUN_147f40cb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f40ed6(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 147f40d1e FUN_147f40d1e body=59 status=ok
// SIG undefined FUN_147f40d1e(void)

undefined8 FUN_147f40d1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f40d6a FUN_147f40d6a body=40 status=ok
// SIG undefined FUN_147f40d6a(void)

void FUN_147f40d6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_147f40e42(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147f40de0 FUN_147f40de0 body=38 status=ok
// SIG undefined FUN_147f40de0(void)

undefined8 FUN_147f40de0(undefined8 param_1,int param_2)

{
  FUN_147f40e42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f40e06 FUN_147f40e06 body=55 status=ok
// SIG undefined FUN_147f40e06(void)

void FUN_147f40e06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb234d0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb234d0 = FUN_140002ddd(FUN_14643de29,uVar1,L"GpsTestSettings_NavMaterial");
  }
  return;
}



// FUNCTION 147f40e42 FUN_147f40e42 body=101 status=ok
// SIG undefined FUN_147f40e42(void)

void FUN_147f40e42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac7f830;
  FUN_147f40ea7(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_147f40ea7(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 147f40ea7 FUN_147f40ea7 body=47 status=ok
// SIG undefined FUN_147f40ea7(void)

void FUN_147f40ea7(longlong param_1,int param_2)

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



// FUNCTION 147f40ed6 FUN_147f40ed6 body=163 status=ok
// SIG undefined FUN_147f40ed6(void)

longlong FUN_147f40ed6(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_147f40f7a(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_147f40f7a(param_1 + 0x98,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 147f40f7a FUN_147f40f7a body=95 status=ok
// SIG undefined FUN_147f40f7a(void)

undefined8 * FUN_147f40f7a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147f40ea7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f40fda(param_1,iVar1);
      FUN_147f4104d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f40fda FUN_147f40fda body=115 status=ok
// SIG undefined FUN_147f40fda(void)

void FUN_147f40fda(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f4104d FUN_147f4104d body=134 status=ok
// SIG undefined FUN_147f4104d(void)

void FUN_147f4104d(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 147f41172 FUN_147f41172 body=54 status=ok
// SIG undefined FUN_147f41172(void)

undefined1 FUN_147f41172(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f412e2(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147f411d0 FUN_147f411d0 body=59 status=ok
// SIG undefined FUN_147f411d0(void)

undefined8 FUN_147f411d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f41216 FUN_147f41216 body=32 status=ok
// SIG undefined FUN_147f41216(void)

void FUN_147f41216(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f41284 FUN_147f41284 body=38 status=ok
// SIG undefined FUN_147f41284(void)

undefined8 FUN_147f41284(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f412aa FUN_147f412aa body=55 status=ok
// SIG undefined FUN_147f412aa(void)

void FUN_147f412aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb234e8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb234e8 = FUN_140002ddd(FUN_14643debb,uVar1,L"GpsTest_NavMaterial");
  }
  return;
}



// FUNCTION 147f412e2 FUN_147f412e2 body=103 status=ok
// SIG undefined FUN_147f412e2(void)

longlong FUN_147f412e2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f4134a FUN_147f4134a body=66 status=ok
// SIG undefined FUN_147f4134a(void)

void FUN_147f4134a(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xe] = 0;
  param_2[0xf] = 0;
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
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7fc70;
  return;
}



// FUNCTION 147f4138c FUN_147f4138c body=32 status=ok
// SIG undefined FUN_147f4138c(void)

void FUN_147f4138c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac7fc70;
  return;
}



// FUNCTION 147f413f0 FUN_147f413f0 body=185 status=ok
// SIG undefined FUN_147f413f0(void)

undefined8 FUN_147f413f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f414d2 FUN_147f414d2 body=59 status=ok
// SIG undefined FUN_147f414d2(void)

undefined8 FUN_147f414d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4151e FUN_147f4151e body=38 status=ok
// SIG undefined FUN_147f4151e(void)

void FUN_147f4151e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 147f41592 FUN_147f41592 body=38 status=ok
// SIG undefined FUN_147f41592(void)

undefined8 FUN_147f41592(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f415b8 FUN_147f415b8 body=55 status=ok
// SIG undefined FUN_147f415b8(void)

void FUN_147f415b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23500 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23500 = FUN_140002ddd(FUN_14643df4d,uVar1,L"GpsTestSettings_NavNear");
  }
  return;
}



// FUNCTION 147f4168e FUN_147f4168e body=118 status=ok
// SIG undefined FUN_147f4168e(void)

undefined8 FUN_147f4168e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147f4172c FUN_147f4172c body=59 status=ok
// SIG undefined FUN_147f4172c(void)

undefined8 FUN_147f4172c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f41772 FUN_147f41772 body=32 status=ok
// SIG undefined FUN_147f41772(void)

void FUN_147f41772(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f417e0 FUN_147f417e0 body=38 status=ok
// SIG undefined FUN_147f417e0(void)

undefined8 FUN_147f417e0(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f41806 FUN_147f41806 body=55 status=ok
// SIG undefined FUN_147f41806(void)

void FUN_147f41806(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23518 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23518 = FUN_140002ddd(FUN_14643dfdf,uVar1,L"GpsTest_NavNear");
  }
  return;
}



// FUNCTION 147f4186e FUN_147f4186e body=63 status=ok
// SIG undefined FUN_147f4186e(void)

undefined1 FUN_147f4186e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f41996(param_2,param_3);
    param_3 = param_3 + 0x220;
    param_2 = param_2 + 0x220;
  }
  return 1;
}



// FUNCTION 147f418d6 FUN_147f418d6 body=59 status=ok
// SIG undefined FUN_147f418d6(void)

undefined8 FUN_147f418d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f41922 FUN_147f41922 body=38 status=ok
// SIG undefined FUN_147f41922(void)

void FUN_147f41922(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 147f41996 FUN_147f41996 body=387 status=ok
// SIG undefined FUN_147f41996(void)

longlong FUN_147f41996(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_147f3741a(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  puVar9 = (undefined8 *)(param_2 + 0x140);
  puVar10 = (undefined8 *)(param_1 + 0x140);
  for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  puVar9 = (undefined8 *)(param_2 + 0x1d8);
  puVar10 = (undefined8 *)(param_1 + 0x1d8);
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  return param_1;
}



// FUNCTION 147f41b46 FUN_147f41b46 body=63 status=ok
// SIG undefined FUN_147f41b46(void)

undefined1 FUN_147f41b46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f41c48(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 147f41bae FUN_147f41bae body=59 status=ok
// SIG undefined FUN_147f41bae(void)

undefined8 FUN_147f41bae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f41c48 FUN_147f41c48 body=274 status=ok
// SIG undefined FUN_147f41c48(void)

longlong FUN_147f41c48(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  puVar7 = (undefined8 *)(param_2 + 0x60);
  puVar8 = (undefined8 *)(param_1 + 0x60);
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  lVar6 = *(longlong *)(param_2 + 0xc0);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(longlong *)(param_1 + 0xc0) = lVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0xe0);
  uVar5 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  return param_1;
}



// FUNCTION 147f41d8c FUN_147f41d8c body=63 status=ok
// SIG undefined FUN_147f41d8c(void)

undefined1 FUN_147f41d8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f41fae(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 147f41df4 FUN_147f41df4 body=59 status=ok
// SIG undefined FUN_147f41df4(void)

undefined8 FUN_147f41df4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f41e40 FUN_147f41e40 body=38 status=ok
// SIG undefined FUN_147f41e40(void)

void FUN_147f41e40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 147f41fae FUN_147f41fae body=230 status=ok
// SIG undefined FUN_147f41fae(void)

longlong FUN_147f41fae(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_147f3741a(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  return param_1;
}



// FUNCTION 147f420fc FUN_147f420fc body=54 status=ok
// SIG undefined FUN_147f420fc(void)

undefined1 FUN_147f420fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f42296(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f4215a FUN_147f4215a body=59 status=ok
// SIG undefined FUN_147f4215a(void)

undefined8 FUN_147f4215a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f421a0 FUN_147f421a0 body=32 status=ok
// SIG undefined FUN_147f421a0(void)

void FUN_147f421a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_147f4220e(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147f4220e FUN_147f4220e body=136 status=ok
// SIG undefined FUN_147f4220e(void)

void FUN_147f4220e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac80700;
  plVar3 = (longlong *)param_1[0xd];
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
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147f42296 FUN_147f42296 body=171 status=ok
// SIG undefined FUN_147f42296(void)

longlong FUN_147f42296(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  lVar4 = *(longlong *)(param_2 + 0x68);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(longlong *)(param_1 + 0x68) = lVar4;
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
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 147f42372 FUN_147f42372 body=63 status=ok
// SIG undefined FUN_147f42372(void)

undefined1 FUN_147f42372(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f4249a(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 147f423da FUN_147f423da body=59 status=ok
// SIG undefined FUN_147f423da(void)

undefined8 FUN_147f423da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f42426 FUN_147f42426 body=38 status=ok
// SIG undefined FUN_147f42426(void)

void FUN_147f42426(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 147f4249a FUN_147f4249a body=293 status=ok
// SIG undefined FUN_147f4249a(void)

longlong FUN_147f4249a(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
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
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  FUN_147f3741a(param_1 + 0x120,param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 400) = *(undefined1 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  return param_1;
}



// FUNCTION 147f426a0 FUN_147f426a0 body=63 status=ok
// SIG undefined FUN_147f426a0(void)

undefined1 FUN_147f426a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f427da(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 147f42708 FUN_147f42708 body=59 status=ok
// SIG undefined FUN_147f42708(void)

undefined8 FUN_147f42708(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f427a2 FUN_147f427a2 body=55 status=ok
// SIG undefined FUN_147f427a2(void)

void FUN_147f427a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb235c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb235c0 = FUN_140002ddd(FUN_14643e261,uVar1,L"GpsTest_NavTrace");
  }
  return;
}



// FUNCTION 147f427da FUN_147f427da body=219 status=ok
// SIG undefined FUN_147f427da(void)

longlong FUN_147f427da(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x60);
  uVar6 = *(undefined4 *)(param_2 + 100);
  uVar7 = *(undefined4 *)(param_2 + 0x68);
  uVar8 = *(undefined4 *)(param_2 + 0x6c);
  uVar9 = *(undefined4 *)(param_2 + 0x74);
  uVar10 = *(undefined4 *)(param_2 + 0x78);
  uVar11 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar9;
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  *(undefined4 *)(param_1 + 0x7c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  lVar3 = *(longlong *)(param_2 + 0x98);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(longlong *)(param_1 + 0x98) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 147f428e6 FUN_147f428e6 body=63 status=ok
// SIG undefined FUN_147f428e6(void)

undefined1 FUN_147f428e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f42a0e(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 147f4294e FUN_147f4294e body=59 status=ok
// SIG undefined FUN_147f4294e(void)

undefined8 FUN_147f4294e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4299a FUN_147f4299a body=38 status=ok
// SIG undefined FUN_147f4299a(void)

void FUN_147f4299a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147f42a0e FUN_147f42a0e body=247 status=ok
// SIG undefined FUN_147f42a0e(void)

longlong FUN_147f42a0e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  lVar9 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x98);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x98) = lVar9;
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  lVar9 = *(longlong *)(param_2 + 0xb8);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0xb8);
    }
  }
  *(longlong *)(param_1 + 0xb8) = lVar9;
  return param_1;
}



// FUNCTION 147f42ba8 FUN_147f42ba8 body=54 status=ok
// SIG undefined FUN_147f42ba8(void)

undefined1 FUN_147f42ba8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f42d9c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f42c06 FUN_147f42c06 body=59 status=ok
// SIG undefined FUN_147f42c06(void)

undefined8 FUN_147f42c06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f42c4c FUN_147f42c4c body=34 status=ok
// SIG undefined FUN_147f42c4c(void)

void FUN_147f42c4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_147f42d1a(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f42cbc FUN_147f42cbc body=38 status=ok
// SIG undefined FUN_147f42cbc(void)

undefined8 FUN_147f42cbc(undefined8 param_1,int param_2)

{
  FUN_147f42d1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f42ce2 FUN_147f42ce2 body=55 status=ok
// SIG undefined FUN_147f42ce2(void)

void FUN_147f42ce2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb235f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb235f0 = FUN_140002ddd(FUN_14643e315,uVar1,L"GpsTest_NodeChain");
  }
  return;
}



// FUNCTION 147f42d1a FUN_147f42d1a body=57 status=ok
// SIG undefined FUN_147f42d1a(void)

void FUN_147f42d1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac80e60;
  FUN_147f42d53(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f42d53 FUN_147f42d53 body=73 status=ok
// SIG undefined FUN_147f42d53(void)

void FUN_147f42d53(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x38);
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
      plVar4 = plVar4 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147f42d9c FUN_147f42d9c body=109 status=ok
// SIG undefined FUN_147f42d9c(void)

longlong FUN_147f42d9c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_147f42e0a(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f42e0a FUN_147f42e0a body=95 status=ok
// SIG undefined FUN_147f42e0a(void)

undefined8 * FUN_147f42e0a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147f42d53(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f42e6a(param_1,iVar1);
      FUN_147f42edd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147f42e6a FUN_147f42e6a body=115 status=ok
// SIG undefined FUN_147f42e6a(void)

void FUN_147f42e6a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147f42edd FUN_147f42edd body=99 status=ok
// SIG undefined FUN_147f42edd(void)

void FUN_147f42edd(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      uVar4 = *(undefined8 *)(param_2 + lVar9);
      uVar5 = ((undefined8 *)(param_2 + lVar9))[1];
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar9);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + lVar9) = uVar4;
      ((undefined8 *)(param_1 + lVar9))[1] = uVar5;
      *(undefined8 *)(param_1 + 0x30 + lVar9) = *(undefined8 *)(param_2 + 0x30 + lVar9);
      lVar3 = *(longlong *)(param_2 + 0x38 + lVar9);
      *(longlong *)(param_1 + 0x38 + lVar9) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + lVar9 + 0x40) = *(undefined4 *)(param_2 + lVar9 + 0x40);
      *(undefined8 *)(param_1 + lVar9 + 0x48) = *(undefined8 *)(param_2 + lVar9 + 0x48);
      lVar9 = lVar9 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147f42fa2 thunk_FUN_1463f2130 body=5 status=ok
// SIG undefined thunk_FUN_1463f2130(void)

void thunk_FUN_1463f2130(longlong param_1)

{
  FUN_1401b2056();
  *(undefined1 *)(param_1 + 0x17b) = 0;
  return;
}



// FUNCTION 147f42fa8 FUN_147f42fa8 body=57 status=ok
// SIG undefined FUN_147f42fa8(void)

void FUN_147f42fa8(undefined8 param_1)

{
  int iVar1;
  
  FUN_1470d7520();
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 == 3) {
    return;
  }
  FUN_140356874(param_1,0);
  FUN_140356874(param_1,1);
  return;
}



// FUNCTION 147f42fe2 FUN_147f42fe2 body=168 status=ok
// SIG undefined FUN_147f42fe2(void)

ulonglong FUN_147f42fe2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong unaff_RBX;
  bool bVar10;
  
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_147f4303b;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x78);
    if (lVar8 != 0) {
      uVar9 = (**(code **)(*(longlong *)(lVar8 + 8) + 0x10))(lVar8 + 8);
      uVar7 = FUN_147f42fe2(uVar9);
      unaff_RBX = (ulonglong)uVar7;
    }
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
    if (lVar8 != 0) goto LAB_147f4305f;
  }
LAB_147f4303b:
  fVar3 = *(float *)(param_1 + 0x100);
  lVar8 = FUN_144860928();
  if (fVar3 <= *(float *)(lVar8 + 0x3c)) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x20))
    ;
  }
  else {
    unaff_RBX = 0;
  }
LAB_147f4305f:
  return unaff_RBX & 0xffffff01;
}



// FUNCTION 147f4308a FUN_147f4308a body=168 status=ok
// SIG undefined FUN_147f4308a(void)

ulonglong FUN_147f4308a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong unaff_RBX;
  bool bVar10;
  
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_147f430e3;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x78);
    if (lVar8 != 0) {
      uVar9 = (**(code **)(*(longlong *)(lVar8 + 8) + 0x10))(lVar8 + 8);
      uVar7 = FUN_147f4308a(uVar9);
      unaff_RBX = (ulonglong)uVar7;
    }
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
    if (lVar8 != 0) goto LAB_147f43107;
  }
LAB_147f430e3:
  fVar3 = *(float *)(param_1 + 0x100);
  lVar8 = FUN_144860928();
  if (fVar3 <= *(float *)(lVar8 + 0x3c)) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c)
                        );
  }
  else {
    unaff_RBX = 0;
  }
LAB_147f43107:
  return unaff_RBX & 0xffffff01;
}



// FUNCTION 147f43132 FUN_147f43132 body=159 status=ok
// SIG undefined FUN_147f43132(void)

ulonglong FUN_147f43132(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong unaff_RBP;
  bool bVar10;
  
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147f4319b;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (lVar4 != 0) {
      uVar9 = (**(code **)(*(longlong *)(lVar4 + 8) + 0x10))(lVar4 + 8);
      uVar7 = FUN_147f43132(uVar9,param_2);
      unaff_RBP = (ulonglong)uVar7;
    }
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
    if (lVar4 != 0) {
      return unaff_RBP & 0xffffff01;
    }
  }
LAB_147f4319b:
  uVar8 = FUN_144729c90(param_1 + 0xa0,param_2);
  return uVar8;
}



// FUNCTION 147f4321c FUN_147f4321c body=41 status=ok
// SIG undefined FUN_147f4321c(void)

void FUN_147f4321c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x2d8) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x2c4) = *(undefined8 *)(*(longlong *)(lVar1 + 0x2a8) + 0x2d8);
  }
  return;
}



// FUNCTION 147f43246 FUN_147f43246 body=235 status=ok
// SIG undefined FUN_147f43246(void)

void FUN_147f43246(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x56] != param_2) {
    local_38 = param_2;
    uVar1 = FUN_140927942();
    local_30 = FUN_14477b664(uVar1);
    local_28 = 0;
    if (local_30 != 0 && param_2 != 0) {
      local_28 = FUN_14494cb38(local_30,&local_38);
      if (local_28 != 0) {
        FUN_140862116(param_1 + 0x56,&local_38);
        if (*(char *)(param_1[0x15] + 0x178) == '\x03') {
          param_1[0x5b] = param_2;
        }
        if ((*(byte *)(param_1 + 0x55) & 0x20) == 0) {
          (**(code **)(*param_1 + 0x5f0))(param_1);
          if ((*(byte *)(param_1 + 0x55) & 1) != 0) {
            (**(code **)(*param_1 + 0x5e8))(param_1);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f43372 FUN_147f43372 body=52 status=ok
// SIG undefined FUN_147f43372(void)

void FUN_147f43372(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x3d8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3d0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + 0x628) = param_2;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147f433a6 FUN_147f433a6 body=7 status=ok
// SIG undefined FUN_147f433a6(void)

void FUN_147f433a6(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x628) = param_2;
  return;
}



// FUNCTION 147f433ae FUN_147f433ae body=779 status=ok
// SIG undefined FUN_147f433ae(void)

void FUN_147f433ae(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int iVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  longlong local_180;
  double local_178 [4];
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_118 [4];
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_b0;
  double dVar3;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar7 = FUN_1447210f0();
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x152) != '\x02')) &&
     (iVar4 = *(int *)(param_1 + 0x3d8), (longlong)iVar4 != 0)) {
    local_180 = *(longlong *)(param_1 + 0x3d0);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(local_180 + lVar7);
      FUN_14480333a(lVar5,local_118);
      pdVar9 = local_118;
      pdVar10 = local_178;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *pdVar10 = *pdVar9;
        pdVar9 = pdVar9 + 1;
        pdVar10 = pdVar10 + 1;
      }
      if ((*(byte *)(lVar5 + 0x1f8) & 4) != 0) {
        dVar12 = local_f8 * param_2[8];
        dVar13 = dStack_f0 * param_2[9];
        dVar11 = local_e8 * param_2[10];
        dVar3 = *param_2;
        dVar2 = param_2[1];
        dVar6 = param_2[2];
        dVar1 = param_2[3];
        dVar14 = dVar13 * dVar3 - dVar12 * dVar2;
        dVar15 = dVar11 * dVar2 - dVar13 * dVar6;
        dVar16 = dVar12 * dVar6 - dVar3 * dVar11;
        dVar15 = dVar15 + dVar15;
        dVar16 = dVar16 + dVar16;
        dVar14 = dVar14 + dVar14;
        dVar13 = (dVar6 * dVar15 - dVar3 * dVar14) + param_2[3] * dVar16 + dVar13 + param_2[5];
        local_148 = dVar14 * dVar1 + dVar11 + (dVar16 * dVar3 - dVar15 * dVar2) + param_2[6];
        local_158._8_4_ = SUB84(dVar13,0);
        local_158._0_8_ = (dVar14 * dVar2 - dVar16 * dVar6) + dVar1 * dVar15 + dVar12 + param_2[4];
        local_158._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        uStack_140 = 0;
      }
      if ((*(byte *)(lVar5 + 0x1f8) & 8) != 0) {
        dVar14 = param_2[3];
        dVar1 = param_2[3];
        dVar13 = param_2[1];
        dVar16 = param_2[1];
        dVar2 = param_2[2];
        dVar3 = param_2[2];
        local_178[0] = local_118[1] * dVar2 * -1.0 +
                       local_118[2] * dVar13 + local_118[3] * *param_2 * 1.0 + local_118[0] * dVar14
        ;
        local_178[1] = local_118[0] * dVar3 * 1.0 +
                       local_118[3] * dVar16 + local_118[2] * *param_2 * -1.0 + local_118[1] * dVar1
        ;
        local_178[2] = local_118[3] * dVar2 * 1.0 +
                       ((*param_2 * local_118[1] * 1.0 + dVar14 * local_118[2]) -
                       local_118[0] * dVar13);
        local_178[3] = local_118[2] * dVar3 * -1.0 +
                       ((*param_2 * local_118[0] * -1.0 + dVar1 * local_118[3]) -
                       local_118[1] * dVar16);
      }
      local_188 = 0;
      FUN_144927a08(lVar5,local_178,0,0);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar4 * 8 != lVar7);
  }
  if ((local_b0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f436bf FUN_147f436bf body=175 status=ok
// SIG undefined FUN_147f436bf(void)

undefined8 FUN_147f436bf(undefined8 param_1)

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
  local_b8 = FUN_1412df7ca();
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



// FUNCTION 147f43770 FUN_147f43770 body=725 status=ok
// SIG undefined FUN_147f43770(void)

void FUN_147f43770(longlong param_1,ulonglong param_2)

{
  undefined1 *_Dst;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_468 [32];
  undefined1 local_448 [1024];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_468;
  lVar10 = (longlong)(int)param_2;
  lVar12 = lVar10 * 0x410;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x408 + lVar12);
  lVar9 = *(longlong *)(param_1 + 0x80) + lVar12;
  uVar6 = (uint)(param_2 >> 0x20);
  iVar4 = ~uVar6 + iVar3;
  if (iVar4 != 0) {
    iVar8 = 1;
    if (iVar4 < 1) {
      iVar8 = iVar4;
    }
    lVar11 = *(longlong *)(lVar9 + 0x400);
    if (*(longlong *)(lVar9 + 0x400) == 0) {
      lVar11 = lVar9;
    }
    memmove((void *)(((longlong)param_2 >> 0x20) * 0x40 + lVar11),
            (void *)((longlong)(iVar3 - iVar8) * 0x40 + lVar11),(longlong)iVar8 << 6);
    iVar3 = *(int *)(lVar9 + 0x408);
  }
  *(int *)(lVar9 + 0x408) = iVar3 + -1;
  if ((int)uVar6 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x408 + lVar12)) {
    lVar12 = *(longlong *)(param_1 + 0x80) + lVar12;
    lVar9 = *(longlong *)(lVar12 + 0x400);
    if (lVar9 != 0) {
      lVar12 = lVar9;
    }
    lVar12 = FUN_14479d2ce(((longlong)param_2 >> 0x20) * 0x40 + lVar12 + 0x38);
    if (lVar12 != 0) {
      *(ulonglong *)(lVar12 + 0x6e0) = param_2;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar10 * 8);
  *piVar1 = *piVar1 + -1;
  lVar12 = *(longlong *)(param_1 + 0x60);
  uVar7 = 0xffffffff;
  if (*(uint *)(lVar12 + 4 + lVar10 * 8) < 7) {
    uVar7 = param_2 & 0xffffffff;
  }
  uVar6 = (uint)uVar7;
  if ((int)param_2 != 0) {
    do {
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)((int)param_2 - 1U >> 3) * 4);
      param_2 = (ulonglong)(int)uVar6;
      piVar1 = (int *)(lVar12 + 4 + param_2 * 8);
      *piVar1 = *piVar1 + -1;
      lVar12 = *(longlong *)(param_1 + 0x60);
      if (*(uint *)(lVar12 + 4 + param_2 * 8) < 7) {
        uVar7 = (ulonglong)uVar6;
      }
      uVar6 = (uint)uVar7;
    } while (param_2 != 0);
  }
  if ((uVar6 != 0xffffffff) && (lVar9 = (longlong)(int)uVar6, *(int *)(lVar12 + lVar9 * 8) != -1)) {
    lVar10 = lVar9 * 0x410;
    uVar2 = *(uint *)(lVar12 + 4 + lVar9 * 8);
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x408 + lVar10) < (int)uVar2) {
      local_48 = 0;
      local_40 = 0x1000000000;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar2);
      }
      if (0x10 < uVar2) {
        FUN_147f4a22e(local_448);
      }
      FUN_147f4a296(param_1,uVar6,local_448);
      lVar12 = *(longlong *)(param_1 + 0x80);
      _Dst = (undefined1 *)(lVar12 + lVar10);
      if (_Dst != local_448) {
        if (local_48 == 0) {
          memmove(_Dst,local_448,0x400);
        }
        if (*(longlong *)(_Dst + 0x400) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(_Dst + 0x400) = local_48;
        local_48 = 0;
        *(undefined4 *)(_Dst + 0x408) = (undefined4)local_40;
        *(undefined4 *)(_Dst + 0x40c) = local_40._4_4_;
        local_40 = 0x1000000000;
        lVar12 = *(longlong *)(param_1 + 0x80);
      }
      if (0 < *(int *)(lVar12 + 0x408 + lVar10)) {
        uVar7 = (ulonglong)uVar6;
        lVar9 = 0x38;
        lVar11 = 0;
        do {
          lVar5 = *(longlong *)(lVar12 + lVar10 + 0x400);
          if (lVar5 == 0) {
            lVar5 = lVar12 + lVar10;
          }
          lVar12 = FUN_14479d2ce(lVar5 + lVar9);
          if (lVar12 != 0) {
            *(ulonglong *)(lVar12 + 0x6e0) = uVar7;
          }
          lVar11 = lVar11 + 1;
          lVar12 = *(longlong *)(param_1 + 0x80);
          uVar7 = uVar7 + 0x100000000;
          lVar9 = lVar9 + 0x40;
        } while (lVar11 < *(int *)(lVar12 + 0x408 + lVar10));
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f43a5a FUN_147f43a5a body=2503 status=ok
// SIG undefined FUN_147f43a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_147f43a5a(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined4 local_340;
  undefined1 local_338;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
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
  undefined1 local_1d8 [16];
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
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  dVar6 = *(double *)(param_1 + 0x240);
  dVar25 = *(double *)(param_1 + 0x248);
  dVar17 = *(double *)(param_1 + 0x250);
  dVar42 = *(double *)(param_1 + 600);
  dVar27 = *(double *)(param_1 + 0x260);
  dVar29 = *(double *)(param_1 + 0x268);
  dVar22 = *(double *)(param_1 + 0x270);
  auVar18 = *(undefined1 (*) [16])(param_1 + 0x280);
  auVar19 = *(undefined1 (*) [16])(param_1 + 0x290);
  local_338 = in_stack_00000038;
  local_340 = in_stack_00000030;
  local_348 = in_stack_00000028;
  uVar11 = FUN_14028c352(param_1);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar13 = FUN_140b5495e();
    auVar21 = _DAT_149934d80;
    if (*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30);
      if (*(longlong *)(lVar3 + (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30) {
        dVar7 = *(double *)*(undefined1 (*) [16])(param_1 + 0x280);
        dVar8 = *(double *)(param_1 + 0x288);
        auVar1 = *(undefined1 (*) [16])(param_1 + 0x290);
        dVar4 = auVar1._0_8_;
        auVar40._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_));
        auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_));
        uVar12 = movmskpd((int)(lVar13 + 0x30),auVar40);
        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar19._8_8_));
        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar19._0_8_));
        iVar14 = movmskpd((int)lVar3,auVar31);
        uVar15 = iVar14 << 2 | uVar12;
        dVar33 = DAT_14c8464a0;
        dVar34 = DAT_14c8464a8;
        uVar35 = (undefined4)DAT_14c846480;
        uVar36 = DAT_14c846480._4_4_;
        uVar37 = (undefined4)DAT_14c846488;
        uVar38 = DAT_14c846488._4_4_;
        local_308 = _DAT_14c8464d0;
        dVar23 = DAT_14c8464c0;
        dVar24 = DAT_14c8464c8;
        dVar39 = DAT_14c846490;
        dVar5 = DAT_14c846498;
        dVar30 = DAT_14c8464b0;
        dVar32 = DAT_14c8464b8;
        if (uVar15 != 0) {
          auVar31 = divpd(_DAT_149934d80,auVar18);
          auVar40 = divpd(ZEXT816(0x3ff0000000000000),auVar19);
          dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_)) & auVar31._0_8_)
          ;
          dVar24 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_)) & auVar31._8_8_)
          ;
          dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar19._0_8_)) & auVar40._0_8_)
          ;
          local_308._8_8_ = 0;
          local_308._0_8_ = dVar33;
          dVar30 = -dVar6;
          dVar32 = -dVar25;
          dVar39 = dVar17 * -1.0;
          dVar5 = dVar42 * 1.0;
          dVar27 = dVar27 * dVar23;
          dVar29 = dVar29 * dVar24;
          dVar22 = dVar22 * dVar33;
          dVar42 = dVar29 * dVar30 - dVar32 * dVar27;
          dVar44 = dVar22 * dVar32 - dVar39 * dVar29;
          dVar17 = dVar27 * dVar39 - dVar30 * dVar22;
          dVar44 = dVar44 + dVar44;
          dVar17 = dVar17 + dVar17;
          dVar42 = dVar42 + dVar42;
          dVar33 = 0.0 - ((dVar42 * dVar32 - dVar17 * dVar39) + dVar5 * dVar44 + dVar27);
          dVar34 = 0.0 - (dVar42 * dVar6 + dVar39 * dVar44 + dVar5 * dVar17 + dVar29);
          uVar35 = SUB84(dVar6,0);
          uVar36 = (int)((ulonglong)dVar30 >> 0x20);
          uVar37 = SUB84(dVar25,0);
          uVar38 = (int)((ulonglong)dVar32 >> 0x20);
          dVar30 = 0.0 - (dVar5 * dVar42 + dVar22 + (dVar17 * dVar30 - dVar44 * dVar32));
          dVar32 = 0.0;
        }
        dVar27 = *(double *)(param_1 + 0x240);
        dVar29 = *(double *)(param_1 + 0x248);
        dVar6 = *(double *)(param_1 + 0x250);
        dVar25 = *(double *)(param_1 + 600);
        local_318 = *(double *)(param_1 + 0x260);
        dStack_310 = *(double *)(param_1 + 0x268);
        local_2a8 = ZEXT816(0);
        local_2b8 = 0.0;
        dStack_2b0 = 0.0;
        auVar18._8_8_ = dVar24;
        auVar18._0_8_ = dVar23;
        auVar18 = minpd(auVar18,*(undefined1 (*) [16])(param_1 + 0x280));
        auVar40 = minpd(local_308,auVar1);
        auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
        auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
        iVar14 = movmskpd(uVar12,auVar19);
        auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
        auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
        uVar12 = movmskpd(uVar15,auVar41);
        uVar9 = local_308._0_8_;
        uVar10 = local_308._8_8_;
        local_328 = dVar7;
        dStack_320 = dVar8;
        if ((uVar12 & 0x3fffffff) == 0 && iVar14 == 0) {
          local_2d8 = (double)CONCAT44(uVar38,uVar37) * dVar6 * -1.0 +
                      dVar39 * dVar29 +
                      dVar27 * dVar5 * 1.0 + dVar25 * (double)CONCAT44(uVar36,uVar35);
          dStack_2d0 = (double)CONCAT44(uVar36,uVar35) * dVar6 * 1.0 +
                       dVar5 * dVar29 +
                       dVar27 * dVar39 * -1.0 + dVar25 * (double)CONCAT44(uVar38,uVar37);
          local_2c8._8_8_ =
               dVar39 * dVar6 * -1.0 +
               ((dVar27 * (double)CONCAT44(uVar36,uVar35) * -1.0 + dVar25 * dVar5) -
               dVar29 * (double)CONCAT44(uVar38,uVar37));
          local_2c8._0_8_ =
               dVar5 * dVar6 * 1.0 +
               ((dVar27 * (double)CONCAT44(uVar38,uVar37) * 1.0 + dVar25 * dVar39) -
               dVar29 * (double)CONCAT44(uVar36,uVar35));
          dVar33 = dVar33 * dVar7;
          dVar34 = dVar34 * dVar8;
          dVar30 = dVar30 * dVar4;
          dVar32 = dVar32 * auVar1._8_8_;
          dVar17 = dVar34 * dVar27 - dVar29 * dVar33;
          dVar22 = dVar30 * dVar29 - dVar6 * dVar34;
          dVar39 = dVar33 * dVar6 - dVar27 * dVar30;
          dVar42 = dVar32 * dVar25 - dVar25 * dVar32;
          dVar22 = dVar22 + dVar22;
          dVar39 = dVar39 + dVar39;
          dVar17 = dVar17 + dVar17;
          dVar42 = dVar42 + dVar42;
          local_2b8 = local_318 + (dVar17 * dVar29 - dVar6 * dVar39) + dVar25 * dVar22 + dVar33;
          dStack_2b0 = dStack_310 + (dVar22 * dVar6 - dVar17 * dVar27) + dVar25 * dVar39 + dVar34;
          dVar6 = *(double *)(param_1 + 0x278) +
                  (dVar42 * dVar25 - dVar42 * dVar25) + dVar25 * dVar42 + dVar32;
          local_2a8._8_4_ = SUB84(dVar6,0);
          local_2a8._0_8_ =
               *(double *)(param_1 + 0x270) +
               (dVar39 * dVar27 - dVar29 * dVar22) + dVar25 * dVar17 + dVar30;
          local_2a8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        }
        else {
          dVar17 = dVar29 + dVar29;
          dVar44 = dVar6 + dVar6;
          dVar42 = dVar27 * (dVar27 + dVar27);
          dVar45 = (dVar27 + dVar27) * dVar25;
          local_1b8 = (dVar17 * dVar27 - dVar44 * dVar25) * dVar8;
          dStack_190 = (dVar44 * dVar29 - dVar45) * dVar4;
          dStack_1b0 = (DAT_149934d80._8_8_ - (dVar6 * dVar44 + dVar42)) * dVar8;
          local_198 = (dVar17 * dVar25 + dVar27 * dVar44) * dVar4;
          dVar22 = (dVar17 * dVar27 + dVar44 * dVar25) * dVar7;
          local_1a8 = (dVar44 * dVar29 + dVar45) * dVar8;
          local_1d8._8_4_ = SUB84(dVar22,0);
          local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar6 * dVar44 + dVar29 * dVar17)) * dVar7;
          local_1d8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          local_1c8 = (dVar27 * dVar44 - dVar17 * dVar25) * dVar7;
          uStack_1c0 = 0;
          local_188 = (1.0 - (dVar42 + dVar29 * dVar17)) * dVar4;
          dVar45 = dVar4 * (double)local_308._0_8_;
          uStack_1a0 = 0;
          uStack_180 = 0;
          uStack_160 = 0x3ff0000000000000;
          dVar27 = (double)CONCAT44(uVar36,uVar35) + (double)CONCAT44(uVar36,uVar35);
          dVar29 = (double)CONCAT44(uVar38,uVar37) + (double)CONCAT44(uVar38,uVar37);
          dVar6 = dVar39 + dVar39;
          dVar25 = (double)CONCAT44(uVar36,uVar35) * dVar27;
          dVar42 = (double)CONCAT44(uVar38,uVar37) * dVar29;
          local_208 = (1.0 - (dVar25 + dVar42)) * (double)local_308._0_8_;
          dVar22 = dVar29 * (double)CONCAT44(uVar36,uVar35);
          dVar44 = dVar6 * (double)CONCAT44(uVar38,uVar37);
          dVar17 = (double)CONCAT44(uVar36,uVar35) * dVar6;
          dVar27 = dVar27 * dVar5;
          local_218 = (dVar17 + dVar29 * dVar5) * (double)local_308._0_8_;
          local_238 = (dVar22 - dVar6 * dVar5) * dVar24;
          dStack_210 = (dVar44 - dVar27) * (double)local_308._0_8_;
          local_258 = ((double)DAT_149934d80 - (dVar39 * dVar6 + dVar42)) * dVar23;
          dStack_230 = (DAT_149934d80._8_8_ - (dVar39 * dVar6 + dVar25)) * dVar24;
          dStack_250 = (dVar22 + dVar6 * dVar5) * dVar23;
          local_228 = (dVar44 + dVar27) * dVar24;
          local_248 = (dVar17 - dVar29 * dVar5) * dVar23;
          uStack_240 = 0;
          uStack_220 = 0;
          uStack_200 = 0;
          uStack_1e0 = 0x3ff0000000000000;
          local_2f8 = dVar33;
          dStack_2f0 = dVar34;
          local_2e8 = dVar30;
          dStack_2e0 = dVar32;
          local_1f8 = dVar33;
          dStack_1f0 = dVar34;
          local_1e8 = dVar30;
          local_178 = local_318;
          dStack_170 = dStack_310;
          local_168 = *(double *)(param_1 + 0x270);
          FUN_1447fea8d(&local_158);
          FUN_144a1c686(&local_158,0x3e45798ee0000000);
          auVar20._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar24);
          auVar20._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar23);
          auVar18 = blendvpd(_DAT_149936790,auVar21,auVar20);
          uVar16 = -(ulonglong)(0.0 <= dVar45);
          dVar27 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
          dVar29 = auVar18._0_8_;
          local_148 = local_148 * dVar29;
          local_150 = local_150 * dVar29;
          local_158 = local_158 * dVar29;
          dVar29 = auVar18._8_8_;
          local_128 = local_128 * dVar29;
          local_130 = local_130 * dVar29;
          local_138 = dVar29 * local_138;
          local_108 = local_108 * dVar27;
          local_110 = local_110 * dVar27;
          local_118 = dVar27 * local_118;
          FUN_14481fd10(&local_278,&local_158);
          auVar26._0_8_ = local_278 * local_278;
          auVar26._8_8_ = dStack_270 * dStack_270;
          dVar27 = local_268 * local_268 + auVar26._0_8_;
          dVar29 = dStack_260 * dStack_260 + auVar26._8_8_;
          auVar28._0_8_ = dVar27 + dVar29;
          auVar28._8_8_ = dVar27 + dVar29;
          auVar18 = sqrtpd(auVar26,auVar28);
          auVar18 = divpd(auVar21,auVar18);
          auVar43._0_8_ = auVar18._0_8_ * local_268;
          auVar43._8_8_ = auVar18._8_8_ * dStack_260;
          local_2d8 = (double)((ulonglong)(local_278 * auVar18._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
          dStack_2d0 = (double)((ulonglong)(dStack_270 * auVar18._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
          auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
          auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
          local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar21);
          local_2b8 = local_f8;
          dStack_2b0 = dStack_f0;
          local_2a8._8_8_ = 0;
          local_2a8._0_8_ = local_e8;
        }
        local_288 = (double)uVar9 * dVar4;
        dStack_280 = (double)uVar10 * auVar1._8_8_;
        local_298._8_4_ = SUB84(dVar24 * dVar8,0);
        local_298._0_8_ = dVar23 * dVar7;
        local_298._12_4_ = (int)((ulonglong)(dVar24 * dVar8) >> 0x20);
        FUN_147f433ae(lVar2);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 147f44422 FUN_147f44422 body=2331 status=ok
// SIG undefined FUN_147f44422(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147f44422(double param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  size_t _Size;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auStack_3d8 [32];
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  double local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
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
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  iVar13 = *(int *)((longlong)param_1 + 0x638);
  lVar10 = (longlong)iVar13;
  if (lVar10 == 0) {
    iVar12 = 0;
  }
  else {
    local_3b8 = param_1;
    plVar20 = *(longlong **)((longlong)param_1 + 0x630);
    iVar12 = 0;
    bVar11 = *plVar20 == 0;
    iVar14 = 0;
    do {
      lVar16 = (longlong)iVar14;
      param_3 = iVar14 + 1;
      if (iVar14 + 1 < iVar13) {
        param_3 = iVar13;
      }
      plVar15 = plVar20 + lVar16 * 0xe + 0xe;
      iVar18 = iVar14;
      lVar17 = lVar16;
      do {
        lVar17 = lVar17 + 1;
        iVar19 = param_3;
        if (lVar10 <= lVar17) break;
        lVar3 = *plVar15;
        iVar18 = iVar18 + 1;
        plVar15 = plVar15 + 0xe;
        iVar19 = iVar18;
      } while (bVar11 == (lVar3 == 0));
      param_4 = SUB84(plVar15,0);
      if (bVar11 == false) {
        if (iVar12 != iVar14) {
          _Size = (longlong)(iVar19 - iVar14) * 0x70;
          memmove(plVar20 + (longlong)iVar12 * 0xe,plVar20 + lVar16 * 0xe,_Size);
          param_3 = (int)_Size;
        }
        iVar12 = iVar12 + (iVar19 - iVar14);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar14 = iVar19;
    } while (lVar17 < lVar10);
    *(int *)((longlong)local_3b8 + 0x638) = iVar12;
    param_1 = local_3b8;
  }
  if ((*(longlong *)((longlong)param_1 + 0x620) != 0) && (iVar12 != 0)) {
    local_388 = *(double *)((longlong)param_1 + 0x240);
    local_398 = *(double *)((longlong)param_1 + 0x248);
    local_338 = *(undefined1 (*) [16])((longlong)param_1 + 0x250);
    dStack_390 = local_338._0_8_;
    dStack_380 = local_338._8_8_;
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + 0x280);
    dVar4 = auVar2._0_8_;
    dVar6 = auVar2._8_8_;
    local_3a8 = *(undefined1 (*) [16])((longlong)param_1 + 0x290);
    dVar5 = local_3a8._0_8_;
    auVar23 = minpd(_DAT_149934d80,auVar2);
    auVar29 = minpd(ZEXT816(0x3ff0000000000000),local_3a8);
    auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
    auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
    iVar13 = movmskpd(param_3,auVar24);
    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    iVar14 = movmskpd(param_4,auVar30);
    dVar26 = local_398 + local_398;
    dVar37 = dStack_390 + dStack_390;
    dVar31 = local_388 * (local_388 + local_388);
    dVar7 = (DAT_149934d80._8_8_ - (dStack_390 * dVar37 + dVar31)) * dVar6;
    dVar39 = (local_388 + local_388) * dStack_380;
    dStack_2b0 = (dVar37 * local_398 - dVar39) * dVar5;
    local_2b8 = (dVar26 * dStack_380 + local_388 * dVar37) * dVar5;
    local_2a8._8_4_ = SUB84(dVar7,0);
    local_2a8._0_8_ = (dVar26 * local_388 - dVar37 * dStack_380) * dVar6;
    local_2a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar23._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar23._0_8_ = -(ulonglong)(0.0 <= dVar4);
    local_318 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
    dVar7 = local_3a8._8_8_ * 0.0;
    uVar21 = -(ulonglong)(0.0 <= dVar5 * 1.0);
    dVar40 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
    local_348._8_4_ = local_338._8_4_;
    local_348._0_8_ = dStack_380;
    local_348._12_4_ = local_338._12_4_;
    local_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0x3ff00000;
    local_358 = dStack_390 * 0.0 * -1.0 + local_398 * 0.0 + local_388 * 1.0 * 1.0 + dStack_380 * 0.0
    ;
    dStack_350 = dStack_390 * 0.0 * 1.0 +
                 local_398 * 1.0 + local_388 * 0.0 * -1.0 + dStack_380 * 0.0;
    local_368 = dStack_390 * 1.0 * 1.0 +
                ((local_388 * 0.0 * 1.0 + dStack_380 * 0.0) - local_398 * 0.0);
    dStack_360 = dStack_390 * 0.0 * -1.0 +
                 ((local_388 * 0.0 * -1.0 + dStack_380 * 1.0) - local_398 * 0.0);
    fVar1 = *(float *)(*(longlong *)((longlong)param_1 + 0x620) + 0x38 +
                      (ulonglong)(*(char *)((longlong)param_1 + 0x62a) == '\x01') * 4);
    plVar20 = *(longlong **)((longlong)param_1 + 0x630);
    plVar15 = plVar20 + (longlong)iVar12 * 0xe;
    local_2d8 = (1.0 - (dVar31 + local_398 * dVar26)) * dVar5;
    local_2c8 = (dVar37 * local_398 + dVar39) * dVar6;
    local_2e8 = (local_388 * dVar37 - dVar26 * dStack_380) * dVar4;
    uStack_2d0 = 0;
    uStack_2e0 = 0;
    dStack_3b0 = (dVar26 * local_388 + dVar37 * dStack_380) * dVar4;
    local_3b8 = ((double)DAT_149934d80 - (dStack_390 * dVar37 + local_398 * dVar26)) * dVar4;
    uStack_2c0 = 0;
    local_378 = *(double *)((longlong)param_1 + 0x270);
    dStack_370 = *(double *)((longlong)param_1 + 0x278);
    uStack_2f0 = 0x3ff0000000000000;
    dVar37 = local_318._8_8_;
    dVar26 = *(double *)((longlong)param_1 + 0x260);
    dVar31 = *(double *)((longlong)param_1 + 0x268);
    local_328 = local_388;
    dStack_320 = local_398;
    local_2f8 = local_378;
    do {
      lVar10 = *plVar20;
      dVar39 = *(double *)(lVar10 + 0x48) + (double)(fVar1 * -0.5);
      dVar32 = *(double *)(lVar10 + 0x40) + 0.0;
      dVar28 = *(double *)(lVar10 + 0x38) + 0.0;
      if (iVar13 + iVar14 * 4 == 0) {
        dVar28 = dVar28 * dVar4;
        dVar32 = dVar32 * dVar6;
        dVar39 = dVar39 * (double)local_3a8._0_8_;
        dVar33 = (double)local_3a8._8_8_ * 0.0;
        dVar22 = dVar32 * local_328 - local_398 * dVar28;
        dVar27 = dVar39 * dStack_320 - dStack_390 * dVar32;
        dVar34 = dVar28 * (double)local_338._0_8_ - local_388 * dVar39;
        dVar36 = dVar33 * (double)local_338._8_8_ - dStack_380 * dVar33;
        dVar27 = dVar27 + dVar27;
        dVar34 = dVar34 + dVar34;
        dVar22 = dVar22 + dVar22;
        dVar36 = dVar36 + dVar36;
        dVar28 = (dVar22 * dStack_320 - dStack_390 * dVar34) +
                 (double)local_348._0_8_ * dVar27 + dVar28 + dVar26;
        dVar32 = (dVar27 * (double)local_338._0_8_ - dVar22 * local_388) +
                 (double)local_348._8_8_ * dVar34 + dVar32 + dVar31;
        dVar27 = (dVar34 * local_328 - local_398 * dVar27) +
                 (double)local_348._0_8_ * dVar22 + dVar39 + local_378;
        dVar34 = (dVar36 * (double)local_338._8_8_ - dVar36 * dStack_380) +
                 (double)local_348._8_8_ * dVar36 + dVar33 + dStack_370;
        auVar29._8_8_ = dStack_360;
        auVar29._0_8_ = local_368;
        dVar39 = local_358;
        dVar22 = dStack_350;
      }
      else {
        local_1f8 = local_3b8;
        uStack_1f0 = dStack_3b0;
        local_1e8 = local_2e8;
        uStack_1e0 = uStack_2e0;
        local_1d8 = local_2a8._0_8_;
        uStack_1d0 = local_2a8._8_8_;
        local_1c8 = local_2c8;
        uStack_1c0 = uStack_2c0;
        local_1b8 = local_2b8;
        dStack_1b0 = dStack_2b0;
        local_1a8 = local_2d8;
        uStack_1a0 = uStack_2d0;
        local_188 = local_2f8;
        uStack_180 = uStack_2f0;
        local_278 = 0x3ff0000000000000;
        uStack_270 = 0;
        local_268 = 0;
        uStack_260 = 0;
        auVar9._4_4_ = uStack_304;
        auVar9._0_4_ = local_308;
        auVar9._8_4_ = uStack_300;
        auVar9._12_4_ = uStack_2fc;
        local_238 = 0;
        uStack_230 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_228 = 0x3ff0000000000000;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_258 = auVar9;
        local_218 = dVar28;
        dStack_210 = dVar32;
        local_208 = dVar39;
        local_198 = dVar26;
        dStack_190 = dVar31;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        local_168 = local_168 * (double)local_318._0_8_;
        local_170 = local_170 * (double)local_318._0_8_;
        local_178 = local_178 * (double)local_318._0_8_;
        local_148 = local_148 * dVar37;
        local_150 = local_150 * dVar37;
        local_158 = local_158 * dVar37;
        local_128 = local_128 * dVar40;
        local_130 = local_130 * dVar40;
        local_138 = local_138 * dVar40;
        FUN_14481fd10(&local_298,&local_178);
        dVar39 = local_288 * local_288 + local_298 * local_298;
        dVar28 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar35._0_8_ = dVar39 + dVar28;
        auVar35._8_8_ = dVar39 + dVar28;
        auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar23 = sqrtpd(auVar35,auVar35);
        auVar23 = divpd(_DAT_149934d80,auVar23);
        auVar38._0_8_ = auVar23._0_8_ * local_288;
        auVar38._8_8_ = auVar23._8_8_ * dStack_280;
        auVar29 = blendvpd(auVar9,auVar38,auVar25);
        dVar34 = 0.0;
        dVar28 = local_118;
        dVar32 = dStack_110;
        dVar39 = (double)((ulonglong)(local_298 * auVar23._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        dVar22 = (double)((ulonglong)(dStack_290 * auVar23._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        dVar27 = local_108;
      }
      plVar20[2] = (longlong)dVar39;
      plVar20[3] = (longlong)dVar22;
      *(undefined1 (*) [16])(plVar20 + 4) = auVar29;
      plVar20[6] = (longlong)dVar28;
      plVar20[7] = (longlong)dVar32;
      plVar20[8] = (longlong)dVar27;
      plVar20[9] = (longlong)dVar34;
      *(undefined1 (*) [16])(plVar20 + 10) = auVar2;
      auVar8._8_4_ = SUB84(dVar7,0);
      auVar8._0_8_ = dVar5 * 1.0;
      auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(plVar20 + 0xc) = auVar8;
      plVar20 = plVar20 + 0xe;
    } while (plVar20 != plVar15);
  }
  if ((local_f0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147f44d3e FUN_147f44d3e body=45 status=ok
// SIG undefined FUN_147f44d3e(void)

longlong FUN_147f44d3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145989eee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f44dc0 FUN_147f44dc0 body=63 status=ok
// SIG undefined FUN_147f44dc0(void)

undefined1 FUN_147f44dc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f44ee8(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 147f44e28 FUN_147f44e28 body=59 status=ok
// SIG undefined FUN_147f44e28(void)

undefined8 FUN_147f44e28(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f44e74 FUN_147f44e74 body=38 status=ok
// SIG undefined FUN_147f44e74(void)

void FUN_147f44e74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147f44ee8 FUN_147f44ee8 body=247 status=ok
// SIG undefined FUN_147f44ee8(void)

longlong FUN_147f44ee8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  lVar9 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x98);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x98) = lVar9;
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  lVar9 = *(longlong *)(param_2 + 0xb8);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0xb8);
    }
  }
  *(longlong *)(param_1 + 0xb8) = lVar9;
  return param_1;
}



// FUNCTION 147f44fe0 FUN_147f44fe0 body=37 status=ok
// SIG undefined FUN_147f44fe0(void)

void FUN_147f44fe0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  FUN_147f4515c(param_2);
  return;
}



// FUNCTION 147f45032 FUN_147f45032 body=63 status=ok
// SIG undefined FUN_147f45032(void)

undefined1 FUN_147f45032(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f452a8(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 147f4509a FUN_147f4509a body=59 status=ok
// SIG undefined FUN_147f4509a(void)

undefined8 FUN_147f4509a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f450e6 FUN_147f450e6 body=40 status=ok
// SIG undefined FUN_147f450e6(void)

void FUN_147f450e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_147f45234(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 147f4515c FUN_147f4515c body=122 status=ok
// SIG undefined FUN_147f4515c(void)

undefined8 * FUN_147f4515c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_14ac84e00;
  FUN_144b2e8f4(param_1 + 0xc,&DAT_14cb23618);
  param_1[0x15] = 0;
  FUN_144b2e8f4(param_1 + 0x16,&DAT_14cb23618);
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 147f451d6 FUN_147f451d6 body=38 status=ok
// SIG undefined FUN_147f451d6(void)

undefined8 FUN_147f451d6(undefined8 param_1,int param_2)

{
  FUN_147f45234();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f451fc FUN_147f451fc body=55 status=ok
// SIG undefined FUN_147f451fc(void)

void FUN_147f451fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23660 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23660 = FUN_140002ddd(FUN_14643eeab,uVar1,L"GpsTest_Nodes");
  }
  return;
}



// FUNCTION 147f45234 FUN_147f45234 body=115 status=ok
// SIG undefined FUN_147f45234(void)

void FUN_147f45234(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac84e00;
  plVar3 = (longlong *)param_1[0x1d];
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
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 147f452a8 FUN_147f452a8 body=236 status=ok
// SIG undefined FUN_147f452a8(void)

longlong FUN_147f452a8(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  uVar2 = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x6c);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  uVar7 = *(undefined4 *)(param_2 + 0x7c);
  uVar8 = *(undefined4 *)(param_2 + 0x80);
  uVar9 = *(undefined4 *)(param_2 + 0x84);
  uVar10 = *(undefined4 *)(param_2 + 0x88);
  uVar11 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  *(undefined4 *)(param_1 + 0x80) = uVar8;
  *(undefined4 *)(param_1 + 0x84) = uVar9;
  *(undefined4 *)(param_1 + 0x88) = uVar10;
  *(undefined4 *)(param_1 + 0x8c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  FUN_14488c2fc(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xb0);
  uVar2 = *(undefined4 *)(param_2 + 0xb4);
  uVar3 = *(undefined4 *)(param_2 + 0xb8);
  uVar4 = *(undefined4 *)(param_2 + 0xbc);
  uVar5 = *(undefined4 *)(param_2 + 0xc0);
  uVar6 = *(undefined4 *)(param_2 + 0xc4);
  uVar7 = *(undefined4 *)(param_2 + 200);
  uVar8 = *(undefined4 *)(param_2 + 0xcc);
  uVar9 = *(undefined4 *)(param_2 + 0xd4);
  uVar10 = *(undefined4 *)(param_2 + 0xd8);
  uVar11 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar9;
  *(undefined4 *)(param_1 + 0xd8) = uVar10;
  *(undefined4 *)(param_1 + 0xdc) = uVar11;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined4 *)(param_1 + 0xc4) = uVar6;
  *(undefined4 *)(param_1 + 200) = uVar7;
  *(undefined4 *)(param_1 + 0xcc) = uVar8;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  FUN_14488c2fc(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 147f45396 FUN_147f45396 body=32 status=ok
// SIG undefined FUN_147f45396(void)

void FUN_147f45396(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c19b8c(param_2);
  *param_2 = &PTR_FUN_14ac85040;
  return;
}



// FUNCTION 147f453de FUN_147f453de body=313 status=ok
// SIG undefined FUN_147f453de(void)

undefined8 FUN_147f453de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined1 *)(param_2 + 0x84 + lVar10) = *(undefined1 *)(param_3 + 0x84 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      *(undefined8 *)(param_2 + 0x90 + lVar10) = *(undefined8 *)(param_3 + 0x90 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      *(undefined1 *)(param_2 + 0xb8 + lVar10) = *(undefined1 *)(param_3 + 0xb8 + lVar10);
      *(undefined4 *)(param_2 + 0xc0 + lVar10) = *(undefined4 *)(param_3 + 0xc0 + lVar10);
      *(undefined8 *)(param_2 + 200 + lVar10) = *(undefined8 *)(param_3 + 200 + lVar10);
      lVar10 = lVar10 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f45540 FUN_147f45540 body=59 status=ok
// SIG undefined FUN_147f45540(void)

undefined8 FUN_147f45540(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4558c FUN_147f4558c body=38 status=ok
// SIG undefined FUN_147f4558c(void)

void FUN_147f4558c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147f45660 FUN_147f45660 body=54 status=ok
// SIG undefined FUN_147f45660(void)

undefined1 FUN_147f45660(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f3c1d0(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147f456be FUN_147f456be body=59 status=ok
// SIG undefined FUN_147f456be(void)

undefined8 FUN_147f456be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f45704 FUN_147f45704 body=56 status=ok
// SIG undefined FUN_147f45704(void)

void FUN_147f45704(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14ac7b6c0;
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 147f457bc FUN_147f457bc body=237 status=ok
// SIG undefined FUN_147f457bc(void)

undefined8 FUN_147f457bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar2 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar2 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x88 + lVar10) = *(undefined8 *)(param_3 + 0x88 + lVar10);
      *(undefined1 *)(param_2 + 0x90 + lVar10) = *(undefined1 *)(param_3 + 0x90 + lVar10);
      *(undefined4 *)(param_2 + 0x98 + lVar10) = *(undefined4 *)(param_3 + 0x98 + lVar10);
      lVar10 = lVar10 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f458d2 FUN_147f458d2 body=59 status=ok
// SIG undefined FUN_147f458d2(void)

undefined8 FUN_147f458d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4591e FUN_147f4591e body=38 status=ok
// SIG undefined FUN_147f4591e(void)

void FUN_147f4591e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 147f45a2e FUN_147f45a2e body=54 status=ok
// SIG undefined FUN_147f45a2e(void)

undefined1 FUN_147f45a2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f45b40(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147f45a8c FUN_147f45a8c body=59 status=ok
// SIG undefined FUN_147f45a8c(void)

undefined8 FUN_147f45a8c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f45ad2 FUN_147f45ad2 body=32 status=ok
// SIG undefined FUN_147f45ad2(void)

void FUN_147f45ad2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f45b40 FUN_147f45b40 body=105 status=ok
// SIG undefined FUN_147f45b40(void)

longlong FUN_147f45b40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f45bda FUN_147f45bda body=184 status=ok
// SIG undefined FUN_147f45bda(void)

undefined8 FUN_147f45bda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x78);
      uVar2 = *(undefined4 *)(param_3 + -0x74);
      uVar3 = *(undefined4 *)(param_3 + -0x70);
      uVar4 = *(undefined4 *)(param_3 + -0x6c);
      uVar5 = *(undefined4 *)(param_3 + -100);
      uVar6 = *(undefined4 *)(param_3 + -0x60);
      uVar7 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar5;
      *(undefined4 *)(param_2 + -0x60) = uVar6;
      *(undefined4 *)(param_2 + -0x5c) = uVar7;
      *(undefined4 *)(param_2 + -0x78) = uVar1;
      *(undefined4 *)(param_2 + -0x74) = uVar2;
      *(undefined4 *)(param_2 + -0x70) = uVar3;
      *(undefined4 *)(param_2 + -0x6c) = uVar4;
      FUN_1470d00c2(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -0x40) = *(undefined8 *)(param_3 + -0x40);
      *(undefined1 *)(param_2 + -0x38) = *(undefined1 *)(param_3 + -0x38);
      *(undefined2 *)(param_2 + -0x30) = *(undefined2 *)(param_3 + -0x30);
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_147f194d2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      param_3 = param_3 + 0xb0;
      param_2 = param_2 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f45cba FUN_147f45cba body=59 status=ok
// SIG undefined FUN_147f45cba(void)

undefined8 FUN_147f45cba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f45d06 FUN_147f45d06 body=65 status=ok
// SIG undefined FUN_147f45d06(void)

void FUN_147f45d06(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14ac88e00;
    if (param_2[0x10] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 147f45dfa FUN_147f45dfa body=54 status=ok
// SIG undefined FUN_147f45dfa(void)

undefined1 FUN_147f45dfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f45f0c(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147f45e58 FUN_147f45e58 body=59 status=ok
// SIG undefined FUN_147f45e58(void)

undefined8 FUN_147f45e58(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f45e9e FUN_147f45e9e body=32 status=ok
// SIG undefined FUN_147f45e9e(void)

void FUN_147f45e9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147f45f0c FUN_147f45f0c body=105 status=ok
// SIG undefined FUN_147f45f0c(void)

longlong FUN_147f45f0c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f45f76 FUN_147f45f76 body=37 status=ok
// SIG undefined FUN_147f45f76(void)

void FUN_147f45f76(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  FUN_147f46234(param_2);
  return;
}



// FUNCTION 147f45fe8 FUN_147f45fe8 body=355 status=ok
// SIG undefined FUN_147f45fe8(void)

undefined8 FUN_147f45fe8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined1 *)(param_2 + 0x80 + lVar10) = *(undefined1 *)(param_3 + 0x80 + lVar10);
      *(undefined8 *)(param_2 + 0x90 + lVar10) = *(undefined8 *)(param_3 + 0x90 + lVar10);
      *(undefined1 *)(param_2 + 0x98 + lVar10) = *(undefined1 *)(param_3 + 0x98 + lVar10);
      *(undefined4 *)(param_2 + 0xa0 + lVar10) = *(undefined4 *)(param_3 + 0xa0 + lVar10);
      *(undefined8 *)(param_2 + 0xb0 + lVar10) = *(undefined8 *)(param_3 + 0xb0 + lVar10);
      *(undefined1 *)(param_2 + 0xb8 + lVar10) = *(undefined1 *)(param_3 + 0xb8 + lVar10);
      *(undefined4 *)(param_2 + 0xc0 + lVar10) = *(undefined4 *)(param_3 + 0xc0 + lVar10);
      *(undefined8 *)(param_2 + 0xd0 + lVar10) = *(undefined8 *)(param_3 + 0xd0 + lVar10);
      *(undefined1 *)(param_2 + 0xd8 + lVar10) = *(undefined1 *)(param_3 + 0xd8 + lVar10);
      *(undefined4 *)(param_2 + 0xe0 + lVar10) = *(undefined4 *)(param_3 + 0xe0 + lVar10);
      *(undefined4 *)(param_2 + 0xe8 + lVar10) = *(undefined4 *)(param_3 + 0xe8 + lVar10);
      lVar10 = lVar10 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f46174 FUN_147f46174 body=59 status=ok
// SIG undefined FUN_147f46174(void)

undefined8 FUN_147f46174(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f461c0 FUN_147f461c0 body=38 status=ok
// SIG undefined FUN_147f461c0(void)

void FUN_147f461c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147f46234 FUN_147f46234 body=135 status=ok
// SIG undefined FUN_147f46234(void)

undefined8 * FUN_147f46234(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac85c90;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x18) = 0x447a0000;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return param_1;
}



// FUNCTION 147f462bc FUN_147f462bc body=38 status=ok
// SIG undefined FUN_147f462bc(void)

undefined8 FUN_147f462bc(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f462e2 FUN_147f462e2 body=55 status=ok
// SIG undefined FUN_147f462e2(void)

void FUN_147f462e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23720 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23720 = FUN_140002ddd(FUN_14643f21d,uVar1,L"GpsTestSettings_SensedDistanceOverTime");
  }
  return;
}



// FUNCTION 147f463b8 FUN_147f463b8 body=54 status=ok
// SIG undefined FUN_147f463b8(void)

undefined1 FUN_147f463b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f46528(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f46416 FUN_147f46416 body=59 status=ok
// SIG undefined FUN_147f46416(void)

undefined8 FUN_147f46416(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4645c FUN_147f4645c body=32 status=ok
// SIG undefined FUN_147f4645c(void)

void FUN_147f4645c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f464ca FUN_147f464ca body=38 status=ok
// SIG undefined FUN_147f464ca(void)

undefined8 FUN_147f464ca(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147f464f0 FUN_147f464f0 body=55 status=ok
// SIG undefined FUN_147f464f0(void)

void FUN_147f464f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23738 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23738 = FUN_140002ddd(FUN_14643f2b3,uVar1,L"GpsTest_SensedDistanceOverTime");
  }
  return;
}



// FUNCTION 147f46528 FUN_147f46528 body=103 status=ok
// SIG undefined FUN_147f46528(void)

longlong FUN_147f46528(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 147f465c0 FUN_147f465c0 body=327 status=ok
// SIG undefined FUN_147f465c0(void)

undefined8 FUN_147f465c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined8 *)(param_2 + 0x88 + lVar10) = *(undefined8 *)(param_3 + 0x88 + lVar10);
      *(undefined1 *)(param_2 + 0x90 + lVar10) = *(undefined1 *)(param_3 + 0x90 + lVar10);
      *(undefined4 *)(param_2 + 0x98 + lVar10) = *(undefined4 *)(param_3 + 0x98 + lVar10);
      *(undefined8 *)(param_2 + 0xa8 + lVar10) = *(undefined8 *)(param_3 + 0xa8 + lVar10);
      *(undefined1 *)(param_2 + 0xb0 + lVar10) = *(undefined1 *)(param_3 + 0xb0 + lVar10);
      *(undefined4 *)(param_2 + 0xb8 + lVar10) = *(undefined4 *)(param_3 + 0xb8 + lVar10);
      *(undefined8 *)(param_2 + 200 + lVar10) = *(undefined8 *)(param_3 + 200 + lVar10);
      *(undefined1 *)(param_2 + 0xd0 + lVar10) = *(undefined1 *)(param_3 + 0xd0 + lVar10);
      *(undefined2 *)(param_2 + 0xd8 + lVar10) = *(undefined2 *)(param_3 + 0xd8 + lVar10);
      lVar10 = lVar10 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f46730 FUN_147f46730 body=59 status=ok
// SIG undefined FUN_147f46730(void)

undefined8 FUN_147f46730(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f4677c FUN_147f4677c body=38 status=ok
// SIG undefined FUN_147f4677c(void)

void FUN_147f4677c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 147f4685a FUN_147f4685a body=54 status=ok
// SIG undefined FUN_147f4685a(void)

undefined1 FUN_147f4685a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f4696c(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 147f468b8 FUN_147f468b8 body=59 status=ok
// SIG undefined FUN_147f468b8(void)

undefined8 FUN_147f468b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f468fe FUN_147f468fe body=32 status=ok
// SIG undefined FUN_147f468fe(void)

void FUN_147f468fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147f4696c FUN_147f4696c body=109 status=ok
// SIG undefined FUN_147f4696c(void)

longlong FUN_147f4696c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f469da FUN_147f469da body=73 status=ok
// SIG undefined FUN_147f469da(void)

void FUN_147f469da(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac86510;
  param_2[0x10] = 0x3e2aaac100000000;
  param_2[0x11] = 0x3f0000003eaaaa3b;
  param_2[0x12] = 0x3f55551d3f2aaae3;
  *(undefined4 *)(param_2 + 0x13) = 0x3f800000;
  return;
}



// FUNCTION 147f46a4c FUN_147f46a4c body=221 status=ok
// SIG undefined FUN_147f46a4c(void)

undefined8 FUN_147f46a4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      puVar2 = (undefined4 *)(param_3 + 8 + lVar15);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x18 + lVar15);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x18 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar2 = (undefined4 *)(param_2 + 8 + lVar15);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      FUN_1470d00c2(param_2 + 0x28 + lVar15,param_3 + 0x28 + lVar15);
      *(undefined8 *)(param_2 + 0x40 + lVar15) = *(undefined8 *)(param_3 + 0x40 + lVar15);
      *(undefined1 *)(param_2 + 0x48 + lVar15) = *(undefined1 *)(param_3 + 0x48 + lVar15);
      *(undefined2 *)(param_2 + 0x50 + lVar15) = *(undefined2 *)(param_3 + 0x50 + lVar15);
      *(undefined1 *)(param_2 + 0x68 + lVar15) = *(undefined1 *)(param_3 + 0x68 + lVar15);
      *(undefined8 *)(param_2 + 0x60 + lVar15) = *(undefined8 *)(param_3 + 0x60 + lVar15);
      *(undefined4 *)(param_2 + 0x70 + lVar15) = *(undefined4 *)(param_3 + 0x70 + lVar15);
      *(undefined8 *)(param_2 + 0x78 + lVar15) = *(undefined8 *)(param_3 + 0x78 + lVar15);
      puVar1 = (undefined8 *)(param_3 + 0x80 + lVar15);
      uVar12 = puVar1[1];
      puVar4 = (undefined8 *)(param_3 + 0x8c + lVar15);
      uVar13 = *puVar4;
      uVar14 = puVar4[1];
      puVar4 = (undefined8 *)(param_2 + 0x80 + lVar15);
      *puVar4 = *puVar1;
      puVar4[1] = uVar12;
      puVar1 = (undefined8 *)(param_2 + 0x8c + lVar15);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      lVar15 = lVar15 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147f46b52 FUN_147f46b52 body=59 status=ok
// SIG undefined FUN_147f46b52(void)

undefined8 FUN_147f46b52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f46b9e FUN_147f46b9e body=38 status=ok
// SIG undefined FUN_147f46b9e(void)

void FUN_147f46b9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 147f46c6e FUN_147f46c6e body=118 status=ok
// SIG undefined FUN_147f46c6e(void)

undefined8 FUN_147f46c6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147f46d0c FUN_147f46d0c body=59 status=ok
// SIG undefined FUN_147f46d0c(void)

undefined8 FUN_147f46d0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f46d52 FUN_147f46d52 body=32 status=ok
// SIG undefined FUN_147f46d52(void)

void FUN_147f46d52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147f46dc2 FUN_147f46dc2 body=87 status=ok
// SIG undefined FUN_147f46dc2(void)

void FUN_147f46dc2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac86950;
  param_2[0x11] = DAT_14c9ab028;
  *(undefined1 *)(param_2 + 0x12) = 2;
  param_2[0x10] = &PTR_FUN_14a1a0a20;
  param_2[0x13] = 0;
  *(undefined2 *)(param_2 + 0x14) = 0x100;
  return;
}



// FUNCTION 147f46e42 FUN_147f46e42 body=63 status=ok
// SIG undefined FUN_147f46e42(void)

undefined1 FUN_147f46e42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f46f6a(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 147f46eaa FUN_147f46eaa body=59 status=ok
// SIG undefined FUN_147f46eaa(void)

undefined8 FUN_147f46eaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f46ef6 FUN_147f46ef6 body=38 status=ok
// SIG undefined FUN_147f46ef6(void)

void FUN_147f46ef6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 147f46f6a FUN_147f46f6a body=189 status=ok
// SIG undefined FUN_147f46f6a(void)

longlong FUN_147f46f6a(longlong param_1,longlong param_2)

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
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  lVar8 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x98);
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar8;
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 147f4708a FUN_147f4708a body=63 status=ok
// SIG undefined FUN_147f4708a(void)

undefined1 FUN_147f4708a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f47194(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 147f470f2 FUN_147f470f2 body=59 status=ok
// SIG undefined FUN_147f470f2(void)

undefined8 FUN_147f470f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147f47194 FUN_147f47194 body=111 status=ok
// SIG undefined FUN_147f47194(void)

longlong FUN_147f47194(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_140186ed8(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 147f47204 FUN_147f47204 body=74 status=ok
// SIG undefined FUN_147f47204(void)

void FUN_147f47204(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x26) == '\x01') {
    *param_1 = &PTR_FUN_14ac86b50;
    FUN_144724eca(param_1 + 0x13);
    FUN_144724eca(param_1 + 0xc);
    FUN_140f9d4d6(param_1);
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  return;
}



// FUNCTION 147f4724e FUN_147f4724e body=93 status=ok
// SIG undefined FUN_147f4724e(void)

void FUN_147f4724e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14ac86d90;
  param_2[0x10] = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x11] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x15) = 0;
  *(undefined1 *)((longlong)param_2 + 0xaa) = 0;
  return;
}



// FUNCTION 147f472d4 FUN_147f472d4 body=63 status=ok
// SIG undefined FUN_147f472d4(void)

undefined1 FUN_147f472d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f473fc(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}


