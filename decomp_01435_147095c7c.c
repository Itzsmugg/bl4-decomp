// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147095c7c FUN_147095c7c body=57 status=ok
// SIG undefined FUN_147095c7c(void)

void FUN_147095c7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0948 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0948 = FUN_140002ddd(FUN_1462a2051,uVar1,L"NexusSerializeTest_GameplayTagDef");
  }
  return;
}



// FUNCTION 147095cb6 FUN_147095cb6 body=104 status=ok
// SIG undefined FUN_147095cb6(void)

undefined8 FUN_147095cb6(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1470a5122(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147095d20 FUN_147095d20 body=60 status=ok
// SIG undefined FUN_147095d20(void)

undefined8 * FUN_147095d20(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_3 + 8);
    }
    FUN_1447325ac(puVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 147095db4 FUN_147095db4 body=70 status=ok
// SIG undefined FUN_147095db4(void)

void FUN_147095db4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147095e8b(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147095e06 FUN_147095e06 body=53 status=ok
// SIG undefined FUN_147095e06(void)

void FUN_147095e06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147095e8b FUN_147095e8b body=378 status=ok
// SIG undefined FUN_147095e8b(void)

undefined4 FUN_147095e8b(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  uVar5 = 0;
  iVar9 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_1[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if ((iStack_54 != iVar9) || (local_60 != plVar1)) {
    uVar5 = 0;
    do {
      lVar3 = *local_90;
      lVar6 = (longlong)iStack_74;
      iVar2 = *(int *)(lVar3 + 8 + lVar6 * 0x28);
      puVar8 = &DAT_149dfb77a;
      iVar7 = 0;
      if (iVar2 != 0) {
        puVar8 = *(undefined2 **)(lVar3 + lVar6 * 0x28);
        iVar7 = iVar2 + -1;
      }
      uVar4 = FUN_144a49b4a(iVar7,puVar8);
      uVar5 = FUN_144a78877(uVar4,uVar5);
      iVar2 = *(int *)(lVar3 + 0x18 + lVar6 * 0x28);
      puVar8 = &DAT_149dfb77a;
      iVar7 = 0;
      if (iVar2 != 0) {
        puVar8 = *(undefined2 **)(lVar3 + 0x10 + lVar6 * 0x28);
        iVar7 = iVar2 + -1;
      }
      uVar4 = FUN_144a49b4a(iVar7,puVar8);
      uVar5 = FUN_144a78877(uVar4,uVar5);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 || (local_80 != plVar1 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147096024 FUN_147096024 body=101 status=ok
// SIG undefined FUN_147096024(void)

undefined8 FUN_147096024(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      if (*(char *)(param_3 + -0x58) == '\0') {
        *(undefined1 *)(param_2 + -0x58) = 0;
        *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      }
      FUN_14058acb2(param_2 + -0x50,param_3 + -0x50);
      FUN_147096178(param_2,param_3);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470960b2 FUN_1470960b2 body=59 status=ok
// SIG undefined FUN_1470960b2(void)

undefined8 FUN_1470960b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470960fe FUN_1470960fe body=40 status=ok
// SIG undefined FUN_1470960fe(void)

void FUN_1470960fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_145883be4(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 147096178 FUN_147096178 body=122 status=ok
// SIG undefined FUN_147096178(void)

longlong FUN_147096178(longlong param_1,longlong param_2)

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
    FUN_1470961f2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1470961f2 FUN_1470961f2 body=210 status=ok
// SIG undefined FUN_1470961f2(void)

undefined8 * FUN_1470961f2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145883c9a(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406a7630(param_1);
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
          FUN_1470962c4(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(puVar4 + 0x18);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x1a;
        puVar6 = puVar6 + 0x1a;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1470962c4 FUN_1470962c4 body=145 status=ok
// SIG undefined FUN_1470962c4(void)

undefined8 * FUN_1470962c4(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14058acb2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 147096356 FUN_147096356 body=57 status=ok
// SIG undefined FUN_147096356(void)

void FUN_147096356(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0990 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0990 = FUN_140002ddd(FUN_1462a21af,uVar1,L"NexusSerializeTest_MapDef");
  }
  return;
}



// FUNCTION 147096390 FUN_147096390 body=104 status=ok
// SIG undefined FUN_147096390(void)

undefined8 FUN_147096390(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1470a5200(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470963fa FUN_1470963fa body=60 status=ok
// SIG undefined FUN_1470963fa(void)

undefined8 * FUN_1470963fa(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_3 + 8);
    }
    FUN_1447325ac(puVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 147096448 FUN_147096448 body=42 status=ok
// SIG undefined FUN_147096448(void)

void FUN_147096448(undefined8 param_1,longlong param_2)

{
  FUN_1446f470e(param_2,L"CallbackStruct",1);
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 147096472 FUN_147096472 body=42 status=ok
// SIG undefined FUN_147096472(void)

void FUN_147096472(undefined8 param_1,longlong param_2)

{
  FUN_1446f470e(param_2,L"CallbackStruct",1);
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 147096500 FUN_147096500 body=117 status=ok
// SIG undefined FUN_147096500(void)

void FUN_147096500(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  FUN_144a78877(*(undefined4 *)(param_2 + 1),
                ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470965e8 FUN_1470965e8 body=52 status=ok
// SIG undefined FUN_1470965e8(void)

void FUN_1470965e8(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  FUN_1446f470e(param_2,L"CallbackStruct",1);
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 14709661c FUN_14709661c body=42 status=ok
// SIG undefined FUN_14709661c(void)

void FUN_14709661c(undefined8 param_1,longlong param_2)

{
  FUN_1446f470e(param_2,L"CallbackStruct",1);
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 1470966aa FUN_1470966aa body=59 status=ok
// SIG undefined FUN_1470966aa(void)

undefined8 FUN_1470966aa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709677a FUN_14709677a body=63 status=ok
// SIG undefined FUN_14709677a(void)

undefined1 FUN_14709677a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147096a98(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1470967e2 FUN_1470967e2 body=59 status=ok
// SIG undefined FUN_1470967e2(void)

undefined8 FUN_1470967e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709682e FUN_14709682e body=40 status=ok
// SIG undefined FUN_14709682e(void)

void FUN_14709682e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1470968a4(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1470968a4 FUN_1470968a4 body=132 status=ok
// SIG undefined FUN_1470968a4(void)

void FUN_1470968a4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_147096928(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1470969e0(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147096928 FUN_147096928 body=54 status=ok
// SIG undefined FUN_147096928(void)

void FUN_147096928(longlong *param_1)

{
  FUN_14709695e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14709695e FUN_14709695e body=128 status=ok
// SIG undefined FUN_14709695e(void)

void FUN_14709695e(longlong param_1,int param_2)

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



// FUNCTION 1470969e0 FUN_1470969e0 body=54 status=ok
// SIG undefined FUN_1470969e0(void)

void FUN_1470969e0(longlong *param_1)

{
  FUN_147096a16(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147096a16 FUN_147096a16 body=128 status=ok
// SIG undefined FUN_147096a16(void)

void FUN_147096a16(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 147096a98 FUN_147096a98 body=114 status=ok
// SIG undefined FUN_147096a98(void)

undefined4 * FUN_147096a98(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[8] = param_2[8];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_147096b0a(param_1 + 10,param_2 + 10);
  FUN_147096cac(param_1 + 0xe,param_2 + 0xe);
  FUN_147096b64(param_1 + 0x22,param_2 + 0x22);
  FUN_147096bde(param_1 + 0x36,param_2 + 0x36);
  param_1[0x3a] = param_2[0x3a];
  return param_1;
}



// FUNCTION 147096b0a FUN_147096b0a body=89 status=ok
// SIG undefined FUN_147096b0a(void)

undefined8 * FUN_147096b0a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147096c38(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147096b64 FUN_147096b64 body=122 status=ok
// SIG undefined FUN_147096b64(void)

longlong FUN_147096b64(longlong param_1,longlong param_2)

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
    FUN_147096da2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147096bde FUN_147096bde body=89 status=ok
// SIG undefined FUN_147096bde(void)

undefined8 * FUN_147096bde(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147096e1c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147096c38 FUN_147096c38 body=115 status=ok
// SIG undefined FUN_147096c38(void)

void FUN_147096c38(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147096cac FUN_147096cac body=122 status=ok
// SIG undefined FUN_147096cac(void)

longlong FUN_147096cac(longlong param_1,longlong param_2)

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
    FUN_147096d26(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147096d26 FUN_147096d26 body=124 status=ok
// SIG undefined FUN_147096d26(void)

undefined8 * FUN_147096d26(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147096a16(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 147096da2 FUN_147096da2 body=121 status=ok
// SIG undefined FUN_147096da2(void)

undefined8 * FUN_147096da2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14709695e(param_1,uVar1);
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



// FUNCTION 147096e1c FUN_147096e1c body=115 status=ok
// SIG undefined FUN_147096e1c(void)

void FUN_147096e1c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147096eae FUN_147096eae body=54 status=ok
// SIG undefined FUN_147096eae(void)

undefined1 FUN_147096eae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1410b2022(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147096f16 FUN_147096f16 body=53 status=ok
// SIG undefined FUN_147096f16(void)

void FUN_147096f16(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147096fba FUN_147096fba body=101 status=ok
// SIG undefined FUN_147096fba(void)

undefined8 FUN_147096fba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
    do {
      if (*(char *)(param_3 + -0x58) == '\0') {
        *(undefined1 *)(param_2 + -0x58) = 0;
        *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      }
      FUN_1410b2022(param_2 + -0x50,param_3 + -0x50);
      FUN_14709710e(param_2,param_3);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147097048 FUN_147097048 body=59 status=ok
// SIG undefined FUN_147097048(void)

undefined8 FUN_147097048(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147097094 FUN_147097094 body=40 status=ok
// SIG undefined FUN_147097094(void)

void FUN_147097094(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1459262a4(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14709710e FUN_14709710e body=122 status=ok
// SIG undefined FUN_14709710e(void)

longlong FUN_14709710e(longlong param_1,longlong param_2)

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
    FUN_147097188(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147097188 FUN_147097188 body=263 status=ok
// SIG undefined FUN_147097188(void)

undefined8 * FUN_147097188(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14592635a(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403e7a24(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined8 *)*param_1;
      puVar5 = (undefined4 *)*param_2;
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar4 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar4 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)puVar6 = *puVar5;
          *(undefined4 *)((longlong)puVar6 + 4) = puVar5[1];
        }
        else {
          puVar6[4] = 0;
          *(undefined4 *)(puVar6 + 5) = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
          *(undefined8 *)((longlong)puVar6 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
          puVar6[8] = 0;
          *(undefined4 *)(puVar6 + 9) = 0;
          FUN_1410b2022(puVar6,puVar5);
          puVar6[10] = *(undefined8 *)(puVar5 + 0x14);
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x16;
        puVar6 = puVar6 + 0xb;
      } while (uVar1 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 147097290 FUN_147097290 body=57 status=ok
// SIG undefined FUN_147097290(void)

void FUN_147097290(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0a20 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0a20 = FUN_140002ddd(FUN_1462a24d1,uVar1,L"NexusSerializeTest_SetDef");
  }
  return;
}



// FUNCTION 1470972ca FUN_1470972ca body=104 status=ok
// SIG undefined FUN_1470972ca(void)

undefined8 FUN_1470972ca(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1470a57a4(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147097334 FUN_147097334 body=60 status=ok
// SIG undefined FUN_147097334(void)

undefined8 * FUN_147097334(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_3 + 8);
    }
    FUN_1447325ac(puVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 1470973be FUN_1470973be body=75 status=ok
// SIG undefined FUN_1470973be(void)

undefined1 FUN_1470973be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147097432 FUN_147097432 body=59 status=ok
// SIG undefined FUN_147097432(void)

undefined8 FUN_147097432(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147097478 FUN_147097478 body=38 status=ok
// SIG undefined FUN_147097478(void)

void FUN_147097478(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1470974ee FUN_1470974ee body=96 status=ok
// SIG undefined FUN_1470974ee(void)

undefined8 * FUN_1470974ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140fa4598(param_1,iVar1);
      FUN_140fa4570(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14709754e FUN_14709754e body=29 status=ok
// SIG undefined FUN_14709754e(void)

undefined8 FUN_14709754e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709756c FUN_14709756c body=16 status=ok
// SIG undefined FUN_14709756c(void)

void FUN_14709756c(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14709757e FUN_14709757e body=246 status=ok
// SIG undefined FUN_14709757e(void)

void FUN_14709757e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  uint local_3c;
  uint *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_1 + 1;
  local_3c = param_2;
  if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xb];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0xc] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = param_1[3];
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x10;
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x10) == param_2) {
          if ((lVar1 + 4U & 0xfffffffffffffffb) != 0) goto LAB_1470975f9;
          break;
        }
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  local_40 = (undefined4)param_1[2];
  local_30 = &local_40;
  local_38 = &local_3c;
  FUN_140c0fbee(param_1 + 3,local_24,&local_38,0);
  iVar4 = (int)param_1[2];
  *(uint *)(param_1 + 2) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < iVar4 + 1U) {
    FUN_1446f48e2(param_1 + 1,iVar4);
  }
  *(uint *)(param_1[1] + (longlong)iVar4 * 4) = local_3c;
LAB_1470975f9:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147097676 FUN_147097676 body=203 status=ok
// SIG undefined FUN_147097676(void)

int FUN_147097676(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1470976c0:
      lVar10 = (longlong)iVar1 * 0x38;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_147097736;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147097736;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147097727;
    }
  }
  return -1;
LAB_147097736:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147097727:
  iVar1 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1470976c0;
}



// FUNCTION 147097742 FUN_147097742 body=381 status=ok
// SIG undefined FUN_147097742(void)

undefined4 * FUN_147097742(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470978c0(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_40 = *puVar1;
  iVar14 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uVar7 = puVar2[5];
  uVar8 = puVar2[6];
  uVar9 = puVar2[7];
  *(undefined4 *)(local_40 + 4) = puVar2[4];
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar7;
  *(undefined4 *)(local_40 + 5) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar9;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar6;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0xf;
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  else {
    puVar15 = (undefined2 *)*local_40;
    iVar14 = *(int *)(local_40 + 1) + -1;
  }
  uVar11 = FUN_144a49b4a(iVar14,puVar15);
  cVar10 = FUN_1470979a2(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar12) {
      uVar13 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x34) = uVar11;
      lVar16 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar16 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar16 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar16 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar16 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar16 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar14;
      FUN_147097aa6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470978c0 FUN_1470978c0 body=226 status=ok
// SIG undefined FUN_1470978c0(void)

int * FUN_1470978c0(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1470979a2 FUN_1470979a2 body=144 status=ok
// SIG undefined FUN_1470979a2(void)

undefined8 FUN_1470979a2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
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
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_147097676(), iVar14 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x38);
    plVar2 = (longlong *)(*param_1 + (longlong)iVar14 * 0x38);
    FUN_1401d9a90(plVar2 + 2);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1[8] = param_3[8];
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147097a32(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 147097a32 FUN_147097a32 body=116 status=ok
// SIG undefined FUN_147097a32(void)

void FUN_147097a32(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 147097aa6 FUN_147097aa6 body=476 status=ok
// SIG undefined FUN_147097aa6(void)

void FUN_147097aa6(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x38;
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
        *(int *)(lVar3 + 0x34 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar11) =
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



// FUNCTION 147097c84 FUN_147097c84 body=287 status=ok
// SIG undefined FUN_147097c84(void)

undefined4 * FUN_147097c84(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  short *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147097da4(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  sVar1 = *(short *)*param_3;
  *local_40 = sVar1;
  *(undefined4 *)(local_40 + 2) = *puVar2;
  local_40[4] = -1;
  local_40[5] = -1;
  local_4c = local_48[0];
  cVar4 = FUN_147097e8a(param_1,(int)sVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (int)sVar1;
      *(uint *)(local_40 + 6) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147097f7e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147097da4 FUN_147097da4 body=229 status=ok
// SIG undefined FUN_147097da4(void)

int * FUN_147097da4(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147097e8a FUN_147097e8a body=129 status=ok
// SIG undefined FUN_147097e8a(void)

undefined8 FUN_147097e8a(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(short *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_147097f0c(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147097f0c FUN_147097f0c body=114 status=ok
// SIG undefined FUN_147097f0c(void)

void FUN_147097f0c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147097f7e FUN_147097f7e body=423 status=ok
// SIG undefined FUN_147097f7e(void)

void FUN_147097f7e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(short *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 147098126 FUN_147098126 body=307 status=ok
// SIG undefined FUN_147098126(void)

undefined4 * FUN_147098126(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14709825a(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  FUN_1447a97f4(local_40,*param_3);
  local_40[10] = *puVar1;
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  local_58 = 0;
  cVar2 = FUN_14709833c(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0xd] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14709848a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709825a FUN_14709825a body=226 status=ok
// SIG undefined FUN_14709825a(void)

int * FUN_14709825a(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14709833c FUN_14709833c body=195 status=ok
// SIG undefined FUN_14709833c(void)

void FUN_14709833c(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          if (*(longlong *)(piVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147098400(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          goto LAB_1470983ab;
        }
        iVar15 = piVar1[0xc];
      } while (iVar15 != -1);
    }
  }
  uVar13 = 0;
LAB_1470983ab:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 147098400 FUN_147098400 body=138 status=ok
// SIG undefined FUN_147098400(void)

void FUN_147098400(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14709848a FUN_14709848a body=419 status=ok
// SIG undefined FUN_14709848a(void)

void FUN_14709848a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 14709862e FUN_14709862e body=48 status=ok
// SIG undefined FUN_14709862e(void)

void FUN_14709862e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14709865e FUN_14709865e body=147 status=ok
// SIG undefined FUN_14709865e(void)

void FUN_14709865e(longlong param_1,int param_2)

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



// FUNCTION 1470986f2 FUN_1470986f2 body=214 status=ok
// SIG undefined FUN_1470986f2(void)

undefined4 * FUN_1470986f2(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  (**(code **)(*(longlong *)(param_1 + 2) + 0x20))(param_1 + 2,0);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  FUN_1406022fe(param_1 + 6,param_2 + 6);
  (**(code **)(*(longlong *)(param_1 + 10) + 0x20))(param_1 + 10,0);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  FUN_1406022fe(param_1 + 0xe,param_2 + 0xe);
  (**(code **)(*(longlong *)(param_1 + 0x12) + 0x20))(param_1 + 0x12,0);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  FUN_1406022fe(param_1 + 0x16,param_2 + 0x16);
  (**(code **)(*(longlong *)(param_1 + 0x1a) + 0x20))(param_1 + 0x1a,0);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  FUN_1406022fe(param_1 + 0x1e,param_2 + 0x1e);
  (**(code **)(*(longlong *)(param_1 + 0x22) + 0x20))(param_1 + 0x22,0);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  FUN_1406022fe(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



// FUNCTION 1470987c8 FUN_1470987c8 body=324 status=ok
// SIG undefined FUN_1470987c8(void)

undefined4 * FUN_1470987c8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_14709890e(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1470989f4(param_1,uVar4,local_40,&local_4c);
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
      FUN_147098ae6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709890e FUN_14709890e body=230 status=ok
// SIG undefined FUN_14709890e(void)

int * FUN_14709890e(longlong *param_1,int *param_2)

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



// FUNCTION 1470989f4 FUN_1470989f4 body=128 status=ok
// SIG undefined FUN_1470989f4(void)

undefined8 FUN_1470989f4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147098a74((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147098a74 FUN_147098a74 body=114 status=ok
// SIG undefined FUN_147098a74(void)

void FUN_147098a74(longlong *param_1,int param_2)

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



// FUNCTION 147098ae6 FUN_147098ae6 body=474 status=ok
// SIG undefined FUN_147098ae6(void)

void FUN_147098ae6(longlong *param_1)

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



// FUNCTION 147098cc2 FUN_147098cc2 body=132 status=ok
// SIG undefined FUN_147098cc2(void)

void FUN_147098cc2(longlong param_1,int param_2)

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



// FUNCTION 147098d48 FUN_147098d48 body=360 status=ok
// SIG undefined FUN_147098d48(void)

void FUN_147098d48(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x28) == 0) {
LAB_147098e6b:
    if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  iVar3 = (int)param_3[1] + 1;
  if (-2 < (int)param_3[1]) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      FUN_14480809c(param_2);
    }
    iVar1 = (int)param_3[1];
    iVar3 = iVar1 + 1;
    if (-2 < iVar1) {
      if (*(int *)((longlong)param_2 + 0xc) <= iVar1) {
        FUN_14480809c(param_2);
        iVar1 = (int)param_3[1];
      }
      if (iVar1 != 0) {
        lVar4 = *param_3;
        lVar5 = (longlong)iVar1 << 3;
        do {
          FUN_1446dcdd4(local_68,lVar4);
          uVar2 = 0xffffffff;
          if (*(longlong *)(param_1 + 0x28) != 0) {
            uVar2 = FUN_1470941b4(*(longlong *)(param_1 + 0x28),local_68);
            if (*(longlong *)(param_1 + 0x30) != 0) {
              FUN_14709757e(*(longlong *)(param_1 + 0x30),uVar2);
            }
          }
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1447808da(param_2,iVar3);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = uVar2;
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          lVar4 = lVar4 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447808da(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = 0;
      goto LAB_147098e6b;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 147098ff0 FUN_147098ff0 body=287 status=ok
// SIG undefined FUN_147098ff0(void)

undefined4 * FUN_147098ff0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  char *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147099110(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  cVar1 = *(char *)*param_3;
  *local_40 = cVar1;
  *(undefined4 *)(local_40 + 4) = *puVar2;
  local_40[8] = -1;
  local_40[9] = -1;
  local_40[10] = -1;
  local_40[0xb] = -1;
  local_4c = local_48[0];
  cVar4 = FUN_1470991f6(param_1,(int)cVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (int)cVar1;
      *(uint *)(local_40 + 0xc) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1470992e8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147099110 FUN_147099110 body=229 status=ok
// SIG undefined FUN_147099110(void)

int * FUN_147099110(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1470991f6 FUN_1470991f6 body=127 status=ok
// SIG undefined FUN_1470991f6(void)

undefined8 FUN_1470991f6(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(char *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_147099276(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147099276 FUN_147099276 body=114 status=ok
// SIG undefined FUN_147099276(void)

void FUN_147099276(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1470992e8 FUN_1470992e8 body=423 status=ok
// SIG undefined FUN_1470992e8(void)

void FUN_1470992e8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(char *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 147099490 FUN_147099490 body=52 status=ok
// SIG undefined FUN_147099490(void)

void FUN_147099490(longlong *param_1)

{
  FUN_1470994c4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470994c4 FUN_1470994c4 body=89 status=ok
// SIG undefined FUN_1470994c4(void)

void FUN_1470994c4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14709951e FUN_14709951e body=52 status=ok
// SIG undefined FUN_14709951e(void)

void FUN_14709951e(longlong *param_1)

{
  FUN_147099552();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147099552 FUN_147099552 body=313 status=ok
// SIG undefined FUN_147099552(void)

void FUN_147099552(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709968c FUN_14709968c body=83 status=ok
// SIG undefined FUN_14709968c(void)

undefined8 * FUN_14709968c(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470996e0 FUN_1470996e0 body=76 status=ok
// SIG undefined FUN_1470996e0(void)

undefined8 * FUN_1470996e0(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a176f00;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709972c FUN_14709972c body=39 status=ok
// SIG undefined FUN_14709972c(void)

void FUN_14709972c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x80,0x10);
  FUN_140501b78(uVar1,param_1);
  return;
}



// FUNCTION 147099754 FUN_147099754 body=52 status=ok
// SIG undefined FUN_147099754(void)

undefined8 * FUN_147099754(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147099788 FUN_147099788 body=42 status=ok
// SIG undefined FUN_147099788(void)

undefined8 FUN_147099788(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/IndexedCurve.h",0x29,
                L"Pure virtual not implemented (%s)",L"FIndexedCurve::GetNumKeys");
  return 0;
}



// FUNCTION 1470997b2 FUN_1470997b2 body=41 status=ok
// SIG undefined FUN_1470997b2(void)

void FUN_1470997b2(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/IndexedCurve.h",0x2c,
                L"Pure virtual not implemented (%s)",L"FIndexedCurve::SetKeyTime");
  return;
}



// FUNCTION 1470997dc FUN_1470997dc body=43 status=ok
// SIG undefined FUN_1470997dc(void)

undefined8 FUN_1470997dc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/IndexedCurve.h",0x2f,
                L"Pure virtual not implemented (%s)",L"FIndexedCurve::GetKeyTime");
  return 0;
}



// FUNCTION 147099808 FUN_147099808 body=42 status=ok
// SIG undefined FUN_147099808(void)

undefined8 FUN_147099808(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/IndexedCurve.h",0x32,
                L"Pure virtual not implemented (%s)",L"FIndexedCurve::Duplicate");
  return 0;
}



// FUNCTION 147099832 FUN_147099832 body=56 status=ok
// SIG undefined FUN_147099832(void)

undefined8 FUN_147099832(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0x8e,
                L"Pure virtual not implemented (%s)",L"FRealCurve::AddKey");
  FUN_147a3fc60(param_2);
  return param_2;
}



// FUNCTION 14709986a FUN_14709986a body=41 status=ok
// SIG undefined FUN_14709986a(void)

void FUN_14709986a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0x96,
                L"Pure virtual not implemented (%s)",L"FRealCurve::DeleteKey");
  return;
}



// FUNCTION 147099894 FUN_147099894 body=56 status=ok
// SIG undefined FUN_147099894(void)

undefined8 FUN_147099894(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0x99,
                L"Pure virtual not implemented (%s)",L"FRealCurve::UpdateOrAddKey");
  FUN_147a3fc60(param_2);
  return param_2;
}



// FUNCTION 1470998cc FUN_1470998cc body=41 status=ok
// SIG undefined FUN_1470998cc(void)

void FUN_1470998cc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xa2,
                L"Pure virtual not implemented (%s)",L"FRealCurve::SetKeyValue");
  return;
}



// FUNCTION 1470998f6 FUN_1470998f6 body=43 status=ok
// SIG undefined FUN_1470998f6(void)

undefined8 FUN_1470998f6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xa5,
                L"Pure virtual not implemented (%s)",L"FRealCurve::GetKeyValue");
  return 0;
}



// FUNCTION 147099922 FUN_147099922 body=55 status=ok
// SIG undefined FUN_147099922(void)

undefined8 * FUN_147099922(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xa8,
                L"Pure virtual not implemented (%s)",L"FRealCurve::GetKeyTimeValuePair");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14709995a FUN_14709995a body=41 status=ok
// SIG undefined FUN_14709995a(void)

void FUN_14709995a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xaa,
                L"Pure virtual not implemented (%s)",L"FRealCurve::SetKeyInterpMode");
  return;
}



// FUNCTION 147099984 FUN_147099984 body=45 status=ok
// SIG undefined FUN_147099984(void)

undefined8 FUN_147099984(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xb5,
                L"Pure virtual not implemented (%s)",L"FRealCurve::GetTimeRange");
  return 3;
}



// FUNCTION 1470999b2 FUN_1470999b2 body=41 status=ok
// SIG undefined FUN_1470999b2(void)

void FUN_1470999b2(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xb8,
                L"Pure virtual not implemented (%s)",L"FRealCurve::GetTimeRange");
  return;
}



// FUNCTION 1470999dc FUN_1470999dc body=41 status=ok
// SIG undefined FUN_1470999dc(void)

void FUN_1470999dc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xbb,
                L"Pure virtual not implemented (%s)",L"FRealCurve::GetValueRange");
  return;
}



// FUNCTION 147099a06 FUN_147099a06 body=41 status=ok
// SIG undefined FUN_147099a06(void)

void FUN_147099a06(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xbe,
                L"Pure virtual not implemented (%s)",L"FRealCurve::Reset");
  return;
}



// FUNCTION 147099a30 FUN_147099a30 body=41 status=ok
// SIG undefined FUN_147099a30(void)

void FUN_147099a30(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xc1,
                L"Pure virtual not implemented (%s)",L"FRealCurve::RemapTimeValue");
  return;
}



// FUNCTION 147099a5a FUN_147099a5a body=43 status=ok
// SIG undefined FUN_147099a5a(void)

undefined8 FUN_147099a5a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xc4,
                L"Pure virtual not implemented (%s)",L"FRealCurve::Eval");
  return 0;
}



// FUNCTION 147099a86 FUN_147099a86 body=41 status=ok
// SIG undefined FUN_147099a86(void)

void FUN_147099a86(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",199,
                L"Pure virtual not implemented (%s)",L"FRealCurve::ReadjustTimeRange");
  return;
}



// FUNCTION 147099ab0 FUN_147099ab0 body=41 status=ok
// SIG undefined FUN_147099ab0(void)

void FUN_147099ab0(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xcb,
                L"Pure virtual not implemented (%s)",L"FRealCurve::BakeCurve");
  return;
}



// FUNCTION 147099ada FUN_147099ada body=41 status=ok
// SIG undefined FUN_147099ada(void)

void FUN_147099ada(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xca,
                L"Pure virtual not implemented (%s)",L"FRealCurve::BakeCurve");
  return;
}



// FUNCTION 147099b04 FUN_147099b04 body=41 status=ok
// SIG undefined FUN_147099b04(void)

void FUN_147099b04(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xcf,
                L"Pure virtual not implemented (%s)",L"FRealCurve::RemoveRedundantKeys");
  return;
}



// FUNCTION 147099b2e FUN_147099b2e body=41 status=ok
// SIG undefined FUN_147099b2e(void)

void FUN_147099b2e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xce,
                L"Pure virtual not implemented (%s)",L"FRealCurve::RemoveRedundantKeys");
  return;
}



// FUNCTION 147099b58 FUN_147099b58 body=45 status=ok
// SIG undefined FUN_147099b58(void)

undefined8 FUN_147099b58(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Curves/RealCurve.h",0xd3,
                L"Pure virtual not implemented (%s)",L"FRealCurve::GetKeyIndex");
  return 0xffffffff;
}



// FUNCTION 147099b86 FUN_147099b86 body=52 status=ok
// SIG undefined FUN_147099b86(void)

undefined8 * FUN_147099b86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147099bba FUN_147099bba body=111 status=ok
// SIG undefined FUN_147099bba(void)

void FUN_147099bba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a174468;
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
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000147099c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147099c2a FUN_147099c2a body=87 status=ok
// SIG undefined FUN_147099c2a(void)

void FUN_147099c2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147099c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147099c82 FUN_147099c82 body=112 status=ok
// SIG undefined FUN_147099c82(void)

void FUN_147099c82(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x250,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x250)) {
      uVar2 = uVar1 / 0x250 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x250,8);
  }
  return;
}



// FUNCTION 147099cf2 FUN_147099cf2 body=106 status=ok
// SIG undefined FUN_147099cf2(void)

void FUN_147099cf2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  do {
    FUN_14140d2b4(param_1,param_2);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
    lVar1 = *(longlong *)(param_2 + 0x240);
    *(longlong *)(param_1 + 0x240) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined2 *)(param_1 + 0x248) = *(undefined2 *)(param_2 + 0x248);
    param_1 = param_1 + 0x250;
    param_2 = param_2 + 0x250;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147099d5c FUN_147099d5c body=146 status=ok
// SIG undefined FUN_147099d5c(void)

void FUN_147099d5c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x250,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x250)) {
      uVar5 = uVar4 / 0x250 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x250,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147099df0 FUN_147099df0 body=89 status=ok
// SIG undefined FUN_147099df0(void)

void FUN_147099df0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1414ba383(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147099e4a FUN_147099e4a body=62 status=ok
// SIG undefined FUN_147099e4a(void)

void FUN_147099e4a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147099e88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147099e88 FUN_147099e88 body=93 status=ok
// SIG undefined FUN_147099e88(void)

ulonglong FUN_147099e88(uint param_1,uint param_2)

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



// FUNCTION 147099ee5 FUN_147099ee5 body=15 status=ok
// SIG undefined FUN_147099ee5(void)

void FUN_147099ee5(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147099ef4 FUN_147099ef4 body=147 status=ok
// SIG undefined FUN_147099ef4(void)

void FUN_147099ef4(longlong param_1,int param_2)

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



// FUNCTION 147099f88 FUN_147099f88 body=29 status=ok
// SIG undefined FUN_147099f88(void)

void FUN_147099f88(longlong param_1)

{
  FUN_14612e9e2();
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  return;
}



// FUNCTION 147099fa6 FUN_147099fa6 body=3 status=ok
// SIG undefined FUN_147099fa6(void)

undefined8 FUN_147099fa6(void)

{
  return 0;
}



// FUNCTION 147099faa FUN_147099faa body=48 status=ok
// SIG undefined FUN_147099faa(void)

void FUN_147099faa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147099fda FUN_147099fda body=128 status=ok
// SIG undefined FUN_147099fda(void)

void FUN_147099fda(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9a0e38;
  if (DAT_14c9a0e6c != 0) {
    *(int *)(DAT_14c9a0e38 + (longlong)DAT_14c9a0e68 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a0e6c) {
    iVar4 = DAT_14c9a0e68;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c9a0e6c = DAT_14c9a0e6c + 1;
  puVar3 = &DAT_14c9a0e48;
  if (DAT_14c9a0e58 != (undefined *)0x0) {
    puVar3 = DAT_14c9a0e58;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a0e68 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14709a05a FUN_14709a05a body=48 status=ok
// SIG undefined FUN_14709a05a(void)

void FUN_14709a05a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14709a08a FUN_14709a08a body=132 status=ok
// SIG undefined FUN_14709a08a(void)

void FUN_14709a08a(longlong param_1,int param_2)

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



// FUNCTION 14709a110 FUN_14709a110 body=31 status=ok
// SIG undefined FUN_14709a110(void)

undefined8 FUN_14709a110(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709a14c FUN_14709a14c body=93 status=ok
// SIG undefined FUN_14709a14c(void)

void FUN_14709a14c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1762b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14709a1aa FUN_14709a1aa body=126 status=ok
// SIG undefined FUN_14709a1aa(void)

void FUN_14709a1aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1762b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709a219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709a228 FUN_14709a228 body=21 status=ok
// SIG undefined FUN_14709a228(void)

undefined8 FUN_14709a228(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14709a23e FUN_14709a23e body=799 status=ok
// SIG undefined FUN_14709a23e(void)

void FUN_14709a23e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1470a23fd();
    FUN_1470a07cc(*(undefined8 *)(param_1 + 8));
    if (DAT_14c83f348 != (undefined8 *)0x0 && DAT_14c83f350 != 0) {
      (**(code **)*DAT_14c83f348)(DAT_14c83f348,0);
      FUN_1446efa72(&DAT_14c83f348,0,0,0x10);
      DAT_14c83f350 = 0;
    }
    if (DAT_14c83f358 != (undefined8 *)0x0 && DAT_14c83f360 != 0) {
      (**(code **)*DAT_14c83f358)(DAT_14c83f358,0);
      FUN_1446efa72(&DAT_14c83f358,0,0,0x10);
      DAT_14c83f360 = 0;
    }
    if (DAT_14c83f368 != (undefined8 *)0x0 && DAT_14c83f370 != 0) {
      (**(code **)*DAT_14c83f368)(DAT_14c83f368,0);
      FUN_1446efa72(&DAT_14c83f368,0,0,0x10);
      DAT_14c83f370 = 0;
    }
    if (DAT_14c83f378 != (undefined8 *)0x0 && DAT_14c83f380 != 0) {
      (**(code **)*DAT_14c83f378)(DAT_14c83f378,0);
      FUN_1446efa72(&DAT_14c83f378,0,0,0x10);
      DAT_14c83f380 = 0;
    }
    if (DAT_14c83f388 != (undefined8 *)0x0 && DAT_14c83f390 != 0) {
      (**(code **)*DAT_14c83f388)(DAT_14c83f388,0);
      FUN_1446efa72(&DAT_14c83f388,0,0,0x10);
      DAT_14c83f390 = 0;
    }
    if (DAT_14c83f398 != (undefined8 *)0x0 && DAT_14c83f3a0 != 0) {
      (**(code **)*DAT_14c83f398)(DAT_14c83f398,0);
      FUN_1446efa72(&DAT_14c83f398,0,0,0x10);
      DAT_14c83f3a0 = 0;
    }
    if (DAT_14c83f3a8 != (undefined8 *)0x0 && DAT_14c83f3b0 != 0) {
      (**(code **)*DAT_14c83f3a8)(DAT_14c83f3a8,0);
      FUN_1446efa72(&DAT_14c83f3a8,0,0,0x10);
      DAT_14c83f3b0 = 0;
    }
    if (DAT_14c83f3b8 != (undefined8 *)0x0 && DAT_14c83f3c0 != 0) {
      (**(code **)*DAT_14c83f3b8)(DAT_14c83f3b8,0);
      FUN_1446efa72(&DAT_14c83f3b8,0,0,0x10);
      DAT_14c83f3c0 = 0;
    }
    if (DAT_14c83f3c8 != (undefined8 *)0x0 && DAT_14c83f3d0 != 0) {
      (**(code **)*DAT_14c83f3c8)(DAT_14c83f3c8,0);
      FUN_1446efa72(&DAT_14c83f3c8,0,0,0x10);
      DAT_14c83f3d0 = 0;
    }
    uVar2 = FUN_144a52528();
    FUN_1446ddc76(&local_28,"AssetRegistry",1);
    cVar1 = FUN_14011feae(uVar2,local_28);
    if (cVar1 != '\0') {
      FUN_1446ddc76(&local_30,"AssetRegistry",1);
      uVar2 = FUN_144a52528();
      FUN_14493e38c(uVar2,local_30);
      FUN_14700e08a(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_1470a1518(*(undefined8 *)(param_1 + 0x10),param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709a56e FUN_14709a56e body=127 status=ok
// SIG undefined FUN_14709a56e(void)

undefined8 * FUN_14709a56e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"GbxNexus",1);
  lVar1 = FUN_1447c1074(local_20);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 0x18);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709a5ee FUN_14709a5ee body=31 status=ok
// SIG undefined FUN_14709a5ee(void)

undefined8 FUN_14709a5ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709a630 FUN_14709a630 body=93 status=ok
// SIG undefined FUN_14709a630(void)

void FUN_14709a630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1763f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709a68e FUN_14709a68e body=93 status=ok
// SIG undefined FUN_14709a68e(void)

void FUN_14709a68e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1763f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709a6ec FUN_14709a6ec body=126 status=ok
// SIG undefined FUN_14709a6ec(void)

void FUN_14709a6ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1763f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a176380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709a75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709a76e FUN_14709a76e body=14 status=ok
// SIG undefined FUN_14709a76e(void)

undefined1 FUN_14709a76e(longlong param_1)

{
  (**(code **)(param_1 + 0x18))();
  return 1;
}



// FUNCTION 14709a77e FUN_14709a77e body=31 status=ok
// SIG undefined FUN_14709a77e(void)

undefined8 FUN_14709a77e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709a7c0 FUN_14709a7c0 body=93 status=ok
// SIG undefined FUN_14709a7c0(void)

void FUN_14709a7c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1764d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709a81e FUN_14709a81e body=93 status=ok
// SIG undefined FUN_14709a81e(void)

void FUN_14709a81e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1764d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709a87c FUN_14709a87c body=126 status=ok
// SIG undefined FUN_14709a87c(void)

void FUN_14709a87c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1764d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a176460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709a8eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709a908 FUN_14709a908 body=23 status=ok
// SIG undefined FUN_14709a908(void)

undefined8 FUN_14709a908(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14709a922 FUN_14709a922 body=31 status=ok
// SIG undefined FUN_14709a922(void)

undefined8 FUN_14709a922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709a964 FUN_14709a964 body=93 status=ok
// SIG undefined FUN_14709a964(void)

void FUN_14709a964(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1765b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709a9c2 FUN_14709a9c2 body=93 status=ok
// SIG undefined FUN_14709a9c2(void)

void FUN_14709a9c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1765b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709aa20 FUN_14709aa20 body=126 status=ok
// SIG undefined FUN_14709aa20(void)

void FUN_14709aa20(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1765b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a176540;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709aa8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709aaa8 FUN_14709aaa8 body=19 status=ok
// SIG undefined FUN_14709aaa8(void)

undefined8 FUN_14709aaa8(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14709aabe FUN_14709aabe body=31 status=ok
// SIG undefined FUN_14709aabe(void)

undefined8 FUN_14709aabe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709ab00 FUN_14709ab00 body=93 status=ok
// SIG undefined FUN_14709ab00(void)

void FUN_14709ab00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176690;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709ab5e FUN_14709ab5e body=93 status=ok
// SIG undefined FUN_14709ab5e(void)

void FUN_14709ab5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176690;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709abbc FUN_14709abbc body=126 status=ok
// SIG undefined FUN_14709abbc(void)

void FUN_14709abbc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a176690;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a176620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709ac2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709ac44 FUN_14709ac44 body=20 status=ok
// SIG undefined FUN_14709ac44(void)

undefined8 FUN_14709ac44(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14709ac5a FUN_14709ac5a body=31 status=ok
// SIG undefined FUN_14709ac5a(void)

undefined8 FUN_14709ac5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709ac9c FUN_14709ac9c body=93 status=ok
// SIG undefined FUN_14709ac9c(void)

void FUN_14709ac9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709acfa FUN_14709acfa body=93 status=ok
// SIG undefined FUN_14709acfa(void)

void FUN_14709acfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709ad58 FUN_14709ad58 body=126 status=ok
// SIG undefined FUN_14709ad58(void)

void FUN_14709ad58(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a176770;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a176700;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709adc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709add6 FUN_14709add6 body=20 status=ok
// SIG undefined FUN_14709add6(void)

undefined8 FUN_14709add6(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14709adec FUN_14709adec body=31 status=ok
// SIG undefined FUN_14709adec(void)

undefined8 FUN_14709adec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709ae2e FUN_14709ae2e body=93 status=ok
// SIG undefined FUN_14709ae2e(void)

void FUN_14709ae2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1767e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709ae8c FUN_14709ae8c body=93 status=ok
// SIG undefined FUN_14709ae8c(void)

void FUN_14709ae8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1767e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709aeea FUN_14709aeea body=126 status=ok
// SIG undefined FUN_14709aeea(void)

void FUN_14709aeea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a176850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1767e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709af59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709af76 FUN_14709af76 body=23 status=ok
// SIG undefined FUN_14709af76(void)

undefined8 FUN_14709af76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14709af90 FUN_14709af90 body=31 status=ok
// SIG undefined FUN_14709af90(void)

undefined8 FUN_14709af90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709afd2 FUN_14709afd2 body=93 status=ok
// SIG undefined FUN_14709afd2(void)

void FUN_14709afd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1768c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709b030 FUN_14709b030 body=93 status=ok
// SIG undefined FUN_14709b030(void)

void FUN_14709b030(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176930;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1768c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709b08e FUN_14709b08e body=126 status=ok
// SIG undefined FUN_14709b08e(void)

void FUN_14709b08e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a176930;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1768c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709b0fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709b118 FUN_14709b118 body=22 status=ok
// SIG undefined FUN_14709b118(void)

undefined8 FUN_14709b118(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14709b130 FUN_14709b130 body=31 status=ok
// SIG undefined FUN_14709b130(void)

undefined8 FUN_14709b130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709b16e FUN_14709b16e body=93 status=ok
// SIG undefined FUN_14709b16e(void)

void FUN_14709b16e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176a10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1769a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709b1cc FUN_14709b1cc body=93 status=ok
// SIG undefined FUN_14709b1cc(void)

void FUN_14709b1cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176a10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1769a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709b22a FUN_14709b22a body=126 status=ok
// SIG undefined FUN_14709b22a(void)

void FUN_14709b22a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a176a10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1769a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709b299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709b2a8 FUN_14709b2a8 body=25 status=ok
// SIG undefined FUN_14709b2a8(void)

undefined8 FUN_14709b2a8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 14709b2c4 FUN_14709b2c4 body=31 status=ok
// SIG undefined FUN_14709b2c4(void)

undefined8 FUN_14709b2c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709b306 FUN_14709b306 body=93 status=ok
// SIG undefined FUN_14709b306(void)

void FUN_14709b306(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a176b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176aa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14709b364 FUN_14709b364 body=126 status=ok
// SIG undefined FUN_14709b364(void)

void FUN_14709b364(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a176b10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a176aa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014709b3d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14709b3e2 FUN_14709b3e2 body=26 status=ok
// SIG undefined FUN_14709b3e2(void)

undefined8 FUN_14709b3e2(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return param_2;
}



// FUNCTION 14709b3fc FUN_14709b3fc body=102 status=ok
// SIG undefined FUN_14709b3fc(void)

undefined8 FUN_14709b3fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709b466 FUN_14709b466 body=114 status=ok
// SIG undefined FUN_14709b466(void)

void FUN_14709b466(longlong *param_1,int param_2)

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



// FUNCTION 14709b4d8 FUN_14709b4d8 body=62 status=ok
// SIG undefined FUN_14709b4d8(void)

void FUN_14709b4d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14709b516(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14709b516 FUN_14709b516 body=93 status=ok
// SIG undefined FUN_14709b516(void)

ulonglong FUN_14709b516(uint param_1,uint param_2)

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



// FUNCTION 14709b573 FUN_14709b573 body=45 status=ok
// SIG undefined FUN_14709b573(void)

void FUN_14709b573(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
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
  }
  return;
}



// FUNCTION 14709b5a0 FUN_14709b5a0 body=132 status=ok
// SIG undefined FUN_14709b5a0(void)

void FUN_14709b5a0(longlong param_1,int param_2)

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



// FUNCTION 14709b626 FUN_14709b626 body=86 status=ok
// SIG undefined FUN_14709b626(void)

void FUN_14709b626(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14709b67c FUN_14709b67c body=7 status=ok
// SIG undefined FUN_14709b67c(void)

void FUN_14709b67c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14709b684 FUN_14709b684 body=132 status=ok
// SIG undefined FUN_14709b684(void)

void FUN_14709b684(longlong param_1,int param_2)

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



// FUNCTION 14709b70a FUN_14709b70a body=62 status=ok
// SIG undefined FUN_14709b70a(void)

void FUN_14709b70a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14709b748(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14709b748 FUN_14709b748 body=93 status=ok
// SIG undefined FUN_14709b748(void)

ulonglong FUN_14709b748(uint param_1,uint param_2)

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



// FUNCTION 14709b7a5 FUN_14709b7a5 body=38 status=ok
// SIG undefined FUN_14709b7a5(void)

void FUN_14709b7a5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1401d9a90(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 14709b7cc FUN_14709b7cc body=96 status=ok
// SIG undefined FUN_14709b7cc(void)

void FUN_14709b7cc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14709b82c FUN_14709b82c body=132 status=ok
// SIG undefined FUN_14709b82c(void)

void FUN_14709b82c(longlong param_1,int param_2)

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



// FUNCTION 14709b8b2 FUN_14709b8b2 body=52 status=ok
// SIG undefined FUN_14709b8b2(void)

void FUN_14709b8b2(longlong *param_1)

{
  FUN_14709b8e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14709b8e6 FUN_14709b8e6 body=89 status=ok
// SIG undefined FUN_14709b8e6(void)

void FUN_14709b8e6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14709b940 FUN_14709b940 body=63 status=ok
// SIG undefined FUN_14709b940(void)

void FUN_14709b940(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1470994c4(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147098ae6(param_1);
    return;
  }
  FUN_14709b980(param_1);
  FUN_1470994c4(param_1);
  return;
}



// FUNCTION 14709b980 FUN_14709b980 body=322 status=ok
// SIG undefined FUN_14709b980(void)

void FUN_14709b980(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 14709bac4 FUN_14709bac4 body=132 status=ok
// SIG undefined FUN_14709bac4(void)

void FUN_14709bac4(longlong param_1,int param_2)

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



// FUNCTION 14709bb4a FUN_14709bb4a body=322 status=ok
// SIG undefined FUN_14709bb4a(void)

undefined4 * FUN_14709bb4a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14709bc8e(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14709bd74(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14709be88(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709bc8e FUN_14709bc8e body=229 status=ok
// SIG undefined FUN_14709bc8e(void)

int * FUN_14709bc8e(longlong *param_1,int *param_2)

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



// FUNCTION 14709bd74 FUN_14709bd74 body=161 status=ok
// SIG undefined FUN_14709bd74(void)

undefined8 FUN_14709bd74(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14709be16(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14709be16 FUN_14709be16 body=114 status=ok
// SIG undefined FUN_14709be16(void)

void FUN_14709be16(longlong *param_1,int param_2)

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



// FUNCTION 14709be88 FUN_14709be88 body=477 status=ok
// SIG undefined FUN_14709be88(void)

void FUN_14709be88(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14709c066 FUN_14709c066 body=116 status=ok
// SIG undefined FUN_14709c066(void)

void FUN_14709c066(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 14709c0e8 FUN_14709c0e8 body=37 status=ok
// SIG undefined FUN_14709c0e8(void)

void FUN_14709c0e8(undefined2 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 14709c10e FUN_14709c10e body=63 status=ok
// SIG undefined FUN_14709c10e(void)

void FUN_14709c10e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14709c14e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 14709c14e FUN_14709c14e body=126 status=ok
// SIG undefined FUN_14709c14e(void)

ulonglong FUN_14709c14e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x1c) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1c,4);
      uVar1 = uVar1 / 0x1c;
    }
  }
  return uVar1;
}



// FUNCTION 14709c1cc FUN_14709c1cc body=133 status=ok
// SIG undefined FUN_14709c1cc(void)

undefined4 FUN_14709c1cc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_147899197();
    FUN_1446ddc76(&local_28,param_1,1);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = 0;
      iVar1 = FUN_1448e5bf4(lVar2,local_28,0);
      if (iVar1 != -1) {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar1 * 0x10);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709c252 FUN_14709c252 body=133 status=ok
// SIG undefined FUN_14709c252(void)

undefined4 FUN_14709c252(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_1478991de();
    FUN_1446ddc76(&local_28,param_1,1);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = 0;
      iVar1 = FUN_1448e5bf4(lVar2,local_28,0);
      if (iVar1 != -1) {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar1 * 0x10);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709c2d8 FUN_14709c2d8 body=133 status=ok
// SIG undefined FUN_14709c2d8(void)

undefined4 FUN_14709c2d8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_147899215();
    FUN_1446ddc76(&local_28,param_1,1);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = 0;
      iVar1 = FUN_1448e5bf4(lVar2,local_28,0);
      if (iVar1 != -1) {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)iVar1 * 0x10);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709c35e FUN_14709c35e body=236 status=ok
// SIG undefined FUN_14709c35e(void)

void FUN_14709c35e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar3[1] = &DAT_100000001;
    *puVar3 = &PTR_LAB_14a176d30;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined8 **)(param_1 + 0x40) = puVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = puVar3;
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
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    FUN_140b45ed2(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),&local_19);
    plVar4 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar4 != *(longlong **)(param_1 + 8)) {
      do {
        strcpy((char *)(**(longlong **)(param_1 + 0x40) + plVar4[3]),(char *)plVar4[2]);
        plVar4 = (longlong *)*plVar4;
      } while (plVar4 != (longlong *)*(longlong *)(param_1 + 8));
    }
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709c44c FUN_14709c44c body=216 status=ok
// SIG undefined FUN_14709c44c(void)

void FUN_14709c44c(longlong param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  char *local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 < 0) {
    sVar3 = strlen(param_2);
    param_3 = (int)sVar3;
  }
  *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (longlong)param_3 + 1;
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
  lVar5 = 0x1505;
  cVar1 = *param_2;
  pcVar4 = param_2;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    lVar5 = (longlong)cVar1 + lVar5 * 0x21;
    cVar1 = *pcVar4;
  }
  local_40 = param_2;
  FUN_14709e5d2(param_1,&local_38,&local_40,lVar5);
  if ((local_30 == 0) || (*(longlong *)(param_1 + 8) == local_30)) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    local_40 = param_2;
    FUN_14709e63e(param_1,&local_38);
    *(undefined8 *)(local_38 + 0x18) = uVar2;
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + (longlong)param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709c526 FUN_14709c526 body=135 status=ok
// SIG undefined FUN_14709c526(void)

undefined8 FUN_14709c526(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xf;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_140c1c83a(local_48,&local_38);
  pppuVar1 = &local_38;
  if (0xf < local_20) {
    pppuVar1 = (undefined8 ***)local_38;
  }
  FUN_1400b22c2(param_2,pppuVar1);
  FUN_1401d9a90(&local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709c5ae FUN_14709c5ae body=146 status=ok
// SIG undefined FUN_14709c5ae(void)

undefined8 FUN_14709c5ae(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_20 = 0xf;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_47 = param_3;
  FUN_140c1c83a(0,&local_38,&local_48);
  pppuVar1 = &local_38;
  if (0xf < local_20) {
    pppuVar1 = (undefined8 ***)local_38;
  }
  FUN_1400b22c2(param_2,pppuVar1);
  FUN_1401d9a90(&local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709c642 FUN_14709c642 body=1487 status=ok
// SIG undefined FUN_14709c642(void)

ulonglong FUN_14709c642(byte *param_1,byte *param_2,char *param_3)

{
  uint uVar1;
  char *_Str1;
  char *_Str2;
  byte *pbVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  byte bVar13;
  longlong *plVar14;
  undefined8 unaff_RDI;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auStack_c8 [44];
  undefined2 local_9c;
  char local_9a;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_6c;
  char local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != (byte *)0x0) {
    if ((param_3[2] == '\0') &&
       (uVar15 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1), (param_2[2] & 0x10) != 0))
    goto LAB_14709c696;
    bVar5 = *param_1;
    bVar13 = *param_2 ^ bVar5;
    if ((bVar13 & 3) == 0) {
      uVar15 = 0;
      if (((bVar13 & 0x40) != 0) || ((bVar13 & 0x3c) != 0 && param_3[1] == '\x01'))
      goto LAB_14709c696;
      if ((((param_2[1] ^ param_1[1]) & 0xc) == 0) &&
         ((((param_2[3] ^ param_1[3]) & 7) == 0 &&
          (*(short *)(param_1 + 0x20) == *(short *)(param_2 + 0x20))))) {
        if ((bVar5 & 3) == 1) {
          _Str1 = *(char **)(param_1 + 8);
          _Str2 = *(char **)(param_2 + 8);
          uVar15 = (ulonglong)(_Str1 == (char *)0x0 && _Str2 == (char *)0x0);
          if (_Str2 == (char *)0x0 || _Str1 == (char *)0x0) goto LAB_14709c696;
          if (*param_3 == '\0') {
            lVar16 = 0;
            do {
              bVar5 = _Str1[lVar16];
              bVar13 = _Str2[lVar16];
              if (bVar5 == bVar13) {
                iVar6 = 0;
                if (bVar5 == 0) goto LAB_14709c74b;
              }
              else {
                if (0x7f < (bVar13 | bVar5)) {
                  iVar6 = (uint)bVar5 - (uint)bVar13;
                  goto LAB_14709c74b;
                }
                if ((&DAT_149e05da0)[bVar5] != (&DAT_149e05da0)[(uint)bVar13])
                goto code_r0x00014709c7d9;
              }
              lVar16 = lVar16 + 1;
            } while( true );
          }
          iVar6 = strcmp(_Str1,_Str2);
          goto LAB_14709c74b;
        }
        if (((-1 < (char)bVar13) && (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))) &&
           (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
          if ((bVar5 & 3) != 2) {
LAB_14709c8f8:
            uVar15 = 1;
            if ((~bVar5 & 3) == 0) {
              lVar16 = *(longlong *)(param_1 + 8);
              plVar10 = (longlong *)(lVar16 + 0x18);
              plVar8 = (longlong *)(lVar16 + 0x30);
              local_68 = 0x100000000;
              local_58 = 0xffffffff;
              uStack_50 = 0;
              uStack_60 = plVar8;
              if (*(int *)(lVar16 + 0x48) == 0) {
                iVar6 = 0;
              }
              else {
                FUN_1449c0562(&local_68);
                iVar6 = *(int *)(lVar16 + 0x48);
              }
              uStack_78 = CONCAT44(uStack_4c,uStack_50);
              local_80 = local_58;
              uVar3 = local_80;
              local_90 = (undefined4)local_68;
              uStack_8c = local_68._4_4_;
              uStack_88 = (undefined4)uStack_60;
              uStack_84 = uStack_60._4_4_;
              local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
              local_98 = plVar10;
              if ((local_80._4_4_ != iVar6) || (uStack_60 != plVar8)) {
                iVar7 = local_80._4_4_;
                local_80 = uVar3;
                do {
                  plVar14 = &DAT_14c9a1288;
                  if ((*param_2 & 2) != 0) {
                    plVar14 = (longlong *)(*(longlong *)(param_2 + 8) + 0x18);
                  }
                  if ((int)plVar14[2] == *(int *)((longlong)plVar14 + 0x3c)) goto LAB_14709c694;
                  puVar11 = (uint *)((longlong)iVar7 * 0x40 + *local_98);
                  uVar1 = *puVar11;
                  plVar12 = plVar14 + 8;
                  if ((longlong *)plVar14[9] != (longlong *)0x0) {
                    plVar12 = (longlong *)plVar14[9];
                  }
                  iVar7 = *(int *)((longlong)plVar12 +
                                  (ulonglong)((int)plVar14[10] - 1U & uVar1) * 4);
                  if (iVar7 == -1) goto LAB_14709c694;
                  while (lVar16 = *plVar14 + (longlong)iVar7 * 0x40,
                        *(uint *)(*plVar14 + (longlong)iVar7 * 0x40) != uVar1) {
                    iVar7 = *(int *)(lVar16 + 0x38);
                    if (iVar7 == -1) goto LAB_14709c694;
                  }
                  if ((lVar16 == 0) || (lVar16 + 0x28 == 0)) goto LAB_14709c694;
                  local_9a = param_3[2];
                  local_9c = *(undefined2 *)param_3;
                  cVar4 = FUN_1470920bc(puVar11 + 10,lVar16 + 0x28,&local_9c);
                  if (cVar4 == '\0') goto LAB_14709c694;
                  local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
                  FUN_1449c0562(&local_90);
                  iVar7 = local_80._4_4_;
                  uVar3 = local_80;
                } while (((longlong *)CONCAT44(uStack_84,uStack_88) != plVar8 ||
                         local_80._4_4_ != iVar6) || local_98 != plVar10);
              }
              local_80 = uVar3;
              if ((*param_2 & 2) == 0) {
                plVar10 = &DAT_14c9a1288;
              }
              else {
                plVar10 = (longlong *)(*(longlong *)(param_2 + 8) + 0x18);
              }
              plVar8 = plVar10 + 3;
              local_68 = 0x100000000;
              local_58 = 0xffffffff;
              uStack_50 = 0;
              uStack_60 = plVar8;
              if ((int)plVar10[6] == 0) {
                iVar6 = 0;
              }
              else {
                FUN_1449c0562(&local_68);
                iVar6 = (int)plVar10[6];
              }
              local_90 = (undefined4)local_68;
              uStack_8c = local_68._4_4_;
              uStack_88 = (undefined4)uStack_60;
              uStack_84 = uStack_60._4_4_;
              uStack_78 = CONCAT44(uStack_4c,uStack_50);
              local_80 = local_58;
              uVar3 = local_80;
              local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
              iVar7 = local_80._4_4_;
              local_98 = plVar10;
              if ((local_80._4_4_ != iVar6) || (local_80 = local_58, uStack_60 != plVar8)) {
                do {
                  local_80 = uVar3;
                  pbVar2 = *(byte **)(*local_98 + 0x28 + (longlong)iVar7 * 0x40);
                  if ((pbVar2 != (byte *)0x0) && (((*pbVar2 & 3) != 0 && ((pbVar2[2] & 0x10) == 0)))
                     ) {
                    if ((*param_1 & 2) == 0) {
                      plVar14 = &DAT_14c9a1288;
                    }
                    else {
                      plVar14 = (longlong *)(*(longlong *)(param_1 + 8) + 0x18);
                    }
                    if ((int)plVar14[2] == *(int *)((longlong)plVar14 + 0x3c)) goto LAB_14709c694;
                    uVar1 = *(uint *)(*local_98 + (longlong)iVar7 * 0x40);
                    plVar12 = plVar14 + 8;
                    if ((longlong *)plVar14[9] != (longlong *)0x0) {
                      plVar12 = (longlong *)plVar14[9];
                    }
                    iVar7 = *(int *)((longlong)plVar12 +
                                    (ulonglong)((int)plVar14[10] - 1U & uVar1) * 4);
                    if (iVar7 == -1) goto LAB_14709c694;
                    while (lVar16 = *plVar14 + (longlong)iVar7 * 0x40,
                          *(uint *)(*plVar14 + (longlong)iVar7 * 0x40) != uVar1) {
                      iVar7 = *(int *)(lVar16 + 0x38);
                      if (iVar7 == -1) goto LAB_14709c694;
                    }
                    if ((lVar16 == 0) || (lVar16 == -0x28)) goto LAB_14709c694;
                  }
                  local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
                  FUN_1449c0562(&local_90);
                  iVar7 = local_80._4_4_;
                  uVar3 = local_80;
                } while (((longlong *)CONCAT44(uStack_84,uStack_88) != plVar8 ||
                         local_80._4_4_ != iVar6) || local_98 != plVar10);
              }
            }
            goto LAB_14709c696;
          }
          if ((*param_2 & 2) == 0) {
            puVar9 = &DAT_14c9a1270;
          }
          else {
            puVar9 = *(undefined8 **)(param_2 + 8);
          }
          if (*(int *)(*(longlong *)(param_1 + 8) + 0x10) <= *(int *)(puVar9 + 2)) {
            lVar18 = 0;
            lVar16 = 0;
            uVar15 = 0;
            do {
              bVar5 = *param_1;
              if ((bVar5 & 2) == 0) {
                plVar10 = &DAT_14c9a1270;
                iVar6 = DAT_14c9a1280;
              }
              else {
                plVar10 = *(longlong **)(param_1 + 8);
                iVar6 = (int)plVar10[2];
              }
              if (iVar6 <= lVar16) {
                bVar13 = *param_2;
                lVar16 = 0;
                lVar18 = 0;
                goto LAB_14709c882;
              }
              local_6a = param_3[2];
              local_6c = *(undefined2 *)param_3;
              plVar8 = &DAT_14c9a1270;
              if ((*param_2 & 2) != 0) {
                plVar8 = *(longlong **)(param_2 + 8);
              }
              cVar4 = FUN_1470920bc(*plVar10 + lVar18,*plVar8 + lVar18,&local_6c);
              lVar16 = lVar16 + 1;
              lVar18 = lVar18 + 0x10;
            } while (cVar4 != '\0');
            goto LAB_14709c696;
          }
        }
      }
    }
  }
LAB_14709c694:
  uVar15 = 0;
  goto LAB_14709c696;
LAB_14709c882:
  puVar9 = &DAT_14c9a1270;
  if ((bVar13 & 2) != 0) {
    puVar9 = *(undefined8 **)(param_2 + 8);
  }
  puVar17 = &DAT_14c9a1270;
  if ((bVar5 & 2) != 0) {
    puVar17 = *(undefined8 **)(param_1 + 8);
  }
  if ((longlong)*(int *)(puVar9 + 2) - (longlong)*(int *)(puVar17 + 2) <= lVar18)
  goto LAB_14709c8f8;
  plVar10 = &DAT_14c9a1270;
  if ((bVar13 & 2) != 0) {
    plVar10 = *(longlong **)(param_2 + 8);
  }
  if ((*(byte **)(*plVar10 + lVar16) != (byte *)0x0) && ((**(byte **)(*plVar10 + lVar16) & 3) != 0))
  {
    plVar10 = &DAT_14c9a1270;
    if ((bVar13 & 2) != 0) {
      plVar10 = *(longlong **)(param_2 + 8);
    }
    if (((*(byte *)(*(longlong *)(*plVar10 + lVar16) + 2) & 0x10) == 0) || (param_3[2] != '\0'))
    goto LAB_14709c694;
  }
  lVar18 = lVar18 + 1;
  lVar16 = lVar16 + 0x10;
  goto LAB_14709c882;
code_r0x00014709c7d9:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[bVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar13];
LAB_14709c74b:
  uVar15 = (ulonglong)(iVar6 == 0);
LAB_14709c696:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 14709cc12 FUN_14709cc12 body=46 status=ok
// SIG undefined FUN_14709cc12(void)

undefined8 FUN_14709cc12(byte *param_1)

{
  if ((((param_1[1] & 2) == 0) && ((*param_1 & 0x83) == 2)) &&
     (*(int *)(*(longlong *)(param_1 + 8) + 0x10) < 1)) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *param_1 = *param_1 | 0x80;
    return 1;
  }
  return 0;
}



// FUNCTION 14709cc40 FUN_14709cc40 body=312 status=ok
// SIG undefined FUN_14709cc40(void)

undefined8 FUN_14709cc40(byte *param_1,ushort param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar6;
  ulonglong uVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  lVar1 = DAT_14c9a1ab0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_1[1] & 2) == 0) && ((*param_1 & 3) == 1)) && (DAT_14c9a1ab0 != 0)) {
    *(ushort *)(param_1 + 0x20) = param_2;
    if (param_2 == 0x7fff) {
      pcVar5 = "Asset";
    }
    else if ((((short)param_2 < 0) || (*(int *)(lVar1 + 0xd0) <= (int)(short)param_2)) ||
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 200) + (ulonglong)param_2 * 8), lVar1 == 0)
            ) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = *(char **)(lVar1 + 0xb8);
    }
    *(char **)(param_1 + 0x28) = pcVar5;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,param_3,0);
    uVar3 = FUN_14009aea0(&DAT_14c9a1320,&local_58);
    *(int *)(param_1 + 0x24) = (int)uVar3;
    if (local_40 != 0) {
      uVar3 = FUN_1400020a8();
    }
    *param_1 = *param_1 & 0x7f;
    bVar2 = param_1[1];
    uVar6 = (undefined7)((ulonglong)uVar3 >> 8);
    if ((bVar2 & 2) == 0) {
      uVar3 = FUN_140126aca(param_1,param_3);
      bVar2 = param_1[1];
      uVar6 = (undefined7)((ulonglong)uVar3 >> 8);
    }
    uVar4 = CONCAT71(uVar6,bVar2) & 0xfffffffffffffffe;
    param_1[1] = (byte)uVar4 | param_4 == 1;
    uVar3 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709cd7a FUN_14709cd7a body=184 status=ok
// SIG undefined FUN_14709cd7a(void)

undefined8 FUN_14709cd7a(byte *param_1,ushort param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  lVar1 = DAT_14c9a1ab0;
  if ((((param_1[1] & 2) == 0) && ((*param_1 & 3) == 1)) && (DAT_14c9a1ab0 != 0)) {
    *(ushort *)(param_1 + 0x20) = param_2;
    if (param_2 == 0x7fff) {
      pcVar4 = "Asset";
    }
    else if ((((short)param_2 < 0) || (*(int *)(lVar1 + 0xd0) <= (int)(short)param_2)) ||
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 200) + (ulonglong)param_2 * 8), lVar1 == 0)
            ) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = *(char **)(lVar1 + 0xb8);
    }
    *(char **)(param_1 + 0x28) = pcVar4;
    uVar2 = FUN_14009aea0(&DAT_14c9a1320,param_3);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *param_1 = *param_1 & 0x7f;
    FUN_1402afb64(param_1,param_3);
    param_1[1] = param_1[1] & 0xfe | param_4 == 1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14709ce32 FUN_14709ce32 body=197 status=ok
// SIG undefined FUN_14709ce32(void)

undefined8 FUN_14709ce32(byte *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar2 = DAT_14c9a1ab0;
  if ((((param_2 == 0) || ((param_1[1] & 2) != 0)) || ((*param_1 & 3) != 1)) || (DAT_14c9a1ab0 == 0)
     ) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0xb6);
    *(ushort *)(param_1 + 0x20) = uVar1;
    if ((short)uVar1 == 0x7fff) {
      pcVar5 = "Asset";
    }
    else if ((((short)uVar1 < 0) || (*(int *)(lVar2 + 0xd0) <= (int)(short)uVar1)) ||
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 200) + (ulonglong)uVar1 * 8), lVar2 == 0))
    {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = *(char **)(lVar2 + 0xb8);
    }
    *(char **)(param_1 + 0x28) = pcVar5;
    uVar3 = FUN_14009aea0(&DAT_14c9a1320,param_3);
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *param_1 = *param_1 & 0x7f;
    FUN_1402afb64(param_1,param_3);
    param_1[1] = param_1[1] & 0xfe | param_4 == 1;
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 14709cef8 FUN_14709cef8 body=253 status=ok
// SIG undefined FUN_14709cef8(void)

undefined4 FUN_14709cef8(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    FUN_1406112c4(&local_c8,param_2,1);
    _Str = local_c8;
    if (local_c0 == 0) {
      _Str = L"";
    }
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar2 = wcslen(_Str);
      FUN_1449b853c(local_b8,_Str,sVar2 & 0xffffffff,1);
    }
    uVar1 = FUN_140126aca(param_1,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14709cff6 FUN_14709cff6 body=176 status=ok
// SIG undefined FUN_14709cff6(void)

undefined8 FUN_14709cff6(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(param_2,&DAT_149e26620);
  lVar3 = 2 - (ulonglong)(*(int *)(param_1 + 4) == 0);
  do {
    FUN_140002266(&local_48,L"%08x",*(undefined4 *)(param_1 + -4 + lVar3 * 4));
    iVar2 = local_40 + -1;
    if (local_40 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar2);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar3 + -1;
    bVar1 = 0 < lVar3;
    lVar3 = lVar4;
  } while (lVar4 != 0 && bVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709d0a8 FUN_14709d0a8 body=176 status=ok
// SIG undefined FUN_14709d0a8(void)

undefined8 FUN_14709d0a8(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(param_2,&DAT_149e26620);
  lVar3 = 2 - (ulonglong)(*(int *)(param_1 + 4) == 0);
  do {
    FUN_140002266(&local_48,L"%08x",*(undefined4 *)(param_1 + -4 + lVar3 * 4));
    iVar2 = local_40 + -1;
    if (local_40 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar2);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar3 + -1;
    bVar1 = 0 < lVar3;
    lVar3 = lVar4;
  } while (lVar4 != 0 && bVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709d15a FUN_14709d15a body=629 status=ok
// SIG undefined FUN_14709d15a(void)

undefined8 FUN_14709d15a(byte *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[1] & 2) == 0) {
    bVar4 = *param_1;
    if ((~bVar4 & 3) == 0) {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      lVar11 = *(longlong *)(param_1 + 8);
      if (*(int *)(lVar11 + 0x28) != *(int *)(lVar11 + 0x54)) {
        lVar7 = lVar11 + 0x58;
        if (*(longlong *)(lVar11 + 0x60) != 0) {
          lVar7 = *(longlong *)(lVar11 + 0x60);
        }
        iVar2 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar11 + 0x68) - 1U & *param_2) * 4);
        if (iVar2 != -1) {
          plVar10 = (longlong *)(lVar11 + 0x18);
          lVar11 = *plVar10;
          do {
            lVar7 = (longlong)iVar2 * 0x40;
            if (*(uint *)(lVar11 + lVar7) == *param_2) goto LAB_14709d378;
            iVar2 = *(int *)(lVar7 + lVar11 + 0x38);
          } while (iVar2 != -1);
        }
      }
    }
    else if ((bVar4 & 0x83) == 0x82) {
      lVar11 = 0;
      uVar8 = 0;
      do {
        if ((bVar4 & 2) == 0) {
          plVar10 = &DAT_14c9a1270;
          iVar2 = DAT_14c9a1280;
        }
        else {
          plVar10 = *(longlong **)(param_1 + 8);
          iVar2 = (int)plVar10[2];
        }
        if ((longlong)iVar2 <= (longlong)uVar8) break;
        pcVar3 = *(char **)(*plVar10 + lVar11);
        if ((pcVar3 != (char *)0x0) && (*pcVar3 < '\0')) {
          iVar2 = *(int *)(pcVar3 + 0x24);
          AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
          lVar7 = *(longlong *)(DAT_14c9a1378 + (longlong)(iVar2 / 0x199) * 8);
          ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
          bVar4 = *param_1;
          if (*(uint *)(lVar7 + (ulonglong)(uint)(iVar2 % 0x199) * 0x28) == *param_2)
          goto LAB_14709d2aa;
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0x10;
      } while( true );
    }
  }
LAB_14709d2c0:
  uVar9 = 0;
LAB_14709d2c2:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
LAB_14709d2aa:
  if ((bVar4 & 2) == 0) {
    puVar5 = &DAT_14c9a1270;
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 8);
  }
  if ((int)uVar8 < *(int *)(puVar5 + 2)) {
    if ((bVar4 & 2) == 0) {
      puVar5 = &DAT_14c9a1270;
    }
    else {
      puVar5 = *(undefined8 **)(param_1 + 8);
    }
    FUN_14709ecc6(puVar5,uVar8 & 0xffffffff);
    FUN_14709ed3c(puVar5);
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    if ((*param_1 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar6 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar10[9];
      }
      iVar2 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar10[10] - 1U & *param_2) * 4);
      if (iVar2 != -1) {
        lVar11 = *plVar10;
        do {
          lVar7 = (longlong)iVar2 * 0x40;
          if (*(uint *)(lVar11 + lVar7) == *param_2) goto LAB_14709d378;
          iVar2 = *(int *)(lVar7 + lVar11 + 0x38);
        } while (iVar2 != -1);
      }
    }
  }
  goto LAB_14709d2c0;
LAB_14709d378:
  plStack_50 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446dcc2e(&local_58,lVar7 + lVar11 + 0x28);
  FUN_1404588ce(plVar10,iVar2);
  plVar10 = plStack_50;
  uVar9 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  goto LAB_14709d2c2;
}



// FUNCTION 14709d3d0 FUN_14709d3d0 body=1 status=ok
// SIG undefined FUN_14709d3d0(void)

void FUN_14709d3d0(void)

{
  return;
}



// FUNCTION 14709d3d2 FUN_14709d3d2 body=1 status=ok
// SIG undefined FUN_14709d3d2(void)

void FUN_14709d3d2(void)

{
  return;
}



// FUNCTION 14709d3d4 FUN_14709d3d4 body=41 status=ok
// SIG undefined FUN_14709d3d4(void)

void FUN_14709d3d4(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 400) != 0) {
    memset(*(void **)(param_1 + 0x188),0,(longlong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 14709d3fe FUN_14709d3fe body=1 status=ok
// SIG undefined FUN_14709d3fe(void)

void FUN_14709d3fe(void)

{
  return;
}



// FUNCTION 14709d400 FUN_14709d400 body=41 status=ok
// SIG undefined FUN_14709d400(void)

undefined8 * FUN_14709d400(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    for (lVar1 = *(longlong *)(param_2 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
      if (*(longlong *)(lVar1 + 8) == param_1) {
        return (undefined8 *)(lVar1 + 0x18);
      }
    }
  }
  return &DAT_14c9a1308;
}



// FUNCTION 14709d45a FUN_14709d45a body=26 status=ok
// SIG undefined FUN_14709d45a(void)

void FUN_14709d45a(undefined8 param_1)

{
  FUN_140a6c3e0();
  FUN_1401c3612(param_1);
  return;
}



// FUNCTION 14709d474 FUN_14709d474 body=376 status=ok
// SIG undefined FUN_14709d474(void)

undefined8 FUN_14709d474(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_14115b8c4(param_2,0);
  }
  iVar5 = *(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x31c);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_14115b8c4(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar2 = param_1 + 0x2f8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x310) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar6 = *(uint *)(param_1 + 0x310);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  uStack_6c = uStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  uVar4 = (ulonglong)uStack_4c;
  local_88 = plVar1;
  if ((uStack_4c != uVar6) || (uStack_58 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_88 + 0x10 + (longlong)(int)uVar4 * 0x20);
      if (lVar3 != 0) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_14709f73e(param_2,iVar5);
        }
        *(longlong *)(*param_2 + (longlong)iVar5 * 8) = lVar3;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
      uVar4 = (ulonglong)uStack_6c;
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || uStack_6c != uVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 14709d5ee FUN_14709d5ee body=441 status=ok
// SIG undefined FUN_14709d5ee(void)

undefined8 FUN_14709d5ee(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14115b8c4(param_3,0);
  }
  if (((param_2 == 0) || (lVar3 = *(longlong *)(param_2 + 0x68), lVar3 == 0)) ||
     (*(int *)(lVar3 + 0x78) == *(int *)(lVar3 + 0xa4))) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_14115b8c4(param_3,0);
    }
    iVar6 = *(int *)(lVar3 + 0x78) - *(int *)(lVar3 + 0xa4);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
      FUN_14115b8c4(param_3);
    }
    plVar1 = (longlong *)(lVar3 + 0x70);
    lVar2 = lVar3 + 0x80;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar2;
    if (*(int *)(lVar3 + 0x98) == 0) {
      uVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar7 = *(uint *)(lVar3 + 0x98);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar5 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    uVar4 = (ulonglong)local_78._4_4_;
    bVar9 = local_78._4_4_ != uVar7;
    local_90 = plVar1;
    local_78 = uVar5;
    if ((bVar9) || (uStack_60 != lVar2)) {
      do {
        lVar3 = *local_90;
        lVar8 = (longlong)(int)uVar4 * 0x20;
        if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
          iVar6 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_14709f73e(param_3,iVar6);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar6 * 8) = *(undefined8 *)(lVar3 + lVar8 + 0x10);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        uVar4 = (ulonglong)local_78._4_4_;
        bVar9 = local_78._4_4_ != uVar7;
      } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || bVar9));
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14709d7aa FUN_14709d7aa body=713 status=ok
// SIG undefined FUN_14709d7aa(void)

void FUN_14709d7aa(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = (longlong *)(param_1 + 0x2e8);
  local_c0 = param_1 + 0x2f8;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = local_c0;
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar4 = *(int *)(param_1 + 0x310);
  }
  local_78 = local_a8;
  lVar7 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_90 = local_d0;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  if ((local_78._4_4_ != iVar4) || (uStack_b0 != local_c0)) {
    iVar5 = local_78._4_4_;
    local_c4 = iVar4;
    local_78 = lVar7;
    do {
      lVar7 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar5 * 0x20);
      if (lVar7 != 0) {
        for (lVar6 = *(longlong *)(lVar7 + 0x58); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x28)) {
          if (*(longlong *)(lVar6 + 8) == param_2) {
            iVar4 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
              FUN_145c7ee18(param_3,iVar4);
            }
            *(longlong *)(*param_3 + (longlong)iVar4 * 8) = lVar6;
            break;
          }
        }
        lVar6 = lVar7 + 0x80;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = lVar6;
        if (*(int *)(lVar7 + 0x98) == 0) {
          iVar5 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar5 = *(int *)(lVar7 + 0x98);
        }
        plVar3 = (longlong *)(lVar7 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        uStack_a0 = local_58;
        uVar1 = uStack_a0;
        uStack_b0 = local_68;
        local_a8 = lStack_60;
        uStack_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar2 = uStack_a0._4_4_;
        local_b8 = plVar3;
        if ((uStack_a0._4_4_ != iVar5) || (iVar4 = local_c4, uStack_a0 = uVar1, lStack_60 != lVar6))
        {
          do {
            uStack_a0 = uVar1;
            lVar7 = *(longlong *)(*local_b8 + 0x10 + (longlong)iVar2 * 0x20);
            if (lVar7 != 0) {
              for (lVar7 = *(longlong *)(lVar7 + 0x58); lVar7 != 0;
                  lVar7 = *(longlong *)(lVar7 + 0x28)) {
                if (*(longlong *)(lVar7 + 8) == param_2) {
                  iVar4 = (int)param_3[1];
                  *(uint *)(param_3 + 1) = iVar4 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
                    FUN_145c7ee18(param_3,iVar4);
                  }
                  *(longlong *)(*param_3 + (longlong)iVar4 * 8) = lVar7;
                  break;
                }
              }
            }
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            iVar4 = local_c4;
            iVar2 = uStack_a0._4_4_;
            uVar1 = uStack_a0;
          } while (local_b8 != plVar3 || (local_a8 != lVar6 || uStack_a0._4_4_ != iVar5));
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar5 = local_78._4_4_;
      lVar7 = local_78;
    } while (local_90 != local_d0 ||
             (CONCAT44(uStack_7c,uStack_80) != local_c0 || local_78._4_4_ != iVar4));
  }
  local_78 = lVar7;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709da74 FUN_14709da74 body=841 status=ok
// SIG undefined FUN_14709da74(void)

void FUN_14709da74(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined ***pppuVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar2 = param_1 + 0x2f8;
  local_88 = (undefined1 *)0x100000000;
  local_78 = (undefined ***)&DAT_ffffffff;
  uStack_70 = 0;
  local_e8 = param_3;
  local_90 = param_2;
  uStack_80 = lVar2;
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar8 = *(int *)(param_1 + 0x310);
  }
  uStack_98 = CONCAT44(uStack_6c,uStack_70);
  local_a0 = local_78;
  pppuVar7 = local_a0;
  local_b0 = (undefined4)local_88;
  uStack_ac = local_88._4_4_;
  uStack_a8 = (undefined4)uStack_80;
  uStack_a4 = uStack_80._4_4_;
  local_a0._4_4_ = (int)((ulonglong)local_78 >> 0x20);
  local_b8 = plVar1;
  if ((local_a0._4_4_ != iVar8) || (uStack_80 != lVar2)) {
    iVar5 = local_a0._4_4_;
    local_f0 = param_1;
    local_a0 = pppuVar7;
    do {
      lVar4 = *(longlong *)(*local_b8 + 0x10 + (longlong)iVar5 * 0x20);
      if (lVar4 != 0) {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a178050;
        local_60 = &local_90;
        local_88 = &LAB_142b2490c;
        FUN_14709ddbe(param_1,local_e8,*(undefined8 *)(lVar4 + 0x60),&local_88);
        if (local_88 != (undefined1 *)0x0) {
          pppuVar7 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar7 = &local_68;
          }
          (*(code *)(*pppuVar7)[2])();
        }
        lVar3 = lVar4 + 0x80;
        local_88 = (undefined1 *)0x100000000;
        local_78 = (undefined ***)&DAT_ffffffff;
        uStack_70 = 0;
        uStack_80 = lVar3;
        if (*(int *)(lVar4 + 0x98) == 0) {
          iVar5 = 0;
        }
        else {
          FUN_1449c0562(&local_88);
          iVar5 = *(int *)(lVar4 + 0x98);
        }
        plVar9 = (longlong *)(lVar4 + 0x70);
        uStack_c0 = CONCAT44(uStack_6c,uStack_70);
        local_c8 = local_78;
        pppuVar7 = local_c8;
        local_d8 = (undefined4)local_88;
        uStack_d4 = local_88._4_4_;
        uStack_d0 = (undefined4)uStack_80;
        uStack_cc = uStack_80._4_4_;
        local_c8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
        iVar6 = local_c8._4_4_;
        local_e0 = plVar9;
        if ((local_c8._4_4_ != iVar5) ||
           (param_1 = local_f0, local_c8 = pppuVar7, uStack_80 != lVar3)) {
          do {
            local_c8 = pppuVar7;
            lVar4 = *(longlong *)(*local_e0 + 0x10 + (longlong)iVar6 * 0x20);
            if (lVar4 != 0) {
              local_78 = (undefined ***)0x0;
              local_68 = &PTR_LAB_14a178050;
              local_60 = &local_90;
              local_88 = &LAB_142b2490c;
              FUN_14709ddbe(local_f0,local_e8,*(undefined8 *)(lVar4 + 0x60),&local_88);
              if (local_88 != (undefined1 *)0x0) {
                pppuVar7 = local_78;
                if (local_78 == (undefined ***)0x0) {
                  pppuVar7 = &local_68;
                }
                (*(code *)(*pppuVar7)[2])();
              }
            }
            local_c8 = (undefined ***)CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
            FUN_1449c0562(&local_d8);
            param_1 = local_f0;
            iVar6 = local_c8._4_4_;
            pppuVar7 = local_c8;
          } while (local_e0 != plVar9 ||
                   (CONCAT44(uStack_cc,uStack_d0) != lVar3 || local_c8._4_4_ != iVar5));
        }
      }
      local_a0 = (undefined ***)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
      FUN_1449c0562(&local_b0);
      iVar5 = local_a0._4_4_;
      pppuVar7 = local_a0;
    } while (local_b8 != plVar1 ||
             (CONCAT44(uStack_a4,uStack_a8) != lVar2 || local_a0._4_4_ != iVar8));
  }
  local_a0 = pppuVar7;
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709ddbe FUN_14709ddbe body=174 status=ok
// SIG undefined FUN_14709ddbe(void)

undefined8 FUN_14709ddbe(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    do {
      pcVar2 = (code *)*param_4;
      plVar6 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar6 = param_4 + 4;
      }
      local_40 = param_3;
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar2)(uVar5,&local_40);
      if (cVar4 != '\0') {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14709f392(param_2,iVar1);
        }
        lVar3 = *param_2;
        *(longlong *)(lVar3 + (longlong)iVar1 * 8) = param_3;
        uVar5 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        goto LAB_14709de22;
      }
      param_3 = *(longlong *)(param_3 + 0x40);
    } while (param_3 != 0);
  }
  uVar5 = 0;
LAB_14709de22:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709de6e FUN_14709de6e body=301 status=ok
// SIG undefined FUN_14709de6e(void)

void FUN_14709de6e(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  *param_2 = *(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x31c);
  iVar4 = 0;
  *param_3 = 0;
  lVar2 = param_1 + 0x2f8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x310);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      *param_3 = *param_3 + (*(int *)(lVar3 + 0x78) - *(int *)(lVar3 + 0xa4));
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (local_68 != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709df9c FUN_14709df9c body=275 status=ok
// SIG undefined FUN_14709df9c(void)

undefined8 FUN_14709df9c(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_178 [32];
  undefined1 local_158 [256];
  longlong local_58;
  wchar_t *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_140056680(param_2,&DAT_149dfb77a);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020e8(param_2,L"Sub Identifier Types: ",0x16);
    lVar4 = **(longlong **)(param_1 + 0xc0);
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        if (lVar3 != 0) {
          FUN_1400020e8(param_2,&DAT_149e19f34,2);
        }
        FUN_144a81018(local_158,lVar4);
        pwVar1 = local_50;
        sVar2 = wcslen(local_50);
        FUN_1400020e8(param_2,pwVar1,sVar2 & 0xffffffff);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 8 + lVar3 * 8);
        lVar3 = lVar3 + 1;
      } while (lVar4 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709e0be FUN_14709e0be body=68 status=ok
// SIG undefined FUN_14709e0be(void)

undefined8 * FUN_14709e0be(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1400e3c00(param_1,param_3,1);
  if (lVar1 != 0) {
    for (lVar1 = *(longlong *)(lVar1 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
      if (*(longlong *)(lVar1 + 8) == param_2) {
        return (undefined8 *)(lVar1 + 0x18);
      }
    }
  }
  return &DAT_14c9a1308;
}



// FUNCTION 14709e102 FUN_14709e102 body=95 status=ok
// SIG undefined FUN_14709e102(void)

undefined8 * FUN_14709e102(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1400e3c00(param_1,param_3,1);
  lVar2 = FUN_14013f0dc(param_1,uVar1,param_3,1);
  if (lVar2 != 0) {
    for (lVar2 = *(longlong *)(lVar2 + 0x58); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
      if (*(longlong *)(lVar2 + 8) == param_2) {
        return (undefined8 *)(lVar2 + 0x18);
      }
    }
  }
  return &DAT_14c9a1308;
}



// FUNCTION 14709e162 FUN_14709e162 body=634 status=ok
// SIG undefined FUN_14709e162(void)

bool FUN_14709e162(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [36];
  undefined1 local_74 [12];
  undefined4 local_68 [2];
  int local_60;
  undefined4 local_5c [2];
  int local_54;
  undefined4 local_50 [2];
  int local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14141bbdc(param_2,local_50);
  iVar5 = local_48;
  cVar1 = (**(code **)(*param_1 + 0x300))(param_1);
  if (cVar1 == '\0') {
    FUN_144a659ac(param_2,local_68,0);
    if (local_60 != 0) {
      local_68[0] = FUN_144a78877(local_68[0],local_60);
    }
    iVar4 = FUN_1447fa34e(param_1 + 0x5d,local_68[0],local_68);
    if (((iVar4 != -1) &&
        (lVar7 = (longlong)iVar4 * 0x20 + param_1[0x5d], plVar6 = (longlong *)(lVar7 + 0x10),
        plVar6 != (longlong *)0x0 && lVar7 != 0)) && (lVar7 = *plVar6, lVar7 != 0)) {
      if (iVar5 == 2) {
        FUN_144a659ac(param_2,local_74,1);
        FUN_1448075d0(local_50,local_74);
        FUN_144a62e5c(local_5c,local_50,*(undefined4 *)(lVar7 + 0xc0),*(undefined4 *)(lVar7 + 0xc4))
        ;
        if (local_54 != 0) {
          FUN_144a78877(local_5c[0],local_54);
        }
        iVar5 = FUN_144b0847a((longlong *)(lVar7 + 0x70));
        if (iVar5 == -1) {
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)(lVar7 + 0x70);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 != 0)) {
            bVar8 = true;
            if (*(longlong *)(lVar7 + 0x58) != 0) goto LAB_14709e270;
            bVar2 = *(byte *)(lVar7 + 0x2c);
            goto LAB_14709e2ae;
          }
        }
      }
      else if (iVar5 == 1) {
        bVar8 = true;
        if (*(longlong *)(lVar7 + 0x58) != 0) goto LAB_14709e270;
        bVar2 = *(byte *)(lVar7 + 0x2c);
LAB_14709e2ae:
        bVar8 = (bool)((bVar2 & 0x20) >> 5);
        goto LAB_14709e270;
      }
    }
  }
  else {
    FUN_144a659ac(param_2,local_50,0);
    uVar3 = local_50[0];
    if (local_48 != 0) {
      uVar3 = FUN_144a78877(local_50[0],local_48);
    }
    iVar4 = FUN_1448467de(param_1 + 0x3f,uVar3,local_50);
    if (iVar4 != -1) {
      lVar7 = (longlong)iVar4 * 0x70 + param_1[0x3f];
      if ((longlong *)(lVar7 + 0x10) != (longlong *)0x0 && lVar7 != 0) {
        if (iVar5 == 2) {
          FUN_144a659ac(param_2,local_50,1);
          if (local_48 != 0) {
            local_50[0] = FUN_144a78877(local_50[0],local_48);
          }
          iVar5 = FUN_144a840a2((longlong *)(lVar7 + 0x18),local_50[0],local_50);
          if (iVar5 != -1) {
            lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)(lVar7 + 0x18);
            goto LAB_14709e212;
          }
        }
        else if (iVar5 == 1) {
          lVar7 = *(longlong *)(lVar7 + 0x10);
LAB_14709e212:
          bVar8 = lVar7 != 0;
          goto LAB_14709e270;
        }
      }
    }
  }
  bVar8 = false;
LAB_14709e270:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709e3de FUN_14709e3de body=480 status=ok
// SIG undefined FUN_14709e3de(void)

ulonglong FUN_14709e3de(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong uStack_80;
  longlong local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14686d314(param_3,local_70);
  FUN_1403de9f2(local_70,&local_88,&DAT_149e0635c,0);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((int)uStack_80 < 1) {
LAB_14709e576:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_3 + 4);
    lVar3 = FUN_1400e3c00(param_1,param_3,1);
    if (iVar1 == 1) {
      if (lVar3 == 0) goto LAB_14709e576;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144837cf2(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
      lVar6 = 0;
    }
    else {
      if (lVar3 == 0) goto LAB_14709e576;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_144837cf2(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
      uVar5 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      if ((int)uStack_80 < 2) goto LAB_14709e578;
      lVar7 = 1;
      lVar6 = 0x10;
      do {
        FUN_14000bbd8(local_70,local_88 + lVar6,0);
        lVar4 = FUN_14013f0dc(param_1,lVar3,local_70,1);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if ((lVar4 != 0) &&
           (((longlong)*(char *)(lVar4 + 0x2a) < 0 ||
            (**(char **)(*(longlong *)(param_1 + 0xc0) + (longlong)*(char *)(lVar4 + 0x2a) * 8) !=
             '*')))) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_144837cf2(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar7 < (int)uStack_80);
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
LAB_14709e578:
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14709e5c0 FUN_14709e5c0 body=16 status=ok
// SIG undefined FUN_14709e5c0(void)

void FUN_14709e5c0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid string position");
}



// FUNCTION 14709e5d2 FUN_14709e5d2 body=108 status=ok
// SIG undefined FUN_14709e5d2(void)

longlong * FUN_14709e5d2(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  char *_Str2;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  param_4 = param_4 & *(ulonglong *)(param_1 + 0x30);
  plVar3 = *(longlong **)(param_1 + 8);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + param_4 * 0x10);
  if (plVar4 == plVar3) {
LAB_14709e628:
    plVar4 = plVar3;
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + param_4 * 0x10);
    _Str2 = (char *)*param_3;
    plVar3 = plVar4;
    while (iVar2 = strcmp((char *)plVar3[2],_Str2), iVar2 != 0) {
      if (plVar3 == plVar1) goto LAB_14709e628;
      plVar3 = (longlong *)plVar3[1];
    }
    plVar4 = (longlong *)*plVar3;
  }
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar3;
  return param_2;
}



// FUNCTION 14709e63e FUN_14709e63e body=362 status=ok
// SIG undefined FUN_14709e63e(void)

longlong * FUN_14709e63e(float *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar3 = (char *)*param_3;
  lVar5 = 0x1505;
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    lVar5 = (longlong)cVar1 + lVar5 * 0x21;
    cVar1 = *pcVar3;
  }
  FUN_14709e5d2(param_1,&local_40,param_3,lVar5);
  if (local_38 == 0) {
    if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("unordered_map/set too long");
    }
    lVar4 = FUN_14001cc68(0x20,0x10);
    *(undefined8 *)(lVar4 + 0x10) = *param_3;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    fVar6 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar6 && fVar6 != *param_1) {
      FUN_14709e7aa(param_1);
      FUN_14709e5d2(param_1,&local_40,lVar4 + 0x10,lVar5);
    }
    FUN_14709e834(param_1,lVar5,local_40,lVar4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    lVar4 = local_38;
  }
  *param_2 = lVar4;
  *(undefined1 *)(param_2 + 1) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709e7aa FUN_14709e7aa body=138 status=ok
// SIG undefined FUN_14709e7aa(void)

void FUN_14709e7aa(float *param_1)

{
  longlong *plVar1;
  char *_Str2;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  char cVar12;
  ulonglong uVar13;
  char *pcVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 in_XMM0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar13 = *(ulonglong *)(param_1 + 0xe);
  auVar17._4_12_ = in_XMM0._4_12_;
  auVar17._0_4_ = (float)(*(longlong *)(param_1 + 4) + 1) / *param_1;
  auVar17 = roundss(auVar17,auVar17,10);
  uVar9 = (ulonglong)auVar17._0_4_;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = auVar17._0_4_ - 9.223372e+18;
  uVar9 = (longlong)auVar18._0_4_ & (longlong)uVar9 >> 0x3f | uVar9;
  uVar10 = 8;
  if (8 < uVar9) {
    uVar10 = uVar9;
  }
  if (uVar13 < uVar10) {
    uVar9 = uVar13 * 8;
    if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
      uVar9 = uVar10;
    }
    if (0x1ff < uVar13) {
      uVar9 = uVar10;
    }
    FUN_14709e888(auVar18._0_8_,uVar9);
    return;
  }
  if (0x800000000000000 < uVar13) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  uVar13 = uVar13 - 1 | 1;
  lVar16 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  bVar11 = -((byte)lVar16 ^ 0x3f);
  lVar16 = 1L << (bVar11 & 0x3f);
  plVar1 = *(longlong **)(param_1 + 2);
  FUN_141306e40(param_1 + 6,2L << (bVar11 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0xc) = lVar16 + -1;
  *(longlong *)(param_1 + 0xe) = lVar16;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 2);
joined_r0x00014709e8f7:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        _Str2 = (char *)plVar7[2];
        cVar12 = *_Str2;
        if (cVar12 == '\0') {
          uVar13 = 0x1505;
        }
        else {
          uVar13 = 0x1505;
          pcVar14 = _Str2;
          do {
            pcVar14 = pcVar14 + 1;
            uVar13 = (longlong)cVar12 + uVar13 * 0x21;
            cVar12 = *pcVar14;
          } while (cVar12 != '\0');
        }
        plVar2 = (longlong *)*plVar7;
        uVar13 = uVar13 & *(ulonglong *)(param_1 + 0xc);
        lVar3 = *(longlong *)(param_1 + 6);
        lVar16 = uVar13 * 2 + 1;
        plVar4 = *(longlong **)(lVar3 + uVar13 * 0x10);
        if (plVar4 != plVar1) break;
        *(longlong **)(lVar3 + uVar13 * 0x10) = plVar7;
        *(longlong **)(lVar3 + lVar16 * 8) = plVar7;
        plVar7 = plVar2;
      }
      plVar15 = *(longlong **)(lVar3 + lVar16 * 8);
      iVar8 = strcmp((char *)plVar15[2],_Str2);
      if (iVar8 != 0) break;
      plVar15 = (longlong *)*plVar15;
      if (plVar15 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar15;
        puVar6 = (undefined8 *)plVar15[1];
        *puVar6 = plVar7;
        plVar15[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar3 + lVar16 * 8) = plVar7;
      plVar7 = plVar2;
    }
    do {
      if (plVar4 == plVar15) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar15;
        puVar6 = (undefined8 *)plVar15[1];
        *puVar6 = plVar7;
        plVar15[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar3 + uVar13 * 0x10) = plVar7;
        plVar7 = plVar2;
        goto joined_r0x00014709e8f7;
      }
      plVar15 = (longlong *)plVar15[1];
      iVar8 = strcmp((char *)plVar15[2],_Str2);
    } while (iVar8 != 0);
    lVar16 = *plVar15;
    plVar4 = (longlong *)plVar7[1];
    *plVar4 = (longlong)plVar2;
    plVar15 = (longlong *)plVar2[1];
    *plVar15 = lVar16;
    puVar5 = *(undefined8 **)(lVar16 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar16 + 8) = plVar15;
    plVar2[1] = (longlong)plVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar2;
  } while( true );
}



// FUNCTION 14709e834 FUN_14709e834 body=83 status=ok
// SIG undefined FUN_14709e834(void)

void FUN_14709e834(longlong param_1,ulonglong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  *param_4 = param_3;
  param_4[1] = (longlong)puVar1;
  *puVar1 = param_4;
  *(longlong **)(param_3 + 8) = param_4;
  lVar2 = (param_2 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar2);
  plVar3 = (longlong *)(lVar2 + *(longlong *)(param_1 + 0x18));
  plVar4 = plVar3 + 1;
  lVar2 = *plVar3;
  if (lVar2 == *(longlong *)(param_1 + 8)) {
    *plVar5 = (longlong)param_4;
    plVar5 = plVar4;
  }
  else if ((lVar2 != param_3) && (plVar5 = plVar4, (undefined8 *)*plVar4 != puVar1)) {
    return;
  }
  *plVar5 = (longlong)param_4;
  return;
}


