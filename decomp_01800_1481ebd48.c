// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481ebd48 FUN_1481ebd48 body=86 status=ok
// SIG undefined FUN_1481ebd48(void)

undefined8 FUN_1481ebd48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1402ae190(param_2,param_3);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_3 + 0x88);
    *(undefined1 *)(param_2 + 0x8c) = *(undefined1 *)(param_3 + 0x8c);
    param_2 = param_2 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return 1;
}



// FUNCTION 1481ebdc6 FUN_1481ebdc6 body=59 status=ok
// SIG undefined FUN_1481ebdc6(void)

undefined8 FUN_1481ebdc6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ebe12 FUN_1481ebe12 body=38 status=ok
// SIG undefined FUN_1481ebe12(void)

void FUN_1481ebe12(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14006c2ae(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1481ebf4e FUN_1481ebf4e body=88 status=ok
// SIG undefined FUN_1481ebf4e(void)

undefined8 FUN_1481ebf4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1402ae190(param_2,param_3);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(param_3 + 0x90);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 1481ebfce FUN_1481ebfce body=59 status=ok
// SIG undefined FUN_1481ebfce(void)

undefined8 FUN_1481ebfce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ec01a FUN_1481ec01a body=38 status=ok
// SIG undefined FUN_1481ec01a(void)

void FUN_1481ec01a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14006c2ae(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1481ec0d8 FUN_1481ec0d8 body=121 status=ok
// SIG undefined FUN_1481ec0d8(void)

undefined8 FUN_1481ec0d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      plVar3 = *(longlong **)(param_3 + 0x10 + lVar8);
      plVar4 = *(longlong **)(param_2 + 0x10 + lVar8);
      if (plVar4 != plVar3) {
        *(longlong **)(param_2 + 0x10 + lVar8) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(param_2 + 0x18 + lVar8) = *(undefined4 *)(param_3 + lVar8 + 0x18);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ec17a FUN_1481ec17a body=59 status=ok
// SIG undefined FUN_1481ec17a(void)

undefined8 FUN_1481ec17a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ec1c0 FUN_1481ec1c0 body=39 status=ok
// SIG undefined FUN_1481ec1c0(void)

void FUN_1481ec1c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1481ec2a4 FUN_1481ec2a4 body=54 status=ok
// SIG undefined FUN_1481ec2a4(void)

undefined1 FUN_1481ec2a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481e36c2(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1481ec302 FUN_1481ec302 body=59 status=ok
// SIG undefined FUN_1481ec302(void)

undefined8 FUN_1481ec302(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ec348 FUN_1481ec348 body=34 status=ok
// SIG undefined FUN_1481ec348(void)

void FUN_1481ec348(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1459becf2(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1481ec3ba FUN_1481ec3ba body=37 status=ok
// SIG undefined FUN_1481ec3ba(void)

void FUN_1481ec3ba(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  FUN_1481ec58e(param_2);
  return;
}



// FUNCTION 1481ec3e8 FUN_1481ec3e8 body=43 status=ok
// SIG undefined FUN_1481ec3e8(void)

void FUN_1481ec3e8(undefined8 param_1,longlong param_2)

{
  FUN_14102a02c(param_2 + 0x70);
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481ec42a FUN_1481ec42a body=107 status=ok
// SIG undefined FUN_1481ec42a(void)

undefined1 FUN_1481ec42a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      puVar2 = (undefined8 *)(param_3 + -0x60);
      puVar3 = (undefined8 *)(param_2 + -0x60);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_1481ec5f8(param_2,param_3);
      FUN_1404d7984(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x98;
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ec4be FUN_1481ec4be body=59 status=ok
// SIG undefined FUN_1481ec4be(void)

undefined8 FUN_1481ec4be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ec50a FUN_1481ec50a body=53 status=ok
// SIG undefined FUN_1481ec50a(void)

void FUN_1481ec50a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14102a02c(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1481ec58e FUN_1481ec58e body=105 status=ok
// SIG undefined FUN_1481ec58e(void)

void FUN_1481ec58e(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((longlong)param_1 + 0x81) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x7d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = DAT_14c845dc4;
  param_1[0x11] = DAT_14c845dbc;
  return;
}



// FUNCTION 1481ec5f8 FUN_1481ec5f8 body=84 status=ok
// SIG undefined FUN_1481ec5f8(void)

longlong * FUN_1481ec5f8(longlong *param_1,longlong *param_2)

{
  size_t _Size;
  void *_Dst;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if (param_1 != param_2) {
    _Size = param_2[1];
    _Dst = (void *)FUN_14001cc68(_Size,0);
    memcpy(_Dst,(void *)*param_2,_Size);
    *param_1 = (longlong)_Dst;
    param_1[1] = _Size;
  }
  return param_1;
}



// FUNCTION 1481ec64e FUN_1481ec64e body=38 status=ok
// SIG undefined FUN_1481ec64e(void)

void FUN_1481ec64e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_1481ec58e((longlong)param_2 + 0x40);
  return;
}



// FUNCTION 1481ec696 FUN_1481ec696 body=49 status=ok
// SIG undefined FUN_1481ec696(void)

void FUN_1481ec696(undefined8 param_1,longlong param_2)

{
  FUN_14102a02c(param_2 + 0xb0);
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481ec6de FUN_1481ec6de body=166 status=ok
// SIG undefined FUN_1481ec6de(void)

undefined8 FUN_1481ec6de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xa0);
      uVar2 = *(undefined4 *)(param_3 + -0x9c);
      uVar3 = *(undefined4 *)(param_3 + -0x98);
      uVar4 = *(undefined4 *)(param_3 + -0x94);
      uVar5 = *(undefined4 *)(param_3 + -0x90);
      uVar6 = *(undefined4 *)(param_3 + -0x8c);
      uVar7 = *(undefined4 *)(param_3 + -0x88);
      uVar8 = *(undefined4 *)(param_3 + -0x84);
      uVar9 = *(undefined4 *)(param_3 + -0x80);
      uVar10 = *(undefined4 *)(param_3 + -0x7c);
      uVar11 = *(undefined4 *)(param_3 + -0x78);
      uVar12 = *(undefined4 *)(param_3 + -0x74);
      uVar13 = *(undefined4 *)(param_3 + -0x70);
      uVar14 = *(undefined4 *)(param_3 + -0x6c);
      uVar15 = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -0x74) = *(undefined4 *)(param_3 + -0x74);
      *(undefined4 *)(param_2 + -0x70) = uVar13;
      *(undefined4 *)(param_2 + -0x6c) = uVar14;
      *(undefined4 *)(param_2 + -0x68) = uVar15;
      *(undefined4 *)(param_2 + -0x80) = uVar9;
      *(undefined4 *)(param_2 + -0x7c) = uVar10;
      *(undefined4 *)(param_2 + -0x78) = uVar11;
      *(undefined4 *)(param_2 + -0x74) = uVar12;
      *(undefined4 *)(param_2 + -0x90) = uVar5;
      *(undefined4 *)(param_2 + -0x8c) = uVar6;
      *(undefined4 *)(param_2 + -0x88) = uVar7;
      *(undefined4 *)(param_2 + -0x84) = uVar8;
      *(undefined4 *)(param_2 + -0xa0) = uVar1;
      *(undefined4 *)(param_2 + -0x9c) = uVar2;
      *(undefined4 *)(param_2 + -0x98) = uVar3;
      *(undefined4 *)(param_2 + -0x94) = uVar4;
      puVar17 = (undefined8 *)(param_3 + -0x60);
      puVar18 = (undefined8 *)(param_2 + -0x60);
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      FUN_1481ec5f8(param_2,param_3);
      FUN_1404d7984(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0xd8;
      param_2 = param_2 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ec7ac FUN_1481ec7ac body=59 status=ok
// SIG undefined FUN_1481ec7ac(void)

undefined8 FUN_1481ec7ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ec7f8 FUN_1481ec7f8 body=59 status=ok
// SIG undefined FUN_1481ec7f8(void)

void FUN_1481ec7f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14102a02c(param_2 + 0xb0);
    if (*(longlong *)(param_2 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1481ec884 FUN_1481ec884 body=38 status=ok
// SIG undefined FUN_1481ec884(void)

void FUN_1481ec884(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1481ec58e((longlong)param_2 + 0x38);
  return;
}



// FUNCTION 1481ec8c6 FUN_1481ec8c6 body=49 status=ok
// SIG undefined FUN_1481ec8c6(void)

void FUN_1481ec8c6(undefined8 param_1,longlong param_2)

{
  FUN_14102a02c(param_2 + 0xa8);
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481ec90e FUN_1481ec90e body=160 status=ok
// SIG undefined FUN_1481ec90e(void)

undefined8 FUN_1481ec90e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
    do {
      *(undefined8 *)(param_2 + -0x68) = *(undefined8 *)(param_3 + -0x68);
      uVar1 = *(undefined4 *)(param_3 + -0x98);
      uVar2 = *(undefined4 *)(param_3 + -0x94);
      uVar3 = *(undefined4 *)(param_3 + -0x90);
      uVar4 = *(undefined4 *)(param_3 + -0x8c);
      uVar5 = *(undefined4 *)(param_3 + -0x88);
      uVar6 = *(undefined4 *)(param_3 + -0x84);
      uVar7 = *(undefined4 *)(param_3 + -0x80);
      uVar8 = *(undefined4 *)(param_3 + -0x7c);
      uVar9 = *(undefined4 *)(param_3 + -0x74);
      uVar10 = *(undefined4 *)(param_3 + -0x70);
      uVar11 = *(undefined4 *)(param_3 + -0x6c);
      *(undefined4 *)(param_2 + -0x78) = *(undefined4 *)(param_3 + -0x78);
      *(undefined4 *)(param_2 + -0x74) = uVar9;
      *(undefined4 *)(param_2 + -0x70) = uVar10;
      *(undefined4 *)(param_2 + -0x6c) = uVar11;
      *(undefined4 *)(param_2 + -0x88) = uVar5;
      *(undefined4 *)(param_2 + -0x84) = uVar6;
      *(undefined4 *)(param_2 + -0x80) = uVar7;
      *(undefined4 *)(param_2 + -0x7c) = uVar8;
      *(undefined4 *)(param_2 + -0x98) = uVar1;
      *(undefined4 *)(param_2 + -0x94) = uVar2;
      *(undefined4 *)(param_2 + -0x90) = uVar3;
      *(undefined4 *)(param_2 + -0x8c) = uVar4;
      puVar13 = (undefined8 *)(param_3 + -0x60);
      puVar14 = (undefined8 *)(param_2 + -0x60);
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      FUN_1481ec5f8(param_2,param_3);
      FUN_1404d7984(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0xd0;
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ec9d6 FUN_1481ec9d6 body=59 status=ok
// SIG undefined FUN_1481ec9d6(void)

undefined8 FUN_1481ec9d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481eca22 FUN_1481eca22 body=59 status=ok
// SIG undefined FUN_1481eca22(void)

void FUN_1481eca22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_14102a02c(param_2 + 0xa8);
    if (*(longlong *)(param_2 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1481ecaae FUN_1481ecaae body=130 status=ok
// SIG undefined FUN_1481ecaae(void)

void FUN_1481ecaae(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2 + 0xc,0,0x100);
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0xd) = DAT_14c846338;
  param_2[0xc] = DAT_14c846330;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  FUN_1481ec58e(param_2 + 0x16);
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  return;
}



// FUNCTION 1481ecb30 FUN_1481ecb30 body=121 status=ok
// SIG undefined FUN_1481ecb30(void)

void FUN_1481ecb30(undefined8 param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_2 + 0xd) = DAT_14c846338;
  param_2[0xc] = DAT_14c846330;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  FUN_1481ec58e(param_2 + 0x16);
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  return;
}



// FUNCTION 1481ecbc8 FUN_1481ecbc8 body=242 status=ok
// SIG undefined FUN_1481ecbc8(void)

undefined8 FUN_1481ecbc8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
    do {
      puVar13 = (undefined8 *)(param_3 + -0x148);
      puVar14 = (undefined8 *)(param_2 + -0x148);
      for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      *(undefined4 *)(param_2 + -0xd8) = *(undefined4 *)(param_3 + -0xd8);
      uVar1 = *(undefined4 *)(param_3 + -0xcc);
      uVar2 = *(undefined4 *)(param_3 + -200);
      uVar3 = *(undefined4 *)(param_3 + -0xc4);
      uVar4 = *(undefined4 *)(param_3 + -0xc0);
      uVar5 = *(undefined4 *)(param_3 + -0xbc);
      uVar6 = *(undefined4 *)(param_3 + -0xb8);
      uVar7 = *(undefined4 *)(param_3 + -0xb4);
      uVar8 = *(undefined4 *)(param_3 + -0xb0);
      uVar9 = *(undefined4 *)(param_3 + -0xac);
      uVar10 = *(undefined4 *)(param_3 + -0xa8);
      uVar11 = *(undefined4 *)(param_3 + -0xa4);
      *(undefined4 *)(param_2 + -0xd0) = *(undefined4 *)(param_3 + -0xd0);
      *(undefined4 *)(param_2 + -0xcc) = uVar1;
      *(undefined4 *)(param_2 + -200) = uVar2;
      *(undefined4 *)(param_2 + -0xc4) = uVar3;
      *(undefined4 *)(param_2 + -0xc0) = uVar4;
      *(undefined4 *)(param_2 + -0xbc) = uVar5;
      *(undefined4 *)(param_2 + -0xb8) = uVar6;
      *(undefined4 *)(param_2 + -0xb4) = uVar7;
      *(undefined4 *)(param_2 + -0xb0) = uVar8;
      *(undefined4 *)(param_2 + -0xac) = uVar9;
      *(undefined4 *)(param_2 + -0xa8) = uVar10;
      *(undefined4 *)(param_2 + -0xa4) = uVar11;
      *(undefined8 *)(param_2 + -0xa0) = *(undefined8 *)(param_3 + -0xa0);
      puVar13 = (undefined8 *)(param_3 + -0x98);
      puVar14 = (undefined8 *)(param_2 + -0x98);
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      FUN_1481ec5f8(param_2 + -0x38,param_3 + -0x38);
      FUN_1404d7984(param_2 + -0x28,param_3 + -0x28);
      FUN_1481ece36(param_2,param_3);
      param_3 = param_3 + 0x160;
      param_2 = param_2 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ecce2 FUN_1481ecce2 body=59 status=ok
// SIG undefined FUN_1481ecce2(void)

undefined8 FUN_1481ecce2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ecd2e FUN_1481ecd2e body=40 status=ok
// SIG undefined FUN_1481ecd2e(void)

void FUN_1481ecd2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_1481ecda4(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 1481ecda4 FUN_1481ecda4 body=84 status=ok
// SIG undefined FUN_1481ecda4(void)

void FUN_1481ecda4(longlong param_1)

{
  FUN_1481ecdf8(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_14102a02c(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481ecdf8 FUN_1481ecdf8 body=62 status=ok
// SIG undefined FUN_1481ecdf8(void)

void FUN_1481ecdf8(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xb0;
    do {
      FUN_14102a02c(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0xd8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1481ece36 FUN_1481ece36 body=95 status=ok
// SIG undefined FUN_1481ece36(void)

undefined8 * FUN_1481ece36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1481ecdf8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481ece96(param_1,iVar1);
      FUN_1481ecf08(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481ece96 FUN_1481ece96 body=114 status=ok
// SIG undefined FUN_1481ece96(void)

void FUN_1481ece96(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd8,8);
    iVar2 = (int)(uVar1 / 0xd8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xd8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481ecf08 FUN_1481ecf08 body=194 status=ok
// SIG undefined FUN_1481ecf08(void)

void FUN_1481ecf08(longlong param_1,longlong param_2,int param_3)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0xb0);
      uVar2 = *(undefined4 *)(param_2 + -0xac);
      uVar3 = *(undefined4 *)(param_2 + -0xa8);
      uVar4 = *(undefined4 *)(param_2 + -0xa4);
      uVar5 = *(undefined4 *)(param_2 + -0xa0);
      uVar6 = *(undefined4 *)(param_2 + -0x9c);
      uVar7 = *(undefined4 *)(param_2 + -0x98);
      uVar8 = *(undefined4 *)(param_2 + -0x94);
      uVar9 = *(undefined4 *)(param_2 + -0x90);
      uVar10 = *(undefined4 *)(param_2 + -0x8c);
      uVar11 = *(undefined4 *)(param_2 + -0x88);
      uVar12 = *(undefined4 *)(param_2 + -0x84);
      uVar13 = *(undefined4 *)(param_2 + -0x80);
      uVar14 = *(undefined4 *)(param_2 + -0x7c);
      uVar15 = *(undefined4 *)(param_2 + -0x78);
      *(undefined4 *)(param_1 + -0x84) = *(undefined4 *)(param_2 + -0x84);
      *(undefined4 *)(param_1 + -0x80) = uVar13;
      *(undefined4 *)(param_1 + -0x7c) = uVar14;
      *(undefined4 *)(param_1 + -0x78) = uVar15;
      *(undefined4 *)(param_1 + -0x90) = uVar9;
      *(undefined4 *)(param_1 + -0x8c) = uVar10;
      *(undefined4 *)(param_1 + -0x88) = uVar11;
      *(undefined4 *)(param_1 + -0x84) = uVar12;
      *(undefined4 *)(param_1 + -0xa0) = uVar5;
      *(undefined4 *)(param_1 + -0x9c) = uVar6;
      *(undefined4 *)(param_1 + -0x98) = uVar7;
      *(undefined4 *)(param_1 + -0x94) = uVar8;
      *(undefined4 *)(param_1 + -0xb0) = uVar1;
      *(undefined4 *)(param_1 + -0xac) = uVar2;
      *(undefined4 *)(param_1 + -0xa8) = uVar3;
      *(undefined4 *)(param_1 + -0xa4) = uVar4;
      puVar17 = (undefined8 *)(param_2 + -0x70);
      puVar18 = (undefined8 *)(param_1 + -0x70);
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined8 *)(param_1 + -8) = 0;
      FUN_1481ec5f8(param_1 + -0x10,param_2 + -0x10);
      FUN_1427d8874(param_1,param_2);
      param_1 = param_1 + 0xd8;
      param_2 = param_2 + 0xd8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1481ecfcc FUN_1481ecfcc body=68 status=ok
// SIG undefined FUN_1481ecfcc(void)

void FUN_1481ecfcc(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0xffff0000ffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffff;
  return;
}



// FUNCTION 1481ed010 FUN_1481ed010 body=61 status=ok
// SIG undefined FUN_1481ed010(void)

void FUN_1481ed010(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0xffff0000ffff;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffff;
  return;
}



// FUNCTION 1481ed0b4 FUN_1481ed0b4 body=59 status=ok
// SIG undefined FUN_1481ed0b4(void)

undefined8 FUN_1481ed0b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ed156 FUN_1481ed156 body=81 status=ok
// SIG undefined FUN_1481ed156(void)

void FUN_1481ed156(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  *(undefined2 *)((longlong)param_2 + 0x50) = 0xffff;
  *(undefined2 *)((longlong)param_2 + 0x58) = 0xffff;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined1 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  return;
}



// FUNCTION 1481ed216 FUN_1481ed216 body=63 status=ok
// SIG undefined FUN_1481ed216(void)

undefined1 FUN_1481ed216(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481ed340(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 1481ed27e FUN_1481ed27e body=59 status=ok
// SIG undefined FUN_1481ed27e(void)

undefined8 FUN_1481ed27e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ed2ca FUN_1481ed2ca body=40 status=ok
// SIG undefined FUN_1481ed2ca(void)

void FUN_1481ed2ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_145c11ace(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1481ed340 FUN_1481ed340 body=195 status=ok
// SIG undefined FUN_1481ed340(void)

undefined8 * FUN_1481ed340(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1481ed404(param_1 + 2,param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_1406fa324(param_1 + 6,param_2 + 6);
  FUN_1406fa324(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  FUN_140816ffa(param_1 + 0xc,param_2 + 0xc);
  FUN_140816ffa(param_1 + 0xe,param_2 + 0xe);
  FUN_1481ed4d2(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  FUN_140816ffa(param_1 + 0x13,param_2 + 0x13);
  FUN_1481ed4d2(param_1 + 0x15,param_2 + 0x15);
  return param_1;
}



// FUNCTION 1481ed404 FUN_1481ed404 body=89 status=ok
// SIG undefined FUN_1481ed404(void)

undefined8 * FUN_1481ed404(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481ed45e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481ed45e FUN_1481ed45e body=115 status=ok
// SIG undefined FUN_1481ed45e(void)

void FUN_1481ed45e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481ed4d2 FUN_1481ed4d2 body=88 status=ok
// SIG undefined FUN_1481ed4d2(void)

undefined8 * FUN_1481ed4d2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481ed52a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481ed52a FUN_1481ed52a body=98 status=ok
// SIG undefined FUN_1481ed52a(void)

void FUN_1481ed52a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481ed58e FUN_1481ed58e body=88 status=ok
// SIG undefined FUN_1481ed58e(void)

void FUN_1481ed58e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  *(undefined2 *)((longlong)param_2 + 0x50) = 0xffff;
  *(undefined2 *)((longlong)param_2 + 0x58) = 0xffff;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined1 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  return;
}



// FUNCTION 1481ed65a FUN_1481ed65a body=105 status=ok
// SIG undefined FUN_1481ed65a(void)

undefined1 FUN_1481ed65a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481ed340(param_2,param_3);
    FUN_1481ed7ae(param_2 + 0xb8,param_3 + 0xb8);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 1481ed6ec FUN_1481ed6ec body=59 status=ok
// SIG undefined FUN_1481ed6ec(void)

undefined8 FUN_1481ed6ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ed738 FUN_1481ed738 body=40 status=ok
// SIG undefined FUN_1481ed738(void)

void FUN_1481ed738(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145c11a0e(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1481ed7ae FUN_1481ed7ae body=95 status=ok
// SIG undefined FUN_1481ed7ae(void)

undefined8 * FUN_1481ed7ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c11a48(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481ed80e(param_1,iVar1);
      FUN_1481ed883(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481ed80e FUN_1481ed80e body=117 status=ok
// SIG undefined FUN_1481ed80e(void)

void FUN_1481ed80e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    iVar2 = (int)(uVar1 / 0xb8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481ed883 FUN_1481ed883 body=60 status=ok
// SIG undefined FUN_1481ed883(void)

void FUN_1481ed883(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481ed8c0(param_1,param_2);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 1481ed8c0 FUN_1481ed8c0 body=390 status=ok
// SIG undefined FUN_1481ed8c0(void)

undefined8 * FUN_1481ed8c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1481ed45e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_140817052(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  FUN_1481eda46(param_1 + 0xe,param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  FUN_1481eda46(param_1 + 0x13,param_2 + 0x13);
  return param_1;
}



// FUNCTION 1481eda46 FUN_1481eda46 body=157 status=ok
// SIG undefined FUN_1481eda46(void)

undefined8 * FUN_1481eda46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140817052(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1481ed52a(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 1481edae4 FUN_1481edae4 body=267 status=ok
// SIG undefined FUN_1481edae4(void)

undefined8 * FUN_1481edae4(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[4] = param_2[4];
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[4] = param_2[4];
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  FUN_1481edc40(param_1 + 0xb,param_2 + 0xb);
  FUN_1481edc8e(param_1 + 0xe,param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  FUN_1481edc8e(param_1 + 0x13,param_2 + 0x13);
  return param_1;
}



// FUNCTION 1481edbf0 FUN_1481edbf0 body=80 status=ok
// SIG undefined FUN_1481edbf0(void)

longlong * FUN_1481edbf0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145c11a48(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1481edc40 FUN_1481edc40 body=77 status=ok
// SIG undefined FUN_1481edc40(void)

undefined2 * FUN_1481edc40(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return param_1;
}



// FUNCTION 1481edc8e FUN_1481edc8e body=111 status=ok
// SIG undefined FUN_1481edc8e(void)

longlong * FUN_1481edc8e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 1481edcfe FUN_1481edcfe body=271 status=ok
// SIG undefined FUN_1481edcfe(void)

ulonglong FUN_1481edcfe(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + 8;
  plVar2 = (longlong *)FUN_144741050(param_1);
  lVar1 = DAT_14cb42190;
  if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb42190);
  }
  if (((*plVar2 != lVar1) || ((short)plVar2[1] != DAT_14cb42198)) ||
     (uVar3 = CONCAT71((uint7)(byte)((ushort)(short)plVar2[1] >> 8),1),
     *(char *)((longlong)plVar2 + 10) != DAT_14cb4219a)) {
    plVar2 = (longlong *)FUN_144741050(param_1);
    lVar1 = DAT_14cb41370;
    if ((DAT_14cb41370 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb41370);
    }
    if (((*plVar2 != lVar1) || ((short)plVar2[1] != DAT_14cb41378)) ||
       (uVar3 = CONCAT71((uint7)(byte)((ushort)(short)plVar2[1] >> 8),1),
       *(char *)((longlong)plVar2 + 10) != DAT_14cb4137a)) {
      plVar2 = (longlong *)FUN_144741050(param_1);
      lVar1 = DAT_14cb42130;
      if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42130);
      }
      if ((*plVar2 == lVar1) && ((short)plVar2[1] == DAT_14cb42138)) {
        uVar3 = (ulonglong)
                CONCAT11((char)((ushort)(short)plVar2[1] >> 8),
                         *(char *)((longlong)plVar2 + 10) == DAT_14cb4213a);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1481ede0e FUN_1481ede0e body=177 status=ok
// SIG undefined FUN_1481ede0e(void)

ulonglong FUN_1481ede0e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = (longlong *)FUN_144741050(param_1 + 8);
  lVar1 = DAT_14cb42190;
  if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb42190);
  }
  if (((*plVar2 != lVar1) || ((short)plVar2[1] != DAT_14cb42198)) ||
     (uVar3 = CONCAT71((uint7)(byte)((ushort)(short)plVar2[1] >> 8),1),
     *(char *)((longlong)plVar2 + 10) != DAT_14cb4219a)) {
    plVar2 = (longlong *)FUN_144741050(param_1 + 8);
    lVar1 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    if ((*plVar2 == lVar1) && ((short)plVar2[1] == DAT_14cb42138)) {
      uVar3 = (ulonglong)
              CONCAT11((char)((ushort)(short)plVar2[1] >> 8),
                       *(char *)((longlong)plVar2 + 10) == DAT_14cb4213a);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1481edec0 FUN_1481edec0 body=1711 status=ok
// SIG undefined FUN_1481edec0(void)

void FUN_1481edec0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined4 uStack_74;
  undefined1 local_70 [16];
  int local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = param_4;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)((longlong)param_3 + 0x3c);
  *(undefined2 *)(param_2 + 10) = 0xffff;
  *(undefined2 *)(param_2 + 0xb) = 0xffff;
  local_58 = 0;
  uStack_50 = 0;
  iVar6 = (int)param_3[1];
  local_88 = param_1;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  uVar8 = 0;
  if (iVar6 != 0) {
    FUN_14481578e(&local_58);
    iVar6 = (int)param_3[1];
    if (0 < iVar6) {
      lVar17 = 0;
      uVar8 = 0;
      do {
        uVar7 = uStack_50;
        lVar13 = lVar17 * 0x20 + param_3[2];
        if ((longlong)(int)param_7[1] == 0) {
LAB_1481edf82:
          lVar15 = (longlong)(int)uStack_50;
          uVar5 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
          if (uStack_50._4_4_ < uVar5) {
            FUN_1446f48e2(&local_58,uVar7 & 0xffffffff);
          }
          *(int *)(local_58 + lVar15 * 4) = (int)lVar17;
          uVar8 = uVar8 + *(ushort *)(lVar13 + 8) +
                  (uint)*(ushort *)(lVar13 + 10) + (uint)*(ushort *)(lVar13 + 0xc);
          iVar6 = (int)param_3[1];
        }
        else {
          lVar15 = 0;
          do {
            if (*(longlong *)(*param_7 + lVar15) == *(longlong *)(*param_3 + lVar17 * 0xc))
            goto LAB_1481edf82;
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)param_7[1] * 8 != lVar15);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar6);
    }
  }
  FUN_1446ddc76(&local_78,"Velocity");
  lVar17 = CONCAT44(uStack_74,local_78);
  iVar6 = FUN_144830b78(local_60,&DAT_14cb42140);
  local_60[0] = iVar6;
  if (((*(byte *)(local_88 + 4) & 8) != 0) && ((longlong)(int)param_3[1] != 0)) {
    uVar7 = 0;
    do {
      if ((*(longlong *)(*param_3 + uVar7) == lVar17) && (*(int *)(*param_3 + 8 + uVar7) == iVar6))
      {
        local_78 = (int)(uVar7 >> 2) * -0x55555555;
        if (local_78 != -1) {
          *(undefined1 *)(param_2 + 5) = 1;
          if ((longlong)(int)uStack_50 == 0) goto LAB_1481ee4c5;
          lVar13 = 0;
          goto LAB_1481ee548;
        }
        break;
      }
      uVar7 = uVar7 + 0xc;
    } while ((longlong)(int)param_3[1] * 0xc != uVar7);
  }
  goto LAB_1481ee020;
  while (lVar13 = lVar13 + 4, (longlong)(int)uStack_50 * 4 != lVar13) {
LAB_1481ee548:
    if (*(int *)(local_58 + lVar13) == local_78) goto LAB_1481ee020;
  }
LAB_1481ee4c5:
  FUN_1449e3bb0(&local_58,&local_78);
  lVar13 = param_3[2];
  lVar15 = (longlong)local_78 * 0x20;
  uVar8 = uVar8 + *(ushort *)(lVar13 + 8 + lVar15) +
          (uint)*(ushort *)(lVar13 + 10 + lVar15) + (uint)*(ushort *)(lVar13 + 0xc + lVar15);
LAB_1481ee020:
  iVar14 = (int)uStack_50;
  uVar7 = uStack_50 & 0xffffffff;
  FUN_1481ee572(param_2 + 2);
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8);
  }
  plVar1 = param_2 + 0xc;
  *(undefined4 *)(param_2 + 0xd) = 0;
  plVar10 = (longlong *)0x0;
  uVar5 = uVar8;
  if (*(uint *)((longlong)param_2 + 0x6c) != uVar8) {
    FUN_1448759c8(plVar1,uVar8);
    plVar10 = (longlong *)(ulonglong)*(uint *)(param_2 + 0xd);
    uVar5 = *(uint *)((longlong)param_2 + 0x6c);
  }
  *(uint *)(param_2 + 0xd) = (int)plVar10 + uVar8;
  if (uVar5 - (int)plVar10 < uVar8) {
    local_90 = plVar10;
    FUN_14488eebe(plVar1,plVar10);
    plVar10 = local_90;
  }
  memset((void *)((longlong)(int)plVar10 * 2 + param_2[0xc]),0,(ulonglong)(uVar8 * 2));
  if (param_2 + 6 != param_5) {
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    param_2[6] = *param_5;
    *param_5 = 0;
    *(int *)(param_2 + 7) = (int)param_5[1];
    *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)((longlong)param_5 + 0xc);
    param_5[1] = 0;
  }
  local_90 = param_2 + 8;
  if (local_90 != param_6) {
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    param_2[8] = *param_6;
    *param_6 = 0;
    *(int *)(param_2 + 9) = (int)param_6[1];
    *(undefined4 *)((longlong)param_2 + 0x4c) = *(undefined4 *)((longlong)param_6 + 0xc);
    param_6[1] = 0;
  }
  if (0 < iVar14) {
    lVar13 = 0x16;
    uVar9 = 0;
    do {
      lVar11 = (longlong)*(int *)(local_58 + uVar9 * 4);
      lVar15 = *param_3;
      lVar2 = param_3[2];
      lVar3 = param_2[2];
      lVar12 = lVar11 * 0x20;
      *(undefined4 *)(lVar3 + -0xe + lVar13) = *(undefined4 *)(lVar15 + 8 + lVar11 * 0xc);
      *(undefined8 *)(lVar3 + -0x16 + lVar13) = *(undefined8 *)(lVar15 + lVar11 * 0xc);
      *(ushort *)(lVar3 + -10 + lVar13) =
           -(ushort)(*(short *)(lVar2 + 8 + lVar12) == 0) | *(ushort *)(param_2 + 4);
      *(undefined2 *)(lVar3 + -8 + lVar13) = *(undefined2 *)(lVar2 + 8 + lVar12);
      *(ushort *)(lVar3 + -6 + lVar13) =
           -(ushort)(*(short *)(lVar2 + 0xc + lVar12) == 0) | *(ushort *)((longlong)param_2 + 0x22);
      *(undefined2 *)(lVar3 + -4 + lVar13) = *(undefined2 *)(lVar2 + 0xc + lVar12);
      *(ushort *)(lVar3 + -2 + lVar13) =
           -(ushort)(*(short *)(lVar2 + 10 + lVar12) == 0) | *(ushort *)((longlong)param_2 + 0x24);
      *(undefined2 *)(lVar3 + lVar13) = *(undefined2 *)(lVar2 + 10 + lVar12);
      *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + *(short *)(lVar2 + 8 + lVar12);
      *(short *)((longlong)param_2 + 0x22) =
           *(short *)((longlong)param_2 + 0x22) + *(short *)(lVar2 + 0xc + lVar12);
      *(short *)((longlong)param_2 + 0x24) =
           *(short *)((longlong)param_2 + 0x24) + *(short *)(lVar2 + 10 + lVar12);
      uVar9 = uVar9 + 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar7 != uVar9);
  }
  uVar8 = *(uint *)(local_88 + 4);
  if (((uVar8 & 8) != 0) && ((longlong)*(int *)(param_2 + 3) != 0)) {
    lVar13 = param_2[2];
    lVar15 = 0;
    do {
      if ((*(longlong *)(lVar13 + lVar15) == lVar17) && (*(int *)(lVar13 + 8 + lVar15) == iVar6)) {
        iVar6 = (int)(lVar15 >> 3) * -0x55555555;
        lVar13 = lVar13 + (longlong)iVar6 * 0x18;
        if (lVar13 != 0 && iVar6 != -1) {
          *(undefined2 *)(param_2 + 10) = *(undefined2 *)(lVar13 + 0xc);
          uVar8 = *(uint *)(local_88 + 4);
        }
        break;
      }
      lVar2 = lVar13 + lVar15;
      lVar15 = lVar15 + 0x18;
    } while (lVar2 + 0x18 != lVar13 + (longlong)*(int *)(param_2 + 3) * 0x18);
  }
  if ((uVar8 & 4) != 0) {
    FUN_1446ddc76(&local_80,"UniqueID");
    iVar6 = FUN_144830b78(local_70);
    if ((longlong)(int)param_3[1] != 0) {
      lVar17 = 0;
      do {
        if ((*(longlong *)(*param_3 + lVar17) == local_80) &&
           (*(int *)(*param_3 + 8 + lVar17) == iVar6)) {
          lVar17 = (lVar17 >> 2) * -0x5555555555555555;
          sVar4 = (short)lVar17;
          *(short *)(param_2 + 0xb) = sVar4;
          if (sVar4 != -1) {
            *(undefined2 *)(param_2 + 0xb) =
                 *(undefined2 *)(param_3[2] + 2 + (ulonglong)(((uint)lVar17 & 0xffff) << 5));
            *(undefined1 *)((longlong)param_2 + 0x27) = 1;
          }
          goto LAB_1481ee226;
        }
        lVar17 = lVar17 + 0xc;
      } while ((longlong)(int)param_3[1] * 0xc != lVar17);
    }
    *(undefined2 *)(param_2 + 0xb) = 0xffff;
  }
LAB_1481ee226:
  if ((*(char *)((longlong)param_2 + 0x27) == '\0') &&
     (*(undefined4 *)(param_2 + 9) = 0, *(int *)((longlong)param_2 + 0x4c) != 0)) {
    FUN_1402191ca(local_90);
  }
  if (0 < iVar14) {
    uVar8 = (uint)*(ushort *)(param_2 + 4);
    iVar6 = (uint)*(ushort *)((longlong)param_2 + 0x22) + (uint)*(ushort *)(param_2 + 4);
    uVar9 = 0;
    iVar14 = 0;
    do {
      lVar17 = param_2[2] + uVar9 * 0x18;
      puVar16 = (undefined4 *)((longlong)*(int *)(local_58 + uVar9 * 4) * 0x20 + param_3[2]);
      if (*(short *)(lVar17 + 0xe) != 0) {
        lVar13 = 0;
        do {
          *(short *)(*plVar1 + (longlong)iVar14 * 2 + lVar13 * 2) = (short)*puVar16 + (short)lVar13;
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < (uint)*(ushort *)(lVar17 + 0xe));
        iVar14 = iVar14 + (uint)lVar13;
      }
      if (*(short *)(lVar17 + 0x12) != 0) {
        lVar13 = 0;
        do {
          *(short *)(*plVar1 + (longlong)(int)uVar8 * 2 + lVar13 * 2) =
               (short)puVar16[1] + (short)lVar13;
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < (uint)*(ushort *)(lVar17 + 0x12));
        uVar8 = uVar8 + (uint)lVar13;
      }
      if (*(short *)(lVar17 + 0x16) != 0) {
        lVar13 = 0;
        do {
          *(short *)(*plVar1 + (longlong)iVar6 * 2 + lVar13 * 2) =
               *(short *)((longlong)puVar16 + 2) + (short)lVar13;
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < (uint)*(ushort *)(lVar17 + 0x16));
        iVar6 = iVar6 + (uint)lVar13;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
  }
  FUN_1481e5e66(param_2,param_3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481ee572 FUN_1481ee572 body=66 status=ok
// SIG undefined FUN_1481ee572(void)

void FUN_1481ee572(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1481ee60a(param_1,iVar1);
  }
  FUN_1481ee5b4((longlong)iVar1 * 0x18 + *param_1,param_2);
  return;
}



// FUNCTION 1481ee5b4 FUN_1481ee5b4 body=86 status=ok
// SIG undefined FUN_1481ee5b4(void)

void FUN_1481ee5b4(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    uVar1 = FUN_144830b78(param_1 + 1,&DAT_14cb42160);
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0xffff0000ffff;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xffff;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1481ee60a FUN_1481ee60a body=147 status=ok
// SIG undefined FUN_1481ee60a(void)

void FUN_1481ee60a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481ee69e FUN_1481ee69e body=178 status=ok
// SIG undefined FUN_1481ee69e(void)

undefined8 * FUN_1481ee69e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x180);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ae1dcb0;
  memset(puVar1 + 2,0,0x170);
  FUN_143a77330(puVar1 + 6);
  puVar1[0x1d] = &PTR_LAB_14ae02690;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  *(byte *)(puVar1 + 0x2d) = *(byte *)(puVar1 + 0x2d) | 0xf;
  *(undefined8 *)((longlong)puVar1 + 0x16c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x174) = 0;
  return puVar1;
}



// FUNCTION 1481ee75a FUN_1481ee75a body=29 status=ok
// SIG undefined FUN_1481ee75a(void)

undefined8 FUN_1481ee75a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481ee778 FUN_1481ee778 body=75 status=ok
// SIG undefined FUN_1481ee778(void)

void FUN_1481ee778(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1449db362(param_1 + 0x160);
  FUN_14006c2ae(param_1 + 0xd8);
  FUN_14032e8b2(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481ee7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1481ee7c4 FUN_1481ee7c4 body=164 status=ok
// SIG undefined FUN_1481ee7c4(void)

void FUN_1481ee7c4(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_1481ee83c;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1481ee83c;
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
LAB_1481ee83c:
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
                    /* WARNING: Could not recover jumptable at 0x0001481ee85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1481ee868 FUN_1481ee868 body=1250 status=ok
// SIG undefined FUN_1481ee868(void)

void FUN_1481ee868(float *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138 [6];
  longlong local_108 [3];
  longlong local_f0 [3];
  longlong local_d8 [3];
  ulonglong local_c0;
  double dVar4;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  fVar12 = param_1[0x10];
  lVar10 = *(longlong *)(param_1 + 0xc);
  lVar11 = 0;
  do {
    local_138[lVar11 + 0xc] = lVar10;
    lVar10 = lVar10 + (int)fVar12;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  fVar18 = param_1[0x14];
  lVar10 = *(longlong *)(param_1 + 0x12);
  lVar11 = 0;
  do {
    local_138[lVar11 + 9] = lVar10;
    lVar10 = lVar10 + (int)fVar18;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  fVar18 = param_1[10];
  lVar10 = *(longlong *)(param_1 + 6);
  lVar11 = 0;
  do {
    local_138[lVar11 + 6] = lVar10;
    lVar10 = lVar10 + (int)fVar18;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  lVar10 = *(longlong *)(param_1 + 0xe);
  lVar11 = 0;
  do {
    local_138[lVar11 + 3] = lVar10;
    lVar10 = lVar10 + (int)fVar12;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  lVar10 = *(longlong *)(param_1 + 8);
  lVar11 = 0;
  do {
    local_138[lVar11] = lVar10;
    lVar10 = lVar10 + (int)fVar18;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  if (param_1[4] != 0.0) {
    local_140 = local_d8[2];
    local_148 = local_f0[2];
    local_150 = local_f0[0];
    local_158 = local_f0[1];
    fVar12 = 0.0;
    do {
      lVar10 = (longlong)(int)fVar12;
      lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar10 * 4);
      fVar18 = *(float *)(local_d8[2] + lVar10 * 4);
      fVar16 = *(float *)(local_d8[1] + lVar10 * 4);
      fVar13 = *(float *)(local_d8[0] + lVar10 * 4);
      fVar15 = fVar16;
      fVar17 = fVar18;
      fVar1 = fVar13;
      if (lVar11 != -1) {
        fVar17 = *(float *)(local_f0[2] + lVar11 * 4);
        fVar15 = *(float *)(local_f0[1] + lVar11 * 4);
        fVar1 = *(float *)(local_f0[0] + lVar11 * 4);
      }
      fVar2 = *param_1;
      fVar18 = (fVar17 - fVar18) * fVar2 + fVar18;
      fVar16 = (fVar15 - fVar16) * fVar2 + fVar16;
      fVar13 = (fVar1 - fVar13) * fVar2 + fVar13;
      dVar22 = (double)fVar13 * *(double *)(param_1 + 0x28);
      dVar23 = (double)fVar16 * *(double *)(param_1 + 0x2a);
      dVar19 = (double)fVar18 * *(double *)(param_1 + 0x2c);
      dVar8 = *(double *)(param_1 + 0x1c);
      dVar3 = *(double *)(param_1 + 0x1e);
      dVar4 = *(double *)(param_1 + 0x1e);
      dVar9 = *(double *)(param_1 + 0x18);
      dVar14 = *(double *)(param_1 + 0x1a);
      dVar20 = dVar23 * dVar9 - dVar14 * dVar22;
      dVar21 = dVar19 * dVar14 - dVar8 * dVar23;
      dVar7 = dVar22 * dVar8 - dVar9 * dVar19;
      dVar21 = dVar21 + dVar21;
      dVar7 = dVar7 + dVar7;
      dVar20 = dVar20 + dVar20;
      dVar6 = *(double *)(param_1 + 0x22);
      dVar5 = *(double *)(param_1 + 0x24);
      *(float *)(local_108[0] + lVar10 * 4) =
           (float)((dVar20 * dVar14 - dVar7 * dVar8) + dVar3 * dVar21 + dVar22 +
                  *(double *)(param_1 + 0x20));
      *(float *)(local_108[1] + lVar10 * 4) =
           (float)((dVar8 * dVar21 - dVar9 * dVar20) + dVar4 * dVar7 + dVar23 + dVar6);
      *(float *)(local_108[2] + lVar10 * 4) =
           (float)(dVar20 * dVar3 + dVar19 + (dVar7 * dVar9 - dVar21 * dVar14) + dVar5);
      fVar17 = *(float *)(local_138[5] + lVar10 * 4);
      fVar15 = *(float *)(local_138[4] + lVar10 * 4);
      fVar1 = *(float *)(local_138[3] + lVar10 * 4);
      fVar2 = param_1[3];
      dVar19 = (double)((fVar13 - fVar1) * fVar2 + fVar1) * *(double *)(param_1 + 0x28);
      dVar22 = (double)((fVar16 - fVar15) * fVar2 + fVar15) * *(double *)(param_1 + 0x2a);
      dVar14 = (double)((fVar18 - fVar17) * fVar2 + fVar17) * *(double *)(param_1 + 0x2c);
      dVar7 = *(double *)(param_1 + 0x1c);
      dVar4 = *(double *)(param_1 + 0x1e);
      dVar3 = *(double *)(param_1 + 0x1e);
      dVar8 = *(double *)(param_1 + 0x18);
      dVar9 = *(double *)(param_1 + 0x1a);
      dVar20 = dVar22 * dVar8 - dVar9 * dVar19;
      dVar23 = dVar14 * dVar9 - dVar7 * dVar22;
      dVar21 = dVar19 * dVar7 - dVar8 * dVar14;
      dVar23 = dVar23 + dVar23;
      dVar21 = dVar21 + dVar21;
      dVar20 = dVar20 + dVar20;
      dVar6 = *(double *)(param_1 + 0x22);
      dVar5 = *(double *)(param_1 + 0x24);
      *(float *)(local_138[0] + lVar10 * 4) =
           (float)((dVar20 * dVar9 - dVar21 * dVar7) + dVar4 * dVar23 + dVar19 +
                  *(double *)(param_1 + 0x20));
      *(float *)(local_138[1] + lVar10 * 4) =
           (float)((dVar7 * dVar23 - dVar8 * dVar20) + dVar3 * dVar21 + dVar22 + dVar6);
      *(float *)(local_138[2] + lVar10 * 4) =
           (float)(dVar20 * dVar4 + dVar14 + (dVar21 * dVar8 - dVar23 * dVar9) + dVar5);
      fVar12 = (float)((int)fVar12 + 1);
    } while ((uint)fVar12 < (uint)param_1[4]);
  }
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481eed4c FUN_1481eed4c body=600 status=ok
// SIG undefined FUN_1481eed4c(void)

void FUN_1481eed4c(float *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8 [6];
  longlong local_a8 [3];
  longlong local_90 [3];
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar4 = param_1[0x10];
  lVar2 = *(longlong *)(param_1 + 0xc);
  lVar3 = 0;
  do {
    local_d8[lVar3 + 0xc] = lVar2;
    lVar2 = lVar2 + (int)fVar4;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  fVar6 = param_1[0x14];
  lVar2 = *(longlong *)(param_1 + 0x12);
  lVar3 = 0;
  do {
    local_d8[lVar3 + 9] = lVar2;
    lVar2 = lVar2 + (int)fVar6;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  fVar6 = param_1[10];
  lVar2 = *(longlong *)(param_1 + 6);
  lVar3 = 0;
  do {
    local_d8[lVar3 + 6] = lVar2;
    lVar2 = lVar2 + (int)fVar6;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar2 = *(longlong *)(param_1 + 0xe);
  lVar3 = 0;
  do {
    local_d8[lVar3 + 3] = lVar2;
    lVar2 = lVar2 + (int)fVar4;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = 0;
  do {
    local_d8[lVar3] = lVar2;
    lVar2 = lVar2 + (int)fVar6;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if (param_1[4] != 0.0) {
    local_e0 = local_78[2];
    local_e8 = local_90[2];
    local_f0 = local_90[0];
    local_f8 = local_90[1];
    fVar4 = 0.0;
    do {
      lVar2 = (longlong)(int)fVar4;
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar2 * 4);
      fVar6 = *(float *)(local_78[2] + lVar2 * 4);
      fVar8 = *(float *)(local_78[1] + lVar2 * 4);
      fVar10 = *(float *)(local_78[0] + lVar2 * 4);
      fVar5 = fVar6;
      fVar7 = fVar8;
      fVar9 = fVar10;
      if (lVar3 != -1) {
        fVar5 = *(float *)(local_90[2] + lVar3 * 4);
        fVar7 = *(float *)(local_90[1] + lVar3 * 4);
        fVar9 = *(float *)(local_90[0] + lVar3 * 4);
      }
      fVar1 = *param_1;
      fVar6 = (fVar5 - fVar6) * fVar1 + fVar6;
      fVar8 = (fVar7 - fVar8) * fVar1 + fVar8;
      fVar10 = (fVar9 - fVar10) * fVar1 + fVar10;
      *(float *)(local_a8[0] + lVar2 * 4) = fVar10;
      *(float *)(local_a8[1] + lVar2 * 4) = fVar8;
      *(float *)(local_a8[2] + lVar2 * 4) = fVar6;
      fVar5 = *(float *)(local_d8[5] + lVar2 * 4);
      fVar7 = *(float *)(local_d8[4] + lVar2 * 4);
      fVar9 = *(float *)(local_d8[3] + lVar2 * 4);
      fVar1 = param_1[3];
      *(float *)(local_d8[0] + lVar2 * 4) = (fVar10 - fVar9) * fVar1 + fVar9;
      *(float *)(local_d8[1] + lVar2 * 4) = (fVar8 - fVar7) * fVar1 + fVar7;
      *(float *)(local_d8[2] + lVar2 * 4) = (fVar6 - fVar5) * fVar1 + fVar5;
      fVar4 = (float)((int)fVar4 + 1);
    } while ((uint)fVar4 < (uint)param_1[4]);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481eefa6 FUN_1481eefa6 body=662 status=ok
// SIG undefined FUN_1481eefa6(void)

void FUN_1481eefa6(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  float fVar13;
  longlong lVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_d8 [32];
  longlong local_b8 [6];
  longlong local_88 [3];
  ulonglong local_70;
  double dVar6;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar13 = param_1[0x10];
  lVar12 = *(longlong *)(param_1 + 0xc);
  lVar14 = 0;
  do {
    local_b8[lVar14 + 6] = lVar12;
    lVar12 = lVar12 + (int)fVar13;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  fVar13 = param_1[0x14];
  lVar12 = *(longlong *)(param_1 + 0x12);
  lVar14 = 0;
  do {
    local_b8[lVar14 + 3] = lVar12;
    lVar12 = lVar12 + (int)fVar13;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  fVar13 = param_1[10];
  lVar12 = *(longlong *)(param_1 + 6);
  lVar14 = 0;
  do {
    local_b8[lVar14] = lVar12;
    lVar12 = lVar12 + (int)fVar13;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  if (param_1[4] != 0.0) {
    fVar13 = 0.0;
    do {
      lVar12 = (longlong)(int)fVar13;
      lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar12 * 4);
      fVar1 = *(float *)(local_88[2] + lVar12 * 4);
      fVar2 = *(float *)(local_88[1] + lVar12 * 4);
      fVar3 = *(float *)(local_88[0] + lVar12 * 4);
      fVar16 = fVar3;
      fVar22 = fVar2;
      fVar23 = fVar1;
      if (lVar14 != -1) {
        fVar23 = *(float *)(local_b8[5] + lVar14 * 4);
        fVar22 = *(float *)(local_b8[4] + lVar14 * 4);
        fVar16 = *(float *)(local_b8[3] + lVar14 * 4);
      }
      fVar4 = *param_1;
      dVar17 = (double)((fVar16 - fVar3) * fVar4 + fVar3) * *(double *)(param_1 + 0x28);
      dVar18 = (double)((fVar22 - fVar2) * fVar4 + fVar2) * *(double *)(param_1 + 0x2a);
      dVar15 = (double)((fVar23 - fVar1) * fVar4 + fVar1) * *(double *)(param_1 + 0x2c);
      dVar9 = *(double *)(param_1 + 0x1c);
      dVar5 = *(double *)(param_1 + 0x1e);
      dVar6 = *(double *)(param_1 + 0x1e);
      dVar10 = *(double *)(param_1 + 0x18);
      dVar11 = *(double *)(param_1 + 0x1a);
      dVar19 = dVar18 * dVar10 - dVar11 * dVar17;
      dVar20 = dVar15 * dVar11 - dVar9 * dVar18;
      dVar21 = dVar17 * dVar9 - dVar10 * dVar15;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar19 = dVar19 + dVar19;
      dVar8 = *(double *)(param_1 + 0x22);
      dVar7 = *(double *)(param_1 + 0x24);
      *(float *)(local_b8[0] + lVar12 * 4) =
           (float)((dVar19 * dVar11 - dVar21 * dVar9) + dVar5 * dVar20 + dVar17 +
                  *(double *)(param_1 + 0x20));
      *(float *)(local_b8[1] + lVar12 * 4) =
           (float)((dVar9 * dVar20 - dVar10 * dVar19) + dVar6 * dVar21 + dVar18 + dVar8);
      *(float *)(local_b8[2] + lVar12 * 4) =
           (float)(dVar19 * dVar5 + dVar15 + (dVar21 * dVar10 - dVar20 * dVar11) + dVar7);
      fVar13 = (float)((int)fVar13 + 1);
    } while ((uint)fVar13 < (uint)param_1[4]);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ef23e FUN_1481ef23e body=343 status=ok
// SIG undefined FUN_1481ef23e(void)

void FUN_1481ef23e(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  longlong local_88 [6];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar6 = param_1[0x10];
  lVar5 = *(longlong *)(param_1 + 0xc);
  lVar7 = 0;
  do {
    local_88[lVar7 + 6] = lVar5;
    lVar5 = lVar5 + (int)fVar6;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  fVar6 = param_1[0x14];
  lVar5 = *(longlong *)(param_1 + 0x12);
  lVar7 = 0;
  do {
    local_88[lVar7 + 3] = lVar5;
    lVar5 = lVar5 + (int)fVar6;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  fVar6 = param_1[10];
  lVar5 = *(longlong *)(param_1 + 6);
  lVar7 = 0;
  do {
    local_88[lVar7] = lVar5;
    lVar5 = lVar5 + (int)fVar6;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  if (param_1[4] != 0.0) {
    fVar6 = 0.0;
    do {
      lVar5 = (longlong)(int)fVar6;
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4);
      fVar1 = *(float *)(local_58[2] + lVar5 * 4);
      fVar2 = *(float *)(local_58[1] + lVar5 * 4);
      fVar3 = *(float *)(local_58[0] + lVar5 * 4);
      fVar8 = fVar1;
      fVar9 = fVar2;
      fVar10 = fVar3;
      if (lVar7 != -1) {
        fVar8 = *(float *)(local_88[5] + lVar7 * 4);
        fVar9 = *(float *)(local_88[4] + lVar7 * 4);
        fVar10 = *(float *)(local_88[3] + lVar7 * 4);
      }
      fVar4 = *param_1;
      *(float *)(local_88[0] + lVar5 * 4) = (fVar10 - fVar3) * fVar4 + fVar3;
      *(float *)(local_88[1] + lVar5 * 4) = (fVar9 - fVar2) * fVar4 + fVar2;
      *(float *)(local_88[2] + lVar5 * 4) = (fVar8 - fVar1) * fVar4 + fVar1;
      fVar6 = (float)((int)fVar6 + 1);
    } while ((uint)fVar6 < (uint)param_1[4]);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ef396 FUN_1481ef396 body=617 status=ok
// SIG undefined FUN_1481ef396(void)

void FUN_1481ef396(float *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  float fVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_d8 [32];
  longlong local_b8 [6];
  longlong local_88 [3];
  ulonglong local_70;
  double dVar4;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar11 = param_1[0x10];
  lVar10 = *(longlong *)(param_1 + 0xc);
  lVar12 = 0;
  do {
    local_b8[lVar12 + 6] = lVar10;
    lVar10 = lVar10 + (int)fVar11;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  lVar10 = *(longlong *)(param_1 + 0x16);
  lVar12 = 0;
  do {
    local_b8[lVar12 + 3] = lVar10;
    lVar10 = lVar10 + (int)fVar11;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  fVar11 = param_1[10];
  lVar10 = *(longlong *)(param_1 + 6);
  lVar12 = 0;
  do {
    local_b8[lVar12] = lVar10;
    lVar10 = lVar10 + (int)fVar11;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  if (param_1[4] != 0.0) {
    fVar11 = 0.0;
    do {
      lVar10 = (longlong)(int)fVar11;
      fVar1 = *param_1;
      fVar2 = param_1[1];
      dVar14 = (double)(fVar1 * *(float *)(local_b8[3] + lVar10 * 4) * fVar2 +
                       *(float *)(local_88[0] + lVar10 * 4)) * *(double *)(param_1 + 0x28);
      dVar15 = (double)(*(float *)(local_b8[4] + lVar10 * 4) * fVar1 * fVar2 +
                       *(float *)(local_88[1] + lVar10 * 4)) * *(double *)(param_1 + 0x2a);
      dVar13 = (double)(*(float *)(local_b8[5] + lVar10 * 4) * fVar1 * fVar2 +
                       *(float *)(local_88[2] + lVar10 * 4)) * *(double *)(param_1 + 0x2c);
      dVar7 = *(double *)(param_1 + 0x1c);
      dVar3 = *(double *)(param_1 + 0x1e);
      dVar4 = *(double *)(param_1 + 0x1e);
      dVar8 = *(double *)(param_1 + 0x18);
      dVar9 = *(double *)(param_1 + 0x1a);
      dVar16 = dVar15 * dVar8 - dVar9 * dVar14;
      dVar17 = dVar13 * dVar9 - dVar7 * dVar15;
      dVar18 = dVar14 * dVar7 - dVar8 * dVar13;
      dVar17 = dVar17 + dVar17;
      dVar18 = dVar18 + dVar18;
      dVar16 = dVar16 + dVar16;
      dVar6 = *(double *)(param_1 + 0x22);
      dVar5 = *(double *)(param_1 + 0x24);
      *(float *)(local_b8[0] + lVar10 * 4) =
           (float)((dVar16 * dVar9 - dVar18 * dVar7) + dVar3 * dVar17 + dVar14 +
                  *(double *)(param_1 + 0x20));
      *(float *)(local_b8[1] + lVar10 * 4) =
           (float)((dVar7 * dVar17 - dVar8 * dVar16) + dVar4 * dVar18 + dVar15 + dVar6);
      *(float *)(local_b8[2] + lVar10 * 4) =
           (float)(dVar16 * dVar3 + dVar13 + (dVar18 * dVar8 - dVar17 * dVar9) + dVar5);
      fVar11 = (float)((int)fVar11 + 1);
    } while ((uint)fVar11 < (uint)param_1[4]);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ef600 FUN_1481ef600 body=282 status=ok
// SIG undefined FUN_1481ef600(void)

void FUN_1481ef600(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong local_70 [6];
  longlong local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar8 = param_1[0x10];
  lVar7 = *(longlong *)(param_1 + 0xc);
  lVar9 = 0;
  do {
    local_70[lVar9 + 6] = lVar7;
    lVar7 = lVar7 + (int)fVar8;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  lVar7 = *(longlong *)(param_1 + 0x16);
  lVar9 = 0;
  do {
    local_70[lVar9 + 3] = lVar7;
    lVar7 = lVar7 + (int)fVar8;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  fVar8 = param_1[10];
  lVar7 = *(longlong *)(param_1 + 6);
  lVar9 = 0;
  do {
    local_70[lVar9] = lVar7;
    lVar7 = lVar7 + (int)fVar8;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  if (param_1[4] != 0.0) {
    fVar8 = 0.0;
    do {
      lVar7 = (longlong)(int)fVar8;
      fVar1 = *param_1;
      fVar2 = *(float *)(local_70[5] + lVar7 * 4);
      fVar3 = *(float *)(local_70[4] + lVar7 * 4);
      fVar4 = param_1[1];
      fVar5 = *(float *)(local_40[2] + lVar7 * 4);
      fVar6 = *(float *)(local_40[1] + lVar7 * 4);
      *(float *)(local_70[0] + lVar7 * 4) =
           fVar1 * *(float *)(local_70[3] + lVar7 * 4) * fVar4 + *(float *)(local_40[0] + lVar7 * 4)
      ;
      *(float *)(local_70[1] + lVar7 * 4) = fVar3 * fVar1 * fVar4 + fVar6;
      *(float *)(local_70[2] + lVar7 * 4) = fVar2 * fVar1 * fVar4 + fVar5;
      fVar8 = (float)((int)fVar8 + 1);
    } while ((uint)fVar8 < (uint)param_1[4]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ef71c FUN_1481ef71c body=515 status=ok
// SIG undefined FUN_1481ef71c(void)

void FUN_1481ef71c(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_a8 [40];
  longlong local_80 [6];
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = *(int *)(param_1 + 0x40);
  lVar9 = *(longlong *)(param_1 + 0x30);
  lVar10 = 0;
  do {
    local_80[lVar10 + 3] = lVar9;
    lVar9 = lVar9 + iVar5;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  iVar5 = *(int *)(param_1 + 0x28);
  lVar9 = *(longlong *)(param_1 + 0x18);
  lVar10 = 0;
  do {
    local_80[lVar10] = lVar9;
    lVar9 = lVar9 + iVar5;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar11 = 0;
    do {
      lVar9 = (longlong)(int)uVar11;
      dVar13 = (double)*(float *)(local_80[3] + lVar9 * 4) * *(double *)(param_1 + 0xa0);
      dVar14 = (double)*(float *)(local_80[4] + lVar9 * 4) * *(double *)(param_1 + 0xa8);
      dVar12 = (double)*(float *)(local_80[5] + lVar9 * 4) * *(double *)(param_1 + 0xb0);
      dVar6 = *(double *)(param_1 + 0x60);
      dVar7 = *(double *)(param_1 + 0x68);
      dVar8 = *(double *)(param_1 + 0x70);
      dVar1 = *(double *)(param_1 + 0x78);
      dVar2 = *(double *)(param_1 + 0x78);
      dVar15 = dVar14 * dVar6 - dVar13 * dVar7;
      dVar16 = dVar12 * dVar7 - dVar14 * dVar8;
      dVar17 = dVar13 * dVar8 - dVar6 * dVar12;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar4 = *(double *)(param_1 + 0x88);
      dVar3 = *(double *)(param_1 + 0x90);
      *(float *)(local_80[0] + lVar9 * 4) =
           (float)((dVar15 * dVar7 - dVar17 * dVar8) + dVar1 * dVar16 + dVar13 +
                  *(double *)(param_1 + 0x80));
      *(float *)(local_80[1] + lVar9 * 4) =
           (float)((dVar8 * dVar16 - dVar6 * dVar15) + dVar2 * dVar17 + dVar14 + dVar4);
      *(float *)(local_80[2] + lVar9 * 4) =
           (float)(dVar15 * dVar1 + dVar12 + (dVar17 * dVar6 - dVar16 * dVar7) + dVar3);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x10));
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ef920 FUN_1481ef920 body=1501 status=ok
// SIG undefined FUN_1481ef920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481ef920(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  undefined1 in_XMM1 [16];
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auStack_288 [40];
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong local_190 [4];
  longlong local_170 [4];
  longlong local_150 [4];
  longlong local_130 [4];
  longlong local_110 [4];
  ulonglong local_f0;
  
  auVar7 = _DAT_149932320;
  auVar6 = _DAT_1499314a0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar1 = *(int *)(param_1 + 0x40);
  lVar8 = *(longlong *)(param_1 + 0x30);
  lVar9 = 0;
  do {
    local_110[lVar9] = lVar8;
    lVar8 = lVar8 + iVar1;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  iVar2 = *(int *)(param_1 + 0x50);
  lVar8 = *(longlong *)(param_1 + 0x48);
  lVar9 = 0;
  do {
    local_130[lVar9] = lVar8;
    lVar8 = lVar8 + iVar2;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  iVar2 = *(int *)(param_1 + 0x28);
  lVar8 = *(longlong *)(param_1 + 0x18);
  lVar9 = 0;
  do {
    local_150[lVar9] = lVar8;
    lVar8 = lVar8 + iVar2;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  auVar23._4_12_ = in_XMM1._4_12_;
  auVar23._0_4_ = (float)*(double *)(param_1 + 0x68);
  auVar22._4_12_ = unaff_XMM6._4_12_;
  auVar22._0_4_ = (float)*(double *)(param_1 + 0x60);
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar23 = insertps(auVar22,auVar23,0x10);
  lVar8 = *(longlong *)(param_1 + 0x38);
  lVar9 = 0;
  do {
    local_170[lVar9] = lVar8;
    lVar8 = lVar8 + iVar1;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  auVar23 = insertps(auVar23,ZEXT416((uint)(float)auVar24._0_8_),0x20);
  lVar8 = *(longlong *)(param_1 + 0x20);
  lVar9 = 0;
  do {
    local_190[lVar9] = lVar8;
    lVar8 = lVar8 + iVar2;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  if (*(int *)(param_1 + 0x10) != 0) {
    auVar4._4_4_ = auVar24._12_4_;
    auVar4._0_4_ = (float)auVar24._8_8_;
    auVar4._8_4_ = auVar24._8_4_;
    auVar4._12_4_ = auVar24._12_4_;
    auVar24 = insertps(auVar23,auVar4,0x30);
    local_1f0 = local_110[3];
    local_1f8 = local_110[2];
    local_200 = local_110[0];
    local_208 = local_110[1];
    local_248 = local_130[3];
    local_250 = local_130[2];
    local_258 = local_130[0];
    local_260 = local_130[1];
    fVar21 = auVar24._0_4_;
    fVar25 = auVar24._4_4_;
    fVar26 = auVar24._8_4_;
    fVar27 = auVar24._12_4_;
    local_210 = local_150[0];
    local_218 = local_150[1];
    local_220 = local_150[2];
    local_228 = local_150[3];
    local_230 = local_170[3];
    local_238 = local_170[2];
    local_240 = local_170[0];
    uVar10 = 0;
    do {
      lVar9 = (longlong)(int)uVar10;
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0xc0) + lVar9 * 4);
      uStack_1ac = *(undefined4 *)(local_1f0 + lVar9 * 4);
      uStack_1b0 = *(undefined4 *)(local_1f8 + lVar9 * 4);
      uStack_1b4 = *(undefined4 *)(local_208 + lVar9 * 4);
      local_1b8 = *(undefined4 *)(local_200 + lVar9 * 4);
      local_1c8 = local_1b8;
      uStack_1c4 = uStack_1b4;
      uStack_1c0 = uStack_1b0;
      uStack_1bc = uStack_1ac;
      if (lVar8 != -1) {
        local_1c8 = *(undefined4 *)(local_258 + lVar8 * 4);
        uStack_1c4 = *(undefined4 *)(local_260 + lVar8 * 4);
        uStack_1c0 = *(undefined4 *)(local_250 + lVar8 * 4);
        uStack_1bc = *(undefined4 *)(local_248 + lVar8 * 4);
      }
      FUN_144afe1e6(&local_1a8,&local_1b8,&local_1c8);
      fVar11 = local_1a8 * local_1a8 + fStack_1a4 * fStack_1a4;
      fVar12 = fStack_1a0 * fStack_1a0 + fStack_19c * fStack_19c;
      auVar17._0_4_ = fVar12 + fVar11;
      auVar17._4_4_ = fVar12 + fVar11;
      auVar17._8_4_ = fVar11 + fVar12;
      auVar17._12_4_ = fVar11 + fVar12;
      auVar24 = sqrtps(auVar17,auVar17);
      auVar24 = divps(auVar6,auVar24);
      auVar19._0_4_ = auVar24._0_4_ * local_1a8;
      auVar19._4_4_ = auVar24._4_4_ * fStack_1a4;
      auVar19._8_4_ = auVar24._8_4_ * fStack_1a0;
      auVar19._12_4_ = auVar24._12_4_ * fStack_19c;
      auVar24._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
      auVar24._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
      auVar24._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
      auVar24._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
      local_1d8 = blendvps(auVar7,auVar19,auVar24);
      fVar11 = local_1d8._0_4_;
      fVar12 = local_1d8._4_4_;
      fVar15 = local_1d8._8_4_;
      fVar16 = local_1d8._12_4_;
      auVar13._0_4_ =
           fVar15 * fVar25 * -1.0 + fVar12 * fVar26 * 1.0 + fVar11 * fVar27 * 1.0 + fVar16 * fVar21;
      auVar13._4_4_ =
           fVar15 * fVar21 * 1.0 + fVar12 * fVar27 * 1.0 + fVar11 * fVar26 * -1.0 + fVar16 * fVar25;
      auVar13._8_4_ =
           fVar15 * fVar27 * 1.0 + fVar12 * fVar21 * -1.0 + fVar11 * fVar25 * 1.0 + fVar16 * fVar26;
      auVar13._12_4_ =
           fVar15 * fVar26 * -1.0 +
           fVar12 * fVar25 * -1.0 + fVar11 * fVar21 * -1.0 + fVar16 * fVar27;
      *(float *)(local_210 + lVar9 * 4) = auVar13._0_4_;
      uVar3 = extractps(auVar13,1);
      *(undefined8 *)(local_218 + lVar9 * 4) = uVar3;
      uVar3 = extractps(auVar13,2);
      *(undefined8 *)(local_220 + lVar9 * 4) = uVar3;
      uVar3 = extractps(auVar13,3);
      *(undefined8 *)(local_228 + lVar9 * 4) = uVar3;
      local_1dc = *(undefined4 *)(local_230 + lVar9 * 4);
      local_1e0 = *(undefined4 *)(local_238 + lVar9 * 4);
      local_1e4 = *(undefined4 *)(local_170[1] + lVar9 * 4);
      local_1e8 = *(undefined4 *)(local_240 + lVar9 * 4);
      FUN_144afe1e6(&local_1a8,&local_1e8,local_1d8);
      fVar11 = local_1a8 * local_1a8 + fStack_1a4 * fStack_1a4;
      fVar12 = fStack_1a0 * fStack_1a0 + fStack_19c * fStack_19c;
      auVar18._0_4_ = fVar12 + fVar11;
      auVar18._4_4_ = fVar12 + fVar11;
      auVar18._8_4_ = fVar11 + fVar12;
      auVar18._12_4_ = fVar11 + fVar12;
      auVar24 = sqrtps(auVar18,auVar18);
      auVar24 = divps(auVar6,auVar24);
      auVar20._0_4_ = auVar24._0_4_ * local_1a8;
      auVar20._4_4_ = auVar24._4_4_ * fStack_1a4;
      auVar20._8_4_ = auVar24._8_4_ * fStack_1a0;
      auVar20._12_4_ = auVar24._12_4_ * fStack_19c;
      auVar5._4_4_ = -(uint)(1e-08 <= auVar18._4_4_);
      auVar5._0_4_ = -(uint)(1e-08 <= auVar18._0_4_);
      auVar5._8_4_ = -(uint)(1e-08 <= auVar18._8_4_);
      auVar5._12_4_ = -(uint)(1e-08 <= auVar18._12_4_);
      auVar24 = blendvps(auVar7,auVar20,auVar5);
      fVar11 = auVar24._0_4_;
      fVar12 = auVar24._4_4_;
      fVar15 = auVar24._8_4_;
      fVar16 = auVar24._12_4_;
      auVar14._0_4_ =
           fVar15 * fVar25 * -1.0 + fVar12 * fVar26 * 1.0 + fVar11 * fVar27 * 1.0 + fVar16 * fVar21;
      auVar14._4_4_ =
           fVar15 * fVar21 * 1.0 + fVar12 * fVar27 * 1.0 + fVar11 * fVar26 * -1.0 + fVar16 * fVar25;
      auVar14._8_4_ =
           fVar15 * fVar27 * 1.0 + fVar12 * fVar21 * -1.0 + fVar11 * fVar25 * 1.0 + fVar16 * fVar26;
      auVar14._12_4_ =
           fVar15 * fVar26 * -1.0 +
           fVar12 * fVar25 * -1.0 + fVar11 * fVar21 * -1.0 + fVar16 * fVar27;
      *(float *)(local_190[0] + lVar9 * 4) = auVar14._0_4_;
      uVar3 = extractps(auVar14,1);
      *(undefined8 *)(local_190[1] + lVar9 * 4) = uVar3;
      uVar3 = extractps(auVar14,2);
      *(undefined8 *)(local_190[2] + lVar9 * 4) = uVar3;
      uVar3 = extractps(auVar14,3);
      *(undefined8 *)(local_190[3] + lVar9 * 4) = uVar3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x10));
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481efefe FUN_1481efefe body=1154 status=ok
// SIG undefined FUN_1481efefe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481efefe(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_218 [40];
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  longlong local_120 [4];
  longlong local_100 [4];
  longlong local_e0 [4];
  longlong local_c0 [4];
  longlong local_a0 [4];
  ulonglong local_80;
  
  auVar6 = _DAT_149932320;
  auVar5 = _DAT_1499314a0;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  iVar1 = *(int *)(param_1 + 0x40);
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = 0;
  do {
    local_a0[lVar8] = lVar7;
    lVar7 = lVar7 + iVar1;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  iVar2 = *(int *)(param_1 + 0x50);
  lVar7 = *(longlong *)(param_1 + 0x48);
  lVar8 = 0;
  do {
    local_c0[lVar8] = lVar7;
    lVar7 = lVar7 + iVar2;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  iVar2 = *(int *)(param_1 + 0x28);
  lVar7 = *(longlong *)(param_1 + 0x18);
  lVar8 = 0;
  do {
    local_e0[lVar8] = lVar7;
    lVar7 = lVar7 + iVar2;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  lVar7 = *(longlong *)(param_1 + 0x38);
  lVar8 = 0;
  do {
    local_100[lVar8] = lVar7;
    lVar7 = lVar7 + iVar1;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  lVar7 = *(longlong *)(param_1 + 0x20);
  lVar8 = 0;
  do {
    local_120[lVar8] = lVar7;
    lVar7 = lVar7 + iVar2;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  if (*(int *)(param_1 + 0x10) != 0) {
    local_180 = local_a0[3];
    local_188 = local_a0[2];
    local_190 = local_a0[0];
    local_198 = local_a0[1];
    local_1d8 = local_c0[3];
    local_1e0 = local_c0[2];
    local_1e8 = local_c0[0];
    local_1f0 = local_c0[1];
    local_1a0 = local_e0[0];
    local_1a8 = local_e0[1];
    local_1b0 = local_e0[2];
    local_1b8 = local_e0[3];
    local_1c0 = local_100[3];
    local_1c8 = local_100[2];
    local_1d0 = local_100[0];
    uVar9 = 0;
    do {
      lVar8 = (longlong)(int)uVar9;
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0xc0) + lVar8 * 4);
      uStack_13c = *(undefined4 *)(local_180 + lVar8 * 4);
      uStack_140 = *(undefined4 *)(local_188 + lVar8 * 4);
      uStack_144 = *(undefined4 *)(local_198 + lVar8 * 4);
      local_148 = *(undefined4 *)(local_190 + lVar8 * 4);
      local_158 = local_148;
      uStack_154 = uStack_144;
      uStack_150 = uStack_140;
      uStack_14c = uStack_13c;
      if (lVar7 != -1) {
        local_158 = *(undefined4 *)(local_1e8 + lVar7 * 4);
        uStack_154 = *(undefined4 *)(local_1f0 + lVar7 * 4);
        uStack_150 = *(undefined4 *)(local_1e0 + lVar7 * 4);
        uStack_14c = *(undefined4 *)(local_1d8 + lVar7 * 4);
      }
      FUN_144afe1e6(&local_138,&local_148,&local_158);
      fVar10 = local_138 * local_138 + fStack_134 * fStack_134;
      fVar11 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
      auVar12._0_4_ = fVar11 + fVar10;
      auVar12._4_4_ = fVar11 + fVar10;
      auVar12._8_4_ = fVar10 + fVar11;
      auVar12._12_4_ = fVar10 + fVar11;
      auVar13 = sqrtps(auVar12,auVar12);
      auVar13 = divps(auVar5,auVar13);
      auVar15._0_4_ = auVar13._0_4_ * local_138;
      auVar15._4_4_ = auVar13._4_4_ * fStack_134;
      auVar15._8_4_ = auVar13._8_4_ * fStack_130;
      auVar15._12_4_ = auVar13._12_4_ * fStack_12c;
      auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
      auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
      auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
      auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
      local_168 = blendvps(auVar6,auVar15,auVar13);
      *(int *)(local_1a0 + lVar8 * 4) = local_168._0_4_;
      uVar3 = extractps(local_168,1);
      *(undefined8 *)(local_1a8 + lVar8 * 4) = uVar3;
      uVar3 = extractps(local_168,2);
      *(undefined8 *)(local_1b0 + lVar8 * 4) = uVar3;
      uVar3 = extractps(local_168,3);
      *(undefined8 *)(local_1b8 + lVar8 * 4) = uVar3;
      local_16c = *(undefined4 *)(local_1c0 + lVar8 * 4);
      local_170 = *(undefined4 *)(local_1c8 + lVar8 * 4);
      local_174 = *(undefined4 *)(local_100[1] + lVar8 * 4);
      local_178 = *(undefined4 *)(local_1d0 + lVar8 * 4);
      FUN_144afe1e6(&local_138,&local_178,local_168);
      fVar10 = local_138 * local_138 + fStack_134 * fStack_134;
      fVar11 = fStack_130 * fStack_130 + fStack_12c * fStack_12c;
      auVar14._0_4_ = fVar11 + fVar10;
      auVar14._4_4_ = fVar11 + fVar10;
      auVar14._8_4_ = fVar10 + fVar11;
      auVar14._12_4_ = fVar10 + fVar11;
      auVar13 = sqrtps(auVar14,auVar14);
      auVar13 = divps(auVar5,auVar13);
      auVar16._0_4_ = auVar13._0_4_ * local_138;
      auVar16._4_4_ = auVar13._4_4_ * fStack_134;
      auVar16._8_4_ = auVar13._8_4_ * fStack_130;
      auVar16._12_4_ = auVar13._12_4_ * fStack_12c;
      auVar4._4_4_ = -(uint)(1e-08 <= auVar14._4_4_);
      auVar4._0_4_ = -(uint)(1e-08 <= auVar14._0_4_);
      auVar4._8_4_ = -(uint)(1e-08 <= auVar14._8_4_);
      auVar4._12_4_ = -(uint)(1e-08 <= auVar14._12_4_);
      auVar13 = blendvps(auVar6,auVar16,auVar4);
      *(int *)(local_120[0] + lVar8 * 4) = auVar13._0_4_;
      uVar3 = extractps(auVar13,1);
      *(undefined8 *)(local_120[1] + lVar8 * 4) = uVar3;
      uVar3 = extractps(auVar13,2);
      *(undefined8 *)(local_120[2] + lVar8 * 4) = uVar3;
      uVar3 = extractps(auVar13,3);
      *(undefined8 *)(local_120[3] + lVar8 * 4) = uVar3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x10));
  }
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f0382 FUN_1481f0382 body=951 status=ok
// SIG undefined FUN_1481f0382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481f0382(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong in_RCX;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar12;
  undefined1 in_XMM1 [16];
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar21;
  float fVar22;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_150 [4];
  longlong local_130 [4];
  longlong local_110 [4];
  ulonglong local_f0;
  
  auVar5 = _DAT_149932320;
  auVar4 = _DAT_1499314a0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar1 = *(int *)(in_RCX + 0x40);
  lVar6 = *(longlong *)(in_RCX + 0x30);
  lVar7 = 0;
  do {
    local_110[lVar7] = lVar6;
    lVar6 = lVar6 + iVar1;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  iVar1 = *(int *)(in_RCX + 0x50);
  lVar6 = *(longlong *)(in_RCX + 0x48);
  lVar7 = 0;
  do {
    local_130[lVar7] = lVar6;
    lVar6 = lVar6 + iVar1;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  iVar1 = *(int *)(in_RCX + 0x28);
  lVar6 = *(longlong *)(in_RCX + 0x18);
  lVar7 = 0;
  do {
    local_150[lVar7] = lVar6;
    lVar6 = lVar6 + iVar1;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  if (*(int *)(in_RCX + 0x10) != 0) {
    auVar20._4_12_ = in_XMM1._4_12_;
    auVar20._0_4_ = (float)*(double *)(in_RCX + 0x70);
    auVar14._4_12_ = in_XMM2._4_12_;
    auVar14._0_4_ = (float)*(double *)(in_RCX + 0x68);
    auVar18._4_12_ = unaff_XMM6._4_12_;
    auVar18._0_4_ = (float)*(double *)(in_RCX + 0x60);
    auVar19 = insertps(auVar18,auVar14,0x10);
    auVar20 = insertps(auVar19,auVar20,0x20);
    auVar19._4_4_ = (int)((ulonglong)param_1 >> 0x20);
    auVar19._0_4_ = (float)*(double *)(in_RCX + 0x78);
    auVar19._8_4_ = in_XMM0_Dc;
    auVar19._12_4_ = in_XMM0_Dd;
    auVar19 = insertps(auVar20,auVar19,0x30);
    local_190 = local_110[3];
    local_198 = local_110[2];
    local_1a0 = local_130[3];
    local_1a8 = local_130[2];
    local_1b0 = local_130[0];
    local_1b8 = local_130[1];
    fVar17 = auVar19._0_4_;
    fVar21 = auVar19._4_4_;
    fVar22 = auVar19._8_4_;
    fVar23 = auVar19._12_4_;
    uVar8 = 0;
    do {
      lVar7 = (longlong)(int)uVar8;
      lVar6 = (longlong)*(int *)(*(longlong *)(in_RCX + 0xc0) + lVar7 * 4);
      uStack_16c = *(undefined4 *)(local_190 + lVar7 * 4);
      uStack_170 = *(undefined4 *)(local_198 + lVar7 * 4);
      uStack_174 = *(undefined4 *)(local_110[1] + lVar7 * 4);
      local_178 = *(undefined4 *)(local_110[0] + lVar7 * 4);
      local_188 = local_178;
      uStack_184 = uStack_174;
      uStack_180 = uStack_170;
      uStack_17c = uStack_16c;
      if (lVar6 != -1) {
        local_188 = *(undefined4 *)(local_1b0 + lVar6 * 4);
        uStack_184 = *(undefined4 *)(local_1b8 + lVar6 * 4);
        uStack_180 = *(undefined4 *)(local_1a8 + lVar6 * 4);
        uStack_17c = *(undefined4 *)(local_1a0 + lVar6 * 4);
      }
      FUN_144afe1e6(&local_168,&local_178,&local_188);
      fVar9 = local_168 * local_168 + fStack_164 * fStack_164;
      fVar10 = fStack_160 * fStack_160 + fStack_15c * fStack_15c;
      auVar15._0_4_ = fVar10 + fVar9;
      auVar15._4_4_ = fVar10 + fVar9;
      auVar15._8_4_ = fVar9 + fVar10;
      auVar15._12_4_ = fVar9 + fVar10;
      auVar19 = sqrtps(auVar15,auVar15);
      auVar19 = divps(auVar4,auVar19);
      auVar16._0_4_ = auVar19._0_4_ * local_168;
      auVar16._4_4_ = auVar19._4_4_ * fStack_164;
      auVar16._8_4_ = auVar19._8_4_ * fStack_160;
      auVar16._12_4_ = auVar19._12_4_ * fStack_15c;
      auVar3._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
      auVar3._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
      auVar3._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
      auVar3._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
      auVar19 = blendvps(auVar5,auVar16,auVar3);
      fVar9 = auVar19._0_4_;
      fVar10 = auVar19._4_4_;
      fVar12 = auVar19._8_4_;
      fVar13 = auVar19._12_4_;
      auVar11._0_4_ =
           fVar12 * fVar21 * -1.0 + fVar10 * fVar22 * 1.0 + fVar9 * fVar23 * 1.0 + fVar13 * fVar17;
      auVar11._4_4_ =
           fVar12 * fVar17 * 1.0 + fVar10 * fVar23 * 1.0 + fVar9 * fVar22 * -1.0 + fVar13 * fVar21;
      auVar11._8_4_ =
           fVar12 * fVar23 * 1.0 + fVar10 * fVar17 * -1.0 + fVar9 * fVar21 * 1.0 + fVar13 * fVar22;
      auVar11._12_4_ =
           fVar12 * fVar22 * -1.0 + fVar10 * fVar21 * -1.0 + fVar9 * fVar17 * -1.0 + fVar13 * fVar23
      ;
      *(float *)(local_150[0] + lVar7 * 4) = auVar11._0_4_;
      uVar2 = extractps(auVar11,1);
      *(undefined8 *)(local_150[1] + lVar7 * 4) = uVar2;
      uVar2 = extractps(auVar11,2);
      *(undefined8 *)(local_150[2] + lVar7 * 4) = uVar2;
      uVar2 = extractps(auVar11,3);
      *(undefined8 *)(local_150[3] + lVar7 * 4) = uVar2;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(in_RCX + 0x10));
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f073a FUN_1481f073a body=408 status=ok
// SIG undefined FUN_1481f073a(void)

void FUN_1481f073a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar17;
  float fVar18;
  undefined1 in_XMM0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_b8 [40];
  longlong local_90 [4];
  longlong local_70 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = *(int *)(param_1 + 0x40);
  lVar10 = *(longlong *)(param_1 + 0x30);
  lVar12 = 0;
  do {
    local_70[lVar12] = lVar10;
    lVar10 = lVar10 + iVar4;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 4);
  iVar4 = *(int *)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_1 + 0x18);
  lVar12 = 0;
  do {
    local_90[lVar12] = lVar10;
    lVar10 = lVar10 + iVar4;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 4);
  if (*(int *)(param_1 + 0x10) != 0) {
    auVar14._4_12_ = in_XMM0._4_12_;
    auVar14._0_4_ = (float)*(double *)(param_1 + 0x60);
    auVar6._4_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar6._0_4_ = (float)*(double *)(param_1 + 0x68);
    auVar6._8_4_ = in_XMM3_Dc;
    auVar6._12_4_ = in_XMM3_Dd;
    auVar15 = insertps(auVar14,auVar6,0x10);
    auVar16._4_4_ = (int)((ulonglong)param_3 >> 0x20);
    auVar16._0_4_ = (float)*(double *)(param_1 + 0x70);
    auVar16._8_4_ = in_XMM2_Dc;
    auVar16._12_4_ = in_XMM2_Dd;
    auVar16 = insertps(auVar15,auVar16,0x20);
    auVar15._4_4_ = (int)((ulonglong)param_2 >> 0x20);
    auVar15._0_4_ = (float)*(double *)(param_1 + 0x78);
    auVar15._8_4_ = in_XMM1_Dc;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar15 = insertps(auVar16,auVar15,0x30);
    fVar13 = auVar15._0_4_;
    fVar17 = auVar15._4_4_;
    fVar18 = auVar15._8_4_;
    fVar19 = auVar15._12_4_;
    uVar11 = 0;
    do {
      lVar10 = (longlong)(int)uVar11;
      fVar23 = *(float *)(local_70[3] + lVar10 * 4);
      fVar1 = *(float *)(local_70[0] + lVar10 * 4);
      fVar2 = *(float *)(local_70[1] + lVar10 * 4);
      fVar3 = *(float *)(local_70[2] + lVar10 * 4);
      fVar20 = fVar3 * fVar17 * -1.0 + fVar2 * fVar18 * 1.0 + fVar1 * fVar19 * 1.0 + fVar23 * fVar13
      ;
      fVar21 = fVar3 * fVar13 * 1.0 + fVar2 * fVar19 * 1.0 + fVar1 * fVar18 * -1.0 + fVar23 * fVar17
      ;
      fVar22 = fVar3 * fVar19 * 1.0 + fVar2 * fVar13 * -1.0 + fVar1 * fVar17 * 1.0 + fVar23 * fVar18
      ;
      fVar23 = fVar3 * fVar18 * -1.0 +
               fVar2 * fVar17 * -1.0 + fVar1 * fVar13 * -1.0 + fVar23 * fVar19;
      *(float *)(local_90[0] + lVar10 * 4) = fVar20;
      auVar7._4_4_ = fVar21;
      auVar7._0_4_ = fVar20;
      auVar7._8_4_ = fVar22;
      auVar7._12_4_ = fVar23;
      uVar5 = extractps(auVar7,1);
      *(undefined8 *)(local_90[1] + lVar10 * 4) = uVar5;
      auVar8._4_4_ = fVar21;
      auVar8._0_4_ = fVar20;
      auVar8._8_4_ = fVar22;
      auVar8._12_4_ = fVar23;
      uVar5 = extractps(auVar8,2);
      *(undefined8 *)(local_90[2] + lVar10 * 4) = uVar5;
      auVar9._4_4_ = fVar21;
      auVar9._0_4_ = fVar20;
      auVar9._8_4_ = fVar22;
      auVar9._12_4_ = fVar23;
      uVar5 = extractps(auVar9,3);
      *(undefined8 *)(local_90[3] + lVar10 * 4) = uVar5;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x10));
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f08d4 FUN_1481f08d4 body=729 status=ok
// SIG undefined FUN_1481f08d4(void)

void FUN_1481f08d4(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_258 [40];
  longlong local_230;
  double local_228 [16];
  double local_1a8 [16];
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x40);
  dVar7 = *(double *)(param_1 + 0x60);
  dVar8 = *(double *)(param_1 + 0x68);
  dVar5 = *(double *)(param_1 + 0x70);
  local_118 = *(double *)(param_1 + 0xa0);
  dVar9 = *(double *)(param_1 + 0xa8);
  dStack_e0 = *(double *)(param_1 + 0xb0);
  dVar20 = dVar8 + dVar8;
  dVar16 = dVar5 + dVar5;
  dVar19 = dVar7 * (dVar7 + dVar7);
  local_128 = (1.0 - (dVar5 * dVar16 + dVar8 * dVar20)) * local_118;
  dVar5 = (1.0 - (dVar5 * dVar16 + dVar19)) * dVar9;
  local_d8 = (1.0 - (dVar19 + dVar8 * dVar20)) * dStack_e0;
  dVar6 = *(double *)(param_1 + 0x60) * dVar16;
  dVar19 = *(double *)(param_1 + 0x78);
  dVar17 = dVar16 * dVar19;
  dVar18 = (dVar7 + dVar7) * *(double *)(param_1 + 0x78);
  dVar19 = dVar20 * dVar19;
  dStack_120 = (dVar20 * dVar7 + dVar17) * local_118;
  local_f8 = (dVar16 * dVar8 + dVar18) * dVar9;
  local_e8 = (dVar19 + dVar6) * dStack_e0;
  local_118 = (dVar6 - dVar19) * local_118;
  dStack_e0 = (dVar16 * dVar8 - dVar18) * dStack_e0;
  uStack_110 = 0;
  local_108._8_4_ = SUB84(dVar5,0);
  local_108._0_8_ = (dVar20 * dVar7 - dVar17) * dVar9;
  local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  uStack_f0 = 0;
  uStack_d0 = 0;
  local_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x88);
  local_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = 0x3ff0000000000000;
  local_230 = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar15 = 0;
    do {
      uVar11 = 0;
      uVar10 = uVar15;
      do {
        local_1a8[(uVar11 >> 2 & 0x3fffffff) * 4 + (ulonglong)((uint)uVar11 & 3)] =
             (double)*(float *)(lVar4 + (ulonglong)uVar10 * 4);
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 + (uVar2 >> 2);
      } while (uVar11 != 0x10);
      FUN_1447fea8d(local_228,local_1a8,&local_128);
      pdVar13 = local_228;
      pdVar14 = local_1a8;
      for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
      uVar11 = 0;
      uVar10 = uVar15;
      do {
        *(float *)(lVar3 + (ulonglong)uVar10 * 4) =
             (float)local_1a8[(uVar11 >> 2 & 0x3fffffff) * 4 + (ulonglong)((uint)uVar11 & 3)];
        uVar11 = uVar11 + 1;
        uVar10 = uVar10 + (uVar1 >> 2);
      } while (uVar11 != 0x10);
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(local_230 + 0x10));
  }
  if ((local_a0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f0bae FUN_1481f0bae body=48 status=ok
// SIG undefined FUN_1481f0bae(void)

void FUN_1481f0bae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1481f0bde FUN_1481f0bde body=132 status=ok
// SIG undefined FUN_1481f0bde(void)

void FUN_1481f0bde(longlong param_1,int param_2)

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



// FUNCTION 1481f0c64 FUN_1481f0c64 body=423 status=ok
// SIG undefined FUN_1481f0c64(void)

void FUN_1481f0c64(undefined4 param_1,float param_2,float param_3,float param_4,undefined8 *param_5,
                  ushort param_6,longlong *param_7,int *param_8,int *param_9,longlong param_10,
                  int param_11)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  int local_c8;
  longlong local_c0;
  undefined8 local_b8 [12];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = param_7[1];
  if ((longlong)(int)lVar2 != 0) {
    local_10c = param_4 / ((param_2 + 1.0) * param_3);
    if (1.0 <= local_10c) {
      local_10c = 1.0;
    }
    if (local_10c <= 0.0) {
      local_10c = 0.0;
    }
    local_10c = 1.0 - local_10c;
    puVar4 = local_b8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *param_5;
      param_5 = param_5 + 1;
      puVar4 = puVar4 + 1;
    }
    local_58 = *(undefined8 *)(param_8 + 0x14);
    local_50 = param_8[0x16];
    local_f0 = param_11;
    local_d8 = *param_8 * 4;
    local_c8 = *param_9 << 2;
    lVar3 = 0;
    local_c0 = (ulonglong)(local_d8 * (uint)param_6) + *(longlong *)(param_8 + 4);
    if (param_6 == 0xffff) {
      local_c0 = lVar3;
    }
    lVar1 = *param_7;
    local_118 = param_2;
    local_114 = param_3;
    local_110 = param_4;
    local_108 = param_1;
    do {
      local_100 = (ulonglong)((uint)*(ushort *)(lVar1 + 4 + lVar3) * param_11) + param_10;
      local_f8 = (ulonglong)((uint)*(ushort *)(lVar1 + 6 + lVar3) * param_11) + param_10;
      local_e8 = (ulonglong)(local_d8 * (uint)*(ushort *)(lVar1 + lVar3)) +
                 *(longlong *)(param_8 + 4);
      local_e0 = (ulonglong)((uint)*(ushort *)(lVar1 + 2 + lVar3) * local_d8) +
                 *(longlong *)(param_8 + 4);
      local_d0 = (ulonglong)((uint)*(ushort *)(lVar1 + lVar3) * local_c8) +
                 *(longlong *)(param_9 + 4);
      (**(code **)(lVar1 + 8 + lVar3))(&local_118);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f0e0c FUN_1481f0e0c body=56 status=ok
// SIG undefined FUN_1481f0e0c(void)

void FUN_1481f0e0c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_140816ffa(lVar1 + 0x98,param_1 + 1);
  FUN_1481ed4d2(lVar1 + 0xa8,param_1 + 3);
  return;
}



// FUNCTION 1481f0e4e FUN_1481f0e4e body=29 status=ok
// SIG undefined FUN_1481f0e4e(void)

void FUN_1481f0e4e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1481f0e6c FUN_1481f0e6c body=71 status=ok
// SIG undefined FUN_1481f0e6c(void)

undefined8 * FUN_1481f0e6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae1dcd0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f0eb4 FUN_1481f0eb4 body=150 status=ok
// SIG undefined FUN_1481f0eb4(void)

void FUN_1481f0eb4(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  FUN_140816ffa(lVar2 + 0x98,param_1 + 0x16);
  FUN_1481ed4d2(lVar2 + 0xa8,param_1 + 0x18);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481f0f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1481f0f4a FUN_1481f0f4a body=1687 status=ok
// SIG undefined FUN_1481f0f4a(void)

void FUN_1481f0f4a(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 local_100;
  undefined8 *local_f8;
  int *local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  int *local_a8;
  undefined4 local_a0;
  int local_98;
  uint local_94;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar8 = *(uint *)(param_1[0x13] + 0xac);
  if (*(uint *)param_1[0x11] < *(uint *)(param_1[0x13] + 0xac)) {
    uVar8 = *(uint *)param_1[0x11];
  }
  uVar12 = (ulonglong)uVar8;
  lVar6 = *param_1;
  local_98 = *(int *)(*(longlong *)(param_1[1] + 0x208) + (longlong)DAT_14cb41358 * 4);
  if (local_98 == -1) {
    uVar5 = FUN_1481c88ee(lVar6 + 0x38,param_2);
    *(undefined4 *)(*(longlong *)(param_1[1] + 0x208) + (longlong)DAT_14cb41358 * 4) = uVar5;
    local_98 = *(int *)(*(longlong *)(param_1[1] + 0x208) + (longlong)DAT_14cb41358 * 4);
  }
  local_70 = *(undefined8 *)(lVar6 + 0x60);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 3;
  local_64 = 0x400000000f0;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_c8 = param_1;
  local_c0 = param_2;
  local_94 = uVar8;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  plVar10 = local_c8;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_1438f8e4e(local_c0,*(undefined8 *)(lVar6 + 0x60));
  lVar7 = local_c0;
  local_70 = *(undefined8 *)(lVar6 + 0x60);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 3;
  local_64 = 0xf000000400;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(local_c0,&local_90,0);
  lVar6 = *(longlong *)(plVar10[0x13] + 0x78);
  local_108 = L"NiagaraSimCache";
  FUN_143a7817e(lVar6,lVar7,uVar8,*(undefined4 *)(*plVar10 + 0x24));
  *(uint *)(lVar6 + 0x120) = uVar8;
  *(undefined4 *)(lVar6 + 0x58) = 0;
  FUN_144b34778(plVar10[1],lVar6);
  local_b8 = uVar12;
  if (uVar8 != 0) {
    local_d0 = lVar6;
    if (*(short *)(plVar10[0x10] + 0x20) == 0) {
      uVar13 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar6 + 0x78);
      uVar3 = *(undefined8 *)(lVar6 + 0x60);
      cVar1 = *(char *)(lVar7 + 0x69);
      if (cVar1 == '\0') {
        FUN_1446f970a(lVar7,1);
      }
      local_108 = (wchar_t *)CONCAT44(local_108._4_4_,uVar5);
      local_100 = 1;
      local_b0 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar7,uVar3,0);
      uVar12 = local_b8;
      if (cVar1 == '\0') {
        FUN_1446f970a(lVar7,0);
      }
      iVar9 = *(int *)(lVar6 + 0x128);
      lVar7 = plVar10[0x10];
      piVar15 = (int *)plVar10[0x11];
      uVar13 = (ulonglong)*(ushort *)(lVar7 + 0x20);
      if (uVar13 != 0) {
        lVar6 = *(longlong *)(lVar7 + 0x98);
        iVar2 = *piVar15;
        uVar11 = 0;
        uVar14 = 0;
        do {
          uVar8 = (uint)*(ushort *)(lVar6 + uVar14 * 2);
          if (uVar8 != 0xffff) {
            memcpy((void *)((ulonglong)(uVar8 * iVar9) + local_b0),
                   (void *)(uVar11 * 4 + *(longlong *)(piVar15 + 4)),
                   (ulonglong)(uint)((int)uVar12 * 4));
          }
          uVar14 = uVar14 + 1;
          uVar11 = (ulonglong)(uint)((int)uVar11 + iVar2);
        } while (uVar13 != uVar14);
        iVar9 = *(int *)(local_d0 + 0x128);
        lVar7 = local_c8[0x10];
        piVar15 = (int *)local_c8[0x11];
        plVar10 = local_c8;
        uVar12 = local_b8;
      }
      lVar6 = local_d0;
      local_e8 = plVar10[0x12];
      local_80 = *(undefined8 *)(lVar7 + 0xa8);
      local_78 = *(undefined4 *)(lVar7 + 0xb0);
      local_108 = (wchar_t *)(plVar10 + 4);
      local_e0 = local_b0;
      local_f8 = &local_80;
      local_100 = CONCAT22(local_100._2_2_,*(undefined2 *)(lVar7 + 0x50));
      local_f0 = piVar15;
      local_d8 = iVar9;
      FUN_1481f0c64(uVar12 & 0xffffffff,(int)plVar10[2],*(undefined4 *)((longlong)plVar10 + 0x14),
                    (int)plVar10[3]);
      lVar7 = local_c0;
      uVar3 = *(undefined8 *)(lVar6 + 0x60);
      if (*(char *)(local_c0 + 0x69) == '\0') {
        FUN_1446f970a(local_c0,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar7,uVar3);
        FUN_1446f970a(lVar7,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,local_c0,uVar3);
      }
    }
    if (*(short *)(plVar10[0x10] + 0x22) != 0) {
      uVar5 = *(undefined4 *)(lVar6 + 0x108);
      uVar3 = *(undefined8 *)(lVar6 + 0xf0);
      cVar1 = *(char *)(lVar7 + 0x69);
      if (cVar1 == '\0') {
        FUN_1446f970a(lVar7,1);
      }
      local_108 = (wchar_t *)CONCAT44(local_108._4_4_,uVar5);
      local_100 = 1;
      local_b0 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar7,uVar3,0);
      if (cVar1 == '\0') {
        FUN_1446f970a(lVar7,0);
      }
      uVar12 = (ulonglong)*(ushort *)(plVar10[0x10] + 0x22);
      if (uVar12 != 0) {
        iVar9 = *(int *)(local_d0 + 0x130);
        piVar15 = (int *)plVar10[0x11];
        lVar6 = *(longlong *)(plVar10[0x10] + 0x98);
        iVar2 = *piVar15;
        iVar4 = (int)local_b8;
        uVar11 = 0;
        do {
          uVar8 = (uint)*(ushort *)(lVar6 + uVar13 * 2);
          if (uVar8 != 0xffff) {
            memcpy((void *)((ulonglong)(uVar8 * iVar9) + local_b0),
                   (void *)(uVar11 * 2 + *(longlong *)(piVar15 + 8)),(ulonglong)(uint)(iVar4 * 2));
          }
          uVar11 = (ulonglong)(uint)((int)uVar11 + iVar2);
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 - 1;
          plVar10 = local_c8;
          lVar7 = local_c0;
        } while (uVar12 != 0);
      }
      lVar6 = local_d0;
      uVar3 = *(undefined8 *)(local_d0 + 0xf0);
      if (*(char *)(lVar7 + 0x69) == '\0') {
        FUN_1446f970a(lVar7,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar7,uVar3);
        FUN_1446f970a(lVar7,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar7,uVar3);
      }
    }
    if (*(short *)(plVar10[0x10] + 0x24) != 0) {
      uVar5 = *(undefined4 *)(lVar6 + 0xa8);
      uVar3 = *(undefined8 *)(lVar6 + 0x90);
      cVar1 = *(char *)(lVar7 + 0x69);
      if (cVar1 == '\0') {
        FUN_1446f970a(lVar7,1);
      }
      local_108 = (wchar_t *)CONCAT44(local_108._4_4_,uVar5);
      local_100 = 1;
      lVar6 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar7,uVar3,0);
      if (cVar1 == '\0') {
        FUN_1446f970a(lVar7,0);
      }
      uVar12 = (ulonglong)*(ushort *)(plVar10[0x10] + 0x24);
      if (uVar12 != 0) {
        iVar9 = *(int *)(local_d0 + 300);
        piVar15 = (int *)local_c8[0x11];
        lVar7 = *(longlong *)(plVar10[0x10] + 0x98);
        iVar2 = *piVar15;
        local_b8 = (ulonglong)(uint)((int)local_b8 << 2);
        uVar11 = 0;
        uVar14 = 0;
        do {
          uVar8 = (uint)*(ushort *)(lVar7 + (uVar13 & 0xffffffff) * 2 + uVar14 * 2);
          if (uVar8 != 0xffff) {
            memcpy((void *)((ulonglong)(uVar8 * iVar9) + lVar6),
                   (void *)(uVar11 * 4 + *(longlong *)(piVar15 + 0xc)),local_b8);
          }
          uVar14 = uVar14 + 1;
          uVar11 = (ulonglong)(uint)((int)uVar11 + iVar2);
        } while (uVar12 != uVar14);
      }
      lVar7 = local_c0;
      lVar6 = local_d0;
      uVar3 = *(undefined8 *)(local_d0 + 0x90);
      if (*(char *)(local_c0 + 0x69) == '\0') {
        FUN_1446f970a(local_c0,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar7,uVar3);
        FUN_1446f970a(lVar7,0);
        plVar10 = local_c8;
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,local_c0,uVar3);
        plVar10 = local_c8;
      }
    }
  }
  *(undefined4 *)(lVar6 + 0x138) = *(undefined4 *)(plVar10[0x11] + 4);
  LOCK();
  *(int *)plVar10[0x14] = *(int *)plVar10[0x14] + -1;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f15f2 FUN_1481f15f2 body=29 status=ok
// SIG undefined FUN_1481f15f2(void)

void FUN_1481f15f2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1481f1610 FUN_1481f1610 body=29 status=ok
// SIG undefined FUN_1481f1610(void)

undefined8 FUN_1481f1610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f162e FUN_1481f162e body=105 status=ok
// SIG undefined FUN_1481f162e(void)

void FUN_1481f162e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481f0f4a(0xb0,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481f0f4a(param_1 + 0x16,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481f168d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1481f1698 FUN_1481f1698 body=292 status=ok
// SIG undefined FUN_1481f1698(void)

void FUN_1481f1698(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5
                  )

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (((*(longlong *)(param_2 + 0x40) != 0) && (-1 < (int)param_5)) &&
     ((int)param_5 < *(int *)(param_2 + 0x198))) {
    lVar1 = (ulonglong)param_5 * 0x160 + *(longlong *)(param_2 + 400);
    *param_1 = lVar1;
    if (param_3 == 0) {
      piVar2 = (int *)(lVar1 + 0xb0);
      param_1[1] = (longlong)piVar2;
      param_2 = param_2 + 200;
LAB_1481f1717:
      param_1[2] = param_2;
      if ((*piVar2 != 0) && ((longlong)*(int *)(param_2 + 0x18) != 0)) {
        lVar1 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_2 + 0x10) + lVar1) == param_4) {
            iVar3 = (int)(lVar1 >> 3) * -0x55555555;
            if (iVar3 == -1) {
              return;
            }
            param_1[3] = *(longlong *)(param_2 + 0x10) + (longlong)iVar3 * 0x18;
            return;
          }
          lVar1 = lVar1 + 0x18;
        } while ((longlong)*(int *)(param_2 + 0x18) * 0x18 != lVar1);
      }
    }
    else if ((longlong)*(int *)(param_2 + 0x188) != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x180) + lVar4) == param_3) {
          iVar3 = (int)(lVar4 >> 3) * -0x1642c859;
          if (iVar3 == -1) {
            return;
          }
          piVar2 = (int *)(*(longlong *)(lVar1 + 0x148) + (longlong)iVar3 * 0xd8 + 0x40);
          param_1[1] = (longlong)piVar2;
          param_2 = (longlong)iVar3 * 0xb8 + *(longlong *)(param_2 + 0x180);
          goto LAB_1481f1717;
        }
        lVar4 = lVar4 + 0xb8;
      } while ((longlong)*(int *)(param_2 + 0x188) * 0xb8 - lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1481f17bc FUN_1481f17bc body=511 status=ok
// SIG undefined FUN_1481f17bc(void)

void FUN_1481f17bc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae1ddc0;
  FUN_144725486(param_1 + 1);
  if (param_1[0x2f] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2f] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[1] = &PTR_FUN_14ae1ddd0;
  if (param_1[0x2d] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2d] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x2b] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2b] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x29] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x29] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x27] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x27] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[1] = &PTR_FUN_14a1ca4e0;
  if (param_1[0x25] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x25] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x24] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x24] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x23] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x23] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1 + 1);
  return;
}



// FUNCTION 1481f19bc FUN_1481f19bc body=435 status=ok
// SIG undefined FUN_1481f19bc(void)

void FUN_1481f19bc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae1ddd0;
  if (param_1[0x2c] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2c] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x2a] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2a] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x26] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x26] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a1ca4e0;
  if (param_1[0x24] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x24] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x23] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x23] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x22] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x22] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1481f1b70 FUN_1481f1b70 body=38 status=ok
// SIG undefined FUN_1481f1b70(void)

undefined8 FUN_1481f1b70(undefined8 param_1,int param_2)

{
  FUN_1481f17bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f1b96 FUN_1481f1b96 body=38 status=ok
// SIG undefined FUN_1481f1b96(void)

undefined8 FUN_1481f1b96(undefined8 param_1,int param_2)

{
  FUN_1481f19bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f1bc0 FUN_1481f1bc0 body=62 status=ok
// SIG undefined FUN_1481f1bc0(void)

void FUN_1481f1bc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f1bfe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481f1bfe FUN_1481f1bfe body=93 status=ok
// SIG undefined FUN_1481f1bfe(void)

ulonglong FUN_1481f1bfe(uint param_1,uint param_2)

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



// FUNCTION 1481f1c5c FUN_1481f1c5c body=62 status=ok
// SIG undefined FUN_1481f1c5c(void)

void FUN_1481f1c5c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f1c9a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481f1c9a FUN_1481f1c9a body=93 status=ok
// SIG undefined FUN_1481f1c9a(void)

ulonglong FUN_1481f1c9a(uint param_1,uint param_2)

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



// FUNCTION 1481f1cf8 FUN_1481f1cf8 body=47 status=ok
// SIG undefined FUN_1481f1cf8(void)

longlong FUN_1481f1cf8(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f1d28 FUN_1481f1d28 body=112 status=ok
// SIG undefined FUN_1481f1d28(void)

void FUN_1481f1d28(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc0,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc0)) {
      uVar2 = uVar1 / 0xc0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc0,0x10);
  }
  return;
}



// FUNCTION 1481f1d98 FUN_1481f1d98 body=147 status=ok
// SIG undefined FUN_1481f1d98(void)

void FUN_1481f1d98(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f1e2c FUN_1481f1e2c body=140 status=ok
// SIG undefined FUN_1481f1e2c(void)

void FUN_1481f1e2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb42dd0;
  if (param_1 <= (int)DAT_14cb42dd0) {
    if (DAT_14cb42dd4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb42dd0) {
        uVar2 = DAT_14cb42dd0;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb42dd0 + ((ulonglong)((longlong)(int)DAT_14cb42dd0 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb42dd4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb42dc8,param_1,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f1eba FUN_1481f1eba body=48 status=ok
// SIG undefined FUN_1481f1eba(void)

void FUN_1481f1eba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,6,2);
  }
  return;
}



// FUNCTION 1481f1eea FUN_1481f1eea body=114 status=ok
// SIG undefined FUN_1481f1eea(void)

void FUN_1481f1eea(longlong *param_1,int param_2)

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



// FUNCTION 1481f1f5c FUN_1481f1f5c body=139 status=ok
// SIG undefined FUN_1481f1f5c(void)

void FUN_1481f1f5c(longlong param_1,int param_2)

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
    FUN_1481f1fe8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f1fe8 FUN_1481f1fe8 body=140 status=ok
// SIG undefined FUN_1481f1fe8(void)

void FUN_1481f1fe8(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1481f2074 FUN_1481f2074 body=106 status=ok
// SIG undefined FUN_1481f2074(void)

void FUN_1481f2074(longlong param_1,uint param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (ulonglong)param_2 * 0x18);
  FUN_14006c25a(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x38) = iVar1 - param_3;
  return;
}



// FUNCTION 1481f20de FUN_1481f20de body=52 status=ok
// SIG undefined FUN_1481f20de(void)

void FUN_1481f20de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f2112(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_1481f1fe8(param_1,*(undefined4 *)(param_1 + 0x38),iVar1);
  return;
}



// FUNCTION 1481f2112 FUN_1481f2112 body=129 status=ok
// SIG undefined FUN_1481f2112(void)

ulonglong FUN_1481f2112(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_1) {
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



// FUNCTION 1481f2194 FUN_1481f2194 body=148 status=ok
// SIG undefined FUN_1481f2194(void)

void FUN_1481f2194(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xa0,0);
      iVar5 = (int)(uVar4 / 0xa0);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar6;
    FUN_1481f222a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f222a FUN_1481f222a body=149 status=ok
// SIG undefined FUN_1481f222a(void)

void FUN_1481f222a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xa0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0xa0);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0xa0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0xa0);
  return;
}



// FUNCTION 1481f22c0 FUN_1481f22c0 body=59 status=ok
// SIG undefined FUN_1481f22c0(void)

void FUN_1481f22c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_14006c25a(lVar1,*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_1481f22fc(param_1);
  return;
}



// FUNCTION 1481f22fc FUN_1481f22fc body=79 status=ok
// SIG undefined FUN_1481f22fc(void)

void FUN_1481f22fc(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x30),
              (longlong)*(int *)((longlong)param_1 + 0x38) * 0x18);
      FUN_1446efa72((longlong)param_1 + 0x30,0,0,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 1481f234c FUN_1481f234c body=132 status=ok
// SIG undefined FUN_1481f234c(void)

void FUN_1481f234c(longlong param_1,int param_2)

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



// FUNCTION 1481f23d2 FUN_1481f23d2 body=132 status=ok
// SIG undefined FUN_1481f23d2(void)

void FUN_1481f23d2(longlong param_1,int param_2)

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



// FUNCTION 1481f2458 FUN_1481f2458 body=48 status=ok
// SIG undefined FUN_1481f2458(void)

void FUN_1481f2458(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x160,0x10);
  }
  return;
}



// FUNCTION 1481f2488 FUN_1481f2488 body=68 status=ok
// SIG undefined FUN_1481f2488(void)

void FUN_1481f2488(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1481f24cc(param_1);
  return;
}



// FUNCTION 1481f24cc FUN_1481f24cc body=571 status=ok
// SIG undefined FUN_1481f24cc(void)

void FUN_1481f24cc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
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
  uVar4 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar4 != 0) {
    plVar1 = param_1 + 7;
    uVar13 = 0;
    FUN_144a1cbf0(plVar1,0,uVar4,4);
    if (0 < (int)uVar4) {
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4)
             = 0xffffffff;
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        puVar2 = (undefined8 *)(*local_88 + (longlong)iVar6 * 0x20);
        uVar5 = *puVar2;
        uVar4 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar12 = (uint)uVar5 & 0xffff;
        puVar9 = (ulonglong *)FUN_144741050(puVar2 + 1);
        uVar3 = *(undefined1 *)((longlong)puVar9 + 10);
        uVar13 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar7 = FUN_144a78877(uVar13 >> 0x10 ^ uVar13,(short)puVar9[1]);
        uVar7 = FUN_144a78877(uVar7,uVar3);
        iVar8 = FUN_144a78877(uVar7,((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20)
                                    + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4));
        uVar10 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x1c) = iVar8;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(puVar2 + 3) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f2708 FUN_1481f2708 body=63 status=ok
// SIG undefined FUN_1481f2708(void)

void FUN_1481f2708(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145c11a74(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1481f24cc(param_1);
    return;
  }
  FUN_1481f2748(param_1);
  FUN_145c11a74(param_1);
  return;
}



// FUNCTION 1481f2748 FUN_1481f2748 body=322 status=ok
// SIG undefined FUN_1481f2748(void)

void FUN_1481f2748(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1481f288b FUN_1481f288b body=97 status=ok
// SIG undefined FUN_1481f288b(void)

void FUN_1481f288b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((longlong)param_1 + 0x19) = 0;
    *(undefined8 *)((longlong)param_1 + 0x21) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined2 *)(param_1 + 10) = 0xffff;
    *(undefined2 *)(param_1 + 0xb) = 0xffff;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1 = param_1 + 0x17;
  }
  return;
}



// FUNCTION 1481f28ec FUN_1481f28ec body=149 status=ok
// SIG undefined FUN_1481f28ec(void)

void FUN_1481f28ec(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f2982 FUN_1481f2982 body=52 status=ok
// SIG undefined FUN_1481f2982(void)

void FUN_1481f2982(longlong *param_1)

{
  FUN_1481f29b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481f29b6 FUN_1481f29b6 body=89 status=ok
// SIG undefined FUN_1481f29b6(void)

void FUN_1481f29b6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 1481f2a10 FUN_1481f2a10 body=415 status=ok
// SIG undefined FUN_1481f2a10(void)

undefined4 * FUN_1481f2a10(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481f2bb0(param_1,local_48);
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar6 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar11 = (uint)uVar2 & 0xffff;
  puVar7 = (ulonglong *)FUN_144741050(local_40 + 1);
  uVar1 = *(undefined1 *)((longlong)puVar7 + 10);
  uVar4 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,(short)puVar7[1]);
  uVar5 = FUN_144a78877(uVar5,uVar1);
  uVar6 = FUN_144a78877(uVar5,((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4));
  cVar3 = FUN_1481f2c96(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar4) {
      uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)(local_40 + 2) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1481f2d96(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f2bb0 FUN_1481f2bb0 body=230 status=ok
// SIG undefined FUN_1481f2bb0(void)

int * FUN_1481f2bb0(longlong *param_1,int *param_2)

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



// FUNCTION 1481f2c96 FUN_1481f2c96 body=142 status=ok
// SIG undefined FUN_1481f2c96(void)

undefined8 FUN_1481f2c96(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if ((*plVar2 == *param_3) &&
           (*(int *)(*param_1 + 8 + (longlong)iVar3 * 0x14) == (int)param_3[1])) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_1481f2d24(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481f2d24 FUN_1481f2d24 body=114 status=ok
// SIG undefined FUN_1481f2d24(void)

void FUN_1481f2d24(longlong *param_1,int param_2)

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



// FUNCTION 1481f2d96 FUN_1481f2d96 body=568 status=ok
// SIG undefined FUN_1481f2d96(void)

void FUN_1481f2d96(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
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
  uVar4 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar4 != 0) {
    plVar1 = param_1 + 7;
    uVar13 = 0;
    FUN_144a1cbf0(plVar1,0,uVar4,4);
    if (0 < (int)uVar4) {
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4)
             = 0xffffffff;
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        puVar2 = (undefined8 *)(*local_88 + (longlong)iVar6 * 0x14);
        uVar5 = *puVar2;
        uVar4 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar12 = (uint)uVar5 & 0xffff;
        puVar9 = (ulonglong *)FUN_144741050(puVar2 + 1);
        uVar3 = *(undefined1 *)((longlong)puVar9 + 10);
        uVar13 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        uVar7 = FUN_144a78877(uVar13 >> 0x10 ^ uVar13,(short)puVar9[1]);
        uVar7 = FUN_144a78877(uVar7,uVar3);
        iVar8 = FUN_144a78877(uVar7,((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20)
                                    + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4));
        uVar10 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar10;
        *(int *)(puVar2 + 2) = iVar8;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)puVar2 + 0xc) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f2fd0 FUN_1481f2fd0 body=120 status=ok
// SIG undefined FUN_1481f2fd0(void)

longlong FUN_1481f2fd0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1481f304a();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1481f30a4(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x20 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 1481f304a FUN_1481f304a body=90 status=ok
// SIG undefined FUN_1481f304a(void)

longlong FUN_1481f304a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(int *)(lVar1 + 8 + lVar4) == (int)param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481f30a4 FUN_1481f30a4 body=284 status=ok
// SIG undefined FUN_1481f30a4(void)

undefined4 * FUN_1481f30a4(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481f31c2(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_1481f32a8(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1481f24cc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f31c2 FUN_1481f31c2 body=229 status=ok
// SIG undefined FUN_1481f31c2(void)

int * FUN_1481f31c2(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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



// FUNCTION 1481f32a8 FUN_1481f32a8 body=145 status=ok
// SIG undefined FUN_1481f32a8(void)

undefined8 FUN_1481f32a8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x20;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        if ((*(longlong *)(lVar2 + lVar7) == *param_3) &&
           (*(int *)(lVar2 + 8 + lVar7) == (int)param_3[1])) {
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar4;
          FUN_1481f333a((int)lVar2,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481f333a FUN_1481f333a body=114 status=ok
// SIG undefined FUN_1481f333a(void)

void FUN_1481f333a(longlong *param_1,int param_2)

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



// FUNCTION 1481f33ac FUN_1481f33ac body=153 status=ok
// SIG undefined FUN_1481f33ac(void)

void FUN_1481f33ac(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0xb0;
    do {
      puVar2 = &DAT_14c846480;
      puVar3 = (undefined8 *)(param_1 + -0xb0);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(param_1 + -0x48) = DAT_14c846338;
      *(undefined8 *)(param_1 + -0x50) = DAT_14c846330;
      *(undefined8 *)(param_1 + -0x44) = 0;
      *(undefined8 *)(param_1 + -0x38) = 0;
      *(undefined8 *)(param_1 + -0x30) = 0;
      *(undefined8 *)(param_1 + -0x28) = 0;
      *(undefined8 *)(param_1 + -0x20) = 0;
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined1 *)(param_1 + -8) = 0;
      FUN_1481ec58e(param_1);
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      param_1 = param_1 + 0x160;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1481f3446 FUN_1481f3446 body=146 status=ok
// SIG undefined FUN_1481f3446(void)

void FUN_1481f3446(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x160,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f34da FUN_1481f34da body=98 status=ok
// SIG undefined FUN_1481f34da(void)

void FUN_1481f34da(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x160 + *param_1);
  FUN_145c119ad(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x160 + (longlong)_Dst),(longlong)iVar2 * 0x160);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1481f353c FUN_1481f353c body=62 status=ok
// SIG undefined FUN_1481f353c(void)

void FUN_1481f353c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f357a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x160,0x10);
  }
  return;
}



// FUNCTION 1481f357a FUN_1481f357a body=110 status=ok
// SIG undefined FUN_1481f357a(void)

ulonglong FUN_1481f357a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x160) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1481f35b3;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x160,0x10);
      param_2 = param_2 / 0x160;
    }
  }
LAB_1481f35b3:
  return param_2 & 0xffffffff;
}



// FUNCTION 1481f35e8 FUN_1481f35e8 body=81 status=ok
// SIG undefined FUN_1481f35e8(void)

void FUN_1481f35e8(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    do {
      *(undefined4 *)(param_1 + -8) = 0;
      *(undefined8 *)(param_1 + -0x40) = 0;
      *(undefined8 *)(param_1 + -0x38) = 0;
      *(undefined8 *)(param_1 + -0x30) = 0;
      *(undefined8 *)(param_1 + -0x28) = 0;
      *(undefined8 *)(param_1 + -0x20) = 0;
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined1 *)(param_1 + -0x10) = 0;
      FUN_1481ec58e(param_1);
      param_1 = param_1 + 0xd8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1481f363a FUN_1481f363a body=146 status=ok
// SIG undefined FUN_1481f363a(void)

void FUN_1481f363a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd8)) {
      uVar5 = uVar4 / 0xd8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f36cd FUN_1481f36cd body=56 status=ok
// SIG undefined FUN_1481f36cd(void)

void FUN_1481f36cd(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1481f3706 FUN_1481f3706 body=147 status=ok
// SIG undefined FUN_1481f3706(void)

void FUN_1481f3706(longlong param_1,int param_2)

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



// FUNCTION 1481f379a FUN_1481f379a body=101 status=ok
// SIG undefined FUN_1481f379a(void)

void FUN_1481f379a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_145bd7a27(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1481f3800 FUN_1481f3800 body=62 status=ok
// SIG undefined FUN_1481f3800(void)

void FUN_1481f3800(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f383e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 1481f383e FUN_1481f383e body=112 status=ok
// SIG undefined FUN_1481f383e(void)

ulonglong FUN_1481f383e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1481f3878;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_1481f3878:
  return param_2 & 0xffffffff;
}



// FUNCTION 1481f38ae FUN_1481f38ae body=141 status=ok
// SIG undefined FUN_1481f38ae(void)

longlong FUN_1481f38ae(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1481f393c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0xa0;
    if (lVar3 + lVar2 != 0) goto LAB_1481f38eb;
  }
  local_30 = param_3;
  FUN_1481f39d2(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0xa0;
LAB_1481f38eb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f393c FUN_1481f393c body=149 status=ok
// SIG undefined FUN_1481f393c(void)

int FUN_1481f393c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0xa0;
        iVar2 = *(int *)(lVar4 + 8 + lVar5);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x98 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1481f39d2 FUN_1481f39d2 body=281 status=ok
// SIG undefined FUN_1481f39d2(void)

undefined4 * FUN_1481f39d2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481f3aec(param_1,local_48);
  FUN_1481f3c66(param_4,local_40);
  *(undefined4 *)(local_40 + 0x98) = 0xffffffff;
  cVar1 = FUN_1481f3bda(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x9c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x98) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1481f3d96(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f3aec FUN_1481f3aec body=238 status=ok
// SIG undefined FUN_1481f3aec(void)

int * FUN_1481f3aec(longlong *param_1,int *param_2)

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
      FUN_1413d87fe(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 1481f3bda FUN_1481f3bda body=140 status=ok
// SIG undefined FUN_1481f3bda(void)

undefined8 FUN_1481f3bda(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1481f393c(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0xa0);
    FUN_14006c2ae(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0xa0),param_3,0x98);
    FUN_1481f3d1c(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1481f3c66 FUN_1481f3c66 body=180 status=ok
// SIG undefined FUN_1481f3c66(void)

undefined8 * FUN_1481f3c66(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_c8 [40];
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = &PTR_LAB_14ae02690;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffffffff;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_1481cfe3c(param_2 + 2,&local_a0);
  FUN_14006c2ae(&local_a0);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f3d1c FUN_1481f3d1c body=122 status=ok
// SIG undefined FUN_1481f3d1c(void)

void FUN_1481f3d1c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 1481f3d96 FUN_1481f3d96 body=486 status=ok
// SIG undefined FUN_1481f3d96(void)

void FUN_1481f3d96(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0xa0;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x9c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x98 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f3f7e FUN_1481f3f7e body=141 status=ok
// SIG undefined FUN_1481f3f7e(void)

longlong FUN_1481f3f7e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1481f393c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0xa0;
    if (lVar3 + lVar2 != 0) goto LAB_1481f3fbb;
  }
  local_30 = param_3;
  FUN_1481f400c(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0xa0;
LAB_1481f3fbb:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f400c FUN_1481f400c body=391 status=ok
// SIG undefined FUN_1481f400c(void)

undefined4 * FUN_1481f400c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  longlong local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1481f3aec(param_1,local_d8);
  local_c8 = &PTR_LAB_14ae02690;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  FUN_1481f4194(local_d0,*param_4,&local_c8);
  FUN_14006c2ae(&local_c8);
  *(undefined4 *)(local_d0 + 0x98) = 0xffffffff;
  cVar1 = FUN_1481f3bda(param_1,param_3,local_d0,local_d8);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_d0 + 0x9c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_d0 + 0x98) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_d8[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1481f3d96(param_1);
    }
  }
  *param_2 = local_d8[0];
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f4194 FUN_1481f4194 body=101 status=ok
// SIG undefined FUN_1481f4194(void)

undefined8 * FUN_1481f4194(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_1481cfe3c(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 1481f41fa FUN_1481f41fa body=230 status=ok
// SIG undefined FUN_1481f41fa(void)

undefined8 * FUN_1481f41fa(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f42e2 FUN_1481f42e2 body=29 status=ok
// SIG undefined FUN_1481f42e2(void)

undefined8 FUN_1481f42e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f431a FUN_1481f431a body=29 status=ok
// SIG undefined FUN_1481f431a(void)

bool FUN_1481f431a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1481f4338 FUN_1481f4338 body=26 status=ok
// SIG undefined FUN_1481f4338(void)

bool FUN_1481f4338(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1481f4352 FUN_1481f4352 body=24 status=ok
// SIG undefined FUN_1481f4352(void)

bool FUN_1481f4352(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1481f4376 FUN_1481f4376 body=93 status=ok
// SIG undefined FUN_1481f4376(void)

void FUN_1481f4376(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae1e0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae1dfe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481f43d4 FUN_1481f43d4 body=93 status=ok
// SIG undefined FUN_1481f43d4(void)

void FUN_1481f43d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae1e0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae1dfe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481f4432 FUN_1481f4432 body=126 status=ok
// SIG undefined FUN_1481f4432(void)

void FUN_1481f4432(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae1e0c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae1dfe0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481f44a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481f44b0 FUN_1481f44b0 body=40 status=ok
// SIG undefined FUN_1481f44b0(void)

void FUN_1481f44b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001481f44d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1481f44d8 FUN_1481f44d8 body=140 status=ok
// SIG undefined FUN_1481f44d8(void)

bool FUN_1481f44d8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f4568 FUN_1481f4568 body=149 status=ok
// SIG undefined FUN_1481f4568(void)

undefined8 * FUN_1481f4568(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14ae1e200;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_1481f45fe(&local_28,param_1);
  param_1[7] = local_28;
  FUN_143ac257c(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f45fe FUN_1481f45fe body=223 status=ok
// SIG undefined FUN_1481f45fe(void)

undefined8 FUN_1481f45fe(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14ae1e0c0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ae26500;
  local_30[3] = param_2;
  local_30[4] = FUN_143ac257c;
  FUN_1481f41fa(&DAT_14cb433c8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f46de FUN_1481f46de body=103 status=ok
// SIG undefined FUN_1481f46de(void)

undefined8 * FUN_1481f46de(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x40,0x10);
  FUN_1481f4568(uVar1,param_2);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14ae26570;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1481f47a0 FUN_1481f47a0 body=81 status=ok
// SIG undefined FUN_1481f47a0(void)

void FUN_1481f47a0(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,((longlong)*(int *)(param_1 + 0x784) + (longlong)*(int *)(param_1 + 0x774))
                        * 8);
  FUN_14484255c(param_2,((longlong)*(int *)(param_1 + 0x7ac) + (longlong)*(int *)(param_1 + 0x79c))
                        * 8);
  return;
}



// FUNCTION 1481f48ae FUN_1481f48ae body=249 status=ok
// SIG undefined FUN_1481f48ae(void)

undefined8 * FUN_1481f48ae(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae02690;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0xf;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 2;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  FUN_14043115e(param_1 + 0x11);
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 2;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  FUN_14043115e(param_1 + 0x1a);
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x28) = 2;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  FUN_14043115e(param_1 + 0x23);
  memset(param_1 + 0x2c,0,0xe0);
  return param_1;
}



// FUNCTION 1481f49a8 FUN_1481f49a8 body=81 status=ok
// SIG undefined FUN_1481f49a8(void)

void FUN_1481f49a8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  *(int *)(local_18 + 0x94) = *(int *)(local_18 + 0x94) + 1;
  FUN_1468be722();
  FUN_143ac332e(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f49fa FUN_1481f49fa body=128 status=ok
// SIG undefined FUN_1481f49fa(void)

void FUN_1481f49fa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(lVar2 + 0x18 + lVar3);
      FUN_1409d9716(param_2,&local_38);
      lVar3 = lVar3 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f4a7c FUN_1481f4a7c body=8 status=ok
// SIG undefined FUN_1481f4a7c(void)

longlong FUN_1481f4a7c(longlong param_1)

{
  return param_1 + 0xb8;
}



// FUNCTION 1481f4a86 FUN_1481f4a86 body=461 status=ok
// SIG undefined FUN_1481f4a86(void)

void FUN_1481f4a86(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x84) * 0xa0);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xc4) * 0x48);
  lVar1 = FUN_146474182();
  if (lVar1 != 0) {
    FUN_14484255c(param_2,(longlong)
                          (int)(-*(int *)(lVar1 + 0x5c) &
                               (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U) *
                          (longlong)*(int *)(param_1 + 0xc0));
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xf4) << 4);
  if (DAT_14cb43638 == 0) {
    uVar2 = FUN_140aec9fd();
    DAT_14cb43638 = FUN_140002ddd(FUN_14647a2ab,uVar2,L"NiagaraEmitterCompiledData");
    if (DAT_14cb43638 != 0) goto LAB_1481f4b16;
  }
  else {
LAB_1481f4b16:
    FUN_14484255c(param_2,(longlong)
                          (int)(-*(int *)(DAT_14cb43638 + 0x5c) &
                               (*(int *)(DAT_14cb43638 + 0x58) + *(int *)(DAT_14cb43638 + 0x5c)) -
                               1U) * (longlong)*(int *)(param_1 + 0xf0));
  }
  if (DAT_14cb43680 == 0) {
    uVar2 = FUN_140aec9fd();
    DAT_14cb43680 = FUN_140002ddd(FUN_14647a441,uVar2,L"NiagaraSystemCompiledData");
    if (DAT_14cb43680 == 0) goto LAB_1481f4b63;
  }
  FUN_14484255c(param_2,(longlong)
                        (int)(-*(int *)(DAT_14cb43680 + 0x5c) &
                             (*(int *)(DAT_14cb43680 + 0x58) + *(int *)(DAT_14cb43680 + 0x5c)) - 1U)
               );
LAB_1481f4b63:
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x46c) << 2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x47c) * 0xc);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x48c) * 0xc);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x49c) << 2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x4bc) << 2);
  if (*(longlong *)(param_1 + 0x500) == 0) {
    return;
  }
  FUN_14484255c(param_2,(longlong)*(int *)(*(longlong *)(param_1 + 0x500) + 0x10) << 2);
  return;
}



// FUNCTION 1481f4c5a FUN_1481f4c5a body=100 status=ok
// SIG undefined FUN_1481f4c5a(void)

void FUN_1481f4c5a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_143ac332e(param_1);
  }
  FUN_1427dc336(local_28,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f4cc0 FUN_1481f4cc0 body=235 status=ok
// SIG undefined FUN_1481f4cc0(void)

longlong * FUN_1481f4cc0(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x4f0) < 2) {
    FUN_144750a86(param_1,&local_40,0,0);
    puVar1 = local_40;
    if (local_38 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_30,L"| System: %s |",puVar1);
    if ((longlong *)(param_1 + 0x4e8) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x4e8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x4e8) = local_30;
      local_30 = 0;
      *(undefined4 *)(param_1 + 0x4f0) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0x4f4) = local_28._4_4_;
      local_28 = 0;
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong *)(param_1 + 0x4e8);
}



// FUNCTION 1481f4dac FUN_1481f4dac body=205 status=ok
// SIG undefined FUN_1481f4dac(void)

void FUN_1481f4dac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 == (longlong *)0x0) {
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
    if (lVar7 == 0) {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x20);
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_143ac5b3c(lVar7,param_1);
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
      goto LAB_1481f4e38;
    }
  }
  FUN_143ac5b3c(lVar7,param_1);
LAB_1481f4e38:
  iVar3 = *(int *)(param_1 + 0x110);
  if ((longlong)iVar3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x108);
    lVar6 = 0;
    do {
      lVar5 = (**(code **)(**(longlong **)(lVar7 + lVar6) + 0x68))();
      if (lVar5 != 0) {
        FUN_143a822b6(lVar5);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 1481f4e7a FUN_1481f4e7a body=725 status=ok
// SIG undefined FUN_1481f4e7a(void)

void FUN_1481f4e7a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb43840) && (FUN_144b3d300(&DAT_14cb43840), DAT_14cb43840 == -1)) {
    uVar5 = FUN_140851d9a();
    DAT_14cb43838 = thunk_FUN_140277b32(uVar5,0,L"/Script/Engine.ETickingGroup",0);
    _Init_thread_footer(&DAT_14cb43840);
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  lVar3 = FUN_144af2fb4(param_1);
  if (lVar3 != 0) {
    bVar6 = (byte)*(undefined4 *)(lVar3 + 0x48);
    if (bVar6 < *(byte *)(lVar3 + 0x49)) {
      bVar6 = *(byte *)(lVar3 + 0x49);
    }
    FUN_1401cfb1c(DAT_14cb43838,&local_68,bVar6);
    puVar7 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    FUN_144750a86(lVar3,&local_78,0,0);
    puVar8 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar8 = local_78;
    }
    FUN_1407c8b48(&local_58,L" PreReq(%s = %s)",puVar8,puVar7);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((*(byte *)(param_1 + 0x798) & 0xc) != 0) && ((longlong)*(int *)(param_1 + 0x170) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar9 = (longlong)*(int *)(param_1 + 0x170) * 0xc;
    do {
      plVar4 = (longlong *)FUN_14479d2ce(lVar3);
      if (plVar4 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar4 + 0x3b0))
                          (plVar4,(longlong)*(int *)(lVar3 + 8) + *(longlong *)(param_1 + 0x138));
        uVar2 = (**(code **)(*plVar4 + 0x3c0))
                          (plVar4,(longlong)*(int *)(lVar3 + 8) + *(longlong *)(param_1 + 0x138));
        FUN_1401cfb1c(DAT_14cb43838,&local_68,uVar2);
        puVar7 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar7 = local_68;
        }
        FUN_1401cfb1c(DAT_14cb43838,&local_78,uVar1);
        FUN_144750a86(plVar4,&local_88,0,0);
        puVar8 = &DAT_149dfb77a;
        if (local_80 != 0) {
          puVar8 = local_88;
        }
        local_98 = puVar7;
        FUN_1407c8b48(&local_58,L" DataInterface(%s = %s - %s)",puVar8);
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 0xc;
      lVar9 = lVar9 + -0xc;
    } while (lVar9 != 0);
  }
  puVar7 = local_58;
  if ((int)uStack_50 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_140047918(local_90,L"\t\t\tInstance%s",puVar7);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f5150 FUN_1481f5150 body=43 status=ok
// SIG undefined FUN_1481f5150(void)

longlong FUN_1481f5150(longlong param_1,byte param_2)

{
  if ((param_2 & 0xfd) == 9) {
    return param_1 + 0x178;
  }
  if ((param_2 != 0xc) && (param_2 != 10)) {
    return 0;
  }
  return param_1 + 0x1a0;
}



// FUNCTION 1481f517c FUN_1481f517c body=39 status=ok
// SIG undefined FUN_1481f517c(void)

void FUN_1481f517c(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 unaff_10000000;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    param_2 = 2;
    if ((*(byte *)(lVar1 + 0x60) & 8) != 0) {
      param_2 = unaff_10000000;
    }
  }
  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}



// FUNCTION 1481f51a4 FUN_1481f51a4 body=725 status=ok
// SIG undefined FUN_1481f51a4(void)

void FUN_1481f51a4(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar7 = *(int *)(param_1 + 0x80);
  if (iVar7 != 0) {
    if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
      FUN_14032eef2(param_1,**(undefined8 **)(param_1 + 0x78));
      iVar7 = *(int *)(param_1 + 0x80);
    }
    if (0 < iVar7) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x4b0);
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar9 * 8);
        lVar10 = (longlong)*(int *)(lVar3 + 0x110);
        if (0 < lVar10) {
          lVar3 = *(longlong *)(lVar3 + 0x108);
          lVar16 = 0;
          do {
            plVar4 = *(longlong **)(lVar3 + lVar16 * 0x10);
            if (1 < *(int *)((longlong)plVar4 + 0xd4) - 3U) {
              lVar8 = *(longlong *)(param_1 + 0x4e0);
              lVar11 = lVar16 * 0x30;
              lVar5 = *(longlong *)(param_1 + 0x110);
              lVar12 = (longlong)*(int *)(lVar8 + 8 + lVar11);
              if (lVar12 != 0) {
                lVar6 = *(longlong *)(lVar8 + lVar11);
                lVar15 = 0;
                do {
                  *(undefined4 *)(plVar4[0xc] + (ulonglong)*(uint *)(lVar6 + lVar15)) =
                       *(undefined4 *)
                        ((ulonglong)(uint)(*(int *)(lVar5 + 0x128) * *(int *)(lVar6 + 4 + lVar15)) +
                         *(longlong *)(lVar5 + 0x18) + lVar9 * 4);
                  lVar15 = lVar15 + 8;
                } while (lVar12 * 8 != lVar15);
              }
              lVar8 = lVar8 + lVar11;
              iVar7 = *(int *)(lVar8 + 0x18);
              if ((longlong)iVar7 != 0) {
                lVar11 = *(longlong *)(lVar8 + 0x10);
                lVar12 = 0;
                do {
                  *(undefined4 *)(plVar4[0xc] + (ulonglong)*(uint *)(lVar11 + lVar12)) =
                       *(undefined4 *)
                        ((ulonglong)(uint)(*(int *)(lVar5 + 300) * *(int *)(lVar11 + 4 + lVar12)) +
                         *(longlong *)(lVar5 + 0x28) + lVar9 * 4);
                  lVar12 = lVar12 + 8;
                } while ((longlong)iVar7 * 8 != lVar12);
              }
              iVar7 = *(int *)(lVar8 + 0x28);
              if ((longlong)iVar7 != 0) {
                lVar8 = *(longlong *)(lVar8 + 0x20);
                lVar11 = 0;
                do {
                  lVar12 = (ulonglong)(uint)(*(int *)(lVar5 + 0x130) * *(int *)(lVar8 + 4 + lVar11))
                           + *(longlong *)(lVar5 + 0x38);
                  if (*(char *)(lVar8 + 8 + lVar11) == '\x01') {
                    uVar1 = *(ushort *)(lVar12 + lVar9 * 2);
                    uVar13 = (uint)uVar1 << 0xd;
                    if ((uVar13 & 0xf800000) == 0xf800000) {
                      fVar14 = (float)(uVar13 | 0x70000000);
                    }
                    else if ((uVar13 & 0xf800000) == 0) {
                      fVar14 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar14 = (float)((uVar13 & 0xfffe000) + 0x38000000);
                    }
                    *(uint *)(plVar4[0xc] + (ulonglong)*(uint *)(lVar8 + lVar11)) =
                         (int)(short)uVar1 & 0x80000000U | (uint)fVar14;
                  }
                  else {
                    *(undefined2 *)(plVar4[0xc] + (ulonglong)*(uint *)(lVar8 + lVar11)) =
                         *(undefined2 *)(lVar12 + lVar9 * 2);
                  }
                  lVar11 = lVar11 + 0xc;
                } while ((longlong)iVar7 * 0xc != lVar11);
              }
              *(byte *)(plVar4 + 0x18) = *(byte *)(plVar4 + 0x18) | 1;
              lVar8 = (**(code **)(*plVar4 + 0x68))();
              if (lVar8 != 0) {
                iVar7 = *(int *)(lVar2 + lVar16 * 4);
                lVar5 = *(longlong *)(param_1 + 0x110);
                if ((iVar7 == -1 || lVar5 == 0) || (*(int *)(lVar5 + 0x120) <= lVar9)) {
                  uVar13 = 4;
LAB_1481f5432:
                  if (*(int *)(lVar8 + 0xd4) == 4) goto LAB_1481f525d;
                }
                else {
                  uVar13 = *(uint *)((ulonglong)(uint)(iVar7 * *(int *)(lVar5 + 300)) +
                                     *(longlong *)(lVar5 + 0x28) + lVar9 * 4);
                  if (uVar13 < 5) goto LAB_1481f5432;
                  uVar13 = 1;
                }
                *(uint *)(lVar8 + 0xd4) = uVar13;
              }
            }
LAB_1481f525d:
            lVar16 = lVar16 + 1;
          } while (lVar16 != lVar10);
          iVar7 = *(int *)(param_1 + 0x80);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar7);
    }
  }
  return;
}



// FUNCTION 1481f547a FUN_1481f547a body=425 status=ok
// SIG undefined FUN_1481f547a(void)

void FUN_1481f547a(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  int local_150;
  undefined8 local_148;
  undefined2 *local_140;
  undefined2 *local_138;
  ulonglong *local_130;
  char local_128;
  undefined2 local_120 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_140 = local_120;
  local_128 = '\0';
  local_130 = &local_20;
  local_138 = local_140;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_140056680(&local_158,&DAT_149e01fe8);
  }
  else {
    local_148 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FUN_1400021e4(&local_148,&local_158);
  }
  puVar3 = local_158;
  if (local_150 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140212e80(&local_140,L"System (%s)\n",puVar3);
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  bVar1 = 1;
  bVar2 = 1;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x7a0) + 0xa0) & 1;
  }
  FUN_140212e80(&local_140,L"ConcurrentTickGraphEvent Complete (%d)\n",bVar2);
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) & 1;
  }
  FUN_140212e80(&local_140,L"ConcurrentTickBatchGraphEvent Complete (%d)\n",bVar1);
  FUN_140212e80(&local_140,L"FinalizePending (%d)\n",*(longlong *)(param_1 + 0x7b0) != 0);
  FUN_140212e80(&local_140,L"SystemInstanceIndex (%d)\n",*(undefined4 *)(param_1 + 0x18));
  FUN_140212e80(&local_140,L"SystemInstanceState (%d)\n",*(undefined1 *)(param_1 + 8));
  *local_138 = 0;
  FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraSystemInstance.cpp",0x951,
                L"FNiagaraSystemInstance is stalled.\n%s",local_140);
  if (local_128 == '\x01') {
    FUN_1400020a8(local_140);
  }
  if ((local_20 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f5624 FUN_1481f5624 body=544 status=ok
// SIG undefined FUN_1481f5624(void)

longlong * FUN_1481f5624(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined2 *local_80;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (1 < *(int *)(param_1 + 0x888)) goto LAB_1481f57ec;
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar2 == 0) {
LAB_1481f5694:
    lVar3 = FUN_14479d2ce(param_1 + 0x48);
    FUN_140056680(&local_40,&DAT_149e01fe8);
  }
  else {
    lVar3 = FUN_144a7e9aa();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1481f5694;
    lVar3 = *(longlong *)(lVar2 + 0x120);
    FUN_144750a86(lVar2,&local_40,0,0);
  }
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    FUN_140056680(&local_50,&DAT_149e01fe8);
  }
  else {
    FUN_144750a86(lVar1,&local_50,0,0);
  }
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) {
    FUN_140056680(&local_60,&DAT_149e01fe8);
  }
  else {
    FUN_144750a86(lVar3,&local_60,0,0);
  }
  local_80 = &DAT_149dfb77a;
  if (local_58 != 0) {
    local_80 = local_60;
  }
  local_88 = &DAT_149dfb77a;
  if (local_38 != 0) {
    local_88 = local_40;
  }
  pwVar5 = L"true";
  if ((*(byte *)(param_1 + 0x790) & 4) == 0) {
    pwVar5 = L"false";
  }
  puVar4 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar4 = local_50;
  }
  FUN_140002266(&local_70,
                L"SystemInstance | System: %s | bSolo: %s | Component: %s | AttachedTo: %s |",puVar4
                ,pwVar5);
  if ((longlong *)(param_1 + 0x880) == &local_70) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x880) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x880) = local_70;
    local_70 = 0;
    *(undefined4 *)(param_1 + 0x888) = local_68;
    *(undefined4 *)(param_1 + 0x88c) = local_64;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1481f57ec:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (longlong *)(param_1 + 0x880);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f5846 FUN_1481f5846 body=457 status=ok
// SIG undefined FUN_1481f5846(void)

void FUN_1481f5846(longlong param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  iVar7 = *(int *)(param_1 + 0x2c0 + (ulonglong)((*(byte *)(param_1 + 0x790) & 1) << 6));
  if (iVar7 == 0) {
    fVar1 = *(float *)(param_1 + 0xd0);
    fVar10 = *(float *)(param_1 + 0x970);
    if (fVar1 < fVar10) {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    iVar7 = 0;
    if ((*(byte *)(lVar4 + 0x508) & 4) == 0) {
      cVar3 = *(char *)(lVar4 + 0x50c);
      if (*(char *)(lVar4 + 0x50d) != '\x02') {
        iVar7 = *(int *)(param_1 + 0x960);
        while( true ) {
          iVar7 = iVar7 + 1;
          *(int *)(param_1 + 0x960) = iVar7;
          if ((*(char *)(lVar4 + 0x50d) == '\x01') && (*(int *)(lVar4 + 0x530) <= iVar7)) break;
          uVar8 = *(uint *)(lVar4 + 0x508);
          if ((uVar8 & 8) != 0) {
            fVar9 = *(float *)(lVar4 + 0x52c);
            fVar2 = *(float *)(lVar4 + 0x528);
            uVar8 = *(int *)(param_1 + 0x8b4) * 0xbb38435 + 0x3619636b;
            *(uint *)(param_1 + 0x8b4) = uVar8;
            *(float *)(param_1 + 0x964) =
                 ((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * (fVar9 - fVar2) + fVar2;
            uVar8 = *(uint *)(lVar4 + 0x508);
          }
          if ((uVar8 & 0x20) == 0) {
            if ((uVar8 & 0x40) == 0) {
              fVar9 = *(float *)(param_1 + 0x968);
            }
            else {
              fVar2 = *(float *)(lVar4 + 0x554);
              fVar9 = *(float *)(lVar4 + 0x550);
              uVar8 = *(int *)(param_1 + 0x8b4) * 0xbb38435 + 0x3619636b;
              *(uint *)(param_1 + 0x8b4) = uVar8;
              fVar9 = ((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * (fVar2 - fVar9) + fVar9;
              *(float *)(param_1 + 0x968) = fVar9;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x968) = 0;
            fVar9 = 0.0;
          }
          *(float *)(param_1 + 0x96c) = fVar10;
          fVar10 = fVar9 + fVar10 + *(float *)(param_1 + 0x964);
          *(float *)(param_1 + 0x970) = fVar10;
          if (fVar1 < fVar10) {
            FUN_144af2f36();
            return;
          }
        }
      }
      FUN_144af2f36(fVar1,(cVar3 == '\x01') * '\x02' + '\x01');
      return;
    }
  }
  if ((*(int *)(param_1 + 0x86c) != 4 && *(int *)(param_1 + 0x86c) != iVar7) &&
     (*(int *)(param_1 + 0x86c) = iVar7, iVar7 == 0)) {
    *(byte *)(param_1 + 0x798) = *(byte *)(param_1 + 0x798) | 1;
    iVar7 = *(int *)(param_1 + 0x110);
    if ((longlong)iVar7 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x108);
      lVar6 = 0;
      do {
        lVar5 = (**(code **)(**(longlong **)(lVar4 + lVar6) + 0x68))();
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0xd4) != 4)) {
          *(undefined4 *)(lVar5 + 0xd4) = 0;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar6);
    }
  }
  return;
}



// FUNCTION 1481f5a10 FUN_1481f5a10 body=84 status=ok
// SIG undefined FUN_1481f5a10(void)

longlong FUN_1481f5a10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  if ((lVar4 == 0) || (iVar1 = *(int *)(lVar4 + 0x110), (longlong)iVar1 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar4 + 0x108);
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar3 = FUN_1481c5e06(*(undefined8 *)(lVar2 + lVar5));
      lVar4 = lVar4 + lVar3;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  return lVar4;
}



// FUNCTION 1481f5a64 FUN_1481f5a64 body=230 status=ok
// SIG undefined FUN_1481f5a64(void)

void FUN_1481f5a64(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1481f5b2c;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42110);
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  piVar2 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
  if (piVar2 == (int *)0x0) {
    local_24 = -1;
LAB_1481f5aec:
    local_58 = &local_24;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_48,0,0);
    *(undefined8 *)(plVar1[4] + (longlong)local_24) = param_3;
    FUN_140219f72(plVar1);
  }
  else {
    local_24 = *piVar2;
    if ((longlong)local_24 == -1) goto LAB_1481f5aec;
    *(undefined8 *)(plVar1[4] + (longlong)local_24) = param_3;
    *(byte *)(plVar1 + 0x10) = *(byte *)(plVar1 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1481f5b2c:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f5b4c FUN_1481f5b4c body=236 status=ok
// SIG undefined FUN_1481f5b4c(void)

void FUN_1481f5b4c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1481f5c1a;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42190);
  local_38 = 0;
  uStack_30 = 0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  piVar6 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_48,0);
  if (piVar6 == (int *)0x0) {
    local_24 = -1;
LAB_1481f5bd7:
    local_58 = &local_24;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_48,0,0);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)(plVar2[4] + (longlong)local_24);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_140219f72(plVar2);
  }
  else {
    local_24 = *piVar6;
    if ((longlong)local_24 == -1) goto LAB_1481f5bd7;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)(plVar2[4] + (longlong)local_24);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1481f5c1a:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f5c3a FUN_1481f5c3a body=290 status=ok
// SIG undefined FUN_1481f5c3a(void)

void FUN_1481f5c3a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int *piVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1481f5d3e;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb41370);
  local_38 = 0;
  uStack_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x28);
  piVar24 = (int *)(**(code **)(*plVar3 + 0x58))(plVar3,&local_48,0);
  if (piVar24 == (int *)0x0) {
    local_24 = -1;
LAB_1481f5ce0:
    local_58 = &local_24;
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_48,0,0);
    lVar26 = (longlong)local_24;
    lVar25 = plVar3[4];
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    uVar12 = param_3[8];
    uVar13 = param_3[9];
    uVar14 = param_3[10];
    uVar15 = param_3[0xb];
    uVar16 = param_3[0xd];
    uVar17 = param_3[0xe];
    uVar18 = param_3[0xf];
    puVar1 = (undefined4 *)(lVar25 + 0x30 + lVar26);
    *puVar1 = param_3[0xc];
    puVar1[1] = uVar16;
    puVar1[2] = uVar17;
    puVar1[3] = uVar18;
    puVar1 = (undefined4 *)(lVar25 + 0x20 + lVar26);
    *puVar1 = uVar12;
    puVar1[1] = uVar13;
    puVar1[2] = uVar14;
    puVar1[3] = uVar15;
    puVar1 = (undefined4 *)(lVar25 + 0x10 + lVar26);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar1 = (undefined4 *)(lVar25 + lVar26);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_140219f72(plVar3);
  }
  else {
    local_24 = *piVar24;
    lVar25 = (longlong)local_24;
    if (lVar25 == -1) goto LAB_1481f5ce0;
    lVar26 = plVar3[4];
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar19 = *(undefined8 *)(param_3 + 4);
    uVar20 = *(undefined8 *)(param_3 + 6);
    uVar21 = *(undefined8 *)(param_3 + 8);
    uVar22 = *(undefined8 *)(param_3 + 10);
    uVar23 = *(undefined8 *)(param_3 + 0xe);
    puVar2 = (undefined8 *)(lVar26 + 0x30 + lVar25);
    *puVar2 = *(undefined8 *)(param_3 + 0xc);
    puVar2[1] = uVar23;
    puVar2 = (undefined8 *)(lVar26 + 0x20 + lVar25);
    *puVar2 = uVar21;
    puVar2[1] = uVar22;
    puVar2 = (undefined8 *)(lVar26 + 0x10 + lVar25);
    *puVar2 = uVar19;
    puVar2[1] = uVar20;
    puVar1 = (undefined4 *)(lVar26 + lVar25);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    *(byte *)(plVar3 + 0x10) = *(byte *)(plVar3 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1481f5d3e:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f5d5e FUN_1481f5d5e body=210 status=ok
// SIG undefined FUN_1481f5d5e(void)

void FUN_1481f5d5e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_50 = param_2;
    local_48[0] = FUN_144830b78(local_48,&DAT_14cb41380);
    local_40 = 0;
    uStack_38 = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar4 = FUN_14479d2ce(&local_30);
    piVar5 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_50,0);
    if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, (longlong)iVar1 != -1)) {
      lVar3 = plVar2[8];
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar4;
      *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 4;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f5e32 FUN_1481f5e32 body=282 status=ok
// SIG undefined FUN_1481f5e32(void)

void FUN_1481f5e32(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_3;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_60 = param_2;
    local_58[0] = FUN_144830b78(local_58,&DAT_14cb41390);
    local_50 = 0;
    uStack_48 = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar6 = 0;
    piVar4 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_60,0);
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      if (((longlong)iVar1 < 0) || ((int)plVar2[9] <= iVar1)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(plVar2[8] + (longlong)iVar1 * 8);
      }
    }
    lVar5 = FUN_14479d2ce(&local_40);
    plVar2 = *(longlong **)(param_1 + 0x28);
    piVar4 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_60,0);
    if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, (longlong)iVar1 != -1)) {
      lVar3 = plVar2[8];
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar5;
      *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 4;
    }
    if (lVar6 != lVar5) {
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 4;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f5f4e FUN_1481f5f4e body=282 status=ok
// SIG undefined FUN_1481f5f4e(void)

void FUN_1481f5f4e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_3;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_60 = param_2;
    local_58[0] = FUN_144830b78(local_58,&DAT_14cb413a0);
    local_50 = 0;
    uStack_48 = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar6 = 0;
    piVar4 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_60,0);
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      if (((longlong)iVar1 < 0) || ((int)plVar2[9] <= iVar1)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(plVar2[8] + (longlong)iVar1 * 8);
      }
    }
    lVar5 = FUN_14479d2ce(&local_40);
    plVar2 = *(longlong **)(param_1 + 0x28);
    piVar4 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_60,0);
    if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, (longlong)iVar1 != -1)) {
      lVar3 = plVar2[8];
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar5;
      *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 4;
    }
    if (lVar6 != lVar5) {
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 7;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f606a FUN_1481f606a body=210 status=ok
// SIG undefined FUN_1481f606a(void)

void FUN_1481f606a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_50 = param_2;
    local_48[0] = FUN_144830b78(local_48,&DAT_14cb413c0);
    local_40 = 0;
    uStack_38 = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    lVar4 = FUN_14479d2ce(&local_30);
    piVar5 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_50,0);
    if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, (longlong)iVar1 != -1)) {
      lVar3 = plVar2[8];
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar4;
      *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 4;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f613e FUN_1481f613e body=389 status=ok
// SIG undefined FUN_1481f613e(void)

longlong * FUN_1481f613e(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_1f8 [32];
  undefined **local_1d8 [5];
  byte local_1ad;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [248];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_14278f036(local_138,0);
  FUN_144869430(local_1d8);
  local_1d8[0] = &PTR_FUN_149e8ed80;
  local_148 = 0;
  uStack_140 = 0;
  local_1ad = local_1ad | 0x28;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0xd8))(param_2,local_1d8);
  }
  FUN_14484255c(local_138,uStack_140);
  FUN_144a7fc42(local_1d8);
  (**(code **)(*param_2 + 400))(param_2,local_138);
  *param_1 = param_2[3];
  param_1[1] = *(longlong *)(param_2[2] + 0x18);
  *(undefined4 *)(param_1 + 2) = param_3;
  lVar1 = FUN_140209a84(local_138);
  param_1[3] = lVar1;
  lVar1 = FUN_140209a84(local_138);
  param_1[4] = lVar1;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_144a84c36();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      if ((int)param_2[0xd] == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)param_2[0xc];
      }
      FUN_1446f470e(local_1d8,puVar2,1);
      *param_1 = (longlong)local_1d8[0];
    }
  }
  FUN_1400fd2aa(local_138);
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f62c4 FUN_1481f62c4 body=1062 status=ok
// SIG undefined FUN_1481f62c4(void)

undefined8 FUN_1481f62c4(longlong *param_1,int param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar15 = (int)param_1[1];
  lVar14 = (longlong)iVar15;
  *(uint *)(param_1 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
    FUN_1481f80f2(param_1,iVar15);
  }
  local_78 = lVar14 * 0x28;
  local_70 = lVar14;
  FUN_1481f613e(*param_1 + local_78,param_3,param_4);
  if (param_3 != 0 && param_2 == 1) {
    lVar10 = FUN_14585dcc6();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
      iVar15 = *(int *)(param_3 + 0x1f8);
      iVar8 = *(int *)(param_3 + 0x1e0);
      iVar17 = param_4 + 1;
      iVar3 = (int)param_1[1];
      lVar10 = (longlong)iVar3;
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1481f80f2(param_1,iVar3);
      }
      lVar16 = *param_1;
      *(undefined8 *)(lVar16 + lVar10 * 0x28) = DAT_14cb43858;
      *(undefined8 *)(lVar16 + 8 + lVar10 * 0x28) = 0;
      *(int *)(lVar16 + 0x10 + lVar10 * 0x28) = iVar17;
      uVar12 = (ulonglong)(uint)(iVar15 + iVar8);
      *(ulonglong *)(lVar16 + 0x18 + lVar10 * 0x28) = uVar12;
      *(ulonglong *)(lVar16 + 0x20 + lVar10 * 0x28) = uVar12;
      plVar1 = (longlong *)(*param_1 + 0x18 + lVar14 * 0x28);
      *plVar1 = *plVar1 - *(longlong *)(*param_1 + 0x18 + (longlong)((int)param_1[1] + -1) * 0x28);
      uVar13 = *(uint *)(param_3 + 100);
      uVar2 = *(uint *)(param_3 + 0x74);
      iVar15 = *(int *)(param_3 + 0x84);
      iVar8 = *(int *)(param_3 + 0x94);
      iVar3 = *(int *)(param_3 + 0xa4);
      uVar4 = *(uint *)(param_3 + 0xb4);
      iVar5 = *(int *)(param_3 + 0xc4);
      iVar6 = (int)param_1[1];
      lVar10 = (longlong)iVar6;
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_1481f80f2(param_1,iVar6);
      }
      lVar16 = *param_1;
      *(undefined8 *)(lVar16 + lVar10 * 0x28) = DAT_14cb43860;
      *(undefined8 *)(lVar16 + 8 + lVar10 * 0x28) = 0;
      *(int *)(lVar16 + 0x10 + lVar10 * 0x28) = iVar17;
      uVar12 = (ulonglong)uVar2 + (ulonglong)uVar13 * 0x28 + (longlong)iVar3 * 0x20 +
               (ulonglong)uVar4 * 0x38 + ((longlong)iVar5 + (longlong)iVar8 + (longlong)iVar15) * 8
               + 0x88 & 0xffffffff;
      *(ulonglong *)(lVar16 + 0x18 + lVar10 * 0x28) = uVar12;
      *(ulonglong *)(lVar16 + 0x20 + lVar10 * 0x28) = uVar12;
      plVar1 = (longlong *)(*param_1 + 0x18 + lVar14 * 0x28);
      *plVar1 = *plVar1 - *(longlong *)(*param_1 + 0x18 + (longlong)((int)param_1[1] + -1) * 0x28);
      FUN_144842084(param_3,&local_68);
      lVar10 = FUN_144a8ad80(&local_68);
      if (lVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined1 *)(lVar10 + 0x3c);
      }
      lVar10 = FUN_1407d7b34(param_3,uVar11);
      if (lVar10 != 0) {
        uVar13 = *(uint *)(lVar10 + 0x1c);
        uVar2 = *(uint *)(lVar10 + 0x2c);
        iVar15 = *(int *)(lVar10 + 0x3c);
        iVar8 = *(int *)(lVar10 + 0x4c);
        iVar3 = *(int *)(lVar10 + 0x5c);
        uVar4 = *(uint *)(lVar10 + 0x6c);
        iVar5 = *(int *)(lVar10 + 0x7c);
        iVar6 = (int)param_1[1];
        lVar10 = (longlong)iVar6;
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_1481f80f2(param_1,iVar6);
        }
        lVar16 = *param_1;
        *(undefined8 *)(lVar16 + lVar10 * 0x28) = DAT_14cb43868;
        *(undefined8 *)(lVar16 + 8 + lVar10 * 0x28) = 0;
        *(int *)(lVar16 + 0x10 + lVar10 * 0x28) = iVar17;
        uVar12 = (ulonglong)uVar2 + (ulonglong)uVar13 * 0x28 + (longlong)iVar3 * 0x20 +
                 (ulonglong)uVar4 * 0x38 +
                 ((longlong)iVar5 + (longlong)iVar8 + (longlong)iVar15) * 8 + 0x90 & 0xffffffff;
        *(ulonglong *)(lVar16 + 0x18 + lVar10 * 0x28) = uVar12;
        *(ulonglong *)(lVar16 + 0x20 + lVar10 * 0x28) = uVar12;
        plVar1 = (longlong *)(*param_1 + 0x18 + lVar14 * 0x28);
        *plVar1 = *plVar1 - *(longlong *)(*param_1 + 0x18 + (longlong)((int)param_1[1] + -1) * 0x28)
        ;
      }
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_88 = 0;
  FUN_14086ecde(param_3,&local_68,0,0);
  lVar10 = local_68;
  lVar16 = (longlong)(int)uStack_60;
  if (0 < lVar16) {
    lVar18 = 0;
    do {
      lVar9 = FUN_1481f62c4(param_1,param_2,*(undefined8 *)(lVar10 + lVar18),param_4 + 1);
      plVar1 = (longlong *)(*param_1 + 0x20 + lVar14 * 0x28);
      *plVar1 = *plVar1 + lVar9;
      lVar18 = lVar18 + 8;
    } while (lVar16 * 8 != lVar18);
  }
  lVar10 = FUN_144a7cf6a();
  if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) {
    lVar16 = *param_1;
  }
  else {
    lVar16 = *param_1;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30) {
      param_1[2] = param_1[2] + *(longlong *)(lVar16 + 0x20 + lVar14 * 0x28);
    }
  }
  uVar7 = *(undefined8 *)(lVar16 + 0x20 + lVar14 * 0x28);
  if (param_2 == 0) {
    iVar15 = (int)param_1[1];
    uVar13 = iVar15 - (int)local_70;
    if (uVar13 != 0 && (int)local_70 <= iVar15) {
      lVar14 = FUN_14018d992();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) {
        lVar14 = FUN_144a84c36();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) {
          iVar8 = (int)param_1[1] - iVar15;
          if (iVar8 != 0) {
            memmove((void *)(local_78 + *param_1),
                    (void *)(local_78 + *param_1 + (ulonglong)uVar13 * 0x28),(longlong)iVar8 * 0x28)
            ;
            iVar15 = (int)param_1[1];
          }
          *(uint *)(param_1 + 1) = iVar15 - uVar13;
          FUN_1481f8186(param_1);
        }
      }
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f66ec FUN_1481f66ec body=79 status=ok
// SIG undefined FUN_1481f66ec(void)

void FUN_1481f66ec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1481f673c FUN_1481f673c body=351 status=ok
// SIG undefined FUN_1481f673c(void)

void FUN_1481f673c(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined2 *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = FUN_1438fd574();
  uVar6 = 0;
  do {
    if (uVar6 != 0) {
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_1 + 0x40 + uVar6 * 0x10);
      lVar5 = (longlong)local_50;
      pvVar1 = *(void **)(param_1 + 0x38 + uVar6 * 0x10);
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1481f8332(&local_58,local_50);
        memcpy(local_58,pvVar1,lVar5 << 3);
        iVar2 = local_50;
        if (0 < local_50) {
          FUN_1427e11c2(uVar3,local_70,uVar6 & 0xffffffff);
          FUN_1400021e4(local_70,&local_68);
          puVar4 = &DAT_149dfb77a;
          if (local_60 != 0) {
            puVar4 = local_68;
          }
          FUN_140047918(param_2,L"\t\tInstances State(%s) Count(%d)",puVar4,iVar2);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          pvVar1 = local_58;
          lVar5 = (longlong)local_50;
          if (lVar5 != 0) {
            lVar7 = 0;
            do {
              FUN_1481f4e7a(*(undefined8 *)((longlong)pvVar1 + lVar7),param_2);
              lVar7 = lVar7 + 8;
            } while (lVar5 * 8 != lVar7);
          }
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8(local_58);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 6);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f689c FUN_1481f689c body=517 status=ok
// SIG undefined FUN_1481f689c(void)

void FUN_1481f689c(longlong param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  undefined2 *local_158;
  int local_150;
  undefined8 local_148;
  undefined2 *local_140;
  undefined2 *local_138;
  ulonglong *local_130;
  char local_128;
  undefined2 local_120 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_140 = local_120;
  local_128 = '\0';
  local_130 = &local_20;
  bVar2 = 1;
  bVar3 = 1;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x538) + 0xa0) & 1;
  }
  local_138 = local_140;
  FUN_140212e80(&local_140,L"ConcurrentTickGraphEvent Complete (%d)\n",bVar3);
  if (*(longlong *)(param_1 + 0x540) != 0) {
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x540) + 0xa0) & 1;
  }
  FUN_140212e80(&local_140,L"AllWorkCompleteGraphEvent Complete (%d)\n",bVar2);
  FUN_140212e80(&local_140,L"SystemTickGroup (%d)\n",*(undefined4 *)(param_1 + 0x20));
  FUN_140212e80(&local_140,L"bInSpawnPhase (%d)\n",*(uint *)(param_1 + 0x30) >> 2 & 1);
  FUN_140212e80(&local_140,L"bIsSolo (%d)\n",*(uint *)(param_1 + 0x30) >> 3 & 1);
  FUN_140212e80(&local_140,L"InstancesPendingSpawn (%d)\n",*(undefined4 *)(param_1 + 0x50));
  FUN_140212e80(&local_140,L"InstancesPendingSpawnPaused (%d)\n",*(undefined4 *)(param_1 + 0x60));
  FUN_140212e80(&local_140,L"InstancesSpawning (%d)\n",*(undefined4 *)(param_1 + 0x70));
  FUN_140212e80(&local_140,L"InstancesRunning (%d)\n",*(undefined4 *)(param_1 + 0x80));
  FUN_140212e80(&local_140,L"InstancesPaused (%d)\n",*(undefined4 *)(param_1 + 0x90));
  *local_138 = 0;
  puVar1 = local_140;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_140056680(&local_158,&DAT_149e01fe8);
  }
  else {
    local_148 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
    FUN_1400021e4(&local_148,&local_158);
  }
  puVar4 = local_158;
  if (local_150 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_168 = puVar1;
  FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraSystemSimulation.cpp",0x65f,
                L"NiagaraSystemSimulation(%s) is stalled.\n%s",puVar4);
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 == '\x01') {
    FUN_1400020a8(local_140);
  }
  if ((local_20 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481f6aa2 FUN_1481f6aa2 body=291 status=ok
// SIG undefined FUN_1481f6aa2(void)

longlong * FUN_1481f6aa2(longlong param_1)

{
  undefined2 *puVar1;
  wchar_t *pwVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x550) < 2) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      FUN_140056680(&local_30,&DAT_149e2b65a);
    }
    else {
      FUN_144750a86(*(longlong *)(param_1 + 0x10),&local_30,0,0);
    }
    pwVar2 = L"true";
    if ((*(byte *)(param_1 + 0x30) & 8) == 0) {
      pwVar2 = L"false";
    }
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_40,L"SystemSimulation | System: %s | bSolo: %s |",puVar1,pwVar2);
    if ((longlong *)(param_1 + 0x548) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x548) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x548) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0x550) = local_38;
      *(undefined4 *)(param_1 + 0x554) = local_34;
    }
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong *)(param_1 + 0x548);
}



// FUNCTION 1481f6bc6 FUN_1481f6bc6 body=73 status=ok
// SIG undefined FUN_1481f6bc6(void)

undefined8 * FUN_1481f6bc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae1e200;
  if (param_1[7] != 0) {
    FUN_14480f766(&DAT_14cb433c8);
  }
  FUN_140038ae8(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f6c10 FUN_1481f6c10 body=38 status=ok
// SIG undefined FUN_1481f6c10(void)

undefined8 FUN_1481f6c10(undefined8 param_1,int param_2)

{
  FUN_1406425e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f6c64 FUN_1481f6c64 body=63 status=ok
// SIG undefined FUN_1481f6c64(void)

undefined1 FUN_1481f6c64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481f6d8c(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 1481f6ccc FUN_1481f6ccc body=59 status=ok
// SIG undefined FUN_1481f6ccc(void)

undefined8 FUN_1481f6ccc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f6d18 FUN_1481f6d18 body=38 status=ok
// SIG undefined FUN_1481f6d18(void)

void FUN_1481f6d18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_14080503c(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 1481f6d8c FUN_1481f6d8c body=342 status=ok
// SIG undefined FUN_1481f6d8c(void)

longlong FUN_1481f6d8c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1406fa324();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1447a122a(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_1447a122a(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_1447a122a(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_1447a122a(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  FUN_1447a122a(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_1447a122a(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  FUN_1447a122a(param_1 + 0xe0,param_2 + 0xe0);
  FUN_14805ff7e(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14806506a(param_1 + 0x100,param_2 + 0x100);
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  uVar3 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(undefined8 *)(param_1 + 0x120) = uVar2;
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  return param_1;
}



// FUNCTION 1481f6f48 FUN_1481f6f48 body=59 status=ok
// SIG undefined FUN_1481f6f48(void)

undefined8 FUN_1481f6f48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f6ff6 FUN_1481f6ff6 body=47 status=ok
// SIG undefined FUN_1481f6ff6(void)

void FUN_1481f6ff6(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1481f703c FUN_1481f703c body=87 status=ok
// SIG undefined FUN_1481f703c(void)

undefined1 FUN_1481f703c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481f7158(param_2,param_3);
    FUN_1481f7158(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1481f70bc FUN_1481f70bc body=59 status=ok
// SIG undefined FUN_1481f70bc(void)

undefined8 FUN_1481f70bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f7158 FUN_1481f7158 body=88 status=ok
// SIG undefined FUN_1481f7158(void)

undefined8 * FUN_1481f7158(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481f71b0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481f71b0 FUN_1481f71b0 body=98 status=ok
// SIG undefined FUN_1481f71b0(void)

void FUN_1481f71b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481f7214 FUN_1481f7214 body=51 status=ok
// SIG undefined FUN_1481f7214(void)

void FUN_1481f7214(longlong *param_1)

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



// FUNCTION 1481f7248 FUN_1481f7248 body=37 status=ok
// SIG undefined FUN_1481f7248(void)

void FUN_1481f7248(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x240);
  FUN_1481f48ae(param_2);
  return;
}



// FUNCTION 1481f7294 FUN_1481f7294 body=63 status=ok
// SIG undefined FUN_1481f7294(void)

undefined1 FUN_1481f7294(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481f73bc(param_2,param_3);
    param_3 = param_3 + 0x240;
    param_2 = param_2 + 0x240;
  }
  return 1;
}



// FUNCTION 1481f72fc FUN_1481f72fc body=59 status=ok
// SIG undefined FUN_1481f72fc(void)

undefined8 FUN_1481f72fc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f7348 FUN_1481f7348 body=38 status=ok
// SIG undefined FUN_1481f7348(void)

void FUN_1481f7348(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_1408051c6(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 1481f73bc FUN_1481f73bc body=490 status=ok
// SIG undefined FUN_1481f73bc(void)

longlong FUN_1481f73bc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_1402ae190();
  FUN_14805ff7e(param_1 + 0x88,param_2 + 0x88);
  FUN_14806506a(param_1 + 0x98,param_2 + 0x98);
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 0xbc);
  uVar6 = *(undefined4 *)(param_2 + 0xc0);
  uVar7 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  *(undefined4 *)(param_1 + 0xc0) = uVar6;
  *(undefined4 *)(param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  FUN_14805ff7e(param_1 + 0xd0,param_2 + 0xd0);
  FUN_14806506a(param_1 + 0xe0,param_2 + 0xe0);
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  uVar4 = *(undefined4 *)(param_2 + 0x100);
  uVar5 = *(undefined4 *)(param_2 + 0x104);
  uVar6 = *(undefined4 *)(param_2 + 0x108);
  uVar7 = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined4 *)(param_1 + 0x100) = uVar4;
  *(undefined4 *)(param_1 + 0x104) = uVar5;
  *(undefined4 *)(param_1 + 0x108) = uVar6;
  *(undefined4 *)(param_1 + 0x10c) = uVar7;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  FUN_14805ff7e(param_1 + 0x118,param_2 + 0x118);
  FUN_14806506a(param_1 + 0x128,param_2 + 0x128);
  uVar1 = *(undefined4 *)(param_2 + 0x13c);
  uVar2 = *(undefined4 *)(param_2 + 0x140);
  uVar3 = *(undefined4 *)(param_2 + 0x144);
  uVar4 = *(undefined4 *)(param_2 + 0x148);
  uVar5 = *(undefined4 *)(param_2 + 0x14c);
  uVar6 = *(undefined4 *)(param_2 + 0x150);
  uVar7 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = uVar4;
  *(undefined4 *)(param_1 + 0x14c) = uVar5;
  *(undefined4 *)(param_1 + 0x150) = uVar6;
  *(undefined4 *)(param_1 + 0x154) = uVar7;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  FUN_1481f7158(param_1 + 0x160,param_2 + 0x160);
  FUN_1481f7158(param_1 + 0x170,param_2 + 0x170);
  FUN_1481f7158(param_1 + 0x180,param_2 + 0x180);
  FUN_1481f7158(param_1 + 400,param_2 + 400);
  FUN_1481f7158(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_1481f7158(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_1481f75a6(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_1481f7158(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_1481f7158(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_1481f7158(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_1481f7158(param_1 + 0x200,param_2 + 0x200);
  FUN_1481f7158(param_1 + 0x210,param_2 + 0x210);
  FUN_1481f7158(param_1 + 0x220,param_2 + 0x220);
  FUN_1481f75a6(param_1 + 0x230,param_2 + 0x230);
  return param_1;
}



// FUNCTION 1481f75a6 FUN_1481f75a6 body=93 status=ok
// SIG undefined FUN_1481f75a6(void)

undefined8 * FUN_1481f75a6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408053d1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481f7604(param_1,iVar1);
      FUN_1481f7666(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481f7604 FUN_1481f7604 body=98 status=ok
// SIG undefined FUN_1481f7604(void)

void FUN_1481f7604(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481f7666 FUN_1481f7666 body=52 status=ok
// SIG undefined FUN_1481f7666(void)

void FUN_1481f7666(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481f769a(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1481f769a FUN_1481f769a body=158 status=ok
// SIG undefined FUN_1481f769a(void)

undefined8 * FUN_1481f769a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1481f71b0(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1481f71b0(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1481f774a FUN_1481f774a body=44 status=ok
// SIG undefined FUN_1481f774a(void)

void FUN_1481f774a(undefined8 param_1,longlong *param_2)

{
  FUN_140805138(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481f778c FUN_1481f778c body=54 status=ok
// SIG undefined FUN_1481f778c(void)

undefined1 FUN_1481f778c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481f7886(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1481f77ea FUN_1481f77ea body=59 status=ok
// SIG undefined FUN_1481f77ea(void)

undefined8 FUN_1481f77ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f7886 FUN_1481f7886 body=93 status=ok
// SIG undefined FUN_1481f7886(void)

undefined8 * FUN_1481f7886(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140805138(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481f78e4(param_1,iVar1);
      FUN_1481f7957(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481f78e4 FUN_1481f78e4 body=115 status=ok
// SIG undefined FUN_1481f78e4(void)

void FUN_1481f78e4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481f7957 FUN_1481f7957 body=112 status=ok
// SIG undefined FUN_1481f7957(void)

void FUN_1481f7957(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481c00e6(param_1,param_2);
    puVar2 = (undefined8 *)(param_2 + 0x30);
    puVar3 = (undefined8 *)(param_1 + 0x30);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 1481f79c8 FUN_1481f79c8 body=48 status=ok
// SIG undefined FUN_1481f79c8(void)

void FUN_1481f79c8(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140805138(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1481f79f8 FUN_1481f79f8 body=89 status=ok
// SIG undefined FUN_1481f79f8(void)

void FUN_1481f79f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1481f7a51 FUN_1481f7a51 body=33 status=ok
// SIG undefined FUN_1481f7a51(void)

void FUN_1481f7a51(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2 * 8);
    *(longlong *)(param_1 + lVar2 * 8) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 1481f7a72 FUN_1481f7a72 body=147 status=ok
// SIG undefined FUN_1481f7a72(void)

void FUN_1481f7a72(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f7b06 FUN_1481f7b06 body=29 status=ok
// SIG undefined FUN_1481f7b06(void)

undefined8 FUN_1481f7b06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f7b40 FUN_1481f7b40 body=93 status=ok
// SIG undefined FUN_1481f7b40(void)

void FUN_1481f7b40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae1e0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481f7b9e FUN_1481f7b9e body=93 status=ok
// SIG undefined FUN_1481f7b9e(void)

void FUN_1481f7b9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae1e0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae26500;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481f7bfc FUN_1481f7bfc body=126 status=ok
// SIG undefined FUN_1481f7bfc(void)

void FUN_1481f7bfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae1e0c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae26500;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481f7c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481f7c88 FUN_1481f7c88 body=21 status=ok
// SIG undefined FUN_1481f7c88(void)

undefined8 FUN_1481f7c88(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481f7ca8 FUN_1481f7ca8 body=29 status=ok
// SIG undefined FUN_1481f7ca8(void)

undefined8 FUN_1481f7ca8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f7cc6 FUN_1481f7cc6 body=140 status=ok
// SIG undefined FUN_1481f7cc6(void)

void FUN_1481f7cc6(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb43628;
  if (param_1 <= (int)DAT_14cb43628) {
    if (DAT_14cb4362c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb43628) {
        uVar2 = DAT_14cb43628;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb43628 + ((ulonglong)((longlong)(int)DAT_14cb43628 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb4362c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb43620,param_1,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f7d54 FUN_1481f7d54 body=48 status=ok
// SIG undefined FUN_1481f7d54(void)

void FUN_1481f7d54(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1481f7d84 FUN_1481f7d84 body=48 status=ok
// SIG undefined FUN_1481f7d84(void)

void FUN_1481f7d84(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}


