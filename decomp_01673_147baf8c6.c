// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147baf8c6 FUN_147baf8c6 body=60 status=ok
// SIG undefined FUN_147baf8c6(void)

undefined8 FUN_147baf8c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 147baf92a FUN_147baf92a body=59 status=ok
// SIG undefined FUN_147baf92a(void)

undefined8 FUN_147baf92a(longlong *param_1)

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



// FUNCTION 147baf970 FUN_147baf970 body=37 status=ok
// SIG undefined FUN_147baf970(void)

void FUN_147baf970(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147baf9e4 FUN_147baf9e4 body=146 status=ok
// SIG undefined FUN_147baf9e4(void)

longlong * FUN_147baf9e4(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140056680(&local_28,&DAT_149dfb77a);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bafc14 FUN_147bafc14 body=26 status=ok
// SIG undefined FUN_147bafc14(void)

undefined8 FUN_147bafc14(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x370))();
  return param_2;
}



// FUNCTION 147bafcd0 FUN_147bafcd0 body=32 status=ok
// SIG undefined FUN_147bafcd0(void)

undefined8 FUN_147bafcd0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147bafcf0 FUN_147bafcf0 body=32 status=ok
// SIG undefined FUN_147bafcf0(void)

undefined8 FUN_147bafcf0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147bafd10 FUN_147bafd10 body=26 status=ok
// SIG undefined FUN_147bafd10(void)

undefined8 FUN_147bafd10(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x518))();
  return param_2;
}



// FUNCTION 147bafd2a FUN_147bafd2a body=78 status=ok
// SIG undefined FUN_147bafd2a(void)

undefined8 FUN_147bafd2a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bafda2 FUN_147bafda2 body=109 status=ok
// SIG undefined FUN_147bafda2(void)

undefined1 FUN_147bafda2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bafe38 FUN_147bafe38 body=59 status=ok
// SIG undefined FUN_147bafe38(void)

undefined8 FUN_147bafe38(longlong *param_1)

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



// FUNCTION 147baff02 FUN_147baff02 body=109 status=ok
// SIG undefined FUN_147baff02(void)

undefined1 FUN_147baff02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147baff98 FUN_147baff98 body=59 status=ok
// SIG undefined FUN_147baff98(void)

undefined8 FUN_147baff98(longlong *param_1)

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



// FUNCTION 147bb008a FUN_147bb008a body=70 status=ok
// SIG undefined FUN_147bb008a(void)

undefined1 FUN_147bb008a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147bb00f8 FUN_147bb00f8 body=59 status=ok
// SIG undefined FUN_147bb00f8(void)

undefined8 FUN_147bb00f8(longlong *param_1)

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



// FUNCTION 147bb013e FUN_147bb013e body=37 status=ok
// SIG undefined FUN_147bb013e(void)

void FUN_147bb013e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[6] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 147bb0202 FUN_147bb0202 body=42 status=ok
// SIG undefined FUN_147bb0202(void)

void FUN_147bb0202(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063ddc8(param_2);
  return;
}



// FUNCTION 147bb0242 FUN_147bb0242 body=54 status=ok
// SIG undefined FUN_147bb0242(void)

undefined1 FUN_147bb0242(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147bb036a(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147bb02a0 FUN_147bb02a0 body=59 status=ok
// SIG undefined FUN_147bb02a0(void)

undefined8 FUN_147bb02a0(longlong *param_1)

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



// FUNCTION 147bb02e6 FUN_147bb02e6 body=53 status=ok
// SIG undefined FUN_147bb02e6(void)

void FUN_147bb02e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14063ddc8(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147bb036a FUN_147bb036a body=122 status=ok
// SIG undefined FUN_147bb036a(void)

longlong FUN_147bb036a(longlong param_1,longlong param_2)

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
    FUN_147bb03e4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147bb03e4 FUN_147bb03e4 body=119 status=ok
// SIG undefined FUN_147bb03e4(void)

undefined8 * FUN_147bb03e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14063de00(param_1,uVar1);
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



// FUNCTION 147bb046c FUN_147bb046c body=44 status=ok
// SIG undefined FUN_147bb046c(void)

void FUN_147bb046c(undefined8 param_1,longlong *param_2)

{
  FUN_145a2ddcc(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bb04ae FUN_147bb04ae body=54 status=ok
// SIG undefined FUN_147bb04ae(void)

undefined1 FUN_147bb04ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147bb05a8(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147bb050c FUN_147bb050c body=59 status=ok
// SIG undefined FUN_147bb050c(void)

undefined8 FUN_147bb050c(longlong *param_1)

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



// FUNCTION 147bb05a8 FUN_147bb05a8 body=95 status=ok
// SIG undefined FUN_147bb05a8(void)

undefined8 * FUN_147bb05a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a2ddcc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb0608(param_1,iVar1);
      FUN_147bb067b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb0608 FUN_147bb0608 body=115 status=ok
// SIG undefined FUN_147bb0608(void)

void FUN_147bb0608(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb067b FUN_147bb067b body=134 status=ok
// SIG undefined FUN_147bb067b(void)

void FUN_147bb067b(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar9[-2];
      _Src = *(void **)(puVar9 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      uVar6 = puVar9[5];
      uVar7 = puVar9[6];
      uVar8 = puVar9[7];
      *(undefined4 *)(param_1 + 4) = puVar9[4];
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
      *(undefined4 *)(param_1 + 5) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
      *(undefined4 *)(param_1 + 2) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(undefined4 *)(param_1 + 3) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
      param_1 = param_1 + 6;
      puVar9 = puVar9 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bb0702 FUN_147bb0702 body=50 status=ok
// SIG undefined FUN_147bb0702(void)

void FUN_147bb0702(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145a2ddcc(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147bb0734 FUN_147bb0734 body=37 status=ok
// SIG undefined FUN_147bb0734(void)

void FUN_147bb0734(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2a0);
  FUN_147bb08aa(param_2);
  return;
}



// FUNCTION 147bb0780 FUN_147bb0780 body=63 status=ok
// SIG undefined FUN_147bb0780(void)

undefined1 FUN_147bb0780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147bb0956(param_2,param_3);
    param_3 = param_3 + 0x2a0;
    param_2 = param_2 + 0x2a0;
  }
  return 1;
}



// FUNCTION 147bb07e8 FUN_147bb07e8 body=59 status=ok
// SIG undefined FUN_147bb07e8(void)

undefined8 FUN_147bb07e8(longlong *param_1)

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



// FUNCTION 147bb0834 FUN_147bb0834 body=40 status=ok
// SIG undefined FUN_147bb0834(void)

void FUN_147bb0834(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2a0) == '\x01') {
    FUN_145a2db9a(param_2);
    *(undefined1 *)(param_2 + 0x2a0) = 0;
  }
  return;
}



// FUNCTION 147bb08aa FUN_147bb08aa body=172 status=ok
// SIG undefined FUN_147bb08aa(void)

undefined8 * FUN_147bb08aa(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  memset(param_1 + 10,0,0x1c0);
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  return param_1;
}



// FUNCTION 147bb0956 FUN_147bb0956 body=284 status=ok
// SIG undefined FUN_147bb0956(void)

longlong FUN_147bb0956(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147bb036a();
  lVar1 = 0x50;
  do {
    FUN_147bb05a8(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xf0);
  FUN_1447cd5a6(param_1 + 0xf0,param_2 + 0xf0);
  FUN_147bb0a72(param_1 + 0x100,param_2 + 0x100);
  FUN_144721cf4(param_1 + 0x110,param_2 + 0x110);
  FUN_147bb0aca(param_1 + 0x120,param_2 + 0x120);
  FUN_147bb0b2a(param_1 + 0x130,param_2 + 0x130);
  FUN_147bb0b8a(param_1 + 0x140,param_2 + 0x140);
  FUN_1447cd5a6(param_1 + 0x150,param_2 + 0x150);
  FUN_147bb0b8a(param_1 + 0x160,param_2 + 0x160);
  FUN_147882f80(param_1 + 0x170,param_2 + 0x170);
  FUN_140bee9ec(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_1406fa324(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_1410b2022(param_1 + 0x200,param_2 + 0x200);
  FUN_144881636(param_1 + 0x250,param_2 + 0x250);
  return param_1;
}



// FUNCTION 147bb0a72 FUN_147bb0a72 body=88 status=ok
// SIG undefined FUN_147bb0a72(void)

undefined8 * FUN_147bb0a72(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bb0bea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147bb0aca FUN_147bb0aca body=95 status=ok
// SIG undefined FUN_147bb0aca(void)

undefined8 * FUN_147bb0aca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a2de52(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb0c4c(param_1,iVar1);
      FUN_147bb0cbf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb0b2a FUN_147bb0b2a body=95 status=ok
// SIG undefined FUN_147bb0b2a(void)

undefined8 * FUN_147bb0b2a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a2de21(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb0d46(param_1,iVar1);
      FUN_147bb0db9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb0b8a FUN_147bb0b8a body=95 status=ok
// SIG undefined FUN_147bb0b8a(void)

undefined8 * FUN_147bb0b8a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a2ddf9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb0e40(param_1,iVar1);
      FUN_147bb0ea2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb0bea FUN_147bb0bea body=98 status=ok
// SIG undefined FUN_147bb0bea(void)

void FUN_147bb0bea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,1);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,1);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bb0c4c FUN_147bb0c4c body=115 status=ok
// SIG undefined FUN_147bb0c4c(void)

void FUN_147bb0c4c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb0cbf FUN_147bb0cbf body=134 status=ok
// SIG undefined FUN_147bb0cbf(void)

void FUN_147bb0cbf(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 147bb0d46 FUN_147bb0d46 body=115 status=ok
// SIG undefined FUN_147bb0d46(void)

void FUN_147bb0d46(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb0db9 FUN_147bb0db9 body=134 status=ok
// SIG undefined FUN_147bb0db9(void)

void FUN_147bb0db9(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 147bb0e40 FUN_147bb0e40 body=98 status=ok
// SIG undefined FUN_147bb0e40(void)

void FUN_147bb0e40(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bb0ea2 FUN_147bb0ea2 body=52 status=ok
// SIG undefined FUN_147bb0ea2(void)

void FUN_147bb0ea2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147bb0ed6(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 147bb0ed6 FUN_147bb0ed6 body=120 status=ok
// SIG undefined FUN_147bb0ed6(void)

longlong * FUN_147bb0ed6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  param_1[4] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  plVar1 = (longlong *)param_2[6];
  param_1[6] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  return param_1;
}



// FUNCTION 147bb0f6c FUN_147bb0f6c body=30 status=ok
// SIG undefined FUN_147bb0f6c(void)

undefined8 FUN_147bb0f6c(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  return 0;
}



// FUNCTION 147bb0f8a FUN_147bb0f8a body=56 status=ok
// SIG undefined FUN_147bb0f8a(void)

void FUN_147bb0f8a(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar1 < 0x6f) {
      *(ulonglong *)(param_3 + 0x468) = (ulonglong)*(uint *)(param_3 + 0x464);
    }
  }
  return;
}



// FUNCTION 147bb0fce FUN_147bb0fce body=63 status=ok
// SIG undefined FUN_147bb0fce(void)

undefined1 FUN_147bb0fce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147bb10f6(param_2,param_3);
    param_3 = param_3 + 0x470;
    param_2 = param_2 + 0x470;
  }
  return 1;
}



// FUNCTION 147bb1036 FUN_147bb1036 body=59 status=ok
// SIG undefined FUN_147bb1036(void)

undefined8 FUN_147bb1036(longlong *param_1)

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



// FUNCTION 147bb1082 FUN_147bb1082 body=38 status=ok
// SIG undefined FUN_147bb1082(void)

void FUN_147bb1082(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x470) == '\x01') {
    FUN_14063db7c(param_2);
    *(undefined1 *)(param_2 + 0x470) = 0;
  }
  return;
}



// FUNCTION 147bb10f6 FUN_147bb10f6 body=452 status=ok
// SIG undefined FUN_147bb10f6(void)

longlong FUN_147bb10f6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    FUN_147bb036a(param_1 + lVar2,param_2 + lVar2);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x2d0);
  FUN_14054c6c4(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_14054c6c4(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_144a67f5c(param_1 + 0x2f0,param_2 + 0x2f0);
  FUN_1447cd5a6(param_1 + 0x300,param_2 + 0x300);
  FUN_1447cd5a6(param_1 + 0x310,param_2 + 0x310);
  FUN_14479f9aa(param_1 + 800,param_2 + 800);
  FUN_147bb12ba(param_1 + 0x330,param_2 + 0x330);
  FUN_147bb1312(param_1 + 0x340,param_2 + 0x340);
  FUN_147bb1370(param_1 + 0x350,param_2 + 0x350);
  FUN_147bb13ce(param_1 + 0x360,param_2 + 0x360);
  FUN_14054c6c4(param_1 + 0x370,param_2 + 0x370);
  FUN_147b4c462(param_1 + 0x380,param_2 + 0x380);
  FUN_147bb142c(param_1 + 0x390,param_2 + 0x390);
  FUN_1402ae23a(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_147bb148a(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_147bb14da(param_1 + 0x3c0,param_2 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
  FUN_147bb152a(param_1 + 0x3d8,param_2 + 0x3d8);
  FUN_14746201a(param_1 + 1000,param_2 + 1000);
  FUN_14043ea4a(param_1 + 0x3f8,param_2 + 0x3f8);
  FUN_14043ea4a(param_1 + 0x408,param_2 + 0x408);
  FUN_1406fa324(param_1 + 0x440,param_2 + 0x440);
  FUN_1447cd5a6(param_1 + 0x450,param_2 + 0x450);
  uVar1 = *(undefined8 *)(param_2 + 0x468);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(param_1 + 0x468) = uVar1;
  return param_1;
}



// FUNCTION 147bb12ba FUN_147bb12ba body=88 status=ok
// SIG undefined FUN_147bb12ba(void)

undefined8 * FUN_147bb12ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bb157a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147bb1312 FUN_147bb1312 body=93 status=ok
// SIG undefined FUN_147bb1312(void)

undefined8 * FUN_147bb1312(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14063deab(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb15dc(param_1,iVar1);
      FUN_147bb164f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb1370 FUN_147bb1370 body=93 status=ok
// SIG undefined FUN_147bb1370(void)

undefined8 * FUN_147bb1370(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14063de7a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb16d6(param_1,iVar1);
      FUN_147bb1749(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb13ce FUN_147bb13ce body=93 status=ok
// SIG undefined FUN_147bb13ce(void)

undefined8 * FUN_147bb13ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14063df42(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb17d0(param_1,iVar1);
      FUN_147bb1843(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb142c FUN_147bb142c body=93 status=ok
// SIG undefined FUN_147bb142c(void)

undefined8 * FUN_147bb142c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14063dedc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bb18ca(param_1,iVar1);
      FUN_147bb193d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb148a FUN_147bb148a body=79 status=ok
// SIG undefined FUN_147bb148a(void)

undefined8 * FUN_147bb148a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bb19c4(param_1,iVar1);
      FUN_147bb1a26(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb14da FUN_147bb14da body=79 status=ok
// SIG undefined FUN_147bb14da(void)

undefined8 * FUN_147bb14da(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bb1a78(param_1,iVar1);
      FUN_147bb1aeb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb152a FUN_147bb152a body=79 status=ok
// SIG undefined FUN_147bb152a(void)

undefined8 * FUN_147bb152a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bb1b4a(param_1,iVar1);
      FUN_147bb1bbd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bb157a FUN_147bb157a body=98 status=ok
// SIG undefined FUN_147bb157a(void)

void FUN_147bb157a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,0x10);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bb15dc FUN_147bb15dc body=115 status=ok
// SIG undefined FUN_147bb15dc(void)

void FUN_147bb15dc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb164f FUN_147bb164f body=134 status=ok
// SIG undefined FUN_147bb164f(void)

void FUN_147bb164f(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 147bb16d6 FUN_147bb16d6 body=115 status=ok
// SIG undefined FUN_147bb16d6(void)

void FUN_147bb16d6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb1749 FUN_147bb1749 body=134 status=ok
// SIG undefined FUN_147bb1749(void)

void FUN_147bb1749(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 147bb17d0 FUN_147bb17d0 body=115 status=ok
// SIG undefined FUN_147bb17d0(void)

void FUN_147bb17d0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb1843 FUN_147bb1843 body=134 status=ok
// SIG undefined FUN_147bb1843(void)

void FUN_147bb1843(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 147bb18ca FUN_147bb18ca body=115 status=ok
// SIG undefined FUN_147bb18ca(void)

void FUN_147bb18ca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb193d FUN_147bb193d body=134 status=ok
// SIG undefined FUN_147bb193d(void)

void FUN_147bb193d(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 147bb19c4 FUN_147bb19c4 body=98 status=ok
// SIG undefined FUN_147bb19c4(void)

void FUN_147bb19c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb1a26 FUN_147bb1a26 body=82 status=ok
// SIG undefined FUN_147bb1a26(void)

void FUN_147bb1a26(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147bb1a78 FUN_147bb1a78 body=115 status=ok
// SIG undefined FUN_147bb1a78(void)

void FUN_147bb1a78(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb1aeb FUN_147bb1aeb body=94 status=ok
// SIG undefined FUN_147bb1aeb(void)

void FUN_147bb1aeb(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    bVar7 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar8);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      lVar3 = *(longlong *)(param_2 + 0x10 + lVar8);
      *(longlong *)(param_1 + 0x10 + lVar8) = lVar3;
      if (((bVar7 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c();
        bVar7 = DAT_14c950c29;
      }
      lVar8 = lVar8 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bb1b4a FUN_147bb1b4a body=115 status=ok
// SIG undefined FUN_147bb1b4a(void)

void FUN_147bb1b4a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb1bbd FUN_147bb1bbd body=94 status=ok
// SIG undefined FUN_147bb1bbd(void)

void FUN_147bb1bbd(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    bVar7 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar8);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      lVar3 = *(longlong *)(param_2 + 0x10 + lVar8);
      *(longlong *)(param_1 + 0x10 + lVar8) = lVar3;
      if (((bVar7 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c();
        bVar7 = DAT_14c950c29;
      }
      lVar8 = lVar8 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bb1c1c FUN_147bb1c1c body=147 status=ok
// SIG undefined FUN_147bb1c1c(void)

void FUN_147bb1c1c(longlong param_1,int param_2)

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



// FUNCTION 147bb1cb0 FUN_147bb1cb0 body=116 status=ok
// SIG undefined FUN_147bb1cb0(void)

void FUN_147bb1cb0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_147bb1d26(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147bb1d26 FUN_147bb1d26 body=133 status=ok
// SIG undefined FUN_147bb1d26(void)

void FUN_147bb1d26(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 147bb1dac FUN_147bb1dac body=325 status=ok
// SIG undefined FUN_147bb1dac(void)

undefined4 *
FUN_147bb1dac(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140282ece(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140282db2(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14028318a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb1ef2 FUN_147bb1ef2 body=98 status=ok
// SIG undefined FUN_147bb1ef2(void)

void FUN_147bb1ef2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147bb1f54 FUN_147bb1f54 body=82 status=ok
// SIG undefined FUN_147bb1f54(void)

void FUN_147bb1f54(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147bb1fa6 FUN_147bb1fa6 body=132 status=ok
// SIG undefined FUN_147bb1fa6(void)

void FUN_147bb1fa6(longlong param_1,int param_2)

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



// FUNCTION 147bb202b FUN_147bb202b body=47 status=ok
// SIG undefined FUN_147bb202b(void)

void FUN_147bb202b(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_14357d522();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 147bb205a FUN_147bb205a body=125 status=ok
// SIG undefined FUN_147bb205a(void)

void FUN_147bb205a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 3,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,8,8);
  return;
}



// FUNCTION 147bb20d8 FUN_147bb20d8 body=115 status=ok
// SIG undefined FUN_147bb20d8(void)

int FUN_147bb20d8(longlong *param_1,uint param_2,int *param_3)

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
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bb214c FUN_147bb214c body=329 status=ok
// SIG undefined FUN_147bb214c(void)

undefined4 *
FUN_147bb214c(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bb2296(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  local_58 = param_4;
  cVar6 = FUN_147bb237c(param_1,uVar7,local_40,&local_4c);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar9) {
      uVar8 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147bb247a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb2296 FUN_147bb2296 body=229 status=ok
// SIG undefined FUN_147bb2296(void)

int * FUN_147bb2296(longlong *param_1,int *param_2)

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



// FUNCTION 147bb237c FUN_147bb237c body=116 status=ok
// SIG undefined FUN_147bb237c(void)

void FUN_147bb237c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_147bb20d8();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x20) = *(undefined8 *)(param_3 + 4);
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_147bb23f0(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_147bb2398;
    }
  }
  uVar7 = 0;
LAB_147bb2398:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 147bb23f0 FUN_147bb23f0 body=138 status=ok
// SIG undefined FUN_147bb23f0(void)

void FUN_147bb23f0(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bb247a FUN_147bb247a body=449 status=ok
// SIG undefined FUN_147bb247a(void)

void FUN_147bb247a(longlong *param_1)

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
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
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



// FUNCTION 147bb263c FUN_147bb263c body=132 status=ok
// SIG undefined FUN_147bb263c(void)

void FUN_147bb263c(longlong param_1,int param_2)

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



// FUNCTION 147bb26c2 FUN_147bb26c2 body=96 status=ok
// SIG undefined FUN_147bb26c2(void)

void FUN_147bb26c2(longlong param_1,int param_2)

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



// FUNCTION 147bb2722 FUN_147bb2722 body=128 status=ok
// SIG undefined FUN_147bb2722(void)

void FUN_147bb2722(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caea120;
  if (DAT_14caea154 != 0) {
    *(int *)(DAT_14caea120 + (longlong)DAT_14caea150 * 0x80) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x80) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caea154) {
    iVar4 = DAT_14caea150;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x80) = iVar4;
  DAT_14caea154 = DAT_14caea154 + 1;
  puVar3 = &DAT_14caea130;
  if (DAT_14caea140 != (undefined4 *)0x0) {
    puVar3 = DAT_14caea140;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caea150 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147bb27a2 FUN_147bb27a2 body=420 status=ok
// SIG undefined FUN_147bb27a2(void)

void FUN_147bb27a2(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1403af08a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14021b4e8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x48 + -0x44);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x12;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 147bb2946 FUN_147bb2946 body=507 status=ok
// SIG undefined FUN_147bb2946(void)

void FUN_147bb2946(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
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
        lVar4 = *local_88;
        lVar12 = (longlong)iVar6;
        uVar2 = *(undefined1 *)(lVar4 + 8 + lVar12 * 0x48);
        uVar5 = *(undefined8 *)(lVar4 + lVar12 * 0x48);
        uVar3 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar11 = (uint)uVar5 & 0xffff;
        uVar7 = FUN_144a78877(((uint)uVar5 << 0x10 | uVar11) + (int)((ulonglong)uVar5 >> 0x20) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4),
                              *(undefined4 *)(lVar4 + 0xc + lVar12 * 0x48));
        iVar8 = FUN_144a78877(uVar7,uVar2);
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar4 + 0x44 + lVar12 * 0x48) = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x40 + lVar12 * 0x48) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
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



// FUNCTION 147bb2b42 FUN_147bb2b42 body=400 status=ok
// SIG undefined FUN_147bb2b42(void)

undefined4 * FUN_147bb2b42(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bb2cd4(param_1,local_48);
  uVar2 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar2;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined1 *)(local_40 + 6) = 0xff;
  *(undefined4 *)((longlong)local_40 + 0x34) = 0;
  *(undefined4 *)((longlong)local_40 + 0x31) = 0;
  local_40[7] = 0xffffffff;
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *(undefined1 *)(local_40 + 1);
  uVar2 = *local_40;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4),
                        *(undefined4 *)((longlong)local_40 + 0xc));
  uVar5 = FUN_144a78877(uVar4,uVar1);
  local_58 = 0;
  cVar3 = FUN_147bb2dba(param_1,uVar5,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x44) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147bb2946(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb2cd4 FUN_147bb2cd4 body=230 status=ok
// SIG undefined FUN_147bb2cd4(void)

int * FUN_147bb2cd4(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 147bb2dba FUN_147bb2dba body=134 status=ok
// SIG undefined FUN_147bb2dba(void)

void FUN_147bb2dba(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 uVar18;
  int iVar19;
  longlong lVar20;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar19 = FUN_147bb2e40();
    if (iVar19 != -1) {
      lVar2 = *param_1;
      lVar20 = (longlong)iVar19;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      uVar11 = param_3[8];
      uVar12 = param_3[9];
      uVar13 = param_3[10];
      uVar14 = param_3[0xb];
      uVar15 = param_3[0xd];
      uVar16 = param_3[0xe];
      uVar17 = param_3[0xf];
      puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar20 * 0x48);
      *puVar1 = param_3[0xc];
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar20 * 0x48);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1[2] = uVar13;
      puVar1[3] = uVar14;
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar20 * 0x48);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar2 + lVar20 * 0x48);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_147bb2eb2(param_1,*param_4,1);
      *param_4 = iVar19;
      uVar18 = 1;
      goto LAB_147bb2dd6;
    }
  }
  uVar18 = 0;
LAB_147bb2dd6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar18;
  }
  return;
}



// FUNCTION 147bb2e40 FUN_147bb2e40 body=114 status=ok
// SIG undefined FUN_147bb2e40(void)

int FUN_147bb2e40(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if ((((*(int *)(lVar3 + lVar5 * 0x48) == *param_3) &&
             (*(int *)(lVar3 + 4 + lVar5 * 0x48) == param_3[1])) &&
            (lVar1 = lVar3 + lVar5 * 0x48, *(char *)(lVar1 + 8) == (char)param_3[2])) &&
           (*(int *)(lVar1 + 0xc) == param_3[3])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x40 + lVar5 * 0x48);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 147bb2eb2 FUN_147bb2eb2 body=138 status=ok
// SIG undefined FUN_147bb2eb2(void)

void FUN_147bb2eb2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
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
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bb2f3c FUN_147bb2f3c body=132 status=ok
// SIG undefined FUN_147bb2f3c(void)

void FUN_147bb2f3c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bb2fc1 FUN_147bb2fc1 body=120 status=ok
// SIG undefined FUN_147bb2fc1(void)

undefined8 FUN_147bb2fc1(longlong *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_4 == -1 || (param_3 == -1 || param_2 == -1)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x128))(param_1,0x3f000000);
    uVar2 = (**(code **)(*param_1 + 0x318))
                      (param_1,param_4,uVar1,param_3,0xffffffff,param_2,0xffffffff);
  }
  return uVar2;
}



// FUNCTION 147bb3040 FUN_147bb3040 body=1 status=ok
// SIG undefined FUN_147bb3040(void)

void FUN_147bb3040(void)

{
  return;
}



// FUNCTION 147bb3052 FUN_147bb3052 body=32 status=ok
// SIG undefined FUN_147bb3052(void)

undefined8 FUN_147bb3052(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetVirtualTextureOutput");
  return param_2;
}



// FUNCTION 147bb3072 FUN_147bb3072 body=32 status=ok
// SIG undefined FUN_147bb3072(void)

undefined8 FUN_147bb3072(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Runtime Virtual Texture");
  return param_2;
}



// FUNCTION 147bb30aa FUN_147bb30aa body=124 status=ok
// SIG undefined FUN_147bb30aa(void)

void FUN_147bb30aa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14356d3f8();
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147bb3126 FUN_147bb3126 body=10 status=ok
// SIG undefined FUN_147bb3126(void)

undefined8 * FUN_147bb3126(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147bb313e FUN_147bb313e body=96 status=ok
// SIG undefined FUN_147bb313e(void)

void FUN_147bb313e(longlong param_1)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14356d3f8();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0x1da) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb31b2 FUN_147bb31b2 body=131 status=ok
// SIG undefined FUN_147bb31b2(void)

void FUN_147bb31b2(longlong param_1)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14356d3f8();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0xe7) {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xec);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x100);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb3236 FUN_147bb3236 body=131 status=ok
// SIG undefined FUN_147bb3236(void)

void FUN_147bb3236(longlong param_1)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14356d3f8();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0xe7) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xec);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x100);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb32ea FUN_147bb32ea body=99 status=ok
// SIG undefined FUN_147bb32ea(void)

void FUN_147bb32ea(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb334e FUN_147bb334e body=287 status=ok
// SIG undefined FUN_147bb334e(void)

void FUN_147bb334e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caeb9b0) && (FUN_144b3d300(&DAT_14caeb9b0), DAT_14caeb9b0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MaterialsDuplicateVerbatim",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14caeb9a8 = 0;
    }
    else {
      DAT_14caeb9a8 = (**(code **)(*plVar5 + 0x60))(plVar5);
    }
    _Init_thread_footer(&DAT_14caeb9b0);
  }
  lVar1 = DAT_14caeb9a8;
  if ((((*(int *)(param_1 + 0x2c) != 0 || *(int *)(param_1 + 0x28) != 0) ||
       *(int *)(param_1 + 0x30) != 0) || *(int *)(param_1 + 0x34) != 0) &&
     ((*(uint *)(param_1 + 8) >> 0x13 & 1) != 0)) {
    cVar2 = FUN_144a8728e();
    if (cVar2 == '\0') {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    else {
      uVar4 = 0;
    }
    if (*(char *)(lVar1 + uVar4) != '\0') goto LAB_147bb33bc;
  }
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0x28) = local_28.Data1;
  *(undefined4 *)(param_1 + 0x2c) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x30) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x34) = local_28.Data4._4_4_;
LAB_147bb33bc:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb3474 FUN_147bb3474 body=77 status=ok
// SIG undefined FUN_147bb3474(void)

void FUN_147bb3474(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb34c8 FUN_147bb34c8 body=68 status=ok
// SIG undefined FUN_147bb34c8(void)

void FUN_147bb34c8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb350e FUN_147bb350e body=68 status=ok
// SIG undefined FUN_147bb350e(void)

void FUN_147bb350e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb3558 FUN_147bb3558 body=87 status=ok
// SIG undefined FUN_147bb3558(void)

undefined8 FUN_147bb3558(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb35b0 FUN_147bb35b0 body=112 status=ok
// SIG undefined FUN_147bb35b0(void)

undefined8 FUN_147bb35b0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    plVar2 = param_2;
    do {
      if (*plVar2 == param_1) goto LAB_147bb3605;
      plVar2 = (longlong *)plVar2[1];
    } while (plVar2 != (longlong *)0x0);
    *param_2 = param_1;
    local_18 = 0;
    local_10 = param_2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2b8))
                      (*(longlong **)(param_1 + 0x40),&local_18);
  }
LAB_147bb3605:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb3622 FUN_147bb3622 body=112 status=ok
// SIG undefined FUN_147bb3622(void)

undefined8 FUN_147bb3622(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    plVar2 = param_2;
    do {
      if (*plVar2 == param_1) goto LAB_147bb3677;
      plVar2 = (longlong *)plVar2[1];
    } while (plVar2 != (longlong *)0x0);
    *param_2 = param_1;
    local_18 = 0;
    local_10 = param_2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2b8))
                      (*(longlong **)(param_1 + 0x40),&local_18);
  }
LAB_147bb3677:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb36b4 FUN_147bb36b4 body=38 status=ok
// SIG undefined FUN_147bb36b4(void)

void FUN_147bb36b4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400337aa();
  }
  FUN_14356d3f8(param_1);
  return;
}



// FUNCTION 147bb36da FUN_147bb36da body=117 status=ok
// SIG undefined FUN_147bb36da(void)

void FUN_147bb36da(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14356d3f8();
  if (((*(int *)(param_1 + 0xf4) == 0 && *(int *)(param_1 + 0xf0) == 0) &&
      *(int *)(param_1 + 0xf8) == 0) && *(int *)(param_1 + 0xfc) == 0) {
    local_28.Data1 = 0;
    local_28.Data2 = 0;
    local_28.Data3 = 0;
    local_28.Data4[0] = '\0';
    local_28.Data4[1] = '\0';
    local_28.Data4[2] = '\0';
    local_28.Data4[3] = '\0';
    local_28.Data4[4] = '\0';
    local_28.Data4[5] = '\0';
    local_28.Data4[6] = '\0';
    local_28.Data4[7] = '\0';
    CoCreateGuid(&local_28);
    *(ulong *)(param_1 + 0xf0) = local_28.Data1;
    *(undefined4 *)(param_1 + 0xf4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0xf8) = local_28.Data4._0_4_;
    *(undefined4 *)(param_1 + 0xfc) = local_28.Data4._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb3750 FUN_147bb3750 body=112 status=ok
// SIG undefined FUN_147bb3750(void)

void FUN_147bb3750(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_1 + 0xf4) == 0 && *(int *)(param_1 + 0xf0) == 0) &&
      *(int *)(param_1 + 0xf8) == 0) && *(int *)(param_1 + 0xfc) == 0) {
    local_28.Data1 = 0;
    local_28.Data2 = 0;
    local_28.Data3 = 0;
    local_28.Data4[0] = '\0';
    local_28.Data4[1] = '\0';
    local_28.Data4[2] = '\0';
    local_28.Data4[3] = '\0';
    local_28.Data4[4] = '\0';
    local_28.Data4[5] = '\0';
    local_28.Data4[6] = '\0';
    local_28.Data4[7] = '\0';
    CoCreateGuid(&local_28);
    *(ulong *)(param_1 + 0xf0) = local_28.Data1;
    *(undefined4 *)(param_1 + 0xf4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0xf8) = local_28.Data4._0_4_;
    *(undefined4 *)(param_1 + 0xfc) = local_28.Data4._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb37c2 FUN_147bb37c2 body=117 status=ok
// SIG undefined FUN_147bb37c2(void)

void FUN_147bb37c2(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14356d3f8();
  if (((*(int *)(param_1 + 0x100) == 0 && *(int *)(param_1 + 0xfc) == 0) &&
      *(int *)(param_1 + 0x104) == 0) && *(int *)(param_1 + 0x108) == 0) {
    local_28.Data1 = 0;
    local_28.Data2 = 0;
    local_28.Data3 = 0;
    local_28.Data4[0] = '\0';
    local_28.Data4[1] = '\0';
    local_28.Data4[2] = '\0';
    local_28.Data4[3] = '\0';
    local_28.Data4[4] = '\0';
    local_28.Data4[5] = '\0';
    local_28.Data4[6] = '\0';
    local_28.Data4[7] = '\0';
    CoCreateGuid(&local_28);
    *(ulong *)(param_1 + 0xfc) = local_28.Data1;
    *(undefined4 *)(param_1 + 0x100) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x104) = local_28.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x108) = local_28.Data4._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb3838 FUN_147bb3838 body=112 status=ok
// SIG undefined FUN_147bb3838(void)

void FUN_147bb3838(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_1 + 0x100) == 0 && *(int *)(param_1 + 0xfc) == 0) &&
      *(int *)(param_1 + 0x104) == 0) && *(int *)(param_1 + 0x108) == 0) {
    local_28.Data1 = 0;
    local_28.Data2 = 0;
    local_28.Data3 = 0;
    local_28.Data4[0] = '\0';
    local_28.Data4[1] = '\0';
    local_28.Data4[2] = '\0';
    local_28.Data4[3] = '\0';
    local_28.Data4[4] = '\0';
    local_28.Data4[5] = '\0';
    local_28.Data4[6] = '\0';
    local_28.Data4[7] = '\0';
    CoCreateGuid(&local_28);
    *(ulong *)(param_1 + 0xfc) = local_28.Data1;
    *(undefined4 *)(param_1 + 0x100) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x104) = local_28.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x108) = local_28.Data4._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb38aa FUN_147bb38aa body=115 status=ok
// SIG undefined FUN_147bb38aa(void)

void FUN_147bb38aa(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400337aa();
    FUN_147bc802e(*(undefined8 *)(param_1 + 0xb0),&local_20,param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xb8) = local_20;
  }
  FUN_14356d3f8(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb39b8 FUN_147bb39b8 body=32 status=ok
// SIG undefined FUN_147bb39b8(void)

undefined8 FUN_147bb39b8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetSingleLayerWaterMaterialOutput");
  return param_2;
}



// FUNCTION 147bb39d8 FUN_147bb39d8 body=32 status=ok
// SIG undefined FUN_147bb39d8(void)

undefined8 FUN_147bb39d8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Single Layer Water Material");
  return param_2;
}



// FUNCTION 147bb39fe FUN_147bb39fe body=32 status=ok
// SIG undefined FUN_147bb39fe(void)

undefined8 FUN_147bb39fe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetVolumetricAdvancedMaterialOutput");
  return param_2;
}



// FUNCTION 147bb3a1e FUN_147bb3a1e body=32 status=ok
// SIG undefined FUN_147bb3a1e(void)

undefined8 FUN_147bb3a1e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Volumetric Advanced Ouput");
  return param_2;
}



// FUNCTION 147bb3a44 FUN_147bb3a44 body=32 status=ok
// SIG undefined FUN_147bb3a44(void)

undefined8 FUN_147bb3a44(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetVolumetricCloudEmptySpaceSkippingOutput");
  return param_2;
}



// FUNCTION 147bb3a64 FUN_147bb3a64 body=32 status=ok
// SIG undefined FUN_147bb3a64(void)

undefined8 FUN_147bb3a64(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Volumetric Cloud Empty Space Skipping Output");
  return param_2;
}



// FUNCTION 147bb3a8a FUN_147bb3a8a body=32 status=ok
// SIG undefined FUN_147bb3a8a(void)

undefined8 FUN_147bb3a8a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetThinTranslucentMaterialOutput");
  return param_2;
}



// FUNCTION 147bb3aaa FUN_147bb3aaa body=32 status=ok
// SIG undefined FUN_147bb3aaa(void)

undefined8 FUN_147bb3aaa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Thin Translucent Material");
  return param_2;
}



// FUNCTION 147bb3ad0 FUN_147bb3ad0 body=32 status=ok
// SIG undefined FUN_147bb3ad0(void)

undefined8 FUN_147bb3ad0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetAbsorptionMediumMaterialOutput");
  return param_2;
}



// FUNCTION 147bb3af0 FUN_147bb3af0 body=32 status=ok
// SIG undefined FUN_147bb3af0(void)

undefined8 FUN_147bb3af0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Absorption Medium");
  return param_2;
}



// FUNCTION 147bb3b1e FUN_147bb3b1e body=32 status=ok
// SIG undefined FUN_147bb3b1e(void)

undefined8 FUN_147bb3b1e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetSubsurfaceMediumMaterialOutput");
  return param_2;
}



// FUNCTION 147bb3b3e FUN_147bb3b3e body=32 status=ok
// SIG undefined FUN_147bb3b3e(void)

undefined8 FUN_147bb3b3e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Subsurface Medium");
  return param_2;
}



// FUNCTION 147bb3b64 FUN_147bb3b64 body=32 status=ok
// SIG undefined FUN_147bb3b64(void)

undefined8 FUN_147bb3b64(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetNeuralInput");
  return param_2;
}



// FUNCTION 147bb3b8a FUN_147bb3b8a body=32 status=ok
// SIG undefined FUN_147bb3b8a(void)

undefined8 FUN_147bb3b8a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetFirstPersonOutput");
  return param_2;
}



// FUNCTION 147bb3baa FUN_147bb3baa body=32 status=ok
// SIG undefined FUN_147bb3baa(void)

undefined8 FUN_147bb3baa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"First Person Output");
  return param_2;
}



// FUNCTION 147bb3bca FUN_147bb3bca body=119 status=ok
// SIG undefined FUN_147bb3bca(void)

void FUN_147bb3bca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1c)) {
      uVar2 = uVar1 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1c,4);
  }
  return;
}



// FUNCTION 147bb3c41 FUN_147bb3c41 body=324 status=ok
// SIG undefined FUN_147bb3c41(void)

longlong * FUN_147bb3c41(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147bb3d86 FUN_147bb3d86 body=59 status=ok
// SIG undefined FUN_147bb3d86(void)

longlong FUN_147bb3d86(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bb3e2a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147bb3e21(lVar2);
  return lVar2;
}



// FUNCTION 147bb3dc2 FUN_147bb3dc2 body=95 status=ok
// SIG undefined FUN_147bb3dc2(void)

void FUN_147bb3dc2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 147bb3e21 FUN_147bb3e21 body=9 status=ok
// SIG undefined FUN_147bb3e21(void)

void FUN_147bb3e21(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  return;
}



// FUNCTION 147bb3e2a FUN_147bb3e2a body=132 status=ok
// SIG undefined FUN_147bb3e2a(void)

void FUN_147bb3e2a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bb3eaf FUN_147bb3eaf body=168 status=ok
// SIG undefined FUN_147bb3eaf(void)

longlong * FUN_147bb3eaf(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147bb3f58 FUN_147bb3f58 body=59 status=ok
// SIG undefined FUN_147bb3f58(void)

longlong FUN_147bb3f58(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bb3ffc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_147bb3ff3(lVar2);
  return lVar2;
}



// FUNCTION 147bb3f94 FUN_147bb3f94 body=95 status=ok
// SIG undefined FUN_147bb3f94(void)

void FUN_147bb3f94(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147bb3ff3 FUN_147bb3ff3 body=8 status=ok
// SIG undefined FUN_147bb3ff3(void)

void FUN_147bb3ff3(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return;
}



// FUNCTION 147bb3ffc FUN_147bb3ffc body=132 status=ok
// SIG undefined FUN_147bb3ffc(void)

void FUN_147bb3ffc(longlong param_1,int param_2)

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



// FUNCTION 147bb40de FUN_147bb40de body=75 status=ok
// SIG undefined FUN_147bb40de(void)

void FUN_147bb40de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14356f680(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb412a FUN_147bb412a body=73 status=ok
// SIG undefined FUN_147bb412a(void)

bool FUN_147bb412a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar6 = FUN_147bb8de2();
  if (uVar6 != 0xffffffff) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x10 + (ulonglong)uVar6 * 0x30);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x20 + (ulonglong)uVar6 * 0x30);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    *param_3 = *puVar1;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
    *(undefined1 *)(param_3 + 4) = 2;
  }
  return uVar6 != 0xffffffff;
}



// FUNCTION 147bb41a8 FUN_147bb41a8 body=63 status=ok
// SIG undefined FUN_147bb41a8(void)

longlong FUN_147bb41a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bb9ce8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_147bb9cc6(lVar2);
  return lVar2;
}



// FUNCTION 147bb41e8 FUN_147bb41e8 body=63 status=ok
// SIG undefined FUN_147bb41e8(void)

longlong FUN_147bb41e8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bb9df4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_147bb9dec(lVar2);
  return lVar2;
}



// FUNCTION 147bb4227 FUN_147bb4227 body=137 status=ok
// SIG undefined FUN_147bb4227(void)

bool FUN_147bb4227(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar6 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar6 < 1) {
    bVar7 = false;
  }
  else {
    puVar4 = (undefined8 *)(*param_1 + 0x28);
    bVar7 = true;
    uVar5 = 1;
    do {
      if ((((*param_2 == (int)puVar4[-5]) && (param_2[2] == (int)((ulonglong)puVar4[-5] >> 0x20)))
          && (*(int *)((longlong)puVar4 + -0x1c) == param_2[3])) &&
         (*(char *)(puVar4 + -4) == (char)param_2[4])) {
        uVar1 = puVar4[-2];
        uVar2 = puVar4[-1];
        uVar3 = *puVar4;
        *param_3 = puVar4[-3];
        param_3[1] = uVar1;
        param_3[2] = uVar2;
        param_3[3] = uVar3;
        *(undefined1 *)(param_3 + 4) = 2;
        return bVar7;
      }
      bVar7 = uVar5 < uVar6;
      puVar4 = puVar4 + 8;
      bVar8 = uVar5 != uVar6;
      uVar5 = uVar5 + 1;
    } while (bVar8);
  }
  return bVar7;
}



// FUNCTION 147bb42b0 FUN_147bb42b0 body=135 status=ok
// SIG undefined FUN_147bb42b0(void)

bool FUN_147bb42b0(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar3 < 1) {
    bVar4 = false;
  }
  else {
    plVar1 = (longlong *)(*param_1 + 0x10);
    bVar4 = true;
    uVar2 = 1;
    do {
      if ((((*plVar1 != 0) && (*param_2 == (int)plVar1[-2])) &&
          (param_2[2] == (int)((ulonglong)plVar1[-2] >> 0x20))) &&
         ((*(int *)((longlong)plVar1 + -4) == param_2[3] && ((char)plVar1[-1] == (char)param_2[4])))
         ) {
        *param_3 = *plVar1;
        *(undefined1 *)(param_3 + 4) = 4;
        return bVar4;
      }
      bVar4 = uVar2 < uVar3;
      plVar1 = plVar1 + 5;
      bVar5 = uVar2 != uVar3;
      uVar2 = uVar2 + 1;
    } while (bVar5);
  }
  return bVar4;
}



// FUNCTION 147bb4337 FUN_147bb4337 body=135 status=ok
// SIG undefined FUN_147bb4337(void)

bool FUN_147bb4337(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar3 < 1) {
    bVar4 = false;
  }
  else {
    plVar1 = (longlong *)(*param_1 + 0x10);
    bVar4 = true;
    uVar2 = 1;
    do {
      if ((((*plVar1 != 0) && (*param_2 == (int)plVar1[-2])) &&
          (param_2[2] == (int)((ulonglong)plVar1[-2] >> 0x20))) &&
         ((*(int *)((longlong)plVar1 + -4) == param_2[3] && ((char)plVar1[-1] == (char)param_2[4])))
         ) {
        *param_3 = *plVar1;
        *(undefined1 *)(param_3 + 4) = 6;
        return bVar4;
      }
      bVar4 = uVar2 < uVar3;
      plVar1 = plVar1 + 5;
      bVar5 = uVar2 != uVar3;
      uVar2 = uVar2 + 1;
    } while (bVar5);
  }
  return bVar4;
}



// FUNCTION 147bb43be FUN_147bb43be body=135 status=ok
// SIG undefined FUN_147bb43be(void)

bool FUN_147bb43be(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar3 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar3 < 1) {
    bVar4 = false;
  }
  else {
    plVar1 = (longlong *)(*param_1 + 0x10);
    bVar4 = true;
    uVar2 = 1;
    do {
      if ((((*plVar1 != 0) && (*param_2 == (int)plVar1[-2])) &&
          (param_2[2] == (int)((ulonglong)plVar1[-2] >> 0x20))) &&
         ((*(int *)((longlong)plVar1 + -4) == param_2[3] && ((char)plVar1[-1] == (char)param_2[4])))
         ) {
        *param_3 = *plVar1;
        *(undefined1 *)(param_3 + 4) = 7;
        return bVar4;
      }
      bVar4 = uVar2 < uVar3;
      plVar1 = plVar1 + 5;
      bVar5 = uVar2 != uVar3;
      uVar2 = uVar2 + 1;
    } while (bVar5);
  }
  return bVar4;
}



// FUNCTION 147bb4445 FUN_147bb4445 body=177 status=ok
// SIG undefined FUN_147bb4445(void)

bool FUN_147bb4445(longlong *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    bVar6 = false;
  }
  else {
    piVar3 = (int *)(*param_1 + 0x18);
    bVar6 = true;
    uVar4 = 1;
    do {
      lVar2 = *(longlong *)(piVar3 + -2);
      if (lVar2 != 0) {
        iVar1 = *piVar3;
        if ((((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x50))) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar1 * 8) != 0)) &&
           (((*param_2 == (int)*(undefined8 *)(piVar3 + -6) &&
             (param_2[2] == (int)((ulonglong)*(undefined8 *)(piVar3 + -6) >> 0x20))) &&
            ((piVar3[-3] == param_2[3] && ((char)piVar3[-4] == (char)param_2[4])))))) {
          *param_3 = lVar2;
          *(int *)(param_3 + 1) = iVar1;
          *(undefined1 *)(param_3 + 4) = 5;
          return bVar6;
        }
      }
      bVar6 = uVar4 < uVar5;
      piVar3 = piVar3 + 0xc;
      bVar7 = uVar4 != uVar5;
      uVar4 = uVar4 + 1;
    } while (bVar7);
  }
  return bVar6;
}



// FUNCTION 147bb44f6 FUN_147bb44f6 body=127 status=ok
// SIG undefined FUN_147bb44f6(void)

bool FUN_147bb44f6(undefined8 *param_1,int *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 1);
  if ((longlong)uVar2 < 1) {
    bVar3 = false;
  }
  else {
    param_1 = (undefined8 *)*param_1;
    bVar3 = true;
    uVar1 = 1;
    do {
      if ((((*(char *)(param_1 + 2) == '\x01') && (*param_2 == (int)*param_1)) &&
          (param_2[2] == (int)((ulonglong)*param_1 >> 0x20))) &&
         ((*(int *)((longlong)param_1 + 0xc) == param_2[3] &&
          (*(char *)(param_1 + 1) == (char)param_2[4])))) {
        *param_3 = *(undefined1 *)((longlong)param_1 + 0x24);
        param_3[0x20] = 8;
        return bVar3;
      }
      bVar3 = uVar1 < uVar2;
      param_1 = param_1 + 5;
      bVar4 = uVar1 != uVar2;
      uVar1 = uVar1 + 1;
    } while (bVar4);
  }
  return bVar3;
}



// FUNCTION 147bb4576 FUN_147bb4576 body=344 status=ok
// SIG undefined FUN_147bb4576(void)

undefined8 FUN_147bb4576(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144842a8a(param_1,local_30);
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (local_30[0] < 0x120) {
    plVar6 = &DAT_14caec33c;
    if (DAT_14caec344 <= iVar1) goto LAB_147bb460b;
    puVar7 = &DAT_14caec344;
    FUN_144b3d300(&DAT_14caec344);
    if (DAT_14caec344 != -1) goto LAB_147bb460b;
    plVar6 = &DAT_14caec33c;
    pwVar5 = L"RefractionBias";
  }
  else {
    plVar6 = &DAT_14caec330;
    if (DAT_14caec338 <= iVar1) goto LAB_147bb460b;
    puVar7 = &DAT_14caec338;
    FUN_144b3d300(&DAT_14caec338);
    if (DAT_14caec338 != -1) goto LAB_147bb460b;
    plVar6 = &DAT_14caec330;
    pwVar5 = L"RefractionDepthBias";
  }
  FUN_1446f470e(plVar6,pwVar5,1);
  _Init_thread_footer(puVar7);
LAB_147bb460b:
  lVar2 = (longlong)*(int *)(param_1 + 0x188);
  if (0 < lVar2) {
    plVar4 = *(longlong **)(param_1 + 0x180);
    do {
      if (((*plVar6 == *plVar4) && (*(int *)((longlong)plVar4 + 0xc) == -1)) &&
         ((char)plVar4[1] == '\x02')) {
        if (plVar4 != (longlong *)0x0) {
          *param_2 = (int)plVar4[2];
          uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          goto LAB_147bb4653;
        }
        break;
      }
      plVar4 = (longlong *)((longlong)plVar4 + 0x24);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  plVar6 = *(longlong **)(param_1 + 0x110);
  if (plVar6 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar6 + 0x3d8))(plVar6,param_2);
  }
LAB_147bb4653:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb46d0 FUN_147bb46d0 body=608 status=ok
// SIG undefined FUN_147bb46d0(void)

void FUN_147bb46d0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined1 local_88;
  longlong *local_80;
  longlong *local_78;
  uint local_6c;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = param_1;
  lVar2 = FUN_144b252b8(param_2);
  local_80 = param_4;
  local_68 = lVar2;
  if (param_4 != (longlong *)0x0) {
    lVar12 = 0;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + *(int *)(lVar2 + 0x38 + lVar12);
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != 0x70);
    FUN_1403b0d30(param_4,iVar5);
  }
  lVar12 = lVar2 + 0x30;
  uVar10 = 0;
  do {
    lVar11 = uVar10 * 0x10;
    if (0 < *(int *)(lVar2 + 0x38 + lVar11)) {
      uVar7 = 0;
      do {
        local_50 = 0;
        local_90 = &local_50;
        local_88 = 1;
        local_98 = param_2;
        FUN_144ae6b94(local_68,uVar10 & 0xffffffff,uVar7 & 0xffffffff,local_58);
        if (local_50 != 0) {
          lVar3 = *param_3;
          iVar5 = (int)param_3[1];
          lVar8 = (longlong)iVar5;
          if (lVar8 != 0) {
            lVar9 = lVar8 * 8;
            lVar6 = 0;
            do {
              if (*(longlong *)(lVar3 + lVar6 * 8) == local_50) {
                iVar4 = (int)lVar6;
                if (iVar4 != -1) goto LAB_147bb47af;
                break;
              }
              lVar6 = lVar6 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
          *(uint *)(param_3 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
            FUN_14473b392(param_3,iVar5);
            lVar3 = *param_3;
          }
          *(longlong *)(lVar3 + lVar8 * 8) = local_50;
          iVar4 = iVar5;
LAB_147bb47af:
          if (local_80 != (longlong *)0x0) {
            uVar1 = *(ulonglong *)(lVar12 + lVar11);
            local_60 = ((longlong)uVar1 >> 0x18) + lVar12 + lVar11;
            if ((uVar1 & 1) == 0) {
              local_60 = uVar1;
            }
            iVar5 = (int)local_80[1];
            local_78 = (longlong *)(longlong)iVar5;
            if (iVar5 <= iVar4) {
              local_6c = (iVar4 - iVar5) + 1;
              *(int *)(local_80 + 1) = iVar4 + 1;
              if ((uint)(*(int *)((longlong)local_80 + 0xc) - iVar5) < local_6c) {
                FUN_140bfc2d4(local_80);
              }
              memset((void *)((longlong)local_78 * 0x10 + *local_80),0,(longlong)(int)local_6c << 4)
              ;
            }
            lVar3 = *local_80;
            lVar8 = (longlong)iVar4 * 0x10;
            local_78 = (longlong *)(lVar3 + lVar8);
            iVar5 = *(int *)(lVar3 + 8 + lVar8);
            *(uint *)(lVar3 + 8 + lVar8) = iVar5 + 1U;
            if (*(uint *)(lVar3 + 0xc + lVar8) < iVar5 + 1U) {
              FUN_1446f48e2(local_78,iVar5);
            }
            *(undefined4 *)(*local_78 + (longlong)iVar5 * 4) =
                 *(undefined4 *)(uVar7 * 0x1c + local_60 + 0x14);
          }
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)*(int *)(lVar12 + lVar11 + 8));
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 7) {
      if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 147bb4932 FUN_147bb4932 body=320 status=ok
// SIG undefined FUN_147bb4932(void)

void FUN_147bb4932(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_1400821c8(param_2,0);
  }
  FUN_144716727(*param_3,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_1403b10bc(param_3,0);
  }
  plVar3 = param_1;
  if (param_1 != (longlong *)0x0) {
    while( true ) {
      if ((*(byte *)(plVar3 + 0x2a) & 1) != 0) {
        lVar2 = FUN_147badf29(plVar3 + 0x59,param_5,param_4,1);
        goto LAB_147bb4a05;
      }
      if (plVar3[0x22] == 0) break;
      lVar2 = FUN_1411eefea();
      plVar3 = (longlong *)plVar3[0x22];
      if ((((plVar3 == (longlong *)0x0) || (lVar2 == 0)) || (lVar1 = plVar3[2], lVar1 == 0)) ||
         ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) break;
    }
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
  if (plVar3 == (longlong *)0x0) {
    FUN_14003fbd6();
    (**(code **)(*DAT_14caea080 + 0x318))(DAT_14caea080,param_2,param_3,param_4,param_5);
  }
  else {
    lVar2 = (**(code **)(*plVar3 + 0x348))(plVar3,param_5,param_4);
LAB_147bb4a05:
    if (lVar2 != 0) {
      FUN_147bb46d0(param_1,lVar2,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147bb4a76 FUN_147bb4a76 body=109 status=ok
// SIG undefined FUN_147bb4a76(void)

void FUN_147bb4a76(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a61b4f();
  local_20 = param_1;
  FUN_147bb1dac(param_2,local_24,&local_20,0);
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb4ae4 FUN_147bb4ae4 body=74 status=ok
// SIG undefined FUN_147bb4ae4(void)

undefined8 FUN_147bb4ae4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == param_1) {
    uVar1 = 1;
  }
  else {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_144a61b4f();
                    /* WARNING: Could not recover jumptable at 0x000147bb4b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x2d8))
                        (*(longlong **)(param_1 + 0x110),param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 147bb4bca FUN_147bb4bca body=56 status=ok
// SIG undefined FUN_147bb4bca(void)

undefined8 * FUN_147bb4bca(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0x3f00000040800000;
  }
  else {
    (**(code **)(*plVar1 + 0x4d0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147bb4c1c FUN_147bb4c1c body=56 status=ok
// SIG undefined FUN_147bb4c1c(void)

undefined8 * FUN_147bb4c1c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0x3f80000040800000;
  }
  else {
    (**(code **)(*plVar1 + 0x4e0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147bb4c6e FUN_147bb4c6e body=345 status=ok
// SIG undefined FUN_147bb4c6e(void)

void FUN_147bb4c6e(longlong param_1,undefined1 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    if (param_3 < 0) {
LAB_147bb4dbf:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_3);
    }
    if (*(int *)(param_1 + 0x18c) < param_3) {
      FUN_1417e0304(param_1 + 0x180,param_3);
      return;
    }
    break;
  case 1:
    if (param_3 < 0) goto LAB_147bb4dbf;
    if (*(int *)(param_1 + 0x19c) < param_3) {
      FUN_1417e0376(param_1 + 400,param_3);
      return;
    }
    break;
  case 2:
    if (param_3 < 0) goto LAB_147bb4dbf;
    if (*(int *)(param_1 + 0x1ac) < param_3) {
      FUN_147bbad7e(param_1 + 0x1a0,param_3);
      return;
    }
    break;
  case 3:
    if (param_3 < 0) goto LAB_147bb4dbf;
    if (*(int *)(param_1 + 0x1bc) < param_3) {
      FUN_147bbadde(param_1 + 0x1b0,param_3);
      return;
    }
    break;
  case 4:
    if (param_3 < 0) goto LAB_147bb4dbf;
    if (*(int *)(param_1 + 0x1cc) < param_3) {
      FUN_147bbae4e(param_1 + 0x1c0,param_3);
      return;
    }
    break;
  case 5:
    if (param_3 < 0) goto LAB_147bb4dbf;
    if (*(int *)(param_1 + 0x1fc) < param_3) {
      FUN_147bbaebe(param_1 + 0x1f0,param_3);
      return;
    }
    break;
  case 6:
    if (param_3 < 0) goto LAB_147bb4dbf;
    if (*(int *)(param_1 + 0x1dc) < param_3) {
      FUN_147bbaf2e(param_1 + 0x1d0,param_3);
      return;
    }
    break;
  case 7:
    if (param_3 < 0) goto LAB_147bb4dbf;
    if (*(int *)(param_1 + 0x1ec) < param_3) {
      FUN_147bbaf9e(param_1 + 0x1e0,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147bb4e5e FUN_147bb4e5e body=136 status=ok
// SIG undefined FUN_147bb4e5e(void)

undefined8 FUN_147bb4e5e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x118) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x120);
  }
  else if (*(longlong *)(param_1 + 0x110) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    plVar2 = param_2;
    do {
      if (*plVar2 == param_1) goto LAB_147bb4e81;
      plVar2 = (longlong *)plVar2[1];
    } while (plVar2 != (longlong *)0x0);
    *param_2 = param_1;
    local_18 = 0;
    local_10 = param_2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x360))
                      (*(longlong **)(param_1 + 0x110),&local_18);
  }
LAB_147bb4e81:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb4ee8 FUN_147bb4ee8 body=1417 status=ok
// SIG undefined FUN_147bb4ee8(void)

void FUN_147bb4ee8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  undefined4 local_550;
  undefined1 *local_548;
  uint local_540;
  undefined1 *local_538;
  uint local_530;
  undefined1 *local_528;
  uint local_520;
  undefined1 *local_518;
  uint local_510;
  undefined1 *local_508;
  uint local_500;
  undefined1 *local_4f8;
  uint local_4f0;
  undefined1 *local_4e8;
  uint local_4e0;
  undefined1 *local_4d8;
  uint local_4d0;
  undefined1 *local_4c8;
  uint local_4c0;
  undefined1 local_4b8 [768];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_148;
  undefined4 local_140;
  undefined1 local_138 [64];
  undefined1 *local_f8;
  uint local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_e8 = 0;
  uStack_e0 = 0;
  (**(code **)(*param_1 + 0x2c8))(0,&local_e8);
  FUN_147bba1ac(param_3);
  FUN_147baf6ca(uStack_e0,param_2,param_3);
  local_f8 = (undefined1 *)0x0;
  local_ec = 0x10;
  puVar4 = (undefined8 *)param_1[0x56];
  puVar7 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    puVar7 = &DAT_14caec320;
  }
  iVar8 = *(int *)(puVar7 + 1);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  local_f0 = 0;
  if (iVar8 != 0x10) {
    FUN_146bf53da(local_138);
    puVar4 = (undefined8 *)param_1[0x56];
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = &DAT_14caec320;
  }
  if (0 < *(int *)(puVar4 + 1)) {
    iVar8 = 0;
    do {
      uVar3 = local_f0;
      lVar9 = (longlong)(int)local_f0;
      local_f0 = local_f0 + 1;
      if (local_ec < local_f0) {
        FUN_1401fcbb6(local_138,uVar3);
      }
      puVar6 = local_f8;
      if (local_f8 == (undefined1 *)0x0) {
        puVar6 = local_138;
      }
      *(int *)(puVar6 + lVar9 * 4) = iVar8;
      iVar8 = iVar8 + 1;
      puVar4 = (undefined8 *)param_1[0x56];
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = &DAT_14caec320;
      }
    } while (iVar8 < *(int *)(puVar4 + 1));
  }
  local_1b8 = 0;
  local_1b0 = 0x2000000000;
  local_1a0 = 0;
  local_198 = 0;
  uStack_194 = 0x20;
  uStack_190 = 0xffffffff;
  uStack_18c = 0;
  local_148 = 0;
  local_140 = 0;
  if (0 < (int)local_50) {
    lVar9 = 0;
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_d8;
      }
      lVar2 = *(longlong *)(puVar6 + lVar9 * 8);
      switch((char)param_2) {
      case '\0':
        local_4c8 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_4c8 = local_138;
        }
        local_4c0 = local_f0;
        FUN_147bb5473(lVar2 + 0x180,&local_4c8,local_4b8,param_3);
        break;
      case '\x01':
        local_4d8 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_4d8 = local_138;
        }
        local_4d0 = local_f0;
        FUN_147bb55e2(lVar2 + 400,&local_4d8,local_4b8,param_3);
        break;
      case '\x02':
        local_4e8 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_4e8 = local_138;
        }
        local_4e0 = local_f0;
        FUN_147bb574f(lVar2 + 0x1a0,&local_4e8,local_4b8,param_3);
        break;
      case '\x03':
        local_4f8 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_4f8 = local_138;
        }
        local_4f0 = local_f0;
        FUN_147bb58c6(lVar2 + 0x1b0,&local_4f8,local_4b8,param_3);
        break;
      case '\x04':
        local_508 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_508 = local_138;
        }
        local_500 = local_f0;
        FUN_147bb5a32(lVar2 + 0x1c0,&local_508,local_4b8,param_3);
        break;
      case '\x05':
        local_538 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_538 = local_138;
        }
        local_530 = local_f0;
        FUN_147bb5e76(lVar2 + 0x1f0,&local_538,local_4b8,param_3);
        break;
      case '\x06':
        local_518 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_518 = local_138;
        }
        local_510 = local_f0;
        FUN_147bb5b9e(lVar2 + 0x1d0,&local_518,local_4b8,param_3);
        break;
      case '\a':
        local_528 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_528 = local_138;
        }
        local_520 = local_f0;
        FUN_147bb5d0a(lVar2 + 0x1e0,&local_528,local_4b8,param_3);
        break;
      case '\b':
        local_548 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          local_548 = local_138;
        }
        local_540 = local_f0;
        FUN_147bb5fea(lVar2 + 0x250,&local_548,local_4b8,param_3);
      }
      lVar1 = lVar9 + 1;
      lVar5 = (longlong)(int)local_50;
      if (lVar1 < lVar5) {
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_d8;
        }
        puVar4 = &DAT_14caec320;
        if (*(undefined8 **)(lVar2 + 0x2b0) != (undefined8 *)0x0) {
          puVar4 = *(undefined8 **)(lVar2 + 0x2b0);
        }
        local_558 = *puVar4;
        local_550 = *(undefined4 *)(puVar4 + 1);
        puVar4 = *(undefined8 **)(*(longlong *)(puVar6 + lVar9 * 8 + 8) + 0x2b0);
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = &DAT_14caec320;
        }
        FUN_147bb6161(local_138,*(undefined4 *)(puVar4 + 1),&local_558);
        lVar5 = (longlong)(int)local_50;
      }
      lVar9 = lVar1;
    } while (lVar1 < lVar5);
    local_140 = 0;
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_147bba336(local_4b8);
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb5473 FUN_147bb5473 body=366 status=ok
// SIG undefined FUN_147bb5473(void)

void FUN_147bb5473(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar3 = FUN_147bc17ca(lVar1 + lVar9,&local_68,&local_58);
      if (cVar3 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar2 = (uint)((ulonglong)local_58 >> 0x10);
          uVar8 = (uint)local_58 & 0xffff;
          uVar4 = FUN_144a78877(((uint)local_58 << 0x10 | uVar8) +
                                (int)((ulonglong)local_58 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),local_4c);
          uVar4 = FUN_144a78877(uVar4,local_7c);
          iVar5 = FUN_147bb2e40(local_78,uVar4,&local_58);
          lVar6 = (longlong)iVar5 * 0x48 + *local_78;
          if (lVar6 != 0 && iVar5 != -1) {
            *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar1 + 0x10 + lVar9);
            *(undefined1 *)(lVar6 + 0x30) = 0;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x24;
    } while (lVar7 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb55e2 FUN_147bb55e2 body=364 status=ok
// SIG undefined FUN_147bb55e2(void)

void FUN_147bb55e2(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar12 = 0;
    lVar10 = 0;
    do {
      lVar2 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar6 = FUN_147bc17ca(lVar2 + lVar12,&local_68,&local_58);
      if (cVar6 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar5 = (uint)((ulonglong)local_58 >> 0x10);
          uVar11 = (uint)local_58 & 0xffff;
          uVar7 = FUN_144a78877(((uint)local_58 << 0x10 | uVar11) +
                                (int)((ulonglong)local_58 >> 0x20) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4),local_4c);
          uVar7 = FUN_144a78877(uVar7,local_7c);
          iVar8 = FUN_147bb2e40(local_78,uVar7,&local_58);
          lVar9 = (longlong)iVar8 * 0x48 + *local_78;
          if (lVar9 != 0 && iVar8 != -1) {
            puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
            uVar7 = puVar1[1];
            uVar3 = puVar1[2];
            uVar4 = puVar1[3];
            *(undefined4 *)(lVar9 + 0x10) = *puVar1;
            *(undefined4 *)(lVar9 + 0x14) = uVar7;
            *(undefined4 *)(lVar9 + 0x18) = uVar3;
            *(undefined4 *)(lVar9 + 0x1c) = uVar4;
            *(undefined1 *)(lVar9 + 0x30) = 1;
          }
        }
      }
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x30;
    } while (lVar10 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb574f FUN_147bb574f body=374 status=ok
// SIG undefined FUN_147bb574f(void)

void FUN_147bb574f(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar15 = 0;
    lVar13 = 0;
    do {
      lVar3 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar9 = FUN_147bc17ca(lVar3 + lVar15,&local_68,&local_58);
      if (cVar9 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar8 = (uint)((ulonglong)local_58 >> 0x10);
          uVar14 = (uint)local_58 & 0xffff;
          uVar10 = FUN_144a78877(((uint)local_58 << 0x10 | uVar14) +
                                 (int)((ulonglong)local_58 >> 0x20) +
                                 (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar14 >> 4),local_4c);
          uVar10 = FUN_144a78877(uVar10,local_7c);
          iVar11 = FUN_147bb2e40(local_78,uVar10,&local_58);
          lVar12 = (longlong)iVar11 * 0x48 + *local_78;
          if (lVar12 != 0 && iVar11 != -1) {
            puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar15);
            uVar10 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar15);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            *(undefined4 *)(lVar12 + 0x10) = *puVar1;
            *(undefined4 *)(lVar12 + 0x14) = uVar10;
            *(undefined4 *)(lVar12 + 0x18) = uVar4;
            *(undefined4 *)(lVar12 + 0x1c) = uVar5;
            *(undefined8 *)(lVar12 + 0x20) = uVar6;
            *(undefined8 *)(lVar12 + 0x28) = uVar7;
            *(undefined1 *)(lVar12 + 0x30) = 2;
          }
        }
      }
      lVar13 = lVar13 + 1;
      lVar15 = lVar15 + 0x40;
    } while (lVar13 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb58c6 FUN_147bb58c6 body=363 status=ok
// SIG undefined FUN_147bb58c6(void)

void FUN_147bb58c6(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar3 = FUN_147bc17ca(lVar1 + lVar9,&local_68,&local_58);
      if (cVar3 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar2 = (uint)((ulonglong)local_58 >> 0x10);
          uVar8 = (uint)local_58 & 0xffff;
          uVar4 = FUN_144a78877(((uint)local_58 << 0x10 | uVar8) +
                                (int)((ulonglong)local_58 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),local_4c);
          uVar4 = FUN_144a78877(uVar4,local_7c);
          iVar5 = FUN_147bb2e40(local_78,uVar4,&local_58);
          lVar6 = (longlong)iVar5 * 0x48 + *local_78;
          if (lVar6 != 0 && iVar5 != -1) {
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar1 + 0x10 + lVar9);
            *(undefined1 *)(lVar6 + 0x30) = 3;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar7 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb5a32 FUN_147bb5a32 body=363 status=ok
// SIG undefined FUN_147bb5a32(void)

void FUN_147bb5a32(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar3 = FUN_147bc17ca(lVar1 + lVar9,&local_68,&local_58);
      if (cVar3 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar2 = (uint)((ulonglong)local_58 >> 0x10);
          uVar8 = (uint)local_58 & 0xffff;
          uVar4 = FUN_144a78877(((uint)local_58 << 0x10 | uVar8) +
                                (int)((ulonglong)local_58 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),local_4c);
          uVar4 = FUN_144a78877(uVar4,local_7c);
          iVar5 = FUN_147bb2e40(local_78,uVar4,&local_58);
          lVar6 = (longlong)iVar5 * 0x48 + *local_78;
          if (lVar6 != 0 && iVar5 != -1) {
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar1 + 0x10 + lVar9);
            *(undefined1 *)(lVar6 + 0x30) = 4;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar7 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb5b9e FUN_147bb5b9e body=363 status=ok
// SIG undefined FUN_147bb5b9e(void)

void FUN_147bb5b9e(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar3 = FUN_147bc17ca(lVar1 + lVar9,&local_68,&local_58);
      if (cVar3 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar2 = (uint)((ulonglong)local_58 >> 0x10);
          uVar8 = (uint)local_58 & 0xffff;
          uVar4 = FUN_144a78877(((uint)local_58 << 0x10 | uVar8) +
                                (int)((ulonglong)local_58 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),local_4c);
          uVar4 = FUN_144a78877(uVar4,local_7c);
          iVar5 = FUN_147bb2e40(local_78,uVar4,&local_58);
          lVar6 = (longlong)iVar5 * 0x48 + *local_78;
          if (lVar6 != 0 && iVar5 != -1) {
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar1 + 0x10 + lVar9);
            *(undefined1 *)(lVar6 + 0x30) = 6;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar7 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb5d0a FUN_147bb5d0a body=363 status=ok
// SIG undefined FUN_147bb5d0a(void)

void FUN_147bb5d0a(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar3 = FUN_147bc17ca(lVar1 + lVar9,&local_68,&local_58);
      if (cVar3 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar2 = (uint)((ulonglong)local_58 >> 0x10);
          uVar8 = (uint)local_58 & 0xffff;
          uVar4 = FUN_144a78877(((uint)local_58 << 0x10 | uVar8) +
                                (int)((ulonglong)local_58 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),local_4c);
          uVar4 = FUN_144a78877(uVar4,local_7c);
          iVar5 = FUN_147bb2e40(local_78,uVar4,&local_58);
          lVar6 = (longlong)iVar5 * 0x48 + *local_78;
          if (lVar6 != 0 && iVar5 != -1) {
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar1 + 0x10 + lVar9);
            *(undefined1 *)(lVar6 + 0x30) = 7;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar7 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb5e76 FUN_147bb5e76 body=371 status=ok
// SIG undefined FUN_147bb5e76(void)

void FUN_147bb5e76(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_4;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_1;
      local_58 = 0;
      local_50 = 2;
      local_4c = 0xffffffff;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      cVar3 = FUN_147bc17ca(lVar1 + lVar9,&local_68,&local_58);
      if (cVar3 != '\0') {
        local_69 = '\0';
        FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
        if (local_69 == '\0') {
          local_7c = (uint)local_50;
          uVar2 = (uint)((ulonglong)local_58 >> 0x10);
          uVar8 = (uint)local_58 & 0xffff;
          uVar4 = FUN_144a78877(((uint)local_58 << 0x10 | uVar8) +
                                (int)((ulonglong)local_58 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),local_4c);
          uVar4 = FUN_144a78877(uVar4,local_7c);
          iVar5 = FUN_147bb2e40(local_78,uVar4,&local_58);
          lVar6 = (longlong)iVar5 * 0x48 + *local_78;
          if (lVar6 != 0 && iVar5 != -1) {
            uVar4 = *(undefined4 *)(lVar1 + 0x18 + lVar9);
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar1 + 0x10 + lVar9);
            *(undefined4 *)(lVar6 + 0x18) = uVar4;
            *(undefined1 *)(lVar6 + 0x30) = 5;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x30;
    } while (lVar7 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb5fea FUN_147bb5fea body=374 status=ok
// SIG undefined FUN_147bb5fea(void)

void FUN_147bb5fea(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  undefined1 local_70 [7];
  char local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = (int)param_1[1];
  local_78 = param_4;
  if (0 < iVar5) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar1 = *param_1;
      if (*(char *)(lVar1 + 0x10 + lVar9) == '\x01') {
        local_58 = 0;
        local_50 = 2;
        local_4c = 0xffffffff;
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        cVar3 = FUN_147bc17ca(lVar1 + lVar9,&local_68,&local_58);
        if (cVar3 != '\0') {
          local_69 = '\0';
          FUN_147bba4d2(param_3,local_70,&local_58,&local_69);
          if (local_69 == '\0') {
            local_7c = (uint)local_50;
            uVar2 = (uint)((ulonglong)local_58 >> 0x10);
            uVar8 = (uint)local_58 & 0xffff;
            uVar4 = FUN_144a78877(((uint)local_58 << 0x10 | uVar8) +
                                  (int)((ulonglong)local_58 >> 0x20) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),local_4c);
            uVar4 = FUN_144a78877(uVar4,local_7c);
            iVar5 = FUN_147bb2e40(local_78,uVar4,&local_58);
            lVar6 = (longlong)iVar5 * 0x48 + *local_78;
            if (lVar6 != 0 && iVar5 != -1) {
              *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar1 + 0x24 + lVar9);
              *(undefined1 *)(lVar6 + 0x30) = 8;
            }
          }
        }
        iVar5 = (int)param_1[1];
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar7 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb6161 FUN_147bb6161 body=281 status=ok
// SIG undefined FUN_147bb6161(void)

void FUN_147bb6161(undefined4 *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = (undefined4 *)0x0;
  local_28 = 0x1000000000;
  local_74 = 0xffffffff;
  FUN_147bbac08(&local_70,&local_74,param_2);
  iVar2 = (int)param_3[1];
  if (0 < iVar2) {
    lVar1 = 0;
    do {
      lVar4 = (longlong)*(int *)(*param_3 + lVar1 * 4);
      if (lVar4 != -1) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
          puVar3 = param_1;
        }
        puVar5 = local_30;
        if (local_30 == (undefined4 *)0x0) {
          puVar5 = &local_70;
        }
        puVar5[lVar4] = puVar3[lVar1];
        iVar2 = (int)param_3[1];
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar2);
  }
  if (&local_70 == param_1) {
    if (local_30 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_30 == (undefined4 *)0x0) {
      *(undefined8 *)(param_1 + 0xc) = local_40;
      *(undefined8 *)(param_1 + 0xe) = uStack_38;
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      *(undefined8 *)(param_1 + 4) = local_60;
      *(undefined8 *)(param_1 + 6) = uStack_58;
      *param_1 = local_70;
      param_1[1] = uStack_6c;
      param_1[2] = uStack_68;
      param_1[3] = uStack_64;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x10));
    }
    *(undefined4 **)(param_1 + 0x10) = local_30;
    param_1[0x12] = (undefined4)local_28;
    param_1[0x13] = local_28._4_4_;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb6282 FUN_147bb6282 body=309 status=ok
// SIG undefined FUN_147bb6282(void)

ulonglong FUN_147bb6282(longlong param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 unaff_RDI;
  bool bVar8;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((*(byte *)(param_1 + 0x150) & 1) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar2 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_147bb6296;
      bVar2 = DAT_14c8442b8 & 1;
    }
    if (bVar2 == 0) {
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),DAT_14cb0cc00);
      uVar7 = DAT_14caec4b4 | *(uint *)(param_1 + 0xb8) | 1 << ((byte)DAT_14c760db4 & 0x1f);
      do {
        uVar6 = -uVar7 & uVar7;
        iVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        if (uVar6 == 0) {
          iVar1 = 0;
        }
        lVar4 = FUN_147badf29(param_1 + 0x2c8,iVar1,uVar5 & 0xffffffff,1);
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x28) & 8) == 0)) {
          uVar5 = 0;
          goto LAB_147bb6296;
        }
        uVar3 = uVar6 ^ uVar7;
        bVar8 = uVar6 != uVar7;
        uVar7 = uVar3;
      } while (bVar8);
      uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
  }
LAB_147bb6296:
  return uVar5 & 0xffffffff;
}



// FUNCTION 147bb63b8 FUN_147bb63b8 body=83 status=ok
// SIG undefined FUN_147bb63b8(void)

bool FUN_147bb63b8(longlong param_1,int param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0x24 + *(longlong *)(param_1 + 0x180);
  if (*(int *)(param_1 + 0x188) <= param_2) {
    lVar2 = 0;
  }
  if (param_2 < 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    fVar1 = *(float *)(lVar2 + 0x10);
    if ((fVar1 != param_3) || (NAN(fVar1) || NAN(param_3))) {
      *(float *)(lVar2 + 0x10) = param_3;
      FUN_143572d0a(fVar1,lVar2);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 147bb640c FUN_147bb640c body=48 status=ok
// SIG undefined FUN_147bb640c(void)

void FUN_147bb640c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147bb8c9a(param_1);
  }
  FUN_147bb8c56(param_1 + 0x10);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
  return;
}



// FUNCTION 147bb64cc FUN_147bb64cc body=75 status=ok
// SIG undefined FUN_147bb64cc(void)

undefined8 FUN_147bb64cc(longlong param_1)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 0x94) & 0x10) == 0) {
    if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
      fVar1 = 1.0;
      uVar3 = 0;
      goto LAB_147bb6508;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x3b8))();
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x90);
  }
  uVar3 = (undefined4)(uVar2 >> 0x20);
  fVar1 = (float)uVar2;
  if (10.0 <= fVar1) {
    fVar1 = 10.0;
  }
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
LAB_147bb6508:
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 147bb6518 FUN_147bb6518 body=636 status=ok
// SIG undefined FUN_147bb6518(void)

void FUN_147bb6518(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  switchD_143c3d4dc::caseD_38();
  if (((*(byte *)(param_1 + 0x150) & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x2d0), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x2c8);
    lVar5 = 0;
    do {
      FUN_147bc1236(*(undefined8 *)(lVar4 + lVar5),param_2);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_14484255c(param_2,0x208);
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x188) * 0x14);
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x198) << 5);
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1a8) * 0x30);
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1b8) * 0x18);
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1d8) * 0x18);
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1e8) * 0x18);
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1f8) * 0x18);
    uVar2 = *(uint *)(param_1 + 0x188);
    if (uVar2 != 0) {
      lVar4 = 2;
      if (3 < uVar2) {
        uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        lVar4 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f)) * 2;
      }
      FUN_14484255c(param_2,lVar4);
    }
    uVar2 = *(uint *)(param_1 + 0x198);
    if (uVar2 != 0) {
      lVar4 = 2;
      if (3 < uVar2) {
        uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        lVar4 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f)) * 2;
      }
      FUN_14484255c(param_2,lVar4);
    }
    uVar2 = *(uint *)(param_1 + 0x1a8);
    if (uVar2 != 0) {
      lVar4 = 2;
      if (3 < uVar2) {
        uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        lVar4 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f)) * 2;
      }
      FUN_14484255c(param_2,lVar4);
    }
    uVar2 = *(uint *)(param_1 + 0x1b8);
    if (uVar2 != 0) {
      lVar4 = 2;
      if (3 < uVar2) {
        uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        lVar4 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f)) * 2;
      }
      FUN_14484255c(param_2,lVar4);
    }
    uVar2 = *(uint *)(param_1 + 0x1d8);
    if (uVar2 != 0) {
      lVar4 = 2;
      if (3 < uVar2) {
        uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        lVar4 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f)) * 2;
      }
      FUN_14484255c(param_2,lVar4);
    }
    uVar2 = *(uint *)(param_1 + 0x1e8);
    if (uVar2 != 0) {
      lVar4 = 2;
      if (3 < uVar2) {
        uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        lVar4 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f)) * 2;
      }
      FUN_14484255c(param_2,lVar4);
    }
    uVar2 = *(uint *)(param_1 + 0x1f8);
    if (uVar2 != 0) {
      lVar4 = 2;
      if (3 < uVar2) {
        uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        lVar4 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f)) * 2;
      }
      FUN_14484255c(param_2,lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 147bb6794 FUN_147bb6794 body=1113 status=ok
// SIG undefined FUN_147bb6794(void)

bool FUN_147bb6794(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [44];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  short local_6c;
  short local_6a [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6a[1] = 0;
  local_6a[2] = 0;
  local_6a[3] = 0;
  local_6a[4] = 0;
  local_6a[5] = 0;
  local_6a[6] = 0;
  local_6a[7] = 0;
  local_6a[8] = 0;
  lVar5 = (**(code **)(*param_1 + 0x2c0))();
  bVar6 = false;
  if ((lVar5 != 0) && (param_1[0x22] != 0)) {
    if ((*(byte *)(lVar5 + 0x1c0) & 0x20) == 0) {
      iVar3 = (**(code **)(*param_1 + 0x408))(param_1);
      iVar4 = (**(code **)(*(longlong *)param_1[0x22] + 0x408))();
      bVar6 = true;
      if (iVar3 == iVar4) {
        (**(code **)(*param_1 + 0x410))(param_1,local_6a);
        (**(code **)(*(longlong *)param_1[0x22] + 0x410))((longlong *)param_1[0x22],&local_6c);
        if (local_6a[0] == local_6c) {
          cVar1 = (**(code **)(*param_1 + 0x420))(param_1);
          cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x420))();
          if (cVar1 == cVar2) {
            cVar1 = (**(code **)(*param_1 + 0x428))(param_1);
            cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x428))();
            if (cVar1 == cVar2) {
              cVar1 = (**(code **)(*param_1 + 0x430))(param_1);
              cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x430))();
              if (cVar1 == cVar2) {
                cVar1 = (**(code **)(*param_1 + 0x438))(param_1);
                cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x438))();
                if (cVar1 == cVar2) {
                  cVar1 = (**(code **)(*param_1 + 0x440))(param_1);
                  cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x440))();
                  if (cVar1 == cVar2) {
                    cVar1 = (**(code **)(*param_1 + 0x448))(param_1);
                    cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x448))();
                    if (cVar1 == cVar2) {
                      cVar1 = (**(code **)(*param_1 + 0x450))(param_1);
                      cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x450))();
                      if (cVar1 == cVar2) {
                        cVar1 = (**(code **)(*param_1 + 0x458))(param_1);
                        cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x458))();
                        if (cVar1 == cVar2) {
                          cVar1 = (**(code **)(*param_1 + 0x478))(param_1);
                          cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x478))();
                          if (cVar1 == cVar2) {
                            cVar1 = (**(code **)(*param_1 + 0x400))(param_1);
                            cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x400))();
                            if (cVar1 == cVar2) {
                              iVar3 = (**(code **)(*param_1 + 0x558))(param_1);
                              iVar4 = (**(code **)(*(longlong *)param_1[0x22] + 0x558))();
                              if (iVar3 == iVar4) {
                                cVar1 = (**(code **)(*param_1 + 0x488))(param_1);
                                cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x488))();
                                if (cVar1 == cVar2) {
                                  cVar1 = (**(code **)(*param_1 + 0x508))(param_1);
                                  cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x508))();
                                  if (cVar1 == cVar2) {
                                    cVar1 = (**(code **)(*param_1 + 0x550))(param_1);
                                    cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x550))();
                                    if (cVar1 == cVar2) {
                                      (**(code **)(*param_1 + 0x4d0))(param_1,&local_74);
                                      (**(code **)(*(longlong *)param_1[0x22] + 0x4d0))
                                                ((longlong *)param_1[0x22],&local_7c);
                                      if ((ABS(local_74 - local_7c) <= 1e-08) &&
                                         (ABS(local_70 - local_78) <= 1e-08)) {
                                        cVar1 = (**(code **)(*param_1 + 0x4d8))(param_1);
                                        cVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x4d8))();
                                        if (cVar1 == cVar2) {
                                          (**(code **)(*param_1 + 0x4e0))(param_1,&local_84);
                                          (**(code **)(*(longlong *)param_1[0x22] + 0x4e0))
                                                    ((longlong *)param_1[0x22],&local_8c);
                                          if ((ABS(local_84 - local_8c) <= 1e-08) &&
                                             (ABS(local_80 - local_88) <= 1e-08)) {
                                            fVar7 = (float)(**(code **)(*(longlong *)param_1[0x22] +
                                                                       0x3f8))();
                                            fVar8 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
                                            if (ABS(fVar8 - fVar7) <= 1e-08) {
                                              fVar7 = (float)(**(code **)(*(longlong *)param_1[0x22]
                                                                         + 0x4e8))();
                                              fVar8 = (float)(**(code **)(*param_1 + 0x4e8))
                                                                       (param_1);
                                              bVar6 = 1e-08 < ABS(fVar8 - fVar7);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar6 = false;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb6c66 FUN_147bb6c66 body=53 status=ok
// SIG undefined FUN_147bb6c66(void)

undefined8 FUN_147bb6c66(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (lVar1 != 0) {
    uVar2 = FUN_147baea74(lVar1,param_2,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147bb6ca4 FUN_147bb6ca4 body=68 status=ok
// SIG undefined FUN_147bb6ca4(void)

void FUN_147bb6ca4(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_147bbe8c6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb6cea FUN_147bb6cea body=494 status=ok
// SIG undefined FUN_147bb6cea(void)

ulonglong FUN_147bb6cea(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0x23] == '\x01') {
    local_48 = 0;
    uStack_40 = 0;
    lVar1 = (**(code **)(*param_1 + 0x360))(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    local_58 = 0;
    uStack_50 = 0;
    lVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x360))();
    if (lVar2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar2);
    }
    if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar2);
    }
    if (lVar1 == lVar2) goto LAB_147bb6d83;
  }
  else {
LAB_147bb6d83:
    if (((int)param_1[0x4b] == 0) && ((*(byte *)(param_1 + 0x55) & 1) == 0)) {
      lVar1 = (**(code **)(*param_1 + 0x2f8))(param_1);
      lVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x2f8))();
      uVar4 = 0;
      if (lVar1 != lVar2) goto LAB_147bb6d8e;
      do {
        lVar1 = (**(code **)(*param_1 + 0x308))(param_1,uVar4);
        lVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x308))((longlong *)param_1[0x22],uVar4);
        if (lVar1 != lVar2) goto LAB_147bb6d8c;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 != 8);
      lVar1 = (**(code **)(*param_1 + 0x510))(param_1);
      lVar2 = (**(code **)(*(longlong *)param_1[0x22] + 0x510))();
      if (((((lVar1 == lVar2) && ((*(byte *)(param_1 + 0x42) & 0x3f) == 0)) &&
           ((*(byte *)((longlong)param_1 + 0x21c) & 0x30) == 0)) &&
          (((int)param_1[0x37] == 0 && ((int)param_1[0x31] == 0)))) &&
         (((int)param_1[0x33] == 0 && (((int)param_1[0x35] == 0 && ((int)param_1[0x3b] == 0)))))) {
        uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),(int)param_1[0x3f] == 0);
        goto LAB_147bb6d8e;
      }
    }
  }
LAB_147bb6d8c:
  uVar4 = 0;
LAB_147bb6d8e:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147bb6ee2 FUN_147bb6ee2 body=77 status=ok
// SIG undefined FUN_147bb6ee2(void)

void FUN_147bb6ee2(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb6f30 FUN_147bb6f30 body=3233 status=ok
// SIG undefined FUN_147bb6f30(void)

void FUN_147bb6f30(longlong *param_1,longlong *param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined7 uVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  char local_131;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_131 = param_3;
  if (param_2 == (longlong *)0x0) goto LAB_147bb7b8e;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  local_100 = (longlong *)(**(code **)(*param_2 + 0x2b8))(param_2);
  if (param_1[0x22] == 0) {
LAB_147bb7bc4:
    local_120 = 0;
  }
  else {
    lVar9 = FUN_1411eefea();
    lVar18 = param_1[0x22];
    if (lVar18 == 0) goto LAB_147bb7bc4;
    local_120 = 0;
    if ((lVar9 != 0) && (lVar10 = *(longlong *)(lVar18 + 0x10), lVar10 != 0)) {
      if (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38)) goto LAB_147bb7bc4;
      local_120 = 0;
      if (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30) {
        local_120 = lVar18;
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = 0;
  local_f8 = param_2;
  FUN_145fd968e(plVar8,&local_78);
  local_130 = (longlong *)(longlong)(int)uStack_70;
  local_108 = plVar8;
  if (0 < (longlong)local_130) {
    local_110 = param_1 + 0x3e;
    plVar12 = (longlong *)0x0;
    do {
      lVar18 = local_78;
      lVar9 = (longlong)plVar12 * 0x10;
      local_128 = (longlong *)(local_78 + lVar9);
      local_b4 = (undefined4)*(undefined8 *)(local_78 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(local_78 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(local_78 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(local_78 + 8 + lVar9);
      local_148 = 0;
      FUN_147bbe65c(plVar8,&local_b4,&local_90,&local_9c);
      local_b4 = (undefined4)*(undefined8 *)(lVar18 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(lVar18 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(lVar18 + 8 + lVar9);
      local_148 = 1;
      cVar7 = FUN_147bbe65c(param_1[0x22],&local_b4,&local_90,&local_9c);
      plVar8 = local_108;
      plVar17 = local_128;
      if ((local_131 == '\x02') || (cVar7 == '\0')) {
        lVar18 = *local_128;
LAB_147bb7197:
        local_b4 = (undefined4)lVar18;
        local_b0 = 0;
        local_ac = (undefined4)((ulonglong)lVar18 >> 0x20);
        local_a8 = *(undefined4 *)((longlong)local_128 + 0xc);
        local_a4 = (undefined1)local_128[1];
        local_148 = local_108 == local_100;
        cVar7 = FUN_147bbe65c(local_f8,&local_b4,&local_98,&local_a0);
        if (((cVar7 != '\0') && (local_98 != local_90)) && (local_a0 != local_9c)) {
          iVar4 = (int)param_1[0x3f];
          *(uint *)(param_1 + 0x3f) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1fc) < iVar4 + 1U) {
            FUN_1463eac36(local_110,iVar4);
          }
          lVar10 = local_98;
          lVar18 = *local_110;
          lVar11 = (longlong)iVar4 * 0x30;
          *(undefined8 *)(lVar18 + lVar11) = 0;
          *(undefined1 *)(lVar18 + 8 + lVar11) = 2;
          *(undefined4 *)(lVar18 + 0xc + lVar11) = 0xffffffff;
          puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar18 + 0x1c + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar5 = *(undefined4 *)((longlong)plVar17 + 4);
          lVar9 = plVar17[1];
          uVar6 = *(undefined4 *)((longlong)plVar17 + 0xc);
          puVar1 = (undefined4 *)(lVar18 + lVar11);
          *puVar1 = (int)*plVar17;
          puVar1[1] = uVar5;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar6;
          puVar2 = (undefined8 *)(lVar18 + 0x1c + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          *(longlong *)(lVar18 + lVar11 + 0x10) = lVar10;
          *(int *)(lVar18 + lVar11 + 0x18) = local_a0;
        }
      }
      else if (local_131 != '\0') {
        lVar18 = *local_128;
        if ((local_120 != 0) && (lVar9 = (longlong)*(int *)(local_120 + 0x1f8), 0 < lVar9)) {
          plVar13 = *(longlong **)(local_120 + 0x1f0);
          do {
            if (((lVar18 == *plVar13) &&
                (*(int *)((longlong)plVar13 + 0xc) == *(int *)((longlong)local_128 + 0xc))) &&
               ((char)plVar13[1] == (char)local_128[1])) {
              if (plVar13 != (longlong *)0x0) goto LAB_147bb72ae;
              break;
            }
            plVar13 = plVar13 + 6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        goto LAB_147bb7197;
      }
LAB_147bb72ae:
      plVar12 = (longlong *)((longlong)plVar12 + 1);
    } while (plVar12 != local_130);
  }
  bVar19 = (longlong)uStack_70 < 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (bVar19) {
    FUN_140504726(&local_78,0);
  }
  bVar19 = (longlong)uStack_80 < 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  local_118 = param_1;
  if (bVar19) {
    FUN_140504644(&local_88,0);
  }
  FUN_1417e1304(plVar8,&local_78,&local_88);
  local_128 = (longlong *)(longlong)(int)uStack_70;
  if (0 < (longlong)local_128) {
    local_130 = local_118 + 0x30;
    plVar12 = (longlong *)0x0;
    do {
      lVar18 = local_78;
      lVar9 = (longlong)plVar12 * 0x10;
      plVar17 = (longlong *)(local_78 + lVar9);
      local_b4 = (undefined4)*(undefined8 *)(local_78 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(local_78 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(local_78 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(local_78 + 8 + lVar9);
      uVar15 = 0;
      FUN_140fc5b24(plVar8,&local_b4,&local_b8,0);
      local_b4 = (undefined4)*(undefined8 *)(lVar18 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(lVar18 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(lVar18 + 8 + lVar9);
      uVar16 = (undefined7)((ulonglong)uVar15 >> 8);
      cVar7 = FUN_140fc5b24(local_118[0x22],&local_b4,&local_b8);
      if ((local_131 == '\x02') || (cVar7 == '\0')) {
        lVar18 = *plVar17;
LAB_147bb7490:
        local_b4 = (undefined4)lVar18;
        local_b0 = 0;
        local_ac = (undefined4)((ulonglong)lVar18 >> 0x20);
        local_a8 = *(undefined4 *)((longlong)plVar17 + 0xc);
        local_a4 = (undefined1)plVar17[1];
        cVar7 = FUN_140fc5b24(local_f8,&local_b4,&local_bc,CONCAT71(uVar16,plVar8 == local_100));
        if (cVar7 != '\0') {
          if ((local_bc != local_b8) || (NAN(local_bc) || NAN(local_b8))) {
            iVar4 = (int)local_118[0x31];
            lVar18 = (longlong)iVar4;
            *(uint *)(local_118 + 0x31) = iVar4 + 1U;
            if (*(uint *)((longlong)local_118 + 0x18c) < iVar4 + 1U) {
              FUN_1406a5a8c(local_130,iVar4);
            }
            lVar9 = *local_130;
            *(undefined8 *)(lVar9 + lVar18 * 0x24) = 0;
            *(undefined1 *)(lVar9 + 8 + lVar18 * 0x24) = 2;
            *(undefined4 *)(lVar9 + 0xc + lVar18 * 0x24) = 0xffffffff;
            puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar18 * 0x24);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(lVar9 + 0x20 + lVar18 * 0x24) = 0;
            lVar10 = plVar17[1];
            plVar13 = (longlong *)(lVar9 + lVar18 * 0x24);
            *plVar13 = *plVar17;
            plVar13[1] = lVar10;
            puVar2 = (undefined8 *)(lVar9 + 0x14 + lVar18 * 0x24);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(float *)(lVar9 + 0x10 + lVar18 * 0x24) = local_bc;
          }
        }
      }
      else if (local_131 != '\0') {
        lVar18 = *plVar17;
        if ((local_120 != 0) && (lVar9 = (longlong)*(int *)(local_120 + 0x188), 0 < lVar9)) {
          plVar13 = *(longlong **)(local_120 + 0x180);
          do {
            if (((lVar18 == *plVar13) &&
                (*(int *)((longlong)plVar13 + 0xc) == *(int *)((longlong)plVar17 + 0xc))) &&
               ((char)plVar13[1] == (char)plVar17[1])) {
              if (plVar13 != (longlong *)0x0) goto LAB_147bb7579;
              break;
            }
            plVar13 = (longlong *)((longlong)plVar13 + 0x24);
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        goto LAB_147bb7490;
      }
LAB_147bb7579:
      plVar12 = (longlong *)((longlong)plVar12 + 1);
    } while (plVar12 != local_128);
  }
  bVar19 = (longlong)uStack_70 < 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (bVar19) {
    FUN_140504726(&local_78,0);
  }
  plVar12 = local_118;
  bVar19 = (longlong)uStack_80 < 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if (bVar19) {
    FUN_140504644(&local_88,0);
  }
  local_130 = (longlong *)(longlong)(int)uStack_70;
  if (0 < (longlong)local_130) {
    local_110 = plVar12 + 0x32;
    plVar17 = (longlong *)0x0;
    do {
      lVar18 = local_78;
      lVar9 = (longlong)plVar17 * 0x10;
      local_128 = (longlong *)(local_78 + lVar9);
      local_b4 = (undefined4)*(undefined8 *)(local_78 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(local_78 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(local_78 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(local_78 + 8 + lVar9);
      uVar15 = 0;
      FUN_140fc5922(plVar8,&local_b4,&local_cc,0);
      local_b4 = (undefined4)*(undefined8 *)(lVar18 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(lVar18 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(lVar18 + 8 + lVar9);
      uVar16 = (undefined7)((ulonglong)uVar15 >> 8);
      cVar7 = FUN_140fc5922(plVar12[0x22],&local_b4,&local_cc);
      plVar8 = local_108;
      plVar13 = local_128;
      if ((local_131 == '\x02') || (cVar7 == '\0')) {
        lVar18 = *local_128;
LAB_147bb773f:
        local_b4 = (undefined4)lVar18;
        local_b0 = 0;
        local_ac = (undefined4)((ulonglong)lVar18 >> 0x20);
        local_a8 = *(undefined4 *)((longlong)local_128 + 0xc);
        local_a4 = (undefined1)local_128[1];
        cVar7 = FUN_140fc5922(local_f8,&local_b4,&local_dc,CONCAT71(uVar16,local_108 == local_100));
        if (cVar7 != '\0') {
          if ((local_dc == local_cc) && (!NAN(local_dc) && !NAN(local_cc))) {
            if ((fStack_d8 == local_c8) && (!NAN(fStack_d8) && !NAN(local_c8))) {
              if ((fStack_d4 == local_c4) && (!NAN(fStack_d4) && !NAN(local_c4))) {
                if ((fStack_d0 == local_c0) && (!NAN(fStack_d0) && !NAN(local_c0)))
                goto LAB_147bb7821;
              }
            }
          }
          iVar4 = (int)plVar12[0x33];
          *(uint *)(plVar12 + 0x33) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar12 + 0x19c) < iVar4 + 1U) {
            FUN_1406a5838(local_110,iVar4);
          }
          lVar18 = *local_110;
          lVar10 = (longlong)iVar4 * 0x30;
          *(undefined8 *)(lVar18 + lVar10) = 0;
          *(undefined1 *)(lVar18 + 8 + lVar10) = 2;
          *(undefined4 *)(lVar18 + 0xc + lVar10) = 0xffffffff;
          puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar10);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar10);
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar9 = plVar13[1];
          *(longlong *)(lVar18 + lVar10) = *plVar13;
          ((longlong *)(lVar18 + lVar10))[1] = lVar9;
          puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar10);
          *puVar2 = 0;
          puVar2[1] = 0;
          pfVar3 = (float *)(lVar18 + 0x10 + lVar10);
          *pfVar3 = local_dc;
          pfVar3[1] = fStack_d8;
          pfVar3[2] = fStack_d4;
          pfVar3[3] = fStack_d0;
        }
      }
      else if (local_131 != '\0') {
        lVar18 = *local_128;
        if ((local_120 != 0) && (lVar9 = (longlong)*(int *)(local_120 + 0x198), 0 < lVar9)) {
          plVar14 = *(longlong **)(local_120 + 400);
          do {
            if (((lVar18 == *plVar14) &&
                (*(int *)((longlong)plVar14 + 0xc) == *(int *)((longlong)local_128 + 0xc))) &&
               ((char)plVar14[1] == (char)local_128[1])) {
              if (plVar14 != (longlong *)0x0) goto LAB_147bb7821;
              break;
            }
            plVar14 = plVar14 + 6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        goto LAB_147bb773f;
      }
LAB_147bb7821:
      plVar17 = (longlong *)((longlong)plVar17 + 1);
    } while (plVar17 != local_130);
  }
  bVar19 = (longlong)uStack_70 < 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (bVar19) {
    FUN_140504726(&local_78,0);
  }
  bVar19 = (longlong)uStack_80 < 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if (bVar19) {
    FUN_140504644(&local_88,0);
  }
  local_e8 = 0;
  local_f0 = 0;
  local_128 = (longlong *)(longlong)(int)uStack_70;
  if (0 < (longlong)local_128) {
    local_130 = local_118 + 0x36;
    plVar12 = (longlong *)0x0;
    do {
      lVar18 = local_78;
      lVar9 = (longlong)plVar12 * 0x10;
      plVar17 = (longlong *)(local_78 + lVar9);
      local_b4 = (undefined4)*(undefined8 *)(local_78 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(local_78 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(local_78 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(local_78 + 8 + lVar9);
      (**(code **)(*plVar8 + 0x3c8))(plVar8,&local_b4,&local_e8,0);
      local_b4 = (undefined4)*(undefined8 *)(lVar18 + lVar9);
      local_b0 = 0;
      local_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar9) >> 0x20);
      local_a8 = *(undefined4 *)(lVar18 + 0xc + lVar9);
      local_a4 = *(undefined1 *)(lVar18 + 8 + lVar9);
      cVar7 = (**(code **)(*(longlong *)local_118[0x22] + 0x3c8))
                        ((longlong *)local_118[0x22],&local_b4,&local_e8);
      if ((local_131 == '\x02') || (cVar7 == '\0')) {
        lVar18 = *plVar17;
LAB_147bb7a40:
        local_b4 = (undefined4)lVar18;
        local_b0 = 0;
        local_ac = (undefined4)((ulonglong)lVar18 >> 0x20);
        local_a8 = *(undefined4 *)((longlong)plVar17 + 0xc);
        local_a4 = (undefined1)plVar17[1];
        cVar7 = (**(code **)(*local_f8 + 0x3c8))(local_f8,&local_b4,&local_f0);
        if ((cVar7 != '\0') && (local_f0 != local_e8)) {
          iVar4 = (int)local_118[0x37];
          lVar18 = (longlong)iVar4;
          *(uint *)(local_118 + 0x37) = iVar4 + 1U;
          if (*(uint *)((longlong)local_118 + 0x1bc) < iVar4 + 1U) {
            FUN_1417e03e8(local_130,iVar4);
          }
          lVar11 = local_f0;
          lVar9 = *local_130;
          *(undefined8 *)(lVar9 + lVar18 * 0x28) = 0;
          *(undefined1 *)(lVar9 + 8 + lVar18 * 0x28) = 2;
          *(undefined4 *)(lVar9 + 0xc + lVar18 * 0x28) = 0xffffffff;
          puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar18 * 0x28);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar9 + 0x20 + lVar18 * 0x28) = 0;
          uVar5 = *(undefined4 *)((longlong)plVar17 + 4);
          lVar10 = plVar17[1];
          uVar6 = *(undefined4 *)((longlong)plVar17 + 0xc);
          puVar1 = (undefined4 *)(lVar9 + lVar18 * 0x28);
          *puVar1 = (int)*plVar17;
          puVar1[1] = uVar5;
          puVar1[2] = (int)lVar10;
          puVar1[3] = uVar6;
          puVar2 = (undefined8 *)(lVar9 + 0x18 + lVar18 * 0x28);
          *puVar2 = 0;
          puVar2[1] = 0;
          if ((local_f0 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_f0);
          }
          *(longlong *)(lVar18 * 0x28 + 0x10 + lVar9) = lVar11;
        }
      }
      else if (local_131 != '\0') {
        lVar18 = *plVar17;
        if ((local_120 != 0) && (lVar9 = (longlong)*(int *)(local_120 + 0x1b8), 0 < lVar9)) {
          plVar13 = *(longlong **)(local_120 + 0x1b0);
          do {
            if (((lVar18 == *plVar13) &&
                (*(int *)((longlong)plVar13 + 0xc) == *(int *)((longlong)plVar17 + 0xc))) &&
               ((char)plVar13[1] == (char)plVar17[1])) {
              if (plVar13 != (longlong *)0x0) goto LAB_147bb7b3c;
              break;
            }
            plVar13 = plVar13 + 5;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        goto LAB_147bb7a40;
      }
LAB_147bb7b3c:
      plVar12 = (longlong *)((longlong)plVar12 + 1);
    } while (plVar12 != local_128);
  }
  FUN_1403ba93c(local_118);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_147bb7b8e:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bb7bd2 FUN_147bb7bd2 body=45 status=ok
// SIG undefined FUN_147bb7bd2(void)

longlong FUN_147bb7bd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1401fc27a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bb7c00 FUN_147bb7c00 body=45 status=ok
// SIG undefined FUN_147bb7c00(void)

longlong FUN_147bb7c00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1401fc27a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bb7c2e FUN_147bb7c2e body=78 status=ok
// SIG undefined FUN_147bb7c2e(void)

undefined8 FUN_147bb7c2e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb7cb6 FUN_147bb7cb6 body=48 status=ok
// SIG undefined FUN_147bb7cb6(void)

void FUN_147bb7cb6(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bb7cfc FUN_147bb7cfc body=143 status=ok
// SIG undefined FUN_147bb7cfc(void)

undefined8 FUN_147bb7cfc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined1 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(puVar1 + 8);
      uVar3 = *(undefined4 *)(puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 0x18);
      uVar5 = *(undefined4 *)(puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x30);
      uVar3 = *(undefined4 *)(puVar1 + 0x3c);
      uVar4 = *(undefined4 *)(puVar1 + 0x40);
      uVar5 = *(undefined4 *)(puVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bb7db4 FUN_147bb7db4 body=59 status=ok
// SIG undefined FUN_147bb7db4(void)

undefined8 FUN_147bb7db4(longlong *param_1)

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



// FUNCTION 147bb7e52 FUN_147bb7e52 body=52 status=ok
// SIG undefined FUN_147bb7e52(void)

void FUN_147bb7e52(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147bb7f18 FUN_147bb7f18 body=59 status=ok
// SIG undefined FUN_147bb7f18(void)

undefined8 FUN_147bb7f18(longlong *param_1)

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



// FUNCTION 147bb804a FUN_147bb804a body=59 status=ok
// SIG undefined FUN_147bb804a(void)

undefined8 FUN_147bb804a(longlong *param_1)

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



// FUNCTION 147bb81c6 FUN_147bb81c6 body=59 status=ok
// SIG undefined FUN_147bb81c6(void)

undefined8 FUN_147bb81c6(longlong *param_1)

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



// FUNCTION 147bb829c FUN_147bb829c body=120 status=ok
// SIG undefined FUN_147bb829c(void)

undefined1 FUN_147bb829c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    bVar9 = DAT_14c950c29;
    do {
      puVar4 = (undefined4 *)(param_3 + lVar11);
      uVar5 = puVar4[1];
      uVar6 = puVar4[2];
      uVar7 = puVar4[3];
      puVar1 = (undefined4 *)(param_2 + lVar11);
      *puVar1 = *puVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
      if ((bVar9 & 1) != 0) {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
          bVar9 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar11;
      *(longlong *)(lVar2 + 0x10) = lVar10;
      puVar3 = (undefined8 *)(param_3 + 0x18 + lVar11);
      uVar8 = puVar3[1];
      *(undefined8 *)(lVar2 + 0x18) = *puVar3;
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      lVar11 = lVar11 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bb833c FUN_147bb833c body=59 status=ok
// SIG undefined FUN_147bb833c(void)

undefined8 FUN_147bb833c(longlong *param_1)

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



// FUNCTION 147bb842e FUN_147bb842e body=120 status=ok
// SIG undefined FUN_147bb842e(void)

undefined1 FUN_147bb842e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    bVar9 = DAT_14c950c29;
    do {
      puVar4 = (undefined4 *)(param_3 + lVar11);
      uVar5 = puVar4[1];
      uVar6 = puVar4[2];
      uVar7 = puVar4[3];
      puVar1 = (undefined4 *)(param_2 + lVar11);
      *puVar1 = *puVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
      if ((bVar9 & 1) != 0) {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
          bVar9 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar11;
      *(longlong *)(lVar2 + 0x10) = lVar10;
      puVar3 = (undefined8 *)(param_3 + 0x18 + lVar11);
      uVar8 = puVar3[1];
      *(undefined8 *)(lVar2 + 0x18) = *puVar3;
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      lVar11 = lVar11 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bb84ce FUN_147bb84ce body=59 status=ok
// SIG undefined FUN_147bb84ce(void)

undefined8 FUN_147bb84ce(longlong *param_1)

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



// FUNCTION 147bb85a4 FUN_147bb85a4 body=120 status=ok
// SIG undefined FUN_147bb85a4(void)

undefined1 FUN_147bb85a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    bVar9 = DAT_14c950c29;
    do {
      puVar4 = (undefined4 *)(param_3 + lVar11);
      uVar5 = puVar4[1];
      uVar6 = puVar4[2];
      uVar7 = puVar4[3];
      puVar1 = (undefined4 *)(param_2 + lVar11);
      *puVar1 = *puVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
      if ((bVar9 & 1) != 0) {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
          bVar9 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar11;
      *(longlong *)(lVar2 + 0x10) = lVar10;
      puVar3 = (undefined8 *)(param_3 + 0x18 + lVar11);
      uVar8 = puVar3[1];
      *(undefined8 *)(lVar2 + 0x18) = *puVar3;
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      lVar11 = lVar11 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bb8644 FUN_147bb8644 body=59 status=ok
// SIG undefined FUN_147bb8644(void)

undefined8 FUN_147bb8644(longlong *param_1)

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



// FUNCTION 147bb871a FUN_147bb871a body=120 status=ok
// SIG undefined FUN_147bb871a(void)

undefined1 FUN_147bb871a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    bVar9 = DAT_14c950c29;
    do {
      puVar4 = (undefined4 *)(param_3 + lVar11);
      uVar5 = puVar4[1];
      uVar6 = puVar4[2];
      uVar7 = puVar4[3];
      puVar1 = (undefined4 *)(param_2 + lVar11);
      *puVar1 = *puVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
      if ((bVar9 & 1) != 0) {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
          bVar9 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar11;
      *(longlong *)(lVar2 + 0x10) = lVar10;
      puVar3 = (undefined8 *)(param_3 + 0x18 + lVar11);
      uVar8 = puVar3[1];
      *(undefined8 *)(lVar2 + 0x18) = *puVar3;
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      lVar11 = lVar11 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bb87ba FUN_147bb87ba body=59 status=ok
// SIG undefined FUN_147bb87ba(void)

undefined8 FUN_147bb87ba(longlong *param_1)

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



// FUNCTION 147bb88b0 FUN_147bb88b0 body=128 status=ok
// SIG undefined FUN_147bb88b0(void)

undefined1 FUN_147bb88b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    bVar9 = DAT_14c950c29;
    do {
      puVar4 = (undefined4 *)(param_3 + lVar11);
      uVar5 = puVar4[1];
      uVar6 = puVar4[2];
      uVar7 = puVar4[3];
      puVar1 = (undefined4 *)(param_2 + lVar11);
      *puVar1 = *puVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
      if ((bVar9 & 1) != 0) {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + 0x10 + lVar11);
          bVar9 = DAT_14c950c29;
        }
      }
      lVar2 = param_2 + lVar11;
      *(longlong *)(lVar2 + 0x10) = lVar10;
      puVar3 = (undefined8 *)(param_3 + 0x18 + lVar11);
      uVar8 = puVar3[1];
      *(undefined8 *)(lVar2 + 0x18) = *puVar3;
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_3 + 0x28 + lVar11);
      lVar11 = lVar11 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147bb8958 FUN_147bb8958 body=59 status=ok
// SIG undefined FUN_147bb8958(void)

undefined8 FUN_147bb8958(longlong *param_1)

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



// FUNCTION 147bb8a66 FUN_147bb8a66 body=59 status=ok
// SIG undefined FUN_147bb8a66(void)

undefined8 FUN_147bb8a66(longlong *param_1)

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



// FUNCTION 147bb8b3c FUN_147bb8b3c body=54 status=ok
// SIG undefined FUN_147bb8b3c(void)

undefined1 FUN_147bb8b3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147bb8b9a FUN_147bb8b9a body=59 status=ok
// SIG undefined FUN_147bb8b9a(void)

undefined8 FUN_147bb8b9a(longlong *param_1)

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



// FUNCTION 147bb8be0 FUN_147bb8be0 body=37 status=ok
// SIG undefined FUN_147bb8be0(void)

void FUN_147bb8be0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147bb8c56 FUN_147bb8c56 body=67 status=ok
// SIG undefined FUN_147bb8c56(void)

void FUN_147bb8c56(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147bb8cca(param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_147bb8cca(param_1 + 0x10);
  return;
}



// FUNCTION 147bb8c9a FUN_147bb8c9a body=48 status=ok
// SIG undefined FUN_147bb8c9a(void)

void FUN_147bb8c9a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,4);
  }
  return;
}



// FUNCTION 147bb8cca FUN_147bb8cca body=48 status=ok
// SIG undefined FUN_147bb8cca(void)

void FUN_147bb8cca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147bb8cfa FUN_147bb8cfa body=232 status=ok
// SIG undefined FUN_147bb8cfa(void)

ulonglong FUN_147bb8cfa(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0xf8) != 0) {
    uVar3 = *param_2;
    iVar6 = (uVar3 << 0x10 | uVar3 & 0xffff) + param_2[2] +
            ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4);
    uVar7 = ~(iVar6 * 0x8000) + iVar6;
    uVar7 = ((int)uVar7 >> 10 ^ uVar7) * 9;
    uVar7 = (int)uVar7 >> 6 ^ uVar7;
    uVar7 = ~(uVar7 << 0xb) + uVar7;
    uVar2 = *(ushort *)
             (*(longlong *)(param_1 + 0xf0) +
             (longlong)(int)(*(int *)(param_1 + 0xf8) - 1U & ((int)uVar7 >> 0x10 ^ uVar7)) * 2);
    if (uVar2 != 0) {
      uVar7 = uVar2 - 1;
      lVar4 = *(longlong *)(param_1 + 0xe0);
      do {
        uVar5 = (ulonglong)uVar7;
        if ((((*(uint *)(lVar4 + uVar5 * 0x14) == uVar3) &&
             (*(uint *)(lVar4 + 8 + uVar5 * 0x14) == param_2[2])) &&
            (lVar1 = lVar4 + uVar5 * 0x14, param_2[3] == (int)*(short *)(lVar1 + 0xc))) &&
           (*(ushort *)(lVar1 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          return uVar5;
        }
        uVar2 = *(ushort *)(lVar4 + 0xe + uVar5 * 0x14);
        uVar7 = uVar2 & 0x3fff;
      } while ((uVar2 & 0x3fff) != 0);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147bb8de2 FUN_147bb8de2 body=236 status=ok
// SIG undefined FUN_147bb8de2(void)

ulonglong FUN_147bb8de2(longlong param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar2 = *param_2;
    iVar4 = (uVar2 << 0x10 | uVar2 & 0xffff) + param_2[2] +
            ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10) + ((uVar2 & 0xffff) >> 4);
    uVar5 = ~(iVar4 * 0x8000) + iVar4;
    uVar5 = ((int)uVar5 >> 10 ^ uVar5) * 9;
    uVar5 = (int)uVar5 >> 6 ^ uVar5;
    uVar5 = ~(uVar5 << 0xb) + uVar5;
    uVar1 = *(ushort *)
             (*(longlong *)(param_1 + 0x130) +
             (longlong)(int)(*(int *)(param_1 + 0x138) - 1U & ((int)uVar5 >> 0x10 ^ uVar5)) * 2);
    if (uVar1 != 0) {
      uVar5 = uVar1 - 1;
      lVar3 = *(longlong *)(param_1 + 0x120);
      do {
        lVar6 = (ulonglong)uVar5 * 0x30;
        if ((((*(uint *)(lVar3 + lVar6) == uVar2) && (*(uint *)(lVar3 + 8 + lVar6) == param_2[2]))
            && (param_2[3] == (int)*(short *)(lVar3 + lVar6 + 0xc))) &&
           (*(ushort *)(lVar3 + lVar6 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          return (ulonglong)uVar5;
        }
        uVar1 = *(ushort *)(lVar3 + 0xe + lVar6);
        uVar5 = uVar1 & 0x3fff;
      } while ((uVar1 & 0x3fff) != 0);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147bb8ece FUN_147bb8ece body=232 status=ok
// SIG undefined FUN_147bb8ece(void)

ulonglong FUN_147bb8ece(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x198) != 0) {
    uVar3 = *param_2;
    iVar6 = (uVar3 << 0x10 | uVar3 & 0xffff) + param_2[2] +
            ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4);
    uVar7 = ~(iVar6 * 0x8000) + iVar6;
    uVar7 = ((int)uVar7 >> 10 ^ uVar7) * 9;
    uVar7 = (int)uVar7 >> 6 ^ uVar7;
    uVar7 = ~(uVar7 << 0xb) + uVar7;
    uVar2 = *(ushort *)
             (*(longlong *)(param_1 + 400) +
             (longlong)(int)(*(int *)(param_1 + 0x198) - 1U & ((int)uVar7 >> 0x10 ^ uVar7)) * 2);
    if (uVar2 != 0) {
      uVar7 = uVar2 - 1;
      lVar4 = *(longlong *)(param_1 + 0x180);
      do {
        uVar5 = (ulonglong)uVar7;
        if ((((*(uint *)(lVar4 + uVar5 * 0x18) == uVar3) &&
             (*(uint *)(lVar4 + 8 + uVar5 * 0x18) == param_2[2])) &&
            (lVar1 = lVar4 + uVar5 * 0x18, param_2[3] == (int)*(short *)(lVar1 + 0xc))) &&
           (*(ushort *)(lVar1 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          return uVar5;
        }
        uVar2 = *(ushort *)(lVar4 + 0xe + uVar5 * 0x18);
        uVar7 = uVar2 & 0x3fff;
      } while ((uVar2 & 0x3fff) != 0);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147bb8fb6 FUN_147bb8fb6 body=800 status=ok
// SIG undefined FUN_147bb8fb6(void)

void FUN_147bb8fb6(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    uVar14 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      uVar24 = (ulonglong)uVar14;
      local_80 = uVar24;
      while (uVar16 = uVar14 * 2 + 1, (int)uVar16 < (int)param_2) {
        uVar21 = uVar14 * 2 + 2;
        uVar14 = uVar16;
        if ((int)uVar21 < (int)param_2) {
          uVar15 = FUN_14008ea61(param_1 + (longlong)(int)uVar21 * 6);
          uVar16 = FUN_14008ea61(param_1 + (longlong)(int)uVar16 * 6);
          if (uVar16 <= uVar15) {
            uVar14 = uVar21;
          }
        }
        puVar17 = param_1 + (longlong)(int)uVar24 * 6;
        puVar23 = param_1 + (longlong)(int)uVar14 * 6;
        uVar16 = FUN_14008ea61(puVar17);
        uVar21 = FUN_14008ea61(puVar23);
        if (uVar21 <= uVar16) break;
        uVar3 = *puVar17;
        uVar4 = puVar17[1];
        local_68 = puVar17[2];
        uStack_60 = puVar17[3];
        local_58 = puVar17[4];
        uStack_50 = puVar17[5];
        uVar5 = *puVar23;
        uVar6 = puVar23[1];
        uVar7 = puVar23[2];
        uVar8 = puVar23[3];
        uVar9 = puVar23[5];
        puVar17[4] = puVar23[4];
        puVar17[5] = uVar9;
        puVar17[2] = uVar7;
        puVar17[3] = uVar8;
        *puVar17 = uVar5;
        puVar17[1] = uVar6;
        local_78._0_4_ = (undefined4)uVar3;
        local_78._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_70._0_4_ = (undefined4)uVar4;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar23[4] = local_58;
        puVar23[5] = uStack_50;
        puVar23[2] = local_68;
        puVar23[3] = uStack_60;
        *(undefined4 *)puVar23 = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
        *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
        uVar24 = (ulonglong)uVar14;
        local_78 = uVar3;
        uStack_70 = uVar4;
      }
      uVar14 = (int)local_80 - 1;
    } while ((int)local_80 != 0);
    if (1 < (int)param_2) {
      uVar24 = (ulonglong)param_2 - 1;
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      uVar7 = param_1[4];
      uVar8 = param_1[5];
      uVar9 = param_1[uVar24 * 6];
      uVar10 = (param_1 + uVar24 * 6)[1];
      uVar11 = param_1[uVar24 * 6 + 2];
      uVar12 = (param_1 + uVar24 * 6 + 2)[1];
      uVar13 = (param_1 + uVar24 * 6 + 4)[1];
      param_1[4] = param_1[uVar24 * 6 + 4];
      param_1[5] = uVar13;
      param_1[2] = uVar11;
      param_1[3] = uVar12;
      *param_1 = uVar9;
      param_1[1] = uVar10;
      local_78._0_4_ = (undefined4)uVar3;
      local_78._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_70._0_4_ = (undefined4)uVar4;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_68._0_4_ = (undefined4)uVar5;
      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar6;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_58._0_4_ = (undefined4)uVar7;
      local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar8;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      puVar17 = param_1 + uVar24 * 6 + 4;
      *(undefined4 *)puVar17 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
      puVar17 = param_1 + uVar24 * 6 + 2;
      *(undefined4 *)puVar17 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar17 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_60._4_4_;
      puVar17 = param_1 + uVar24 * 6;
      *(undefined4 *)puVar17 = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
      *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
      local_78 = uVar3;
      uStack_70 = uVar4;
      local_68 = uVar5;
      uStack_60 = uVar6;
      local_58 = uVar7;
      uStack_50 = uVar8;
      if (param_2 != 2) {
        do {
          iVar18 = 0;
          iVar20 = 1;
          iVar22 = 0;
          do {
            iVar18 = iVar18 + 2;
            iVar19 = iVar20;
            if ((longlong)iVar18 < (longlong)uVar24) {
              uVar14 = FUN_14008ea61(param_1 + (longlong)iVar18 * 6);
              uVar16 = FUN_14008ea61(param_1 + (longlong)iVar20 * 6);
              if (uVar16 <= uVar14) {
                iVar19 = iVar18;
              }
            }
            puVar23 = param_1 + (longlong)iVar22 * 6;
            puVar17 = param_1 + (longlong)iVar19 * 6;
            uVar14 = FUN_14008ea61(puVar23);
            uVar16 = FUN_14008ea61(puVar17);
            if (uVar16 <= uVar14) break;
            uVar3 = *puVar23;
            uVar4 = puVar23[1];
            uVar5 = puVar23[2];
            uVar6 = puVar23[3];
            uVar7 = puVar23[4];
            uVar8 = puVar23[5];
            uVar9 = *puVar17;
            uVar10 = puVar17[1];
            uVar11 = puVar17[2];
            uVar12 = puVar17[3];
            uVar13 = puVar17[5];
            puVar23[4] = puVar17[4];
            puVar23[5] = uVar13;
            puVar23[2] = uVar11;
            puVar23[3] = uVar12;
            *puVar23 = uVar9;
            puVar23[1] = uVar10;
            local_78._0_4_ = (undefined4)uVar3;
            local_78._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar4;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            local_68._0_4_ = (undefined4)uVar5;
            local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar6;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_58._0_4_ = (undefined4)uVar7;
            local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar8;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
            *(undefined4 *)(puVar17 + 4) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar17 + 0x24) = local_58._4_4_;
            *(undefined4 *)(puVar17 + 5) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar17 + 0x2c) = uStack_50._4_4_;
            *(undefined4 *)(puVar17 + 2) = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar17 + 0x14) = local_68._4_4_;
            *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_60._4_4_;
            *(undefined4 *)puVar17 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
            iVar18 = iVar19 * 2;
            iVar20 = iVar19 * 2 + 1;
            local_78 = uVar3;
            uStack_70 = uVar4;
            local_68 = uVar5;
            uStack_60 = uVar6;
            local_58 = uVar7;
            uStack_50 = uVar8;
            iVar22 = iVar19;
          } while ((longlong)iVar20 < (longlong)uVar24);
          uVar1 = uVar24 - 1;
          uVar3 = *param_1;
          uVar4 = param_1[1];
          uVar5 = param_1[2];
          uVar6 = param_1[3];
          uVar7 = param_1[4];
          uVar8 = param_1[5];
          uVar9 = param_1[uVar1 * 6];
          uVar10 = (param_1 + uVar1 * 6)[1];
          uVar11 = param_1[uVar1 * 6 + 2];
          uVar12 = (param_1 + uVar1 * 6 + 2)[1];
          uVar13 = (param_1 + uVar1 * 6 + 4)[1];
          param_1[4] = param_1[uVar1 * 6 + 4];
          param_1[5] = uVar13;
          param_1[2] = uVar11;
          param_1[3] = uVar12;
          *param_1 = uVar9;
          param_1[1] = uVar10;
          local_78._0_4_ = (undefined4)uVar3;
          local_78._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar4;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          local_68._0_4_ = (undefined4)uVar5;
          local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar6;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_58._0_4_ = (undefined4)uVar7;
          local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar8;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          puVar17 = param_1 + uVar1 * 6 + 4;
          *(undefined4 *)puVar17 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
          puVar17 = param_1 + uVar1 * 6 + 2;
          *(undefined4 *)puVar17 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar17 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_60._4_4_;
          puVar17 = param_1 + uVar1 * 6;
          *(undefined4 *)puVar17 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar17 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_70._4_4_;
          bVar2 = 2 < uVar24;
          uVar24 = uVar1;
          local_78 = uVar3;
          uStack_70 = uVar4;
          local_68 = uVar5;
          uStack_60 = uVar6;
          local_58 = uVar7;
          uStack_50 = uVar8;
        } while (bVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb92d7 FUN_147bb92d7 body=656 status=ok
// SIG undefined FUN_147bb92d7(void)

void FUN_147bb92d7(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    uVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      uVar16 = (ulonglong)uVar8;
      local_70 = uVar16;
      while (uVar10 = uVar8 * 2 + 1, (int)uVar10 < (int)param_2) {
        uVar14 = uVar8 * 2 + 2;
        uVar8 = uVar10;
        if ((int)uVar14 < (int)param_2) {
          uVar9 = FUN_14008ea61(param_1 + (longlong)(int)uVar14 * 3);
          uVar10 = FUN_14008ea61(param_1 + (longlong)(int)uVar10 * 3);
          if (uVar10 <= uVar9) {
            uVar8 = uVar14;
          }
        }
        puVar2 = param_1 + (longlong)(int)uVar16 * 3;
        puVar3 = param_1 + (longlong)(int)uVar8 * 3;
        uVar10 = FUN_14008ea61(puVar2);
        uVar14 = FUN_14008ea61(puVar3);
        if (uVar14 <= uVar10) break;
        local_58 = puVar2[2];
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2[2] = puVar3[2];
        uVar7 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar7;
        puVar3[2] = local_58;
        local_68._0_4_ = (undefined4)uVar5;
        local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar6;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)puVar3 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
        *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
        uVar16 = (ulonglong)uVar8;
        local_68 = uVar5;
        uStack_60 = uVar6;
      }
      uVar8 = (int)local_70 - 1;
    } while ((int)local_70 != 0);
    if (1 < (int)param_2) {
      uVar16 = (ulonglong)param_2 - 1;
      local_58 = param_1[2];
      uVar5 = *param_1;
      uVar6 = param_1[1];
      param_1[2] = param_1[uVar16 * 3 + 2];
      uVar7 = (param_1 + uVar16 * 3)[1];
      *param_1 = param_1[uVar16 * 3];
      param_1[1] = uVar7;
      param_1[uVar16 * 3 + 2] = local_58;
      local_68._0_4_ = (undefined4)uVar5;
      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar6;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = param_1 + uVar16 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar5;
      uStack_60 = uVar6;
      if (param_2 != 2) {
        do {
          iVar11 = 0;
          iVar13 = 1;
          iVar15 = 0;
          do {
            iVar11 = iVar11 + 2;
            iVar12 = iVar13;
            if ((longlong)iVar11 < (longlong)uVar16) {
              uVar8 = FUN_14008ea61(param_1 + (longlong)iVar11 * 3);
              uVar10 = FUN_14008ea61(param_1 + (longlong)iVar13 * 3);
              if (uVar10 <= uVar8) {
                iVar12 = iVar11;
              }
            }
            puVar2 = param_1 + (longlong)iVar15 * 3;
            puVar3 = param_1 + (longlong)iVar12 * 3;
            uVar8 = FUN_14008ea61(puVar2);
            uVar10 = FUN_14008ea61(puVar3);
            if (uVar10 <= uVar8) break;
            local_58 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = local_58;
            local_68._0_4_ = (undefined4)uVar5;
            local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar6;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar11 = iVar12 * 2;
            iVar13 = iVar12 * 2 + 1;
            local_68 = uVar5;
            uStack_60 = uVar6;
            iVar15 = iVar12;
          } while ((longlong)iVar13 < (longlong)uVar16);
          uVar1 = uVar16 - 1;
          local_58 = param_1[2];
          uVar5 = *param_1;
          uVar6 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar7 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar7;
          param_1[uVar1 * 3 + 2] = local_58;
          local_68._0_4_ = (undefined4)uVar5;
          local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar6;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar4 = 2 < uVar16;
          uVar16 = uVar1;
          local_68 = uVar5;
          uStack_60 = uVar6;
        } while (bVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb9568 FUN_147bb9568 body=656 status=ok
// SIG undefined FUN_147bb9568(void)

void FUN_147bb9568(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    uVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      uVar16 = (ulonglong)uVar8;
      local_70 = uVar16;
      while (uVar10 = uVar8 * 2 + 1, (int)uVar10 < (int)param_2) {
        uVar14 = uVar8 * 2 + 2;
        uVar8 = uVar10;
        if ((int)uVar14 < (int)param_2) {
          uVar9 = FUN_14008ea61(param_1 + (longlong)(int)uVar14 * 3);
          uVar10 = FUN_14008ea61(param_1 + (longlong)(int)uVar10 * 3);
          if (uVar10 <= uVar9) {
            uVar8 = uVar14;
          }
        }
        puVar2 = param_1 + (longlong)(int)uVar16 * 3;
        puVar3 = param_1 + (longlong)(int)uVar8 * 3;
        uVar10 = FUN_14008ea61(puVar2);
        uVar14 = FUN_14008ea61(puVar3);
        if (uVar14 <= uVar10) break;
        local_58 = puVar2[2];
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2[2] = puVar3[2];
        uVar7 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar7;
        puVar3[2] = local_58;
        local_68._0_4_ = (undefined4)uVar5;
        local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar6;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)puVar3 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
        *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
        uVar16 = (ulonglong)uVar8;
        local_68 = uVar5;
        uStack_60 = uVar6;
      }
      uVar8 = (int)local_70 - 1;
    } while ((int)local_70 != 0);
    if (1 < (int)param_2) {
      uVar16 = (ulonglong)param_2 - 1;
      local_58 = param_1[2];
      uVar5 = *param_1;
      uVar6 = param_1[1];
      param_1[2] = param_1[uVar16 * 3 + 2];
      uVar7 = (param_1 + uVar16 * 3)[1];
      *param_1 = param_1[uVar16 * 3];
      param_1[1] = uVar7;
      param_1[uVar16 * 3 + 2] = local_58;
      local_68._0_4_ = (undefined4)uVar5;
      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar6;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = param_1 + uVar16 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar5;
      uStack_60 = uVar6;
      if (param_2 != 2) {
        do {
          iVar11 = 0;
          iVar13 = 1;
          iVar15 = 0;
          do {
            iVar11 = iVar11 + 2;
            iVar12 = iVar13;
            if ((longlong)iVar11 < (longlong)uVar16) {
              uVar8 = FUN_14008ea61(param_1 + (longlong)iVar11 * 3);
              uVar10 = FUN_14008ea61(param_1 + (longlong)iVar13 * 3);
              if (uVar10 <= uVar8) {
                iVar12 = iVar11;
              }
            }
            puVar2 = param_1 + (longlong)iVar15 * 3;
            puVar3 = param_1 + (longlong)iVar12 * 3;
            uVar8 = FUN_14008ea61(puVar2);
            uVar10 = FUN_14008ea61(puVar3);
            if (uVar10 <= uVar8) break;
            local_58 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = local_58;
            local_68._0_4_ = (undefined4)uVar5;
            local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar6;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar11 = iVar12 * 2;
            iVar13 = iVar12 * 2 + 1;
            local_68 = uVar5;
            uStack_60 = uVar6;
            iVar15 = iVar12;
          } while ((longlong)iVar13 < (longlong)uVar16);
          uVar1 = uVar16 - 1;
          local_58 = param_1[2];
          uVar5 = *param_1;
          uVar6 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar7 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar7;
          param_1[uVar1 * 3 + 2] = local_58;
          local_68._0_4_ = (undefined4)uVar5;
          local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar6;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar4 = 2 < uVar16;
          uVar16 = uVar1;
          local_68 = uVar5;
          uStack_60 = uVar6;
        } while (bVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb97f9 FUN_147bb97f9 body=656 status=ok
// SIG undefined FUN_147bb97f9(void)

void FUN_147bb97f9(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    uVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      uVar16 = (ulonglong)uVar8;
      local_70 = uVar16;
      while (uVar10 = uVar8 * 2 + 1, (int)uVar10 < (int)param_2) {
        uVar14 = uVar8 * 2 + 2;
        uVar8 = uVar10;
        if ((int)uVar14 < (int)param_2) {
          uVar9 = FUN_14008ea61(param_1 + (longlong)(int)uVar14 * 3);
          uVar10 = FUN_14008ea61(param_1 + (longlong)(int)uVar10 * 3);
          if (uVar10 <= uVar9) {
            uVar8 = uVar14;
          }
        }
        puVar2 = param_1 + (longlong)(int)uVar16 * 3;
        puVar3 = param_1 + (longlong)(int)uVar8 * 3;
        uVar10 = FUN_14008ea61(puVar2);
        uVar14 = FUN_14008ea61(puVar3);
        if (uVar14 <= uVar10) break;
        local_58 = puVar2[2];
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2[2] = puVar3[2];
        uVar7 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = uVar7;
        puVar3[2] = local_58;
        local_68._0_4_ = (undefined4)uVar5;
        local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar6;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)puVar3 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
        *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
        uVar16 = (ulonglong)uVar8;
        local_68 = uVar5;
        uStack_60 = uVar6;
      }
      uVar8 = (int)local_70 - 1;
    } while ((int)local_70 != 0);
    if (1 < (int)param_2) {
      uVar16 = (ulonglong)param_2 - 1;
      local_58 = param_1[2];
      uVar5 = *param_1;
      uVar6 = param_1[1];
      param_1[2] = param_1[uVar16 * 3 + 2];
      uVar7 = (param_1 + uVar16 * 3)[1];
      *param_1 = param_1[uVar16 * 3];
      param_1[1] = uVar7;
      param_1[uVar16 * 3 + 2] = local_58;
      local_68._0_4_ = (undefined4)uVar5;
      local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar6;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = param_1 + uVar16 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar5;
      uStack_60 = uVar6;
      if (param_2 != 2) {
        do {
          iVar11 = 0;
          iVar13 = 1;
          iVar15 = 0;
          do {
            iVar11 = iVar11 + 2;
            iVar12 = iVar13;
            if ((longlong)iVar11 < (longlong)uVar16) {
              uVar8 = FUN_14008ea61(param_1 + (longlong)iVar11 * 3);
              uVar10 = FUN_14008ea61(param_1 + (longlong)iVar13 * 3);
              if (uVar10 <= uVar8) {
                iVar12 = iVar11;
              }
            }
            puVar2 = param_1 + (longlong)iVar15 * 3;
            puVar3 = param_1 + (longlong)iVar12 * 3;
            uVar8 = FUN_14008ea61(puVar2);
            uVar10 = FUN_14008ea61(puVar3);
            if (uVar10 <= uVar8) break;
            local_58 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = local_58;
            local_68._0_4_ = (undefined4)uVar5;
            local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar6;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar11 = iVar12 * 2;
            iVar13 = iVar12 * 2 + 1;
            local_68 = uVar5;
            uStack_60 = uVar6;
            iVar15 = iVar12;
          } while ((longlong)iVar13 < (longlong)uVar16);
          uVar1 = uVar16 - 1;
          local_58 = param_1[2];
          uVar5 = *param_1;
          uVar6 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar7 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar7;
          param_1[uVar1 * 3 + 2] = local_58;
          local_68._0_4_ = (undefined4)uVar5;
          local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar6;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar4 = 2 < uVar16;
          uVar16 = uVar1;
          local_68 = uVar5;
          uStack_60 = uVar6;
        } while (bVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bb9a8a FUN_147bb9a8a body=234 status=ok
// SIG undefined FUN_147bb9a8a(void)

void FUN_147bb9a8a(longlong *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = (longlong)param_2 * 0x30;
  puVar1 = (ushort *)(*param_1 + 0xe + lVar4);
  *puVar1 = *puVar1 & 0xc000;
  lVar3 = *param_1;
  uVar5 = *(uint *)(lVar3 + lVar4);
  iVar7 = (uVar5 << 0x10 | uVar5 & 0xffff) + *(int *)(lVar3 + 8 + lVar4) +
          ((uVar5 & 0xffff) >> 4) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10);
  uVar5 = ~(iVar7 * 0x8000) + iVar7;
  uVar5 = ((int)uVar5 >> 10 ^ uVar5) * 9;
  uVar5 = (int)uVar5 >> 6 ^ uVar5;
  uVar5 = ~(uVar5 << 0xb) + uVar5;
  uVar6 = (longlong)(int)((int)uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[3] - 1U;
  uVar2 = *(ushort *)(param_1[2] + uVar6 * 2);
  if (uVar2 == 0) {
    *(ushort *)(param_1[2] + uVar6 * 2) = (ushort)param_2 + 1;
  }
  else {
    uVar5 = uVar2 - 1;
    do {
      uVar6 = (ulonglong)uVar5;
      uVar2 = *(ushort *)(lVar3 + 0xe + uVar6 * 0x30);
      uVar5 = uVar2 & 0x3fff;
    } while ((uVar2 & 0x3fff) != 0);
    lVar4 = uVar6 * 0x30;
    *(ushort *)(lVar3 + 0xe + lVar4) =
         *(ushort *)(lVar3 + 0xe + lVar4) & 0xc000 | (ushort)param_2 & 0x3fff;
  }
  return;
}



// FUNCTION 147bb9b74 FUN_147bb9b74 body=226 status=ok
// SIG undefined FUN_147bb9b74(void)

void FUN_147bb9b74(longlong *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar4 = (longlong)param_2 * 0x18;
  puVar1 = (ushort *)(*param_1 + 0xe + lVar4);
  *puVar1 = *puVar1 & 0xc000;
  lVar3 = *param_1;
  uVar5 = *(uint *)(lVar3 + lVar4);
  iVar7 = (uVar5 << 0x10 | uVar5 & 0xffff) + *(int *)(lVar3 + 8 + lVar4) +
          ((uVar5 & 0xffff) >> 4) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10);
  uVar5 = ~(iVar7 * 0x8000) + iVar7;
  uVar5 = ((int)uVar5 >> 10 ^ uVar5) * 9;
  uVar5 = (int)uVar5 >> 6 ^ uVar5;
  uVar5 = ~(uVar5 << 0xb) + uVar5;
  uVar6 = (longlong)(int)((int)uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[3] - 1U;
  uVar2 = *(ushort *)(param_1[2] + uVar6 * 2);
  if (uVar2 == 0) {
    *(ushort *)(param_1[2] + uVar6 * 2) = (ushort)param_2 + 1;
  }
  else {
    uVar5 = uVar2 - 1;
    do {
      uVar6 = (ulonglong)uVar5;
      uVar2 = *(ushort *)(lVar3 + 0xe + uVar6 * 0x18);
      uVar5 = uVar2 & 0x3fff;
    } while ((uVar2 & 0x3fff) != 0);
    *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) =
         *(ushort *)(lVar3 + 0xe + uVar6 * 0x18) & 0xc000 | (ushort)param_2 & 0x3fff;
  }
  return;
}



// FUNCTION 147bb9c56 FUN_147bb9c56 body=112 status=ok
// SIG undefined FUN_147bb9c56(void)

void FUN_147bb9c56(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,0x10);
  }
  return;
}



// FUNCTION 147bb9cc6 FUN_147bb9cc6 body=33 status=ok
// SIG undefined FUN_147bb9cc6(void)

void FUN_147bb9cc6(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  return;
}



// FUNCTION 147bb9ce8 FUN_147bb9ce8 body=147 status=ok
// SIG undefined FUN_147bb9ce8(void)

void FUN_147bb9ce8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bb9d7c FUN_147bb9d7c body=112 status=ok
// SIG undefined FUN_147bb9d7c(void)

void FUN_147bb9d7c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147bb9dec FUN_147bb9dec body=7 status=ok
// SIG undefined FUN_147bb9dec(void)

void FUN_147bb9dec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147bb9df4 FUN_147bb9df4 body=147 status=ok
// SIG undefined FUN_147bb9df4(void)

void FUN_147bb9df4(longlong param_1,int param_2)

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



// FUNCTION 147bb9e88 FUN_147bb9e88 body=147 status=ok
// SIG undefined FUN_147bb9e88(void)

void FUN_147bb9e88(longlong param_1,int param_2)

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



// FUNCTION 147bb9f1c FUN_147bb9f1c body=147 status=ok
// SIG undefined FUN_147bb9f1c(void)

void FUN_147bb9f1c(longlong param_1,int param_2)

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



// FUNCTION 147bb9fb0 FUN_147bb9fb0 body=147 status=ok
// SIG undefined FUN_147bb9fb0(void)

void FUN_147bb9fb0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bba044 FUN_147bba044 body=98 status=ok
// SIG undefined FUN_147bba044(void)

void FUN_147bba044(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bba0a6 FUN_147bba0a6 body=119 status=ok
// SIG undefined FUN_147bba0a6(void)

void FUN_147bba0a6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147bba11e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147bba11e FUN_147bba11e body=141 status=ok
// SIG undefined FUN_147bba11e(void)

void FUN_147bba11e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 147bba1ac FUN_147bba1ac body=70 status=ok
// SIG undefined FUN_147bba1ac(void)

void FUN_147bba1ac(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147bba1f2();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1403af08a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147bba1f2 FUN_147bba1f2 body=322 status=ok
// SIG undefined FUN_147bba1f2(void)

void FUN_147bba1f2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 147bba336 FUN_147bba336 body=59 status=ok
// SIG undefined FUN_147bba336(void)

void FUN_147bba336(longlong param_1)

{
  FUN_147bba372();
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bba372 FUN_147bba372 body=107 status=ok
// SIG undefined FUN_147bba372(void)

void FUN_147bba372(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x30c) != 0) {
    FUN_147bba3de(param_1);
  }
  *(undefined8 *)(param_1 + 0x328) = 0xffffffff;
  *(undefined4 *)(param_1 + 800) = 0;
  if (0x20 < *(uint *)(param_1 + 0x324)) {
    *(undefined4 *)(param_1 + 0x324) = 0x20;
    FUN_14008f53c(param_1 + 0x310,0);
    return;
  }
  return;
}



// FUNCTION 147bba3de FUN_147bba3de body=94 status=ok
// SIG undefined FUN_147bba3de(void)

void FUN_147bba3de(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x30c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
    if (*(void **)((longlong)param_1 + 0x300) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x300),
              (longlong)*(int *)((longlong)param_1 + 0x308) * 0x18);
      FUN_1446efa72((longlong)param_1 + 0x300,0,0,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 147bba43c FUN_147bba43c body=149 status=ok
// SIG undefined FUN_147bba43c(void)

void FUN_147bba43c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,0x18);
  return;
}



// FUNCTION 147bba4d2 FUN_147bba4d2 body=351 status=ok
// SIG undefined FUN_147bba4d2(void)

undefined4 *
FUN_147bba4d2(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147bba632(param_1,local_50);
  uVar7 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)local_48 = *param_3;
  *(undefined4 *)((longlong)local_48 + 4) = uVar7;
  *(undefined4 *)(local_48 + 1) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar4;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar1 = *(undefined1 *)(local_48 + 1);
  uVar2 = *local_48;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar11 = (uint)uVar2 & 0xffff;
  uVar7 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4),
                        *(undefined4 *)((longlong)local_48 + 0xc));
  iVar8 = FUN_144a78877(uVar7,uVar1);
  local_68 = param_4;
  cVar6 = FUN_147bba756(param_1,iVar8,local_48,&local_54);
  uVar7 = local_54;
  if (cVar6 == '\0') {
    cVar6 = FUN_147bba976(param_1,*(int *)(param_1 + 0x308) - *(int *)(param_1 + 0x32c));
    if (cVar6 == '\0') {
      uVar9 = (longlong)iVar8 & (longlong)*(int *)(param_1 + 0x378) - 1U;
      iVar8 = (int)uVar9;
      *(int *)((longlong)local_48 + 0x14) = iVar8;
      lVar10 = *(longlong *)(param_1 + 0x370);
      if (*(longlong *)(param_1 + 0x370) == 0) {
        lVar10 = param_1 + 0x330;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x378) - 1U & uVar9) * 4);
      lVar10 = *(longlong *)(param_1 + 0x370);
      if (*(longlong *)(param_1 + 0x370) == 0) {
        lVar10 = param_1 + 0x330;
      }
      *(undefined4 *)(lVar10 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x378) - 1U) * 4) =
           uVar7;
    }
  }
  *param_2 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bba632 FUN_147bba632 body=291 status=ok
// SIG undefined FUN_147bba632(void)

int * FUN_147bba632(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x32c) == 0) {
    iVar6 = *(int *)(param_1 + 0x308);
    *(int *)(param_1 + 0x308) = iVar6 + 1;
    if (*(int *)(param_1 + 0x30c) == iVar6) {
      FUN_147bba7cc(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 0x310,1);
    lVar5 = *(longlong *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) == 0) {
      lVar5 = param_1 + 0x310;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x300);
    if (*(longlong *)(param_1 + 0x300) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x328);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0x328) = iVar4;
    iVar3 = *(int *)(param_1 + 0x32c) + -1;
    *(int *)(param_1 + 0x32c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x310;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x318);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 147bba756 FUN_147bba756 body=118 status=ok
// SIG undefined FUN_147bba756(void)

void FUN_147bba756(longlong param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x308) - *(int *)(param_1 + 0x32c) != 1) {
    iVar6 = FUN_147bba856();
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x300);
      if (*(longlong *)(param_1 + 0x300) == 0) {
        lVar7 = param_1;
      }
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      puVar1 = (undefined4 *)(lVar7 + (longlong)iVar6 * 0x18);
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_147bba8e2(param_1,*param_4);
      *param_4 = iVar6;
      uVar5 = 1;
      goto LAB_147bba778;
    }
  }
  uVar5 = 0;
LAB_147bba778:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 147bba7cc FUN_147bba7cc body=136 status=ok
// SIG undefined FUN_147bba7cc(void)

void FUN_147bba7cc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x30c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x30c) = iVar5;
    FUN_147bba43c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}


