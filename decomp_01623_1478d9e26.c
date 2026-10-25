// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478d9e26 FUN_1478d9e26 body=59 status=ok
// SIG undefined FUN_1478d9e26(void)

undefined8 FUN_1478d9e26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d9ec2 FUN_1478d9ec2 body=114 status=ok
// SIG undefined FUN_1478d9ec2(void)

undefined4 * FUN_1478d9ec2(undefined4 *param_1,undefined4 *param_2)

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
  
  *param_1 = *param_2;
  lVar12 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 2);
    }
  }
  *(longlong *)(param_1 + 2) = lVar12;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  uVar9 = param_2[0xd];
  uVar10 = param_2[0xe];
  uVar11 = param_2[0xf];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar9;
  param_1[0xe] = uVar10;
  param_1[0xf] = uVar11;
  FUN_144a67f5c(param_1 + 0x10,param_2 + 0x10);
  FUN_144a67f5c(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 1478d9f36 FUN_1478d9f36 body=52 status=ok
// SIG undefined FUN_1478d9f36(void)

void FUN_1478d9f36(longlong param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1478d9f7a FUN_1478d9f7a body=44 status=ok
// SIG undefined FUN_1478d9f7a(void)

void FUN_1478d9f7a(undefined8 param_1,longlong *param_2)

{
  FUN_140280a77(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478d9fbc FUN_1478d9fbc body=54 status=ok
// SIG undefined FUN_1478d9fbc(void)

undefined1 FUN_1478d9fbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140472d3c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478da01a FUN_1478da01a body=59 status=ok
// SIG undefined FUN_1478da01a(void)

undefined8 FUN_1478da01a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478da0b8 FUN_1478da0b8 body=48 status=ok
// SIG undefined FUN_1478da0b8(void)

void FUN_1478da0b8(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140280a77(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1478da16a FUN_1478da16a body=59 status=ok
// SIG undefined FUN_1478da16a(void)

undefined8 FUN_1478da16a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478da20c FUN_1478da20c body=82 status=ok
// SIG undefined FUN_1478da20c(void)

void FUN_1478da20c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x20) = 0x100;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined1 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7a) = 0;
  return;
}



// FUNCTION 1478da290 FUN_1478da290 body=56 status=ok
// SIG undefined FUN_1478da290(void)

void FUN_1478da290(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x0001478da2bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1478da2de FUN_1478da2de body=63 status=ok
// SIG undefined FUN_1478da2de(void)

undefined1 FUN_1478da2de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478da426(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1478da346 FUN_1478da346 body=59 status=ok
// SIG undefined FUN_1478da346(void)

undefined8 FUN_1478da346(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478da392 FUN_1478da392 body=70 status=ok
// SIG undefined FUN_1478da392(void)

void FUN_1478da392(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x88) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x38);
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
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1478da426 FUN_1478da426 body=231 status=ok
// SIG undefined FUN_1478da426(void)

longlong * FUN_1478da426(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar14 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = *param_2;
    }
  }
  *param_1 = lVar14;
  param_1[5] = param_2[5];
  lVar14 = param_2[1];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar3 = param_2[2];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar11 = param_2[4];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(int *)(param_1 + 4) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  *(int *)(param_1 + 1) = (int)lVar14;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  lVar14 = param_2[6];
  lVar3 = param_2[7];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[7];
  param_1[6] = lVar14;
  param_1[7] = lVar3;
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
  param_1[0xe] = param_2[0xe];
  lVar14 = param_2[8];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar3 = param_2[9];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar11 = param_2[10];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar12 = param_2[0xb];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar9 = *(undefined4 *)((longlong)param_2 + 100);
  lVar13 = param_2[0xd];
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 100) = uVar9;
  *(int *)(param_1 + 0xd) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar10;
  *(int *)(param_1 + 10) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  *(int *)(param_1 + 0xb) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar8;
  *(int *)(param_1 + 8) = (int)lVar14;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(int *)(param_1 + 9) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  lVar14 = param_2[0xf];
  if (DAT_14c950c29 == '\x01') {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = param_2[0xf];
    }
  }
  param_1[0xf] = lVar14;
  *(short *)(param_1 + 0x10) = (short)param_2[0x10];
  return param_1;
}



// FUNCTION 1478da5a0 FUN_1478da5a0 body=54 status=ok
// SIG undefined FUN_1478da5a0(void)

undefined1 FUN_1478da5a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478da6b2(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1478da5fe FUN_1478da5fe body=59 status=ok
// SIG undefined FUN_1478da5fe(void)

undefined8 FUN_1478da5fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478da644 FUN_1478da644 body=32 status=ok
// SIG undefined FUN_1478da644(void)

void FUN_1478da644(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1417b3d74(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1478da6b2 FUN_1478da6b2 body=99 status=ok
// SIG undefined FUN_1478da6b2(void)

longlong FUN_1478da6b2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1411a2b72();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_1406fa324(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  FUN_1478da7c8(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 1478da716 FUN_1478da716 body=118 status=ok
// SIG undefined FUN_1478da716(void)

void FUN_1478da716(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478da78c FUN_1478da78c body=60 status=ok
// SIG undefined FUN_1478da78c(void)

void FUN_1478da78c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_144b1f840(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 1478da7c8 FUN_1478da7c8 body=89 status=ok
// SIG undefined FUN_1478da7c8(void)

undefined8 * FUN_1478da7c8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1463a1620(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478da8ba FUN_1478da8ba body=60 status=ok
// SIG undefined FUN_1478da8ba(void)

undefined8 FUN_1478da8ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar2);
      puVar5 = (undefined8 *)(param_2 + 0x10 + lVar2);
      *(undefined1 *)(puVar5 + -2) = *puVar1;
      *(undefined4 *)((longlong)puVar5 + -0xc) = *(undefined4 *)(puVar1 + 4);
      puVar4 = (undefined8 *)(puVar1 + 0x10);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar2 = lVar2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478da91e FUN_1478da91e body=59 status=ok
// SIG undefined FUN_1478da91e(void)

undefined8 FUN_1478da91e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478daa3c FUN_1478daa3c body=59 status=ok
// SIG undefined FUN_1478daa3c(void)

undefined8 FUN_1478daa3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dab32 FUN_1478dab32 body=54 status=ok
// SIG undefined FUN_1478dab32(void)

undefined1 FUN_1478dab32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478dac4a(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1478dab90 FUN_1478dab90 body=59 status=ok
// SIG undefined FUN_1478dab90(void)

undefined8 FUN_1478dab90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dabd6 FUN_1478dabd6 body=38 status=ok
// SIG undefined FUN_1478dabd6(void)

void FUN_1478dabd6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1478dac4a FUN_1478dac4a body=104 status=ok
// SIG undefined FUN_1478dac4a(void)

void * FUN_1478dac4a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    }
    else {
      FUN_1447ab012(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478dad4e FUN_1478dad4e body=104 status=ok
// SIG undefined FUN_1478dad4e(void)

undefined1 FUN_1478dad4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0xd);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0x11);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x15);
      puVar2 = (undefined4 *)(param_2 + lVar10);
      *(undefined4 *)((longlong)puVar2 + 9) = *(undefined4 *)((longlong)puVar1 + 9);
      *(undefined4 *)((longlong)puVar2 + 0xd) = uVar7;
      *(undefined4 *)((longlong)puVar2 + 0x11) = uVar8;
      *(undefined4 *)((longlong)puVar2 + 0x15) = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_140bee9ec();
      FUN_140bee9ec(param_2 + lVar10 + 0x30,param_3 + lVar10 + 0x30);
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478dadde FUN_1478dadde body=59 status=ok
// SIG undefined FUN_1478dadde(void)

undefined8 FUN_1478dadde(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dae24 FUN_1478dae24 body=34 status=ok
// SIG undefined FUN_1478dae24(void)

void FUN_1478dae24(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1478dae94(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1478dae94 FUN_1478dae94 body=72 status=ok
// SIG undefined FUN_1478dae94(void)

void FUN_1478dae94(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478daede FUN_1478daede body=429 status=ok
// SIG undefined FUN_1478daede(void)

void FUN_1478daede(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 1);
  if ((char)param_1[2] == '\0') {
    FUN_144716af1(*param_1,uVar8);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if ((char)param_2[2] == '\0') {
    FUN_144716af1(*param_2,(int)param_2[1]);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  uVar11 = uVar8;
  if ((int)uVar8 < (int)uVar1) {
    uVar11 = uVar1;
  }
  iVar7 = (int)uVar11 / 2 + uVar11;
  if (-1 < iVar7) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      FUN_14480ffb8(param_1);
    }
    uVar11 = 0;
    if (uVar8 != 0 || (int)uVar1 < 1) {
      uVar9 = 0;
      lVar10 = 0xc;
      uVar11 = 0;
      do {
        if ((uVar11 == uVar1) && ((longlong)uVar9 <= (longlong)(int)uVar8)) {
          return;
        }
        lVar2 = *param_1;
        puVar5 = (undefined8 *)(*param_2 + (longlong)(int)uVar11 * 0x10);
        lVar3 = *(longlong *)(*param_2 + (longlong)(int)uVar11 * 0x10);
        lVar4 = *(longlong *)(lVar2 + -0xc + lVar10);
        if (lVar4 == lVar3) {
          fVar12 = *(float *)(lVar2 + -4 + lVar10);
          if (*(float *)(puVar5 + 1) <= fVar12) {
            fVar12 = *(float *)(puVar5 + 1);
          }
          *(float *)(lVar2 + -4 + lVar10) = fVar12;
          *(byte *)(lVar2 + lVar10) = *(byte *)(lVar2 + lVar10) | *(byte *)((longlong)puVar5 + 0xc);
LAB_1478db01f:
          uVar11 = uVar11 + 1;
        }
        else {
          iVar7 = (int)lVar4 - (int)lVar3;
          if (iVar7 == 0) {
            iVar7 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar3 >> 0x20);
          }
          if (-1 < iVar7) {
            puVar6 = (undefined8 *)FUN_144a1cc74(param_1,uVar9 & 0xffffffff);
            uVar8 = *(uint *)(param_1 + 1);
            *puVar6 = *puVar5;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
            *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)puVar5 + 0xc);
            goto LAB_1478db01f;
          }
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar9 != uVar8 || (int)uVar1 <= (int)uVar11);
    }
    iVar7 = (uVar1 - uVar11) + (int)param_1[1];
    if (-1 < iVar7) {
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        FUN_14480ffb8(param_1);
      }
      iVar7 = uVar1 - uVar11;
      if (iVar7 == 0 || (int)uVar1 < (int)uVar11) {
        return;
      }
      uVar9 = (longlong)(int)uVar11 << 4 | 0xc;
      do {
        lVar10 = *param_2;
        puVar5 = (undefined8 *)FUN_14470c6b2(param_1);
        *puVar5 = *(undefined8 *)(lVar10 + -0xc + uVar9);
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar10 + -4 + uVar9);
        *(undefined1 *)((longlong)puVar5 + 0xc) = *(undefined1 *)(lVar10 + uVar9);
        uVar9 = uVar9 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1478db108 FUN_1478db108 body=59 status=ok
// SIG undefined FUN_1478db108(void)

undefined8 FUN_1478db108(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478db1d8 FUN_1478db1d8 body=63 status=ok
// SIG undefined FUN_1478db1d8(void)

undefined1 FUN_1478db1d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478db68c(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 1478db240 FUN_1478db240 body=59 status=ok
// SIG undefined FUN_1478db240(void)

undefined8 FUN_1478db240(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478db28c FUN_1478db28c body=40 status=ok
// SIG undefined FUN_1478db28c(void)

void FUN_1478db28c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1478db3bc(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1478db3bc FUN_1478db3bc body=167 status=ok
// SIG undefined FUN_1478db3bc(void)

void FUN_1478db3bc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1478db464(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1478db51c(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1478db5d4(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1478db51c(param_1);
  return;
}



// FUNCTION 1478db464 FUN_1478db464 body=54 status=ok
// SIG undefined FUN_1478db464(void)

void FUN_1478db464(longlong *param_1)

{
  FUN_1478db49a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478db49a FUN_1478db49a body=128 status=ok
// SIG undefined FUN_1478db49a(void)

void FUN_1478db49a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 1478db51c FUN_1478db51c body=54 status=ok
// SIG undefined FUN_1478db51c(void)

void FUN_1478db51c(longlong *param_1)

{
  FUN_1478db552(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478db552 FUN_1478db552 body=128 status=ok
// SIG undefined FUN_1478db552(void)

void FUN_1478db552(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 1478db5d4 FUN_1478db5d4 body=54 status=ok
// SIG undefined FUN_1478db5d4(void)

void FUN_1478db5d4(longlong *param_1)

{
  FUN_1478db60a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478db60a FUN_1478db60a body=128 status=ok
// SIG undefined FUN_1478db60a(void)

void FUN_1478db60a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 1478db68c FUN_1478db68c body=100 status=ok
// SIG undefined FUN_1478db68c(void)

longlong FUN_1478db68c(longlong param_1,longlong param_2)

{
  FUN_1478db6f0();
  FUN_1478db7e4(param_1 + 0x50,param_2 + 0x50);
  FUN_1478db8d8(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1478db952(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  return param_1;
}



// FUNCTION 1478db6f0 FUN_1478db6f0 body=122 status=ok
// SIG undefined FUN_1478db6f0(void)

longlong FUN_1478db6f0(longlong param_1,longlong param_2)

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
    FUN_1478db76a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478db76a FUN_1478db76a body=121 status=ok
// SIG undefined FUN_1478db76a(void)

undefined8 * FUN_1478db76a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478db552(param_1,uVar1);
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



// FUNCTION 1478db7e4 FUN_1478db7e4 body=122 status=ok
// SIG undefined FUN_1478db7e4(void)

longlong FUN_1478db7e4(longlong param_1,longlong param_2)

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
    FUN_1478db85e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478db85e FUN_1478db85e body=121 status=ok
// SIG undefined FUN_1478db85e(void)

undefined8 * FUN_1478db85e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478db60a(param_1,uVar1);
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



// FUNCTION 1478db8d8 FUN_1478db8d8 body=122 status=ok
// SIG undefined FUN_1478db8d8(void)

longlong FUN_1478db8d8(longlong param_1,longlong param_2)

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
    FUN_1478db76a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478db952 FUN_1478db952 body=122 status=ok
// SIG undefined FUN_1478db952(void)

longlong FUN_1478db952(longlong param_1,longlong param_2)

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
    FUN_1478db9cc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478db9cc FUN_1478db9cc body=121 status=ok
// SIG undefined FUN_1478db9cc(void)

undefined8 * FUN_1478db9cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478db49a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
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



// FUNCTION 1478dba8e FUN_1478dba8e body=59 status=ok
// SIG undefined FUN_1478dba8e(void)

undefined8 FUN_1478dba8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dbb78 FUN_1478dbb78 body=59 status=ok
// SIG undefined FUN_1478dbb78(void)

undefined8 FUN_1478dbb78(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dbc62 FUN_1478dbc62 body=59 status=ok
// SIG undefined FUN_1478dbc62(void)

undefined8 FUN_1478dbc62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dbd4c FUN_1478dbd4c body=59 status=ok
// SIG undefined FUN_1478dbd4c(void)

undefined8 FUN_1478dbd4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dbded FUN_1478dbded body=728 status=ok
// SIG undefined FUN_1478dbded(void)

void FUN_1478dbded(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_378 [32];
  longlong *local_358;
  int local_34c;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar7 = &local_348;
    do {
      plVar10 = (longlong *)*plVar7;
      plVar9 = (longlong *)plVar7[1];
      local_34c = (int)plVar7[2];
      iVar3 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar10) >> 3);
      plVar11 = plVar10;
      plVar12 = plVar10;
      plVar13 = plVar9;
      local_358 = plVar7;
      if (local_34c != 0) {
LAB_1478dbe8e:
        plVar7 = local_358;
        if (8 < (int)(iVar3 + 1U)) {
          uVar5 = iVar3 + 1U >> 1;
          lVar1 = plVar12[uVar5];
          plVar12[uVar5] = *plVar12;
          *plVar12 = lVar1;
          plVar8 = plVar13 + 1;
          plVar10 = plVar12;
          do {
            plVar7 = plVar10 + 1;
            plVar14 = plVar10 + 1;
            do {
              plVar10 = plVar14;
              plVar4 = plVar7;
              if (plVar13 < plVar10) break;
              uVar2 = *(ulonglong *)(*plVar12 + 0x18);
              if ((int)uVar2 == (int)*(undefined8 *)(*plVar10 + 0x18)) {
                iVar3 = (int)(uVar2 >> 0x20) -
                        (int)((ulonglong)*(undefined8 *)(*plVar10 + 0x18) >> 0x20);
              }
              else {
                iVar3 = FUN_14002c2bd(uVar2 & 0xffffffff);
              }
              plVar7 = plVar4 + 1;
              plVar14 = plVar10 + 1;
            } while (-1 < iVar3);
            plVar7 = plVar8 + -2;
            do {
              plVar14 = plVar8;
              plVar6 = plVar7;
              plVar8 = plVar14 + -1;
              if (plVar8 <= plVar12) break;
              uVar2 = *(ulonglong *)(*plVar8 + 0x18);
              if ((int)uVar2 == (int)*(undefined8 *)(*plVar12 + 0x18)) {
                iVar3 = (int)(uVar2 >> 0x20) -
                        (int)((ulonglong)*(undefined8 *)(*plVar12 + 0x18) >> 0x20);
              }
              else {
                iVar3 = FUN_14002c2bd(uVar2 & 0xffffffff);
              }
              plVar7 = plVar6 + -1;
            } while (-1 < iVar3);
            if (plVar8 < plVar10) goto LAB_1478dbf56;
            lVar1 = *plVar10;
            *plVar10 = *plVar8;
            *plVar8 = lVar1;
          } while( true );
        }
        for (; local_358 = plVar7, plVar9 = plVar12, plVar10 = plVar12, plVar12 < plVar13;
            plVar13 = plVar13 + -1) {
          while (plVar7 = plVar9, plVar10 = plVar10 + 1, plVar10 <= plVar13) {
            uVar2 = *(ulonglong *)(*plVar7 + 0x18);
            if ((int)uVar2 == (int)*(undefined8 *)(*plVar10 + 0x18)) {
              iVar3 = (int)(uVar2 >> 0x20) -
                      (int)((ulonglong)*(undefined8 *)(*plVar10 + 0x18) >> 0x20);
            }
            else {
              iVar3 = FUN_14002c2bd(uVar2 & 0xffffffff);
            }
            plVar9 = plVar10;
            if (-1 < iVar3) {
              plVar9 = plVar7;
            }
          }
          lVar1 = *plVar7;
          *plVar7 = *plVar13;
          *plVar13 = lVar1;
          plVar7 = local_358;
        }
        goto LAB_1478dc086;
      }
LAB_1478dc079:
      FUN_1478dc0c6(plVar10);
      plVar7 = local_358;
LAB_1478dc086:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1478dbf56:
  lVar1 = *plVar12;
  *plVar12 = *plVar8;
  *plVar8 = lVar1;
  local_34c = local_34c + -1;
  plVar14 = plVar14 + -2;
  if ((longlong)plVar6 - (longlong)plVar11 < (longlong)plVar9 - (longlong)plVar4) {
    plVar7 = local_358;
    if (plVar10 < plVar13) {
      *local_358 = (longlong)plVar10;
      local_358[1] = (longlong)plVar13;
      *(int *)(local_358 + 2) = local_34c;
      plVar7 = local_358 + 3;
    }
    plVar9 = plVar6;
    plVar10 = plVar12;
    if (plVar8 <= plVar12 + 1) goto LAB_1478dc086;
  }
  else {
    if (plVar12 + 1 < plVar8) {
      *local_358 = (longlong)plVar12;
      local_358[1] = (longlong)plVar14;
      *(int *)(local_358 + 2) = local_34c;
      local_358 = local_358 + 3;
    }
    plVar7 = local_358;
    plVar9 = plVar13;
    plVar12 = plVar4;
    plVar14 = plVar13;
    if (plVar13 <= plVar10) goto LAB_1478dc086;
  }
  local_358 = plVar7;
  iVar3 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar12) >> 3);
  plVar11 = plVar12;
  plVar12 = plVar10;
  plVar13 = plVar14;
  if (local_34c == 0) goto LAB_1478dc079;
  goto LAB_1478dbe8e;
}



// FUNCTION 1478dc0c6 FUN_1478dc0c6 body=472 status=ok
// SIG undefined FUN_1478dc0c6(void)

void FUN_1478dc0c6(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar5;
joined_r0x0001478dc0f8:
    do {
      iVar4 = iVar5 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar8 = iVar5 * 2 + 2;
        if (iVar8 < (int)param_2) {
          uVar6 = *(ulonglong *)(param_1[iVar8] + 0x18);
          if ((int)uVar6 == (int)*(undefined8 *)(param_1[iVar4] + 0x18)) {
            iVar3 = (int)(uVar6 >> 0x20) -
                    (int)((ulonglong)*(undefined8 *)(param_1[iVar4] + 0x18) >> 0x20);
          }
          else {
            iVar3 = FUN_14002c2bd(uVar6 & 0xffffffff);
          }
          if (-1 < iVar3) {
            iVar4 = iVar8;
          }
        }
        uVar6 = *(ulonglong *)(param_1[iVar5] + 0x18);
        if ((int)uVar6 == (int)*(undefined8 *)(param_1[iVar4] + 0x18)) {
          iVar8 = (int)(uVar6 >> 0x20) -
                  (int)((ulonglong)*(undefined8 *)(param_1[iVar4] + 0x18) >> 0x20);
        }
        else {
          iVar8 = FUN_14002c2bd(uVar6 & 0xffffffff);
        }
        if (iVar8 < 0) {
          uVar1 = param_1[iVar5];
          param_1[iVar5] = param_1[iVar4];
          param_1[iVar4] = uVar1;
          iVar5 = iVar4;
          goto joined_r0x0001478dc0f8;
        }
      }
      bVar10 = iVar9 != 0;
      iVar5 = iVar9 + -1;
      iVar9 = iVar5;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar5 = 0;
          iVar4 = 1;
          iVar9 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar8 = iVar4;
            if ((longlong)iVar5 < (longlong)uVar7) {
              uVar2 = *(ulonglong *)(param_1[iVar5] + 0x18);
              if ((int)uVar2 == (int)*(undefined8 *)(param_1[iVar4] + 0x18)) {
                iVar4 = (int)(uVar2 >> 0x20) -
                        (int)((ulonglong)*(undefined8 *)(param_1[iVar4] + 0x18) >> 0x20);
              }
              else {
                iVar4 = FUN_14002c2bd(uVar2 & 0xffffffff);
              }
              if (-1 < iVar4) {
                iVar8 = iVar5;
              }
            }
            uVar2 = *(ulonglong *)(param_1[iVar9] + 0x18);
            if ((int)uVar2 == (int)*(undefined8 *)(param_1[iVar8] + 0x18)) {
              iVar5 = (int)(uVar2 >> 0x20) -
                      (int)((ulonglong)*(undefined8 *)(param_1[iVar8] + 0x18) >> 0x20);
            }
            else {
              iVar5 = FUN_14002c2bd(uVar2 & 0xffffffff);
            }
            if (-1 < iVar5) break;
            uVar1 = param_1[iVar9];
            param_1[iVar9] = param_1[iVar8];
            param_1[iVar8] = uVar1;
            iVar5 = iVar8 * 2;
            iVar4 = iVar8 * 2 + 1;
            iVar9 = iVar8;
          } while ((longlong)iVar4 < (longlong)uVar7);
          uVar1 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar1;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 1478dc29e FUN_1478dc29e body=125 status=ok
// SIG undefined FUN_1478dc29e(void)

void FUN_1478dc29e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_1478dc31c(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478dc31c FUN_1478dc31c body=142 status=ok
// SIG undefined FUN_1478dc31c(void)

void FUN_1478dc31c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478dc3aa FUN_1478dc3aa body=31 status=ok
// SIG undefined FUN_1478dc3aa(void)

undefined8 FUN_1478dc3aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478dc3e4 FUN_1478dc3e4 body=29 status=ok
// SIG undefined FUN_1478dc3e4(void)

bool FUN_1478dc3e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1478dc402 FUN_1478dc402 body=26 status=ok
// SIG undefined FUN_1478dc402(void)

bool FUN_1478dc402(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1478dc41c FUN_1478dc41c body=93 status=ok
// SIG undefined FUN_1478dc41c(void)

void FUN_1478dc41c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79bb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1478dc47a FUN_1478dc47a body=93 status=ok
// SIG undefined FUN_1478dc47a(void)

void FUN_1478dc47a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79bb80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1478dc4d8 FUN_1478dc4d8 body=126 status=ok
// SIG undefined FUN_1478dc4d8(void)

void FUN_1478dc4d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79bb80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478dc547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478dc556 FUN_1478dc556 body=40 status=ok
// SIG undefined FUN_1478dc556(void)

void FUN_1478dc556(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001478dc57b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1478dc580 FUN_1478dc580 body=96 status=ok
// SIG undefined FUN_1478dc580(void)

void FUN_1478dc580(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1478dc5e0 FUN_1478dc5e0 body=29 status=ok
// SIG undefined FUN_1478dc5e0(void)

undefined8 FUN_1478dc5e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478dc618 FUN_1478dc618 body=29 status=ok
// SIG undefined FUN_1478dc618(void)

bool FUN_1478dc618(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1478dc636 FUN_1478dc636 body=26 status=ok
// SIG undefined FUN_1478dc636(void)

bool FUN_1478dc636(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1478dc650 FUN_1478dc650 body=24 status=ok
// SIG undefined FUN_1478dc650(void)

bool FUN_1478dc650(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1478dc668 FUN_1478dc668 body=101 status=ok
// SIG undefined FUN_1478dc668(void)

void FUN_1478dc668(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a79bbf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1478dc6ce FUN_1478dc6ce body=101 status=ok
// SIG undefined FUN_1478dc6ce(void)

void FUN_1478dc6ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a79bbf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1478dc734 FUN_1478dc734 body=134 status=ok
// SIG undefined FUN_1478dc734(void)

void FUN_1478dc734(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79bbf0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478dc7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478dc7ba FUN_1478dc7ba body=39 status=ok
// SIG undefined FUN_1478dc7ba(void)

void FUN_1478dc7ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001478dc7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1478dc7e2 FUN_1478dc7e2 body=146 status=ok
// SIG undefined FUN_1478dc7e2(void)

bool FUN_1478dc7e2(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 1478dc876 FUN_1478dc876 body=302 status=ok
// SIG undefined FUN_1478dc876(void)

undefined4 * FUN_1478dc876(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478dc9a6(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48;
  for (lVar5 = 0xb; puVar9 = puVar9 + 2, lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  local_48[0x18] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_1478dca88(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x19] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x18] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1478dcb8c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dc9a6 FUN_1478dc9a6 body=226 status=ok
// SIG undefined FUN_1478dc9a6(void)

int * FUN_1478dc9a6(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 1478dca88 FUN_1478dca88 body=144 status=ok
// SIG undefined FUN_1478dca88(void)

undefined8 FUN_1478dca88(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x68);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x68) == *param_3) {
          memmove(_Dst,param_3,0x60);
          FUN_1478dcb18(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x60);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478dcb18 FUN_1478dcb18 body=116 status=ok
// SIG undefined FUN_1478dcb18(void)

void FUN_1478dcb18(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1478dcb8c FUN_1478dcb8c body=419 status=ok
// SIG undefined FUN_1478dcb8c(void)

void FUN_1478dcb8c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x68;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 100 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1478dcd30 FUN_1478dcd30 body=132 status=ok
// SIG undefined FUN_1478dcd30(void)

void FUN_1478dcd30(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478dcdf8 FUN_1478dcdf8 body=29 status=ok
// SIG undefined FUN_1478dcdf8(void)

undefined8 FUN_1478dcdf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478dce16 FUN_1478dce16 body=164 status=ok
// SIG undefined FUN_1478dce16(void)

void FUN_1478dce16(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1478dce8e;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1478dce8e;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1478dce8e:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478dceae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1478dceba FUN_1478dceba body=24 status=ok
// SIG undefined FUN_1478dceba(void)

void FUN_1478dceba(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478dcece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1478dced2 FUN_1478dced2 body=29 status=ok
// SIG undefined FUN_1478dced2(void)

undefined8 FUN_1478dced2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478dcef0 FUN_1478dcef0 body=147 status=ok
// SIG undefined FUN_1478dcef0(void)

void FUN_1478dcef0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478dcf84 FUN_1478dcf84 body=109 status=ok
// SIG undefined FUN_1478dcf84(void)

void FUN_1478dcf84(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 1478dcff2 FUN_1478dcff2 body=112 status=ok
// SIG undefined FUN_1478dcff2(void)

void FUN_1478dcff2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,0x10);
  }
  return;
}



// FUNCTION 1478dd062 FUN_1478dd062 body=96 status=ok
// SIG undefined FUN_1478dd062(void)

void FUN_1478dd062(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 1478dd0c2 FUN_1478dd0c2 body=146 status=ok
// SIG undefined FUN_1478dd0c2(void)

void FUN_1478dd0c2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478dd155 FUN_1478dd155 body=15 status=ok
// SIG undefined FUN_1478dd155(void)

void FUN_1478dd155(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1478dd164 FUN_1478dd164 body=147 status=ok
// SIG undefined FUN_1478dd164(void)

void FUN_1478dd164(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478dd1f8 FUN_1478dd1f8 body=156 status=ok
// SIG undefined FUN_1478dd1f8(void)

longlong * FUN_1478dd1f8(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1478dd294 FUN_1478dd294 body=45 status=ok
// SIG undefined FUN_1478dd294(void)

bool FUN_1478dd294(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    return true;
  }
  lVar1 = 0;
  do {
    param_3 = param_3 + -1;
    bVar2 = *(longlong *)(param_1 + lVar1) == *(longlong *)(param_2 + lVar1);
    if (!bVar2) {
      return bVar2;
    }
    lVar1 = lVar1 + 0x10;
  } while (param_3 != 0);
  return bVar2;
}



// FUNCTION 1478dd2c1 FUN_1478dd2c1 body=68 status=ok
// SIG undefined FUN_1478dd2c1(void)

char FUN_1478dd2c1(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_1478dd306(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x50;
      param_2 = param_2 + 0x50;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 1478dd306 FUN_1478dd306 body=481 status=ok
// SIG undefined FUN_1478dd306(void)

undefined8 FUN_1478dd306(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  if (iVar4 == (int)param_2[1]) {
    if (1 < iVar4) {
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*param_1 + lVar7);
        uVar2 = (ulonglong)uVar9;
        uVar5 = *(ushort *)(*param_2 + lVar7);
        if (uVar9 != uVar5) break;
        if (uVar9 == 0) goto LAB_1478dd37a;
LAB_1478dd33e:
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar6]) goto LAB_1478dd33e;
      }
      if (uVar9 != uVar5) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar4 != 1) {
    return 0;
  }
LAB_1478dd37a:
  iVar4 = (int)param_1[3];
  if (iVar4 == (int)param_2[3]) {
    if (1 < iVar4) {
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(param_1[2] + lVar7);
        uVar2 = (ulonglong)uVar9;
        uVar5 = *(ushort *)(param_2[2] + lVar7);
        if (uVar9 != uVar5) break;
        if (uVar9 == 0) goto LAB_1478dd3ee;
LAB_1478dd3b2:
        lVar7 = lVar7 + 2;
      }
      if ((uVar5 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar6]) goto LAB_1478dd3b2;
      }
      if (uVar9 != uVar5) {
        return 0;
      }
    }
  }
  else if ((int)param_2[3] + iVar4 != 1) {
    return 0;
  }
LAB_1478dd3ee:
  if ((int)param_1[4] == (int)param_2[4]) {
    iVar4 = (int)param_1[6];
    if (iVar4 == (int)param_2[6]) {
      if (1 < iVar4) {
        lVar7 = 0;
        while( true ) {
          uVar9 = *(ushort *)(param_1[5] + lVar7);
          uVar2 = (ulonglong)uVar9;
          uVar5 = *(ushort *)(param_2[5] + lVar7);
          if (uVar9 != uVar5) break;
          if (uVar9 == 0) goto LAB_1478dd466;
LAB_1478dd432:
          lVar7 = lVar7 + 2;
        }
        if ((uVar5 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar6]) goto LAB_1478dd432;
        }
        if (uVar9 != uVar5) {
          return 0;
        }
      }
    }
    else if ((int)param_2[6] + iVar4 != 1) {
      return 0;
    }
LAB_1478dd466:
    if ((int)param_1[7] == (int)param_2[7]) {
      iVar4 = (int)param_1[9];
      iVar1 = (int)param_2[9];
      if (iVar4 == iVar1) {
        if (iVar4 < 2) {
          return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
        }
        uVar2 = param_2[8];
        lVar7 = 0;
        while( true ) {
          uVar9 = *(ushort *)(param_1[8] + lVar7);
          uVar3 = (uint)uVar9;
          uVar5 = *(ushort *)(uVar2 + lVar7);
          uVar8 = (uint)uVar5;
          if (uVar9 != uVar5) {
            if ((uVar5 | uVar9) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar9];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar5]) goto LAB_1478dd4a8;
            }
            iVar4 = uVar3 - uVar8;
            goto LAB_1478dd4e3;
          }
          if (uVar9 == 0) break;
LAB_1478dd4a8:
          lVar7 = lVar7 + 2;
        }
        iVar4 = 0;
LAB_1478dd4e3:
        bVar10 = iVar4 == 0;
      }
      else {
        uVar2 = (ulonglong)(uint)(iVar1 + iVar4);
        bVar10 = iVar1 + iVar4 == 1;
      }
      return CONCAT71((int7)(uVar2 >> 8),bVar10);
    }
  }
  return 0;
}



// FUNCTION 1478dd4e7 FUN_1478dd4e7 body=40 status=ok
// SIG undefined FUN_1478dd4e7(void)

void FUN_1478dd4e7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1478dd510 FUN_1478dd510 body=132 status=ok
// SIG undefined FUN_1478dd510(void)

void FUN_1478dd510(longlong param_1,int param_2)

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



// FUNCTION 1478dd596 FUN_1478dd596 body=89 status=ok
// SIG undefined FUN_1478dd596(void)

void FUN_1478dd596(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_146124f0e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1478dd5f0 FUN_1478dd5f0 body=62 status=ok
// SIG undefined FUN_1478dd5f0(void)

void FUN_1478dd5f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478dd62e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1478dd62e FUN_1478dd62e body=93 status=ok
// SIG undefined FUN_1478dd62e(void)

ulonglong FUN_1478dd62e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1478dd68c FUN_1478dd68c body=162 status=ok
// SIG undefined FUN_1478dd68c(void)

void FUN_1478dd68c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  return;
}



// FUNCTION 1478dd72e FUN_1478dd72e body=147 status=ok
// SIG undefined FUN_1478dd72e(void)

void FUN_1478dd72e(longlong param_1,int param_2)

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



// FUNCTION 1478dd7c2 FUN_1478dd7c2 body=118 status=ok
// SIG undefined FUN_1478dd7c2(void)

void FUN_1478dd7c2(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1478dd838 FUN_1478dd838 body=175 status=ok
// SIG undefined FUN_1478dd838(void)

void FUN_1478dd838(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1478dd8c1;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1478dd8c1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1478dd8e8 FUN_1478dd8e8 body=102 status=ok
// SIG undefined FUN_1478dd8e8(void)

longlong * FUN_1478dd8e8(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e061aa,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1478dd94e FUN_1478dd94e body=62 status=ok
// SIG undefined FUN_1478dd94e(void)

void FUN_1478dd94e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478dd98c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 1478dd98c FUN_1478dd98c body=118 status=ok
// SIG undefined FUN_1478dd98c(void)

ulonglong FUN_1478dd98c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x88) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1478dd9c9;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      param_2 = param_2 / 0x88;
    }
  }
LAB_1478dd9c9:
  return param_2 & 0xffffffff;
}



// FUNCTION 1478dda02 FUN_1478dda02 body=710 status=ok
// SIG undefined FUN_1478dda02(void)

void FUN_1478dda02(void *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar5 = iVar6;
joined_r0x0001478dda53:
    do {
      iVar4 = iVar6 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar3 = iVar6 * 2 + 2;
        if ((iVar3 < (int)param_2) &&
           (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar3 * 0x88 + 0x74),
           pfVar1 = (float *)((longlong)param_1 + (longlong)iVar4 * 0x88 + 0x74),
           fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
          iVar4 = iVar3;
        }
        fVar2 = *(float *)((longlong)param_1 + (longlong)iVar6 * 0x88 + 0x74);
        pfVar1 = (float *)((longlong)param_1 + (longlong)iVar4 * 0x88 + 0x74);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          pvVar8 = (void *)((longlong)iVar6 * 0x88 + (longlong)param_1);
          pvVar7 = (void *)((longlong)iVar4 * 0x88 + (longlong)param_1);
          memcpy(local_c8,pvVar8,0x88);
          memcpy(pvVar8,pvVar7,0x88);
          memcpy(pvVar7,local_c8,0x88);
          iVar6 = iVar4;
          goto joined_r0x0001478dda53;
        }
      }
      bVar10 = iVar5 != 0;
      iVar6 = iVar5 + -1;
      iVar5 = iVar6;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      pvVar7 = (void *)(uVar9 * 0x80 + (ulonglong)param_2 * 8 + -8 + (longlong)param_1);
      memcpy(local_c8,param_1,0x88);
      memcpy(param_1,pvVar7,0x88);
      memcpy(pvVar7,local_c8,0x88);
      if (param_2 != 2) {
        do {
          iVar6 = 0;
          iVar4 = 1;
          iVar5 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar3 = iVar4;
            if (((longlong)iVar6 < (longlong)uVar9) &&
               (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar6 * 0x88 + 0x74),
               pfVar1 = (float *)((longlong)param_1 + (longlong)iVar4 * 0x88 + 0x74),
               fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
              iVar3 = iVar6;
            }
            fVar2 = *(float *)((longlong)param_1 + (longlong)iVar5 * 0x88 + 0x74);
            pfVar1 = (float *)((longlong)param_1 + (longlong)iVar3 * 0x88 + 0x74);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            pvVar8 = (void *)((longlong)iVar5 * 0x88 + (longlong)param_1);
            pvVar7 = (void *)((longlong)iVar3 * 0x88 + (longlong)param_1);
            memcpy(local_c8,pvVar8,0x88);
            memcpy(pvVar8,pvVar7,0x88);
            memcpy(pvVar7,local_c8,0x88);
            iVar6 = iVar3 * 2;
            iVar4 = iVar3 * 2 + 1;
            iVar5 = iVar3;
          } while ((longlong)iVar4 < (longlong)uVar9);
          pvVar7 = (void *)((uVar9 - 1) * 0x80 + uVar9 * 8 + -8 + (longlong)param_1);
          memcpy(local_c8,param_1,0x88);
          memcpy(param_1,pvVar7,0x88);
          memcpy(pvVar7,local_c8,0x88);
          bVar10 = 2 < uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar10);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478ddcca FUN_1478ddcca body=74 status=ok
// SIG undefined FUN_1478ddcca(void)

undefined8 * FUN_1478ddcca(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a79bfb0;
  puVar1 = TlsGetValue(DAT_14c761244);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c761244,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ddd14 FUN_1478ddd14 body=48 status=ok
// SIG undefined FUN_1478ddd14(void)

void FUN_1478ddd14(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1478ddd44 FUN_1478ddd44 body=116 status=ok
// SIG undefined FUN_1478ddd44(void)

void FUN_1478ddd44(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_1478dddba(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478dddba FUN_1478dddba body=133 status=ok
// SIG undefined FUN_1478dddba(void)

void FUN_1478dddba(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478dde40 FUN_1478dde40 body=74 status=ok
// SIG undefined FUN_1478dde40(void)

undefined8 * FUN_1478dde40(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a79bfc0;
  puVar1 = TlsGetValue(DAT_14c761248);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c761248,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478dde8a FUN_1478dde8a body=48 status=ok
// SIG undefined FUN_1478dde8a(void)

void FUN_1478dde8a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1478ddeba FUN_1478ddeba body=62 status=ok
// SIG undefined FUN_1478ddeba(void)

void FUN_1478ddeba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478ddef8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1478ddef8 FUN_1478ddef8 body=93 status=ok
// SIG undefined FUN_1478ddef8(void)

ulonglong FUN_1478ddef8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1478ddf56 FUN_1478ddf56 body=344 status=ok
// SIG undefined FUN_1478ddf56(void)

undefined4 *
FUN_1478ddf56(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1478de0b0(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1478de196(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1478de2b4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478de0b0 FUN_1478de0b0 body=230 status=ok
// SIG undefined FUN_1478de0b0(void)

int * FUN_1478de0b0(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1478de196 FUN_1478de196 body=148 status=ok
// SIG undefined FUN_1478de196(void)

void FUN_1478de196(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1478de22a((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_1478de200;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_1478de200:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1478de22a FUN_1478de22a body=138 status=ok
// SIG undefined FUN_1478de22a(void)

void FUN_1478de22a(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478de2b4 FUN_1478de2b4 body=474 status=ok
// SIG undefined FUN_1478de2b4(void)

void FUN_1478de2b4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478de48f FUN_1478de48f body=35 status=ok
// SIG undefined FUN_1478de48f(void)

void FUN_1478de48f(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1478de4b2 FUN_1478de4b2 body=132 status=ok
// SIG undefined FUN_1478de4b2(void)

void FUN_1478de4b2(longlong param_1,int param_2)

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



// FUNCTION 1478de538 FUN_1478de538 body=326 status=ok
// SIG undefined FUN_1478de538(void)

undefined4 * FUN_1478de538(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  FUN_1478de680(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1478de766(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1478de858(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478de680 FUN_1478de680 body=230 status=ok
// SIG undefined FUN_1478de680(void)

int * FUN_1478de680(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1478de766 FUN_1478de766 body=128 status=ok
// SIG undefined FUN_1478de766(void)

undefined8 FUN_1478de766(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1478de7e6((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478de7e6 FUN_1478de7e6 body=114 status=ok
// SIG undefined FUN_1478de7e6(void)

void FUN_1478de7e6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1478de858 FUN_1478de858 body=474 status=ok
// SIG undefined FUN_1478de858(void)

void FUN_1478de858(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478dea34 FUN_1478dea34 body=132 status=ok
// SIG undefined FUN_1478dea34(void)

void FUN_1478dea34(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1478deab8(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1478deab8 FUN_1478deab8 body=87 status=ok
// SIG undefined FUN_1478deab8(void)

void FUN_1478deab8(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1478de7e6();
  return;
}



// FUNCTION 1478deb10 FUN_1478deb10 body=48 status=ok
// SIG undefined FUN_1478deb10(void)

void FUN_1478deb10(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1478deb40 FUN_1478deb40 body=48 status=ok
// SIG undefined FUN_1478deb40(void)

void FUN_1478deb40(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1478deb70 FUN_1478deb70 body=48 status=ok
// SIG undefined FUN_1478deb70(void)

void FUN_1478deb70(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 1478deba0 FUN_1478deba0 body=98 status=ok
// SIG undefined FUN_1478deba0(void)

void FUN_1478deba0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478dec02 FUN_1478dec02 body=115 status=ok
// SIG undefined FUN_1478dec02(void)

void FUN_1478dec02(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478dec7a FUN_1478dec7a body=698 status=ok
// SIG undefined FUN_1478dec7a(void)

void FUN_1478dec7a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  code *local_60;
  undefined8 **local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar3 = *(int *)(param_3[3] + 8);
  lVar15 = (longlong)iVar3;
  local_58 = &local_78;
  local_60 = FUN_140036a08;
  lVar9 = FUN_144a773aa(&local_60,&DAT_14c7585d0);
  local_60 = (code *)(lVar9 + 0x10);
  local_58 = *(undefined8 ***)(lVar9 + 0x10);
  local_50 = *(longlong *)(lVar9 + 0x20);
  local_48 = '\0';
  local_40 = *(undefined8 *)(lVar9 + 0x28);
  *(code ***)(lVar9 + 0x28) = &local_60;
  *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_1478def36(&local_78,iVar3);
  if (lVar15 < 1) {
    local_90 = &local_88;
    local_88 = local_78;
    local_80 = (undefined4)uStack_70;
    local_98 = param_3[2];
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,*param_3,param_3[1]);
  }
  else {
    puVar10 = *(undefined8 **)param_3[3];
    puVar11 = puVar10 + lVar15 * 4;
    puVar12 = local_78;
    do {
      uVar2 = puVar10[1];
      uVar7 = puVar10[2];
      uVar8 = puVar10[3];
      *puVar12 = *puVar10;
      puVar12[1] = uVar2;
      puVar12[2] = uVar7;
      puVar12[3] = uVar8;
      puVar10 = puVar10 + 4;
      puVar12 = puVar12 + 0xc;
    } while (puVar10 != puVar11);
    lVar9 = *(longlong *)param_3[4];
    lVar14 = 8;
    do {
      puVar11 = (undefined8 *)(lVar9 + lVar14);
      uVar7 = *puVar11;
      uVar2 = puVar11[1];
      puVar10 = (undefined8 *)((longlong)local_78 + lVar14 * 4);
      *puVar10 = puVar11[-1];
      puVar10[1] = uVar7;
      puVar10 = (undefined8 *)((longlong)local_78 + lVar14 * 4 + 0x10);
      *puVar10 = uVar2;
      puVar10[1] = 0;
      lVar14 = lVar14 + 0x18;
    } while (puVar11 + 2 != (undefined8 *)(lVar9 + lVar15 * 0x18));
    lVar9 = *(longlong *)param_3[5];
    lVar14 = 0x10;
    do {
      puVar11 = (undefined8 *)(lVar9 + lVar14);
      uVar4 = *(undefined4 *)((longlong)puVar11 + -0xc);
      uVar5 = *(undefined4 *)(puVar11 + -1);
      uVar6 = *(undefined4 *)((longlong)puVar11 + -4);
      uVar2 = *puVar11;
      puVar13 = (undefined4 *)((longlong)local_78 + lVar14 * 4);
      *puVar13 = *(undefined4 *)(puVar11 + -2);
      puVar13[1] = uVar4;
      puVar13[2] = uVar5;
      puVar13[3] = uVar6;
      puVar10 = (undefined8 *)((longlong)local_78 + lVar14 * 4 + 0x10);
      *puVar10 = uVar2;
      puVar10[1] = 0;
      lVar14 = lVar14 + 0x18;
    } while (puVar11 + 1 != (undefined8 *)(lVar9 + lVar15 * 0x18));
    local_90 = &local_88;
    local_88 = local_78;
    local_80 = (undefined4)uStack_70;
    local_98 = param_3[2];
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,*param_3,param_3[1]);
    puVar11 = *(undefined8 **)param_3[3];
    puVar10 = local_78;
    do {
      uVar2 = puVar10[1];
      uVar7 = puVar10[2];
      uVar8 = puVar10[3];
      *puVar11 = *puVar10;
      puVar11[1] = uVar2;
      puVar11[2] = uVar7;
      puVar11[3] = uVar8;
      puVar10 = puVar10 + 0xc;
      puVar11 = puVar11 + 4;
    } while (puVar10 != local_78 + lVar15 * 0xc);
    puVar11 = *(undefined8 **)param_3[4];
    lVar9 = 0;
    do {
      puVar10 = (undefined8 *)((longlong)local_78 + lVar9 + 0x20);
      uVar7 = puVar10[1];
      uVar2 = *(undefined8 *)((longlong)local_78 + lVar9 + 0x30);
      *puVar11 = *puVar10;
      puVar11[1] = uVar7;
      puVar11[2] = uVar2;
      puVar11 = puVar11 + 3;
      lVar9 = lVar9 + 0x60;
    } while (lVar15 * 0x60 != lVar9);
    puVar13 = *(undefined4 **)param_3[5];
    lVar9 = 0;
    do {
      puVar1 = (undefined4 *)((longlong)local_78 + lVar9 + 0x40);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar2 = *(undefined8 *)((longlong)local_78 + lVar9 + 0x50);
      *puVar13 = *puVar1;
      puVar13[1] = uVar4;
      puVar13[2] = uVar5;
      puVar13[3] = uVar6;
      *(undefined8 *)(puVar13 + 4) = uVar2;
      puVar13 = puVar13 + 6;
      lVar9 = lVar9 + 0x60;
    } while (lVar15 * 0x60 != lVar9);
  }
  if (local_48 == '\0') {
    local_48 = '\x01';
    *(int *)(local_60 + 0x20) = *(int *)(local_60 + 0x20) + -1;
    if (local_50 != *(longlong *)(local_60 + 0x10)) {
      FUN_14004673c();
    }
    *(undefined8 ***)local_60 = local_58;
    *(undefined8 *)(local_60 + 0x18) = local_40;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478def36 FUN_1478def36 body=110 status=ok
// SIG undefined FUN_1478def36(void)

void FUN_1478def36(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1406600da(param_1,iVar1);
    }
    FUN_1400f4f3e((longlong)iVar1 * 0x60 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1474da134(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1478defb4 FUN_1478defb4 body=59 status=ok
// SIG undefined FUN_1478defb4(void)

longlong * FUN_1478defb4(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x80))();
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar2 = (longlong *)*puVar1;
    lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x78;
    do {
      if (*plVar2 == *param_2) {
        return plVar2;
      }
      plVar2 = plVar2 + 0xf;
      lVar3 = lVar3 + -0x78;
    } while (lVar3 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 1478deff0 FUN_1478deff0 body=39 status=ok
// SIG undefined FUN_1478deff0(void)

longlong FUN_1478deff0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144ae0fc4();
  lVar2 = (**(code **)(*param_1 + 0xc0))(param_1,uVar1);
  return lVar2 + 8;
}



// FUNCTION 1478df018 FUN_1478df018 body=26 status=ok
// SIG undefined FUN_1478df018(void)

void FUN_1478df018(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14068fdd8();
                    /* WARNING: Could not recover jumptable at 0x0001478df02b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf8))(plVar1);
  return;
}



// FUNCTION 1478df032 FUN_1478df032 body=39 status=ok
// SIG undefined FUN_1478df032(void)

longlong FUN_1478df032(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140569cdc();
  lVar2 = (**(code **)(*param_1 + 0xc0))(param_1,uVar1);
  return lVar2 + 8;
}



// FUNCTION 1478df05e FUN_1478df05e body=99 status=ok
// SIG undefined FUN_1478df05e(void)

void FUN_1478df05e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      if (*(char *)(*param_1 + 0x1c + lVar3) == '\x01') {
        FUN_140e9b192(*param_1 + lVar3,param_2,param_3,param_4);
        iVar1 = (int)param_1[1];
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x40;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 1478df0c2 FUN_1478df0c2 body=43 status=ok
// SIG undefined FUN_1478df0c2(void)

void FUN_1478df0c2(longlong param_1,undefined8 param_2)

{
  FUN_14792b432();
  FUN_14484255c(param_2,(longlong)(*(int *)(param_1 + 0xcc) << 6));
  return;
}



// FUNCTION 1478df0ee FUN_1478df0ee body=7 status=ok
// SIG undefined FUN_1478df0ee(void)

int FUN_1478df0ee(longlong param_1)

{
  return *(int *)(param_1 + 0xc) << 6;
}



// FUNCTION 1478df0f6 FUN_1478df0f6 body=86 status=ok
// SIG undefined FUN_1478df0f6(void)

void FUN_1478df0f6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 200);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x3d0))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar4);
  }
  return;
}



// FUNCTION 1478df14c FUN_1478df14c body=81 status=ok
// SIG undefined FUN_1478df14c(void)

undefined8 FUN_1478df14c(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    plVar3 = *(longlong **)(param_1 + 0xc0);
    plVar2 = plVar3 + (longlong)*(int *)(param_1 + 200) * 8;
    do {
      if ((((longlong *)*plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x1c) != '\0'))
         && (cVar1 = (**(code **)(*(longlong *)*plVar3 + 0x340))(), cVar1 != '\0')) {
        return 1;
      }
      plVar3 = plVar3 + 8;
    } while (plVar3 != plVar2);
  }
  return 0;
}



// FUNCTION 1478df19e FUN_1478df19e body=74 status=ok
// SIG undefined FUN_1478df19e(void)

undefined8 FUN_1478df19e(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar3 = (longlong *)*param_1;
    plVar2 = plVar3 + (longlong)(int)param_1[1] * 8;
    do {
      if ((((longlong *)*plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x1c) != '\0'))
         && (cVar1 = (**(code **)(*(longlong *)*plVar3 + 0x340))(), cVar1 != '\0')) {
        return 1;
      }
      plVar3 = plVar3 + 8;
    } while (plVar3 != plVar2);
  }
  return 0;
}



// FUNCTION 1478df1e8 FUN_1478df1e8 body=170 status=ok
// SIG undefined FUN_1478df1e8(void)

undefined8 * FUN_1478df1e8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_88 [2];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  local_94 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
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
  local_a8 = local_98;
  FUN_1433d2798(0,param_1 + 0xc0);
  puVar2 = local_88;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478df294 FUN_1478df294 body=170 status=ok
// SIG undefined FUN_1478df294(void)

undefined8 * FUN_1478df294(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_88 [2];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  local_94 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
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
  local_a8 = local_98;
  FUN_1433d2798(0,param_1 + 0xc0);
  puVar2 = local_88;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478df340 FUN_1478df340 body=298 status=ok
// SIG undefined FUN_1478df340(void)

undefined8 * FUN_1478df340(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0xc0);
  iVar3 = FUN_140cc2d5e(plVar1);
  if ((iVar3 != -1) && ((longlong)iVar3 * 0x40 + *plVar1 != 0)) {
    local_44 = 0;
    plVar4 = (longlong *)FUN_140cc2e50();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x358))(plVar4,param_2,local_44,param_4);
      goto LAB_1478df40d;
    }
  }
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 200) * 0x40;
    pfVar2 = (float *)(*plVar1 + -0x30 + lVar5);
    if (*pfVar2 <= param_3 && param_3 != *pfVar2) {
      plVar1 = *(longlong **)(*plVar1 + lVar5 + -0x40);
      uVar6 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
      (**(code **)(*plVar1 + 0x358))(plVar1,param_2,uVar6,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
LAB_1478df40d:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478df46e FUN_1478df46e body=37 status=ok
// SIG undefined FUN_1478df46e(void)

longlong FUN_1478df46e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140cc2d5e();
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  }
  return lVar2;
}



// FUNCTION 1478df494 FUN_1478df494 body=113 status=ok
// SIG undefined FUN_1478df494(void)

undefined8 FUN_1478df494(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  iVar1 = (int)param_2[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) == param_1) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 - lVar4 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1478fac1a(param_2,iVar1);
    lVar2 = *param_2;
  }
  *(longlong *)(lVar2 + lVar5 * 8) = param_1;
  uVar3 = FUN_1478df506(param_1 + 0xc0,param_2);
  return uVar3;
}



// FUNCTION 1478df506 FUN_1478df506 body=293 status=ok
// SIG undefined FUN_1478df506(void)

undefined8 FUN_1478df506(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar8 = 0;
    do {
      local_50 = (void *)0x0;
      local_48 = *(int *)(param_2 + 1);
      lVar7 = (longlong)local_48;
      _Src = (void *)*param_2;
      if (lVar7 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1478faca0(&local_50,local_48);
        memcpy(local_50,_Src,lVar7 << 3);
      }
      if (*(longlong *)(lVar1 + lVar8) != 0) {
        lVar7 = FUN_140f18b90();
        plVar2 = *(longlong **)(lVar1 + lVar8);
        if ((((plVar2 != (longlong *)0x0) && (lVar7 != 0)) && (lVar3 = plVar2[2], lVar3 != 0)) &&
           (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar3 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) &&
            (cVar5 = (**(code **)(*plVar2 + 0x3f0))(plVar2,&local_50), cVar5 != '\0')))) {
          if (local_50 != (void *)0x0) {
            FUN_1400020a8();
          }
          uVar6 = 1;
          goto LAB_1478df5f2;
        }
      }
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x40;
    } while ((longlong)(int)lVar4 * 0x40 != lVar8);
  }
  uVar6 = 0;
LAB_1478df5f2:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1478df636 FUN_1478df636 body=46 status=ok
// SIG undefined FUN_1478df636(void)

undefined8 * FUN_1478df636(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 0xbc) < 1) {
    FUN_1478df664(param_1,param_2);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0xb8);
  }
  return param_2;
}



// FUNCTION 1478df664 FUN_1478df664 body=112 status=ok
// SIG undefined FUN_1478df664(void)

undefined8 * FUN_1478df664(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacb290) {
    FUN_144b3d300(&DAT_14cacb290);
    if (DAT_14cacb290 == -1) {
      DAT_14cacb288 = 0x1000186a0;
      _Init_thread_footer(&DAT_14cacb290);
    }
  }
  *param_2 = DAT_14cacb288;
  return param_2;
}



// FUNCTION 1478df6d8 FUN_1478df6d8 body=70 status=ok
// SIG undefined FUN_1478df6d8(void)

undefined8 FUN_1478df6d8(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  if (((int)param_1[1] != 0) && (plVar1 = *(longlong **)*param_1, plVar1 != (longlong *)0x0)) {
    param_1 = plVar1;
    cVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(*plVar1 + 0x3c0))(plVar1);
      bVar6 = (int)uVar4 == 2;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar3 = 1;
      goto LAB_1478df716;
    }
  }
  bVar6 = (byte)param_1;
  bVar3 = 0;
  uVar5 = 0;
LAB_1478df716:
  return CONCAT71(uVar5,bVar3 & bVar6);
}



// FUNCTION 1478df728 FUN_1478df728 body=90 status=ok
// SIG undefined FUN_1478df728(void)

undefined8 * FUN_1478df728(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 2;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_14a7aff50;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1478df782 FUN_1478df782 body=69 status=ok
// SIG undefined FUN_1478df782(void)

void FUN_1478df782(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_1478e00bc(param_2,&local_18,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478df7c8 FUN_1478df7c8 body=69 status=ok
// SIG undefined FUN_1478df7c8(void)

void FUN_1478df7c8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_1478e0140(param_2,&local_18,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478df80e FUN_1478df80e body=123 status=ok
// SIG undefined FUN_1478df80e(void)

void FUN_1478df80e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x18))
            (*(longlong **)(lVar1 + 0x48),param_6,param_4,param_2);
  (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x10))
            (*(longlong **)(lVar1 + 0x50),param_6,param_3,param_2);
  if (0 < *(int *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0001478df879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x58) + 0x20))
              (*(longlong **)(lVar1 + 0x58),param_6,param_5,param_2);
    return;
  }
  return;
}



// FUNCTION 1478df88a FUN_1478df88a body=231 status=ok
// SIG undefined FUN_1478df88a(void)

void FUN_1478df88a(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(param_4 + 2) = 0;
  *(undefined4 *)((longlong)param_4 + 0x14) = 0;
  *(undefined4 *)(param_4 + 3) = 0;
  *(undefined4 *)((longlong)param_4 + 0x1c) = 0x3ff00000;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)((longlong)param_4 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_4 + 9) = 0;
  *(undefined4 *)((longlong)param_4 + 0x4c) = 0x3ff00000;
  param_4[10] = 0x3ff0000000000000;
  param_4[0xb] = 0;
  lVar3 = *(longlong *)(param_2 + 0x10);
  (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x30))
            (*(longlong **)(lVar3 + 0x48),param_4,param_2,param_3);
  (**(code **)(**(longlong **)(lVar3 + 0x50) + 0x28))
            (*(longlong **)(lVar3 + 0x50),param_4,param_2,param_3);
  if (0 < *(int *)(lVar3 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0001478df923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar3 + 0x58) + 0x38))
              (*(longlong **)(lVar3 + 0x58),param_4,param_2,param_3);
    return;
  }
  if (*(char *)(param_2 + 100) == '\x01') {
    uVar8 = (undefined4)DAT_14c8464f0;
    uVar9 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    uVar4 = (undefined4)DAT_14c8464e0;
    uVar5 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e8._4_4_;
  }
  else {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 0x30) + (longlong)param_3 * 4) * 0x60;
    puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x40 + lVar3);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x50 + lVar3);
    uVar8 = (undefined4)uVar2;
    uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  *(undefined4 *)(param_4 + 8) = uVar4;
  *(undefined4 *)((longlong)param_4 + 0x44) = uVar5;
  *(undefined4 *)(param_4 + 9) = uVar6;
  *(undefined4 *)((longlong)param_4 + 0x4c) = uVar7;
  param_4[10] = CONCAT44(uVar9,uVar8);
  param_4[0xb] = 0;
  return;
}



// FUNCTION 1478df971 FUN_1478df971 body=155 status=ok
// SIG undefined FUN_1478df971(void)

void FUN_1478df971(longlong *param_1,uint *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (byte)*param_2;
  puVar2 = (ulonglong *)param_1[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((byte *)puVar2[1] < pbVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
    }
    else {
      *puVar2 = (ulonglong)pbVar1;
    }
  }
  else {
    if ((byte *)puVar2[1] < pbVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
      bVar3 = local_19;
    }
    else {
      bVar3 = *(byte *)*puVar2;
      *puVar2 = (ulonglong)pbVar1;
    }
    *param_2 = (uint)bVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dfa0d FUN_1478dfa0d body=155 status=ok
// SIG undefined FUN_1478dfa0d(void)

void FUN_1478dfa0d(longlong *param_1,uint *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (byte)*param_2;
  puVar2 = (ulonglong *)param_1[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((byte *)puVar2[1] < pbVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
    }
    else {
      *puVar2 = (ulonglong)pbVar1;
    }
  }
  else {
    if ((byte *)puVar2[1] < pbVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
      bVar3 = local_19;
    }
    else {
      bVar3 = *(byte *)*puVar2;
      *puVar2 = (ulonglong)pbVar1;
    }
    *param_2 = (uint)bVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dfaaa FUN_1478dfaaa body=189 status=ok
// SIG undefined FUN_1478dfaaa(void)

void FUN_1478dfaaa(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_1402a3f9e();
  FUN_1478dfa0d(param_2,param_1 + 0x60);
  FUN_1478df971(param_2,param_1 + 100);
  FUN_1478df971(param_2,param_1 + 0x68);
  FUN_1478df971(param_2,param_1 + 0x6c);
  FUN_1478dfb67(param_2,param_1 + 0x38);
  FUN_1478dfc2e(param_2,param_1 + 0x10);
  FUN_1478dfc2e(param_2,param_1 + 0x20);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x30),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1478dfcf5(param_1);
  return;
}



// FUNCTION 1478dfb67 FUN_1478dfb67 body=198 status=ok
// SIG undefined FUN_1478dfb67(void)

void FUN_1478dfb67(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)(param_2 + 1);
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_14);
      }
    }
    else {
      *puVar2 = (ulonglong)puVar1;
    }
  }
  else {
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_14);
      }
    }
    else {
      local_14 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_14;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dfc2e FUN_1478dfc2e body=198 status=ok
// SIG undefined FUN_1478dfc2e(void)

void FUN_1478dfc2e(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)(param_2 + 1);
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_14);
      }
    }
    else {
      *puVar2 = (ulonglong)puVar1;
    }
  }
  else {
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_14,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_14);
      }
    }
    else {
      local_14 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_14;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478dfcf5 FUN_1478dfcf5 body=750 status=ok
// SIG undefined FUN_1478dfcf5(void)

void FUN_1478dfcf5(longlong param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 2) {
    ppuVar2 = &PTR_PTR_14c7612c0;
    *(undefined ***)(param_1 + 0x50) = &PTR_PTR_14c7612c0;
    *(undefined ***)(param_1 + 0x48) = &PTR_PTR_14c7612c0;
    goto LAB_1478dfd85;
  }
  if (iVar1 == 1) {
    switch(*(undefined4 *)(param_1 + 100)) {
    case 0:
      ppuVar2 = &PTR_PTR_14c761288;
      break;
    case 1:
      ppuVar2 = &PTR_PTR_14c761290;
      break;
    default:
      FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimEncoding.cpp",0x2b5,
                    L"%i: unknown or unsupported translation compression");
      goto LAB_1478dfdce;
    case 3:
      ppuVar2 = &PTR_PTR_14c7612a0;
      break;
    case 6:
      ppuVar2 = &PTR_PTR_14c7612b8;
    }
    *(undefined8 *)(param_1 + 0x48) = ppuVar2;
LAB_1478dfdce:
    switch(*(undefined4 *)(param_1 + 0x68)) {
    case 0:
      ppuVar2 = &PTR_PTR_14c761288;
      break;
    case 1:
      ppuVar2 = &PTR_PTR_14c761290;
      break;
    case 2:
      ppuVar2 = &PTR_PTR_14c761298;
      break;
    case 3:
      ppuVar2 = &PTR_PTR_14c7612a0;
      break;
    case 4:
      ppuVar2 = &PTR_PTR_14c7612a8;
      break;
    case 5:
      ppuVar2 = &PTR_PTR_14c7612b0;
      break;
    case 6:
      ppuVar2 = &PTR_PTR_14c7612b8;
      break;
    default:
      FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimEncoding.cpp",0x2d2,
                    L"%i: unknown or unsupported rotation compression");
      goto LAB_1478dff0e;
    }
    *(undefined ***)(param_1 + 0x50) = ppuVar2;
LAB_1478dff0e:
    switch(*(undefined4 *)(param_1 + 0x6c)) {
    case 0:
      ppuVar2 = &PTR_PTR_14c761288;
      break;
    case 1:
      ppuVar2 = &PTR_PTR_14c761290;
      break;
    default:
      uVar3 = 0x2e6;
LAB_1478dffde:
      pwVar4 = L"%i: unknown or unsupported Scale compression";
      goto LAB_1478dfda2;
    case 3:
      ppuVar2 = &PTR_PTR_14c7612a0;
      break;
    case 6:
      ppuVar2 = &PTR_PTR_14c7612b8;
    }
LAB_1478dfd85:
    *(undefined ***)(param_1 + 0x58) = ppuVar2;
  }
  else {
    if (iVar1 == 0) {
      switch(*(undefined4 *)(param_1 + 100)) {
      case 0:
        ppuVar2 = &PTR_PTR_14c761250;
        break;
      case 1:
        ppuVar2 = &PTR_PTR_14c761258;
        break;
      default:
        FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimEncoding.cpp",0x266,
                      L"%i: unknown or unsupported translation compression");
        goto LAB_1478dfe0b;
      case 3:
        ppuVar2 = &PTR_PTR_14c761268;
        break;
      case 6:
        ppuVar2 = &PTR_PTR_14c761280;
      }
      *(undefined8 *)(param_1 + 0x48) = ppuVar2;
LAB_1478dfe0b:
      switch(*(undefined4 *)(param_1 + 0x68)) {
      case 0:
        ppuVar2 = &PTR_PTR_14c761250;
        break;
      case 1:
        ppuVar2 = &PTR_PTR_14c761258;
        break;
      case 2:
        ppuVar2 = &PTR_PTR_14c761260;
        break;
      case 3:
        ppuVar2 = &PTR_PTR_14c761268;
        break;
      case 4:
        ppuVar2 = &PTR_PTR_14c761270;
        break;
      case 5:
        ppuVar2 = &PTR_PTR_14c761278;
        break;
      case 6:
        ppuVar2 = &PTR_PTR_14c761280;
        break;
      default:
        FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimEncoding.cpp",0x283,
                      L"%i: unknown or unsupported rotation compression");
        goto LAB_1478dff81;
      }
      *(undefined ***)(param_1 + 0x50) = ppuVar2;
LAB_1478dff81:
      switch(*(undefined4 *)(param_1 + 0x6c)) {
      case 0:
        ppuVar2 = &PTR_PTR_14c761250;
        break;
      case 1:
        ppuVar2 = &PTR_PTR_14c761258;
        break;
      default:
        uVar3 = 0x297;
        goto LAB_1478dffde;
      case 3:
        ppuVar2 = &PTR_PTR_14c761268;
        break;
      case 6:
        ppuVar2 = &PTR_PTR_14c761280;
      }
      goto LAB_1478dfd85;
    }
    pwVar4 = L"%i: unknown or unsupported animation format";
    uVar3 = 0x2fa;
LAB_1478dfda2:
    FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimEncoding.cpp",uVar3,pwVar4);
  }
  return;
}



// FUNCTION 1478dffe4 FUN_1478dffe4 body=214 status=ok
// SIG undefined FUN_1478dffe4(void)

undefined8 FUN_1478dffe4(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1433d0708(&local_28,*(undefined4 *)(param_1 + 100));
  FUN_1433d0708(&local_38,*(undefined4 *)(param_1 + 0x68));
  FUN_1433d0708(&local_48,*(undefined4 *)(param_1 + 0x6c));
  local_58 = &DAT_149dfb77a;
  if (local_40 != 0) {
    local_58 = local_48;
  }
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  puVar1 = &DAT_149dfb77a;
  if (local_20 != 0) {
    puVar1 = local_28;
  }
  FUN_140002266(param_2,L"[%s, %s, %s]",puVar1,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e00bc FUN_1478e00bc body=132 status=ok
// SIG undefined FUN_1478e00bc(void)

void FUN_1478e00bc(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar1,4);
      lVar1 = lVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar1,4);
      lVar1 = lVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  FUN_1478dfcf5(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001478e013d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50),param_1,param_3);
  return;
}



// FUNCTION 1478e0140 FUN_1478e0140 body=133 status=ok
// SIG undefined FUN_1478e0140(void)

void FUN_1478e0140(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar1,4);
      lVar1 = lVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar1,4);
      lVar1 = lVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  FUN_1478dfcf5(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001478e01c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))(*(longlong **)(param_1 + 0x50),param_1,param_3)
  ;
  return;
}



// FUNCTION 1478e01c6 FUN_1478e01c6 body=101 status=ok
// SIG undefined FUN_1478e01c6(void)

void FUN_1478e01c6(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  uVar3 = FUN_14688874e(param_2);
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  FUN_1402d52ba(param_1);
  if (lVar2 != 0 || lVar1 != 0) {
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  *param_1 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 1478e022c FUN_1478e022c body=61 status=ok
// SIG undefined FUN_1478e022c(void)

longlong FUN_1478e022c(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x5c);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))();
  return lVar4 + (longlong)iVar2 * 0xc + (longlong)iVar1 * 4 + (longlong)iVar3 + 0x80;
}



// FUNCTION 1478e0269 FUN_1478e0269 body=42 status=ok
// SIG undefined FUN_1478e0269(void)

void FUN_1478e0269(undefined4 param_1)

{
  FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimCompressionTypes.cpp",0x6fa,
                L"Trying to resize TMaybeMappedAllocator to an invalid size of %d with element size %I64u"
                ,param_1,1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1478e02c0 FUN_1478e02c0 body=141 status=ok
// SIG undefined FUN_1478e02c0(void)

void FUN_1478e02c0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(param_4 + 2) = 0;
  *(undefined4 *)((longlong)param_4 + 0x14) = 0;
  *(undefined4 *)(param_4 + 3) = 0;
  *(undefined4 *)((longlong)param_4 + 0x1c) = 0x3ff00000;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)((longlong)param_4 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_4 + 9) = 0;
  *(undefined4 *)((longlong)param_4 + 0x4c) = 0x3ff00000;
  param_4[10] = 0x3ff0000000000000;
  param_4[0xb] = 0;
  FUN_1478e034e(param_4);
  FUN_1478e0b4a(param_4,param_2,param_3);
  if (*(int *)(lVar1 + 0x28) < 1) {
    return;
  }
  FUN_1478e1556(param_4,param_2,param_3);
  return;
}



// FUNCTION 1478e034e FUN_1478e034e body=2043 status=ok
// SIG undefined FUN_1478e034e(void)

void FUN_1478e034e(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_9c;
  
  uVar9 = DAT_14c8464f0;
  uVar8 = DAT_14c8464e8;
  lVar7 = *(longlong *)(param_2 + 0x10);
  lVar10 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x10) + (longlong)(param_3 * 2) * 4);
  if (lVar10 == -1) {
    *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    puVar1 = (uint *)(*(longlong *)(lVar7 + 0x38) + lVar10);
    pfVar18 = (float *)(puVar1 + 1);
    uVar5 = *puVar1;
    uVar12 = uVar5 & 0xffffff;
    uVar22 = uVar5 >> 0x1c;
    uVar23 = uVar5 >> 0x18 & 7;
    uVar20 = (uint)(byte)(&DAT_14a7a41e0)[uVar23 + uVar22 * 8] * 4;
    uVar13 = 1;
    if (uVar22 != 3) {
      uVar20 = 0;
      uVar13 = (uint)(byte)(&DAT_14a7a41e0)[uVar23 + uVar22 * 8];
    }
    iVar17 = uVar13 * *(int *)(&DAT_14a7a41a0 + (ulonglong)uVar22 * 4);
    local_9c = 0.0;
    uVar21 = (ulonglong)uVar20;
    uVar13 = 0;
    uVar20 = 0;
    if (1 < uVar12) {
      if ((uVar5 >> 0x1b & 1) == 0) {
        fVar31 = (*(float *)(param_2 + 0x4c) + (float)*(int *)(param_2 + 0x48)) /
                 (float)*(int *)(param_2 + 0x50);
        if (1.0 <= fVar31) {
          fVar31 = 1.0;
        }
        local_9c = 0.0;
        if (fVar31 <= 0.0) {
          uVar13 = 0;
          uVar20 = 0;
        }
        else {
          uVar13 = uVar12 - 1;
          uVar20 = uVar13;
          if (fVar31 < 1.0) {
            auVar26 = roundss(ZEXT416(0),ZEXT416((uint)((float)(int)uVar13 * fVar31)),9);
            uVar20 = (uint)auVar26._0_4_;
            if ((int)uVar13 <= (int)uVar20) {
              uVar20 = uVar13;
            }
            if (*(char *)(param_2 + 4) != '\x01') {
              local_9c = (float)(int)uVar13 * fVar31 - auVar26._0_4_;
            }
            if ((int)(uVar20 + 1) < (int)uVar13) {
              uVar13 = uVar20 + 1;
            }
          }
        }
      }
      else {
        fVar31 = (*(float *)(param_2 + 0x4c) + (float)*(int *)(param_2 + 0x48)) /
                 (float)*(int *)(param_2 + 0x50);
        if (1.0 <= fVar31) {
          fVar31 = 1.0;
        }
        local_9c = 0.0;
        if (fVar31 <= 0.0) {
          uVar13 = 0;
          uVar20 = 0;
        }
        else {
          uVar13 = uVar12 - 1;
          uVar20 = uVar13;
          if (fVar31 < 1.0) {
            uVar15 = (longlong)pfVar18 + (longlong)(int)(uVar12 * iVar17) + uVar21 + 3 &
                     0xfffffffffffffffc;
            iVar19 = *(int *)(lVar7 + 8);
            fVar32 = (float)(iVar19 + -1) * fVar31;
            uVar20 = (uint)fVar32;
            uVar12 = iVar19 - 2U;
            if ((int)uVar20 < (int)(iVar19 - 2U)) {
              uVar12 = uVar20;
            }
            if ((int)uVar12 < 1) {
              uVar12 = 0;
            }
            uVar20 = (int)((float)(int)uVar13 * fVar31);
            if ((int)uVar13 <= (int)((float)(int)uVar13 * fVar31)) {
              uVar20 = uVar13;
            }
            if ((int)uVar20 < 1) {
              uVar20 = 0;
            }
            uVar24 = (ulonglong)uVar20;
            if (iVar19 < 0x100) {
              if (uVar12 < *(byte *)(uVar15 + uVar24)) {
                do {
                  if ((longlong)uVar24 < 2) {
                    uVar24 = 0;
                    break;
                  }
                  pbVar3 = (byte *)((uVar15 - 1) + uVar24);
                  uVar24 = uVar24 - 1;
                } while (uVar12 < *pbVar3);
              }
              else {
                do {
                  if (uVar13 == uVar24) {
                    uVar24 = (ulonglong)uVar13;
                    goto LAB_1478e0af2;
                  }
                  pbVar3 = (byte *)(uVar15 + 1 + uVar24);
                  uVar24 = uVar24 + 1;
                } while (*pbVar3 <= uVar12);
                uVar24 = (ulonglong)((int)uVar24 - 1);
              }
LAB_1478e0af2:
              uVar20 = (uint)uVar24;
              uVar12 = (uint)*(byte *)(uVar15 + (longlong)(int)uVar20);
              if ((int)uVar20 < (int)uVar13) {
                uVar13 = uVar20 + 1;
              }
              uVar14 = (uint)*(byte *)(uVar15 + (longlong)(int)uVar13);
            }
            else {
              if (uVar12 < *(ushort *)(uVar15 + uVar24 * 2)) {
                do {
                  if ((longlong)uVar24 < 2) {
                    uVar24 = 0;
                    break;
                  }
                  lVar2 = uVar24 * 2;
                  uVar24 = uVar24 - 1;
                } while (uVar12 < *(ushort *)((uVar15 - 2) + lVar2));
              }
              else {
                do {
                  if (uVar13 == uVar24) {
                    uVar24 = (ulonglong)uVar13;
                    goto LAB_1478e0ad2;
                  }
                  lVar2 = uVar24 * 2;
                  uVar24 = uVar24 + 1;
                } while (*(ushort *)(uVar15 + 2 + lVar2) <= uVar12);
                uVar24 = (ulonglong)((int)uVar24 - 1);
              }
LAB_1478e0ad2:
              uVar20 = (uint)uVar24;
              uVar12 = (uint)*(ushort *)(uVar15 + (longlong)(int)uVar20 * 2);
              if ((int)uVar20 < (int)uVar13) {
                uVar13 = uVar20 + 1;
              }
              uVar14 = (uint)*(ushort *)(uVar15 + (longlong)(int)uVar13 * 2);
            }
            iVar19 = 1;
            if (1 < (int)(uVar14 - uVar12)) {
              iVar19 = uVar14 - uVar12;
            }
            local_9c = 0.0;
            if (*(char *)(param_2 + 4) != '\x01') {
              local_9c = (fVar32 - (float)uVar12) / (float)iVar19;
            }
          }
        }
      }
    }
    lVar10 = *(longlong *)(lVar7 + 0x38) + lVar10;
    uVar12 = uVar22 - 1;
    if (5 < uVar12) {
switchD_1478e05e9_caseD_3:
      FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x3ad,
                    L"%i: unknown or unsupported animation compression format",uVar22);
      goto switchD_1478e05e9_caseD_5;
    }
    pfVar11 = (float *)((longlong)pfVar18 + (longlong)(int)(uVar20 * iVar17) + uVar21);
    switch(uVar12) {
    case 0:
      if (uVar23 == 0) {
        fVar31 = *pfVar11;
        fVar32 = pfVar11[1];
        fVar33 = pfVar11[2];
      }
      else {
        fVar32 = 0.0;
        if ((uVar5 >> 0x18 & 1) == 0) {
          fVar31 = 0.0;
        }
        else {
          fVar31 = *pfVar11;
          pfVar11 = pfVar11 + 1;
        }
        if ((uVar5 >> 0x19 & 1) != 0) {
          fVar32 = *pfVar11;
          pfVar11 = pfVar11 + 1;
        }
        fVar33 = 0.0;
        if ((uVar5 >> 0x1a & 1) != 0) {
          fVar33 = *pfVar11;
        }
      }
      break;
    case 1:
      fVar32 = 0.0;
      if ((uVar5 >> 0x18 & 1) == 0) {
        fVar31 = 0.0;
      }
      else {
        uVar4 = *(ushort *)pfVar11;
        pfVar11 = (float *)((longlong)pfVar11 + 2);
        fVar31 = (float)(int)(uVar4 - 0xff);
      }
      if ((uVar5 >> 0x19 & 1) != 0) {
        uVar4 = *(ushort *)pfVar11;
        pfVar11 = (float *)((longlong)pfVar11 + 2);
        fVar32 = (float)(int)(uVar4 - 0xff);
      }
      fVar33 = 0.0;
      if ((uVar5 >> 0x1a & 1) != 0) {
        fVar33 = (float)(int)(*(ushort *)pfVar11 - 0xff);
      }
      break;
    case 2:
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar31 = 0.0;
      pfVar16 = pfVar18;
      if ((uVar5 >> 0x18 & 1) != 0) {
        fVar31 = *(float *)(lVar10 + 4);
        fVar27 = *(float *)(lVar10 + 8);
        pfVar16 = (float *)(lVar10 + 0xc);
      }
      if ((uVar5 >> 0x19 & 1) == 0) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = *pfVar16;
        fVar25 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
      }
      fVar28 = 0.0;
      fVar33 = 0.0;
      if ((uVar5 >> 0x1a & 1) != 0) {
        fVar33 = *pfVar16;
        fVar28 = pfVar16[1];
      }
      fVar29 = *pfVar11;
      fVar31 = ((float)(int)(((uint)fVar29 & 0x3ff) - 0x1ff) / 511.0) * fVar27 + fVar31;
      fVar32 = ((float)(int)(((uint)fVar29 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * fVar25 + fVar32;
      fVar33 = ((float)(int)(((uint)fVar29 >> 0x15) - 0x3ff) / 1023.0) * fVar28 + fVar33;
      break;
    default:
      goto switchD_1478e05e9_caseD_3;
    case 5:
switchD_1478e05e9_caseD_5:
      fVar31 = (float)DAT_14c846330;
      fVar32 = DAT_14c846330._4_4_;
      fVar33 = DAT_14c846338;
    }
    if (uVar20 != uVar13) {
      if (5 < uVar12) {
switchD_1478e06df_caseD_3:
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x3ad,
                      L"%i: unknown or unsupported animation compression format",(ulonglong)uVar22);
        goto switchD_1478e06df_caseD_5;
      }
      pfVar11 = (float *)((longlong)pfVar18 + (longlong)(int)(uVar13 * iVar17) + uVar21);
      switch(uVar12) {
      case 0:
        if (uVar23 == 0) {
          fVar27 = *pfVar11;
          fVar25 = pfVar11[1];
          fVar28 = pfVar11[2];
        }
        else {
          fVar25 = 0.0;
          if ((uVar5 >> 0x18 & 1) == 0) {
            fVar27 = 0.0;
          }
          else {
            fVar27 = *pfVar11;
            pfVar11 = pfVar11 + 1;
          }
          if ((uVar5 >> 0x19 & 1) != 0) {
            fVar25 = *pfVar11;
            pfVar11 = pfVar11 + 1;
          }
          fVar28 = 0.0;
          if ((uVar5 >> 0x1a & 1) != 0) {
            fVar28 = *pfVar11;
          }
        }
        break;
      case 1:
        fVar25 = 0.0;
        if ((uVar5 >> 0x18 & 1) == 0) {
          fVar27 = 0.0;
        }
        else {
          uVar4 = *(ushort *)pfVar11;
          pfVar11 = (float *)((longlong)pfVar11 + 2);
          fVar27 = (float)(int)(uVar4 - 0xff);
        }
        if ((uVar5 >> 0x19 & 1) != 0) {
          uVar4 = *(ushort *)pfVar11;
          pfVar11 = (float *)((longlong)pfVar11 + 2);
          fVar25 = (float)(int)(uVar4 - 0xff);
        }
        fVar28 = 0.0;
        if ((uVar5 >> 0x1a & 1) != 0) {
          fVar28 = (float)(int)(*(ushort *)pfVar11 - 0xff);
        }
        break;
      case 2:
        fVar25 = 0.0;
        fVar28 = 0.0;
        fVar27 = 0.0;
        if ((uVar5 >> 0x18 & 1) != 0) {
          fVar27 = *(float *)(lVar10 + 4);
          fVar28 = *(float *)(lVar10 + 8);
          pfVar18 = (float *)(lVar10 + 0xc);
        }
        if ((uVar5 >> 0x19 & 1) == 0) {
          fVar29 = 0.0;
        }
        else {
          fVar29 = *pfVar18;
          fVar25 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
        }
        fVar30 = 0.0;
        fVar34 = 0.0;
        if ((uVar5 >> 0x1a & 1) != 0) {
          fVar34 = *pfVar18;
          fVar30 = pfVar18[1];
        }
        fVar6 = *pfVar11;
        fVar25 = ((float)(int)(((uint)fVar6 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * fVar25 + fVar29;
        fVar27 = ((float)(int)(((uint)fVar6 & 0x3ff) - 0x1ff) / 511.0) * fVar28 + fVar27;
        fVar28 = ((float)(int)(((uint)fVar6 >> 0x15) - 0x3ff) / 1023.0) * fVar30 + fVar34;
        break;
      default:
        goto switchD_1478e06df_caseD_3;
      case 5:
switchD_1478e06df_caseD_5:
        fVar25 = DAT_14c846330._4_4_;
        fVar27 = (float)DAT_14c846330;
        fVar28 = DAT_14c846338;
      }
      fVar33 = fVar33 + (fVar28 - fVar33) * local_9c;
      fVar32 = fVar32 + (fVar25 - fVar32) * local_9c;
      fVar31 = fVar31 + (fVar27 - fVar31) * local_9c;
    }
    *(double *)(param_1 + 0x20) = (double)fVar31;
    *(double *)(param_1 + 0x28) = (double)fVar32;
    *(double *)(param_1 + 0x30) = (double)fVar33;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1478e0b4a FUN_1478e0b4a body=2570 status=ok
// SIG undefined FUN_1478e0b4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e0b4a(ulonglong *param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong *puVar17;
  uint *puVar18;
  int iVar19;
  float *pfVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar39 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auStack_118 [40];
  ulonglong *local_f0;
  uint *local_e8;
  float local_dc;
  undefined1 local_d8 [16];
  undefined8 local_c0;
  uint local_b8;
  undefined8 local_b0;
  uint local_a8;
  ulonglong local_a0;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  uVar26 = DAT_14c8463e8;
  uVar28 = DAT_14c8463e0;
  uVar11 = DAT_14c8463d8._4_4_;
  uVar10 = (undefined4)DAT_14c8463d8;
  uVar9 = DAT_14c8463d0._4_4_;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *(longlong *)(param_2 + 0x10);
  lVar12 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + 4 + (longlong)(param_3 * 2) * 4);
  if (lVar12 == -1) {
    *(undefined4 *)param_1 = (undefined4)DAT_14c8463d0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar9;
    *(undefined4 *)(param_1 + 1) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar11;
    param_1[2] = uVar28;
    param_1[3] = uVar26;
    goto LAB_1478e117a;
  }
  puVar13 = (uint *)(*(longlong *)(lVar5 + 0x38) + lVar12);
  puVar18 = puVar13 + 1;
  uVar27 = *puVar13;
  uVar15 = uVar27 & 0xffffff;
  uVar14 = uVar27 >> 0x1c;
  uVar16 = 1;
  if (uVar14 != 3) {
    uVar16 = (uint)(byte)(&DAT_14a7a41e0)[(uVar27 >> 0x18 & 7) + uVar14 * 8];
  }
  uVar28 = (ulonglong)((uint)(byte)(&DAT_14a7a41e0)[(uVar27 >> 0x18 & 7) + uVar14 * 8] * 4);
  if (uVar14 != 3) {
    uVar28 = 0;
  }
  iVar23 = uVar16 * *(int *)(&DAT_14a7a41a0 + (ulonglong)uVar14 * 4);
  local_dc = 0.0;
  uVar16 = 0;
  uVar24 = 0;
  if (1 < uVar15) {
    if ((uVar27 >> 0x1b & 1) == 0) {
      fVar41 = (*(float *)(param_2 + 0x4c) + (float)*(int *)(param_2 + 0x48)) /
               (float)*(int *)(param_2 + 0x50);
      if (1.0 <= fVar41) {
        fVar41 = 1.0;
      }
      local_dc = 0.0;
      if (fVar41 <= 0.0) {
        uVar16 = 0;
        uVar24 = 0;
      }
      else {
        uVar16 = uVar15 - 1;
        uVar24 = uVar16;
        if (fVar41 < 1.0) {
          auVar36 = roundss(ZEXT416(0),ZEXT416((uint)((float)(int)uVar16 * fVar41)),9);
          uVar24 = (uint)auVar36._0_4_;
          if ((int)uVar16 <= (int)uVar24) {
            uVar24 = uVar16;
          }
          if (*(char *)(param_2 + 4) != '\x01') {
            local_dc = (float)(int)uVar16 * fVar41 - auVar36._0_4_;
          }
          if ((int)(uVar24 + 1) < (int)uVar16) {
            uVar16 = uVar24 + 1;
          }
        }
      }
    }
    else {
      fVar41 = (*(float *)(param_2 + 0x4c) + (float)*(int *)(param_2 + 0x48)) /
               (float)*(int *)(param_2 + 0x50);
      if (1.0 <= fVar41) {
        fVar41 = 1.0;
      }
      local_dc = 0.0;
      if (fVar41 <= 0.0) {
        uVar16 = 0;
        uVar24 = 0;
      }
      else {
        uVar16 = uVar15 - 1;
        uVar26 = (ulonglong)uVar16;
        uVar24 = uVar16;
        if (fVar41 < 1.0) {
          uVar22 = (longlong)puVar18 + (longlong)(int)(uVar15 * iVar23) + uVar28 + 3 &
                   0xfffffffffffffffc;
          iVar19 = *(int *)(lVar5 + 8);
          fVar29 = (float)(iVar19 + -1) * fVar41;
          uVar24 = (uint)fVar29;
          uVar15 = iVar19 - 2U;
          if ((int)uVar24 < (int)(iVar19 - 2U)) {
            uVar15 = uVar24;
          }
          if ((int)uVar15 < 1) {
            uVar15 = 0;
          }
          uVar24 = (int)((float)(int)uVar16 * fVar41);
          if ((int)uVar16 <= (int)((float)(int)uVar16 * fVar41)) {
            uVar24 = uVar16;
          }
          if ((int)uVar24 < 1) {
            uVar24 = 0;
          }
          uVar25 = (ulonglong)uVar24;
          if (iVar19 < 0x100) {
            if (uVar15 < *(byte *)(uVar22 + uVar25)) {
              do {
                if ((longlong)uVar25 < 2) {
                  uVar26 = 0;
                  break;
                }
                pbVar3 = (byte *)((uVar22 - 1) + uVar25);
                uVar26 = uVar25 - 1;
                uVar25 = uVar26;
              } while (uVar15 < *pbVar3);
            }
            else {
              do {
                if (uVar16 == uVar25) goto LAB_1478e1424;
                pbVar3 = (byte *)(uVar22 + 1 + uVar25);
                uVar25 = uVar25 + 1;
              } while (*pbVar3 <= uVar15);
              uVar26 = (ulonglong)((int)uVar25 - 1);
            }
LAB_1478e1424:
            uVar24 = (uint)uVar26;
            uVar15 = (uint)*(byte *)(uVar22 + (longlong)(int)uVar24);
            if ((int)uVar24 < (int)uVar16) {
              uVar16 = uVar24 + 1;
            }
            uVar21 = (uint)*(byte *)(uVar22 + (longlong)(int)uVar16);
          }
          else {
            if (uVar15 < *(ushort *)(uVar22 + uVar25 * 2)) {
              do {
                if ((longlong)uVar25 < 2) {
                  uVar26 = 0;
                  break;
                }
                lVar2 = uVar25 * 2;
                uVar26 = uVar25 - 1;
                uVar25 = uVar26;
              } while (uVar15 < *(ushort *)((uVar22 - 2) + lVar2));
            }
            else {
              do {
                if (uVar26 == uVar25) goto LAB_1478e1404;
                lVar2 = uVar25 * 2;
                uVar25 = uVar25 + 1;
              } while (*(ushort *)(uVar22 + 2 + lVar2) <= uVar15);
              uVar26 = (ulonglong)((int)uVar25 - 1);
            }
LAB_1478e1404:
            uVar24 = (uint)uVar26;
            uVar15 = (uint)*(ushort *)(uVar22 + (longlong)(int)uVar24 * 2);
            if ((int)uVar24 < (int)uVar16) {
              uVar16 = uVar24 + 1;
            }
            uVar21 = (uint)*(ushort *)(uVar22 + (longlong)(int)uVar16 * 2);
          }
          iVar19 = 1;
          if (1 < (int)(uVar21 - uVar15)) {
            iVar19 = uVar21 - uVar15;
          }
          local_dc = 0.0;
          if (*(char *)(param_2 + 4) != '\x01') {
            local_dc = (fVar29 - (float)uVar15) / (float)iVar19;
          }
        }
      }
    }
  }
  lVar12 = *(longlong *)(lVar5 + 0x38) + lVar12;
  uVar15 = uVar14 - 1;
  auVar36._4_12_ = unaff_XMM7._4_12_;
  local_f0 = param_1;
  local_e8 = puVar18;
  if (5 < uVar15) {
    FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x3f7,
                  L"%i: unknown or unsupported animation compression format",uVar14);
switchD_1478e0e0b_caseD_5:
    auVar42 = ram0x00014c846340;
    goto LAB_1478e0f9d;
  }
  pfVar20 = (float *)((longlong)puVar18 + (longlong)(int)(uVar24 * iVar23) + uVar28);
  switch(uVar15) {
  case 0:
    fVar41 = *pfVar20;
    fVar29 = pfVar20[1];
    fVar31 = pfVar20[2];
    fVar30 = ((1.0 - fVar41 * fVar41) - fVar29 * fVar29) - fVar31 * fVar31;
    auVar33 = ZEXT816(0);
    if (0.0 < fVar30) {
      if (fVar30 < 0.0) {
        fVar30 = sqrtf(fVar30);
        auVar33._4_4_ = extraout_XMM0_Db;
        auVar33._0_4_ = fVar30;
        auVar33._8_4_ = extraout_XMM0_Dc;
        auVar33._12_4_ = extraout_XMM0_Dd;
      }
      else {
        auVar33 = ZEXT416((uint)SQRT(fVar30));
      }
    }
    auVar36 = insertps(ZEXT416((uint)fVar41),ZEXT416((uint)fVar29),0x10);
    auVar36 = insertps(auVar36,ZEXT416((uint)fVar31),0x20);
    goto LAB_1478e0f97;
  case 1:
    auVar44 = ZEXT812(0);
    if ((uVar27 >> 0x18 & 1) == 0) {
      auVar36 = ZEXT816(0);
    }
    else {
      uVar4 = *(ushort *)pfVar20;
      pfVar20 = (float *)((longlong)pfVar20 + 2);
      auVar36._0_4_ = ((float)uVar4 + -32767.0) * 3.051851e-05;
    }
    if ((uVar27 >> 0x19 & 1) != 0) {
      uVar4 = *(ushort *)pfVar20;
      pfVar20 = (float *)((longlong)pfVar20 + 2);
      auVar44._4_8_ = 0;
      auVar44._0_4_ = ((float)uVar4 + -32767.0) * 3.051851e-05;
    }
    auVar46._12_4_ = 0;
    auVar46._0_12_ = auVar44;
    fVar41 = 0.0;
    if ((uVar27 >> 0x1a & 1) != 0) {
      fVar41 = ((float)*(ushort *)pfVar20 + -32767.0) * 3.051851e-05;
    }
    fVar29 = ((1.0 - auVar36._0_4_ * auVar36._0_4_) - auVar44._0_4_ * auVar44._0_4_) -
             fVar41 * fVar41;
    if (fVar29 < 0.0) {
      fVar31 = sqrtf(fVar29);
    }
    else {
      fVar31 = SQRT(fVar29);
    }
    auVar33 = ZEXT416(-(uint)(0.0 <= fVar29) & (uint)fVar31);
    auVar36 = insertps(auVar36,auVar46,0x10);
    auVar36 = insertps(auVar36,ZEXT416((uint)fVar41),0x20);
LAB_1478e0f97:
    auVar42 = insertps(auVar36,auVar33,0x30);
    break;
  case 2:
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    puVar13 = puVar18;
    if ((uVar27 >> 0x18 & 1) != 0) {
      local_b0 = (ulonglong)*(uint *)(lVar12 + 4);
      puVar13 = (uint *)(lVar12 + 0xc);
      local_c0 = (ulonglong)*(uint *)(lVar12 + 8);
    }
    if ((uVar27 >> 0x19 & 1) != 0) {
      local_b0 = CONCAT44(*puVar13,(undefined4)local_b0);
      puVar1 = puVar13 + 1;
      puVar13 = puVar13 + 2;
      local_c0 = CONCAT44(*puVar1,(undefined4)local_c0);
    }
    if ((uVar27 >> 0x1a & 1) != 0) {
      local_a8 = *puVar13;
      local_b8 = puVar13[1];
    }
    FUN_1478fb73a(local_d8,&local_b0,&local_c0);
    auVar42 = local_d8;
    break;
  case 3:
    FUN_1478fb84a(local_d8,pfVar20);
    auVar42 = local_d8;
    break;
  case 4:
    FUN_1478fb932(local_d8,pfVar20);
    auVar42 = local_d8;
    break;
  case 5:
    goto switchD_1478e0e0b_caseD_5;
  }
LAB_1478e0f9d:
  puVar17 = local_f0;
  if (uVar24 == uVar16) goto LAB_1478e10fa;
  if (5 < uVar15) {
    FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x3f7,
                  L"%i: unknown or unsupported animation compression format",uVar14);
switchD_1478e0fcd_caseD_5:
    puVar17 = local_f0;
    local_d8 = ram0x00014c846340;
    goto LAB_1478e1071;
  }
  pfVar20 = (float *)((longlong)puVar18 + (longlong)(int)(uVar16 * iVar23) + uVar28);
  switch(uVar15) {
  case 0:
    fVar41 = *pfVar20;
    fVar29 = pfVar20[1];
    fVar31 = pfVar20[2];
    fVar30 = ((1.0 - fVar41 * fVar41) - fVar29 * fVar29) - fVar31 * fVar31;
    auVar34 = ZEXT416(0);
    if (0.0 < fVar30) {
      if (fVar30 < 0.0) {
        fVar30 = sqrtf(fVar30);
        auVar34._4_4_ = extraout_XMM0_Db_00;
        auVar34._0_4_ = fVar30;
        auVar34._8_4_ = extraout_XMM0_Dc_00;
        auVar34._12_4_ = extraout_XMM0_Dd_00;
      }
      else {
        auVar34 = ZEXT416((uint)SQRT(fVar30));
      }
    }
    auVar36 = insertps(ZEXT416((uint)fVar41),ZEXT416((uint)fVar29),0x10);
    auVar36 = insertps(auVar36,ZEXT416((uint)fVar31),0x20);
    goto LAB_1478e12ea;
  case 1:
    fVar41 = 0.0;
    if ((uVar27 >> 0x18 & 1) == 0) {
      auVar45 = ZEXT812(0);
    }
    else {
      uVar4 = *(ushort *)pfVar20;
      pfVar20 = (float *)((longlong)pfVar20 + 2);
      auVar45._4_8_ = 0;
      auVar45._0_4_ = ((float)uVar4 + -32767.0) * 3.051851e-05;
    }
    auVar47._12_4_ = 0;
    auVar47._0_12_ = auVar45;
    if ((uVar27 >> 0x19 & 1) != 0) {
      uVar4 = *(ushort *)pfVar20;
      pfVar20 = (float *)((longlong)pfVar20 + 2);
      fVar41 = ((float)uVar4 + -32767.0) * 3.051851e-05;
    }
    fVar29 = 0.0;
    if ((uVar27 >> 0x1a & 1) != 0) {
      fVar29 = ((float)*(ushort *)pfVar20 + -32767.0) * 3.051851e-05;
    }
    fVar31 = ((1.0 - auVar45._0_4_ * auVar45._0_4_) - fVar41 * fVar41) - fVar29 * fVar29;
    if (fVar31 < 0.0) {
      fVar30 = sqrtf(fVar31);
    }
    else {
      fVar30 = SQRT(fVar31);
    }
    auVar34 = ZEXT416(-(uint)(0.0 <= fVar31) & (uint)fVar30);
    auVar36 = insertps(auVar47,ZEXT416((uint)fVar41),0x10);
    auVar36 = insertps(auVar36,ZEXT416((uint)fVar29),0x20);
LAB_1478e12ea:
    local_d8 = insertps(auVar36,auVar34,0x30);
    break;
  case 2:
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    if ((uVar27 >> 0x18 & 1) != 0) {
      local_b0 = (ulonglong)*(uint *)(lVar12 + 4);
      local_e8 = (uint *)(lVar12 + 0xc);
      local_c0 = (ulonglong)*(uint *)(lVar12 + 8);
    }
    if ((uVar27 >> 0x19 & 1) != 0) {
      local_b0 = CONCAT44(*local_e8,(undefined4)local_b0);
      puVar13 = local_e8 + 1;
      local_e8 = local_e8 + 2;
      local_c0 = CONCAT44(*puVar13,(undefined4)local_c0);
    }
    if ((uVar27 >> 0x1a & 1) != 0) {
      local_a8 = *local_e8;
      local_b8 = local_e8[1];
    }
    FUN_1478fb73a(local_d8,&local_b0,&local_c0,pfVar20);
    break;
  case 3:
    FUN_1478fb84a(local_d8,pfVar20);
    puVar17 = local_f0;
    break;
  case 4:
    FUN_1478fb932(local_d8,pfVar20);
    puVar17 = local_f0;
    break;
  case 5:
    goto switchD_1478e0fcd_caseD_5;
  }
LAB_1478e1071:
  fVar31 = auVar42._8_4_;
  fVar30 = auVar42._12_4_;
  fVar29 = auVar42._0_4_;
  uVar27 = -(uint)(0.0 <= local_d8._12_4_ * fVar30 +
                          local_d8._8_4_ * fVar31 +
                          fVar29 * local_d8._0_4_ + auVar42._4_4_ * local_d8._4_4_);
  fVar41 = (float)(~uVar27 & (uint)-(1.0 - local_dc) | (uint)(1.0 - local_dc) & uVar27);
  auVar42._4_4_ = fVar41 * auVar42._4_4_ + local_dc * local_d8._4_4_;
  auVar42._0_4_ = fVar41 * fVar29 + local_dc * local_d8._0_4_;
  auVar42._8_4_ = fVar41 * fVar31 + local_dc * local_d8._8_4_;
  auVar42._12_4_ = fVar41 * fVar30 + local_dc * local_d8._12_4_;
LAB_1478e10fa:
  dVar7 = (double)auVar42._12_4_;
  dVar32 = (double)auVar42._8_4_;
  dVar8 = (double)auVar42._4_4_;
  dVar35 = (double)auVar42._0_4_;
  auVar38._8_4_ = SUB84(dVar7,0);
  auVar38._0_8_ = dVar32;
  auVar38._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar37 = dVar32 * dVar32 + dVar35 * dVar35;
  dVar40 = auVar38._8_8_ * dVar7 + dVar8 * dVar8;
  auVar39._0_8_ = dVar37 + dVar40;
  auVar39._8_8_ = dVar37 + dVar40;
  uVar28 = -(ulonglong)(1e-08 <= auVar39._8_8_);
  auVar36 = sqrtpd(auVar39,auVar39);
  auVar42 = divpd(_DAT_149934d80,auVar36);
  auVar43._0_8_ = auVar42._0_8_ * dVar32;
  auVar43._8_8_ = auVar42._8_8_ * dVar7;
  auVar6._8_4_ = (int)uVar28;
  auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar39._0_8_);
  auVar6._12_4_ = (int)(uVar28 >> 0x20);
  auVar36 = blendvpd(_DAT_149935300,auVar43,auVar6);
  *puVar17 = (ulonglong)(dVar35 * auVar42._0_8_) & -(ulonglong)(1e-08 <= auVar39._0_8_);
  puVar17[1] = (ulonglong)(dVar8 * auVar42._8_8_) & uVar28;
  *(undefined1 (*) [16])(puVar17 + 2) = auVar36;
LAB_1478e117a:
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478e1556 FUN_1478e1556 body=2048 status=ok
// SIG undefined FUN_1478e1556(void)

void FUN_1478e1556(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_9c;
  
  uVar9 = DAT_14c8464f0;
  uVar8 = DAT_14c8464e8;
  lVar7 = *(longlong *)(param_2 + 0x10);
  lVar10 = (longlong)
           *(int *)(*(longlong *)(lVar7 + 0x20) +
                   (longlong)param_3 * (longlong)*(int *)(lVar7 + 0x30) * 4);
  if (lVar10 == -1) {
    *(undefined8 *)(param_1 + 0x40) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined8 *)(param_1 + 0x50) = uVar9;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    puVar1 = (uint *)(*(longlong *)(lVar7 + 0x38) + lVar10);
    pfVar18 = (float *)(puVar1 + 1);
    uVar5 = *puVar1;
    uVar12 = uVar5 & 0xffffff;
    uVar22 = uVar5 >> 0x1c;
    uVar23 = uVar5 >> 0x18 & 7;
    uVar20 = (uint)(byte)(&DAT_14a7a41e0)[uVar23 + uVar22 * 8] * 4;
    uVar13 = 1;
    if (uVar22 != 3) {
      uVar20 = 0;
      uVar13 = (uint)(byte)(&DAT_14a7a41e0)[uVar23 + uVar22 * 8];
    }
    iVar17 = uVar13 * *(int *)(&DAT_14a7a41a0 + (ulonglong)uVar22 * 4);
    local_9c = 0.0;
    uVar21 = (ulonglong)uVar20;
    uVar13 = 0;
    uVar20 = 0;
    if (1 < uVar12) {
      if ((uVar5 >> 0x1b & 1) == 0) {
        fVar31 = (*(float *)(param_2 + 0x4c) + (float)*(int *)(param_2 + 0x48)) /
                 (float)*(int *)(param_2 + 0x50);
        if (1.0 <= fVar31) {
          fVar31 = 1.0;
        }
        local_9c = 0.0;
        if (fVar31 <= 0.0) {
          uVar13 = 0;
          uVar20 = 0;
        }
        else {
          uVar13 = uVar12 - 1;
          uVar20 = uVar13;
          if (fVar31 < 1.0) {
            auVar26 = roundss(ZEXT416(0),ZEXT416((uint)((float)(int)uVar13 * fVar31)),9);
            uVar20 = (uint)auVar26._0_4_;
            if ((int)uVar13 <= (int)uVar20) {
              uVar20 = uVar13;
            }
            if (*(char *)(param_2 + 4) != '\x01') {
              local_9c = (float)(int)uVar13 * fVar31 - auVar26._0_4_;
            }
            if ((int)(uVar20 + 1) < (int)uVar13) {
              uVar13 = uVar20 + 1;
            }
          }
        }
      }
      else {
        fVar31 = (*(float *)(param_2 + 0x4c) + (float)*(int *)(param_2 + 0x48)) /
                 (float)*(int *)(param_2 + 0x50);
        if (1.0 <= fVar31) {
          fVar31 = 1.0;
        }
        local_9c = 0.0;
        if (fVar31 <= 0.0) {
          uVar13 = 0;
          uVar20 = 0;
        }
        else {
          uVar13 = uVar12 - 1;
          uVar20 = uVar13;
          if (fVar31 < 1.0) {
            uVar15 = (longlong)pfVar18 + (longlong)(int)(uVar12 * iVar17) + uVar21 + 3 &
                     0xfffffffffffffffc;
            iVar19 = *(int *)(lVar7 + 8);
            fVar32 = (float)(iVar19 + -1) * fVar31;
            uVar20 = (uint)fVar32;
            uVar12 = iVar19 - 2U;
            if ((int)uVar20 < (int)(iVar19 - 2U)) {
              uVar12 = uVar20;
            }
            if ((int)uVar12 < 1) {
              uVar12 = 0;
            }
            uVar20 = (int)((float)(int)uVar13 * fVar31);
            if ((int)uVar13 <= (int)((float)(int)uVar13 * fVar31)) {
              uVar20 = uVar13;
            }
            if ((int)uVar20 < 1) {
              uVar20 = 0;
            }
            uVar24 = (ulonglong)uVar20;
            if (iVar19 < 0x100) {
              if (uVar12 < *(byte *)(uVar15 + uVar24)) {
                do {
                  if ((longlong)uVar24 < 2) {
                    uVar24 = 0;
                    break;
                  }
                  pbVar3 = (byte *)((uVar15 - 1) + uVar24);
                  uVar24 = uVar24 - 1;
                } while (uVar12 < *pbVar3);
              }
              else {
                do {
                  if (uVar13 == uVar24) {
                    uVar24 = (ulonglong)uVar13;
                    goto LAB_1478e1cff;
                  }
                  pbVar3 = (byte *)(uVar15 + 1 + uVar24);
                  uVar24 = uVar24 + 1;
                } while (*pbVar3 <= uVar12);
                uVar24 = (ulonglong)((int)uVar24 - 1);
              }
LAB_1478e1cff:
              uVar20 = (uint)uVar24;
              uVar12 = (uint)*(byte *)(uVar15 + (longlong)(int)uVar20);
              if ((int)uVar20 < (int)uVar13) {
                uVar13 = uVar20 + 1;
              }
              uVar14 = (uint)*(byte *)(uVar15 + (longlong)(int)uVar13);
            }
            else {
              if (uVar12 < *(ushort *)(uVar15 + uVar24 * 2)) {
                do {
                  if ((longlong)uVar24 < 2) {
                    uVar24 = 0;
                    break;
                  }
                  lVar2 = uVar24 * 2;
                  uVar24 = uVar24 - 1;
                } while (uVar12 < *(ushort *)((uVar15 - 2) + lVar2));
              }
              else {
                do {
                  if (uVar13 == uVar24) {
                    uVar24 = (ulonglong)uVar13;
                    goto LAB_1478e1cdf;
                  }
                  lVar2 = uVar24 * 2;
                  uVar24 = uVar24 + 1;
                } while (*(ushort *)(uVar15 + 2 + lVar2) <= uVar12);
                uVar24 = (ulonglong)((int)uVar24 - 1);
              }
LAB_1478e1cdf:
              uVar20 = (uint)uVar24;
              uVar12 = (uint)*(ushort *)(uVar15 + (longlong)(int)uVar20 * 2);
              if ((int)uVar20 < (int)uVar13) {
                uVar13 = uVar20 + 1;
              }
              uVar14 = (uint)*(ushort *)(uVar15 + (longlong)(int)uVar13 * 2);
            }
            iVar19 = 1;
            if (1 < (int)(uVar14 - uVar12)) {
              iVar19 = uVar14 - uVar12;
            }
            local_9c = 0.0;
            if (*(char *)(param_2 + 4) != '\x01') {
              local_9c = (fVar32 - (float)uVar12) / (float)iVar19;
            }
          }
        }
      }
    }
    lVar10 = *(longlong *)(lVar7 + 0x38) + lVar10;
    uVar12 = uVar22 - 1;
    if (5 < uVar12) {
switchD_1478e17f6_caseD_3:
      FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x464,
                    L"%i: unknown or unsupported animation compression format",uVar22);
      goto switchD_1478e17f6_caseD_5;
    }
    pfVar11 = (float *)((longlong)pfVar18 + (longlong)(int)(uVar20 * iVar17) + uVar21);
    switch(uVar12) {
    case 0:
      if (uVar23 == 0) {
        fVar31 = *pfVar11;
        fVar32 = pfVar11[1];
        fVar33 = pfVar11[2];
      }
      else {
        fVar32 = 0.0;
        if ((uVar5 >> 0x18 & 1) == 0) {
          fVar31 = 0.0;
        }
        else {
          fVar31 = *pfVar11;
          pfVar11 = pfVar11 + 1;
        }
        if ((uVar5 >> 0x19 & 1) != 0) {
          fVar32 = *pfVar11;
          pfVar11 = pfVar11 + 1;
        }
        fVar33 = 0.0;
        if ((uVar5 >> 0x1a & 1) != 0) {
          fVar33 = *pfVar11;
        }
      }
      break;
    case 1:
      fVar32 = 0.0;
      if ((uVar5 >> 0x18 & 1) == 0) {
        fVar31 = 0.0;
      }
      else {
        uVar4 = *(ushort *)pfVar11;
        pfVar11 = (float *)((longlong)pfVar11 + 2);
        fVar31 = (float)(int)(uVar4 - 0xff);
      }
      if ((uVar5 >> 0x19 & 1) != 0) {
        uVar4 = *(ushort *)pfVar11;
        pfVar11 = (float *)((longlong)pfVar11 + 2);
        fVar32 = (float)(int)(uVar4 - 0xff);
      }
      fVar33 = 0.0;
      if ((uVar5 >> 0x1a & 1) != 0) {
        fVar33 = (float)(int)(*(ushort *)pfVar11 - 0xff);
      }
      break;
    case 2:
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar31 = 0.0;
      pfVar16 = pfVar18;
      if ((uVar5 >> 0x18 & 1) != 0) {
        fVar31 = *(float *)(lVar10 + 4);
        fVar27 = *(float *)(lVar10 + 8);
        pfVar16 = (float *)(lVar10 + 0xc);
      }
      if ((uVar5 >> 0x19 & 1) == 0) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = *pfVar16;
        fVar25 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
      }
      fVar28 = 0.0;
      fVar33 = 0.0;
      if ((uVar5 >> 0x1a & 1) != 0) {
        fVar33 = *pfVar16;
        fVar28 = pfVar16[1];
      }
      fVar29 = *pfVar11;
      fVar31 = ((float)(int)(((uint)fVar29 & 0x3ff) - 0x1ff) / 511.0) * fVar27 + fVar31;
      fVar32 = ((float)(int)(((uint)fVar29 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * fVar25 + fVar32;
      fVar33 = ((float)(int)(((uint)fVar29 >> 0x15) - 0x3ff) / 1023.0) * fVar28 + fVar33;
      break;
    default:
      goto switchD_1478e17f6_caseD_3;
    case 5:
switchD_1478e17f6_caseD_5:
      fVar31 = (float)DAT_14c846330;
      fVar32 = DAT_14c846330._4_4_;
      fVar33 = DAT_14c846338;
    }
    if (uVar20 != uVar13) {
      if (5 < uVar12) {
switchD_1478e18ec_caseD_3:
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x464,
                      L"%i: unknown or unsupported animation compression format",(ulonglong)uVar22);
        goto switchD_1478e18ec_caseD_5;
      }
      pfVar11 = (float *)((longlong)pfVar18 + (longlong)(int)(uVar13 * iVar17) + uVar21);
      switch(uVar12) {
      case 0:
        if (uVar23 == 0) {
          fVar27 = *pfVar11;
          fVar25 = pfVar11[1];
          fVar28 = pfVar11[2];
        }
        else {
          fVar25 = 0.0;
          if ((uVar5 >> 0x18 & 1) == 0) {
            fVar27 = 0.0;
          }
          else {
            fVar27 = *pfVar11;
            pfVar11 = pfVar11 + 1;
          }
          if ((uVar5 >> 0x19 & 1) != 0) {
            fVar25 = *pfVar11;
            pfVar11 = pfVar11 + 1;
          }
          fVar28 = 0.0;
          if ((uVar5 >> 0x1a & 1) != 0) {
            fVar28 = *pfVar11;
          }
        }
        break;
      case 1:
        fVar25 = 0.0;
        if ((uVar5 >> 0x18 & 1) == 0) {
          fVar27 = 0.0;
        }
        else {
          uVar4 = *(ushort *)pfVar11;
          pfVar11 = (float *)((longlong)pfVar11 + 2);
          fVar27 = (float)(int)(uVar4 - 0xff);
        }
        if ((uVar5 >> 0x19 & 1) != 0) {
          uVar4 = *(ushort *)pfVar11;
          pfVar11 = (float *)((longlong)pfVar11 + 2);
          fVar25 = (float)(int)(uVar4 - 0xff);
        }
        fVar28 = 0.0;
        if ((uVar5 >> 0x1a & 1) != 0) {
          fVar28 = (float)(int)(*(ushort *)pfVar11 - 0xff);
        }
        break;
      case 2:
        fVar25 = 0.0;
        fVar28 = 0.0;
        fVar27 = 0.0;
        if ((uVar5 >> 0x18 & 1) != 0) {
          fVar27 = *(float *)(lVar10 + 4);
          fVar28 = *(float *)(lVar10 + 8);
          pfVar18 = (float *)(lVar10 + 0xc);
        }
        if ((uVar5 >> 0x19 & 1) == 0) {
          fVar29 = 0.0;
        }
        else {
          fVar29 = *pfVar18;
          fVar25 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
        }
        fVar30 = 0.0;
        fVar34 = 0.0;
        if ((uVar5 >> 0x1a & 1) != 0) {
          fVar34 = *pfVar18;
          fVar30 = pfVar18[1];
        }
        fVar6 = *pfVar11;
        fVar25 = ((float)(int)(((uint)fVar6 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * fVar25 + fVar29;
        fVar27 = ((float)(int)(((uint)fVar6 & 0x3ff) - 0x1ff) / 511.0) * fVar28 + fVar27;
        fVar28 = ((float)(int)(((uint)fVar6 >> 0x15) - 0x3ff) / 1023.0) * fVar30 + fVar34;
        break;
      default:
        goto switchD_1478e18ec_caseD_3;
      case 5:
switchD_1478e18ec_caseD_5:
        fVar25 = DAT_14c846330._4_4_;
        fVar27 = (float)DAT_14c846330;
        fVar28 = DAT_14c846338;
      }
      fVar33 = fVar33 + (fVar28 - fVar33) * local_9c;
      fVar32 = fVar32 + (fVar25 - fVar32) * local_9c;
      fVar31 = fVar31 + (fVar27 - fVar31) * local_9c;
    }
    *(double *)(param_1 + 0x40) = (double)fVar31;
    *(double *)(param_1 + 0x48) = (double)fVar32;
    *(double *)(param_1 + 0x50) = (double)fVar33;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1478e1d88 FUN_1478e1d88 body=119 status=ok
// SIG undefined FUN_1478e1d88(void)

undefined8 FUN_1478e1d88(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (0 < (longlong)*(int *)(param_2 + 0x28)) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x20) + lVar2) == param_3) {
        uVar3 = FUN_1402a0944(*(undefined1 *)(lVar1 + lVar2),*(undefined1 *)(lVar1 + 1 + lVar2),
                              *(undefined1 *)(lVar1 + 2 + lVar2),*(undefined1 *)(lVar1 + 3 + lVar2),
                              *(undefined4 *)(lVar1 + 4 + lVar2),*(int *)(lVar1 + 8 + lVar2) + lVar1
                              ,param_4,0);
        return uVar3;
      }
      lVar2 = lVar2 + 0xc;
    } while ((longlong)*(int *)(param_2 + 0x28) * 0xc != lVar2);
  }
  return 0;
}



// FUNCTION 1478e1e04 FUN_1478e1e04 body=1297 status=ok
// SIG undefined FUN_1478e1e04(void)

void FUN_1478e1e04(undefined8 param_1,longlong param_2,longlong *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  
  uVar5 = *(uint *)(param_2 + 0x28);
  uVar18 = (ulonglong)uVar5;
  if (uVar18 != 0) {
    piVar8 = *(int **)(param_2 + 0x50);
    iVar16 = *piVar8;
    lVar19 = (longlong)iVar16;
    if (lVar19 == 0) {
      return;
    }
    param_4 = param_4 * (float)piVar8[1];
    uVar17 = iVar16 - 1;
    uVar12 = (int)ROUND(param_4 + param_4 + -0.5) >> 1;
    if ((int)uVar17 <= (int)uVar12) {
      uVar12 = uVar17;
    }
    uVar22 = 0;
    if (0 < (int)uVar12) {
      uVar22 = uVar12;
    }
    if ((int)(uVar22 + 1) < (int)uVar17) {
      uVar17 = uVar22 + 1;
    }
    param_4 = param_4 - (float)(int)uVar22;
    plVar9 = (longlong *)param_3[3];
    *(undefined1 *)(param_3 + 2) = 1;
    if ((plVar9 != (longlong *)0x0) && (cVar3 = (char)plVar9[3], cVar3 != '\0')) {
      if (cVar3 == '\x01') {
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) < 0) {
          FUN_14480ffb8(param_3,0);
        }
        *(undefined1 *)(param_3 + 2) = 0;
        return;
      }
      if ((cVar3 != '\x03') || ((int)plVar9[1] != 0)) {
        if ((char)plVar9[2] == '\0') {
          FUN_146264839(*plVar9,(int)plVar9[1]);
          *(undefined1 *)(plVar9 + 2) = 1;
        }
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) < 0) {
          FUN_14480ffb8(param_3,0);
        }
        *(undefined1 *)(param_3 + 2) = 0;
        if (-1 < (int)uVar5) {
          if (*(int *)((longlong)param_3 + 0xc) < (int)uVar5) {
            FUN_14480ffb8(param_3,uVar18);
          }
          iVar6 = (int)plVar9[1];
          uVar18 = (ulonglong)uVar22;
          lVar13 = (longlong)(int)uVar17;
          uVar12 = 0;
          bVar11 = true;
          iVar21 = 0;
          do {
            if ((bVar11) && (iVar21 == iVar6)) {
              iVar16 = (uVar5 - uVar12) + (int)param_3[1];
              if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar16);
              }
              if (*(int *)((longlong)param_3 + 0xc) < iVar16) {
                FUN_14480ffb8(param_3);
              }
              if ((int)uVar5 <= (int)uVar12) {
                return;
              }
              iVar16 = uVar5 - uVar12;
              lVar20 = (longlong)(int)uVar12 * 0xc + 8;
              do {
                if (((char)plVar9[3] == '\x03') || ((char)plVar9[3] == '\0')) {
                  lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar20);
                  lVar23 = lVar14 * lVar19;
                  fVar1 = (float)piVar8[lVar23 + uVar18 + 2];
                  fVar2 = (float)piVar8[lVar23 + lVar13 + 2];
                  uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + lVar14 * 0xc);
                  iVar6 = (int)param_3[1];
                  *(uint *)(param_3 + 1) = iVar6 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
                    FUN_1406de67a(param_3,iVar6);
                  }
                  lVar14 = *param_3;
                  lVar23 = (longlong)iVar6 * 0x10;
                  *(undefined8 *)(lVar14 + lVar23) = uVar10;
                  *(float *)(lVar14 + 8 + lVar23) = (fVar2 - fVar1) * param_4 + fVar1;
                  *(undefined1 *)(lVar14 + 0xc + lVar23) = 0;
                }
                lVar20 = lVar20 + 0xc;
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
              return;
            }
            iVar7 = *(int *)(*(longlong *)(param_2 + 0x20) + 8 + (longlong)(int)uVar12 * 0xc);
            lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 0xc);
            lVar14 = *(longlong *)(*plVar9 + (longlong)iVar21 * 0xc);
            if (lVar20 == lVar14) {
              bVar4 = *(byte *)(*plVar9 + (longlong)iVar21 * 0xc + 8);
              if ((bVar4 & 1) != 0) goto LAB_1478e20d4;
              cVar3 = (char)plVar9[3];
              if (cVar3 == '\0') {
LAB_1478e2065:
                fVar1 = (float)piVar8[(longlong)(iVar7 * iVar16) + uVar18 + 2];
                fVar2 = (float)piVar8[(longlong)(iVar7 * iVar16) + lVar13 + 2];
                iVar7 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
                  FUN_1406de67a(param_3,iVar7);
                }
                lVar14 = *param_3;
                lVar23 = (longlong)iVar7 * 0x10;
                *(longlong *)(lVar14 + lVar23) = lVar20;
                *(float *)(lVar14 + 8 + lVar23) = (fVar2 - fVar1) * param_4 + fVar1;
                *(undefined1 *)(lVar14 + 0xc + lVar23) = 0;
              }
              else if (cVar3 == '\x02') {
                if ((bVar4 & 2) != 0) goto LAB_1478e2065;
              }
              else if ((cVar3 == '\x03') && ((bVar4 & 2) == 0)) goto LAB_1478e2065;
LAB_1478e20d4:
              uVar12 = uVar12 + 1;
LAB_1478e20d6:
              iVar21 = iVar21 + 1;
            }
            else {
              iVar15 = (int)lVar20 - (int)lVar14;
              if (iVar15 == 0) {
                iVar15 = (int)((ulonglong)lVar20 >> 0x20) - (int)((ulonglong)lVar14 >> 0x20);
              }
              if (-1 < iVar15) goto LAB_1478e20d6;
              if (((char)plVar9[3] == '\x03') || ((char)plVar9[3] == '\0')) {
                fVar1 = (float)piVar8[(longlong)(iVar7 * iVar16) + uVar18 + 2];
                fVar2 = (float)piVar8[(longlong)(iVar7 * iVar16) + lVar13 + 2];
                iVar7 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
                  FUN_1406de67a(param_3,iVar7);
                }
                lVar14 = *param_3;
                lVar23 = (longlong)iVar7 * 0x10;
                *(longlong *)(lVar14 + lVar23) = lVar20;
                *(float *)(lVar14 + 8 + lVar23) = (fVar2 - fVar1) * param_4 + fVar1;
                *(undefined1 *)(lVar14 + 0xc + lVar23) = 0;
              }
              uVar12 = uVar12 + 1;
            }
            bVar11 = (int)uVar12 < (int)uVar5;
            if (!bVar11 && iVar6 <= iVar21) {
              return;
            }
            if (uVar12 == uVar5 && iVar6 > iVar21) {
              return;
            }
          } while( true );
        }
        goto LAB_1478e2306;
      }
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_14480ffb8(param_3,0);
    }
    *(undefined1 *)(param_3 + 2) = 0;
    if ((int)uVar5 < 0) {
LAB_1478e2306:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar18);
    }
    if (*(int *)((longlong)param_3 + 0xc) < (int)uVar5) {
      FUN_14480ffb8(param_3,uVar18);
    }
    lVar13 = 8;
    do {
      lVar20 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar13);
      lVar14 = lVar20 * lVar19;
      fVar1 = (float)piVar8[lVar14 + (ulonglong)uVar22 + 2];
      fVar2 = (float)piVar8[lVar14 + (longlong)(int)uVar17 + 2];
      uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + lVar20 * 0xc);
      iVar16 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar16 + 1U) {
        FUN_1406de67a(param_3,iVar16);
      }
      lVar20 = *param_3;
      lVar14 = (longlong)iVar16 * 0x10;
      *(undefined8 *)(lVar20 + lVar14) = uVar10;
      *(float *)(lVar20 + 8 + lVar14) = (fVar2 - fVar1) * param_4 + fVar1;
      *(undefined1 *)(lVar20 + 0xc + lVar14) = 0;
      lVar13 = lVar13 + 0xc;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return;
}



// FUNCTION 1478e2316 FUN_1478e2316 body=178 status=ok
// SIG undefined FUN_1478e2316(void)

float FUN_1478e2316(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((ulonglong)uVar2 != 0) {
    piVar4 = *(int **)(param_2 + 0x50);
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      param_4 = param_4 * (float)piVar4[1];
      uVar1 = iVar3 - 1;
      uVar7 = (int)ROUND(param_4 + param_4 + -0.5) >> 1;
      if ((int)uVar1 <= (int)uVar7) {
        uVar7 = uVar1;
      }
      iVar5 = 0;
      if ((int)uVar7 < 1) {
        uVar7 = 0;
      }
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar1 = uVar7 + 1;
      }
      if (0 < (int)uVar2) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_2 + 0x20) + lVar6) == param_3) {
            return (param_4 - (float)(int)uVar7) *
                   ((float)piVar4[(longlong)iVar5 + (longlong)(int)uVar1 + 2] -
                   (float)piVar4[(longlong)iVar5 + (ulonglong)uVar7 + 2]) +
                   (float)piVar4[(longlong)iVar5 + (ulonglong)uVar7 + 2];
          }
          iVar5 = iVar5 + iVar3;
          lVar6 = lVar6 + 0xc;
        } while ((ulonglong)uVar2 * 0xc != lVar6);
      }
    }
  }
  return 0.0;
}



// FUNCTION 1478e23cc FUN_1478e23cc body=1270 status=ok
// SIG undefined FUN_1478e23cc(void)

void FUN_1478e23cc(undefined8 param_1,longlong param_2,longlong *param_3,float param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined1 auStack_d8 [44];
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  int *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  float local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(uint *)(param_2 + 0x28);
  uVar13 = (ulonglong)uVar3;
  if (uVar13 != 0) {
    piVar4 = *(int **)(param_2 + 0x50);
    if (piVar4[1] != 0) {
      plVar15 = (longlong *)(param_2 + 0x20);
      iVar11 = uVar3 - *piVar4;
      iVar12 = uVar3 + 0x3e;
      if (-1 < (int)(uVar3 + 0x1f)) {
        iVar12 = uVar3 + 0x1f;
      }
      iVar10 = ((iVar12 >> 5) + *piVar4) * 4 + 0xc;
      param_4 = param_4 * (float)piVar4[2];
      iVar9 = piVar4[1] + -1;
      iVar16 = (int)ROUND(param_4 + param_4 + -0.5) >> 1;
      if (iVar9 <= iVar16) {
        iVar16 = iVar9;
      }
      if (iVar16 < 1) {
        iVar16 = 0;
      }
      if (iVar16 + 1 < iVar9) {
        iVar9 = iVar16 + 1;
      }
      local_98 = piVar4 + 3;
      local_80 = (longlong)piVar4 + (longlong)((iVar12 >> 5) * 4) + 0xc;
      local_68 = param_4 - (float)iVar16;
      local_78 = (longlong)piVar4 + (longlong)(iVar16 * iVar11) * 4 + (longlong)iVar10;
      local_70 = (longlong)piVar4 + (longlong)(iVar9 * iVar11) * 4 + (longlong)iVar10;
      local_a4 = 0;
      local_a8 = 0;
      plVar5 = (longlong *)param_3[3];
      *(undefined1 *)(param_3 + 2) = 1;
      local_a0 = plVar15;
      if (((plVar5 == (longlong *)0x0) || (cVar1 = (char)plVar5[3], cVar1 == '\0')) ||
         ((cVar1 == '\x03' && ((int)plVar5[1] == 0)))) {
        local_90 = &local_a4;
        local_88 = &local_a8;
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) < 0) {
          FUN_14480ffb8(param_3,0);
        }
        *(undefined1 *)(param_3 + 2) = 0;
        if ((int)uVar3 < 0) {
LAB_1478e28b4:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar13);
        }
        if (*(int *)((longlong)param_3 + 0xc) < (int)uVar3) {
          FUN_14480ffb8(param_3,uVar13);
        }
        lVar17 = 8;
        uVar18 = 0;
        do {
          uVar20 = FUN_1433d7002(&local_a0,uVar18 & 0xffffffff);
          uVar7 = *(undefined8 *)(*plVar15 + (longlong)*(int *)(*plVar15 + lVar17) * 0xc);
          iVar12 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
            FUN_1406de67a(param_3,iVar12);
          }
          lVar6 = *param_3;
          lVar19 = (longlong)iVar12 * 0x10;
          *(undefined8 *)(lVar6 + lVar19) = uVar7;
          *(undefined4 *)(lVar6 + 8 + lVar19) = uVar20;
          *(undefined1 *)(lVar6 + 0xc + lVar19) = 0;
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 0xc;
        } while (uVar13 != uVar18);
      }
      else {
        local_90 = &local_a4;
        local_88 = &local_a8;
        if (cVar1 == '\x01') {
          *(undefined4 *)(param_3 + 1) = 0;
          if (*(int *)((longlong)param_3 + 0xc) < 0) {
            FUN_14480ffb8(param_3,0);
          }
          *(undefined1 *)(param_3 + 2) = 0;
        }
        else {
          if ((char)plVar5[2] == '\0') {
            FUN_146264839(*plVar5,(int)plVar5[1]);
            *(undefined1 *)(plVar5 + 2) = 1;
          }
          *(undefined4 *)(param_3 + 1) = 0;
          if (*(int *)((longlong)param_3 + 0xc) < 0) {
            FUN_14480ffb8(param_3,0);
          }
          *(undefined1 *)(param_3 + 2) = 0;
          if ((int)uVar3 < 0) goto LAB_1478e28b4;
          if (*(int *)((longlong)param_3 + 0xc) < (int)uVar3) {
            FUN_14480ffb8(param_3,uVar3);
          }
          local_ac = (int)plVar5[1];
          uVar14 = 0;
          bVar8 = true;
          iVar11 = 0;
          iVar12 = local_ac;
          while ((!bVar8 || (iVar11 != iVar12))) {
            lVar17 = *(longlong *)
                      (*plVar15 +
                      (longlong)*(int *)(*plVar15 + 8 + (longlong)(int)uVar14 * 0xc) * 0xc);
            lVar6 = *(longlong *)(*plVar5 + (longlong)iVar11 * 0xc);
            if (lVar17 == lVar6) {
              bVar2 = *(byte *)(*plVar5 + (longlong)iVar11 * 0xc + 8);
              if ((bVar2 & 1) != 0) goto LAB_1478e27c9;
              cVar1 = (char)plVar5[3];
              if (cVar1 == '\0') {
LAB_1478e2782:
                uVar20 = FUN_1433d7002(&local_a0,uVar14);
                iVar12 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar12 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
                  FUN_1406de67a(param_3,iVar12);
                }
                lVar6 = *param_3;
                lVar19 = (longlong)iVar12 * 0x10;
                *(longlong *)(lVar6 + lVar19) = lVar17;
                *(undefined4 *)(lVar6 + 8 + lVar19) = uVar20;
                *(undefined1 *)(lVar6 + 0xc + lVar19) = 0;
                iVar12 = local_ac;
              }
              else if (cVar1 == '\x02') {
                if ((bVar2 & 2) != 0) goto LAB_1478e2782;
              }
              else if ((cVar1 == '\x03') && ((bVar2 & 2) == 0)) goto LAB_1478e2782;
LAB_1478e27c9:
              uVar14 = uVar14 + 1;
LAB_1478e27cb:
              iVar11 = iVar11 + 1;
            }
            else {
              iVar10 = (int)lVar17 - (int)lVar6;
              if (iVar10 == 0) {
                iVar10 = (int)((ulonglong)lVar17 >> 0x20) - (int)((ulonglong)lVar6 >> 0x20);
              }
              if (-1 < iVar10) goto LAB_1478e27cb;
              if (((char)plVar5[3] == '\x03') || ((char)plVar5[3] == '\0')) {
                uVar20 = FUN_1433d7002(&local_a0,uVar14);
                iVar12 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar12 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
                  FUN_1406de67a(param_3,iVar12);
                }
                lVar6 = *param_3;
                lVar19 = (longlong)iVar12 * 0x10;
                *(longlong *)(lVar6 + lVar19) = lVar17;
                *(undefined4 *)(lVar6 + 8 + lVar19) = uVar20;
                *(undefined1 *)(lVar6 + 0xc + lVar19) = 0;
                iVar12 = local_ac;
              }
              uVar14 = uVar14 + 1;
            }
            bVar8 = (int)uVar14 < (int)uVar3;
            if ((!bVar8 && iVar12 <= iVar11) || (uVar14 == uVar3 && iVar12 > iVar11))
            goto LAB_1478e260e;
          }
          iVar12 = (uVar3 - uVar14) + (int)param_3[1];
          if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar12);
          }
          if (*(int *)((longlong)param_3 + 0xc) < iVar12) {
            FUN_14480ffb8(param_3);
          }
          if ((int)uVar14 < (int)uVar3) {
            lVar17 = (longlong)(int)uVar14 * 0xc + 8;
            do {
              if (((char)plVar5[3] == '\x03') || ((char)plVar5[3] == '\0')) {
                uVar20 = FUN_1433d7002(&local_a0,uVar14);
                uVar7 = *(undefined8 *)(*plVar15 + (longlong)*(int *)(*plVar15 + lVar17) * 0xc);
                iVar12 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar12 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
                  FUN_1406de67a(param_3,iVar12);
                }
                lVar6 = *param_3;
                lVar19 = (longlong)iVar12 * 0x10;
                *(undefined8 *)(lVar6 + lVar19) = uVar7;
                *(undefined4 *)(lVar6 + 8 + lVar19) = uVar20;
                *(undefined1 *)(lVar6 + 0xc + lVar19) = 0;
              }
              uVar14 = uVar14 + 1;
              lVar17 = lVar17 + 0xc;
            } while (uVar3 != uVar14);
          }
        }
      }
    }
  }
LAB_1478e260e:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478e28c4 FUN_1478e28c4 body=297 status=ok
// SIG undefined FUN_1478e28c4(void)

float FUN_1478e28c4(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((ulonglong)uVar3 != 0) {
    iVar8 = uVar3 + 0x3e;
    if (-1 < (int)(uVar3 + 0x1f)) {
      iVar8 = uVar3 + 0x1f;
    }
    if (0 < (int)uVar3) {
      piVar4 = *(int **)(param_2 + 0x50);
      iVar1 = ((iVar8 >> 5) + *piVar4) * 4 + 0xc;
      iVar11 = uVar3 - *piVar4;
      plVar9 = *(longlong **)(param_2 + 0x20);
      uVar7 = 0;
      iVar10 = 0;
      iVar6 = 0;
      do {
        uVar12 = 1 << ((byte)uVar7 & 0x1f) & piVar4[(uVar7 >> 5 & 0x7ffffff) + 3];
        if (*plVar9 == param_3) {
          if (uVar12 != 0) {
            return (float)piVar4[(longlong)(iVar8 >> 5) + (longlong)iVar10 + 3];
          }
          param_4 = (float)piVar4[2] * param_4;
          iVar6 = piVar4[1] + -1;
          iVar8 = (int)ROUND(param_4 + param_4 + -0.5) >> 1;
          if (iVar6 <= iVar8) {
            iVar8 = iVar6;
          }
          iVar10 = 0;
          if (0 < iVar8) {
            iVar10 = iVar8;
          }
          if (iVar10 + 1 < iVar6) {
            iVar6 = iVar10 + 1;
          }
          fVar2 = *(float *)((longlong)piVar4 +
                            ((longlong)(iVar10 * iVar11) + uVar7) * 4 + (longlong)iVar1);
          return (*(float *)((longlong)piVar4 +
                            ((longlong)(iVar6 * iVar11) + uVar7) * 4 + (longlong)iVar1) - fVar2) *
                 (param_4 - (float)iVar10) + fVar2;
        }
        iVar13 = iVar10;
        if (uVar12 == 0) {
          iVar13 = iVar6;
        }
        iVar5 = iVar13 + 1;
        if (uVar12 != 0) {
          iVar10 = iVar13 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        uVar7 = uVar7 + 1;
        plVar9 = (longlong *)((longlong)plVar9 + 0xc);
      } while (uVar3 != uVar7);
    }
  }
  return 0.0;
}



// FUNCTION 1478e29f2 FUN_1478e29f2 body=345 status=ok
// SIG undefined FUN_1478e29f2(void)

longlong * FUN_1478e29f2(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbe8);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x11);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x11) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x11) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x12);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x12) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x12) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1478faf98(param_1,param_2);
  iVar3 = FUN_1448332aa(param_1,&DAT_149e3cbe8);
  if (0xb < iVar3) {
    puVar2 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x10),1);
    }
    else {
      *(undefined1 *)(param_2 + 0x10) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e2bd4 FUN_1478e2bd4 body=242 status=ok
// SIG undefined FUN_1478e2bd4(void)

undefined8 FUN_1478e2bd4(longlong param_1,longlong param_2)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar4 = *(longlong *)(param_1 + 8);
      do {
        if (*(longlong *)(lVar4 + (longlong)iVar7 * 0x28) == param_2) {
          uVar5 = 0;
          goto LAB_1478e2caa;
        }
        iVar7 = *(int *)(lVar4 + (longlong)iVar7 * 0x28 + 0x20);
      } while (iVar7 != -1);
    }
  }
  local_20 = &local_28;
  FUN_1478fb144((longlong *)(param_1 + 8),local_14,&local_20,0);
  sVar2 = (short)*(undefined4 *)(param_1 + 0x70);
  sVar3 = sVar2 + 1;
  if (sVar3 == 0) {
    sVar3 = sVar2 + 2;
  }
  *(short *)(param_1 + 0x70) = sVar3;
  FUN_1447f69b6(param_1 + 0x58);
  uVar5 = 1;
LAB_1478e2caa:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e2d5a FUN_1478e2d5a body=314 status=ok
// SIG undefined FUN_1478e2d5a(void)

void FUN_1478e2d5a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_1402191ca(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x28 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e2e96 FUN_1478e2e96 body=12 status=ok
// SIG undefined FUN_1478e2e96(void)

void FUN_1478e2e96(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x18) = param_2 + 0xb0;
  return;
}



// FUNCTION 1478e2ea2 FUN_1478e2ea2 body=12 status=ok
// SIG undefined FUN_1478e2ea2(void)

void FUN_1478e2ea2(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x18) = param_2 + 0xb0;
  return;
}



// FUNCTION 1478e2eba FUN_1478e2eba body=1335 status=ok
// SIG undefined FUN_1478e2eba(void)

void FUN_1478e2eba(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118 [2];
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1446e0b6e();
  local_98 = 0xe64f41ab697dd581;
  uStack_90 = 0xbeb7b628aa4a51ec;
  iVar5 = FUN_1448a256a(param_1);
  if (iVar5 < 0x41) {
    plVar1 = (longlong *)(param_1 + 0x28);
    uVar8 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x1a0))(plVar1);
    FUN_1478f98f6(uVar8,0,&local_88);
    if ((longlong)*(int *)(param_1 + 0x90) != 0) {
      lVar13 = (longlong)*(int *)(param_1 + 0x90) * 0x90;
      lVar11 = *(longlong *)(param_1 + 0x88) + 0x10;
      do {
        FUN_14045d2f8(lVar11,0);
        local_88 = *(wchar_t **)(lVar11 + -0x10);
        uStack_80 = CONCAT13(uStack_80._3_1_,0x30300);
        uVar8 = (**(code **)(*plVar1 + 0x1a0))(plVar1);
        FUN_1478e33f2(uVar8,&local_88);
        lVar11 = lVar11 + 0x90;
        lVar13 = lVar13 + -0x90;
      } while (lVar13 != 0);
    }
    uVar8 = (**(code **)(*plVar1 + 0x1a0))(plVar1);
    FUN_1478f98f6(uVar8,1,&local_88);
  }
  iVar5 = *(int *)(param_1 + 0x68);
  local_a8 = 0x601d1886;
  uStack_a4 = 0xac644f84;
  uStack_a0 = 0xaa16d3de;
  uStack_9c = 0xdeac7d6;
  iVar6 = FUN_1448a256a(param_1);
  if ((((0 < iVar5) && (iVar6 < 0x43)) && (*(int *)(*(longlong *)(param_1 + 0x60) + 8) == 1)) &&
     (*(int *)(param_1 + 0x80) == 2)) {
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar13 = (longlong)*(int *)(param_1 + 0x68) << 6;
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x20);
      do {
        puVar10 = (undefined8 *)puVar12[-4];
        uStack_80 = *(undefined4 *)(puVar10 + 1);
        local_88 = (wchar_t *)*puVar10;
        iVar6 = *(int *)(puVar12 + -3);
        *(uint *)(puVar12 + -3) = iVar6 + 1U;
        if (*(uint *)((longlong)puVar12 + -0x14) < iVar6 + 1U) {
          FUN_140c0b6f2(puVar12 + -4,iVar6);
          puVar10 = (undefined8 *)puVar12[-4];
        }
        *(undefined4 *)((longlong)puVar10 + (longlong)iVar6 * 0xc + 8) = uStack_80;
        *(wchar_t **)((longlong)puVar10 + (longlong)iVar6 * 0xc) = local_88;
        puVar9 = (undefined4 *)puVar12[-2];
        local_88._0_4_ = *puVar9;
        local_88._4_4_ = puVar9[1];
        uStack_80 = puVar9[2];
        uStack_7c = puVar9[3];
        iVar6 = *(int *)(puVar12 + -1);
        *(uint *)(puVar12 + -1) = iVar6 + 1U;
        if (*(uint *)((longlong)puVar12 + -4) < iVar6 + 1U) {
          FUN_146ed4f5e(puVar12 + -2,iVar6);
          puVar9 = (undefined4 *)puVar12[-2];
        }
        puVar9 = puVar9 + (longlong)iVar6 * 4;
        *puVar9 = (undefined4)local_88;
        puVar9[1] = local_88._4_4_;
        puVar9[2] = uStack_80;
        puVar9[3] = uStack_7c;
        puVar10 = (undefined8 *)*puVar12;
        uStack_80 = *(undefined4 *)(puVar10 + 1);
        local_88 = (wchar_t *)*puVar10;
        iVar6 = *(int *)(puVar12 + 1);
        *(uint *)(puVar12 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)puVar12 + 0xc) < iVar6 + 1U) {
          FUN_140c0b6f2(puVar12,iVar6);
          puVar10 = (undefined8 *)*puVar12;
        }
        *(undefined4 *)((longlong)puVar10 + (longlong)iVar6 * 0xc + 8) = uStack_80;
        *(wchar_t **)((longlong)puVar10 + (longlong)iVar6 * 0xc) = local_88;
        puVar12 = puVar12 + 8;
        lVar13 = lVar13 + -0x40;
      } while (lVar13 != 0);
    }
    uVar8 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x1a0))(param_1 + 0x28);
    FUN_1478f98f6(uVar8,3,&local_88);
  }
  local_b8 = 0xe64f41ab697dd581;
  uStack_b0 = 0xbeb7b628aa4a51ec;
  iVar6 = FUN_1448a256a(param_1);
  if (iVar6 < 0x59) {
    iVar6 = *(int *)(param_1 + 0x78);
    fVar4 = *(float *)(param_1 + 0x70);
    fVar14 = (float)(((double)((longlong)*(int *)(param_1 + 0x7c) * (longlong)iVar6) +
                     (double)((ulonglong)(double)iVar6 & 0x8000000000000000)) /
                    (double)*(int *)(param_1 + 0x74));
    if ((fVar4 != fVar14) || (NAN(fVar4) || NAN(fVar14))) {
      if (iVar5 < 1) {
        *(float *)(param_1 + 0x70) = fVar14;
      }
      else {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x60) + 8);
        if (iVar5 < *(int *)(param_1 + 0x80)) {
          lVar13 = (longlong)iVar5 + -1;
          *(float *)(param_1 + 0x70) =
               (float)(((double)(iVar6 * lVar13) +
                       (double)((ulonglong)(double)iVar6 & 0x8000000000000000)) /
                      (double)*(int *)(param_1 + 0x74));
          *(int *)(param_1 + 0x7c) = (int)lVar13;
          *(int *)(param_1 + 0x80) = iVar5;
          local_d8 = 0;
          plStack_d0 = (longlong *)0x0;
          FUN_1404079ea(local_c8,lVar13,0);
          FUN_146811d30(param_1 + 0x74,local_e8);
          local_108 = 0;
          plStack_100 = (longlong *)0x0;
          uVar7 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
          FUN_1413a4536(local_f8,uVar7,0,&local_108);
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          FUN_1404079ea(local_118,fVar4,0);
          local_88 = L"AnimDataModelPlayLengthAlteredToBones";
          uStack_80 = 0x25;
          FUN_1446e940c(local_12c,&local_88);
          local_88 = L"AnimDataModel";
          uStack_80 = 0xd;
          FUN_1446e940c(local_130,&local_88);
          FUN_140208bae(&local_88,local_130,local_12c,
                        L"Playable length {0} has been updated according to number of frames {1} and frame-rate {2}, new length: {3}"
                       );
          local_138 = local_c8;
          FUN_1478e34ea(&local_88,local_118,local_f8,local_e8);
          if (local_88 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_88 + 0x10))();
          }
          plVar1 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_120 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar3 = (int *)((longlong)plVar1 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          plVar1 = plStack_100;
          if (plStack_100 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_100 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_100)(plStack_100);
              LOCK();
              piVar3 = (int *)((longlong)plVar1 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          plVar1 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_d0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar3 = (int *)((longlong)plVar1 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
      }
      uVar8 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x1a0))(param_1 + 0x28);
      FUN_1478f98f6(uVar8,0x12,&local_88);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478e33f2 FUN_1478e33f2 body=246 status=ok
// SIG undefined FUN_1478e33f2(void)

void FUN_1478e33f2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_19 = '\b';
  local_28 = FUN_14636cd54();
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
  }
  local_30 = param_2;
  (**(code **)(*plVar3 + 0x180))(plVar3,&local_19,&local_30);
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  FUN_1478f99ec(*(undefined8 *)(param_1 + 0x18),&local_19,uVar4,&local_30);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (0 < *(int *)(lVar1 + 8)) {
    local_40 = *(longlong *)(param_1 + 8);
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_38 = *(undefined8 *)(param_1 + 0x10);
    FUN_147856f42(lVar1,local_19,&local_40,&local_30);
  }
  if (local_19 == '\0') {
    iVar2 = 1;
  }
  else {
    if (local_19 != '\x01') goto LAB_1478e34c4;
    iVar2 = -1;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar2;
LAB_1478e34c4:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e34ea FUN_1478e34ea body=700 status=ok
// SIG undefined FUN_1478e34ea(void)

void FUN_1478e34ea(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148;
  undefined4 local_140;
  longlong *local_138;
  undefined4 local_130;
  longlong *local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined4 local_110;
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 auStack_c0 [2];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_118 = (longlong *)*param_5;
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 8))();
  }
  local_110 = (undefined4)param_5[1];
  local_128 = (longlong *)*param_4;
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 8))();
  }
  local_120 = (undefined4)param_4[1];
  local_138 = (longlong *)*param_3;
  if (local_138 != (longlong *)0x0) {
    (**(code **)(*local_138 + 8))();
  }
  local_130 = (undefined4)param_3[1];
  local_148 = (longlong *)*param_2;
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 8))();
  }
  local_140 = (undefined4)param_2[1];
  FUN_14023409e(&local_158,param_1,1);
  local_c8._0_4_ = 4;
  FUN_14023423e(local_b8,&local_148);
  local_a8 = 4;
  FUN_14023423e(local_98,&local_138);
  local_88 = 4;
  FUN_14023423e(local_78,&local_128);
  local_68 = 4;
  FUN_14023423e(local_58,&local_118);
  local_e8 = &local_c8;
  local_e0 = &local_48;
  FUN_14010d304(&local_d8);
  local_f8 = local_158;
  local_f0 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_150 + 1) = (int)local_150[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_108,&local_f8,&local_d8);
  FUN_14007f2db(local_d8,local_d0);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x70;
  do {
    if (*(longlong **)((longlong)&local_c8 + lVar3) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_c8 + lVar3) + 0x10))();
      *(undefined8 *)((longlong)&local_c8 + lVar3) = 0;
      *(undefined4 *)((longlong)auStack_c0 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != -0x10);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_150 + 0x10))(local_150);
      }
    }
  }
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))();
  }
  if (local_138 != (longlong *)0x0) {
    (**(code **)(*local_138 + 0x10))();
  }
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))();
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x10))();
  }
  if ((longlong *)*param_5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_5 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e37a8 FUN_1478e37a8 body=75 status=ok
// SIG undefined FUN_1478e37a8(void)

void FUN_1478e37a8(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x1a0))(param_1 + 0x28);
  FUN_1478f98f6(uVar1,0x12,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e3886 FUN_1478e3886 body=54 status=ok
// SIG undefined FUN_1478e3886(void)

undefined8 FUN_1478e3886(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x70))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478e38ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,lVar1,*(code **)(*param_1 + 0x80));
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 1478e3910 FUN_1478e3910 body=43 status=ok
// SIG undefined FUN_1478e3910(void)

longlong FUN_1478e3910(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1402576f0();
  lVar2 = FUN_1402ab8a4(*(undefined8 *)(param_1 + -8),uVar1,0);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + -8);
  }
  return lVar2;
}



// FUNCTION 1478e393c FUN_1478e393c body=96 status=ok
// SIG undefined FUN_1478e393c(void)

void FUN_1478e393c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + 0x34 + lVar5);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
      lVar5 = lVar5 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar5);
  }
  return;
}



// FUNCTION 1478e399c FUN_1478e399c body=273 status=ok
// SIG undefined FUN_1478e399c(void)

undefined1 (*) [16]
FUN_1478e399c(longlong *param_1,undefined1 (*param_2) [16],longlong param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  double dVar19;
  
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x30))();
  if ((longlong)*(int *)(puVar15 + 1) != 0) {
    plVar16 = (longlong *)*puVar15;
    lVar17 = (longlong)*(int *)(puVar15 + 1) << 6;
    do {
      if (*(longlong *)((longlong)plVar16 + 0x34) == param_3) {
        if (plVar16 != (longlong *)0x0) {
          iVar8 = *param_4;
          lVar17 = (longlong)iVar8;
          if ((((-1 < lVar17) && (iVar8 < (int)plVar16[1])) && (iVar8 < (int)plVar16[3])) &&
             (iVar8 < (int)plVar16[5])) {
            lVar9 = plVar16[4];
            lVar14 = lVar17 * 0xc;
            fVar1 = *(float *)(lVar9 + 8 + lVar14);
            fVar2 = *(float *)(lVar9 + 4 + lVar14);
            fVar3 = *(float *)(lVar9 + lVar14);
            lVar9 = *plVar16;
            fVar4 = *(float *)(lVar9 + 8 + lVar14);
            fVar5 = *(float *)(lVar9 + 4 + lVar14);
            lVar10 = plVar16[2];
            fVar6 = *(float *)(lVar9 + lVar14);
            lVar17 = lVar17 * 0x10;
            dVar12 = (double)*(float *)(lVar10 + 0xc + lVar17);
            fVar7 = *(float *)(lVar10 + 8 + lVar17);
            dVar19 = (double)*(float *)(lVar10 + 4 + lVar17);
            auVar11._8_4_ = SUB84(dVar19,0);
            auVar11._0_8_ = (double)*(float *)(lVar10 + lVar17);
            auVar11._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
            *param_2 = auVar11;
            auVar13._8_4_ = SUB84(dVar12,0);
            auVar13._0_8_ = (double)fVar7;
            auVar13._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            param_2[1] = auVar13;
            *(double *)param_2[2] = (double)fVar6;
            *(double *)(param_2[2] + 8) = (double)fVar5;
            *(double *)param_2[3] = (double)fVar4;
            *(undefined8 *)(param_2[3] + 8) = 0;
            *(double *)param_2[4] = (double)fVar3;
            *(double *)(param_2[4] + 8) = (double)fVar2;
            *(double *)param_2[5] = (double)fVar1;
            *(undefined8 *)(param_2[5] + 8) = 0;
            return param_2;
          }
        }
        break;
      }
      plVar16 = plVar16 + 8;
      lVar17 = lVar17 + -0x40;
    } while (lVar17 != 0);
  }
  puVar15 = &DAT_14c846480;
  pauVar18 = param_2;
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *(undefined8 *)*pauVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    pauVar18 = (undefined1 (*) [16])(*pauVar18 + 8);
  }
  return param_2;
}



// FUNCTION 1478e3aae FUN_1478e3aae body=253 status=ok
// SIG undefined FUN_1478e3aae(void)

void FUN_1478e3aae(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar4 = *plVar1;
    lVar2 = (longlong)(int)plVar1[1] << 6;
    do {
      if (*(longlong *)(lVar4 + 0x34) == param_2) {
        FUN_140ee84a4(param_4,(int)param_3[1],1);
        if ((lVar4 != 0) && (0 < (int)param_3[1])) {
          lVar2 = 0;
          lVar4 = 0;
          lVar7 = 0;
          do {
            (**(code **)(*param_1 + 0x40))(param_1,local_a8,param_2,*param_3 + lVar2);
            puVar5 = local_a8;
            puVar6 = (undefined8 *)(*param_4 + lVar4);
            for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            lVar7 = lVar7 + 1;
            lVar4 = lVar4 + 0x60;
            lVar2 = lVar2 + 4;
          } while (lVar7 < (int)param_3[1]);
        }
        if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      lVar4 = lVar4 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1478e3bcc FUN_1478e3bcc body=244 status=ok
// SIG undefined FUN_1478e3bcc(void)

void FUN_1478e3bcc(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar4 = *plVar1;
    lVar2 = (longlong)(int)plVar1[1] << 6;
    do {
      if (*(longlong *)(lVar4 + 0x34) == param_2) {
        FUN_140ee84a4(param_3,(int)param_1[0xb],1);
        if ((lVar4 != 0) && (0 < (int)param_1[0xb])) {
          lVar4 = 0;
          lVar2 = 0;
          do {
            local_ac = (undefined4)lVar2;
            (**(code **)(*param_1 + 0x40))(param_1,local_a8,param_2,&local_ac);
            puVar5 = local_a8;
            puVar6 = (undefined8 *)(*param_3 + lVar4);
            for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            lVar2 = lVar2 + 1;
            lVar4 = lVar4 + 0x60;
          } while (lVar2 < (int)param_1[0xb]);
        }
        if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      lVar4 = lVar4 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1478e3ce2 FUN_1478e3ce2 body=187 status=ok
// SIG undefined FUN_1478e3ce2(void)

void FUN_1478e3ce2(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140ee84a4(param_4,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    lVar5 = 0;
    do {
      (**(code **)(*param_1 + 0x40))(param_1,local_a8,*(undefined8 *)(*param_2 + lVar5 * 8),param_3)
      ;
      puVar3 = local_a8;
      puVar4 = (undefined8 *)(*param_4 + lVar2);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar5 = lVar5 + 1;
      lVar2 = lVar2 + 0x60;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e3d9e FUN_1478e3d9e body=825 status=ok
// SIG undefined FUN_1478e3d9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_1478e3d9e(longlong *param_1,ulonglong *param_2,undefined8 param_3,int *param_4,char *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar17;
  double dVar18;
  undefined1 auVar16 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_178 [44];
  int local_14c;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  float fVar27;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  fVar1 = (float)param_4[1];
  fVar27 = fVar1;
  if (*param_5 == '\x01') {
    auVar28 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)(fVar1 + 0.5)),1);
    fVar27 = auVar28._0_4_;
  }
  if (ABS(fVar27 + -1.0) <= 1e-08) {
    local_e8._0_4_ = *param_4 + (uint)(fVar1 != 0.0);
  }
  else {
    if (1e-08 < ABS(fVar27)) {
      local_148._0_4_ = *param_4;
      (**(code **)(*param_1 + 0x40))(param_1,local_e8,param_3);
      local_14c = *param_4 + (uint)((float)param_4[1] != 0.0);
      (**(code **)(*param_1 + 0x40))(param_1,&local_148,param_3);
      auVar28 = _DAT_149934d80;
      if (ABS(fVar27) <= 1e-05) {
        puVar6 = (ulonglong *)local_e8;
      }
      else {
        if (1e-05 < ABS(fVar27 + -1.0)) {
          dVar19 = (double)fVar27;
          dVar20 = (double)fVar27;
          dVar14 = (double)DAT_149934d80 - dVar19;
          dVar17 = DAT_149934d80._8_8_ - dVar20;
          dVar15 = dStack_110 * dVar20 + dStack_b0 * dVar17;
          param_2[4] = (ulonglong)(local_128 * dVar19 + local_c8 * dVar14);
          param_2[5] = (ulonglong)(dStack_120 * dVar20 + dStack_c0 * dVar17);
          auVar23._8_4_ = SUB84(dVar15,0);
          auVar23._0_8_ = local_118 * dVar19 + local_b8 * dVar14;
          auVar23._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          *(undefined1 (*) [16])(param_2 + 6) = auVar23;
          dVar15 = dStack_f0 * dVar20 + dStack_90 * dVar17;
          param_2[8] = (ulonglong)(local_108 * dVar19 + local_a8 * dVar14);
          param_2[9] = (ulonglong)(dStack_100 * dVar20 + dStack_a0 * dVar17);
          auVar5._4_12_ = local_e8._4_12_;
          auVar5._0_4_ = local_e8._0_4_;
          dVar18 = local_138 * local_d8._0_8_ +
                   (double)CONCAT44(local_148._4_4_,(int)local_148) * auVar5._0_8_;
          dVar21 = dStack_130 * local_d8._8_8_ + dStack_140 * local_e8._8_8_;
          auVar4._8_4_ = SUB84(dVar21,0);
          auVar4._0_8_ = dVar18;
          auVar4._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          auVar26._8_4_ = SUB84(dVar15,0);
          auVar26._0_8_ = local_f8 * dVar19 + local_98 * dVar14;
          auVar26._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          *(undefined1 (*) [16])(param_2 + 10) = auVar26;
          lVar8 = -(ulonglong)(0.0 <= dVar18 + dVar21);
          lVar9 = -(ulonglong)(0.0 <= dVar18 + auVar4._8_8_);
          uVar11 = (undefined4)lVar9;
          uVar12 = (undefined4)((ulonglong)lVar9 >> 0x20);
          auVar22._0_8_ = 0.0 - auVar5._0_8_;
          auVar22._8_8_ = 0.0 - local_e8._8_8_;
          auVar25._0_8_ = 0.0 - local_d8._0_8_;
          auVar25._8_8_ = 0.0 - local_d8._8_8_;
          auVar2._8_4_ = uVar11;
          auVar2._0_8_ = lVar8;
          auVar2._12_4_ = uVar12;
          auVar23 = blendvpd(auVar22,auVar5,auVar2);
          auVar3._8_4_ = uVar11;
          auVar3._0_8_ = lVar8;
          auVar3._12_4_ = uVar12;
          auVar26 = blendvpd(auVar25,local_d8,auVar3);
          dVar21 = auVar23._0_8_ * dVar14 +
                   (double)CONCAT44(local_148._4_4_,(int)local_148) * dVar19;
          dVar24 = auVar23._8_8_ * dVar17 + dStack_140 * dVar20;
          dVar14 = auVar26._0_8_ * dVar14 + local_138 * dVar19;
          dVar17 = auVar26._8_8_ * dVar17 + dStack_130 * dVar20;
          dVar15 = dVar14 * dVar14 + dVar21 * dVar21;
          dVar18 = dVar17 * dVar17 + dVar24 * dVar24;
          auVar16._0_8_ = dVar15 + dVar18;
          auVar16._8_8_ = dVar15 + dVar18;
          uVar10 = -(ulonglong)(1e-08 <= auVar16._8_8_);
          auVar23 = sqrtpd(auVar16,auVar16);
          auVar23 = divpd(auVar28,auVar23);
          auVar13._0_8_ = auVar23._0_8_ * dVar14;
          auVar13._8_8_ = auVar23._8_8_ * dVar17;
          auVar28._8_4_ = (int)uVar10;
          auVar28._0_8_ = -(ulonglong)(1e-08 <= auVar16._0_8_);
          auVar28._12_4_ = (int)(uVar10 >> 0x20);
          auVar28 = blendvpd(_DAT_149935300,auVar13,auVar28);
          *param_2 = (ulonglong)(dVar21 * auVar23._0_8_) & -(ulonglong)(1e-08 <= auVar16._0_8_);
          param_2[1] = (ulonglong)(dVar24 * auVar23._8_8_) & uVar10;
          *(undefined1 (*) [16])(param_2 + 2) = auVar28;
          goto LAB_1478e4057;
        }
        puVar6 = &local_148;
      }
      puVar7 = param_2;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_1478e4057;
    }
    local_e8._0_4_ = *param_4;
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
LAB_1478e4057:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478e4110 FUN_1478e4110 body=286 status=ok
// SIG undefined FUN_1478e4110(void)

void FUN_1478e4110(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_1;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x70))(param_1,*param_2);
  if (plVar6 != (longlong *)0x0) {
    iVar5 = (**(code **)(*local_68 + 0x20))();
    if (0 < iVar5) {
      local_60 = param_3 + 4;
      lVar9 = 0;
      lVar11 = 0;
      lVar10 = 0;
      do {
        local_4c = (undefined4)lVar10;
        local_50 = *(undefined4 *)(plVar6[4] + 8 + lVar11);
        local_58 = *(undefined8 *)(plVar6[4] + lVar11);
        lVar1 = plVar6[2];
        lVar2 = *plVar6;
        pcVar3 = (code *)*param_3;
        plVar8 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        local_78 = &local_4c;
        cVar4 = (*pcVar3)(uVar7,lVar2 + lVar11,lVar1 + lVar9,&local_58);
        if (cVar4 == '\0') break;
        lVar10 = lVar10 + 1;
        iVar5 = (**(code **)(*local_68 + 0x20))();
        lVar11 = lVar11 + 0xc;
        lVar9 = lVar9 + 0x10;
      } while (lVar10 < iVar5);
    }
  }
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e4230 FUN_1478e4230 body=207 status=ok
// SIG undefined FUN_1478e4230(void)

undefined8 * FUN_1478e4230(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(param_1 + 0x98);
  if (*(undefined8 **)(param_1 + 0x98) == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    local_30 = param_1 + -0x28;
    local_28 = param_1;
    if ((local_30 == 0) || (DAT_14c950c29 == '\0')) {
      if (local_30 == 0) {
        local_28 = 0;
      }
    }
    else {
      FUN_1456cec3c(local_30);
    }
    FUN_1478e4300(puVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    puVar3 = puVar1;
    if ((puVar1 != puVar2) &&
       (*(undefined8 **)(param_1 + 0x98) = puVar2, puVar3 = puVar2, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
      puVar3 = *(undefined8 **)(param_1 + 0x98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 1478e4300 FUN_1478e4300 body=127 status=ok
// SIG undefined FUN_1478e4300(void)

undefined8 * FUN_1478e4300(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a7af460;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = (longlong *)param_2[1];
  param_1[2] = plVar3;
  if (*param_2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  uVar2 = (**(code **)(*plVar3 + 0x150))();
  param_1[3] = uVar2;
  if (*param_2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)param_2[1];
  }
  uVar2 = (**(code **)(*plVar3 + 0x178))();
  param_1[4] = uVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1478e43f2 FUN_1478e43f2 body=169 status=ok
// SIG undefined FUN_1478e43f2(void)

longlong FUN_1478e43f2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = (char)param_2[1];
  if (cVar1 != '\x03' && *param_2 != 0) {
    if (cVar1 == '\x02') {
      if (((*(char *)((longlong)param_2 + 9) != '\x03') &&
          (*(char *)((longlong)param_2 + 10) != '\x03')) &&
         (lVar2 = (**(code **)(*param_1 + 0xe8))(param_1,param_2), lVar2 != 0)) {
        cVar1 = *(char *)((longlong)param_2 + 9);
        if (cVar1 == '\x02') {
          lVar2 = lVar2 + 0x330;
        }
        else if (cVar1 == '\x01') {
          lVar2 = lVar2 + 0x1a0;
        }
        else if (cVar1 == '\0') {
          lVar2 = lVar2 + 0x10;
        }
        else {
          lVar2 = 0;
        }
        lVar3 = lVar2 + 0x10 + (ulonglong)*(byte *)((longlong)param_2 + 10) * 0x80;
        goto LAB_1478e4432;
      }
    }
    else if (cVar1 == '\0') {
      lVar2 = (**(code **)(*param_1 + 0xe0))(param_1,param_2);
      lVar3 = lVar2 + 0x10;
LAB_1478e4432:
      if (lVar2 != 0) {
        return lVar3;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1478e4532 FUN_1478e4532 body=113 status=ok
// SIG undefined FUN_1478e4532(void)

void FUN_1478e4532(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x80);
    lVar4 = (longlong)*(int *)(param_1 + 0x88) * 0xf0;
    do {
      if (*(longlong *)(lVar3 + 8) == lVar2) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1478fb6b4(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
      }
      lVar3 = lVar3 + 0xf0;
      lVar4 = lVar4 + -0xf0;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1478e45b2 FUN_1478e45b2 body=245 status=ok
// SIG undefined FUN_1478e45b2(void)

longlong * FUN_1478e45b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [48];
  longlong local_70;
  longlong local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1478e46a8(local_a0);
  FUN_1478e46a8(&local_60,local_a0);
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x80);
    lVar2 = (longlong)*(int *)(param_1 + 0x88) * 0xf0;
    do {
      lVar1 = local_48;
      if (((*plVar3 == local_60) && ((int)plVar3[2] == local_50)) && (plVar3[1] == local_58)) {
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_48);
        }
        if (plVar3[3] == lVar1) goto LAB_1478e465f;
      }
      plVar3 = plVar3 + 0x1e;
      lVar2 = lVar2 + -0xf0;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1478e465f:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1478e46a8 FUN_1478e46a8 body=146 status=ok
// SIG undefined FUN_1478e46a8(void)

undefined4 * FUN_1478e46a8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1[4] = param_2[4];
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  _Src = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1478e4760 FUN_1478e4760 body=1035 status=ok
// SIG undefined FUN_1478e4760(void)

uint * FUN_1478e4760(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_148 [40];
  uint *local_120;
  longlong local_118;
  undefined8 local_110;
  undefined1 **local_108;
  undefined1 **local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  undefined1 local_d0 [136];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = param_2;
  FUN_1427879d8(local_d0);
  iVar1 = *(int *)(param_1 + 0x40);
  local_f8 = local_d0;
  local_f0 = local_d0;
  if ((longlong)iVar1 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x38);
    lVar13 = 0;
    do {
      FUN_140c54e34(local_f0,*(undefined8 *)(lVar12 + lVar13),*(int *)(lVar12 + 8 + lVar13) * 0xc);
      FUN_140c54e34(local_f0,*(undefined8 *)(lVar12 + 0x10 + lVar13),
                    *(int *)(lVar12 + 0x18 + lVar13) << 4);
      FUN_140c54e34(local_f0,*(undefined8 *)(lVar12 + 0x20 + lVar13),
                    *(int *)(lVar12 + 0x28 + lVar13) * 0xc);
      lVar13 = lVar13 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar13);
  }
  local_108 = &local_f8;
  local_100 = &local_f0;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    puVar9 = puVar7 + (longlong)*(int *)(param_1 + 0x68) * 0x12;
    do {
      local_110 = *puVar7;
      FUN_1400021e4(&local_110,&local_e8);
      FUN_140c54e34(local_f0,CONCAT44(uStack_e4,local_e8),local_e0 * 2);
      FUN_1433d343a(&local_108,puVar7 + 2);
      if (CONCAT44(uStack_e4,local_e8) != 0) {
        FUN_1400020a8();
      }
      puVar7 = puVar7 + 0x12;
    } while (puVar7 != puVar9);
  }
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x70);
    puVar9 = puVar7 + (longlong)*(int *)(param_1 + 0x78) * 0x98;
    do {
      local_110 = *puVar7;
      FUN_1400021e4(&local_110,&local_e8);
      FUN_140c54e34(local_f0,CONCAT44(uStack_e4,local_e8),local_e0 * 2);
      lVar12 = 0x20;
      do {
        FUN_1433d343a(&local_108,(longlong)puVar7 + lVar12);
        lVar12 = lVar12 + 0x80;
      } while (lVar12 != 0x1a0);
      lVar12 = 0x1b0;
      do {
        FUN_1433d343a(&local_108,(longlong)puVar7 + lVar12);
        lVar12 = lVar12 + 0x80;
      } while (lVar12 != 0x330);
      lVar12 = 0x340;
      do {
        FUN_1433d343a(&local_108,(longlong)puVar7 + lVar12);
        lVar12 = lVar12 + 0x80;
      } while (lVar12 != 0x4c0);
      if (CONCAT44(uStack_e4,local_e8) != 0) {
        FUN_1400020a8();
      }
      puVar7 = puVar7 + 0x98;
    } while (puVar7 != puVar9);
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x80);
    local_118 = (longlong)*(int *)(param_1 + 0x88) * 0xf0 + lVar12;
    do {
      FUN_1400021e4(lVar12,&local_e8);
      FUN_140c54e34(local_f0,CONCAT44(uStack_e4,local_e8),local_e0 * 2);
      if (CONCAT44(uStack_e4,local_e8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(lVar12 + 8,&local_e8);
      FUN_140c54e34(local_f0,CONCAT44(uStack_e4,local_e8),local_e0 * 2);
      if (CONCAT44(uStack_e4,local_e8) != 0) {
        FUN_1400020a8();
      }
      local_e8 = *(uint *)(lVar12 + 0x10);
      FUN_140c54e34(local_f8,&local_e8,4);
      local_110 = *(undefined8 *)(*(longlong *)(lVar12 + 0x18) + 0x18);
      FUN_1400021e4(&local_110,&local_e8);
      FUN_140c54e34(local_f0,CONCAT44(uStack_e4,local_e8),local_e0 * 2);
      if (CONCAT44(uStack_e4,local_e8) != 0) {
        FUN_1400020a8();
      }
      plVar2 = *(longlong **)(lVar12 + 0x18);
      lVar13 = plVar2[0xb];
      (**(code **)(*(longlong *)plVar2[0x17] + 8))((longlong *)plVar2[0x17],&local_e8);
      uVar3 = local_dc;
      plVar4 = (longlong *)FUN_1478b1048(lVar12 + 0x40);
      if ((longlong)(int)plVar4[1] != 0) {
        lVar8 = *plVar4;
        lVar10 = (longlong)(int)plVar4[1] * 0x18;
        do {
          FUN_140c54e34(local_f8,lVar8,4);
          if ((uVar3 & 0x100000) == 0) {
            puVar5 = local_d0;
            puVar6 = *(uint **)(lVar8 + 8);
            uVar11 = (int)lVar13;
          }
          else {
            local_e8 = (**(code **)(*plVar2 + 0x360))(plVar2,*(undefined8 *)(lVar8 + 8));
            uVar11 = 4;
            puVar5 = local_f8;
            puVar6 = &local_e8;
          }
          FUN_140c54e34(puVar5,puVar6,uVar11);
          lVar8 = lVar8 + 0x18;
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != 0);
      }
      lVar12 = lVar12 + 0xf0;
    } while (lVar12 != local_118);
  }
  FUN_140c54d7a(local_d0);
  FUN_142787a10(local_d0,&local_e8);
  puVar6 = local_120;
  *local_120 = local_d8 ^ local_e8;
  *(ulonglong *)(local_120 + 1) = CONCAT44(local_e0,uStack_e4);
  local_120[3] = local_dc;
  FUN_1427879f6(local_d0);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e4b9a FUN_1478e4b9a body=405 status=ok
// SIG undefined FUN_1478e4b9a(void)

void FUN_1478e4b9a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_70;
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_2 + 0x18);
  (**(code **)(*param_3 + 0x30))(param_3);
  local_70 = (ulonglong)uVar1;
  if (3 < (int)uVar1) {
    lVar4 = *(longlong *)(param_2 + 0x38);
    local_64 = *(int *)(param_2 + 0x28);
    local_70 = (ulonglong)(uVar1 >> 2);
    lVar5 = 0xc;
    uVar7 = 0;
    do {
      lVar6 = *(longlong *)(param_2 + 0x10);
      iVar2 = *(int *)(lVar6 + -4 + lVar5);
      local_78 = *(undefined4 *)(lVar6 + -8 + lVar5);
      uVar3 = *(undefined4 *)(lVar6 + lVar5);
      local_50 = *(int *)(lVar6 + -0xc + lVar5) + lVar4;
      (**(code **)(**(longlong **)(param_2 + 0x48) + 0x48))
                (*(longlong **)(param_2 + 0x48),param_2,param_3,&local_50);
      lVar6 = (longlong)(int)(((int)local_50 + 3U & 0xfffffffc) - (int)local_50);
      (**(code **)(*param_3 + 0x170))(param_3,local_50,lVar6);
      local_50 = local_50 + lVar6;
      local_58 = iVar2 + lVar4;
      local_78 = uVar3;
      (**(code **)(**(longlong **)(param_2 + 0x50) + 0x40))
                (*(longlong **)(param_2 + 0x50),param_2,param_3,&local_58);
      lVar6 = (longlong)(int)(((int)local_58 + 3U & 0xfffffffc) - (int)local_58);
      (**(code **)(*param_3 + 0x170))(param_3,local_58,lVar6);
      local_58 = local_58 + lVar6;
      if (0 < local_64) {
        lVar6 = (longlong)(int)uVar7 * (longlong)*(int *)(param_2 + 0x30);
        local_78 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 4 + lVar6 * 4);
        local_60 = *(int *)(*(longlong *)(param_2 + 0x20) + lVar6 * 4) + lVar4;
        (**(code **)(**(longlong **)(param_2 + 0x58) + 0x50))
                  (*(longlong **)(param_2 + 0x58),param_2,param_3,&local_60);
        (**(code **)(*param_3 + 0x170))
                  (param_3,local_60,
                   (longlong)(int)(((int)local_60 + 3U & 0xfffffffc) - (int)local_60));
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (local_70 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e4d30 FUN_1478e4d30 body=675 status=ok
// SIG undefined FUN_1478e4d30(void)

void FUN_1478e4d30(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  ulonglong local_88;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(uint *)(param_2 + 0x18);
  local_88 = (ulonglong)uVar1;
  if (3 < (int)uVar1) {
    lVar8 = *(longlong *)(param_2 + 0x38);
    local_78 = *(int *)(param_2 + 0x28);
    local_88 = (ulonglong)(uVar1 >> 2);
    uVar6 = 0;
    local_80 = (longlong)(int)param_3[0x12];
    local_70 = lVar8;
    do {
      lVar5 = *(longlong *)(param_2 + 0x10);
      lVar4 = uVar6 * 0x10;
      iVar9 = *(int *)(lVar5 + lVar4);
      uVar2 = *(undefined4 *)(lVar5 + 4 + lVar4);
      local_74 = *(undefined4 *)(lVar5 + 0xc + lVar4);
      lVar5 = (longlong)*(int *)(lVar5 + 8 + lVar4);
      param_3[0x12] = local_80 + iVar9;
      local_58 = iVar9 + lVar8;
      plVar3 = *(longlong **)(param_2 + 0x48);
      if (plVar3 == (longlong *)0x0) {
        FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimEncoding.cpp",0x117,
                      L"%i: unknown or unsupported animation format",*(undefined4 *)(param_2 + 0x60)
                     );
      }
      else {
        local_98 = uVar2;
        (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3,&local_58);
      }
      iVar9 = ((int)local_58 + 3U & 0xfffffffc) - (int)local_58;
      local_60 = CONCAT71(local_60._1_7_,0x55);
      if (0 < iVar9) {
        iVar7 = 0;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,&local_60,1);
          iVar7 = iVar7 + 1;
          lVar8 = local_70;
        } while (iVar7 < iVar9);
      }
      local_58 = iVar9 + local_58;
      param_3[0x12] = local_80 + lVar5;
      local_60 = lVar5 + lVar8;
      local_98 = local_74;
      (**(code **)(**(longlong **)(param_2 + 0x50) + 0x58))
                (*(longlong **)(param_2 + 0x50),param_2,param_3,&local_60);
      iVar9 = ((int)local_60 + 3U & 0xfffffffc) - (int)local_60;
      local_68 = CONCAT71(local_68._1_7_,0x55);
      if (0 < iVar9) {
        iVar7 = 0;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,&local_68,1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar9);
      }
      local_60 = iVar9 + local_60;
      if (0 < local_78) {
        lVar5 = (longlong)(int)uVar6 * (longlong)*(int *)(param_2 + 0x30);
        local_68 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar5 * 4);
        uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 4 + lVar5 * 4);
        param_3[0x12] = local_80 + local_68;
        local_68 = local_68 + lVar8;
        plVar3 = *(longlong **)(param_2 + 0x58);
        if (plVar3 == (longlong *)0x0) {
          FUN_140033559(".\\Runtime/Engine/Private/Animation/AnimEncoding.cpp",0x138,
                        L"%i: unknown or unsupported animation format",
                        *(undefined4 *)(param_2 + 0x60));
        }
        else {
          local_98 = uVar2;
          (**(code **)(*plVar3 + 0x68))(plVar3,param_2,param_3,&local_68);
        }
        iVar9 = ((int)local_68 + 3U & 0xfffffffc) - (int)local_68;
        local_49 = 0x55;
        lVar8 = local_70;
        if (0 < iVar9) {
          iVar7 = 0;
          do {
            (**(code **)(*param_3 + 0x170))(param_3,&local_49,1);
            iVar7 = iVar7 + 1;
            lVar8 = local_70;
          } while (iVar7 < iVar9);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478e4fd4 FUN_1478e4fd4 body=200 status=ok
// SIG undefined FUN_1478e4fd4(void)

void FUN_1478e4fd4(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 1;
  if (param_5 != 1) {
    iVar5 = *(int *)(param_2 + 0x68);
  }
  iVar1 = *(int *)(&DAT_14a7a41a0 + (longlong)iVar5 * 4);
  iVar3 = *(int *)(&DAT_14a7a41c0 + (longlong)iVar5 * 4);
  if (iVar5 == 3) {
    lVar2 = *param_4;
    iVar6 = 6;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,4);
      lVar2 = *param_4 + 4;
      *param_4 = lVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < param_5) {
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = 0;
    do {
      if (iVar5 != 6) {
        lVar2 = *param_4;
        iVar4 = iVar6;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,lVar2,(longlong)iVar1);
          lVar2 = *param_4 + (longlong)iVar1;
          *param_4 = lVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_5);
  }
  return;
}



// FUNCTION 1478e509c FUN_1478e509c body=200 status=ok
// SIG undefined FUN_1478e509c(void)

void FUN_1478e509c(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (param_5 != 1) {
    iVar5 = *(int *)(param_2 + 100);
  }
  iVar1 = (&DAT_14a7a4220)[iVar5];
  iVar3 = (&DAT_14a7a4240)[iVar5];
  if (iVar5 == 3) {
    lVar2 = *param_4;
    iVar6 = 6;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,4);
      lVar2 = *param_4 + 4;
      *param_4 = lVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < param_5) {
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = 0;
    do {
      if (iVar5 != 6) {
        lVar2 = *param_4;
        iVar4 = iVar6;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,lVar2,(longlong)iVar1);
          lVar2 = *param_4 + (longlong)iVar1;
          *param_4 = lVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_5);
  }
  return;
}



// FUNCTION 1478e5164 FUN_1478e5164 body=200 status=ok
// SIG undefined FUN_1478e5164(void)

void FUN_1478e5164(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (param_5 != 1) {
    iVar5 = *(int *)(param_2 + 0x6c);
  }
  iVar1 = (&DAT_14a7a4220)[iVar5];
  iVar3 = (&DAT_14a7a4240)[iVar5];
  if (iVar5 == 3) {
    lVar2 = *param_4;
    iVar6 = 6;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,4);
      lVar2 = *param_4 + 4;
      *param_4 = lVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < param_5) {
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = 0;
    do {
      if (iVar5 != 6) {
        lVar2 = *param_4;
        iVar4 = iVar6;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,lVar2,(longlong)iVar1);
          lVar2 = *param_4 + (longlong)iVar1;
          *param_4 = lVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_5);
  }
  return;
}



// FUNCTION 1478e522c FUN_1478e522c body=200 status=ok
// SIG undefined FUN_1478e522c(void)

void FUN_1478e522c(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 1;
  if (param_5 != 1) {
    iVar5 = *(int *)(param_2 + 0x68);
  }
  iVar1 = *(int *)(&DAT_14a7a41a0 + (longlong)iVar5 * 4);
  iVar3 = *(int *)(&DAT_14a7a41c0 + (longlong)iVar5 * 4);
  if (iVar5 == 3) {
    lVar2 = *param_4;
    iVar6 = 6;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,4);
      lVar2 = *param_4 + 4;
      *param_4 = lVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < param_5) {
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = 0;
    do {
      if (iVar5 != 6) {
        lVar2 = *param_4;
        iVar4 = iVar6;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,lVar2,(longlong)iVar1);
          lVar2 = *param_4 + (longlong)iVar1;
          *param_4 = lVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_5);
  }
  return;
}



// FUNCTION 1478e52f4 FUN_1478e52f4 body=200 status=ok
// SIG undefined FUN_1478e52f4(void)

void FUN_1478e52f4(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (param_5 != 1) {
    iVar5 = *(int *)(param_2 + 100);
  }
  iVar1 = (&DAT_14a7a4220)[iVar5];
  iVar3 = (&DAT_14a7a4240)[iVar5];
  if (iVar5 == 3) {
    lVar2 = *param_4;
    iVar6 = 6;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,4);
      lVar2 = *param_4 + 4;
      *param_4 = lVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < param_5) {
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = 0;
    do {
      if (iVar5 != 6) {
        lVar2 = *param_4;
        iVar4 = iVar6;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,lVar2,(longlong)iVar1);
          lVar2 = *param_4 + (longlong)iVar1;
          *param_4 = lVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_5);
  }
  return;
}



// FUNCTION 1478e53bc FUN_1478e53bc body=200 status=ok
// SIG undefined FUN_1478e53bc(void)

void FUN_1478e53bc(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (param_5 != 1) {
    iVar5 = *(int *)(param_2 + 0x6c);
  }
  iVar1 = (&DAT_14a7a4220)[iVar5];
  iVar3 = (&DAT_14a7a4240)[iVar5];
  if (iVar5 == 3) {
    lVar2 = *param_4;
    iVar6 = 6;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,4);
      lVar2 = *param_4 + 4;
      *param_4 = lVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < param_5) {
    iVar6 = 1;
    if (1 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = 0;
    do {
      if (iVar5 != 6) {
        lVar2 = *param_4;
        iVar4 = iVar6;
        do {
          (**(code **)(*param_3 + 0x170))(param_3,lVar2,(longlong)iVar1);
          lVar2 = *param_4 + (longlong)iVar1;
          *param_4 = lVar2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_5);
  }
  return;
}



// FUNCTION 1478e5484 FUN_1478e5484 body=611 status=ok
// SIG undefined FUN_1478e5484(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e5484(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar7 = *(int *)(lVar6 + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar4 = (float *)((longlong)*(int *)(lVar6 + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38));
  if (iVar7 == 1) {
    fVar10 = *pfVar4;
    auVar18 = ZEXT416((uint)fVar10);
    fVar12 = pfVar4[1];
    fVar11 = pfVar4[2];
    fVar10 = ((1.0 - fVar10 * fVar10) - fVar12 * fVar12) - fVar11 * fVar11;
    dVar13 = 0.0;
    if (0.0 < fVar10) {
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      dVar13 = (double)fVar10;
    }
  }
  else {
    iVar5 = 0;
    if (1 < iVar7) {
      fVar12 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if ((0.0 < fVar12) && (iVar5 = iVar7 + -1, fVar12 < 1.0)) {
        auVar18 = roundss(in_XMM3,ZEXT416((uint)((float)iVar5 * fVar12)),9);
        iVar7 = (int)auVar18._0_4_;
        if (iVar7 < iVar5) {
          fVar11 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar11 = (float)iVar5 * fVar12 - auVar18._0_4_;
          }
          iVar7 = iVar7 * 0x10;
          lVar6 = (longlong)iVar7;
          lVar8 = (longlong)(iVar7 + 0x10);
          pfVar1 = (float *)((longlong)pfVar4 + lVar6);
          pfVar2 = (float *)((longlong)pfVar4 + lVar8);
          uVar9 = -(uint)(0.0 <= *(float *)((longlong)pfVar4 + lVar6 + 0xc) *
                                 *(float *)((longlong)pfVar4 + lVar8 + 0xc) +
                                 *(float *)((longlong)pfVar4 + lVar6 + 8) *
                                 *(float *)((longlong)pfVar4 + lVar8 + 8) +
                                 *(float *)((longlong)pfVar4 + lVar6) *
                                 *(float *)((longlong)pfVar4 + lVar8) +
                                 *(float *)((longlong)pfVar4 + lVar6 + 4) *
                                 *(float *)((longlong)pfVar4 + lVar8 + 4));
          fVar12 = (float)(~uVar9 & (uint)-(1.0 - fVar11) | (uint)(1.0 - fVar11) & uVar9);
          fVar10 = fVar12 * *pfVar1 + fVar11 * *pfVar2;
          fVar14 = fVar12 * pfVar1[1] + fVar11 * pfVar2[1];
          fVar15 = fVar12 * pfVar1[2] + fVar11 * pfVar2[2];
          fVar16 = fVar12 * pfVar1[3] + fVar11 * pfVar2[3];
          fVar12 = fVar10 * fVar10 + fVar14 * fVar14;
          fVar11 = fVar15 * fVar15 + fVar16 * fVar16;
          auVar17._0_4_ = fVar11 + fVar12;
          auVar17._4_4_ = fVar11 + fVar12;
          auVar17._8_4_ = fVar12 + fVar11;
          auVar17._12_4_ = fVar12 + fVar11;
          auVar18 = sqrtps(auVar17,auVar17);
          auVar18 = divps(_DAT_1499314a0,auVar18);
          auVar19._0_4_ = auVar18._0_4_ * fVar10;
          auVar19._4_4_ = auVar18._4_4_ * fVar14;
          auVar19._8_4_ = auVar18._8_4_ * fVar15;
          auVar19._12_4_ = auVar18._12_4_ * fVar16;
          auVar18._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
          auVar18._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
          auVar18._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
          auVar18._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
          auVar18 = blendvps(_DAT_149932320,auVar19,auVar18);
          fVar12 = auVar18._4_4_;
          fVar11 = auVar18._8_4_;
          dVar13 = (double)auVar18._12_4_;
          goto LAB_1478e569f;
        }
      }
    }
    lVar6 = (longlong)iVar5;
    auVar18 = ZEXT416((uint)pfVar4[lVar6 * 4]);
    fVar12 = pfVar4[lVar6 * 4 + 1];
    fVar11 = pfVar4[lVar6 * 4 + 2];
    dVar13 = (double)pfVar4[lVar6 * 4 + 3];
  }
LAB_1478e569f:
  *param_2 = (double)auVar18._0_4_;
  param_2[1] = (double)fVar12;
  auVar3._8_4_ = SUB84(dVar13,0);
  auVar3._0_8_ = (double)fVar11;
  auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar3;
  return;
}



// FUNCTION 1478e56e8 FUN_1478e56e8 body=326 status=ok
// SIG undefined FUN_1478e56e8(void)

void FUN_1478e56e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar5 = *(int *)(lVar1 + 4 + (longlong)(param_4 << 2) * 4);
  lVar1 = (longlong)*(int *)(lVar1 + (longlong)(param_4 << 2) * 4) +
          *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38);
  iVar2 = 0;
  if (1 < iVar5) {
    fVar6 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if ((0.0 < fVar6) && (iVar2 = iVar5 + -1, fVar6 < 1.0)) {
      auVar8 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar2 * fVar6)),9);
      iVar5 = (int)auVar8._0_4_;
      if (iVar5 < iVar2) {
        fVar10 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar10 = (float)iVar2 * fVar6 - auVar8._0_4_;
        }
        lVar4 = (longlong)(iVar5 * 0xc);
        lVar3 = (longlong)(iVar5 * 0xc + 0xc);
        fVar7 = *(float *)(lVar1 + 4 + lVar4);
        fVar9 = *(float *)(lVar1 + 8 + lVar4);
        fVar9 = (*(float *)(lVar1 + 8 + lVar3) - fVar9) * fVar10 + fVar9;
        fVar7 = (*(float *)(lVar1 + 4 + lVar3) - fVar7) * fVar10 + fVar7;
        fVar6 = (*(float *)(lVar1 + lVar3) - *(float *)(lVar1 + lVar4)) * fVar10 +
                *(float *)(lVar1 + lVar4);
        goto LAB_1478e5809;
      }
    }
  }
  lVar3 = (longlong)iVar2;
  fVar6 = *(float *)(lVar1 + lVar3 * 0xc);
  fVar7 = *(float *)(lVar1 + 4 + lVar3 * 0xc);
  fVar9 = *(float *)(lVar1 + 8 + lVar3 * 0xc);
LAB_1478e5809:
  auVar8._8_4_ = SUB84((double)fVar7,0);
  auVar8._0_8_ = (double)fVar6;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar8;
  *(double *)(param_2 + 0x30) = (double)fVar9;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e582e FUN_1478e582e body=330 status=ok
// SIG undefined FUN_1478e582e(void)

void FUN_1478e582e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar3 = (longlong)param_4 * (longlong)*(int *)(lVar1 + 0x30);
  iVar5 = *(int *)(*(longlong *)(lVar1 + 0x20) + 4 + lVar3 * 4);
  lVar1 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + lVar3 * 4) + *(longlong *)(lVar1 + 0x38);
  iVar2 = 0;
  if (1 < iVar5) {
    fVar6 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if ((0.0 < fVar6) && (iVar2 = iVar5 + -1, fVar6 < 1.0)) {
      auVar8 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar2 * fVar6)),9);
      iVar5 = (int)auVar8._0_4_;
      if (iVar5 < iVar2) {
        fVar10 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar10 = (float)iVar2 * fVar6 - auVar8._0_4_;
        }
        lVar4 = (longlong)(iVar5 * 0xc);
        lVar3 = (longlong)(iVar5 * 0xc + 0xc);
        fVar7 = *(float *)(lVar1 + 4 + lVar4);
        fVar9 = *(float *)(lVar1 + 8 + lVar4);
        fVar9 = (*(float *)(lVar1 + 8 + lVar3) - fVar9) * fVar10 + fVar9;
        fVar7 = (*(float *)(lVar1 + 4 + lVar3) - fVar7) * fVar10 + fVar7;
        fVar6 = (*(float *)(lVar1 + lVar3) - *(float *)(lVar1 + lVar4)) * fVar10 +
                *(float *)(lVar1 + lVar4);
        goto LAB_1478e5953;
      }
    }
  }
  lVar3 = (longlong)iVar2;
  fVar6 = *(float *)(lVar1 + lVar3 * 0xc);
  fVar7 = *(float *)(lVar1 + 4 + lVar3 * 0xc);
  fVar9 = *(float *)(lVar1 + 8 + lVar3 * 0xc);
LAB_1478e5953:
  auVar8._8_4_ = SUB84((double)fVar7,0);
  auVar8._0_8_ = (double)fVar6;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar8;
  *(double *)(param_2 + 0x50) = (double)fVar9;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e5978 FUN_1478e5978 body=1027 status=ok
// SIG undefined FUN_1478e5978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e5978(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float _X;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar3 = *(int *)(lVar7 + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar10 = (float *)((longlong)*(int *)(lVar7 + 8 + (longlong)(param_4 << 2) * 4) +
                     *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38));
  if (iVar3 == 1) {
    fVar12 = *pfVar10;
    auVar16 = ZEXT416((uint)fVar12);
    fVar14 = pfVar10[1];
    fVar22 = pfVar10[2];
    fVar12 = ((1.0 - fVar12 * fVar12) - fVar14 * fVar14) - fVar22 * fVar22;
    dVar15 = 0.0;
    if (fVar12 <= 0.0) goto LAB_1478e5bab;
    if (fVar12 < 0.0) goto LAB_1478e5b9e;
LAB_1478e5a3b:
    fVar12 = SQRT(fVar12);
  }
  else {
    iVar6 = 0;
    if (1 < iVar3) {
      fVar14 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      if ((0.0 < fVar14) && (iVar6 = iVar3 + -1, fVar14 < 1.0)) {
        auVar16 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar6 * fVar14)),9);
        iVar8 = (int)auVar16._0_4_;
        iVar3 = iVar6;
        if (iVar8 < iVar6) {
          iVar3 = iVar8;
        }
        fVar22 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar22 = (float)iVar6 * fVar14 - auVar16._0_4_;
        }
        bVar4 = iVar8 < iVar6;
        iVar6 = iVar3;
        if (bVar4) {
          lVar7 = (longlong)(iVar3 * 0xc);
          lVar9 = (longlong)(iVar3 * 0xc + 0xc);
          fVar14 = *(float *)((longlong)pfVar10 + lVar7);
          fVar12 = *(float *)((longlong)pfVar10 + lVar7 + 4);
          fVar24 = *(float *)((longlong)pfVar10 + lVar7 + 8);
          fVar13 = ((1.0 - fVar14 * fVar14) - fVar12 * fVar12) - fVar24 * fVar24;
          fVar18 = 0.0;
          uVar19 = 0;
          uVar20 = 0;
          uVar21 = 0;
          auVar16 = ZEXT816(0);
          if (0.0 < fVar13) {
            if (fVar13 < 0.0) {
              fVar13 = sqrtf(fVar13);
              auVar16._4_4_ = extraout_XMM0_Db;
              auVar16._0_4_ = fVar13;
              auVar16._8_4_ = extraout_XMM0_Dc;
              auVar16._12_4_ = extraout_XMM0_Dd;
            }
            else {
              auVar16 = ZEXT416((uint)SQRT(fVar13));
            }
          }
          auVar23 = insertps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar12),0x10);
          auVar23 = insertps(auVar23,ZEXT416((uint)fVar24),0x20);
          auVar23 = insertps(auVar23,auVar16,0x30);
          fVar13 = *(float *)((longlong)pfVar10 + lVar9);
          fVar1 = *(float *)((longlong)pfVar10 + lVar9 + 4);
          fVar2 = *(float *)((longlong)pfVar10 + lVar9 + 8);
          _X = ((1.0 - fVar13 * fVar13) - fVar1 * fVar1) - fVar2 * fVar2;
          if (0.0 < _X) {
            if (_X < 0.0) {
              fVar18 = sqrtf(_X);
              uVar19 = extraout_XMM0_Db_00;
              uVar20 = extraout_XMM0_Dc_00;
              uVar21 = extraout_XMM0_Dd_00;
            }
            else {
              uVar19 = 0;
              uVar20 = 0;
              uVar21 = 0;
              fVar18 = SQRT(_X);
            }
          }
          auVar25 = insertps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar1),0x10);
          auVar26 = insertps(auVar25,ZEXT416((uint)fVar2),0x20);
          auVar25._4_4_ = uVar19;
          auVar25._0_4_ = fVar18;
          auVar25._8_4_ = uVar20;
          auVar25._12_4_ = uVar21;
          auVar25 = insertps(auVar26,auVar25,0x30);
          uVar11 = -(uint)(0.0 <= auVar16._0_4_ * fVar18 +
                                  fVar24 * fVar2 + fVar12 * fVar1 + fVar14 * fVar13);
          fVar14 = (float)(~uVar11 & (uint)-(1.0 - fVar22) | (uint)(1.0 - fVar22) & uVar11);
          fVar12 = auVar23._0_4_ * fVar14 + fVar22 * auVar25._0_4_;
          fVar24 = auVar23._4_4_ * fVar14 + fVar22 * auVar25._4_4_;
          fVar13 = auVar23._8_4_ * fVar14 + fVar22 * auVar25._8_4_;
          fVar18 = auVar23._12_4_ * fVar14 + fVar22 * auVar25._12_4_;
          fVar14 = fVar12 * fVar12 + fVar24 * fVar24;
          fVar22 = fVar13 * fVar13 + fVar18 * fVar18;
          auVar26._0_4_ = fVar22 + fVar14;
          auVar26._4_4_ = fVar22 + fVar14;
          auVar26._8_4_ = fVar14 + fVar22;
          auVar26._12_4_ = fVar14 + fVar22;
          auVar16 = sqrtps(auVar26,auVar26);
          auVar16 = divps(_DAT_1499314a0,auVar16);
          auVar17._0_4_ = auVar16._0_4_ * fVar12;
          auVar17._4_4_ = auVar16._4_4_ * fVar24;
          auVar17._8_4_ = auVar16._8_4_ * fVar13;
          auVar17._12_4_ = auVar16._12_4_ * fVar18;
          auVar23._4_4_ = -(uint)(1e-08 <= auVar26._4_4_);
          auVar23._0_4_ = -(uint)(1e-08 <= auVar26._0_4_);
          auVar23._8_4_ = -(uint)(1e-08 <= auVar26._8_4_);
          auVar23._12_4_ = -(uint)(1e-08 <= auVar26._12_4_);
          auVar16 = blendvps(_DAT_149932320,auVar17,auVar23);
          fVar14 = auVar16._4_4_;
          fVar22 = auVar16._8_4_;
          dVar15 = (double)auVar16._12_4_;
          goto LAB_1478e5bab;
        }
      }
    }
    lVar7 = (longlong)iVar6;
    fVar12 = pfVar10[lVar7 * 3];
    auVar16 = ZEXT416((uint)fVar12);
    fVar14 = pfVar10[lVar7 * 3 + 1];
    fVar22 = pfVar10[lVar7 * 3 + 2];
    fVar12 = ((1.0 - fVar12 * fVar12) - fVar14 * fVar14) - fVar22 * fVar22;
    dVar15 = 0.0;
    if (fVar12 <= 0.0) goto LAB_1478e5bab;
    if (0.0 <= fVar12) goto LAB_1478e5a3b;
LAB_1478e5b9e:
    fVar12 = sqrtf(fVar12);
  }
  dVar15 = (double)fVar12;
LAB_1478e5bab:
  *param_2 = (double)auVar16._0_4_;
  param_2[1] = (double)fVar14;
  auVar5._8_4_ = SUB84(dVar15,0);
  auVar5._0_8_ = (double)fVar22;
  auVar5._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar5;
  return;
}



// FUNCTION 1478e5d7c FUN_1478e5d7c body=326 status=ok
// SIG undefined FUN_1478e5d7c(void)

void FUN_1478e5d7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar5 = *(int *)(lVar1 + 4 + (longlong)(param_4 << 2) * 4);
  lVar1 = (longlong)*(int *)(lVar1 + (longlong)(param_4 << 2) * 4) +
          *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38);
  iVar2 = 0;
  if (1 < iVar5) {
    fVar6 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if ((0.0 < fVar6) && (iVar2 = iVar5 + -1, fVar6 < 1.0)) {
      auVar8 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar2 * fVar6)),9);
      iVar5 = (int)auVar8._0_4_;
      if (iVar5 < iVar2) {
        fVar10 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar10 = (float)iVar2 * fVar6 - auVar8._0_4_;
        }
        lVar4 = (longlong)(iVar5 * 0xc);
        lVar3 = (longlong)(iVar5 * 0xc + 0xc);
        fVar7 = *(float *)(lVar1 + 4 + lVar4);
        fVar9 = *(float *)(lVar1 + 8 + lVar4);
        fVar9 = (*(float *)(lVar1 + 8 + lVar3) - fVar9) * fVar10 + fVar9;
        fVar7 = (*(float *)(lVar1 + 4 + lVar3) - fVar7) * fVar10 + fVar7;
        fVar6 = (*(float *)(lVar1 + lVar3) - *(float *)(lVar1 + lVar4)) * fVar10 +
                *(float *)(lVar1 + lVar4);
        goto LAB_1478e5e9d;
      }
    }
  }
  lVar3 = (longlong)iVar2;
  fVar6 = *(float *)(lVar1 + lVar3 * 0xc);
  fVar7 = *(float *)(lVar1 + 4 + lVar3 * 0xc);
  fVar9 = *(float *)(lVar1 + 8 + lVar3 * 0xc);
LAB_1478e5e9d:
  auVar8._8_4_ = SUB84((double)fVar7,0);
  auVar8._0_8_ = (double)fVar6;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar8;
  *(double *)(param_2 + 0x30) = (double)fVar9;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e5ec2 FUN_1478e5ec2 body=330 status=ok
// SIG undefined FUN_1478e5ec2(void)

void FUN_1478e5ec2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar3 = (longlong)param_4 * (longlong)*(int *)(lVar1 + 0x30);
  iVar5 = *(int *)(*(longlong *)(lVar1 + 0x20) + 4 + lVar3 * 4);
  lVar1 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + lVar3 * 4) + *(longlong *)(lVar1 + 0x38);
  iVar2 = 0;
  if (1 < iVar5) {
    fVar6 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if ((0.0 < fVar6) && (iVar2 = iVar5 + -1, fVar6 < 1.0)) {
      auVar8 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar2 * fVar6)),9);
      iVar5 = (int)auVar8._0_4_;
      if (iVar5 < iVar2) {
        fVar10 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar10 = (float)iVar2 * fVar6 - auVar8._0_4_;
        }
        lVar4 = (longlong)(iVar5 * 0xc);
        lVar3 = (longlong)(iVar5 * 0xc + 0xc);
        fVar7 = *(float *)(lVar1 + 4 + lVar4);
        fVar9 = *(float *)(lVar1 + 8 + lVar4);
        fVar9 = (*(float *)(lVar1 + 8 + lVar3) - fVar9) * fVar10 + fVar9;
        fVar7 = (*(float *)(lVar1 + 4 + lVar3) - fVar7) * fVar10 + fVar7;
        fVar6 = (*(float *)(lVar1 + lVar3) - *(float *)(lVar1 + lVar4)) * fVar10 +
                *(float *)(lVar1 + lVar4);
        goto LAB_1478e5fe7;
      }
    }
  }
  lVar3 = (longlong)iVar2;
  fVar6 = *(float *)(lVar1 + lVar3 * 0xc);
  fVar7 = *(float *)(lVar1 + 4 + lVar3 * 0xc);
  fVar9 = *(float *)(lVar1 + 8 + lVar3 * 0xc);
LAB_1478e5fe7:
  auVar8._8_4_ = SUB84((double)fVar7,0);
  auVar8._0_8_ = (double)fVar6;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar8;
  *(double *)(param_2 + 0x50) = (double)fVar9;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e600c FUN_1478e600c body=1171 status=ok
// SIG undefined FUN_1478e600c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e600c(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float fVar27;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  float fVar30;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  float fVar31;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  float fVar32;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined1 auVar33 [16];
  
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar1 = *(int *)(lVar9 + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar12 = (float *)((longlong)*(int *)(lVar9 + 8 + (longlong)(param_4 << 2) * 4) +
                     *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38));
  if (iVar1 == 1) {
    fVar14 = *pfVar12;
    auVar18 = ZEXT416((uint)fVar14);
    fVar16 = pfVar12[1];
    fVar15 = pfVar12[2];
    fVar14 = ((1.0 - fVar14 * fVar14) - fVar16 * fVar16) - fVar15 * fVar15;
    dVar17 = 0.0;
    if (fVar14 <= 0.0) goto LAB_1478e62b8;
    if (fVar14 < 0.0) goto LAB_1478e62ab;
LAB_1478e60d3:
    fVar14 = SQRT(fVar14);
  }
  else {
    iVar8 = 0;
    if (1 < iVar1) {
      fVar16 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
               (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      if ((0.0 < fVar16) && (iVar8 = iVar1 + -1, fVar16 < 1.0)) {
        auVar18 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar8 * fVar16)),9);
        iVar10 = (int)auVar18._0_4_;
        iVar1 = iVar8;
        if (iVar10 < iVar8) {
          iVar1 = iVar10;
        }
        fVar15 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar15 = (float)iVar8 * fVar16 - auVar18._0_4_;
        }
        bVar2 = iVar10 < iVar8;
        iVar8 = iVar1;
        if (bVar2) {
          lVar9 = (longlong)(iVar1 * 6);
          lVar11 = (longlong)(iVar1 * 6 + 6);
          fVar14 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar9) - 0x7fff) / 32767.0;
          fVar31 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar9 + 2) - 0x7fff) / 32767.0;
          fVar30 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar9 + 4) - 0x7fff) / 32767.0;
          fVar16 = ((1.0 - fVar14 * fVar14) - fVar31 * fVar31) - fVar30 * fVar30;
          auVar28._4_4_ = unaff_XMM11_Db;
          auVar28._0_4_ = fVar14;
          auVar28._8_4_ = unaff_XMM11_Dc;
          auVar28._12_4_ = unaff_XMM11_Dd;
          auVar29._4_4_ = unaff_XMM13_Db;
          auVar29._0_4_ = fVar31;
          auVar29._8_4_ = unaff_XMM13_Dc;
          auVar29._12_4_ = unaff_XMM13_Dd;
          auVar29 = insertps(auVar28,auVar29,0x10);
          auVar18._4_4_ = unaff_XMM12_Db;
          auVar18._0_4_ = fVar30;
          auVar18._8_4_ = unaff_XMM12_Dc;
          auVar18._12_4_ = unaff_XMM12_Dd;
          auVar18 = insertps(auVar29,auVar18,0x20);
          auVar25 = ZEXT816(0);
          if (0.0 < fVar16) {
            if (fVar16 < 0.0) {
              fVar16 = sqrtf(fVar16);
              auVar25._4_4_ = extraout_XMM0_Db;
              auVar25._0_4_ = fVar16;
              auVar25._8_4_ = extraout_XMM0_Dc;
              auVar25._12_4_ = extraout_XMM0_Dd;
            }
            else {
              auVar25 = ZEXT416((uint)SQRT(fVar16));
            }
          }
          uVar24 = 0;
          uVar23 = 0;
          uVar22 = 0;
          fVar21 = 0.0;
          auVar18 = insertps(auVar18,auVar25,0x30);
          fVar26 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar11) - 0x7fff) / 32767.0;
          fVar32 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar11 + 2) - 0x7fff) / 32767.0;
          fVar27 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar11 + 4) - 0x7fff) / 32767.0;
          fVar16 = ((1.0 - fVar26 * fVar26) - fVar32 * fVar32) - fVar27 * fVar27;
          auVar33._4_4_ = unaff_XMM7_Db;
          auVar33._0_4_ = fVar26;
          auVar33._8_4_ = unaff_XMM7_Dc;
          auVar33._12_4_ = unaff_XMM7_Dd;
          auVar7._4_4_ = unaff_XMM14_Db;
          auVar7._0_4_ = fVar32;
          auVar7._8_4_ = unaff_XMM14_Dc;
          auVar7._12_4_ = unaff_XMM14_Dd;
          auVar29 = insertps(auVar33,auVar7,0x10);
          auVar6._4_4_ = unaff_XMM8_Db;
          auVar6._0_4_ = fVar27;
          auVar6._8_4_ = unaff_XMM8_Dc;
          auVar6._12_4_ = unaff_XMM8_Dd;
          auVar29 = insertps(auVar29,auVar6,0x20);
          if (0.0 < fVar16) {
            if (fVar16 < 0.0) {
              fVar21 = sqrtf(fVar16);
              uVar22 = extraout_XMM0_Db_00;
              uVar23 = extraout_XMM0_Dc_00;
              uVar24 = extraout_XMM0_Dd_00;
            }
            else {
              uVar22 = 0;
              uVar23 = 0;
              uVar24 = 0;
              fVar21 = SQRT(fVar16);
            }
          }
          auVar5._4_4_ = uVar22;
          auVar5._0_4_ = fVar21;
          auVar5._8_4_ = uVar23;
          auVar5._12_4_ = uVar24;
          auVar29 = insertps(auVar29,auVar5,0x30);
          uVar13 = -(uint)(0.0 <= auVar25._0_4_ * fVar21 +
                                  fVar30 * fVar27 + fVar14 * fVar26 + fVar31 * fVar32);
          fVar16 = (float)(~uVar13 & (uint)-(1.0 - fVar15) | (uint)(1.0 - fVar15) & uVar13);
          fVar14 = auVar18._0_4_ * fVar16 + fVar15 * auVar29._0_4_;
          fVar30 = auVar18._4_4_ * fVar16 + fVar15 * auVar29._4_4_;
          fVar31 = auVar18._8_4_ * fVar16 + fVar15 * auVar29._8_4_;
          fVar21 = auVar18._12_4_ * fVar16 + fVar15 * auVar29._12_4_;
          fVar16 = fVar14 * fVar14 + fVar30 * fVar30;
          fVar15 = fVar31 * fVar31 + fVar21 * fVar21;
          auVar19._0_4_ = fVar15 + fVar16;
          auVar19._4_4_ = fVar15 + fVar16;
          auVar19._8_4_ = fVar16 + fVar15;
          auVar19._12_4_ = fVar16 + fVar15;
          auVar18 = sqrtps(auVar19,auVar19);
          auVar18 = divps(_DAT_1499314a0,auVar18);
          auVar20._0_4_ = auVar18._0_4_ * fVar14;
          auVar20._4_4_ = auVar18._4_4_ * fVar30;
          auVar20._8_4_ = auVar18._8_4_ * fVar31;
          auVar20._12_4_ = auVar18._12_4_ * fVar21;
          auVar4._4_4_ = -(uint)(1e-08 <= auVar19._4_4_);
          auVar4._0_4_ = -(uint)(1e-08 <= auVar19._0_4_);
          auVar4._8_4_ = -(uint)(1e-08 <= auVar19._8_4_);
          auVar4._12_4_ = -(uint)(1e-08 <= auVar19._12_4_);
          auVar18 = blendvps(_DAT_149932320,auVar20,auVar4);
          fVar16 = auVar18._4_4_;
          fVar15 = auVar18._8_4_;
          dVar17 = (double)auVar18._12_4_;
          goto LAB_1478e62b8;
        }
      }
    }
    lVar9 = (longlong)iVar8;
    fVar14 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar9 * 6) - 0x7fff) / 32767.0;
    auVar18 = ZEXT416((uint)fVar14);
    fVar16 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar9 * 6 + 2) - 0x7fff) / 32767.0;
    fVar15 = (float)(int)(*(ushort *)((longlong)pfVar12 + lVar9 * 6 + 4) - 0x7fff) / 32767.0;
    fVar14 = ((1.0 - fVar14 * fVar14) - fVar16 * fVar16) - fVar15 * fVar15;
    dVar17 = 0.0;
    if (fVar14 <= 0.0) goto LAB_1478e62b8;
    if (0.0 <= fVar14) goto LAB_1478e60d3;
LAB_1478e62ab:
    fVar14 = sqrtf(fVar14);
  }
  dVar17 = (double)fVar14;
LAB_1478e62b8:
  *param_2 = (double)auVar18._0_4_;
  param_2[1] = (double)fVar16;
  auVar3._8_4_ = SUB84(dVar17,0);
  auVar3._0_8_ = (double)fVar15;
  auVar3._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar3;
  return;
}



// FUNCTION 1478e64a0 FUN_1478e64a0 body=555 status=ok
// SIG undefined FUN_1478e64a0(void)

void FUN_1478e64a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar4 = *(int *)(lVar1 + 4 + (longlong)(param_4 << 2) * 4);
  lVar1 = (longlong)*(int *)(lVar1 + (longlong)(param_4 << 2) * 4) +
          *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38);
  iVar2 = 0;
  if (1 < iVar4) {
    fVar7 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if ((0.0 < fVar7) && (iVar2 = iVar4 + -1, fVar7 < 1.0)) {
      auVar8 = roundss(in_XMM2,ZEXT416((uint)((float)iVar2 * fVar7)),9);
      iVar4 = (int)auVar8._0_4_;
      if (iVar4 < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = (float)iVar2 * fVar7 - auVar8._0_4_;
        }
        lVar5 = (longlong)(iVar4 * 0xc);
        lVar3 = (longlong)(iVar4 * 0xc + 0xc);
        fVar7 = ((float)(int)(*(ushort *)(lVar1 + lVar5) - 0x7fff) / 32767.0) * 128.0;
        fVar9 = ((float)(int)(*(ushort *)(lVar1 + 2 + lVar5) - 0x7fff) / 32767.0) * 128.0;
        fVar10 = ((float)(int)(*(ushort *)(lVar1 + 4 + lVar5) - 0x7fff) / 32767.0) * 128.0;
        fVar10 = (((float)(int)(*(ushort *)(lVar1 + 4 + lVar3) - 0x7fff) / 32767.0) * 128.0 - fVar10
                 ) * fVar6 + fVar10;
        fVar9 = (((float)(int)(*(ushort *)(lVar1 + 2 + lVar3) - 0x7fff) / 32767.0) * 128.0 - fVar9)
                * fVar6 + fVar9;
        fVar7 = (((float)(int)(*(ushort *)(lVar1 + lVar3) - 0x7fff) / 32767.0) * 128.0 - fVar7) *
                fVar6 + fVar7;
        goto LAB_1478e6695;
      }
    }
  }
  lVar3 = (longlong)iVar2;
  fVar7 = ((float)(int)(*(ushort *)(lVar1 + lVar3 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar9 = ((float)(int)(*(ushort *)(lVar1 + 2 + lVar3 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar10 = ((float)(int)(*(ushort *)(lVar1 + 4 + lVar3 * 0xc) - 0x7fff) / 32767.0) * 128.0;
LAB_1478e6695:
  auVar8._8_4_ = SUB84((double)fVar9,0);
  auVar8._0_8_ = (double)fVar7;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar8;
  *(double *)(param_2 + 0x30) = (double)fVar10;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e66cc FUN_1478e66cc body=559 status=ok
// SIG undefined FUN_1478e66cc(void)

void FUN_1478e66cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar3 = (longlong)param_4 * (longlong)*(int *)(lVar1 + 0x30);
  iVar4 = *(int *)(*(longlong *)(lVar1 + 0x20) + 4 + lVar3 * 4);
  lVar1 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + lVar3 * 4) + *(longlong *)(lVar1 + 0x38);
  iVar2 = 0;
  if (1 < iVar4) {
    fVar7 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if ((0.0 < fVar7) && (iVar2 = iVar4 + -1, fVar7 < 1.0)) {
      auVar8 = roundss(in_XMM2,ZEXT416((uint)((float)iVar2 * fVar7)),9);
      iVar4 = (int)auVar8._0_4_;
      if (iVar4 < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = (float)iVar2 * fVar7 - auVar8._0_4_;
        }
        lVar5 = (longlong)(iVar4 * 0xc);
        lVar3 = (longlong)(iVar4 * 0xc + 0xc);
        fVar7 = ((float)(int)(*(ushort *)(lVar1 + lVar5) - 0x7fff) / 32767.0) * 128.0;
        fVar9 = ((float)(int)(*(ushort *)(lVar1 + 2 + lVar5) - 0x7fff) / 32767.0) * 128.0;
        fVar10 = ((float)(int)(*(ushort *)(lVar1 + 4 + lVar5) - 0x7fff) / 32767.0) * 128.0;
        fVar10 = (((float)(int)(*(ushort *)(lVar1 + 4 + lVar3) - 0x7fff) / 32767.0) * 128.0 - fVar10
                 ) * fVar6 + fVar10;
        fVar9 = (((float)(int)(*(ushort *)(lVar1 + 2 + lVar3) - 0x7fff) / 32767.0) * 128.0 - fVar9)
                * fVar6 + fVar9;
        fVar7 = (((float)(int)(*(ushort *)(lVar1 + lVar3) - 0x7fff) / 32767.0) * 128.0 - fVar7) *
                fVar6 + fVar7;
        goto LAB_1478e68c5;
      }
    }
  }
  lVar3 = (longlong)iVar2;
  fVar7 = ((float)(int)(*(ushort *)(lVar1 + lVar3 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar9 = ((float)(int)(*(ushort *)(lVar1 + 2 + lVar3 * 0xc) - 0x7fff) / 32767.0) * 128.0;
  fVar10 = ((float)(int)(*(ushort *)(lVar1 + 4 + lVar3 * 0xc) - 0x7fff) / 32767.0) * 128.0;
LAB_1478e68c5:
  auVar8._8_4_ = SUB84((double)fVar9,0);
  auVar8._0_8_ = (double)fVar7;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar8;
  *(double *)(param_2 + 0x50) = (double)fVar10;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e68fc FUN_1478e68fc body=771 status=ok
// SIG undefined FUN_1478e68fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e68fc(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar4 = *(int *)(lVar1 + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar5 = (float *)((longlong)*(int *)(lVar1 + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38));
  if (iVar4 == 1) {
    fVar7 = *pfVar5;
    auVar9 = ZEXT416((uint)fVar7);
    fStack_84 = pfVar5[1];
    fStack_80 = pfVar5[2];
    fVar7 = ((1.0 - fVar7 * fVar7) - fStack_84 * fStack_84) - fStack_80 * fStack_80;
    dVar8 = 0.0;
    if (0.0 < fVar7) {
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      dVar8 = (double)fVar7;
    }
  }
  else {
    iVar3 = 0;
    if (1 < iVar4) {
      fVar7 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
              (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if ((0.0 < fVar7) && (iVar3 = iVar4 + -1, fVar7 < 1.0)) {
        auVar9 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar3 * fVar7)),9);
        iVar4 = (int)auVar9._0_4_;
        if (iVar4 < iVar3) {
          fVar17 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar17 = (float)iVar3 * fVar7 - auVar9._0_4_;
          }
          FUN_1478fb73a(&local_88,pfVar5,pfVar5 + 3,(longlong)pfVar5 + (longlong)(iVar4 * 4) + 0x18)
          ;
          fVar16 = fStack_7c;
          fVar15 = fStack_80;
          fVar14 = fStack_84;
          fVar7 = local_88;
          FUN_1478fb73a(&local_88,pfVar5,pfVar5 + 3,
                        (longlong)pfVar5 + (longlong)(iVar4 * 4 + 4) + 0x18);
          uVar6 = -(uint)(0.0 <= fStack_7c * fVar16 +
                                 fVar7 * local_88 + fVar14 * fStack_84 + fVar15 * fStack_80);
          fVar12 = (float)(~uVar6 & (uint)-(1.0 - fVar17) | (uint)(1.0 - fVar17) & uVar6);
          fVar13 = fVar12 * fVar7 + fVar17 * local_88;
          fVar14 = fVar12 * fVar14 + fVar17 * fStack_84;
          fVar15 = fVar12 * fVar15 + fVar17 * fStack_80;
          fVar16 = fVar12 * fVar16 + fVar17 * fStack_7c;
          fVar7 = fVar13 * fVar13 + fVar14 * fVar14;
          fVar17 = fVar15 * fVar15 + fVar16 * fVar16;
          auVar10._0_4_ = fVar17 + fVar7;
          auVar10._4_4_ = fVar17 + fVar7;
          auVar10._8_4_ = fVar7 + fVar17;
          auVar10._12_4_ = fVar7 + fVar17;
          auVar9 = sqrtps(auVar10,auVar10);
          auVar9 = divps(_DAT_1499314a0,auVar9);
          auVar11._0_4_ = auVar9._0_4_ * fVar13;
          auVar11._4_4_ = auVar9._4_4_ * fVar14;
          auVar11._8_4_ = auVar9._8_4_ * fVar15;
          auVar11._12_4_ = auVar9._12_4_ * fVar16;
          auVar9._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
          auVar9._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
          auVar9._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
          auVar9._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
          auVar9 = blendvps(_DAT_149932320,auVar11,auVar9);
          fStack_84 = auVar9._4_4_;
          fStack_80 = auVar9._8_4_;
          dVar8 = (double)auVar9._12_4_;
          goto LAB_1478e69b1;
        }
      }
    }
    FUN_1478fb73a(&local_88,pfVar5,pfVar5 + 3,(longlong)pfVar5 + (longlong)(iVar3 << 2) + 0x18);
    auVar9 = ZEXT416((uint)local_88);
    dVar8 = (double)fStack_7c;
  }
LAB_1478e69b1:
  *param_2 = (double)auVar9._0_4_;
  param_2[1] = (double)fStack_84;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = (double)fStack_80;
  auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar2;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e6c00 FUN_1478e6c00 body=759 status=ok
// SIG undefined FUN_1478e6c00(void)

void FUN_1478e6c00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar5 = *(int *)(lVar4 + 4 + (longlong)(param_4 << 2) * 4);
  pfVar2 = (float *)((longlong)*(int *)(lVar4 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38));
  iVar3 = 0;
  if (iVar5 < 2) {
LAB_1478e6e15:
    lVar4 = 0x18;
    if (iVar5 < 2) {
      lVar4 = 0;
    }
  }
  else {
    fVar7 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if ((fVar7 <= 0.0) || (iVar3 = iVar5 + -1, 1.0 <= fVar7)) goto LAB_1478e6e15;
    auVar8 = roundss(in_XMM2,ZEXT416((uint)((float)iVar3 * fVar7)),9);
    iVar5 = (int)auVar8._0_4_;
    lVar4 = 0x18;
    if (iVar5 < iVar3) {
      fVar6 = 0.0;
      if (*(char *)(param_3 + 4) != '\x01') {
        fVar6 = (float)iVar3 * fVar7 - auVar8._0_4_;
      }
      uVar1 = *(uint *)((longlong)pfVar2 + (longlong)(iVar5 * 4) + 0x18);
      fVar7 = ((float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0) * pfVar2[3] + *pfVar2;
      fVar9 = ((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar2[4] + pfVar2[1];
      fVar10 = ((float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0) * pfVar2[5] + pfVar2[2];
      uVar1 = *(uint *)((longlong)pfVar2 + (longlong)(iVar5 * 4 + 4) + 0x18);
      fVar10 = ((((float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0) * pfVar2[5] + pfVar2[2]) - fVar10)
               * fVar6 + fVar10;
      fVar9 = ((((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar2[4] + pfVar2[1]) -
              fVar9) * fVar6 + fVar9;
      fVar7 = ((((float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0) * pfVar2[3] + *pfVar2) - fVar7) *
              fVar6 + fVar7;
      goto LAB_1478e6ea7;
    }
  }
  uVar1 = *(uint *)((longlong)pfVar2 + (longlong)iVar3 * 4 + lVar4);
  fVar7 = ((float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0) * pfVar2[3] + *pfVar2;
  fVar9 = ((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar2[4] + pfVar2[1];
  fVar10 = ((float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0) * pfVar2[5] + pfVar2[2];
LAB_1478e6ea7:
  *(double *)(param_2 + 0x20) = (double)fVar7;
  *(double *)(param_2 + 0x28) = (double)fVar9;
  *(double *)(param_2 + 0x30) = (double)fVar10;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e6ef8 FUN_1478e6ef8 body=763 status=ok
// SIG undefined FUN_1478e6ef8(void)

void FUN_1478e6ef8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  lVar5 = *(longlong *)(param_3 + 0x10);
  lVar4 = (longlong)param_4 * (longlong)*(int *)(lVar5 + 0x30);
  iVar6 = *(int *)(*(longlong *)(lVar5 + 0x20) + 4 + lVar4 * 4);
  pfVar2 = (float *)((longlong)*(int *)(*(longlong *)(lVar5 + 0x20) + lVar4 * 4) +
                    *(longlong *)(lVar5 + 0x38));
  iVar3 = 0;
  if (iVar6 < 2) {
LAB_1478e7111:
    lVar5 = 0x18;
    if (iVar6 < 2) {
      lVar5 = 0;
    }
  }
  else {
    fVar8 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if ((fVar8 <= 0.0) || (iVar3 = iVar6 + -1, 1.0 <= fVar8)) goto LAB_1478e7111;
    auVar9 = roundss(in_XMM2,ZEXT416((uint)((float)iVar3 * fVar8)),9);
    iVar6 = (int)auVar9._0_4_;
    lVar5 = 0x18;
    if (iVar6 < iVar3) {
      fVar7 = 0.0;
      if (*(char *)(param_3 + 4) != '\x01') {
        fVar7 = (float)iVar3 * fVar8 - auVar9._0_4_;
      }
      uVar1 = *(uint *)((longlong)pfVar2 + (longlong)(iVar6 * 4) + 0x18);
      fVar8 = ((float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0) * pfVar2[3] + *pfVar2;
      fVar10 = ((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar2[4] + pfVar2[1];
      fVar11 = ((float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0) * pfVar2[5] + pfVar2[2];
      uVar1 = *(uint *)((longlong)pfVar2 + (longlong)(iVar6 * 4 + 4) + 0x18);
      fVar11 = ((((float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0) * pfVar2[5] + pfVar2[2]) - fVar11)
               * fVar7 + fVar11;
      fVar10 = ((((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar2[4] + pfVar2[1]) -
               fVar10) * fVar7 + fVar10;
      fVar8 = ((((float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0) * pfVar2[3] + *pfVar2) - fVar8) *
              fVar7 + fVar8;
      goto LAB_1478e71a3;
    }
  }
  uVar1 = *(uint *)((longlong)pfVar2 + (longlong)iVar3 * 4 + lVar5);
  fVar8 = ((float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0) * pfVar2[3] + *pfVar2;
  fVar10 = ((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * pfVar2[4] + pfVar2[1];
  fVar11 = ((float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0) * pfVar2[5] + pfVar2[2];
LAB_1478e71a3:
  *(double *)(param_2 + 0x40) = (double)fVar8;
  *(double *)(param_2 + 0x48) = (double)fVar10;
  *(double *)(param_2 + 0x50) = (double)fVar11;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e71f4 FUN_1478e71f4 body=730 status=ok
// SIG undefined FUN_1478e71f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e71f4(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_98 [32];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar3 = *(int *)(lVar1 + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar5 = (float *)((longlong)*(int *)(lVar1 + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38));
  if (iVar3 == 1) {
    fVar7 = *pfVar5;
    auVar9 = ZEXT416((uint)fVar7);
    fStack_74 = pfVar5[1];
    fStack_70 = pfVar5[2];
    fVar7 = ((1.0 - fVar7 * fVar7) - fStack_74 * fStack_74) - fStack_70 * fStack_70;
    dVar8 = 0.0;
    if (0.0 < fVar7) {
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      dVar8 = (double)fVar7;
    }
  }
  else {
    iVar4 = 0;
    if (1 < iVar3) {
      fVar7 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
              (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if ((0.0 < fVar7) && (iVar4 = iVar3 + -1, fVar7 < 1.0)) {
        auVar9 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar4 * fVar7)),9);
        iVar3 = (int)auVar9._0_4_;
        if (iVar3 < iVar4) {
          fVar17 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar17 = (float)iVar4 * fVar7 - auVar9._0_4_;
          }
          FUN_1478fb84a(&local_78,(longlong)(iVar3 * 4) + (longlong)pfVar5);
          fVar16 = fStack_6c;
          fVar15 = fStack_70;
          fVar14 = fStack_74;
          fVar7 = local_78;
          FUN_1478fb84a(&local_78,(longlong)(iVar3 * 4 + 4) + (longlong)pfVar5);
          uVar6 = -(uint)(0.0 <= fStack_6c * fVar16 +
                                 fVar7 * local_78 + fVar14 * fStack_74 + fVar15 * fStack_70);
          fVar12 = (float)(~uVar6 & (uint)-(1.0 - fVar17) | (uint)(1.0 - fVar17) & uVar6);
          fVar13 = fVar12 * fVar7 + fVar17 * local_78;
          fVar14 = fVar12 * fVar14 + fVar17 * fStack_74;
          fVar15 = fVar12 * fVar15 + fVar17 * fStack_70;
          fVar16 = fVar12 * fVar16 + fVar17 * fStack_6c;
          fVar7 = fVar13 * fVar13 + fVar14 * fVar14;
          fVar17 = fVar15 * fVar15 + fVar16 * fVar16;
          auVar10._0_4_ = fVar17 + fVar7;
          auVar10._4_4_ = fVar17 + fVar7;
          auVar10._8_4_ = fVar7 + fVar17;
          auVar10._12_4_ = fVar7 + fVar17;
          auVar9 = sqrtps(auVar10,auVar10);
          auVar9 = divps(_DAT_1499314a0,auVar9);
          auVar11._0_4_ = auVar9._0_4_ * fVar13;
          auVar11._4_4_ = auVar9._4_4_ * fVar14;
          auVar11._8_4_ = auVar9._8_4_ * fVar15;
          auVar11._12_4_ = auVar9._12_4_ * fVar16;
          auVar9._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
          auVar9._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
          auVar9._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
          auVar9._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
          auVar9 = blendvps(_DAT_149932320,auVar11,auVar9);
          fStack_74 = auVar9._4_4_;
          fStack_70 = auVar9._8_4_;
          dVar8 = (double)auVar9._12_4_;
          goto LAB_1478e72a6;
        }
      }
    }
    FUN_1478fb84a(&local_78,(longlong)pfVar5 + (longlong)(iVar4 << 2));
    auVar9 = ZEXT416((uint)local_78);
    dVar8 = (double)fStack_6c;
  }
LAB_1478e72a6:
  *param_2 = (double)auVar9._0_4_;
  param_2[1] = (double)fStack_74;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = (double)fStack_70;
  auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar2;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e74d0 FUN_1478e74d0 body=440 status=ok
// SIG undefined FUN_1478e74d0(void)

void FUN_1478e74d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10) + 4 +
                  (longlong)(param_4 << 2) * 4);
  if (1 < iVar2) {
    fVar3 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if ((0.0 < fVar3) && (fVar3 < 1.0)) {
      iVar2 = iVar2 + -1;
      fVar3 = (float)iVar2 * fVar3;
      auVar4 = roundss(ZEXT416(0),ZEXT416((uint)fVar3),9);
      if ((int)auVar4._0_4_ < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = fVar3 - auVar4._0_4_;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar5 = DAT_14c846338;
        fVar1 = DAT_14c846330._4_4_;
        fVar3 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar3 = ((float)DAT_14c846330 - fVar3) * fVar6 + fVar3;
        fVar5 = (DAT_14c846338 - fVar5) * fVar6 + fVar5;
        fVar6 = (DAT_14c846330._4_4_ - fVar1) * fVar6 + fVar1;
        goto LAB_1478e764e;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                L"%i: unknown or unsupported animation compression format",4);
  fVar3 = (float)DAT_14c846330;
  fVar5 = DAT_14c846338;
  fVar6 = DAT_14c846330._4_4_;
LAB_1478e764e:
  auVar4._8_4_ = SUB84((double)fVar6,0);
  auVar4._0_8_ = (double)fVar3;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar4;
  *(double *)(param_2 + 0x30) = (double)fVar5;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e7688 FUN_1478e7688 body=444 status=ok
// SIG undefined FUN_1478e7688(void)

void FUN_1478e7688(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) + 4 +
                  (longlong)param_4 * (longlong)*(int *)(*(longlong *)(param_3 + 0x10) + 0x30) * 4);
  if (1 < iVar2) {
    fVar3 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if ((0.0 < fVar3) && (fVar3 < 1.0)) {
      iVar2 = iVar2 + -1;
      fVar3 = (float)iVar2 * fVar3;
      auVar4 = roundss(ZEXT416(0),ZEXT416((uint)fVar3),9);
      if ((int)auVar4._0_4_ < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = fVar3 - auVar4._0_4_;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar5 = DAT_14c846338;
        fVar1 = DAT_14c846330._4_4_;
        fVar3 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",4);
        fVar3 = ((float)DAT_14c846330 - fVar3) * fVar6 + fVar3;
        fVar5 = (DAT_14c846338 - fVar5) * fVar6 + fVar5;
        fVar6 = (DAT_14c846330._4_4_ - fVar1) * fVar6 + fVar1;
        goto LAB_1478e780a;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                L"%i: unknown or unsupported animation compression format",4);
  fVar3 = (float)DAT_14c846330;
  fVar5 = DAT_14c846338;
  fVar6 = DAT_14c846330._4_4_;
LAB_1478e780a:
  auVar4._8_4_ = SUB84((double)fVar6,0);
  auVar4._0_8_ = (double)fVar3;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar4;
  *(double *)(param_2 + 0x50) = (double)fVar5;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e7844 FUN_1478e7844 body=730 status=ok
// SIG undefined FUN_1478e7844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e7844(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_98 [32];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar3 = *(int *)(lVar1 + 0xc + (longlong)(param_4 << 2) * 4);
  pfVar5 = (float *)((longlong)*(int *)(lVar1 + 8 + (longlong)(param_4 << 2) * 4) +
                    *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38));
  if (iVar3 == 1) {
    fVar7 = *pfVar5;
    auVar9 = ZEXT416((uint)fVar7);
    fStack_74 = pfVar5[1];
    fStack_70 = pfVar5[2];
    fVar7 = ((1.0 - fVar7 * fVar7) - fStack_74 * fStack_74) - fStack_70 * fStack_70;
    dVar8 = 0.0;
    if (0.0 < fVar7) {
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      dVar8 = (double)fVar7;
    }
  }
  else {
    iVar4 = 0;
    if (1 < iVar3) {
      fVar7 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
              (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if ((0.0 < fVar7) && (iVar4 = iVar3 + -1, fVar7 < 1.0)) {
        auVar9 = roundss(ZEXT416(0),ZEXT416((uint)((float)iVar4 * fVar7)),9);
        iVar3 = (int)auVar9._0_4_;
        if (iVar3 < iVar4) {
          fVar17 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar17 = (float)iVar4 * fVar7 - auVar9._0_4_;
          }
          FUN_1478fb932(&local_78,(longlong)(iVar3 * 4) + (longlong)pfVar5);
          fVar16 = fStack_6c;
          fVar15 = fStack_70;
          fVar14 = fStack_74;
          fVar7 = local_78;
          FUN_1478fb932(&local_78,(longlong)(iVar3 * 4 + 4) + (longlong)pfVar5);
          uVar6 = -(uint)(0.0 <= fStack_6c * fVar16 +
                                 fVar7 * local_78 + fVar14 * fStack_74 + fVar15 * fStack_70);
          fVar12 = (float)(~uVar6 & (uint)-(1.0 - fVar17) | (uint)(1.0 - fVar17) & uVar6);
          fVar13 = fVar12 * fVar7 + fVar17 * local_78;
          fVar14 = fVar12 * fVar14 + fVar17 * fStack_74;
          fVar15 = fVar12 * fVar15 + fVar17 * fStack_70;
          fVar16 = fVar12 * fVar16 + fVar17 * fStack_6c;
          fVar7 = fVar13 * fVar13 + fVar14 * fVar14;
          fVar17 = fVar15 * fVar15 + fVar16 * fVar16;
          auVar10._0_4_ = fVar17 + fVar7;
          auVar10._4_4_ = fVar17 + fVar7;
          auVar10._8_4_ = fVar7 + fVar17;
          auVar10._12_4_ = fVar7 + fVar17;
          auVar9 = sqrtps(auVar10,auVar10);
          auVar9 = divps(_DAT_1499314a0,auVar9);
          auVar11._0_4_ = auVar9._0_4_ * fVar13;
          auVar11._4_4_ = auVar9._4_4_ * fVar14;
          auVar11._8_4_ = auVar9._8_4_ * fVar15;
          auVar11._12_4_ = auVar9._12_4_ * fVar16;
          auVar9._4_4_ = -(uint)(1e-08 <= auVar10._4_4_);
          auVar9._0_4_ = -(uint)(1e-08 <= auVar10._0_4_);
          auVar9._8_4_ = -(uint)(1e-08 <= auVar10._8_4_);
          auVar9._12_4_ = -(uint)(1e-08 <= auVar10._12_4_);
          auVar9 = blendvps(_DAT_149932320,auVar11,auVar9);
          fStack_74 = auVar9._4_4_;
          fStack_70 = auVar9._8_4_;
          dVar8 = (double)auVar9._12_4_;
          goto LAB_1478e78f6;
        }
      }
    }
    FUN_1478fb932(&local_78,(longlong)pfVar5 + (longlong)(iVar4 << 2));
    auVar9 = ZEXT416((uint)local_78);
    dVar8 = (double)fStack_6c;
  }
LAB_1478e78f6:
  *param_2 = (double)auVar9._0_4_;
  param_2[1] = (double)fStack_74;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = (double)fStack_70;
  auVar2._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar2;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e7b20 FUN_1478e7b20 body=440 status=ok
// SIG undefined FUN_1478e7b20(void)

void FUN_1478e7b20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10) + 4 +
                  (longlong)(param_4 << 2) * 4);
  if (1 < iVar2) {
    fVar3 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if ((0.0 < fVar3) && (fVar3 < 1.0)) {
      iVar2 = iVar2 + -1;
      fVar3 = (float)iVar2 * fVar3;
      auVar4 = roundss(ZEXT416(0),ZEXT416((uint)fVar3),9);
      if ((int)auVar4._0_4_ < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = fVar3 - auVar4._0_4_;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar5 = DAT_14c846338;
        fVar1 = DAT_14c846330._4_4_;
        fVar3 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar3 = ((float)DAT_14c846330 - fVar3) * fVar6 + fVar3;
        fVar5 = (DAT_14c846338 - fVar5) * fVar6 + fVar5;
        fVar6 = (DAT_14c846330._4_4_ - fVar1) * fVar6 + fVar1;
        goto LAB_1478e7c9e;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x284,
                L"%i: unknown or unsupported animation compression format",5);
  fVar3 = (float)DAT_14c846330;
  fVar5 = DAT_14c846338;
  fVar6 = DAT_14c846330._4_4_;
LAB_1478e7c9e:
  auVar4._8_4_ = SUB84((double)fVar6,0);
  auVar4._0_8_ = (double)fVar3;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar4;
  *(double *)(param_2 + 0x30) = (double)fVar5;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e7cd8 FUN_1478e7cd8 body=444 status=ok
// SIG undefined FUN_1478e7cd8(void)

void FUN_1478e7cd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) + 4 +
                  (longlong)param_4 * (longlong)*(int *)(*(longlong *)(param_3 + 0x10) + 0x30) * 4);
  if (1 < iVar2) {
    fVar3 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if ((0.0 < fVar3) && (fVar3 < 1.0)) {
      iVar2 = iVar2 + -1;
      fVar3 = (float)iVar2 * fVar3;
      auVar4 = roundss(ZEXT416(0),ZEXT416((uint)fVar3),9);
      if ((int)auVar4._0_4_ < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = fVar3 - auVar4._0_4_;
        }
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar5 = DAT_14c846338;
        fVar1 = DAT_14c846330._4_4_;
        fVar3 = (float)DAT_14c846330;
        FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                      L"%i: unknown or unsupported animation compression format",5);
        fVar3 = ((float)DAT_14c846330 - fVar3) * fVar6 + fVar3;
        fVar5 = (DAT_14c846338 - fVar5) * fVar6 + fVar5;
        fVar6 = (DAT_14c846330._4_4_ - fVar1) * fVar6 + fVar1;
        goto LAB_1478e7e5a;
      }
    }
  }
  FUN_140033559("Runtime\\Engine\\Public\\AnimationCompression.h",0x2a9,
                L"%i: unknown or unsupported animation compression format",5);
  fVar3 = (float)DAT_14c846330;
  fVar5 = DAT_14c846338;
  fVar6 = DAT_14c846330._4_4_;
LAB_1478e7e5a:
  auVar4._8_4_ = SUB84((double)fVar6,0);
  auVar4._0_8_ = (double)fVar3;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar4;
  *(double *)(param_2 + 0x50) = (double)fVar5;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e7e94 FUN_1478e7e94 body=587 status=ok
// SIG undefined FUN_1478e7e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478e7e94(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  double dVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10);
  iVar1 = *(int *)(lVar4 + 0xc + (longlong)(param_4 << 2) * 4);
  if (iVar1 == 1) {
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38);
    lVar4 = (longlong)*(int *)(lVar4 + 8 + (longlong)(param_4 << 2) * 4);
    fVar6 = *(float *)(lVar2 + lVar4);
    auVar14 = ZEXT416((uint)fVar6);
    fVar7 = *(float *)(lVar2 + 4 + lVar4);
    fVar8 = *(float *)(lVar2 + 8 + lVar4);
    fVar6 = ((1.0 - fVar6 * fVar6) - fVar7 * fVar7) - fVar8 * fVar8;
    dVar9 = 0.0;
    if (0.0 < fVar6) {
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
      }
      else {
        fVar6 = SQRT(fVar6);
      }
      dVar9 = (double)fVar6;
    }
  }
  else {
    if (1 < iVar1) {
      fVar7 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
              (float)*(int *)(param_3 + 0x50);
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if ((0.0 < fVar7) && (fVar7 < 1.0)) {
        fVar7 = (float)(iVar1 + -1) * fVar7;
        auVar14 = roundss(in_XMM3,ZEXT416((uint)fVar7),9);
        if ((int)auVar14._0_4_ < iVar1 + -1) {
          fVar8 = 0.0;
          if (*(char *)(param_3 + 4) != '\x01') {
            fVar8 = fVar7 - auVar14._0_4_;
          }
          uVar5 = -(uint)(0.0 <= DAT_14c84634c * DAT_14c84634c +
                                 DAT_14c846348 * DAT_14c846348 +
                                 DAT_14c84633c._4_4_ * DAT_14c84633c._4_4_ +
                                 DAT_14c846344 * DAT_14c846344);
          fVar7 = (float)(~uVar5 & (uint)-(1.0 - fVar8) | (uint)(1.0 - fVar8) & uVar5);
          fVar6 = fVar7 * DAT_14c84633c._4_4_ + fVar8 * DAT_14c84633c._4_4_;
          fVar10 = fVar7 * DAT_14c846344 + fVar8 * DAT_14c846344;
          fVar11 = fVar7 * DAT_14c846348 + fVar8 * DAT_14c846348;
          fVar12 = fVar7 * DAT_14c84634c + fVar8 * DAT_14c84634c;
          fVar7 = fVar6 * fVar6 + fVar10 * fVar10;
          fVar8 = fVar11 * fVar11 + fVar12 * fVar12;
          auVar13._0_4_ = fVar8 + fVar7;
          auVar13._4_4_ = fVar8 + fVar7;
          auVar13._8_4_ = fVar7 + fVar8;
          auVar13._12_4_ = fVar7 + fVar8;
          auVar14 = sqrtps(auVar13,auVar13);
          auVar14 = divps(_DAT_1499314a0,auVar14);
          auVar15._0_4_ = auVar14._0_4_ * fVar6;
          auVar15._4_4_ = auVar14._4_4_ * fVar10;
          auVar15._8_4_ = auVar14._8_4_ * fVar11;
          auVar15._12_4_ = auVar14._12_4_ * fVar12;
          auVar14._4_4_ = -(uint)(1e-08 <= auVar13._4_4_);
          auVar14._0_4_ = -(uint)(1e-08 <= auVar13._0_4_);
          auVar14._8_4_ = -(uint)(1e-08 <= auVar13._8_4_);
          auVar14._12_4_ = -(uint)(1e-08 <= auVar13._12_4_);
          auVar14 = blendvps(_DAT_149932320,auVar15,auVar14);
          dVar9 = (double)auVar14._12_4_;
          fVar7 = auVar14._4_4_;
          fVar8 = auVar14._8_4_;
          goto LAB_1478e8097;
        }
      }
    }
    auVar14 = ZEXT416((uint)DAT_14c84633c._4_4_);
    dVar9 = (double)DAT_14c84634c;
    fVar7 = DAT_14c846344;
    fVar8 = DAT_14c846348;
  }
LAB_1478e8097:
  *param_2 = (double)auVar14._0_4_;
  param_2[1] = (double)fVar7;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = (double)fVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar3;
  return;
}



// FUNCTION 1478e80e0 FUN_1478e80e0 body=274 status=ok
// SIG undefined FUN_1478e80e0(void)

void FUN_1478e80e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x10) + 4 +
                  (longlong)(param_4 << 2) * 4);
  fVar5 = (float)DAT_14c846330;
  fVar1 = DAT_14c846338;
  fVar6 = DAT_14c846330._4_4_;
  if (1 < iVar2) {
    fVar3 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if ((0.0 < fVar3) && (fVar3 < 1.0)) {
      iVar2 = iVar2 + -1;
      fVar3 = (float)iVar2 * fVar3;
      auVar4 = roundss(ZEXT416(0),ZEXT416((uint)fVar3),9);
      if ((int)auVar4._0_4_ < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = fVar3 - auVar4._0_4_;
        }
        fVar5 = ((float)DAT_14c846330 - (float)DAT_14c846330) * fVar6 + (float)DAT_14c846330;
        fVar1 = (DAT_14c846338 - DAT_14c846338) * fVar6 + DAT_14c846338;
        fVar6 = (DAT_14c846330._4_4_ - DAT_14c846330._4_4_) * fVar6 + DAT_14c846330._4_4_;
      }
    }
  }
  auVar4._8_4_ = SUB84((double)fVar6,0);
  auVar4._0_8_ = (double)fVar5;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x20) = auVar4;
  *(double *)(param_2 + 0x30) = (double)fVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 1478e81f2 FUN_1478e81f2 body=279 status=ok
// SIG undefined FUN_1478e81f2(void)

void FUN_1478e81f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) + 4 +
                  (longlong)param_4 * (longlong)*(int *)(*(longlong *)(param_3 + 0x10) + 0x30) * 4);
  fVar5 = (float)DAT_14c846330;
  fVar1 = DAT_14c846338;
  fVar6 = DAT_14c846330._4_4_;
  if (1 < iVar2) {
    fVar3 = (*(float *)(param_3 + 0x4c) + (float)*(int *)(param_3 + 0x48)) /
            (float)*(int *)(param_3 + 0x50);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if ((0.0 < fVar3) && (fVar3 < 1.0)) {
      iVar2 = iVar2 + -1;
      fVar3 = (float)iVar2 * fVar3;
      auVar4 = roundss(ZEXT416(0),ZEXT416((uint)fVar3),9);
      if ((int)auVar4._0_4_ < iVar2) {
        fVar6 = 0.0;
        if (*(char *)(param_3 + 4) != '\x01') {
          fVar6 = fVar3 - auVar4._0_4_;
        }
        fVar5 = ((float)DAT_14c846330 - (float)DAT_14c846330) * fVar6 + (float)DAT_14c846330;
        fVar1 = (DAT_14c846338 - DAT_14c846338) * fVar6 + DAT_14c846338;
        fVar6 = (DAT_14c846330._4_4_ - DAT_14c846330._4_4_) * fVar6 + DAT_14c846330._4_4_;
      }
    }
  }
  auVar4._8_4_ = SUB84((double)fVar6,0);
  auVar4._0_8_ = (double)fVar5;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar4;
  *(double *)(param_2 + 0x50) = (double)fVar1;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1478e830a FUN_1478e830a body=384 status=ok
// SIG undefined FUN_1478e830a(void)

void FUN_1478e830a(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_78 [36];
  uint local_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 != -1) {
    param_2[0x12] = (longlong)(param_3 + param_4);
    lVar6 = *(longlong *)(param_1 + 0x38);
    (**(code **)(*param_2 + 0x170))(param_2,lVar6 + param_4,4);
    puVar4 = (uint *)(lVar6 + param_4);
    puVar5 = puVar4 + 1;
    local_54 = *puVar4;
    uVar7 = local_54 & 0xffffff;
    uVar3 = local_54 >> 0x1c;
    iVar2 = *(int *)(&DAT_14a7a41a0 + (ulonglong)uVar3 * 4);
    bVar1 = (&DAT_14a7a41e0)[(local_54 >> 0x18 & 7) + uVar3 * 8];
    uVar9 = (uint)bVar1;
    uVar8 = (uint)bVar1;
    if ((uVar3 == 3) && (uVar8 = 1, bVar1 != 0)) {
      do {
        (**(code **)(*param_2 + 0x170))(param_2,puVar5,4);
        puVar5 = puVar5 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar7 != 0) {
      uVar9 = 0;
      uVar3 = uVar8;
      do {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar5,(longlong)iVar2);
          puVar5 = (uint *)((longlong)puVar5 + (longlong)iVar2);
        }
        uVar9 = uVar9 + 1;
        uVar3 = uVar8;
      } while (uVar9 != uVar7);
    }
    if ((local_54 >> 0x1b & 1) != 0) {
      local_50 = puVar5;
      FUN_1478e848c(&local_50,param_2);
      puVar5 = local_50;
      if (uVar7 != 0) {
        lVar6 = (ulonglong)(0xff < *(int *)(param_1 + 8)) + 1;
        do {
          (**(code **)(*param_2 + 0x170))(param_2,puVar5,lVar6);
          puVar5 = (uint *)((longlong)puVar5 + lVar6);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    local_50 = puVar5;
    FUN_1478e848c(&local_50,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478e848c FUN_1478e848c body=164 status=ok
// SIG undefined FUN_1478e848c(void)

void FUN_1478e848c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  iVar3 = ((int)lVar1 + 3U & 0xfffffffc) - (int)lVar1;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    (**(code **)(*param_2 + 0x170))(param_2,lVar1,(longlong)iVar3);
    *param_1 = *param_1 + (longlong)iVar3;
  }
  else {
    local_31 = 0x55;
    if (0 < iVar3) {
      iVar2 = 0;
      do {
        (**(code **)(*param_2 + 0x170))(param_2,&local_31,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
      lVar1 = *param_1;
    }
    *param_1 = iVar3 + lVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e8532 FUN_1478e8532 body=384 status=ok
// SIG undefined FUN_1478e8532(void)

void FUN_1478e8532(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_78 [36];
  uint local_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 != -1) {
    param_2[0x12] = (longlong)(param_3 + param_4);
    lVar6 = *(longlong *)(param_1 + 0x38);
    (**(code **)(*param_2 + 0x170))(param_2,lVar6 + param_4,4);
    puVar4 = (uint *)(lVar6 + param_4);
    puVar5 = puVar4 + 1;
    local_54 = *puVar4;
    uVar7 = local_54 & 0xffffff;
    uVar3 = local_54 >> 0x1c;
    iVar2 = *(int *)(&DAT_14a7a41a0 + (ulonglong)uVar3 * 4);
    bVar1 = (&DAT_14a7a41e0)[(local_54 >> 0x18 & 7) + uVar3 * 8];
    uVar9 = (uint)bVar1;
    uVar8 = (uint)bVar1;
    if ((uVar3 == 3) && (uVar8 = 1, bVar1 != 0)) {
      do {
        (**(code **)(*param_2 + 0x170))(param_2,puVar5,4);
        puVar5 = puVar5 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar7 != 0) {
      uVar9 = 0;
      uVar3 = uVar8;
      do {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar5,(longlong)iVar2);
          puVar5 = (uint *)((longlong)puVar5 + (longlong)iVar2);
        }
        uVar9 = uVar9 + 1;
        uVar3 = uVar8;
      } while (uVar9 != uVar7);
    }
    if ((local_54 >> 0x1b & 1) != 0) {
      local_50 = puVar5;
      FUN_1478e848c(&local_50,param_2);
      puVar5 = local_50;
      if (uVar7 != 0) {
        lVar6 = (ulonglong)(0xff < *(int *)(param_1 + 8)) + 1;
        do {
          (**(code **)(*param_2 + 0x170))(param_2,puVar5,lVar6);
          puVar5 = (uint *)((longlong)puVar5 + lVar6);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    local_50 = puVar5;
    FUN_1478e848c(&local_50,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478e86b4 FUN_1478e86b4 body=160 status=ok
// SIG undefined FUN_1478e86b4(void)

void FUN_1478e86b4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_3[0x12];
  (**(code **)(*param_3 + 0x30))(param_3);
  uVar1 = *(uint *)(param_2 + 0x18);
  if (1 < (int)uVar1) {
    iVar2 = *(int *)(param_2 + 0x28);
    uVar4 = 0;
    do {
      FUN_1478e830a(param_2,param_3,uVar3 & 0xffffffff,
                    *(undefined4 *)(*(longlong *)(param_2 + 0x10) + uVar4 * 8));
      FUN_1478e830a(param_2,param_3,uVar3 & 0xffffffff,
                    *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 4 + uVar4 * 8));
      if (0 < iVar2) {
        FUN_1478e830a(param_2,param_3,uVar3 & 0xffffffff,
                      *(undefined4 *)
                       (*(longlong *)(param_2 + 0x20) +
                       (longlong)(int)uVar4 * (longlong)*(int *)(param_2 + 0x30) * 4));
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 >> 1 != uVar4);
  }
  return;
}



// FUNCTION 1478e8754 FUN_1478e8754 body=151 status=ok
// SIG undefined FUN_1478e8754(void)

void FUN_1478e8754(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (1 < (int)uVar1) {
    uVar2 = *(undefined4 *)(param_3 + 0x90);
    iVar3 = *(int *)(param_2 + 0x28);
    uVar4 = 0;
    do {
      FUN_1478e8532(param_2,param_3,uVar2,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + uVar4 * 8)
                   );
      FUN_1478e8532(param_2,param_3,uVar2,
                    *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 4 + uVar4 * 8));
      if (0 < iVar3) {
        FUN_1478e8532(param_2,param_3,uVar2,
                      *(undefined4 *)
                       (*(longlong *)(param_2 + 0x20) +
                       (longlong)(int)uVar4 * (longlong)*(int *)(param_2 + 0x30) * 4));
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 >> 1 != uVar4);
  }
  return;
}



// FUNCTION 1478e87ec FUN_1478e87ec body=139 status=ok
// SIG undefined FUN_1478e87ec(void)

void FUN_1478e87ec(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1478e4fd4();
  if (1 < param_5) {
    iVar1 = (int)*param_4;
    lVar2 = (longlong)(int)((iVar1 + 3U & 0xfffffffc) - iVar1);
    (**(code **)(*param_3 + 0x170))(param_3,*param_4,lVar2);
    lVar2 = lVar2 + *param_4;
    *param_4 = lVar2;
    lVar3 = (ulonglong)(0xff < *(int *)(param_2 + 8)) + 1;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,lVar3);
      lVar2 = *param_4 + lVar3;
      *param_4 = lVar2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



// FUNCTION 1478e8878 FUN_1478e8878 body=139 status=ok
// SIG undefined FUN_1478e8878(void)

void FUN_1478e8878(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1478e509c();
  if (1 < param_5) {
    iVar1 = (int)*param_4;
    lVar2 = (longlong)(int)((iVar1 + 3U & 0xfffffffc) - iVar1);
    (**(code **)(*param_3 + 0x170))(param_3,*param_4,lVar2);
    lVar2 = lVar2 + *param_4;
    *param_4 = lVar2;
    lVar3 = (ulonglong)(0xff < *(int *)(param_2 + 8)) + 1;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,lVar3);
      lVar2 = *param_4 + lVar3;
      *param_4 = lVar2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



// FUNCTION 1478e8904 FUN_1478e8904 body=139 status=ok
// SIG undefined FUN_1478e8904(void)

void FUN_1478e8904(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1478e5164();
  if (1 < param_5) {
    iVar1 = (int)*param_4;
    lVar2 = (longlong)(int)((iVar1 + 3U & 0xfffffffc) - iVar1);
    (**(code **)(*param_3 + 0x170))(param_3,*param_4,lVar2);
    lVar2 = lVar2 + *param_4;
    *param_4 = lVar2;
    lVar3 = (ulonglong)(0xff < *(int *)(param_2 + 8)) + 1;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar2,lVar3);
      lVar2 = *param_4 + lVar3;
      *param_4 = lVar2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



// FUNCTION 1478e8990 FUN_1478e8990 body=214 status=ok
// SIG undefined FUN_1478e8990(void)

void FUN_1478e8990(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_1478e522c();
  if (1 < param_5) {
    lVar1 = *param_4;
    iVar4 = ((int)lVar1 + 3U & 0xfffffffc) - (int)lVar1;
    local_41 = 0x55;
    if (0 < iVar4) {
      iVar2 = 0;
      do {
        (**(code **)(*param_3 + 0x170))(param_3,&local_41,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
      lVar1 = *param_4;
    }
    lVar1 = iVar4 + lVar1;
    *param_4 = lVar1;
    lVar3 = (ulonglong)(0xff < *(int *)(param_2 + 8)) + 1;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar1,lVar3);
      lVar1 = *param_4 + lVar3;
      *param_4 = lVar1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e8a68 FUN_1478e8a68 body=214 status=ok
// SIG undefined FUN_1478e8a68(void)

void FUN_1478e8a68(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_1478e52f4();
  if (1 < param_5) {
    lVar1 = *param_4;
    iVar4 = ((int)lVar1 + 3U & 0xfffffffc) - (int)lVar1;
    local_41 = 0x55;
    if (0 < iVar4) {
      iVar2 = 0;
      do {
        (**(code **)(*param_3 + 0x170))(param_3,&local_41,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
      lVar1 = *param_4;
    }
    lVar1 = iVar4 + lVar1;
    *param_4 = lVar1;
    lVar3 = (ulonglong)(0xff < *(int *)(param_2 + 8)) + 1;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar1,lVar3);
      lVar1 = *param_4 + lVar3;
      *param_4 = lVar1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478e8b40 FUN_1478e8b40 body=214 status=ok
// SIG undefined FUN_1478e8b40(void)

void FUN_1478e8b40(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_5;
  FUN_1478e53bc();
  if (1 < param_5) {
    lVar1 = *param_4;
    iVar4 = ((int)lVar1 + 3U & 0xfffffffc) - (int)lVar1;
    local_41 = 0x55;
    if (0 < iVar4) {
      iVar2 = 0;
      do {
        (**(code **)(*param_3 + 0x170))(param_3,&local_41,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
      lVar1 = *param_4;
    }
    lVar1 = iVar4 + lVar1;
    *param_4 = lVar1;
    lVar3 = (ulonglong)(0xff < *(int *)(param_2 + 8)) + 1;
    do {
      (**(code **)(*param_3 + 0x170))(param_3,lVar1,lVar3);
      lVar1 = *param_4 + lVar3;
      *param_4 = lVar1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


