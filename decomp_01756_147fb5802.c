// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147fb5802 FUN_147fb5802 body=143 status=ok
// SIG undefined FUN_147fb5802(void)

void FUN_147fb5802(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fb5892 FUN_147fb5892 body=38 status=ok
// SIG undefined FUN_147fb5892(void)

void FUN_147fb5892(longlong param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    FUN_1438d321c(param_1);
    param_3 = param_2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fb58b8 FUN_147fb58b8 body=110 status=ok
// SIG undefined FUN_147fb58b8(void)

void FUN_147fb58b8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147fb5928(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fb5928 FUN_147fb5928 body=132 status=ok
// SIG undefined FUN_147fb5928(void)

void FUN_147fb5928(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147fb59ac FUN_147fb59ac body=23 status=ok
// SIG undefined FUN_147fb59ac(void)

void FUN_147fb59ac(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 147fb59c4 FUN_147fb59c4 body=147 status=ok
// SIG undefined FUN_147fb59c4(void)

void FUN_147fb59c4(longlong param_1,int param_2)

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



// FUNCTION 147fb5a58 FUN_147fb5a58 body=108 status=ok
// SIG undefined FUN_147fb5a58(void)

void FUN_147fb5a58(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 * 2,0);
      iVar2 = (int)(uVar3 >> 1);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    FUN_147fb5ac6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fb5ac6 FUN_147fb5ac6 body=130 status=ok
// SIG undefined FUN_147fb5ac6(void)

void FUN_147fb5ac6(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,2);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,2);
  return;
}



// FUNCTION 147fb5b48 FUN_147fb5b48 body=119 status=ok
// SIG undefined FUN_147fb5b48(void)

void FUN_147fb5b48(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_147fb5bc0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fb5bc0 FUN_147fb5bc0 body=141 status=ok
// SIG undefined FUN_147fb5bc0(void)

void FUN_147fb5bc0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 147fb5c4e FUN_147fb5c4e body=110 status=ok
// SIG undefined FUN_147fb5c4e(void)

void FUN_147fb5c4e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147fb5cbe(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fb5cbe FUN_147fb5cbe body=132 status=ok
// SIG undefined FUN_147fb5cbe(void)

void FUN_147fb5cbe(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147fb5d42 FUN_147fb5d42 body=429 status=ok
// SIG undefined FUN_147fb5d42(void)

longlong * FUN_147fb5d42(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_78;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  if (0 < (int)param_2[1]) {
    local_78 = 0;
    lVar7 = 0;
    do {
      lVar10 = lVar7 * 0x30 + *param_2;
      lVar4 = param_2[2];
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_147fbfd38(param_1,iVar3);
      }
      lVar11 = (longlong)iVar3 * 0x28 + *param_1;
      FUN_147fb5ef0(lVar11,lVar10);
      bVar6 = *(byte *)(lVar10 + 0x1a);
      if (bVar6 != 0) {
        plVar8 = (longlong *)(lVar4 + local_78);
        uVar9 = 0;
        do {
          puVar5 = (undefined8 *)*plVar8;
          if (puVar5 != (undefined8 *)0x0) {
            iVar3 = (int)param_1[3];
            *(uint *)(param_1 + 3) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
              FUN_147fbfdcc(param_1 + 2,iVar3);
            }
            puVar1 = (undefined8 *)(param_1[2] + (longlong)iVar3 * 0x20);
            *puVar1 = *puVar5;
            puVar1[1] = 0;
            puVar1[2] = 0;
            FUN_1401fa0f0(puVar1 + 1,puVar5[1],puVar5[2]);
            puVar1[3] = puVar5[3];
            *(char *)(lVar11 + 0x1d + uVar9) = (char)iVar3;
            bVar6 = *(byte *)(lVar10 + 0x1a);
          }
          uVar9 = uVar9 + 1;
          plVar8 = plVar8 + 2;
        } while (uVar9 < bVar6);
      }
      lVar7 = lVar7 + 1;
      local_78 = local_78 + 0x80;
    } while (lVar7 < (int)param_2[1]);
  }
  uVar2 = *(undefined2 *)((longlong)param_2 + 0x22);
  *(undefined2 *)(param_1 + 4) = uVar2;
  *(undefined2 *)((longlong)param_1 + 0x22) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x29);
  lVar7 = param_2[6];
  if (DAT_14c950c29 == '\x01') {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = param_2[6];
    }
  }
  param_1[5] = lVar7;
  *(short *)(param_1 + 6) = (short)param_2[7];
  return param_1;
}



// FUNCTION 147fb5ef0 FUN_147fb5ef0 body=138 status=ok
// SIG undefined FUN_147fb5ef0(void)

longlong * FUN_147fb5ef0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = DAT_14cb28a80;
  *(undefined4 *)((longlong)param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  bVar2 = *(byte *)((longlong)param_1 + 0x1c) & 0xfe;
  *(byte *)((longlong)param_1 + 0x1c) = bVar2;
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
      bVar2 = *(byte *)((longlong)param_1 + 0x1c) & 0xfe;
    }
  }
  *param_1 = lVar3;
  *(short *)(param_1 + 1) = (short)param_2[1];
  *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)((longlong)param_2 + 0x1a);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x12);
  *(undefined8 *)((longlong)param_1 + 10) = *(undefined8 *)((longlong)param_2 + 10);
  *(undefined8 *)((longlong)param_1 + 0x12) = uVar1;
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_2 + 0x2f) & 1 | bVar2;
  return param_1;
}



// FUNCTION 147fb5f7a FUN_147fb5f7a body=283 status=ok
// SIG undefined FUN_147fb5f7a(void)

longlong FUN_147fb5f7a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_14688c432();
  FUN_147fb6096(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    FUN_147fbfe52((undefined8 *)(param_1 + 0x48),iVar1,0);
    FUN_147fbfec5(*(undefined8 *)(param_1 + 0x48),uVar2,iVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14acfdfb0;
  FUN_147fbff56(puVar3 + 2,uVar2);
  *(undefined8 **)(param_1 + 0x58) = puVar3 + 2;
  *(undefined8 **)(param_1 + 0x60) = puVar3;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    FUN_147fbffa4((undefined8 *)(param_1 + 0x70),iVar1,0);
    FUN_147fc0017(*(undefined8 *)(param_1 + 0x70),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1401fa0f0(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x88));
  return param_1;
}



// FUNCTION 147fb6096 FUN_147fb6096 body=166 status=ok
// SIG undefined FUN_147fb6096(void)

undefined8 * FUN_147fb6096(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147fa6b62(param_1,iVar1,0);
    FUN_147fa6bd5(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_147fa6c48(param_1 + 2,iVar1,0);
    FUN_147fa6cbb(param_1[2],uVar2,iVar1);
  }
  param_1[6] = param_2[6];
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 147fb613c FUN_147fb613c body=243 status=ok
// SIG undefined FUN_147fb613c(void)

longlong FUN_147fb613c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  FUN_14688c546();
  FUN_147fa6ab2(param_1 + 0x10,param_2 + 0x10);
  FUN_147fa6b02(param_1 + 0x20,param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_147fb6230(param_1 + 0x48,param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_FUN_14acfdfb0;
  FUN_147fbff56(puVar8 + 2,uVar3);
  plVar4 = *(longlong **)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x58) = puVar8 + 2;
  *(undefined8 **)(param_1 + 0x60) = puVar8;
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
  FUN_147fb6290(param_1 + 0x70,param_2 + 0x70);
  if (param_1 != param_2) {
    FUN_1401fa0f0(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x88));
  }
  return param_1;
}



// FUNCTION 147fb6230 FUN_147fb6230 body=95 status=ok
// SIG undefined FUN_147fb6230(void)

undefined8 * FUN_147fb6230(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459cb519(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fbfe52(param_1,iVar1);
      FUN_147fbfec5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fb6290 FUN_147fb6290 body=79 status=ok
// SIG undefined FUN_147fb6290(void)

undefined8 * FUN_147fb6290(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fbffa4(param_1,iVar1);
      FUN_147fc0017(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fb62e0 FUN_147fb62e0 body=82 status=ok
// SIG undefined FUN_147fb62e0(void)

void FUN_147fb62e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 147fb6332 FUN_147fb6332 body=115 status=ok
// SIG undefined FUN_147fb6332(void)

void FUN_147fb6332(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar2 < 0x20) {
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_147fc008c((longlong *)(param_1 + 0x70),iVar2);
    }
    puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x18);
    *puVar1 = *param_3;
    lVar3 = *(longlong *)(param_3 + 4);
    *(longlong *)(puVar1 + 4) = lVar3;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(param_3 + 10);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_3 + 8);
  }
  return;
}



// FUNCTION 147fb63a6 FUN_147fb63a6 body=105 status=ok
// SIG undefined FUN_147fb63a6(void)

ulonglong FUN_147fb63a6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (iVar4 != 0) {
    iVar5 = -0x10;
    do {
      lVar1 = *param_1;
      lVar2 = (longlong)((int)param_1[1] + iVar5);
      if ((*(longlong *)(lVar1 + lVar2) == 0 || *(int *)(lVar1 + 8 + lVar2) + lVar1 == 0) ||
         ((plVar3 = (longlong *)FUN_147fb33b7(), plVar3 != (longlong *)0x0 && (*plVar3 == 0)))) {
        uVar6 = 0;
        break;
      }
      iVar5 = iVar5 + -0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147fb6410 FUN_147fb6410 body=490 status=ok
// SIG undefined FUN_147fb6410(void)

undefined4 *
FUN_147fb6410(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4,
             short param_5,char *param_6,longlong *param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_3;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x18);
    lVar7 = (longlong)*(int *)(param_1 + 0x50) * 0x28;
    bVar4 = DAT_14c950c29;
    do {
      lVar1 = *param_4;
      if ((lVar1 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar1);
        bVar4 = DAT_14c950c29;
      }
      if (((((plVar6[-3] == lVar1) && ((short)plVar6[-2] == (short)param_4[1])) &&
           ((short)plVar6[-1] == param_5)) &&
          ((*(char *)((longlong)plVar6 + -0xe) == *param_6 &&
           (*(short *)((longlong)plVar6 + -0xc) == *(short *)(param_6 + 2))))) &&
         (*(short *)((longlong)plVar6 + -10) == *(short *)(param_6 + 4))) {
        plVar5 = plVar6 + -3;
        if (plVar5 != (longlong *)0x0) {
          if (*plVar6 == *param_7) goto LAB_147fb6552;
          local_58 = (undefined4)*param_7;
          uStack_54 = *(undefined4 *)((longlong)param_7 + 4);
          uStack_50 = (undefined4)param_7[1];
          uStack_4c = *(undefined4 *)((longlong)param_7 + 0xc);
          goto LAB_147fb654d;
        }
        break;
      }
      plVar6 = plVar6 + 5;
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
  }
  plVar5 = (longlong *)FUN_147fb65fc(param_1 + 0x48);
  lVar7 = *param_4;
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = *param_4;
    }
  }
  *plVar5 = lVar7;
  *(short *)(plVar5 + 1) = (short)param_4[1];
  *(short *)(plVar5 + 2) = param_5;
  *(undefined2 *)((longlong)plVar5 + 0xe) = *(undefined2 *)(param_6 + 4);
  *(undefined4 *)((longlong)plVar5 + 10) = *(undefined4 *)param_6;
  local_68 = (undefined4)*param_7;
  uStack_64 = *(undefined4 *)((longlong)param_7 + 4);
  uStack_60 = (undefined4)param_7[1];
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0xc);
  plVar6 = plVar5 + 3;
LAB_147fb654d:
  FUN_14688be1a(plVar6);
LAB_147fb6552:
  plVar6 = (longlong *)FUN_147fae1a2(plVar5 + 3);
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
    lVar7 = FUN_1438d39f0(*plVar6,local_70);
    if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar7);
    }
    *plVar6 = lVar7;
  }
  uVar2 = *(undefined4 *)((longlong)plVar5 + 0x1c);
  lVar7 = plVar5[4];
  uVar3 = *(undefined4 *)((longlong)plVar5 + 0x24);
  *param_2 = (int)plVar5[3];
  param_2[1] = uVar2;
  param_2[2] = (int)lVar7;
  param_2[3] = uVar3;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147fb65fc FUN_147fb65fc body=63 status=ok
// SIG undefined FUN_147fb65fc(void)

longlong FUN_147fb65fc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147fc01b0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147fc0191(lVar2);
  return lVar2;
}



// FUNCTION 147fb663c FUN_147fb663c body=180 status=ok
// SIG undefined FUN_147fb663c(void)

undefined4 * FUN_147fb663c(longlong param_1,undefined4 *param_2,longlong *param_3,char *param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x48);
    lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x28;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *param_3;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      if ((((*plVar4 == lVar1) && ((short)plVar4[1] == (short)param_3[1])) &&
          (*(char *)((longlong)plVar4 + 10) == *param_4)) &&
         ((*(short *)((longlong)plVar4 + 0xc) == *(short *)(param_4 + 2) &&
          (*(short *)((longlong)plVar4 + 0xe) == *(short *)(param_4 + 4))))) {
        if (plVar4 != (longlong *)0x0) {
          uVar5 = (undefined4)plVar4[3];
          uVar6 = *(undefined4 *)((longlong)plVar4 + 0x1c);
          uVar7 = (undefined4)plVar4[4];
          uVar8 = *(undefined4 *)((longlong)plVar4 + 0x24);
          goto LAB_147fb66dc;
        }
        break;
      }
      plVar4 = plVar4 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
LAB_147fb66dc:
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  return param_2;
}



// FUNCTION 147fb66f0 FUN_147fb66f0 body=177 status=ok
// SIG undefined FUN_147fb66f0(void)

undefined8 FUN_147fb66f0(longlong param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x48);
    lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x28;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *param_2;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      if ((((*plVar4 == lVar1) && ((short)plVar4[1] == (short)param_2[1])) &&
          (*(char *)((longlong)plVar4 + 10) == *param_3)) &&
         ((*(short *)((longlong)plVar4 + 0xc) == *(short *)(param_3 + 2) &&
          (*(short *)((longlong)plVar4 + 0xe) == *(short *)(param_3 + 4))))) {
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        return *(undefined8 *)plVar4[4];
      }
      plVar4 = plVar4 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 147fb67a2 FUN_147fb67a2 body=66 status=ok
// SIG undefined FUN_147fb67a2(void)

void FUN_147fb67a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  FUN_1459cb519(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_147fc0244(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 147fb67e4 FUN_147fb67e4 body=25 status=ok
// SIG undefined FUN_147fb67e4(void)

void FUN_147fb67e4(longlong param_1,undefined8 *param_2)

{
  if ((undefined8 *)(param_1 + 0x80) != param_2) {
    FUN_1401fa0f0((undefined8 *)(param_1 + 0x80),*param_2,param_2[1]);
    return;
  }
  return;
}



// FUNCTION 147fb67fe FUN_147fb67fe body=130 status=ok
// SIG undefined FUN_147fb67fe(void)

longlong * FUN_147fb67fe(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  uVar3 = *param_2;
  puVar5 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14acfdfd0;
  FUN_147fb5f7a(puVar5 + 2,uVar3);
  plVar4 = (longlong *)param_1[1];
  *param_1 = (longlong)(puVar5 + 2);
  param_1[1] = (longlong)puVar5;
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



// FUNCTION 147fb6880 FUN_147fb6880 body=27 status=ok
// SIG undefined FUN_147fb6880(void)

void FUN_147fb6880(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *param_1;
  lVar1 = param_1[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147fb689c FUN_147fb689c body=249 status=ok
// SIG undefined FUN_147fb689c(void)

ulonglong FUN_147fb689c(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  int iVar8;
  
  if (param_2 != (longlong *)0x0) {
    param_1 = (longlong *)*param_1;
    param_2 = (longlong *)*param_2;
    cVar2 = FUN_14688f4ee(param_1 + 0x10,param_2 + 0x10);
    if ((cVar2 != '\0') && (cVar2 = FUN_14688cd68(param_1,param_2,param_3), cVar2 != '\0')) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (0 < *(int *)((longlong)param_1 + 0xc)) {
        iVar6 = 0;
        iVar8 = -0x10;
        do {
          lVar1 = *param_1;
          lVar3 = (longlong)((int)param_1[1] + iVar8);
          plVar4 = (longlong *)
                   FUN_147fb33b7(*(undefined8 *)(lVar1 + lVar3),*(int *)(lVar1 + 8 + lVar3) + lVar1)
          ;
          lVar1 = *param_2;
          lVar3 = (longlong)((int)param_2[1] + iVar8);
          plVar5 = (longlong *)
                   FUN_147fb33b7(*(undefined8 *)(lVar1 + lVar3),*(int *)(lVar1 + 8 + lVar3) + lVar1)
          ;
          if ((plVar4 != (longlong *)0x0) &&
             ((plVar5 == (longlong *)0x0 ||
              (((lVar1 = *plVar4, lVar1 != 0 && (lVar3 = *plVar5, lVar3 != 0)) &&
               (((param_3 >> 0x16 & 1) != 0 ||
                ((((param_3 & 0x300) != 0 && (lVar1 != lVar3)) &&
                 (cVar2 = FUN_14049ad16(lVar1,lVar3,param_3), cVar2 == '\0'))))))))))
          goto LAB_147fb6982;
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + -0x10;
        } while (iVar6 < *(int *)((longlong)param_1 + 0xc));
      }
      goto LAB_147fb6984;
    }
  }
LAB_147fb6982:
  uVar7 = 0;
LAB_147fb6984:
  return uVar7 & 0xffffffff;
}



// FUNCTION 147fb699e FUN_147fb699e body=316 status=ok
// SIG undefined FUN_147fb699e(void)

void FUN_147fb699e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14acf3660);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar4 = FUN_1448332aa(param_2,&DAT_14acf3660);
    puVar6 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    puVar6[1] = &DAT_100000001;
    *puVar6 = &PTR_LAB_14acfdfd0;
    FUN_145a5992e(puVar6 + 2);
    plVar3 = (longlong *)param_1[1];
    *param_1 = (longlong)(puVar6 + 2);
    param_1[1] = (longlong)puVar6;
    if (iVar4 < 1) {
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
                    /* WARNING: Could not recover jumptable at 0x000147fb6ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
      }
      return;
    }
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
  if (DAT_14cb284e8 == 0) {
    uVar5 = FUN_140bffa48();
    DAT_14cb284e8 = FUN_140002ddd(FUN_1464530ff,uVar5,L"StateTreeInstanceStorage");
  }
  FUN_14047320e(DAT_14cb284e8,param_2,*param_1,0);
  return;
}



// FUNCTION 147fb6ada FUN_147fb6ada body=354 status=ok
// SIG undefined FUN_147fb6ada(void)

void FUN_147fb6ada(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cb284e8 == 0) {
    uVar4 = FUN_140bffa48();
    DAT_14cb284e8 = FUN_140002ddd(FUN_1464530ff,uVar4,L"StateTreeInstanceStorage");
  }
  lVar3 = DAT_14cb284e8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  plVar2 = *(longlong **)(lVar3 + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2,*param_1,param_2);
  }
  uVar4 = *param_1;
  uVar5 = FUN_1446dcc8c();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar5,lVar3,uVar4);
  while (0 < (int)local_48) {
    puVar7 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar7 = local_750;
    }
    puVar6 = *(undefined1 **)(puVar7 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar7 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar6 = puVar7 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    plVar2 = *(longlong **)
              (*(longlong *)
                (*(longlong *)
                  (puVar6 + (longlong)*(int *)(puVar7 + (ulonglong)local_48 * 0xe0 + -8) * 0x18) +
                0x70) + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))
                (plVar2,*(undefined8 *)
                         (puVar6 + (longlong)*(int *)(puVar7 + (ulonglong)local_48 * 0xe0 + -8) *
                                   0x18 + 8),param_2);
    }
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb6c3e FUN_147fb6c3e body=150 status=ok
// SIG undefined FUN_147fb6c3e(void)

void FUN_147fb6c3e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != param_1) {
    param_1 = (longlong *)*param_1;
    FUN_14688c546(param_1,*param_3);
    iVar4 = *(int *)((longlong)param_1 + 0xc);
    if (iVar4 != 0) {
      iVar5 = -0x10;
      do {
        lVar3 = *param_1;
        lVar1 = (longlong)((int)param_1[1] + iVar5);
        plVar2 = (longlong *)
                 FUN_147fb5651(*(undefined8 *)(lVar3 + lVar1),*(int *)(lVar3 + 8 + lVar1) + lVar3);
        if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
          lVar3 = FUN_1438d39f0(*plVar2,param_2);
          if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar3);
          }
          *plVar2 = lVar3;
        }
        iVar5 = iVar5 + -0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}



// FUNCTION 147fb6cd4 FUN_147fb6cd4 body=305 status=ok
// SIG undefined FUN_147fb6cd4(void)

void FUN_147fb6cd4(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FUN_14688cc02(param_1);
  if ((int)uVar1 < *(int *)((longlong)param_1 + 0xc)) {
    iVar6 = ~uVar1 << 4;
    lVar7 = 0;
    do {
      lVar5 = *param_1;
      lVar3 = (longlong)((int)param_1[1] + iVar6);
      lVar2 = *(longlong *)(lVar5 + lVar3);
      lVar5 = *(int *)(lVar5 + 8 + lVar3) + lVar5;
      if ((((lVar5 == 0) || (lVar2 == 0)) ||
          (plVar4 = *(longlong **)(*param_4 + lVar7 * 8), plVar4 == (longlong *)0x0)) ||
         ((plVar4[1] == 0 || (*plVar4 == 0)))) {
        plVar4 = (longlong *)FUN_147fb5651();
        if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
          lVar5 = FUN_1438d39f0(*plVar4,param_2);
          if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar5);
          }
          *plVar4 = lVar5;
        }
      }
      else {
        FUN_145de6046(lVar5,plVar4[1],
                      (longlong)
                      (int)(-*(int *)(lVar2 + 0x5c) &
                           (*(int *)(lVar2 + 0x58) + *(int *)(lVar2 + 0x5c)) - 1U));
        FUN_1401f9f5c(plVar4);
      }
      lVar5 = (int)uVar1 + lVar7;
      lVar7 = lVar7 + 1;
      iVar6 = iVar6 + -0x10;
    } while (lVar5 + 1 < (longlong)*(int *)((longlong)param_1 + 0xc));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fb6e06 FUN_147fb6e06 body=8 status=ok
// SIG undefined FUN_147fb6e06(void)

void FUN_147fb6e06(undefined8 *param_1)

{
  FUN_14688cd08(*param_1);
  return;
}



// FUNCTION 147fb6e12 FUN_147fb6e12 body=561 status=ok
// SIG undefined FUN_147fb6e12(void)

undefined8 FUN_147fb6e12(longlong *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = &DAT_14c8731a0;
  local_60 = &DAT_14c8731a0;
  local_58 = &DAT_14c8731a2;
  local_50 = 0;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (int)uVar1 >> 0x1f & uVar1;
  uVar1 = uVar1 - uVar3;
  if (0 < (int)uVar1) {
    puVar6 = (undefined8 *)((longlong)(int)uVar3 * 0x18 + *param_1);
    puVar2 = puVar6 + (ulonglong)uVar1 * 3;
    iVar5 = 0;
    local_88 = param_2;
    do {
      if (iVar5 != 0) {
        if (local_58 <= local_60 + 1) {
          FUN_140213274(&local_68,1);
        }
        *local_60 = 0x2e;
        local_60 = local_60 + 1;
      }
      if (param_3 == iVar5) {
        if (local_58 <= local_60 + 1) {
          FUN_140213274(&local_68,1);
        }
        *local_60 = 0x3c;
        local_60 = local_60 + 1;
      }
      local_80 = *puVar6;
      FUN_1400021e4(&local_80,&local_78);
      iVar4 = local_70 + -1;
      if (local_70 == 0) {
        iVar4 = 0;
      }
      FUN_1449668a2(&local_68,local_78,iVar4);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (-1 < *(int *)(puVar6 + 1)) {
        FUN_140002266(&local_78,L"[%d]");
        iVar4 = local_70 + -1;
        if (local_70 == 0) {
          iVar4 = 0;
        }
        FUN_1449668a2(&local_68,local_78,iVar4);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      if (param_3 == iVar5) {
        if (local_58 <= local_60 + 1) {
          FUN_140213274(&local_68,1);
        }
        *local_60 = 0x3e;
        local_60 = local_60 + 1;
      }
      puVar6 = puVar6 + 3;
      iVar5 = iVar5 + 1;
      param_2 = local_88;
    } while (puVar6 != puVar2);
  }
  *local_60 = 0;
  FUN_140056680(param_2,local_68);
  FUN_144724f3c(&local_68);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb7044 FUN_147fb7044 body=106 status=ok
// SIG undefined FUN_147fb7044(void)

void FUN_147fb7044(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147fc052e(param_1,iVar1);
    }
    FUN_147fc04d4((longlong)iVar1 * 0x58 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147fc05be(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147fb70b0 FUN_147fb70b0 body=4093 status=ok
// SIG undefined FUN_147fb70b0(void)

undefined8 FUN_147fb70b0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    return 0;
  }
  if (param_2[2] == 0) {
    return 0;
  }
  lVar5 = *param_1;
  lVar7 = *param_2;
  *(longlong *)(param_3 + 0x30) = lVar5;
  *(longlong *)(param_3 + 0x38) = lVar7;
  *(undefined4 *)(param_3 + 0x48) = 0;
  *(undefined1 *)(param_3 + 0x52) = 0;
  if (lVar5 == 0) {
    if (lVar7 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(lVar7 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar8) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar8 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (!bVar8) goto LAB_147fb72e7;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147fb72e7:
      lVar5 = *(longlong *)(lVar7 + 8);
      lVar3 = FUN_1446f4b16();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar8 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar8) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar8 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (!bVar8) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(lVar7 + 0x70);
      if (lVar5 == 0) {
        return 0;
      }
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          *(undefined1 *)(param_3 + 0x52) = 5;
          return 1;
        }
        return 0;
      }
      return 0;
    }
    if (*(longlong *)(lVar7 + 0x70) != lVar6) {
      return 0;
    }
    goto LAB_147fb7660;
  }
  if (lVar7 != 0) {
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar3 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar3) break;
        } while (lVar6 != 0);
      }
      if (bVar8) goto LAB_147fb7124;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fb7124:
      if (DAT_14cb289a0 == 0) {
        uVar4 = FUN_140bffa48();
        DAT_14cb289a0 = FUN_140002ddd(FUN_1464546c9,uVar4,L"StateTreeStructRef");
      }
      if (*(longlong *)(lVar7 + 0x70) == DAT_14cb289a0) {
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar3 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar8 = lVar6 != 0;
          if (lVar6 != lVar3 && bVar8) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar8 = lVar6 != 0;
              if (lVar6 == lVar3) break;
            } while (lVar6 != 0);
          }
          if (bVar8) goto LAB_147fb717c;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fb717c:
          if (DAT_14cb289a0 == 0) {
            uVar4 = FUN_140bffa48();
            DAT_14cb289a0 = FUN_140002ddd(FUN_1464546c9,uVar4,L"StateTreeStructRef");
          }
          if (*(longlong *)(lVar5 + 0x70) != DAT_14cb289a0) {
            *(undefined1 *)(param_3 + 0x52) = 8;
            return 1;
          }
        }
      }
    }
  }
  iVar2 = FUN_147fb8142(lVar5,lVar7);
  lVar6 = *(longlong *)(lVar5 + 8);
  lVar3 = FUN_144a7add4();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (bVar8) goto LAB_147fb724e;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fb724e:
    lVar5 = *(longlong *)(lVar5 + 0x70);
  }
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar3 = FUN_144a7add4();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar3 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar3) break;
        } while (lVar6 != 0);
      }
      if (bVar8) goto LAB_147fb7373;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fb7373:
      lVar7 = *(longlong *)(lVar7 + 0x70);
    }
  }
  if (iVar2 == 2) {
    lVar6 = *(longlong *)(lVar5 + 8);
    lVar3 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar3 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar3) break;
        } while (lVar6 != 0);
      }
      if (!bVar8) goto LAB_147fb7498;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147fb7498:
      lVar6 = *(longlong *)(lVar5 + 8);
      lVar3 = FUN_14475a8dc();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar8 = lVar6 != 0;
        if (lVar6 != lVar3 && bVar8) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar8 = lVar6 != 0;
            if (lVar6 == lVar3) break;
          } while (lVar6 != 0);
        }
        if (!bVar8) goto LAB_147fb75c6;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147fb75c6:
        lVar6 = *(longlong *)(lVar5 + 8);
        lVar3 = FUN_144a7452c();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar8 = lVar6 != 0;
          if (lVar6 != lVar3 && bVar8) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar8 = lVar6 != 0;
              if (lVar6 == lVar3) break;
            } while (lVar6 != 0);
          }
          if (!bVar8) goto LAB_147fb774e;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147fb774e:
          lVar6 = *(longlong *)(lVar5 + 8);
          lVar3 = FUN_144a8cc30();
          if (*(ulonglong *)(lVar3 + 8) == 0) {
            bVar8 = lVar6 != 0;
            if (lVar6 != lVar3 && bVar8) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar8 = lVar6 != 0;
                if (lVar6 == lVar3) break;
              } while (lVar6 != 0);
            }
            if (!bVar8) goto LAB_147fb796e;
          }
          else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147fb796e:
            lVar6 = *(longlong *)(lVar5 + 8);
            lVar3 = FUN_144a64e42();
            if (*(ulonglong *)(lVar3 + 8) == 0) {
              bVar8 = lVar6 != 0;
              if (lVar6 != lVar3 && bVar8) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar8 = lVar6 != 0;
                  if (lVar6 == lVar3) break;
                } while (lVar6 != 0);
              }
              if (!bVar8) goto LAB_147fb7ba6;
            }
            else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147fb7ba6:
              lVar6 = *(longlong *)(lVar5 + 8);
              lVar5 = FUN_144a49fc8();
              if (*(ulonglong *)(lVar5 + 8) == 0) {
                bVar8 = lVar6 != 0;
                if (lVar6 != lVar5 && bVar8) {
                  do {
                    lVar6 = *(longlong *)(lVar6 + 0x30);
                    bVar8 = lVar6 != 0;
                    if (lVar6 == lVar5) break;
                  } while (lVar6 != 0);
                }
                if (!bVar8) {
                  return 0;
                }
              }
              else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
                return 0;
              }
              lVar6 = *(longlong *)(lVar7 + 8);
              lVar5 = FUN_144a7452c();
              if (*(ulonglong *)(lVar5 + 8) == 0) {
                bVar8 = lVar6 != 0;
                if (lVar6 != lVar5 && bVar8) {
                  do {
                    lVar6 = *(longlong *)(lVar6 + 0x30);
                    bVar8 = lVar6 != 0;
                    if (lVar6 == lVar5) break;
                  } while (lVar6 != 0);
                }
                if (bVar8) goto LAB_147fb7be6;
              }
              else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb7be6:
                *(undefined1 *)(param_3 + 0x52) = 0x1d;
                return 1;
              }
              lVar6 = *(longlong *)(lVar7 + 8);
              lVar5 = FUN_144a83f76();
              if (*(ulonglong *)(lVar5 + 8) == 0) {
                bVar8 = lVar6 != 0;
                if (lVar6 != lVar5 && bVar8) {
                  do {
                    lVar6 = *(longlong *)(lVar6 + 0x30);
                    bVar8 = lVar6 != 0;
                    if (lVar6 == lVar5) break;
                  } while (lVar6 != 0);
                }
                if (!bVar8) goto LAB_147fb801f;
              }
              else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
LAB_147fb801f:
                lVar6 = *(longlong *)(lVar7 + 8);
                lVar5 = FUN_144a64e42();
                if (*(ulonglong *)(lVar5 + 8) == 0) {
                  bVar8 = lVar6 != 0;
                  if (lVar6 != lVar5 && bVar8) {
                    do {
                      lVar6 = *(longlong *)(lVar6 + 0x30);
                      bVar8 = lVar6 != 0;
                      if (lVar6 == lVar5) break;
                    } while (lVar6 != 0);
                  }
                  if (!bVar8) {
                    return 0;
                  }
                }
                else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
                  return 0;
                }
                *(undefined1 *)(param_3 + 0x52) = 0x1f;
                return 1;
              }
              *(undefined1 *)(param_3 + 0x52) = 0x1e;
              return 1;
            }
            lVar6 = *(longlong *)(lVar7 + 8);
            lVar5 = FUN_144a7452c();
            if (*(ulonglong *)(lVar5 + 8) == 0) {
              bVar8 = lVar6 != 0;
              if (lVar6 != lVar5 && bVar8) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar8 = lVar6 != 0;
                  if (lVar6 == lVar5) break;
                } while (lVar6 != 0);
              }
              if (bVar8) goto LAB_147fb79ae;
            }
            else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb79ae:
              *(undefined1 *)(param_3 + 0x52) = 0x1a;
              return 1;
            }
            lVar6 = *(longlong *)(lVar7 + 8);
            lVar5 = FUN_144a83f76();
            if (*(ulonglong *)(lVar5 + 8) == 0) {
              bVar8 = lVar6 != 0;
              if (lVar6 != lVar5 && bVar8) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar8 = lVar6 != 0;
                  if (lVar6 == lVar5) break;
                } while (lVar6 != 0);
              }
              if (!bVar8) goto LAB_147fb7f23;
            }
            else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
LAB_147fb7f23:
              lVar6 = *(longlong *)(lVar7 + 8);
              lVar5 = FUN_144a49fc8();
              if (*(ulonglong *)(lVar5 + 8) == 0) {
                bVar8 = lVar6 != 0;
                if (lVar6 != lVar5 && bVar8) {
                  do {
                    lVar6 = *(longlong *)(lVar6 + 0x30);
                    bVar8 = lVar6 != 0;
                    if (lVar6 == lVar5) break;
                  } while (lVar6 != 0);
                }
                if (!bVar8) {
                  return 0;
                }
              }
              else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
                return 0;
              }
              *(undefined1 *)(param_3 + 0x52) = 0x1c;
              return 1;
            }
            *(undefined1 *)(param_3 + 0x52) = 0x1b;
            return 1;
          }
          lVar6 = *(longlong *)(lVar7 + 8);
          lVar5 = FUN_144a83f76();
          if (*(ulonglong *)(lVar5 + 8) == 0) {
            bVar8 = lVar6 != 0;
            if (lVar6 != lVar5 && bVar8) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar8 = lVar6 != 0;
                if (lVar6 == lVar5) break;
              } while (lVar6 != 0);
            }
            if (bVar8) goto LAB_147fb778e;
          }
          else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb778e:
            *(undefined1 *)(param_3 + 0x52) = 0x17;
            return 1;
          }
          lVar6 = *(longlong *)(lVar7 + 8);
          lVar5 = FUN_144a64e42();
          if (*(ulonglong *)(lVar5 + 8) == 0) {
            bVar8 = lVar6 != 0;
            if (lVar6 != lVar5 && bVar8) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar8 = lVar6 != 0;
                if (lVar6 == lVar5) break;
              } while (lVar6 != 0);
            }
            if (!bVar8) goto LAB_147fb7d0e;
          }
          else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
LAB_147fb7d0e:
            lVar6 = *(longlong *)(lVar7 + 8);
            lVar5 = FUN_144a49fc8();
            if (*(ulonglong *)(lVar5 + 8) == 0) {
              bVar8 = lVar6 != 0;
              if (lVar6 != lVar5 && bVar8) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar8 = lVar6 != 0;
                  if (lVar6 == lVar5) break;
                } while (lVar6 != 0);
              }
              if (!bVar8) {
                return 0;
              }
            }
            else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
              return 0;
            }
            *(undefined1 *)(param_3 + 0x52) = 0x19;
            return 1;
          }
          *(undefined1 *)(param_3 + 0x52) = 0x18;
          return 1;
        }
        lVar6 = *(longlong *)(lVar7 + 8);
        lVar5 = FUN_144a83f76();
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar8 = lVar6 != 0;
          if (lVar6 != lVar5 && bVar8) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar8 = lVar6 != 0;
              if (lVar6 == lVar5) break;
            } while (lVar6 != 0);
          }
          if (bVar8) goto LAB_147fb7606;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb7606:
          *(undefined1 *)(param_3 + 0x52) = 0x14;
          return 1;
        }
        lVar6 = *(longlong *)(lVar7 + 8);
        lVar5 = FUN_144a64e42();
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar8 = lVar6 != 0;
          if (lVar6 != lVar5 && bVar8) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar8 = lVar6 != 0;
              if (lVar6 == lVar5) break;
            } while (lVar6 != 0);
          }
          if (!bVar8) goto LAB_147fb7a98;
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
LAB_147fb7a98:
          lVar6 = *(longlong *)(lVar7 + 8);
          lVar5 = FUN_144a49fc8();
          if (*(ulonglong *)(lVar5 + 8) == 0) {
            bVar8 = lVar6 != 0;
            if (lVar6 != lVar5 && bVar8) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar8 = lVar6 != 0;
                if (lVar6 == lVar5) break;
              } while (lVar6 != 0);
            }
            if (!bVar8) {
              return 0;
            }
          }
          else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
            return 0;
          }
          *(undefined1 *)(param_3 + 0x52) = 0x16;
          return 1;
        }
        *(undefined1 *)(param_3 + 0x52) = 0x15;
        return 1;
      }
      lVar6 = *(longlong *)(lVar7 + 8);
      lVar5 = FUN_144a7452c();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar8) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar8 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (bVar8) goto LAB_147fb74d8;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb74d8:
        *(undefined1 *)(param_3 + 0x52) = 0xf;
        return 1;
      }
      lVar6 = *(longlong *)(lVar7 + 8);
      lVar5 = FUN_144a8cc30();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar8) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar8 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (bVar8) goto LAB_147fb76ba;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb76ba:
        *(undefined1 *)(param_3 + 0x52) = 0x10;
        return 1;
      }
      lVar6 = *(longlong *)(lVar7 + 8);
      lVar5 = FUN_144a83f76();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar8) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar8 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (bVar8) goto LAB_147fb78da;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb78da:
        *(undefined1 *)(param_3 + 0x52) = 0x11;
        return 1;
      }
      lVar6 = *(longlong *)(lVar7 + 8);
      lVar5 = FUN_144a64e42();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar8) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar8 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (bVar8) goto LAB_147fb7b12;
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb7b12:
        *(undefined1 *)(param_3 + 0x52) = 0x12;
        return 1;
      }
      lVar6 = *(longlong *)(lVar7 + 8);
      lVar5 = FUN_144a49fc8();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar8) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar8 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (!bVar8) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
        return 0;
      }
      *(undefined1 *)(param_3 + 0x52) = 0x13;
      return 1;
    }
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar5 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (bVar8) goto LAB_147fb73f7;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb73f7:
      *(undefined1 *)(param_3 + 0x52) = 9;
      return 1;
    }
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar5 = FUN_144a7452c();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (bVar8) goto LAB_147fb758c;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb758c:
      *(undefined1 *)(param_3 + 0x52) = 10;
      return 1;
    }
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar5 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (bVar8) goto LAB_147fb7714;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb7714:
      *(undefined1 *)(param_3 + 0x52) = 0xb;
      return 1;
    }
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar5 = FUN_144a83f76();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (bVar8) goto LAB_147fb7934;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb7934:
      *(undefined1 *)(param_3 + 0x52) = 0xc;
      return 1;
    }
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar5 = FUN_144a64e42();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (!bVar8) goto LAB_147fb7df8;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
LAB_147fb7df8:
      lVar6 = *(longlong *)(lVar7 + 8);
      lVar5 = FUN_144a49fc8();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar8 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar8) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar8 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (!bVar8) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) {
        return 0;
      }
      *(undefined1 *)(param_3 + 0x52) = 0xe;
      return 1;
    }
    *(undefined1 *)(param_3 + 0x52) = 0xd;
    return 1;
  }
  if (iVar2 != 1) {
    return 0;
  }
  if (lVar7 == 0) goto LAB_147fb7c61;
  lVar6 = *(longlong *)(lVar7 + 8);
  lVar3 = FUN_144a63fc8();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (bVar8) goto LAB_147fb73ae;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fb73ae:
    *(undefined1 *)(param_3 + 0x52) = 6;
    return 1;
  }
  lVar6 = *(longlong *)(lVar7 + 8);
  lVar3 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (bVar8) goto LAB_147fb7532;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fb7532:
    *(undefined1 *)(param_3 + 0x52) = 3;
    return 1;
  }
  lVar6 = *(longlong *)(lVar7 + 8);
  lVar3 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (bVar8) goto LAB_147fb7660;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147fb7660:
    *(undefined1 *)(param_3 + 0x52) = 4;
    return 1;
  }
  lVar6 = *(longlong *)(lVar7 + 8);
  lVar3 = FUN_1446f4b16();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (!bVar8) goto LAB_147fb79e8;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147fb79e8:
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar3 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar3) break;
        } while (lVar6 != 0);
      }
      if (!bVar8) goto LAB_147fb7c61;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_147fb7c61;
    if ((*(byte *)(lVar7 + 0x38) & 0x40) != 0) {
      *(undefined1 *)(param_3 + 0x52) = 7;
      return 1;
    }
LAB_147fb7c61:
    if ((*(byte *)(lVar7 + 0x3b) & 0x40) == 0) {
      *(undefined1 *)(param_3 + 0x52) = 2;
      return 1;
    }
    *(undefined1 *)(param_3 + 0x52) = 1;
    *(int *)(param_3 + 0x48) = *(int *)(lVar5 + 0x30) * *(int *)(lVar5 + 0x34);
    return 1;
  }
  lVar6 = *(longlong *)(lVar5 + 8);
  lVar5 = FUN_1446ef9c4();
  if (*(ulonglong *)(lVar5 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar5 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar5) break;
      } while (lVar6 != 0);
    }
    if (bVar8) goto LAB_147fb7808;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_147fb7808:
    lVar6 = *(longlong *)(lVar7 + 8);
    lVar5 = FUN_1446ef9c4();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      uVar1 = 2;
      if (bVar8) goto LAB_147fb7c22;
    }
    else {
      uVar1 = 2;
      if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_147fb7c22;
    }
  }
  uVar1 = 5;
LAB_147fb7c22:
  *(undefined1 *)(param_3 + 0x52) = uVar1;
  return 1;
}



// FUNCTION 147fb80ae FUN_147fb80ae body=63 status=ok
// SIG undefined FUN_147fb80ae(void)

longlong FUN_147fb80ae(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147fc068e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_147fc0664(lVar2);
  return lVar2;
}



// FUNCTION 147fb80ee FUN_147fb80ee body=83 status=ok
// SIG undefined FUN_147fb80ee(void)

longlong FUN_147fb80ee(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar1 + 1U) {
    FUN_147fc073a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_147fc0722(lVar2);
  return lVar2;
}



// FUNCTION 147fb8142 FUN_147fb8142 body=3177 status=ok
// SIG undefined FUN_147fb8142(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_147fb8142(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (param_1 == param_2) {
    return &DAT_00000001;
  }
  if (param_2 == (longlong *)0x0) {
    return (undefined1 *)0x0;
  }
  lVar3 = param_1[1];
  lVar2 = FUN_1446f4b16();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar6) goto LAB_147fb8188;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147fb8188:
    lVar3 = param_2[1];
    lVar2 = FUN_1446f4b16();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) goto LAB_147fb81a8;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147fb81a8:
      lVar3 = param_1[1];
      lVar2 = FUN_1446f4b16();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
      }
      else {
        bVar6 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
      }
      plVar5 = (longlong *)0x0;
      if (bVar6) {
        plVar5 = param_1;
      }
      lVar3 = param_2[1];
      lVar2 = FUN_1446f4b16();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
      }
      else {
        bVar6 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
      }
      if (!bVar6) {
        param_2 = (longlong *)0x0;
      }
      lVar3 = param_2[0xe];
      if (lVar3 == 0) {
        return (undefined1 *)0x0;
      }
      if (*(int *)(plVar5[0xe] + 0x38) < *(int *)(lVar3 + 0x38)) {
        return (undefined1 *)0x0;
      }
      bVar6 = *(longlong *)
               (*(longlong *)(plVar5[0xe] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30;
      goto LAB_147fb826f;
    }
  }
  lVar3 = FUN_1438d499a(param_2);
  if (lVar3 != 0) {
    lVar2 = FUN_1438d499a(param_1);
    bVar6 = lVar3 == lVar2;
LAB_147fb826f:
    return (undefined1 *)(ulonglong)bVar6;
  }
  lVar3 = param_1[1];
  lVar2 = FUN_144a7add4();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar6) goto LAB_147fb8293;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147fb8293:
    param_1 = (longlong *)param_1[0xe];
  }
  cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,param_2);
  if (cVar1 != '\0') {
    return &DAT_00000001;
  }
  lVar3 = param_1[1];
  lVar2 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar6) goto LAB_147fb82ce;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147fb82ce:
    lVar3 = param_2[1];
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a7452c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a83f76();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a64e42();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a49fc8();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      goto LAB_147fb8c3d;
    }
    goto LAB_147fb86c8;
  }
  lVar3 = param_1[1];
  lVar2 = FUN_14475a8dc();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar6) goto LAB_147fb84fc;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147fb84fc:
    lVar3 = param_2[1];
    lVar2 = FUN_144a7452c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a8cc30();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a83f76();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a64e42();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a49fc8();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      goto LAB_147fb8c3d;
    }
    goto LAB_147fb86c8;
  }
  lVar3 = param_1[1];
  lVar2 = FUN_144a7452c();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar6) {
LAB_147fb8668:
      lVar3 = param_2[1];
      lVar2 = FUN_144a83f76();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
        if (bVar6) {
          return (undefined1 *)0x2;
        }
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
        return (undefined1 *)0x2;
      }
      lVar3 = param_2[1];
      lVar2 = FUN_144a64e42();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
        if (bVar6) {
          return (undefined1 *)0x2;
        }
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
        return (undefined1 *)0x2;
      }
      lVar3 = param_2[1];
      lVar2 = FUN_144a49fc8();
      uVar4 = *(ulonglong *)(lVar2 + 8);
      if (uVar4 == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
        goto LAB_147fb8c3d;
      }
      goto LAB_147fb86c8;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_147fb8668;
  lVar3 = param_1[1];
  lVar2 = FUN_144a8cc30();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (!bVar6) goto LAB_147fb891b;
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
LAB_147fb891b:
    lVar3 = param_1[1];
    lVar2 = FUN_144a64e42();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) goto LAB_147fb893b;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147fb893b:
      lVar3 = param_2[1];
      lVar2 = FUN_144a7452c();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
        if (bVar6) {
          return (undefined1 *)0x2;
        }
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
        return (undefined1 *)0x2;
      }
      lVar3 = param_2[1];
      lVar2 = FUN_144a83f76();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
        if (bVar6) {
          return (undefined1 *)0x2;
        }
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
        return (undefined1 *)0x2;
      }
      lVar3 = param_2[1];
      lVar2 = FUN_144a49fc8();
      uVar4 = *(ulonglong *)(lVar2 + 8);
      if (uVar4 == 0) {
        bVar6 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar6) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar6 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
        goto LAB_147fb8c3d;
      }
      goto LAB_147fb86c8;
    }
    lVar3 = param_1[1];
    lVar2 = FUN_144a49fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar6) {
        return (undefined1 *)0x0;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return (undefined1 *)0x0;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a7452c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a83f76();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (bVar6) {
        return (undefined1 *)0x2;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
      return (undefined1 *)0x2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a64e42();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      bVar6 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar6) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar6 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      goto LAB_147fb8c3d;
    }
    goto LAB_147fb86c8;
  }
  lVar3 = param_2[1];
  lVar2 = FUN_144a83f76();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar6) {
      return (undefined1 *)0x2;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
    return (undefined1 *)0x2;
  }
  lVar3 = param_2[1];
  lVar2 = FUN_144a64e42();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
    if (bVar6) {
      return (undefined1 *)0x2;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
    return (undefined1 *)0x2;
  }
  lVar3 = param_2[1];
  lVar2 = FUN_144a49fc8();
  uVar4 = *(ulonglong *)(lVar2 + 8);
  if (uVar4 == 0) {
    bVar6 = lVar3 != 0;
    if (lVar3 != lVar2 && bVar6) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar6 = lVar3 != 0;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
LAB_147fb8c3d:
    if (!bVar6) {
      return (undefined1 *)0x0;
    }
    return (undefined1 *)0x2;
  }
LAB_147fb86c8:
  if ((*(ulonglong *)(lVar3 + 0x18) & uVar4) == 0) {
    return (undefined1 *)0x0;
  }
  return (undefined1 *)0x2;
}



// FUNCTION 147fb8dac FUN_147fb8dac body=600 status=ok
// SIG undefined FUN_147fb8dac(void)

ushort * FUN_147fb8dac(longlong param_1,longlong param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  char cVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  puVar7 = *(ushort **)(param_2 + 8);
  puVar4 = param_3;
  if (puVar7 == (ushort *)0x0) {
LAB_147fb8f96:
    puVar7 = (ushort *)0x0;
  }
  else {
    while (puVar4 != (ushort *)0x0) {
      switch((char)param_3[3]) {
      case '\0':
        puVar7 = (ushort *)((longlong)puVar7 + (ulonglong)param_3[1]);
        break;
      case '\x01':
        puVar7 = *(ushort **)((longlong)puVar7 + (ulonglong)param_3[1]);
        break;
      case '\x02':
        puVar7 = (ushort *)FUN_14479d2ce((longlong)puVar7 + (ulonglong)param_3[1]);
        break;
      case '\x03':
        lVar8 = (longlong)puVar7 + (ulonglong)param_3[1];
        puVar7 = (ushort *)FUN_14479d2ce(lVar8);
        if (puVar7 == (ushort *)0x0) {
          if (*(longlong *)(lVar8 + 8) == 0) {
LAB_147fb8f8f:
            puVar7 = (ushort *)0x0;
          }
          else {
            puVar7 = (ushort *)FUN_140007850();
            cVar5 = (*(code *)PTR_FUN_14c758760)();
            if ((puVar7 == (ushort *)0x0) || (cVar5 == '\0')) {
              FUN_14485c47a(lVar8,puVar7);
              if (puVar7 == (ushort *)0x0) goto LAB_147fb8f8f;
            }
            else {
              uVar3 = *(uint *)(puVar7 + 6);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(lVar8,puVar7);
              }
            }
            if ((*(uint *)(puVar7 + 4) >> 0x1e & 1) != 0) {
              puVar7 = (ushort *)0x0;
            }
          }
        }
        break;
      case '\x04':
        puVar7 = *(ushort **)((longlong)puVar7 + (ulonglong)param_3[1]);
        if ((puVar7 == (ushort *)0x0) || (lVar8 = *(longlong *)(param_3 + 4), lVar8 == 0))
        goto LAB_147fb8f96;
        if ((*(int *)(*(longlong *)(puVar7 + 8) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(puVar7 + 8) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
             ) != lVar8 + 0x30)) goto LAB_147fb8f96;
        break;
      case '\x05':
        lVar8 = *(longlong *)((longlong)puVar7 + (ulonglong)param_3[1]);
        if ((((lVar8 == 0) || (lVar6 = *(longlong *)(param_3 + 4), lVar6 == 0)) ||
            (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) goto LAB_147fb8f96;
        puVar7 = *(ushort **)((longlong)puVar7 + (ulonglong)param_3[1] + 8);
        break;
      case '\x06':
        uVar2 = param_3[1];
        lVar8 = *(longlong *)(param_3 + 8);
        bVar1 = *(byte *)(lVar8 + 0x70);
        (**(code **)(**(longlong **)(lVar8 + 0x78) + 0x178))();
        if (*(int *)((longlong)puVar7 + (ulonglong)uVar2 + 8) <= (int)(uint)*param_3)
        goto LAB_147fb8f96;
        puVar9 = (ulonglong *)((longlong)puVar7 + (ulonglong)uVar2);
        if ((bVar1 & 1) == 0) {
          uVar10 = *puVar9;
        }
        else {
          uVar10 = *puVar9;
          if ((uVar10 & 1) != 0) {
            uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
          }
        }
        puVar7 = (ushort *)
                 ((ulonglong)*param_3 * (longlong)*(int *)(*(longlong *)(lVar8 + 0x78) + 0x34) +
                 uVar10);
      }
      if (param_3[2] == 0xffff) {
        return puVar7;
      }
      param_3 = (ushort *)((ulonglong)((uint)param_3[2] * 0x18) + *(longlong *)(param_1 + 0x60));
      puVar4 = puVar7;
      if (param_3 == (ushort *)0x0) {
        return puVar7;
      }
    }
  }
  return puVar7;
}



// FUNCTION 147fb9004 FUN_147fb9004 body=909 status=ok
// SIG undefined FUN_147fb9004(void)

void FUN_147fb9004(longlong param_1,double *param_2,double *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  void *_Src;
  double dVar8;
  void *_Dst;
  longlong lVar9;
  byte bVar10;
  size_t _Size;
  longlong lVar11;
  float fVar12;
  
  switch(*(undefined1 *)(param_1 + 0x52)) {
  case 1:
    _Size = (size_t)*(int *)(param_1 + 0x48);
    goto LAB_147fb9174;
  case 2:
    if (param_3 == param_2) {
      return;
    }
    plVar6 = *(longlong **)(param_1 + 0x38);
    if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147fb91ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x100))(plVar6,param_3,param_2,(int)plVar6[6]);
      return;
    }
    _Size = (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34);
LAB_147fb9174:
    memcpy(param_3,param_2,_Size);
    return;
  case 3:
    lVar9 = *(longlong *)(param_1 + 0x38);
    if ((*(byte *)((longlong)param_2 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x30) + 0x71)) &
        *(byte *)(*(longlong *)(param_1 + 0x30) + 0x73)) == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)(lVar9 + 0x72);
    }
    *(byte *)((longlong)param_3 + (ulonglong)*(byte *)(lVar9 + 0x71)) =
         *(byte *)((longlong)param_3 + (ulonglong)*(byte *)(lVar9 + 0x71)) &
         ~*(byte *)(lVar9 + 0x73) | bVar10;
    break;
  case 4:
    FUN_1449b16b6(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x70),param_3,param_2,1);
    return;
  case 5:
    plVar6 = *(longlong **)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      param_2 = (double *)(**(code **)(*plVar6 + 0x210))(plVar6,param_2);
    }
    FUN_14281147a(uVar4,param_3,param_2);
    return;
  case 6:
    dVar8 = *param_2;
    goto LAB_147fb9342;
  case 7:
    lVar9 = *(longlong *)(param_1 + 0x30);
    lVar5 = *(longlong *)(param_1 + 0x38);
    bVar10 = *(byte *)(lVar9 + 0x70);
    (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x178))();
    iVar2 = *(int *)(*(longlong *)(lVar9 + 0x78) + 0x34);
    bVar1 = *(byte *)(lVar5 + 0x70);
    (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
    fVar12 = *(float *)(param_3 + 1);
    if ((int)*(float *)(param_2 + 1) < (int)*(float *)(param_3 + 1)) {
      fVar12 = *(float *)(param_2 + 1);
    }
    uVar7 = (ulonglong)(uint)fVar12;
    if (0 < (int)fVar12) {
      iVar3 = *(int *)(*(longlong *)(lVar5 + 0x78) + 0x34);
      lVar9 = 0;
      lVar11 = 0;
      do {
        if (*(float *)(param_2 + 1) == 0.0) {
          _Src = (void *)0x0;
        }
        else {
          if ((bVar10 & 1) == 0) {
            dVar8 = *param_2;
          }
          else {
            dVar8 = *param_2;
            if (((ulonglong)dVar8 & 1) != 0) {
              dVar8 = (double)(((longlong)dVar8 >> 0x18) + (longlong)param_2);
            }
          }
          _Src = (void *)((longlong)dVar8 + lVar9);
        }
        if (*(float *)(param_3 + 1) == 0.0) {
          _Dst = (void *)0x0;
        }
        else {
          if ((bVar1 & 1) == 0) {
            dVar8 = *param_3;
          }
          else {
            dVar8 = *param_3;
            if (((ulonglong)dVar8 & 1) != 0) {
              dVar8 = (double)(((longlong)dVar8 >> 0x18) + (longlong)param_3);
            }
          }
          _Dst = (void *)((longlong)dVar8 + lVar11);
        }
        if (_Dst != _Src) {
          plVar6 = *(longlong **)(lVar5 + 0x78);
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,_Dst,_Src,1);
          }
          else {
            memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
        lVar11 = lVar11 + iVar3;
        lVar9 = lVar9 + iVar2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    break;
  case 8:
    *param_3 = *(double *)(*(longlong *)(param_1 + 0x30) + 0x70);
    param_3[1] = (double)param_2;
    break;
  case 9:
    *(bool *)param_3 =
         (*(byte *)((longlong)param_2 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x30) + 0x71))
         & *(byte *)(*(longlong *)(param_1 + 0x30) + 0x73)) != 0;
    break;
  case 10:
  case 0xb:
    *(uint *)param_3 =
         (uint)((*(byte *)((longlong)param_2 +
                          (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x30) + 0x71)) &
                *(byte *)(*(longlong *)(param_1 + 0x30) + 0x73)) != 0);
    break;
  case 0xc:
    *param_3 = (double)(ulonglong)
                       ((*(byte *)((longlong)param_2 +
                                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x30) + 0x71)) &
                        *(byte *)(*(longlong *)(param_1 + 0x30) + 0x73)) != 0);
    break;
  case 0xd:
    if ((*(byte *)((longlong)param_2 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x30) + 0x71)) &
        *(byte *)(*(longlong *)(param_1 + 0x30) + 0x73)) == 0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = 1.0;
    }
    goto LAB_147fb9327;
  case 0xe:
    if ((*(byte *)((longlong)param_2 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x30) + 0x71)) &
        *(byte *)(*(longlong *)(param_1 + 0x30) + 0x73)) == 0) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = 1.0;
    }
    goto LAB_147fb930b;
  case 0xf:
  case 0x10:
    fVar12 = (float)(uint)*(byte *)param_2;
    goto LAB_147fb9056;
  case 0x11:
    dVar8 = (double)(ulonglong)*(byte *)param_2;
    goto LAB_147fb9342;
  case 0x12:
    fVar12 = (float)*(byte *)param_2;
    goto LAB_147fb9327;
  case 0x13:
    dVar8 = (double)*(byte *)param_2;
    goto LAB_147fb930b;
  case 0x14:
    dVar8 = (double)(longlong)(int)*(float *)param_2;
    goto LAB_147fb9342;
  case 0x15:
    fVar12 = (float)(int)*(float *)param_2;
    goto LAB_147fb9327;
  case 0x16:
    dVar8 = (double)(int)*(float *)param_2;
    goto LAB_147fb930b;
  case 0x17:
    dVar8 = (double)(ulonglong)(uint)*(float *)param_2;
    goto LAB_147fb9342;
  case 0x18:
    fVar12 = (float)(uint)*(float *)param_2;
    goto LAB_147fb9327;
  case 0x19:
    dVar8 = (double)(uint)*(float *)param_2;
    goto LAB_147fb930b;
  case 0x1a:
    fVar12 = (float)(int)*(float *)param_2;
    goto LAB_147fb9056;
  case 0x1b:
    dVar8 = (double)(longlong)*(float *)param_2;
    goto LAB_147fb9342;
  case 0x1c:
    dVar8 = (double)*(float *)param_2;
LAB_147fb930b:
    *param_3 = dVar8;
    break;
  case 0x1d:
    fVar12 = (float)(int)*param_2;
LAB_147fb9056:
    *(float *)param_3 = fVar12;
    break;
  case 0x1e:
    dVar8 = (double)(longlong)*param_2;
LAB_147fb9342:
    *param_3 = dVar8;
    break;
  case 0x1f:
    fVar12 = (float)*param_2;
LAB_147fb9327:
    *(float *)param_3 = fVar12;
  }
  return;
}



// FUNCTION 147fb9392 FUN_147fb9392 body=193 status=ok
// SIG undefined FUN_147fb9392(void)

ulonglong FUN_147fb9392(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(char *)(param_2 + 0x52) == '\0') goto LAB_147fb93dd;
    if ((((param_3[1] != 0) && (*param_3 != 0)) && (param_4[1] != 0)) && (*param_4 != 0)) {
      local_48 = (undefined4)*param_3;
      uStack_44 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_40 = (undefined4)param_3[1];
      uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
      lVar1 = FUN_147fb8dac(local_48,&local_48,param_2);
      local_58 = (undefined4)*param_4;
      uStack_54 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_50 = (undefined4)param_4[1];
      uStack_4c = *(undefined4 *)((longlong)param_4 + 0xc);
      lVar2 = FUN_147fb8dac(param_1,&local_58,param_2 + 0x18);
      if (lVar2 != 0 && lVar1 != 0) {
        FUN_147fb9004(param_2,lVar1,lVar2);
        goto LAB_147fb93dd;
      }
    }
  }
  uVar3 = 0;
LAB_147fb93dd:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fb9454 FUN_147fb9454 body=337 status=ok
// SIG undefined FUN_147fb9454(void)

void FUN_147fb9454(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  switch(*(undefined1 *)(param_2 + 0x52)) {
  case 2:
    plVar4 = *(longlong **)(param_2 + 0x38);
    if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147fb94ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x160))(plVar4,param_3);
      return;
    }
    memset(param_3,0,(longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
    return;
  case 4:
    FUN_141095ae8(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x70),param_3,1);
    return;
  case 5:
    FUN_14281147a(*(undefined8 *)(param_2 + 0x38),param_3,0);
    return;
  case 7:
    lVar3 = *(longlong *)(param_2 + 0x38);
    bVar1 = *(byte *)(lVar3 + 0x70);
    (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
    if (0 < (int)param_3[1]) {
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x34);
      lVar7 = 0;
      lVar6 = 0;
      do {
        if ((bVar1 & 1) == 0) {
          uVar5 = *param_3;
        }
        else {
          uVar5 = *param_3;
          if ((uVar5 & 1) != 0) {
            uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_3;
          }
        }
        plVar4 = *(longlong **)(lVar3 + 0x78);
        if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
          (**(code **)(*plVar4 + 0x160))();
        }
        else {
          memset((void *)(uVar5 + lVar7),0,
                 (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
        }
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + iVar2;
      } while (lVar6 < (int)param_3[1]);
    }
    break;
  case 8:
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}



// FUNCTION 147fb95a6 FUN_147fb95a6 body=211 status=ok
// SIG undefined FUN_147fb95a6(void)

ulonglong FUN_147fb95a6(longlong param_1,ushort param_2,undefined4 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 unaff_RBX;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar7 = param_2 != 0xffff & *(byte *)(param_1 + 0x70);
  if (bVar7 == 1) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = (ulonglong)param_2 * 0x20;
    uVar1 = *(ushort *)(lVar2 + 0x18 + lVar6);
    uVar9 = (ulonglong)uVar1;
    uVar4 = *(ushort *)(lVar2 + 0x1a + lVar6);
    if (uVar1 != uVar4) {
      lVar8 = uVar9 * 0x58;
      do {
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (*(char *)(lVar3 + 0x52 + lVar8) != '\0') {
          local_58 = *param_3;
          uStack_54 = param_3[1];
          uStack_50 = param_3[2];
          uStack_4c = param_3[3];
          uVar5 = FUN_147fb8dac(param_1,&local_58,lVar3 + lVar8 + 0x18);
          FUN_147fb9454(extraout_XMM0_Da,lVar3 + lVar8,uVar5);
          uVar4 = *(ushort *)(lVar2 + lVar6 + 0x1a);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x58;
      } while (uVar9 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar7) & 0xffffffff;
}



// FUNCTION 147fb967a FUN_147fb967a body=425 status=ok
// SIG undefined FUN_147fb967a(void)

undefined4 FUN_147fb967a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined1 auVar12 [16];
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_78 = 0;
  uVar6 = FUN_147fb9824(local_68,&local_68,&local_58,param_3);
  lVar5 = local_58;
  if ((char)uVar6 != '\0') {
    if ((longlong)(int)param_1[1] != 0) {
      uVar1 = (longlong)(int)param_1[1] * 0x18 - 0x18;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar1;
      uVar11 = SUB164(auVar14 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
      uVar13 = (undefined4)(uVar1 / 0x180000000);
      auVar12._0_8_ = CONCAT44(uVar13,uVar11);
      auVar12._8_4_ = uVar11;
      auVar12._12_4_ = uVar13;
      puVar9 = (undefined8 *)(*param_1 + 0x28);
      uVar7 = 0;
      auVar14 = pmovsxbq(in_XMM1,0x100);
      do {
        if ((bool)(~((longlong)(auVar12._0_8_ >> 4 | 0x8000000000000000) <
                    (longlong)(uVar7 ^ 0x8000000000000000)) & 1)) {
          puVar9[-3] = 0;
        }
        auVar15._8_4_ = (int)uVar7;
        auVar15._0_8_ = uVar7;
        auVar15._12_4_ = (int)(uVar7 >> 0x20);
        if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ 0x8000000000000000) <=
            (longlong)(auVar12._8_8_ >> 4 | 0x8000000000000000)) {
          *puVar9 = 0;
        }
        uVar7 = uVar7 + 2;
        puVar9 = puVar9 + 6;
      } while ((uVar1 / 0x18 + 2 & 0xfffffffffffffffe) != uVar7);
    }
    lVar8 = (longlong)(int)uStack_50;
    if (lVar8 != 0) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(lVar5 + 0x18 + lVar10);
        if (lVar3 != 0) {
          iVar2 = *(int *)(lVar5 + 0x28 + lVar10);
          lVar4 = *param_1;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          *(longlong *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = lVar3;
        }
        lVar10 = lVar10 + 0x30;
      } while (lVar8 * 0x30 != lVar10);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147fb9824 FUN_147fb9824 body=2857 status=ok
// SIG undefined FUN_147fb9824(void)

undefined8
FUN_147fb9824(longlong *param_1,undefined8 *param_2,longlong param_3,undefined2 **param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined2 **ppuVar19;
  longlong *plVar20;
  ulonglong *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined2 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined2 **local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_147fc09b4(param_3);
  }
  if (param_4 != (undefined2 **)0x0) {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < 0) {
      FUN_1446f8c06(param_4,0);
    }
    if (*param_4 != (undefined2 *)0x0) {
      **param_4 = 0;
    }
  }
  uVar9 = 1;
  if ((longlong)(int)param_1[1] != 0) {
    puVar17 = (undefined8 *)*param_1;
    local_98 = puVar17 + (longlong)(int)param_1[1] * 3;
    plVar6 = (longlong *)*param_2;
    iVar16 = 0;
    plVar25 = (longlong *)param_2[1];
    local_b8 = param_4;
    local_b0 = param_3;
    local_a0 = param_1;
    do {
      lVar22 = local_b0;
      ppuVar19 = local_b8;
      if (plVar6 == (longlong *)0x0) {
        if (local_b8 == (undefined2 **)0x0) goto LAB_147fb9ae9;
        FUN_147fb6e12(local_a0,&local_68,iVar16);
        puVar15 = local_68;
        if (local_60 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        pwVar10 = L"Malformed path \'%s\'.";
LAB_147fba22c:
        FUN_140002266(&local_58,pwVar10,puVar15);
        local_80 = local_58;
        if (&local_58 == ppuVar19) {
LAB_147fba2d8:
          if (local_80 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*ppuVar19 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *ppuVar19 = local_58;
          local_58 = (undefined2 *)0x0;
          *(undefined4 *)(ppuVar19 + 1) = (undefined4)local_50;
          *(undefined4 *)((longlong)ppuVar19 + 0xc) = local_50._4_4_;
          local_50 = 0;
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
LAB_147fb9ae9:
        *(undefined4 *)(lVar22 + 8) = 0;
        if (*(int *)(lVar22 + 0xc) < 0) {
          FUN_147fc09b4(lVar22);
        }
        uVar9 = 0;
        goto LAB_147fb9afc;
      }
      local_a8 = plVar6;
      plVar6 = (longlong *)FUN_144a87586(plVar6,*puVar17);
      if (plVar6 == (longlong *)0x0) {
        lVar22 = local_b0;
        if (local_b8 == (undefined2 **)0x0) goto LAB_147fb9ae9;
        local_70 = *puVar17;
        FUN_1400021e4(&local_70,&local_68);
        puVar15 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar15 = local_68;
        }
        local_58 = (undefined2 *)local_a8[3];
        FUN_1400021e4(&local_58,&local_80);
        local_d8 = &DAT_149dfb77a;
        if (local_78 != 0) {
          local_d8 = local_80;
        }
        uVar9 = (**(code **)(*local_a8 + 0x308))();
        FUN_147fb6e12(local_a0,&local_90,iVar16);
        puVar14 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar14 = local_90;
        }
        local_d0 = puVar15;
        FUN_140002266(&local_58,L"Malformed path \'%s\', could not find property \'%s%s::%s\'.",
                      puVar14,uVar9);
        ppuVar19 = local_b8;
        if (&local_58 == local_b8) {
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*local_b8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *ppuVar19 = local_58;
          local_58 = (undefined2 *)0x0;
          *(undefined4 *)(ppuVar19 + 1) = (undefined4)local_50;
          *(undefined4 *)((longlong)ppuVar19 + 0xc) = local_50._4_4_;
          local_50 = 0;
        }
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
LAB_147fba134:
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
LAB_147fba001:
        lVar22 = local_b0;
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
          lVar22 = local_b0;
        }
        goto LAB_147fb9ae9;
      }
      lVar22 = plVar6[1];
      lVar7 = FUN_1446e6bbc();
      ppuVar19 = local_b8;
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar26 = lVar22 != 0;
        if (lVar22 != lVar7 && bVar26) {
          do {
            lVar22 = *(longlong *)(lVar22 + 0x30);
            bVar26 = lVar22 != 0;
            if (lVar22 == lVar7) break;
          } while (lVar22 != 0);
        }
        if (bVar26) goto LAB_147fb994e;
LAB_147fb9958:
        iVar18 = *(int *)(puVar17 + 1);
        if ((int)plVar6[6] < iVar18) {
          lVar22 = local_b0;
          if (local_b8 == (undefined2 **)0x0) goto LAB_147fb9ae9;
          FUN_147fb6e12(local_a0,&local_68,iVar16);
          local_d8 = local_68;
          if (local_60 == 0) {
            local_d8 = &DAT_149dfb77a;
          }
          uVar3 = (undefined4)plVar6[6];
          uVar2 = *(undefined4 *)(puVar17 + 1);
          pwVar10 = L"Index %d out of range %d trying to access static array \'%s\'.";
LAB_147fb9faa:
          FUN_140002266(&local_58,pwVar10,uVar2,uVar3);
          local_80 = local_58;
          if (&local_58 == ppuVar19) goto LAB_147fba134;
          if (*ppuVar19 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *ppuVar19 = local_58;
          local_58 = (undefined2 *)0x0;
          *(undefined4 *)(ppuVar19 + 1) = (undefined4)local_50;
          *(undefined4 *)((longlong)ppuVar19 + 0xc) = local_50._4_4_;
          local_50 = 0;
          goto LAB_147fba001;
        }
        if (iVar18 < 1) {
          iVar18 = 0;
        }
        iVar13 = *(int *)((longlong)plVar6 + 0x34) * iVar18 + *(int *)((longlong)plVar6 + 0x44);
        plVar20 = plVar25;
        plVar24 = plVar6;
      }
      else {
        if ((*(ulonglong *)(lVar22 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147fb9958;
LAB_147fb994e:
        if (*(int *)(puVar17 + 1) == -1) goto LAB_147fb9958;
        puVar8 = (undefined8 *)FUN_147fba34e(local_b0);
        iVar13 = 0;
        *puVar8 = plVar6;
        puVar8[1] = plVar25;
        puVar8[2] = local_a8;
        puVar8[3] = 0;
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar17 + 1);
        *(undefined4 *)((longlong)puVar8 + 0x24) = *(undefined4 *)((longlong)plVar6 + 0x44);
        *(int *)(puVar8 + 5) = iVar16;
        *(undefined1 *)((longlong)puVar8 + 0x2c) = 6;
        plVar24 = (longlong *)plVar6[0xf];
        if (plVar25 != (longlong *)0x0) {
          puVar21 = (ulonglong *)((longlong)*(int *)((longlong)plVar6 + 0x44) + (longlong)plVar25);
          bVar1 = *(byte *)(plVar6 + 0xe);
          local_c8 = plVar24;
          (**(code **)(*plVar24 + 0x178))();
          ppuVar19 = local_b8;
          iVar18 = *(int *)(puVar17 + 1);
          if ((-1 < (longlong)iVar18) && (iVar18 < (int)puVar21[1])) {
            if ((bVar1 & 1) == 0) {
              uVar23 = *puVar21;
            }
            else {
              uVar23 = *puVar21;
              if ((uVar23 & 1) != 0) {
                uVar23 = (longlong)puVar21 + ((longlong)uVar23 >> 0x18);
              }
            }
            plVar20 = (longlong *)
                      ((longlong)iVar18 * (longlong)*(int *)(plVar6[0xf] + 0x34) + uVar23);
            iVar18 = 0;
            plVar24 = local_c8;
            goto LAB_147fb997d;
          }
          lVar22 = local_b0;
          if (local_b8 == (undefined2 **)0x0) goto LAB_147fb9ae9;
          FUN_147fb6e12(local_a0,&local_68,iVar16);
          local_d8 = local_68;
          if (local_60 == 0) {
            local_d8 = &DAT_149dfb77a;
          }
          uVar3 = (undefined4)puVar21[1];
          uVar2 = *(undefined4 *)(puVar17 + 1);
          pwVar10 = 
          L"Index %d out of range (num elements %d) trying to access dynamic array \'%s\'.";
          goto LAB_147fb9faa;
        }
        iVar18 = 0;
        plVar20 = (longlong *)0x0;
      }
LAB_147fb997d:
      puVar8 = (undefined8 *)FUN_147fba34e(local_b0);
      *puVar8 = plVar24;
      puVar8[1] = plVar20;
      puVar8[2] = local_a8;
      *(int *)(puVar8 + 4) = iVar18;
      *(int *)((longlong)puVar8 + 0x24) = iVar13;
      *(int *)(puVar8 + 5) = iVar16;
      *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
      plVar6 = local_a8;
      if (iVar16 != (int)local_a0[1] + -1) {
        if (plVar24 == (longlong *)0x0) goto LAB_147fba047;
        lVar22 = plVar24[1];
        local_c8 = plVar24;
        local_c0 = plVar20;
        lVar7 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar7 + 8) != 0) {
          if ((*(ulonglong *)(lVar22 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147fb9a90;
LAB_147fb9a16:
          if (plVar25 == (longlong *)0x0) {
            plVar6 = (longlong *)puVar17[2];
            plVar20 = local_c0;
            if (plVar6 == (longlong *)0x0) {
              plVar6 = (longlong *)local_c8[0xe];
              uVar11 = 0;
            }
            else {
              puVar8[3] = plVar6;
              uVar11 = 5;
            }
          }
          else {
            plVar6 = (longlong *)FUN_146272818();
            lVar22 = local_b0;
            ppuVar19 = local_b8;
            plVar20 = (longlong *)((longlong)local_c0 + (longlong)iVar13);
            if ((longlong *)local_c8[0xe] == plVar6) {
              plVar25 = (longlong *)plVar20[1];
              if ((plVar25 == (longlong *)0x0) ||
                 (plVar6 = (longlong *)*plVar20, plVar6 == (longlong *)0x0)) {
                if (local_b8 != (undefined2 **)0x0) {
                  FUN_147fb6e12(local_a0,&local_68,iVar16);
                  puVar15 = local_68;
                  if (local_60 == 0) {
                    puVar15 = &DAT_149dfb77a;
                  }
                  pwVar10 = L"Expecting valid instanced struct value at path \'%s\'.";
                  goto LAB_147fba22c;
                }
                goto LAB_147fb9ae9;
              }
              puVar8[3] = plVar6;
              uVar11 = 5;
              plVar20 = plVar25;
            }
            else {
              uVar11 = 0;
              plVar6 = (longlong *)local_c8[0xe];
            }
          }
          goto LAB_147fb9acd;
        }
        bVar26 = lVar22 != 0;
        if (lVar22 != lVar7 && bVar26) {
          do {
            lVar22 = *(longlong *)(lVar22 + 0x30);
            bVar26 = lVar22 != 0;
            if (lVar22 == lVar7) break;
          } while (lVar22 != 0);
        }
        if (bVar26) goto LAB_147fb9a16;
LAB_147fb9a90:
        lVar22 = local_c8[1];
        lVar7 = FUN_144a810c6();
        if (*(ulonglong *)(lVar7 + 8) == 0) {
          bVar26 = lVar22 != 0;
          if (lVar22 != lVar7 && bVar26) {
            do {
              lVar22 = *(longlong *)(lVar22 + 0x30);
              bVar26 = lVar22 != 0;
              if (lVar22 == lVar7) break;
            } while (lVar22 != 0);
          }
          if (bVar26) goto LAB_147fb9aba;
LAB_147fb9b69:
          lVar22 = local_c8[1];
          lVar7 = FUN_14010a2ea();
          if (*(ulonglong *)(lVar7 + 8) == 0) {
            bVar26 = lVar22 != 0;
            if (lVar22 != lVar7 && bVar26) {
              do {
                lVar22 = *(longlong *)(lVar22 + 0x30);
                bVar26 = lVar22 != 0;
                if (lVar22 == lVar7) break;
              } while (lVar22 != 0);
            }
            if (bVar26) goto LAB_147fb9b8e;
LAB_147fb9e6e:
            lVar22 = local_c8[1];
            lVar7 = FUN_1446ef9c4();
            plVar24 = local_c8;
            if (*(ulonglong *)(lVar7 + 8) == 0) {
              bVar26 = lVar22 != 0;
              if (lVar22 != lVar7 && bVar26) {
                do {
                  lVar22 = *(longlong *)(lVar22 + 0x30);
                  bVar26 = lVar22 != 0;
                  if (lVar22 == lVar7) break;
                } while (lVar22 != 0);
              }
              if (bVar26) goto LAB_147fb9e98;
LAB_147fba047:
              lVar22 = local_b0;
              if (local_b8 != (undefined2 **)0x0) {
                FUN_147fb6e12(local_a0,&local_68,iVar16);
                puVar15 = &DAT_149dfb77a;
                if (local_60 != 0) {
                  puVar15 = local_68;
                }
                (**(code **)(*plVar24 + 0x70))(plVar24,&local_80,0,0);
                puVar14 = &DAT_149dfb77a;
                if (local_78 != 0) {
                  puVar14 = local_80;
                }
                FUN_140002266(&local_58,L"Unsupported property indirection type %s in path \'%s\'.",
                              puVar14,puVar15);
                ppuVar19 = local_b8;
                if (&local_58 == local_b8) {
                  if (local_58 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (*local_b8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  *ppuVar19 = local_58;
                  local_58 = (undefined2 *)0x0;
                  *(undefined4 *)(ppuVar19 + 1) = (undefined4)local_50;
                  *(undefined4 *)((longlong)ppuVar19 + 0xc) = local_50._4_4_;
                  local_50 = 0;
                }
                goto LAB_147fba2d8;
              }
              goto LAB_147fb9ae9;
            }
            if ((*(ulonglong *)(lVar22 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0)
            goto LAB_147fba047;
LAB_147fb9e98:
            if (plVar25 == (longlong *)0x0) {
              plVar6 = (longlong *)local_c8[0xe];
              uVar11 = 3;
              plVar20 = local_c0;
              goto LAB_147fb9acd;
            }
            lVar22 = (longlong)local_c0 + (longlong)iVar13;
            plVar20 = (longlong *)FUN_14479d2ce(lVar22);
            if (plVar20 != (longlong *)0x0) {
LAB_147fb9ebb:
              plVar6 = (longlong *)plVar20[2];
              puVar8[3] = plVar6;
              uVar11 = 3;
              goto LAB_147fb9acd;
            }
            uVar12 = 3;
            if (*(longlong *)(lVar22 + 8) != 0) {
              plVar20 = (longlong *)FUN_140007850();
              cVar5 = (*(code *)PTR_FUN_14c758760)();
              if ((plVar20 == (longlong *)0x0) || (cVar5 == '\0')) {
                FUN_14485c47a(lVar22,plVar20);
                if (plVar20 == (longlong *)0x0) goto LAB_147fba2c3;
              }
              else {
                uVar4 = *(uint *)((longlong)plVar20 + 0xc);
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                else {
                  lVar7 = 0;
                }
                if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
                  FUN_14485c47a(lVar22,plVar20);
                }
              }
              if ((*(uint *)(plVar20 + 1) >> 0x1e & 1) == 0) goto LAB_147fb9ebb;
            }
LAB_147fba2c3:
            uVar11 = uVar12;
            plVar6 = local_a8;
            plVar20 = (longlong *)0x0;
          }
          else {
            if ((*(ulonglong *)(lVar22 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0)
            goto LAB_147fb9e6e;
LAB_147fb9b8e:
            if (plVar25 == (longlong *)0x0) {
              plVar6 = (longlong *)local_c8[0xe];
              uVar11 = 2;
              plVar20 = local_c0;
            }
            else {
              plVar20 = (longlong *)FUN_14479d2ce((longlong)local_c0 + (longlong)iVar13);
              uVar11 = 2;
              uVar12 = 2;
              if (plVar20 == (longlong *)0x0) goto LAB_147fba2c3;
              plVar6 = (longlong *)plVar20[2];
              puVar8[3] = plVar6;
            }
          }
        }
        else {
          if ((*(ulonglong *)(lVar22 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_147fb9b69;
LAB_147fb9aba:
          if (plVar25 == (longlong *)0x0) {
            plVar6 = (longlong *)puVar17[2];
            plVar20 = local_c0;
            if (plVar6 == (longlong *)0x0) {
              uVar11 = 1;
              plVar6 = (longlong *)local_c8[0xe];
            }
            else {
LAB_147fb9bbc:
              puVar8[3] = plVar6;
              uVar11 = 4;
            }
          }
          else {
            plVar20 = *(longlong **)((longlong)local_c0 + (longlong)iVar13);
            if (plVar20 != (longlong *)0x0) {
              plVar6 = (longlong *)plVar20[2];
              goto LAB_147fb9bbc;
            }
            uVar11 = 1;
            plVar6 = (longlong *)local_c8[0xe];
            plVar20 = (longlong *)0x0;
          }
        }
LAB_147fb9acd:
        *(undefined1 *)((longlong)puVar8 + 0x2c) = uVar11;
      }
      puVar17 = puVar17 + 3;
      iVar16 = iVar16 + 1;
      plVar25 = plVar20;
    } while (puVar17 != local_98);
    uVar9 = 1;
  }
LAB_147fb9afc:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147fba34e FUN_147fba34e body=63 status=ok
// SIG undefined FUN_147fba34e(void)

longlong FUN_147fba34e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147fc09f4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_147fc09e4(lVar2);
  return lVar2;
}



// FUNCTION 147fba38d FUN_147fba38d body=1050 status=ok
// SIG undefined FUN_147fba38d(void)

ulonglong FUN_147fba38d(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((*(byte *)(param_2 + 3) & 1) != 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar8 = lVar7 != 0;
      if (lVar7 != lVar2 && bVar8) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar2) break;
        } while (lVar7 != 0);
      }
      if (!bVar8) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return 0;
    }
    param_1 = *(longlong *)(param_1 + 0x78);
  }
  switch(*(undefined1 *)(param_2 + 2)) {
  case 1:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a5ab96();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 2:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 3:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a7452c();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 4:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a83f76();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 5:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a64e42();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 6:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a49fc8();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 7:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a63fc8();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 8:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a49f24();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 9:
    lVar7 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_144a4a07e();
    uVar4 = *(ulonglong *)(lVar2 + 8);
    if (uVar4 == 0) {
      if (lVar7 == lVar2 || lVar7 == 0) {
        return (ulonglong)(lVar7 != 0);
      }
      do {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == lVar2) {
          return (ulonglong)(lVar7 != 0);
        }
      } while (lVar7 != 0);
      return 0;
    }
    break;
  case 10:
    lVar7 = *(longlong *)(param_2 + 8);
    if (lVar7 != 0) {
      lVar2 = FUN_140851d9a();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_147fba7a7(param_1,lVar7);
LAB_147fba7a1:
        bVar6 = (byte)uVar3;
        uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
        bVar1 = 1;
        goto LAB_147fba738;
      }
    }
    goto LAB_147fba734;
  case 0xb:
    lVar7 = *(longlong *)(param_2 + 8);
    if (lVar7 != 0) {
      lVar2 = FUN_1446f4bba();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_147fba811(param_1,lVar7);
        goto LAB_147fba7a1;
      }
    }
    goto LAB_147fba734;
  case 0xc:
    lVar7 = *(longlong *)(param_2 + 8);
    if (lVar7 != 0) {
      lVar2 = FUN_144a797b2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_147fba87b(param_1,lVar7);
        goto LAB_147fba7a1;
      }
    }
LAB_147fba734:
    bVar1 = 0;
    uVar5 = 0;
    bVar6 = 0;
LAB_147fba738:
    return CONCAT71(uVar5,bVar1 & bVar6);
  default:
    return 0;
  }
  return CONCAT71((int7)(uVar4 >> 8),(*(ulonglong *)(lVar7 + 0x18) & uVar4) != 0);
}



// FUNCTION 147fba7a7 FUN_147fba7a7 body=106 status=ok
// SIG undefined FUN_147fba7a7(void)

bool FUN_147fba7a7(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
LAB_147fba807:
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144a7add4();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) goto LAB_147fba807;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_147fba807;
    bVar3 = *(longlong *)(param_1 + 0x78) == param_2;
  }
  return bVar3;
}



// FUNCTION 147fba811 FUN_147fba811 body=106 status=ok
// SIG undefined FUN_147fba811(void)

bool FUN_147fba811(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
LAB_147fba871:
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) goto LAB_147fba871;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_147fba871;
    bVar3 = *(longlong *)(param_1 + 0x70) == param_2;
  }
  return bVar3;
}



// FUNCTION 147fba87b FUN_147fba87b body=106 status=ok
// SIG undefined FUN_147fba87b(void)

bool FUN_147fba87b(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
LAB_147fba8db:
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) goto LAB_147fba8db;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_147fba8db;
    bVar3 = *(longlong *)(param_1 + 0x70) == param_2;
  }
  return bVar3;
}



// FUNCTION 147fba8e5 FUN_147fba8e5 body=134 status=ok
// SIG undefined FUN_147fba8e5(void)

undefined8 FUN_147fba8e5(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar3 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar3) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar3 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar3) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar1 = FUN_14644feb0();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                      lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 147fba96c FUN_147fba96c body=238 status=ok
// SIG undefined FUN_147fba96c(void)

void FUN_147fba96c(longlong *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  uint local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  local_30 = param_1[3];
  local_28 = (undefined4)param_1[4];
  FUN_14688ece8(param_1 + 1,*param_1 + 0x160);
  if (((int)param_1[4] != 0) && (lVar4 = FUN_145814b44(param_1 + 1), lVar4 != 0)) {
    local_40 = param_1 + 3;
    local_38 = 0;
    do {
      if ((int)local_40[1] <= (int)local_38) break;
      puVar2 = (undefined4 *)(*local_40 + (ulonglong)local_38 * 0x10);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      lVar5 = FUN_14688e722(lVar4,&local_58);
      if (lVar5 == 0) {
        FUN_147fbaa6a(&local_40);
      }
      uVar1 = local_38 + 1;
      bVar3 = -2 < (int)local_38;
      local_38 = uVar1;
    } while (bVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fbaa6a FUN_147fbaa6a body=100 status=ok
// SIG undefined FUN_147fbaa6a(void)

void FUN_147fbaa6a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = (int)plVar1[1];
  iVar3 = ~*(uint *)(param_1 + 1) + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)*(uint *)(param_1 + 1) * 0x10 + *plVar1),
            (void *)((longlong)(iVar2 - iVar4) * 0x10 + *plVar1),(longlong)iVar4 << 4);
    iVar2 = (int)plVar1[1];
  }
  *(int *)(plVar1 + 1) = iVar2 + -1;
  FUN_146b27e7c(plVar1);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 147fbaace FUN_147fbaace body=266 status=ok
// SIG undefined FUN_147fbaace(void)

ulonglong FUN_147fbaace(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  undefined8 unaff_RSI;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  
  lVar1 = *param_1;
  uVar9 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (lVar1 == 0) {
    if (param_1[2] != 0) {
      uVar8 = CONCAT71(uVar9,param_1[1] != 0);
      goto LAB_147fbab06;
    }
  }
  else {
    lVar4 = FUN_145814b44(lVar1 + 0x160);
    lVar5 = FUN_145814b44(param_1 + 1);
    uVar8 = CONCAT71(uVar9,1);
    if (lVar4 != lVar5) goto LAB_147fbab06;
    if ((lVar4 != 0) && ((longlong)*(int *)(lVar5 + 200) != 0)) {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      lVar4 = param_1[2];
      lVar10 = *(longlong *)(lVar5 + 0xc0);
      lVar5 = (longlong)*(int *)(lVar5 + 200) * 0x30 + lVar10;
      do {
        if ((longlong)(int)param_1[4] != 0) {
          piVar7 = (int *)param_1[3];
          piVar6 = piVar7 + (longlong)(int)param_1[4] * 4;
          do {
            if ((((*piVar7 == *(int *)(lVar10 + 8)) && (piVar7[1] == *(int *)(lVar10 + 0xc))) &&
                (piVar7[2] == *(int *)(lVar10 + 0x10))) && (piVar7[3] == *(int *)(lVar10 + 0x14)))
            goto LAB_147fbabc8;
            piVar7 = piVar7 + 4;
          } while (piVar7 != piVar6);
        }
        plVar2 = *(longlong **)(lVar10 + 0x28);
        cVar3 = (**(code **)(*plVar2 + 200))
                          (plVar2,lVar1 + *(int *)((longlong)plVar2 + 0x44),
                           *(int *)((longlong)plVar2 + 0x44) + lVar4,0);
        if (cVar3 == '\0') goto LAB_147fbab06;
LAB_147fbabc8:
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != lVar5);
    }
  }
  uVar8 = 0;
LAB_147fbab06:
  return uVar8 & 0xffffffff;
}



// FUNCTION 147fbabd8 FUN_147fbabd8 body=157 status=ok
// SIG undefined FUN_147fbabd8(void)

void FUN_147fbabd8(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar7 = FUN_1448332aa(param_2,&DAT_14acf2e18);
  if (iVar7 < 0xe) {
    lVar8 = FUN_145814b44(param_1 + 8);
    if ((lVar8 != 0) && (iVar7 = *(int *)(lVar8 + 200), (longlong)iVar7 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0xc0);
      lVar9 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
          FUN_140c60952((longlong *)(param_1 + 0x18),iVar3);
        }
        puVar1 = (undefined4 *)(lVar8 + 8 + lVar9);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        lVar9 = lVar9 + 0x30;
      } while ((longlong)iVar7 * 0x30 != lVar9);
    }
  }
  return;
}



// FUNCTION 147fbac7a FUN_147fbac7a body=52 status=ok
// SIG undefined FUN_147fbac7a(void)

undefined8 FUN_147fbac7a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1459097f0();
  if ((lVar1 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar2;
}



// FUNCTION 147fbacde FUN_147fbacde body=94 status=ok
// SIG undefined FUN_147fbacde(void)

undefined8 FUN_147fbacde(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (((param_1[1] == 0) ||
      ((*param_2 != 0 && (cVar3 = FUN_14021d296(param_2,param_1 + 1), cVar3 != '\0')))) &&
     ((lVar4 = *param_1, lVar4 == 0 ||
      (((lVar2 = param_2[1], lVar2 != 0 &&
        (piVar1 = (int *)(lVar4 + 0x38), *piVar1 <= *(int *)(lVar2 + 0x38))) &&
       (lVar4 = lVar4 + 0x30,
       *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*piVar1 * 8) == lVar4)))))) {
    return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  return 0;
}



// FUNCTION 147fbad42 FUN_147fbad42 body=71 status=ok
// SIG undefined FUN_147fbad42(void)

undefined1 FUN_147fbad42(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = 2;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    plVar1 = *(longlong **)(param_2 + 0x100);
    lVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x180))();
    if (lVar2 == 0) {
      if (*plVar1 == 0) {
        uVar3 = 1;
      }
      else {
        lVar2 = FUN_1447210f0();
        uVar3 = lVar2 == 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147fbad8a FUN_147fbad8a body=132 status=ok
// SIG undefined FUN_147fbad8a(void)

void FUN_147fbad8a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    plVar1 = *(longlong **)(param_2 + 0x100);
    lVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x180))();
    if (((lVar2 != 0) || ((*plVar1 != 0 && (lVar2 = FUN_1447210f0(), lVar2 != 0)))) &&
       (FUN_1400b22c2(local_20,&DAT_149e02088), local_20[0] != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fbae16 FUN_147fbae16 body=116 status=ok
// SIG undefined FUN_147fbae16(void)

undefined8 FUN_147fbae16(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  pfVar3 = *(float **)(param_2 + 0x100);
  if (*(char *)(pfVar3 + 2) == '\0') {
    fVar1 = *pfVar3;
    fVar2 = pfVar3[1];
    fVar5 = fVar1 - fVar2;
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    uVar4 = rand();
    pfVar3[3] = ((float)(uVar4 & 0x7fff) / 32767.0) * ((fVar1 + fVar2) - fVar6) + fVar6;
  }
  return 0;
}



// FUNCTION 147fbaeee FUN_147fbaeee body=175 status=ok
// SIG undefined FUN_147fbaeee(void)

ulonglong FUN_147fbaeee(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_178 [40];
  undefined1 local_150 [16];
  longlong local_140;
  ulonglong local_30;
  undefined7 uVar4;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x100) + 0x38);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (lVar1 != 0) {
    FUN_1438c9d48(local_150,param_2,lVar1,*(longlong *)(param_2 + 0x100) + 0x28);
    uVar3 = CONCAT71(uVar4,1);
    if (((0 < *(int *)(local_140 + 0x48)) && (*(char *)(local_140 + 400) == '\x01')) &&
       (*(char *)(local_140 + 0x128) == '\x01')) {
      uVar2 = FUN_1438cdb00(local_150,param_3);
      uVar3 = (ulonglong)uVar2;
    }
    FUN_147fab72e(local_150);
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbaf9e FUN_147fbaf9e body=143 status=ok
// SIG undefined FUN_147fbaf9e(void)

void FUN_147fbaf9e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_158 [40];
  undefined1 local_130 [16];
  longlong local_120;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x100) + 0x38);
  if (lVar1 != 0) {
    FUN_1438c9d48(local_130,param_2,lVar1,*(longlong *)(param_2 + 0x100) + 0x28);
    if (((0 < *(int *)(local_120 + 0x48)) && (*(char *)(local_120 + 400) == '\x01')) &&
       (*(char *)(local_120 + 0x128) == '\x01')) {
      FUN_1438cdb54(local_130);
    }
    FUN_147fab72e(local_130);
  }
  if ((local_10 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb02e FUN_147fbb02e body=145 status=ok
// SIG undefined FUN_147fbb02e(void)

void FUN_147fbb02e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_158 [40];
  undefined1 local_130 [16];
  longlong local_120;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x100) + 0x38);
  if (lVar1 != 0) {
    FUN_1438c9d48(local_130,(char)param_2,lVar1,*(longlong *)(param_2 + 0x100) + 0x28);
    if (((0 < *(int *)(local_120 + 0x48)) && (*(char *)(local_120 + 400) == '\x01')) &&
       (*(char *)(local_120 + 0x128) == '\x01')) {
      FUN_1438ca7ba(local_130,3);
    }
    FUN_147fab72e(local_130);
  }
  if ((local_10 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb0c0 FUN_147fbb0c0 body=217 status=ok
// SIG undefined FUN_147fbb0c0(void)

undefined8 FUN_147fbb0c0(ushort *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,0x1a);
  if (uVar1 == local_34) {
    local_34 = local_34 & 0xffff0000;
    FUN_144afeef0(*param_3,&local_34);
    *param_1 = (ushort)local_34;
    uVar3 = (ushort)local_34;
  }
  else {
    local_34 = *(uint *)(param_2 + 8);
    lVar4 = FUN_14644f778();
    cVar2 = FUN_1468ec2ac(&local_34,*(undefined8 *)(lVar4 + 0x18));
    if (cVar2 == '\0') {
      uVar5 = 0;
      goto LAB_147fbb11e;
    }
    local_34 = CONCAT31(local_34._1_3_,0xff);
    uVar5 = FUN_14644f778();
    FUN_14483b62e(uVar5,param_3,&local_34,0);
    uVar3 = (ushort)(byte)local_34;
    uVar6 = 0xffff;
    if (uVar3 != 0xff) {
      uVar6 = uVar3;
    }
    *param_1 = uVar6;
  }
  uVar5 = CONCAT71((uint7)(byte)(uVar3 >> 8),1);
LAB_147fbb11e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb19a FUN_147fbb19a body=146 status=ok
// SIG undefined FUN_147fbb19a(void)

undefined4 FUN_147fbb19a(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined1 auStack_58 [42];
  ushort local_2e;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(undefined4 *)(param_2 + 8);
  lVar2 = FUN_14644f714();
  uVar1 = FUN_1468ec2ac(&local_2c,*(undefined8 *)(lVar2 + 0x18));
  if ((char)uVar1 != '\0') {
    local_2e = 0xffff;
    uVar3 = FUN_14644f714();
    FUN_14483b62e(uVar3,param_3,&local_2e,0);
    uVar4 = 0xff;
    if (local_2e < 0xff) {
      uVar4 = local_2e;
    }
    *param_1 = (char)uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb24c FUN_147fbb24c body=29 status=ok
// SIG undefined FUN_147fbb24c(void)

undefined8 FUN_147fbb24c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fbb29a FUN_147fbb29a body=90 status=ok
// SIG undefined FUN_147fbb29a(void)

undefined1 FUN_147fbb29a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fbb31c FUN_147fbb31c body=59 status=ok
// SIG undefined FUN_147fbb31c(void)

undefined8 FUN_147fbb31c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb42e FUN_147fbb42e body=54 status=ok
// SIG undefined FUN_147fbb42e(void)

undefined1 FUN_147fbb42e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbb542(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147fbb48c FUN_147fbb48c body=59 status=ok
// SIG undefined FUN_147fbb48c(void)

undefined8 FUN_147fbb48c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb4d2 FUN_147fbb4d2 body=33 status=ok
// SIG undefined FUN_147fbb4d2(void)

void FUN_147fbb4d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1401f9f5c(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147fbb542 FUN_147fbb542 body=92 status=ok
// SIG undefined FUN_147fbb542(void)

longlong * FUN_147fbb542(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  *(short *)(param_1 + 2) = (short)param_2[2];
  if (param_1 != param_2) {
    FUN_1401fa0f0(param_1 + 3,param_2[3],param_2[4]);
  }
  return param_1;
}



// FUNCTION 147fbb5ce FUN_147fbb5ce body=63 status=ok
// SIG undefined FUN_147fbb5ce(void)

undefined1 FUN_147fbb5ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fb613c(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 147fbb636 FUN_147fbb636 body=59 status=ok
// SIG undefined FUN_147fbb636(void)

undefined8 FUN_147fbb636(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb682 FUN_147fbb682 body=40 status=ok
// SIG undefined FUN_147fbb682(void)

void FUN_147fbb682(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1459cb674(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147fbb6fa FUN_147fbb6fa body=79 status=ok
// SIG undefined FUN_147fbb6fa(void)

void FUN_147fbb6fa(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14acfdfd0;
  FUN_145a5992e(puVar1 + 2);
  *param_2 = (longlong)(puVar1 + 2);
  param_2[1] = (longlong)puVar1;
  return;
}



// FUNCTION 147fbb74a FUN_147fbb74a body=79 status=ok
// SIG undefined FUN_147fbb74a(void)

void FUN_147fbb74a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14acfdfd0;
  FUN_145a5992e(puVar1 + 2);
  *param_2 = (longlong)(puVar1 + 2);
  param_2[1] = (longlong)puVar1;
  return;
}



// FUNCTION 147fbb7a6 FUN_147fbb7a6 body=19 status=ok
// SIG undefined FUN_147fbb7a6(void)

undefined1 FUN_147fbb7a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147fb699e(param_3);
  return 1;
}



// FUNCTION 147fbb7d2 FUN_147fbb7d2 body=54 status=ok
// SIG undefined FUN_147fbb7d2(void)

undefined1 FUN_147fbb7d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fb67fe(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fbb808 FUN_147fbb808 body=34 status=ok
// SIG undefined FUN_147fbb808(void)

undefined1
FUN_147fbb808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147fb689c(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147fbb846 FUN_147fbb846 body=59 status=ok
// SIG undefined FUN_147fbb846(void)

undefined8 FUN_147fbb846(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbb88c FUN_147fbb88c body=34 status=ok
// SIG undefined FUN_147fbb88c(void)

void FUN_147fbb88c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_1459cb468(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 147fbb948 FUN_147fbb948 body=111 status=ok
// SIG undefined FUN_147fbb948(void)

undefined1 FUN_147fbb948(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(param_3 + lVar5);
      if ((bVar3 & 1) != 0) {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_3 + lVar5);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar5);
      *plVar1 = lVar4;
      uVar2 = *(undefined8 *)(param_3 + 0xf + lVar5);
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar5);
      *(undefined8 *)((longlong)plVar1 + 0xf) = uVar2;
      lVar5 = lVar5 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbb9e0 FUN_147fbb9e0 body=59 status=ok
// SIG undefined FUN_147fbb9e0(void)

undefined8 FUN_147fbb9e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbbac2 FUN_147fbbac2 body=117 status=ok
// SIG undefined FUN_147fbbac2(void)

undefined1 FUN_147fbbac2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 + 0x10) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbbb60 FUN_147fbbb60 body=59 status=ok
// SIG undefined FUN_147fbbb60(void)

undefined8 FUN_147fbbb60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbbc36 FUN_147fbbc36 body=54 status=ok
// SIG undefined FUN_147fbbc36(void)

undefined1 FUN_147fbbc36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbbd4e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fbbc94 FUN_147fbbc94 body=59 status=ok
// SIG undefined FUN_147fbbc94(void)

undefined8 FUN_147fbbc94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbbcda FUN_147fbbcda body=37 status=ok
// SIG undefined FUN_147fbbcda(void)

void FUN_147fbbcda(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147fbbd4e FUN_147fbbd4e body=79 status=ok
// SIG undefined FUN_147fbbd4e(void)

undefined8 * FUN_147fbbd4e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fbbd9e(param_1,iVar1);
      FUN_147fbbe11(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbbd9e FUN_147fbbd9e body=115 status=ok
// SIG undefined FUN_147fbbd9e(void)

void FUN_147fbbd9e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbbe11 FUN_147fbbe11 body=102 status=ok
// SIG undefined FUN_147fbbe11(void)

void FUN_147fbbe11(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_1 + 8 + lVar3) = *(undefined4 *)(param_2 + 8 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fbbe90 FUN_147fbbe90 body=46 status=ok
// SIG undefined FUN_147fbbe90(void)

void FUN_147fbbe90(undefined8 param_1,longlong param_2)

{
  FUN_1447a1747(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fbbed4 FUN_147fbbed4 body=75 status=ok
// SIG undefined FUN_147fbbed4(void)

undefined1 FUN_147fbbed4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_140bee9ec();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbbf48 FUN_147fbbf48 body=59 status=ok
// SIG undefined FUN_147fbbf48(void)

undefined8 FUN_147fbbf48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbbfe6 FUN_147fbbfe6 body=50 status=ok
// SIG undefined FUN_147fbbfe6(void)

void FUN_147fbbfe6(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147fbc050 FUN_147fbc050 body=47 status=ok
// SIG undefined FUN_147fbc050(void)

void FUN_147fbc050(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147fbc096 FUN_147fbc096 body=89 status=ok
// SIG undefined FUN_147fbc096(void)

undefined8 FUN_147fbc096(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_147fbbd4e(param_2 + -0x10,param_3 + -0x10);
      FUN_147fbbd4e(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)(param_3 + 0x14);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbc118 FUN_147fbc118 body=59 status=ok
// SIG undefined FUN_147fbc118(void)

undefined8 FUN_147fbc118(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbc1b6 FUN_147fbc1b6 body=51 status=ok
// SIG undefined FUN_147fbc1b6(void)

void FUN_147fbc1b6(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 147fbc23e FUN_147fbc23e body=82 status=ok
// SIG undefined FUN_147fbc23e(void)

undefined8 FUN_147fbc23e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbbd4e(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)(param_3 + 0x14);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147fbc2b8 FUN_147fbc2b8 body=59 status=ok
// SIG undefined FUN_147fbc2b8(void)

undefined8 FUN_147fbc2b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbc2fe FUN_147fbc2fe body=37 status=ok
// SIG undefined FUN_147fbc2fe(void)

void FUN_147fbc2fe(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147fbc3f2 FUN_147fbc3f2 body=59 status=ok
// SIG undefined FUN_147fbc3f2(void)

undefined8 FUN_147fbc3f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbc54c FUN_147fbc54c body=59 status=ok
// SIG undefined FUN_147fbc54c(void)

undefined8 FUN_147fbc54c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbc634 FUN_147fbc634 body=127 status=ok
// SIG undefined FUN_147fbc634(void)

undefined1 FUN_147fbc634(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      uVar1 = *(undefined4 *)(param_3 + lVar4);
      *(undefined4 *)(param_2 + 3 + lVar4) = *(undefined4 *)(param_3 + 3 + lVar4);
      *(undefined4 *)(param_2 + lVar4) = uVar1;
      lVar3 = *(longlong *)(param_3 + 8 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + 8 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4 + 8) = lVar3;
      *(undefined8 *)(param_2 + lVar4 + 0x10) = *(undefined8 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbc6dc FUN_147fbc6dc body=59 status=ok
// SIG undefined FUN_147fbc6dc(void)

undefined8 FUN_147fbc6dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbc828 FUN_147fbc828 body=54 status=ok
// SIG undefined FUN_147fbc828(void)

undefined1 FUN_147fbc828(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbc926(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147fbc886 FUN_147fbc886 body=59 status=ok
// SIG undefined FUN_147fbc886(void)

undefined8 FUN_147fbc886(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbc926 FUN_147fbc926 body=192 status=ok
// SIG undefined FUN_147fbc926(void)

undefined4 * FUN_147fbc926(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong lVar6;
  
  uVar1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)((longlong)param_2 + 3);
  *param_1 = uVar1;
  lVar6 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 2);
    }
  }
  bVar5 = DAT_14c950c29;
  *(longlong *)(param_1 + 2) = lVar6;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x1b) = *(undefined4 *)((longlong)param_2 + 0x1b);
  param_1[6] = uVar1;
  lVar6 = *(longlong *)(param_2 + 8);
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 8);
      bVar5 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 8) = lVar6;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar1 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  lVar6 = *(longlong *)(param_2 + 0x10);
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar6;
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)((longlong)param_1 + 0x4e) = uVar2;
  return param_1;
}



// FUNCTION 147fbca44 FUN_147fbca44 body=120 status=ok
// SIG undefined FUN_147fbca44(void)

undefined1 FUN_147fbca44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(param_3 + lVar5);
      if ((bVar3 & 1) != 0) {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_3 + lVar5);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar5);
      *plVar1 = lVar4;
      uVar2 = *(undefined8 *)(param_3 + 0xf + lVar5);
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar5);
      *(undefined8 *)((longlong)plVar1 + 0xf) = uVar2;
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar5);
      lVar5 = lVar5 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbcae4 FUN_147fbcae4 body=59 status=ok
// SIG undefined FUN_147fbcae4(void)

undefined8 FUN_147fbcae4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbcbf6 FUN_147fbcbf6 body=54 status=ok
// SIG undefined FUN_147fbcbf6(void)

undefined1 FUN_147fbcbf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbccf4(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147fbcc54 FUN_147fbcc54 body=59 status=ok
// SIG undefined FUN_147fbcc54(void)

undefined8 FUN_147fbcc54(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbccf4 FUN_147fbccf4 body=134 status=ok
// SIG undefined FUN_147fbccf4(void)

undefined4 * FUN_147fbccf4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)((longlong)param_2 + 3);
  *param_1 = uVar1;
  lVar3 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 2);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 2) = lVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  lVar3 = *(longlong *)(param_2 + 8);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar3;
  param_1[10] = param_2[10];
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 147fbcde6 FUN_147fbcde6 body=54 status=ok
// SIG undefined FUN_147fbcde6(void)

undefined1 FUN_147fbcde6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbcefa(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147fbce44 FUN_147fbce44 body=59 status=ok
// SIG undefined FUN_147fbce44(void)

undefined8 FUN_147fbce44(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbce8a FUN_147fbce8a body=34 status=ok
// SIG undefined FUN_147fbce8a(void)

void FUN_147fbce8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1459cb866(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147fbcefa FUN_147fbcefa body=111 status=ok
// SIG undefined FUN_147fbcefa(void)

longlong FUN_147fbcefa(longlong param_1,longlong param_2)

{
  FUN_147fbcf6a();
  FUN_147fbcfba(param_1 + 0x10,param_2 + 0x10);
  FUN_147fbd00a(param_1 + 0x20,param_2 + 0x20);
  FUN_147fbd06a(param_1 + 0x30,param_2 + 0x30);
  FUN_147fbd0ba(param_1 + 0x40,param_2 + 0x40);
  FUN_147fbd11a(param_1 + 0x50,param_2 + 0x50);
  FUN_147fbd16a(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 147fbcf6a FUN_147fbcf6a body=79 status=ok
// SIG undefined FUN_147fbcf6a(void)

undefined8 * FUN_147fbcf6a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fbd1ba(param_1,iVar1);
      FUN_147fbd22d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbcfba FUN_147fbcfba body=79 status=ok
// SIG undefined FUN_147fbcfba(void)

undefined8 * FUN_147fbcfba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fbd29c(param_1,iVar1);
      FUN_147fbd2fe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbd00a FUN_147fbd00a body=95 status=ok
// SIG undefined FUN_147fbd00a(void)

undefined8 * FUN_147fbd00a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459cb92b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fbd374(param_1,iVar1);
      FUN_147fbd3e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbd06a FUN_147fbd06a body=79 status=ok
// SIG undefined FUN_147fbd06a(void)

undefined8 * FUN_147fbd06a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fbd48c(param_1,iVar1);
      FUN_147fbd4fb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbd0ba FUN_147fbd0ba body=95 status=ok
// SIG undefined FUN_147fbd0ba(void)

undefined8 * FUN_147fbd0ba(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459cb8fe(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fbd5ea(param_1,iVar1);
      FUN_147fbd65d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbd11a FUN_147fbd11a body=79 status=ok
// SIG undefined FUN_147fbd11a(void)

undefined8 * FUN_147fbd11a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fbd6a0(param_1,iVar1);
      FUN_147fbd713(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbd16a FUN_147fbd16a body=79 status=ok
// SIG undefined FUN_147fbd16a(void)

undefined8 * FUN_147fbd16a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fbd7ca(param_1,iVar1);
      FUN_147fbd83d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbd1ba FUN_147fbd1ba body=115 status=ok
// SIG undefined FUN_147fbd1ba(void)

void FUN_147fbd1ba(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbd22d FUN_147fbd22d body=110 status=ok
// SIG undefined FUN_147fbd22d(void)

void FUN_147fbd22d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4);
      *(longlong *)(param_1 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar3) == 1) {
        FUN_1456cec3c();
        bVar3 = DAT_14c950c29;
      }
      uVar2 = *(undefined8 *)(param_2 + lVar4 + 8);
      *(undefined8 *)(param_1 + lVar4 + 0xf) = *(undefined8 *)(param_2 + lVar4 + 0xf);
      *(undefined8 *)(param_1 + lVar4 + 8) = uVar2;
      lVar4 = lVar4 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fbd29c FUN_147fbd29c body=98 status=ok
// SIG undefined FUN_147fbd29c(void)

void FUN_147fbd29c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbd2fe FUN_147fbd2fe body=118 status=ok
// SIG undefined FUN_147fbd2fe(void)

void FUN_147fbd2fe(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar5);
      *(longlong *)(param_1 + lVar5) = lVar2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c();
        bVar4 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar5;
      lVar1 = param_2 + lVar5;
      uVar3 = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar2 + 0xf) = *(undefined8 *)(lVar1 + 0xf);
      *(undefined8 *)(lVar2 + 8) = uVar3;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      lVar5 = lVar5 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fbd374 FUN_147fbd374 body=115 status=ok
// SIG undefined FUN_147fbd374(void)

void FUN_147fbd374(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbd3e7 FUN_147fbd3e7 body=87 status=ok
// SIG undefined FUN_147fbd3e7(void)

void FUN_147fbd3e7(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_147fbd43e(param_1 + -0x10,param_2 + -0x10);
      FUN_147fbd43e(param_1,param_2);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fbd43e FUN_147fbd43e body=77 status=ok
// SIG undefined FUN_147fbd43e(void)

undefined8 * FUN_147fbd43e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147fbbd9e(param_1,iVar1,0);
    FUN_147fbbe11(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147fbd48c FUN_147fbd48c body=111 status=ok
// SIG undefined FUN_147fbd48c(void)

void FUN_147fbd48c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbd4fb FUN_147fbd4fb body=52 status=ok
// SIG undefined FUN_147fbd4fb(void)

void FUN_147fbd4fb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fbd530(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 147fbd530 FUN_147fbd530 body=186 status=ok
// SIG undefined FUN_147fbd530(void)

undefined4 * FUN_147fbd530(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  
  uVar1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)((longlong)param_2 + 3);
  *param_1 = uVar1;
  lVar2 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1b);
  param_1[6] = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x1b) = uVar1;
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  if ((lVar2 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
    bVar6 = DAT_14c950c29;
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar1 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if ((lVar2 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)((longlong)param_1 + 0x4e) = *(undefined8 *)((longlong)param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  return param_1;
}



// FUNCTION 147fbd5ea FUN_147fbd5ea body=115 status=ok
// SIG undefined FUN_147fbd5ea(void)

void FUN_147fbd5ea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbd65d FUN_147fbd65d body=66 status=ok
// SIG undefined FUN_147fbd65d(void)

void FUN_147fbd65d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fbd43e(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 147fbd6a0 FUN_147fbd6a0 body=115 status=ok
// SIG undefined FUN_147fbd6a0(void)

void FUN_147fbd6a0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fbd713 FUN_147fbd713 body=52 status=ok
// SIG undefined FUN_147fbd713(void)

void FUN_147fbd713(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fbd748(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 147fbd748 FUN_147fbd748 body=130 status=ok
// SIG undefined FUN_147fbd748(void)

undefined4 * FUN_147fbd748(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  
  uVar1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 3) = *(undefined4 *)((longlong)param_2 + 3);
  *param_1 = uVar1;
  lVar2 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 147fbd7ca FUN_147fbd7ca body=115 status=ok
// SIG undefined FUN_147fbd7ca(void)

void FUN_147fbd7ca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbd83d FUN_147fbd83d body=118 status=ok
// SIG undefined FUN_147fbd83d(void)

void FUN_147fbd83d(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      uVar1 = *(undefined4 *)(param_2 + lVar4);
      *(undefined4 *)(param_1 + 3 + lVar4) = *(undefined4 *)(param_2 + 3 + lVar4);
      *(undefined4 *)(param_1 + lVar4) = uVar1;
      lVar2 = *(longlong *)(param_2 + 8 + lVar4);
      *(longlong *)(param_1 + 8 + lVar4) = lVar2;
      if (((bVar3 & 1) != 0) && (lVar2 != 0)) {
        FUN_1456cec3c();
        bVar3 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + lVar4 + 0x10) = *(undefined8 *)(param_2 + lVar4 + 0x10);
      lVar4 = lVar4 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fbd97c FUN_147fbd97c body=59 status=ok
// SIG undefined FUN_147fbd97c(void)

undefined8 FUN_147fbd97c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbda1c FUN_147fbda1c body=29 status=ok
// SIG undefined FUN_147fbda1c(void)

undefined8 FUN_147fbda1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fbdb04 FUN_147fbdb04 body=59 status=ok
// SIG undefined FUN_147fbdb04(void)

undefined8 FUN_147fbdb04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbdba4 FUN_147fbdba4 body=29 status=ok
// SIG undefined FUN_147fbdba4(void)

undefined8 FUN_147fbdba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fbdbc2 FUN_147fbdbc2 body=55 status=ok
// SIG undefined FUN_147fbdbc2(void)

void FUN_147fbdbc2(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_141215e22(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 147fbdbfa FUN_147fbdbfa body=37 status=ok
// SIG undefined FUN_147fbdbfa(void)

void FUN_147fbdbfa(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_141215e22(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 147fbdc20 FUN_147fbdc20 body=39 status=ok
// SIG undefined FUN_147fbdc20(void)

void FUN_147fbdc20(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_2 + 8);
  return;
}



// FUNCTION 147fbdc48 FUN_147fbdc48 body=81 status=ok
// SIG undefined FUN_147fbdc48(void)

undefined8 FUN_147fbdc48(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14acf2e18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbdcb2 FUN_147fbdcb2 body=54 status=ok
// SIG undefined FUN_147fbdcb2(void)

undefined1 FUN_147fbdcb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fa9af8(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147fbdd10 FUN_147fbdd10 body=59 status=ok
// SIG undefined FUN_147fbdd10(void)

undefined8 FUN_147fbdd10(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbdd56 FUN_147fbdd56 body=47 status=ok
// SIG undefined FUN_147fbdd56(void)

void FUN_147fbdd56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    FUN_1401f9f5c(param_2 + 8);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147fbddd6 FUN_147fbddd6 body=51 status=ok
// SIG undefined FUN_147fbddd6(void)

void FUN_147fbddd6(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141215e22(param_2 + 2);
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 147fbde0a FUN_147fbde0a body=43 status=ok
// SIG undefined FUN_147fbde0a(void)

void FUN_147fbde0a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141215e22(param_2 + 2);
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 147fbde36 FUN_147fbde36 body=39 status=ok
// SIG undefined FUN_147fbde36(void)

void FUN_147fbde36(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_2 + 0x10);
  return;
}



// FUNCTION 147fbde74 FUN_147fbde74 body=75 status=ok
// SIG undefined FUN_147fbde74(void)

undefined8 FUN_147fbde74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_147fa9af8();
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbdee8 FUN_147fbdee8 body=59 status=ok
// SIG undefined FUN_147fbdee8(void)

undefined8 FUN_147fbdee8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbdf2e FUN_147fbdf2e body=47 status=ok
// SIG undefined FUN_147fbdf2e(void)

void FUN_147fbdf2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    FUN_1401f9f5c(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147fbdfbe FUN_147fbdfbe body=44 status=ok
// SIG undefined FUN_147fbdfbe(void)

void FUN_147fbdfbe(undefined8 param_1,longlong *param_2)

{
  FUN_147fbe0fa(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fbe000 FUN_147fbe000 body=54 status=ok
// SIG undefined FUN_147fbe000(void)

undefined1 FUN_147fbe000(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbe132(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fbe05e FUN_147fbe05e body=59 status=ok
// SIG undefined FUN_147fbe05e(void)

undefined8 FUN_147fbe05e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbe0fa FUN_147fbe0fa body=56 status=ok
// SIG undefined FUN_147fbe0fa(void)

void FUN_147fbe0fa(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      FUN_1401f9f5c(param_1);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147fbe132 FUN_147fbe132 body=95 status=ok
// SIG undefined FUN_147fbe132(void)

undefined8 * FUN_147fbe132(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147fbe0fa(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fbe192(param_1,iVar1);
      FUN_147fbe205(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fbe192 FUN_147fbe192 body=115 status=ok
// SIG undefined FUN_147fbe192(void)

void FUN_147fbe192(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fbe205 FUN_147fbe205 body=68 status=ok
// SIG undefined FUN_147fbe205(void)

void FUN_147fbe205(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_147fbe24a(param_1,param_2);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fbe24a FUN_147fbe24a body=149 status=ok
// SIG undefined FUN_147fbe24a(void)

longlong * FUN_147fbe24a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1401fa0f0(param_1 + 1,param_2[1],param_2[2]);
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1417246d8(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 147fbe2e0 FUN_147fbe2e0 body=50 status=ok
// SIG undefined FUN_147fbe2e0(void)

void FUN_147fbe2e0(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_147fbe0fa(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147fbe400 FUN_147fbe400 body=59 status=ok
// SIG undefined FUN_147fbe400(void)

undefined8 FUN_147fbe400(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbe4a0 FUN_147fbe4a0 body=29 status=ok
// SIG undefined FUN_147fbe4a0(void)

undefined8 FUN_147fbe4a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fbe5b4 FUN_147fbe5b4 body=59 status=ok
// SIG undefined FUN_147fbe5b4(void)

undefined8 FUN_147fbe5b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbe6c0 FUN_147fbe6c0 body=65 status=ok
// SIG undefined FUN_147fbe6c0(void)

undefined2 FUN_147fbe6c0(longlong *param_1,undefined2 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbe7e8 FUN_147fbe7e8 body=117 status=ok
// SIG undefined FUN_147fbe7e8(void)

uint FUN_147fbe7e8(longlong *param_1,byte *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = (uVar1 >> 2) + 0x9e3779b9 + (uint)uVar1 * 0x40 + (uint)*param_2 ^ (uint)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + (uint)*(ushort *)(param_2 + 4) ^ uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbe930 FUN_147fbe930 body=59 status=ok
// SIG undefined FUN_147fbe930(void)

undefined8 FUN_147fbe930(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbe9fa FUN_147fbe9fa body=100 status=ok
// SIG undefined FUN_147fbe9fa(void)

undefined1 FUN_147fbe9fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbea86 FUN_147fbea86 body=59 status=ok
// SIG undefined FUN_147fbea86(void)

undefined8 FUN_147fbea86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbeb78 FUN_147fbeb78 body=120 status=ok
// SIG undefined FUN_147fbeb78(void)

undefined1 FUN_147fbeb78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar4 = *(longlong *)(param_3 + lVar5);
      if ((bVar3 & 1) != 0) {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_3 + lVar5);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar5);
      *plVar1 = lVar4;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar5);
      uVar2 = *(undefined8 *)(param_3 + 0x15 + lVar5);
      plVar1[2] = *(longlong *)(param_3 + 0x10 + lVar5);
      *(undefined8 *)((longlong)plVar1 + 0x15) = uVar2;
      lVar5 = lVar5 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbec18 FUN_147fbec18 body=59 status=ok
// SIG undefined FUN_147fbec18(void)

undefined8 FUN_147fbec18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbed00 FUN_147fbed00 body=54 status=ok
// SIG undefined FUN_147fbed00(void)

undefined1 FUN_147fbed00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fbee52(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147fbed5e FUN_147fbed5e body=59 status=ok
// SIG undefined FUN_147fbed5e(void)

undefined8 FUN_147fbed5e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbee52 FUN_147fbee52 body=131 status=ok
// SIG undefined FUN_147fbee52(void)

longlong * FUN_147fbee52(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar8 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *param_2;
    }
  }
  bVar7 = DAT_14c950c29;
  *param_1 = lVar8;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar8 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  lVar8 = param_2[4];
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = param_2[4];
    }
  }
  param_1[4] = lVar8;
  lVar8 = param_2[6];
  lVar3 = param_2[7];
  lVar4 = param_2[8];
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x45);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x4d);
  param_1[5] = param_2[5];
  param_1[6] = lVar8;
  param_1[7] = lVar3;
  param_1[8] = lVar4;
  *(undefined8 *)((longlong)param_1 + 0x45) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x4d) = uVar6;
  return param_1;
}



// FUNCTION 147fbef0a FUN_147fbef0a body=63 status=ok
// SIG undefined FUN_147fbef0a(void)

undefined1 FUN_147fbef0a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1401fa0f0(param_2,*param_3,param_3[1]);
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 147fbef72 FUN_147fbef72 body=59 status=ok
// SIG undefined FUN_147fbef72(void)

undefined8 FUN_147fbef72(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbefb8 FUN_147fbefb8 body=32 status=ok
// SIG undefined FUN_147fbefb8(void)

void FUN_147fbefb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_1401f9f5c(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 147fbf0b0 FUN_147fbf0b0 body=59 status=ok
// SIG undefined FUN_147fbf0b0(void)

undefined8 FUN_147fbf0b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf1da FUN_147fbf1da body=59 status=ok
// SIG undefined FUN_147fbf1da(void)

undefined8 FUN_147fbf1da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf304 FUN_147fbf304 body=59 status=ok
// SIG undefined FUN_147fbf304(void)

undefined8 FUN_147fbf304(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf412 FUN_147fbf412 body=59 status=ok
// SIG undefined FUN_147fbf412(void)

undefined8 FUN_147fbf412(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf4c2 FUN_147fbf4c2 body=81 status=ok
// SIG undefined FUN_147fbf4c2(void)

undefined8 FUN_147fbf4c2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14acf2e18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf56c FUN_147fbf56c body=59 status=ok
// SIG undefined FUN_147fbf56c(void)

undefined8 FUN_147fbf56c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf636 FUN_147fbf636 body=90 status=ok
// SIG undefined FUN_147fbf636(void)

undefined1 FUN_147fbf636(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fbf6b8 FUN_147fbf6b8 body=59 status=ok
// SIG undefined FUN_147fbf6b8(void)

undefined8 FUN_147fbf6b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf84c FUN_147fbf84c body=108 status=ok
// SIG undefined FUN_147fbf84c(void)

undefined8 FUN_147fbf84c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined2 *)(param_2 + -0x10) = *(undefined2 *)(param_3 + -0x10);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fbf8e0 FUN_147fbf8e0 body=59 status=ok
// SIG undefined FUN_147fbf8e0(void)

undefined8 FUN_147fbf8e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbf926 FUN_147fbf926 body=48 status=ok
// SIG undefined FUN_147fbf926(void)

void FUN_147fbf926(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_2 = &PTR_FUN_14acfdbb0;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 147fbf9a4 FUN_147fbf9a4 body=57 status=ok
// SIG undefined FUN_147fbf9a4(void)

undefined8 * FUN_147fbf9a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acfdbb0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fbf9de FUN_147fbf9de body=55 status=ok
// SIG undefined FUN_147fbf9de(void)

void FUN_147fbf9de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28a28 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28a28 = FUN_140002ddd(FUN_1464547f5,uVar1,L"StateTreeDebugTextTaskInstanceData");
  }
  return;
}



// FUNCTION 147fbfa96 FUN_147fbfa96 body=59 status=ok
// SIG undefined FUN_147fbfa96(void)

undefined8 FUN_147fbfa96(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbfc24 FUN_147fbfc24 body=59 status=ok
// SIG undefined FUN_147fbfc24(void)

undefined8 FUN_147fbfc24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fbfcc4 FUN_147fbfcc4 body=29 status=ok
// SIG undefined FUN_147fbfcc4(void)

undefined8 FUN_147fbfcc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fbfce2 FUN_147fbfce2 body=55 status=ok
// SIG undefined FUN_147fbfce2(void)

void FUN_147fbfce2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28a58 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28a58 = FUN_140002ddd(FUN_146454921,uVar1,L"StateTreeDelayTaskInstanceData");
  }
  return;
}



// FUNCTION 147fbfd1a FUN_147fbfd1a body=29 status=ok
// SIG undefined FUN_147fbfd1a(void)

undefined8 FUN_147fbfd1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fbfd38 FUN_147fbfd38 body=147 status=ok
// SIG undefined FUN_147fbfd38(void)

void FUN_147fbfd38(longlong param_1,int param_2)

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



// FUNCTION 147fbfdcc FUN_147fbfdcc body=132 status=ok
// SIG undefined FUN_147fbfdcc(void)

void FUN_147fbfdcc(longlong param_1,int param_2)

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



// FUNCTION 147fbfe52 FUN_147fbfe52 body=115 status=ok
// SIG undefined FUN_147fbfe52(void)

void FUN_147fbfe52(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fbfec5 FUN_147fbfec5 body=52 status=ok
// SIG undefined FUN_147fbfec5(void)

void FUN_147fbfec5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fbfefa(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 147fbfefa FUN_147fbfefa body=91 status=ok
// SIG undefined FUN_147fbfefa(void)

longlong * FUN_147fbfefa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(short *)(param_1 + 2) = (short)param_2[2];
  param_1[1] = param_2[1];
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1401fa0f0(param_1 + 3,param_2[3],param_2[4]);
  return param_1;
}



// FUNCTION 147fbff56 FUN_147fbff56 body=77 status=ok
// SIG undefined FUN_147fbff56(void)

undefined8 * FUN_147fbff56(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147fb32a0(param_1,iVar1,0);
    FUN_147fb3302(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147fbffa4 FUN_147fbffa4 body=115 status=ok
// SIG undefined FUN_147fbffa4(void)

void FUN_147fbffa4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fc0017 FUN_147fc0017 body=116 status=ok
// SIG undefined FUN_147fc0017(void)

void FUN_147fc0017(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_1 + lVar3) = *(undefined2 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined1 *)(param_1 + lVar3 + 0x14) = *(undefined1 *)(param_2 + lVar3 + 0x14);
      *(undefined4 *)(param_1 + lVar3 + 0x10) = *(undefined4 *)(param_2 + lVar3 + 0x10);
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147fc008c FUN_147fc008c body=147 status=ok
// SIG undefined FUN_147fc008c(void)

void FUN_147fc008c(longlong param_1,int param_2)

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



// FUNCTION 147fc0120 FUN_147fc0120 body=113 status=ok
// SIG undefined FUN_147fc0120(void)

void FUN_147fc0120(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147fc0191 FUN_147fc0191 body=30 status=ok
// SIG undefined FUN_147fc0191(void)

void FUN_147fc0191(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 10) = 0xffffffffffff0000;
  FUN_141215e22(param_1 + 3);
  return;
}



// FUNCTION 147fc01b0 FUN_147fc01b0 body=147 status=ok
// SIG undefined FUN_147fc01b0(void)

void FUN_147fc01b0(longlong param_1,int param_2)

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



// FUNCTION 147fc0244 FUN_147fc0244 body=48 status=ok
// SIG undefined FUN_147fc0244(void)

void FUN_147fc0244(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147fc0274 FUN_147fc0274 body=31 status=ok
// SIG undefined FUN_147fc0274(void)

undefined8 FUN_147fc0274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fc02b0 FUN_147fc02b0 body=93 status=ok
// SIG undefined FUN_147fc02b0(void)

void FUN_147fc02b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14acfdff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147fc030e FUN_147fc030e body=123 status=ok
// SIG undefined FUN_147fc030e(void)

void FUN_147fc030e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14acfdff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147fc038a FUN_147fc038a body=21 status=ok
// SIG undefined FUN_147fc038a(void)

undefined8 FUN_147fc038a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147fc03a0 FUN_147fc03a0 body=112 status=ok
// SIG undefined FUN_147fc03a0(void)

void FUN_147fc03a0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 147fc0410 FUN_147fc0410 body=48 status=ok
// SIG undefined FUN_147fc0410(void)

void FUN_147fc0410(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147fc0440 FUN_147fc0440 body=147 status=ok
// SIG undefined FUN_147fc0440(void)

void FUN_147fc0440(longlong param_1,int param_2)

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



// FUNCTION 147fc04d4 FUN_147fc04d4 body=89 status=ok
// SIG undefined FUN_147fc04d4(void)

void FUN_147fc04d4(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffff;
    *(undefined2 *)(param_1 + 1) = 0xffff;
    *(undefined1 *)((longlong)param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0xffff;
    *(undefined2 *)(param_1 + 7) = 0xffff;
    *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xf) = 0;
    *(undefined8 *)(param_1 + 0x11) = 0;
    *(undefined2 *)(param_1 + 0x14) = 0xffff;
    param_1[0x13] = 0xffff0000;
    *(undefined1 *)((longlong)param_1 + 0x52) = 0;
    *(undefined2 *)(param_1 + 0x15) = 0xffff;
    param_1 = param_1 + 0x16;
  }
  return;
}



// FUNCTION 147fc052e FUN_147fc052e body=143 status=ok
// SIG undefined FUN_147fc052e(void)

void FUN_147fc052e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fc05be FUN_147fc05be body=62 status=ok
// SIG undefined FUN_147fc05be(void)

void FUN_147fc05be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147fc05fc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 147fc05fc FUN_147fc05fc body=104 status=ok
// SIG undefined FUN_147fc05fc(void)

ulonglong FUN_147fc05fc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147fc0632;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_147fc0632:
  return param_2 & 0xffffffff;
}



// FUNCTION 147fc0664 FUN_147fc0664 body=41 status=ok
// SIG undefined FUN_147fc0664(void)

void FUN_147fc0664(undefined4 *param_1)

{
  *param_1 = 0xffff;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0xffff;
  param_1[10] = 0xffff0000;
  return;
}



// FUNCTION 147fc068e FUN_147fc068e body=147 status=ok
// SIG undefined FUN_147fc068e(void)

void FUN_147fc068e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fc0722 FUN_147fc0722 body=24 status=ok
// SIG undefined FUN_147fc0722(void)

void FUN_147fc0722(undefined4 *param_1)

{
  *param_1 = 0xffff;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 147fc073a FUN_147fc073a body=136 status=ok
// SIG undefined FUN_147fc073a(void)

void FUN_147fc073a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_147fc07c4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fc07c4 FUN_147fc07c4 body=149 status=ok
// SIG undefined FUN_147fc07c4(void)

void FUN_147fc07c4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x18);
  return;
}



// FUNCTION 147fc085a FUN_147fc085a body=67 status=ok
// SIG undefined FUN_147fc085a(void)

void FUN_147fc085a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147fc089e(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x18c));
  if (iVar1 == *(int *)(param_1 + 0x18c)) {
    return;
  }
  *(int *)(param_1 + 0x18c) = iVar1;
  FUN_147fc07c4(param_1,*(undefined4 *)(param_1 + 0x188),iVar1);
  return;
}



// FUNCTION 147fc089e FUN_147fc089e body=129 status=ok
// SIG undefined FUN_147fc089e(void)

ulonglong FUN_147fc089e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 147fc0920 FUN_147fc0920 body=147 status=ok
// SIG undefined FUN_147fc0920(void)

void FUN_147fc0920(longlong param_1,int param_2)

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



// FUNCTION 147fc09b4 FUN_147fc09b4 body=48 status=ok
// SIG undefined FUN_147fc09b4(void)

void FUN_147fc09b4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147fc09e4 FUN_147fc09e4 body=15 status=ok
// SIG undefined FUN_147fc09e4(void)

void FUN_147fc09e4(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147fc09f4 FUN_147fc09f4 body=147 status=ok
// SIG undefined FUN_147fc09f4(void)

void FUN_147fc09f4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fc0a9a FUN_147fc0a9a body=58 status=ok
// SIG undefined FUN_147fc0a9a(void)

undefined8 * FUN_147fc0a9a(undefined8 *param_1,longlong param_2)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  FUN_1475b85bd(param_2 + 0x9b0,param_1);
  return param_1;
}



// FUNCTION 147fc0ad4 FUN_147fc0ad4 body=147 status=ok
// SIG undefined FUN_147fc0ad4(void)

void FUN_147fc0ad4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = 0;
  uStack_2c = 0x3ff00000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  FUN_1475b84e5(param_2,local_78);
  puVar2 = local_78;
  puVar3 = (undefined8 *)(param_1 + 0x9b0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc0b68 FUN_147fc0b68 body=725 status=ok
// SIG undefined FUN_147fc0b68(void)

void FUN_147fc0b68(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined1 auStack_68 [32];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = (**(code **)(*param_2 + 0x2e8))(param_2);
  if (param_2[0xd] != 0) {
    iVar6 = FUN_1415c6332();
    if (0 < iVar6) {
      lVar8 = FUN_14574ef0a(param_2[0xd],0);
      local_48 = *(int *)(lVar8 + 0xa0);
      iStack_44 = *(int *)(lVar8 + 0xa4);
      iStack_40 = *(int *)(lVar8 + 0xa8);
      iStack_3c = *(int *)(lVar8 + 0xac);
      goto LAB_147fc0bc1;
    }
  }
  local_48 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
LAB_147fc0bc1:
  if ((lVar7 != 0) && (((iStack_44 != 0 || local_48 != 0) || iStack_40 != 0) || iStack_3c != 0)) {
    iVar6 = FUN_140c7f2b4(lVar7,&local_48);
    if ((iVar6 != -1) &&
       ((lVar7 = (longlong)iVar6 * 0xf0 + *(longlong *)(lVar7 + 0x60), lVar7 != 0 &&
        (lVar7 = *(longlong *)(lVar7 + 0xc0), lVar7 != 0)))) {
      lVar8 = FUN_144a6c4d8();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        *(undefined1 *)(param_1 + 0x142) = 0;
        lVar8 = FUN_147fc0e3e(lVar7);
        if (lVar8 == 0) {
          lVar7 = FUN_147fc0ea4(lVar7);
          if (lVar7 != 0) {
            *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar7 + 0x2a8);
            *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar7 + 0x2cc);
            FUN_14477b16e(param_1 + 8,lVar7 + 0x370);
            *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(lVar7 + 0x340);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x142) = 1;
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar8 + 0x2a8);
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar8 + 0x2cc);
          FUN_14477b16e(param_1 + 8,lVar8 + 0x370);
          *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(lVar8 + 0x340);
          *(undefined4 *)((longlong)param_1 + 0x914) = *(undefined4 *)(lVar8 + 0xc54);
          uVar4 = *(undefined8 *)(lVar8 + 0xc4c);
          *(undefined8 *)((longlong)param_1 + 0x904) = *(undefined8 *)(lVar8 + 0xc44);
          *(undefined8 *)((longlong)param_1 + 0x90c) = uVar4;
          lVar7 = *(longlong *)(lVar8 + 0xc60);
          uVar11 = *(undefined4 *)(lVar8 + 0xc64);
          uVar1 = *(undefined4 *)(lVar8 + 0xc68);
          uVar2 = *(undefined4 *)(lVar8 + 0xc6c);
          uVar3 = *(undefined4 *)(lVar8 + 0xc70);
          param_1[0x123] = *(longlong *)(lVar8 + 0xc58);
          param_1[0x124] = lVar7;
          *(undefined4 *)((longlong)param_1 + 0x924) = uVar11;
          *(undefined4 *)(param_1 + 0x125) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x92c) = uVar2;
          *(undefined4 *)(param_1 + 0x126) = uVar3;
          param_1[0x127] = *(longlong *)(lVar8 + 0xc78);
          param_1[0x128] = *(longlong *)(lVar8 + 0xc80);
          uVar11 = *(undefined4 *)(lVar8 + 0xc8c);
          uVar1 = *(undefined4 *)(lVar8 + 0xc90);
          uVar2 = *(undefined4 *)(lVar8 + 0xc94);
          *(undefined4 *)(param_1 + 0x129) = *(undefined4 *)(lVar8 + 0xc88);
          *(undefined4 *)((longlong)param_1 + 0x94c) = uVar11;
          *(undefined4 *)(param_1 + 0x12a) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x954) = uVar2;
          FUN_144a787a6(param_1 + 299,lVar8 + 0xc98);
          lVar7 = *(longlong *)(lVar8 + 0xca8);
          lVar5 = *(longlong *)(lVar8 + 0xcb0);
          uVar11 = *(undefined4 *)(lVar8 + 0xcb5);
          uVar1 = *(undefined4 *)(lVar8 + 0xcb9);
          uVar2 = *(undefined4 *)(lVar8 + 0xcbd);
          *(undefined4 *)((longlong)param_1 + 0x971) = *(undefined4 *)(lVar8 + 0xcb1);
          *(undefined4 *)((longlong)param_1 + 0x975) = uVar11;
          *(undefined4 *)((longlong)param_1 + 0x979) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0x97d) = uVar2;
          param_1[0x12d] = lVar7;
          param_1[0x12e] = lVar5;
          param_1[0x131] = *(longlong *)(lVar8 + 0xcc8);
          *(undefined4 *)(param_1 + 0x132) = *(undefined4 *)(lVar8 + 0xcd0);
          *(undefined4 *)(param_1 + 0x133) = *(undefined4 *)(lVar8 + 0xcdc);
          *(undefined4 *)((longlong)param_1 + 0x99c) = *(undefined4 *)(lVar8 + 0xce0);
          *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar8 + 0xce4);
          lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
          uVar11 = 0x42c80000;
          if (lVar7 != 0) {
            lVar7 = FUN_14494016c(lVar7,0,1);
            if (lVar7 != 0) {
              uVar11 = *(undefined4 *)(lVar7 + 0x408);
            }
          }
          *(undefined4 *)((longlong)param_1 + 0xa14) = uVar11;
        }
        plVar9 = &DAT_14c846480;
        plVar10 = param_1 + 0x136;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *plVar10 = *plVar9;
          plVar9 = plVar9 + 1;
          plVar10 = plVar10 + 1;
        }
        if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x142) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 147fc0e3e FUN_147fc0e3e body=100 status=ok
// SIG undefined FUN_147fc0e3e(void)

void FUN_147fc0e3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14130829c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc0ea4 FUN_147fc0ea4 body=100 status=ok
// SIG undefined FUN_147fc0ea4(void)

void FUN_147fc0ea4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_144a79bde();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc0f0a FUN_147fc0f0a body=83 status=ok
// SIG undefined FUN_147fc0f0a(void)

void FUN_147fc0f0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147fc0f5e();
  FUN_14009d2a0();
  lVar1 = FUN_14038fb82();
  FUN_147fc8126(&local_11,param_3,lVar1 + 0x30);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fc0f5e FUN_147fc0f5e body=164 status=ok
// SIG undefined FUN_147fc0f5e(void)

void FUN_147fc0f5e(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe | *(byte *)(param_2 + 0xa0) >> 2 & 1;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x30);
  FUN_14477b16e(param_1 + 0x40,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_2 + 0xa8);
  fVar1 = *(float *)(param_1 + 0x904);
  fVar2 = tanf(*(float *)(param_1 + 0x28) * 0.5 * 0.017453292);
  *(float *)(param_1 + 0x998) = (fVar1 * 0.5) / fVar2;
  FUN_147fc1002(param_1);
  return;
}



// FUNCTION 147fc1002 FUN_147fc1002 body=233 status=ok
// SIG undefined FUN_147fc1002(void)

void FUN_147fc1002(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0xa10) == '\x01') {
    fVar2 = *(float *)(param_1 + 0x998);
    if (*(float *)(param_1 + 0x91c) <= *(float *)(param_1 + 0x998)) {
      fVar2 = *(float *)(param_1 + 0x91c);
    }
    if (fVar2 <= *(float *)(param_1 + 0x918)) {
      fVar2 = *(float *)(param_1 + 0x918);
    }
    *(float *)(param_1 + 0x998) = fVar2;
    fVar1 = *(float *)(param_1 + 0x99c);
    if (*(float *)(param_1 + 0x924) <= *(float *)(param_1 + 0x99c)) {
      fVar1 = *(float *)(param_1 + 0x924);
    }
    if (fVar1 <= *(float *)(param_1 + 0x920)) {
      fVar1 = *(float *)(param_1 + 0x920);
    }
    *(float *)(param_1 + 0x99c) = fVar1;
    fVar3 = (*(float *)(param_1 + 0xa14) / 1000.0) * *(float *)(param_1 + 0x928);
    fVar1 = *(float *)(param_1 + 0x93c);
    if (*(float *)(param_1 + 0x93c) <= fVar3) {
      fVar1 = fVar3;
    }
    *(float *)(param_1 + 0x93c) = fVar1;
    fVar3 = 0.0;
    fVar1 = 0.0;
    if (0.0 < fVar2) {
      fVar2 = atanf(*(float *)(param_1 + 0x904) / (fVar2 + fVar2));
      fVar1 = (fVar2 + fVar2) * 57.295776;
    }
    *(float *)(param_1 + 0x28) = fVar1;
    if (0.0 < *(float *)(param_1 + 0x908)) {
      fVar3 = *(float *)(param_1 + 0x904) / *(float *)(param_1 + 0x908);
    }
    *(float *)(param_1 + 0x914) = fVar3;
    *(float *)(param_1 + 0x30) = fVar3;
  }
  return;
}


