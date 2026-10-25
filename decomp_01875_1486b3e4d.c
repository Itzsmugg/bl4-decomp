// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486b3e4d FUN_1486b3e4d body=52 status=ok
// SIG undefined FUN_1486b3e4d(void)

void FUN_1486b3e4d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486b3e82 FUN_1486b3e82 body=115 status=ok
// SIG undefined FUN_1486b3e82(void)

void FUN_1486b3e82(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486b3ef5 FUN_1486b3ef5 body=52 status=ok
// SIG undefined FUN_1486b3ef5(void)

void FUN_1486b3ef5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486b3f2a FUN_1486b3f2a body=96 status=ok
// SIG undefined FUN_1486b3f2a(void)

undefined8 FUN_1486b3f2a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1488b766a(local_40);
  FUN_144a73aae(local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b3f8c FUN_1486b3f8c body=28 status=ok
// SIG undefined FUN_1486b3f8c(void)

undefined8 FUN_1486b3f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486b3fba FUN_1486b3fba body=50 status=ok
// SIG undefined FUN_1486b3fba(void)

void FUN_1486b3fba(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b1803d0;
  return;
}



// FUNCTION 1486b3fec FUN_1486b3fec body=43 status=ok
// SIG undefined FUN_1486b3fec(void)

void FUN_1486b3fec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b1803d0;
  return;
}



// FUNCTION 1486b403c FUN_1486b403c body=62 status=ok
// SIG undefined FUN_1486b403c(void)

undefined1 FUN_1486b403c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1486b40a2 FUN_1486b40a2 body=59 status=ok
// SIG undefined FUN_1486b40a2(void)

undefined8 FUN_1486b40a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b40e8 FUN_1486b40e8 body=51 status=ok
// SIG undefined FUN_1486b40e8(void)

void FUN_1486b40e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486b416e FUN_1486b416e body=65 status=ok
// SIG undefined FUN_1486b416e(void)

undefined8 * FUN_1486b416e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1486b41b0 FUN_1486b41b0 body=55 status=ok
// SIG undefined FUN_1486b41b0(void)

void FUN_1486b41b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f360 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f360 = FUN_140002ddd(FUN_1464e5be7,uVar1,L"GbxGimmeSetDef");
  }
  return;
}



// FUNCTION 1486b41e8 FUN_1486b41e8 body=96 status=ok
// SIG undefined FUN_1486b41e8(void)

undefined8 FUN_1486b41e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1488b7808(local_40);
  FUN_144a73aae(local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b424a FUN_1486b424a body=28 status=ok
// SIG undefined FUN_1486b424a(void)

undefined8 FUN_1486b424a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486b42ac FUN_1486b42ac body=63 status=ok
// SIG undefined FUN_1486b42ac(void)

undefined1 FUN_1486b42ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b464a(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 1486b4314 FUN_1486b4314 body=59 status=ok
// SIG undefined FUN_1486b4314(void)

undefined8 FUN_1486b4314(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b4360 FUN_1486b4360 body=40 status=ok
// SIG undefined FUN_1486b4360(void)

void FUN_1486b4360(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_1486b44ee(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 1486b43da FUN_1486b43da body=175 status=ok
// SIG undefined FUN_1486b43da(void)

undefined8 * FUN_1486b43da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b180580;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1486b448a FUN_1486b448a body=43 status=ok
// SIG undefined FUN_1486b448a(void)

undefined8 FUN_1486b448a(undefined8 param_1,int param_2)

{
  FUN_1486b44ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1486b44b6 FUN_1486b44b6 body=55 status=ok
// SIG undefined FUN_1486b44b6(void)

void FUN_1486b44b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f378 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f378 = FUN_140002ddd(FUN_1464e5c41,uVar1,L"GbxGlobalActivitiesDef");
  }
  return;
}



// FUNCTION 1486b44ee FUN_1486b44ee body=163 status=ok
// SIG undefined FUN_1486b44ee(void)

void FUN_1486b44ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b180580;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1486b4592(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1486b4592(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1486b4592(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 1486b4592 FUN_1486b4592 body=54 status=ok
// SIG undefined FUN_1486b4592(void)

void FUN_1486b4592(longlong *param_1)

{
  FUN_1486b45c8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486b45c8 FUN_1486b45c8 body=128 status=ok
// SIG undefined FUN_1486b45c8(void)

void FUN_1486b45c8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 1486b464a FUN_1486b464a body=78 status=ok
// SIG undefined FUN_1486b464a(void)

longlong FUN_1486b464a(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1486b4698(param_1 + 0x18,param_2 + 0x18);
  FUN_1486b4698(param_1 + 0x68,param_2 + 0x68);
  FUN_1486b4698(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1486b4698 FUN_1486b4698 body=122 status=ok
// SIG undefined FUN_1486b4698(void)

longlong FUN_1486b4698(longlong param_1,longlong param_2)

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
    FUN_1486b4712(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b4712 FUN_1486b4712 body=219 status=ok
// SIG undefined FUN_1486b4712(void)

undefined8 * FUN_1486b4712(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1486b45c8(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_141853f36(puVar6,puVar4);
          puVar6[6] = puVar4[6];
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486b47f2 FUN_1486b47f2 body=28 status=ok
// SIG undefined FUN_1486b47f2(void)

undefined8 FUN_1486b47f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486b4820 FUN_1486b4820 body=74 status=ok
// SIG undefined FUN_1486b4820(void)

void FUN_1486b4820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b180730;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x7104;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0x42a00000;
  return;
}



// FUNCTION 1486b4880 FUN_1486b4880 body=54 status=ok
// SIG undefined FUN_1486b4880(void)

undefined1 FUN_1486b4880(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b49e0(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1486b48de FUN_1486b48de body=59 status=ok
// SIG undefined FUN_1486b48de(void)

undefined8 FUN_1486b48de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b4924 FUN_1486b4924 body=51 status=ok
// SIG undefined FUN_1486b4924(void)

void FUN_1486b4924(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1486b49a6 FUN_1486b49a6 body=57 status=ok
// SIG undefined FUN_1486b49a6(void)

void FUN_1486b49a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f3a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f3a8 = FUN_140002ddd(FUN_1464e5d45,uVar1,L"GbxGlobalsCharacter");
  }
  return;
}



// FUNCTION 1486b49e0 FUN_1486b49e0 body=87 status=ok
// SIG undefined FUN_1486b49e0(void)

longlong FUN_1486b49e0(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 1486b4ac8 FUN_1486b4ac8 body=59 status=ok
// SIG undefined FUN_1486b4ac8(void)

undefined8 FUN_1486b4ac8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b4bde FUN_1486b4bde body=54 status=ok
// SIG undefined FUN_1486b4bde(void)

undefined1 FUN_1486b4bde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b4cf6(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1486b4c3c FUN_1486b4c3c body=59 status=ok
// SIG undefined FUN_1486b4c3c(void)

undefined8 FUN_1486b4c3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b4c82 FUN_1486b4c82 body=38 status=ok
// SIG undefined FUN_1486b4c82(void)

void FUN_1486b4c82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1486b4cf6 FUN_1486b4cf6 body=104 status=ok
// SIG undefined FUN_1486b4cf6(void)

undefined8 * FUN_1486b4cf6(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  if ((param_1[5] != param_2[5]) || (*(int *)(param_1 + 6) != *(int *)(param_2 + 6))) {
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[7] = 0;
  }
  FUN_144a7bb84(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 1486b4dd4 FUN_1486b4dd4 body=54 status=ok
// SIG undefined FUN_1486b4dd4(void)

undefined1 FUN_1486b4dd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b4eec(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1486b4e32 FUN_1486b4e32 body=59 status=ok
// SIG undefined FUN_1486b4e32(void)

undefined8 FUN_1486b4e32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b4e78 FUN_1486b4e78 body=38 status=ok
// SIG undefined FUN_1486b4e78(void)

void FUN_1486b4e78(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1486b4eec FUN_1486b4eec body=104 status=ok
// SIG undefined FUN_1486b4eec(void)

undefined8 * FUN_1486b4eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  if ((param_1[5] != param_2[5]) || (*(int *)(param_1 + 6) != *(int *)(param_2 + 6))) {
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[7] = 0;
  }
  FUN_144a7bb84(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 1486b4ff0 FUN_1486b4ff0 body=59 status=ok
// SIG undefined FUN_1486b4ff0(void)

undefined8 FUN_1486b4ff0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b50b0 FUN_1486b50b0 body=63 status=ok
// SIG undefined FUN_1486b50b0(void)

undefined1 FUN_1486b50b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b5212(param_2,param_3);
    param_3 = param_3 + 4000;
    param_2 = param_2 + 4000;
  }
  return 1;
}



// FUNCTION 1486b5118 FUN_1486b5118 body=59 status=ok
// SIG undefined FUN_1486b5118(void)

undefined8 FUN_1486b5118(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b5164 FUN_1486b5164 body=38 status=ok
// SIG undefined FUN_1486b5164(void)

void FUN_1486b5164(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 4000) == '\x01') {
    FUN_141509c42(param_2);
    *(undefined1 *)(param_2 + 4000) = 0;
  }
  return;
}



// FUNCTION 1486b51d8 FUN_1486b51d8 body=57 status=ok
// SIG undefined FUN_1486b51d8(void)

void FUN_1486b51d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f438 = FUN_140002ddd(FUN_1464e604d,uVar1,L"GbxGlobalsDamage");
  }
  return;
}



// FUNCTION 1486b5212 FUN_1486b5212 body=838 status=ok
// SIG undefined FUN_1486b5212(void)

longlong FUN_1486b5212(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_140115bdc(param_1 + 0x58,param_2 + 0x58);
  if ((*(longlong *)(param_1 + 0x78) != *(longlong *)(param_2 + 0x78)) ||
     (*(int *)(param_1 + 0x80) != *(int *)(param_2 + 0x80))) {
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if ((*(longlong *)(param_1 + 0x90) != *(longlong *)(param_2 + 0x90)) ||
     (*(int *)(param_1 + 0x98) != *(int *)(param_2 + 0x98))) {
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  FUN_140d02432(param_1 + 0xb8,param_2 + 0xb8);
  FUN_140d02432(param_1 + 0x108,param_2 + 0x108);
  FUN_1486b5558(param_1 + 0x158,param_2 + 0x158);
  FUN_1486b5558(param_1 + 0x168,param_2 + 0x168);
  if ((*(longlong *)(param_1 + 0x178) != *(longlong *)(param_2 + 0x178)) ||
     (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180))) {
    *(longlong *)(param_1 + 0x178) = *(longlong *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if ((*(longlong *)(param_1 + 400) != *(longlong *)(param_2 + 400)) ||
     (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198))) {
    *(longlong *)(param_1 + 400) = *(longlong *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  FUN_141262aba(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_1486b56d0(param_1 + 0x1f8,param_2 + 0x1f8);
  lVar4 = 0x248;
  do {
    FUN_1486b4cf6(param_1 + lVar4,param_2 + lVar4);
    lVar4 = lVar4 + 0x60;
  } while (lVar4 != 0x848);
  lVar4 = 0x848;
  do {
    FUN_1486b4eec(param_1 + lVar4,param_2 + lVar4);
    lVar4 = lVar4 + 0x60;
  } while (lVar4 != 0xe48);
  FUN_1486b55b2(param_1 + 0xe48,param_2 + 0xe48);
  *(undefined8 *)(param_1 + 0xe58) = *(undefined8 *)(param_2 + 0xe58);
  uVar1 = *(undefined4 *)(param_2 + 0xe64);
  uVar2 = *(undefined4 *)(param_2 + 0xe68);
  uVar3 = *(undefined4 *)(param_2 + 0xe6c);
  *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_2 + 0xe60);
  *(undefined4 *)(param_1 + 0xe64) = uVar1;
  *(undefined4 *)(param_1 + 0xe68) = uVar2;
  *(undefined4 *)(param_1 + 0xe6c) = uVar3;
  FUN_144a787a6(param_1 + 0xe70,param_2 + 0xe70);
  *(undefined8 *)(param_1 + 0xe80) = *(undefined8 *)(param_2 + 0xe80);
  uVar1 = *(undefined4 *)(param_2 + 0xe8c);
  uVar2 = *(undefined4 *)(param_2 + 0xe90);
  uVar3 = *(undefined4 *)(param_2 + 0xe94);
  *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_2 + 0xe88);
  *(undefined4 *)(param_1 + 0xe8c) = uVar1;
  *(undefined4 *)(param_1 + 0xe90) = uVar2;
  *(undefined4 *)(param_1 + 0xe94) = uVar3;
  FUN_144a787a6(param_1 + 0xe98,param_2 + 0xe98);
  *(undefined1 *)(param_1 + 0xea8) = *(undefined1 *)(param_2 + 0xea8);
  FUN_14173baee(param_1 + 0xeb0,param_2 + 0xeb0);
  FUN_1486b5602(param_1 + 0xec8,param_2 + 0xec8);
  *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(param_2 + 0xed8);
  FUN_14115e0ba(param_1 + 0xee0,param_2 + 0xee0);
  *(undefined1 *)(param_1 + 0xf68) = *(undefined1 *)(param_2 + 0xf68);
  if ((*(longlong *)(param_1 + 0xf70) != *(longlong *)(param_2 + 0xf70)) ||
     (*(int *)(param_1 + 0xf78) != *(int *)(param_2 + 0xf78))) {
    *(longlong *)(param_1 + 0xf70) = *(longlong *)(param_2 + 0xf70);
    *(undefined4 *)(param_1 + 0xf78) = *(undefined4 *)(param_2 + 0xf78);
    *(undefined8 *)(param_1 + 0xf80) = 0;
  }
  if ((*(longlong *)(param_1 + 0xf88) != *(longlong *)(param_2 + 0xf88)) ||
     (*(int *)(param_1 + 0xf90) != *(int *)(param_2 + 0xf90))) {
    *(longlong *)(param_1 + 0xf88) = *(longlong *)(param_2 + 0xf88);
    *(undefined4 *)(param_1 + 0xf90) = *(undefined4 *)(param_2 + 0xf90);
    *(undefined8 *)(param_1 + 0xf98) = 0;
  }
  return param_1;
}



// FUNCTION 1486b5558 FUN_1486b5558 body=89 status=ok
// SIG undefined FUN_1486b5558(void)

undefined8 * FUN_1486b5558(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486b565c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486b55b2 FUN_1486b55b2 body=79 status=ok
// SIG undefined FUN_1486b55b2(void)

undefined8 * FUN_1486b55b2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486b57c0(param_1,iVar1);
      FUN_1486b5833(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486b5602 FUN_1486b5602 body=89 status=ok
// SIG undefined FUN_1486b5602(void)

undefined8 * FUN_1486b5602(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486b5860(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486b565c FUN_1486b565c body=115 status=ok
// SIG undefined FUN_1486b565c(void)

void FUN_1486b565c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486b56d0 FUN_1486b56d0 body=122 status=ok
// SIG undefined FUN_1486b56d0(void)

longlong FUN_1486b56d0(longlong param_1,longlong param_2)

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
    FUN_1486b574a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b574a FUN_1486b574a body=117 status=ok
// SIG undefined FUN_1486b574a(void)

undefined8 * FUN_1486b574a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c66772(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1486b57c0 FUN_1486b57c0 body=115 status=ok
// SIG undefined FUN_1486b57c0(void)

void FUN_1486b57c0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486b5833 FUN_1486b5833 body=44 status=ok
// SIG undefined FUN_1486b5833(void)

void FUN_1486b5833(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1486b5860 FUN_1486b5860 body=115 status=ok
// SIG undefined FUN_1486b5860(void)

void FUN_1486b5860(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486b58fe FUN_1486b58fe body=60 status=ok
// SIG undefined FUN_1486b58fe(void)

undefined1 FUN_1486b58fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457b9446(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1486b5962 FUN_1486b5962 body=59 status=ok
// SIG undefined FUN_1486b5962(void)

undefined8 FUN_1486b5962(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b5a16 FUN_1486b5a16 body=63 status=ok
// SIG undefined FUN_1486b5a16(void)

undefined1 FUN_1486b5a16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b5b7a(param_2,param_3);
    param_3 = param_3 + 0x718;
    param_2 = param_2 + 0x718;
  }
  return 1;
}



// FUNCTION 1486b5a7e FUN_1486b5a7e body=59 status=ok
// SIG undefined FUN_1486b5a7e(void)

undefined8 FUN_1486b5a7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b5aca FUN_1486b5aca body=40 status=ok
// SIG undefined FUN_1486b5aca(void)

void FUN_1486b5aca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x718) == '\x01') {
    FUN_145acc8a4(param_2);
    *(undefined1 *)(param_2 + 0x718) = 0;
  }
  return;
}



// FUNCTION 1486b5b40 FUN_1486b5b40 body=57 status=ok
// SIG undefined FUN_1486b5b40(void)

void FUN_1486b5b40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f4d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f4d0 = FUN_140002ddd(FUN_1464e6171,uVar1,L"GbxGlobalsDialog");
  }
  return;
}



// FUNCTION 1486b5b7a FUN_1486b5b7a body=951 status=ok
// SIG undefined FUN_1486b5b7a(void)

longlong FUN_1486b5b7a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_14863e1cc(param_1 + 0x20,param_2 + 0x20);
  FUN_1418473b6(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  FUN_140e7790a(param_1 + 0x60,param_2 + 0x60);
  FUN_140e7790a(param_1 + 0x78,param_2 + 0x78);
  FUN_140e7790a(param_1 + 0x90,param_2 + 0x90);
  FUN_140e7790a(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140e7790a(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140e7790a(param_1 + 0xd8,param_2 + 0xd8);
  FUN_140e7790a(param_1 + 0xf0,param_2 + 0xf0);
  FUN_140e7790a(param_1 + 0x108,param_2 + 0x108);
  FUN_140e7790a(param_1 + 0x120,param_2 + 0x120);
  FUN_140e7790a(param_1 + 0x138,param_2 + 0x138);
  FUN_140e7790a(param_1 + 0x150,param_2 + 0x150);
  FUN_1457892b8(param_1 + 0x168,param_2 + 0x168);
  FUN_148690d90(param_1 + 0x180,param_2 + 0x180);
  FUN_148690d90(param_1 + 0x198,param_2 + 0x198);
  FUN_148690d90(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_148690d90(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_148690d90(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_148690d90(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_148690d90(param_1 + 0x210,param_2 + 0x210);
  FUN_148690d90(param_1 + 0x228,param_2 + 0x228);
  FUN_148690d90(param_1 + 0x240,param_2 + 0x240);
  FUN_148690d90(param_1 + 600,param_2 + 600);
  FUN_148690d90(param_1 + 0x270,param_2 + 0x270);
  FUN_148690d90(param_1 + 0x288,param_2 + 0x288);
  FUN_148690d90(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_148690d90(param_1 + 0x2b8,param_2 + 0x2b8);
  FUN_148690d90(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_148690d90(param_1 + 0x2e8,param_2 + 0x2e8);
  FUN_148690d90(param_1 + 0x300,param_2 + 0x300);
  FUN_148690d90(param_1 + 0x318,param_2 + 0x318);
  FUN_148690d90(param_1 + 0x330,param_2 + 0x330);
  FUN_1486b5f32(param_1 + 0x348,param_2 + 0x348);
  FUN_1486b6026(param_1 + 0x398,param_2 + 0x398);
  FUN_1486b619a(param_1 + 1000,param_2 + 1000);
  FUN_1486b628e(param_1 + 0x438,param_2 + 0x438);
  FUN_1486b640c(param_1 + 0x488,param_2 + 0x488);
  FUN_1486b6500(param_1 + 0x4d8,param_2 + 0x4d8);
  FUN_1486b65f4(param_1 + 0x528,param_2 + 0x528);
  FUN_1486b66e8(param_1 + 0x578,param_2 + 0x578);
  FUN_1486b683e(param_1 + 0x5c8,param_2 + 0x5c8);
  FUN_14087f5e2(param_1 + 0x618,param_2 + 0x618);
  FUN_14123c256(param_1 + 0x628,param_2 + 0x628);
  FUN_14123c256(param_1 + 0x640,param_2 + 0x640);
  uVar1 = *(undefined4 *)(param_2 + 0x65c);
  uVar2 = *(undefined4 *)(param_2 + 0x660);
  uVar3 = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x65c) = uVar1;
  *(undefined4 *)(param_1 + 0x660) = uVar2;
  *(undefined4 *)(param_1 + 0x664) = uVar3;
  *(undefined8 *)(param_1 + 0x668) = *(undefined8 *)(param_2 + 0x668);
  FUN_14869208e(param_1 + 0x670,param_2 + 0x670);
  *(undefined8 *)(param_1 + 0x6c0) = *(undefined8 *)(param_2 + 0x6c0);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x6c8);
  FUN_1403de7ba(param_1 + 0x6d0,param_2 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6f0) = *(undefined8 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  FUN_144a787a6(param_1 + 0x700,param_2 + 0x700);
  *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(param_2 + 0x710);
  return param_1;
}



// FUNCTION 1486b5f32 FUN_1486b5f32 body=122 status=ok
// SIG undefined FUN_1486b5f32(void)

longlong FUN_1486b5f32(longlong param_1,longlong param_2)

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
    FUN_1486b5fac(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b5fac FUN_1486b5fac body=121 status=ok
// SIG undefined FUN_1486b5fac(void)

undefined8 * FUN_1486b5fac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145acd056(param_1,uVar1);
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



// FUNCTION 1486b6026 FUN_1486b6026 body=122 status=ok
// SIG undefined FUN_1486b6026(void)

longlong FUN_1486b6026(longlong param_1,longlong param_2)

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
    FUN_1486b60a0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b60a0 FUN_1486b60a0 body=250 status=ok
// SIG undefined FUN_1486b60a0(void)

longlong * FUN_1486b60a0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145accfdc(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_141853f7e(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486b619a FUN_1486b619a body=122 status=ok
// SIG undefined FUN_1486b619a(void)

longlong FUN_1486b619a(longlong param_1,longlong param_2)

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
    FUN_1486b6214(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b6214 FUN_1486b6214 body=121 status=ok
// SIG undefined FUN_1486b6214(void)

undefined8 * FUN_1486b6214(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145accf62(param_1,uVar1);
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



// FUNCTION 1486b628e FUN_1486b628e body=122 status=ok
// SIG undefined FUN_1486b628e(void)

longlong FUN_1486b628e(longlong param_1,longlong param_2)

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
    FUN_1486b6308(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b6308 FUN_1486b6308 body=260 status=ok
// SIG undefined FUN_1486b6308(void)

longlong * FUN_1486b6308(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145accee8(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_141853f7e(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined1 *)(lVar3 + 0x20 + lVar6) = *(undefined1 *)(lVar2 + 0x20 + lVar6);
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486b640c FUN_1486b640c body=122 status=ok
// SIG undefined FUN_1486b640c(void)

longlong FUN_1486b640c(longlong param_1,longlong param_2)

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
    FUN_1486b6486(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b6486 FUN_1486b6486 body=121 status=ok
// SIG undefined FUN_1486b6486(void)

undefined8 * FUN_1486b6486(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145acce6e(param_1,uVar1);
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



// FUNCTION 1486b6500 FUN_1486b6500 body=122 status=ok
// SIG undefined FUN_1486b6500(void)

longlong FUN_1486b6500(longlong param_1,longlong param_2)

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
    FUN_1486b657a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b657a FUN_1486b657a body=121 status=ok
// SIG undefined FUN_1486b657a(void)

undefined8 * FUN_1486b657a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145accdf4(param_1,uVar1);
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



// FUNCTION 1486b65f4 FUN_1486b65f4 body=122 status=ok
// SIG undefined FUN_1486b65f4(void)

longlong FUN_1486b65f4(longlong param_1,longlong param_2)

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
    FUN_1486b666e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b666e FUN_1486b666e body=121 status=ok
// SIG undefined FUN_1486b666e(void)

undefined8 * FUN_1486b666e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145accd7a(param_1,uVar1);
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



// FUNCTION 1486b66e8 FUN_1486b66e8 body=122 status=ok
// SIG undefined FUN_1486b66e8(void)

longlong FUN_1486b66e8(longlong param_1,longlong param_2)

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
    FUN_1486b6762(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b6762 FUN_1486b6762 body=219 status=ok
// SIG undefined FUN_1486b6762(void)

undefined8 * FUN_1486b6762(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145accd00(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
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
          FUN_1464dd002(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar4 + 6);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486b683e FUN_1486b683e body=122 status=ok
// SIG undefined FUN_1486b683e(void)

longlong FUN_1486b683e(longlong param_1,longlong param_2)

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
    FUN_1486b68b8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b68b8 FUN_1486b68b8 body=278 status=ok
// SIG undefined FUN_1486b68b8(void)

undefined8 * FUN_1486b68b8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145acd240(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140275bcc(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar5 = (undefined4 *)*param_2;
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar4 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar4 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
        }
        else {
          FUN_1460489b8(puVar6,puVar5);
          *(undefined8 *)(puVar6 + 0xe) = 0;
          puVar6[0x10] = 0;
          *(undefined8 *)(puVar6 + 6) = 0;
          *(undefined8 *)(puVar6 + 8) = 0;
          *(undefined8 *)(puVar6 + 0x11) = 0xffffffff00000080;
          puVar6[0x13] = 0;
          *(undefined8 *)(puVar6 + 0x16) = 0;
          puVar6[0x18] = 0;
          FUN_1457b9864(puVar6 + 6,puVar5 + 6);
          *(undefined8 *)(puVar6 + 0x1a) = *(undefined8 *)(puVar5 + 0x1a);
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x1c;
        puVar6 = puVar6 + 0x1c;
      } while (uVar1 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 1486b69d0 FUN_1486b69d0 body=67 status=ok
// SIG undefined FUN_1486b69d0(void)

void FUN_1486b69d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b181320;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x4fc71eb6;
  param_2[6] = 0;
  return;
}



// FUNCTION 1486b6a2a FUN_1486b6a2a body=54 status=ok
// SIG undefined FUN_1486b6a2a(void)

undefined1 FUN_1486b6a2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b6b8a(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1486b6a88 FUN_1486b6a88 body=59 status=ok
// SIG undefined FUN_1486b6a88(void)

undefined8 FUN_1486b6a88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b6ace FUN_1486b6ace body=51 status=ok
// SIG undefined FUN_1486b6ace(void)

void FUN_1486b6ace(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1486b6b50 FUN_1486b6b50 body=57 status=ok
// SIG undefined FUN_1486b6b50(void)

void FUN_1486b6b50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f4e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f4e8 = FUN_140002ddd(FUN_1464e6203,uVar1,L"GbxGlobalsEffects");
  }
  return;
}



// FUNCTION 1486b6b8a FUN_1486b6b8a body=77 status=ok
// SIG undefined FUN_1486b6b8a(void)

longlong FUN_1486b6b8a(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return param_1;
}



// FUNCTION 1486b6bd8 FUN_1486b6bd8 body=95 status=ok
// SIG undefined FUN_1486b6bd8(void)

void FUN_1486b6bd8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b1814b0;
  param_2[10] = 0;
  param_2[0xb] = 0x200000000;
  *(undefined1 *)(param_2 + 0xc) = 1;
  memset(param_2 + 0xd,0,0x98);
  return;
}



// FUNCTION 1486b6c4e FUN_1486b6c4e body=63 status=ok
// SIG undefined FUN_1486b6c4e(void)

undefined1 FUN_1486b6c4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b6db2(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 1486b6cb6 FUN_1486b6cb6 body=59 status=ok
// SIG undefined FUN_1486b6cb6(void)

undefined8 FUN_1486b6cb6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b6d02 FUN_1486b6d02 body=40 status=ok
// SIG undefined FUN_1486b6d02(void)

void FUN_1486b6d02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_145a36294(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1486b6d78 FUN_1486b6d78 body=57 status=ok
// SIG undefined FUN_1486b6d78(void)

void FUN_1486b6d78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f500 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f500 = FUN_140002ddd(FUN_1464e6295,uVar1,L"GbxGlobalsHazard");
  }
  return;
}



// FUNCTION 1486b6db2 FUN_1486b6db2 body=192 status=ok
// SIG undefined FUN_1486b6db2(void)

longlong FUN_1486b6db2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_14118c70e(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  FUN_14123c256(param_1 + 0xb8,param_2 + 0xb8);
  FUN_14123c256(param_1 + 0xd0,param_2 + 0xd0);
  FUN_14123c256(param_1 + 0xe8,param_2 + 0xe8);
  return param_1;
}



// FUNCTION 1486b6ed8 FUN_1486b6ed8 body=59 status=ok
// SIG undefined FUN_1486b6ed8(void)

undefined8 FUN_1486b6ed8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b6f98 FUN_1486b6f98 body=88 status=ok
// SIG undefined FUN_1486b6f98(void)

undefined8 FUN_1486b6f98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_140115bdc(param_2 + 0x10,param_3 + 0x10);
    FUN_140115bdc(param_2 + 0x30,param_3 + 0x30);
    *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_3 + 0x50);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 1486b7018 FUN_1486b7018 body=59 status=ok
// SIG undefined FUN_1486b7018(void)

undefined8 FUN_1486b7018(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b705e FUN_1486b705e body=34 status=ok
// SIG undefined FUN_1486b705e(void)

void FUN_1486b705e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14583c236(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1486b70ee FUN_1486b70ee body=63 status=ok
// SIG undefined FUN_1486b70ee(void)

undefined1 FUN_1486b70ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b7252(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1486b7156 FUN_1486b7156 body=59 status=ok
// SIG undefined FUN_1486b7156(void)

undefined8 FUN_1486b7156(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b71a2 FUN_1486b71a2 body=40 status=ok
// SIG undefined FUN_1486b71a2(void)

void FUN_1486b71a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_145ae0b8a(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1486b7218 FUN_1486b7218 body=57 status=ok
// SIG undefined FUN_1486b7218(void)

void FUN_1486b7218(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f548 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f548 = FUN_140002ddd(FUN_1464e644b,uVar1,L"GbxGlobalsInventory");
  }
  return;
}



// FUNCTION 1486b7252 FUN_1486b7252 body=275 status=ok
// SIG undefined FUN_1486b7252(void)

longlong FUN_1486b7252(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  FUN_1406fa324(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1486b7366(param_1 + 0xb0,param_2 + 0xb0);
  FUN_1486b745a(param_1 + 0x100,param_2 + 0x100);
  FUN_140bb2e20(param_1 + 0x150,param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  FUN_142b160e2(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 1486b7366 FUN_1486b7366 body=122 status=ok
// SIG undefined FUN_1486b7366(void)

longlong FUN_1486b7366(longlong param_1,longlong param_2)

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
    FUN_1486b73e0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b73e0 FUN_1486b73e0 body=121 status=ok
// SIG undefined FUN_1486b73e0(void)

undefined8 * FUN_1486b73e0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ae0ce2(param_1,uVar1);
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



// FUNCTION 1486b745a FUN_1486b745a body=122 status=ok
// SIG undefined FUN_1486b745a(void)

longlong FUN_1486b745a(longlong param_1,longlong param_2)

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
    FUN_1486b74d4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486b74d4 FUN_1486b74d4 body=250 status=ok
// SIG undefined FUN_1486b74d4(void)

longlong * FUN_1486b74d4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ae0d5c(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1406a7630(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_1486b75ce(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x60 + lVar6) = *(undefined8 *)(lVar2 + 0x60 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x68;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486b75ce FUN_1486b75ce body=138 status=ok
// SIG undefined FUN_1486b75ce(void)

undefined8 * FUN_1486b75ce(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1406022be(param_1 + 2,param_2 + 2);
  param_1[2] = &PTR_FUN_14b1828b0;
  FUN_1406022be(param_1 + 6,param_2 + 6);
  param_1[6] = &PTR_FUN_14b1828b0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 1486b765a FUN_1486b765a body=109 status=ok
// SIG undefined FUN_1486b765a(void)

void FUN_1486b765a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b181a70;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xf00000d0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x4000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  return;
}



// FUNCTION 1486b76de FUN_1486b76de body=63 status=ok
// SIG undefined FUN_1486b76de(void)

undefined1 FUN_1486b76de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b7854(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1486b7746 FUN_1486b7746 body=59 status=ok
// SIG undefined FUN_1486b7746(void)

undefined8 FUN_1486b7746(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b7792 FUN_1486b7792 body=57 status=ok
// SIG undefined FUN_1486b7792(void)

void FUN_1486b7792(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1486b781a FUN_1486b781a body=57 status=ok
// SIG undefined FUN_1486b781a(void)

void FUN_1486b781a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f560 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f560 = FUN_140002ddd(FUN_1464e64dd,uVar1,L"GbxGlobalsMoment");
  }
  return;
}



// FUNCTION 1486b7854 FUN_1486b7854 body=195 status=ok
// SIG undefined FUN_1486b7854(void)

longlong FUN_1486b7854(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if ((*(longlong *)(param_1 + 0x50) != *(longlong *)(param_2 + 0x50)) ||
     (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58))) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_1486b7918(param_1 + 0x68,param_2 + 0x68);
  FUN_1486b7918(param_1 + 0x80,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 1486b7918 FUN_1486b7918 body=84 status=ok
// SIG undefined FUN_1486b7918(void)

longlong * FUN_1486b7918(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486b798c FUN_1486b798c body=63 status=ok
// SIG undefined FUN_1486b798c(void)

undefined1 FUN_1486b798c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b7af0(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 1486b79f4 FUN_1486b79f4 body=59 status=ok
// SIG undefined FUN_1486b79f4(void)

undefined8 FUN_1486b79f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b7a40 FUN_1486b7a40 body=40 status=ok
// SIG undefined FUN_1486b7a40(void)

void FUN_1486b7a40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_145b0427c(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 1486b7ab6 FUN_1486b7ab6 body=57 status=ok
// SIG undefined FUN_1486b7ab6(void)

void FUN_1486b7ab6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f578 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f578 = FUN_140002ddd(FUN_1464e656f,uVar1,L"GbxGlobalsPhysics");
  }
  return;
}



// FUNCTION 1486b7af0 FUN_1486b7af0 body=84 status=ok
// SIG undefined FUN_1486b7af0(void)

longlong FUN_1486b7af0(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_140d188f2(param_1 + 0x20,param_2 + 0x20);
  FUN_140d188f2(param_1 + 0x70,param_2 + 0x70);
  FUN_140d188f2(param_1 + 0xc0,param_2 + 0xc0);
  return param_1;
}



// FUNCTION 1486b7b46 FUN_1486b7b46 body=65 status=ok
// SIG undefined FUN_1486b7b46(void)

void FUN_1486b7b46(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b181d90;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 1486b7b9e FUN_1486b7b9e body=131 status=ok
// SIG undefined FUN_1486b7b9e(void)

undefined8 FUN_1486b7b9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined4 *)(param_2 + lVar1 + 0x18) = *(undefined4 *)(param_3 + lVar1 + 0x18);
      FUN_1486b7d4c(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1486b7da0(param_2 + lVar1 + 0x38,param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b7c4a FUN_1486b7c4a body=59 status=ok
// SIG undefined FUN_1486b7c4a(void)

undefined8 FUN_1486b7c4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b7c90 FUN_1486b7c90 body=51 status=ok
// SIG undefined FUN_1486b7c90(void)

void FUN_1486b7c90(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1486b7d12 FUN_1486b7d12 body=57 status=ok
// SIG undefined FUN_1486b7d12(void)

void FUN_1486b7d12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f590 = FUN_140002ddd(FUN_1464e6601,uVar1,L"GbxGlobalsProgression");
  }
  return;
}



// FUNCTION 1486b7d4c FUN_1486b7d4c body=84 status=ok
// SIG undefined FUN_1486b7d4c(void)

longlong * FUN_1486b7d4c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486b7da0 FUN_1486b7da0 body=84 status=ok
// SIG undefined FUN_1486b7da0(void)

longlong * FUN_1486b7da0(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486b7e3a FUN_1486b7e3a body=88 status=ok
// SIG undefined FUN_1486b7e3a(void)

undefined8 FUN_1486b7e3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined8 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[1];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b7eba FUN_1486b7eba body=59 status=ok
// SIG undefined FUN_1486b7eba(void)

undefined8 FUN_1486b7eba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b7f00 FUN_1486b7f00 body=38 status=ok
// SIG undefined FUN_1486b7f00(void)

void FUN_1486b7f00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486b7f76 FUN_1486b7f76 body=64 status=ok
// SIG undefined FUN_1486b7f76(void)

void FUN_1486b7f76(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b182080;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 1486b7fcc FUN_1486b7fcc body=91 status=ok
// SIG undefined FUN_1486b7fcc(void)

undefined8 FUN_1486b7fcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_141289ada(param_2 + -0x20,param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1486b8140(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b8050 FUN_1486b8050 body=59 status=ok
// SIG undefined FUN_1486b8050(void)

undefined8 FUN_1486b8050(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b8096 FUN_1486b8096 body=34 status=ok
// SIG undefined FUN_1486b8096(void)

void FUN_1486b8096(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14597efe4(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1486b8106 FUN_1486b8106 body=57 status=ok
// SIG undefined FUN_1486b8106(void)

void FUN_1486b8106(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f5c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f5c0 = FUN_140002ddd(FUN_1464e6725,uVar1,L"GbxGlobalsStatusEffects");
  }
  return;
}



// FUNCTION 1486b8140 FUN_1486b8140 body=95 status=ok
// SIG undefined FUN_1486b8140(void)

undefined8 * FUN_1486b8140(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14597f030(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486b81a0(param_1,iVar1);
      FUN_1486b8213(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486b81a0 FUN_1486b81a0 body=115 status=ok
// SIG undefined FUN_1486b81a0(void)

void FUN_1486b81a0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486b8213 FUN_1486b8213 body=52 status=ok
// SIG undefined FUN_1486b8213(void)

void FUN_1486b8213(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486b8248(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1486b8248 FUN_1486b8248 body=114 status=ok
// SIG undefined FUN_1486b8248(void)

undefined8 * FUN_1486b8248(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486b8308 FUN_1486b8308 body=78 status=ok
// SIG undefined FUN_1486b8308(void)

undefined8 FUN_1486b8308(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1406fa324();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b837e FUN_1486b837e body=59 status=ok
// SIG undefined FUN_1486b837e(void)

undefined8 FUN_1486b837e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b83c4 FUN_1486b83c4 body=38 status=ok
// SIG undefined FUN_1486b83c4(void)

void FUN_1486b83c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1486b843a FUN_1486b843a body=73 status=ok
// SIG undefined FUN_1486b843a(void)

void FUN_1486b843a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b182370;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0x17;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 1486b849a FUN_1486b849a body=147 status=ok
// SIG undefined FUN_1486b849a(void)

undefined8 FUN_1486b849a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined1 *)(lVar1 + 0x28) = *(undefined1 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      FUN_1406fa324(param_2 + lVar3 + 0x30,param_3 + lVar3 + 0x30);
      FUN_1486b8646(param_2 + lVar3 + 0x40,param_3 + lVar3 + 0x40);
      lVar3 = lVar3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b8556 FUN_1486b8556 body=59 status=ok
// SIG undefined FUN_1486b8556(void)

undefined8 FUN_1486b8556(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b859c FUN_1486b859c body=34 status=ok
// SIG undefined FUN_1486b859c(void)

void FUN_1486b859c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14599f88e(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486b860c FUN_1486b860c body=57 status=ok
// SIG undefined FUN_1486b860c(void)

void FUN_1486b860c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f5f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f5f0 = FUN_140002ddd(FUN_1464e684b,uVar1,L"GbxGlobalsVisibilityPhase");
  }
  return;
}



// FUNCTION 1486b8646 FUN_1486b8646 body=95 status=ok
// SIG undefined FUN_1486b8646(void)

undefined8 * FUN_1486b8646(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14599f8e8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486b86a6(param_1,iVar1);
      FUN_1486b8708(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486b86a6 FUN_1486b86a6 body=98 status=ok
// SIG undefined FUN_1486b86a6(void)

void FUN_1486b86a6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486b8708 FUN_1486b8708 body=133 status=ok
// SIG undefined FUN_1486b8708(void)

void FUN_1486b8708(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(param_2 + 1);
      puVar2[-2] = *param_2;
      *puVar2 = 0;
      iVar1 = *(int *)(param_2 + 3);
      _Src = (void *)param_2[2];
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1401b309e(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 << 3);
      }
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486b87ac FUN_1486b87ac body=63 status=ok
// SIG undefined FUN_1486b87ac(void)

undefined1 FUN_1486b87ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b88ce(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1486b8814 FUN_1486b8814 body=59 status=ok
// SIG undefined FUN_1486b8814(void)

undefined8 FUN_1486b8814(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b8860 FUN_1486b8860 body=44 status=ok
// SIG undefined FUN_1486b8860(void)

void FUN_1486b8860(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1486b88ce FUN_1486b88ce body=152 status=ok
// SIG undefined FUN_1486b88ce(void)

longlong * FUN_1486b88ce(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  if ((param_1[4] != param_2[4]) || ((int)param_1[5] != (int)param_2[5])) {
    param_1[4] = param_2[4];
    *(int *)(param_1 + 5) = (int)param_2[5];
    param_1[6] = 0;
  }
  FUN_145be47b0(param_1 + 7,param_2 + 7);
  FUN_140d02432(param_1 + 9,param_2 + 9);
  FUN_140d02432(param_1 + 0x13,param_2 + 0x13);
  *(char *)(param_1 + 0x1d) = (char)param_2[0x1d];
  return param_1;
}



// FUNCTION 1486b89d4 FUN_1486b89d4 body=63 status=ok
// SIG undefined FUN_1486b89d4(void)

undefined1 FUN_1486b89d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486b8b3a(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1486b8a3c FUN_1486b8a3c body=59 status=ok
// SIG undefined FUN_1486b8a3c(void)

undefined8 FUN_1486b8a3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b8a88 FUN_1486b8a88 body=38 status=ok
// SIG undefined FUN_1486b8a88(void)

void FUN_1486b8a88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1486b8afc(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1486b8afc FUN_1486b8afc body=62 status=ok
// SIG undefined FUN_1486b8afc(void)

void FUN_1486b8afc(longlong param_1)

{
  FUN_1449e6b18(param_1 + 0x70);
  FUN_1408bd9f2(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1449e6b18(param_1 + 0x50);
  return;
}



// FUNCTION 1486b8b3a FUN_1486b8b3a body=155 status=ok
// SIG undefined FUN_1486b8b3a(void)

undefined8 * FUN_1486b8b3a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  param_1[2] = param_2[2];
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  if ((param_1[3] != param_2[3]) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
    param_1[3] = param_2[3];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[5] = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 6);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 9);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  FUN_14117bcd8(param_1 + 10,param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  FUN_140dcb4aa(param_1 + 0xc,param_2 + 0xc);
  FUN_14117bcd8(param_1 + 0xe,param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  return param_1;
}



// FUNCTION 1486b8c1c FUN_1486b8c1c body=59 status=ok
// SIG undefined FUN_1486b8c1c(void)

undefined8 FUN_1486b8c1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b8c68 FUN_1486b8c68 body=38 status=ok
// SIG undefined FUN_1486b8c68(void)

void FUN_1486b8c68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1406399d0(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1486b8cdc FUN_1486b8cdc body=133 status=ok
// SIG undefined FUN_1486b8cdc(void)

void FUN_1486b8cdc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1486b8d9c FUN_1486b8d9c body=172 status=ok
// SIG undefined FUN_1486b8d9c(void)

void FUN_1486b8d9c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488c5c7a(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b8e58 FUN_1486b8e58 body=45 status=ok
// SIG undefined FUN_1486b8e58(void)

longlong FUN_1486b8e58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d52806(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486b8e86 FUN_1486b8e86 body=45 status=ok
// SIG undefined FUN_1486b8e86(void)

longlong FUN_1486b8e86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486b8eb4 FUN_1486b8eb4 body=45 status=ok
// SIG undefined FUN_1486b8eb4(void)

longlong FUN_1486b8eb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486b8f62 FUN_1486b8f62 body=59 status=ok
// SIG undefined FUN_1486b8f62(void)

undefined8 FUN_1486b8f62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b8ff6 FUN_1486b8ff6 body=55 status=ok
// SIG undefined FUN_1486b8ff6(void)

void FUN_1486b8ff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f6c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f6c8 = FUN_140002ddd(FUN_1464e72d5,uVar1,L"GbxHealthStateValueResolver");
  }
  return;
}



// FUNCTION 1486b902e FUN_1486b902e body=99 status=ok
// SIG undefined FUN_1486b902e(void)

void FUN_1486b902e(undefined8 param_1,undefined8 *param_2)

{
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
  FUN_144a7a8f6(param_2);
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xf00000d0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  return;
}



// FUNCTION 1486b9092 FUN_1486b9092 body=66 status=ok
// SIG undefined FUN_1486b9092(void)

void FUN_1486b9092(undefined8 param_1,longlong param_2)

{
  FUN_144a7a8f6(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0xf00000d0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
  return;
}



// FUNCTION 1486b90ec FUN_1486b90ec body=78 status=ok
// SIG undefined FUN_1486b90ec(void)

undefined8 FUN_1486b90ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_140d02432();
      lVar2 = lVar2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b9162 FUN_1486b9162 body=59 status=ok
// SIG undefined FUN_1486b9162(void)

undefined8 FUN_1486b9162(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b9204 FUN_1486b9204 body=58 status=ok
// SIG undefined FUN_1486b9204(void)

void FUN_1486b9204(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18fbc0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 1486b9254 FUN_1486b9254 body=131 status=ok
// SIG undefined FUN_1486b9254(void)

undefined1 FUN_1486b9254(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_1486b93ee(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_1486b944e(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      *(undefined1 *)(param_2 + lVar1 + 0x38) = *(undefined1 *)(param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b9300 FUN_1486b9300 body=59 status=ok
// SIG undefined FUN_1486b9300(void)

undefined8 FUN_1486b9300(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b9346 FUN_1486b9346 body=34 status=ok
// SIG undefined FUN_1486b9346(void)

void FUN_1486b9346(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_145a19e1a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1486b93ae FUN_1486b93ae body=57 status=ok
// SIG undefined FUN_1486b93ae(void)

void FUN_1486b93ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f700 = FUN_140002ddd(FUN_1464e73c3,uVar1,L"GbxIngredientList");
  }
  return;
}



// FUNCTION 1486b93ee FUN_1486b93ee body=95 status=ok
// SIG undefined FUN_1486b93ee(void)

undefined8 * FUN_1486b93ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a19e71(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486b949e(param_1,iVar1);
      FUN_1486b9500(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486b944e FUN_1486b944e body=79 status=ok
// SIG undefined FUN_1486b944e(void)

undefined8 * FUN_1486b944e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486b970a(param_1,iVar1);
      FUN_1486b977d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486b949e FUN_1486b949e body=98 status=ok
// SIG undefined FUN_1486b949e(void)

void FUN_1486b949e(longlong param_1,int param_2,int param_3)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,8);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (param_3 < iVar1) {
    FUN_1446f8d3c(param_1,0,iVar1,0x100,8);
    param_3 = iVar1;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486b9500 FUN_1486b9500 body=60 status=ok
// SIG undefined FUN_1486b9500(void)

void FUN_1486b9500(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486b953c(param_1,param_2);
    param_1 = param_1 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return;
}



// FUNCTION 1486b953c FUN_1486b953c body=318 status=ok
// SIG undefined FUN_1486b953c(void)

undefined8 * FUN_1486b953c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_142b15db4(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14b18f750;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  FUN_144a7f96e(param_1 + 6,param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar2;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  FUN_1486b967a(param_1 + 0xf,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  FUN_1486b96c2(param_1 + 0x13,param_2 + 0x98);
  FUN_1406022be(param_1 + 0x16,param_2 + 0xb0);
  param_1[0x16] = &PTR_FUN_14b1828b0;
  FUN_1406022be(param_1 + 0x1a,param_2 + 0xd0);
  param_1[0x1a] = &PTR_FUN_14b1828b0;
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 1486b967a FUN_1486b967a body=71 status=ok
// SIG undefined FUN_1486b967a(void)

undefined8 * FUN_1486b967a(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486b96c2 FUN_1486b96c2 body=71 status=ok
// SIG undefined FUN_1486b96c2(void)

undefined8 * FUN_1486b96c2(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486b970a FUN_1486b970a body=115 status=ok
// SIG undefined FUN_1486b970a(void)

void FUN_1486b970a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486b977d FUN_1486b977d body=124 status=ok
// SIG undefined FUN_1486b977d(void)

void FUN_1486b977d(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      param_1 = param_1 + 0x60;
      param_2 = param_2 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486b97fa FUN_1486b97fa body=80 status=ok
// SIG undefined FUN_1486b97fa(void)

void FUN_1486b97fa(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1488d9028(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b984c FUN_1486b984c body=28 status=ok
// SIG undefined FUN_1486b984c(void)

undefined8 FUN_1486b984c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486b9962 FUN_1486b9962 body=59 status=ok
// SIG undefined FUN_1486b9962(void)

undefined8 FUN_1486b9962(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b9a02 FUN_1486b9a02 body=29 status=ok
// SIG undefined FUN_1486b9a02(void)

undefined8 FUN_1486b9a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486b9a20 FUN_1486b9a20 body=55 status=ok
// SIG undefined FUN_1486b9a20(void)

void FUN_1486b9a20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f730 = FUN_140002ddd(FUN_1464e7485,uVar1,L"GxInputEventActionCondition_HasUsable");
  }
  return;
}



// FUNCTION 1486b9a58 FUN_1486b9a58 body=29 status=ok
// SIG undefined FUN_1486b9a58(void)

undefined8 FUN_1486b9a58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486b9a76 FUN_1486b9a76 body=55 status=ok
// SIG undefined FUN_1486b9a76(void)

void FUN_1486b9a76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fb80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fb80 = FUN_140002ddd(FUN_1464e74b4,uVar1,L"GxInputEventActionCondition");
  }
  return;
}



// FUNCTION 1486b9aae FUN_1486b9aae body=42 status=ok
// SIG undefined FUN_1486b9aae(void)

undefined8 FUN_1486b9aae(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\GbxInput/GbxInputSchemaDefTypes.h"
                ,0x3b,L"Pure virtual not implemented (%s)",L"FGxInputEventActionCondition::Eval");
  return 0;
}



// FUNCTION 1486b9ada FUN_1486b9ada body=60 status=ok
// SIG undefined FUN_1486b9ada(void)

void FUN_1486b9ada(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b1898b0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0xa008;
  param_2[5] = 0;
  return;
}



// FUNCTION 1486b9b2c FUN_1486b9b2c body=123 status=ok
// SIG undefined FUN_1486b9b2c(void)

undefined8 FUN_1486b9b2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      lVar1 = *(longlong *)(param_3 + 0x18 + lVar2);
      if ((*(longlong *)(param_2 + 0x18 + lVar2) != lVar1) ||
         (*(int *)(param_2 + 0x20 + lVar2) != *(int *)(param_3 + 0x20 + lVar2))) {
        *(longlong *)(param_2 + 0x18 + lVar2) = lVar1;
        *(undefined4 *)(param_2 + 0x20 + lVar2) = *(undefined4 *)(param_3 + 0x20 + lVar2);
        *(undefined8 *)(param_2 + 0x28 + lVar2) = 0;
      }
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486b9bd0 FUN_1486b9bd0 body=59 status=ok
// SIG undefined FUN_1486b9bd0(void)

undefined8 FUN_1486b9bd0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b9c16 FUN_1486b9c16 body=43 status=ok
// SIG undefined FUN_1486b9c16(void)

void FUN_1486b9c16(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1486b9cfa FUN_1486b9cfa body=59 status=ok
// SIG undefined FUN_1486b9cfa(void)

undefined8 FUN_1486b9cfa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b9d9a FUN_1486b9d9a body=29 status=ok
// SIG undefined FUN_1486b9d9a(void)

undefined8 FUN_1486b9d9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486b9db8 FUN_1486b9db8 body=55 status=ok
// SIG undefined FUN_1486b9db8(void)

void FUN_1486b9db8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f760 = FUN_140002ddd(FUN_1464e75a3,uVar1,L"GbxInputActionEventInterpreter");
  }
  return;
}



// FUNCTION 1486b9df0 FUN_1486b9df0 body=50 status=ok
// SIG undefined FUN_1486b9df0(void)

void FUN_1486b9df0(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b189be0;
  return;
}



// FUNCTION 1486b9e22 FUN_1486b9e22 body=43 status=ok
// SIG undefined FUN_1486b9e22(void)

void FUN_1486b9e22(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b189be0;
  return;
}



// FUNCTION 1486b9e72 FUN_1486b9e72 body=62 status=ok
// SIG undefined FUN_1486b9e72(void)

undefined1 FUN_1486b9e72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1486b9ed8 FUN_1486b9ed8 body=59 status=ok
// SIG undefined FUN_1486b9ed8(void)

undefined8 FUN_1486b9ed8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486b9f1e FUN_1486b9f1e body=43 status=ok
// SIG undefined FUN_1486b9f1e(void)

void FUN_1486b9f1e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486b9f9c FUN_1486b9f9c body=52 status=ok
// SIG undefined FUN_1486b9f9c(void)

undefined8 * FUN_1486b9f9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486b9fd0 FUN_1486b9fd0 body=55 status=ok
// SIG undefined FUN_1486b9fd0(void)

void FUN_1486b9fd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f778 = FUN_140002ddd(FUN_1464e75fd,uVar1,L"GbxInputActionGroupDef");
  }
  return;
}



// FUNCTION 1486ba008 FUN_1486ba008 body=104 status=ok
// SIG undefined FUN_1486ba008(void)

undefined8 FUN_1486ba008(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1488878b6(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486ba072 FUN_1486ba072 body=28 status=ok
// SIG undefined FUN_1486ba072(void)

undefined8 FUN_1486ba072(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486ba0c0 FUN_1486ba0c0 body=56 status=ok
// SIG undefined FUN_1486ba0c0(void)

void FUN_1486ba0c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001486ba0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486ba10e FUN_1486ba10e body=70 status=ok
// SIG undefined FUN_1486ba10e(void)

undefined8 FUN_1486ba10e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1413a517a(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 1486ba17c FUN_1486ba17c body=59 status=ok
// SIG undefined FUN_1486ba17c(void)

undefined8 FUN_1486ba17c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486ba1c2 FUN_1486ba1c2 body=64 status=ok
// SIG undefined FUN_1486ba1c2(void)

void FUN_1486ba1c2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486ba29a FUN_1486ba29a body=62 status=ok
// SIG undefined FUN_1486ba29a(void)

undefined1 FUN_1486ba29a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1486ba45a(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486ba300 FUN_1486ba300 body=59 status=ok
// SIG undefined FUN_1486ba300(void)

undefined8 FUN_1486ba300(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486ba39c FUN_1486ba39c body=69 status=ok
// SIG undefined FUN_1486ba39c(void)

undefined8 * FUN_1486ba39c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b189ef0;
  FUN_1486ba411(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ba3ea FUN_1486ba3ea body=29 status=ok
// SIG undefined FUN_1486ba3ea(void)

undefined8 FUN_1486ba3ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ba411 FUN_1486ba411 body=73 status=ok
// SIG undefined FUN_1486ba411(void)

void FUN_1486ba411(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1486ba45a FUN_1486ba45a body=95 status=ok
// SIG undefined FUN_1486ba45a(void)

undefined8 * FUN_1486ba45a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1486ba411(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486ba4ba(param_1,iVar1);
      FUN_1486ba52d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486ba4ba FUN_1486ba4ba body=115 status=ok
// SIG undefined FUN_1486ba4ba(void)

void FUN_1486ba4ba(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486ba52d FUN_1486ba52d body=81 status=ok
// SIG undefined FUN_1486ba52d(void)

void FUN_1486ba52d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined8 *)(param_1 + 8 + lVar4) = *(undefined8 *)(param_2 + 8 + lVar4);
      lVar2 = *(longlong *)(param_2 + 0x10 + lVar4);
      *(longlong *)(param_1 + 0x10 + lVar4) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      lVar2 = param_1 + lVar4;
      lVar1 = param_2 + lVar4;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      lVar4 = lVar4 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486ba580 FUN_1486ba580 body=62 status=ok
// SIG undefined FUN_1486ba580(void)

void FUN_1486ba580(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) == '\x01') {
    *param_1 = &PTR_FUN_14b189ef0;
    FUN_1486ba411(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 1486ba606 FUN_1486ba606 body=62 status=ok
// SIG undefined FUN_1486ba606(void)

undefined1 FUN_1486ba606(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_146a6959c(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486ba66c FUN_1486ba66c body=59 status=ok
// SIG undefined FUN_1486ba66c(void)

undefined8 FUN_1486ba66c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486ba704 FUN_1486ba704 body=69 status=ok
// SIG undefined FUN_1486ba704(void)

undefined8 * FUN_1486ba704(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b18a090;
  FUN_144a65a1e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ba78c FUN_1486ba78c body=60 status=ok
// SIG undefined FUN_1486ba78c(void)

void FUN_1486ba78c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) == '\x01') {
    *param_1 = &PTR_FUN_14b18a090;
    FUN_144a65a1e(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 1486ba7c8 FUN_1486ba7c8 body=73 status=ok
// SIG undefined FUN_1486ba7c8(void)

void FUN_1486ba7c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001486ba806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486ba812 FUN_1486ba812 body=50 status=ok
// SIG undefined FUN_1486ba812(void)

void FUN_1486ba812(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18a210;
  return;
}



// FUNCTION 1486ba844 FUN_1486ba844 body=43 status=ok
// SIG undefined FUN_1486ba844(void)

void FUN_1486ba844(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b18a210;
  return;
}



// FUNCTION 1486ba894 FUN_1486ba894 body=62 status=ok
// SIG undefined FUN_1486ba894(void)

undefined1 FUN_1486ba894(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1486ba8fa FUN_1486ba8fa body=59 status=ok
// SIG undefined FUN_1486ba8fa(void)

undefined8 FUN_1486ba8fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486ba940 FUN_1486ba940 body=43 status=ok
// SIG undefined FUN_1486ba940(void)

void FUN_1486ba940(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1486ba9ba FUN_1486ba9ba body=52 status=ok
// SIG undefined FUN_1486ba9ba(void)

undefined8 * FUN_1486ba9ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ba9ee FUN_1486ba9ee body=55 status=ok
// SIG undefined FUN_1486ba9ee(void)

void FUN_1486ba9ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f7f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f7f0 = FUN_140002ddd(FUN_1464e7876,uVar1,L"GbxInputContextDef");
  }
  return;
}



// FUNCTION 1486baa5a FUN_1486baa5a body=54 status=ok
// SIG undefined FUN_1486baa5a(void)

undefined1 FUN_1486baa5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bab6e(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1486baab8 FUN_1486baab8 body=59 status=ok
// SIG undefined FUN_1486baab8(void)

undefined8 FUN_1486baab8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486baafe FUN_1486baafe body=34 status=ok
// SIG undefined FUN_1486baafe(void)

void FUN_1486baafe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1486bad0a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1486bab6e FUN_1486bab6e body=223 status=ok
// SIG undefined FUN_1486bab6e(void)

longlong FUN_1486bab6e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  FUN_1486bac4e(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 1486bac4e FUN_1486bac4e body=88 status=ok
// SIG undefined FUN_1486bac4e(void)

undefined8 * FUN_1486bac4e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486baca6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486baca6 FUN_1486baca6 body=98 status=ok
// SIG undefined FUN_1486baca6(void)

void FUN_1486baca6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486bad0a FUN_1486bad0a body=145 status=ok
// SIG undefined FUN_1486bad0a(void)

void FUN_1486bad0a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b18a3f0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001486bad8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1486bad9c FUN_1486bad9c body=38 status=ok
// SIG undefined FUN_1486bad9c(void)

undefined8 FUN_1486bad9c(undefined8 param_1,int param_2)

{
  FUN_1486bad0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486badc2 FUN_1486badc2 body=55 status=ok
// SIG undefined FUN_1486badc2(void)

void FUN_1486badc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f838 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f838 = FUN_140002ddd(FUN_1464e798b,uVar1,L"GbxInputEvent");
  }
  return;
}



// FUNCTION 1486bae4e FUN_1486bae4e body=87 status=ok
// SIG undefined FUN_1486bae4e(void)

undefined1 FUN_1486bae4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bab6e(param_2,param_3);
    FUN_1486ba45a(param_2 + 0x68,param_3 + 0x68);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1486baece FUN_1486baece body=59 status=ok
// SIG undefined FUN_1486baece(void)

undefined8 FUN_1486baece(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486baf14 FUN_1486baf14 body=34 status=ok
// SIG undefined FUN_1486baf14(void)

void FUN_1486baf14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1486bb9f8(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1486baf86 FUN_1486baf86 body=38 status=ok
// SIG undefined FUN_1486baf86(void)

undefined8 FUN_1486baf86(undefined8 param_1,int param_2)

{
  FUN_1486bb9f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486bafac FUN_1486bafac body=55 status=ok
// SIG undefined FUN_1486bafac(void)

void FUN_1486bafac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f880 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f880 = FUN_140002ddd(FUN_1464e7a4e,uVar1,L"GbxInputEvent_Axis_Core");
  }
  return;
}



// FUNCTION 1486bb07a FUN_1486bb07a body=54 status=ok
// SIG undefined FUN_1486bb07a(void)

undefined1 FUN_1486bb07a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486bb33c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}


