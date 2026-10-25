// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144485f00 FUN_144485f00 body=427 status=ok
// SIG undefined FUN_144485f00(void)

undefined8
FUN_144485f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *_Str;
  ulonglong **ppuVar5;
  char **ppcVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  char **local_70;
  ulonglong *local_68;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  ulonglong *local_40;
  undefined4 *local_38;
  ulonglong *local_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = param_4;
  if ((longlong)DAT_14cc04cd8 < 0) {
    local_40 = (ulonglong *)(DAT_14cc04cd8 & 0x7fffffffffffffff);
    if (DAT_14cc04ce4 == '\x01') {
      ppuVar5 = &local_40;
      FUN_1446f470e(ppuVar5,local_40,1);
    }
    else {
      if (local_40 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_40);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_58;
      FUN_14001c09c(ppuVar5,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    local_78 = (ulonglong)DAT_14cc04ce0 << 0x20;
    DAT_14cc04cd8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04ce0 << 0x20;
    local_78 = DAT_14cc04cd8 & 0xffffffff;
  }
  local_78 = local_78 | uVar2;
  local_40 = &local_78;
  local_38 = &local_5c;
  if ((longlong)DAT_14cc04ce8 < 0) {
    _Str = (ulonglong *)(DAT_14cc04ce8 & 0x7fffffffffffffff);
    if (DAT_14cc04cf4 == '\x01') {
      ppcVar6 = &local_58;
      FUN_1446f470e(ppcVar6,_Str,1);
    }
    else {
      local_58 = (char *)_Str;
      if (_Str == (ulonglong *)0x0) {
        local_50 = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_50 = (undefined4)sVar3;
      }
      ppcVar6 = &local_48;
      FUN_14001c09c(ppcVar6,&local_58,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar6;
    uVar4 = (ulonglong)DAT_14cc04cf0 << 0x20;
    DAT_14cc04ce8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04cf0 << 0x20;
    uVar4 = DAT_14cc04ce8 & 0xffffffff;
  }
  local_48 = (char *)(uVar4 | uVar2);
  local_30 = (ulonglong *)&local_48;
  local_70 = (char **)&local_40;
  local_68 = &local_20;
  local_28 = &local_5c;
  FUN_144481be0(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444860ac FUN_1444860ac body=49 status=ok
// SIG undefined FUN_1444860ac(void)

void FUN_1444860ac(void)

{
  FUN_1457f2ec5(DAT_14cc04d58,DAT_14cc04d60);
  if (DAT_14cc04d58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444860ee FUN_1444860ee body=49 status=ok
// SIG undefined FUN_1444860ee(void)

void FUN_1444860ee(void)

{
  FUN_1457f2ec5(DAT_14cc04e48,DAT_14cc04e50);
  if (DAT_14cc04e48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144486142 FUN_144486142 body=1117 status=ok
// SIG undefined FUN_144486142(void)

undefined8 *
FUN_144486142(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong **ppuVar7;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  ulonglong *local_38;
  undefined4 *local_30;
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_40 = param_4;
  if ((longlong)DAT_14cc04d88 < 0) {
    local_38 = (ulonglong *)(DAT_14cc04d88 & 0x7fffffffffffffff);
    if (DAT_14cc04d94 == '\x01') {
      ppuVar7 = &local_38;
      FUN_1446f470e(ppuVar7,local_38,1);
    }
    else {
      if (local_38 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar4 = strlen((char *)local_38);
        uVar1 = (undefined4)sVar4;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar7 = (ulonglong **)&local_28;
      FUN_14001c09c(ppuVar7,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar7;
    uVar5 = (ulonglong)DAT_14cc04d90 << 0x20;
    DAT_14cc04d88 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04d90 << 0x20;
    uVar5 = DAT_14cc04d88 & 0xffffffff;
  }
  local_28 = (char *)(uVar5 | uVar2);
  local_30 = &DAT_14c764f1c;
  local_38 = (ulonglong *)&local_28;
  FUN_14001ac2c(param_2,local_3c,&local_38,0);
  if ((longlong)DAT_14cc04d98 < 0) {
    puVar6 = (ulonglong *)(DAT_14cc04d98 & 0x7fffffffffffffff);
    if (DAT_14cc04da4 == '\x01') {
      ppuVar7 = &local_38;
      FUN_1446f470e(ppuVar7,puVar6,1);
    }
    else {
      local_38 = puVar6;
      if (puVar6 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar4 = strlen((char *)puVar6);
        uVar1 = (undefined4)sVar4;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar7 = (ulonglong **)&local_28;
      FUN_14001c09c(ppuVar7,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar7;
    uVar5 = (ulonglong)DAT_14cc04da0 << 0x20;
    DAT_14cc04d98 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04da0 << 0x20;
    uVar5 = DAT_14cc04d98 & 0xffffffff;
  }
  local_28 = (char *)(uVar5 | uVar2);
  local_30 = &local_40;
  local_38 = (ulonglong *)&local_28;
  FUN_14001ac2c(param_2,local_3c,&local_38,0);
  if ((longlong)DAT_14cc04da8 < 0) {
    puVar6 = (ulonglong *)(DAT_14cc04da8 & 0x7fffffffffffffff);
    if (DAT_14cc04db4 == '\x01') {
      ppuVar7 = &local_38;
      FUN_1446f470e(ppuVar7,puVar6,1);
    }
    else {
      local_38 = puVar6;
      if (puVar6 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar4 = strlen((char *)puVar6);
        uVar1 = (undefined4)sVar4;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar7 = (ulonglong **)&local_28;
      FUN_14001c09c(ppuVar7,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar7;
    uVar5 = (ulonglong)DAT_14cc04db0 << 0x20;
    DAT_14cc04da8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04db0 << 0x20;
    uVar5 = DAT_14cc04da8 & 0xffffffff;
  }
  local_28 = (char *)(uVar5 | uVar2);
  local_30 = &DAT_14c764f08;
  local_38 = (ulonglong *)&local_28;
  FUN_14001ac2c(param_2,local_3c,&local_38,0);
  if ((longlong)DAT_14cc04db8 < 0) {
    puVar6 = (ulonglong *)(DAT_14cc04db8 & 0x7fffffffffffffff);
    if (DAT_14cc04dc4 == '\x01') {
      ppuVar7 = &local_38;
      FUN_1446f470e(ppuVar7,puVar6,1);
    }
    else {
      local_38 = puVar6;
      if (puVar6 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar4 = strlen((char *)puVar6);
        uVar1 = (undefined4)sVar4;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar7 = (ulonglong **)&local_28;
      FUN_14001c09c(ppuVar7,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar7;
    uVar5 = (ulonglong)DAT_14cc04dc0 << 0x20;
    DAT_14cc04db8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04dc0 << 0x20;
    uVar5 = DAT_14cc04db8 & 0xffffffff;
  }
  local_28 = (char *)(uVar5 | uVar2);
  local_30 = &DAT_14c764f0c;
  local_38 = (ulonglong *)&local_28;
  FUN_14001ac2c(param_2,local_3c,&local_38,0);
  FUN_14001a7b2();
  uVar3 = FUN_140bf8bc4();
  FUN_1408ccbd2(&local_38,uVar3);
  local_44 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,&local_38);
  if ((longlong)DAT_14cc04dc8 < 0) {
    puVar6 = (ulonglong *)(DAT_14cc04dc8 & 0x7fffffffffffffff);
    if (DAT_14cc04dd4 == '\x01') {
      ppuVar7 = &local_38;
      FUN_1446f470e(ppuVar7,puVar6,1);
    }
    else {
      local_38 = puVar6;
      if (puVar6 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar4 = strlen((char *)puVar6);
        uVar1 = (undefined4)sVar4;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar7 = (ulonglong **)&local_28;
      FUN_14001c09c(ppuVar7,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar7;
    uVar5 = (ulonglong)DAT_14cc04dd0 << 0x20;
    DAT_14cc04dc8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04dd0 << 0x20;
    uVar5 = DAT_14cc04dc8 & 0xffffffff;
  }
  local_28 = (char *)(uVar5 | uVar2);
  local_30 = &local_44;
  local_38 = (ulonglong *)&local_28;
  FUN_14147c052(param_2,local_3c,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444865a0 FUN_1444865a0 body=49 status=ok
// SIG undefined FUN_1444865a0(void)

void FUN_1444865a0(void)

{
  FUN_1457f2ec5(DAT_14cc04ed8,DAT_14cc04ee0);
  if (DAT_14cc04ed8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444865f4 FUN_1444865f4 body=1155 status=ok
// SIG undefined FUN_1444865f4(void)

undefined8 *
FUN_1444865f4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong **ppuVar7;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  ulonglong *local_38;
  undefined4 *local_30;
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_40 = param_4;
  if ((longlong)DAT_14cc04e90 < 0) {
    local_38 = (ulonglong *)(DAT_14cc04e90 & 0x7fffffffffffffff);
    if (DAT_14cc04e9c == '\x01') {
      ppuVar7 = &local_38;
      FUN_1446f470e(ppuVar7,local_38,1);
    }
    else {
      if (local_38 == (ulonglong *)0x0) {
        uVar2 = 0;
      }
      else {
        sVar4 = strlen((char *)local_38);
        uVar2 = (undefined4)sVar4;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar2);
      ppuVar7 = (ulonglong **)&local_28;
      FUN_14001c09c(ppuVar7,&local_38,1);
    }
    uVar3 = (ulonglong)*(uint *)ppuVar7;
    uVar5 = (ulonglong)DAT_14cc04e98 << 0x20;
    DAT_14cc04e90 = uVar3;
  }
  else {
    uVar3 = (ulonglong)DAT_14cc04e98 << 0x20;
    uVar5 = DAT_14cc04e90 & 0xffffffff;
  }
  local_28 = (char *)(uVar5 | uVar3);
  local_30 = &DAT_14c764f14;
  local_38 = (ulonglong *)&local_28;
  FUN_14001ac2c(param_2,local_3c,&local_38,0);
  cVar1 = FUN_1403f35db(*param_3,&DAT_14cc04ea0);
  if (cVar1 == '\0') {
    FUN_14001a7b2();
    local_44 = (**(code **)(DAT_14cc012d0 + 0x100))(&DAT_14cc012d0,local_40);
    if ((longlong)DAT_14cc04ea0 < 0) {
      puVar6 = (ulonglong *)(DAT_14cc04ea0 & 0x7fffffffffffffff);
      if (DAT_14cc04eac == '\x01') {
        ppuVar7 = &local_38;
        FUN_1446f470e(ppuVar7,puVar6,1);
      }
      else {
        local_38 = puVar6;
        if (puVar6 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar6);
          uVar2 = (undefined4)sVar4;
        }
        local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar2);
        ppuVar7 = (ulonglong **)&local_28;
        FUN_14001c09c(ppuVar7,&local_38,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar7;
      uVar5 = (ulonglong)DAT_14cc04ea8 << 0x20;
      DAT_14cc04ea0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04ea8 << 0x20;
      uVar5 = DAT_14cc04ea0 & 0xffffffff;
    }
    local_28 = (char *)(uVar5 | uVar3);
    local_30 = &local_44;
    local_38 = (ulonglong *)&local_28;
    FUN_14147c052(param_2,local_3c,&local_38,0);
    if ((longlong)DAT_14cc04eb0 < 0) {
      puVar6 = (ulonglong *)(DAT_14cc04eb0 & 0x7fffffffffffffff);
      if (DAT_14cc04ebc == '\x01') {
        ppuVar7 = &local_38;
        FUN_1446f470e(ppuVar7,puVar6,1);
      }
      else {
        local_38 = puVar6;
        if (puVar6 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar6);
          uVar2 = (undefined4)sVar4;
        }
        local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar2);
        ppuVar7 = (ulonglong **)&local_28;
        FUN_14001c09c(ppuVar7,&local_38,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar7;
      uVar5 = (ulonglong)DAT_14cc04eb8 << 0x20;
      DAT_14cc04eb0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04eb8 << 0x20;
      uVar5 = DAT_14cc04eb0 & 0xffffffff;
    }
    local_28 = (char *)(uVar5 | uVar3);
    local_30 = &local_40;
    local_38 = (ulonglong *)&local_28;
    FUN_14001ac2c(param_2,local_3c,&local_38,0);
  }
  else {
    if ((longlong)DAT_14cc04ea0 < 0) {
      puVar6 = (ulonglong *)(DAT_14cc04ea0 & 0x7fffffffffffffff);
      if (DAT_14cc04eac == '\x01') {
        ppuVar7 = &local_38;
        FUN_1446f470e(ppuVar7,puVar6,1);
      }
      else {
        local_38 = puVar6;
        if (puVar6 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar6);
          uVar2 = (undefined4)sVar4;
        }
        local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar2);
        ppuVar7 = (ulonglong **)&local_28;
        FUN_14001c09c(ppuVar7,&local_38,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar7;
      uVar5 = (ulonglong)DAT_14cc04ea8 << 0x20;
      DAT_14cc04ea0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04ea8 << 0x20;
      uVar5 = DAT_14cc04ea0 & 0xffffffff;
    }
    local_28 = (char *)(uVar5 | uVar3);
    local_30 = &local_40;
    local_38 = (ulonglong *)&local_28;
    FUN_14001ac2c(param_2,local_3c,&local_38,0);
    FUN_14001a7b2();
    local_44 = (**(code **)(DAT_14cc012d0 + 0x108))(&DAT_14cc012d0,local_40);
    if ((longlong)DAT_14cc04eb0 < 0) {
      puVar6 = (ulonglong *)(DAT_14cc04eb0 & 0x7fffffffffffffff);
      if (DAT_14cc04ebc == '\x01') {
        ppuVar7 = &local_38;
        FUN_1446f470e(ppuVar7,puVar6,1);
      }
      else {
        local_38 = puVar6;
        if (puVar6 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar6);
          uVar2 = (undefined4)sVar4;
        }
        local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar2);
        ppuVar7 = (ulonglong **)&local_28;
        FUN_14001c09c(ppuVar7,&local_38,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar7;
      uVar5 = (ulonglong)DAT_14cc04eb8 << 0x20;
      DAT_14cc04eb0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04eb8 << 0x20;
      uVar5 = DAT_14cc04eb0 & 0xffffffff;
    }
    local_28 = (char *)(uVar5 | uVar3);
    local_30 = &local_44;
    local_38 = (ulonglong *)&local_28;
    FUN_14147c052(param_2,local_3c,&local_38,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144486a80 FUN_144486a80 body=420 status=ok
// SIG undefined FUN_144486a80(void)

void FUN_144486a80(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 1) < 3) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    FUN_140056680(local_40,L"SelectInt32: No cases to select from.");
    local_48 = 1;
    local_44 = 1;
    puVar6 = *(undefined8 **)(lVar2 + 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      pcVar3 = (code *)*puVar6;
      plVar8 = puVar6 + 4;
      if ((longlong *)puVar6[2] != (longlong *)0x0) {
        plVar8 = (longlong *)puVar6[2];
      }
      local_30 = lVar2;
      uVar5 = (**(code **)(*plVar8 + 8))();
      (*pcVar3)(uVar5,&local_48,&local_30,local_40);
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar6 = (undefined8 *)*param_2;
    uVar1 = *(uint *)*puVar6;
    uVar9 = (ulonglong)uVar1;
    if ((int)uVar1 < 0 || *(int *)(param_2 + 1) + -2 <= (int)uVar1) {
      lVar2 = *(longlong *)(param_1 + 0xc0);
      local_48 = 3;
      local_44 = 1;
      FUN_140002266(local_40,
                    L"SelectInt32: Invalid index %d - num cases is %d. Falling back to index 0.");
      puVar6 = *(undefined8 **)(lVar2 + 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        pcVar3 = (code *)*puVar6;
        plVar8 = puVar6 + 4;
        if ((longlong *)puVar6[2] != (longlong *)0x0) {
          plVar8 = (longlong *)puVar6[2];
        }
        local_30 = lVar2;
        uVar5 = (**(code **)(*plVar8 + 8))();
        (*pcVar3)(uVar5,&local_48,&local_30,local_40);
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      puVar6 = (undefined8 *)*param_2;
      uVar9 = 0;
    }
    puVar7 = puVar6;
    if (puVar6[uVar9 * 4 + 7] != 0) {
      uVar4 = FUN_1490daa46(param_1);
      FUN_1490f5b06(puVar6[uVar9 * 4 + 7],param_1,uVar4);
      puVar7 = (undefined8 *)*param_2;
    }
    FUN_14446f40e(puVar7[(longlong)(*(int *)(param_2 + 1) + -1) * 4 + 1],
                  puVar7[(longlong)(*(int *)(param_2 + 1) + -1) * 4],puVar6[uVar9 * 4 + 5],
                  puVar6[uVar9 * 4 + 4]);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144486c25 FUN_144486c25 body=49 status=ok
// SIG undefined FUN_144486c25(void)

void FUN_144486c25(void)

{
  FUN_1457f2ec5(DAT_14cc04f88,DAT_14cc04f90);
  if (DAT_14cc04f88 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144486c89 FUN_144486c89 body=47 status=ok
// SIG undefined FUN_144486c89(void)

void FUN_144486c89(void)

{
  DAT_14cc05030 = 0;
  if (DAT_14cc05028 != 0) {
    FUN_1400020a8();
  }
  FUN_14619c358(&DAT_14cc04fe8);
  return;
}



// FUNCTION 144486cc0 FUN_144486cc0 body=49 status=ok
// SIG undefined FUN_144486cc0(void)

void FUN_144486cc0(void)

{
  FUN_1457f2ec5(DAT_14cc05340,DAT_14cc05348);
  if (DAT_14cc05340 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144486d02 FUN_144486d02 body=222 status=ok
// SIG undefined FUN_144486d02(void)

undefined8 *
FUN_144486d02(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_44 = param_4;
  FUN_1446f470e(local_4c,L"Value",1);
  local_40 = local_4c;
  local_38 = &local_44;
  FUN_14001ac2c(param_2,local_2c,&local_40,0);
  FUN_1446f470e(local_4c,L"Result",1);
  local_38 = &DAT_14c764f1c;
  local_40 = local_4c;
  FUN_14001ac2c(param_2,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144486de2 FUN_144486de2 body=235 status=ok
// SIG undefined FUN_144486de2(void)

code * FUN_144486de2(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(&local_18,L"Value",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_18 >> 0x10);
    uVar5 = (uint)local_18 & 0xffff;
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar5) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_2 + (longlong)iVar3 * 0x14);
        if (*plVar4 == local_18) goto LAB_144486e85;
        iVar3 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar3 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_144486e85:
  pcVar6 = FUN_149168e04;
  if ((int)plVar4[1] == DAT_14c764f1c) {
    pcVar6 = FUN_144487da8;
  }
  pcVar2 = FUN_144487d24;
  if ((int)plVar4[1] != DAT_14c764f18) {
    pcVar2 = pcVar6;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144486ece FUN_144486ece body=49 status=ok
// SIG undefined FUN_144486ece(void)

void FUN_144486ece(void)

{
  FUN_1457f2ec5(DAT_14cc05370,DAT_14cc05378);
  if (DAT_14cc05370 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144486f10 FUN_144486f10 body=222 status=ok
// SIG undefined FUN_144486f10(void)

undefined8 *
FUN_144486f10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_44 = param_4;
  FUN_1446f470e(local_4c,L"String",1);
  local_38 = &DAT_14c764f1c;
  local_40 = local_4c;
  FUN_14001ac2c(param_2,local_2c,&local_40,0);
  FUN_1446f470e(local_4c,L"Result",1);
  local_40 = local_4c;
  local_38 = &local_44;
  FUN_14001ac2c(param_2,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144486ff0 FUN_144486ff0 body=235 status=ok
// SIG undefined FUN_144486ff0(void)

code * FUN_144486ff0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(&local_18,L"Result",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_18 >> 0x10);
    uVar5 = (uint)local_18 & 0xffff;
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_18 >> 0x20) + ((uint)local_18 << 0x10 | uVar5) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_2 + (longlong)iVar3 * 0x14);
        if (*plVar4 == local_18) goto LAB_144487093;
        iVar3 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar3 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_144487093:
  pcVar6 = FUN_1444870dc;
  if ((int)plVar4[1] == DAT_14c764f1c) {
    pcVar6 = FUN_144487e70;
  }
  pcVar2 = FUN_144487e08;
  if ((int)plVar4[1] != DAT_14c764f18) {
    pcVar2 = pcVar6;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444870dc FUN_1444870dc body=399 status=ok
// SIG undefined FUN_1444870dc(void)

void FUN_1444870dc(longlong param_1,undefined8 *param_2)

{
  void *_Dst;
  longlong *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined ***local_88;
  longlong local_78 [2];
  undefined **local_68;
  undefined2 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2 = (undefined8 *)*param_2;
  if (param_2[6] == 0) {
    plVar1 = (longlong *)param_2[5];
  }
  else {
    plVar1 = (longlong *)FUN_1490f79e6();
  }
  _Dst = (void *)param_2[4];
  local_60 = 0x100;
  local_68 = &PTR_FUN_14bb432f0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)*param_2;
    if (puVar2 == (undefined2 *)0x0) {
      uVar3 = 0;
      goto LAB_144487216;
    }
  }
  local_88 = &local_68;
  local_90 = 0x8000000;
  local_98 = 0;
  uVar3 = 0;
  (**(code **)(*plVar1 + 0xf8))(plVar1,puVar2,_Dst,0);
  lVar4 = (longlong)(int)uStack_50;
  if (lVar4 != 0) {
    if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
      (**(code **)(*plVar1 + 0x160))(plVar1,_Dst);
      lVar4 = (longlong)(int)uStack_50;
      if (lVar4 == 0) goto LAB_144487216;
    }
    else {
      memset(_Dst,0,(longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
    }
    lVar5 = lVar4 * 0x10 + local_58;
    lVar4 = local_58;
    do {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x18);
        FUN_1400021e4(&local_48,local_78);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar5);
    uVar3 = (int)uStack_50;
  }
LAB_144487216:
  local_68 = &PTR_FUN_14bb432f0;
  FUN_1447a1747(local_58,uVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14448726c FUN_14448726c body=69 status=ok
// SIG undefined FUN_14448726c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448726c(void)

{
  _DAT_14cc05738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444872ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc05740,1);
  return;
}



// FUNCTION 1444872b1 FUN_1444872b1 body=69 status=ok
// SIG undefined FUN_1444872b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444872b1(void)

{
  _DAT_14cc05750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444872f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc05758,1);
  return;
}



// FUNCTION 1444872f6 FUN_1444872f6 body=76 status=ok
// SIG undefined FUN_1444872f6(void)

void FUN_1444872f6(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_1448a8284(param_1 + 0x1f8);
  FUN_1448a8284(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x150) + 0x1f0,param_1);
    return;
  }
  return;
}



// FUNCTION 144487342 FUN_144487342 body=746 status=ok
// SIG undefined FUN_144487342(void)

undefined4 FUN_144487342(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  
  cVar4 = (**(code **)(*param_1 + 0x2a8))();
  if (cVar4 == '\0') {
    return 0;
  }
  if ((char)param_1[0x47] == '\x01') {
    lVar8 = param_1[9];
    cVar4 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
    param_1[9] = lVar8;
    if (cVar4 == '\0') {
      return 0;
    }
  }
  if ((int)param_1[0x34] == 0) {
    iVar1 = (int)param_1[0x32];
    _Src = (void *)param_1[0x31];
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1a4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
    }
    else {
      FUN_1401b309e(param_1 + 0x33,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x33],_Src,(longlong)iVar1 << 3);
      }
    }
  }
  plVar2 = (longlong *)param_1[2];
  lVar8 = plVar2[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar8 = plVar2[0x22];
    if (lVar8 != 0) goto LAB_1444873c4;
  }
  else {
LAB_1444873c4:
    lVar6 = FUN_141409182();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_1444873e6;
  }
  lVar8 = 0;
LAB_1444873e6:
  iVar1 = (int)param_1[0x34];
  if ((longlong)iVar1 == 0) {
    bVar11 = false;
    bVar3 = true;
    bVar10 = false;
  }
  else {
    plVar2 = (longlong *)param_1[0x33];
    lVar6 = *param_2;
    lVar9 = 0;
    do {
      bVar10 = *(longlong *)((longlong)plVar2 + lVar9) == lVar6;
      bVar3 = !bVar10;
      if (bVar10) break;
      bVar10 = (longlong)iVar1 * 8 + -8 != lVar9;
      lVar9 = lVar9 + 8;
    } while (bVar10);
    bVar11 = *plVar2 == lVar6;
    bVar10 = plVar2[iVar1 + -1] == lVar6;
  }
  lVar6 = *(longlong *)(param_1[0x2a] + 0xc0);
  *(double *)(lVar6 + 0x20) = (double)*(float *)(param_1 + 9);
  *(double *)(lVar6 + 0x28) = (double)*(float *)((longlong)param_1 + 0x4c);
  fVar12 = *(float *)(param_1 + 10);
  if (fVar12 <= 1e-08) {
    if (*(float *)(param_1 + 9) <= 1e-08) {
      fVar12 = 60.0;
    }
    else {
      fVar12 = 1.0 / *(float *)(param_1 + 9);
    }
  }
  *(double *)(lVar6 + 0x30) = (double)fVar12;
  uVar7 = (**(code **)(*param_1 + 0x338))(param_1);
  FUN_141905f9a(lVar6,uVar7);
  if ((bool)(bVar11 | bVar3)) {
    FUN_141905f56(param_1 + 0x2e);
  }
  *(longlong **)(lVar6 + 0x58) = param_1 + 0x2e;
  if ((lVar8 != 0) && ((*(uint *)(param_1 + 1) & 0x10) == 0)) {
    FUN_140ad4584(param_1 + 0x2c,lVar8 + 0x160);
  }
  *(longlong **)(lVar6 + 0x60) = param_1 + 0x2b;
  if (0 < (int)param_1[0x48]) {
    return 0;
  }
  uVar5 = (**(code **)(*param_1 + 0x2f0))(param_1,param_2);
  if ((bool)(bVar3 | bVar10)) {
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if ((longlong)(int)param_1[0x43] != 0) {
    lVar8 = 0;
    do {
      if ((*(int *)(param_1[0x42] + 8 + lVar8) != 0) && (*(longlong *)(param_1[0x42] + lVar8) != 0))
      {
        *(int *)(param_1 + 0x48) = (int)param_1[0x48] + 1;
        FUN_1459b4b66(param_1 + 0x42,param_1,param_2);
        *(int *)(param_1 + 0x48) = (int)param_1[0x48] + -1;
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)param_1[0x43] * 0x10 != lVar8);
  }
  if (*(longlong *)(lVar6 + 0x58) == 0) {
    return uVar5;
  }
  if (bVar10 && *(longlong *)(lVar6 + 0x60) != 0) {
    FUN_1491721a2(*(longlong *)(lVar6 + 0x58) + 8,*(longlong *)(lVar6 + 0x60) + 8);
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 14448762c FUN_14448762c body=144 status=ok
// SIG undefined FUN_14448762c(void)

bool FUN_14448762c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x150);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))();
    if (((cVar4 != '\0') ||
        (iVar1 = *(int *)(lVar2 + 8),
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2c0))(), iVar1 == iVar5)) &&
       (cVar4 = FUN_140432338(param_1), cVar4 != '\0')) {
      plVar3 = *(longlong **)(param_1 + 0x58);
      cVar4 = FUN_140432338(plVar3);
      if (cVar4 != '\0') {
        (**(code **)(*plVar3 + 0x2b0))(plVar3);
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x338))
                          (*(longlong **)(param_1 + 0x58),lVar2,param_2);
        return cVar4 != '\0';
      }
    }
  }
  return false;
}



// FUNCTION 1444876f2 FUN_1444876f2 body=69 status=ok
// SIG undefined FUN_1444876f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444876f2(void)

{
  _DAT_14cc05790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144487734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc05798,1);
  return;
}



// FUNCTION 144487737 FUN_144487737 body=69 status=ok
// SIG undefined FUN_144487737(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144487737(void)

{
  _DAT_14cc057a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144487779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc057b0,1);
  return;
}



// FUNCTION 1444879a2 FUN_1444879a2 body=147 status=ok
// SIG undefined FUN_1444879a2(void)

void FUN_1444879a2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,
                L"Array Size (%d) larger than allowed maximum (%d).\nCheck VMRuntimeSettings in class settings."
               );
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    local_28 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2,&local_28,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144487a36 FUN_144487a36 body=147 status=ok
// SIG undefined FUN_144487a36(void)

void FUN_144487a36(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,L"Array Index (%d) out of bounds (count %d).");
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    local_28 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2,&local_28,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144487d24 FUN_144487d24 body=130 status=ok
// SIG undefined FUN_144487d24(void)

void FUN_144487d24(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)((undefined8 *)*param_2)[4];
  FUN_1400021e4(*(undefined8 *)*param_2,&local_28);
  if (plVar1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_28;
    *(undefined4 *)(plVar1 + 1) = local_20;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144487da8 FUN_144487da8 body=96 status=ok
// SIG undefined FUN_144487da8(void)

void FUN_144487da8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = *(undefined8 **)*param_2;
  puVar3 = (undefined8 *)((longlong *)*param_2)[4];
  if (puVar3 != puVar2) {
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(puVar3 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)puVar3 + 0xc) == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144487e08 FUN_144487e08 body=103 status=ok
// SIG undefined FUN_144487e08(void)

void FUN_144487e08(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined8 **)*param_2;
  puVar2 = (undefined8 *)((undefined8 *)*param_2)[4];
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  FUN_1446f470e(&local_20,puVar3,1);
  *puVar2 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144487e70 FUN_144487e70 body=96 status=ok
// SIG undefined FUN_144487e70(void)

void FUN_144487e70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = *(undefined8 **)*param_2;
  puVar3 = (undefined8 *)((longlong *)*param_2)[4];
  if (puVar3 != puVar2) {
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(puVar3 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)puVar3 + 0xc) == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144487ed0 FUN_144487ed0 body=69 status=ok
// SIG undefined FUN_144487ed0(void)

undefined8 * FUN_144487ed0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb432f0;
  FUN_1447a1747(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144487f16 FUN_144487f16 body=167 status=ok
// SIG undefined FUN_144487f16(void)

/* WARNING: Removing unreachable block (ram,0x000144487f9a) */

void FUN_144487f16(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"Error convert to string: %s",param_2);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x10),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_30;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14448816c FUN_14448816c body=1773 status=ok
// SIG undefined FUN_14448816c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448816c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  char *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&local_68,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_68,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_68,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_68,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_68,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_68,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_68,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_68,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_68,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_68,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_68,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_68,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<FString>_14c764ef8,1);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2c9d0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2d120);
  uStack_78 = 2;
  ppuStack_80 = &PTR_FUN_14bb2d980;
  local_88 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2d9c0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0x14;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2e530);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2e950);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2eb10);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2ec00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2ed50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2ee50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2ef00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2f0b0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2f410);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb2ff80);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0x15;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb320a0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0xd;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb34800);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb35940);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb36450);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb36c80);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb37340);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb37f50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb383d0);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cc05658);
  if (cVar1 == '\0') {
    _DAT_14cc05658 = 0;
    uRam000000014cc05660 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = "bone";
  uStack_60 = 4;
  uStack_5c = uStack_5c & 0xffffff00;
  FUN_14001a6c0(&local_68,1);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bb3a200,1,0);
  local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc05738,L"RigVM.DisableExecutionAll",&local_68,
                L"if nonzero we disable all execution of rigvms.");
  atexit(FUN_14448726c);
  local_68 = (char *)CONCAT44(local_68._4_4_,1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc05750,L"RigVM.DisableNativizedVMs",&local_68,
                L"if nonzero we disable swapping to nativized VMs.");
  atexit(FUN_1444872b1);
  local_68 = (char *)0x800000014bb3a38e;
  local_6c = 5;
  uStack_60 = FUN_14577453c();
  uStack_5c = CONCAT31(uStack_5c._1_3_,1);
  FUN_1466c4a66(&local_68);
  local_68 = (char *)0x53c04de7dc49959b;
  uStack_60 = 0x9156ea88;
  uStack_5c = 0x5e7c5d39;
  _DAT_14cc05780 = 0xdc49959b;
  uRam000000014cc05784 = 0x53c04de7;
  uRam000000014cc05788 = 0x9156ea88;
  uRam000000014cc0578c = 0x5e7c5d39;
  FUN_141005458(&local_68,0xf,L"Dev-RigVM",0);
  atexit((_func_5014 *)&LAB_1444876e6);
  local_68._0_1_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc05790,L"RigVM.UObjectSupport",&local_68,
                L"When true the RigVMCompiler will allow UObjects.");
  atexit(FUN_1444876f2);
  local_68 = (char *)CONCAT71(local_68._1_7_,1);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc057a8,L"RigVM.UInterfaceSupport",&local_68,
                L"When true the RigVMCompiler will allow UInterfaces.");
  atexit(FUN_144487737);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bb3ad40,2,0);
  local_68 = "AssetRegistry";
  uStack_60 = 0xd;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc057f8 = (ulonglong)uVar2;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14448885c FUN_14448885c body=55 status=ok
// SIG undefined FUN_14448885c(void)

void FUN_14448885c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc05d40 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc05d40 = FUN_14171c317(FUN_1466c5d7d,uVar1,L"ERigTransformStackEntryType");
  }
  return;
}



// FUNCTION 1444888de FUN_1444888de body=89 status=ok
// SIG undefined FUN_1444888de(void)

undefined8 * FUN_1444888de(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149192186(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1444889e1 FUN_1444889e1 body=820 status=ok
// SIG undefined FUN_1444889e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444889e1(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc05c90);
  if (cVar1 == '\0') {
    _DAT_14cc05c90 = 0;
    uRam000000014cc05c98 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb47340,1,0);
  FUN_1446f470e(&local_40,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_40,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_40,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_40,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_40,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_40,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_40,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_40,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_40,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_40,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_40,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_40,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FString>_14c764ef8,1);
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb479a0,1,&PTR_FUN_14bb47950);
  _DAT_14cc05d10 = 0xffffffff;
  _DAT_14cc05d14 = 0;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb47c00);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14bb57c10;
  local_58 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb57c60,2,&PTR_FUN_14bb57c30);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144488d18 FUN_144488d18 body=55 status=ok
// SIG undefined FUN_144488d18(void)

void FUN_144488d18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06438 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06438 = FUN_14171c317(FUN_1466c7f5e,uVar1,L"ERigTransformType");
  }
  return;
}



// FUNCTION 144488d4f FUN_144488d4f body=55 status=ok
// SIG undefined FUN_144488d4f(void)

void FUN_144488d4f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06450 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06450 = FUN_14171c317(FUN_1466c7f8d,uVar1,L"ERigTransformStorageType");
  }
  return;
}



// FUNCTION 144488d86 FUN_144488d86 body=55 status=ok
// SIG undefined FUN_144488d86(void)

void FUN_144488d86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc065e8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc065e8 = FUN_14171c317(FUN_1466c88c6,uVar1,L"ERigControlTransformChannel");
  }
  return;
}



// FUNCTION 144488dbd FUN_144488dbd body=55 status=ok
// SIG undefined FUN_144488dbd(void)

void FUN_144488dbd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc066c0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc066c0 = FUN_14171c317(FUN_1466c8d7a,uVar1,L"EConnectorType");
  }
  return;
}



// FUNCTION 144488df4 FUN_144488df4 body=55 status=ok
// SIG undefined FUN_144488df4(void)

void FUN_144488df4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06820 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06820 = FUN_14171c317(FUN_1466c92fa,uVar1,L"EControlRigVectorKind");
  }
  return;
}



// FUNCTION 144488e2c FUN_144488e2c body=405 status=ok
// SIG undefined FUN_144488e2c(void)

void FUN_144488e2c(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  undefined8 local_80;
  char local_6e;
  undefined4 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144488fc2();
  if ((param_2 != 0) && (*(int *)(param_1 + 0x38c) < *(int *)(param_1 + 0x360))) {
    if (*(char *)(param_3 + 0x48) == '\0') {
      FUN_144716af1(*(undefined8 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x40));
      *(undefined1 *)(param_3 + 0x48) = 1;
    }
    if (*(char *)(param_1 + 0x4c0) == '\0') {
      FUN_1491c6563(*(undefined8 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b8));
      *(undefined1 *)(param_1 + 0x4c0) = 1;
    }
    iVar2 = *(int *)(param_3 + 0x40);
    iVar3 = *(int *)(param_1 + 0x4b8);
    if (iVar2 != 0 || iVar3 < 1) {
      iVar8 = 0;
      iVar9 = 0;
      do {
        if (iVar8 <= iVar2 && iVar9 == iVar3) break;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x4b0) + (longlong)iVar9 * 0x10);
        lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x38) + (longlong)iVar8 * 0x10);
        if (lVar5 == lVar4) {
          uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x38) + (longlong)iVar8 * 0x10 + 8);
          FUN_1409a6968(param_2,local_90,*(longlong *)(param_1 + 0x4b0) + (longlong)iVar9 * 0x10 + 8
                       );
          if ((local_6e == '\0') && (cVar6 = FUN_1402ca054(local_80,L"float",5), cVar6 != '\0')) {
            *local_68 = uVar1;
          }
          iVar8 = iVar8 + 1;
LAB_144488f80:
          iVar9 = iVar9 + 1;
        }
        else {
          iVar7 = (int)lVar5 - (int)lVar4;
          if (iVar7 == 0) {
            iVar7 = (int)((ulonglong)lVar5 >> 0x20) - (int)((ulonglong)lVar4 >> 0x20);
          }
          if (-1 < iVar7) goto LAB_144488f80;
          iVar8 = iVar8 + 1;
        }
      } while (iVar3 <= iVar9 || iVar8 != iVar2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144488fc2 FUN_144488fc2 body=4100 status=ok
// SIG undefined FUN_144488fc2(void)

void FUN_144488fc2(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined2 *puVar1;
  ushort *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  uint *puVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 *puVar33;
  void **ppvVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong *plVar38;
  longlong lVar39;
  undefined2 *puVar40;
  ushort *puVar41;
  bool bVar42;
  undefined1 auStack_398 [32];
  undefined1 local_378;
  undefined1 local_370;
  undefined1 local_368;
  undefined1 local_360;
  longlong local_350;
  ulonglong local_348;
  longlong *local_340;
  uint *local_338;
  longlong local_330;
  undefined1 local_324 [4];
  undefined8 local_320;
  undefined8 local_318 [12];
  undefined8 local_2b8 [12];
  undefined1 local_254 [4];
  undefined8 local_250;
  undefined8 local_248 [12];
  undefined1 local_1e4 [4];
  undefined8 local_1e0;
  void *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined8 local_178 [12];
  longlong local_118 [9];
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_398;
  cVar14 = (**(code **)(*param_1 + 0x118))();
  local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8);
  local_c0 = (int *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
  if ((cVar14 == '\0') ||
     (local_350 = *(longlong *)(param_2 + 0x2f8),
     local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8),
     local_c0 = (int *)CONCAT44(local_c0._4_4_,(undefined4)local_c0), local_350 == 0))
  goto LAB_144489c2f;
  if (*(char *)((longlong)param_1 + 0x252) == '\x01') {
    local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8);
    local_c0 = (int *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
    if ((param_1[0x45] != 0) &&
       (local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8),
       local_c0 = (int *)CONCAT44(local_c0._4_4_,(undefined4)local_c0),
       (char)param_1[0x20] == '\x01')) {
      if (*(int *)(param_1[0x45] + 0x108) != 0) {
        local_338 = (uint *)CONCAT71(local_338._1_7_,*(undefined1 *)(local_350 + 0x4c8));
        *(undefined1 *)(local_350 + 0x4c8) = 0;
        uVar35 = *(uint *)(local_350 + 0xc);
        if ((int)uVar35 < DAT_14c9647dc) {
          lVar36 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
        }
        else {
          lVar36 = 0;
        }
        iVar15 = *(int *)(lVar36 + 0x10);
        if (*(int *)(lVar36 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          iVar30 = DAT_14c964868 + 1;
          bVar42 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar42) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar30);
          }
          LOCK();
          iVar15 = *(int *)(lVar36 + 0x10);
          bVar42 = iVar15 == 0;
          if (bVar42) {
            *(int *)(lVar36 + 0x10) = iVar30;
            iVar15 = 0;
          }
          UNLOCK();
          if (bVar42) {
            iVar15 = iVar30;
          }
        }
        local_348 = CONCAT44(local_348._4_4_,iVar15);
        lVar36 = (longlong)*(int *)(param_1[0x45] + 0x108);
        local_340 = (longlong *)(ulonglong)uVar35;
        if (lVar36 != 0) {
          lVar32 = *(longlong *)(param_1[0x45] + 0x100);
          lVar39 = 0;
          lVar31 = local_350;
          do {
            iVar15 = *(int *)(lVar32 + lVar39);
            if ((((-1 < (longlong)iVar15) && (iVar15 < *(int *)(lVar31 + 0xc0))) &&
                (lVar10 = *(longlong *)(*(longlong *)(lVar31 + 0xb8) + (longlong)iVar15 * 8),
                lVar10 != 0)) && (*(char *)(lVar10 + 0x10) == '\x01')) {
              FUN_1401571e4(lVar31,&local_c8,lVar10,0);
              if (*(undefined8 **)(lVar10 + 0x50) != (undefined8 *)0x0) {
                puVar33 = &local_c8;
                puVar28 = *(undefined8 **)(lVar10 + 0x50);
                for (lVar25 = 0xc; lVar31 = local_350, lVar25 != 0; lVar25 = lVar25 + -1) {
                  *puVar28 = *puVar33;
                  puVar33 = puVar33 + 1;
                  puVar28 = puVar28 + 1;
                }
              }
              puVar18 = *(undefined1 **)(lVar10 + 0xa0);
              if (puVar18 == (undefined1 *)0x0) {
                puVar18 = &DAT_14cc07bfc;
              }
              *puVar18 = 0;
              puVar18 = *(undefined1 **)(lVar10 + 0x90);
              if (puVar18 == (undefined1 *)0x0) {
                puVar18 = &DAT_14cc07bfc;
              }
              *puVar18 = 1;
            }
            lVar39 = lVar39 + 4;
          } while (lVar36 * 4 != lVar39);
        }
        if (((((uint)local_348 != 0) && (uVar35 = (uint)local_340, -1 < (int)uVar35)) &&
            (((int)uVar35 < DAT_14c9647dc &&
             ((plVar19 = (longlong *)
                         ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
              plVar19 != (longlong *)0x0 && ((int)plVar19[2] == (uint)local_348)))))) &&
           ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
            lVar36 = *plVar19;
          }
          else {
            lVar36 = 0;
          }
          *(undefined1 *)(lVar36 + 0x4c8) = local_338._0_1_;
        }
      }
      if ((*(char *)((longlong)param_1 + 0x71) == '\x01') &&
         (lVar36 = param_1[0x45], *(int *)(param_3 + 0x28) == *(int *)(lVar36 + 0x50))) {
        FUN_14919929e(lVar36);
        iVar15 = *(int *)(lVar36 + 0x178);
        if ((longlong)iVar15 != 0) {
          lVar36 = *(longlong *)(lVar36 + 0x170);
          lVar32 = 0;
          do {
            pcVar13 = *(char **)(*(longlong *)(lVar36 + 0x18 + lVar32) + 8);
            if ((pcVar13 != (char *)0x0) && (*pcVar13 == '\0')) {
              *pcVar13 = '\x01';
            }
            lVar32 = lVar32 + 0x20;
          } while ((longlong)iVar15 * 0x20 != lVar32);
        }
        lVar36 = param_1[0x45];
        iVar15 = *(int *)(param_3 + 0x28);
        pvVar11 = *(void **)(param_3 + 0x20);
        *(int *)(lVar36 + 0x50) = iVar15;
        if (iVar15 == 0 && *(int *)(lVar36 + 0x54) == 0) {
          *(undefined4 *)(lVar36 + 0x54) = 0;
        }
        else {
          FUN_144756262((undefined8 *)(lVar36 + 0x48),iVar15);
          if (iVar15 != 0) {
            memcpy(*(void **)(lVar36 + 0x48),pvVar11,(longlong)iVar15 * 0x60);
          }
        }
        local_62 = 0x101;
        FUN_149198544(param_1[0x45]);
      }
      lVar36 = local_350;
      if ((*(char *)((longlong)param_1 + 0x101) != '\0') ||
         (local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8),
         local_c0 = (int *)CONCAT44(local_c0._4_4_,(undefined4)local_c0),
         *(char *)((longlong)param_1 + 0x103) == '\x01')) {
        FUN_14449dffe(local_350,0);
        local_1d8 = (void *)0x0;
        local_1d0 = *(uint *)(*(longlong *)(lVar36 + 0xf0) + 0x38);
        lVar32 = (longlong)(int)local_1d0;
        pvVar11 = *(void **)(*(longlong *)(lVar36 + 0xf0) + 0x30);
        if (lVar32 == 0) {
          local_1cc = 0;
          uVar35 = 0;
        }
        else {
          FUN_1466cc7d0(&local_1d8,local_1d0,0);
          memcpy(local_1d8,pvVar11,lVar32 << 3);
          uVar35 = local_1d0;
        }
        lVar36 = param_1[0x45];
        if (*(int *)(lVar36 + 0xb0) - *(int *)(lVar36 + 0xdc) != uVar35) {
          FUN_14005eae2(lVar36 + 0xa8);
          uVar35 = local_1d0;
          lVar36 = param_1[0x45];
          if ((uint)(*(int *)(lVar36 + 0xb0) - *(int *)(lVar36 + 0xdc)) < local_1d0) {
            if ((int)local_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)local_1d0);
            }
            FUN_141724914(lVar36 + 0xa8,local_1d0);
            iVar15 = 1;
            if (3 < uVar35) {
              uVar35 = (uVar35 | 1) + 0xe;
              iVar15 = 0x1f;
              if (uVar35 != 0) {
                for (; uVar35 >> iVar15 == 0; iVar15 = iVar15 + -1) {
                }
              }
              iVar15 = 1 << ((byte)iVar15 & 0x1f);
            }
            if ((*(int *)(lVar36 + 0xf0) == 0) || (*(int *)(lVar36 + 0xf0) < iVar15)) {
              *(int *)(lVar36 + 0xf0) = iVar15;
              FUN_14487ddf8(lVar36 + 0xa8);
            }
          }
          local_cc = 0;
          if (0 < (int)local_1d0) {
            do {
              local_c8 = *(longlong *)((longlong)local_1d8 + (longlong)local_cc * 8) + 0x14;
              local_c0 = &local_cc;
              FUN_140171856(param_1[0x45] + 0xa8,local_118,&local_c8,0);
              local_cc = local_cc + 1;
            } while (local_cc < (int)local_1d0);
          }
          lVar36 = param_1[0x45];
        }
        iVar15 = *(int *)(param_3 + 0x40);
        iVar30 = *(int *)(lVar36 + 0x90);
        if (iVar30 < iVar15) {
          *(int *)(lVar36 + 0x90) = iVar15;
          if ((uint)(*(int *)(lVar36 + 0x94) - iVar30) < (uint)(iVar15 - iVar30)) {
            FUN_1446f48e2(lVar36 + 0x88);
          }
        }
        else {
          if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar15);
          }
          if (iVar15 < iVar30) {
            *(int *)(lVar36 + 0x90) = iVar15;
            FUN_14479f406(lVar36 + 0x88);
          }
        }
        if ((longlong)*(int *)(param_3 + 0x40) != 0) {
          plVar19 = *(longlong **)(param_3 + 0x38);
          plVar20 = plVar19 + (longlong)*(int *)(param_3 + 0x40) * 2;
          lVar36 = 0;
          do {
            *(undefined4 *)(*(longlong *)(param_1[0x45] + 0x88) + lVar36 * 4) = 0xffffffff;
            lVar32 = param_1[0x45];
            if (*(int *)(lVar32 + 0xb0) != *(int *)(lVar32 + 0xdc)) {
              lVar31 = *plVar19;
              uVar35 = (uint)((ulonglong)lVar31 >> 0x10);
              uVar23 = (uint)lVar31 & 0xffff;
              lVar39 = lVar32 + 0xe0;
              if (*(longlong *)(lVar32 + 0xe8) != 0) {
                lVar39 = *(longlong *)(lVar32 + 0xe8);
              }
              iVar15 = *(int *)(lVar39 + (ulonglong)
                                         (*(int *)(lVar32 + 0xf0) - 1U &
                                         (int)((ulonglong)lVar31 >> 0x20) +
                                         ((uint)lVar31 << 0x10 | uVar23) +
                                         (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar23 >> 4)) * 4);
              if (iVar15 != -1) {
                do {
                  plVar3 = (longlong *)(*(longlong *)(lVar32 + 0xa8) + (longlong)iVar15 * 0x14);
                  if (*plVar3 == lVar31) {
                    plVar38 = plVar3 + 1;
                    if (plVar38 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
                      iVar15 = (int)*plVar38;
                      lVar31 = *(longlong *)((longlong)local_1d8 + (longlong)iVar15 * 8);
                      if ((lVar31 == 0) || (*(char *)(lVar31 + 0x10) != '\b')) {
                        lVar31 = 0;
                      }
                      if (*(undefined4 **)(lVar31 + 0x50) != (undefined4 *)0x0) {
                        **(undefined4 **)(lVar31 + 0x50) = (int)plVar19[1];
                        *(undefined1 *)(lVar31 + 0x48) = 1;
                        iVar15 = (int)*plVar38;
                        lVar32 = param_1[0x45];
                      }
                      *(int *)(*(longlong *)(lVar32 + 0x88) + lVar36 * 4) = iVar15;
                    }
                    break;
                  }
                  iVar15 = *(int *)((longlong)plVar3 + 0xc);
                } while (iVar15 != -1);
              }
            }
            lVar36 = lVar36 + 1;
            plVar19 = plVar19 + 2;
          } while (plVar19 != plVar20);
        }
        if (local_1d8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    goto LAB_144489c2f;
  }
  if (((char)param_1[0x20] == '\x01') && (*(char *)((longlong)param_1 + 0x71) == '\x01')) {
    if (((int)param_1[0x28] != *(int *)((longlong)param_1 + 0x16c)) ||
       ((char)param_1[0xe] == '\x01')) {
      uVar5 = *(undefined1 *)(local_350 + 0x4c8);
      *(undefined1 *)(local_350 + 0x4c8) = 0;
      uVar35 = *(uint *)(local_350 + 0xc);
      if ((int)uVar35 < DAT_14c9647dc) {
        lVar36 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8);
      }
      else {
        lVar36 = 0;
      }
      iVar15 = *(int *)(lVar36 + 0x10);
      if (iVar15 == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        iVar30 = DAT_14c964868 + 1;
        bVar42 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar42) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar15 = *(int *)(lVar36 + 0x10);
        bVar42 = iVar15 == 0;
        if (bVar42) {
          *(int *)(lVar36 + 0x10) = iVar30;
          iVar15 = 0;
        }
        UNLOCK();
        if (bVar42) {
          iVar15 = iVar30;
        }
        FUN_140ad5be4(local_350,1);
        if (iVar15 == 0) goto LAB_144489483;
      }
      else {
        FUN_140ad5be4(local_350,1);
      }
      if ((((-1 < (int)uVar35) && ((int)uVar35 < DAT_14c9647dc)) &&
          (plVar19 = (longlong *)
                     ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
          plVar19 != (longlong *)0x0)) &&
         (((int)plVar19[2] == iVar15 && ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
          lVar36 = *plVar19;
        }
        else {
          lVar36 = 0;
        }
        *(undefined1 *)(lVar36 + 0x4c8) = uVar5;
      }
    }
LAB_144489483:
    local_340 = (longlong *)(param_3 + 0x20);
    if ((*(char *)((longlong)param_1 + 0x73) == '\0') &&
       (((*(int *)((longlong)param_1 + 0xfc) == 0 ||
         (uVar35 = *(uint *)(param_1 + 0x1f), (int)uVar35 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar35 ||
         (((lVar36 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8), lVar36 == 0 ||
           (*(int *)(lVar36 + 0x10) != *(int *)((longlong)param_1 + 0xfc))) ||
          ((*(uint *)(lVar36 + 8) & 0x10200000) != 0)))))))) {
      if ((longlong)(int)param_1[0x22] == 0) {
        iVar15 = (int)param_1[0x2c];
        if (iVar15 == 0) {
          uVar29 = 1;
          local_348 = 0;
          iVar30 = 0;
          iVar21 = 0;
        }
        else {
          puVar26 = (uint *)param_1[0x2b];
          if ((uint *)param_1[0x2b] == (uint *)0x0) {
            puVar26 = (uint *)(param_1 + 0x29);
          }
          uVar35 = *puVar26;
          if (uVar35 == 0) {
            iVar30 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar30 = iVar15 + -1;
            }
            uVar37 = 0;
            uVar29 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar29 = uVar37;
            }
            iVar30 = 0;
            do {
              if (uVar29 == uVar37) goto LAB_144489bb7;
              iVar30 = iVar30 + 0x20;
              uVar35 = puVar26[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar35 == 0);
          }
          else {
            uVar37 = 0;
            iVar30 = 0;
          }
          uVar29 = (ulonglong)(-uVar35 & uVar35);
          uVar4 = uVar29 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar21 = (iVar30 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          local_348 = uVar37;
          if (iVar15 <= iVar21) {
            iVar21 = iVar15;
          }
        }
        if (iVar21 < iVar15) {
          uVar35 = 0xffffffff;
          local_330 = param_3;
          do {
            lVar36 = local_350;
            local_338 = (uint *)CONCAT44(local_338._4_4_,iVar30);
            local_320 = *(undefined8 *)(param_1[0x27] + (longlong)iVar21 * 0x14);
            puVar33 = (undefined8 *)
                      ((ulonglong)
                       ((uint)*(ushort *)(param_1[0x27] + 8 + (longlong)iVar21 * 0x14) * 0x60) +
                      *local_340);
            puVar28 = local_318;
            for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
              *puVar28 = *puVar33;
              puVar33 = puVar33 + 1;
              puVar28 = puVar28 + 1;
            }
            local_324[0] = 1;
            puVar33 = local_318;
            puVar28 = &local_c8;
            for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
              *puVar28 = *puVar33;
              puVar33 = puVar33 + 1;
              puVar28 = puVar28 + 1;
            }
            uVar17 = FUN_140813180(local_350,local_324);
            local_368 = 0;
            local_370 = 0;
            local_378 = 1;
            FUN_140122cc6(lVar36,uVar17,&local_c8,0);
            uVar35 = ~(uint)uVar29 & uVar35;
            puVar26 = (uint *)param_1[0x2b];
            if ((uint *)param_1[0x2b] == (uint *)0x0) {
              puVar26 = (uint *)(param_1 + 0x29);
            }
            iVar15 = (int)param_1[0x2c];
            iVar21 = (int)local_348;
            lVar36 = (longlong)iVar21;
            uVar23 = puVar26[lVar36] & uVar35;
            iVar30 = (int)local_338;
            param_3 = local_330;
            if (uVar23 == 0) {
              iVar24 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar24 = iVar15 + -1;
              }
              iVar24 = iVar24 >> 5;
              iVar22 = iVar24;
              if (iVar24 < iVar21) {
                iVar22 = iVar21;
              }
              if (iVar24 <= iVar21) break;
              lVar32 = 0;
              while( true ) {
                iVar30 = iVar30 + 0x20;
                uVar23 = puVar26[lVar36 + lVar32 + 1];
                if (uVar23 != 0) break;
                lVar32 = lVar32 + 1;
                if (iVar22 - lVar36 == lVar32) goto LAB_144489bb7;
              }
              local_348 = (ulonglong)(iVar21 + (int)lVar32 + 1);
              uVar35 = 0xffffffff;
            }
            uVar29 = (ulonglong)(-uVar23 & uVar23);
            uVar37 = uVar29 * 2 + 1;
            lVar36 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            iVar21 = (iVar30 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          } while (iVar21 < iVar15);
        }
      }
      else {
        puVar40 = (undefined2 *)param_1[0x21];
        puVar1 = puVar40 + (longlong)(int)param_1[0x22] * 2;
        do {
          uVar7 = *puVar40;
          puVar33 = (undefined8 *)((ulonglong)((uint)(ushort)puVar40[1] * 0x60) + *local_340);
          puVar28 = local_2b8;
          for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
            *puVar28 = *puVar33;
            puVar33 = puVar33 + 1;
            puVar28 = puVar28 + 1;
          }
          local_368 = 0;
          local_370 = 0;
          local_378 = 1;
          FUN_140122cc6(local_350,uVar7,local_2b8,0);
          puVar40 = puVar40 + 2;
        } while (puVar40 != puVar1);
      }
    }
    else {
      local_118[6] = 0;
      local_118[7] = 0;
      local_118[4] = 0;
      local_118[5] = 0;
      local_118[2] = 0;
      local_118[3] = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[8] = 0;
      FUN_1417977a6(local_118,local_340);
      if ((longlong)(int)param_1[0x22] == 0) {
        local_338 = (uint *)(param_1 + 0x29);
        iVar15 = (int)param_1[0x2c];
        if (iVar15 == 0) {
          uVar29 = 1;
          uVar37 = 0;
          iVar30 = 0;
          iVar21 = 0;
        }
        else {
          puVar26 = (uint *)param_1[0x2b];
          if ((uint *)param_1[0x2b] == (uint *)0x0) {
            puVar26 = local_338;
          }
          uVar35 = *puVar26;
          if (uVar35 == 0) {
            iVar30 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar30 = iVar15 + -1;
            }
            uVar37 = 0;
            uVar29 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar29 = uVar37;
            }
            iVar30 = 0;
            do {
              local_330 = param_3;
              if (uVar29 == uVar37) goto LAB_144489bb7;
              iVar30 = iVar30 + 0x20;
              uVar35 = puVar26[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar35 == 0);
          }
          else {
            uVar37 = 0;
            iVar30 = 0;
          }
          uVar29 = (ulonglong)(-uVar35 & uVar35);
          uVar4 = uVar29 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar21 = (iVar30 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar21) {
            iVar21 = iVar15;
          }
        }
        local_330 = param_3;
        if (iVar21 < iVar15) {
          uVar35 = 0xffffffff;
          do {
            local_348 = CONCAT44(local_348._4_4_,uVar35);
            local_340 = (longlong *)CONCAT44(local_340._4_4_,iVar30);
            lVar36 = param_1[0x27];
            lVar32 = (longlong)iVar21;
            uVar8 = *(ushort *)(lVar36 + 8 + lVar32 * 0x14);
            uVar12 = *(undefined8 *)(lVar36 + lVar32 * 0x14);
            if (*(char *)(local_118[3] + (ulonglong)uVar8) == '\0') {
              FUN_1447d5d8e(local_118,(ulonglong)uVar8);
            }
            puVar33 = (undefined8 *)((ulonglong)((uint)uVar8 * 0x60) + local_118[0]);
            if (((*(int *)((longlong)param_1 + 0xfc) == 0) ||
                (uVar35 = *(uint *)(param_1 + 0x1f), (int)uVar35 < 0)) ||
               (((DAT_14c9647dc <= (int)uVar35 ||
                 ((puVar28 = (undefined8 *)
                             ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
                  puVar28 == (undefined8 *)0x0 ||
                  (*(int *)(puVar28 + 2) != *(int *)((longlong)param_1 + 0xfc))))) ||
                ((*(uint *)(puVar28 + 1) & 0x10200000) != 0)))) {
              puVar28 = local_248;
              for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
                *puVar28 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar28 = puVar28 + 1;
              }
              local_254[0] = 1;
              local_250 = uVar12;
              puVar33 = local_248;
              puVar28 = &local_c8;
              for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
                *puVar28 = *puVar33;
                puVar33 = puVar33 + 1;
                puVar28 = puVar28 + 1;
              }
              puVar18 = local_254;
            }
            else {
              if ((*(uint *)(puVar28 + 1) & 0x10200000) == 0) {
                uVar27 = *puVar28;
              }
              else {
                uVar27 = 0;
              }
              FUN_149199512(uVar27,&local_c8,lVar36 + lVar32 * 0x14);
              FUN_144a2c3ca(&local_c8,&local_1d8,puVar33);
              ppvVar34 = &local_1d8;
              puVar33 = &local_c8;
              for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
                *puVar33 = *ppvVar34;
                ppvVar34 = ppvVar34 + 1;
                puVar33 = puVar33 + 1;
              }
              local_1e4[0] = 1;
              puVar18 = local_1e4;
              local_1e0 = uVar12;
            }
            lVar36 = local_350;
            uVar35 = FUN_140813180(local_350,puVar18);
            if ((((-1 < (int)uVar35) && ((int)uVar35 < *(int *)(lVar36 + 0xc0))) &&
                (lVar32 = *(longlong *)(*(longlong *)(lVar36 + 0xb8) + (ulonglong)uVar35 * 8),
                lVar32 != 0)) &&
               (((bVar6 = *(byte *)(lVar32 + 0x10), bVar6 - 1 < 2 || (bVar6 == 0x80)) ||
                ((bVar6 < 0x21 && ((0x100010010U >> ((ulonglong)bVar6 & 0x3f) & 1) != 0)))))) {
              local_360 = 0;
              local_368 = 0;
              local_370 = 0;
              local_378 = 1;
              FUN_140122d4e(lVar36,lVar32,&local_c8,3);
            }
            uVar35 = (uint)local_348 & ~(uint)uVar29;
            puVar26 = (uint *)param_1[0x2b];
            if ((uint *)param_1[0x2b] == (uint *)0x0) {
              puVar26 = local_338;
            }
            iVar15 = (int)param_1[0x2c];
            iVar21 = (int)uVar37;
            lVar36 = (longlong)iVar21;
            uVar23 = puVar26[lVar36] & uVar35;
            iVar30 = (int)local_340;
            param_3 = local_330;
            if (uVar23 == 0) {
              iVar24 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar24 = iVar15 + -1;
              }
              iVar24 = iVar24 >> 5;
              iVar22 = iVar24;
              if (iVar24 < iVar21) {
                iVar22 = iVar21;
              }
              if (iVar24 <= iVar21) break;
              lVar32 = 0;
              while( true ) {
                iVar30 = iVar30 + 0x20;
                uVar23 = puVar26[lVar36 + lVar32 + 1];
                if (uVar23 != 0) break;
                lVar32 = lVar32 + 1;
                if (iVar22 - lVar36 == lVar32) goto LAB_144489bb7;
              }
              uVar37 = (ulonglong)(iVar21 + (int)lVar32 + 1);
              uVar35 = 0xffffffff;
            }
            uVar29 = (ulonglong)(-uVar23 & uVar23);
            uVar4 = uVar29 * 2 + 1;
            lVar36 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            iVar21 = (iVar30 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          } while (iVar21 < iVar15);
        }
      }
      else {
        puVar41 = (ushort *)param_1[0x21];
        puVar2 = puVar41 + (longlong)(int)param_1[0x22] * 2;
        local_330 = param_3;
        do {
          uVar8 = *puVar41;
          uVar9 = puVar41[1];
          if (*(char *)(local_118[3] + (ulonglong)uVar9) == '\0') {
            FUN_1447d5d8e(local_118,(ulonglong)uVar9);
          }
          puVar33 = (undefined8 *)((ulonglong)((uint)uVar9 * 0x60) + local_118[0]);
          puVar28 = local_178;
          for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
            *puVar28 = *puVar33;
            puVar33 = puVar33 + 1;
            puVar28 = puVar28 + 1;
          }
          if ((((int)(uint)uVar8 < *(int *)(local_350 + 0xc0)) &&
              (lVar36 = *(longlong *)(*(longlong *)(local_350 + 0xb8) + (ulonglong)uVar8 * 8),
              lVar36 != 0)) &&
             (((bVar6 = *(byte *)(lVar36 + 0x10), bVar6 - 1 < 2 || (bVar6 == 0x80)) ||
              ((bVar6 < 0x21 && ((0x100010010U >> ((ulonglong)bVar6 & 0x3f) & 1) != 0)))))) {
            local_360 = 0;
            local_368 = 0;
            local_370 = 0;
            local_378 = 1;
            FUN_140122d4e(local_350,lVar36,local_178,3);
          }
          puVar41 = puVar41 + 2;
          param_3 = local_330;
        } while (puVar41 != puVar2);
      }
    }
  }
LAB_144489bb7:
  local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8);
  local_c0 = (int *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
  if ((*(char *)((longlong)param_1 + 0x101) == '\x01') &&
     (local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_c8),
     local_c0 = (int *)CONCAT44(local_c0._4_4_,(undefined4)local_c0),
     *(char *)((longlong)param_1 + 0x72) == '\x01')) {
    FUN_14449dffe(local_350,0);
    lVar36 = local_350;
    if ((longlong)*(int *)(param_3 + 0x40) != 0) {
      puVar33 = *(undefined8 **)(param_3 + 0x38);
      puVar28 = puVar33 + (longlong)*(int *)(param_3 + 0x40) * 2;
      do {
        uVar17 = *(undefined4 *)(puVar33 + 1);
        local_c8._0_4_ = CONCAT31(local_c8._1_3_,8);
        local_c8._4_4_ = (undefined4)*puVar33;
        local_c0._0_4_ = (undefined4)((ulonglong)*puVar33 >> 0x20);
        uVar16 = FUN_140813180(lVar36,&local_c8);
        FUN_14143b628(lVar36,uVar16,uVar17,0);
        puVar33 = puVar33 + 2;
      } while (puVar33 != puVar28);
    }
  }
LAB_144489c2f:
  if ((local_60 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144489fc8 FUN_144489fc8 body=220 status=ok
// SIG undefined FUN_144489fc8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144489fc8(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  ulonglong local_30 [3];
  
  local_30[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30[1] = 0;
  uVar2 = param_1[0x2f];
  local_30[0] = uVar2;
  if (uVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(uVar2);
  }
  if ((uVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(uVar2);
  }
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  FUN_1491c6a2c(lVar1 + 0x278,uVar3 >> 0x10 ^ uVar3,local_30,local_30 + 1);
  *(undefined8 *)(lVar1 + 0x260) = 0;
  FUN_1409a445e(lVar1,param_1[1],param_1 + 2);
  if ((local_30[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14448a0a5 FUN_14448a0a5 body=69 status=ok
// SIG undefined FUN_14448a0a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448a0a5(void)

{
  _DAT_14cc068e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014448a0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc068f0,1);
  return;
}



// FUNCTION 14448a0ea FUN_14448a0ea body=69 status=ok
// SIG undefined FUN_14448a0ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448a0ea(void)

{
  _DAT_14cc06900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014448a12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc06908,1);
  return;
}



// FUNCTION 14448a130 FUN_14448a130 body=387 status=ok
// SIG undefined FUN_14448a130(void)

ulonglong FUN_14448a130(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
      lVar4 = param_1 + 0x148;
      if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x150);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x158) + 0xffffU &
                               *(uint *)(param_3 + 0x1c) & 0xffff) * 4);
      if (iVar3 != -1) {
        do {
          if (*(short *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 0xc) ==
              (short)*(uint *)(param_3 + 0x1c)) goto LAB_14448a27a;
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 0xc + 4);
        } while (iVar3 != -1);
      }
    }
    if ((longlong)(int)param_2[1] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*param_2 + lVar4) == param_3) goto LAB_14448a27a;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar4);
    }
    uVar5 = 0;
    FUN_14449d5e6(*(undefined8 *)(param_1 + 0x180),local_50,param_3,0);
    puVar7 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar7 = local_50;
    }
    if ((longlong)local_40 != 0) {
      lVar4 = 0;
      do {
        lVar6 = *(longlong *)(puVar7 + lVar4);
        if (lVar6 == 0) {
LAB_14448a248:
          lVar6 = 0;
        }
        else {
          bVar1 = *(byte *)(lVar6 + 0x10);
          if (((0x20 < (ulonglong)bVar1) || ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0))
             && (bVar1 != 0x80)) goto LAB_14448a248;
        }
        cVar2 = FUN_14448a130(param_1,param_2,lVar6);
        if (cVar2 != '\0') {
          FUN_1491c13f6(param_2,&local_58);
          uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
          goto LAB_14448a265;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)local_40 * 8 != lVar4);
      uVar5 = 0;
    }
LAB_14448a265:
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14448a27c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14448a27a:
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  goto LAB_14448a27c;
}



// FUNCTION 14448a2b4 FUN_14448a2b4 body=878 status=ok
// SIG undefined FUN_14448a2b4(void)

void FUN_14448a2b4(longlong *param_1,uint *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [38];
  undefined2 local_d2;
  longlong local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong *plStack_b0;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined2 *puStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140812a8a(param_7);
  if (((((param_2[1] == 0) || (uVar5 = *param_2, (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
      || ((puVar4 = (undefined8 *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          puVar4 == (undefined8 *)0x0 || (*(uint *)(puVar4 + 2) != param_2[1])))) ||
     ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) {
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    (**(code **)(*(longlong *)(param_6 + 0x278) + 0x10))(param_6 + 0x278);
    if ((longlong)(int)param_1[1] != 0) {
      lVar11 = *param_1;
      lVar10 = (longlong)(int)param_1[1] * 0x10 + lVar11;
      do {
        cVar3 = FUN_14019c9f2(lVar11,param_3);
        if (cVar3 != '\0') {
          uVar5 = *(int *)(lVar11 + 8) * 2 >> 1;
          if ((-1 < (int)uVar5) && ((int)uVar5 < (int)param_5[1])) {
            local_d0 = *(longlong *)
                        (*(longlong *)(param_4 + 0x20) +
                        (ulonglong)*(ushort *)(*param_5 + (ulonglong)uVar5 * 2) * 0xc);
            if ((longlong)(int)plStack_b0 != 0) {
              lVar9 = 0;
              do {
                if (*(longlong *)((longlong)local_b8 + lVar9) == local_d0) {
                  local_d2 = (undefined2)*(int *)(lVar11 + 8);
                  local_98 = &local_d0;
                  puStack_90 = &local_d2;
                  FUN_14836b0fc(param_7,local_9c,&local_98);
                  break;
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)(int)plStack_b0 * 8 != lVar9);
            }
          }
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != lVar10);
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar6 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    puStack_90 = (undefined2 *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar4;
    }
    FUN_14793b58e(uVar6,&local_98);
    if ((longlong)(int)param_1[1] != 0) {
      lVar11 = *param_1;
      lVar10 = (longlong)(int)param_1[1] * 0x10 + lVar11;
      do {
        cVar3 = FUN_14019c9f2(lVar11,param_3);
        if ((cVar3 != '\0') && ((int)puStack_90 != local_64)) {
          lVar9 = *(longlong *)
                   (*(longlong *)(param_4 + 0x20) +
                   ((longlong)((ulonglong)*(uint *)(lVar11 + 8) << 0x21) >> 0x21) * 0xc);
          uVar5 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar8 = (uint)lVar9 & 0xffff;
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_60;
          }
          iVar2 = *(int *)(puVar7 + (ulonglong)
                                    (local_50 - 1U &
                                    (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar8)
                                    + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
          while (iVar2 != -1) {
            plVar1 = local_98 + (longlong)iVar2 * 3;
            if (*plVar1 == lVar9) {
              if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                local_d0 = CONCAT62(local_d0._2_6_,(short)*(uint *)(lVar11 + 8));
                local_b8 = plVar1 + 1;
                plStack_b0 = &local_d0;
                FUN_14836b0fc(param_7,local_c8,&local_b8,0);
              }
              break;
            }
            iVar2 = (int)plVar1[2];
          }
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != lVar10);
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140105116(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14448a624 FUN_14448a624 body=158 status=ok
// SIG undefined FUN_14448a624(void)

undefined4 * FUN_14448a624(undefined4 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  lVar5 = FUN_1491c79cc(param_2);
  if (lVar5 != 0) {
    local_30 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    FUN_1491979a0(lVar5,&local_30);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14448a6c3 FUN_14448a6c3 body=41 status=ok
// SIG undefined FUN_14448a6c3(void)

void FUN_14448a6c3(void)

{
  DAT_14cc069e8 = 0;
  if (DAT_14cc069e0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d720cc();
  return;
}



// FUNCTION 14448a6ec FUN_14448a6ec body=69 status=ok
// SIG undefined FUN_14448a6ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448a6ec(void)

{
  _DAT_14cc06ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014448a72e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc06af0,1);
  return;
}



// FUNCTION 14448a731 FUN_14448a731 body=69 status=ok
// SIG undefined FUN_14448a731(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448a731(void)

{
  _DAT_14cc06b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014448a773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc06b08,1);
  return;
}



// FUNCTION 14448a776 FUN_14448a776 body=1430 status=ok
// SIG undefined FUN_14448a776(void)

void FUN_14448a776(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined2 *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_14448a81e;
  if (param_4 == 0) {
    if (param_2 == (undefined8 *)0x0) goto LAB_14448a81e;
    FUN_140056680(&local_98,L"No shape library provided.");
    local_a8 = (undefined2 *)CONCAT35(local_a8._5_3_,0x100000001);
    puVar3 = (undefined8 *)param_2[8];
    puVar9 = local_98;
    if (puVar3 != (undefined8 *)0x0) {
      pcVar4 = (code *)*puVar3;
      plVar10 = puVar3 + 4;
      if ((longlong *)puVar3[2] != (longlong *)0x0) {
        plVar10 = (longlong *)puVar3[2];
      }
      local_68[0] = param_2;
      uVar7 = (**(code **)(*plVar10 + 8))();
      (*pcVar4)(uVar7,&local_a8,local_68,&local_98);
      puVar9 = local_98;
    }
  }
  else {
    local_68[0] = *(undefined8 **)(param_4 + 0x18);
    FUN_1400021e4(local_68,&local_98);
    local_b0 = param_1 + 0x310;
    FUN_140b7fa98(param_1 + 0x310,&local_98);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (undefined2 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1400bbfc4(local_68,param_4);
    puStack_90 = local_68[0];
    if (uStack_80 != 0) {
      FUN_1400020a8();
    }
    uStack_80 = CONCAT44(uStack_54,local_58);
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    uVar12 = *(uint *)(param_4 + 0xc);
    if (cVar5 == '\0') {
LAB_14448a922:
      local_98 = (undefined2 *)CONCAT44(local_98._4_4_,uVar12);
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar15 = iVar6 == 0;
        if (bVar15) {
          *(int *)(lVar8 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar6 = iVar13;
        }
      }
    }
    else {
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_14448a922;
      local_98 = (undefined2 *)0x0;
      iVar6 = 0;
    }
    local_98 = (undefined2 *)CONCAT44(iVar6,(undefined4)local_98);
    local_68[0] = &local_98;
    FUN_1491c92f6(param_1 + 0x300);
    if (uStack_80 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x308) == 0) {
      FUN_145a2beb0(param_1);
    }
    local_a8 = (undefined2 *)0x0;
    uVar12 = *(uint *)(param_3 + 1);
    _Src = (void *)*param_3;
    puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,uVar12);
    if ((longlong)(int)uVar12 == 0) {
      puStack_a0 = (undefined8 *)(ulonglong)uVar12;
LAB_14448aa07:
      local_68[0] = *(undefined8 **)(param_4 + 0x18);
      FUN_1400021e4(local_68,&local_98);
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = local_98;
      puStack_a0 = puStack_90;
    }
    else {
      FUN_1446dd670(&local_a8,uVar12,0);
      memcpy(local_a8,_Src,(longlong)(int)uVar12 * 2);
      if ((int)puStack_a0 < 2) goto LAB_14448aa07;
    }
    local_68[0] = *(undefined8 **)(param_4 + 0x18);
    FUN_1400021e4(local_68,&local_98);
    if ((int)puStack_a0 == (int)puStack_90) {
      bVar15 = true;
      if (1 < (int)puStack_a0) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)local_a8 + lVar8);
          uVar12 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)local_98 + lVar8);
          uVar14 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14448aa8b;
            }
            iVar6 = uVar12 - uVar14;
            goto LAB_14448aac6;
          }
          if (uVar1 == 0) break;
LAB_14448aa8b:
          lVar8 = lVar8 + 2;
        }
        iVar6 = 0;
LAB_14448aac6:
        bVar15 = iVar6 == 0;
      }
    }
    else {
      bVar15 = (int)puStack_90 + (int)puStack_a0 == 1;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar15) {
      local_68[0] = *(undefined8 **)(param_4 + 0x18);
      FUN_1400021e4(local_68,&local_98);
      iVar6 = (int)puStack_90 + -1;
      if ((int)puStack_90 == 0) {
        iVar6 = 0;
      }
      uVar11 = 0;
      if (0 < iVar6) {
        puVar9 = local_98;
        if ((int)puStack_90 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        lVar8 = 0;
        uVar11 = 0;
        do {
          uVar12 = ((uint)(0x19 < (ushort)puVar9[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar9[lVar8]
                   ) - 0x20;
          uVar14 = (uint)(uVar11 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar12) & 0xff) * 4);
          uVar11 = (ulonglong)
                   (uVar14 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar12 >> 8 & 0xff) * 4));
          lVar8 = lVar8 + 1;
        } while (iVar6 != (int)lVar8);
      }
      uVar7 = FUN_148d385b6(local_b0,uVar11,&local_98);
      iVar6 = (int)puStack_a0 + -1;
      if ((int)puStack_a0 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(uVar7,local_a8,iVar6);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (undefined2 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1400bbfc4(local_68,param_4);
    puStack_90 = local_68[0];
    if (uStack_80 != 0) {
      FUN_1400020a8();
    }
    uStack_80 = CONCAT44(uStack_54,local_58);
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    uVar12 = *(uint *)(param_4 + 0xc);
    if (cVar5 == '\0') {
LAB_14448ac42:
      local_98 = (undefined2 *)CONCAT44(local_98._4_4_,uVar12);
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar15 = iVar6 == 0;
        if (bVar15) {
          *(int *)(lVar8 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar6 = iVar13;
        }
      }
    }
    else {
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_14448ac42;
      local_98 = (undefined2 *)0x0;
      iVar6 = 0;
    }
    local_98 = (undefined2 *)CONCAT44(iVar6,(undefined4)local_98);
    FUN_1491c942c(param_1 + 0x300,&local_98);
    puVar9 = local_a8;
    if (uStack_80 != 0) {
      FUN_1400020a8();
      puVar9 = local_a8;
    }
  }
  if (puVar9 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14448a81e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14448ad0e FUN_14448ad0e body=607 status=ok
// SIG undefined FUN_14448ad0e(void)

ulonglong FUN_14448ad0e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  longlong local_78 [4];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = (**(code **)(*param_1 + 0x2f8))();
  if (cVar6 == '\0') {
    uVar11 = 0;
    goto LAB_14448af44;
  }
  local_58 = (void *)0x0;
  local_50 = (int)param_1[0x34];
  lVar10 = (longlong)local_50;
  _Src = (void *)param_1[0x33];
  if (lVar10 == 0) {
    local_4c = 0;
LAB_14448ad9c:
    FUN_1406fa324(&local_58,param_1 + 0x31);
  }
  else {
    FUN_1401b309e(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar10 << 3);
    if (local_50 == 0) goto LAB_14448ad9c;
  }
  if ((char)param_1[0x47] == '\x01') {
    lVar10 = param_1[9];
    cVar6 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
    param_1[9] = lVar10;
    if (cVar6 != '\0') goto LAB_14448add5;
LAB_14448af33:
    uVar11 = 0;
  }
  else {
LAB_14448add5:
    lVar10 = FUN_140124256(param_1);
    if ((1 < *(int *)(lVar10 + 8)) &&
       (cVar6 = FUN_1403f35db(*param_2,&DAT_14cc074c8), cVar6 == '\0')) {
      local_78[0] = 0;
      local_78[1] = 0;
      cVar6 = FUN_14919e4ba(param_1,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar6 == '\0') goto LAB_14448af33;
    }
    if ((longlong *)param_1[0xb] == (longlong *)0x0) goto LAB_14448af33;
    lVar10 = param_1[0x2a];
    cVar6 = (**(code **)(*(longlong *)param_1[0xb] + 0x2b0))();
    if (((cVar6 == '\0') &&
        (iVar1 = *(int *)(lVar10 + 8), iVar7 = (**(code **)(*(longlong *)param_1[0xb] + 0x2c0))(),
        iVar1 != iVar7)) || (cVar6 = FUN_140432338(param_1), cVar6 == '\0')) goto LAB_14448af33;
    plVar2 = (longlong *)param_1[0xb];
    cVar6 = FUN_140432338(plVar2);
    if (cVar6 == '\0') goto LAB_14448af33;
    (**(code **)(*plVar2 + 0x2b0))(plVar2);
    lVar3 = param_1[0x5f];
    uVar4 = *(undefined8 *)(lVar3 + 0x558);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x530));
    *(longlong *)(lVar3 + 0x558) = lVar10;
    uVar8 = FUN_1403fefe0(lVar10);
    FUN_1406babbc(local_78,uVar8,param_1);
    uVar9 = (**(code **)(*param_1 + 0x380))(param_1);
    lVar5 = param_1[0x5f];
    uVar8 = *(undefined8 *)(lVar5 + 0x570);
    *(undefined8 *)(lVar5 + 0x570) = uVar9;
    cVar6 = (**(code **)(*(longlong *)param_1[0xb] + 0x338))
                      ((longlong *)param_1[0xb],lVar10,param_2);
    uVar11 = CONCAT71((int7)((ulonglong)param_2 >> 8),cVar6 != '\0');
    *(undefined8 *)(lVar5 + 0x570) = uVar8;
    FUN_141907238(local_78);
    *(undefined8 *)(lVar3 + 0x558) = uVar4;
    FUN_1444a2094(lVar3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x530));
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14448af44:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14448af9c FUN_14448af9c body=55 status=ok
// SIG undefined FUN_14448af9c(void)

void FUN_14448af9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06ca0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06ca0 = FUN_14171c317(FUN_141906989,uVar1,L"EControlRigComponentSpace");
  }
  return;
}



// FUNCTION 14448afd3 FUN_14448afd3 body=55 status=ok
// SIG undefined FUN_14448afd3(void)

void FUN_14448afd3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06cb8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06cb8 = FUN_14171c317(FUN_1466ca128,uVar1,L"EControlRigComponentMapDirection");
  }
  return;
}



// FUNCTION 14448b00a FUN_14448b00a body=1559 status=ok
// SIG undefined FUN_14448b00a(void)

void FUN_14448b00a(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  code cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  code *pcVar17;
  undefined2 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  char local_111;
  longlong *local_110;
  int local_108;
  undefined4 uStack_104;
  int local_100;
  code *local_f8 [2];
  longlong local_e8 [2];
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  cVar1 = (char)param_1[0xe7];
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe7) = 1;
    local_111 = cVar1;
    if ((int)param_1[0xd2] != 0) {
      FUN_1491aa09c(param_1 + 0xd3,param_1 + 0xd1);
    }
    FUN_1491a96aa(param_1);
    local_98 = param_1;
    uVar6 = FUN_14477b072(param_1,DAT_14cc06e40);
    (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_98);
    plVar7 = (longlong *)FUN_1491a88a2(param_1);
    if (plVar7 != (longlong *)0x0) {
      if (*(int *)((longlong)plVar7 + 0x23c) < 1) {
        FUN_141905f56(plVar7 + 0x2e);
        FUN_140ad5be4(plVar7[0x5f],0xff);
        (**(code **)(*plVar7 + 0x308))(plVar7);
      }
      else {
        FUN_140056680(&local_98,L"Initialize is being called recursively.");
        if (local_98 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = (uint *)0x0;
    local_c0 = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_110 = param_1;
    if ((longlong)(int)param_1[0xd4] != 0) {
      lVar16 = (longlong)(int)param_1[0xd4] * 0xf0;
      pcVar17 = (code *)(param_1[0xd3] + 0xd8);
      do {
        pcVar2 = *(code **)pcVar17;
        if (pcVar2 != (code *)0x0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(pcVar2);
          }
          local_f8[0] = pcVar2;
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(pcVar2);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(pcVar2);
          }
          uVar14 = ((uint)((ulonglong)pcVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar2 >> 4)) *
                   -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          iVar4 = FUN_1491cd726(&local_98,uVar14 >> 0x10 ^ uVar14,local_f8);
          if (local_98 + (longlong)iVar4 * 3 == (longlong *)0x0 || iVar4 == -1) {
            cVar3 = pcVar17[-0x78];
          }
          else {
            cVar3 = *(code *)(local_98 + (longlong)iVar4 * 3 + 1);
            if (cVar3 != pcVar17[-0x78]) {
              FUN_1491cd7f6(local_e8,local_f8,pcVar17);
              goto LAB_14448b208;
            }
          }
          plVar7 = *(longlong **)pcVar17;
          if (cVar3 == (code)0x1) {
            lVar19 = *plVar7;
            plVar11 = plVar7;
            plVar7 = local_110;
          }
          else {
            lVar19 = *local_110;
            plVar11 = local_110;
          }
          (**(code **)(lVar19 + 0x440))(plVar11,plVar7);
          cVar3 = pcVar17[-0x78];
          local_f8[0] = pcVar17;
          FUN_1491cde30(&local_98,&local_108,local_f8);
          *(code *)(local_98 + (longlong)local_108 * 3 + 1) = cVar3;
          if ((*(longlong *)pcVar17 != 0) && (DAT_14cad2858 == 0)) {
            local_f8[0] = FUN_144a7958c;
            local_120 = FUN_14081d0ea;
            local_128 = &LAB_146395584;
            local_138 = &LAB_147a0ba80;
            local_140 = &LAB_14575ccce;
            local_148 = L"Engine";
            local_150 = 0x40000000000;
            local_158 = 0x10000004;
            local_160 = 0x10;
            local_168 = 0x1180;
            local_130 = local_f8;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
        }
LAB_14448b208:
        iVar4 = local_c0;
        pcVar17 = pcVar17 + 0xf0;
        lVar16 = lVar16 + -0xf0;
      } while (lVar16 != 0);
      if (local_c0 != 0) {
        puVar8 = local_c8;
        if (local_c8 == (uint *)0x0) {
          puVar8 = local_d8;
        }
        uVar14 = *puVar8;
        if (uVar14 == 0) {
          iVar15 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar15 = local_c0 + -1;
          }
          uVar20 = 0;
          uVar12 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar12 = 0;
          }
          iVar15 = 0;
          do {
            if (uVar12 == uVar20) goto LAB_14448b5b0;
            iVar15 = iVar15 + 0x20;
            uVar14 = puVar8[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar20 = 0;
          iVar15 = 0;
        }
        uVar21 = (ulonglong)(-uVar14 & uVar14);
        uVar12 = uVar21 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar5 < local_c0) {
          uVar14 = 0xffffffff;
          do {
            lVar16 = *(longlong *)(local_e8[0] + (longlong)iVar5 * 0x10);
            if (lVar16 == 0) {
              local_f8[0] = (code *)0x0;
            }
            else {
              local_f8[0] = *(code **)(lVar16 + 0x18);
            }
            FUN_1400021e4(local_f8,&local_108);
            puVar18 = &DAT_149dfb77a;
            if (local_100 != 0) {
              puVar18 = (undefined2 *)CONCAT44(uStack_104,local_108);
            }
            FUN_140002266(local_f8,
                          L"Elements from the same component (%s) should not be mapped to both input and output, because it creates ambiguity when inferring tick order."
                          ,puVar18);
            if (CONCAT44(uStack_104,local_108) != 0) {
              FUN_1400020a8();
            }
            if (local_f8[0] != (code *)0x0) {
              FUN_1400020a8();
            }
            uVar14 = uVar14 & ~(uint)uVar21;
            puVar8 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar8 = local_d8;
            }
            iVar5 = (int)uVar20;
            lVar16 = (longlong)iVar5;
            uVar13 = puVar8[lVar16] & uVar14;
            if (uVar13 == 0) {
              iVar9 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar9 = local_c0 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar15 = iVar15 + 0x20;
              iVar10 = iVar9;
              if (iVar9 < iVar5) {
                iVar10 = iVar5;
              }
              if (iVar5 < iVar9) {
                lVar19 = 0;
                do {
                  uVar13 = puVar8[lVar16 + lVar19 + 1];
                  if (uVar13 != 0) {
                    uVar20 = (ulonglong)(iVar5 + (int)lVar19 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_14448b574;
                  }
                  iVar15 = iVar15 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar10 - lVar16 != lVar19);
                uVar14 = 0xffffffff;
                iVar5 = iVar10;
              }
              uVar20 = (ulonglong)(iVar5 + 1);
              iVar5 = local_c0;
            }
            else {
LAB_14448b574:
              uVar21 = (ulonglong)(-uVar13 & uVar13);
              uVar12 = uVar21 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar5 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar5) {
                iVar5 = local_c0;
              }
            }
          } while (iVar5 != iVar4);
        }
      }
    }
LAB_14448b5b0:
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1491cd698(local_e8);
    plVar7 = local_110;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1491c3594(&local_98);
    *(char *)(plVar7 + 0xe7) = local_111;
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14448b622 FUN_14448b622 body=69 status=ok
// SIG undefined FUN_14448b622(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448b622(void)

{
  _DAT_14cc06ef0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014448b664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc06ef8,1);
  return;
}



// FUNCTION 14448b675 FUN_14448b675 body=41 status=ok
// SIG undefined FUN_14448b675(void)

void FUN_14448b675(void)

{
  DAT_14cc06f78 = 0;
  if (DAT_14cc06f70 != 0) {
    FUN_1400020a8();
  }
  FUN_146192304();
  return;
}



// FUNCTION 14448b69e FUN_14448b69e body=4699 status=ok
// SIG undefined FUN_14448b69e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14448b69e(longlong param_1,double *param_2,undefined8 param_3,uint param_4,longlong param_5
                  )

{
  double *pdVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined7 uVar16;
  longlong lVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar26 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar33 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined1 local_330;
  undefined1 local_328 [12];
  undefined4 uStack_31c;
  longlong local_318;
  uint local_30c;
  double *local_308;
  longlong local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_118 [16];
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_318 = param_1;
  local_30c = param_4;
  local_308 = param_2;
  local_2c8 = (double)CONCAT44(local_2c8._4_4_,(undefined4)local_2c8);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x298) + 0x6c0) != 0) &&
     (local_2c8 = (double)CONCAT44(local_2c8._4_4_,(undefined4)local_2c8), 0 < *(int *)(param_2 + 1)
     )) {
    local_2d8 = param_5 + 0x50;
    lVar13 = 0;
    do {
      local_300 = lVar13;
      if ((local_30c >> ((uint)lVar13 & 0x1f) & 1) != 0) {
        lVar17 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar17 = local_2d8;
        }
        plVar4 = *(longlong **)(lVar17 + lVar13 * 8);
        lVar13 = *(longlong *)(local_318 + 0x298);
        if ((*(char *)(lVar13 + 0x6bc) == '\x01') && (*(longlong *)(lVar13 + 0x6c0) != 0)) {
          lVar13 = *(longlong *)(lVar13 + 0xb0);
          if (lVar13 == 0) {
            lVar13 = FUN_1448abda6();
            if (lVar13 != 0) goto LAB_14448b7ee;
          }
          else {
LAB_14448b7ee:
            if ((*(byte *)(lVar13 + 0x152) & 0xfe) != 4) goto LAB_14448b94f;
          }
          lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(local_318 + 0x298) + 0x6c0) + 0x2f8);
          iVar14 = *(int *)(lVar13 + 0xc0);
          if (0 < iVar14) {
            lVar17 = 0;
            do {
              lVar18 = *(longlong *)(lVar13 + 0xb8);
              lVar20 = *(longlong *)(lVar18 + lVar17 * 8);
              if ((lVar20 != 0) && (*(char *)(lVar20 + 0x10) == '\x01')) {
                param_2 = (double *)CONCAT44(0,*(uint *)(lVar20 + 0x1c));
                local_328._0_8_ = param_2;
                uVar15 = FUN_1491db798(lVar13);
                if ((int)uVar15 < 0) {
                  if ((-1 < local_328._0_4_) && (local_328._0_4_ < iVar14)) {
                    lVar18 = *(longlong *)(lVar18 + local_328._0_8_ * 8);
                    goto LAB_14448b8d1;
                  }
                }
                else {
                  param_2 = (double *)local_328._0_8_;
                  if ((((int)uVar15 < iVar14) &&
                      (lVar18 = *(longlong *)(lVar18 + (ulonglong)uVar15 * 8), lVar18 != 0)) &&
                     (((bVar2 = *(byte *)(lVar18 + 0x10), bVar2 - 1 < 2 || (bVar2 == 0x80)) ||
                      ((bVar2 < 0x21 && ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0))))))
                  {
                    FUN_1401571e4(lVar13,&local_178,lVar18,3);
                    param_2 = (double *)(ulonglong)*(uint *)(lVar20 + 0x1c);
                  }
                  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar13 + 0xc0))) {
                    lVar18 = *(longlong *)
                              (*(longlong *)(lVar13 + 0xb8) + ((ulonglong)param_2 & 0xffffffff) * 8)
                    ;
LAB_14448b8d1:
                    if ((lVar18 != 0) &&
                       (((bVar2 = *(byte *)(lVar18 + 0x10), bVar2 - 1 < 2 || (bVar2 == 0x80)) ||
                        ((bVar2 < 0x21 && ((0x100010010U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)))))
                       ) {
                      param_2 = &local_178;
                      FUN_1401571e4(lVar13,&local_178,lVar18,3);
                    }
                  }
                }
                iVar14 = *(int *)(lVar13 + 0xc0);
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 < iVar14);
          }
        }
LAB_14448b94f:
        if ((*(char *)(*(longlong *)(local_318 + 0x298) + 0x6bd) == '\x01') &&
           (lVar13 = *(longlong *)(*(longlong *)(local_318 + 0x298) + 0x6c0),
           0 < *(int *)(lVar13 + 0x180))) {
          lVar17 = 0;
          local_2d0 = lVar13;
          do {
            if (*(int *)(*(longlong *)(local_2d0 + 0x178) + 0x18 + lVar17 * 0xd0) != 0) {
              lVar18 = *(longlong *)(local_2d0 + 0x178) + lVar17 * 0xd0;
              lVar13 = *(longlong *)(local_318 + 0x298);
              auVar24 = *(undefined1 (*) [16])(lVar13 + 0x280);
              dVar31 = auVar24._0_8_;
              dVar44 = auVar24._8_8_;
              auVar43 = *(undefined1 (*) [16])(lVar13 + 0x290);
              dVar42 = auVar43._0_8_;
              auVar22 = *(undefined1 (*) [16])(lVar18 + 0x80);
              auVar23 = *(undefined1 (*) [16])(lVar18 + 0x90);
              auVar24 = minpd(auVar22,auVar24);
              auVar32 = minpd(auVar23,auVar43);
              auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
              auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
              iVar14 = movmskpd((int)local_2d0,auVar25);
              auVar24._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
              auVar24._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
              uVar15 = movmskpd((int)param_2,auVar24);
              if ((uVar15 & 0x3fffffff) == 0 && iVar14 == 0) {
                dVar36 = *(double *)(lVar18 + 0x40);
                dVar38 = *(double *)(lVar18 + 0x48);
                dVar6 = *(double *)(lVar18 + 0x50);
                dVar7 = *(double *)(lVar18 + 0x58);
                dVar8 = *(double *)(lVar13 + 0x240);
                dVar9 = *(double *)(lVar13 + 0x248);
                dVar10 = *(double *)(lVar13 + 0x250);
                dVar39 = *(double *)(lVar13 + 600);
                dVar41 = *(double *)(lVar13 + 600);
                dVar35 = *(double *)(lVar13 + 0x240);
                dVar28 = *(double *)(lVar13 + 0x240);
                dVar27 = *(double *)(lVar13 + 0x248);
                dVar29 = *(double *)(lVar13 + 0x248);
                dVar30 = *(double *)(lVar13 + 0x250);
                dVar34 = *(double *)(lVar13 + 0x250);
                dVar40 = dVar38 * dVar30 * -1.0 +
                         dVar6 * dVar27 + dVar7 * dVar35 * 1.0 + dVar36 * dVar39;
                dVar37 = dVar36 * dVar34 * 1.0 +
                         dVar7 * dVar29 + dVar6 * dVar28 * -1.0 + dVar38 * dVar41;
                auVar32._0_8_ =
                     dVar7 * dVar30 * 1.0 +
                     ((dVar35 * dVar38 * 1.0 + dVar6 * dVar39) - dVar36 * dVar27);
                auVar32._8_8_ =
                     dVar6 * dVar34 * -1.0 +
                     ((dVar28 * dVar36 * -1.0 + dVar7 * dVar41) - dVar38 * dVar29);
                dVar28 = *(double *)(lVar18 + 0x60) * dVar31;
                dVar35 = *(double *)(lVar18 + 0x68) * dVar44;
                dVar34 = *(double *)(lVar18 + 0x70) * dVar42;
                dVar27 = dVar35 * dVar8 - dVar9 * dVar28;
                dVar30 = dVar34 * dVar9 - dVar10 * dVar35;
                dVar29 = dVar28 * dVar10 - dVar8 * dVar34;
                dVar30 = dVar30 + dVar30;
                dVar29 = dVar29 + dVar29;
                dVar27 = dVar27 + dVar27;
                dVar44 = auVar22._8_8_ * dVar44;
                local_328._8_4_ = SUB84(dVar44,0);
                local_328._0_8_ = auVar22._0_8_ * dVar31;
                uStack_31c = (int)((ulonglong)dVar44 >> 0x20);
                dVar42 = auVar23._0_8_ * dVar42;
                auVar43._0_8_ =
                     (dVar27 * dVar9 - dVar10 * dVar29) + dVar39 * dVar30 + dVar28 +
                     *(double *)(lVar13 + 0x260);
                auVar43._8_8_ =
                     (dVar30 * dVar10 - dVar27 * dVar8) + dVar41 * dVar29 + dVar35 +
                     *(double *)(lVar13 + 0x268);
                dVar31 = (dVar29 * dVar8 - dVar9 * dVar30) + dVar39 * dVar27 + dVar34 +
                         *(double *)(lVar13 + 0x270);
                param_2 = (double *)0x0;
              }
              else {
                dVar39 = auVar22._8_8_ * dVar44;
                local_328._8_4_ = SUB84(dVar39,0);
                local_328._0_8_ = auVar22._0_8_ * dVar31;
                uStack_31c = (int)((ulonglong)dVar39 >> 0x20);
                local_2e8._8_8_ = auVar23._8_8_ * auVar43._8_8_;
                local_2e8._0_8_ = auVar23._0_8_ * dVar42;
                dVar41 = *(double *)(lVar13 + 0x240);
                dVar28 = *(double *)(lVar13 + 0x248);
                dVar35 = *(double *)(lVar13 + 0x250);
                dVar27 = dVar28 + dVar28;
                dVar29 = dVar35 + dVar35;
                dVar39 = dVar41 * (dVar41 + dVar41);
                dStack_1d0 = (1.0 - (dVar35 * dVar29 + dVar39)) * dVar44;
                local_1a8 = (1.0 - (dVar39 + dVar28 * dVar27)) * dVar42;
                dVar40 = *(double *)(lVar13 + 0x240) * dVar29;
                dVar39 = *(double *)(lVar13 + 600);
                dVar30 = dVar29 * dVar39;
                dVar34 = (dVar41 + dVar41) * *(double *)(lVar13 + 600);
                dVar39 = dVar27 * dVar39;
                local_1c8 = (dVar29 * dVar28 + dVar34) * dVar44;
                local_1b8 = (dVar39 + dVar40) * dVar42;
                local_1d8 = (dVar27 * dVar41 - dVar30) * dVar44;
                dStack_1b0 = (dVar29 * dVar28 - dVar34) * dVar42;
                local_1e8 = (dVar40 - dVar39) * dVar31;
                local_1f8._8_8_ = (dVar27 * dVar41 + dVar30) * dVar31;
                local_1f8._0_8_ = (1.0 - (dVar35 * dVar29 + dVar28 * dVar27)) * dVar31;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = *(undefined8 *)(lVar13 + 0x260);
                uStack_190 = *(undefined8 *)(lVar13 + 0x268);
                local_188 = *(undefined8 *)(lVar13 + 0x270);
                uStack_180 = 0x3ff0000000000000;
                dVar42 = *(double *)(lVar18 + 0x40);
                dVar44 = *(double *)(lVar18 + 0x48);
                dVar31 = *(double *)(lVar18 + 0x50);
                local_268 = *(double *)(lVar18 + 0x80);
                local_258 = *(double *)(lVar18 + 0x88);
                dStack_230 = *(double *)(lVar18 + 0x90);
                dVar35 = dVar44 + dVar44;
                dVar39 = dVar31 + dVar31;
                dVar41 = dVar42 * (dVar42 + dVar42);
                local_278 = (1.0 - (dVar31 * dVar39 + dVar44 * dVar35)) * local_268;
                dStack_250 = (1.0 - (dVar31 * dVar39 + dVar41)) * local_258;
                local_228 = (1.0 - (dVar41 + dVar44 * dVar35)) * dStack_230;
                dVar27 = *(double *)(lVar18 + 0x40) * dVar39;
                dVar31 = *(double *)(lVar18 + 0x58);
                dVar41 = dVar39 * dVar31;
                dVar28 = (dVar42 + dVar42) * *(double *)(lVar18 + 0x58);
                dVar31 = dVar35 * dVar31;
                dStack_270 = (dVar35 * dVar42 + dVar41) * local_268;
                local_248 = (dVar39 * dVar44 + dVar28) * local_258;
                local_238 = (dVar31 + dVar27) * dStack_230;
                local_268 = (dVar27 - dVar31) * local_268;
                local_258 = (dVar35 * dVar42 - dVar41) * local_258;
                dStack_230 = (dVar39 * dVar44 - dVar28) * dStack_230;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = *(undefined8 *)(lVar18 + 0x60);
                uStack_210 = *(undefined8 *)(lVar18 + 0x68);
                local_208 = *(undefined8 *)(lVar18 + 0x70);
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,local_1f8);
                auVar24 = _DAT_149934d80;
                local_2f8._0_8_ = local_168;
                dVar42 = local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170;
                dVar39 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                dVar31 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                uVar21 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
                dVar44 = (double)(~uVar21 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar42)) & uVar21);
                uVar21 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
                dVar39 = (double)(~uVar21 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar39)) & uVar21);
                uVar21 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
                dVar31 = (double)(~uVar21 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar31)) & uVar21);
                auVar22._8_8_ = -(ulonglong)(0.0 <= stack0xfffffffffffffce0);
                auVar22._0_8_ = -(ulonglong)(0.0 <= (double)local_328._0_8_);
                auVar43 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar22);
                dVar42 = (double)local_2e8._0_8_;
                dVar41 = (double)(~-(ulonglong)(0.0 <= (double)local_2e8._0_8_) & 0xbff0000000000000
                                 | (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= (double)local_2e8._0_8_) >> 0x20) &
                                   0x3ff00000) << 0x20);
                dVar28 = auVar43._0_8_;
                local_178 = local_178 * dVar44 * dVar28;
                dStack_170 = dStack_170 * dVar44 * dVar28;
                local_168 = dVar44 * local_168 * dVar28;
                dVar44 = auVar43._8_8_;
                local_148 = dVar39 * local_148 * dVar44;
                local_150 = local_150 * dVar39 * dVar44;
                local_158 = dVar44 * local_158 * dVar39;
                local_128 = dVar31 * local_128 * dVar41;
                local_130 = local_130 * dVar31 * dVar41;
                local_138 = dVar41 * local_138 * dVar31;
                param_2 = &local_178;
                FUN_14481fd10(&local_298);
                dVar31 = local_288._0_8_;
                dVar44 = local_288._8_8_;
                dVar39 = dVar31 * dVar31 + local_298 * local_298;
                dVar41 = dVar44 * dVar44 + dStack_290 * dStack_290;
                auVar26._0_8_ = dVar39 + dVar41;
                auVar26._8_8_ = dVar39 + dVar41;
                auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
                auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
                auVar43 = sqrtpd(auVar26,auVar26);
                auVar24 = divpd(auVar24,auVar43);
                auVar33._0_8_ = auVar24._0_8_ * dVar31;
                auVar33._8_8_ = auVar24._8_8_ * dVar44;
                dVar40 = (double)((ulonglong)(local_298 * auVar24._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
                dVar37 = (double)((ulonglong)(dStack_290 * auVar24._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
                auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar23);
                auVar43 = local_118;
                dVar31 = local_108;
              }
              cVar3 = *(char *)(lVar18 + 8);
              dVar44 = auVar32._8_8_;
              dVar39 = auVar43._0_8_;
              dVar41 = auVar43._8_8_;
              uVar16 = (undefined7)((ulonglong)param_2 >> 8);
              if (cVar3 == '\x02') {
                local_348 = 1e-08 < *(float *)(lVar18 + 0x30);
                param_2 = (double *)CONCAT71(uVar16,1);
                (**(code **)(*plVar4 + 0x20))(plVar4,param_2,*(int *)(lVar18 + 0x18) + -1,0);
                auVar5._8_4_ = SUB84(dVar37,0);
                auVar5._0_8_ = dVar40;
                auVar5._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
                local_2f8 = auVar32;
                local_2e8 = auVar5;
                if (1 < *(int *)(lVar18 + 0x18)) {
                  local_2f8._0_4_ = auVar32._0_4_;
                  local_2f8._4_4_ = auVar32._4_4_;
                  local_2f8._8_4_ = auVar32._8_4_;
                  local_2f8._12_4_ = auVar32._12_4_;
                  local_2a8 = local_2f8._8_4_;
                  uStack_2a4 = local_2f8._12_4_;
                  uStack_2a0 = local_2f8._8_4_;
                  uStack_29c = local_2f8._12_4_;
                  local_2e8._0_4_ = SUB84(dVar40,0);
                  local_2e8._4_4_ = (undefined4)((ulonglong)dVar40 >> 0x20);
                  local_2b8 = local_2e8._0_4_;
                  uStack_2b4 = local_2e8._4_4_;
                  uStack_2b0 = local_2f8._8_4_;
                  uStack_2ac = local_2f8._12_4_;
                  uStack_2c0 = local_2f8._0_4_;
                  uStack_2bc = local_2f8._4_4_;
                  lVar20 = 0;
                  lVar13 = 0;
                  local_2c8 = dVar37;
                  do {
                    pdVar1 = (double *)(*(longlong *)(lVar18 + 0x10) + 0x18 + lVar20);
                    dVar30 = *(double *)(*(longlong *)(lVar18 + 0x10) + 0x28 + lVar20) * dVar42;
                    dVar27 = *pdVar1 * (double)CONCAT44(local_328._4_4_,local_328._0_4_);
                    dVar29 = pdVar1[1] * (double)CONCAT44(uStack_31c,local_328._8_4_);
                    dVar44 = (double)CONCAT44(uStack_2bc,uStack_2c0);
                    dVar28 = (double)CONCAT44(uStack_2b4,local_2b8);
                    dVar37 = dVar27 * (double)local_2f8._0_8_ - dVar28 * dVar30;
                    dVar34 = dVar29 * (double)local_2e8._0_8_ - local_2c8 * dVar27;
                    dVar40 = dVar30 * (double)local_2e8._8_8_ - dVar44 * dVar29;
                    dVar40 = dVar40 + dVar40;
                    dVar37 = dVar37 + dVar37;
                    dVar34 = dVar34 + dVar34;
                    dVar35 = (double)CONCAT44(uStack_2a4,local_2a8);
                    auVar11._8_4_ = uStack_2a0;
                    auVar11._0_8_ = dVar35;
                    auVar11._12_4_ = uStack_29c;
                    local_340 = *(undefined4 *)(lVar18 + 0x30);
                    local_178 = (dVar34 * (double)local_2e8._8_8_ - dVar37 * dVar44) +
                                dVar35 * dVar40 + dVar27 + dVar39;
                    dStack_170 = ((double)local_2f8._0_8_ * dVar40 - dVar28 * dVar34) +
                                 auVar11._8_8_ * dVar37 + dVar29 + dVar41;
                    local_168 = dVar34 * dVar35 + dVar30 +
                                (dVar37 * (double)local_2e8._0_8_ - dVar40 * local_2c8) + dVar31;
                    pdVar1 = (double *)(*(longlong *)(lVar18 + 0x10) + lVar20);
                    dVar40 = *pdVar1 * (double)local_328._0_8_;
                    dVar37 = pdVar1[1] * stack0xfffffffffffffce0;
                    dVar27 = *(double *)(*(longlong *)(lVar18 + 0x10) + 0x10 + lVar20) * dVar42;
                    dVar29 = dVar37 * (double)local_2e8._0_8_ - local_2c8 * dVar40;
                    dVar30 = dVar27 * (double)local_2e8._8_8_ - dVar44 * dVar37;
                    dVar34 = dVar40 * (double)local_2f8._0_8_ - dVar28 * dVar27;
                    dVar30 = dVar30 + dVar30;
                    dVar34 = dVar34 + dVar34;
                    dVar29 = dVar29 + dVar29;
                    local_1f8._0_8_ =
                         (dVar29 * (double)local_2e8._8_8_ - dVar34 * dVar44) +
                         dVar35 * dVar30 + dVar40 + dVar39;
                    local_1f8._8_8_ =
                         ((double)local_2f8._0_8_ * dVar30 - dVar28 * dVar29) +
                         auVar11._8_8_ * dVar34 + dVar37 + dVar41;
                    local_1e8 = dVar29 * dVar35 + dVar27 +
                                (dVar34 * (double)local_2e8._0_8_ - dVar30 * local_2c8) + dVar31;
                    lVar13 = lVar13 + 1;
                    local_330 = 0;
                    local_338 = 0;
                    local_348 = 1;
                    param_2 = (double *)local_1f8;
                    (**(code **)(*plVar4 + 0x30))(plVar4,local_1f8,&local_178);
                    lVar20 = lVar20 + 0x18;
                  } while (lVar13 < (longlong)*(int *)(lVar18 + 0x18) + -1);
                }
              }
              else {
                dVar28 = auVar32._0_8_;
                if (cVar3 == '\x01') {
                  local_348 = 1e-08 < *(float *)(lVar18 + 0x30);
                  param_2 = (double *)CONCAT71(uVar16,1);
                  (**(code **)(*plVar4 + 0x20))(plVar4,param_2,*(int *)(lVar18 + 0x18) / 2);
                  uVar12 = local_328._0_8_;
                  dVar35 = stack0xfffffffffffffce0;
                  if (1 < *(int *)(lVar18 + 0x18)) {
                    lVar13 = 0;
                    lVar20 = 0;
                    do {
                      local_340 = *(undefined4 *)(lVar18 + 0x30);
                      pdVar1 = (double *)(*(longlong *)(lVar18 + 0x10) + 0x18 + lVar13);
                      dVar36 = *pdVar1 * (double)uVar12;
                      dVar38 = pdVar1[1] * dVar35;
                      dVar27 = *(double *)(*(longlong *)(lVar18 + 0x10) + 0x28 + lVar13) * dVar42;
                      dVar29 = dVar38 * dVar40 - dVar37 * dVar36;
                      dVar30 = dVar27 * dVar37 - dVar28 * dVar38;
                      dVar34 = dVar36 * dVar28 - dVar40 * dVar27;
                      dVar30 = dVar30 + dVar30;
                      dVar34 = dVar34 + dVar34;
                      dVar29 = dVar29 + dVar29;
                      local_178 = (dVar29 * dVar37 - dVar34 * dVar28) + dVar44 * dVar30 + dVar36 +
                                  dVar39;
                      dStack_170 = (dVar28 * dVar30 - dVar40 * dVar29) + dVar44 * dVar34 + dVar38 +
                                   dVar41;
                      local_168 = dVar29 * dVar44 + dVar27 + (dVar34 * dVar40 - dVar30 * dVar37) +
                                  dVar31;
                      pdVar1 = (double *)(*(longlong *)(lVar18 + 0x10) + lVar13);
                      dVar36 = *pdVar1 * (double)uVar12;
                      dVar38 = pdVar1[1] * dVar35;
                      dVar27 = *(double *)(*(longlong *)(lVar18 + 0x10) + 0x10 + lVar13) * dVar42;
                      dVar29 = dVar38 * dVar40 - dVar37 * dVar36;
                      dVar30 = dVar27 * dVar37 - dVar28 * dVar38;
                      dVar34 = dVar36 * dVar28 - dVar40 * dVar27;
                      dVar30 = dVar30 + dVar30;
                      dVar34 = dVar34 + dVar34;
                      dVar29 = dVar29 + dVar29;
                      local_1f8._8_8_ =
                           (dVar28 * dVar30 - dVar40 * dVar29) + dVar44 * dVar34 + dVar38 + dVar41;
                      local_1f8._0_8_ =
                           (dVar29 * dVar37 - dVar34 * dVar28) + dVar44 * dVar30 + dVar36 + dVar39;
                      local_1e8 = dVar29 * dVar44 + dVar27 + (dVar34 * dVar40 - dVar30 * dVar37) +
                                  dVar31;
                      local_330 = 0;
                      local_338 = 0;
                      local_348 = 1;
                      param_2 = (double *)local_1f8;
                      (**(code **)(*plVar4 + 0x30))(plVar4,local_1f8,&local_178);
                      lVar20 = lVar20 + 2;
                      lVar13 = lVar13 + 0x30;
                    } while (lVar20 < (longlong)*(int *)(lVar18 + 0x18) + -1);
                  }
                }
                else {
                  uVar12 = local_328._0_8_;
                  dVar35 = stack0xfffffffffffffce0;
                  if ((cVar3 == '\0') && ((longlong)*(int *)(lVar18 + 0x18) != 0)) {
                    pdVar19 = *(double **)(lVar18 + 0x10);
                    pdVar1 = pdVar19 + (longlong)*(int *)(lVar18 + 0x18) * 3;
                    do {
                      dVar36 = *pdVar19 * (double)uVar12;
                      dVar38 = pdVar19[1] * dVar35;
                      dVar27 = pdVar19[2] * dVar42;
                      dVar29 = dVar38 * dVar40 - dVar37 * dVar36;
                      dVar30 = dVar27 * dVar37 - dVar28 * dVar38;
                      dVar34 = dVar36 * dVar28 - dVar40 * dVar27;
                      dVar30 = dVar30 + dVar30;
                      dVar34 = dVar34 + dVar34;
                      dVar29 = dVar29 + dVar29;
                      local_178 = (dVar29 * dVar37 - dVar34 * dVar28) + dVar44 * dVar30 + dVar36 +
                                  dVar39;
                      dStack_170 = (dVar28 * dVar30 - dVar40 * dVar29) + dVar44 * dVar34 + dVar38 +
                                   dVar41;
                      local_168 = dVar29 * dVar44 + dVar27 + (dVar34 * dVar40 - dVar30 * dVar37) +
                                  dVar31;
                      local_348 = 1;
                      param_2 = &local_178;
                      (**(code **)(*plVar4 + 0x40))(plVar4,&local_178,lVar18 + 0x20);
                      pdVar19 = pdVar19 + 3;
                    } while (pdVar19 != pdVar1);
                  }
                }
              }
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(local_2d0 + 0x180));
        }
      }
      lVar13 = local_300 + 1;
    } while (lVar13 < *(int *)(local_308 + 1));
  }
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14448c8fa FUN_14448c8fa body=55 status=ok
// SIG undefined FUN_14448c8fa(void)

void FUN_14448c8fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06fc0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06fc0 = FUN_14171c317(FUN_1466cad8e,uVar1,L"ETransformSpaceMode");
  }
  return;
}



// FUNCTION 14448c931 FUN_14448c931 body=55 status=ok
// SIG undefined FUN_14448c931(void)

void FUN_14448c931(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06fd8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06fd8 = FUN_14171c317(FUN_1466cadbf,uVar1,L"ETransformGetterType");
  }
  return;
}



// FUNCTION 14448c968 FUN_14448c968 body=55 status=ok
// SIG undefined FUN_14448c968(void)

void FUN_14448c968(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06ff0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06ff0 = FUN_14171c317(FUN_1466c9fa6,uVar1,L"ERigExecutionType");
  }
  return;
}



// FUNCTION 14448c9b0 FUN_14448c9b0 body=55 status=ok
// SIG undefined FUN_14448c9b0(void)

void FUN_14448c9b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc071b8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc071b8 = FUN_14171c317(FUN_1466cb45e,uVar1,L"EControlRigTestDataPlaybackMode");
  }
  return;
}



// FUNCTION 14448c9e8 FUN_14448c9e8 body=144 status=ok
// SIG undefined FUN_14448c9e8(void)

void FUN_14448c9e8(longlong param_1,longlong param_2,byte param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x2f8);
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    lVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x110;
    do {
      iVar2 = FUN_140813180(uVar1,lVar4);
      if (iVar2 == -1) {
        return;
      }
      lVar4 = lVar4 + 0x110;
      lVar3 = lVar3 + -0x110;
    } while (lVar3 != 0);
  }
  FUN_149196552(uVar1,param_1 + 0x20,param_3 ^ 1);
  FUN_14448ca78(param_1,param_2);
  return;
}



// FUNCTION 14448ca78 FUN_14448ca78 body=420 status=ok
// SIG undefined FUN_14448ca78(void)

ulonglong FUN_14448ca78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined ***local_98;
  undefined **local_90;
  undefined2 local_88;
  longlong local_80;
  ulonglong uStack_78;
  longlong *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  (**(code **)(*param_2 + 0x360))(param_2,&local_70,1);
  if (local_68 == *(int *)(param_1 + 0x18)) {
    if (local_68 != 0) {
      plVar7 = local_70 + (longlong)local_68 * 6;
      plVar6 = local_70;
      do {
        if (((plVar6[5] == 0) || (plVar1 = (longlong *)plVar6[1], plVar1 == (longlong *)0x0)) ||
           ((longlong)*(int *)(param_1 + 0x18) == 0)) goto LAB_14448cbd7;
        plVar2 = *(longlong **)(param_1 + 0x10);
        lVar3 = (longlong)*(int *)(param_1 + 0x18) << 5;
        while ((*plVar2 != *plVar6 || (plVar2[1] != plVar6[2]))) {
          plVar2 = plVar2 + 4;
          lVar3 = lVar3 + -0x20;
          if (lVar3 == 0) goto LAB_14448cbd7;
        }
        if (plVar2 == (longlong *)0x0) goto LAB_14448cbd7;
        local_88 = 0x100;
        local_90 = &PTR_FUN_14bb75320;
        local_80 = 0;
        uStack_78 = 0;
        puVar4 = &DAT_149dfb77a;
        if (((int)plVar2[3] == 0) || (puVar4 = (undefined2 *)plVar2[2], puVar4 != (undefined2 *)0x0)
           ) {
          local_a0 = 0x8000000;
          local_a8 = 0;
          local_98 = &local_90;
          (**(code **)(*plVar1 + 0xf8))(plVar1,puVar4,plVar6[5],0);
          uVar5 = uStack_78 & 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        local_90 = &PTR_FUN_14bb75320;
        FUN_1447a1747(local_80,uVar5);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        if ((int)uVar5 != 0) goto LAB_14448cbd7;
        plVar6 = plVar6 + 6;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      } while (plVar6 != plVar7);
    }
  }
  else {
LAB_14448cbd7:
    uVar5 = 0;
  }
  if (local_70 != (longlong *)0x0) {
    FUN_1400020a8(local_70);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14448cc1d FUN_14448cc1d body=55 status=ok
// SIG undefined FUN_14448cc1d(void)

void FUN_14448cc1d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc072a8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc072a8 = FUN_14171c317(FUN_1466cb918,uVar1,L"ECRSimConstraintType");
  }
  return;
}



// FUNCTION 14448cc54 FUN_14448cc54 body=55 status=ok
// SIG undefined FUN_14448cc54(void)

void FUN_14448cc54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc072f0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc072f0 = FUN_14171c317(FUN_1466cbad8,uVar1,L"ECRSimPointForceType");
  }
  return;
}



// FUNCTION 14448cc8b FUN_14448cc8b body=55 status=ok
// SIG undefined FUN_14448cc8b(void)

void FUN_14448cc8b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07320 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07320 = FUN_14171c317(FUN_1466cbb70,uVar1,L"ECRSimSoftCollisionType");
  }
  return;
}



// FUNCTION 14448ccc2 FUN_14448ccc2 body=4632 status=ok
// SIG undefined FUN_14448ccc2(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_14448ccc2(longlong *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  
  cVar1 = (**(code **)(*param_1 + 0x1b0))();
  if (cVar1 != '\0') {
    return true;
  }
  puVar4 = *(undefined8 **)(param_2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,FUN_1408a629c)
    ;
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  if (DAT_14c952380 == 0) {
    bVar6 = puVar4 != (undefined8 *)0x0;
    if (puVar4 != &DAT_14c952378 && bVar6) {
      do {
        puVar4 = (undefined8 *)puVar4[6];
        bVar6 = puVar4 != (undefined8 *)0x0;
        if (puVar4 == &DAT_14c952378) break;
      } while (puVar4 != (undefined8 *)0x0);
    }
    if (bVar6) goto LAB_14448cd27;
  }
  else if ((puVar4[3] & DAT_14c952380) != 0) {
LAB_14448cd27:
    puVar4 = (undefined8 *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                    FUN_14079c5e4);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    uVar2 = DAT_14c9523d8;
    if (DAT_14c9523d8 == 0) {
      if (puVar4 == (undefined8 *)&DAT_14c9523d0 || puVar4 == (undefined8 *)0x0) {
        return puVar4 != (undefined8 *)0x0;
      }
      do {
        puVar4 = (undefined8 *)puVar4[6];
        if (puVar4 == (undefined8 *)&DAT_14c9523d0) {
          return puVar4 != (undefined8 *)0x0;
        }
      } while (puVar4 != (undefined8 *)0x0);
      return false;
    }
    goto LAB_14448d02b;
  }
  puVar5 = *(undefined **)(param_2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                  FUN_14079c5e4);
    atexit(FUN_1428170bb);
    _Init_thread_footer(&DAT_14c952420);
  }
  if (DAT_14c9523d8 == 0) {
    bVar6 = puVar5 != (undefined *)0x0;
    if (puVar5 != &DAT_14c9523d0 && bVar6) {
      do {
        puVar5 = *(undefined **)(puVar5 + 0x30);
        bVar6 = puVar5 != (undefined *)0x0;
        if (puVar5 == &DAT_14c9523d0) break;
      } while (puVar5 != (undefined *)0x0);
    }
    if (!bVar6) goto LAB_14448cec6;
  }
  else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c9523d8) == 0) {
LAB_14448cec6:
    puVar5 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,FUN_1409f1a5c)
      ;
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c951d28 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c951d28) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (bVar6) goto LAB_14448cf09;
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951d30) != 0) {
LAB_14448cf09:
      puVar4 = (undefined8 *)param_1[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
      {
        uVar3 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar3,
                      FUN_140a4831c);
        atexit(FUN_1427e14fe);
        _Init_thread_footer(&DAT_14c9496d8);
      }
      uVar2 = DAT_14c949690;
      if (DAT_14c949690 == 0) {
        if (puVar4 == (undefined8 *)&DAT_14c949688 || puVar4 == (undefined8 *)0x0) {
          return puVar4 != (undefined8 *)0x0;
        }
        do {
          puVar4 = (undefined8 *)puVar4[6];
          if (puVar4 == (undefined8 *)&DAT_14c949688) {
            return puVar4 != (undefined8 *)0x0;
          }
        } while (puVar4 != (undefined8 *)0x0);
        return false;
      }
      goto LAB_14448d02b;
    }
    puVar5 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      uVar3 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar3,
                    FUN_140a4831c);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c949688 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c949688) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (bVar6) goto LAB_14448cff2;
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c949690) != 0) {
LAB_14448cff2:
      puVar4 = (undefined8 *)param_1[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,
                      FUN_1409f1a5c);
        atexit(FUN_14281201f);
        _Init_thread_footer(&DAT_14c951d78);
      }
      uVar2 = DAT_14c951d30;
      if (DAT_14c951d30 == 0) {
        if (puVar4 == (undefined8 *)&DAT_14c951d28 || puVar4 == (undefined8 *)0x0) {
          return puVar4 != (undefined8 *)0x0;
        }
        do {
          puVar4 = (undefined8 *)puVar4[6];
          if (puVar4 == (undefined8 *)&DAT_14c951d28) {
            return puVar4 != (undefined8 *)0x0;
          }
        } while (puVar4 != (undefined8 *)0x0);
        return false;
      }
      goto LAB_14448d02b;
    }
    puVar5 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c951a90 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c951a90) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if ((bool)(bVar6 ^ 1U | param_1 == (longlong *)0x0)) {
        return false;
      }
    }
    else {
      if (param_1 == (longlong *)0x0) {
        return false;
      }
      if ((DAT_14c951a98 & *(ulonglong *)(puVar5 + 0x18)) == 0) {
        return false;
      }
    }
    puVar5 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c951a90 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c951a90) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if ((bool)(bVar6 ^ 1U | param_1 == (longlong *)0x0)) {
        return false;
      }
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a98) == 0) {
      return false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_2 + 0x78) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                    FUN_1408a629c);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      bVar6 = puVar4 != (undefined8 *)0x0;
      if (puVar4 != &DAT_14c952378 && bVar6) {
        do {
          puVar4 = (undefined8 *)puVar4[6];
          bVar6 = puVar4 != (undefined8 *)0x0;
          if (puVar4 == &DAT_14c952378) break;
        } while (puVar4 != (undefined8 *)0x0);
      }
      if (bVar6) goto LAB_14448d1f6;
    }
    else if ((puVar4[3] & DAT_14c952380) != 0) {
LAB_14448d1f6:
      puVar4 = *(undefined8 **)(param_1[0xf] + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                      FUN_14079c5e4);
        atexit(FUN_1428170bb);
        _Init_thread_footer(&DAT_14c952420);
      }
      uVar2 = DAT_14c9523d8;
      if (DAT_14c9523d8 == 0) {
        if (puVar4 == (undefined8 *)&DAT_14c9523d0 || puVar4 == (undefined8 *)0x0) {
          return puVar4 != (undefined8 *)0x0;
        }
        do {
          puVar4 = (undefined8 *)puVar4[6];
          if (puVar4 == (undefined8 *)&DAT_14c9523d0) {
            return puVar4 != (undefined8 *)0x0;
          }
        } while (puVar4 != (undefined8 *)0x0);
        return false;
      }
      goto LAB_14448d02b;
    }
    puVar5 = *(undefined **)(*(longlong *)(param_2 + 0x78) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                    FUN_14079c5e4);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (DAT_14c9523d8 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c9523d0 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c9523d0) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (bVar6) goto LAB_14448d2ef;
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c9523d8) != 0) {
LAB_14448d2ef:
      puVar4 = *(undefined8 **)(param_1[0xf] + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1))
      {
        FUN_14475b26a();
        FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                      FUN_1408a629c);
        atexit(FUN_14281708e);
        _Init_thread_footer(&DAT_14c9523c8);
      }
      uVar2 = DAT_14c952380;
      if (DAT_14c952380 == 0) {
        if (puVar4 == &DAT_14c952378 || puVar4 == (undefined8 *)0x0) {
          return puVar4 != (undefined8 *)0x0;
        }
        do {
          puVar4 = (undefined8 *)puVar4[6];
          if (puVar4 == &DAT_14c952378) {
            return puVar4 != (undefined8 *)0x0;
          }
        } while (puVar4 != (undefined8 *)0x0);
        return false;
      }
      goto LAB_14448d02b;
    }
    if (*(longlong *)(param_2 + 0x78) == 0) {
      return false;
    }
    puVar5 = *(undefined **)(*(longlong *)(param_2 + 0x78) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,FUN_1409f1a5c)
      ;
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c951d28 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c951d28) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (bVar6) goto LAB_14448d3f1;
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951d30) != 0) {
LAB_14448d3f1:
      puVar4 = *(undefined8 **)(param_1[0xf] + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
      {
        uVar3 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar3,
                      FUN_140a4831c);
        atexit(FUN_1427e14fe);
        _Init_thread_footer(&DAT_14c9496d8);
      }
      uVar2 = DAT_14c949690;
      if (DAT_14c949690 == 0) {
        if (puVar4 == (undefined8 *)&DAT_14c949688 || puVar4 == (undefined8 *)0x0) {
          return puVar4 != (undefined8 *)0x0;
        }
        do {
          puVar4 = (undefined8 *)puVar4[6];
          if (puVar4 == (undefined8 *)&DAT_14c949688) {
            return puVar4 != (undefined8 *)0x0;
          }
        } while (puVar4 != (undefined8 *)0x0);
        return false;
      }
      goto LAB_14448d02b;
    }
    if (*(longlong *)(param_2 + 0x78) == 0) {
      return false;
    }
    puVar5 = *(undefined **)(*(longlong *)(param_2 + 0x78) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      uVar3 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar3,
                    FUN_140a4831c);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c949688 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c949688) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (!bVar6) {
        return false;
      }
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c949690) == 0) {
      return false;
    }
    puVar4 = *(undefined8 **)(param_1[0xf] + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,FUN_1409f1a5c)
      ;
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    uVar2 = DAT_14c951d30;
    if (DAT_14c951d30 == 0) {
      if (puVar4 == (undefined8 *)&DAT_14c951d28 || puVar4 == (undefined8 *)0x0) {
        return puVar4 != (undefined8 *)0x0;
      }
      do {
        puVar4 = (undefined8 *)puVar4[6];
        if (puVar4 == (undefined8 *)&DAT_14c951d28) {
          return puVar4 != (undefined8 *)0x0;
        }
      } while (puVar4 != (undefined8 *)0x0);
      return false;
    }
    goto LAB_14448d02b;
  }
  puVar4 = (undefined8 *)param_1[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,FUN_1408a629c)
    ;
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  uVar2 = DAT_14c952380;
  if (DAT_14c952380 == 0) {
    if (puVar4 == &DAT_14c952378 || puVar4 == (undefined8 *)0x0) {
      return puVar4 != (undefined8 *)0x0;
    }
    do {
      puVar4 = (undefined8 *)puVar4[6];
      if (puVar4 == &DAT_14c952378) {
        return puVar4 != (undefined8 *)0x0;
      }
    } while (puVar4 != (undefined8 *)0x0);
    return false;
  }
LAB_14448d02b:
  return (puVar4[3] & uVar2) != 0;
}



// FUNCTION 14448deda FUN_14448deda body=906 status=ok
// SIG undefined FUN_14448deda(void)

undefined8 *
FUN_14448deda(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8;
  longlong local_1e0;
  longlong local_1d8 [3];
  int local_1c0;
  undefined1 local_1b8 [368];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar6 = *param_4;
  if (lVar6 == 0) {
LAB_14448df34:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_228);
  }
  lVar5 = FUN_1401242c6();
  if ((((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30)) || (lVar6 = *param_4, lVar6 == 0)) goto LAB_14448df34;
  lVar5 = FUN_1401242c6();
  if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)*param_4;
  }
  lVar6 = plVar7[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 1000))(plVar7);
    lVar6 = plVar7[0x22];
  }
  lVar6 = FUN_140124256(lVar6);
  if (*(int *)(lVar6 + 8) < 2) goto LAB_14448df34;
  plVar7 = *(longlong **)(param_1 + 0x28);
  local_200 = param_1;
  if (*(int *)(param_5 + 8) < 2) {
    lVar6 = plVar7[3];
    if ((longlong)(int)lVar6 != 0) {
      lVar5 = plVar7[2];
      lVar8 = 0;
      do {
        uVar2 = *param_3;
        FUN_1400021e4(*(undefined8 *)(lVar5 + lVar8),local_1d8 + 2);
        iVar1 = local_1c0 + -1;
        if (local_1c0 == 0) {
          iVar1 = 0;
        }
        cVar4 = FUN_1402ca054(uVar2,local_1d8[2],iVar1);
        if (local_1d8[2] != 0) {
          FUN_1400020a8();
        }
        if (cVar4 != '\0') goto LAB_14448e21d;
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar6 * 8 != lVar8);
      plVar7 = *(longlong **)(local_200 + 0x28);
    }
    param_1 = local_200;
    local_1d8[0] = 0;
    local_1d8[1] = 0;
    local_1e0 = *param_4;
    if ((local_1e0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1491b97ce(local_1b8,param_3,&local_1e0,local_1d8);
    iVar1 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar1 + 1U) {
      FUN_1491d26ea(plVar7,iVar1);
    }
    FUN_1491d25a0((longlong)iVar1 * 0x170 + *plVar7,local_1b8);
    FUN_1491912a0(local_1b8);
  }
  else {
    lVar6 = FUN_1491d324c(plVar7);
    if (lVar6 == 0) {
      plVar7 = *(longlong **)(param_1 + 0x28);
      lVar6 = 0;
      goto LAB_14448e20b;
    }
    iVar1 = *(int *)(lVar6 + 0x168);
    local_208 = lVar6;
    if ((longlong)iVar1 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x160);
      lVar5 = 0;
      do {
        uVar2 = *param_3;
        FUN_1400021e4(*(undefined8 *)(lVar6 + lVar5),&local_1f0);
        iVar3 = local_1e8 + -1;
        if (local_1e8 == 0) {
          iVar3 = 0;
        }
        cVar4 = FUN_1402ca054(uVar2,local_1f0,iVar3);
        if (local_1f0 != 0) {
          FUN_1400020a8();
        }
        if (cVar4 != '\0') goto LAB_14448e21d;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    param_1 = local_200;
    plVar7 = *(longlong **)(local_200 + 0x28);
    FUN_1491d2e16(local_208,local_1d8);
    local_1f8 = *param_4;
    if ((local_1f8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1491b97ce(local_1b8,param_3,&local_1f8,local_1d8);
    iVar1 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar1 + 1U) {
      FUN_1491d26ea(plVar7,iVar1);
    }
    FUN_1491d25a0((longlong)iVar1 * 0x170 + *plVar7,local_1b8);
    FUN_1491912a0(local_1b8);
    if (local_1d8[0] != 0) {
      FUN_1400020a8();
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x28);
  lVar6 = (longlong)((int)plVar7[1] + -1) * 0x170 + *plVar7;
LAB_14448e20b:
  FUN_14606ee6c(plVar7);
  FUN_1491b9a38(param_1);
  if (lVar6 == 0) {
LAB_14448e21d:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FUN_1491d2b06(param_1 + 0x30,0,lVar6);
    }
    FUN_1491d2e16(lVar6,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14448e266 FUN_14448e266 body=3799 status=ok
// SIG undefined FUN_14448e266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14448e266(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_138 [32];
  longlong **local_118;
  undefined4 local_110;
  undefined8 local_108;
  wchar_t *local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  longlong local_c8;
  longlong local_c0;
  code *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 local_70;
  code *local_68;
  undefined1 local_60 [8];
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_78 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_118 = &local_78;
  local_70 = 0;
  uVar3 = FUN_1491ba362(param_1,param_2,param_3,param_4);
  if ((char)uVar3 == '\0') goto LAB_14448e316;
  lVar5 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),param_2);
  if (((((*(int *)(lVar5 + 0x34) == 0) || (uVar1 = *(uint *)(lVar5 + 0x30), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar5 + 0x34))))) ||
     (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar6 = *plVar9, lVar6 == 0)))) {
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      lVar6 = FUN_140007850(lVar5 + 0x38);
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      lVar13 = DAT_14c9647c8;
      if ((lVar6 == 0) || (cVar2 == '\0')) {
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar6 + 0xc);
          *(uint *)(lVar5 + 0x30) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_14448e463;
          lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_14448e466;
        }
        *(undefined8 *)(lVar5 + 0x30) = 0;
      }
      else {
        uVar1 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                        ((ulonglong)(uVar1 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
            *(uint *)(lVar5 + 0x30) = uVar1;
            lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(lVar13 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_14448e466:
            iVar4 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar15) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar4 = *(int *)(lVar13 + 0x10);
              bVar15 = iVar4 == 0;
              if (bVar15) {
                *(int *)(lVar13 + 0x10) = iVar11;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar15) {
                iVar4 = iVar11;
              }
            }
            *(int *)(lVar5 + 0x34) = iVar4;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar5 + 0x30) = uVar1;
LAB_14448e463:
          lVar13 = 0;
          goto LAB_14448e466;
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_14448e481;
      }
    }
  }
  else {
LAB_14448e481:
    if (DAT_14c949118 == 0) {
      local_58 = FUN_140631fbe;
      lVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar13;
      FUN_1446f470e(local_50,L"Class",1);
      local_e8 = &LAB_146891e90;
      local_f0 = (code *)&LAB_146273097;
      local_100 = L"Engine";
      local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,199);
      local_108 = 0x20;
      local_110 = 0x10000000;
      local_118._0_4_ = 8;
      local_e0 = &local_58;
      FUN_14574b4b2(lVar13);
      DAT_14c949118 = lVar13;
      if (DAT_14c951858 == 0) {
        local_e0 = &local_88;
        local_88 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e8 = &LAB_1468c5283;
        local_f0 = FUN_142809da0;
        local_f8 = L"Engine";
        local_100 = (wchar_t *)0x400000000;
        local_108 = CONCAT44(local_108._4_4_,0x10000000);
        local_110 = 8;
        local_118._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar14 = DAT_14c951858;
      lVar13 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_b8 = (code *)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_c8 = DAT_14c948f88;
        FUN_1446f470e(&local_98,L"Struct",1);
        local_e0 = &local_b8;
        local_e8 = &LAB_146891313;
        local_f0 = FUN_146272f63;
        local_100 = L"Engine";
        local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,199);
        local_108 = 8;
        local_110 = 0x10000020;
        local_118._0_4_ = 8;
        FUN_14574b4b2(local_c8);
        DAT_14c948f88 = local_c8;
        local_c0 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_e0 = &local_88;
          local_88 = FUN_1449e2820;
          local_d0 = FUN_14081d0ea;
          local_d8 = FUN_14081d0ea;
          local_e8 = &LAB_146856450;
          local_f0 = FUN_1427b121c;
          local_f8 = L"Engine";
          local_100 = (wchar_t *)0x0;
          local_108 = CONCAT44(local_108._4_4_,0x10000021);
          local_110 = 8;
          local_118._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_c8 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_c8;
        local_c0 = DAT_14c927740;
        uVar7 = FUN_1400163b0();
        local_118 = (longlong **)0x149e6bce8;
        FUN_14574b446(uVar7,local_c8,local_c0,L"/Script/CoreUObject");
      }
      local_118 = (longlong **)0x149e6ee30;
      FUN_14574b446(DAT_14c948f88,lVar13,lVar14,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      FUN_1401242c6();
    }
  }
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_98 = (undefined2 *)0x0;
  local_90 = *(int *)(param_4 + 1);
  lVar6 = (longlong)local_90;
  _Src = (void *)*param_4;
  if (lVar6 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar6 * 2);
  }
  FUN_1491d31c2(param_4,&local_88,&local_98,1);
  if (((int)uStack_80 < 2) ||
     (lVar6 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),&local_88), lVar6 == 0)) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 != 0) {
      lVar13 = FUN_141225fe0();
      if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
        if ((*(longlong *)(lVar6 + 0x30) != 0) && (DAT_14c927740 == 0)) {
          local_e0 = &local_b8;
          local_b8 = FUN_1449e2820;
          local_d0 = FUN_14081d0ea;
          local_d8 = FUN_14081d0ea;
          local_e8 = &LAB_146856450;
          local_f0 = FUN_1427b121c;
          local_f8 = L"Engine";
          local_100 = (wchar_t *)0x0;
          local_108 = CONCAT44(local_108._4_4_,0x10000021);
          local_110 = 8;
          local_118 = (longlong **)CONCAT44(local_118._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        puVar10 = local_98;
        if (local_90 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        puVar8 = local_a8;
        goto LAB_14448e76e;
      }
    }
  }
  else {
    if ((((*(int *)(lVar6 + 0x34) == 0) || (uVar1 = *(uint *)(lVar6 + 0x30), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       (((plVar9 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar6 + 0x34))) ||
        (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar13 = *plVar9, lVar13 == 0)))))) {
      if (*(longlong *)(lVar6 + 0x38) != 0) {
        lVar13 = FUN_140007850(lVar6 + 0x38);
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        lVar14 = DAT_14c9647c8;
        if ((lVar13 == 0) || (cVar2 == '\0')) {
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar13 + 0xc);
            *(uint *)(lVar6 + 0x30) = uVar1;
            if (DAT_14c9647dc <= (int)uVar1) goto LAB_14448e8d6;
            lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            goto LAB_14448e717;
          }
          *(undefined8 *)(lVar6 + 0x30) = 0;
        }
        else {
          uVar1 = *(uint *)(lVar13 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                          (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
              *(uint *)(lVar6 + 0x30) = uVar1;
              lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(lVar14 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_14448e717:
              iVar4 = *(int *)(lVar14 + 0x10);
              if (*(int *)(lVar14 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar11 = DAT_14c964868 + 1;
                bVar15 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar15) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar11);
                }
                LOCK();
                iVar4 = *(int *)(lVar14 + 0x10);
                bVar15 = iVar4 == 0;
                if (bVar15) {
                  *(int *)(lVar14 + 0x10) = iVar11;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar15) {
                  iVar4 = iVar11;
                }
              }
              *(int *)(lVar6 + 0x34) = iVar4;
            }
          }
          else if ((_DAT_00000008 & 0x8400000) == 0) {
            *(uint *)(lVar6 + 0x30) = uVar1;
LAB_14448e8d6:
            lVar14 = 0;
            goto LAB_14448e717;
          }
          if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_14448e5be;
        }
      }
    }
    else {
LAB_14448e5be:
      if (DAT_14c949118 == 0) {
        local_68 = FUN_140631fbe;
        lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar6;
        FUN_1446f470e(local_60,L"Class",1);
        local_e8 = &LAB_146891e90;
        local_f0 = (code *)&LAB_146273097;
        local_100 = L"Engine";
        local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,199);
        local_108 = 0x20;
        local_110 = 0x10000000;
        local_118._0_4_ = 8;
        local_e0 = &local_68;
        FUN_14574b4b2(lVar6);
        DAT_14c949118 = lVar6;
        if (DAT_14c951858 == 0) {
          local_e0 = &local_b8;
          local_b8 = FUN_1449e2820;
          local_d0 = FUN_14081d0ea;
          local_d8 = FUN_14081d0ea;
          local_e8 = &LAB_1468c5283;
          local_f0 = FUN_142809da0;
          local_f8 = L"Engine";
          local_100 = (wchar_t *)0x400000000;
          local_108 = CONCAT44(local_108._4_4_,0x10000000);
          local_110 = 8;
          local_118._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar14 = DAT_14c951858;
        lVar6 = DAT_14c949118;
        if (DAT_14c948f88 == 0) {
          local_58 = (code *)&DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_c8 = DAT_14c948f88;
          FUN_1446f470e(local_50,L"Struct",1);
          local_e0 = &local_58;
          local_e8 = &LAB_146891313;
          local_f0 = FUN_146272f63;
          local_100 = L"Engine";
          local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,199);
          local_108 = 8;
          local_110 = 0x10000020;
          local_118._0_4_ = 8;
          FUN_14574b4b2(local_c8);
          DAT_14c948f88 = local_c8;
          local_c0 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_e0 = &local_b8;
            local_b8 = FUN_1449e2820;
            local_d0 = FUN_14081d0ea;
            local_d8 = FUN_14081d0ea;
            local_e8 = &LAB_146856450;
            local_f0 = FUN_1427b121c;
            local_f8 = L"Engine";
            local_100 = (wchar_t *)0x0;
            local_108 = CONCAT44(local_108._4_4_,0x10000021);
            local_110 = 8;
            local_118._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_c8 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_c8;
          local_c0 = DAT_14c927740;
          uVar7 = FUN_1400163b0();
          local_118 = (longlong **)0x149e6bce8;
          FUN_14574b446(uVar7,local_c8,local_c0,L"/Script/CoreUObject");
        }
        local_118 = (longlong **)0x149e6ee30;
        FUN_14574b446(DAT_14c948f88,lVar6,lVar14,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
        FUN_1401242c6();
      }
    }
    puVar10 = local_98;
    if (local_90 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    puVar8 = local_a0;
LAB_14448e76e:
    FUN_1446f470e(puVar8,puVar10,1);
  }
  puVar10 = local_98;
  if ((int)uStack_80 < 2) {
    local_b8 = (code *)0x0;
    lVar6 = (longlong)local_90;
    local_b0 = local_90;
    if (lVar6 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_90,0);
      memcpy(local_b8,puVar10,lVar6 * 2);
    }
  }
  else {
    FUN_1491d2e98(&local_b8,&local_88,&local_98);
  }
  uVar7 = *param_3;
  uVar1 = (uint)((ulonglong)uVar7 >> 0x10);
  uVar12 = (uint)uVar7 & 0xffff;
  uVar7 = FUN_1401e8636(lVar5 + 0xf8,
                        ((uint)uVar7 << 0x10 | uVar12) + (int)((ulonglong)uVar7 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar12 >> 4),param_3);
  iVar4 = local_b0 + -1;
  if (local_b0 == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(uVar7,local_b8,iVar4);
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_1491d2b06(param_1 + 0x30,5,lVar5);
  }
  if (local_b8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14448e316:
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14448f13e FUN_14448f13e body=1549 status=ok
// SIG undefined FUN_14448f13e(void)

ulonglong FUN_14448f13e(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  longlong *local_108;
  undefined4 local_100;
  char local_f4 [4];
  undefined2 local_f0;
  ushort uStack_ee;
  undefined4 uStack_ec;
  longlong local_e8 [4];
  longlong *local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_c8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_c0 = 0;
  if (param_4 != '\0') {
    cVar4 = FUN_1491b652e(param_1,param_2,param_3,&local_c8);
    if (cVar4 == '\0') {
      uVar13 = 0;
      goto LAB_14448f3f0;
    }
  }
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  FUN_1400021e4(param_2 + 4,local_b8);
  FUN_1491d31c2(local_b8,local_e8 + 2,local_e8,1);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  uVar6 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),local_e8 + 2);
  FUN_1491b9f52(*(longlong *)(param_1 + 0x28) + 0x30,local_f4,param_2);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_141225fe0();
  }
  uVar13 = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if ((((uint)uStack_ee < DAT_14c87eb08 + 1U) &&
      (CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0)) != 0)) && (local_f4[0] != '\0')) {
    uVar1 = *(undefined1 *)(param_1 + 0x49);
    *(undefined1 *)(param_1 + 0x49) = 0;
    FUN_144493ec8(param_1,param_2,0,local_b8);
    *(undefined1 *)(param_1 + 0x49) = uVar1;
  }
  FUN_1491ba042(*(longlong *)(param_1 + 0x28) + 0x30,param_2,param_3);
  iVar3 = local_90;
  local_110 = uVar6;
  if (local_90 == 0) {
    uVar18 = 1;
    iVar14 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar7 = local_a8;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar8 = local_90 + 0x1e;
      if (-1 < local_90 + -1) {
        iVar8 = local_90 + -1;
      }
      uVar13 = 0;
      uVar18 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar18 = uVar13;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar13) goto LAB_14448f39b;
        iVar14 = iVar14 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar12 & uVar12);
    uVar15 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar8 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (local_90 <= iVar8) {
      iVar8 = local_90;
    }
  }
  if (iVar8 != local_90) {
    uVar12 = 0xffffffff;
    iVar5 = local_90;
    do {
      lVar16 = local_b8[0];
      lVar17 = (longlong)iVar8 * 0x20;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x38);
      if ((longlong)iVar8 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
        uVar15 = 0;
        do {
          if ((*(longlong *)(local_b8[0] + 4 + lVar17) == *(longlong *)(lVar2 + 4 + uVar15)) &&
             (*(char *)(local_b8[0] + lVar17) == *(char *)(lVar2 + uVar15))) {
            iVar10 = (int)(uVar15 >> 3) * -0x55555555;
            if ((-1 < iVar10) && (iVar10 < iVar8)) goto LAB_14448f4b5;
            break;
          }
          uVar15 = uVar15 + 0x18;
        } while ((longlong)iVar8 * 0x18 != uVar15);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      local_108 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      lVar16 = lVar16 + lVar17;
      local_100 = 0;
      cVar4 = FUN_1491b652e(param_1,lVar16,lVar16 + 0xc,&local_108);
      if (cVar4 != '\0') {
        FUN_14448f13e(param_1,lVar16,lVar16 + 0xc,0);
      }
      iVar5 = local_90;
      if (local_108 != (longlong *)0x0) {
        (**(code **)(*local_108 + 0x10))();
        iVar5 = local_90;
      }
LAB_14448f4b5:
      uVar12 = uVar12 & ~(uint)uVar18;
      puVar7 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar7 = local_a8;
      }
      iVar8 = (int)uVar13;
      lVar16 = (longlong)iVar8;
      uVar9 = puVar7[lVar16] & uVar12;
      if (uVar9 == 0) {
        iVar10 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar10 = iVar5 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar17 = 0;
          do {
            uVar9 = puVar7[lVar16 + lVar17 + 1];
            if (uVar9 != 0) {
              uVar13 = (ulonglong)(iVar8 + (int)lVar17 + 1);
              uVar12 = 0xffffffff;
              goto LAB_14448f536;
            }
            iVar14 = iVar14 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar11 - lVar16 != lVar17);
          uVar12 = 0xffffffff;
          lVar16 = (longlong)iVar11;
        }
        uVar13 = lVar16 + 1U & 0xffffffff;
        iVar8 = iVar5;
      }
      else {
LAB_14448f536:
        uVar18 = (ulonglong)(-uVar9 & uVar9);
        uVar15 = uVar18 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar8 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar8) {
          iVar8 = iVar5;
        }
      }
    } while (iVar8 != iVar3);
  }
LAB_14448f39b:
  if (*(char *)(param_1 + 0x48) == '\0') {
    param_1 = param_1 + 0x30;
    FUN_1491d2b06(param_1,4,local_110);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(local_b8);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[2] != 0) {
    FUN_1400020a8();
  }
  uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_14448f3f0:
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14448f74c FUN_14448f74c body=2594 status=ok
// SIG undefined FUN_14448f74c(void)

/* WARNING: Removing unreachable block (ram,0x00014448f8be) */

void FUN_14448f74c(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ushort uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_188 [32];
  longlong *local_168;
  int local_15c;
  longlong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  uint *local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong local_108 [3];
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28));
  if (lVar4 != 0) {
    local_168 = param_2;
    FUN_1491d2e16(lVar4,&local_b8);
    FUN_1491b8bb6(param_1,&local_b8,0);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_e8 = 0;
    uStack_e0 = 0;
    iVar3 = *(int *)(lVar4 + 0x168);
    local_158 = param_1;
    if ((longlong)iVar3 != 0) {
      lVar19 = *(longlong *)(lVar4 + 0x160);
      lVar13 = 0;
      puVar11 = local_b8;
      uVar20 = uStack_b0;
      do {
        uStack_b0 = uVar20;
        local_b8 = puVar11;
        FUN_1491d2e16(*(undefined8 *)(lVar19 + lVar13),&local_b8);
        uVar20 = uStack_e0;
        lVar16 = (longlong)(int)uStack_e0;
        uVar2 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar2);
        if (uStack_e0._4_4_ < uVar2) {
          FUN_1447a1bd6(&local_e8,uVar20 & 0xffffffff);
        }
        param_1 = local_158;
        lVar16 = lVar16 * 0x10;
        *(undefined8 *)(local_e8 + lVar16) = 0;
        *(undefined8 **)(local_e8 + lVar16) = local_b8;
        local_b8 = (undefined8 *)0x0;
        puVar11 = local_b8;
        *(int *)(local_e8 + 8 + lVar16) = (int)uStack_b0;
        *(uint *)(local_e8 + 0xc + lVar16) = uStack_b0._4_4_;
        uStack_b0 = 0;
        uVar20 = uStack_b0;
        uStack_b0 = 0;
        local_b8 = (undefined8 *)0x0;
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar3 * 8 != lVar13);
      if ((longlong)(int)uStack_e0 != 0) {
        lVar13 = (longlong)(int)uStack_e0 << 4;
        lVar19 = local_e8;
        do {
          FUN_14448f74c(param_1,lVar19);
          lVar19 = lVar19 + 0x10;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
    }
    lVar19 = *(longlong *)(param_1 + 0x28);
    iVar3 = *(int *)(lVar19 + 0x28);
    *(uint *)(lVar19 + 0x28) = iVar3 + 1U;
    if (*(uint *)(lVar19 + 0x2c) < iVar3 + 1U) {
      FUN_1491d26ea((longlong *)(lVar19 + 0x20),iVar3);
    }
    FUN_1491c59a2((longlong)iVar3 * 0x170 + *(longlong *)(lVar19 + 0x20),lVar4);
    FUN_1491bad66(*(undefined8 *)(param_1 + 0x28),lVar4);
    FUN_14606ee6c(*(undefined8 *)(param_1 + 0x28));
    FUN_1491b9a38(param_1);
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x38);
    if (lVar4 != 0) {
      puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x30);
      puVar11 = puVar14 + lVar4 * 3;
      plVar12 = local_108 + 2;
      do {
        local_c8 = 0;
        lStack_c0 = 0;
        local_d8 = (void *)0x0;
        uStack_d0 = 0;
        FUN_1400021e4((longlong)puVar14 + 4,plVar12);
        FUN_1491d31c2(plVar12,&local_c8,&local_d8,1);
        if (local_108[2] != 0) {
          FUN_1400020a8();
        }
        uVar20 = uStack_b0;
        if ((int)lStack_c0 == (int)local_168[1]) {
          if (1 < (int)lStack_c0) {
            lVar4 = 0;
            while( true ) {
              uVar9 = *(ushort *)(local_c8 + lVar4);
              uVar8 = (ulonglong)uVar9;
              uVar15 = *(ushort *)(*local_168 + lVar4);
              if (uVar9 != uVar15) break;
              if (uVar9 == 0) goto LAB_14448fa5b;
LAB_14448fa20:
              lVar4 = lVar4 + 2;
            }
            if ((uVar15 | uVar9) < 0x80) {
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar21 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar21]) goto LAB_14448fa20;
            }
            if (uVar9 != uVar15) goto LAB_14448faa2;
          }
LAB_14448fa5b:
          lVar4 = (longlong)(int)uStack_b0;
          uVar2 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
          if (uStack_b0._4_4_ < uVar2) {
            FUN_149192788(&local_b8,uVar20 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_b8 + lVar4 * 0xc + 8) = *(undefined4 *)(puVar14 + 1);
          *(undefined8 *)((longlong)local_b8 + lVar4 * 0xc) = *puVar14;
        }
        else if ((int)local_168[1] + (int)lStack_c0 == 1) goto LAB_14448fa5b;
LAB_14448faa2:
        local_108[2] = 0;
        uStack_f0 = 0;
        local_108[0] = 0;
        local_108[1] = 0;
        FUN_1400021e4(puVar14 + 2,local_118);
        FUN_1491d31c2(local_118,plVar12,local_108,1);
        if (local_118[0] != 0) {
          FUN_1400020a8();
        }
        uVar20 = uStack_b0;
        if ((int)uStack_f0 == (int)local_168[1]) {
          if (1 < (int)uStack_f0) {
            lVar4 = 0;
            while( true ) {
              uVar9 = *(ushort *)(local_108[2] + lVar4);
              uVar8 = (ulonglong)uVar9;
              uVar15 = *(ushort *)(*local_168 + lVar4);
              if (uVar9 != uVar15) break;
              if (uVar9 == 0) goto LAB_14448fb58;
LAB_14448fb1d:
              lVar4 = lVar4 + 2;
            }
            if ((uVar15 | uVar9) < 0x80) {
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar21 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar21]) goto LAB_14448fb1d;
            }
            if (uVar9 != uVar15) goto LAB_14448fb9f;
          }
LAB_14448fb58:
          lVar4 = (longlong)(int)uStack_b0;
          uVar2 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
          if (uStack_b0._4_4_ < uVar2) {
            FUN_149192788(&local_b8,uVar20 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_b8 + lVar4 * 0xc + 8) = *(undefined4 *)(puVar14 + 1);
          *(undefined8 *)((longlong)local_b8 + lVar4 * 0xc) = *puVar14;
        }
        else if ((int)local_168[1] + (int)uStack_f0 == 1) goto LAB_14448fb58;
LAB_14448fb9f:
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
        if (local_108[2] != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        param_1 = local_158;
        puVar14 = puVar14 + 3;
      } while (puVar14 != puVar11);
      if ((longlong)(int)uStack_b0 != 0) {
        lVar4 = (longlong)(int)uStack_b0 * 0xc;
        puVar11 = local_b8;
        do {
          FUN_1491ba12e(*(longlong *)(param_1 + 0x28) + 0x30,puVar11);
          puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
          lVar4 = lVar4 + -0xc;
        } while (lVar4 != 0);
      }
    }
    FUN_14606ec40(*(longlong *)(param_1 + 0x28) + 0x30);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    plVar12 = *(longlong **)(param_1 + 0x28);
    if ((longlong)(int)plVar12[1] != 0) {
      lVar4 = *plVar12;
      local_138 = (longlong)(int)plVar12[1] * 0x170 + lVar4;
      plVar12 = local_168;
      do {
        local_128 = (void *)0x0;
        local_120 = (int)plVar12[1];
        lVar19 = (longlong)local_120;
        pvVar1 = (void *)*plVar12;
        if (lVar19 == 0) {
          local_11c = 0;
        }
        else {
          FUN_1446dd670(&local_128,local_120,0);
          memcpy(local_128,pvVar1,lVar19 * 2);
        }
        local_98 = 0;
        local_90 = 0;
        local_b8 = (undefined8 *)0x0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        uVar2 = *(int *)(lVar4 + 0x100) - *(int *)(lVar4 + 300);
        if (uVar2 != 0) {
          if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar2);
          }
          FUN_140ede01e(&local_b8,uVar2);
          iVar3 = 1;
          if (3 < uVar2) {
            uVar2 = (uVar2 | 1) + 0xe;
            iVar3 = 0x1f;
            if (uVar2 != 0) {
              for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
              }
            }
            iVar3 = 1 << ((byte)iVar3 & 0x1f);
          }
          if ((local_70 == 0) || (local_70 < iVar3)) {
            local_70 = iVar3;
            FUN_1406e2aa2(&local_b8);
          }
        }
        local_140 = (longlong *)(lVar4 + 0xf8);
        uVar2 = *(uint *)(lVar4 + 0x120);
        if (uVar2 == 0) {
          uVar21 = 1;
          uVar20 = 0;
          iVar3 = 0;
          uVar10 = 0;
        }
        else {
          puVar5 = *(uint **)(lVar4 + 0x118);
          if (*(uint **)(lVar4 + 0x118) == (uint *)0x0) {
            puVar5 = (uint *)(lVar4 + 0x108);
          }
          uVar10 = *puVar5;
          if (uVar10 == 0) {
            iVar3 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar3 = uVar2 - 1;
            }
            uVar20 = 0;
            uVar8 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar8 = uVar20;
            }
            iVar3 = 0;
            do {
              if (uVar8 == uVar20) goto LAB_14448fe01;
              iVar3 = iVar3 + 0x20;
              uVar10 = puVar5[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar10 == 0);
          }
          else {
            uVar20 = 0;
            iVar3 = 0;
          }
          uVar21 = (ulonglong)(-uVar10 & uVar10);
          uVar8 = uVar21 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar10 = (iVar3 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar10) {
            uVar10 = uVar2;
          }
        }
        if (uVar10 != uVar2) {
          uVar17 = 0xffffffff;
          local_150 = (ulonglong)uVar2;
          local_148 = lVar4;
          local_130 = (uint *)(lVar4 + 0x108);
          do {
            lVar4 = *local_140;
            lVar19 = (longlong)(int)uVar10 * 0x20;
            local_c8 = 0;
            lStack_c0 = 0;
            local_d8 = (void *)0x0;
            uVar2 = *(uint *)(lVar4 + 0x10 + lVar19);
            pvVar1 = *(void **)(lVar4 + 8 + lVar19);
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar2);
            local_15c = iVar3;
            if ((longlong)(int)uVar2 == 0) {
              uStack_d0 = (ulonglong)uVar2;
            }
            else {
              FUN_1446dd670(&local_d8,uVar2,0);
              memcpy(local_d8,pvVar1,(longlong)(int)uVar2 * 2);
            }
            lVar13 = lVar4 + lVar19 + 8;
            FUN_1491d31c2(lVar13,&local_c8,&local_d8,1);
            if ((int)lStack_c0 == local_120) {
              bVar22 = true;
              if (1 < (int)lStack_c0) {
                lVar16 = 0;
                while( true ) {
                  uVar9 = *(ushort *)(local_c8 + lVar16);
                  uVar2 = (uint)uVar9;
                  uVar15 = *(ushort *)((longlong)local_128 + lVar16);
                  uVar10 = (uint)uVar15;
                  if (uVar9 != uVar15) {
                    if ((uVar15 | uVar9) < 0x80) {
                      uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar9];
                      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar15];
                      if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar15]) goto LAB_14448ff59;
                    }
                    iVar3 = uVar2 - uVar10;
                    goto LAB_14448ff92;
                  }
                  if (uVar9 == 0) break;
LAB_14448ff59:
                  lVar16 = lVar16 + 2;
                }
                iVar3 = 0;
LAB_14448ff92:
                bVar22 = iVar3 == 0;
              }
            }
            else {
              bVar22 = local_120 + (int)lStack_c0 == 1;
            }
            if (local_d8 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            if (!bVar22) {
              local_c8 = lVar4 + lVar19;
              lStack_c0 = lVar13;
              FUN_1406e263c(&local_b8,&local_d8,&local_c8,0);
            }
            uVar17 = uVar17 & ~(uint)uVar21;
            puVar5 = *(uint **)(local_148 + 0x118);
            if (*(uint **)(local_148 + 0x118) == (uint *)0x0) {
              puVar5 = local_130;
            }
            uVar2 = *(uint *)(local_148 + 0x120);
            iVar18 = (int)uVar20;
            lVar4 = (longlong)iVar18;
            uVar10 = puVar5[lVar4] & uVar17;
            iVar3 = local_15c;
            if (uVar10 == 0) {
              iVar6 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar6 = uVar2 - 1;
              }
              iVar6 = iVar6 >> 5;
              iVar3 = local_15c + 0x20;
              iVar7 = iVar6;
              if (iVar6 < iVar18) {
                iVar7 = iVar18;
              }
              if (iVar18 < iVar6) {
                lVar19 = 0;
                do {
                  uVar10 = puVar5[lVar4 + lVar19 + 1];
                  if (uVar10 != 0) {
                    uVar20 = (ulonglong)(iVar18 + (int)lVar19 + 1);
                    uVar17 = 0xffffffff;
                    goto LAB_144490084;
                  }
                  iVar3 = iVar3 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar7 - lVar4 != lVar19);
                uVar17 = 0xffffffff;
                iVar18 = iVar7;
              }
              uVar20 = (ulonglong)(iVar18 + 1);
              uVar10 = uVar2;
            }
            else {
LAB_144490084:
              uVar21 = (ulonglong)(-uVar10 & uVar10);
              uVar8 = uVar21 * 2 + 1;
              lVar4 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              uVar10 = (iVar3 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar10) {
                uVar10 = uVar2;
              }
            }
            lVar4 = local_148;
          } while (uVar10 != (uint)local_150);
        }
LAB_14448fe01:
        if (local_128 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_14912c540(local_140,&local_b8);
        param_1 = local_158;
        plVar12 = local_168;
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_140bb2a1a(&local_b8);
        lVar4 = lVar4 + 0x170;
      } while (lVar4 != local_138);
      plVar12 = *(longlong **)(param_1 + 0x28);
    }
    if (*(char *)(param_1 + 0x48) == '\0') {
      FUN_1491d2b06(param_1 + 0x30,2,(longlong)((int)plVar12[5] + -1) * 0x170 + plVar12[4]);
      plVar12 = *(longlong **)(param_1 + 0x28);
    }
    iVar3 = *(int *)((longlong)plVar12 + 0x2c);
    FUN_145d305dd(plVar12[4],(int)plVar12[5]);
    *(undefined4 *)(plVar12 + 5) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)plVar12 + 0x2c) != 0)) {
      FUN_1491d29ee(plVar12 + 4);
    }
    FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144490170 FUN_144490170 body=3579 status=ok
// SIG undefined FUN_144490170(void)

undefined8 *
FUN_144490170(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  ushort uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined2 **ppuVar23;
  uint uVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_178 [40];
  undefined8 *local_150;
  uint local_144;
  undefined8 *local_140;
  longlong local_138;
  int local_12c;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  uint *local_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  wchar_t *local_80;
  int local_78;
  wchar_t *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar5 = (undefined8 *)FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),param_3);
  if (puVar5 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
  }
  FUN_1400021e4(puVar5,&local_70);
  FUN_1400021e4(param_4,&local_80);
  if (local_68 == local_78) {
    if ((1 < local_68) && (iVar3 = wcscmp(local_70,local_80), iVar3 != 0)) {
LAB_144490251:
      local_150 = param_2;
      local_138 = param_1;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
        param_2 = local_150;
        param_1 = local_138;
      }
      local_90 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_88 = 0;
      cVar2 = FUN_1491bae0a(param_1,param_3,param_4);
      pwVar11 = local_70;
      if (cVar2 == '\0') {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        if (*(int *)(puVar5 + 5) < 2) {
          local_a0 = (undefined2 *)0x0;
          local_98 = local_68;
          if ((longlong)local_68 == 0) {
            local_94 = 0;
          }
          else {
            FUN_1446dd670(&local_a0,local_68,0);
            param_2 = local_150;
            memcpy(local_a0,pwVar11,(longlong)local_68 * 2);
          }
        }
        else {
          FUN_1491d2e98(&local_a0,puVar5 + 4,&local_70);
        }
        if (*(int *)(puVar5 + 5) < 2) {
          pwVar11 = local_80;
          if (local_78 == 0) {
            pwVar11 = L"";
          }
          FUN_140056680(param_2,pwVar11);
        }
        else {
          FUN_1491d2e98(param_2,puVar5 + 4,&local_80);
        }
        local_12c = FUN_144a075de(*(longlong *)(param_1 + 0x28) + 0xa0,&local_a0);
        if ((local_12c != -1) && (*(char *)(param_1 + 0x48) == '\0')) {
          FUN_1491d2b06(param_1 + 0x30,0xc,puVar5);
        }
        puVar5[0x29] = *puVar5;
        *puVar5 = *param_4;
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        uVar7 = *(uint *)(puVar5 + 0x2d);
        local_140 = puVar5;
        if ((longlong)(int)uVar7 != 0) {
          uStack_b0 = (ulonglong)uVar7;
          FUN_1491d2a1e(&local_b8,0);
          memcpy(local_b8,(void *)local_140[0x2c],(longlong)(int)uVar7 << 3);
          if (0 < (int)uStack_b0) {
            lVar15 = 0;
            do {
              puVar17 = &DAT_149dfb77a;
              if (*(int *)(param_2 + 1) != 0) {
                puVar17 = (undefined2 *)*param_2;
              }
              puVar18 = &DAT_149dfb77a;
              if (local_98 != 0) {
                puVar18 = local_a0;
              }
              lVar25 = *(longlong *)((longlong)local_b8 + lVar15 * 8);
              FUN_1448097c4(lVar25 + 0x20,puVar18,puVar17);
              uVar14 = uStack_b0;
              uVar7 = *(uint *)(lVar25 + 0x168);
              if ((longlong)(int)uVar7 != 0) {
                iVar3 = (int)uStack_b0;
                lVar22 = (longlong)(int)uStack_b0;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + uVar7);
                if ((uint)(uStack_b0._4_4_ - iVar3) < uVar7) {
                  FUN_1491d2a1e(&local_b8,uVar14 & 0xffffffff);
                }
                memcpy((void *)(lVar22 * 8 + (longlong)local_b8),*(void **)(lVar25 + 0x160),
                       (longlong)(int)uVar7 << 3);
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < (int)uStack_b0);
          }
        }
        puVar17 = local_a0;
        lVar15 = (longlong)local_98;
        local_c8 = (undefined2 *)0x0;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,local_98);
        FUN_1446dd670(&local_c8,(uint)(lVar15 == 0) + local_98 + 1,0);
        if (lVar15 != 0) {
          memcpy(local_c8,puVar17,lVar15 * 2);
        }
        FUN_1400020e8(&local_c8,&DAT_149e31048,1);
        local_d0 = *(int *)(param_2 + 1);
        lVar25 = (longlong)local_d0;
        local_d8 = (undefined2 *)0x0;
        pvVar1 = (void *)*param_2;
        FUN_1446dd670(&local_d8,(uint)(lVar25 == 0) + local_d0 + 1,0);
        lVar15 = local_138;
        if (lVar25 != 0) {
          memcpy(local_d8,pvVar1,lVar25 * 2);
        }
        FUN_1400020e8(&local_d8,&DAT_149e31048,1);
        lVar25 = *(longlong *)(lVar15 + 0x28);
        if ((longlong)*(int *)(lVar25 + 0x38) != 0) {
          lVar22 = *(longlong *)(lVar25 + 0x30);
          lVar25 = lVar22 + (longlong)*(int *)(lVar25 + 0x38) * 0x18;
          do {
            puVar5 = (undefined8 *)(lVar22 + 4);
            FUN_1400021e4(puVar5,&local_e8);
            uVar14 = (ulonglong)((int)uStack_c0 - 1);
            if ((int)uStack_c0 == 0) {
              uVar14 = 0;
            }
            if ((int)uVar14 < 1) {
              bVar26 = false;
            }
            else {
              puVar17 = &DAT_149dfb77a;
              if ((int)uStack_c0 != 0) {
                puVar17 = local_c8;
              }
              puVar18 = local_e8;
              if ((int)local_e0 == 0) {
                puVar18 = &DAT_149dfb77a;
              }
              lVar20 = 0;
LAB_1444906cb:
              uVar10 = *(ushort *)((longlong)puVar18 + lVar20);
              uVar19 = *(ushort *)((longlong)puVar17 + lVar20);
              if (uVar10 == uVar19) {
                iVar3 = 0;
                if ((uVar10 == 0) || (uVar14 == 1)) goto LAB_144490724;
LAB_1444906e8:
                uVar14 = uVar14 - 1;
                lVar20 = lVar20 + 2;
                goto LAB_1444906cb;
              }
              if ((uVar19 | uVar10) < 0x80) {
                if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar19]) {
                  iVar3 = (uint)(byte)(&DAT_149e05da0)[uVar10] -
                          (uint)(byte)(&DAT_149e05da0)[(uint)uVar19];
                  goto LAB_144490724;
                }
                if (uVar14 == 1) {
                  iVar3 = 0;
                  goto LAB_144490724;
                }
                goto LAB_1444906e8;
              }
              iVar3 = (uint)uVar10 - (uint)uVar19;
LAB_144490724:
              bVar26 = iVar3 == 0;
            }
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (bVar26) {
              FUN_1400021e4(puVar5,&local_108);
              uVar7 = (int)uStack_c0 - 1;
              if ((int)uStack_c0 == 0) {
                uVar7 = 0;
              }
              uVar4 = (int)uStack_100 - 1;
              if ((int)uStack_100 == 0) {
                uVar4 = 0;
              }
              if ((int)uVar7 < (int)uVar4) {
                uVar4 = uVar7;
              }
              if ((0 < (int)uVar4) && ((int)uStack_100 - uVar4 != 0)) {
                memmove(local_108,(void *)((longlong)local_108 + (ulonglong)uVar4 * 2),
                        (longlong)(int)((int)uStack_100 - uVar4) * 2);
              }
              pvVar1 = local_108;
              local_108 = (void *)0x0;
              uStack_100 = 0;
              puVar17 = &DAT_149dfb77a;
              if (local_d0 != 0) {
                puVar17 = local_d8;
              }
              FUN_140002266(&local_e8,L"%s%s",puVar17);
              puVar17 = &DAT_149dfb77a;
              if ((int)local_e0 != 0) {
                puVar17 = local_e8;
              }
              FUN_1446f470e(&local_f0,puVar17,1);
              *puVar5 = local_f0;
              if (local_e8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (pvVar1 != (void *)0x0) {
                FUN_1400020a8(pvVar1);
              }
              if (local_108 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            puVar5 = (undefined8 *)(lVar22 + 0x10);
            FUN_1400021e4(puVar5,&local_e8);
            uVar16 = 0;
            uVar14 = (ulonglong)((int)uStack_c0 - 1);
            if ((int)uStack_c0 == 0) {
              uVar14 = uVar16;
            }
            if (0 < (int)uVar14) {
              puVar17 = &DAT_149dfb77a;
              if ((int)uStack_c0 != 0) {
                puVar17 = local_c8;
              }
              puVar18 = local_e8;
              if ((int)local_e0 == 0) {
                puVar18 = &DAT_149dfb77a;
              }
              lVar20 = 0;
LAB_144490891:
              uVar10 = *(ushort *)((longlong)puVar18 + lVar20);
              uVar19 = *(ushort *)((longlong)puVar17 + lVar20);
              if (uVar10 == uVar19) {
                iVar3 = 0;
                if ((uVar10 == 0) || (uVar14 == 1)) goto LAB_1444908ea;
LAB_1444908ae:
                uVar14 = uVar14 - 1;
                lVar20 = lVar20 + 2;
                goto LAB_144490891;
              }
              if ((uVar19 | uVar10) < 0x80) {
                if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar19]) {
                  iVar3 = (uint)(byte)(&DAT_149e05da0)[uVar10] -
                          (uint)(byte)(&DAT_149e05da0)[(uint)uVar19];
                  goto LAB_1444908ea;
                }
                if (uVar14 == 1) {
                  iVar3 = 0;
                  goto LAB_1444908ea;
                }
                goto LAB_1444908ae;
              }
              iVar3 = (uint)uVar10 - (uint)uVar19;
LAB_1444908ea:
              uVar16 = (ulonglong)(iVar3 == 0);
            }
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if ((char)uVar16 != '\0') {
              FUN_1400021e4(puVar5,&local_108);
              uVar7 = (int)uStack_c0 - 1;
              if ((int)uStack_c0 == 0) {
                uVar7 = 0;
              }
              uVar4 = (int)uStack_100 - 1;
              if ((int)uStack_100 == 0) {
                uVar4 = 0;
              }
              if ((int)uVar7 < (int)uVar4) {
                uVar4 = uVar7;
              }
              if ((0 < (int)uVar4) && ((int)uStack_100 - uVar4 != 0)) {
                memmove(local_108,(void *)((longlong)local_108 + (ulonglong)uVar4 * 2),
                        (longlong)(int)((int)uStack_100 - uVar4) * 2);
              }
              pvVar1 = local_108;
              local_108 = (void *)0x0;
              uStack_100 = 0;
              puVar17 = &DAT_149dfb77a;
              if (local_d0 != 0) {
                puVar17 = local_d8;
              }
              FUN_140002266(&local_e8,L"%s%s",puVar17);
              puVar17 = &DAT_149dfb77a;
              if ((int)local_e0 != 0) {
                puVar17 = local_e8;
              }
              FUN_1446f470e(&local_f0,puVar17,1);
              *puVar5 = local_f0;
              if (local_e8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (pvVar1 != (void *)0x0) {
                FUN_1400020a8(pvVar1);
              }
              if (local_108 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar22 = lVar22 + 0x18;
          } while (lVar22 != lVar25);
          lVar25 = *(longlong *)(lVar15 + 0x28);
          param_2 = local_150;
        }
        FUN_14606ec40(lVar25 + 0x30);
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar25 = (longlong)(int)(*(longlong **)(lVar15 + 0x28))[1];
        if (lVar25 != 0) {
          lVar22 = **(longlong **)(lVar15 + 0x28);
          local_118 = lVar25 * 0x170 + lVar22;
          do {
            uVar7 = *(uint *)(lVar22 + 0x120);
            if (uVar7 == 0) {
              uVar16 = 1;
              uVar14 = 0;
              iVar3 = 0;
              uVar4 = 0;
            }
            else {
              puVar6 = *(uint **)(lVar22 + 0x118);
              if (*(uint **)(lVar22 + 0x118) == (uint *)0x0) {
                puVar6 = (uint *)(lVar22 + 0x108);
              }
              uVar4 = *puVar6;
              if (uVar4 == 0) {
                iVar3 = uVar7 + 0x1e;
                if (-1 < (int)(uVar7 - 1)) {
                  iVar3 = uVar7 - 1;
                }
                uVar14 = 0;
                uVar16 = (ulonglong)(uint)(iVar3 >> 5);
                if (iVar3 >> 5 < 1) {
                  uVar16 = uVar14;
                }
                iVar3 = 0;
                do {
                  if (uVar16 == uVar14) goto LAB_144490b93;
                  iVar3 = iVar3 + 0x20;
                  uVar4 = puVar6[uVar14 + 1];
                  uVar14 = uVar14 + 1;
                } while (uVar4 == 0);
              }
              else {
                uVar14 = 0;
                iVar3 = 0;
              }
              uVar16 = (ulonglong)(-uVar4 & uVar4);
              uVar12 = uVar16 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              uVar4 = (iVar3 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if ((int)uVar7 <= (int)uVar4) {
                uVar4 = uVar7;
              }
            }
            if (uVar4 != uVar7) {
              uVar24 = 0xffffffff;
              local_128 = lVar22;
              local_120 = (ulonglong)uVar7;
              local_110 = (uint *)(lVar22 + 0x108);
              do {
                lVar15 = *(longlong *)(local_128 + 0xf8);
                local_c8 = (undefined2 *)0x0;
                uStack_c0 = 0;
                lVar25 = (longlong)(int)uVar4 * 0x20;
                local_d8 = (undefined2 *)0x0;
                local_d0 = *(int *)(lVar15 + 0x10 + lVar25);
                lVar22 = (longlong)local_d0;
                pvVar1 = *(void **)(lVar15 + 8 + lVar25);
                local_144 = uVar24;
                if (lVar22 == 0) {
                  local_cc = 0;
                }
                else {
                  FUN_1446dd670(&local_d8,local_d0,0);
                  memcpy(local_d8,pvVar1,lVar22 * 2);
                }
                param_2 = local_150;
                lVar15 = lVar15 + lVar25;
                ppuVar23 = (undefined2 **)(lVar15 + 8);
                FUN_1491d31c2(ppuVar23,&local_c8,&local_d8,1);
                uVar24 = local_144;
                if ((int)uStack_c0 == local_98) {
                  if (1 < (int)uStack_c0) {
                    lVar25 = 0;
                    while( true ) {
                      uVar10 = *(ushort *)((longlong)local_c8 + lVar25);
                      uVar12 = (ulonglong)uVar10;
                      uVar19 = *(ushort *)((longlong)local_a0 + lVar25);
                      if (uVar10 != uVar19) break;
                      if (uVar10 == 0) goto LAB_144490d04;
LAB_144490cba:
                      lVar25 = lVar25 + 2;
                    }
                    if ((uVar19 | uVar10) < 0x80) {
                      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                      uVar21 = (ulonglong)uVar19;
                      uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar21]) goto LAB_144490cba;
                    }
                    if (uVar10 != uVar19) goto LAB_144490d73;
                  }
LAB_144490d04:
                  FUN_1491d2e98(&local_e8,param_2,&local_d8);
                  if (ppuVar23 != &local_e8) {
                    if (*ppuVar23 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    *ppuVar23 = local_e8;
                    local_e8 = (undefined2 *)0x0;
                    *(int *)(lVar15 + 0x10) = (int)local_e0;
                    *(undefined4 *)(lVar15 + 0x14) = local_e0._4_4_;
                    local_e0 = 0;
                  }
                  if (local_e8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_98 + (int)uStack_c0 == 1) goto LAB_144490d04;
LAB_144490d73:
                if (local_d8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_c8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar24 = uVar24 & ~(uint)uVar16;
                puVar6 = *(uint **)(local_128 + 0x118);
                if (*(uint **)(local_128 + 0x118) == (uint *)0x0) {
                  puVar6 = local_110;
                }
                uVar7 = *(uint *)(local_128 + 0x120);
                iVar13 = (int)uVar14;
                lVar15 = (longlong)iVar13;
                uVar4 = puVar6[lVar15] & uVar24;
                if (uVar4 == 0) {
                  iVar8 = uVar7 + 0x1e;
                  if (-1 < (int)(uVar7 - 1)) {
                    iVar8 = uVar7 - 1;
                  }
                  iVar8 = iVar8 >> 5;
                  iVar3 = iVar3 + 0x20;
                  iVar9 = iVar8;
                  if (iVar8 < iVar13) {
                    iVar9 = iVar13;
                  }
                  if (iVar13 < iVar8) {
                    lVar25 = 0;
                    do {
                      uVar4 = puVar6[lVar15 + lVar25 + 1];
                      if (uVar4 != 0) {
                        uVar14 = (ulonglong)(iVar13 + (int)lVar25 + 1);
                        uVar24 = 0xffffffff;
                        goto LAB_144490e1b;
                      }
                      iVar3 = iVar3 + 0x20;
                      lVar25 = lVar25 + 1;
                    } while (iVar9 - lVar15 != lVar25);
                    uVar24 = 0xffffffff;
                    iVar13 = iVar9;
                  }
                  uVar14 = (ulonglong)(iVar13 + 1);
                  param_2 = local_150;
                  uVar4 = uVar7;
                }
                else {
LAB_144490e1b:
                  uVar16 = (ulonglong)(-uVar4 & uVar4);
                  uVar12 = uVar16 * 2 + 1;
                  lVar15 = 0x3f;
                  if (uVar12 != 0) {
                    for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                    }
                  }
                  uVar4 = (iVar3 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                  if ((int)uVar7 <= (int)uVar4) {
                    uVar4 = uVar7;
                  }
                }
                lVar22 = local_128;
              } while (uVar4 != (uint)local_120);
            }
LAB_144490b93:
            lVar22 = lVar22 + 0x170;
            lVar15 = local_138;
          } while (lVar22 != local_118);
        }
        FUN_1491b9a38(lVar15);
        if (*(char *)(lVar15 + 0x48) == '\0') {
          FUN_1491d2b06(lVar15 + 0x30,1,local_140);
        }
        if (local_12c != -1) {
          puVar5 = (undefined8 *)
                   ((longlong)local_12c * 0x10 + *(longlong *)(*(longlong *)(lVar15 + 0x28) + 0xa0))
          ;
          if (puVar5 != param_2) {
            iVar3 = *(int *)(param_2 + 1);
            pvVar1 = (void *)*param_2;
            *(int *)(puVar5 + 1) = iVar3;
            if (iVar3 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar5,iVar3);
              if (iVar3 != 0) {
                memcpy((void *)*puVar5,pvVar1,(longlong)iVar3 * 2);
              }
            }
          }
          if (*(char *)(lVar15 + 0x48) == '\0') {
            FUN_1491d2b06(lVar15 + 0x30,0xb,local_140);
          }
        }
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x10))();
      }
      goto LAB_144490303;
    }
  }
  else if (local_78 + local_68 != 1) goto LAB_144490251;
  FUN_1491d2e16(puVar5,param_2);
LAB_144490303:
  if (local_80 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144490f6c FUN_144490f6c body=4434 status=ok
// SIG undefined FUN_144490f6c(void)

undefined8 **
FUN_144490f6c(longlong param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  wchar_t *_Str;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 **ppuVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ushort uVar24;
  ushort uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined8 *local_170;
  undefined8 **local_168;
  int local_15c;
  uint local_158;
  int local_154;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  undefined8 local_120;
  wchar_t *local_118;
  int local_110;
  undefined8 *local_108;
  int local_100;
  int local_fc;
  undefined8 *local_f8;
  int local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar5 = (undefined8 *)FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),param_3);
  if (puVar5 == (undefined8 *)0x0) {
    *param_2 = (undefined8 *)0x0;
    param_2[1] = (undefined8 *)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1a8);
  }
  lVar6 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),param_4);
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(puVar5 + 5);
  lVar15 = (longlong)local_d0;
  pvVar3 = (void *)puVar5[4];
  local_170 = puVar5;
  if (lVar15 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar3,lVar15 * 2);
  }
  puVar5 = local_170;
  if (lVar6 == 0) {
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_e0._0_4_ = 0;
    if (local_d0 != 0) {
LAB_14449118e:
      if (local_d0 + (int)uStack_e0 != 1) {
LAB_14449110f:
        FUN_1491d2e16(puVar5,&local_f8);
        local_15c = FUN_144a075de(*(longlong *)(param_1 + 0x28) + 0xa0,&local_f8);
        if ((local_15c != -1) && (*(char *)(param_1 + 0x48) == '\0')) {
          FUN_1491d2b06(param_1 + 0x30,0xc,puVar5);
        }
        iVar16 = *(int *)(puVar5 + 5) + -1;
        if (*(int *)(puVar5 + 5) == 0) {
          iVar16 = 0;
        }
        FUN_1402980a2(puVar5 + 0x2a,puVar5[4],iVar16);
        puVar5[0x29] = *puVar5;
        if (lVar6 == 0) {
          local_c8 = (undefined8 *)0x0;
          uStack_c0 = 0;
        }
        else {
          FUN_1491d2e16(lVar6,&local_c8);
        }
        if ((undefined8 **)(puVar5 + 4) == &local_c8) {
          if (local_c8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (local_170[4] != 0) {
            FUN_1400020a8();
          }
          local_170[4] = local_c8;
          local_c8 = (undefined8 *)0x0;
          *(int *)(local_170 + 5) = (int)uStack_c0;
          *(int *)((longlong)local_170 + 0x2c) = uStack_c0._4_4_;
        }
        local_78._0_4_ = 0xffffffff;
        local_78._4_4_ = 0;
        uStack_70._0_4_ = 0;
        uStack_70._4_4_ = 0;
        uStack_68 = 0;
        local_64 = -1;
        if (local_170 != &local_78) {
          local_78._0_4_ = (undefined4)*local_170;
          local_78._4_4_ = (undefined4)((ulonglong)*local_170 >> 0x20);
        }
        FUN_1491bb336(param_1,&local_c8,puVar5 + 4);
        puVar5 = local_170;
        puVar23 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff);
        ppuVar21 = &local_c8;
        if ((int)local_c8 == -1) {
          puVar23 = (undefined8 *)&DAT_ffffffff;
          ppuVar21 = (undefined8 **)&DAT_14cc08210;
          if ((local_b8._4_4_ != -1) && (1 < (int)local_b8)) {
            FUN_1446f470e(&local_108,uStack_c0,1);
            local_c8 = local_108;
            puVar23 = local_108;
            ppuVar21 = &local_c8;
          }
        }
        iVar16 = (int)puVar23;
        *puVar5 = *ppuVar21;
        if (local_b8._4_4_ != -1) {
          if (uStack_c0 != 0) {
            FUN_1400020a8();
            iVar16 = (int)local_c8;
          }
          uStack_c0 = 0;
          local_b8 = 0xffffffff00000000;
        }
        if (iVar16 != -1) {
          local_c8 = (undefined8 *)&DAT_ffffffff;
        }
        if ((local_64 != -1) && (CONCAT44(uStack_70._4_4_,(int)uStack_70) != 0)) {
          FUN_1400020a8();
        }
        FUN_1491d2e16(puVar5,param_2);
        local_108 = (undefined8 *)0x0;
        local_100 = *(int *)(puVar5 + 0x2d);
        lVar6 = (longlong)local_100;
        pvVar3 = (void *)puVar5[0x2c];
        if (lVar6 == 0) {
          local_fc = 0;
        }
        else {
          FUN_1491d2aa4(&local_108,local_100,0);
          memcpy(local_108,pvVar3,lVar6 << 3);
          if (0 < local_100) {
            lVar6 = 0;
            do {
              puVar5 = (undefined8 *)&DAT_149dfb77a;
              if (*(int *)(param_2 + 1) != 0) {
                puVar5 = *param_2;
              }
              puVar23 = (undefined8 *)&DAT_149dfb77a;
              if (local_f0 != 0) {
                puVar23 = local_f8;
              }
              FUN_1448097c4(local_108[lVar6] + 0x20,puVar23,puVar5);
              iVar16 = local_100;
              lVar15 = local_108[lVar6];
              uVar18 = *(uint *)(lVar15 + 0x168);
              if ((longlong)(int)uVar18 != 0) {
                lVar26 = (longlong)local_100;
                iVar14 = local_100 + uVar18;
                uVar4 = local_fc - local_100;
                local_100 = iVar14;
                if (uVar4 < uVar18) {
                  FUN_1491d2a1e(&local_108,iVar16);
                }
                memcpy(local_108 + lVar26,*(void **)(lVar15 + 0x160),(longlong)(int)uVar18 << 3);
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < local_100);
          }
        }
        FUN_14606ee6c(*(undefined8 *)(param_1 + 0x28));
        FUN_1491b9a38(param_1);
        lVar6 = *(longlong *)(param_1 + 0x28);
        local_168 = param_2;
        local_150 = param_1;
        if ((longlong)*(int *)(lVar6 + 0x38) != 0) {
          lVar15 = *(longlong *)(lVar6 + 0x30);
          lVar6 = lVar15 + (longlong)*(int *)(lVar6 + 0x38) * 0x18;
          do {
            puVar5 = (undefined8 *)(lVar15 + 4);
            FUN_1400021e4(puVar5,&local_c8);
            uVar19 = (ulonglong)(local_f0 - 1);
            if (local_f0 == 0) {
              uVar19 = 0;
            }
            if ((int)uVar19 < 1) {
              bVar31 = false;
            }
            else {
              puVar23 = (undefined8 *)&DAT_149dfb77a;
              if (local_f0 != 0) {
                puVar23 = local_f8;
              }
              puVar22 = local_c8;
              if ((int)uStack_c0 == 0) {
                puVar22 = (undefined8 *)&DAT_149dfb77a;
              }
              lVar26 = 0;
LAB_14449155d:
              uVar24 = *(ushort *)((longlong)puVar22 + lVar26);
              uVar25 = *(ushort *)((longlong)puVar23 + lVar26);
              if (uVar24 == uVar25) {
                iVar16 = 0;
                if ((uVar24 == 0) || (uVar19 == 1)) goto LAB_1444915b6;
LAB_14449157a:
                uVar19 = uVar19 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_14449155d;
              }
              if ((uVar25 | uVar24) < 0x80) {
                if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[(uint)uVar25]) {
                  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar24] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar25];
                  goto LAB_1444915b6;
                }
                if (uVar19 == 1) {
                  iVar16 = 0;
                  goto LAB_1444915b6;
                }
                goto LAB_14449157a;
              }
              iVar16 = (uint)uVar24 - (uint)uVar25;
LAB_1444915b6:
              bVar31 = iVar16 == 0;
            }
            if (local_c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (bVar31) {
              FUN_1400021e4(puVar5,&local_78);
              uVar18 = local_f0 - 1;
              if (local_f0 == 0) {
                uVar18 = 0;
              }
              uVar4 = (int)uStack_70 - 1;
              if ((int)uStack_70 == 0) {
                uVar4 = 0;
              }
              if ((int)uVar18 < (int)uVar4) {
                uVar4 = uVar18;
              }
              if ((0 < (int)uVar4) && ((int)uStack_70 - uVar4 != 0)) {
                memmove((void *)CONCAT44(local_78._4_4_,(undefined4)local_78),
                        (void *)((longlong)CONCAT44(local_78._4_4_,(undefined4)local_78) +
                                (ulonglong)uVar4 * 2),(longlong)(int)((int)uStack_70 - uVar4) * 2);
              }
              lVar26 = CONCAT44(local_78._4_4_,(undefined4)local_78);
              local_78._0_4_ = 0;
              local_78._4_4_ = 0;
              uStack_70._0_4_ = 0;
              uStack_70._4_4_ = 0;
              puVar23 = (undefined8 *)&DAT_149dfb77a;
              if (*(int *)(local_168 + 1) != 0) {
                puVar23 = *local_168;
              }
              FUN_140002266(&local_c8,L"%s%s",puVar23);
              puVar23 = (undefined8 *)&DAT_149dfb77a;
              if ((int)uStack_c0 != 0) {
                puVar23 = local_c8;
              }
              FUN_1446f470e(&local_118,puVar23,1);
              *puVar5 = local_118;
              if (local_c8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (lVar26 != 0) {
                FUN_1400020a8(lVar26);
              }
              if (CONCAT44(local_78._4_4_,(undefined4)local_78) != 0) {
                FUN_1400020a8();
              }
            }
            puVar5 = (undefined8 *)(lVar15 + 0x10);
            FUN_1400021e4(puVar5,&local_c8);
            puVar17 = (undefined1 *)0x0;
            puVar13 = (undefined1 *)(ulonglong)(local_f0 - 1);
            if (local_f0 == 0) {
              puVar13 = puVar17;
            }
            if (0 < (int)puVar13) {
              puVar23 = (undefined8 *)&DAT_149dfb77a;
              if (local_f0 != 0) {
                puVar23 = local_f8;
              }
              puVar22 = local_c8;
              if ((int)uStack_c0 == 0) {
                puVar22 = (undefined8 *)&DAT_149dfb77a;
              }
              lVar26 = 0;
LAB_14449172e:
              uVar24 = *(ushort *)((longlong)puVar22 + lVar26);
              uVar25 = *(ushort *)((longlong)puVar23 + lVar26);
              if (uVar24 == uVar25) {
                iVar16 = 0;
                if ((uVar24 == 0) || (puVar13 == &DAT_00000001)) goto LAB_144491787;
LAB_14449174b:
                puVar13 = puVar13 + -1;
                lVar26 = lVar26 + 2;
                goto LAB_14449172e;
              }
              if ((uVar25 | uVar24) < 0x80) {
                if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[(uint)uVar25]) {
                  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar24] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar25];
                  goto LAB_144491787;
                }
                if (puVar13 == &DAT_00000001) {
                  iVar16 = 0;
                  goto LAB_144491787;
                }
                goto LAB_14449174b;
              }
              iVar16 = (uint)uVar24 - (uint)uVar25;
LAB_144491787:
              puVar17 = (undefined1 *)(ulonglong)(iVar16 == 0);
            }
            if (local_c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if ((char)puVar17 != '\0') {
              FUN_1400021e4(puVar5,&local_78);
              uVar18 = local_f0 - 1;
              if (local_f0 == 0) {
                uVar18 = 0;
              }
              uVar4 = (int)uStack_70 - 1;
              if ((int)uStack_70 == 0) {
                uVar4 = 0;
              }
              if ((int)uVar18 < (int)uVar4) {
                uVar4 = uVar18;
              }
              if ((0 < (int)uVar4) && ((int)uStack_70 - uVar4 != 0)) {
                memmove((void *)CONCAT44(local_78._4_4_,(undefined4)local_78),
                        (void *)((longlong)CONCAT44(local_78._4_4_,(undefined4)local_78) +
                                (ulonglong)uVar4 * 2),(longlong)(int)((int)uStack_70 - uVar4) * 2);
              }
              lVar26 = CONCAT44(local_78._4_4_,(undefined4)local_78);
              local_78._0_4_ = 0;
              local_78._4_4_ = 0;
              uStack_70._0_4_ = 0;
              uStack_70._4_4_ = 0;
              puVar23 = (undefined8 *)&DAT_149dfb77a;
              if (*(int *)(local_168 + 1) != 0) {
                puVar23 = *local_168;
              }
              FUN_140002266(&local_c8,L"%s%s",puVar23);
              puVar23 = (undefined8 *)&DAT_149dfb77a;
              if ((int)uStack_c0 != 0) {
                puVar23 = local_c8;
              }
              FUN_1446f470e(&local_118,puVar23,1);
              *puVar5 = local_118;
              if (local_c8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (lVar26 != 0) {
                FUN_1400020a8(lVar26);
              }
              if (CONCAT44(local_78._4_4_,(undefined4)local_78) != 0) {
                FUN_1400020a8();
              }
            }
            lVar15 = lVar15 + 0x18;
          } while (lVar15 != lVar6);
          lVar6 = *(longlong *)(local_150 + 0x28);
        }
        lVar15 = local_150;
        param_2 = local_168;
        FUN_14606ec40(lVar6 + 0x30);
        lVar6 = (longlong)(int)(*(longlong **)(lVar15 + 0x28))[1];
        if (lVar6 != 0) {
          lVar26 = **(longlong **)(lVar15 + 0x28);
          local_138 = lVar6 * 0x170 + lVar26;
          do {
            FUN_1491d2e16(lVar26,&local_118);
            plVar1 = (longlong *)(lVar26 + 0xf8);
            puVar2 = (uint *)(lVar26 + 0x108);
            uVar18 = *(uint *)(lVar26 + 0x120);
            iVar16 = 0;
            uVar27 = 1;
            uVar19 = 0;
            uVar4 = 0;
            if (uVar18 != 0) {
              puVar7 = *(uint **)(lVar26 + 0x118);
              if (*(uint **)(lVar26 + 0x118) == (uint *)0x0) {
                puVar7 = puVar2;
              }
              uVar4 = *puVar7;
              if (uVar4 == 0) {
                iVar16 = uVar18 + 0x1e;
                if (-1 < (int)(uVar18 - 1)) {
                  iVar16 = uVar18 - 1;
                }
                uVar19 = 0;
                uVar27 = (ulonglong)(uint)(iVar16 >> 5);
                if (iVar16 >> 5 < 1) {
                  uVar27 = 0;
                }
                iVar16 = 0;
                do {
                  if (uVar27 == uVar19) goto LAB_1444919c4;
                  iVar16 = iVar16 + 0x20;
                  uVar4 = puVar7[uVar19 + 1];
                  uVar19 = uVar19 + 1;
                } while (uVar4 == 0);
              }
              else {
                uVar19 = 0;
              }
              uVar27 = (ulonglong)(-uVar4 & uVar4);
              uVar29 = uVar27 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              uVar4 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if ((int)uVar18 <= (int)uVar4) {
                uVar4 = uVar18;
              }
            }
            if (uVar4 != uVar18) {
              uVar28 = 0xffffffff;
              local_148 = (ulonglong)uVar18;
              do {
                lVar6 = *plVar1;
                local_c8 = (undefined8 *)0x0;
                uStack_c0 = 0;
                lVar30 = (longlong)(int)uVar4 * 0x20;
                local_78._0_4_ = 0;
                local_78._4_4_ = 0;
                uStack_70._0_4_ = *(int *)(lVar6 + 0x10 + lVar30);
                lVar15 = (longlong)(int)uStack_70;
                pvVar3 = *(void **)(lVar6 + 8 + lVar30);
                local_158 = uVar28;
                local_154 = iVar16;
                local_140 = uVar27;
                local_130 = uVar19;
                if (lVar15 == 0) {
                  uStack_70._4_4_ = 0;
                }
                else {
                  FUN_1446dd670(&local_78,(int)uStack_70,0);
                  memcpy((void *)CONCAT44(local_78._4_4_,(undefined4)local_78),pvVar3,lVar15 * 2);
                }
                lVar6 = lVar6 + lVar30;
                plVar20 = (longlong *)(lVar6 + 8);
                FUN_1491d31c2(plVar20,&local_c8,&local_78,1);
                if ((int)uStack_c0 == local_f0) {
                  if (1 < (int)uStack_c0) {
                    lVar15 = 0;
                    while( true ) {
                      uVar24 = *(ushort *)((longlong)local_c8 + lVar15);
                      uVar19 = (ulonglong)uVar24;
                      uVar25 = *(ushort *)((longlong)local_f8 + lVar15);
                      if (uVar24 != uVar25) break;
                      if (uVar24 == 0) goto LAB_144491c8b;
LAB_144491c49:
                      lVar15 = lVar15 + 2;
                    }
                    if ((uVar25 | uVar24) < 0x80) {
                      uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                      uVar27 = (ulonglong)uVar25;
                      uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
                      if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar27]) goto LAB_144491c49;
                    }
                    if (uVar24 != uVar25) goto LAB_144491d5f;
                  }
LAB_144491c8b:
                  FUN_1491d2e98(&local_128,local_168,&local_78);
                  if (plVar20 != &local_128) {
                    if (*plVar20 != 0) {
                      FUN_1400020a8();
                    }
                    *plVar20 = local_128;
                    local_128 = 0;
                    *(undefined4 *)(lVar6 + 0x10) = (undefined4)local_120;
                    *(undefined4 *)(lVar6 + 0x14) = local_120._4_4_;
                    local_120 = 0;
                  }
                  if (local_128 != 0) {
                    FUN_1400020a8();
                  }
                  if (&local_c8 != local_168) {
                    uVar18 = *(uint *)(local_168 + 1);
                    puVar5 = *local_168;
                    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar18);
                    if (uVar18 == 0 && uStack_c0._4_4_ == 0) {
                      uStack_c0 = (ulonglong)uVar18;
                    }
                    else {
                      FUN_1446dd670(&local_c8,uVar18);
                      if (uVar18 != 0) {
                        memcpy(local_c8,puVar5,(longlong)(int)uVar18 * 2);
                      }
                    }
                  }
                }
                else if (local_f0 + (int)uStack_c0 == 1) goto LAB_144491c8b;
LAB_144491d5f:
                _Str = L"";
                if (local_110 != 0) {
                  _Str = local_118;
                }
                if (_Str != (wchar_t *)0x0) {
                  sVar8 = wcslen(_Str);
                  local_180 = 0xffffffff;
                  local_188 = 0;
                  iVar16 = FUN_1447ee042(&local_c8,_Str,sVar8 & 0xffffffff,1);
                  if (iVar16 != -1) {
                    *(undefined4 *)(lVar6 + 0x10) = 0;
                    if (*(int *)(lVar6 + 0x14) < 0) {
                      FUN_1446f8c06(plVar20,0);
                    }
                    if ((undefined2 *)*plVar20 != (undefined2 *)0x0) {
                      *(undefined2 *)*plVar20 = 0;
                    }
                  }
                }
                if (CONCAT44(local_78._4_4_,(undefined4)local_78) != 0) {
                  FUN_1400020a8();
                }
                uVar19 = local_130;
                uVar27 = local_140;
                iVar16 = local_154;
                if (local_c8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                uVar28 = local_158 & ~(uint)uVar27;
                puVar7 = *(uint **)(lVar26 + 0x118);
                if (*(uint **)(lVar26 + 0x118) == (uint *)0x0) {
                  puVar7 = puVar2;
                }
                uVar18 = *(uint *)(lVar26 + 0x120);
                iVar14 = (int)uVar19;
                lVar6 = (longlong)iVar14;
                uVar4 = puVar7[lVar6] & uVar28;
                if (uVar4 == 0) {
                  iVar12 = uVar18 + 0x1e;
                  if (-1 < (int)(uVar18 - 1)) {
                    iVar12 = uVar18 - 1;
                  }
                  iVar12 = iVar12 >> 5;
                  iVar16 = iVar16 + 0x20;
                  iVar9 = iVar12;
                  if (iVar12 < iVar14) {
                    iVar9 = iVar14;
                  }
                  if (iVar14 < iVar12) {
                    lVar15 = 0;
                    do {
                      uVar4 = puVar7[lVar6 + lVar15 + 1];
                      if (uVar4 != 0) {
                        uVar19 = (ulonglong)(iVar14 + (int)lVar15 + 1);
                        uVar28 = 0xffffffff;
                        goto LAB_144491e8a;
                      }
                      iVar16 = iVar16 + 0x20;
                      lVar15 = lVar15 + 1;
                    } while (iVar9 - lVar6 != lVar15);
                    uVar28 = 0xffffffff;
                    iVar14 = iVar9;
                  }
                  uVar19 = (ulonglong)(iVar14 + 1);
                  uVar27 = local_140;
                  uVar4 = uVar18;
                }
                else {
LAB_144491e8a:
                  uVar27 = (ulonglong)(-uVar4 & uVar4);
                  uVar29 = uVar27 * 2 + 1;
                  lVar6 = 0x3f;
                  if (uVar29 != 0) {
                    for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                    }
                  }
                  uVar4 = (iVar16 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                  if ((int)uVar18 <= (int)uVar4) {
                    uVar4 = uVar18;
                  }
                }
              } while (uVar4 != (uint)local_148);
            }
LAB_1444919c4:
            local_a8 = 0;
            local_a0 = 0;
            local_c8 = (undefined8 *)0x0;
            uStack_c0 = 0;
            local_9c = 0xffffffff00000080;
            local_94 = 0;
            local_88 = 0;
            local_80 = 0;
            uVar18 = *(int *)(lVar26 + 0x100) - *(int *)(lVar26 + 300);
            if (uVar18 != 0) {
              if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456acd4b((longlong)(int)uVar18);
              }
              FUN_140ede01e(&local_c8,uVar18);
              iVar16 = 1;
              if (3 < uVar18) {
                uVar18 = (uVar18 | 1) + 0xe;
                iVar16 = 0x1f;
                if (uVar18 != 0) {
                  for (; uVar18 >> iVar16 == 0; iVar16 = iVar16 + -1) {
                  }
                }
                iVar16 = 1 << ((byte)iVar16 & 0x1f);
              }
              if ((local_80 == 0) || (local_80 < iVar16)) {
                local_80 = iVar16;
                FUN_1406e2aa2();
              }
            }
            iVar16 = *(int *)(lVar26 + 0x120);
            if (iVar16 == 0) {
              uVar29 = 1;
              uVar19 = 0;
              iVar14 = 0;
              iVar12 = 0;
            }
            else {
              puVar7 = *(uint **)(lVar26 + 0x118);
              if (*(uint **)(lVar26 + 0x118) == (uint *)0x0) {
                puVar7 = puVar2;
              }
              uVar18 = *puVar7;
              if (uVar18 == 0) {
                iVar14 = iVar16 + 0x1e;
                if (-1 < iVar16 + -1) {
                  iVar14 = iVar16 + -1;
                }
                uVar19 = 0;
                uVar27 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar27 = uVar19;
                }
                iVar14 = 0;
                do {
                  if (uVar27 == uVar19) goto LAB_144491aed;
                  iVar14 = iVar14 + 0x20;
                  uVar18 = puVar7[uVar19 + 1];
                  uVar19 = uVar19 + 1;
                } while (uVar18 == 0);
              }
              else {
                uVar19 = 0;
                iVar14 = 0;
              }
              uVar29 = (ulonglong)(-uVar18 & uVar18);
              uVar27 = uVar29 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar12 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (iVar16 <= iVar12) {
                iVar12 = iVar16;
              }
            }
            if (iVar12 != iVar16) {
              uVar18 = 0xffffffff;
              iVar9 = iVar16;
              do {
                if (1 < *(int *)(*plVar1 + 0x10 + (longlong)iVar12 * 0x20)) {
                  local_78 = *plVar1 + (longlong)iVar12 * 0x20;
                  uStack_70 = local_78 + 8;
                  FUN_1406e263c(&local_c8,&local_128,&local_78,0);
                  iVar9 = *(int *)(lVar26 + 0x120);
                }
                uVar18 = uVar18 & ~(uint)uVar29;
                puVar7 = *(uint **)(lVar26 + 0x118);
                if (*(uint **)(lVar26 + 0x118) == (uint *)0x0) {
                  puVar7 = puVar2;
                }
                iVar12 = (int)uVar19;
                lVar6 = (longlong)iVar12;
                uVar4 = puVar7[lVar6] & uVar18;
                if (uVar4 == 0) {
                  iVar10 = iVar9 + 0x1e;
                  if (-1 < iVar9 + -1) {
                    iVar10 = iVar9 + -1;
                  }
                  iVar10 = iVar10 >> 5;
                  iVar14 = iVar14 + 0x20;
                  iVar11 = iVar10;
                  if (iVar10 < iVar12) {
                    iVar11 = iVar12;
                  }
                  if (iVar12 < iVar10) {
                    lVar15 = 0;
                    do {
                      uVar4 = puVar7[lVar6 + lVar15 + 1];
                      if (uVar4 != 0) {
                        uVar19 = (ulonglong)(iVar12 + (int)lVar15 + 1);
                        uVar18 = 0xffffffff;
                        goto LAB_144491fa1;
                      }
                      iVar14 = iVar14 + 0x20;
                      lVar15 = lVar15 + 1;
                    } while (iVar11 - lVar6 != lVar15);
                    uVar18 = 0xffffffff;
                    iVar12 = iVar11;
                  }
                  uVar19 = (ulonglong)(iVar12 + 1);
                  iVar12 = iVar9;
                }
                else {
LAB_144491fa1:
                  uVar29 = (ulonglong)(-uVar4 & uVar4);
                  uVar27 = uVar29 * 2 + 1;
                  lVar6 = 0x3f;
                  if (uVar27 != 0) {
                    for (; uVar27 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                    }
                  }
                  iVar12 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                  if (iVar9 <= iVar12) {
                    iVar12 = iVar9;
                  }
                }
              } while (iVar12 != iVar16);
            }
LAB_144491aed:
            FUN_14912c540(plVar1,&local_c8);
            local_80 = 0;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            FUN_140bb2a1a(&local_c8);
            lVar15 = local_150;
            param_2 = local_168;
            if (local_118 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar26 = lVar26 + 0x170;
          } while (lVar26 != local_138);
        }
        if (*(char *)(lVar15 + 0x48) == '\0') {
          FUN_1491d2b06(lVar15 + 0x30,3,local_170);
        }
        if (local_15c != -1) {
          ppuVar21 = (undefined8 **)
                     ((longlong)local_15c * 0x10 +
                     *(longlong *)(*(longlong *)(lVar15 + 0x28) + 0xa0));
          if (ppuVar21 != param_2) {
            iVar16 = *(int *)(param_2 + 1);
            puVar5 = *param_2;
            *(int *)(ppuVar21 + 1) = iVar16;
            if (iVar16 == 0 && *(int *)((longlong)ppuVar21 + 0xc) == 0) {
              *(undefined4 *)((longlong)ppuVar21 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(ppuVar21,iVar16);
              if (iVar16 != 0) {
                memcpy(*ppuVar21,puVar5,(longlong)iVar16 * 2);
              }
            }
          }
          if (*(char *)(lVar15 + 0x48) == '\0') {
            FUN_1491d2b06(lVar15 + 0x30,0xb,local_170);
          }
        }
        if (local_108 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_f8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1444911a4;
      }
    }
  }
  else {
    FUN_1491d2e16(lVar6);
    if (local_d0 != (int)uStack_e0) goto LAB_14449118e;
    if (1 < (int)uStack_e0) {
      lVar15 = 0;
      while( true ) {
        uVar24 = *(ushort *)((longlong)local_d8 + lVar15);
        uVar19 = (ulonglong)uVar24;
        uVar25 = *(ushort *)(local_e8 + lVar15);
        if (uVar24 != uVar25) break;
        if (uVar24 == 0) goto LAB_144491199;
LAB_1444910df:
        lVar15 = lVar15 + 2;
      }
      if ((uVar25 | uVar24) < 0x80) {
        uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        uVar27 = (ulonglong)uVar25;
        uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
        if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar27]) goto LAB_1444910df;
      }
      if (uVar24 != uVar25) goto LAB_14449110f;
    }
  }
LAB_144491199:
  FUN_1491d2e16(puVar5,param_2);
LAB_1444911a4:
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444920c0 FUN_1444920c0 body=3044 status=ok
// SIG undefined FUN_1444920c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1444920c0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_80;
  longlong local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28));
  if (lVar4 == 0) goto LAB_144492355;
  if ((((((*(int *)(lVar4 + 0x34) == 0) || (uVar1 = *(uint *)(lVar4 + 0x30), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       ((plVar10 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(lVar4 + 0x34))))) ||
      ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) || (lVar6 = *plVar10, lVar6 == 0)) {
    if (*(longlong *)(lVar4 + 0x38) == 0) goto LAB_144492355;
    lVar6 = FUN_140007850(lVar4 + 0x38);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    lVar5 = DAT_14c9647c8;
    if ((lVar6 == 0) || (cVar2 == '\0')) {
      if (lVar6 == 0) {
        *(undefined8 *)(lVar4 + 0x30) = 0;
        goto LAB_144492355;
      }
      uVar1 = *(uint *)(lVar6 + 0xc);
      *(uint *)(lVar4 + 0x30) = uVar1;
      if (DAT_14c9647dc <= (int)uVar1) goto LAB_14449238a;
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_144492326:
      iVar3 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar14 = iVar3 == 0;
        if (bVar14) {
          *(int *)(lVar5 + 0x10) = iVar12;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar3 = iVar12;
        }
      }
      *(int *)(lVar4 + 0x34) = iVar3;
    }
    else {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                      ((ulonglong)(uVar1 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
          *(uint *)(lVar4 + 0x30) = uVar1;
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_144492326;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar4 + 0x30) = uVar1;
LAB_14449238a:
        lVar5 = 0;
        goto LAB_144492326;
      }
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) goto LAB_144492355;
  }
  if (DAT_14c949118 == 0) {
    local_70 = FUN_140631fbe;
    lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar5;
    FUN_1446f470e(local_68,L"Class",1);
    local_a8 = &LAB_146891e90;
    local_b0 = (code *)&LAB_146273097;
    local_c0 = L"Engine";
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
    local_c8 = 0x20;
    local_d0 = 0x10000000;
    local_d8._0_4_ = 8;
    local_a0 = &local_70;
    FUN_14574b4b2(lVar5);
    DAT_14c949118 = lVar5;
    if (DAT_14c951858 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x400000000;
      local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
      local_d0 = 8;
      local_d8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar9 = DAT_14c951858;
    lVar5 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_60 = (code *)&DAT_1427db2a2;
      DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      local_80 = DAT_14c948f88;
      FUN_1446f470e(local_58,L"Struct",1);
      local_a0 = &local_60;
      local_a8 = &LAB_146891313;
      local_b0 = FUN_146272f63;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 8;
      local_d0 = 0x10000020;
      local_d8._0_4_ = 8;
      FUN_14574b4b2(local_80);
      DAT_14c948f88 = local_80;
      local_78 = DAT_14c927740;
      if (DAT_14c927740 == 0) {
        local_a0 = &local_50;
        local_50 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_146856450;
        local_b0 = FUN_1427b121c;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x0;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
        local_d0 = 8;
        local_d8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        local_80 = DAT_14c948f88;
      }
      DAT_14c948f88 = local_80;
      local_78 = DAT_14c927740;
      uVar8 = FUN_1400163b0();
      local_d8 = L"Struct";
      FUN_14574b446(uVar8,local_80,local_78,L"/Script/CoreUObject");
    }
    local_d8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar5,lVar9,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar5 = FUN_1401242c6(), lVar5 == 0)) ||
     ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30)))) goto LAB_144492355;
  if (((*(int *)(lVar4 + 0x34) == 0) ||
      ((uVar1 = *(uint *)(lVar4 + 0x30), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)))) ||
     ((plVar10 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
      plVar10 == (longlong *)0x0 ||
      ((((int)plVar10[2] != *(int *)(lVar4 + 0x34) || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))
       || (lVar6 = *plVar10, lVar6 == 0)))))) {
    if (*(longlong *)(lVar4 + 0x38) != 0) {
      lVar6 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      lVar5 = DAT_14c9647c8;
      if ((lVar6 == 0) || (cVar2 == '\0')) {
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar6 + 0xc);
          *(uint *)(lVar4 + 0x30) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_144492571;
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_144492433;
        }
        *(undefined8 *)(lVar4 + 0x30) = 0;
      }
      else {
        uVar1 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                        ((ulonglong)(uVar1 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
            *(uint *)(lVar4 + 0x30) = uVar1;
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_144492433:
            iVar3 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar3 = *(int *)(lVar5 + 0x10);
              bVar14 = iVar3 == 0;
              if (bVar14) {
                *(int *)(lVar5 + 0x10) = iVar12;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar3 = iVar12;
              }
            }
            *(int *)(lVar4 + 0x34) = iVar3;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar4 + 0x30) = uVar1;
LAB_144492571:
          lVar5 = 0;
          goto LAB_144492433;
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_14449222a;
      }
    }
LAB_144492466:
    lVar9 = 0;
  }
  else {
LAB_14449222a:
    if (DAT_14c949118 == 0) {
      local_70 = FUN_140631fbe;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar5;
      FUN_1446f470e(local_68,L"Class",1);
      local_a8 = &LAB_146891e90;
      local_b0 = (code *)&LAB_146273097;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 0x20;
      local_d0 = 0x10000000;
      local_d8._0_4_ = 8;
      local_a0 = &local_70;
      FUN_14574b4b2(lVar5);
      DAT_14c949118 = lVar5;
      if (DAT_14c951858 == 0) {
        local_a0 = &local_50;
        local_50 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_1468c5283;
        local_b0 = FUN_142809da0;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x400000000;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
        local_d0 = 8;
        local_d8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar9 = DAT_14c951858;
      lVar5 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_60 = (code *)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_80 = DAT_14c948f88;
        FUN_1446f470e(local_58,L"Struct",1);
        local_a0 = &local_60;
        local_a8 = &LAB_146891313;
        local_b0 = FUN_146272f63;
        local_c0 = L"Engine";
        local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
        local_c8 = 8;
        local_d0 = 0x10000020;
        local_d8._0_4_ = 8;
        FUN_14574b4b2(local_80);
        DAT_14c948f88 = local_80;
        local_78 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_a0 = &local_50;
          local_50 = FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a8 = &LAB_146856450;
          local_b0 = FUN_1427b121c;
          local_b8 = L"Engine";
          local_c0 = (wchar_t *)0x0;
          local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
          local_d0 = 8;
          local_d8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_80 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_80;
        local_78 = DAT_14c927740;
        uVar8 = FUN_1400163b0();
        local_d8 = L"Struct";
        FUN_14574b446(uVar8,local_80,local_78,L"/Script/CoreUObject");
      }
      local_d8 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar5,lVar9,L"/Script/CoreUObject");
    }
    if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
       ((lVar5 = FUN_1401242c6(), lVar5 == 0 || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)))))
    goto LAB_144492466;
    lVar9 = 0;
    if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar9 = lVar6;
    }
  }
  lVar6 = *(longlong *)(lVar9 + 0x70);
  if (lVar6 != 0) {
    lVar5 = *param_3;
    do {
      if (*(longlong *)(lVar6 + 0x20) == lVar5) {
        if ((*(byte *)(lVar6 + 0x38) & 0x10) == 0) {
          uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar13 = (uint)lVar5 & 0xffff;
          puVar7 = (undefined8 *)
                   FUN_1401e8636(lVar4 + 0xa8,
                                 ((uint)lVar5 << 0x10 | uVar13) + (int)((ulonglong)lVar5 >> 0x20) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar13 >> 4),param_3);
          if (puVar7 != param_4) {
            iVar3 = *(int *)(param_4 + 1);
            param_4 = (undefined8 *)*param_4;
            *(int *)(puVar7 + 1) = iVar3;
            if (iVar3 == 0 && *(int *)((longlong)puVar7 + 0xc) == 0) {
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar7,iVar3);
              if (iVar3 != 0) {
                memcpy((void *)*puVar7,param_4,(longlong)iVar3 * 2);
              }
            }
          }
          uVar11 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
          if (*(char *)(param_1 + 0x48) == '\0') {
            FUN_1491d2b06(param_1 + 0x30,5,lVar4);
          }
          goto LAB_144492357;
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x48);
    } while (lVar6 != 0);
  }
LAB_144492355:
  uVar11 = 0;
LAB_144492357:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 144492ca6 FUN_144492ca6 body=671 status=ok
// SIG undefined FUN_144492ca6(void)

undefined4 FUN_144492ca6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  int local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28));
  if (lVar4 == 0) {
    uVar2 = 0;
    goto LAB_144492cdb;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_58 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_50 = 0;
  uVar2 = FUN_1491bb4d6(param_1,param_3);
  if ((char)uVar2 != '\0') {
    FUN_1491d2dc4(lVar4,&local_68);
    local_78 = (wchar_t *)0x0;
    local_70 = *(int *)(param_3 + 1);
    lVar6 = (longlong)local_70;
    pvVar1 = (void *)*param_3;
    if (lVar6 == 0) {
      local_6c = 0;
      iVar3 = 0;
      pwVar7 = local_78;
      if (local_60 != 0) goto LAB_144492e1b;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar1,lVar6 * 2);
      pwVar7 = local_78;
      iVar3 = local_70;
      if (local_60 == local_70) {
        if ((local_70 < 2) || (iVar3 = wcscmp(local_68,local_78), iVar3 == 0)) goto LAB_144492e27;
      }
      else {
LAB_144492e1b:
        pwVar7 = local_78;
        if (local_60 + iVar3 == 1) goto LAB_144492e27;
      }
      puVar5 = (undefined8 *)(lVar4 + 8);
      if (puVar5 != param_3) {
        iVar3 = *(int *)(param_3 + 1);
        pvVar1 = (void *)*param_3;
        *(int *)(lVar4 + 0x10) = iVar3;
        if (iVar3 == 0 && *(int *)(lVar4 + 0x14) == 0) {
          *(undefined4 *)(lVar4 + 0x14) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar5,pvVar1,(longlong)iVar3 * 2);
          }
        }
      }
      *(undefined1 *)(lVar4 + 0x18) = 0;
      if (*(char *)(param_1 + 0x48) == '\0') {
        FUN_1491d2b06(param_1 + 0x30,6,lVar4);
      }
      FUN_1491b9a38(param_1);
      pwVar7 = local_78;
    }
LAB_144492e27:
    if (pwVar7 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar7);
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
LAB_144492cdb:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 144492f46 FUN_144492f46 body=3744 status=ok
// SIG undefined FUN_144492f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144492f46(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 *puVar4;
  void *pvVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  code *pcVar19;
  undefined8 *puVar20;
  byte bVar21;
  int iVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined4 local_160;
  undefined8 local_158;
  wchar_t *local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  longlong local_110;
  undefined8 *local_108;
  longlong local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  code *local_e8;
  ulonglong uStack_e0;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined **local_88;
  longlong local_80;
  undefined1 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar10 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28));
  if (((((lVar10 != 0) && (lVar12 = *param_3, lVar12 != 0)) &&
       (lVar11 = FUN_1401242c6(), lVar11 != 0)) &&
      ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar12 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
        lVar11 + 0x30)))) && (lVar12 = *param_3, lVar12 != 0)) {
    lVar11 = FUN_1401242c6();
    if (((lVar11 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = (longlong *)*param_3;
    }
    lVar12 = plVar16[0x22];
    if (lVar12 == 0) {
      (**(code **)(*plVar16 + 1000))(plVar16);
      lVar12 = plVar16[0x22];
    }
    lVar12 = FUN_140124256(lVar12);
    if (1 < *(int *)(lVar12 + 8)) {
      puVar1 = (uint *)(lVar10 + 0x30);
      lVar12 = lVar10;
      local_110 = lVar10;
      if (((((*(int *)(lVar10 + 0x34) == 0) || (uVar9 = *puVar1, (int)uVar9 < 0)) ||
           (DAT_14c9647dc <= (int)uVar9)) ||
          ((plVar16 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
           plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(lVar10 + 0x34))))) ||
         (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 || (lVar11 = *plVar16, lVar11 == 0)))) {
        if (*(longlong *)(lVar10 + 0x38) != 0) {
          lVar11 = FUN_140007850(lVar10 + 0x38);
          cVar7 = (*(code *)PTR_FUN_14c758760)();
          lVar13 = DAT_14c9647c8;
          if ((lVar11 == 0) || (cVar7 == '\0')) {
            if (lVar11 != 0) {
              uVar9 = *(uint *)(lVar11 + 0xc);
              *puVar1 = uVar9;
              if (DAT_14c9647dc <= (int)uVar9) goto LAB_1444938bd;
              lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              goto LAB_1444931c3;
            }
            *(undefined8 *)(lVar10 + 0x30) = 0;
          }
          else {
            uVar9 = *(uint *)(lVar11 + 0xc);
            if ((int)uVar9 < DAT_14c9647dc) {
              if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8) +
                            ((ulonglong)(uVar9 & 0xffff) * 3 + 1) * 8) & 0x8400000) == 0) {
                *puVar1 = uVar9;
                lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                         *(longlong *)(lVar13 + (ulonglong)(uVar9 >> 0x10) * 8);
LAB_1444931c3:
                iVar8 = *(int *)(lVar13 + 0x10);
                if (*(int *)(lVar13 + 0x10) == 0) {
                  LOCK();
                  iVar8 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar22 = DAT_14c964868 + 1;
                  bVar24 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar8;
                  if (bVar24) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar22);
                  }
                  LOCK();
                  iVar8 = *(int *)(lVar13 + 0x10);
                  bVar24 = iVar8 == 0;
                  if (bVar24) {
                    *(int *)(lVar13 + 0x10) = iVar22;
                    iVar8 = 0;
                  }
                  UNLOCK();
                  lVar12 = local_110;
                  if (bVar24) {
                    iVar8 = iVar22;
                  }
                }
                *(int *)(lVar12 + 0x34) = iVar8;
              }
            }
            else if ((_DAT_00000008 & 0x8400000) == 0) {
              *puVar1 = uVar9;
LAB_1444938bd:
              lVar13 = 0;
              goto LAB_1444931c3;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_1444930b2;
          }
        }
LAB_1444931f5:
        lVar17 = 0;
      }
      else {
LAB_1444930b2:
        if (DAT_14c949118 == 0) {
          local_e8 = FUN_140631fbe;
          lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar12;
          FUN_1446f470e(&local_d8,L"Class",1);
          local_138 = &LAB_146891e90;
          local_140 = (code *)&LAB_146273097;
          local_150 = L"Engine";
          local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
          local_158 = 0x20;
          local_160 = 0x10000000;
          local_168._0_4_ = 8;
          local_130 = &local_e8;
          FUN_14574b4b2(lVar12);
          DAT_14c949118 = lVar12;
          if (DAT_14c951858 == 0) {
            local_130 = (code **)&local_a8;
            local_a8 = FUN_1449e2820;
            local_120 = FUN_14081d0ea;
            local_128 = FUN_14081d0ea;
            local_138 = &LAB_1468c5283;
            local_140 = FUN_142809da0;
            local_148 = L"Engine";
            local_150 = (wchar_t *)0x400000000;
            local_158 = CONCAT44(local_158._4_4_,0x10000000);
            local_160 = 8;
            local_168._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar13 = DAT_14c951858;
          lVar12 = DAT_14c949118;
          if (DAT_14c948f88 == 0) {
            local_c8 = (code *)&DAT_1427db2a2;
            DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            local_100 = DAT_14c948f88;
            FUN_1446f470e(&local_b8,L"Struct",1);
            local_130 = &local_c8;
            local_138 = &LAB_146891313;
            local_140 = FUN_146272f63;
            local_150 = L"Engine";
            local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
            local_158 = 8;
            local_160 = 0x10000020;
            local_168._0_4_ = 8;
            FUN_14574b4b2(local_100);
            DAT_14c948f88 = local_100;
            local_108 = DAT_14c927740;
            if (DAT_14c927740 == (undefined8 *)0x0) {
              local_130 = (code **)&local_a8;
              local_a8 = FUN_1449e2820;
              local_120 = FUN_14081d0ea;
              local_128 = FUN_14081d0ea;
              local_138 = &LAB_146856450;
              local_140 = FUN_1427b121c;
              local_148 = L"Engine";
              local_150 = (wchar_t *)0x0;
              local_158 = CONCAT44(local_158._4_4_,0x10000021);
              local_160 = 8;
              local_168._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              local_100 = DAT_14c948f88;
            }
            DAT_14c948f88 = local_100;
            local_108 = DAT_14c927740;
            uVar15 = FUN_1400163b0();
            local_168 = L"Struct";
            FUN_14574b446(uVar15,local_100,local_108,L"/Script/CoreUObject");
          }
          local_168 = L"Class";
          FUN_14574b446(DAT_14c948f88,lVar12,lVar13,L"/Script/CoreUObject");
        }
        if ((((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
            (lVar13 = FUN_1401242c6(), lVar13 == 0)) ||
           (*(int *)(lVar11 + 0x38) < *(int *)(lVar13 + 0x38))) goto LAB_1444931f5;
        lVar17 = 0;
        if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
            lVar13 + 0x30) {
          lVar17 = lVar11;
        }
      }
      lVar11 = *param_3;
      if (((lVar11 == 0) || (lVar13 = FUN_1401242c6(), lVar13 == 0)) ||
         ((*(int *)(lVar11 + 0x38) < *(int *)(lVar13 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
           lVar13 + 0x30)))) {
        lVar11 = 0;
      }
      else {
        lVar11 = *param_3;
      }
      uVar18 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
      if (lVar17 == lVar11) goto LAB_144492fb8;
      lVar12 = *param_3;
      if (((lVar12 == 0) || (lVar11 = FUN_1401242c6(), lVar11 == 0)) ||
         ((*(int *)(lVar12 + 0x38) < *(int *)(lVar11 + 0x38) ||
          ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
            lVar11 + 0x30 || (lVar12 = *param_3, lVar12 == 0)))))) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined4 *)(local_110 + 0x50) = 0;
        if (*(int *)(local_110 + 0x54) < 0) {
          FUN_1446f8c06((undefined8 *)(lVar10 + 0x48),0);
        }
        puVar4 = *(undefined2 **)(lVar10 + 0x48);
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
      }
      else {
        FUN_1400bbfc4(&local_a8,lVar12);
        *(undefined4 *)(local_110 + 0x38) = (undefined4)local_a8;
        *(undefined4 *)(local_110 + 0x3c) = local_a8._4_4_;
        *(int *)(local_110 + 0x40) = iStack_a0;
        *(undefined4 *)(local_110 + 0x44) = uStack_9c;
        if ((undefined8 *)(lVar10 + 0x38) == &local_a8) {
          if (local_98 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(local_110 + 0x48) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(local_110 + 0x48) = local_98;
          local_98 = 0;
          *(undefined4 *)(local_110 + 0x50) = local_90;
          *(undefined4 *)(local_110 + 0x54) = local_8c;
        }
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        iVar8 = DAT_14c9647dc;
        uVar9 = *(uint *)(lVar12 + 0xc);
        if (cVar7 != '\0') {
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
            *(undefined8 *)(local_110 + 0x30) = 0;
            goto LAB_1444932a7;
          }
        }
        *puVar1 = uVar9;
        if ((int)uVar9 < iVar8) {
          lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar8 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar22 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar24) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar22);
          }
          LOCK();
          iVar8 = *(int *)(lVar10 + 0x10);
          bVar24 = iVar8 == 0;
          if (bVar24) {
            *(int *)(lVar10 + 0x10) = iVar22;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar24) {
            iVar8 = iVar22;
          }
        }
        *(int *)(local_110 + 0x34) = iVar8;
      }
LAB_1444932a7:
      lVar10 = *(longlong *)(param_1 + 0x28);
      lVar12 = *param_3;
      if ((((lVar12 == 0) || (lVar11 = FUN_1401242c6(), lVar11 == 0)) ||
          (*(int *)(lVar12 + 0x38) < *(int *)(lVar11 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)) {
        param_3 = (longlong *)0x0;
      }
      else {
        param_3 = (longlong *)*param_3;
      }
      lVar12 = param_3[0x22];
      if (lVar12 == 0) {
        (**(code **)(*param_3 + 1000))(param_3);
        lVar12 = param_3[0x22];
      }
      local_100 = FUN_140124256(lVar12);
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      lVar12 = (longlong)*(int *)(lVar10 + 0x38);
      if (lVar12 != 0) {
        puVar23 = *(undefined8 **)(lVar10 + 0x30);
        puVar20 = puVar23 + lVar12 * 3;
        local_108 = puVar20;
LAB_144493345:
        local_d8 = (wchar_t *)0x0;
        uStack_d0 = 0;
        local_e8 = (code *)0x0;
        uStack_e0 = 0;
        FUN_1400021e4((longlong)puVar23 + 4,&local_a8);
        FUN_1491d31c2(&local_a8,&local_d8,&local_e8,1);
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if ((int)uStack_d0 != *(int *)(param_2 + 1)) {
          if (*(int *)(param_2 + 1) + (int)uStack_d0 != 1) goto LAB_1444936a9;
LAB_1444933c6:
          pcVar19 = local_e8;
          local_f8 = (void *)0x0;
          lVar10 = (longlong)(int)uStack_e0;
          local_f0 = (int)uStack_e0;
          if (lVar10 == 0) {
            local_ec = 0;
            local_b0 = 0;
LAB_144493463:
            local_b8 = (void *)0x0;
            local_ac = 0;
            iStack_a0 = 0;
LAB_14449347f:
            local_a8 = (code *)0x0;
            uStack_9c = 0;
          }
          else {
            FUN_1446dd670(&local_f8,uStack_e0 & 0xffffffff,0);
            memcpy(local_f8,pcVar19,lVar10 * 2);
            pvVar5 = local_f8;
            lVar10 = (longlong)local_f0;
            local_b8 = (void *)0x0;
            local_b0 = local_f0;
            if (lVar10 == 0) goto LAB_144493463;
            FUN_1446dd670(&local_b8,local_f0,0);
            memcpy(local_b8,pvVar5,lVar10 * 2);
            pvVar5 = local_b8;
            iStack_a0 = local_b0;
            lVar10 = (longlong)local_b0;
            local_a8 = (code *)0x0;
            if (lVar10 == 0) goto LAB_14449347f;
            FUN_1446dd670(&local_a8,local_b0,0);
            memcpy(local_a8,pvVar5,lVar10 * 2);
          }
          plVar16 = *(longlong **)(local_100 + 0x70);
          if ((longlong)*(int *)(local_100 + 0x78) != 0) {
            plVar14 = plVar16 + (longlong)*(int *)(local_100 + 0x78) * 7;
LAB_1444934b7:
            if ((int)plVar16[1] == iStack_a0) {
              bVar21 = 1;
              puVar20 = local_108;
              if (1 < iStack_a0) {
                lVar10 = 0;
                do {
                  uVar2 = *(ushort *)(*plVar16 + lVar10);
                  uVar3 = *(ushort *)(local_a8 + lVar10);
                  if (uVar2 == uVar3) {
                    if (uVar2 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar3 | uVar2)) {
                      iVar8 = (uint)uVar2 - (uint)uVar3;
                      goto LAB_144493511;
                    }
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                    goto code_r0x00014449350e;
                  }
                  lVar10 = lVar10 + 2;
                } while( true );
              }
            }
            else {
              if ((int)plVar16[1] + iStack_a0 != 1) goto LAB_14449352d;
              bVar21 = 1;
            }
            goto LAB_144493548;
          }
          bVar21 = 0;
          goto LAB_144493548;
        }
        if (((int)uStack_d0 < 2) || (iVar8 = wcscmp(local_d8,(wchar_t *)*param_2), iVar8 == 0))
        goto LAB_1444933c6;
        goto LAB_1444936a9;
      }
      goto LAB_144493861;
    }
  }
  uVar18 = 0;
  goto LAB_144492fb8;
code_r0x00014449350e:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_144493511:
  if (iVar8 == 0) goto LAB_144493548;
LAB_14449352d:
  plVar16 = plVar16 + 7;
  if (plVar16 == plVar14) goto LAB_14449376b;
  goto LAB_1444934b7;
LAB_14449376b:
  bVar21 = 0;
  plVar16 = plVar14;
LAB_144493548:
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = uStack_c0;
  if ((bool)(bVar21 & plVar16 != (longlong *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
      puVar20 = local_108;
    }
    local_a8 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    iStack_a0 = 0;
    cVar7 = FUN_1491b652e(param_1,puVar23,(longlong)puVar23 + 0xc,&local_a8);
    uVar6 = uStack_c0;
    if (cVar7 == '\0') {
      lVar10 = (longlong)(int)uStack_c0;
      uVar9 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
      if (uStack_c0._4_4_ < uVar9) {
        FUN_149192788(&local_c8,uVar6 & 0xffffffff);
      }
      *(undefined4 *)(local_c8 + lVar10 * 0xc + 8) = *(undefined4 *)(puVar23 + 1);
      *(undefined8 *)(local_c8 + lVar10 * 0xc) = *puVar23;
    }
    if (local_a8 != (code *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  else {
    lVar10 = (longlong)(int)uStack_c0;
    uVar9 = (int)uStack_c0 + 1;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
    if (uStack_c0._4_4_ < uVar9) {
      FUN_149192788(&local_c8,uVar6 & 0xffffffff);
    }
    *(undefined4 *)(local_c8 + lVar10 * 0xc + 8) = *(undefined4 *)(puVar23 + 1);
    *(undefined8 *)(local_c8 + lVar10 * 0xc) = *puVar23;
  }
LAB_1444936a9:
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  puVar23 = puVar23 + 3;
  if (puVar23 == puVar20) goto LAB_144493814;
  goto LAB_144493345;
LAB_144493814:
  if ((longlong)(int)uStack_c0 != 0) {
    lVar10 = (longlong)(int)uStack_c0 * 0xc;
    pcVar19 = local_c8;
    do {
      FUN_144493ec8(param_1,pcVar19,0,0);
      pcVar19 = pcVar19 + 0xc;
      lVar10 = lVar10 + -0xc;
    } while (lVar10 != 0);
  }
  if (local_c8 != (code *)0x0) {
    FUN_1400020a8(local_c8);
  }
LAB_144493861:
  local_98 = 0;
  local_88 = &PTR_LAB_14bb76dc0;
  local_78 = 1;
  local_a8 = FUN_14449a936;
  local_80 = param_1;
  FUN_14606ecf0(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_1491d2b06(param_1 + 0x30,10,local_110);
  }
LAB_144492fb8:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 144493de8 FUN_144493de8 body=224 status=ok
// SIG undefined FUN_144493de8(void)

ulonglong FUN_144493de8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar3 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28));
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x100) != *(int *)(lVar3 + 300))) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = lVar3 + 0x130;
    if (*(longlong *)(lVar3 + 0x138) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x138);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar3 + 0x140) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0xf8) + (longlong)iVar7 * 0x20) == lVar1) {
          FUN_1467db386();
          uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
          if (*(char *)(param_1 + 0x48) == '\0') {
            FUN_1491d2b06(param_1 + 0x30,5,lVar3);
          }
          goto LAB_144493e9e;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + *(longlong *)(lVar3 + 0xf8) + 0x18);
      } while (iVar7 != -1);
    }
  }
  uVar6 = 0;
LAB_144493e9e:
  return uVar6 & 0xffffffff;
}



// FUNCTION 144493ec8 FUN_144493ec8 body=3620 status=ok
// SIG undefined FUN_144493ec8(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144493ec8(longlong param_1,char *******param_2,char param_3,longlong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  char *******pppppppcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort uVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  char *******pppppppcVar22;
  ushort uVar23;
  bool bVar24;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  undefined4 local_150;
  undefined8 local_148;
  wchar_t *local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  char *******local_120;
  code *local_118;
  code *local_110;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  char ******local_e8 [2];
  longlong local_d8 [2];
  char ******local_c8;
  undefined8 uStack_c0;
  char *******local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  ulonglong uStack_90;
  char *local_88;
  undefined8 uStack_80;
  char *******local_78;
  char *******pppppppcStack_70;
  char ******local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  FUN_1400021e4((char *)((longlong)param_2 + 4),&local_78);
  cVar4 = FUN_1491d31c2(&local_78,&local_88,&local_98,1);
  if (local_78 != (char *******)0x0) {
    FUN_1400020a8();
  }
  if ((cVar4 != '\0') &&
     (lVar6 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),&local_88), lVar6 != 0)) {
    if (((*(int *)(lVar6 + 0x34) == 0) ||
        (((uVar5 = *(uint *)(lVar6 + 0x30), (int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (plVar11 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
         plVar11 == (longlong *)0x0)))) ||
       ((((int)plVar11[2] != *(int *)(lVar6 + 0x34) || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))
        || (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)))) {
      if (*(longlong *)(lVar6 + 0x38) != 0) {
        plVar11 = (longlong *)FUN_140007850(lVar6 + 0x38);
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        lVar7 = DAT_14c9647c8;
        if ((plVar11 == (longlong *)0x0) || (cVar4 == '\0')) {
          if (plVar11 != (longlong *)0x0) {
            uVar5 = *(uint *)((longlong)plVar11 + 0xc);
            *(uint *)(lVar6 + 0x30) = uVar5;
            if (DAT_14c9647dc <= (int)uVar5) goto LAB_144494554;
            lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            goto LAB_1444940cb;
          }
          *(undefined8 *)(lVar6 + 0x30) = 0;
        }
        else {
          uVar5 = *(uint *)((longlong)plVar11 + 0xc);
          if ((int)uVar5 < DAT_14c9647dc) {
            if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8) + 8 +
                          (ulonglong)(uVar5 & 0xffff) * 0x18) & 0x8400000) == 0) {
              *(uint *)(lVar6 + 0x30) = uVar5;
              lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 0x10) * 8);
LAB_1444940cb:
              iVar19 = *(int *)(lVar7 + 0x10);
              if (*(int *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar19 = DAT_14c964868 + 1;
                UNLOCK();
                iVar14 = DAT_14c964868 + 1;
                bVar24 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar19;
                local_100 = param_4;
                if (bVar24) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar14);
                }
                LOCK();
                iVar19 = *(int *)(lVar7 + 0x10);
                bVar24 = iVar19 == 0;
                if (bVar24) {
                  *(int *)(lVar7 + 0x10) = iVar14;
                  iVar19 = 0;
                }
                UNLOCK();
                param_4 = local_100;
                if (bVar24) {
                  iVar19 = iVar14;
                }
              }
              *(int *)(lVar6 + 0x34) = iVar19;
            }
          }
          else if ((_DAT_00000008 & 0x8400000) == 0) {
            *(uint *)(lVar6 + 0x30) = uVar5;
LAB_144494554:
            lVar7 = 0;
            goto LAB_1444940cb;
          }
          if ((*(uint *)(plVar11 + 1) >> 0x1e & 1) == 0) goto LAB_144493fc9;
        }
      }
LAB_1444940fc:
      plVar20 = (longlong *)0x0;
    }
    else {
LAB_144493fc9:
      if (DAT_14c949118 == 0) {
        local_68 = (char ******)FUN_140631fbe;
        local_100 = param_4;
        lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar7;
        FUN_1446f470e(local_d8,L"Class",1);
        local_128 = &LAB_146891e90;
        local_130 = (code *)&LAB_146273097;
        local_140 = L"Engine";
        local_138 = (wchar_t *)CONCAT44(local_138._4_4_,199);
        local_148 = 0x20;
        local_150 = 0x10000000;
        local_158._0_4_ = 8;
        local_120 = &local_68;
        FUN_14574b4b2(lVar7);
        DAT_14c949118 = lVar7;
        if (DAT_14c951858 == 0) {
          local_78 = (char *******)FUN_1449e2820;
          local_110 = FUN_14081d0ea;
          local_118 = FUN_14081d0ea;
          local_128 = &LAB_1468c5283;
          local_130 = FUN_142809da0;
          local_138 = L"Engine";
          local_140 = (wchar_t *)0x400000000;
          local_148 = CONCAT44(local_148._4_4_,0x10000000);
          local_150 = 8;
          local_158._0_4_ = 0x50;
          local_120 = (char *******)&local_78;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar21 = DAT_14c951858;
        lVar7 = DAT_14c949118;
        if (DAT_14c948f88 == 0) {
          local_c8 = (char ******)&DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_f8 = DAT_14c948f88;
          FUN_1446f470e(&local_b8,L"Struct",1);
          local_120 = &local_c8;
          local_128 = &LAB_146891313;
          local_130 = FUN_146272f63;
          local_140 = L"Engine";
          local_138 = (wchar_t *)CONCAT44(local_138._4_4_,199);
          local_148 = 8;
          local_150 = 0x10000020;
          local_158._0_4_ = 8;
          FUN_14574b4b2(local_f8);
          DAT_14c948f88 = local_f8;
          local_f0 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_78 = (char *******)FUN_1449e2820;
            local_110 = FUN_14081d0ea;
            local_118 = FUN_14081d0ea;
            local_128 = &LAB_146856450;
            local_130 = FUN_1427b121c;
            local_138 = L"Engine";
            local_140 = (wchar_t *)0x0;
            local_148 = CONCAT44(local_148._4_4_,0x10000021);
            local_150 = 8;
            local_158._0_4_ = 0x28;
            local_120 = (char *******)&local_78;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_f8 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_f8;
          local_f0 = DAT_14c927740;
          uVar9 = FUN_1400163b0();
          local_158 = L"Struct";
          FUN_14574b446(uVar9,local_f8,local_f0,L"/Script/CoreUObject");
        }
        local_158 = L"Class";
        FUN_14574b446(DAT_14c948f88,lVar7,lVar21,L"/Script/CoreUObject");
        param_4 = local_100;
      }
      if ((((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
            DAT_14c949118 + 0x30)) || (lVar7 = FUN_1401242c6(), lVar7 == 0)) ||
         ((int)plVar11[7] < *(int *)(lVar7 + 0x38))) goto LAB_1444940fc;
      plVar20 = (longlong *)0x0;
      if (*(longlong *)(plVar11[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30) {
        plVar20 = plVar11;
      }
    }
    if ((plVar20[0x22] != 0) || ((**(code **)(*plVar20 + 1000))(plVar20), plVar20[0x22] != 0)) {
      local_100 = param_4;
      lVar7 = FUN_140124256();
      pvVar3 = local_98;
      local_a8 = (void *)0x0;
      lVar21 = (longlong)(int)uStack_90;
      local_a0 = (int)uStack_90;
      if (lVar21 == 0) {
        local_9c = 0;
        pppppppcStack_70 = (char *******)0x0;
LAB_1444941ef:
        local_78 = (char *******)0x0;
        pppppppcStack_70 = (char *******)((ulonglong)pppppppcStack_70 & 0xffffffff);
      }
      else {
        FUN_1446dd670(&local_a8,uStack_90 & 0xffffffff,0);
        memcpy(local_a8,pvVar3,lVar21 * 2);
        pvVar3 = local_a8;
        lVar21 = (longlong)local_a0;
        local_78 = (char *******)0x0;
        pppppppcStack_70 = (char *******)CONCAT44(pppppppcStack_70._4_4_,local_a0);
        if (lVar21 == 0) goto LAB_1444941ef;
        FUN_1446dd670(&local_78,local_a0,0);
        memcpy(local_78,pvVar3,lVar21 * 2);
      }
      plVar11 = *(longlong **)(lVar7 + 0x70);
      bVar2 = 1;
      plVar20 = plVar11;
      if ((longlong)*(int *)(lVar7 + 0x78) != 0) {
        plVar20 = plVar11 + (longlong)*(int *)(lVar7 + 0x78) * 7;
LAB_144494224:
        if ((int)plVar11[1] != (int)pppppppcStack_70) {
          if ((int)plVar11[1] + (int)pppppppcStack_70 == 1) goto LAB_144494293;
          goto LAB_144494285;
        }
        if (1 < (int)pppppppcStack_70) {
          lVar7 = 0;
          do {
            uVar18 = *(ushort *)(*plVar11 + lVar7);
            uVar16 = (ulonglong)uVar18;
            uVar23 = *(ushort *)((longlong)local_78 + lVar7);
            if (uVar18 == uVar23) {
              if (uVar18 == 0) break;
            }
            else {
              if (0x7f < (uVar23 | uVar18)) goto LAB_144494272;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              uVar17 = (ulonglong)uVar23;
              uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar16] != (&DAT_149e05da0)[uVar17]) goto LAB_144494272;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        goto LAB_144494293;
      }
LAB_144494295:
      if (local_78 != (char *******)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (!(bool)(bVar2 | plVar20 == (longlong *)0x0)) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_141225fe0();
        }
        lVar7 = *(longlong *)(param_1 + 0x28);
        iVar19 = *(int *)(lVar7 + 0x38);
        if ((longlong)iVar19 != 0) {
          uVar16 = 0;
          do {
            if ((*(longlong *)((longlong)param_2 + 4) ==
                 *(longlong *)(*(longlong *)(lVar7 + 0x30) + 4 + uVar16)) &&
               (*(char *)param_2 == *(char *)(*(longlong *)(lVar7 + 0x30) + uVar16))) {
              iVar14 = (int)(uVar16 >> 3) * -0x55555555;
              pppppppcVar15 = (char *******)0x0;
              if ((iVar14 < 0) || (iVar19 <= iVar14)) goto LAB_14449430b;
              if (local_100 != 0) {
                FUN_1491b9f52(lVar7 + 0x30,&local_b8,param_2);
                local_78 = param_2;
                pppppppcStack_70 = (char *******)&local_b8;
                FUN_1491d27fc(local_100,&local_c8);
                lVar7 = *(longlong *)(param_1 + 0x28);
              }
              FUN_1491ba12e(lVar7 + 0x30,param_2);
              if ((char)plVar20[4] == '\x01') {
                cVar4 = *(char *)((longlong)plVar20 + 0x21);
              }
              else {
                if ((char)plVar20[4] == '\0') {
                  local_b8 = (char *******)0x0;
                  uStack_b0 = 0;
                  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x38);
                  if (lVar7 == 0) goto LAB_144494880;
                  puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x30);
                  puVar1 = puVar13 + lVar7 * 3;
                  goto LAB_144494417;
                }
                cVar4 = '\0';
              }
              if (param_3 != '\x01' || cVar4 != '\0') goto LAB_144494880;
              local_b8 = (char *******)0x0;
              uStack_b0 = 0;
              lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x38);
              if (lVar7 == 0) goto LAB_144494880;
              puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x30);
              puVar1 = puVar13 + lVar7 * 3;
              goto LAB_1444945ae;
            }
            uVar16 = uVar16 + 0x18;
          } while ((longlong)iVar19 * 0x18 != uVar16);
        }
      }
    }
  }
  pppppppcVar15 = (char *******)0x0;
  goto LAB_14449430b;
LAB_144494272:
  if (uVar18 == uVar23) {
LAB_144494293:
    bVar2 = 0;
    plVar20 = plVar11;
    goto LAB_144494295;
  }
LAB_144494285:
  plVar11 = plVar11 + 7;
  if (plVar11 == plVar20) goto LAB_144494295;
  goto LAB_144494224;
LAB_144494417:
  do {
    FUN_1400021e4((longlong)puVar13 + 4,&local_78);
    puVar12 = (undefined1 *)(ulonglong)((int)uStack_80 - 1);
    if ((int)uStack_80 == 0) {
      puVar12 = (undefined1 *)0x0;
    }
    if ((int)puVar12 < 1) {
      bVar24 = false;
    }
    else {
      pcVar8 = "";
      if ((int)uStack_80 != 0) {
        pcVar8 = local_88;
      }
      pppppppcVar15 = local_78;
      if ((int)pppppppcStack_70 == 0) {
        pppppppcVar15 = (char *******)&DAT_149dfb77a;
      }
      lVar7 = 0;
LAB_14449446e:
      uVar18 = *(ushort *)((longlong)pppppppcVar15 + lVar7);
      uVar23 = *(ushort *)(pcVar8 + lVar7);
      if (uVar18 == uVar23) {
        iVar19 = 0;
        if ((uVar18 == 0) || (puVar12 == &DAT_00000001)) goto LAB_1444944d0;
LAB_14449448b:
        puVar12 = puVar12 + -1;
        lVar7 = lVar7 + 2;
        goto LAB_14449446e;
      }
      if ((uVar23 | uVar18) < 0x80) {
        if ((&DAT_149e05da0)[uVar18] != (&DAT_149e05da0)[(uint)uVar23]) {
          iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar18] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar23]
          ;
          goto LAB_1444944d0;
        }
        if (puVar12 == &DAT_00000001) {
          iVar19 = 0;
          goto LAB_1444944d0;
        }
        goto LAB_14449448b;
      }
      iVar19 = (uint)uVar18 - (uint)uVar23;
LAB_1444944d0:
      bVar24 = iVar19 == 0;
    }
    if (local_78 != (char *******)0x0) {
      FUN_1400020a8();
    }
    uVar16 = uStack_b0;
    if (bVar24) {
      lVar7 = (longlong)(int)uStack_b0;
      uVar5 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
      if (uStack_b0._4_4_ < uVar5) {
        FUN_149192788(&local_b8,uVar16 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_b8 + lVar7 * 0xc + 8) = *(undefined4 *)(puVar13 + 1);
      *(undefined8 *)((longlong)local_b8 + lVar7 * 0xc) = *puVar13;
    }
    lVar7 = local_100;
    puVar13 = puVar13 + 3;
  } while (puVar13 != puVar1);
  pppppppcVar15 = (char *******)&DAT_149dfb77a;
  if ((longlong)(int)uStack_b0 != 0) {
    lVar21 = (longlong)(int)uStack_b0 * 0xc;
    pppppppcVar22 = local_b8;
    do {
      lVar10 = *(longlong *)(param_1 + 0x28);
      if (lVar7 != 0) {
        FUN_1491b9f52(lVar10 + 0x30,&local_c8,pppppppcVar22);
        local_78 = pppppppcVar22;
        pppppppcStack_70 = &local_c8;
        FUN_1491d27fc(lVar7,local_d8,&local_78);
        lVar10 = *(longlong *)(param_1 + 0x28);
      }
      FUN_1491ba12e(lVar10 + 0x30,pppppppcVar22);
      pppppppcVar22 = (char *******)((longlong)pppppppcVar22 + 0xc);
      lVar21 = lVar21 + -0xc;
      pppppppcVar15 = &local_c8;
    } while (lVar21 != 0);
  }
  goto joined_r0x0001444947d6;
LAB_1444945ae:
  do {
    local_78 = (char *******)0x0;
    pppppppcStack_70 = (char *******)0x0;
    local_c8 = (char ******)0x0;
    uStack_c0 = 0;
    FUN_1400021e4((longlong)puVar13 + 4,local_d8);
    FUN_1491d31c2(local_d8,&local_78,&local_c8,1);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    uVar16 = uStack_b0;
    uVar5 = (int)uStack_80 - 1;
    if ((int)uStack_80 == 0) {
      uVar5 = 0;
    }
    if (0 < (int)uVar5) {
      pcVar8 = "";
      if ((int)uStack_80 != 0) {
        pcVar8 = local_88;
      }
      pppppppcVar15 = (char *******)&DAT_149dfb77a;
      if ((int)pppppppcStack_70 != 0) {
        pppppppcVar15 = local_78;
      }
      uVar17 = (ulonglong)uVar5;
      lVar7 = 0;
      while( true ) {
        uVar18 = *(ushort *)((longlong)pppppppcVar15 + lVar7);
        uVar23 = *(ushort *)(pcVar8 + lVar7);
        if (uVar18 != uVar23) break;
        if ((uVar18 == 0) || (uVar17 == 1)) goto LAB_144494697;
LAB_14449465b:
        uVar17 = uVar17 - 1;
        lVar7 = lVar7 + 2;
      }
      if (0x7f < (uVar23 | uVar18)) {
        iVar19 = (uint)uVar18 - (uint)uVar23;
LAB_144494729:
        iVar14 = (int)pppppppcStack_70 + -1;
        if ((int)pppppppcStack_70 == 0) {
          iVar14 = 0;
        }
        if (iVar19 != 0) goto LAB_1444946df;
        goto LAB_14449469d;
      }
      if ((&DAT_149e05da0)[uVar18] != (&DAT_149e05da0)[(uint)uVar23]) {
        iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar18] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar23];
        goto LAB_144494729;
      }
      if (uVar17 != 1) goto LAB_14449465b;
LAB_144494697:
      iVar14 = (int)pppppppcStack_70 + -1;
      if ((int)pppppppcStack_70 == 0) {
        iVar14 = 0;
      }
LAB_14449469d:
      if ((int)uVar5 < iVar14) {
        lVar7 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_149192788(&local_b8,uVar16 & 0xffffffff);
        }
        *(undefined4 *)((longlong)local_b8 + lVar7 * 0xc + 8) = *(undefined4 *)(puVar13 + 1);
        *(undefined8 *)((longlong)local_b8 + lVar7 * 0xc) = *puVar13;
      }
    }
LAB_1444946df:
    if (local_c8 != (char ******)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (char *******)0x0) {
      FUN_1400020a8();
    }
    lVar7 = local_100;
    puVar13 = puVar13 + 3;
  } while (puVar13 != puVar1);
  pppppppcVar15 = local_b8;
  if ((longlong)(int)uStack_b0 != 0) {
    lVar21 = (longlong)(int)uStack_b0 * 0xc;
    pppppppcVar22 = local_b8;
    do {
      lVar10 = *(longlong *)(param_1 + 0x28);
      if (lVar7 != 0) {
        FUN_1491b9f52(lVar10 + 0x30,&local_c8,pppppppcVar22);
        local_78 = pppppppcVar22;
        pppppppcStack_70 = &local_c8;
        FUN_1491d27fc(lVar7,local_d8,&local_78);
        lVar10 = *(longlong *)(param_1 + 0x28);
      }
      FUN_1491ba12e(lVar10 + 0x30,pppppppcVar22);
      pppppppcVar22 = (char *******)((longlong)pppppppcVar22 + 0xc);
      lVar21 = lVar21 + -0xc;
      pppppppcVar15 = local_b8;
    } while (lVar21 != 0);
  }
joined_r0x0001444947d6:
  if (local_b8 != (char *******)0x0) {
    FUN_1400020a8(local_b8);
  }
LAB_144494880:
  if (((*(char *)(param_1 + 0x49) == '\x01') && ((char)plVar20[4] == '\0')) &&
     (1 < *(int *)(lVar6 + 0x28))) {
    local_78 = (char *******)0x0;
    pppppppcStack_70 = (char *******)0x0;
    FUN_1491d2e16(lVar6,&local_b8);
    pppppppcVar15 = local_e8;
    FUN_144490f6c(param_1,pppppppcVar15,&local_b8,&local_78);
    if (local_e8[0] != (char ******)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (char *******)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (char *******)0x0) {
      FUN_1400020a8();
    }
  }
  pppppppcVar15 = (char *******)CONCAT71((int7)((ulonglong)pppppppcVar15 >> 8),1);
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_1491d2b06(param_1 + 0x30,4,lVar6);
  }
LAB_14449430b:
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pppppppcVar15 & 0xffffffff;
}



// FUNCTION 144494d3a FUN_144494d3a body=48 status=ok
// SIG undefined FUN_144494d3a(void)

longlong FUN_144494d3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144495034 FUN_144495034 body=69 status=ok
// SIG undefined FUN_144495034(void)

undefined8 * FUN_144495034(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb75320;
  FUN_1447a1747(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14449507a FUN_14449507a body=167 status=ok
// SIG undefined FUN_14449507a(void)

/* WARNING: Removing unreachable block (ram,0x0001444950fe) */

void FUN_14449507a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"Error convert to string: %s",param_2);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x10),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_30;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144495184 FUN_144495184 body=122 status=ok
// SIG undefined FUN_144495184(void)

void FUN_144495184(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409a6968(**(undefined8 **)*param_1,local_48,param_3 + 8);
  cVar1 = FUN_1402ca054(local_38,L"float",5);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *local_20;
  }
  *(undefined4 *)(param_2 + 8) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144495200 FUN_144495200 body=29 status=ok
// SIG undefined FUN_144495200(void)

undefined8 FUN_144495200(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144495232 FUN_144495232 body=101 status=ok
// SIG undefined FUN_144495232(void)

void FUN_144495232(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb760a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144495298 FUN_144495298 body=101 status=ok
// SIG undefined FUN_144495298(void)

void FUN_144495298(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb760a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1444952fe FUN_1444952fe body=134 status=ok
// SIG undefined FUN_1444952fe(void)

void FUN_1444952fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bb760a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76030;
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
                    /* WARNING: Could not recover jumptable at 0x000144495375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144495384 FUN_144495384 body=29 status=ok
// SIG undefined FUN_144495384(void)

undefined8 FUN_144495384(longlong param_1,undefined8 param_2)

{
  FUN_1444953f4(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 1444953a2 FUN_1444953a2 body=80 status=ok
// SIG undefined FUN_1444953a2(void)

undefined8 FUN_1444953a2(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1444953f4(local_20,param_1 + 0x18);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444953f4 FUN_1444953f4 body=185 status=ok
// SIG undefined FUN_1444953f4(void)

undefined8 * FUN_1444953f4(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (((((*(int *)((longlong)param_2 + 0xc) != 0) &&
        (uVar1 = *(uint *)(param_2 + 1), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
       (*(int *)(lVar3 + 0x10) == *(int *)((longlong)param_2 + 0xc))))) &&
     ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
    FUN_1457c256e(param_2[2],param_1);
    return param_1;
  }
  lVar3 = *param_2;
  if (((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) && (*(int *)(lVar3 + 0x7c0) != 0))
  {
    puVar2 = *(undefined8 **)(lVar3 + 0x7b8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72((longlong *)(lVar3 + 0x7b8),0,0,0x10);
      *(undefined4 *)(lVar3 + 0x7c0) = 0;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1444954ae FUN_1444954ae body=266 status=ok
// SIG undefined FUN_1444954ae(void)

void FUN_1444954ae(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  char local_a8 [4];
  longlong local_a4;
  char local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\x04')) && (*(char *)(lVar1 + 0x211) != '\0'))
     && ((*(char *)(lVar1 + 0x211) != '\x02' || (*(longlong *)(lVar1 + 0x360) == 0)))) {
    FUN_1491dba48(*param_1,local_a8,lVar1 + 0x10,1);
    FUN_1491da766(local_3c);
    if ((local_a4 != local_38) || (local_a8[0] != local_3c[0])) {
      FUN_1491dce1a(*param_1,lVar1,0,1);
    }
    uVar2 = *param_1;
    FUN_1401571e4(uVar2,local_a8,lVar1,0);
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 1;
    FUN_140122d4e(uVar2,lVar1,local_a8,1);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444955ba FUN_1444955ba body=219 status=ok
// SIG undefined FUN_1444955ba(void)

void FUN_1444955ba(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 144495696 FUN_144495696 body=579 status=ok
// SIG undefined FUN_144495696(void)

void FUN_144495696(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  wchar_t *_Str;
  undefined8 *puVar10;
  undefined1 auStack_588 [32];
  undefined8 *local_568;
  undefined4 *local_560;
  undefined8 *local_558;
  undefined8 *local_550;
  undefined1 local_548;
  undefined1 local_540;
  undefined1 local_530 [12];
  undefined1 local_524;
  undefined8 local_520;
  undefined8 local_518 [55];
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined8 uStack_2e4;
  undefined1 local_2dc;
  undefined2 local_2db;
  undefined1 local_2d9;
  undefined8 local_2d8 [12];
  undefined8 local_278 [13];
  undefined2 local_210 [2];
  undefined8 local_20c;
  undefined1 local_203;
  undefined1 local_1f0;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_588;
  lVar1 = *param_2;
  lVar2 = *param_1;
  FUN_1400021e4(lVar1 + 0x14,&local_58);
  _Str = DAT_14cc06bf8;
  if (DAT_14cc06c00 == 0) {
    _Str = L"";
  }
  if (_Str != (wchar_t *)0x0) {
    sVar5 = wcslen(_Str);
    local_560 = (undefined4 *)CONCAT44(local_560._4_4_,0xffffffff);
    local_568 = (undefined8 *)((ulonglong)local_568 & 0xffffffff00000000);
    iVar4 = FUN_1447ee042(&local_58,_Str,sVar5 & 0xffffffff,1);
    if (iVar4 != -1) {
      uVar3 = *(undefined8 *)(lVar2 + 0x2f8);
      puVar8 = local_58;
      if (local_50 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_1446f470e(local_518,puVar8,1);
      local_210[0] = CONCAT11(local_210[0]._1_1_,8);
      local_20c = local_518[0];
      iVar4 = FUN_140813180(uVar3);
      if (iVar4 == -1) {
        FUN_1491d73b0(local_210);
        local_210[0] = 0x101;
        local_203 = 1;
        local_1f0 = 0;
        puVar6 = &DAT_14bb83714;
        if (*(undefined4 **)(lVar1 + 0x50) != (undefined4 *)0x0) {
          puVar6 = *(undefined4 **)(lVar1 + 0x50);
        }
        local_35c = *puVar6;
        lVar2 = param_1[1];
        puVar9 = &DAT_14c846480;
        puVar10 = local_278;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar9 = &DAT_14c846480;
        puVar10 = local_2d8;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        local_358 = 0;
        uStack_350 = 0;
        local_348 = 0;
        uStack_340 = 0;
        local_338 = 0;
        uStack_330 = 0;
        local_328 = 0;
        uStack_320 = 0;
        local_318 = 0;
        uStack_310 = 0;
        local_308 = 0;
        uStack_300 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        local_2dc = 1;
        local_2d9 = 0;
        local_2db = 0;
        FUN_14918b1f6(local_518,local_210);
        local_524 = 0;
        local_520 = 0;
        local_540 = 0;
        local_548 = 1;
        local_550 = local_278;
        local_558 = local_2d8;
        local_568 = local_518;
        local_560 = &local_35c;
        FUN_1491ecf78(lVar2,local_530,*(undefined8 *)(lVar1 + 0x14));
        FUN_14918b3e4(local_210);
      }
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444958da FUN_1444958da body=397 status=ok
// SIG undefined FUN_1444958da(void)

void FUN_1444958da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_2;
  if (((*(char *)(lVar1 + 0x110) == '\0') && (lVar4 = *(longlong *)(lVar1 + 0x14), lVar4 != 0)) &&
     ((int)param_1[0x14] != *(int *)((longlong)param_1 + 0xcc))) {
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar9 = (uint)lVar4 & 0xffff;
    plVar6 = param_1 + 0x1a;
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1b];
    }
    iVar10 = *(int *)((longlong)plVar6 +
                     (ulonglong)
                     ((int)param_1[0x1c] - 1U &
                     (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                     (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      lVar2 = *param_1;
      do {
        plVar6 = (longlong *)(param_1[0x13] + (longlong)iVar10 * 0x14);
        if (*plVar6 == lVar4) {
          if (((plVar6 != (longlong *)0x0) && (plVar6 + 1 != (longlong *)0x0)) &&
             (lVar4 = (longlong)(int)plVar6[1], lVar4 != -1)) {
            puVar7 = (undefined8 *)(lVar4 * 0x60 + param_1[7]);
            puVar8 = local_98;
            for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            local_a0 = 0;
            local_a8 = 0;
            local_b0 = 0;
            local_b8 = 1;
            FUN_140122d4e(*(undefined8 *)(lVar2 + 0x2f8),lVar1,local_98,0);
            local_a0 = 0;
            local_a8 = 0;
            local_b0 = 0;
            local_b8 = 1;
            FUN_140122d4e(*(undefined8 *)(lVar2 + 0x2f8),lVar1,local_98,1);
          }
          break;
        }
        iVar10 = *(int *)((longlong)plVar6 + 0xc);
      } while (iVar10 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144495a68 FUN_144495a68 body=300 status=ok
// SIG undefined FUN_144495a68(void)

void FUN_144495a68(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x110) == '\0') {
    lVar2 = *param_1;
    uVar4 = FUN_1408bcd7e(*(undefined8 *)(param_1[1] + 0x10),lVar1 + 0x14);
    if (uVar4 != 0xffffffff) {
      plVar3 = *(longlong **)(param_1[1] + 0x10);
      if ((longlong)(int)plVar3[1] != 0) {
        uVar8 = 0;
        lVar7 = 0;
        do {
          if (uVar4 == *(ushort *)(*plVar3 + uVar8)) {
            if ((int)(~uVar8 >> 1) != 0) {
              if (plVar3[0x1d] == 0) {
                puVar5 = (undefined8 *)
                         ((ulonglong)((uint)*(ushort *)(*plVar3 + (lVar7 >> 0x20) * 2) * 0x60) +
                         *(longlong *)(plVar3[9] + 0x30));
              }
              else {
                puVar5 = (undefined8 *)((lVar7 >> 0x20) * 0x60 + *(longlong *)(plVar3[0x1d] + 0x10))
                ;
              }
              puVar6 = local_88;
              for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              local_90 = 0;
              local_98 = 0;
              local_a0 = 0;
              local_a8 = 1;
              FUN_140122d4e(*(undefined8 *)(lVar2 + 0x2f8),lVar1,local_88,0);
            }
            break;
          }
          lVar7 = lVar7 + 0x100000000;
          uVar8 = uVar8 + 2;
        } while ((longlong)(int)plVar3[1] * 2 != uVar8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144495b96 FUN_144495b96 body=505 status=ok
// SIG undefined FUN_144495b96(void)

undefined8 FUN_144495b96(undefined8 *param_1,undefined8 *param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1401571e4(param_1[0xe],local_c8,*param_2,3);
  local_a8 = local_a8 * (double)param_1[10];
  dStack_a0 = dStack_a0 * (double)param_1[0xb];
  local_98 = local_98 * (double)param_1[0xc];
  dVar4 = (double)param_1[4];
  dVar7 = (double)param_1[5];
  dVar5 = (double)param_1[2];
  dVar6 = (double)param_1[3];
  dVar8 = dStack_a0 * dVar5 - local_a8 * dVar6;
  dVar9 = local_98 * dVar6 - dStack_a0 * dVar4;
  dVar10 = local_a8 * dVar4 - dVar5 * local_98;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar3 = (dVar8 * dVar6 - dVar10 * dVar4) + dVar7 * dVar9 + local_a8 + (double)param_1[6];
  dVar4 = (dVar4 * dVar9 - dVar5 * dVar8) + (double)param_1[5] * dVar10 + dStack_a0 +
          (double)param_1[7];
  dVar7 = dVar8 * dVar7 + local_98 + (dVar10 * dVar5 - dVar9 * dVar6) + (double)param_1[8];
  pdVar1 = (double *)*param_1;
  if (*(char *)(pdVar1 + 6) == '\0') {
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(pdVar1 + 3) = auVar2;
    pdVar1[5] = dVar7;
    *pdVar1 = pdVar1[3];
    pdVar1[1] = pdVar1[4];
    pdVar1[2] = pdVar1[5];
    *(undefined1 *)(pdVar1 + 6) = 1;
  }
  else {
    dVar10 = *pdVar1;
    if (dVar3 <= *pdVar1) {
      dVar10 = dVar3;
    }
    *pdVar1 = dVar10;
    dVar10 = pdVar1[1];
    if (dVar4 <= pdVar1[1]) {
      dVar10 = dVar4;
    }
    pdVar1[1] = dVar10;
    dVar10 = pdVar1[2];
    if (dVar7 <= pdVar1[2]) {
      dVar10 = dVar7;
    }
    pdVar1[2] = dVar10;
    dVar10 = pdVar1[3];
    if (pdVar1[3] <= dVar3) {
      dVar10 = dVar3;
    }
    pdVar1[3] = dVar10;
    dVar10 = pdVar1[4];
    if (pdVar1[4] <= dVar4) {
      dVar10 = dVar4;
    }
    pdVar1[4] = dVar10;
    dVar10 = pdVar1[5];
    if (pdVar1[5] <= dVar7) {
      dVar10 = dVar7;
    }
    pdVar1[5] = dVar10;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)pdVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144495d90 FUN_144495d90 body=89 status=ok
// SIG undefined FUN_144495d90(void)

void FUN_144495d90(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *param_2;
  iVar4 = FUN_144909502(*param_1,*(undefined8 *)(lVar1 + 0x14));
  if (iVar4 != -1) {
    uVar2 = *(undefined8 *)(lVar1 + 0x14);
    plVar3 = (longlong *)param_1[1];
    iVar4 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar4 + 1U) {
      FUN_1491ce5a8(plVar3,iVar4);
    }
    lVar1 = *plVar3;
    *(undefined8 *)(lVar1 + (longlong)iVar4 * 0x10) = uVar2;
    *(undefined8 *)(lVar1 + 8 + (longlong)iVar4 * 0x10) = uVar2;
  }
  return;
}



// FUNCTION 144495dea FUN_144495dea body=69 status=ok
// SIG undefined FUN_144495dea(void)

void FUN_144495dea(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = *(undefined8 *)(*param_2 + 0x14);
  plVar3 = *(longlong **)(param_1 + 8);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1491ce62e(plVar3,iVar1);
  }
  lVar4 = *plVar3;
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = uVar2;
  return;
}



// FUNCTION 144495e30 FUN_144495e30 body=3278 status=ok
// SIG undefined FUN_144495e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144495e30(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_338 [32];
  double local_318;
  double dStack_310;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
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
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar3 = *param_2;
  if ((*(char *)(lVar3 + 0x210) == '\x01') || (9 < (byte)(*(char *)(lVar3 + 0x211) - 1U)))
  goto LAB_144495ed4;
  lVar4 = *param_1;
  lVar9 = FUN_145c01f0e(lVar4 + 0x3d0);
  lVar9 = FUN_14919da5c(lVar3 + 0x340,param_1 + 1,lVar9 + 0x310,1);
  if (lVar9 == 0) goto LAB_144495ed4;
  lVar14 = *(longlong *)(lVar4 + 0x3a8);
  if ((lVar14 == 0) || (*(int *)(lVar4 + 0x3b8) < 2)) {
    if ((*(int *)(lVar9 + 0x94) == 0) ||
       ((((uVar11 = *(uint *)(lVar9 + 0x90), (int)uVar11 < 0 || (DAT_14c9647dc <= (int)uVar11)) ||
         (lVar14 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8), lVar14 == 0)) ||
        ((*(int *)(lVar14 + 0x10) != *(int *)(lVar9 + 0x94) ||
         ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))))) goto LAB_144495ed4;
    lVar14 = FUN_140a1de56();
    if (lVar14 == 0) {
      lVar14 = FUN_1491ade88();
    }
    else {
      lVar14 = FUN_140a1de56();
    }
    if (*(int *)(lVar9 + 0x94) == 0) {
LAB_144496af1:
      lVar12 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar9 + 0x90);
      lVar12 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar9 + 0x94) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_144496af1;
        lVar12 = *plVar13;
      }
    }
    dVar26 = *(double *)(lVar12 + 0x120);
  }
  else {
    FUN_1446f470e(&local_168,*(undefined8 *)(lVar4 + 0x3b0),1);
    dVar26 = local_168;
  }
  *(double *)(lVar4 + 0x438) = dVar26;
  uVar10 = FUN_147b066f2(lVar9 + 8);
  plVar13 = (longlong *)FUN_140995b6b(*(undefined8 *)(lVar4 + 0x3c8));
  (**(code **)(*plVar13 + 0xa78))(plVar13,uVar10);
  iVar15 = 0;
  FUN_140486fc4(plVar13,*(undefined8 *)(lVar4 + 0x3c8),0);
  FUN_140b506a4(plVar13);
  bVar2 = *(byte *)((longlong)plVar13 + 0x2d6);
  bVar6 = *(char *)(lVar4 + 0x3c0) << 7;
  *(byte *)((longlong)plVar13 + 0x2d6) = bVar2 & 0x7f | bVar6;
  *(byte *)((longlong)plVar13 + 0x2d6) = bVar2 & 0x3f | bVar6 | *(char *)(lVar4 + 0x3c0) << 6;
  lVar14 = FUN_14090ceee(lVar14,plVar13,0);
  iVar7 = (**(code **)(*plVar13 + 0x7b0))(plVar13);
  if (0 < iVar7) {
    do {
      (**(code **)(*plVar13 + 0x638))(plVar13,iVar15,lVar14);
      iVar15 = iVar15 + 1;
      iVar7 = (**(code **)(*plVar13 + 0x7b0))(plVar13);
    } while (iVar15 < iVar7);
  }
  iVar7 = *(int *)(lVar4 + 0x400);
  *(uint *)(lVar4 + 0x400) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x404) < iVar7 + 1U) {
    FUN_1446f84a2(lVar4 + 0x3f8,iVar7);
  }
  *(undefined8 *)(*(longlong *)(lVar4 + 0x3f8) + (longlong)iVar7 * 8) =
       *(undefined8 *)(lVar3 + 0x14);
  lVar12 = param_1[3];
  uVar8 = FUN_14449ed30(lVar12,&local_2e8,lVar3,1);
  local_318 = local_2a8._0_8_;
  dStack_310 = local_2a8._8_8_;
  dVar26 = local_298._0_8_;
  dVar21 = local_298._8_8_;
  auVar22 = *(undefined1 (*) [16])(lVar9 + 0x70);
  dVar37 = auVar22._0_8_;
  dVar29 = auVar22._8_8_;
  auVar17 = *(undefined1 (*) [16])(lVar9 + 0x80);
  dVar19 = auVar17._0_8_;
  auVar22 = minpd(auVar22,local_2a8);
  auVar27 = minpd(auVar17,local_298);
  auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  iVar7 = movmskpd(uVar8,auVar23);
  auVar22._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  uVar11 = movmskpd((int)lVar12,auVar22);
  if ((uVar11 & 0x3fffffff) == 0 && iVar7 == 0) {
    dVar30 = *(double *)(lVar9 + 0x30);
    dVar38 = *(double *)(lVar9 + 0x38);
    dVar25 = *(double *)(lVar9 + 0x40);
    dVar31 = *(double *)(lVar9 + 0x48);
    dVar34 = dVar38 * local_2d8 * -1.0 +
             dVar25 * dStack_2e0 + dVar31 * local_2e8 * 1.0 + dVar30 * dStack_2d0;
    dVar28 = dVar30 * local_2d8 * 1.0 +
             dVar31 * dStack_2e0 + dVar25 * local_2e8 * -1.0 + dVar38 * dStack_2d0;
    auVar27._0_8_ =
         dVar31 * local_2d8 * 1.0 +
         ((local_2e8 * dVar38 * 1.0 + dVar25 * dStack_2d0) - dVar30 * dStack_2e0);
    auVar27._8_8_ =
         dVar25 * local_2d8 * -1.0 +
         ((local_2e8 * dVar30 * -1.0 + dVar31 * dStack_2d0) - dVar38 * dStack_2e0);
    dVar32 = *(double *)(lVar9 + 0x50) * local_318;
    dVar33 = *(double *)(lVar9 + 0x58) * dStack_310;
    dVar35 = *(double *)(lVar9 + 0x60) * dVar26;
    dVar36 = *(double *)(lVar9 + 0x68) * dVar21;
    dVar25 = dVar33 * local_2e8 - dStack_2e0 * dVar32;
    dVar31 = dVar35 * dStack_2e0 - local_2d8 * dVar33;
    dVar30 = dVar32 * local_2d8 - local_2e8 * dVar35;
    dVar38 = dVar36 * dStack_2d0 - dStack_2d0 * dVar36;
    dVar31 = dVar31 + dVar31;
    dVar30 = dVar30 + dVar30;
    dVar25 = dVar25 + dVar25;
    dVar38 = dVar38 + dVar38;
    local_108 = (dVar25 * dStack_2e0 - local_2d8 * dVar30) + dStack_2d0 * dVar31 + dVar32 +
                local_2c8;
    dStack_100 = (dVar31 * local_2d8 - dVar25 * local_2e8) + dStack_2d0 * dVar30 + dVar33 +
                 dStack_2c0;
    local_f8 = (dVar30 * local_2e8 - dStack_2e0 * dVar31) + dStack_2d0 * dVar25 + dVar35 + local_2b8
    ;
    dStack_2b0 = (dVar38 * dStack_2d0 - dVar38 * dStack_2d0) + dStack_2d0 * dVar38 + dVar36 +
                 dStack_2b0;
    local_318 = dVar37 * local_318;
    dStack_310 = dVar29 * dStack_310;
    dVar19 = dVar19 * dVar26;
    dVar21 = auVar17._8_8_ * dVar21;
  }
  else {
    dVar25 = dStack_2e0 + dStack_2e0;
    dVar30 = local_2d8 + local_2d8;
    dVar31 = local_2e8 * (local_2e8 + local_2e8);
    local_198 = (1.0 - (dVar31 + dStack_2e0 * dVar25)) * dVar26;
    dVar38 = (local_2e8 + local_2e8) * dStack_2d0;
    local_1a8 = (dVar25 * dStack_2d0 + local_2e8 * dVar30) * dVar26;
    local_2f8 = dVar26 * dVar19;
    dStack_2f0 = dVar21 * auVar17._8_8_;
    local_1c8 = (dVar25 * local_2e8 - dVar30 * dStack_2d0) * dStack_310;
    dStack_1a0 = (dVar30 * dStack_2e0 - dVar38) * dVar26;
    local_1e8 = (1.0 - (local_2d8 * dVar30 + dStack_2e0 * dVar25)) * local_318;
    dStack_1c0 = (1.0 - (local_2d8 * dVar30 + dVar31)) * dStack_310;
    dStack_1e0 = (dVar25 * local_2e8 + dVar30 * dStack_2d0) * local_318;
    local_1b8 = (dVar30 * dStack_2e0 + dVar38) * dStack_310;
    local_1d8 = (local_2e8 * dVar30 - dVar25 * dStack_2d0) * local_318;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = local_2c8;
    dStack_180 = dStack_2c0;
    local_178 = local_2b8;
    uStack_170 = 0x3ff0000000000000;
    dVar25 = *(double *)(lVar9 + 0x30);
    dVar31 = *(double *)(lVar9 + 0x38);
    dVar34 = *(double *)(lVar9 + 0x40);
    dVar28 = dVar31 + dVar31;
    dVar21 = dVar34 + dVar34;
    dVar32 = dVar25 * (dVar25 + dVar25);
    local_218 = (1.0 - (dVar32 + dVar31 * dVar28)) * dVar19;
    dVar33 = *(double *)(lVar9 + 0x30) * dVar21;
    dVar26 = *(double *)(lVar9 + 0x48);
    dVar30 = dVar21 * dVar26;
    dVar38 = (dVar25 + dVar25) * *(double *)(lVar9 + 0x48);
    dVar26 = dVar28 * dVar26;
    local_228 = (dVar26 + dVar33) * dVar19;
    local_248 = (dVar28 * dVar25 - dVar30) * dVar29;
    dStack_220 = (dVar21 * dVar31 - dVar38) * dVar19;
    local_318 = local_318 * dVar37;
    dStack_310 = dStack_310 * dVar29;
    local_268 = (1.0 - (dVar34 * dVar21 + dVar31 * dVar28)) * dVar37;
    dStack_240 = (1.0 - (dVar34 * dVar21 + dVar32)) * dVar29;
    dStack_260 = (dVar28 * dVar25 + dVar30) * dVar37;
    local_238 = (dVar21 * dVar31 + dVar38) * dVar29;
    local_258 = (dVar33 - dVar26) * dVar37;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = *(undefined8 *)(lVar9 + 0x50);
    uStack_200 = *(undefined8 *)(lVar9 + 0x58);
    local_1f8 = *(undefined8 *)(lVar9 + 0x60);
    uStack_1f0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_168);
    dVar21 = dStack_2f0;
    dVar19 = local_2f8;
    local_300 = local_158;
    dVar26 = local_158 * local_158 + local_168 * local_168 + local_160 * local_160;
    dVar37 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    dVar30 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    uVar16 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
    dVar29 = (double)(~uVar16 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar16);
    uVar16 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
    dVar37 = (double)(~uVar16 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar16);
    uVar16 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
    dVar30 = (double)(~uVar16 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar16);
    auVar17._8_8_ = -(ulonglong)(0.0 <= dStack_310);
    auVar17._0_8_ = -(ulonglong)(0.0 <= local_318);
    auVar22 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar17);
    dVar26 = (double)(~-(ulonglong)(0.0 <= local_2f8) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_2f8) & 0x3ff0000000000000);
    dVar38 = auVar22._0_8_;
    local_168 = local_168 * dVar29 * dVar38;
    local_160 = local_160 * dVar29 * dVar38;
    local_158 = dVar29 * local_158 * dVar38;
    dVar29 = auVar22._8_8_;
    local_138 = dVar37 * local_138 * dVar29;
    local_140 = local_140 * dVar37 * dVar29;
    local_148 = dVar29 * local_148 * dVar37;
    local_118 = dVar30 * local_118 * dVar26;
    local_120 = local_120 * dVar30 * dVar26;
    local_128 = dVar26 * local_128 * dVar30;
    FUN_14481fd10(&local_288,&local_168);
    dVar26 = local_278 * local_278 + local_288 * local_288;
    dVar37 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar20._0_8_ = dVar26 + dVar37;
    auVar20._8_8_ = dVar26 + dVar37;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar22 = sqrtpd(auVar20,auVar20);
    auVar22 = divpd(_DAT_149934d80,auVar22);
    auVar24._0_8_ = auVar22._0_8_ * local_278;
    auVar24._8_8_ = auVar22._8_8_ * dStack_270;
    dVar34 = (double)((ulonglong)(local_288 * auVar22._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dVar28 = (double)((ulonglong)(dStack_280 * auVar22._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar18);
    dStack_2b0 = 0.0;
  }
  iVar7 = *(int *)(lVar4 + 0x410);
  *(uint *)(lVar4 + 0x410) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x414) < iVar7 + 1U) {
    FUN_144a2c682(lVar4 + 0x408,iVar7);
  }
  lVar3 = *(longlong *)(lVar4 + 0x408);
  lVar9 = (longlong)iVar7 * 0x60;
  *(double *)(lVar3 + lVar9) = dVar34;
  ((double *)(lVar3 + lVar9))[1] = dVar28;
  *(undefined1 (*) [16])(lVar3 + 0x10 + lVar9) = auVar27;
  auVar5._8_4_ = SUB84(dStack_100,0);
  auVar5._0_8_ = local_108;
  auVar5._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x20 + lVar9) = auVar5;
  pdVar1 = (double *)(lVar3 + 0x30 + lVar9);
  *pdVar1 = local_f8;
  pdVar1[1] = dStack_2b0;
  pdVar1 = (double *)(lVar3 + 0x40 + lVar9);
  *pdVar1 = local_318;
  pdVar1[1] = dStack_310;
  pdVar1 = (double *)(lVar3 + 0x50 + lVar9);
  *pdVar1 = dVar19;
  pdVar1[1] = dVar21;
  if ((plVar13 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar13);
  }
  iVar7 = *(int *)(lVar4 + 0x420);
  *(uint *)(lVar4 + 0x420) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x424) < iVar7 + 1U) {
    FUN_1474beb7a((longlong *)(lVar4 + 0x418),iVar7);
  }
  *(longlong **)(*(longlong *)(lVar4 + 0x418) + (longlong)iVar7 * 8) = plVar13;
  if (DAT_14c950c29 == 1 && plVar13 != (longlong *)0x0) {
    FUN_1456cec3c(plVar13);
  }
  if ((lVar14 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar14);
  }
  iVar7 = *(int *)(lVar4 + 0x430);
  *(uint *)(lVar4 + 0x430) = iVar7 + 1U;
  if (*(uint *)(lVar4 + 0x434) < iVar7 + 1U) {
    FUN_1457d5db8((longlong *)(lVar4 + 0x428),iVar7);
  }
  *(longlong *)(*(longlong *)(lVar4 + 0x428) + (longlong)iVar7 * 8) = lVar14;
  if ((lVar14 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar14);
  }
LAB_144495ed4:
  if ((local_e0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144496b00 FUN_144496b00 body=196 status=ok
// SIG undefined FUN_144496b00(void)

undefined8 FUN_144496b00(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar3 = FUN_1459f6026();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (*(int *)(lVar2 + 0x3b0) != 0)) &&
       ((uVar1 = *(uint *)(lVar2 + 0x3ac), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar6 != (longlong *)0x0) &&
          (((int)plVar6[2] == *(int *)(lVar2 + 0x3b0) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)
           ))) && (lVar3 = *plVar6, lVar3 != 0)) {
        lVar4 = FUN_1401242c6();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          uVar5 = FUN_14919cdf2(lVar3,lVar2 + 0x3b4);
          return uVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144496bec FUN_144496bec body=29 status=ok
// SIG undefined FUN_144496bec(void)

undefined8 FUN_144496bec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144496c0a FUN_144496c0a body=389 status=ok
// SIG undefined FUN_144496c0a(void)

uint FUN_144496c0a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  uint uVar9;
  
  lVar1 = *param_2;
  uVar4 = 0;
  uVar6 = 0;
  if (lVar1 != 0) {
    lVar5 = FUN_1459f6026();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) && (uVar4 = uVar6, *(int *)(lVar1 + 0x3b0) != 0)) &&
       ((uVar6 = *(uint *)(lVar1 + 0x3ac), -1 < (int)uVar6 && ((int)uVar6 < DAT_14c9647dc)))) {
      puVar8 = (ulonglong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if (((puVar8 != (ulonglong *)0x0) &&
          (((int)puVar8[2] == *(int *)(lVar1 + 0x3b0) && ((puVar8[1] & 0x10200000) == 0)))) &&
         (uVar2 = *puVar8, uVar2 != 0)) {
        lVar5 = FUN_1401242c6();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(uVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          uVar3 = *(undefined8 *)(lVar1 + 0x3b4);
          uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar6 = (uint)uVar3 & 0xffff;
          uVar4 = ((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                  (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4);
          uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          uVar6 = uVar4 >> 0xd ^ (uVar6 >> 0x10 ^ uVar6) - uVar4;
          uVar7 = uVar6 << 8 ^ (-0x61c88647 - uVar4) - uVar6;
          uVar9 = uVar7 >> 0xd ^ (uVar4 - uVar6) - uVar7;
          uVar4 = uVar9 >> 0xc ^ (uVar6 - uVar7) - uVar9;
          uVar6 = uVar4 << 0x10 ^ (uVar7 - uVar9) - uVar4;
          uVar7 = uVar6 >> 5 ^ (uVar9 - uVar4) - uVar6;
          uVar9 = uVar7 >> 3 ^ (uVar4 - uVar6) - uVar7;
          uVar4 = uVar9 << 10 ^ (uVar6 - uVar7) - uVar9;
          uVar4 = uVar4 >> 0xf ^ uVar7 - (uVar9 + uVar4);
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 144496db8 FUN_144496db8 body=29 status=ok
// SIG undefined FUN_144496db8(void)

undefined8 FUN_144496db8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144496dd6 FUN_144496dd6 body=75 status=ok
// SIG undefined FUN_144496dd6(void)

undefined8 FUN_144496dd6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_1401242c6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = FUN_14919cdf2(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144496e22 FUN_144496e22 body=278 status=ok
// SIG undefined FUN_144496e22(void)

uint FUN_144496e22(ulonglong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = FUN_1401242c6();
    uVar2 = 0;
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      uVar1 = *param_2;
      uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
      uVar4 = (uint)uVar1 & 0xffff;
      uVar2 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4);
      uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = uVar2 >> 0xd ^ (uVar4 >> 0x10 ^ uVar4) - uVar2;
      uVar5 = uVar4 << 8 ^ (-0x61c88647 - uVar2) - uVar4;
      uVar6 = uVar5 >> 0xd ^ (uVar2 - uVar4) - uVar5;
      uVar2 = uVar6 >> 0xc ^ (uVar4 - uVar5) - uVar6;
      uVar4 = uVar2 << 0x10 ^ (uVar5 - uVar6) - uVar2;
      uVar5 = uVar4 >> 5 ^ (uVar6 - uVar2) - uVar4;
      uVar6 = uVar5 >> 3 ^ (uVar2 - uVar4) - uVar5;
      uVar2 = uVar6 << 10 ^ (uVar4 - uVar5) - uVar6;
      uVar2 = uVar2 >> 0xf ^ uVar5 - (uVar6 + uVar2);
    }
  }
  return uVar2;
}



// FUNCTION 144496f38 FUN_144496f38 body=29 status=ok
// SIG undefined FUN_144496f38(void)

undefined8 FUN_144496f38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144496f6a FUN_144496f6a body=93 status=ok
// SIG undefined FUN_144496f6a(void)

void FUN_144496f6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76ac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144496fc8 FUN_144496fc8 body=93 status=ok
// SIG undefined FUN_144496fc8(void)

void FUN_144496fc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76ac0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144497026 FUN_144497026 body=126 status=ok
// SIG undefined FUN_144497026(void)

void FUN_144497026(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb768f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76ac0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144497095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1444970b4 FUN_1444970b4 body=27 status=ok
// SIG undefined FUN_1444970b4(void)

undefined1 FUN_1444970b4(longlong param_1,undefined8 param_2)

{
  FUN_1491af686(*(longlong *)(param_1 + 0x18) + 0x48,param_2,1);
  return 1;
}



// FUNCTION 1444970d0 FUN_1444970d0 body=29 status=ok
// SIG undefined FUN_1444970d0(void)

undefined8 FUN_1444970d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144497102 FUN_144497102 body=93 status=ok
// SIG undefined FUN_144497102(void)

void FUN_144497102(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144497160 FUN_144497160 body=93 status=ok
// SIG undefined FUN_144497160(void)

void FUN_144497160(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1444971be FUN_1444971be body=126 status=ok
// SIG undefined FUN_1444971be(void)

void FUN_1444971be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb768f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76b30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014449722d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14449723c FUN_14449723c body=66 status=ok
// SIG undefined FUN_14449723c(void)

void FUN_14449723c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1444972c6(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144497280 FUN_144497280 body=68 status=ok
// SIG undefined FUN_144497280(void)

undefined8 FUN_144497280(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1444972c6(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444972c6 FUN_1444972c6 body=181 status=ok
// SIG undefined FUN_1444972c6(void)

void FUN_1444972c6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [144];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *param_2;
  lVar3 = *param_1;
  FUN_145bdc6e8(local_b0);
  FUN_1491af686(local_b0,uVar2,0);
  FUN_14448ca78(local_b0,uVar2);
  iVar1 = *(int *)(lVar3 + 0xe0);
  *(uint *)(lVar3 + 0xe0) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0xe4) < iVar1 + 1U) {
    FUN_1491cffce((longlong *)(lVar3 + 0xd8),iVar1);
  }
  FUN_1491cff5a((longlong)iVar1 * 0x90 + *(longlong *)(lVar3 + 0xd8),local_b0);
  FUN_145af7bb8(local_b0);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449737c FUN_14449737c body=29 status=ok
// SIG undefined FUN_14449737c(void)

undefined8 FUN_14449737c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444973ae FUN_1444973ae body=93 status=ok
// SIG undefined FUN_1444973ae(void)

void FUN_1444973ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14449740c FUN_14449740c body=93 status=ok
// SIG undefined FUN_14449740c(void)

void FUN_14449740c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14449746a FUN_14449746a body=126 status=ok
// SIG undefined FUN_14449746a(void)

void FUN_14449746a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb768f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76ba0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001444974d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1444974e8 FUN_1444974e8 body=66 status=ok
// SIG undefined FUN_1444974e8(void)

void FUN_1444974e8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144497572(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449752c FUN_14449752c body=68 status=ok
// SIG undefined FUN_14449752c(void)

undefined8 FUN_14449752c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144497572(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144497572 FUN_144497572 body=263 status=ok
// SIG undefined FUN_144497572(void)

void FUN_144497572(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  LARGE_INTEGER local_b8;
  undefined1 local_b0 [144];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *param_2;
  lVar3 = *param_1;
  FUN_145bdc6e8(local_b0);
  FUN_1491af686(local_b0,uVar2,0);
  iVar1 = *(int *)(lVar3 + 0xf0);
  *(uint *)(lVar3 + 0xf0) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0xf4) < iVar1 + 1U) {
    FUN_1491cffce(lVar3 + 0xe8,iVar1);
  }
  FUN_1491cff5a((longlong)iVar1 * 0x90 + *(longlong *)(lVar3 + 0xe8),local_b0);
  *(undefined4 *)(lVar3 + 0x110) = 0xffffffff;
  FUN_14282b7b8(lVar3);
  QueryPerformanceCounter(&local_b8);
  if (*(double *)(lVar3 + 0x118) <=
      ((double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar3 + 0x120)) {
    *(undefined8 *)(lVar3 + 0x118) = 0;
    FUN_1491af8bc(lVar3,uVar2);
  }
  FUN_145af7bb8(local_b0);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449767a FUN_14449767a body=29 status=ok
// SIG undefined FUN_14449767a(void)

undefined8 FUN_14449767a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444976ac FUN_1444976ac body=93 status=ok
// SIG undefined FUN_1444976ac(void)

void FUN_1444976ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14449770a FUN_14449770a body=93 status=ok
// SIG undefined FUN_14449770a(void)

void FUN_14449770a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76c10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144497768 FUN_144497768 body=126 status=ok
// SIG undefined FUN_144497768(void)

void FUN_144497768(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb768f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76c10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001444977d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1444977f6 FUN_1444977f6 body=27 status=ok
// SIG undefined FUN_1444977f6(void)

undefined1 FUN_1444977f6(longlong param_1,undefined8 param_2)

{
  FUN_14448c9e8(*(longlong *)(param_1 + 0x18) + 0x48,param_2,1);
  return 1;
}



// FUNCTION 144497812 FUN_144497812 body=29 status=ok
// SIG undefined FUN_144497812(void)

undefined8 FUN_144497812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144497844 FUN_144497844 body=93 status=ok
// SIG undefined FUN_144497844(void)

void FUN_144497844(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1444978a2 FUN_1444978a2 body=93 status=ok
// SIG undefined FUN_1444978a2(void)

void FUN_1444978a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144497900 FUN_144497900 body=126 status=ok
// SIG undefined FUN_144497900(void)

void FUN_144497900(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb768f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76c80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014449796f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14449797e FUN_14449797e body=66 status=ok
// SIG undefined FUN_14449797e(void)

void FUN_14449797e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144497a08(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444979c2 FUN_1444979c2 body=68 status=ok
// SIG undefined FUN_1444979c2(void)

undefined8 FUN_1444979c2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144497a08(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144497a08 FUN_144497a08 body=216 status=ok
// SIG undefined FUN_144497a08(void)

void FUN_144497a08(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  dVar5 = (double)*(float *)(lVar1 + 0x4c);
  if (*(int *)(lVar2 + 0xf0) == 0) {
    dVar4 = DAT_14c8463f0;
    dVar6 = DAT_14c8463f8;
    if (DAT_14c8463f0 + -9.99999993922529e-09 <= dVar5) {
LAB_144497a76:
      if (dVar5 <= dVar6 + 9.99999993922529e-09) goto LAB_144497a94;
    }
  }
  else {
    dVar4 = **(double **)(lVar2 + 0xe8);
    if (dVar4 + -9.99999993922529e-09 <= dVar5) {
      dVar6 = (*(double **)(lVar2 + 0xe8))[(longlong)(*(int *)(lVar2 + 0xf0) + -1) * 0x12];
      goto LAB_144497a76;
    }
  }
  *(float *)(lVar1 + 0x4c) = (float)dVar4;
  dVar5 = (double)(float)dVar4;
LAB_144497a94:
  uVar3 = FUN_1491aea92(lVar2,dVar5,1);
  lVar2 = *(longlong *)(lVar2 + 0xd8);
  FUN_14448c9e8(lVar2 + (ulonglong)uVar3 * 0x90,lVar1,0);
  dVar5 = *(double *)(lVar2 + 8 + (ulonglong)uVar3 * 0x90);
  if (9.99999993922529e-09 < dVar5) {
    *(float *)(lVar1 + 0x48) = (float)dVar5;
  }
  return;
}



// FUNCTION 144497ae0 FUN_144497ae0 body=29 status=ok
// SIG undefined FUN_144497ae0(void)

undefined8 FUN_144497ae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144497b12 FUN_144497b12 body=93 status=ok
// SIG undefined FUN_144497b12(void)

void FUN_144497b12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144497b70 FUN_144497b70 body=93 status=ok
// SIG undefined FUN_144497b70(void)

void FUN_144497b70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb768f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76cf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144497bce FUN_144497bce body=126 status=ok
// SIG undefined FUN_144497bce(void)

void FUN_144497bce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb768f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76cf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144497c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144497c4c FUN_144497c4c body=66 status=ok
// SIG undefined FUN_144497c4c(void)

void FUN_144497c4c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144497cd6(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144497c90 FUN_144497c90 body=68 status=ok
// SIG undefined FUN_144497c90(void)

undefined8 FUN_144497c90(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144497cd6(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144497cd6 FUN_144497cd6 body=784 status=ok
// SIG undefined FUN_144497cd6(void)

void FUN_144497cd6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined *puVar20;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0 [4];
  undefined1 local_d0 [64];
  longlong local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *param_2;
  lVar5 = *param_1;
  local_118 = &local_100;
  local_100 = 0;
  local_f8 = 0;
  local_110 = CONCAT31(local_110._1_3_,1);
  FUN_1444a18e6(*(undefined8 *)(lVar4 + 0x2f8),local_f0,0,0xff);
  lVar18 = (longlong)*(int *)(lVar5 + 0x110) * 0x90 + *(longlong *)(lVar5 + 0xe8);
  if (*(char *)(lVar5 + 0x130) == '\x01') {
    FUN_14448c9e8(lVar18,lVar4,0);
  }
  if ((longlong)*(int *)(lVar18 + 0x28) != 0) {
    lVar19 = *(longlong *)(lVar18 + 0x20);
    lVar18 = (longlong)*(int *)(lVar18 + 0x28) * 0x110;
    do {
      iVar14 = FUN_14919fd68(local_f0,lVar19);
      if (iVar14 != -1) {
        lVar15 = (longlong)iVar14 * 0x110;
        lVar1 = local_f0[0] + lVar15;
        pdVar2 = (double *)(local_f0[0] + 0xa0 + lVar15);
        pdVar3 = (double *)(local_f0[0] + 0xb0 + lVar15);
        auVar9._8_8_ = -(ulonglong)
                        (0.0010000000474974513 < ABS(pdVar2[1] - *(double *)(lVar19 + 0xa8)));
        auVar9._0_8_ = -(ulonglong)
                        (0.0010000000474974513 < ABS(*pdVar2 - *(double *)(lVar19 + 0xa0)));
        iVar14 = movmskpd((int)lVar15,auVar9);
        auVar6._8_8_ = -(ulonglong)
                        (0.0010000000474974513 < ABS(pdVar3[1] - *(double *)(lVar19 + 0xb8)));
        auVar6._0_8_ = -(ulonglong)
                        (0.0010000000474974513 < ABS(*pdVar3 - *(double *)(lVar19 + 0xb0)));
        uVar16 = movmskpd((int)local_f0[0],auVar6);
        if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
          lVar15 = -(ulonglong)
                    (0.0010000000474974513 <
                    ABS(*(double *)(lVar1 + 0x88) - *(double *)(lVar19 + 0x88)));
          auVar13._8_4_ = (int)lVar15;
          auVar13._0_8_ =
               -(ulonglong)
                (0.0010000000474974513 < ABS(*(double *)(lVar1 + 0x80) - *(double *)(lVar19 + 0x80))
                );
          auVar13._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
          uVar16 = movmskpd(iVar14,auVar13);
          auVar12._8_8_ =
               -(ulonglong)
                (0.0010000000474974513 < ABS(*(double *)(lVar1 + 0x98) - *(double *)(lVar19 + 0x98))
                );
          auVar12._0_8_ =
               -(ulonglong)
                (0.0010000000474974513 < ABS(*(double *)(lVar1 + 0x90) - *(double *)(lVar19 + 0x90))
                );
          iVar14 = movmskpd(0,auVar12);
          uVar17 = iVar14 << 2 | uVar16;
          if (uVar17 != 0) {
            auVar10._8_8_ =
                 -(ulonglong)
                  (0.0010000000474974513 <
                  ABS(*(double *)(lVar1 + 0x88) + *(double *)(lVar19 + 0x88)));
            auVar10._0_8_ =
                 -(ulonglong)
                  (0.0010000000474974513 <
                  ABS(*(double *)(lVar1 + 0x80) + *(double *)(lVar19 + 0x80)));
            uVar16 = movmskpd(uVar16,auVar10);
            auVar8._8_8_ = -(ulonglong)
                            (0.0010000000474974513 <
                            ABS(*(double *)(lVar1 + 0x98) + *(double *)(lVar19 + 0x98)));
            auVar8._0_8_ = -(ulonglong)
                            (0.0010000000474974513 <
                            ABS(*(double *)(lVar1 + 0x90) + *(double *)(lVar19 + 0x90)));
            uVar17 = movmskpd(uVar17,auVar8);
            if ((uVar17 & 0x3fffffff) != 0 || uVar16 != 0) goto LAB_144497e39;
          }
          auVar11._8_8_ =
               -(ulonglong)
                (0.0010000000474974513 < ABS(*(double *)(lVar1 + 200) - *(double *)(lVar19 + 200)));
          auVar11._0_8_ =
               -(ulonglong)
                (0.0010000000474974513 < ABS(*(double *)(lVar1 + 0xc0) - *(double *)(lVar19 + 0xc0))
                );
          iVar14 = movmskpd(uVar16,auVar11);
          auVar7._8_8_ = -(ulonglong)
                          (0.0010000000474974513 <
                          ABS(*(double *)(lVar1 + 0xd8) - *(double *)(lVar19 + 0xd8)));
          auVar7._0_8_ = -(ulonglong)
                          (0.0010000000474974513 <
                          ABS(*(double *)(lVar1 + 0xd0) - *(double *)(lVar19 + 0xd0)));
          uVar16 = movmskpd(0,auVar7);
          if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) goto LAB_144497e6b;
        }
LAB_144497e39:
        puVar20 = &DAT_149e1dd14;
        lVar15 = lVar19;
        if (*(char *)(lVar5 + 0x130) != '\0') {
          puVar20 = &DAT_149e1dd34;
          lVar15 = lVar1;
        }
        local_110 = 0x3f800000;
        local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0x41700000);
        FUN_144468c90(lVar4 + 0x170,&DAT_14c846480,lVar15 + 0x20,puVar20);
      }
LAB_144497e6b:
      lVar19 = lVar19 + 0x110;
      lVar18 = lVar18 + -0x110;
    } while (lVar18 != 0);
  }
  local_88 = 0;
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1401f963a(local_d0);
  if (local_f0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144497fe8 FUN_144497fe8 body=58 status=ok
// SIG undefined FUN_144497fe8(void)

undefined8 FUN_144497fe8(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  plVar2 = *(longlong **)(lVar1 + 8);
  if ((plVar2 == (longlong *)0x0) || ((*(uint *)(plVar2 + 1) >> 0x1e & 1) != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x398))(plVar2,CONCAT71((int7)((ulonglong)lVar1 >> 8),*param_1));
  }
  return 1;
}



// FUNCTION 144498022 FUN_144498022 body=60 status=ok
// SIG undefined FUN_144498022(void)

undefined8 FUN_144498022(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  if ((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) {
    *(undefined8 *)(*param_2 + 8) = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x390))(plVar1,param_1);
  }
  return 1;
}



// FUNCTION 14449805e FUN_14449805e body=4336 status=ok
// SIG undefined FUN_14449805e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14449805e(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  code **local_138;
  longlong local_130;
  undefined8 local_128;
  wchar_t *local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0 [2];
  code *local_c0;
  undefined1 local_b8 [8];
  code *local_b0;
  undefined1 local_a8 [8];
  code *local_a0;
  code *local_98 [8];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *param_2;
  uVar4 = *param_1;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_144498639;
    }
  }
  else {
LAB_144498639:
    puVar1 = (uint *)(lVar3 + 0x30);
    if ((((*(int *)(lVar3 + 0x34) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
        (DAT_14c9647dc <= (int)uVar2)) ||
       (((plVar14 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar3 + 0x34))) ||
        (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (lVar17 = *plVar14, lVar17 == 0)))))) {
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        lVar17 = FUN_140007850(lVar3 + 0x38);
        cVar6 = (*(code *)PTR_FUN_14c758760)();
        lVar10 = DAT_14c9647c8;
        if ((lVar17 == 0) || (cVar6 == '\0')) {
          if (lVar17 != 0) {
            uVar2 = *(uint *)(lVar17 + 0xc);
            *puVar1 = uVar2;
            if (DAT_14c9647dc <= (int)uVar2) goto LAB_1444987a3;
            lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            goto LAB_144498722;
          }
          *(undefined8 *)(lVar3 + 0x30) = 0;
        }
        else {
          uVar2 = *(uint *)(lVar17 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) + 8 +
                          (ulonglong)(uVar2 & 0xffff) * 0x18) & 0x8400000) == 0) {
              *puVar1 = uVar2;
              lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(lVar10 + (ulonglong)(uVar2 >> 0x10) * 8);
LAB_144498722:
              iVar7 = *(int *)(lVar10 + 0x10);
              if (*(int *)(lVar10 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar16 = DAT_14c964868 + 1;
                bVar18 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar18) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar16);
                }
                LOCK();
                iVar7 = *(int *)(lVar10 + 0x10);
                bVar18 = iVar7 == 0;
                if (bVar18) {
                  *(int *)(lVar10 + 0x10) = iVar16;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar18) {
                  iVar7 = iVar16;
                }
              }
              *(int *)(lVar3 + 0x34) = iVar7;
            }
          }
          else if ((_DAT_00000008 & 0x8400000) == 0) {
            *puVar1 = uVar2;
LAB_1444987a3:
            lVar10 = 0;
            goto LAB_144498722;
          }
          if ((*(uint *)(lVar17 + 8) >> 0x1e & 1) == 0) goto LAB_14449874d;
        }
      }
    }
    else {
LAB_14449874d:
      if (DAT_14c949118 == 0) {
        local_b0 = FUN_140631fbe;
        lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar10;
        FUN_1446f470e(local_a8,L"Class",1);
        local_108 = &LAB_146891e90;
        local_110 = (code *)&LAB_146273097;
        local_120 = L"Engine";
        local_118 = (wchar_t *)CONCAT44(local_118._4_4_,199);
        local_128 = 0x20;
        local_130 = CONCAT44(local_130._4_4_,0x10000000);
        local_138._0_4_ = 8;
        local_100 = &local_b0;
        FUN_14574b4b2(lVar10);
        DAT_14c949118 = lVar10;
        if (DAT_14c951858 == 0) {
          local_100 = local_98;
          local_98[0] = FUN_1449e2820;
          local_f0 = FUN_14081d0ea;
          local_f8 = FUN_14081d0ea;
          local_108 = &LAB_1468c5283;
          local_110 = FUN_142809da0;
          local_118 = L"Engine";
          local_120 = (wchar_t *)0x400000000;
          local_128 = CONCAT44(local_128._4_4_,0x10000000);
          local_130 = CONCAT44(local_130._4_4_,8);
          local_138._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar5 = DAT_14c951858;
        lVar10 = DAT_14c949118;
        if (DAT_14c948f88 == 0) {
          local_a0 = (code *)&DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_e0 = DAT_14c948f88;
          FUN_1446f470e(local_d0,L"Struct",1);
          local_100 = &local_a0;
          local_108 = &LAB_146891313;
          local_110 = FUN_146272f63;
          local_120 = L"Engine";
          local_118 = (wchar_t *)CONCAT44(local_118._4_4_,199);
          local_128 = 8;
          local_130 = CONCAT44(local_130._4_4_,0x10000020);
          local_138._0_4_ = 8;
          FUN_14574b4b2(local_e0);
          DAT_14c948f88 = local_e0;
          local_d8 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_100 = local_98;
            local_98[0] = FUN_1449e2820;
            local_f0 = FUN_14081d0ea;
            local_f8 = FUN_14081d0ea;
            local_108 = &LAB_146856450;
            local_110 = FUN_1427b121c;
            local_118 = L"Engine";
            local_120 = (wchar_t *)0x0;
            local_128 = CONCAT44(local_128._4_4_,0x10000021);
            local_130 = CONCAT44(local_130._4_4_,8);
            local_138._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_e0 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_e0;
          local_d8 = DAT_14c927740;
          uVar11 = FUN_1400163b0();
          local_138 = (code **)0x149e6bce8;
          FUN_14574b446(uVar11,local_e0,local_d8,L"/Script/CoreUObject");
        }
        local_138 = (code **)0x149e6ee30;
        FUN_14574b446(DAT_14c948f88,lVar10,lVar5,L"/Script/CoreUObject");
      }
      if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
          (lVar10 = FUN_1401242c6(), lVar10 != 0)) &&
         ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar17 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
           lVar10 + 0x30)))) goto LAB_1444980c4;
    }
    FUN_1491d0724(puVar1);
  }
LAB_1444980c4:
  if ((((*(int *)(lVar3 + 0x34) == 0) || (uVar2 = *(uint *)(lVar3 + 0x30), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (((plVar14 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar3 + 0x34))) ||
        ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))))) || (lVar17 = *plVar14, lVar17 == 0)) {
    if (*(longlong *)(lVar3 + 0x38) == 0) goto LAB_14449834e;
    lVar17 = FUN_140007850(lVar3 + 0x38);
    cVar6 = (*(code *)PTR_FUN_14c758760)();
    lVar10 = DAT_14c9647c8;
    if ((lVar17 == 0) || (cVar6 == '\0')) {
      if (lVar17 == 0) {
        *(undefined8 *)(lVar3 + 0x30) = 0;
        goto LAB_14449834e;
      }
      uVar2 = *(uint *)(lVar17 + 0xc);
      *(uint *)(lVar3 + 0x30) = uVar2;
      if (DAT_14c9647dc <= (int)uVar2) goto LAB_144498381;
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
LAB_144498324:
      iVar7 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar7 = *(int *)(lVar10 + 0x10);
        bVar18 = iVar7 == 0;
        if (bVar18) {
          *(int *)(lVar10 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar7 = iVar16;
        }
      }
      *(int *)(lVar3 + 0x34) = iVar7;
    }
    else {
      uVar2 = *(uint *)(lVar17 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar2 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(lVar3 + 0x30) = uVar2;
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(lVar10 + (ulonglong)(uVar2 >> 0x10) * 8);
          goto LAB_144498324;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar3 + 0x30) = uVar2;
LAB_144498381:
        lVar10 = 0;
        goto LAB_144498324;
      }
    }
    if ((*(uint *)(lVar17 + 8) >> 0x1e & 1) != 0) goto LAB_14449834e;
  }
  if (DAT_14c949118 == 0) {
    local_b0 = FUN_140631fbe;
    lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar10;
    FUN_1446f470e(local_a8,L"Class",1);
    local_108 = &LAB_146891e90;
    local_110 = (code *)&LAB_146273097;
    local_120 = L"Engine";
    local_118 = (wchar_t *)CONCAT44(local_118._4_4_,199);
    local_128 = 0x20;
    local_130 = CONCAT44(local_130._4_4_,0x10000000);
    local_138._0_4_ = 8;
    local_100 = &local_b0;
    FUN_14574b4b2(lVar10);
    DAT_14c949118 = lVar10;
    if (DAT_14c951858 == 0) {
      local_100 = local_98;
      local_98[0] = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = FUN_14081d0ea;
      local_108 = &LAB_1468c5283;
      local_110 = FUN_142809da0;
      local_118 = L"Engine";
      local_120 = (wchar_t *)0x400000000;
      local_128 = CONCAT44(local_128._4_4_,0x10000000);
      local_130 = CONCAT44(local_130._4_4_,8);
      local_138._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar5 = DAT_14c951858;
    lVar10 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_a0 = (code *)&DAT_1427db2a2;
      DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      local_e0 = DAT_14c948f88;
      FUN_1446f470e(local_d0,L"Struct",1);
      local_100 = &local_a0;
      local_108 = &LAB_146891313;
      local_110 = FUN_146272f63;
      local_120 = L"Engine";
      local_118 = (wchar_t *)CONCAT44(local_118._4_4_,199);
      local_128 = 8;
      local_130 = CONCAT44(local_130._4_4_,0x10000020);
      local_138._0_4_ = 8;
      FUN_14574b4b2(local_e0);
      DAT_14c948f88 = local_e0;
      local_d8 = DAT_14c927740;
      if (DAT_14c927740 == 0) {
        local_100 = local_98;
        local_98[0] = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_14081d0ea;
        local_108 = &LAB_146856450;
        local_110 = FUN_1427b121c;
        local_118 = L"Engine";
        local_120 = (wchar_t *)0x0;
        local_128 = CONCAT44(local_128._4_4_,0x10000021);
        local_130 = CONCAT44(local_130._4_4_,8);
        local_138._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        local_e0 = DAT_14c948f88;
      }
      DAT_14c948f88 = local_e0;
      local_d8 = DAT_14c927740;
      uVar11 = FUN_1400163b0();
      local_138 = (code **)0x149e6bce8;
      FUN_14574b446(uVar11,local_e0,local_d8,L"/Script/CoreUObject");
    }
    local_138 = (code **)0x149e6ee30;
    FUN_14574b446(DAT_14c948f88,lVar10,lVar5,L"/Script/CoreUObject");
  }
  if (((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
     ((lVar10 = FUN_1401242c6(), lVar10 == 0 ||
      ((*(int *)(lVar17 + 0x38) < *(int *)(lVar10 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30)))))) goto LAB_14449834e;
  FUN_1491d2e16(lVar3,local_d0);
  FUN_1491d2fda(param_1 + 7,local_98,local_d0);
  uVar11 = FUN_1491b2884(uVar4,lVar3 + 0x20);
  if (((*(int *)(lVar3 + 0x34) == 0) ||
      (((uVar2 = *(uint *)(lVar3 + 0x30), (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
       (puVar15 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar15 == (undefined8 *)0x0)))) ||
     (((*(int *)(puVar15 + 2) != *(int *)(lVar3 + 0x34) ||
       ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) ||
      (pcVar12 = (code *)*puVar15, pcVar12 == (code *)0x0)))) {
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      pcVar12 = (code *)FUN_140007850(lVar3 + 0x38);
      cVar6 = (*(code *)PTR_FUN_14c758760)();
      lVar17 = DAT_14c9647c8;
      if ((pcVar12 == (code *)0x0) || (cVar6 == '\0')) {
        if (pcVar12 != (code *)0x0) {
          uVar2 = *(uint *)(pcVar12 + 0xc);
          *(uint *)(lVar3 + 0x30) = uVar2;
          if (DAT_14c9647dc <= (int)uVar2) goto LAB_144498400;
          lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          goto LAB_144498403;
        }
        *(undefined8 *)(lVar3 + 0x30) = 0;
      }
      else {
        uVar2 = *(uint *)(pcVar12 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar2 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar3 + 0x30) = uVar2;
            lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(lVar17 + (ulonglong)(uVar2 >> 0x10) * 8);
LAB_144498403:
            iVar7 = *(int *)(lVar17 + 0x10);
            if (*(int *)(lVar17 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar18) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
              }
              LOCK();
              iVar7 = *(int *)(lVar17 + 0x10);
              bVar18 = iVar7 == 0;
              if (bVar18) {
                *(int *)(lVar17 + 0x10) = iVar16;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar18) {
                iVar7 = iVar16;
              }
            }
            *(int *)(lVar3 + 0x34) = iVar7;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar3 + 0x30) = uVar2;
LAB_144498400:
          lVar17 = 0;
          goto LAB_144498403;
        }
        if ((*(uint *)(pcVar12 + 8) >> 0x1e & 1) == 0) goto LAB_14449841c;
      }
    }
LAB_144498492:
    local_a0 = (code *)0x0;
  }
  else {
LAB_14449841c:
    if (DAT_14c949118 == 0) {
      local_c0 = FUN_140631fbe;
      lVar17 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar17;
      FUN_1446f470e(local_b8,L"Class",1);
      local_108 = &LAB_146891e90;
      local_110 = (code *)&LAB_146273097;
      local_120 = L"Engine";
      local_118 = (wchar_t *)CONCAT44(local_118._4_4_,199);
      local_128 = 0x20;
      local_130 = CONCAT44(local_130._4_4_,0x10000000);
      local_138._0_4_ = 8;
      local_100 = &local_c0;
      FUN_14574b4b2(lVar17);
      DAT_14c949118 = lVar17;
      if (DAT_14c951858 == 0) {
        local_100 = &local_a0;
        local_a0 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_14081d0ea;
        local_108 = &LAB_1468c5283;
        local_110 = FUN_142809da0;
        local_118 = L"Engine";
        local_120 = (wchar_t *)0x400000000;
        local_128 = CONCAT44(local_128._4_4_,0x10000000);
        local_130 = CONCAT44(local_130._4_4_,8);
        local_138._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar10 = DAT_14c951858;
      lVar17 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_b0 = (code *)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_e0 = DAT_14c948f88;
        FUN_1446f470e(local_a8,L"Struct",1);
        local_100 = &local_b0;
        local_108 = &LAB_146891313;
        local_110 = FUN_146272f63;
        local_120 = L"Engine";
        local_118 = (wchar_t *)CONCAT44(local_118._4_4_,199);
        local_128 = 8;
        local_130 = CONCAT44(local_130._4_4_,0x10000020);
        local_138._0_4_ = 8;
        FUN_14574b4b2(local_e0);
        DAT_14c948f88 = local_e0;
        local_d8 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_100 = &local_a0;
          local_a0 = FUN_1449e2820;
          local_f0 = FUN_14081d0ea;
          local_f8 = FUN_14081d0ea;
          local_108 = &LAB_146856450;
          local_110 = FUN_1427b121c;
          local_118 = L"Engine";
          local_120 = (wchar_t *)0x0;
          local_128 = CONCAT44(local_128._4_4_,0x10000021);
          local_130 = CONCAT44(local_130._4_4_,8);
          local_138._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_e0 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_e0;
        local_d8 = DAT_14c927740;
        uVar13 = FUN_1400163b0();
        local_138 = (code **)0x149e6bce8;
        FUN_14574b446(uVar13,local_e0,local_d8,L"/Script/CoreUObject");
      }
      local_138 = (code **)0x149e6ee30;
      FUN_14574b446(DAT_14c948f88,lVar17,lVar10,L"/Script/CoreUObject");
    }
    if ((((*(int *)(*(longlong *)(pcVar12 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
        (lVar17 = FUN_1401242c6(), lVar17 == 0)) ||
       (*(int *)(pcVar12 + 0x38) < *(int *)(lVar17 + 0x38))) goto LAB_144498492;
    local_a0 = (code *)0x0;
    if (*(longlong *)(*(longlong *)(pcVar12 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
        lVar17 + 0x30) {
      local_a0 = pcVar12;
    }
    if ((local_a0 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  local_138 = local_98;
  local_130 = lVar3 + 0xa8;
  FUN_1491b5092(uVar4,lVar3,&local_a0,uVar11);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(local_98);
  if (local_d0[0] != 0) {
    FUN_1400020a8();
  }
LAB_14449834e:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 144499150 FUN_144499150 body=78 status=ok
// SIG undefined FUN_144499150(void)

undefined8 * FUN_144499150(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bb76d60;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1491b37d2(puVar1 + 2,param_1 + 0x10);
  return puVar1 + 1;
}



// FUNCTION 1444991a4 FUN_1444991a4 body=29 status=ok
// SIG undefined FUN_1444991a4(void)

void FUN_1444991a4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444991c2 FUN_1444991c2 body=52 status=ok
// SIG undefined FUN_1444991c2(void)

undefined8 * FUN_1444991c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb76d60;
  FUN_145d30558(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444991f6 FUN_1444991f6 body=220 status=ok
// SIG undefined FUN_1444991f6(void)

undefined8 FUN_1444991f6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  uVar2 = *param_1;
  FUN_1491b27f6(lVar1,local_40);
  lVar4 = FUN_1491d324c(param_1 + 1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar4 != 0) {
    FUN_1491d2e16(lVar4,local_40);
    FUN_1491b5748(uVar2,local_40,lVar4 + 0xf8);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = *(longlong **)(lVar1 + 8);
  if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 1) >> 0x1e & 1) != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444992d4 FUN_1444992d4 body=978 status=ok
// SIG undefined FUN_1444992d4(void)

/* WARNING: Removing unreachable block (ram,0x000144499691) */

undefined8 FUN_1444992d4(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  void *pvVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_f8 [40];
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  void *local_a8;
  uint local_a0;
  undefined4 local_9c;
  longlong local_98;
  void *local_90;
  uint local_88;
  void *local_80;
  uint local_78;
  undefined4 local_74;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = *param_2;
  plVar6 = *(longlong **)(lVar5 + 8);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = param_1[1];
    if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) {
      cVar10 = (**(code **)(*plVar6 + 0x2f8))(plVar6,*param_1);
      if (cVar10 == '\0') goto LAB_1444993f8;
      cVar10 = FUN_1403f35db(*(undefined8 *)*param_1,&DAT_14cc06a40);
      if (cVar10 != '\0') {
        FUN_1491b2bfa(lVar5,&local_90);
        pvVar9 = local_90;
        local_a8 = (void *)0x0;
        local_a0 = local_88;
        if ((longlong)(int)local_88 == 0) {
          local_9c = 0;
          local_98 = param_1[2];
          local_78 = 0;
LAB_144499447:
          local_80 = (void *)0x0;
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_a8,local_88,0);
          memcpy(local_a8,pvVar9,(longlong)(int)local_88 * 2);
          pvVar9 = local_a8;
          lVar13 = (longlong)(int)local_a0;
          local_98 = param_1[2];
          local_80 = (void *)0x0;
          local_78 = local_a0;
          if (lVar13 == 0) goto LAB_144499447;
          FUN_1446dd670(&local_80,local_a0,0);
          memcpy(local_80,pvVar9,lVar13 * 2);
        }
        pvVar9 = local_80;
        local_d0 = (void *)0x0;
        lVar13 = (longlong)(int)local_78;
        local_c8 = CONCAT44(local_c8._4_4_,local_78);
        local_70 = local_98;
        if (lVar13 == 0) {
          local_c8 = (ulonglong)local_78;
        }
        else {
          FUN_1446dd670(&local_d0,local_78,0);
          memcpy(local_d0,pvVar9,lVar13 * 2);
        }
        puVar15 = (undefined8 *)param_1[6];
        local_c0 = local_70;
        if ((longlong)*(int *)(param_1 + 7) == 0) {
          bVar17 = false;
          puVar16 = puVar15;
        }
        else {
          puVar1 = (undefined8 *)((longlong)puVar15 + (longlong)*(int *)(param_1 + 7) * 0xc);
          do {
            local_68 = *puVar15;
            local_60 = *(undefined4 *)(puVar15 + 1);
            FUN_1491da198(local_c0,&local_58);
            if ((int)local_c8 == local_50) {
              bVar17 = true;
              if (1 < (int)local_c8) {
                lVar13 = 0;
                while( true ) {
                  uVar3 = *(ushort *)((longlong)local_d0 + lVar13);
                  uVar12 = (uint)uVar3;
                  uVar4 = *(ushort *)(local_58 + lVar13);
                  uVar14 = (uint)uVar4;
                  if (uVar3 != uVar4) {
                    if ((uVar4 | uVar3) < 0x80) {
                      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_14449953c;
                    }
                    iVar11 = uVar12 - uVar14;
                    goto LAB_144499581;
                  }
                  if (uVar3 == 0) break;
LAB_14449953c:
                  lVar13 = lVar13 + 2;
                }
                iVar11 = 0;
LAB_144499581:
                bVar17 = iVar11 == 0;
              }
            }
            else {
              bVar17 = local_50 + (int)local_c8 == 1;
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            puVar16 = puVar15;
          } while ((!bVar17) &&
                  (puVar15 = (undefined8 *)((longlong)puVar15 + 0xc), puVar16 = puVar1,
                  puVar15 != puVar1));
        }
        if (local_d0 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (!(bool)(bVar17 & puVar16 != (undefined8 *)0x0)) goto LAB_1444993f8;
      }
      uVar8 = *(undefined8 *)*param_1;
      FUN_1491b27f6(lVar5);
      local_b0 = 0;
      lVar13 = (longlong)*(int *)(lVar7 + 0xbc0);
      uVar12 = *(int *)(lVar7 + 0xbc0) + 1;
      *(uint *)(lVar7 + 0xbc0) = uVar12;
      local_c0 = lVar5;
      uStack_b8 = uVar8;
      if (*(uint *)(lVar7 + 0xbc4) < uVar12) {
        FUN_1491d0a8c((longlong *)(lVar7 + 3000));
      }
      lVar5 = *(longlong *)(lVar7 + 3000);
      *(undefined8 *)(lVar5 + lVar13 * 0x28) = 0;
      *(void **)(lVar5 + lVar13 * 0x28) = local_d0;
      local_d0 = (void *)0x0;
      *(int *)(lVar5 + 8 + lVar13 * 0x28) = (int)local_c8;
      *(undefined4 *)(lVar5 + 0xc + lVar13 * 0x28) = local_c8._4_4_;
      local_c8 = 0;
      *(undefined1 *)(lVar5 + 0x20 + lVar13 * 0x28) = local_b0;
      puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar13 * 0x28);
      *puVar2 = (undefined4)local_c0;
      puVar2[1] = local_c0._4_4_;
      puVar2[2] = (undefined4)uStack_b8;
      puVar2[3] = uStack_b8._4_4_;
      goto LAB_1444993f8;
    }
  }
  *(undefined8 *)(lVar5 + 8) = 0;
LAB_1444993f8:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444996a8 FUN_1444996a8 body=2902 status=ok
// SIG undefined FUN_1444996a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1444996a8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  code *pcVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_80;
  code *local_78;
  int local_70;
  code *local_68;
  undefined1 local_60 [8];
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = *param_2;
  lVar2 = *param_1;
  if ((((((*(int *)(lVar7 + 0x34) == 0) || (uVar1 = *(uint *)(lVar7 + 0x30), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       ((plVar11 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(lVar7 + 0x34))))) ||
      ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (lVar15 = *plVar11, lVar15 == 0)) {
    if (*(longlong *)(lVar7 + 0x38) == 0) goto LAB_14449992f;
    lVar15 = FUN_140007850(lVar7 + 0x38);
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    lVar6 = DAT_14c9647c8;
    if ((lVar15 == 0) || (cVar4 == '\0')) {
      if (lVar15 == 0) {
        *(undefined8 *)(lVar7 + 0x30) = 0;
        goto LAB_14449992f;
      }
      uVar1 = *(uint *)(lVar15 + 0xc);
      *(uint *)(lVar7 + 0x30) = uVar1;
      if (DAT_14c9647dc <= (int)uVar1) goto LAB_144499964;
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_144499900:
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar16 = iVar5 == 0;
        if (bVar16) {
          *(int *)(lVar6 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar5 = iVar12;
        }
      }
      *(int *)(lVar7 + 0x34) = iVar5;
    }
    else {
      uVar1 = *(uint *)(lVar15 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(lVar7 + 0x30) = uVar1;
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(lVar6 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_144499900;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar7 + 0x30) = uVar1;
LAB_144499964:
        lVar6 = 0;
        goto LAB_144499900;
      }
    }
    if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) != 0) goto LAB_14449992f;
  }
  if (DAT_14c949118 == 0) {
    local_68 = FUN_140631fbe;
    lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar6;
    FUN_1446f470e(local_60,L"Class",1);
    local_a8 = &LAB_146891e90;
    local_b0 = (code *)&LAB_146273097;
    local_c0 = L"Engine";
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
    local_c8 = 0x20;
    local_d0 = 0x10000000;
    local_d8._0_4_ = 8;
    local_a0 = &local_68;
    FUN_14574b4b2(lVar6);
    DAT_14c949118 = lVar6;
    if (DAT_14c951858 == 0) {
      local_a0 = &local_78;
      local_78 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x400000000;
      local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
      local_d0 = 8;
      local_d8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = DAT_14c951858;
    lVar6 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_58 = (code *)&DAT_1427db2a2;
      lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948f88 = lVar9;
      FUN_1446f470e(local_50,L"Struct",1);
      local_a0 = &local_58;
      local_a8 = &LAB_146891313;
      local_b0 = FUN_146272f63;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 8;
      local_d0 = 0x10000020;
      local_d8._0_4_ = 8;
      FUN_14574b4b2(lVar9);
      local_80 = DAT_14c927740;
      DAT_14c948f88 = lVar9;
      if (DAT_14c927740 == 0) {
        local_a0 = &local_78;
        local_78 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_146856450;
        local_b0 = FUN_1427b121c;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x0;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
        local_d0 = 8;
        local_d8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar9 = DAT_14c948f88;
      local_80 = DAT_14c927740;
      uVar10 = FUN_1400163b0();
      local_d8 = L"Struct";
      FUN_14574b446(uVar10,lVar9,local_80,L"/Script/CoreUObject");
    }
    local_d8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar6,lVar3,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar6 = FUN_1401242c6(), lVar6 == 0)) ||
     ((*(int *)(lVar15 + 0x38) < *(int *)(lVar6 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)))) goto LAB_14449992f;
  if (((*(int *)(lVar7 + 0x34) == 0) ||
      ((uVar1 = *(uint *)(lVar7 + 0x30), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)))) ||
     ((plVar11 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
      plVar11 == (longlong *)0x0 ||
      ((((int)plVar11[2] != *(int *)(lVar7 + 0x34) || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))
       || (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)))))) {
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      plVar11 = (longlong *)FUN_140007850(lVar7 + 0x38);
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      lVar15 = DAT_14c9647c8;
      if ((plVar11 == (longlong *)0x0) || (cVar4 == '\0')) {
        if (plVar11 != (longlong *)0x0) {
          uVar1 = *(uint *)((longlong)plVar11 + 0xc);
          *(uint *)(lVar7 + 0x30) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_144499b3c;
          lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_144499a12;
        }
        *(undefined8 *)(lVar7 + 0x30) = 0;
      }
      else {
        uVar1 = *(uint *)((longlong)plVar11 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar7 + 0x30) = uVar1;
            lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(lVar15 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_144499a12:
            iVar5 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar16) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar5 = *(int *)(lVar15 + 0x10);
              bVar16 = iVar5 == 0;
              if (bVar16) {
                *(int *)(lVar15 + 0x10) = iVar12;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar16) {
                iVar5 = iVar12;
              }
            }
            *(int *)(lVar7 + 0x34) = iVar5;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar7 + 0x30) = uVar1;
LAB_144499b3c:
          lVar15 = 0;
          goto LAB_144499a12;
        }
        if ((*(uint *)(plVar11 + 1) >> 0x1e & 1) == 0) goto LAB_144499801;
      }
    }
LAB_144499a45:
    plVar13 = (longlong *)0x0;
  }
  else {
LAB_144499801:
    if (DAT_14c949118 == 0) {
      local_68 = FUN_140631fbe;
      lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar7;
      FUN_1446f470e(local_60,L"Class",1);
      local_a8 = &LAB_146891e90;
      local_b0 = (code *)&LAB_146273097;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 0x20;
      local_d0 = 0x10000000;
      local_d8._0_4_ = 8;
      local_a0 = &local_68;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_a0 = &local_78;
        local_78 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_1468c5283;
        local_b0 = FUN_142809da0;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x400000000;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
        local_d0 = 8;
        local_d8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar15 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_58 = (code *)&DAT_1427db2a2;
        lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar6;
        FUN_1446f470e(local_50,L"Struct",1);
        local_a8 = &LAB_146891313;
        local_b0 = FUN_146272f63;
        local_c0 = L"Engine";
        local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
        local_c8 = 8;
        local_d0 = 0x10000020;
        local_d8._0_4_ = 8;
        local_a0 = &local_58;
        FUN_14574b4b2(lVar6);
        DAT_14c948f88 = lVar6;
        if (DAT_14c927740 == 0) {
          local_a0 = &local_78;
          local_78 = FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a8 = &LAB_146856450;
          local_b0 = FUN_1427b121c;
          local_b8 = L"Engine";
          local_c0 = (wchar_t *)0x0;
          local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
          local_d0 = 8;
          local_d8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar3 = DAT_14c948f88;
        lVar6 = DAT_14c927740;
        uVar10 = FUN_1400163b0();
        local_d8 = L"Struct";
        FUN_14574b446(uVar10,lVar3,lVar6,L"/Script/CoreUObject");
      }
      local_d8 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar7,lVar15,L"/Script/CoreUObject");
    }
    if (((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
         DAT_14c949118 + 0x30)) ||
       ((lVar7 = FUN_1401242c6(), lVar7 == 0 || ((int)plVar11[7] < *(int *)(lVar7 + 0x38)))))
    goto LAB_144499a45;
    plVar13 = (longlong *)0x0;
    if (*(longlong *)(plVar11[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30) {
      plVar13 = plVar11;
    }
  }
  plVar11 = (longlong *)plVar13[0x22];
  if (plVar11 == (longlong *)0x0) {
    (**(code **)(*plVar13 + 1000))(plVar13);
    plVar11 = (longlong *)plVar13[0x22];
    if (plVar11 == (longlong *)0x0) goto LAB_14449992f;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x300))();
  local_78 = (code *)0x0;
  local_70 = *(int *)(puVar8 + 1);
  lVar7 = (longlong)local_70;
  _Src = (void *)*puVar8;
  if (lVar7 != 0) {
    FUN_1401b309e(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar7 << 3);
    if ((longlong)local_70 != 0) {
      lVar7 = (longlong)local_70 << 3;
      pcVar14 = local_78;
      do {
        FUN_140721fbe(lVar2 + 0xaf0,pcVar14);
        pcVar14 = pcVar14 + 8;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
LAB_14449992f:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14449a22a FUN_14449a22a body=29 status=ok
// SIG undefined FUN_14449a22a(void)

undefined8 FUN_14449a22a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14449a248 FUN_14449a248 body=1556 status=ok
// SIG undefined FUN_14449a248(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14449a248(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_88;
  longlong local_80;
  code *local_78 [2];
  code *local_68;
  undefined1 local_60 [8];
  code *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_2;
  uVar3 = *param_1;
  if ((((*(int *)(lVar2 + 0x34) == 0) || (uVar1 = *(uint *)(lVar2 + 0x30), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar2 + 0x34))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar7 = *plVar9, lVar7 == 0)))))) {
    if (*(longlong *)(lVar2 + 0x38) != 0) {
      lVar7 = FUN_140007850(lVar2 + 0x38);
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      lVar6 = DAT_14c9647c8;
      if ((lVar7 == 0) || (cVar4 == '\0')) {
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar7 + 0xc);
          *(uint *)(lVar2 + 0x30) = uVar1;
          if (DAT_14c9647dc <= (int)uVar1) goto LAB_14449a4c3;
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          goto LAB_14449a3ca;
        }
        *(undefined8 *)(lVar2 + 0x30) = 0;
      }
      else {
        uVar1 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar2 + 0x30) = uVar1;
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(lVar6 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_14449a3ca:
            iVar5 = *(int *)(lVar6 + 0x10);
            if (*(int *)(lVar6 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar12 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar12) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar5 = *(int *)(lVar6 + 0x10);
              bVar12 = iVar5 == 0;
              if (bVar12) {
                *(int *)(lVar6 + 0x10) = iVar10;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar12) {
                iVar5 = iVar10;
              }
            }
            *(int *)(lVar2 + 0x34) = iVar5;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar2 + 0x30) = uVar1;
LAB_14449a4c3:
          lVar6 = 0;
          goto LAB_14449a3ca;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_14449a2c9;
      }
    }
  }
  else {
LAB_14449a2c9:
    if (DAT_14c949118 == 0) {
      local_68 = FUN_140631fbe;
      lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar6;
      FUN_1446f470e(local_60,L"Class",1);
      local_a8 = &LAB_146891e90;
      local_b0 = (code *)&LAB_146273097;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 0x20;
      local_d0 = 0x10000000;
      local_d8._0_4_ = 8;
      local_a0 = &local_68;
      FUN_14574b4b2(lVar6);
      DAT_14c949118 = lVar6;
      if (DAT_14c951858 == 0) {
        local_a0 = local_78;
        local_78[0] = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_1468c5283;
        local_b0 = FUN_142809da0;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x400000000;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
        local_d0 = 8;
        local_d8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar11 = DAT_14c951858;
      lVar6 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_58 = (code *)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_88 = DAT_14c948f88;
        FUN_1446f470e(&local_50,L"Struct",1);
        local_a0 = &local_58;
        local_a8 = &LAB_146891313;
        local_b0 = FUN_146272f63;
        local_c0 = L"Engine";
        local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
        local_c8 = 8;
        local_d0 = 0x10000020;
        local_d8._0_4_ = 8;
        FUN_14574b4b2(local_88);
        DAT_14c948f88 = local_88;
        local_80 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_a0 = local_78;
          local_78[0] = FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a8 = &LAB_146856450;
          local_b0 = FUN_1427b121c;
          local_b8 = L"Engine";
          local_c0 = (wchar_t *)0x0;
          local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
          local_d0 = 8;
          local_d8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_88 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_88;
        local_80 = DAT_14c927740;
        uVar8 = FUN_1400163b0();
        local_d8 = L"Struct";
        FUN_14574b446(uVar8,local_88,local_80,L"/Script/CoreUObject");
      }
      local_d8 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar6,lVar11,L"/Script/CoreUObject");
    }
    if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
        (lVar6 = FUN_1401242c6(), lVar6 != 0)) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))
       ) {
      lVar11 = 0;
      if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30) {
        lVar11 = lVar7;
      }
      goto LAB_14449a3ff;
    }
  }
  lVar11 = 0;
LAB_14449a3ff:
  lVar7 = param_1[1];
  if (((lVar7 == 0) || (lVar6 = FUN_1401242c6(), lVar6 == 0)) ||
     ((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)))) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1[1];
  }
  if (lVar11 == lVar7) {
    local_50 = param_1[2];
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1491d2e16(lVar2,local_78);
    FUN_144492f46(uVar3,local_78,&local_50);
    if (local_78[0] != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14449a85e FUN_14449a85e body=149 status=ok
// SIG undefined FUN_14449a85e(void)

undefined8 * FUN_14449a85e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14bb76da0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3[3] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(param_1 + 0x20);
  return puVar3 + 1;
}



// FUNCTION 14449a8fa FUN_14449a8fa body=29 status=ok
// SIG undefined FUN_14449a8fa(void)

void FUN_14449a8fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14449a918 FUN_14449a918 body=29 status=ok
// SIG undefined FUN_14449a918(void)

undefined8 FUN_14449a918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14449a936 FUN_14449a936 body=39 status=ok
// SIG undefined FUN_14449a936(void)

undefined1 FUN_14449a936(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  uVar1 = *(undefined1 *)(lVar3 + 0x48);
  *(undefined1 *)(lVar3 + 0x48) = 1;
  FUN_1491bb856(lVar3,uVar2);
  *(undefined1 *)(lVar3 + 0x48) = uVar1;
  return 1;
}



// FUNCTION 14449a988 FUN_14449a988 body=29 status=ok
// SIG undefined FUN_14449a988(void)

undefined8 FUN_14449a988(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14449a9a6 FUN_14449a9a6 body=1579 status=ok
// SIG undefined FUN_14449a9a6(void)

undefined8 FUN_14449a9a6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  undefined8 *local_f0;
  uint local_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  uint *local_c8;
  longlong local_c0 [2];
  longlong *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *param_2;
  if (param_1[1] != lVar1) {
    local_e0 = *param_1;
    local_78 = 0;
    uStack_70 = 0;
    uVar5 = *(uint *)(lVar1 + 0x120);
    if (uVar5 == 0) {
      uVar21 = 1;
      uVar20 = 0;
      iVar14 = 0;
      uVar4 = 0;
    }
    else {
      puVar6 = *(uint **)(lVar1 + 0x118);
      if (*(uint **)(lVar1 + 0x118) == (uint *)0x0) {
        puVar6 = (uint *)(lVar1 + 0x108);
      }
      uVar4 = *puVar6;
      if (uVar4 == 0) {
        iVar14 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar14 = uVar5 - 1;
        }
        uVar20 = 0;
        uVar21 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar21 = uVar20;
        }
        iVar14 = 0;
        do {
          if (uVar21 == uVar20) goto LAB_14449af90;
          iVar14 = iVar14 + 0x20;
          uVar4 = puVar6[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar20 = 0;
        iVar14 = 0;
      }
      uVar21 = (ulonglong)(-uVar4 & uVar4);
      uVar10 = uVar21 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar4 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar4) {
        uVar4 = uVar5;
      }
    }
    if (uVar4 != uVar5) {
      uVar12 = 0xffffffff;
      local_d8 = (ulonglong)uVar5;
      local_d0 = param_1;
      local_c8 = (uint *)(lVar1 + 0x108);
      do {
        local_f0 = *(undefined8 **)(lVar1 + 0xf8);
        lVar13 = (longlong)(int)uVar4;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = (undefined2 *)0x0;
        local_90 = *(int *)(local_f0 + lVar13 * 4 + 2);
        lVar17 = (longlong)local_90;
        _Src = (void *)local_f0[lVar13 * 4 + 1];
        local_e4 = uVar12;
        if (lVar17 == 0) {
          local_8c = 0;
        }
        else {
          FUN_1446dd670(&local_98,local_90,0);
          memcpy(local_98,_Src,lVar17 * 2);
        }
        puVar18 = local_f0 + lVar13 * 4 + 1;
        FUN_1491d31c2(puVar18,&local_88,&local_98,1);
        if ((int)uStack_80 == *(int *)(local_d0 + 3)) {
          if (1 < (int)uStack_80) {
            lVar17 = 0;
            while( true ) {
              uVar9 = *(ushort *)(local_88 + lVar17);
              uVar10 = (ulonglong)uVar9;
              uVar15 = *(ushort *)(local_d0[2] + lVar17);
              if (uVar9 != uVar15) break;
              if (uVar9 == 0) goto LAB_14449abf4;
LAB_14449abb1:
              lVar17 = lVar17 + 2;
            }
            if ((uVar15 | uVar9) < 0x80) {
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar16 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar16]) goto LAB_14449abb1;
            }
            if (uVar9 != uVar15) goto LAB_14449acb0;
          }
LAB_14449abf4:
          puVar11 = &DAT_149dfb77a;
          if (local_90 != 0) {
            puVar11 = local_98;
          }
          lVar17 = local_d0[4];
          FUN_1446f470e(&local_a0,puVar11,1);
          uVar10 = uStack_70;
          lVar17 = *(longlong *)(lVar17 + 0x70);
          if (lVar17 != 0) {
            local_f0 = local_f0 + lVar13 * 4;
            do {
              if (*(longlong *)(lVar17 + 0x20) == local_a0) {
                if ((*(ulonglong *)(lVar17 + 0x38) & 0x40000010000) == 0 &&
                    (*(ulonglong *)(lVar17 + 0x38) & 0x20001) != 0) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c844850) &&
                     (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
                    DAT_14c844840[1] = 0;
                    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
                    DAT_14c844840[2] = -1;
                    DAT_14c844840[3] = 0;
                    DAT_14c844840[4] = 0;
                    DAT_14c844840[5] = 0;
                    if (DAT_14c844840 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                      UNLOCK();
                    }
                    DAT_14c844848 = 0;
                    atexit(FUN_142760bef);
                    _Init_thread_footer(&DAT_14c844850);
                  }
                  local_b0 = DAT_14c844840;
                  if (DAT_14c844840 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                      LOCK();
                      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                      UNLOCK();
                    }
                    else {
                      (**(code **)(*DAT_14c844840 + 8))();
                    }
                  }
                  local_a8 = 0;
                  FUN_1491d2e16(lVar1,local_c0);
                  local_f8 = &local_b0;
                  cVar3 = FUN_1491ba362(local_e0,local_c0,local_f0,puVar18);
                  if (local_c0[0] != 0) {
                    FUN_1400020a8();
                  }
                  uVar10 = uStack_70;
                  if (cVar3 == '\0') {
                    lVar13 = (longlong)(int)uStack_70;
                    uVar5 = (int)uStack_70 + 1;
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
                    if (uStack_70._4_4_ < uVar5) {
                      FUN_1446f84a2(&local_78,uVar10 & 0xffffffff);
                    }
                    *(undefined8 *)(local_78 + lVar13 * 8) = *local_f0;
                  }
                  if (local_b0 != (longlong *)0x0) {
                    (**(code **)(*local_b0 + 0x10))();
                  }
                }
                else {
                  lVar13 = (longlong)(int)uStack_70;
                  uVar5 = (int)uStack_70 + 1;
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
                  if (uStack_70._4_4_ < uVar5) {
                    FUN_1446f84a2(&local_78,uVar10 & 0xffffffff);
                  }
                  *(undefined8 *)(local_78 + lVar13 * 8) = *local_f0;
                }
                break;
              }
              lVar17 = *(longlong *)(lVar17 + 0x48);
            } while (lVar17 != 0);
          }
        }
        else if (*(int *)(local_d0 + 3) + (int)uStack_80 == 1) goto LAB_14449abf4;
LAB_14449acb0:
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar12 = local_e4;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        uVar2 = local_e0;
        uVar12 = uVar12 & ~(uint)uVar21;
        puVar6 = *(uint **)(lVar1 + 0x118);
        if (*(uint **)(lVar1 + 0x118) == (uint *)0x0) {
          puVar6 = local_c8;
        }
        uVar5 = *(uint *)(lVar1 + 0x120);
        iVar19 = (int)uVar20;
        lVar13 = (longlong)iVar19;
        uVar4 = puVar6[lVar13] & uVar12;
        if (uVar4 == 0) {
          iVar7 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar7 = uVar5 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar19) {
            iVar8 = iVar19;
          }
          if (iVar19 < iVar7) {
            lVar17 = 0;
            do {
              uVar4 = puVar6[lVar13 + lVar17 + 1];
              if (uVar4 != 0) {
                uVar20 = (ulonglong)(iVar19 + (int)lVar17 + 1);
                uVar12 = 0xffffffff;
                goto LAB_14449ad5b;
              }
              iVar14 = iVar14 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar8 - lVar13 != lVar17);
            uVar12 = 0xffffffff;
            iVar19 = iVar8;
          }
          uVar20 = (ulonglong)(iVar19 + 1);
          uVar4 = uVar5;
        }
        else {
LAB_14449ad5b:
          uVar21 = (ulonglong)(-uVar4 & uVar4);
          uVar10 = uVar21 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar4 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar4) {
            uVar4 = uVar5;
          }
        }
      } while (uVar4 != (uint)local_d8);
      if ((longlong)(int)uStack_70 != 0) {
        lVar17 = (longlong)(int)uStack_70 << 3;
        lVar13 = local_78;
        do {
          FUN_1491d2e16(lVar1,&local_88);
          FUN_144493de8(uVar2,&local_88,lVar13);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          lVar13 = lVar13 + 8;
          lVar17 = lVar17 + -8;
        } while (lVar17 != 0);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
  }
LAB_14449af90:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449afd2 FUN_14449afd2 body=160 status=ok
// SIG undefined FUN_14449afd2(void)

undefined8 * FUN_14449afd2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14bb76de0;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
  *(undefined4 *)(puVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar5 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 3,iVar1,0);
    memcpy((void *)puVar5[3],_Src,(longlong)iVar1 * 2);
  }
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  return puVar5 + 1;
}



// FUNCTION 14449b078 FUN_14449b078 body=29 status=ok
// SIG undefined FUN_14449b078(void)

void FUN_14449b078(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14449b096 FUN_14449b096 body=57 status=ok
// SIG undefined FUN_14449b096(void)

undefined8 * FUN_14449b096(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb76de0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14449b0cf FUN_14449b0cf body=2865 status=ok
// SIG undefined FUN_14449b0cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14449b0cf(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  ppuStack_80 = &PTR_FUN_14bb5bec0;
  uStack_78 = 4;
  local_88 = 0x1f;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb5bf40);
  FUN_1446f470e(&local_68,PTR_u_bool_14c764e60,1);
  _DAT_14cc06778 = (ulonglong)local_68 & 0xffffffff;
  _DAT_14cc06780 = (undefined4)((ulonglong)local_68 >> 0x20);
  DAT_14cc06784 = 0;
  FUN_1446f470e(&local_68,PTR_u_float_14c764e68,1);
  _DAT_14cc06788 = (ulonglong)local_68 & 0xffffffff;
  _DAT_14cc06790 = (undefined4)((ulonglong)local_68 >> 0x20);
  DAT_14cc06794 = 0;
  FUN_1446f470e(&local_68,PTR_u_double_14c764e70,1);
  _DAT_14cc06798 = (ulonglong)local_68 & 0xffffffff;
  _DAT_14cc067a0 = (undefined4)((ulonglong)local_68 >> 0x20);
  DAT_14cc067a4 = 0;
  FUN_1446f470e(&local_68,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_68,PTR_u_int32_14c764e80,1);
  _DAT_14cc067a8 = (ulonglong)local_68 & 0xffffffff;
  _DAT_14cc067b0 = (undefined4)((ulonglong)local_68 >> 0x20);
  DAT_14cc067b4 = 0;
  FUN_1446f470e(&local_68,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_68,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_68,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_68,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_68,PTR_u_FName_14c764ea8,1);
  _DAT_14cc067b8 = (ulonglong)local_68 & 0xffffffff;
  _DAT_14cc067c0 = (undefined4)((ulonglong)local_68 >> 0x20);
  DAT_14cc067c4 = 0;
  FUN_1446f470e(&local_68,PTR_u_FString_14c764eb0,1);
  _DAT_14cc067c8 = (ulonglong)local_68 & 0xffffffff;
  _DAT_14cc067d0 = (undefined4)((ulonglong)local_68 >> 0x20);
  DAT_14cc067d4 = 0;
  FUN_1446f470e(&local_68,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_68,PTR_u_TArray<FString>_14c764ef8,1);
  local_68 = "bone";
  uStack_60 = 4;
  uStack_5c = uStack_5c & 0xffffff00;
  FUN_14001a6c0(&local_68,1);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cc067d8);
  if (cVar1 == '\0') {
    _DAT_14cc067d8 = 0;
    uRam000000014cc067e0 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb5c510);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb5c6e0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb5c700);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb5c7c0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb5cf00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb5db20);
  local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc068e8,L"ControlRig.DisableExecutionInAnimNode",&local_68,
                L"if nonzero we disable the execution of Control Rigs inside an anim node.");
  atexit(FUN_14448a0a5);
  local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc06900,L"ControlRig.EnableAnimNodePerformanceOptimizations",&local_68,
                L"if nonzero we enable the (experimental) execution performance optimizations of Control Rig AnimNodes."
               );
  atexit(FUN_14448a0ea);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb5dea0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb5e840,1,&PTR_FUN_14bb5e810);
  _DAT_14cc06980 = 0xffffffff;
  _DAT_14cc06984 = 0;
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb5ecd0,1,0);
  DAT_14cc069c0 = 0;
  DAT_14cc069c8 = 0;
  DAT_14cc069a0 = 0;
  _DAT_14cc069a8 = 0;
  _DAT_14cc069cc = 0xffffffff00000080;
  DAT_14cc069d4 = 0;
  DAT_14cc069e0 = 0;
  DAT_14cc069e8 = 0;
  atexit(FUN_14448a6c3);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb60920,1,0);
  local_68 = "OwnerComponent";
  uStack_60 = 0xe;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc06918 = (ulonglong)uVar2;
  local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc06ae8,L"ControlRig.CreateFloatControlsForCurves",&local_68,
                L"If nonzero we create a float control for each curve in the curve container, useful for debugging low level controls."
               );
  atexit(FUN_14448a6ec);
  local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cc06b00,L"ControlRig.EnableDrawInterfaceInGame",&local_68,
                L"If nonzero debug drawing will be enabled during play.");
  atexit(FUN_14448a731);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb611a0,1,&PTR_FUN_14bb61170);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb618a0,1,0);
  local_68 = "SMInstance";
  uStack_60 = 10;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  _DAT_14cc06c90 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cc06df0,L"OnPostConstruction",1);
  FUN_1446f470e(&DAT_14cc06e00,L"OnPostForwardsSolve",1);
  FUN_1446f470e(&DAT_14cc06e10,L"OnPostInitialize",1);
  FUN_1446f470e(&DAT_14cc06e20,L"OnPreConstruction",1);
  FUN_1446f470e(&DAT_14cc06e30,L"OnPreForwardsSolve",1);
  FUN_1446f470e(&DAT_14cc06e40,L"OnPreInitialize",1);
  uStack_78 = 2;
  ppuStack_80 = &PTR_FUN_14bb670e0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb671c0,1,&PTR_FUN_14bb67120);
  local_68 = (char *)((ulonglong)local_68 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc06ef0,L"ControlRig.DisableExecutionInComponent",&local_68,
                L"if nonzero we disable the execution of Control Rigs inside a ControlRigComponent."
               );
  atexit(FUN_14448b622);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc06f08);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc06f08,4000);
  atexit((_func_5014 *)&LAB_14448b667);
  DAT_14cc06f50 = 0;
  DAT_14cc06f58 = 0;
  DAT_14cc06f30 = 0;
  _DAT_14cc06f38 = 0;
  _DAT_14cc06f5c = 0xffffffff00000080;
  DAT_14cc06f64 = 0;
  DAT_14cc06f70 = 0;
  DAT_14cc06f78 = 0;
  atexit(FUN_14448b675);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb68b00,1,0);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14bb68cb0 + lVar3),L"/Script/ControlRig",
                  *(undefined8 *)(&UNK_14bb68cb8 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14bb68cc0 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x70);
  FUN_1446f470e(&DAT_14cc07038,L"OnEnabledChanged",1);
  FUN_1446f470e(&DAT_14cc07048,L"OnHoveredChanged",1);
  FUN_1446f470e(&DAT_14cc07058,L"OnManipulatingChanged",1);
  FUN_1446f470e(&DAT_14cc07068,L"OnSelectionChanged",1);
  FUN_1446f470e(&DAT_14cc07078,L"OnTransformChanged",1);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb6a250,1,&PTR_FUN_14bb6a220);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb6a930,1,&PTR_FUN_14bb6a900);
  local_68 = (char *)0x20a74359a7820cfb;
  uStack_60 = 0x8c542c14;
  uStack_5c = 0x9623cf50;
  _DAT_14cc070f8 = 0xa7820cfb;
  uRam000000014cc070fc = 0x20a74359;
  uRam000000014cc07100 = 0x8c542c14;
  uRam000000014cc07104 = 0x9623cf50;
  FUN_141005458(&local_68,0x20,L"Dev-ControlRig",0);
  atexit((_func_5014 *)&LAB_14448c99f);
  local_68 = (char *)0x800000014bb6a9ae;
  local_54 = 10;
  uStack_60 = FUN_14577453c();
  uStack_5c = CONCAT31(uStack_5c._1_3_,1);
  FUN_1466cb200(&local_68);
  DAT_14cc07118 = 0;
  _DAT_14cc07150 = 0;
  _DAT_14cc07158 = 0;
  DAT_14cc07120 = 0;
  uRam000000014cc07128 = 0;
  _DAT_14cc07130 = 0;
  uRam000000014cc07138 = 0;
  _DAT_14cc0715c = 0xffffffff00000080;
  _DAT_14cc07164 = 0;
  DAT_14cc07170 = 0;
  _DAT_14cc07178 = 0;
  atexit((_func_5014 *)&LAB_14448c9ab);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb6bcd0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb6bd40,1,&PTR_FUN_14bb6bcf0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb6c540,2,&PTR_FUN_14bb6c510);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb6c6e0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb6c8b0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb6cb90;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb6cbb0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb6cf90);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb6d1f0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb6d210);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb6d5c0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb6d5e0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb6fb10,1,0);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449bc04 FUN_14449bc04 body=55 status=ok
// SIG undefined FUN_14449bc04(void)

void FUN_14449bc04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07510 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07510 = FUN_14171c317(FUN_1466cc9fd,uVar1,L"EModularRigNotification");
  }
  return;
}



// FUNCTION 14449bc3c FUN_14449bc3c body=425 status=ok
// SIG undefined FUN_14449bc3c(void)

void FUN_14449bc3c(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  undefined8 local_b8 [6];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar5 = *(int *)(param_1 + 0xc0);
  if (param_3 == '\0') {
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar6 * 8);
        if (lVar2 == 0) {
LAB_14449bd4d:
          local_c8[0] = *param_2;
          local_b8[0] = 0;
          if (local_c8[0] != 0) {
            plVar4 = (longlong *)param_2[2];
            if ((longlong *)param_2[2] == (longlong *)0x0) {
              plVar4 = param_2 + 4;
            }
            (**(code **)*plVar4)(plVar4,local_b8);
          }
          FUN_1444a16d6(param_1,lVar2,0,local_c8);
        }
        else {
          if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
            FUN_1415169c8(param_1);
          }
          if (((longlong)*(int *)(lVar2 + 0x30) == -1) ||
             (*(int *)(*(longlong *)(param_1 + 0x288) + 4 + (longlong)*(int *)(lVar2 + 0x30) * 8) ==
              0)) goto LAB_14449bd4d;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0xc0));
    }
  }
  else if (0 < iVar5) {
    lVar6 = 0;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + lVar6 * 8);
      iVar3 = FUN_14449ffea();
      if (iVar3 == 0) {
        local_88[0] = *param_2;
        local_78[0] = 0;
        if (local_88[0] != 0) {
          plVar4 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar4 = param_2 + 4;
          }
          (**(code **)*plVar4)(plVar4,local_78);
        }
        FUN_1444a16d6(param_1,uVar1,1,local_88);
        iVar5 = *(int *)(param_1 + 0xc0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449bdee FUN_14449bdee body=571 status=ok
// SIG undefined FUN_14449bdee(void)

longlong FUN_14449bdee(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  int *piVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  piVar3 = DAT_14c950c20;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x330) != '\x01') {
    lVar6 = 0;
    goto LAB_14449beb3;
  }
  lVar6 = *(longlong *)(param_1 + 0x328);
  if (param_2 != '\x01' || lVar6 != 0) goto LAB_14449beb3;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14449bee5;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar3 + 4);
    while( true ) {
      if (0 < piVar3[1]) {
        (**(code **)(**(longlong **)(piVar3 + 0xe) + 0x20))
                  (*(longlong **)(piVar3 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar3[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_14449bee5:
  FUN_1446f470e(&local_40,L"HierarchyController",1);
  local_50 = 0;
  local_58 = 0;
  lVar6 = FUN_1466ce2ad(param_1,local_40,0x40,0);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *(longlong *)(param_1 + 0x328) = lVar6;
  uVar2 = *(uint *)(lVar6 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  FUN_14482b126(lVar6,0x4000000);
  lVar6 = *(longlong *)(param_1 + 0x328);
  if (*(longlong *)(lVar6 + 0x20) == param_1) {
    FUN_140457ffc(param_1 + 0x28,lVar6);
    FUN_1466ced6c(param_1 + 0x28,local_38,lVar6,FUN_14576d460);
    lVar6 = *(longlong *)(param_1 + 0x328);
  }
  piVar3 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14449beb3;
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
LAB_14449beb3:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14449c02a FUN_14449c02a body=55 status=ok
// SIG undefined FUN_14449c02a(void)

void FUN_14449c02a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc075e8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc075e8 = FUN_14171c317(FUN_1466cce9c,uVar1,L"EControlRigFKRigExecuteMode");
  }
  return;
}



// FUNCTION 14449c061 FUN_14449c061 body=85 status=ok
// SIG undefined FUN_14449c061(void)

void FUN_14449c061(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1060;
  lVar2 = -0xa0;
  do {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140105116(lVar1);
    lVar1 = lVar1 + -0x50;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14449c0f2 FUN_14449c0f2 body=85 status=ok
// SIG undefined FUN_14449c0f2(void)

void FUN_14449c0f2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1130;
  lVar2 = -0xa0;
  do {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140105116(lVar1);
    lVar1 = lVar1 + -0x50;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14449c16c FUN_14449c16c body=592 status=ok
// SIG undefined FUN_14449c16c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14449c16c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_5e8 [32];
  undefined1 *local_5c8;
  float *local_5c0;
  undefined8 *local_5b8;
  undefined8 *local_5b0;
  undefined1 local_5a8;
  undefined1 local_5a0;
  undefined1 local_594 [12];
  undefined8 local_588;
  undefined4 local_580;
  undefined1 local_578 [444];
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338 [12];
  undefined8 local_2d8 [13];
  undefined1 local_270;
  undefined1 local_26f;
  undefined8 local_26c;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  lVar1 = *param_1;
  local_98 = *(undefined8 *)(param_2 + 0x14);
  local_270 = *(undefined1 *)(param_2 + 0x10);
  FUN_1491d5112(&local_a0,&local_98);
  local_b0 = *(undefined4 *)(param_2 + 0x18);
  local_b8 = *(undefined8 *)(param_2 + 0x10);
  FUN_1408130c0(*(undefined8 *)(lVar1 + 0x2f8),&local_ac);
  FUN_1491d73b0(&local_270);
  local_26f = 9;
  local_26c = local_98;
  lVar1 = param_1[1];
  local_5b0 = local_2d8;
  puVar3 = &DAT_14c846480;
  puVar4 = local_5b0;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = local_338;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_3bc = (float)_DAT_14c964b58;
  local_3b8 = (float)_DAT_14c964b60;
  local_3b4 = (float)_DAT_14c964b68;
  local_3b0 = (float)DAT_14c964b40;
  local_3ac = (float)DAT_14c964b48;
  local_3a8 = (float)_DAT_14c964b50;
  local_3a4 = (float)_DAT_14c964b70;
  local_3a0 = (float)_DAT_14c964b78;
  local_39c = (float)_DAT_14c964b80;
  local_348 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  uStack_340 = 0x100000000;
  FUN_14918b1f6(local_578,&local_270);
  local_588 = local_ac;
  local_580 = local_a4;
  local_5a0 = 0;
  local_5a8 = 0;
  local_5c8 = local_578;
  local_5c0 = &local_3bc;
  local_5b8 = local_338;
  FUN_1491ecf78(lVar1,local_594,local_a0);
  FUN_14918b3e4(&local_270);
  if ((local_90 ^ (ulonglong)auStack_5e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449c3bd FUN_14449c3bd body=47 status=ok
// SIG undefined FUN_14449c3bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14449c3bd(void)

{
  _DAT_14cc07730 = 0;
  if (DAT_14cc07728 != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(&DAT_14cc076e8);
  return;
}



// FUNCTION 14449c3ec FUN_14449c3ec body=4137 status=ok
// SIG undefined FUN_14449c3ec(void)

void FUN_14449c3ec(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  byte bVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  longlong *local_338;
  int local_32c;
  longlong local_328;
  longlong *local_320;
  longlong local_318;
  LPCRITICAL_SECTION local_310;
  longlong local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  uint local_2cc;
  longlong local_2c8;
  longlong *plStack_2c0;
  uint local_2b8;
  undefined4 uStack_2b4;
  uint *local_2a8;
  int local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  longlong local_288;
  undefined4 local_280;
  undefined8 local_278 [2];
  undefined8 *local_268;
  undefined8 local_238;
  undefined8 local_228;
  longlong local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  undefined1 local_1e8 [16];
  longlong local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  uint local_168;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined1 local_158 [16];
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined8 local_138;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_108;
  uint *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_80 [16];
  undefined1 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  if (((*(byte *)(param_2 + 5) & 4) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_368);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_14449c459;
  local_310 = (LPCRITICAL_SECTION)(param_1 + 200);
  EnterCriticalSection(local_310);
  local_d8 = (uint *)0x0;
  uStack_d0 = 0;
  FUN_1491ddccc(param_1,&local_d8);
  local_d8 = (uint *)0x0;
  uStack_d0 = 0;
  local_348 = 0;
  local_328 = param_1;
  FUN_14086ecde(param_1,&local_d8,0,0);
  puVar16 = local_d8;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  lVar23 = (longlong)(int)uStack_d0;
  if (lVar23 != 0) {
    lVar22 = 0;
    do {
      lVar27 = *(longlong *)((longlong)puVar16 + lVar22);
      lVar10 = FUN_1458b5ed8();
      uVar17 = uStack_160;
      lVar27 = *(longlong *)(lVar27 + 0x10);
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar27 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar27 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30)) {
        lVar27 = (longlong)(int)uStack_160;
        uStack_160 = uStack_160 + 1;
        if (uStack_15c < uStack_160) {
          FUN_1447f76d2(&local_168,uVar17);
        }
        *(undefined8 *)(CONCAT44(uStack_164,local_168) + lVar27 * 8) =
             *(undefined8 *)((longlong)puVar16 + lVar22);
      }
      lVar22 = lVar22 + 8;
    } while (lVar23 * 8 != lVar22);
  }
  lVar23 = local_328;
  if (local_d8 != (uint *)0x0) {
    FUN_1400020a8(local_d8);
  }
  local_d8 = (uint *)CONCAT44(uStack_164,local_168);
  uStack_d0 = CONCAT44(uStack_15c,uStack_160);
  if (uStack_160 != 0) {
    *(undefined1 *)(lVar23 + 0x330) = 1;
    lVar22 = *(longlong *)local_d8;
    if (lVar22 == 0) {
LAB_14449c5fc:
      lVar22 = 0;
    }
    else {
      lVar27 = FUN_1458b5ed8();
      if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(lVar27 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar27 + 0x38) * 8) != lVar27 + 0x30)) goto LAB_14449c5fc;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar22);
      }
    }
    *(longlong *)(lVar23 + 0x328) = lVar22;
    if (*(longlong *)(lVar22 + 0x20) == lVar23) {
      FUN_140457ffc(lVar23 + 0x28,lVar22);
      FUN_1466ced6c(lVar23 + 0x28,&local_168,lVar22,FUN_14576d460);
    }
  }
  if (local_d8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  FUN_14150bb00(lVar23,1);
  local_2cc = 0;
  puVar4 = (ulonglong *)param_2[1];
  puVar16 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar16) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2cc,4);
    }
    else {
      FUN_14572512c(param_2,&local_2cc);
    }
  }
  else {
    local_2cc = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar16;
  }
  if (*(int *)(lVar23 + 0x56c) < 0) {
    *(undefined4 *)(lVar23 + 0x568) = 0;
    FUN_14481578e(lVar23 + 0x560,0);
  }
  else {
    *(undefined4 *)(lVar23 + 0x568) = 0;
  }
  uVar7 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  local_338 = (longlong *)CONCAT44(local_338._4_4_,uVar7);
  local_320 = param_2;
  if ((int)local_2cc < 1) {
    local_32c = 0;
    iVar24 = 0;
    iVar26 = 0;
  }
  else {
    local_318 = lVar23 + 0xb8;
    local_308 = lVar23 + 0x118;
    iVar26 = 0;
    iVar24 = 0;
    local_32c = 0;
    iVar21 = 0;
    do {
      local_168 = local_168 & 0xffffff00;
      uStack_164 = 0;
      uStack_160 = 0;
      FUN_140f872f2(&local_168,param_2);
      plVar11 = (longlong *)FUN_14449d43c(lVar23,(undefined1)local_168,1,0);
      iVar8 = FUN_1402aff74((undefined1)local_168);
      *(undefined4 *)(plVar11 + 4) =
           *(undefined4 *)(*(longlong *)(lVar23 + 0xf0) + 8 + (longlong)iVar8 * 0x10);
      iVar8 = *(int *)(lVar23 + 0xc0);
      *(uint *)(lVar23 + 0xc0) = iVar8 + 1U;
      if (*(uint *)(lVar23 + 0xc4) < iVar8 + 1U) {
        FUN_145c8ed70(local_318,iVar8);
      }
      lVar22 = *(longlong *)(lVar23 + 0xb8);
      *(longlong **)(lVar22 + (longlong)iVar8 * 8) = plVar11;
      *(int *)((longlong)plVar11 + 0x1c) = iVar8;
      iVar8 = FUN_1402aff74(CONCAT71((int7)((ulonglong)lVar22 >> 8),(undefined1)local_168));
      lVar22 = *(longlong *)(lVar23 + 0xf0);
      lVar27 = (longlong)iVar8 * 0x10;
      iVar8 = *(int *)(lVar22 + 8 + lVar27);
      *(uint *)(lVar22 + 8 + lVar27) = iVar8 + 1U;
      if (*(uint *)(lVar22 + 0xc + lVar27) < iVar8 + 1U) {
        FUN_145c8ed70((longlong *)(lVar22 + lVar27),iVar8);
      }
      uStack_d0 = (longlong)plVar11 + 0x1c;
      *(longlong **)(*(longlong *)(lVar22 + lVar27) + (longlong)iVar8 * 8) = plVar11;
      local_d8 = &local_168;
      FUN_140fe526c(local_308,&local_1f8,&local_d8);
      if ((int)local_338 < 0x20) {
        FUN_1491d7c54(lVar23,plVar11,0);
        param_2 = local_320;
        (**(code **)(*plVar11 + 0x18))(plVar11,local_320,0);
      }
      else {
        iVar8 = (**(code **)(*plVar11 + 0x28))(plVar11);
        iVar26 = iVar26 + iVar8;
        iVar8 = (**(code **)(*plVar11 + 0x28))(plVar11);
        iVar24 = iVar24 + iVar8;
        iVar8 = (**(code **)(*plVar11 + 0x30))(plVar11);
        local_32c = local_32c + iVar8;
        param_2 = local_320;
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)local_2cc);
  }
  if ((int)local_338 < 0x20) {
    FUN_140e4aa06(lVar23);
  }
  else {
    FUN_141906ab0(lVar23 + 0x1b8,&local_2c8,iVar26);
    lVar22 = lVar23 + 0x1d8;
    local_d8 = (uint *)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_141906c0e(lVar22,local_278,iVar24,&local_d8);
    lVar27 = lVar23 + 0x1f8;
    local_d8 = (uint *)((ulonglong)local_d8 & 0xffffffff00000000);
    FUN_1466cd7fe(lVar27,local_80,local_32c,&local_d8);
    local_118 = 0;
    local_108 = 0;
    FUN_1466cd94a(lVar23 + 0x1b8,&local_d8);
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    uVar12 = uStack_d0 >> 0x20;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    if ((int)uVar12 != 0) {
      FUN_14472eb64(&local_d8,0);
    }
    lVar23 = local_328;
    local_a8 = 0xffffffff;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      FUN_1446efbd8(local_c8,0);
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    local_1a8 = 0;
    local_198 = 0;
    FUN_1466cdc5c(lVar22,&local_168);
    local_120 = 0;
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    uStack_160 = 0;
    if (uStack_15c != 0) {
      FUN_14472eb64(&local_168,0);
    }
    local_138 = 0xffffffff;
    local_140 = 0;
    if (0x80 < local_13c) {
      local_13c = 0x80;
      FUN_1446efbd8(local_158,0);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_164,local_168) != 0) {
      FUN_1400020a8();
    }
    local_238 = 0;
    local_228 = 0;
    FUN_1466cdf4a(lVar27,&local_1f8);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    local_1f0 = 0;
    if (local_1ec != 0) {
      FUN_14472eb64(&local_1f8,0);
    }
    local_1c8 = 0xffffffff;
    local_1d0 = 0;
    if (0x80 < local_1cc) {
      local_1cc = 0x80;
      FUN_1446efbd8(local_1e8,0);
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    if (local_1f8 != 0) {
      FUN_1400020a8();
    }
    if (0 < (int)local_2cc) {
      lVar22 = 0;
      iVar26 = 0;
      iVar24 = 0;
      local_338 = (longlong *)0x0;
      do {
        plVar11 = *(longlong **)(*(longlong *)(lVar23 + 0xb8) + lVar22 * 8);
        iVar21 = iVar26;
        iVar8 = iVar24;
        if (plVar11 != (longlong *)0x0) {
          bVar3 = *(byte *)(plVar11 + 2);
          uVar12 = (ulonglong)bVar3;
          if (uVar12 < 0x21) {
            if ((0x100010016U >> (uVar12 & 0x3f) & 1) == 0) {
              if (uVar12 == 8) {
                puVar15 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar15 = local_80;
                }
                *(undefined4 *)((longlong)plVar11 + 0x4c) =
                     *(undefined4 *)(puVar15 + (longlong)(int)local_338 * 4);
                local_338 = (longlong *)(ulonglong)((int)local_338 + 1);
                goto LAB_14449cf38;
              }
              goto LAB_14449cf2b;
            }
          }
          else {
LAB_14449cf2b:
            if (bVar3 != 0x80) goto LAB_14449cf38;
          }
          plVar14 = (longlong *)CONCAT44(uStack_2b4,local_2b8);
          if ((longlong *)CONCAT44(uStack_2b4,local_2b8) == (longlong *)0x0) {
            plVar14 = &local_2c8;
          }
          lVar27 = (longlong)iVar26;
          *(undefined4 *)(plVar11 + 0xd) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4);
          *(undefined4 *)(plVar11 + 9) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 4);
          *(undefined4 *)(plVar11 + 0xf) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 8);
          *(undefined4 *)(plVar11 + 0xb) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0xc);
          puVar20 = local_268;
          if (local_268 == (undefined8 *)0x0) {
            puVar20 = local_278;
          }
          lVar10 = (longlong)iVar24;
          *(undefined4 *)(plVar11 + 0x17) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4);
          *(undefined4 *)(plVar11 + 0x13) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 4);
          *(undefined4 *)(plVar11 + 0x15) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 8);
          *(undefined4 *)(plVar11 + 0x11) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0xc);
          iVar21 = iVar26 + 4;
          iVar8 = iVar24 + 4;
          if (bVar3 == 4) {
            *(undefined4 *)(plVar11 + 0x84) =
                 *(undefined4 *)((longlong)plVar14 + (longlong)(iVar26 + 4) * 4);
            *(undefined4 *)(plVar11 + 0x80) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0x14)
            ;
            *(undefined4 *)(plVar11 + 0x86) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0x18)
            ;
            *(undefined4 *)(plVar11 + 0x82) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0x1c)
            ;
            *(undefined4 *)(plVar11 + 0x8e) =
                 *(undefined4 *)((longlong)puVar20 + (longlong)(iVar24 + 4) * 4);
            *(undefined4 *)(plVar11 + 0x8a) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0x14)
            ;
            *(undefined4 *)(plVar11 + 0x8c) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0x18)
            ;
            *(undefined4 *)(plVar11 + 0x88) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0x1c)
            ;
            *(undefined4 *)(plVar11 + 0x94) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0x20)
            ;
            *(undefined4 *)(plVar11 + 0x90) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0x24)
            ;
            *(undefined4 *)(plVar11 + 0x96) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0x28)
            ;
            *(undefined4 *)(plVar11 + 0x92) = *(undefined4 *)((longlong)plVar14 + lVar27 * 4 + 0x2c)
            ;
            *(undefined4 *)(plVar11 + 0x9e) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0x20)
            ;
            *(undefined4 *)(plVar11 + 0x9a) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0x24)
            ;
            *(undefined4 *)(plVar11 + 0x9c) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0x28)
            ;
            *(undefined4 *)(plVar11 + 0x98) = *(undefined4 *)((longlong)puVar20 + lVar10 * 4 + 0x2c)
            ;
            iVar21 = iVar26 + 0xc;
            iVar8 = iVar24 + 0xc;
          }
        }
LAB_14449cf38:
        iVar24 = iVar8;
        iVar26 = iVar21;
        local_2e0 = *(undefined8 *)(lVar23 + 0x1f8);
        local_2d8 = *(undefined4 *)(lVar23 + 0x200);
        local_2f0 = *(undefined8 *)(lVar23 + 0x1d8);
        local_2e8 = *(undefined4 *)(lVar23 + 0x1e0);
        local_300 = *(undefined8 *)(lVar23 + 0x1b8);
        local_2f8 = *(undefined4 *)(lVar23 + 0x1c0);
        (**(code **)(*plVar11 + 0x48))(plVar11,&local_300,&local_2f0,&local_2e0);
        (**(code **)(*plVar11 + 0x18))(plVar11,local_320,0);
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)local_2cc);
    }
    if (local_70 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    param_2 = local_320;
    if (local_268 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_2b4,local_2b8) != 0) {
      FUN_1400020a8();
    }
  }
  *(int *)(lVar23 + 0xa8) = *(int *)(lVar23 + 0xa8) + 1;
  if (*(int *)(lVar23 + 0x480) != *(int *)(lVar23 + 0x4ac)) {
    FUN_14920d1d6(lVar23 + 0x478);
    FUN_14920d31a(lVar23 + 0x478);
  }
  uVar12 = (ulonglong)local_2cc;
  if (0 < (int)local_2cc) {
    lVar22 = 0;
    do {
      plVar11 = *(longlong **)(*(longlong *)(lVar23 + 0xb8) + lVar22 * 8);
      (**(code **)(*plVar11 + 0x18))(plVar11,param_2,1);
      lVar22 = lVar22 + 1;
      uVar12 = (ulonglong)(int)local_2cc;
    } while (lVar22 < (longlong)uVar12);
  }
  *(int *)(lVar23 + 0xa8) = *(int *)(lVar23 + 0xa8) + 1;
  if (*(int *)(lVar23 + 0x480) != *(int *)(lVar23 + 0x4ac)) {
    FUN_14920d1d6(lVar23 + 0x478);
    FUN_14920d31a(lVar23 + 0x478);
    uVar12 = (ulonglong)local_2cc;
  }
  if (0 < (int)uVar12) {
    lVar22 = 0;
    do {
      lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0xb8) + lVar22 * 8);
      if (lVar27 != 0) {
        bVar3 = *(byte *)(lVar27 + 0x10);
        if ((((ulonglong)bVar3 < 0x21) && ((0x100010016U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
           (bVar3 == 0x80)) {
          FUN_14449d5e6(lVar23,&local_2c8,lVar27,0);
          plVar11 = plStack_2c0;
          if (plStack_2c0 == (longlong *)0x0) {
            plVar11 = &local_2c8;
          }
          if ((longlong)(int)local_2b8 != 0) {
            plVar14 = plVar11 + (int)local_2b8;
            do {
              lVar23 = *plVar11;
              if (lVar23 != 0) {
                bVar3 = *(byte *)(lVar23 + 0x10);
                if ((((ulonglong)bVar3 < 0x21) &&
                    ((0x100010016U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) || (bVar3 == 0x80)) {
                  lVar10 = lVar23 + 200;
                  lVar13 = *(longlong *)(lVar23 + 0xf8);
                  lVar19 = lVar13;
                  if (lVar13 == 0) {
                    lVar19 = lVar10;
                  }
                  lVar25 = (longlong)*(int *)(lVar23 + 0x100);
                  if (lVar25 != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(lVar19 + uVar12) == lVar27) {
                        if ((int)(~uVar12 >> 4) != 0) goto LAB_14449ca0f;
                        break;
                      }
                      uVar12 = uVar12 + 0x10;
                    } while (lVar25 << 4 != uVar12);
                  }
                  uVar17 = *(int *)(lVar23 + 0x100) + 1;
                  *(uint *)(lVar23 + 0x100) = uVar17;
                  if (*(uint *)(lVar23 + 0x104) < uVar17) {
                    FUN_1466d18ec(lVar10);
                    lVar13 = *(longlong *)(lVar23 + 0xf8);
                  }
                  if (lVar13 != 0) {
                    lVar10 = lVar13;
                  }
                  *(longlong *)(lVar10 + lVar25 * 0x10) = lVar27;
                  *(undefined4 *)(lVar10 + 8 + lVar25 * 0x10) = 0xffffffff;
                }
              }
LAB_14449ca0f:
              plVar11 = plVar11 + 1;
              lVar23 = local_328;
            } while (plVar11 != plVar14);
          }
          if (plStack_2c0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uVar12 = (ulonglong)local_2cc;
        }
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)uVar12);
  }
  plVar11 = local_320;
  iVar24 = FUN_1448332aa(local_320,&DAT_14bb76ef4);
  if (iVar24 < 0x19) {
    FUN_1444aadf2(lVar23 + 0x390);
    FUN_1444aadf2(lVar23 + 0x340);
  }
  else {
    FUN_14602396a(plVar11);
    FUN_14602396a(plVar11,lVar23 + 0x340);
  }
  iVar24 = FUN_1448332aa(plVar11,&DAT_14bb76ef4);
  if (0x1b < iVar24) {
    local_338 = (longlong *)(lVar23 + 0x268);
    uVar12 = 0;
    local_278[0] = 0;
    local_268 = (undefined8 *)0x0;
    FUN_1410f23cc();
    local_2a8 = (uint *)0x0;
    local_2a0 = 0;
    local_2c8 = 0;
    plStack_2c0 = (longlong *)0x0;
    local_29c = 0xffffffff00000080;
    local_294 = 0;
    local_288 = 0;
    local_280 = 0;
    FUN_1461c5efa(plVar11);
    iVar26 = local_2a0;
    uVar28 = 1;
    iVar21 = 0;
    iVar24 = 0;
    if (local_2a0 != 0) {
      puVar16 = local_2a8;
      if (local_2a8 == (uint *)0x0) {
        puVar16 = &local_2b8;
      }
      uVar17 = *puVar16;
      if (uVar17 == 0) {
        iVar24 = local_2a0 + 0x1e;
        if (-1 < local_2a0 + -1) {
          iVar24 = local_2a0 + -1;
        }
        uVar12 = 0;
        uVar28 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar28 = uVar12;
        }
        iVar21 = 0;
        do {
          if (uVar28 == uVar12) goto LAB_14449d150;
          iVar21 = iVar21 + 0x20;
          uVar17 = puVar16[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar12 = 0;
      }
      uVar28 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar28 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar24 = (iVar21 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (local_2a0 <= iVar24) {
        iVar24 = local_2a0;
      }
    }
    if (iVar24 != local_2a0) {
      uVar17 = 0xffffffff;
      do {
        lVar22 = (longlong)iVar24 * 0x78 + local_2c8;
        uVar9 = FUN_140813180(lVar23,lVar22);
        if (((int)uVar9 < 0) || (*(int *)(lVar23 + 0xc0) <= (int)uVar9)) {
          lVar27 = 0;
        }
        else {
          lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0xb8) + (ulonglong)uVar9 * 8);
        }
        iVar24 = *(int *)(lVar23 + 0x270);
        *(int *)(lVar27 + 0x34) = iVar24;
        *(uint *)(lVar23 + 0x270) = iVar24 + 1U;
        if (*(uint *)(lVar23 + 0x274) < iVar24 + 1U) {
          FUN_14920c0c2(local_338,iVar24);
        }
        lVar23 = *local_338;
        FUN_14920c156(lVar23 + (longlong)iVar24 * 0x60,lVar22 + 0x10);
        uVar7 = *(undefined4 *)(lVar22 + 100);
        uVar5 = *(undefined4 *)(lVar22 + 0x68);
        uVar6 = *(undefined4 *)(lVar22 + 0x6c);
        puVar2 = (undefined4 *)(lVar23 + 0x50 + (longlong)iVar24 * 0x60);
        *puVar2 = *(undefined4 *)(lVar22 + 0x60);
        puVar2[1] = uVar7;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        uVar17 = uVar17 & ~(uint)uVar28;
        puVar16 = local_2a8;
        if (local_2a8 == (uint *)0x0) {
          puVar16 = &local_2b8;
        }
        iVar24 = (int)uVar12;
        lVar23 = (longlong)iVar24;
        uVar9 = puVar16[lVar23] & uVar17;
        if (uVar9 == 0) {
          iVar8 = local_2a0 + 0x1e;
          if (-1 < local_2a0 + -1) {
            iVar8 = local_2a0 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar18 = iVar8;
          if (iVar8 < iVar24) {
            iVar18 = iVar24;
          }
          if (iVar24 < iVar8) {
            lVar22 = 0;
            do {
              uVar9 = puVar16[lVar23 + lVar22 + 1];
              if (uVar9 != 0) {
                uVar12 = (ulonglong)(iVar24 + (int)lVar22 + 1);
                uVar17 = 0xffffffff;
                goto LAB_14449d31e;
              }
              iVar21 = iVar21 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar18 - lVar23 != lVar22);
            uVar17 = 0xffffffff;
            iVar24 = iVar18;
          }
          uVar12 = (ulonglong)(iVar24 + 1);
          iVar24 = local_2a0;
        }
        else {
LAB_14449d31e:
          uVar28 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar28 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar24 = (iVar21 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (local_2a0 <= iVar24) {
            iVar24 = local_2a0;
          }
        }
        lVar23 = local_328;
      } while (iVar24 != iVar26);
    }
LAB_14449d150:
    local_280 = 0;
    if (local_288 != 0) {
      FUN_1400020a8();
    }
    FUN_145d5ef66(&local_2c8);
  }
  FUN_140e4926c(lVar23);
  LeaveCriticalSection(local_310);
LAB_14449c459:
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449d43c FUN_14449d43c body=425 status=ok
// SIG undefined FUN_14449d43c(void)

longlong FUN_14449d43c(undefined8 param_1,byte param_2,uint param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  lVar1 = 0;
  if (param_2 < 0x10) {
    lVar1 = 0;
    switch(param_2) {
    case 1:
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x118;
      }
      lVar1 = FUN_140e63f0e(param_1,uVar3,0);
      return lVar1;
    case 2:
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x210;
      }
      lVar1 = FUN_1491df90c(param_1,uVar3,0);
      return lVar1;
    case 4:
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x500;
      }
      lVar1 = FUN_14001cc68((longlong)(int)param_3 * 0x500,0);
      lVar2 = lVar1;
      if (0 < (int)param_3) {
        do {
          FUN_149191c08(lVar2,param_1);
          uVar3 = uVar3 - 1;
          lVar2 = lVar2 + 0x500;
        } while (uVar3 != 0);
      }
      *(uint *)(lVar1 + 0x2c) = param_3;
      break;
    case 8:
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x58;
      }
      lVar1 = FUN_1466ce38c(param_1,uVar3,0);
      return lVar1;
    }
  }
  else if (param_2 < 0x40) {
    if (param_2 == 0x10) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x128;
      }
      lVar1 = FUN_1491dfa72(param_1,uVar3,0);
      return lVar1;
    }
    lVar1 = 0;
    if (param_2 == 0x20) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x120;
      }
      lVar1 = FUN_1491dfb38(param_1,uVar3,0);
      return lVar1;
    }
  }
  else {
    if (param_2 == 0x40) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x70;
      }
      lVar1 = FUN_1491dfbf8(param_1,uVar3,0);
      return lVar1;
    }
    if (param_2 == 0x80) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0x110;
      }
      lVar1 = FUN_1491dfccc(param_1,uVar3,0);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 14449d5e6 FUN_14449d5e6 body=495 status=ok
// SIG undefined FUN_14449d5e6(void)

longlong * FUN_14449d5e6(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2[1] = 0;
  param_2[2] = 0x100000000;
  local_70 = param_1;
  if (param_3 == 0) goto LAB_14449d6fa;
  uVar2 = (ulonglong)*(byte *)(param_3 + 0x10);
  if (uVar2 < 0x21) {
    if ((0x100010002U >> (uVar2 & 0x3f) & 1) == 0) {
      if ((0x14UL >> (uVar2 & 0x3f) & 1) != 0) {
        uVar4 = *(uint *)(param_3 + 0x1b0);
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar4);
        }
        if (1 < uVar4) {
          FUN_14920cc64(param_2);
          uVar4 = *(uint *)(param_3 + 0x1b0);
        }
        lVar9 = param_3 + 0x110;
        if (*(longlong *)(param_3 + 0x1a0) != 0) {
          lVar9 = *(longlong *)(param_3 + 0x1a0);
        }
        if (uVar4 != 0) {
          lVar7 = 0;
          do {
            lVar5 = *(longlong *)(lVar9 + lVar7);
            iVar1 = (int)param_2[2];
            *(uint *)(param_2 + 2) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
              FUN_14920cb62(param_2,iVar1);
            }
            plVar3 = (longlong *)param_2[1];
            if ((longlong *)param_2[1] == (longlong *)0x0) {
              plVar3 = param_2;
            }
            plVar3[iVar1] = lVar5;
            lVar7 = lVar7 + 0x90;
          } while ((longlong)(int)uVar4 * 0x90 != lVar7);
        }
        goto LAB_14449d6fa;
      }
      goto LAB_14449d6dd;
    }
  }
  else {
LAB_14449d6dd:
    if (*(byte *)(param_3 + 0x10) != 0x80) goto LAB_14449d6fa;
  }
  lVar9 = *(longlong *)(param_3 + 0x108);
  if (lVar9 != 0) {
    *(undefined4 *)(param_2 + 2) = 1;
    *param_2 = lVar9;
  }
LAB_14449d6fa:
  if ((param_4 != '\0') && (lVar9 = param_2[2], 0 < (longlong)(int)lVar9)) {
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_2[1];
      if ((longlong *)param_2[1] == (longlong *)0x0) {
        plVar3 = param_2;
      }
      FUN_14449d5e6(local_70,local_60,plVar3[lVar7],1);
      puVar8 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar8 = local_60;
      }
      lVar5 = (longlong)local_50;
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
          local_68 = *(undefined8 *)(puVar8 + lVar6);
          FUN_14920ccae(param_2,&local_68);
          lVar6 = lVar6 + 8;
        } while (lVar5 * 8 != lVar6);
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != (int)lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14449d7d8 FUN_14449d7d8 body=143 status=ok
// SIG undefined FUN_14449d7d8(void)

void FUN_14449d7d8(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  FUN_141124534(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140ad4746(param_1,6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449d868 FUN_14449d868 body=969 status=ok
// SIG undefined FUN_14449d868(void)

void FUN_14449d868(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar4 = (longlong *)*param_2;
  uVar2 = *(uint *)((longlong)plVar4 + 0x2c);
  uVar5 = (ulonglong)uVar2;
  if (uVar5 == 0) {
switchD_14449d8b2_caseD_3:
    return;
  }
  bVar1 = *(byte *)(plVar4 + 2);
  if (bVar1 < 0x10) {
    switch(bVar1) {
    case 1:
      if (0 < (int)uVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x590);
        do {
          *(longlong **)(param_1 + 0x590) = plVar4;
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
          (**(code **)*plVar4)(plVar4,0);
          *(undefined8 *)(param_1 + 0x590) = uVar3;
          plVar4 = plVar4 + 0x23;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      break;
    case 2:
      if (0 < (int)uVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x590);
        do {
          *(longlong **)(param_1 + 0x590) = plVar4;
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
          FUN_14918079a(plVar4);
          *(undefined8 *)(param_1 + 0x590) = uVar3;
          plVar4 = plVar4 + 0x42;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      break;
    default:
      goto switchD_14449d8b2_caseD_3;
    case 4:
      if (0 < (int)uVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x590);
        do {
          *(longlong **)(param_1 + 0x590) = plVar4;
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
          FUN_14918b3e4(plVar4 + 0x42);
          FUN_14918079a(plVar4);
          *(undefined8 *)(param_1 + 0x590) = uVar3;
          plVar4 = plVar4 + 0xa0;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      break;
    case 8:
      if (0 < (int)uVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x590);
        do {
          *(longlong **)(param_1 + 0x590) = plVar4;
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
          FUN_140da04fc(plVar4);
          *(undefined8 *)(param_1 + 0x590) = uVar3;
          plVar4 = plVar4 + 0xb;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  else if (bVar1 < 0x40) {
    if (bVar1 == 0x10) {
      if (0 < (int)uVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x590);
        do {
          *(longlong **)(param_1 + 0x590) = plVar4;
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
          (**(code **)*plVar4)(plVar4,0);
          *(undefined8 *)(param_1 + 0x590) = uVar3;
          plVar4 = plVar4 + 0x25;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      if (bVar1 != 0x20) {
        return;
      }
      if (0 < (int)uVar2) {
        uVar3 = *(undefined8 *)(param_1 + 0x590);
        do {
          *(longlong **)(param_1 + 0x590) = plVar4;
          (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
          FUN_1491beef8(plVar4);
          *(undefined8 *)(param_1 + 0x590) = uVar3;
          plVar4 = plVar4 + 0x24;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  else if (bVar1 == 0x40) {
    if (0 < (int)uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x590);
      do {
        *(longlong **)(param_1 + 0x590) = plVar4;
        (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
        FUN_149189aca(plVar4 + 9);
        FUN_140da04fc(plVar4);
        *(undefined8 *)(param_1 + 0x590) = uVar3;
        plVar4 = plVar4 + 0xe;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (bVar1 != 0x80) {
      return;
    }
    if (0 < (int)uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x590);
      do {
        *(longlong **)(param_1 + 0x590) = plVar4;
        (**(code **)(*plVar4 + 0x50))(plVar4,param_1 + 0x1b8,param_1 + 0x1d8,param_1 + 0x1f8);
        *plVar4 = (longlong)&PTR_FUN_14bb58d10;
        if (plVar4[0x1f] != 0) {
          FUN_1400020a8();
        }
        FUN_140da04fc(plVar4);
        *(undefined8 *)(param_1 + 0x590) = uVar3;
        plVar4 = plVar4 + 0x22;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  FUN_1400020a8(*param_2);
  *param_2 = 0;
  FUN_140e4a7b6(param_1 + 0x218);
  return;
}



// FUNCTION 14449dc32 FUN_14449dc32 body=280 status=ok
// SIG undefined FUN_14449dc32(void)

void FUN_14449dc32(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_2 != 0) && (0 < (int)param_1[1])) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar1 = *param_1;
      local_4c = (undefined4)lVar6;
      pcVar2 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_4c,lVar1 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x60;
    } while (lVar6 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1401a2688(param_1,0);
  }
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_14481578e(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449dd4c FUN_14449dd4c body=272 status=ok
// SIG undefined FUN_14449dd4c(void)

void FUN_14449dd4c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 != 0) && (0 < (int)param_1[1])) {
    lVar5 = 0;
    do {
      lVar1 = *param_1;
      local_44 = (undefined4)lVar5;
      pcVar2 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_44,lVar1 + lVar5);
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14475e67c(param_1,0);
  }
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_14481578e(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449de5e FUN_14449de5e body=280 status=ok
// SIG undefined FUN_14449de5e(void)

void FUN_14449de5e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_2 != 0) && (0 < (int)param_1[1])) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar1 = *param_1;
      local_4c = (undefined4)lVar6;
      pcVar2 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_4c,lVar1 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14482f6fa(param_1,0);
  }
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_14481578e(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449df88 FUN_14449df88 body=118 status=ok
// SIG undefined FUN_14449df88(void)

void FUN_14449df88(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145c8ed70(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14920c406(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14449dffe FUN_14449dffe body=509 status=ok
// SIG undefined FUN_14449dffe(void)

void FUN_14449dffe(longlong param_1)

{
  longlong *plVar1;
  int *_Src;
  int iVar2;
  void *_Src_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_64;
  int *local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (longlong *)0x0;
  local_50 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x38);
  lVar7 = (longlong)local_50;
  _Src_00 = *(void **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  if (lVar7 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1466cc7d0(&local_58,local_50,0);
    memcpy(local_58,_Src_00,lVar7 << 3);
    if ((longlong)local_50 != 0) {
      plVar1 = local_58 + local_50;
      plVar8 = local_58;
      do {
        lVar7 = *plVar8;
        if (((lVar7 != 0) && (*(char *)(lVar7 + 0x10) == '\b')) &&
           (*(char *)(lVar7 + 0x48) == '\x01')) {
          *(undefined1 *)(lVar7 + 0x48) = 0;
          iVar2 = *(int *)(param_1 + 0x108);
          lVar14 = (longlong)iVar2;
          if (lVar14 != 0) {
            iVar11 = *(int *)(lVar7 + 0x1c);
            local_60 = *(int **)(param_1 + 0x100);
            iVar10 = 0;
            uVar12 = (ulonglong)(*local_60 == iVar11);
            iVar5 = 0;
            do {
              uVar13 = uVar12 ^ 1;
              local_70 = (ulonglong)iVar5;
              iVar3 = iVar5 + 1;
              if (iVar5 + 1 < iVar2) {
                iVar3 = iVar2;
              }
              uVar9 = local_70;
              iVar6 = iVar5;
              do {
                uVar9 = uVar9 + 1;
                iVar4 = iVar3;
                if (lVar14 <= (longlong)uVar9) break;
                iVar6 = iVar6 + 1;
                iVar4 = iVar6;
              } while ((bool)((byte)uVar12 & 1) == (local_60[uVar9] == iVar11));
              if ((uVar12 & 1) == 0) {
                local_64 = iVar11;
                if (iVar10 != iVar5) {
                  _Src = local_60 + local_70;
                  local_70 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),(char)uVar13);
                  memmove(local_60 + iVar10,_Src,(longlong)(iVar4 - iVar5) << 2);
                  uVar13 = local_70 & 0xff;
                }
                iVar10 = iVar10 + (iVar4 - iVar5);
                iVar11 = local_64;
              }
              uVar12 = uVar13;
              iVar5 = iVar4;
            } while ((longlong)uVar9 < lVar14);
            *(int *)(param_1 + 0x108) = iVar10;
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
  }
  if (*(int *)(param_1 + 0x10c) < 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_14481578e(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449e1fc FUN_14449e1fc body=1001 status=ok
// SIG undefined FUN_14449e1fc(void)

uint FUN_14449e1fc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  uVar7 = *(uint *)(param_1 + 0xa8);
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar12 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar12 * 8);
      bVar3 = DAT_00000010;
      if (((lVar1 == 0) || (bVar3 = *(byte *)(lVar1 + 0x10), *(byte *)(lVar1 + 0x10) != 4)) ||
         (bVar3 = 4, *(char *)(lVar1 + 0x358) == '\0')) {
        uVar2 = *(undefined8 *)(lVar1 + 0x14);
        uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar8 = (uint)uVar2 & 0xffff;
        uVar5 = (uint)bVar3 +
                (((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 10;
        uVar7 = uVar5 >> 0xd ^ uVar7 - uVar5;
        uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
        uVar9 = uVar8 >> 0xd ^ (uVar5 - uVar7) - uVar8;
        uVar7 = uVar9 >> 0xc ^ (uVar7 - uVar8) - uVar9;
        uVar5 = uVar7 << 0x10 ^ (uVar8 - uVar9) - uVar7;
        uVar8 = uVar5 >> 5 ^ (uVar9 - uVar7) - uVar5;
        uVar7 = uVar8 >> 3 ^ (uVar7 - uVar5) - uVar8;
        uVar5 = uVar7 << 10 ^ (uVar5 - uVar8) - uVar7;
        uVar7 = uVar5 >> 0xf ^ uVar8 - (uVar7 + uVar5);
        if (lVar1 != 0) {
          if ((((bVar3 == 1) || (bVar3 == 0x10)) || ((bVar3 == 0x80 || (bVar3 == 0x20)))) &&
             (lVar10 = *(longlong *)(lVar1 + 0x108), lVar10 != 0)) {
            uVar2 = *(undefined8 *)(lVar10 + 0x14);
            uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
            uVar8 = (uint)uVar2 & 0xffff;
            uVar5 = (uint)*(byte *)(lVar10 + 0x10) +
                    (((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 10;
            uVar7 = uVar5 >> 0xd ^ uVar7 - uVar5;
            uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
            uVar9 = uVar8 >> 0xd ^ (uVar5 - uVar7) - uVar8;
            uVar7 = uVar9 >> 0xc ^ (uVar7 - uVar8) - uVar9;
            uVar5 = uVar7 << 0x10 ^ (uVar8 - uVar9) - uVar7;
            uVar8 = uVar5 >> 5 ^ (uVar9 - uVar7) - uVar5;
            uVar7 = uVar8 >> 3 ^ (uVar7 - uVar5) - uVar8;
            uVar5 = uVar7 << 10 ^ (uVar5 - uVar8) - uVar7;
            uVar7 = uVar5 >> 0xf ^ uVar8 - (uVar7 + uVar5);
          }
          if ((bVar3 == 4) || (bVar3 == 2)) {
            lVar10 = lVar1 + 0x110;
            if (*(longlong *)(lVar1 + 0x1a0) != 0) {
              lVar10 = *(longlong *)(lVar1 + 0x1a0);
            }
            iVar11 = *(int *)(lVar1 + 0x1b0);
            if ((longlong)iVar11 != 0) {
              lVar6 = 0;
              do {
                uVar2 = *(undefined8 *)(*(longlong *)(lVar10 + lVar6) + 0x14);
                uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
                uVar8 = (uint)uVar2 & 0xffff;
                uVar7 = FUN_144a78877(uVar7,(uint)*(byte *)(*(longlong *)(lVar10 + lVar6) + 0x10) +
                                            (((uint)uVar2 << 0x10 | uVar8) +
                                             (int)((ulonglong)uVar2 >> 0x20) +
                                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 10);
                lVar6 = lVar6 + 0x90;
              } while ((longlong)iVar11 * 0x90 != lVar6);
              bVar3 = *(byte *)(lVar1 + 0x10);
              goto LAB_14449e41f;
            }
          }
          else {
LAB_14449e41f:
            if (bVar3 == 1) {
              iVar11 = uVar7 - *(byte *)(lVar1 + 0x110);
              uVar8 = iVar11 * 0x100 ^ 0x9e3779b9 - uVar7;
              uVar5 = uVar8 >> 0xd ^ ((uint)*(byte *)(lVar1 + 0x110) - iVar11) - uVar8;
              uVar7 = uVar5 >> 0xc ^ (iVar11 - uVar8) - uVar5;
              uVar8 = uVar7 << 0x10 ^ (uVar8 - uVar5) - uVar7;
              uVar5 = uVar8 >> 5 ^ (uVar5 - uVar7) - uVar8;
              uVar7 = uVar5 >> 3 ^ (uVar7 - uVar8) - uVar5;
              uVar8 = uVar7 << 10 ^ (uVar8 - uVar5) - uVar7;
              uVar7 = uVar8 >> 0xf ^ uVar5 - (uVar7 + uVar8);
              goto LAB_14449e49e;
            }
          }
          if (bVar3 == 4) {
            uVar4 = FUN_1491d8124(lVar1 + 0x210);
            uVar7 = FUN_144a78877(uVar7,uVar4);
            bVar3 = *(byte *)(lVar1 + 0x10);
          }
          if (bVar3 == 0x40) {
            uVar4 = FUN_1491d832e(lVar1 + 0x48);
            uVar7 = FUN_144a78877(uVar7,uVar4);
          }
        }
      }
LAB_14449e49e:
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0xc0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  return uVar7;
}



// FUNCTION 14449e5e6 FUN_14449e5e6 body=1052 status=ok
// SIG undefined FUN_14449e5e6(void)

void FUN_14449e5e6(longlong param_1,longlong param_2,char param_3,ulonglong param_4,char param_5,
                  byte param_6)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  char local_b8;
  char local_ab;
  undefined1 local_aa;
  byte local_a9;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  param_4 = param_4 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_ab = param_3;
  if ((param_5 != '\0') && (*(int *)(param_1 + 0xa8) != *(int *)(param_2 + 0xa8))) {
    FUN_140ad4952(param_1,param_2,1);
  }
  if (0 < *(int *)(param_1 + 0xc0)) {
    local_a9 = *(int *)(param_1 + 0xa8) != *(int *)(param_2 + 0xa8) & param_6;
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + lVar10 * 8);
      plVar1 = plVar5 + 2;
      uVar6 = FUN_140813180(param_2,plVar1);
      if (((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_2 + 0xc0))) &&
         (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + (ulonglong)uVar6 * 8), lVar9 != 0))
      {
        local_b8 = param_5;
        (**(code **)(*plVar5 + 0x38))(plVar5,lVar9,local_ab,param_4 & 0xffffffff);
        iVar4 = *(int *)((longlong)plVar5 + 0x1c);
        if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x568))) {
          piVar2 = (int *)(*(longlong *)(param_1 + 0x560) + (longlong)iVar4 * 4);
          *piVar2 = *piVar2 + 1;
        }
        if (local_a9 != 0) {
          if ((plVar5 == (longlong *)0x0) ||
             ((plVar13 = plVar5, (char)*plVar1 != '\x02' && ((char)*plVar1 != '\x04')))) {
            plVar13 = (longlong *)0x0;
          }
          cVar3 = *(char *)(lVar9 + 0x10);
          if ((((cVar3 == '\x04') || (cVar3 == '\x02')) && (plVar13 != (longlong *)0x0)) &&
             ((int)plVar13[0x36] != *(int *)(lVar9 + 0x1b0))) {
            if (((plVar5 == (longlong *)0x0) || (cVar3 != '\x04')) || ((char)*plVar1 != '\x04')) {
              if (local_ab != '\0') {
                param_4 = param_4 & 0xffffffff;
                FUN_1401571e4(param_2,local_a8,lVar9,3);
                if ((undefined8 *)plVar13[0xc] != (undefined8 *)0x0) {
                  puVar12 = local_a8;
                  puVar11 = (undefined8 *)plVar13[0xc];
                  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *puVar11 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar11 = puVar11 + 1;
                  }
                }
                puVar7 = (undefined1 *)plVar13[0x12];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 0;
                puVar7 = (undefined1 *)plVar13[0x14];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                iVar4 = *(int *)((longlong)plVar13 + 0x1c);
                if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x568))) {
                  piVar2 = (int *)(*(longlong *)(param_1 + 0x560) + (longlong)iVar4 * 4);
                  *piVar2 = *piVar2 + 1;
                }
              }
              if ((char)param_4 != '\0') {
                param_4 = param_4 & 0xffffffff;
                FUN_1401571e4(param_2,local_a8,lVar9,2);
                if ((undefined8 *)plVar13[0x10] != (undefined8 *)0x0) {
                  puVar12 = local_a8;
                  puVar11 = (undefined8 *)plVar13[0x10];
                  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                    *puVar11 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar11 = puVar11 + 1;
                  }
                }
                puVar7 = (undefined1 *)plVar13[0x16];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 0;
                puVar7 = (undefined1 *)plVar13[0x18];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                uVar6 = *(uint *)((longlong)plVar13 + 0x1c);
                goto joined_r0x00014449e9ab;
              }
            }
            else {
              local_aa = (undefined1)param_4;
              if (local_ab != '\0') {
                FUN_1401261c4(param_2,local_a8,lVar9,3);
                puVar12 = (undefined8 *)plVar5[0x83];
                if (puVar12 != (undefined8 *)0x0) {
                  puVar11 = local_a8;
                  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *puVar12 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar12 = puVar12 + 1;
                  }
                }
                puVar7 = (undefined1 *)plVar5[0x89];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 0;
                puVar7 = (undefined1 *)plVar5[0x8b];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                puVar7 = (undefined1 *)plVar5[0x12];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                puVar7 = (undefined1 *)plVar5[0x99];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                iVar4 = *(int *)((longlong)plVar5 + 0x1c);
                param_4 = CONCAT71((int7)((ulonglong)puVar12 >> 8),local_aa);
                if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x568))) {
                  piVar2 = (int *)(*(longlong *)(param_1 + 0x560) + (longlong)iVar4 * 4);
                  *piVar2 = *piVar2 + 1;
                }
              }
              if ((char)param_4 != '\0') {
                FUN_1401261c4(param_2,local_a8,lVar9,2);
                puVar12 = (undefined8 *)plVar5[0x87];
                if (puVar12 != (undefined8 *)0x0) {
                  puVar11 = local_a8;
                  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                    *puVar12 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar12 = puVar12 + 1;
                  }
                }
                puVar7 = (undefined1 *)plVar5[0x8d];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 0;
                puVar7 = (undefined1 *)plVar5[0x8f];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                puVar7 = (undefined1 *)plVar5[0x16];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                puVar7 = (undefined1 *)plVar5[0x9d];
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_14cc07bfc;
                }
                *puVar7 = 1;
                uVar6 = *(uint *)((longlong)plVar5 + 0x1c);
                param_4 = CONCAT71((int7)((ulonglong)puVar12 >> 8),local_aa);
joined_r0x00014449e9ab:
                if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x568))) {
                  piVar2 = (int *)(*(longlong *)(param_1 + 0x560) + (ulonglong)uVar6 * 4);
                  *piVar2 = *piVar2 + 1;
                }
              }
            }
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0xc0));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449ea04 FUN_14449ea04 body=661 status=ok
// SIG undefined FUN_14449ea04(void)

void FUN_14449ea04(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_398 [32];
  undefined1 local_378;
  undefined1 local_370;
  undefined1 local_368;
  undefined1 local_360;
  longlong local_358;
  longlong local_350;
  undefined1 local_348 [96];
  undefined1 local_2e8 [96];
  undefined1 local_288 [96];
  undefined1 local_228 [96];
  undefined1 local_1c8 [96];
  undefined1 local_168 [96];
  undefined8 local_108 [12];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar3 = *(int *)(param_1 + 0xc0);
  local_358 = param_2;
  if (0 < iVar3) {
    local_350 = param_2 + 0x70;
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar8 * 8);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == ' ')) {
        if ((*(int *)(lVar1 + 0x118) == 0) ||
           ((*(longlong **)(lVar1 + 0x110) == (longlong *)0x0 ||
            (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x110) + 0x30))(), cVar2 == '\0')))) {
          puVar6 = &DAT_14c846480;
          puVar7 = local_a8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          if (*(int *)(lVar1 + 0x118) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(lVar1 + 0x110);
          }
          local_378 = 1;
          (**(code **)(*plVar5 + 0x58))(plVar5,local_a8,local_358,lVar1 + 0x10);
        }
        if (((*(int *)(lVar1 + 0x118) == 0) || (*(longlong **)(lVar1 + 0x110) == (longlong *)0x0))
           || (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x110) + 0x30))(), cVar2 == '\0')) {
          puVar6 = &DAT_14c846480;
          puVar7 = local_108;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          if (*(int *)(lVar1 + 0x118) == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = *(longlong **)(lVar1 + 0x110);
          }
          local_378 = 0;
          (**(code **)(*plVar5 + 0x58))(plVar5,local_108,local_358,lVar1 + 0x10);
        }
        lVar4 = local_350;
        FUN_1449437a2(local_a8,local_168,local_350);
        FUN_1449437a2(local_108,local_1c8,lVar4);
        FUN_14449ec9a(param_1,local_228,lVar1,2);
        FUN_14449ec9a(param_1,local_288,lVar1,3);
        FUN_1449437a2(local_168,local_2e8,local_228);
        FUN_1449437a2(local_1c8,local_348,local_288);
        local_360 = 0;
        local_368 = 0;
        local_370 = 0;
        local_378 = 1;
        FUN_140122d4e(param_1,lVar1,local_2e8,0);
        local_360 = 0;
        local_368 = 0;
        local_370 = 0;
        local_378 = 1;
        FUN_140122d4e(param_1,lVar1,local_348,1);
        iVar3 = *(int *)(param_1 + 0xc0);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449ec9a FUN_14449ec9a body=150 status=ok
// SIG undefined FUN_14449ec9a(void)

undefined8 *
FUN_14449ec9a(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 == 0) {
LAB_14449ed13:
    puVar3 = &DAT_14c846480;
    puVar4 = param_2;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_3 + 0x10);
    if (uVar1 < 0x21) {
      if ((0x100010002U >> (uVar1 & 0x3f) & 1) == 0) {
        if ((0x14UL >> (uVar1 & 0x3f) & 1) != 0) {
          FUN_1444a3b48(param_1,param_2,param_3 + 0x110,param_4,&DAT_14c846480,0,&DAT_14c846480,0);
          return param_2;
        }
        goto LAB_14449ecfb;
      }
    }
    else {
LAB_14449ecfb:
      if (*(byte *)(param_3 + 0x10) != 0x80) goto LAB_14449ed13;
    }
    FUN_1401571e4(param_1,param_2,*(undefined8 *)(param_3 + 0x108));
  }
  return param_2;
}



// FUNCTION 14449ed30 FUN_14449ed30 body=3202 status=ok
// SIG undefined FUN_14449ed30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14449ed30(undefined4 *param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  double *pdVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double *pdVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_338 [32];
  double local_318;
  double dStack_310;
  double local_308;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
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
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168 [2];
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (param_3 == 0) {
    puVar14 = &DAT_14c846480;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *param_2 = *puVar14;
      puVar14 = puVar14 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_338);
  }
  lVar4 = 0x4e8;
  if (param_4 < 4) {
    lVar4 = *(longlong *)(&DAT_14bb90828 + (ulonglong)param_4 * 8);
  }
  pcVar9 = "";
  if (*(char **)(param_3 + lVar4) != (char *)0x0) {
    pcVar9 = *(char **)(param_3 + lVar4);
  }
  if (*pcVar9 != '\x01') goto LAB_14449f797;
  if (param_4 == 0) {
    FUN_1401571e4(param_1,&local_2e8,param_3,2);
    uVar5 = 0x4b0;
LAB_14449eeac:
    puVar14 = *(undefined8 **)(param_3 + 8 + uVar5);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < (int)DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 == 0xffffffff) {
          puVar14 = &DAT_14cc07c00;
          puVar11 = &DAT_14c846480;
          puVar12 = &DAT_14cc07c00;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
      }
    }
    FUN_1449437a2(puVar14,local_168,&local_2e8);
    dVar26 = (double)local_158._0_8_ * (double)local_158._0_8_ + local_168[0] * local_168[0];
    dVar39 = (double)local_158._8_8_ * (double)local_158._8_8_ + local_168[1] * local_168[1];
    auVar31._0_8_ = dVar26 + dVar39;
    auVar31._8_8_ = dVar26 + dVar39;
    auVar24._8_8_ = -(ulonglong)(1e-08 <= auVar31._8_8_);
    auVar24._0_8_ = -(ulonglong)(1e-08 <= auVar31._0_8_);
    auVar23 = sqrtpd(auVar31,auVar31);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar27._0_8_ = auVar23._0_8_ * (double)local_158._0_8_;
    auVar27._8_8_ = auVar23._8_8_ * (double)local_158._8_8_;
    local_158 = blendvpd(_DAT_149935300,auVar27,auVar24);
    local_168[0] = (double)((ulonglong)(local_168[0] * auVar23._0_8_) &
                           -(ulonglong)(1e-08 <= auVar31._0_8_));
    local_168[1] = (double)((ulonglong)(local_168[1] * auVar23._8_8_) &
                           -(ulonglong)(1e-08 <= auVar31._8_8_));
    pdVar13 = *(double **)(param_3 + 0x488 + (ulonglong)(param_4 != 1) * 0x20);
    if (pdVar13 != (double *)0x0) {
      pdVar10 = local_168;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *pdVar13 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar13 = pdVar13 + 1;
      }
    }
    puVar6 = *(undefined1 **)(param_3 + 0x4d8 + (ulonglong)(param_4 != 1) * 0x20);
  }
  else {
    if (param_4 == 1) {
      FUN_1401571e4(param_1,&local_2e8,param_3,3);
      uVar5 = 0x490;
      goto LAB_14449eeac;
    }
    if (param_4 == 3) {
      FUN_1401571e4(param_1,&local_2e8,param_3,3);
      uVar5 = 0x480;
    }
    else {
      FUN_1401571e4(param_1,&local_2e8,param_3,((param_4 - 1 & 0xfffffffd) == 0) + '\x02');
      uVar5 = 0x4a0;
      if (param_4 < 2) goto LAB_14449eeac;
    }
    pdVar13 = *(double **)(param_3 + 8 + uVar5);
    if (pdVar13 == (double *)0x0) {
      uVar5 = (ulonglong)DAT_14cc07c60;
      param_1 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pdVar13 = (double *)&DAT_14cc07c00;
      if ((int)param_1[0x44] < (int)DAT_14cc07c60) {
        param_1 = &DAT_14cc07c60;
        uVar5 = FUN_144b3d300();
        if (DAT_14cc07c60 == 0xffffffff) {
          pdVar13 = (double *)&DAT_14cc07c00;
          puVar14 = &DAT_14c846480;
          puVar11 = &DAT_14cc07c00;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar11 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar11 = puVar11 + 1;
          }
          param_1 = &DAT_14cc07c60;
          uVar5 = _Init_thread_footer();
        }
      }
    }
    local_318 = local_2a8._0_8_;
    dStack_310 = local_2a8._8_8_;
    dVar26 = local_298._0_8_;
    dVar21 = local_298._8_8_;
    auVar24 = *(undefined1 (*) [16])(pdVar13 + 8);
    dVar39 = auVar24._0_8_;
    dVar32 = auVar24._8_8_;
    auVar31 = *(undefined1 (*) [16])(pdVar13 + 10);
    dVar19 = auVar31._0_8_;
    auVar24 = minpd(auVar24,local_2a8);
    auVar27 = minpd(auVar31,local_298);
    auVar23._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    iVar3 = movmskpd((int)uVar5,auVar23);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    uVar7 = movmskpd((int)param_1,auVar28);
    if ((uVar7 & 0x3fffffff) == 0 && iVar3 == 0) {
      dVar33 = *pdVar13;
      dVar40 = pdVar13[1];
      dVar25 = pdVar13[2];
      dVar34 = pdVar13[3];
      dVar22 = dVar40 * local_2d8 * -1.0 +
               dVar25 * dStack_2e0 + dVar34 * local_2e8 * 1.0 + dVar33 * dStack_2d0;
      dVar30 = dVar33 * local_2d8 * 1.0 +
               dVar34 * dStack_2e0 + dVar25 * local_2e8 * -1.0 + dVar40 * dStack_2d0;
      auVar41._0_8_ =
           dVar34 * local_2d8 * 1.0 +
           ((local_2e8 * dVar40 * 1.0 + dVar25 * dStack_2d0) - dVar33 * dStack_2e0);
      auVar41._8_8_ =
           dVar25 * local_2d8 * -1.0 +
           ((local_2e8 * dVar33 * -1.0 + dVar34 * dStack_2d0) - dVar40 * dStack_2e0);
      dVar35 = pdVar13[4] * local_318;
      dVar36 = pdVar13[5] * dStack_310;
      dVar37 = pdVar13[6] * dVar26;
      dVar38 = pdVar13[7] * dVar21;
      dVar25 = dVar36 * local_2e8 - dStack_2e0 * dVar35;
      dVar34 = dVar37 * dStack_2e0 - local_2d8 * dVar36;
      dVar33 = dVar35 * local_2d8 - local_2e8 * dVar37;
      dVar40 = dVar38 * dStack_2d0 - dStack_2d0 * dVar38;
      dVar34 = dVar34 + dVar34;
      dVar33 = dVar33 + dVar33;
      dVar25 = dVar25 + dVar25;
      dVar40 = dVar40 + dVar40;
      local_108 = (dVar25 * dStack_2e0 - local_2d8 * dVar33) + dStack_2d0 * dVar34 + dVar35 +
                  local_2c8;
      dStack_100 = (dVar34 * local_2d8 - dVar25 * local_2e8) + dStack_2d0 * dVar33 + dVar36 +
                   dStack_2c0;
      local_f8 = (dVar33 * local_2e8 - dStack_2e0 * dVar34) + dStack_2d0 * dVar25 + dVar37 +
                 local_2b8;
      dStack_2b0 = (dVar40 * dStack_2d0 - dVar40 * dStack_2d0) + dStack_2d0 * dVar40 + dVar38 +
                   dStack_2b0;
      local_318 = dVar39 * local_318;
      dStack_310 = dVar32 * dStack_310;
      dVar19 = dVar19 * dVar26;
      dVar21 = auVar31._8_8_ * dVar21;
    }
    else {
      dVar25 = dStack_2e0 + dStack_2e0;
      dVar33 = local_2d8 + local_2d8;
      dVar34 = local_2e8 * (local_2e8 + local_2e8);
      local_198 = (1.0 - (dVar34 + dStack_2e0 * dVar25)) * dVar26;
      dVar40 = (local_2e8 + local_2e8) * dStack_2d0;
      local_1a8 = (dVar25 * dStack_2d0 + local_2e8 * dVar33) * dVar26;
      local_2f8 = dVar26 * dVar19;
      dStack_2f0 = dVar21 * auVar31._8_8_;
      local_1c8 = (dVar25 * local_2e8 - dVar33 * dStack_2d0) * dStack_310;
      dStack_1a0 = (dVar33 * dStack_2e0 - dVar40) * dVar26;
      local_1e8 = (1.0 - (local_2d8 * dVar33 + dStack_2e0 * dVar25)) * local_318;
      dStack_1c0 = (1.0 - (local_2d8 * dVar33 + dVar34)) * dStack_310;
      dStack_1e0 = (dVar25 * local_2e8 + dVar33 * dStack_2d0) * local_318;
      local_1b8 = (dVar33 * dStack_2e0 + dVar40) * dStack_310;
      local_1d8 = (local_2e8 * dVar33 - dVar25 * dStack_2d0) * local_318;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = local_2c8;
      dStack_180 = dStack_2c0;
      local_178 = local_2b8;
      uStack_170 = 0x3ff0000000000000;
      dVar25 = *pdVar13;
      dVar34 = pdVar13[1];
      dVar22 = pdVar13[2];
      dVar30 = dVar34 + dVar34;
      dVar21 = dVar22 + dVar22;
      dVar35 = dVar25 * (dVar25 + dVar25);
      local_218 = (1.0 - (dVar35 + dVar34 * dVar30)) * dVar19;
      dVar26 = pdVar13[3];
      dVar33 = dVar21 * dVar26;
      dVar40 = (dVar25 + dVar25) * pdVar13[3];
      dVar26 = dVar30 * dVar26;
      local_228 = (dVar26 + *pdVar13 * dVar21) * dVar19;
      local_248 = (dVar30 * dVar25 - dVar33) * dVar32;
      dStack_220 = (dVar21 * dVar34 - dVar40) * dVar19;
      local_318 = local_318 * dVar39;
      dStack_310 = dStack_310 * dVar32;
      local_268 = (1.0 - (dVar22 * dVar21 + dVar34 * dVar30)) * dVar39;
      dStack_240 = (1.0 - (dVar22 * dVar21 + dVar35)) * dVar32;
      dStack_260 = (dVar30 * dVar25 + dVar33) * dVar39;
      local_238 = (dVar21 * dVar34 + dVar40) * dVar32;
      local_258 = (*pdVar13 * dVar21 - dVar26) * dVar39;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = pdVar13[4];
      dStack_200 = pdVar13[5];
      local_1f8 = pdVar13[6];
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(local_168);
      dVar21 = dStack_2f0;
      dVar19 = local_2f8;
      auVar24 = _DAT_149934d80;
      local_300 = (double)local_158._0_8_;
      dVar26 = (double)local_158._0_8_ * (double)local_158._0_8_ +
               local_168[0] * local_168[0] + local_168[1] * local_168[1];
      local_308 = local_148;
      dVar39 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
      dVar33 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
      uVar5 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
      dVar32 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar5);
      uVar5 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
      dVar39 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar39)) & uVar5);
      uVar5 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
      dVar33 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar5);
      auVar15._8_8_ = -(ulonglong)(0.0 <= dStack_310);
      auVar15._0_8_ = -(ulonglong)(0.0 <= local_318);
      auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar15);
      dVar26 = (double)(~-(ulonglong)(0.0 <= local_2f8) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= local_2f8) & 0x3ff0000000000000);
      dVar40 = auVar31._0_8_;
      local_168[0] = local_168[0] * dVar32 * dVar40;
      local_168[1] = local_168[1] * dVar32 * dVar40;
      local_158._0_8_ = dVar32 * (double)local_158._0_8_ * dVar40;
      dVar32 = auVar31._8_8_;
      local_138 = dVar39 * local_138 * dVar32;
      local_140 = local_140 * dVar39 * dVar32;
      local_148 = dVar32 * local_148 * dVar39;
      local_118 = dVar33 * local_118 * dVar26;
      local_120 = local_120 * dVar33 * dVar26;
      local_128 = dVar26 * local_128 * dVar33;
      FUN_14481fd10(&local_288,local_168);
      dVar26 = local_278 * local_278 + local_288 * local_288;
      dVar39 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar20._0_8_ = dVar26 + dVar39;
      auVar20._8_8_ = dVar26 + dVar39;
      auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
      auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
      auVar31 = sqrtpd(auVar20,auVar20);
      auVar24 = divpd(auVar24,auVar31);
      auVar29._0_8_ = auVar24._0_8_ * local_278;
      auVar29._8_8_ = auVar24._8_8_ * dStack_270;
      dVar22 = (double)((ulonglong)(local_288 * auVar24._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
      dVar30 = (double)((ulonglong)(dStack_280 * auVar24._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
      auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar16);
      dStack_2b0 = 0.0;
    }
    puVar1 = *(ulonglong **)(param_3 + 0x498 + (ulonglong)(param_4 != 3) * 0x20);
    if (puVar1 != (ulonglong *)0x0) {
      dVar32 = auVar41._0_8_;
      dVar33 = auVar41._8_8_;
      dVar26 = dVar22 * dVar22 + dVar32 * dVar32;
      dVar39 = dVar30 * dVar30 + dVar33 * dVar33;
      auVar18._0_8_ = dVar26 + dVar39;
      auVar18._8_8_ = dVar26 + dVar39;
      auVar17._8_8_ = -(ulonglong)(1e-08 <= auVar18._8_8_);
      auVar17._0_8_ = -(ulonglong)(1e-08 <= auVar18._0_8_);
      auVar24 = sqrtpd(auVar18,auVar18);
      auVar31 = divpd(_DAT_149934d80,auVar24);
      auVar42._0_8_ = dVar32 * auVar31._0_8_;
      auVar42._8_8_ = dVar33 * auVar31._8_8_;
      auVar24 = blendvpd(_DAT_149935300,auVar42,auVar17);
      *puVar1 = (ulonglong)(auVar31._0_8_ * dVar22) & -(ulonglong)(1e-08 <= auVar18._0_8_);
      puVar1[1] = (ulonglong)(auVar31._8_8_ * dVar30) & -(ulonglong)(1e-08 <= auVar18._8_8_);
      *(undefined1 (*) [16])(puVar1 + 2) = auVar24;
      puVar1[4] = (ulonglong)local_108;
      puVar1[5] = (ulonglong)dStack_100;
      auVar2._8_4_ = SUB84(dStack_2b0,0);
      auVar2._0_8_ = local_f8;
      auVar2._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
      *(undefined1 (*) [16])(puVar1 + 6) = auVar2;
      puVar1[8] = (ulonglong)local_318;
      puVar1[9] = (ulonglong)dStack_310;
      puVar1[10] = (ulonglong)dVar19;
      puVar1[0xb] = (ulonglong)dVar21;
    }
    puVar6 = *(undefined1 **)(param_3 + 0x4c8 + (ulonglong)(param_4 != 3) * 0x20);
  }
  puVar8 = &DAT_14cc07bfc;
  if (puVar6 != (undefined1 *)0x0) {
    puVar8 = puVar6;
  }
  *puVar8 = 0;
LAB_14449f797:
  if (param_4 == 0) {
    param_3 = param_3 + 0x4a0;
  }
  else if (param_4 == 1) {
    param_3 = param_3 + 0x480;
  }
  else if (param_4 == 3) {
    param_3 = param_3 + 0x490;
  }
  else {
    param_3 = param_3 + 0x4b0;
  }
  puVar14 = *(undefined8 **)(param_3 + 8);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = &DAT_14cc07c00;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < (int)DAT_14cc07c60) {
      FUN_144b3d300(&DAT_14cc07c60);
      if (DAT_14cc07c60 == 0xffffffff) {
        puVar14 = &DAT_14cc07c00;
        puVar11 = &DAT_14c846480;
        puVar12 = &DAT_14cc07c00;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        _Init_thread_footer(&DAT_14cc07c60);
      }
    }
  }
  puVar11 = param_2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar11 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar11 = puVar11 + 1;
  }
  if ((local_e0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14449f9b8 FUN_14449f9b8 body=240 status=ok
// SIG undefined FUN_14449f9b8(void)

void FUN_14449f9b8(longlong param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined1 *)(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x110) = 0;
  local_40 = (void *)0x0;
  local_38 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0x38);
  lVar4 = (longlong)local_38;
  pvVar2 = *(void **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  if (lVar4 != 0) {
    FUN_1466cc7d0(&local_40,local_38,0);
    memcpy(local_40,pvVar2,lVar4 << 3);
    pvVar2 = local_40;
    lVar4 = (longlong)local_38;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)((longlong)pvVar2 + lVar5);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == '\b')) {
          local_48 = 0;
          FUN_14143b662(param_1,lVar3,0,0);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
  }
  *(undefined1 *)(param_1 + 0x110) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14449faaa FUN_14449faaa body=225 status=ok
// SIG undefined FUN_14449faaa(void)

void FUN_14449faaa(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if ((param_2 != 0) && ((param_4 != '\0' || (*(char *)(param_2 + 0x48) == '\x01')))) {
    *(undefined1 *)(param_2 + 0x48) = 0;
    iVar1 = *(int *)(param_1 + 0x108);
    lVar7 = (longlong)iVar1;
    if (lVar7 != 0) {
      iVar2 = *(int *)(param_2 + 0x1c);
      piVar3 = *(int **)(param_1 + 0x100);
      iVar6 = 0;
      bVar12 = *piVar3 == iVar2;
      iVar9 = 0;
      do {
        lVar5 = (longlong)iVar9;
        iVar10 = iVar9;
        lVar8 = lVar5;
        iVar4 = iVar9 + 1;
        if (iVar9 + 1 < iVar1) {
          iVar4 = iVar1;
        }
        do {
          lVar8 = lVar8 + 1;
          iVar11 = iVar4;
          if (lVar7 <= lVar8) break;
          iVar11 = iVar10 + 1;
          iVar10 = iVar11;
        } while (bVar12 == (piVar3[lVar8] == iVar2));
        if (bVar12 == false) {
          if (iVar6 != iVar9) {
            memmove(piVar3 + iVar6,piVar3 + lVar5,(longlong)(iVar11 - iVar9) << 2);
          }
          iVar6 = iVar6 + (iVar11 - iVar9);
        }
        bVar12 = (bool)(bVar12 ^ 1);
        iVar9 = iVar11;
      } while (lVar8 < lVar7);
      *(int *)(param_1 + 0x108) = iVar6;
    }
  }
  return;
}



// FUNCTION 14449fb8c FUN_14449fb8c body=468 status=ok
// SIG undefined FUN_14449fb8c(void)

longlong * FUN_14449fb8c(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if ((((*(int *)(param_1 + 0x30c) == 0) || (uVar3 = *(uint *)(param_1 + 0x308), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0x30c))) ||
      (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (*plVar4 == 0)))))) {
    if ((longlong)*(int *)(param_1 + 800) != 0) {
      pbVar6 = *(byte **)(param_1 + 0x318);
      lVar7 = (longlong)*(int *)(param_1 + 800) * 0xc;
      do {
        if ((((*pbVar6 & ~(byte)param_3) == 0) &&
            (uVar3 = FUN_140813180(param_1,pbVar6), -1 < (int)uVar3)) &&
           (((int)uVar3 < *(int *)(param_1 + 0xc0) &&
            (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar3 * 8), lVar5 != 0
            )))) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14920c72a(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
        }
        pbVar6 = pbVar6 + 0xc;
        lVar7 = lVar7 + -0xc;
      } while (lVar7 != 0);
    }
  }
  else {
    FUN_1415bd5cc(*plVar4,&local_50,param_3);
    if ((longlong)local_48 != 0) {
      lVar7 = (longlong)local_48 * 0xc;
      lVar5 = local_50;
      do {
        uVar3 = FUN_140813180(param_1,lVar5);
        if (((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0xc0))) &&
           (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar3 * 8), lVar2 != 0)
           ) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14920c72a(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
        lVar5 = lVar5 + 0xc;
        lVar7 = lVar7 + -0xc;
      } while (lVar7 != 0);
    }
    if (local_50 != 0) {
      FUN_1400020a8(local_50);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14449fd62 FUN_14449fd62 body=647 status=ok
// SIG undefined FUN_14449fd62(void)

undefined8 * FUN_14449fd62(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [24];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_140813180();
  if (param_4 != '\0') {
    if (((int)uVar4 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar4)) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0x300000000;
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar4 * 8);
      local_50 = (undefined1 *)0x0;
      local_48 = 0x300000000;
      if (lVar5 != 0) {
        if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
          FUN_1415169c8(param_1);
        }
        lVar5 = (longlong)*(int *)(lVar5 + 0x30);
        if (lVar5 != -1) {
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0x288) + 4 + lVar5 * 8);
          if ((longlong)(int)uVar4 != 0) {
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x288) + lVar5 * 8);
            lVar5 = *(longlong *)(param_1 + 0x298);
            local_48 = CONCAT44(local_48._4_4_,uVar4);
            if (uVar4 < 4) {
              puVar6 = (undefined1 *)0x0;
            }
            else {
              FUN_14920caec(local_68,0);
              puVar6 = local_50;
            }
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = local_68;
            }
            memcpy(puVar6,(void *)((longlong)iVar1 * 8 + lVar5),(longlong)(int)uVar4 << 3);
            if ((int)local_48 != 0) {
              uVar8 = 0;
              do {
                puVar6 = local_50;
                if (local_50 == (undefined1 *)0x0) {
                  puVar6 = local_68;
                }
                lVar5 = *(longlong *)(puVar6 + uVar8 * 8);
                if (lVar5 != 0) {
                  if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
                    FUN_1415169c8(param_1);
                  }
                  uVar3 = local_48;
                  lVar5 = (longlong)*(int *)(lVar5 + 0x30);
                  if (lVar5 != -1) {
                    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x288) + 4 + lVar5 * 8);
                    if ((longlong)(int)uVar4 != 0) {
                      iVar1 = *(int *)(*(longlong *)(param_1 + 0x288) + lVar5 * 8);
                      lVar5 = *(longlong *)(param_1 + 0x298);
                      iVar2 = (int)local_48;
                      lVar7 = (longlong)(int)local_48;
                      local_48 = CONCAT44(local_48._4_4_,(int)local_48 + uVar4);
                      if ((uint)(local_48._4_4_ - iVar2) < uVar4) {
                        FUN_14920caec(local_68,uVar3 & 0xffffffff);
                      }
                      puVar6 = local_50;
                      if (local_50 == (undefined1 *)0x0) {
                        puVar6 = local_68;
                      }
                      memcpy(puVar6 + lVar7 * 8,(void *)((longlong)iVar1 * 8 + lVar5),
                             (longlong)(int)uVar4 << 3);
                    }
                  }
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 != (local_48 & 0xffffffff));
            }
          }
        }
      }
    }
    FUN_1491db2c0(param_2,local_68);
    goto LAB_14449fecc;
  }
  if ((((int)uVar4 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar4)) ||
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar4 * 8), lVar5 == 0)) {
LAB_14449fe88:
    local_70 = 0;
    local_78 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
      FUN_1415169c8(param_1);
    }
    lVar5 = (longlong)*(int *)(lVar5 + 0x30);
    if (lVar5 == -1) goto LAB_14449fe88;
    local_70 = *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 4 + lVar5 * 8);
    local_78 = (longlong)*(int *)(*(longlong *)(param_1 + 0x288) + lVar5 * 8) * 8 +
               *(longlong *)(param_1 + 0x298);
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14920c9b4(&local_78,param_2);
LAB_14449fecc:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14449ffea FUN_14449ffea body=72 status=ok
// SIG undefined FUN_14449ffea(void)

uint FUN_14449ffea(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 0x10);
  if (bVar1 != 1) {
    if (bVar1 < 0x10) {
      if ((bVar1 != 2) && (bVar1 != 4)) {
        return 0;
      }
      return *(uint *)(param_2 + 0x1b0);
    }
    if (((bVar1 != 0x10) && (bVar1 != 0x80)) && (bVar1 != 0x20)) {
      return 0;
    }
  }
  return (uint)(*(longlong *)(param_2 + 0x108) != 0);
}



// FUNCTION 1444a0032 FUN_1444a0032 body=382 status=ok
// SIG undefined FUN_1444a0032(void)

void * FUN_1444a0032(undefined8 param_1,void *param_2,longlong param_3,ulonglong param_4,
                    undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *_Src;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined1 local_148 [104];
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  byte local_c8;
  undefined1 local_c7;
  undefined1 local_bc [132];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_bc,0,0x84);
  if (param_3 == 0) goto LAB_1444a012c;
  local_c8 = (byte)(param_4 & 0xffffffff);
  local_c7 = param_5;
  local_e0 = param_1;
  local_d8 = param_3;
  local_d0 = local_bc;
  if (3 < local_c8) goto LAB_1444a012c;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_4 & 0xff) {
  case 0:
    cVar3 = FUN_1444a5584(&local_e0);
    if (cVar3 == '\0') {
      uVar1 = *(undefined1 *)(param_3 + 0x211);
      uVar2 = *(undefined1 *)(param_3 + 0x21c);
      uVar4 = 0;
LAB_1444a0191:
      FUN_1401571e4(param_1,local_148,param_3,uVar4);
      FUN_14919dde6(local_bc,local_148,CONCAT71((int7)((param_4 & 0xffffffff) >> 8),uVar1),
                    CONCAT71((int7)((ulonglong)local_bc >> 8),uVar2) & 0xffffffff);
    }
    break;
  case 1:
    cVar3 = FUN_1444a5584(&local_e0);
    if (cVar3 == '\0') {
      uVar1 = *(undefined1 *)(param_3 + 0x211);
      uVar2 = *(undefined1 *)(param_3 + 0x21c);
      uVar4 = 1;
      goto LAB_1444a0191;
    }
    break;
  case 2:
    _Src = (undefined1 *)(param_3 + 0x234);
    goto LAB_1444a013d;
  case 3:
    _Src = (undefined1 *)(param_3 + 0x2b8);
    goto LAB_1444a013d;
  }
LAB_1444a012c:
  _Src = local_bc;
LAB_1444a013d:
  memcpy(param_2,_Src,0x84);
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444a01b2 FUN_1444a01b2 body=102 status=ok
// SIG undefined FUN_1444a01b2(void)

longlong * FUN_1444a01b2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
      FUN_1415169c8();
    }
    lVar1 = (longlong)*(int *)(param_3 + 0x30);
    if (lVar1 != -1) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 4 + lVar1 * 8);
      lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x288) + lVar1 * 8) * 8 +
              *(longlong *)(param_1 + 0x298);
      goto LAB_1444a0207;
    }
  }
  lVar1 = 0;
  uVar2 = 0;
LAB_1444a0207:
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 1444a0218 FUN_1444a0218 body=1058 status=ok
// SIG undefined FUN_1444a0218(void)

void * FUN_1444a0218(longlong param_1,void *param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  longlong lVar10;
  undefined1 auStack_168 [39];
  char local_141;
  void *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  code *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  code *local_a8 [2];
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_108 = (undefined8 *)0x0;
  uStack_100 = 1;
  local_141 = param_4;
  FUN_14920c72a(&local_108,0);
  *local_108 = param_3;
  pvVar9 = param_2;
  if ((int)uStack_100 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x18) = 0;
    *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  }
  else {
    do {
      local_140 = pvVar9;
      lVar10 = local_108[(longlong)(int)uStack_100 + -1];
      uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + -1);
      FUN_14920ca50(&local_108);
      local_118 = (void *)0x0;
      uStack_110 = 0;
      if (lVar10 == 0) {
        local_d8 = 0;
        local_c8 = &PTR_LAB_14bb90370;
        local_e8[0] = FUN_1444ab18e;
        local_c0 = param_1;
        FUN_1491db3fa(param_1,&local_128,local_e8);
        if (local_118 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_118 = (void *)CONCAT44(uStack_124,local_128);
        uStack_110 = CONCAT44(uStack_11c,uStack_120);
        FUN_1491db37e(&local_128);
      }
      else {
        if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
          FUN_1415169c8(param_1);
        }
        lVar6 = (longlong)*(int *)(lVar10 + 0x30);
        if (lVar6 == -1) {
          pvVar9 = (void *)0x0;
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(*(longlong *)(param_1 + 0x288) + 4 + lVar6 * 8);
          pvVar9 = (void *)((longlong)*(int *)(*(longlong *)(param_1 + 0x288) + lVar6 * 8) * 8 +
                           *(longlong *)(param_1 + 0x298));
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar5);
        if (uStack_110._4_4_ == 0 && uVar5 == 0) {
          uStack_110 = (ulonglong)uVar5;
        }
        else {
          FUN_1466cc7d0(&local_118,uVar5);
          if (uVar5 != 0) {
            memcpy(local_118,pvVar9,(longlong)(int)uVar5 << 3);
          }
        }
        FUN_1491db37e(&local_128);
        if ((*(longlong *)(lVar10 + 0x14) == CONCAT44(uStack_120,uStack_124)) &&
           (*(char *)(lVar10 + 0x10) == (char)local_128)) {
          local_98 = 0;
          local_88 = &PTR_LAB_14bb90350;
          local_a8[0] = FUN_1444ab122;
          local_80 = param_1;
          FUN_1491db3fa(param_1,&local_128,local_a8);
          uVar4 = uStack_110;
          lVar6 = (longlong)(int)uStack_120;
          if (lVar6 != 0) {
            iVar3 = (int)uStack_110;
            lVar8 = (longlong)(int)uStack_110;
            uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + uStack_120);
            if ((uint)(uStack_110._4_4_ - iVar3) < uStack_120) {
              FUN_145c8ed70(&local_118,uVar4 & 0xffffffff);
            }
            memmove((void *)(lVar8 * 8 + (longlong)local_118),(void *)CONCAT44(uStack_124,local_128)
                    ,lVar6 << 3);
            uStack_120 = 0;
          }
          if (CONCAT44(uStack_124,local_128) != 0) {
            FUN_1400020a8();
          }
        }
        uStack_120 = *(uint *)(lVar10 + 0x18);
        local_128 = (undefined4)*(undefined8 *)(lVar10 + 0x10);
        uStack_124 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x10) >> 0x20);
      }
      pvVar9 = local_118;
      lVar10 = (longlong)(int)uStack_110;
      if (lVar10 != 0) {
        lVar6 = CONCAT44(uStack_120,uStack_124);
        cVar2 = (char)local_128;
        lVar8 = 0;
        do {
          uVar1 = *(undefined8 *)((longlong)pvVar9 + lVar8);
          lVar7 = FUN_1491db4f2(param_1,uVar1);
          if (lVar7 == 0) {
            FUN_1491db37e(&local_138);
          }
          else {
            local_130 = *(undefined4 *)(lVar7 + 0x18);
            local_138 = (undefined4)*(undefined8 *)(lVar7 + 0x10);
            uStack_134 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x10) >> 0x20);
          }
          uVar4 = uStack_f0;
          if ((CONCAT44(local_130,uStack_134) == lVar6) && ((char)local_138 == cVar2)) {
            lVar7 = (longlong)(int)uStack_f0;
            uVar5 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
            if (uStack_f0._4_4_ < uVar5) {
              FUN_145c8ed70(&local_f8,uVar4 & 0xffffffff);
            }
            uVar4 = uStack_100;
            *(undefined8 *)((longlong)local_f8 + lVar7 * 8) = uVar1;
            if (local_141 != '\0') {
              lVar7 = (longlong)(int)uStack_100;
              uVar5 = (int)uStack_100 + 1;
              uStack_100 = CONCAT44(uStack_100._4_4_,uVar5);
              if (uStack_100._4_4_ < uVar5) {
                FUN_14920c72a(&local_108,uVar4 & 0xffffffff);
              }
              local_108[lVar7] = uVar1;
            }
          }
          lVar8 = lVar8 + 8;
          param_2 = local_140;
        } while (lVar10 * 8 != lVar8);
      }
      if (local_118 != (void *)0x0) {
        FUN_1400020a8(local_118);
      }
      _Src = local_f8;
      pvVar9 = local_140;
    } while ((int)uStack_100 != 0);
    lVar10 = (longlong)(int)uStack_f0;
    *(undefined8 *)((longlong)param_2 + 0x18) = 0;
    *(int *)((longlong)param_2 + 0x20) = (int)uStack_f0;
    if (lVar10 != 0) {
      FUN_14920c8c8(param_2,uStack_f0 & 0xffffffff,0);
      pvVar9 = *(void **)((longlong)param_2 + 0x18);
      if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
        pvVar9 = param_2;
      }
      memcpy(pvVar9,_Src,lVar10 << 3);
      goto LAB_1444a05e4;
    }
  }
  *(undefined4 *)((longlong)param_2 + 0x24) = 3;
LAB_1444a05e4:
  if (local_108 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444a063c FUN_1444a063c body=254 status=ok
// SIG undefined FUN_1444a063c(void)

longlong * FUN_1444a063c(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_140813180(param_1,param_3);
  if (((int)uVar4 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar4)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar4 * 8);
  }
  FUN_14449d5e6(param_1,local_50,uVar6,param_4);
  *param_2 = 0;
  param_2[1] = 0;
  puVar5 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar5 = local_50;
  }
  if ((longlong)local_40 != 0) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(puVar5 + lVar7);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar7 = lVar7 + 8;
    } while ((longlong)local_40 * 8 != lVar7);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444a073c FUN_1444a073c body=216 status=ok
// SIG undefined FUN_1444a073c(void)

longlong * FUN_1444a073c(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0xc0) <= (int)param_3)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)param_3 * 8);
  }
  FUN_14449d5e6(param_1,local_50,uVar4);
  *param_2 = 0;
  param_2[1] = 0;
  puVar3 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar3 = local_50;
  }
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(puVar3 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 0x1c);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444a0816 FUN_1444a0816 body=76 status=ok
// SIG undefined FUN_1444a0816(void)

undefined8 FUN_1444a0816(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140813180(param_1,param_3);
  FUN_1444a0862();
  return param_2;
}



// FUNCTION 1444a0862 FUN_1444a0862 body=230 status=ok
// SIG undefined FUN_1444a0862(void)

longlong * FUN_1444a0862(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 != 0) &&
     (((*(char *)(param_3 + 0x10) == '\x04' || (*(char *)(param_3 + 0x10) == '\x02')) &&
      (0 < *(int *)(param_3 + 0x1b0))))) {
    lVar4 = 8;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_3 + 0x1a0);
      if (*(longlong *)(param_3 + 0x1a0) == 0) {
        lVar2 = param_3 + 0x110;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (param_4 == '\0') {
        puVar3 = (undefined8 *)(lVar2 + lVar4);
      }
      else {
        puVar3 = (undefined8 *)(lVar2 + lVar5 * 0x90 + 0x14);
      }
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14920cd2c(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *puVar3;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x90;
    } while (lVar5 < *(int *)(param_3 + 0x1b0));
  }
  return param_2;
}



// FUNCTION 1444a0948 FUN_1444a0948 body=341 status=ok
// SIG undefined FUN_1444a0948(void)

undefined8
FUN_1444a0948(ulonglong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  undefined8 uVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) ||
     ((*(char *)(param_2 + 0x10) != '\x04' && (*(char *)(param_2 + 0x10) != '\x02')))) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x1c8) != *(int *)(param_2 + 500)) {
      lVar1 = *(longlong *)(param_3 + 0x14);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar8 = (uint)lVar1 & 0xffff;
      lVar9 = param_2 + 0x1f8;
      if (*(longlong *)(param_2 + 0x200) != 0) {
        lVar9 = *(longlong *)(param_2 + 0x200);
      }
      iVar7 = *(int *)(lVar9 + (ulonglong)
                               (*(int *)(param_2 + 0x208) - 1U &
                               (uint)*(byte *)(param_3 + 0x10) +
                               ((int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar8) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 10) * 4);
      if (iVar7 != -1) {
        do {
          lVar9 = *(longlong *)(param_2 + 0x1c0) + (longlong)iVar7 * 0x18;
          if ((*(longlong *)(lVar9 + 4) == lVar1) &&
             (*(byte *)(*(longlong *)(param_2 + 0x1c0) + (longlong)iVar7 * 0x18) ==
              *(byte *)(param_3 + 0x10))) {
            if ((undefined4 *)(lVar9 + 0xc) != (undefined4 *)0x0 && lVar9 != 0) {
              local_28 = *(undefined4 *)(param_4 + 1);
              local_30 = *param_4;
              local_40 = param_6;
              local_48 = param_5;
              uVar4 = FUN_1444a0a9e(param_1,param_2,*(undefined4 *)(lVar9 + 0xc),&local_30);
              param_1 = uVar4 & 0xffffffff;
              uVar6 = (undefined7)(uVar4 >> 8);
              bVar3 = 1;
              goto LAB_1444a0a7d;
            }
            break;
          }
          iVar7 = *(int *)(lVar9 + 0x10);
        } while (iVar7 != -1);
      }
    }
    bVar3 = 0;
    uVar6 = 0;
LAB_1444a0a7d:
    uVar5 = CONCAT71(uVar6,bVar3 & (byte)param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1444a0a9e FUN_1444a0a9e body=662 status=ok
// SIG undefined FUN_1444a0a9e(void)

ulonglong FUN_1444a0a9e(undefined8 param_1,longlong param_2,uint param_3,float *param_4,byte param_5
                       ,char param_6)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined7 uVar8;
  undefined8 unaff_RBP;
  float *pfVar9;
  undefined8 unaff_R14;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = local_48;
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_2 + 0x10);
    uVar2 = (ulonglong)bVar1;
    if ((((bVar1 == 4) || (bVar1 == 2)) && (-1 < (int)param_3)) &&
       ((int)param_3 < *(int *)(param_2 + 0x1b0))) {
      uVar8 = (undefined7)((ulonglong)param_4 >> 8);
      if ((bVar1 != 4) || (*(char *)(param_2 + 0x210) != '\x01')) {
        fVar12 = *param_4;
        fVar10 = param_4[1];
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        *param_4 = fVar12;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        param_4[1] = fVar10;
        fVar11 = param_4[2];
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        param_4[2] = fVar11;
        lVar5 = param_2 + 0x110;
        if (*(longlong *)(param_2 + 0x1a0) != 0) {
          lVar5 = *(longlong *)(param_2 + 0x1a0);
        }
        pfVar9 = (float *)(lVar5 + (ulonglong)param_3 * 0x90 + 8);
        if (param_5 != 0) {
          pfVar9 = (float *)(lVar5 + (ulonglong)param_3 * 0x90 + 0x14);
        }
        if (((1e-08 < ABS(fVar12 - *pfVar9)) || (1e-08 < ABS(fVar10 - pfVar9[1]))) ||
           (1e-08 < ABS(fVar11 - pfVar9[2]))) {
          if (param_6 == '\0') {
            bVar1 = param_5 ^ 3;
            FUN_14449ec9a(param_1,local_a8,param_2,bVar1);
            if (*(char *)(param_2 + 0x10) == '\x04') {
              FUN_1401261c4(param_1,local_a8,param_2,bVar1);
            }
            FUN_1401571e4(param_1,local_a8,param_2,bVar1);
            lVar5 = 0x18;
            if (param_5 != 0) {
              lVar5 = 0x38;
            }
            puVar3 = (undefined8 *)(param_2 + 0x88 + lVar5);
          }
          else {
            bVar1 = param_5 ^ 1;
            FUN_14449ec9a(param_1,local_a8,param_2,bVar1);
            if (*(char *)(param_2 + 0x10) == '\x04') {
              FUN_1401261c4(param_1,local_a8,param_2,bVar1);
            }
            FUN_1401571e4(param_1,local_a8,param_2,bVar1);
            puVar3 = (undefined8 *)((ulonglong)param_5 * 0x20 + param_2 + 0x90);
          }
          puVar6 = (undefined1 *)*puVar3;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_14cc07bfc;
          }
          *puVar6 = 1;
          pfVar9[2] = param_4[2];
          *(undefined8 *)pfVar9 = *(undefined8 *)param_4;
          if (*(char *)(param_2 + 0x10) == '\x04') {
            puVar6 = *(undefined1 **)(param_2 + 0x448 + (ulonglong)param_5 * 0x20);
            puVar4 = &DAT_14cc07bfc;
            if (puVar6 != (undefined1 *)0x0) {
              puVar4 = puVar6;
            }
            *puVar4 = 1;
          }
          bVar7 = 1;
          local_b0 = 1;
          local_b8 = 1;
          FUN_1448340d4(param_1,param_2,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,
                        CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_6) & 0xffffffff);
          FUN_140ad4746(param_1,0xb,param_2);
          bVar1 = 1;
          goto LAB_1444a0c2e;
        }
      }
      bVar7 = 1;
      bVar1 = 0;
      goto LAB_1444a0c2e;
    }
  }
  bVar1 = (byte)uVar2;
  bVar7 = 0;
  uVar8 = 0;
LAB_1444a0c2e:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71(uVar8,bVar7 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a0d36 FUN_1444a0d36 body=160 status=ok
// SIG undefined FUN_1444a0d36(void)

undefined4
FUN_1444a0d36(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  if ((int)param_3[1] == 0) {
    uVar2 = 0;
  }
  else {
    local_30 = *param_3;
    local_38 = param_5;
    local_28 = (int)param_3[1];
    uVar2 = FUN_1444a0dd8(param_1,uVar3,&local_30,param_4);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a0dd8 FUN_1444a0dd8 body=1021 status=ok
// SIG undefined FUN_1444a0dd8(void)

undefined8
FUN_1444a0dd8(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4,char param_5)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  undefined7 uVar8;
  longlong lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined1 *puVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  longlong local_138;
  ulonglong local_130;
  undefined1 local_128 [96];
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 == 0) {
LAB_1444a0e87:
    bVar3 = 0;
  }
  else {
    bVar11 = (byte)param_4;
    lVar5 = 0;
    if (*(char *)(param_2 + 0x10) == '\x02') {
LAB_1444a0e5d:
      iVar1 = *(int *)(param_2 + 0x1b0);
      if (iVar1 == (int)param_3[1]) {
        local_c8 = 0;
        uStack_c0 = 0;
        if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar1);
        }
        if (iVar1 == 0) {
          bVar11 = 0;
        }
        else {
          lVar5 = FUN_14920cdc0(&local_c8);
          if ((int)param_3[1] < 1) {
LAB_1444a109d:
            bVar11 = 0;
          }
          else {
            lVar10 = param_2 + 0x110;
            lVar12 = 0;
            uVar13 = 0;
            local_138 = lVar10;
            do {
              lVar15 = lVar12 * 0x90 + 0x14;
              lVar14 = lVar12 * 0xc + 8;
              while( true ) {
                uVar2 = uStack_c0;
                lVar5 = *param_3;
                fVar18 = *(float *)(lVar5 + -8 + lVar14);
                fVar17 = *(float *)(lVar5 + -4 + lVar14);
                fVar16 = *(float *)(lVar5 + lVar14);
                lVar5 = (longlong)(int)uStack_c0;
                uVar4 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
                if (uStack_c0._4_4_ < uVar4) {
                  local_130 = uVar13;
                  FUN_14920cd2c(&local_c8,uVar2 & 0xffffffff);
                  lVar10 = local_138;
                  uVar13 = local_130;
                }
                if (fVar18 <= 0.0) {
                  fVar18 = 0.0;
                }
                if (fVar17 <= 0.0) {
                  fVar17 = 0.0;
                }
                if (fVar16 <= 0.0) {
                  fVar16 = 0.0;
                }
                *(float *)(local_c8 + lVar5 * 0xc) = fVar18;
                *(float *)(local_c8 + 4 + lVar5 * 0xc) = fVar17;
                *(float *)(local_c8 + 8 + lVar5 * 0xc) = fVar16;
                lVar5 = *(longlong *)(param_2 + 0x1a0);
                if (*(longlong *)(param_2 + 0x1a0) == 0) {
                  lVar5 = lVar10;
                }
                pfVar6 = (float *)(lVar5 + lVar15);
                if (bVar11 == 0) {
                  pfVar6 = (float *)(lVar5 + lVar15 + -0xc);
                }
                if (((1e-08 < ABS(fVar18 - *pfVar6)) || (1e-08 < ABS(fVar17 - pfVar6[1]))) ||
                   (1e-08 < ABS(fVar16 - pfVar6[2]))) break;
                lVar12 = lVar12 + 1;
                lVar5 = (longlong)(int)param_3[1];
                lVar15 = lVar15 + 0x90;
                lVar14 = lVar14 + 0xc;
                if (lVar5 <= lVar12) {
                  if ((uVar13 & 1) == 0) goto LAB_1444a109d;
                  goto LAB_1444a1063;
                }
              }
              lVar12 = lVar12 + 1;
              uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
            } while (lVar12 < (int)param_3[1]);
LAB_1444a1063:
            uVar4 = param_4 & 0xff;
            if (param_5 == '\0') {
              FUN_1401571e4(param_1,local_128,param_2,uVar4 ^ 3);
              lVar5 = 0x18;
              if (bVar11 != 0) {
                lVar5 = 0x38;
              }
              puVar7 = (undefined8 *)(param_2 + 0x88 + lVar5);
            }
            else {
              FUN_1401571e4(param_1,local_128,param_2,bVar11 ^ 1);
              puVar7 = (undefined8 *)((ulonglong)(uVar4 << 5) + param_2 + 0x90);
            }
            puVar9 = (undefined1 *)*puVar7;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = &DAT_14cc07bfc;
            }
            *puVar9 = 1;
            if (0 < (int)param_3[1]) {
              lVar5 = 0x14;
              lVar10 = 0;
              lVar12 = 0;
              do {
                puVar7 = (undefined8 *)(local_c8 + lVar10);
                lVar14 = *(longlong *)(param_2 + 0x1a0);
                if (*(longlong *)(param_2 + 0x1a0) == 0) {
                  lVar14 = local_138;
                }
                if (bVar11 == 0) {
                  *(undefined4 *)(lVar14 + -4 + lVar5) = *(undefined4 *)(puVar7 + 1);
                  *(undefined8 *)(lVar14 + -0xc + lVar5) = *puVar7;
                }
                else {
                  *(undefined4 *)(lVar14 + 8 + lVar5) = *(undefined4 *)(puVar7 + 1);
                  *(undefined8 *)(lVar14 + lVar5) = *puVar7;
                }
                lVar12 = lVar12 + 1;
                lVar5 = lVar5 + 0x90;
                lVar10 = lVar10 + 0xc;
              } while (lVar12 < (int)param_3[1]);
            }
            if (*(char *)(param_2 + 0x10) == '\x04') {
              puVar9 = *(undefined1 **)(param_2 + 0x448 + (ulonglong)(uVar4 << 5));
              if (puVar9 == (undefined1 *)0x0) {
                puVar9 = &DAT_14cc07bfc;
              }
              *puVar9 = 1;
              puVar9 = *(undefined1 **)(param_2 + 0x4c8 + (ulonglong)(uVar4 << 5));
              if (puVar9 == (undefined1 *)0x0) {
                puVar9 = &DAT_14cc07bfc;
              }
              *puVar9 = 1;
            }
            bVar11 = 1;
            local_140 = 1;
            local_148 = 1;
            FUN_1448340d4(param_1,param_2,param_4,
                          CONCAT71((int7)(int3)(uVar2 >> 8),param_5) & 0xffffffff);
            lVar5 = FUN_140ad4746(param_1,0xb,param_2);
          }
          if (local_c8 != 0) {
            lVar5 = FUN_1400020a8();
          }
        }
        uVar8 = (undefined7)((ulonglong)lVar5 >> 8);
        bVar3 = 1;
        goto LAB_1444a0e8b;
      }
      goto LAB_1444a0e87;
    }
    if (*(char *)(param_2 + 0x10) != '\x04') goto LAB_1444a0e87;
    if (*(char *)(param_2 + 0x210) != '\x01') goto LAB_1444a0e5d;
    bVar3 = 1;
  }
  uVar8 = 0;
  bVar11 = 0;
LAB_1444a0e8b:
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar8,bVar3 & bVar11);
}



// FUNCTION 1444a11d6 FUN_1444a11d6 body=279 status=ok
// SIG undefined FUN_1444a11d6(void)

undefined8 * FUN_1444a11d6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char *param_4)

{
  undefined1 auStack_78 [36];
  char local_54 [4];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491db37e(&local_3c);
  if ((*(longlong *)(param_4 + 4) == CONCAT44(uStack_34,uStack_38)) && (*param_4 == (char)local_3c))
  {
    FUN_1491dcf88(param_1,param_2);
  }
  else {
    FUN_1491da766(&local_3c);
    if ((*(longlong *)(param_4 + 4) != CONCAT44(uStack_34,uStack_38)) ||
       (*param_4 != (char)local_3c)) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_4 + 8);
      *param_2 = *(undefined8 *)param_4;
      if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_48 = *param_3;
    local_40 = *(undefined4 *)(param_3 + 1);
    FUN_1491db620(param_1,&local_3c);
    FUN_1491db37e(local_54);
    if ((CONCAT44(uStack_34,uStack_38) == local_50) && ((char)local_3c == local_54[0])) {
      *(undefined1 *)param_2 = 0;
      *(undefined8 *)((longlong)param_2 + 4) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 1) = uStack_34;
      *param_2 = CONCAT44(uStack_38,local_3c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1444a12f0 FUN_1444a12f0 body=235 status=ok
// SIG undefined FUN_1444a12f0(void)

undefined4
FUN_1444a12f0(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  void *local_50;
  int local_48;
  int local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1444a0862(param_1,&local_50,param_2);
  memset(local_50,0,(longlong)local_44 * 0xc);
  if ((int)param_3 < local_48 && -1 < (int)param_3) {
    *(undefined1 **)((longlong)local_50 + (ulonglong)param_3 * 0xc) = &DAT_3f8000003f800000;
    *(undefined4 *)((longlong)local_50 + (ulonglong)param_3 * 0xc + 8) = 0x3f800000;
  }
  if (local_48 == 0) {
    uVar1 = 0;
  }
  else {
    local_40 = local_50;
    local_38 = local_48;
    local_58 = param_5;
    uVar1 = FUN_1444a0dd8(param_1,param_2,&local_40,param_4);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a13dc FUN_1444a13dc body=95 status=ok
// SIG undefined FUN_1444a13dc(void)

undefined8
FUN_1444a13dc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = &LAB_1444ab1fa;
  local_21 = param_4;
  FUN_1491dd52c(param_1,param_2,&local_20,param_3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a143c FUN_1444a143c body=664 status=ok
// SIG undefined FUN_1444a143c(void)

void FUN_1444a143c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  code *local_148 [2];
  undefined8 *local_138;
  undefined1 local_108 [64];
  undefined1 *local_c8;
  int local_c0;
  uint local_bc;
  code *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong local_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = param_1[1];
  if (*(char *)*param_1 == '\0') {
    if (0 < *(int *)(lVar1 + 0xc0)) {
      lVar12 = 0;
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xb8) + lVar12 * 8);
        cVar7 = (**(code **)param_1[2])(((undefined8 *)param_1[2])[1],uVar2);
        if (cVar7 != '\0') {
          (*(code *)*param_2)(param_2[1],uVar2);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(lVar1 + 0xc0));
    }
    goto LAB_1444a14c3;
  }
  local_c0 = *(int *)(lVar1 + 0xc0);
  local_c8 = (undefined1 *)0x0;
  local_bc = 0x200;
  uVar11 = local_c0 + 0x1f;
  if (0x1f < uVar11) {
    if (uVar11 < 0x220) {
      if (0x11f < uVar11) {
        puVar10 = local_108;
        goto LAB_1444a1582;
      }
      uVar11 = uVar11 >> 3 & 0x3c;
      puVar10 = local_108;
    }
    else {
      FUN_14682d43c(local_108,0,uVar11 >> 5,4);
      local_bc = uVar11 & 0xffffffe0;
      puVar10 = local_c8;
      if (local_c8 == (undefined1 *)0x0) {
        puVar10 = local_108;
      }
LAB_1444a1582:
      uVar11 = (uVar11 >> 5) << 2;
    }
    memset(puVar10,0,(ulonglong)uVar11);
    iVar8 = local_c0 + 0x1f;
    if (-1 < local_c0) {
      iVar8 = local_c0;
    }
    if (local_c0 % 0x20 != 0) {
      puVar10 = local_c8;
      if (local_c8 == (undefined1 *)0x0) {
        puVar10 = local_108;
      }
      bVar9 = -(char)(local_c0 % 0x20);
      *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
           (uint)(*(int *)(puVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar9 & 0x1f)) >>
           (bVar9 & 0x1f);
    }
  }
  local_a8 = 0;
  local_98 = &PTR_LAB_14bb8a260;
  local_b8 = FUN_1492032ca;
  local_90 = lVar1;
  FUN_1491db3fa(lVar1,&local_158);
  lVar12 = local_158;
  if ((longlong)local_150 != 0) {
    lVar13 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar12 + lVar13);
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = *(undefined8 *)param_1[2];
      uVar6 = ((undefined8 *)param_1[2])[1];
      local_148[0] = (code *)0x0;
      local_138 = (undefined8 *)0x0;
      local_138 = (undefined8 *)FUN_14001cc68(0x30,8);
      *local_138 = &PTR_FUN_14bb8a240;
      local_138[1] = local_108;
      local_138[2] = uVar3;
      local_138[3] = uVar4;
      local_138[4] = uVar5;
      local_138[5] = uVar6;
      if (local_138 + 1 != (longlong *)0x0) {
        local_148[0] = FUN_1444a84d2;
      }
      FUN_1444a16d6(lVar1,uVar2,1,local_148);
      lVar13 = lVar13 + 8;
    } while ((longlong)local_150 * 8 != lVar13);
  }
  if (local_158 != 0) {
    FUN_1400020a8(local_158);
  }
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1444a14c3:
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444a16d6 FUN_1444a16d6 body=526 status=ok
// SIG undefined FUN_1444a16d6(void)

void FUN_1444a16d6(longlong param_1,longlong param_2,char param_3,longlong *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [47];
  char local_e9;
  longlong local_e8 [2];
  undefined8 local_d8 [7];
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e9 = '\x01';
  pcVar2 = (code *)*param_4;
  plVar7 = param_4 + 4;
  plVar5 = (longlong *)param_4[2];
  if ((longlong *)param_4[2] == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  local_a0 = param_2;
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar3,&local_a0,&local_e9);
  if (local_e9 == '\x01') {
    if (param_3 == '\0') {
      FUN_14449d5e6(param_1,&local_a0,param_2,0);
      plVar5 = &local_a0;
      if (local_98 != (longlong *)0x0) {
        plVar5 = local_98;
      }
      if ((longlong)local_90 != 0) {
        lVar4 = 0;
        do {
          uVar3 = *(undefined8 *)((longlong)plVar5 + lVar4);
          local_e8[0] = *param_4;
          local_d8[0] = 0;
          if (local_e8[0] != 0) {
            plVar6 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar6 = plVar7;
            }
            (**(code **)*plVar6)(plVar6,local_d8);
          }
          FUN_1444a16d6(param_1,uVar3,0,local_e8);
          lVar4 = lVar4 + 8;
        } while ((longlong)local_90 * 8 != lVar4);
      }
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (param_2 != 0) {
      if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
        FUN_1415169c8(param_1);
      }
      lVar4 = (longlong)*(int *)(param_2 + 0x30);
      if (lVar4 != -1) {
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x288) + 4 + lVar4 * 8);
        if (lVar8 != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x288) + lVar4 * 8);
          lVar4 = *(longlong *)(param_1 + 0x298);
          lVar9 = 0;
          do {
            uVar3 = *(undefined8 *)((longlong)iVar1 * 8 + lVar4 + lVar9);
            local_88[0] = *param_4;
            local_78[0] = 0;
            if (local_88[0] != 0) {
              plVar5 = (longlong *)param_4[2];
              if ((longlong *)param_4[2] == (longlong *)0x0) {
                plVar5 = plVar7;
              }
              (**(code **)*plVar5)(plVar5,local_78);
            }
            FUN_1444a16d6(param_1,uVar3,1,local_88);
            lVar9 = lVar9 + 8;
          } while (lVar8 * 8 != lVar9);
        }
      }
    }
  }
  if (*param_4 != 0) {
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444a18e6 FUN_1444a18e6 body=1054 status=ok
// SIG undefined FUN_1444a18e6(void)

longlong *
FUN_1444a18e6(longlong param_1,longlong *param_2,byte param_3,byte param_4,longlong *param_5,
             char param_6)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  uint local_188;
  uint local_184;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  byte local_158 [4];
  undefined8 local_154;
  undefined2 local_14c;
  undefined4 local_148;
  undefined8 local_138 [12];
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60 [12];
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_2 + 2) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  iVar4 = *(int *)(param_1 + 0xc0);
  if (0 < iVar4) {
    local_184 = (uint)(param_3 ^ 1);
    local_188 = param_3 ^ 3;
    local_180 = 8;
    if (param_3 != 0) {
      local_180 = 0x20;
    }
    lVar14 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar14 * 8);
      if ((*(byte *)(lVar3 + 0x10) & param_4) != 0) {
        if ((longlong)(int)param_5[1] < 1) {
LAB_1444a19f0:
          pbVar1 = (byte *)(lVar3 + 0x10);
          local_158[0] = 0;
          local_154 = 0;
          local_14c = 0xffff;
          local_148 = 0xffffffff;
          puVar10 = &DAT_14c846480;
          puVar11 = local_138;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar10 = &DAT_14c846480;
          puVar11 = local_d8;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          local_68 = DAT_14c8464f0;
          local_78 = (undefined4)DAT_14c8464e0;
          uStack_74 = DAT_14c8464e0._4_4_;
          uStack_70 = (undefined4)DAT_14c8464e8;
          uStack_6c = DAT_14c8464e8._4_4_;
          FUN_1491da766(local_60);
          local_54 = 0;
          FUN_144828dba(local_158,pbVar1,param_1);
          if (lVar3 != 0) {
            uVar6 = (ulonglong)*pbVar1;
            if (uVar6 < 0x21) {
              if (uVar6 != 8) {
                if ((0x100010016U >> (uVar6 & 0x3f) & 1) == 0) goto LAB_1444a1bc9;
                goto LAB_1444a1be4;
              }
              local_54 = 0;
              if (*(char *)(lVar3 + 0x48) == '\x01') {
                puVar7 = *(undefined4 **)(lVar3 + 0x50);
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = &DAT_14bb83714;
                }
                local_54 = *puVar7;
              }
            }
            else {
LAB_1444a1bc9:
              if (*pbVar1 != 0x80) goto LAB_1444a1bd0;
LAB_1444a1be4:
              FUN_1401571e4(param_1,local_d8,lVar3,local_184);
              FUN_1401571e4(param_1,local_138,lVar3,local_188);
              FUN_1491dba48(param_1,local_60,pbVar1,1);
              if (*(char *)(lVar3 + 0x10) == '\x04') {
                if (*(char *)(param_1 + 0x52c) == '\x01') {
                  lVar13 = local_180 + lVar3;
                  if (*(char *)(lVar3 + 0x3c8) == *(char *)(lVar3 + 0x3c0)) {
                    local_168 = *(undefined8 *)(lVar13 + 0x3d8);
                    local_178 = *(undefined8 *)(lVar13 + 0x3c8);
                    uStack_170 = *(undefined8 *)(lVar13 + 0x3d0);
                  }
                  else {
                    local_198 = 0;
                    FUN_14690c9ab(&local_178);
                  }
                  local_68 = local_168;
                  local_78 = (undefined4)local_178;
                  uStack_74 = local_178._4_4_;
                  uStack_70 = (undefined4)uStack_170;
                  uStack_6c = uStack_170._4_4_;
                }
                if ((param_6 == '\0') && (*(char *)(lVar3 + 0x358) != '\0')) goto LAB_1444a1bd0;
              }
            }
            iVar4 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
              FUN_14920d438(param_2,iVar4);
            }
            memcpy((void *)((longlong)iVar4 * 0x110 + *param_2),local_158,0x110);
            uVar5 = (uint)((ulonglong)local_154 >> 0x10);
            uVar8 = (uint)local_154 & 0xffff;
            uVar5 = (uint)local_158[0] +
                    (((uint)local_154 << 0x10 | uVar8) + (int)((ulonglong)local_154 >> 0x20) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 10;
            uVar9 = uVar5 >> 0xd ^ *(int *)((longlong)param_2 + 0x14) - uVar5;
            uVar8 = uVar9 << 8 ^ (-0x61c88647 - uVar5) - uVar9;
            uVar12 = uVar8 >> 0xd ^ (uVar5 - uVar9) - uVar8;
            uVar5 = uVar12 >> 0xc ^ (uVar9 - uVar8) - uVar12;
            uVar9 = uVar5 << 0x10 ^ (uVar8 - uVar12) - uVar5;
            uVar8 = uVar9 >> 5 ^ (uVar12 - uVar5) - uVar9;
            uVar12 = uVar8 >> 3 ^ (uVar5 - uVar9) - uVar8;
            uVar5 = uVar12 << 10 ^ (uVar9 - uVar8) - uVar12;
            *(uint *)((longlong)param_2 + 0x14) = uVar5 >> 0xf ^ uVar8 - (uVar12 + uVar5);
          }
LAB_1444a1bd0:
          iVar4 = *(int *)(param_1 + 0xc0);
        }
        else {
          lVar13 = 0;
          do {
            if ((*(longlong *)(*param_5 + 4 + lVar13) == *(longlong *)(lVar3 + 0x14)) &&
               (*(byte *)(*param_5 + lVar13) == *(byte *)(lVar3 + 0x10))) goto LAB_1444a19f0;
            lVar13 = lVar13 + 0xc;
          } while ((longlong)(int)param_5[1] * 0xc != lVar13);
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444a1d06 FUN_1444a1d06 body=909 status=ok
// SIG undefined FUN_1444a1d06(void)

void FUN_1444a1d06(longlong param_1,longlong *param_2,uint param_3,byte param_4,longlong *param_5,
                  float param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined1 *local_1b8;
  longlong local_1b0;
  uint local_1a4;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [96];
  undefined1 local_f8 [96];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (1.0 <= param_6) {
    param_6 = 1.0;
  }
  if (param_6 <= 0.0) {
    param_6 = 0.0;
  }
  if ((1e-08 <= param_6) && ((longlong)(int)param_2[1] != 0)) {
    puVar7 = (undefined4 *)*param_2;
    puVar4 = puVar7 + (longlong)(int)param_2[1] * 0x44;
    lVar8 = 0x20;
    if (param_3 < 2) {
      lVar8 = 0x80;
    }
    do {
      local_98 = *puVar7;
      uStack_94 = (undefined4)*(longlong *)(puVar7 + 1);
      uStack_90 = puVar7[2];
      uStack_8c = puVar7[3];
      local_88 = puVar7[4];
      uStack_84 = puVar7[5];
      uStack_80 = puVar7[6];
      uStack_7c = puVar7[7];
      if (((byte)local_98 & param_4) != 0) {
        if ((longlong)(int)param_5[1] < 1) {
LAB_1444a1e1e:
          cVar2 = FUN_1491ddc02(&local_98);
          if ((cVar2 != '\0') &&
             ((((uStack_8c & 0xffff) != 0xffff &&
               (*(uint *)(param_1 + 0xc0) != (uStack_8c & 0xffff) &&
                (int)(uStack_8c & 0xffff) <= (int)*(uint *)(param_1 + 0xc0))) &&
              (lVar6 = *(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uStack_8c & 0xffff) * 8),
              lVar6 != 0)))) {
            bVar1 = *(byte *)(lVar6 + 0x10);
            uVar3 = 0;
            if (bVar1 < 0x10) {
              switch(bVar1) {
              case 2:
              case 4:
                if (((uint)*(ushort *)((longlong)puVar7 + 0xfe) < DAT_14c87eb08 + 1U) &&
                   (*(longlong *)(puVar7 + 0x3f) != 0)) {
                  uVar3 = (uint)(*(char *)(puVar7 + 0x3e) != '\0');
                }
                else {
                  uVar3 = 0;
                }
              case 1:
switchD_1444a1e82_caseD_1:
                puVar5 = (undefined1 *)((longlong)puVar7 + lVar8);
                if (1.0 <= param_6) {
                  if ((char)uVar3 != '\0') {
                    local_180 = puVar7[0x40];
                    local_188 = *(undefined8 *)(puVar7 + 0x3e);
                    local_198 = *(undefined8 *)(lVar6 + 0x10);
                    local_190 = *(undefined4 *)(lVar6 + 0x18);
                    local_1d8 = 1;
                    local_1b8 = puVar5;
                    local_1b0 = lVar6;
                    FUN_149190650(param_1,&local_198,&local_188,0);
                    lVar6 = local_1b0;
                    puVar5 = local_1b8;
                  }
                }
                else {
                  local_1b8 = puVar5;
                  local_1b0 = lVar6;
                  local_1a4 = uVar3;
                  local_1a0 = (undefined8 *)(lVar6 + 0x10);
                  FUN_1401571e4(param_1,local_f8,lVar6,param_3);
                  FUN_14915b8da(local_158,local_f8,local_1b8,param_6);
                  if ((char)local_1a4 != '\0') {
                    local_160 = puVar7[0x40];
                    local_168 = *(undefined8 *)(puVar7 + 0x3e);
                    local_178 = *local_1a0;
                    local_170 = *(undefined4 *)(local_1a0 + 1);
                    local_1d8 = 1;
                    FUN_149190650(param_1,&local_178,&local_168,0);
                  }
                  lVar6 = local_1b0;
                  puVar5 = local_158;
                }
                local_1c0 = 0;
                local_1c8 = 0;
                local_1d0 = 0;
                local_1d8 = 1;
                FUN_140122d4e(param_1,lVar6,puVar5);
                break;
              case 8:
                local_1d8 = 0;
                FUN_14143b662(param_1,lVar6,puVar7[0x41]);
              }
            }
            else if (((bVar1 == 0x10) || (bVar1 == 0x20)) || (bVar1 == 0x80))
            goto switchD_1444a1e82_caseD_1;
          }
        }
        else {
          lVar6 = 0;
          do {
            if ((*(longlong *)(*param_5 + 4 + lVar6) == *(longlong *)(puVar7 + 1)) &&
               (*(byte *)(*param_5 + lVar6) == (byte)local_98)) goto LAB_1444a1e1e;
            lVar6 = lVar6 + 0xc;
          } while ((longlong)(int)param_5[1] * 0xc != lVar6);
        }
      }
      puVar7 = puVar7 + 0x44;
    } while (puVar7 != puVar4);
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a2094 FUN_1444a2094 body=1259 status=ok
// SIG undefined FUN_1444a2094(void)

void FUN_1444a2094(longlong param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [47];
  undefined1 local_a9;
  longlong local_a8 [2];
  uint local_98;
  undefined4 uStack_94;
  int iStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint uStack_64;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar14 = param_1 + 0x580;
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    do {
      cVar9 = FUN_14920d4cc(lVar14);
    } while (cVar9 != '\0');
  }
  else if (**(longlong **)(param_1 + 0x588) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x530));
    lVar15 = *(longlong *)(param_1 + 0x558);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x530));
    if (lVar15 == 0) {
      local_a9 = *(undefined1 *)(param_1 + 0x330);
      *(undefined1 *)(param_1 + 0x330) = 1;
      local_58 = 0;
      uStack_50 = 0;
      uStack_64 = uStack_64 & 0xffffff00;
      uStack_60 = 0;
      cVar9 = FUN_1491dde84(lVar14);
      if (cVar9 != '\0') {
        do {
          uVar16 = uStack_50;
          lVar15 = (longlong)(int)uStack_50;
          uVar10 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar10);
          if (uStack_50._4_4_ < uVar10) {
            FUN_14920d506(&local_58,uVar16 & 0xffffffff);
          }
          puVar1 = (undefined4 *)(local_58 + lVar15 * 0x10);
          *puVar1 = local_68;
          puVar1[1] = uStack_64;
          puVar1[2] = (undefined4)uStack_60;
          puVar1[3] = uStack_60._4_4_;
          cVar9 = FUN_1491dde84(lVar14,&local_68);
        } while (cVar9 != '\0');
      }
      do {
        cVar9 = FUN_14920d4cc(lVar14);
      } while (cVar9 != '\0');
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uVar16 = uStack_50 & 0xffffffff;
      do {
        if ((int)uVar16 < 1) break;
        uVar16 = uVar16 - 1;
        pcVar2 = (char *)(local_58 + uVar16 * 0x10);
        cVar9 = *(char *)(local_58 + uVar16 * 0x10);
        switch(cVar9) {
        case '\x01':
        case '\x02':
        case '\x06':
          lVar14 = FUN_14449bdee(param_1,1);
          if (lVar14 != 0) {
            if (DAT_14cc079f8 == 0) {
              uVar11 = FUN_1408c25db();
              DAT_14cc079f8 = FUN_14171c317(FUN_1466cee61,uVar11,L"ERigHierarchyNotification");
            }
            FUN_1401cfad2(DAT_14cc079f8,&local_98,*pcVar2);
            FUN_14919e8cc(pcVar2 + 4,local_a8);
            puVar12 = &DAT_149dfb77a;
            if (iStack_90 != 0) {
              puVar12 = (undefined2 *)CONCAT44(uStack_94,local_98);
            }
            FUN_1491ddec4(lVar14,puVar12);
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_94,local_98) != 0) {
              FUN_1400020a8();
            }
          }
        case '\x14':
switchD_1444a2236_caseD_14:
          FUN_14920d58c(&local_88,pcVar2);
          goto LAB_1444a227a;
        case '\x03':
        case '\x04':
          if ((longlong)(int)uStack_80 != 0) {
            lVar14 = (longlong)(int)uStack_80 << 4;
            lVar15 = 0;
            do {
              if (((*(char *)(local_88 + lVar15) == cVar9) &&
                  (*(longlong *)(local_88 + 8 + lVar15) == *(longlong *)(pcVar2 + 8))) &&
                 (*(char *)(local_88 + 4 + lVar15) == pcVar2[4])) goto switchD_1444a2236_caseD_14;
              lVar15 = lVar15 + 0x10;
            } while (lVar14 != lVar15);
            lVar15 = 0;
            do {
              if (((*(char *)(local_88 + lVar15) == (char)((cVar9 == '\x03') + '\x03')) &&
                  (*(longlong *)(local_88 + 8 + lVar15) == *(longlong *)(pcVar2 + 8))) &&
                 (*(char *)(local_88 + 4 + lVar15) == pcVar2[4])) goto switchD_1444a2236_caseD_14;
              lVar15 = lVar15 + 0x10;
            } while (lVar14 != lVar15);
          }
          break;
        case '\x05':
        case '\a':
        case '\b':
        case '\t':
        case '\n':
        case '\v':
          if ((longlong)(int)uStack_80 != 0) {
            lVar14 = 0;
            do {
              if (((*(char *)(local_88 + lVar14) == cVar9) &&
                  (*(longlong *)(local_88 + 8 + lVar14) == *(longlong *)(pcVar2 + 8))) &&
                 (*(char *)(local_88 + 4 + lVar14) == pcVar2[4])) goto switchD_1444a2236_caseD_14;
              lVar14 = lVar14 + 0x10;
            } while ((longlong)(int)uStack_80 * 0x10 != lVar14);
          }
        }
        FUN_14920d58c(&local_88,pcVar2);
        uVar8 = uStack_70;
        lVar14 = (longlong)(int)uStack_70;
        uVar10 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
        if (uStack_70._4_4_ < uVar10) {
          FUN_14920d506(&local_78,uVar8 & 0xffffffff);
        }
        uVar4 = *(undefined4 *)(pcVar2 + 4);
        uVar5 = *(undefined4 *)(pcVar2 + 8);
        uVar6 = *(undefined4 *)(pcVar2 + 0xc);
        puVar1 = (undefined4 *)(local_78 + lVar14 * 0x10);
        *puVar1 = *(undefined4 *)pcVar2;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
LAB_1444a227a:
      } while (*pcVar2 != '\x06');
      if ((int)uStack_70 != 0) {
        lVar14 = param_1 + 0x28;
        FUN_140ad4892(lVar14,0xc,param_1,0);
        lVar15 = param_1 + 0x40;
        if (0 < *(int *)(param_1 + 0x48)) {
          local_98 = local_98 & 0xffffff00;
          uStack_94 = 0;
          iStack_90 = 0;
          FUN_14917ff09(lVar15,0xc,param_1);
        }
        lVar13 = (longlong)(int)uStack_70;
        if (0 < lVar13) {
          uVar16 = lVar13 + 1;
          lVar13 = lVar13 << 4;
          do {
            lVar7 = local_78;
            lVar13 = lVar13 + -0x10;
            uVar10 = FUN_140813180(param_1,local_78 + lVar13 + 4);
            if (((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_1 + 0xc0))) &&
               (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar10 * 8),
               lVar3 != 0)) {
              FUN_140ad4892(lVar14,*(undefined1 *)(lVar7 + lVar13),param_1,lVar3);
              if (0 < *(int *)(param_1 + 0x48)) {
                iStack_90 = *(int *)(lVar3 + 0x18);
                local_98 = (uint)*(undefined8 *)(lVar3 + 0x10);
                uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
                FUN_14917ff09(lVar15,*(undefined1 *)(lVar7 + lVar13),param_1,&local_98);
              }
            }
            uVar16 = uVar16 - 1;
          } while (1 < uVar16);
        }
        FUN_140ad4892(lVar14,0xd,param_1,0);
        if (0 < *(int *)(param_1 + 0x48)) {
          local_98 = local_98 & 0xffffff00;
          uStack_94 = 0;
          iStack_90 = 0;
          FUN_14917ff09(lVar15,0xd,param_1);
        }
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x330) = local_a9;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a2580 FUN_1444a2580 body=5574 status=ok
// SIG undefined FUN_1444a2580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_1444a2580(undefined8 param_1,ulonglong *param_2,undefined8 param_3,longlong param_4,uint param_5
             ,undefined8 *param_6)

{
  float fVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar16;
  double dVar23;
  undefined1 auVar20 [16];
  double dVar17;
  double dVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined8 uVar45;
  undefined1 auVar44 [16];
  ulonglong uVar46;
  double dVar47;
  double dVar48;
  ulonglong uVar50;
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  double dVar53;
  ulonglong uVar55;
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  undefined1 local_3b8;
  undefined8 *local_3b0;
  undefined1 local_3a8;
  float local_39c;
  undefined8 local_398;
  undefined8 local_390;
  double local_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  ulonglong *local_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  undefined8 uStack_320;
  double local_318;
  undefined8 uStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  ulonglong uStack_2f0;
  double local_2e8;
  ulonglong uStack_2e0;
  ulonglong local_2d8;
  ulonglong uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  ulonglong local_268;
  ulonglong uStack_260;
  double local_258;
  undefined1 local_248 [96];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  double local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  ulonglong uStack_150;
  undefined1 local_148 [16];
  double local_138;
  ulonglong uStack_130;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  float local_10c;
  undefined8 local_108;
  int local_100;
  undefined8 local_fc;
  int local_f4;
  ulonglong local_f0;
  
  uVar55 = uRam000000014c8464d8;
  dVar51 = DAT_14c8464d0;
  uVar50 = DAT_14c8464c8;
  uVar46 = DAT_14c8464c0;
  uVar7 = DAT_14c8464b8;
  dVar47 = DAT_14c8464b0;
  uVar43 = DAT_14c8464a8._4_4_;
  uVar42 = (undefined4)DAT_14c8464a8;
  uVar41 = DAT_14c8464a0._4_4_;
  uVar40 = (undefined4)DAT_14c8464a0;
  dVar48 = DAT_14c846498;
  dVar8 = DAT_14c846490;
  dVar53 = DAT_14c846488;
  dVar33 = DAT_14c846480;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_fc = 0xffffffffffffffff;
  local_f4 = -1;
  local_108 = 0xffffffffffffffff;
  local_100 = -1;
  local_3c8 = &local_114;
  local_114 = 0;
  local_10c = 0.0;
  local_3c0 = &local_120;
  local_120 = 0;
  local_118 = 0.0;
  local_398 = param_1;
  local_360 = param_2;
  FUN_1491e0db2(param_4,param_5);
  fVar58 = local_10c;
  iVar3 = (int)local_114;
  iVar4 = local_114._4_4_;
  if (local_10c == 1.4013e-45 && (local_114._4_4_ == 1 && (int)local_114 == 1)) {
    if (((int)local_fc == local_fc._4_4_) && ((int)local_fc == local_f4)) {
      local_3b0 = &DAT_14c846480;
      local_3c0 = param_6;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
      local_3a8 = 0;
      local_3b8 = 1;
      FUN_1444a6616(local_398,local_188,param_4);
      FUN_1449437a2(param_3,local_360,local_188);
      goto LAB_1444a3ab9;
    }
  }
  if (local_10c == 0.0 || (local_114._4_4_ == 0 || (int)local_114 == 0)) {
    FUN_1449437a2(param_3,local_188,param_6);
    uVar40 = (undefined4)local_168;
    uVar41 = local_168._4_4_;
    uVar42 = (undefined4)uStack_160;
    uVar43 = uStack_160._4_4_;
    dVar33 = (double)local_188._0_8_;
    dVar53 = (double)local_188._8_8_;
    uVar46 = local_148._0_8_;
    uVar50 = local_148._8_8_;
    dVar47 = local_158;
    uVar7 = uStack_150;
    dVar51 = local_138;
    uVar55 = uStack_130;
    dVar8 = (double)local_178._0_8_;
    dVar48 = (double)local_178._8_8_;
    if ((iVar3 != 0 || iVar4 != 0) || fVar58 != 0.0) goto LAB_1444a27ad;
  }
  else {
LAB_1444a27ad:
    uVar2 = local_108;
    uVar34 = local_398;
    local_39c = fVar58;
    if (iVar3 == 2) {
      lVar5 = *(longlong *)(param_4 + 0x90);
      if (*(longlong *)(param_4 + 0x90) == 0) {
        lVar5 = param_4;
      }
      local_390 = CONCAT44(local_390._4_4_,iVar4);
      lVar6 = 8;
      if ((param_5 & 0xfffffffd) == 0) {
        lVar6 = 0x14;
      }
      fVar58 = *(float *)(lVar6 + (longlong)(int)local_108 * 0x90 + lVar5);
      fVar1 = *(float *)(lVar6 + (longlong)(int)local_fc * 0x90 + lVar5);
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      if (fVar58 <= 0.0) {
        fVar58 = 0.0;
      }
      local_3a8 = 0;
      local_3b0 = &DAT_14c846480;
      local_3b8 = 1;
      local_3c0 = param_6;
      local_3c8._0_4_ = param_5;
      FUN_1444a6616(local_398,local_188,param_4);
      local_3a8 = 0;
      local_3b0 = &DAT_14c846480;
      local_3b8 = 1;
      local_3c0 = param_6;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
      FUN_1444a6616(uVar34,&local_1e8,param_4,uVar2 & 0xffffffff);
      FUN_14915b8da(local_248,local_188,&local_1e8,
                    -(uint)(1e-08 < fVar1 + fVar58) & (uint)(fVar58 / (fVar1 + fVar58)));
      FUN_1449437a2(param_3,&local_2a8,local_248);
      uVar7 = 0;
      uVar40 = local_288;
      uVar41 = uStack_284;
      uVar42 = uStack_280;
      uVar43 = uStack_27c;
      iVar4 = (int)local_390;
      dVar47 = local_278;
    }
    else if (iVar3 == 1) {
      local_3b0 = &DAT_14c846480;
      local_3c0 = param_6;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
      local_3a8 = 0;
      local_3b8 = 1;
      FUN_1444a6616(local_398,local_188,param_4,local_fc & 0xffffffff);
      FUN_1449437a2(param_3,&local_1e8,local_188);
      uVar7 = 0;
      uVar40 = local_1c8;
      uVar41 = uStack_1c4;
      uVar42 = uStack_1c0;
      uVar43 = uStack_1bc;
      dVar47 = local_1b8;
    }
    else if (2 < iVar3) {
      uVar40 = 0;
      uVar41 = 0;
      uVar34 = 0;
      iVar3 = *(int *)(param_4 + 0xa0);
      local_390 = CONCAT44(local_390._4_4_,iVar4);
      dVar24 = DAT_14c8464f0;
      dVar16 = DAT_14c8464e0;
      dVar47 = DAT_14c8464e0;
      dVar17 = DAT_14c8464e8;
      dVar23 = DAT_14c8464e8;
      dVar56 = DAT_14c8464f0;
      local_308 = dVar8;
      dStack_300 = dVar48;
      local_2f8 = dVar51;
      uStack_2f0 = uVar55;
      local_2d8 = uVar46;
      uStack_2d0 = uVar50;
      local_2c8 = dVar33;
      dStack_2c0 = dVar53;
      if (iVar3 < 1) {
        dVar8 = 0.0;
        dVar48 = 0.0;
        dVar33 = 0.0;
        dVar53 = 0.0;
      }
      else {
        lVar5 = 8;
        if ((param_5 & 0xfffffffd) == 0) {
          lVar5 = 0x14;
        }
        local_348._8_8_ = DAT_14c8463d8;
        local_348._0_8_ = DAT_14c8463d0;
        dVar33 = 0.0;
        dVar53 = 0.0;
        uVar7 = 0;
        local_358._0_4_ = (undefined4)local_120;
        iVar4 = 0;
        dVar8 = 0.0;
        dVar48 = 0.0;
        uVar35 = 0;
        uVar45 = 0;
        uVar36 = 0;
        uVar38 = 0;
        uVar42 = (undefined4)DAT_14c8463e0;
        uVar43 = DAT_14c8463e0._4_4_;
        uVar37 = (undefined4)DAT_14c8463e8;
        uVar39 = DAT_14c8463e8._4_4_;
        do {
          lVar6 = *(longlong *)(param_4 + 0x90);
          if (*(longlong *)(param_4 + 0x90) == 0) {
            lVar6 = param_4;
          }
          if (1e-08 < *(float *)(lVar6 + lVar5)) {
            local_378._8_4_ = uVar36;
            local_378._0_8_ = dVar47;
            local_378._12_4_ = uVar38;
            local_338._8_4_ = uVar40;
            local_338._0_8_ = dVar17;
            local_338._12_4_ = uVar41;
            local_3b0 = &DAT_14c846480;
            local_3c0 = param_6;
            local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
            local_3a8 = 0;
            local_3b8 = 1;
            local_388 = dVar24;
            uStack_380 = uVar35;
            local_328 = dVar56;
            uStack_320 = uVar34;
            local_318 = dVar23;
            uStack_310 = uVar45;
            FUN_1444a6616(local_398,local_188,param_4,uVar7 & 0xffffffff);
            fVar58 = *(float *)(lVar6 + lVar5) / (float)local_358._0_4_;
            dVar15 = (double)fVar58;
            dVar47 = (double)local_178._0_8_ * (double)local_178._0_8_ +
                     (double)local_188._0_8_ * (double)local_188._0_8_;
            dVar51 = (double)local_178._8_8_ * (double)local_178._8_8_ +
                     (double)local_188._8_8_ * (double)local_188._8_8_;
            auVar52._0_8_ = dVar47 + dVar51;
            auVar52._8_8_ = dVar47 + dVar51;
            auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
            auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
            auVar30 = sqrtpd(auVar52,auVar52);
            auVar30 = divpd(_DAT_149934d80,auVar30);
            auVar59._0_8_ = auVar30._0_8_ * (double)local_178._0_8_;
            auVar59._8_8_ = auVar30._8_8_ * (double)local_178._8_8_;
            dVar47 = (double)((ulonglong)((double)local_188._0_8_ * auVar30._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
            dVar51 = (double)((ulonglong)((double)local_188._8_8_ * auVar30._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
            auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar22);
            dVar23 = auVar30._0_8_;
            dVar32 = auVar30._8_8_;
            dVar24 = dVar15;
            if (iVar4 == 0) {
              local_348._8_4_ = SUB84(dVar51,0);
              local_348._0_8_ = dVar47;
              local_348._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
            }
            else {
              if ((double)CONCAT44(uVar39,uVar37) * dVar32 +
                  dVar23 * (double)CONCAT44(uVar43,uVar42) +
                  dVar47 * (double)local_348._0_8_ + dVar51 * (double)local_348._8_8_ <= 0.0) {
                dVar24 = (double)-fVar58;
              }
              auVar30._8_8_ = CONCAT44(uVar39,uVar37);
              auVar30._0_8_ = CONCAT44(uVar43,uVar42);
            }
            dVar16 = dVar16 + local_168 * dVar15;
            uVar40 = local_338._8_4_;
            uVar41 = local_338._12_4_;
            dVar17 = local_338._0_8_ + uStack_160 * dVar15;
            dVar56 = local_328 + local_158 * dVar15;
            dVar8 = dVar24 * dVar47 + dVar8;
            dVar48 = dVar51 * dVar24 + dVar48;
            dVar33 = dVar23 * dVar24 + dVar33;
            dVar53 = dVar32 * dVar24 + dVar53;
            uVar36 = local_378._8_4_;
            uVar38 = local_378._12_4_;
            dVar47 = local_378._0_8_ + dVar15 * (double)local_148._0_8_;
            dVar23 = local_318 + (double)local_148._8_8_ * dVar15;
            dVar24 = local_388 + local_138 * dVar15;
            iVar4 = iVar4 + 1;
            iVar3 = *(int *)(param_4 + 0xa0);
            uVar42 = auVar30._0_4_;
            uVar43 = auVar30._4_4_;
            uVar37 = auVar30._8_4_;
            uVar39 = auVar30._12_4_;
            uVar35 = uStack_380;
            uVar45 = uStack_310;
            uVar34 = uStack_320;
          }
          uVar7 = uVar7 + 1;
          lVar5 = lVar5 + 0x90;
        } while ((longlong)uVar7 < (longlong)iVar3);
      }
      dVar51 = dVar33 * dVar33 + dVar8 * dVar8;
      dVar15 = dVar53 * dVar53 + dVar48 * dVar48;
      auVar18._0_8_ = dVar51 + dVar15;
      auVar18._8_8_ = dVar51 + dVar15;
      auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
      auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
      auVar22 = sqrtpd(auVar18,auVar18);
      auVar22 = divpd(_DAT_149934d80,auVar22);
      auVar25._0_8_ = auVar22._0_8_ * dVar33;
      auVar25._8_8_ = auVar22._8_8_ * dVar53;
      local_178 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar9);
      local_188._8_8_ =
           (ulonglong)(dVar48 * auVar22._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_)
      ;
      local_188._0_8_ =
           (ulonglong)(dVar8 * auVar22._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
      uStack_150 = 0;
      local_148._8_4_ = SUB84(dVar23,0);
      local_148._0_8_ = dVar47;
      local_148._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      uStack_130 = 0;
      local_168 = dVar16;
      uStack_160 = dVar17;
      local_158 = dVar56;
      local_138 = dVar24;
      FUN_1449437a2(param_3,&local_1e8);
      uVar7 = 0;
      uVar40 = local_1c8;
      uVar41 = uStack_1c4;
      uVar42 = uStack_1c0;
      uVar43 = uStack_1bc;
      iVar4 = (int)local_390;
      dVar33 = local_2c8;
      dVar53 = dStack_2c0;
      uVar46 = local_2d8;
      uVar50 = uStack_2d0;
      dVar47 = local_1b8;
      dVar51 = local_2f8;
      uVar55 = uStack_2f0;
      dVar8 = local_308;
      dVar48 = dStack_300;
    }
    uVar34 = local_398;
    if (iVar4 == 2) {
      lVar5 = *(longlong *)(param_4 + 0x90);
      if (*(longlong *)(param_4 + 0x90) == 0) {
        lVar5 = param_4;
      }
      local_388 = (double)(longlong)local_108._4_4_;
      lVar6 = 8;
      if ((param_5 & 0xfffffffd) == 0) {
        lVar6 = 0x14;
      }
      fVar58 = *(float *)(lVar6 + 4 + (longlong)local_388 * 0x90 + lVar5);
      fVar1 = *(float *)(lVar6 + 4 + (longlong)local_fc._4_4_ * 0x90 + lVar5);
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      if (fVar58 <= 0.0) {
        fVar58 = 0.0;
      }
      local_3a8 = 0;
      local_3b0 = &DAT_14c846480;
      local_3b8 = 1;
      local_3c0 = param_6;
      local_3c8._0_4_ = param_5;
      FUN_1444a6616(local_398,local_188,param_4);
      local_3a8 = 0;
      local_3b0 = &DAT_14c846480;
      local_3b8 = 1;
      local_3c0 = param_6;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
      FUN_1444a6616(uVar34,&local_1e8,param_4,local_388);
      FUN_14915b8da(local_248,local_188,&local_1e8,
                    -(uint)(1e-08 < fVar1 + fVar58) & (uint)(fVar58 / (fVar1 + fVar58)));
      FUN_1449437a2(param_3,&local_2a8,local_248);
      dVar33 = local_2a8;
      dVar53 = dStack_2a0;
      dVar8 = local_298;
      dVar48 = dStack_290;
    }
    else if (iVar4 == 1) {
      local_3b0 = &DAT_14c846480;
      local_3c0 = param_6;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
      local_3a8 = 0;
      local_3b8 = 1;
      FUN_1444a6616(local_398,local_188,param_4,local_fc._4_4_);
      FUN_1449437a2(param_3,&local_1e8,local_188);
      dVar33 = local_1e8;
      dVar53 = dStack_1e0;
      dVar8 = local_1d8;
      dVar48 = dStack_1d0;
    }
    else if (2 < iVar4) {
      uVar37 = 0;
      uVar39 = 0;
      uVar35 = 0;
      uVar34 = 0;
      iVar3 = *(int *)(param_4 + 0xa0);
      dVar48 = DAT_14c8464f0;
      dVar8 = DAT_14c8464e8;
      dVar53 = DAT_14c8464e0;
      dVar33 = DAT_14c8464e0;
      local_390 = param_3;
      local_2f8 = dVar51;
      uStack_2f0 = uVar55;
      local_2e8 = dVar47;
      uStack_2e0 = uVar7;
      local_2d8 = uVar46;
      uStack_2d0 = uVar50;
      local_2b8 = uVar40;
      uStack_2b4 = uVar41;
      uStack_2b0 = uVar42;
      uStack_2ac = uVar43;
      if (iVar3 < 1) {
        local_388 = DAT_14c8464f0;
        uStack_380 = 0;
        local_378._8_8_ = 0;
        local_378._0_8_ = DAT_14c8464e8;
        dVar47 = 0.0;
        dVar17 = 0.0;
        dVar51 = 0.0;
        dVar24 = 0.0;
      }
      else {
        lVar5 = 0xc;
        if ((param_5 & 0xfffffffd) == 0) {
          lVar5 = 0x18;
        }
        local_348._8_8_ = DAT_14c8463d8;
        local_348._0_8_ = DAT_14c8463d0;
        local_358._0_4_ = local_120._4_4_;
        uVar7 = 0;
        dVar51 = 0.0;
        dVar24 = 0.0;
        dVar47 = 0.0;
        dVar17 = 0.0;
        iVar4 = 0;
        local_378._8_8_ = 0;
        local_378._0_8_ = DAT_14c8464e8;
        local_388 = DAT_14c8464f0;
        uStack_380 = 0;
        uVar40 = (undefined4)DAT_14c8463e0;
        uVar41 = DAT_14c8463e0._4_4_;
        uVar42 = (undefined4)DAT_14c8463e8;
        uVar43 = DAT_14c8463e8._4_4_;
        do {
          lVar6 = *(longlong *)(param_4 + 0x90);
          if (*(longlong *)(param_4 + 0x90) == 0) {
            lVar6 = param_4;
          }
          if (1e-08 < *(float *)(lVar6 + lVar5)) {
            local_338._8_4_ = uVar37;
            local_338._0_8_ = dVar33;
            local_338._12_4_ = uVar39;
            local_3b0 = &DAT_14c846480;
            local_3c0 = param_6;
            local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
            local_3a8 = 0;
            local_3b8 = 1;
            local_328 = dVar8;
            uStack_320 = uVar35;
            local_318 = dVar48;
            uStack_310 = uVar34;
            FUN_1444a6616(local_398,local_188,param_4,uVar7 & 0xffffffff);
            fVar58 = *(float *)(lVar6 + lVar5) / (float)local_358._0_4_;
            dVar16 = (double)fVar58;
            dVar33 = (double)local_178._0_8_ * (double)local_178._0_8_ +
                     (double)local_188._0_8_ * (double)local_188._0_8_;
            dVar8 = (double)local_178._8_8_ * (double)local_178._8_8_ +
                    (double)local_188._8_8_ * (double)local_188._8_8_;
            auVar44._0_8_ = dVar33 + dVar8;
            auVar44._8_8_ = dVar33 + dVar8;
            auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
            auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
            auVar22 = sqrtpd(auVar44,auVar44);
            auVar22 = divpd(_DAT_149934d80,auVar22);
            auVar57._0_8_ = auVar22._0_8_ * (double)local_178._0_8_;
            auVar57._8_8_ = auVar22._8_8_ * (double)local_178._8_8_;
            dVar33 = (double)((ulonglong)((double)local_188._0_8_ * auVar22._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
            dVar8 = (double)((ulonglong)((double)local_188._8_8_ * auVar22._8_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
            auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar10);
            dVar23 = auVar26._0_8_;
            dVar56 = auVar26._8_8_;
            dVar48 = dVar16;
            if (iVar4 == 0) {
              local_348._8_4_ = SUB84(dVar8,0);
              local_348._0_8_ = dVar33;
              local_348._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            }
            else {
              if ((double)CONCAT44(uVar43,uVar42) * dVar56 +
                  dVar23 * (double)CONCAT44(uVar41,uVar40) +
                  dVar33 * (double)local_348._0_8_ + dVar8 * (double)local_348._8_8_ <= 0.0) {
                dVar48 = (double)-fVar58;
              }
              auVar26._4_4_ = uVar41;
              auVar26._0_4_ = uVar40;
              auVar26._12_4_ = uVar43;
              auVar26._8_4_ = uVar42;
            }
            dVar53 = dVar53 + local_168 * dVar16;
            local_378._0_8_ = (double)local_378._0_8_ + uStack_160 * dVar16;
            local_388 = local_388 + local_158 * dVar16;
            dVar51 = dVar48 * dVar33 + dVar51;
            dVar24 = dVar8 * dVar48 + dVar24;
            dVar47 = dVar23 * dVar48 + dVar47;
            dVar17 = dVar56 * dVar48 + dVar17;
            uVar37 = local_338._8_4_;
            uVar39 = local_338._12_4_;
            dVar33 = local_338._0_8_ + dVar16 * (double)local_148._0_8_;
            dVar8 = local_328 + (double)local_148._8_8_ * dVar16;
            dVar48 = local_318 + local_138 * dVar16;
            iVar4 = iVar4 + 1;
            iVar3 = *(int *)(param_4 + 0xa0);
            uVar40 = auVar26._0_4_;
            uVar41 = auVar26._4_4_;
            uVar42 = auVar26._8_4_;
            uVar43 = auVar26._12_4_;
            uVar34 = uStack_310;
            uVar35 = uStack_320;
          }
          uVar7 = uVar7 + 1;
          lVar5 = lVar5 + 0x90;
        } while ((longlong)uVar7 < (longlong)iVar3);
      }
      param_3 = local_390;
      dVar16 = dVar47 * dVar47 + dVar51 * dVar51;
      dVar23 = dVar17 * dVar17 + dVar24 * dVar24;
      auVar19._0_8_ = dVar16 + dVar23;
      auVar19._8_8_ = dVar16 + dVar23;
      auVar11._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
      auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
      auVar22 = sqrtpd(auVar19,auVar19);
      auVar22 = divpd(_DAT_149934d80,auVar22);
      auVar27._0_8_ = auVar22._0_8_ * dVar47;
      auVar27._8_8_ = auVar22._8_8_ * dVar17;
      local_178 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar11);
      local_188._8_8_ =
           (ulonglong)(dVar24 * auVar22._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_)
      ;
      local_188._0_8_ =
           (ulonglong)(dVar51 * auVar22._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_)
      ;
      uStack_160 = (double)local_378._0_8_;
      local_158 = local_388;
      uStack_150 = 0;
      local_148._8_4_ = SUB84(dVar8,0);
      local_148._0_8_ = dVar33;
      local_148._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      uStack_130 = 0;
      local_168 = dVar53;
      local_138 = dVar48;
      FUN_1449437a2(local_390,&local_1e8);
      uVar40 = local_2b8;
      uVar41 = uStack_2b4;
      uVar42 = uStack_2b0;
      uVar43 = uStack_2ac;
      dVar33 = local_1e8;
      dVar53 = dStack_1e0;
      uVar46 = local_2d8;
      uVar50 = uStack_2d0;
      dVar47 = local_2e8;
      uVar7 = uStack_2e0;
      dVar51 = local_2f8;
      uVar55 = uStack_2f0;
      dVar8 = local_1d8;
      dVar48 = dStack_1d0;
    }
    iVar3 = local_100;
    uVar34 = local_398;
    if (local_39c == 2.8026e-45) {
      lVar5 = *(longlong *)(param_4 + 0x90);
      if (*(longlong *)(param_4 + 0x90) == 0) {
        lVar5 = param_4;
      }
      lVar6 = 8;
      if ((param_5 & 0xfffffffd) == 0) {
        lVar6 = 0x14;
      }
      fVar58 = *(float *)(lVar6 + 8 + (longlong)local_100 * 0x90 + lVar5);
      fVar1 = *(float *)(lVar6 + 8 + (longlong)local_f4 * 0x90 + lVar5);
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      if (fVar58 <= 0.0) {
        fVar58 = 0.0;
      }
      local_3a8 = 0;
      local_3b0 = &DAT_14c846480;
      local_3b8 = 1;
      local_3c0 = param_6;
      local_3c8._0_4_ = param_5;
      FUN_1444a6616(local_398,local_188,param_4);
      local_3a8 = 0;
      local_3b0 = &DAT_14c846480;
      local_3b8 = 1;
      local_3c0 = param_6;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
      FUN_1444a6616(uVar34,&local_1e8,param_4,iVar3);
      FUN_14915b8da(local_248,local_188,&local_1e8,
                    -(uint)(1e-08 < fVar1 + fVar58) & (uint)(fVar58 / (fVar1 + fVar58)));
      FUN_1449437a2(param_3,&local_2a8,local_248);
      uVar55 = 0;
      uVar46 = local_268;
      uVar50 = uStack_260;
      dVar51 = local_258;
    }
    else if (local_39c == 1.4013e-45) {
      local_3b0 = &DAT_14c846480;
      local_3c0 = param_6;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
      local_3a8 = 0;
      local_3b8 = 1;
      FUN_1444a6616(local_398,local_188,param_4,local_f4);
      FUN_1449437a2(param_3,&local_1e8,local_188);
      uVar55 = 0;
      uVar46 = local_1a8;
      uVar50 = uStack_1a0;
      dVar51 = local_198;
    }
    else if (2 < (int)local_39c) {
      uVar37 = 0;
      uVar39 = 0;
      uVar35 = 0;
      uVar34 = 0;
      iVar3 = *(int *)(param_4 + 0xa0);
      dVar16 = DAT_14c8464f0;
      dVar24 = DAT_14c8464e8;
      dVar17 = DAT_14c8464e0;
      dVar51 = DAT_14c8464e0;
      local_390 = param_3;
      local_308 = dVar8;
      dStack_300 = dVar48;
      local_2e8 = dVar47;
      uStack_2e0 = uVar7;
      local_2c8 = dVar33;
      dStack_2c0 = dVar53;
      local_2b8 = uVar40;
      uStack_2b4 = uVar41;
      uStack_2b0 = uVar42;
      uStack_2ac = uVar43;
      if (iVar3 < 1) {
        local_388 = DAT_14c8464f0;
        uStack_380 = 0;
        local_378._8_8_ = 0;
        local_378._0_8_ = DAT_14c8464e8;
        dVar8 = 0.0;
        dVar48 = 0.0;
        dVar33 = 0.0;
        dVar53 = 0.0;
      }
      else {
        auVar28._4_4_ = DAT_14c8463e0._4_4_;
        auVar28._0_4_ = (undefined4)DAT_14c8463e0;
        auVar28._8_4_ = (undefined4)DAT_14c8463e8;
        auVar28._12_4_ = DAT_14c8463e8._4_4_;
        lVar5 = 0x10;
        if ((param_5 & 0xfffffffd) == 0) {
          lVar5 = 0x1c;
        }
        local_358._8_8_ = DAT_14c8463d8;
        local_358._0_8_ = DAT_14c8463d0;
        local_39c = local_118;
        uVar7 = 0;
        dVar33 = 0.0;
        dVar53 = 0.0;
        dVar8 = 0.0;
        dVar48 = 0.0;
        iVar4 = 0;
        local_378._8_8_ = 0;
        local_378._0_8_ = DAT_14c8464e8;
        local_388 = DAT_14c8464f0;
        uStack_380 = 0;
        do {
          lVar6 = *(longlong *)(param_4 + 0x90);
          if (*(longlong *)(param_4 + 0x90) == 0) {
            lVar6 = param_4;
          }
          if (1e-08 < *(float *)(lVar6 + lVar5)) {
            local_338._8_4_ = uVar37;
            local_338._0_8_ = dVar51;
            local_338._12_4_ = uVar39;
            local_3b0 = &DAT_14c846480;
            local_3c0 = param_6;
            local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,param_5);
            local_3a8 = 0;
            local_3b8 = 1;
            local_328 = dVar24;
            uStack_320 = uVar35;
            local_318 = dVar16;
            uStack_310 = uVar34;
            FUN_1444a6616(local_398,local_188,param_4,uVar7 & 0xffffffff);
            fVar58 = *(float *)(lVar6 + lVar5) / local_39c;
            dVar16 = (double)fVar58;
            dVar47 = (double)local_178._0_8_ * (double)local_178._0_8_ +
                     (double)local_188._0_8_ * (double)local_188._0_8_;
            dVar51 = (double)local_178._8_8_ * (double)local_178._8_8_ +
                     (double)local_188._8_8_ * (double)local_188._8_8_;
            auVar49._0_8_ = dVar47 + dVar51;
            auVar49._8_8_ = dVar47 + dVar51;
            auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
            auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
            auVar22 = sqrtpd(auVar49,auVar49);
            auVar22 = divpd(_DAT_149934d80,auVar22);
            auVar54._0_8_ = auVar22._0_8_ * (double)local_178._0_8_;
            auVar54._8_8_ = auVar22._8_8_ * (double)local_178._8_8_;
            dVar47 = (double)((ulonglong)((double)local_188._0_8_ * auVar22._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_));
            dVar51 = (double)((ulonglong)((double)local_188._8_8_ * auVar22._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_));
            auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar12);
            dVar24 = dVar16;
            if (iVar4 == 0) {
              local_358._8_4_ = SUB84(dVar51,0);
              local_358._0_8_ = dVar47;
              local_358._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
              auVar28 = auVar22;
            }
            else if (auVar28._8_8_ * auVar22._8_8_ +
                     auVar22._0_8_ * auVar28._0_8_ +
                     dVar47 * (double)local_358._0_8_ + dVar51 * (double)local_358._8_8_ <= 0.0) {
              dVar24 = (double)-fVar58;
            }
            dVar17 = dVar17 + local_168 * dVar16;
            local_378._0_8_ = (double)local_378._0_8_ + uStack_160 * dVar16;
            local_388 = local_388 + local_158 * dVar16;
            dVar33 = dVar24 * dVar47 + dVar33;
            dVar53 = dVar51 * dVar24 + dVar53;
            dVar8 = auVar22._0_8_ * dVar24 + dVar8;
            dVar48 = auVar22._8_8_ * dVar24 + dVar48;
            uVar37 = local_338._8_4_;
            uVar39 = local_338._12_4_;
            dVar51 = local_338._0_8_ + dVar16 * (double)local_148._0_8_;
            dVar24 = local_328 + (double)local_148._8_8_ * dVar16;
            dVar16 = local_318 + local_138 * dVar16;
            iVar4 = iVar4 + 1;
            iVar3 = *(int *)(param_4 + 0xa0);
            uVar34 = uStack_310;
            uVar35 = uStack_320;
          }
          uVar7 = uVar7 + 1;
          lVar5 = lVar5 + 0x90;
        } while ((longlong)uVar7 < (longlong)iVar3);
      }
      dVar47 = dVar8 * dVar8 + dVar33 * dVar33;
      dVar23 = dVar48 * dVar48 + dVar53 * dVar53;
      auVar20._0_8_ = dVar47 + dVar23;
      auVar20._8_8_ = dVar47 + dVar23;
      auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
      auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
      auVar22 = sqrtpd(auVar20,auVar20);
      auVar22 = divpd(_DAT_149934d80,auVar22);
      auVar29._0_8_ = auVar22._0_8_ * dVar8;
      auVar29._8_8_ = auVar22._8_8_ * dVar48;
      uVar7 = (ulonglong)(dVar53 * auVar22._8_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
      local_178 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar13);
      local_188._8_4_ = (int)uVar7;
      local_188._0_8_ =
           (ulonglong)(dVar33 * auVar22._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_)
      ;
      local_188._12_4_ = (int)(uVar7 >> 0x20);
      uStack_160 = (double)local_378._0_8_;
      local_158 = local_388;
      uStack_150 = 0;
      local_148._8_4_ = SUB84(dVar24,0);
      local_148._0_8_ = dVar51;
      local_148._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      uStack_130 = 0;
      local_168 = dVar17;
      local_138 = dVar16;
      FUN_1449437a2(local_390,&local_1e8);
      uVar55 = 0;
      uVar40 = local_2b8;
      uVar41 = uStack_2b4;
      uVar42 = uStack_2b0;
      uVar43 = uStack_2ac;
      dVar33 = local_2c8;
      dVar53 = dStack_2c0;
      uVar46 = local_1a8;
      uVar50 = uStack_1a0;
      dVar47 = local_2e8;
      uVar7 = uStack_2e0;
      dVar51 = local_198;
      dVar8 = local_308;
      dVar48 = dStack_300;
    }
  }
  dVar17 = dVar8 * dVar8 + dVar33 * dVar33;
  dVar24 = dVar48 * dVar48 + dVar53 * dVar53;
  auVar21._0_8_ = dVar17 + dVar24;
  auVar21._8_8_ = dVar17 + dVar24;
  auVar14._8_8_ = -(ulonglong)(1e-08 <= auVar21._8_8_);
  auVar14._0_8_ = -(ulonglong)(1e-08 <= auVar21._0_8_);
  auVar22 = sqrtpd(auVar21,auVar21);
  auVar30 = divpd(_DAT_149934d80,auVar22);
  auVar31._0_8_ = auVar30._0_8_ * dVar8;
  auVar31._8_8_ = auVar30._8_8_ * dVar48;
  auVar22 = blendvpd(_DAT_149935300,auVar31,auVar14);
  *local_360 = (ulonglong)(dVar33 * auVar30._0_8_) & -(ulonglong)(1e-08 <= auVar21._0_8_);
  local_360[1] = (ulonglong)(dVar53 * auVar30._8_8_) & -(ulonglong)(1e-08 <= auVar21._8_8_);
  *(undefined1 (*) [16])(local_360 + 2) = auVar22;
  *(undefined4 *)(local_360 + 4) = uVar40;
  *(undefined4 *)((longlong)local_360 + 0x24) = uVar41;
  *(undefined4 *)(local_360 + 5) = uVar42;
  *(undefined4 *)((longlong)local_360 + 0x2c) = uVar43;
  local_360[6] = (ulonglong)dVar47;
  local_360[7] = uVar7;
  local_360[8] = uVar46;
  local_360[9] = uVar50;
  local_360[10] = (ulonglong)dVar51;
  local_360[0xb] = uVar55;
LAB_1444a3ab9:
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_360;
}



// FUNCTION 1444a3b48 FUN_1444a3b48 body=5901 status=ok
// SIG undefined FUN_1444a3b48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_1444a3b48(undefined8 param_1,ulonglong *param_2,longlong param_3,uint param_4,
             undefined1 (*param_5) [16],char param_6,double *param_7,char param_8)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar48;
  undefined1 auVar47 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  undefined1 (*local_370) [16];
  char local_368;
  double *local_360;
  char local_358;
  uint local_344;
  undefined8 local_340;
  undefined8 local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [12];
  undefined4 uStack_2ec;
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2d0;
  float local_2c8 [3];
  undefined8 local_2bc;
  uint local_2b4;
  undefined8 local_2b0;
  int local_2a8;
  undefined8 local_2a4;
  int local_29c;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
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
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  auVar26 = _DAT_14c8464d0;
  dVar41 = DAT_14c8464b8;
  dVar61 = DAT_14c8464b0;
  dVar32 = DAT_14c8464a8;
  dVar46 = DAT_14c8464a0;
  auVar54 = _DAT_14c846490;
  auVar31 = _DAT_14c846480;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar55 = (undefined4)DAT_14c8464c0;
  uVar56 = DAT_14c8464c0._4_4_;
  dVar53 = DAT_14c8464c0;
  uVar57 = DAT_14c8464c0._8_4_;
  uVar58 = DAT_14c8464c0._12_4_;
  dVar60 = DAT_14c8464c0._8_8_;
  local_2a4 = 0xffffffffffffffff;
  local_29c = -1;
  local_2b0 = 0xffffffffffffffff;
  local_2a8 = -1;
  local_378 = &local_2bc;
  local_2bc = 0;
  local_2b4 = 0;
  local_370 = (undefined1 (*) [16])local_2c8;
  local_2c8[0] = 0.0;
  local_2c8[1] = 0.0;
  local_2c8[2] = 0.0;
  local_344 = param_4;
  local_340 = param_1;
  FUN_1491e0db2(param_3,param_4);
  uVar15 = local_2b4;
  dVar50 = (double)CONCAT44(local_338._4_4_,(uint)local_338);
  uVar8 = (uint)local_2bc;
  uVar19 = local_2bc._4_4_;
  uVar14 = local_2bc._4_4_ ^ 1 | (uint)local_2bc ^ 1;
  uVar10 = local_2b4 ^ 1 | uVar14;
  if (uVar10 == 0) {
    if (((int)local_2a4 == local_2a4._4_4_) && ((int)local_2a4 == local_29c)) {
      local_358 = param_8;
      local_360 = param_7;
      local_368 = param_6;
      local_370 = param_5;
      local_378 = (undefined8 *)CONCAT44(local_378._4_4_,local_344);
      FUN_1444a6616(local_340,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_398);
    }
  }
  bVar13 = local_2bc._4_4_ == 0 || (uint)local_2bc == 0;
  dVar49 = dVar61;
  dVar44 = dVar41;
  if (local_2b4 == 0 || (local_2bc._4_4_ == 0 || (uint)local_2bc == 0)) {
    pauVar12 = (undefined1 (*) [16])
               (ulonglong)CONCAT31((int3)(uVar10 >> 8),local_2b4 == 0 || bVar13);
    auVar42 = auVar26;
    dVar34 = dVar46;
    dVar59 = dVar32;
    if (param_6 != '\0') {
      auVar31 = *param_5;
      auVar54 = param_5[1];
      dVar34 = *(double *)param_5[2];
      dVar59 = *(double *)(param_5[2] + 8);
      dVar61 = *(double *)param_5[3];
      dVar41 = *(double *)(param_5[3] + 8);
      uVar55 = *(undefined4 *)param_5[4];
      uVar56 = *(undefined4 *)(param_5[4] + 4);
      uVar57 = *(undefined4 *)(param_5[4] + 8);
      uVar58 = *(undefined4 *)(param_5[4] + 0xc);
      auVar42 = param_5[5];
      pauVar12 = param_5;
    }
    auVar26 = auVar42;
    dVar53 = (double)CONCAT44(uVar56,uVar55);
    dVar60 = (double)CONCAT44(uVar58,uVar57);
    dVar46 = dVar34;
    dVar32 = dVar59;
    dVar49 = dVar61;
    dVar44 = dVar41;
    if (param_8 != '\0') {
      auVar21 = *(undefined1 (*) [16])(param_7 + 8);
      dVar53 = auVar21._0_8_;
      dVar60 = auVar21._8_8_;
      local_328 = *(undefined1 (*) [16])(param_7 + 10);
      auVar35._4_4_ = uVar56;
      auVar35._0_4_ = uVar55;
      auVar35._8_4_ = uVar57;
      auVar35._12_4_ = uVar58;
      auVar26 = minpd(auVar21,auVar35);
      auVar35 = minpd(local_328,auVar42);
      auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
      iVar11 = movmskpd((int)pauVar12,auVar27);
      auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
      uVar10 = movmskpd(CONCAT31((int3)(uVar14 >> 8),bVar13),auVar36);
      dVar50 = auVar54._0_8_;
      dVar45 = auVar54._8_8_;
      dVar48 = auVar31._0_8_;
      dVar52 = auVar31._8_8_;
      local_338 = auVar42._0_8_;
      dStack_330 = auVar42._8_8_;
      if ((uVar10 & 0x3fffffff) == 0 && iVar11 == 0) {
        dVar4 = *param_7;
        dVar5 = param_7[1];
        dVar6 = param_7[2];
        dVar7 = param_7[3];
        dVar46 = param_7[4] * (double)CONCAT44(uVar56,uVar55);
        dVar32 = param_7[5] * (double)CONCAT44(uVar58,uVar57);
        dVar62 = param_7[6] * local_338;
        dVar63 = param_7[7] * dStack_330;
        local_2f8._4_4_ = uVar56;
        local_2f8._0_4_ = uVar55;
        local_2f8._8_4_ = uVar57;
        uStack_2ec = uVar58;
        dVar49 = dVar32 * dVar48 - dVar46 * dVar52;
        dVar44 = dVar62 * dVar52 - dVar32 * dVar50;
        auVar31 = blendpd(auVar31,auVar54,2);
        dVar3 = dVar46 * dVar50 - dVar62 * auVar31._0_8_;
        dVar64 = dVar63 * dVar45 - dVar63 * auVar31._8_8_;
        dVar44 = dVar44 + dVar44;
        dVar3 = dVar3 + dVar3;
        dVar49 = dVar49 + dVar49;
        dVar64 = dVar64 + dVar64;
        dVar46 = dVar34 + (dVar49 * dVar52 - dVar3 * dVar50) + dVar45 * dVar44 + dVar46;
        dVar32 = dVar59 + (dVar44 * dVar50 - dVar49 * auVar31._0_8_) + dVar45 * dVar3 + dVar32;
        dVar49 = dVar61 + (dVar3 * dVar48 - dVar44 * dVar52) + dVar45 * dVar49 + dVar62;
        dVar44 = dVar41 + (dVar64 * dVar45 - dVar64 * auVar31._8_8_) + dVar45 * dVar64 + dVar63;
        dVar53 = (double)local_2f8._0_8_ * dVar53;
        dVar60 = stack0xfffffffffffffd10 * dVar60;
        auVar26._0_8_ = local_338 * (double)local_328._0_8_;
        auVar26._8_8_ = dStack_330 * (double)local_328._8_8_;
        auVar31._8_8_ =
             (ulonglong)
             (dVar4 * dVar50 * 1.0 + dVar7 * dVar52 + dVar48 * dVar6 * -1.0 + dVar45 * dVar5);
        auVar31._0_8_ =
             (ulonglong)
             (dVar5 * dVar50 * -1.0 + dVar6 * dVar52 + dVar48 * dVar7 * 1.0 + dVar45 * dVar4);
        auVar54._8_8_ =
             dVar6 * dVar50 * -1.0 + ((dVar48 * dVar4 * -1.0 + dVar45 * dVar7) - dVar52 * dVar5);
        auVar54._0_8_ =
             dVar7 * dVar50 * 1.0 + ((dVar48 * dVar5 * 1.0 + dVar45 * dVar6) - dVar52 * dVar4);
        dStack_330 = dVar59;
        local_318 = dVar61;
        dStack_310 = dVar41;
        local_308 = auVar42;
        local_2e8 = auVar21;
        dVar50 = dVar34;
      }
      else {
        dVar32 = dVar52 + dVar52;
        dVar41 = dVar50 + dVar50;
        dVar49 = (dVar48 + dVar48) * dVar48;
        local_1f8 = (1.0 - (dVar41 * dVar50 + dVar32 * dVar52)) * (double)CONCAT44(uVar56,uVar55);
        dStack_1d0 = (1.0 - (dVar41 * dVar50 + dVar49)) * (double)CONCAT44(uVar58,uVar57);
        dVar46 = (dVar48 + dVar48) * dVar45;
        local_1d8 = (dVar32 * dVar48 - dVar41 * dVar45) * (double)CONCAT44(uVar58,uVar57);
        dStack_1b0 = (dVar41 * dVar52 - dVar46) * local_338;
        local_1b8 = (dVar32 * dVar45 + dVar48 * dVar41) * local_338;
        local_1a8 = (1.0 - (dVar49 + dVar32 * dVar52)) * local_338;
        local_338 = local_338 * (double)local_328._0_8_;
        dStack_330 = dStack_330 * (double)local_328._8_8_;
        dStack_1f0 = (dVar32 * dVar48 + dVar41 * dVar45) * (double)CONCAT44(uVar56,uVar55);
        local_1c8 = (dVar41 * dVar52 + dVar46) * (double)CONCAT44(uVar58,uVar57);
        local_1e8 = (dVar48 * dVar41 - dVar32 * dVar45) * (double)CONCAT44(uVar56,uVar55);
        dStack_1e0 = 0.0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        uStack_180 = 0x3ff0000000000000;
        dVar46 = *param_7;
        dVar50 = param_7[1];
        dVar32 = param_7[2];
        dVar49 = dVar50 + dVar50;
        dVar44 = dVar32 + dVar32;
        dVar52 = dVar46 * (dVar46 + dVar46);
        local_228 = (1.0 - (dVar52 + dVar50 * dVar49)) * (double)local_328._0_8_;
        dVar41 = param_7[3];
        dVar45 = dVar44 * dVar41;
        dVar48 = (dVar46 + dVar46) * param_7[3];
        dVar41 = dVar49 * dVar41;
        local_238 = (dVar41 + *param_7 * dVar44) * (double)local_328._0_8_;
        local_258 = (dVar49 * dVar46 - dVar45) * dVar60;
        dStack_230 = (dVar44 * dVar50 - dVar48) * (double)local_328._0_8_;
        local_328._8_8_ = (double)CONCAT44(uVar58,uVar57) * dVar60;
        local_328._0_8_ = (double)CONCAT44(uVar56,uVar55) * dVar53;
        local_278 = (1.0 - (dVar32 * dVar44 + dVar50 * dVar49)) * dVar53;
        dStack_250 = (1.0 - (dVar32 * dVar44 + dVar52)) * dVar60;
        dStack_270 = (dVar49 * dVar46 + dVar45) * dVar53;
        local_248 = (dVar44 * dVar50 + dVar48) * dVar60;
        local_268 = (*param_7 * dVar44 - dVar41) * dVar53;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = param_7[4];
        dStack_210 = param_7[5];
        local_208 = param_7[6];
        uStack_200 = 0x3ff0000000000000;
        local_198 = dVar34;
        dStack_190 = dVar59;
        local_188 = dVar61;
        FUN_1447fea8d(&local_178);
        auVar31 = _DAT_149934d80;
        local_318 = local_168;
        dVar60 = local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170;
        dVar61 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
        dVar53 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
        uVar20 = -(ulonglong)(0.0 <= dVar60 + -9.99999993922529e-09);
        dVar60 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar60)) & uVar20);
        uVar20 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
        dVar61 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar61)) & uVar20);
        uVar20 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
        dVar41 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar53)) & uVar20);
        auVar42._8_8_ = -(ulonglong)(0.0 <= (double)local_328._8_8_);
        auVar42._0_8_ = -(ulonglong)(0.0 <= (double)local_328._0_8_);
        auVar54 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar42);
        auVar26._8_8_ = dStack_330;
        auVar26._0_8_ = local_338;
        dVar53 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
        dVar46 = auVar54._0_8_;
        local_178 = local_178 * dVar60 * dVar46;
        dStack_170 = dStack_170 * dVar60 * dVar46;
        local_168 = dVar60 * local_168 * dVar46;
        dVar60 = auVar54._8_8_;
        local_148 = dVar61 * local_148 * dVar60;
        dStack_150 = dStack_150 * dVar61 * dVar60;
        local_158 = dVar60 * local_158 * dVar61;
        local_128 = dVar41 * local_128 * dVar53;
        dStack_130 = dStack_130 * dVar41 * dVar53;
        local_138 = dVar53 * local_138 * dVar41;
        FUN_14481fd10(&local_298,&local_178);
        dVar53 = local_288 * local_288 + local_298 * local_298;
        dVar60 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar37._0_8_ = dVar53 + dVar60;
        auVar37._8_8_ = dVar53 + dVar60;
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar54 = sqrtpd(auVar37,auVar37);
        auVar42 = divpd(auVar31,auVar54);
        auVar43._0_8_ = auVar42._0_8_ * local_288;
        auVar43._8_8_ = auVar42._8_8_ * dStack_280;
        auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar21);
        auVar31._0_8_ =
             (ulonglong)(local_298 * auVar42._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar31._8_8_ =
             (ulonglong)(dStack_290 * auVar42._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        dVar44 = 0.0;
        dVar53 = (double)local_328._0_8_;
        dVar60 = (double)local_328._8_8_;
        dVar46 = local_118;
        dVar32 = dStack_110;
        dVar49 = local_108;
        dVar50 = local_338;
      }
    }
    local_338 = dVar50;
    if ((uVar8 == 0 && uVar19 == 0) && uVar15 == 0) goto LAB_1444a515e;
  }
  uVar20 = local_2b0;
  uVar9 = local_340;
  uVar10 = local_344;
  local_338._4_4_ = (undefined4)((ulonglong)dVar50 >> 0x20);
  if (uVar8 == 2) {
    lVar17 = *(longlong *)(param_3 + 0x90);
    if (*(longlong *)(param_3 + 0x90) == 0) {
      lVar17 = param_3;
    }
    local_338._0_4_ = uVar19;
    local_328._0_4_ = uVar15;
    lVar16 = 8;
    if ((local_344 & 0xfffffffd) == 0) {
      lVar16 = 0x14;
    }
    fVar1 = *(float *)(lVar16 + (longlong)(int)local_2b0 * 0x90 + lVar17);
    fVar33 = *(float *)(lVar16 + (longlong)(int)local_2a4 * 0x90 + lVar17);
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378._0_4_ = local_344;
    FUN_1444a6616(local_340,&local_178,param_3);
    uVar19 = (uint)local_338;
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378 = (undefined8 *)CONCAT44(local_378._4_4_,uVar10);
    uVar15 = local_328._0_4_;
    FUN_1444a6616(uVar9,&local_1f8,param_3,uVar20 & 0xffffffff);
    dVar50 = (double)CONCAT44(local_338._4_4_,(uint)local_338);
    dVar61 = (double)(float)(-(uint)(1e-08 < fVar33 + fVar1) & (uint)(fVar1 / (fVar33 + fVar1)));
    dVar32 = (dStack_1d0 - dStack_150) * dVar61 + dStack_150;
    dVar49 = (local_1c8 - local_148) * dVar61 + local_148;
    dVar46 = (local_1d8 - local_158) * dVar61 + local_158;
    dVar44 = 0.0;
  }
  else if (uVar8 == 1) {
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378 = (undefined8 *)CONCAT44(local_378._4_4_,local_344);
    local_338 = dVar50;
    FUN_1444a6616(local_340,&local_178,param_3,local_2a4 & 0xffffffff);
    dVar44 = 0.0;
    dVar46 = local_158;
    dVar32 = dStack_150;
    dVar49 = local_148;
    dVar50 = local_338;
  }
  else if (2 < (int)uVar8) {
    local_338._0_4_ = uVar19;
    iVar11 = *(int *)(param_3 + 0xa0);
    dVar49 = DAT_14c8464f0;
    dVar46 = DAT_14c8464e0;
    dVar32 = DAT_14c8464e8;
    if (0 < iVar11) {
      lVar17 = 8;
      if ((local_344 & 0xfffffffd) == 0) {
        lVar17 = 0x14;
      }
      fVar1 = local_2c8[0];
      uVar20 = 0;
      do {
        lVar16 = *(longlong *)(param_3 + 0x90);
        if (*(longlong *)(param_3 + 0x90) == 0) {
          lVar16 = param_3;
        }
        if (1e-08 < *(float *)(lVar16 + lVar17)) {
          local_358 = param_8;
          local_360 = param_7;
          local_368 = param_6;
          local_370 = param_5;
          local_378 = (undefined8 *)CONCAT44(local_378._4_4_,local_344);
          FUN_1444a6616(local_340,&local_178,param_3,uVar20 & 0xffffffff);
          dVar61 = (double)(*(float *)(lVar16 + lVar17) / fVar1);
          dVar46 = dVar61 * local_158 + dVar46;
          dVar32 = dVar32 + dStack_150 * dVar61;
          dVar49 = dVar49 + local_148 * dVar61;
          iVar11 = *(int *)(param_3 + 0xa0);
        }
        uVar20 = uVar20 + 1;
        lVar17 = lVar17 + 0x90;
      } while ((longlong)uVar20 < (longlong)iVar11);
    }
    dVar50 = (double)CONCAT44(local_338._4_4_,(uint)local_338);
    dVar44 = 0.0;
    uVar19 = (uint)local_338;
  }
  uVar9 = local_340;
  uVar8 = local_344;
  local_338._0_4_ = SUB84(dVar46,0);
  local_338._4_4_ = (undefined4)((ulonglong)dVar46 >> 0x20);
  if (uVar19 == 2) {
    local_328._0_4_ = uVar15;
    local_2f8._8_4_ = SUB84(dVar60,0);
    local_2f8._0_8_ = dVar53;
    uStack_2ec = (int)((ulonglong)dVar60 >> 0x20);
    local_2e8._0_8_ = param_2;
    lVar17 = *(longlong *)(param_3 + 0x90);
    if (*(longlong *)(param_3 + 0x90) == 0) {
      lVar17 = param_3;
    }
    iVar11 = local_2b0._4_4_;
    lVar16 = 8;
    if ((local_344 & 0xfffffffd) == 0) {
      lVar16 = 0x14;
    }
    fVar1 = *(float *)(lVar16 + 4 + (longlong)local_2b0._4_4_ * 0x90 + lVar17);
    fVar33 = *(float *)(lVar16 + 4 + (longlong)local_2a4._4_4_ * 0x90 + lVar17);
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378._0_4_ = local_344;
    dStack_330 = dVar32;
    local_318 = dVar49;
    dStack_310 = dVar44;
    local_308 = auVar26;
    FUN_1444a6616(local_340,&local_178,param_3);
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378 = (undefined8 *)CONCAT44(local_378._4_4_,uVar8);
    FUN_1444a6616(uVar9,&local_1f8,param_3,iVar11);
    dVar32 = local_168;
    dVar50 = dStack_170;
    dVar46 = local_178;
    dVar41 = dStack_1e0;
    dVar61 = local_1e8;
    dVar53 = dStack_160 * dStack_1e0 +
             local_168 * local_1e8 + local_178 * local_1f8 + dStack_170 * dStack_1f0;
    dVar34 = (double)(float)(-(uint)(1e-08 < fVar33 + fVar1) & (uint)(fVar1 / (fVar33 + fVar1)));
    dVar49 = dVar53 * (double)(&DAT_149931160)[0.0 <= dVar53];
    dVar44 = 1.0 - dVar34;
    dVar34 = (double)(&DAT_149931160)[0.0 <= dVar53] * dVar34;
    dVar60 = local_1f8;
    dVar53 = dStack_1f0;
    if (dVar49 < 0.9999) {
      dVar53 = dVar49;
      if (1.0 <= dVar49) {
        dVar53 = 1.0;
      }
      local_2d0 = local_1f8;
      local_2d8 = dStack_1f0;
      dVar53 = acos((double)(-(ulonglong)(dVar49 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar49 < -1.0) & (ulonglong)dVar53));
      dVar60 = sin(dVar53);
      dVar44 = sin(dVar44 * dVar53);
      dVar44 = dVar44 * (1.0 / dVar60);
      dVar34 = sin(dVar34 * dVar53);
      dVar34 = dVar34 * (1.0 / dVar60);
      dVar60 = local_2d0;
      dVar53 = local_2d8;
    }
    dVar49 = dStack_160 * dVar44 + dVar41 * dVar34;
    dVar41 = dVar32 * dVar44 + dVar61 * dVar34;
    dVar50 = dVar50 * dVar44 + dVar53 * dVar34;
    dVar61 = dVar46 * dVar44 + dVar60 * dVar34;
    dVar53 = dVar41 * dVar41 + dVar61 * dVar61;
    dVar60 = dVar49 * dVar49 + dVar50 * dVar50;
    auVar28._0_8_ = dVar53 + dVar60;
    auVar28._8_8_ = dVar53 + dVar60;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar31 = sqrtpd(auVar28,auVar28);
    auVar54 = divpd(_DAT_149934d80,auVar31);
    auVar38._0_8_ = auVar54._0_8_ * dVar41;
    auVar38._8_8_ = auVar54._8_8_ * dVar49;
    auVar31._0_8_ =
         (ulonglong)(dVar61 * auVar54._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar31._8_8_ =
         (ulonglong)(dVar50 * auVar54._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar22);
    param_2 = (ulonglong *)local_2e8._0_8_;
    uVar15 = local_328._0_4_;
    dVar53 = (double)local_2f8._0_8_;
    dVar60 = stack0xfffffffffffffd10;
LAB_1444a4e49:
    dVar46 = (double)CONCAT44(local_338._4_4_,(uint)local_338);
    auVar26 = local_308;
    dVar32 = dStack_330;
    dVar49 = local_318;
    dVar44 = dStack_310;
    dVar50 = dVar46;
  }
  else if (uVar19 == 1) {
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378 = (undefined8 *)CONCAT44(local_378._4_4_,local_344);
    local_338 = dVar50;
    FUN_1444a6616(local_340,&local_178,param_3,local_2a4._4_4_);
    auVar31._8_8_ = (ulonglong)dStack_170;
    auVar31._0_8_ = (ulonglong)local_178;
    auVar54._8_8_ = dStack_160;
    auVar54._0_8_ = local_168;
    dVar50 = local_338;
  }
  else if (2 < (int)uVar19) {
    iVar11 = *(int *)(param_3 + 0xa0);
    dVar50 = 0.0;
    dVar61 = 0.0;
    dVar41 = 0.0;
    dVar46 = 0.0;
    dStack_330 = dVar32;
    local_318 = dVar49;
    dStack_310 = dVar44;
    local_308 = auVar26;
    if (0 < iVar11) {
      lVar17 = 0xc;
      if ((local_344 & 0xfffffffd) == 0) {
        lVar17 = 0x18;
      }
      fVar1 = local_2c8[1];
      uVar20 = 0;
      iVar18 = 0;
      auVar31 = _DAT_14c8463e0;
      dVar34 = DAT_14c8463d0;
      dVar59 = DAT_14c8463d8;
      do {
        lVar16 = *(longlong *)(param_3 + 0x90);
        if (*(longlong *)(param_3 + 0x90) == 0) {
          lVar16 = param_3;
        }
        auVar54 = auVar31;
        if (1e-08 < *(float *)(lVar16 + lVar17)) {
          local_358 = param_8;
          local_360 = param_7;
          local_368 = param_6;
          local_370 = param_5;
          local_378 = (undefined8 *)CONCAT44(local_378._4_4_,local_344);
          FUN_1444a6616(local_340,&local_178,param_3,uVar20 & 0xffffffff);
          fVar33 = *(float *)(lVar16 + lVar17) / fVar1;
          dVar32 = local_168 * local_168 + local_178 * local_178;
          dVar49 = dStack_160 * dStack_160 + dStack_170 * dStack_170;
          auVar47._0_8_ = dVar32 + dVar49;
          auVar47._8_8_ = dVar32 + dVar49;
          auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
          auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
          auVar54 = sqrtpd(auVar47,auVar47);
          auVar54 = divpd(_DAT_149934d80,auVar54);
          auVar51._0_8_ = auVar54._0_8_ * local_168;
          auVar51._8_8_ = auVar54._8_8_ * dStack_160;
          dVar44 = (double)((ulonglong)(local_178 * auVar54._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_));
          dVar45 = (double)((ulonglong)(dStack_170 * auVar54._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
          auVar26 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar23);
          auVar54 = auVar26;
          dVar32 = dVar44;
          dVar49 = dVar45;
          if ((iVar18 != 0) &&
             (auVar54 = auVar31, dVar32 = dVar34, dVar49 = dVar59,
             auVar31._8_8_ * auVar26._8_8_ +
             auVar26._0_8_ * auVar31._0_8_ + dVar44 * dVar34 + dVar45 * dVar59 <= 0.0)) {
            fVar33 = -fVar33;
          }
          dVar34 = (double)fVar33;
          dVar41 = dVar34 * dVar44 + dVar41;
          dVar46 = dVar45 * dVar34 + dVar46;
          dVar50 = auVar26._0_8_ * dVar34 + dVar50;
          dVar61 = auVar26._8_8_ * dVar34 + dVar61;
          iVar18 = iVar18 + 1;
          iVar11 = *(int *)(param_3 + 0xa0);
          dVar34 = dVar32;
          dVar59 = dVar49;
        }
        uVar20 = uVar20 + 1;
        lVar17 = lVar17 + 0x90;
        auVar31 = auVar54;
      } while ((longlong)uVar20 < (longlong)iVar11);
    }
    dVar32 = dVar50 * dVar50 + dVar41 * dVar41;
    dVar49 = dVar61 * dVar61 + dVar46 * dVar46;
    auVar29._0_8_ = dVar32 + dVar49;
    auVar29._8_8_ = dVar32 + dVar49;
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar31 = sqrtpd(auVar29,auVar29);
    auVar54 = divpd(_DAT_149934d80,auVar31);
    auVar39._0_8_ = auVar54._0_8_ * dVar50;
    auVar39._8_8_ = auVar54._8_8_ * dVar61;
    auVar31._0_8_ =
         (ulonglong)(dVar41 * auVar54._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar31._8_8_ =
         (ulonglong)(dVar46 * auVar54._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar24);
    goto LAB_1444a4e49;
  }
  iVar11 = local_2a8;
  fVar1 = local_2c8[2];
  uVar9 = local_340;
  uVar19 = local_344;
  local_338 = dVar50;
  if (uVar15 == 2) {
    lVar17 = *(longlong *)(param_3 + 0x90);
    if (*(longlong *)(param_3 + 0x90) == 0) {
      lVar17 = param_3;
    }
    lVar16 = 8;
    if ((local_344 & 0xfffffffd) == 0) {
      lVar16 = 0x14;
    }
    fVar1 = *(float *)(lVar16 + 8 + (longlong)local_2a8 * 0x90 + lVar17);
    fVar33 = *(float *)(lVar16 + 8 + (longlong)local_29c * 0x90 + lVar17);
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378._0_4_ = local_344;
    FUN_1444a6616(local_340,&local_178,param_3);
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378 = (undefined8 *)CONCAT44(local_378._4_4_,uVar19);
    FUN_1444a6616(uVar9,&local_1f8,param_3,iVar11);
    dVar61 = (double)(float)(-(uint)(1e-08 < fVar33 + fVar1) & (uint)(fVar1 / (fVar33 + fVar1)));
    dVar60 = (dStack_1b0 - dStack_130) * dVar61 + dStack_130;
    dVar53 = (local_1b8 - local_138) * dVar61 + local_138;
    auVar26._8_8_ = 0.0;
    auVar26._0_8_ = (local_1a8 - local_128) * dVar61 + local_128;
  }
  else if (uVar15 == 1) {
    local_358 = param_8;
    local_360 = param_7;
    local_368 = param_6;
    local_370 = param_5;
    local_378 = (undefined8 *)CONCAT44(local_378._4_4_,local_344);
    FUN_1444a6616(local_340,&local_178,param_3,local_29c);
    auVar26._8_8_ = 0.0;
    auVar26._0_8_ = local_128;
    dVar53 = local_138;
    dVar60 = dStack_130;
  }
  else if (2 < (int)uVar15) {
    iVar11 = *(int *)(param_3 + 0xa0);
    dVar61 = DAT_14c8464f0;
    dVar53 = DAT_14c8464e0;
    dVar60 = DAT_14c8464e8;
    if (0 < iVar11) {
      lVar17 = 0x10;
      if ((local_344 & 0xfffffffd) == 0) {
        lVar17 = 0x1c;
      }
      uVar20 = 0;
      do {
        lVar16 = *(longlong *)(param_3 + 0x90);
        if (*(longlong *)(param_3 + 0x90) == 0) {
          lVar16 = param_3;
        }
        if (1e-08 < *(float *)(lVar16 + lVar17)) {
          local_358 = param_8;
          local_360 = param_7;
          local_368 = param_6;
          local_370 = param_5;
          local_378 = (undefined8 *)CONCAT44(local_378._4_4_,local_344);
          FUN_1444a6616(local_340,&local_178,param_3,uVar20 & 0xffffffff);
          dVar41 = (double)(*(float *)(lVar16 + lVar17) / fVar1);
          dVar53 = dVar41 * local_138 + dVar53;
          dVar60 = dVar60 + dStack_130 * dVar41;
          dVar61 = dVar61 + local_128 * dVar41;
          iVar11 = *(int *)(param_3 + 0xa0);
        }
        uVar20 = uVar20 + 1;
        lVar17 = lVar17 + 0x90;
      } while ((longlong)uVar20 < (longlong)iVar11);
    }
    auVar26._8_8_ = 0.0;
    auVar26._0_8_ = dVar61;
  }
LAB_1444a515e:
  dVar59 = auVar31._0_8_;
  dVar45 = auVar31._8_8_;
  dVar50 = auVar54._0_8_;
  dVar34 = auVar54._8_8_;
  dVar61 = dVar50 * dVar50 + dVar59 * dVar59;
  dVar41 = dVar34 * dVar34 + dVar45 * dVar45;
  auVar30._0_8_ = dVar61 + dVar41;
  auVar30._8_8_ = dVar61 + dVar41;
  auVar25._8_8_ = -(ulonglong)(1e-08 <= auVar30._8_8_);
  auVar25._0_8_ = -(ulonglong)(1e-08 <= auVar30._0_8_);
  auVar31 = sqrtpd(auVar30,auVar30);
  auVar54 = divpd(_DAT_149934d80,auVar31);
  auVar40._0_8_ = auVar54._0_8_ * dVar50;
  auVar40._8_8_ = auVar54._8_8_ * dVar34;
  auVar31 = blendvpd(_DAT_149935300,auVar40,auVar25);
  *param_2 = (ulonglong)(dVar59 * auVar54._0_8_) & -(ulonglong)(1e-08 <= auVar30._0_8_);
  param_2[1] = (ulonglong)(dVar45 * auVar54._8_8_) & -(ulonglong)(1e-08 <= auVar30._8_8_);
  *(undefined1 (*) [16])(param_2 + 2) = auVar31;
  param_2[4] = (ulonglong)dVar46;
  param_2[5] = (ulonglong)dVar32;
  param_2[6] = (ulonglong)dVar49;
  param_2[7] = (ulonglong)dVar44;
  auVar2._8_4_ = SUB84(dVar60,0);
  auVar2._0_8_ = dVar53;
  auVar2._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar2;
  *(undefined1 (*) [16])(param_2 + 10) = auVar26;
  if ((local_f0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444a525c FUN_1444a525c body=615 status=ok
// SIG undefined FUN_1444a525c(void)

void FUN_1444a525c(undefined8 param_1,longlong param_2,undefined8 *param_3,uint param_4,
                  undefined8 param_5,char param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  char local_c0;
  undefined1 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    lVar2 = 0x4e8;
    uVar9 = (ulonglong)param_4;
    if (param_4 < 4) {
      lVar2 = *(longlong *)(&DAT_14bb90828 + uVar9 * 8);
    }
    pcVar4 = "";
    if (*(char **)(param_2 + lVar2) != (char *)0x0) {
      pcVar4 = *(char **)(param_2 + lVar2);
    }
    if (*pcVar4 == '\0') {
      if (param_4 == 0) {
        lVar2 = param_2 + 0x4a0;
      }
      else if (param_4 == 1) {
        lVar2 = param_2 + 0x480;
      }
      else if (param_4 == 3) {
        lVar2 = param_2 + 0x490;
      }
      else {
        lVar2 = param_2 + 0x4b0;
      }
      puVar8 = *(undefined8 **)(lVar2 + 8);
      local_b0 = param_3;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = &DAT_14cc07c00;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cc07c60) {
          FUN_144b3d300(&DAT_14cc07c60);
          if (DAT_14cc07c60 == -1) {
            puVar8 = &DAT_14cc07c00;
            puVar6 = &DAT_14c846480;
            puVar7 = &DAT_14cc07c00;
            for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            _Init_thread_footer(&DAT_14cc07c60);
          }
        }
      }
      param_3 = local_b0;
      puVar6 = local_a8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + 1;
      }
      if (param_6 == '\0') {
        cVar1 = FUN_141124de2(local_a8,local_b0,0x38d1b717);
        if (cVar1 != '\0') goto LAB_1444a5427;
      }
    }
    FUN_14449ed30(param_1,local_a8,param_2,param_4);
    if (param_4 < 4) {
      lVar2 = *(longlong *)(&DAT_14bb907f8 + uVar9 * 8);
      lVar3 = (longlong)(int)(&switchD_140157364::switchdataD_14bb90818)[uVar9];
    }
    else {
      lVar2 = 0x4b0;
      lVar3 = 0;
    }
    puVar8 = *(undefined8 **)(param_2 + 8 + lVar2);
    if (puVar8 != (undefined8 *)0x0) {
      puVar6 = param_3;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    lVar2 = 0x4e8;
    if (param_4 < 4) {
      lVar2 = *(longlong *)(&DAT_14bb90828 + uVar9 * 8);
    }
    puVar5 = *(undefined1 **)(param_2 + lVar2);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_14cc07bfc;
    }
    *puVar5 = 0;
    puVar5 = *(undefined1 **)(param_2 + 0x4c0 + *(longlong *)(&DAT_14bb90848 + lVar3 * 8));
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_14cc07bfc;
    }
    *puVar5 = 1;
    if ((param_4 & 0xfffffffd) == 0) {
      local_b8 = 0;
      local_c0 = param_6;
      local_c8 = 0;
      FUN_1444a525c(param_1,param_2,param_3,(1 < param_4) * '\x02' + '\x01');
    }
    if (param_4 < 2) {
      FUN_140ad4746(param_1,10,param_2);
    }
  }
LAB_1444a5427:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a54c4 FUN_1444a54c4 body=191 status=ok
// SIG undefined FUN_1444a54c4(void)

void FUN_1444a54c4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  char cVar1;
  undefined1 auStack_218 [40];
  undefined1 local_1f0 [440];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_2 != 0) {
    FUN_14918b1f6(local_1f0,param_2 + 0x210);
    if ((param_5 != '\0') || (cVar1 = FUN_1491de778(local_1f0,param_3), cVar1 == '\0')) {
      FUN_149191da2(param_2 + 0x210,param_3);
      FUN_140ad4746(param_1,7,param_2);
    }
    FUN_14918b3e4(local_1f0);
  }
  FUN_14918b3e4(param_3);
  if ((local_38 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a5584 FUN_1444a5584 body=542 status=ok
// SIG undefined FUN_1444a5584(void)

undefined8 FUN_1444a5584(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_c0 [56];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)((longlong)param_1 + 0x19) == '\x01') {
    cVar3 = *(char *)(param_1 + 3);
    lVar6 = param_1[1];
    if (*(char *)(lVar6 + 0x211) == '\t') {
      FUN_1401571e4(*param_1,&local_138,lVar6,1);
      local_d8 = local_118;
      dStack_d0 = dStack_110;
      local_c8 = local_108;
      local_88 = local_138;
      uStack_84 = uStack_134;
      uStack_80 = uStack_130;
      uStack_7c = uStack_12c;
      local_78 = local_128;
      uStack_74 = uStack_124;
      uStack_70 = uStack_120;
      uStack_6c = uStack_11c;
      FUN_1448052ee(&local_88,local_c0);
      lVar6 = 8;
      if (cVar3 == '\0') {
        lVar6 = 0x20;
      }
      lVar7 = param_1[1];
      dVar1 = *(double *)(lVar7 + 0x3d8 + lVar6);
      dVar2 = *(double *)(lVar7 + 0x3c8 + lVar6);
      pfVar4 = (float *)param_1[2];
      *pfVar4 = (float)*(double *)(lVar7 + 0x3d0 + lVar6);
      pfVar4[1] = (float)dVar1;
      pfVar4[2] = (float)dVar2;
      pfVar4[3] = (float)local_d8;
      pfVar4[4] = (float)dStack_d0;
      pfVar4[5] = (float)local_c8;
      pfVar4[6] = (float)local_f8;
      pfVar4[7] = (float)local_f0;
      pfVar4[8] = (float)local_e8;
      pfVar4[9] = 0.0;
      pfVar4[10] = 0.0;
      pfVar4[0xb] = 0.0;
      pfVar4[0xc] = 0.0;
      pfVar4[0xd] = 0.0;
      pfVar4[0xe] = 0.0;
      pfVar4[0xf] = 0.0;
      pfVar4[0x10] = 0.0;
      pfVar4[0x11] = 0.0;
      pfVar4[0x12] = 0.0;
      pfVar4[0x13] = 0.0;
      pfVar4[0x14] = 0.0;
      pfVar4[0x15] = 0.0;
      pfVar4[0x16] = 0.0;
      pfVar4[0x17] = 0.0;
      pfVar4[0x18] = 0.0;
      pfVar4[0x19] = 0.0;
      pfVar4[0x1a] = 0.0;
      pfVar4[0x1b] = 0.0;
      pfVar4[0x1c] = 0.0;
      pfVar4[0x1c] = 0.0;
      pfVar4[0x1d] = 0.0;
      pfVar4[0x1e] = 0.0;
      pfVar4[0x1f] = 0.0;
    }
    else {
      if (*(char *)(lVar6 + 0x211) != '\x06') goto LAB_1444a5648;
      lVar7 = lVar6 + 0x20;
      if (cVar3 != '\0') {
        lVar7 = lVar6 + 8;
      }
      dVar1 = *(double *)(lVar7 + 0x3d8);
      dVar2 = *(double *)(lVar7 + 0x3d0);
      pfVar4 = (float *)param_1[2];
      *pfVar4 = (float)*(double *)(lVar7 + 0x3c8);
      pfVar4[1] = (float)dVar2;
      pfVar4[2] = (float)dVar1;
      pfVar4[3] = 0.0;
      pfVar4[4] = 0.0;
      pfVar4[5] = 0.0;
      pfVar4[6] = 0.0;
      pfVar4[7] = 0.0;
      pfVar4[8] = 0.0;
      pfVar4[9] = 0.0;
      pfVar4[10] = 0.0;
      pfVar4[0xb] = 0.0;
      pfVar4[0xc] = 0.0;
      pfVar4[0xd] = 0.0;
      pfVar4[0xe] = 0.0;
      pfVar4[0xf] = 0.0;
      pfVar4[0x10] = 0.0;
      pfVar4[0x11] = 0.0;
      pfVar4[0x12] = 0.0;
      pfVar4[0x13] = 0.0;
      pfVar4[0x14] = 0.0;
      pfVar4[0x15] = 0.0;
      pfVar4[0x16] = 0.0;
      pfVar4[0x17] = 0.0;
      pfVar4[0x18] = 0.0;
      pfVar4[0x19] = 0.0;
      pfVar4[0x1a] = 0.0;
      pfVar4[0x1b] = 0.0;
      pfVar4[0x1c] = 0.0;
      pfVar4[0x1d] = 0.0;
      pfVar4[0x1e] = 0.0;
      pfVar4[0x1f] = 0.0;
    }
    *(undefined1 *)(pfVar4 + 0x20) = 1;
    *(undefined2 *)((longlong)pfVar4 + 0x81) = 0;
    *(undefined1 *)((longlong)pfVar4 + 0x83) = 0;
    uVar5 = CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
  }
  else {
LAB_1444a5648:
    uVar5 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a57a4 FUN_1444a57a4 body=2954 status=ok
// SIG undefined FUN_1444a57a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444a57a4(longlong param_1,longlong param_2,void *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,char param_8)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  undefined1 uVar35;
  longlong lVar36;
  undefined1 in_XMM1 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  longlong lVar49;
  undefined1 auVar50 [16];
  longlong lVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar68 [16];
  undefined1 auStack_208 [32];
  void *local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8 [96];
  void *local_168;
  int local_160;
  undefined4 local_15c;
  undefined1 local_e1;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_e1 = param_4;
  if (param_2 == 0) goto switchD_1444a58dc_default;
  switch(param_4) {
  case 0:
    memcpy(&local_168,param_3,0x84);
    local_1e8 = (void *)(param_2 + 0x2b8);
    FUN_1491c1c06(&local_168,param_2 + 0x220,*(undefined1 *)(param_2 + 0x211),param_2 + 0x234);
    uVar35 = *(undefined1 *)(param_1 + 0x52c);
    *(undefined1 *)(param_1 + 0x52c) = 0;
    FUN_1491932b8(&local_168,local_1c8,*(undefined1 *)(param_2 + 0x211),
                  *(undefined1 *)(param_2 + 0x21c));
    uVar34 = 0;
    break;
  case 1:
    memcpy(&local_168,param_3,0x84);
    local_1e8 = (void *)(param_2 + 0x2b8);
    FUN_1491c1c06(&local_168,param_2 + 0x220,*(undefined1 *)(param_2 + 0x211),param_2 + 0x234);
    uVar35 = *(undefined1 *)(param_1 + 0x52c);
    *(undefined1 *)(param_1 + 0x52c) = 0;
    FUN_1491932b8(&local_168,local_1c8,*(undefined1 *)(param_2 + 0x211),
                  *(undefined1 *)(param_2 + 0x21c));
    uVar34 = 1;
    break;
  case 2:
    memcpy((void *)(param_2 + 0x234),param_3,0x84);
    local_168 = (void *)0x0;
    local_160 = *(int *)(param_2 + 0x228);
    lVar36 = (longlong)local_160;
    pvVar1 = *(void **)(param_2 + 0x220);
    if (lVar36 == 0) {
      local_15c = 0;
    }
    else {
      FUN_149192126(&local_168,local_160,0);
      memcpy(local_168,pvVar1,lVar36 * 2);
      auVar31 = _DAT_149931e80;
      if ((longlong)local_160 != 0) {
        uVar32 = (longlong)local_160 + 0x7fffffffffffffff;
        uVar33 = uVar32 & 0x7fffffffffffffff;
        auVar38._8_4_ = (int)uVar33;
        auVar38._0_8_ = uVar33;
        auVar38._12_4_ = (int)(uVar33 >> 0x20);
        lVar36 = 0;
        auVar37 = pmovsxbq(in_XMM1,0xf0e);
        auVar39 = pmovsxbq(in_XMM2,0xd0c);
        auVar40 = pmovsxbq(in_XMM3,0xb0a);
        auVar41 = pmovsxbq(in_XMM4,0x908);
        auVar42 = pmovsxbq(in_XMM5,0x706);
        auVar43 = pmovsxbq(unaff_XMM6,0x504);
        auVar44 = pmovsxbq(unaff_XMM7,0x302);
        auVar45 = pmovsxbq(unaff_XMM8,0x100);
        do {
          auVar46._8_4_ = (int)lVar36;
          auVar46._0_8_ = lVar36;
          auVar46._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
          auVar60 = auVar38 | auVar31;
          auVar52 = (auVar46 | auVar45) ^ auVar31;
          lVar49 = auVar60._0_8_;
          auVar53._0_8_ = -(ulonglong)(lVar49 < auVar52._0_8_);
          lVar51 = auVar60._8_8_;
          auVar53._8_8_ = -(ulonglong)(lVar51 < auVar52._8_8_);
          auVar52 = pshuflw(unaff_XMM14,auVar53,0xe8);
          auVar15._8_4_ = 0xffffffff;
          auVar15._0_8_ = 0xffffffffffffffff;
          auVar15._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar15,auVar52 ^ auVar15);
          if ((auVar52._0_4_ & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 1) = 0;
          }
          auVar50 = packssdw(auVar53,auVar53);
          auVar16._8_4_ = 0xffffffff;
          auVar16._0_8_ = 0xffffffffffffffff;
          auVar16._12_4_ = 0xffffffff;
          auVar50 = packssdw(auVar50 ^ auVar16,auVar50 ^ auVar16);
          auVar50 = packsswb(auVar50,auVar50);
          if ((auVar50[1] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 3) = 0;
          }
          auVar50 = (auVar46 | auVar44) ^ auVar31;
          auVar54._0_8_ = -(ulonglong)(lVar49 < auVar50._0_8_);
          auVar54._8_8_ = -(ulonglong)(lVar51 < auVar50._8_8_);
          auVar52 = packssdw(auVar52,auVar54);
          auVar17._8_4_ = 0xffffffff;
          auVar17._0_8_ = 0xffffffffffffffff;
          auVar17._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar17,auVar52 ^ auVar17);
          auVar52 = packsswb(auVar52,auVar52);
          if ((auVar52[2] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 5) = 0;
          }
          auVar50 = pshufhw(auVar54,auVar54,0x84);
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xffffffffffffffff;
          auVar18._12_4_ = 0xffffffff;
          auVar50 = packssdw(auVar50 ^ auVar18,auVar50 ^ auVar18);
          auVar50 = packsswb(auVar50,auVar50);
          if ((auVar50[3] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 7) = 0;
          }
          auVar50 = (auVar46 | auVar43) ^ auVar31;
          auVar55._0_8_ = -(ulonglong)(lVar49 < auVar50._0_8_);
          auVar55._8_8_ = -(ulonglong)(lVar51 < auVar50._8_8_);
          auVar52 = pshuflw(auVar52,auVar55,0xe8);
          auVar19._8_4_ = 0xffffffff;
          auVar19._0_8_ = 0xffffffffffffffff;
          auVar19._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar19,auVar52 ^ auVar19);
          auVar52 = packsswb(auVar52,auVar52);
          if ((auVar52[4] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 9) = 0;
          }
          auVar50 = packssdw(auVar55,auVar55);
          auVar20._8_4_ = 0xffffffff;
          auVar20._0_8_ = 0xffffffffffffffff;
          auVar20._12_4_ = 0xffffffff;
          auVar50 = packssdw(auVar50 ^ auVar20,auVar50 ^ auVar20);
          auVar50 = packsswb(auVar50,auVar50);
          if ((auVar50[5] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0xb) = 0;
          }
          auVar50 = (auVar46 | auVar42) ^ auVar31;
          auVar56._0_8_ = -(ulonglong)(lVar49 < auVar50._0_8_);
          auVar56._8_8_ = -(ulonglong)(lVar51 < auVar50._8_8_);
          auVar52 = packssdw(auVar52,auVar56);
          auVar21._8_4_ = 0xffffffff;
          auVar21._0_8_ = 0xffffffffffffffff;
          auVar21._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar21,auVar52 ^ auVar21);
          auVar52 = packsswb(auVar52,auVar52);
          if ((auVar52[6] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0xd) = 0;
          }
          auVar50 = pshufhw(auVar56,auVar56,0x84);
          auVar22._8_4_ = 0xffffffff;
          auVar22._0_8_ = 0xffffffffffffffff;
          auVar22._12_4_ = 0xffffffff;
          auVar50 = packssdw(auVar50 ^ auVar22,auVar50 ^ auVar22);
          auVar50 = packsswb(auVar50,auVar50);
          if ((auVar50[7] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0xf) = 0;
          }
          auVar50 = (auVar46 | auVar41) ^ auVar31;
          auVar57._0_8_ = -(ulonglong)(lVar49 < auVar50._0_8_);
          auVar57._8_8_ = -(ulonglong)(lVar51 < auVar50._8_8_);
          auVar52 = pshuflw(auVar52,auVar57,0xe8);
          auVar23._8_4_ = 0xffffffff;
          auVar23._0_8_ = 0xffffffffffffffff;
          auVar23._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar23,auVar52 ^ auVar23);
          auVar52 = packsswb(auVar52,auVar52);
          if ((auVar52[8] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x11) = 0;
          }
          auVar50 = packssdw(auVar57,auVar57);
          auVar24._8_4_ = 0xffffffff;
          auVar24._0_8_ = 0xffffffffffffffff;
          auVar24._12_4_ = 0xffffffff;
          auVar50 = packssdw(auVar50 ^ auVar24,auVar50 ^ auVar24);
          auVar50 = packsswb(auVar50,auVar50);
          if ((auVar50[9] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x13) = 0;
          }
          auVar50 = (auVar46 | auVar40) ^ auVar31;
          auVar58._0_8_ = -(ulonglong)(lVar49 < auVar50._0_8_);
          auVar58._8_8_ = -(ulonglong)(lVar51 < auVar50._8_8_);
          auVar52 = packssdw(auVar52,auVar58);
          auVar25._8_4_ = 0xffffffff;
          auVar25._0_8_ = 0xffffffffffffffff;
          auVar25._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar25,auVar52 ^ auVar25);
          auVar52 = packsswb(auVar52,auVar52);
          if ((auVar52[10] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x15) = 0;
          }
          auVar50 = pshufhw(auVar58,auVar58,0x84);
          auVar26._8_4_ = 0xffffffff;
          auVar26._0_8_ = 0xffffffffffffffff;
          auVar26._12_4_ = 0xffffffff;
          auVar50 = packssdw(auVar50 ^ auVar26,auVar50 ^ auVar26);
          auVar50 = packsswb(auVar50,auVar50);
          if ((auVar50[0xb] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x17) = 0;
          }
          auVar50 = (auVar46 | auVar39) ^ auVar31;
          auVar59._0_8_ = -(ulonglong)(lVar49 < auVar50._0_8_);
          auVar59._8_8_ = -(ulonglong)(lVar51 < auVar50._8_8_);
          auVar52 = pshuflw(auVar52,auVar59,0xe8);
          auVar27._8_4_ = 0xffffffff;
          auVar27._0_8_ = 0xffffffffffffffff;
          auVar27._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar27,auVar52 ^ auVar27);
          unaff_XMM14 = packsswb(auVar52,auVar52);
          if ((unaff_XMM14[0xc] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x19) = 0;
          }
          auVar52 = packssdw(auVar59,auVar59);
          auVar28._8_4_ = 0xffffffff;
          auVar28._0_8_ = 0xffffffffffffffff;
          auVar28._12_4_ = 0xffffffff;
          auVar52 = packssdw(auVar52 ^ auVar28,auVar52 ^ auVar28);
          auVar52 = packsswb(auVar52,auVar52);
          if ((auVar52[0xd] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x1b) = 0;
          }
          auVar52 = (auVar46 | auVar37) ^ auVar31;
          auVar47._0_8_ = -(ulonglong)(lVar49 < auVar52._0_8_);
          auVar47._8_8_ = -(ulonglong)(lVar51 < auVar52._8_8_);
          auVar60 = packssdw(auVar60,auVar47);
          auVar29._8_4_ = 0xffffffff;
          auVar29._0_8_ = 0xffffffffffffffff;
          auVar29._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar29,auVar60 ^ auVar29);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[0xe] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x1d) = 0;
          }
          auVar60 = pshufhw(auVar47,auVar47,0x84);
          auVar30._8_4_ = 0xffffffff;
          auVar30._0_8_ = 0xffffffffffffffff;
          auVar30._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar30,auVar60 ^ auVar30);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[0xf] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x1f) = 0;
          }
          lVar36 = lVar36 + 0x10;
        } while ((uVar33 - ((uint)uVar32 & 0xf)) + 0x10 != lVar36);
      }
    }
    local_1e8 = (void *)(param_2 + 0x2b8);
    FUN_1491c1c06(local_1e8,&local_168,*(undefined1 *)(param_2 + 0x211),(void *)(param_2 + 0x234));
    goto LAB_1444a62f3;
  case 3:
    memcpy((void *)(param_2 + 0x2b8),param_3,0x84);
    local_168 = (void *)0x0;
    local_160 = *(int *)(param_2 + 0x228);
    lVar36 = (longlong)local_160;
    pvVar1 = *(void **)(param_2 + 0x220);
    if (lVar36 == 0) {
      local_15c = 0;
    }
    else {
      FUN_149192126(&local_168,local_160,0);
      memcpy(local_168,pvVar1,lVar36 * 2);
      auVar31 = _DAT_149931e80;
      if ((longlong)local_160 != 0) {
        uVar32 = (longlong)local_160 + 0x7fffffffffffffff;
        uVar33 = uVar32 & 0x7fffffffffffffff;
        auVar37._8_4_ = (int)uVar33;
        auVar37._0_8_ = uVar33;
        auVar37._12_4_ = (int)(uVar33 >> 0x20);
        lVar36 = 0;
        auVar38 = pmovsxbq(in_XMM1,0xf0e);
        auVar39 = pmovsxbq(in_XMM2,0xd0c);
        auVar40 = pmovsxbq(in_XMM3,0xb0a);
        auVar41 = pmovsxbq(in_XMM4,0x908);
        auVar42 = pmovsxbq(in_XMM5,0x706);
        auVar43 = pmovsxbq(unaff_XMM6,0x504);
        auVar44 = pmovsxbq(unaff_XMM7,0x302);
        auVar45 = pmovsxbq(unaff_XMM8,0x100);
        do {
          auVar52._8_4_ = (int)lVar36;
          auVar52._0_8_ = lVar36;
          auVar52._12_4_ = (int)((ulonglong)lVar36 >> 0x20);
          auVar50 = auVar37 | auVar31;
          auVar60 = (auVar52 | auVar45) ^ auVar31;
          lVar49 = auVar50._0_8_;
          auVar61._0_8_ = -(ulonglong)(lVar49 < auVar60._0_8_);
          lVar51 = auVar50._8_8_;
          auVar61._8_8_ = -(ulonglong)(lVar51 < auVar60._8_8_);
          auVar68 = pshuflw(unaff_XMM14,auVar61,0xe8);
          auVar60._8_4_ = 0xffffffff;
          auVar60._0_8_ = 0xffffffffffffffff;
          auVar60._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar68 ^ auVar60,auVar68 ^ auVar60);
          if ((auVar60._0_4_ & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2) = 0;
          }
          auVar61 = packssdw(auVar61,auVar61);
          auVar68._8_4_ = 0xffffffff;
          auVar68._0_8_ = 0xffffffffffffffff;
          auVar68._12_4_ = 0xffffffff;
          auVar61 = packssdw(auVar61 ^ auVar68,auVar61 ^ auVar68);
          auVar61 = packsswb(auVar61,auVar61);
          if ((auVar61[1] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 2) = 0;
          }
          auVar61 = (auVar52 | auVar44) ^ auVar31;
          auVar62._0_8_ = -(ulonglong)(lVar49 < auVar61._0_8_);
          auVar62._8_8_ = -(ulonglong)(lVar51 < auVar61._8_8_);
          auVar60 = packssdw(auVar60,auVar62);
          auVar2._8_4_ = 0xffffffff;
          auVar2._0_8_ = 0xffffffffffffffff;
          auVar2._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar2,auVar60 ^ auVar2);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[2] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 4) = 0;
          }
          auVar61 = pshufhw(auVar62,auVar62,0x84);
          auVar3._8_4_ = 0xffffffff;
          auVar3._0_8_ = 0xffffffffffffffff;
          auVar3._12_4_ = 0xffffffff;
          auVar61 = packssdw(auVar61 ^ auVar3,auVar61 ^ auVar3);
          auVar61 = packsswb(auVar61,auVar61);
          if ((auVar61[3] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 6) = 0;
          }
          auVar61 = (auVar52 | auVar43) ^ auVar31;
          auVar63._0_8_ = -(ulonglong)(lVar49 < auVar61._0_8_);
          auVar63._8_8_ = -(ulonglong)(lVar51 < auVar61._8_8_);
          auVar60 = pshuflw(auVar60,auVar63,0xe8);
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar4,auVar60 ^ auVar4);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[4] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 8) = 0;
          }
          auVar61 = packssdw(auVar63,auVar63);
          auVar5._8_4_ = 0xffffffff;
          auVar5._0_8_ = 0xffffffffffffffff;
          auVar5._12_4_ = 0xffffffff;
          auVar61 = packssdw(auVar61 ^ auVar5,auVar61 ^ auVar5);
          auVar61 = packsswb(auVar61,auVar61);
          if ((auVar61[5] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 10) = 0;
          }
          auVar61 = (auVar52 | auVar42) ^ auVar31;
          auVar64._0_8_ = -(ulonglong)(lVar49 < auVar61._0_8_);
          auVar64._8_8_ = -(ulonglong)(lVar51 < auVar61._8_8_);
          auVar60 = packssdw(auVar60,auVar64);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar6,auVar60 ^ auVar6);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[6] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0xc) = 0;
          }
          auVar61 = pshufhw(auVar64,auVar64,0x84);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          auVar61 = packssdw(auVar61 ^ auVar7,auVar61 ^ auVar7);
          auVar61 = packsswb(auVar61,auVar61);
          if ((auVar61[7] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0xe) = 0;
          }
          auVar61 = (auVar52 | auVar41) ^ auVar31;
          auVar65._0_8_ = -(ulonglong)(lVar49 < auVar61._0_8_);
          auVar65._8_8_ = -(ulonglong)(lVar51 < auVar61._8_8_);
          auVar60 = pshuflw(auVar60,auVar65,0xe8);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar8._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar8,auVar60 ^ auVar8);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[8] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x10) = 0;
          }
          auVar61 = packssdw(auVar65,auVar65);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar9._12_4_ = 0xffffffff;
          auVar61 = packssdw(auVar61 ^ auVar9,auVar61 ^ auVar9);
          auVar61 = packsswb(auVar61,auVar61);
          if ((auVar61[9] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x12) = 0;
          }
          auVar61 = (auVar52 | auVar40) ^ auVar31;
          auVar66._0_8_ = -(ulonglong)(lVar49 < auVar61._0_8_);
          auVar66._8_8_ = -(ulonglong)(lVar51 < auVar61._8_8_);
          auVar60 = packssdw(auVar60,auVar66);
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0xffffffffffffffff;
          auVar10._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar10,auVar60 ^ auVar10);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[10] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x14) = 0;
          }
          auVar61 = pshufhw(auVar66,auVar66,0x84);
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = 0xffffffffffffffff;
          auVar11._12_4_ = 0xffffffff;
          auVar61 = packssdw(auVar61 ^ auVar11,auVar61 ^ auVar11);
          auVar61 = packsswb(auVar61,auVar61);
          if ((auVar61[0xb] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x16) = 0;
          }
          auVar61 = (auVar52 | auVar39) ^ auVar31;
          auVar67._0_8_ = -(ulonglong)(lVar49 < auVar61._0_8_);
          auVar67._8_8_ = -(ulonglong)(lVar51 < auVar61._8_8_);
          auVar60 = pshuflw(auVar60,auVar67,0xe8);
          auVar12._8_4_ = 0xffffffff;
          auVar12._0_8_ = 0xffffffffffffffff;
          auVar12._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar12,auVar60 ^ auVar12);
          unaff_XMM14 = packsswb(auVar60,auVar60);
          if ((unaff_XMM14[0xc] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x18) = 0;
          }
          auVar60 = packssdw(auVar67,auVar67);
          auVar13._8_4_ = 0xffffffff;
          auVar13._0_8_ = 0xffffffffffffffff;
          auVar13._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar13,auVar60 ^ auVar13);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[0xd] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x1a) = 0;
          }
          auVar60 = (auVar52 | auVar38) ^ auVar31;
          auVar48._0_8_ = -(ulonglong)(lVar49 < auVar60._0_8_);
          auVar48._8_8_ = -(ulonglong)(lVar51 < auVar60._8_8_);
          auVar60 = packssdw(auVar50,auVar48);
          auVar50._8_4_ = 0xffffffff;
          auVar50._0_8_ = 0xffffffffffffffff;
          auVar50._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar50,auVar60 ^ auVar50);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[0xe] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x1c) = 0;
          }
          auVar60 = pshufhw(auVar48,auVar48,0x84);
          auVar14._8_4_ = 0xffffffff;
          auVar14._0_8_ = 0xffffffffffffffff;
          auVar14._12_4_ = 0xffffffff;
          auVar60 = packssdw(auVar60 ^ auVar14,auVar60 ^ auVar14);
          auVar60 = packsswb(auVar60,auVar60);
          if ((auVar60[0xf] & 1) != 0) {
            *(undefined1 *)((longlong)local_168 + lVar36 * 2 + 0x1e) = 0;
          }
          lVar36 = lVar36 + 0x10;
        } while ((uVar33 - ((uint)uVar32 & 0xf)) + 0x10 != lVar36);
      }
    }
    local_1e8 = (void *)(param_2 + 0x2b8);
    FUN_1491c1c06(param_2 + 0x234,&local_168,*(undefined1 *)(param_2 + 0x211),param_2 + 0x234);
LAB_1444a62f3:
    if (local_168 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_140ad4746(param_1,7,param_2);
  default:
    goto switchD_1444a58dc_default;
  }
  local_1d0 = param_7;
  local_1d8 = param_6;
  local_1e0 = 0;
  local_1e8 = (void *)CONCAT71(local_1e8._1_7_,1);
  FUN_140122d4e(param_1,param_2,local_1c8,uVar34);
  if (param_8 != '\0') {
    FUN_1491dece6(param_1,param_2,&local_168,&local_e1);
  }
  *(undefined1 *)(param_1 + 0x52c) = uVar35;
switchD_1444a58dc_default:
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444a6330 FUN_1444a6330 body=276 status=ok
// SIG undefined FUN_1444a6330(void)

void FUN_1444a6330(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x48);
    FUN_149189a2a(local_68,puVar1);
    if (((param_5 != '\0') || (cVar3 = FUN_1491defce(local_68,param_3), cVar3 == '\0')) &&
       ((*(char *)(param_3 + 2) != '\0' || (*(char *)((longlong)param_3 + 0x11) == '\0')))) {
      if (puVar1 != param_3) {
        iVar2 = *(int *)(param_3 + 1);
        _Src = (void *)*param_3;
        *(int *)(param_2 + 0x50) = iVar2;
        if (iVar2 == 0 && *(int *)(param_2 + 0x54) == 0) {
          *(undefined4 *)(param_2 + 0x54) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      *(undefined2 *)(param_2 + 0x58) = *(undefined2 *)(param_3 + 2);
      FUN_1491bf11c(param_2 + 0x60,param_3 + 3);
      FUN_140ad4746(param_1,0xf,param_2);
    }
    FUN_149189aca(local_68);
  }
  FUN_149189aca(param_3);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a6446 FUN_1444a6446 body=291 status=ok
// SIG undefined FUN_1444a6446(void)

ulonglong FUN_1444a6446(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = 0xffffffff;
  if (param_2 != 0) {
    lVar1 = FUN_140813120();
    if (lVar1 == 0) {
      local_58 = 0;
      local_48 = &PTR_LAB_14bb8a260;
      local_68 = FUN_1492032ca;
      local_40 = param_1;
      FUN_1491db3fa(param_1);
      uVar4 = 0xffffffff;
      if ((longlong)local_70 != 0) {
        lVar1 = (longlong)local_70 << 3;
        uVar3 = 0;
        do {
          if (*(longlong *)(local_78 + uVar3 * 8) == param_2) {
            uVar4 = uVar3 & 0xffffffff;
            break;
          }
          uVar3 = uVar3 + 1;
          lVar1 = lVar1 + -8;
        } while (lVar1 != 0);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
        FUN_1415169c8(param_1);
      }
      lVar1 = (longlong)*(int *)(lVar1 + 0x30);
      if (lVar1 != -1) {
        lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x288) + 4 + lVar1 * 8);
        if (lVar2 != 0) {
          lVar2 = lVar2 << 3;
          uVar3 = 0;
          do {
            if (*(longlong *)
                 ((longlong)*(int *)(*(longlong *)(param_1 + 0x288) + lVar1 * 8) * 8 +
                  *(longlong *)(param_1 + 0x298) + uVar3 * 8) == param_2) {
              uVar4 = uVar3 & 0xffffffff;
              break;
            }
            uVar3 = uVar3 + 1;
            lVar2 = lVar2 + -8;
          } while (lVar2 != 0);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1444a656a FUN_1444a656a body=49 status=ok
// SIG undefined FUN_1444a656a(void)

void FUN_1444a656a(void)

{
  FUN_1447a1747(DAT_14cc077f0,DAT_14cc077f8);
  if (DAT_14cc077f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444a659c FUN_1444a659c body=121 status=ok
// SIG undefined FUN_1444a659c(void)

bool FUN_1444a659c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 != 0) && (*(byte *)(param_2 + 0x210) < 2)) && (*(char *)(param_2 + 0x3a8) == '\x01')
     ) {
    if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0xa8)) {
      FUN_1415169c8(param_1);
    }
    if ((((longlong)*(int *)(param_2 + 0x30) == -1) ||
        (*(int *)(*(longlong *)(param_1 + 0x288) + 4 + (longlong)*(int *)(param_2 + 0x30) * 8) == 0)
        ) && ((lVar1 = FUN_140813120(), lVar1 != 0 && (*(char *)(lVar1 + 0x10) == '\x04')))) {
      return *(char *)(lVar1 + 0x210) == '\0';
    }
  }
  return false;
}



// FUNCTION 1444a6616 FUN_1444a6616 body=4399 status=ok
// SIG undefined FUN_1444a6616(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1444a6616(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4,undefined4 param_5
             ,double *param_6,char param_7,double *param_8,char param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar8;
  double *pdVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auVar16 [16];
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar27 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auStack_338 [32];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8 [2];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
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
  undefined1 local_238 [16];
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
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
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
  double local_e8;
  ulonglong local_d0;
  double *pdVar7;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar4 = *(longlong *)(param_3 + 0x90);
  if (*(longlong *)(param_3 + 0x90) == 0) {
    lVar4 = param_3;
  }
  puVar8 = (undefined8 *)(lVar4 + (longlong)param_4 * 0x90);
  if (*(char *)(lVar4 + 0x80 + (longlong)param_4 * 0x90) == '\x01') {
    pdVar7 = local_2d8;
    FUN_1401571e4(param_1,pdVar7,*puVar8,param_5);
    uVar5 = SUB84(pdVar7,0);
    iVar3 = (int)param_1;
    if (param_7 != '\0') {
      dVar20 = local_298._0_8_;
      dVar43 = local_298._8_8_;
      auVar31._8_8_ = dStack_280;
      auVar31._0_8_ = local_288;
      auVar25 = *(undefined1 (*) [16])(param_6 + 8);
      dVar19 = auVar25._0_8_;
      dVar17 = auVar25._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_6 + 10);
      dVar37 = auVar12._0_8_;
      auVar25 = minpd(auVar25,local_298);
      auVar31 = minpd(auVar12,auVar31);
      auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
      iVar3 = movmskpd(iVar3,auVar26);
      auVar25._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar25._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      uVar6 = movmskpd(uVar5,auVar25);
      if ((uVar6 & 0x3fffffff) == 0 && iVar3 == 0) {
        dVar30 = *param_6;
        dVar44 = param_6[1];
        dVar39 = param_6[2];
        dVar28 = param_6[3];
        dVar24 = dVar44 * (double)local_2c8._0_8_ * -1.0 +
                 dVar39 * local_2d8[1] +
                 dVar28 * local_2d8[0] * 1.0 + dVar30 * (double)local_2c8._8_8_;
        dVar29 = dVar30 * (double)local_2c8._0_8_ * 1.0 +
                 dVar28 * local_2d8[1] +
                 dVar39 * local_2d8[0] * -1.0 + dVar44 * (double)local_2c8._8_8_;
        auVar47._0_8_ =
             dVar28 * (double)local_2c8._0_8_ * 1.0 +
             ((local_2d8[0] * dVar44 * 1.0 + dVar39 * (double)local_2c8._8_8_) -
             dVar30 * local_2d8[1]);
        auVar47._8_8_ =
             dVar39 * (double)local_2c8._0_8_ * -1.0 +
             ((local_2d8[0] * dVar30 * -1.0 + dVar28 * (double)local_2c8._8_8_) -
             dVar44 * local_2d8[1]);
        dVar39 = param_6[4] * dVar20;
        dVar40 = param_6[5] * dVar43;
        dVar38 = param_6[6] * local_288;
        dVar41 = param_6[7] * dStack_280;
        dVar30 = dVar40 * local_2d8[0] - local_2d8[1] * dVar39;
        dVar44 = dVar38 * local_2d8[1] - (double)local_2c8._0_8_ * dVar40;
        dVar28 = dVar39 * (double)local_2c8._0_8_ - local_2d8[0] * dVar38;
        dVar35 = dVar41 * (double)local_2c8._8_8_ - (double)local_2c8._8_8_ * dVar41;
        dVar44 = dVar44 + dVar44;
        dVar28 = dVar28 + dVar28;
        dVar30 = dVar30 + dVar30;
        dVar35 = dVar35 + dVar35;
        dVar39 = (dVar30 * local_2d8[1] - (double)local_2c8._0_8_ * dVar28) +
                 (double)local_2c8._8_8_ * dVar44 + dVar39 + (double)local_2b8._0_8_;
        dVar40 = (dVar44 * (double)local_2c8._0_8_ - dVar30 * local_2d8[0]) +
                 (double)local_2c8._8_8_ * dVar28 + dVar40 + (double)local_2b8._8_8_;
        dVar30 = (dVar28 * local_2d8[0] - local_2d8[1] * dVar44) +
                 (double)local_2c8._8_8_ * dVar30 + dVar38 + (double)local_2a8._0_8_;
        dVar44 = (dVar35 * (double)local_2c8._8_8_ - dVar35 * (double)local_2c8._8_8_) +
                 (double)local_2c8._8_8_ * dVar35 + dVar41 + (double)local_2a8._8_8_;
        dVar19 = dVar19 * dVar20;
        dVar17 = dVar17 * dVar43;
        local_318 = dVar37 * local_288;
        dStack_310 = auVar12._8_8_ * dStack_280;
        uVar5 = 0;
      }
      else {
        dVar28 = local_2d8[1] + local_2d8[1];
        dVar30 = (double)local_2c8._0_8_ + (double)local_2c8._0_8_;
        dVar39 = local_2d8[0] * (local_2d8[0] + local_2d8[0]);
        local_188 = (1.0 - (dVar39 + local_2d8[1] * dVar28)) * local_288;
        dVar44 = (local_2d8[0] + local_2d8[0]) * (double)local_2c8._8_8_;
        local_198 = (dVar28 * (double)local_2c8._8_8_ + local_2d8[0] * dVar30) * local_288;
        local_318 = local_288 * dVar37;
        dStack_310 = dStack_280 * auVar12._8_8_;
        dStack_190 = (dVar30 * local_2d8[1] - dVar44) * local_288;
        local_1d8 = (1.0 - ((double)local_2c8._0_8_ * dVar30 + local_2d8[1] * dVar28)) * dVar20;
        dVar39 = (1.0 - ((double)local_2c8._0_8_ * dVar30 + dVar39)) * dVar43;
        dStack_1d0 = (dVar28 * local_2d8[0] + dVar30 * (double)local_2c8._8_8_) * dVar20;
        local_1a8 = (dVar30 * local_2d8[1] + dVar44) * dVar43;
        local_1c8 = (local_2d8[0] * dVar30 - dVar28 * (double)local_2c8._8_8_) * dVar20;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar39,0);
        local_1b8._0_8_ = (dVar28 * local_2d8[0] - dVar30 * (double)local_2c8._8_8_) * dVar43;
        local_1b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = (double)local_2b8._0_8_;
        dStack_170 = (double)local_2b8._8_8_;
        local_168 = (double)local_2a8._0_8_;
        uStack_160 = 0x3ff0000000000000;
        dVar40 = *param_6;
        dVar24 = param_6[1];
        dVar29 = param_6[2];
        dVar35 = dVar24 + dVar24;
        dVar44 = dVar29 + dVar29;
        dVar38 = dVar40 * (dVar40 + dVar40);
        local_208 = (1.0 - (dVar38 + dVar24 * dVar35)) * dVar37;
        dVar30 = param_6[3];
        dVar39 = dVar44 * dVar30;
        dVar28 = (dVar40 + dVar40) * param_6[3];
        dVar30 = dVar35 * dVar30;
        local_218 = (dVar30 + *param_6 * dVar44) * dVar37;
        dStack_210 = (dVar44 * dVar24 - dVar28) * dVar37;
        local_2f8 = dVar20 * dVar19;
        dStack_2f0 = dVar43 * dVar17;
        local_258 = (1.0 - (dVar29 * dVar44 + dVar24 * dVar35)) * dVar19;
        dVar20 = (1.0 - (dVar29 * dVar44 + dVar38)) * dVar17;
        dStack_250 = (dVar35 * dVar40 + dVar39) * dVar19;
        local_228 = (dVar44 * dVar24 + dVar28) * dVar17;
        local_248 = (*param_6 * dVar44 - dVar30) * dVar19;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar20,0);
        local_238._0_8_ = (dVar35 * dVar40 - dVar39) * dVar17;
        local_238._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = param_6[4];
        dStack_1f0 = param_6[5];
        local_1e8 = param_6[6];
        uStack_1e0 = 0x3ff0000000000000;
        pdVar7 = &local_158;
        FUN_1447fea8d(pdVar7);
        dVar17 = dStack_2f0;
        dVar19 = local_2f8;
        local_308 = local_148;
        dVar37 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar43 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        dVar20 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
        uVar11 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
        dVar37 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar11);
        uVar11 = -(ulonglong)(0.0 <= dVar43 + -9.99999993922529e-09);
        dVar43 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar43)) & uVar11);
        uVar11 = -(ulonglong)(0.0 <= dVar20 + -9.99999993922529e-09);
        dVar20 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar20)) & uVar11);
        auVar12._8_8_ = -(ulonglong)(0.0 <= dStack_2f0);
        auVar12._0_8_ = -(ulonglong)(0.0 <= local_2f8);
        auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar12);
        dVar30 = (double)(~-(ulonglong)(0.0 <= local_318) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_318) & 0x3ff0000000000000);
        dVar44 = auVar25._0_8_;
        local_158 = local_158 * dVar37 * dVar44;
        local_150 = local_150 * dVar37 * dVar44;
        local_148 = dVar37 * local_148 * dVar44;
        dVar37 = auVar25._8_8_;
        local_128 = dVar43 * local_128 * dVar37;
        local_130 = local_130 * dVar43 * dVar37;
        local_138 = dVar37 * local_138 * dVar43;
        local_108 = dVar20 * local_108 * dVar30;
        local_110 = local_110 * dVar20 * dVar30;
        local_118 = dVar30 * local_118 * dVar20;
        iVar3 = (int)&local_278;
        FUN_14481fd10();
        uVar5 = SUB84(pdVar7,0);
        dVar20 = local_268 * local_268 + local_278 * local_278;
        dVar37 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar21._0_8_ = dVar20 + dVar37;
        auVar21._8_8_ = dVar20 + dVar37;
        auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
        auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
        auVar25 = sqrtpd(auVar21,auVar21);
        auVar25 = divpd(_DAT_149934d80,auVar25);
        auVar32._0_8_ = auVar25._0_8_ * local_268;
        auVar32._8_8_ = auVar25._8_8_ * dStack_260;
        dVar24 = (double)((ulonglong)(local_278 * auVar25._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
        dVar29 = (double)((ulonglong)(dStack_270 * auVar25._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
        auVar47 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar13);
        dVar44 = 0.0;
        dVar39 = local_f8;
        dVar40 = dStack_f0;
        dVar30 = local_e8;
      }
      local_2b8._8_4_ = SUB84(dVar40,0);
      local_2b8._0_8_ = dVar39;
      local_2b8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      local_2a8._8_4_ = SUB84(dVar44,0);
      local_2a8._0_8_ = dVar30;
      local_2a8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      local_298._8_4_ = SUB84(dVar17,0);
      local_298._0_8_ = dVar19;
      local_298._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_288 = local_318;
      dStack_280 = dStack_310;
      local_2d8[0] = dVar24;
      local_2d8[1] = dVar29;
      local_2c8 = auVar47;
    }
    if (param_9 != '\0') {
      dVar20 = local_298._0_8_;
      dVar43 = local_298._8_8_;
      auVar2._8_8_ = dStack_280;
      auVar2._0_8_ = local_288;
      auVar25 = *(undefined1 (*) [16])(param_8 + 8);
      dVar19 = auVar25._0_8_;
      dVar17 = auVar25._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_8 + 10);
      dVar37 = auVar12._0_8_;
      auVar25 = minpd(auVar25,local_298);
      auVar31 = minpd(auVar12,auVar2);
      auVar27._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
      iVar3 = movmskpd(iVar3,auVar27);
      auVar33._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar33._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      uVar6 = movmskpd(uVar5,auVar33);
      if ((uVar6 & 0x3fffffff) == 0 && iVar3 == 0) {
        dVar28 = *param_8;
        dVar40 = param_8[1];
        dVar24 = param_8[2];
        dVar29 = param_8[3];
        dVar45 = dVar24 * local_2d8[0];
        auVar36._0_8_ =
             dVar29 * (double)local_2c8._0_8_ * 1.0 +
             ((local_2d8[0] * dVar40 * 1.0 + dVar24 * (double)local_2c8._8_8_) -
             dVar28 * local_2d8[1]);
        auVar36._8_8_ =
             dVar24 * (double)local_2c8._0_8_ * -1.0 +
             ((local_2d8[0] * dVar28 * -1.0 + dVar29 * (double)local_2c8._8_8_) -
             dVar40 * local_2d8[1]);
        dVar35 = param_8[4] * dVar20;
        dVar38 = param_8[5] * dVar43;
        dVar41 = param_8[6] * local_288;
        dVar42 = param_8[7] * dStack_280;
        dVar30 = dVar38 * local_2d8[0] - local_2d8[1] * dVar35;
        dVar44 = dVar41 * local_2d8[1] - (double)local_2c8._0_8_ * dVar38;
        dVar39 = dVar35 * (double)local_2c8._0_8_ - local_2d8[0] * dVar41;
        dVar46 = dVar42 * (double)local_2c8._8_8_ - (double)local_2c8._8_8_ * dVar42;
        dVar44 = dVar44 + dVar44;
        dVar39 = dVar39 + dVar39;
        dVar30 = dVar30 + dVar30;
        dVar46 = dVar46 + dVar46;
        local_f8 = (dVar30 * local_2d8[1] - (double)local_2c8._0_8_ * dVar39) +
                   (double)local_2c8._8_8_ * dVar44 + dVar35 + (double)local_2b8._0_8_;
        dStack_f0 = (dVar44 * (double)local_2c8._0_8_ - dVar30 * local_2d8[0]) +
                    (double)local_2c8._8_8_ * dVar39 + dVar38 + (double)local_2b8._8_8_;
        local_e8 = (dVar39 * local_2d8[0] - local_2d8[1] * dVar44) +
                   (double)local_2c8._8_8_ * dVar30 + dVar41 + (double)local_2a8._0_8_;
        dVar30 = (dVar46 * (double)local_2c8._8_8_ - dVar46 * (double)local_2c8._8_8_) +
                 (double)local_2c8._8_8_ * dVar46 + dVar42 + (double)local_2a8._8_8_;
        dVar19 = dVar19 * dVar20;
        dVar17 = dVar17 * dVar43;
        dVar37 = dVar37 * local_288;
        dVar20 = auVar12._8_8_ * dStack_280;
        local_2d8[0] = dVar40 * (double)local_2c8._0_8_ * -1.0 +
                       dVar24 * local_2d8[1] +
                       dVar29 * local_2d8[0] * 1.0 + dVar28 * (double)local_2c8._8_8_;
        local_2d8[1] = dVar28 * (double)local_2c8._0_8_ * 1.0 +
                       dVar29 * local_2d8[1] + dVar45 * -1.0 + dVar40 * (double)local_2c8._8_8_;
      }
      else {
        dVar28 = local_2d8[1] + local_2d8[1];
        dVar30 = (double)local_2c8._0_8_ + (double)local_2c8._0_8_;
        dVar39 = local_2d8[0] * (local_2d8[0] + local_2d8[0]);
        local_188 = (1.0 - (dVar39 + local_2d8[1] * dVar28)) * local_288;
        dVar44 = (local_2d8[0] + local_2d8[0]) * (double)local_2c8._8_8_;
        local_198 = (dVar28 * (double)local_2c8._8_8_ + local_2d8[0] * dVar30) * local_288;
        local_2f8 = local_288 * dVar37;
        dStack_2f0 = dStack_280 * auVar12._8_8_;
        dStack_190 = (dVar30 * local_2d8[1] - dVar44) * local_288;
        local_1d8 = (1.0 - ((double)local_2c8._0_8_ * dVar30 + local_2d8[1] * dVar28)) * dVar20;
        dVar39 = (1.0 - ((double)local_2c8._0_8_ * dVar30 + dVar39)) * dVar43;
        dStack_1d0 = (dVar28 * local_2d8[0] + dVar30 * (double)local_2c8._8_8_) * dVar20;
        local_1a8 = (dVar30 * local_2d8[1] + dVar44) * dVar43;
        local_1c8 = (local_2d8[0] * dVar30 - dVar28 * (double)local_2c8._8_8_) * dVar20;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar39,0);
        local_1b8._0_8_ = (dVar28 * local_2d8[0] - dVar30 * (double)local_2c8._8_8_) * dVar43;
        local_1b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = (double)local_2b8._0_8_;
        dStack_170 = (double)local_2b8._8_8_;
        local_168 = (double)local_2a8._0_8_;
        uStack_160 = 0x3ff0000000000000;
        dVar40 = *param_8;
        dVar24 = param_8[1];
        dVar29 = param_8[2];
        dVar35 = dVar24 + dVar24;
        dVar44 = dVar29 + dVar29;
        dVar38 = dVar40 * (dVar40 + dVar40);
        local_208 = (1.0 - (dVar38 + dVar24 * dVar35)) * dVar37;
        dVar30 = param_8[3];
        dVar39 = dVar44 * dVar30;
        dVar28 = (dVar40 + dVar40) * param_8[3];
        dVar30 = dVar35 * dVar30;
        local_218 = (dVar30 + *param_8 * dVar44) * dVar37;
        dStack_210 = (dVar44 * dVar24 - dVar28) * dVar37;
        local_308 = dVar20 * dVar19;
        dStack_300 = dVar43 * dVar17;
        local_258 = (1.0 - (dVar29 * dVar44 + dVar24 * dVar35)) * dVar19;
        dVar20 = (1.0 - (dVar29 * dVar44 + dVar38)) * dVar17;
        dStack_250 = (dVar35 * dVar40 + dVar39) * dVar19;
        local_228 = (dVar44 * dVar24 + dVar28) * dVar17;
        local_248 = (*param_8 * dVar44 - dVar30) * dVar19;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar20,0);
        local_238._0_8_ = (dVar35 * dVar40 - dVar39) * dVar17;
        local_238._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = param_8[4];
        dStack_1f0 = param_8[5];
        local_1e8 = param_8[6];
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        dVar20 = dStack_2f0;
        dVar37 = local_2f8;
        dVar17 = dStack_300;
        dVar19 = local_308;
        local_2e0 = local_148;
        dVar30 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        local_2e8 = local_128;
        dVar44 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        dVar43 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
        uVar11 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
        dVar30 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar11);
        uVar11 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
        dVar44 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar44)) & uVar11);
        local_318 = 0.0;
        dStack_310 = 0.0;
        uVar11 = -(ulonglong)(0.0 <= dVar43 + -9.99999993922529e-09);
        dVar39 = (double)(~uVar11 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar43)) & uVar11);
        auVar14._8_8_ = -(ulonglong)(0.0 <= dStack_300);
        auVar14._0_8_ = -(ulonglong)(0.0 <= local_308);
        auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar14);
        dVar43 = (double)(~-(ulonglong)(0.0 <= local_2f8) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_2f8) & 0x3ff0000000000000);
        dVar28 = auVar25._0_8_;
        local_158 = local_158 * dVar30 * dVar28;
        local_150 = local_150 * dVar30 * dVar28;
        local_148 = dVar30 * local_148 * dVar28;
        dVar30 = auVar25._8_8_;
        local_128 = dVar44 * local_128 * dVar30;
        local_130 = local_130 * dVar44 * dVar30;
        local_138 = dVar30 * local_138 * dVar44;
        local_108 = dVar39 * local_108 * dVar43;
        local_110 = local_110 * dVar39 * dVar43;
        local_118 = dVar43 * local_118 * dVar39;
        FUN_14481fd10(&local_278,&local_158);
        dVar43 = local_268 * local_268 + local_278 * local_278;
        dVar30 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar22._0_8_ = dVar43 + dVar30;
        auVar22._8_8_ = dVar43 + dVar30;
        auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
        auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
        auVar25 = sqrtpd(auVar22,auVar22);
        auVar25 = divpd(_DAT_149934d80,auVar25);
        auVar34._0_8_ = auVar25._0_8_ * local_268;
        auVar34._8_8_ = auVar25._8_8_ * dStack_260;
        dStack_310 = 1.0;
        auVar1._8_8_ = 0x3ff0000000000000;
        auVar1._0_8_ = local_318;
        auVar36 = blendvpd(auVar1,auVar34,auVar15);
        dVar30 = 0.0;
        local_2d8[0] = (double)((ulonglong)(local_278 * auVar25._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
        local_2d8[1] = (double)((ulonglong)(dStack_270 * auVar25._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
      }
      local_2b8._8_4_ = SUB84(dStack_f0,0);
      local_2b8._0_8_ = local_f8;
      local_2b8._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
      local_2a8._8_4_ = SUB84(dVar30,0);
      local_2a8._0_8_ = local_e8;
      local_2a8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      local_298._8_4_ = SUB84(dVar17,0);
      local_298._0_8_ = dVar19;
      local_298._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_288 = dVar37;
      dStack_280 = dVar20;
      local_2c8 = auVar36;
    }
    dVar37 = local_2c8._0_8_;
    dVar43 = local_2c8._8_8_;
    dVar20 = dVar37 * dVar37 + local_2d8[0] * local_2d8[0];
    dVar19 = dVar43 * dVar43 + local_2d8[1] * local_2d8[1];
    auVar18._0_8_ = dVar20 + dVar19;
    auVar18._8_8_ = dVar20 + dVar19;
    auVar16._8_8_ = -(ulonglong)(1e-08 <= auVar18._8_8_);
    auVar16._0_8_ = -(ulonglong)(1e-08 <= auVar18._0_8_);
    auVar25 = sqrtpd(auVar18,auVar18);
    auVar25 = divpd(_DAT_149934d80,auVar25);
    auVar23._0_8_ = auVar25._0_8_ * dVar37;
    auVar23._8_8_ = auVar25._8_8_ * dVar43;
    local_2c8 = blendvpd(_DAT_149935300,auVar23,auVar16);
    local_2d8[0] = (double)((ulonglong)(local_2d8[0] * auVar25._0_8_) &
                           -(ulonglong)(1e-08 <= auVar18._0_8_));
    local_2d8[1] = (double)((ulonglong)(local_2d8[1] * auVar25._8_8_) &
                           -(ulonglong)(1e-08 <= auVar18._8_8_));
    pdVar7 = local_2d8;
    pdVar9 = (double *)(puVar8 + 4);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pdVar9 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar9 = pdVar9 + 1;
    }
    *(undefined1 *)(puVar8 + 0x10) = 0;
  }
  puVar8 = puVar8 + 4;
  puVar10 = param_2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1444a7746 FUN_1444a7746 body=769 status=ok
// SIG undefined FUN_1444a7746(void)

void FUN_1444a7746(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar8 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      *(longlong *)(param_2 + 0x40) = lVar8;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar8,&local_38);
            goto LAB_1444a7918;
          }
        }
        _Src = (longlong *)(lVar8 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_38,lVar8,1);
      }
      else {
        (*pcVar3)(plVar4,&local_38,lVar8);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
LAB_1444a7918:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x20) == local_38) {
    lVar8 = local_38 + 0x28;
    FUN_140457ffc(lVar8,param_1);
    FUN_1466ced6c(lVar8,local_30,param_1,FUN_14576d460);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a7a48 FUN_1444a7a48 body=201 status=ok
// SIG undefined FUN_1444a7a48(void)

void FUN_1444a7a48(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_1444a7ac6;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
LAB_1444a7abe:
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_1444a7abe;
  }
  if (*(longlong *)(param_1 + 0x20) == lVar2) {
    FUN_140457ffc(lVar2 + 0x28,param_1);
    FUN_1466ced6c(lVar2 + 0x28,&local_1a8,param_1,FUN_14576d460);
  }
LAB_1444a7ac6:
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a7b12 FUN_1444a7b12 body=267 status=ok
// SIG undefined FUN_1444a7b12(void)

longlong * FUN_1444a7b12(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 == 0 || *param_3 == 0) {
    *param_1 = *param_2;
  }
  else {
    FUN_1400021e4(param_2,&local_50);
    puVar1 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar1 = local_50;
    }
    FUN_1400021e4(param_3,&local_60);
    puVar2 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar2 = local_60;
    }
    FUN_140002266(&local_40,L"%s_%s",puVar2,puVar1);
    puVar1 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar1 = local_40;
    }
    FUN_1446f470e(param_1,puVar1,1);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a8092 FUN_1444a8092 body=55 status=ok
// SIG undefined FUN_1444a8092(void)

void FUN_1444a8092(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc079b0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc079b0 = FUN_14171c317(FUN_141906a4d,uVar1,L"ERigElementType");
  }
  return;
}



// FUNCTION 1444a80c9 FUN_1444a80c9 body=55 status=ok
// SIG undefined FUN_1444a80c9(void)

void FUN_1444a80c9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc079c8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc079c8 = FUN_14171c317(FUN_1466ccfe2,uVar1,L"ERigBoneType");
  }
  return;
}



// FUNCTION 1444a8100 FUN_1444a8100 body=55 status=ok
// SIG undefined FUN_1444a8100(void)

void FUN_1444a8100(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc079e0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc079e0 = FUN_14171c317(FUN_1466cee30,uVar1,L"ERigMetadataType");
  }
  return;
}



// FUNCTION 1444a8137 FUN_1444a8137 body=55 status=ok
// SIG undefined FUN_1444a8137(void)

void FUN_1444a8137(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc079f8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc079f8 = FUN_14171c317(FUN_1466cee61,uVar1,L"ERigHierarchyNotification");
  }
  return;
}



// FUNCTION 1444a816e FUN_1444a816e body=55 status=ok
// SIG undefined FUN_1444a816e(void)

void FUN_1444a816e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07a10 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07a10 = FUN_14171c317(FUN_1466cee90,uVar1,L"ERigEvent");
  }
  return;
}



// FUNCTION 1444a81a5 FUN_1444a81a5 body=55 status=ok
// SIG undefined FUN_1444a81a5(void)

void FUN_1444a81a5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07a28 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07a28 = FUN_14171c317(FUN_1466ceebf,uVar1,L"EControlRigSetKey");
  }
  return;
}



// FUNCTION 1444a81dc FUN_1444a81dc body=55 status=ok
// SIG undefined FUN_1444a81dc(void)

void FUN_1444a81dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07a40 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07a40 = FUN_14171c317(FUN_1466cd58e,uVar1,L"ERigControlType");
  }
  return;
}



// FUNCTION 1444a8213 FUN_1444a8213 body=55 status=ok
// SIG undefined FUN_1444a8213(void)

void FUN_1444a8213(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07a58 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07a58 = FUN_14171c317(FUN_1466ceeee,uVar1,L"ERigControlAnimationType");
  }
  return;
}



// FUNCTION 1444a824a FUN_1444a824a body=55 status=ok
// SIG undefined FUN_1444a824a(void)

void FUN_1444a824a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07a70 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07a70 = FUN_14171c317(FUN_1466cef1d,uVar1,L"ERigControlValueType");
  }
  return;
}



// FUNCTION 1444a8281 FUN_1444a8281 body=55 status=ok
// SIG undefined FUN_1444a8281(void)

void FUN_1444a8281(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07a88 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07a88 = FUN_14171c317(FUN_1466cef4e,uVar1,L"ERigControlVisibility");
  }
  return;
}



// FUNCTION 1444a82b8 FUN_1444a82b8 body=55 status=ok
// SIG undefined FUN_1444a82b8(void)

void FUN_1444a82b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07aa0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07aa0 = FUN_14171c317(FUN_1466cd5bf,uVar1,L"ERigControlAxis");
  }
  return;
}



// FUNCTION 1444a82ef FUN_1444a82ef body=55 status=ok
// SIG undefined FUN_1444a82ef(void)

void FUN_1444a82ef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07b78 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07b78 = FUN_14171c317(FUN_1466cf310,uVar1,L"ERigElementResolveState");
  }
  return;
}



// FUNCTION 1444a8326 FUN_1444a8326 body=55 status=ok
// SIG undefined FUN_1444a8326(void)

void FUN_1444a8326(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07ba8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07ba8 = FUN_14171c317(FUN_1466cf3d8,uVar1,L"EModularRigResolveState");
  }
  return;
}



// FUNCTION 1444a836e FUN_1444a836e body=55 status=ok
// SIG undefined FUN_1444a836e(void)

void FUN_1444a836e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc08050 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc08050 = FUN_14171c317(FUN_1466d0836,uVar1,L"ERigSpaceType");
  }
  return;
}



// FUNCTION 1444a8478 FUN_1444a8478 body=29 status=ok
// SIG undefined FUN_1444a8478(void)

undefined8 FUN_1444a8478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444a84d2 FUN_1444a84d2 body=131 status=ok
// SIG undefined FUN_1444a84d2(void)

void FUN_1444a84d2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar5 = *param_2;
  iVar2 = *(int *)(lVar5 + 0x1c);
  lVar6 = *(longlong *)(*param_1 + 0x40);
  if (lVar6 == 0) {
    lVar6 = *param_1;
  }
  iVar4 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  bVar7 = (*(uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4) & 1 << ((byte)iVar2 & 0x1f)) == 0;
  *(bool *)param_3 = bVar7;
  if (bVar7) {
    cVar3 = (*(code *)param_1[3])(param_1[4],lVar5);
    if (cVar3 != '\0') {
      (*(code *)param_1[1])(param_1[2],lVar5);
    }
    iVar2 = *(int *)(lVar5 + 0x1c);
    lVar5 = *(longlong *)(*param_1 + 0x40);
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    iVar4 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
  }
  return;
}



// FUNCTION 1444a8556 FUN_1444a8556 body=94 status=ok
// SIG undefined FUN_1444a8556(void)

undefined8 * FUN_1444a8556(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bb8a240;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return puVar1 + 1;
}



// FUNCTION 1444a85ba FUN_1444a85ba body=29 status=ok
// SIG undefined FUN_1444a85ba(void)

void FUN_1444a85ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444a85d8 FUN_1444a85d8 body=39 status=ok
// SIG undefined FUN_1444a85d8(void)

undefined8 * FUN_1444a85d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb8a240;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444a898c FUN_1444a898c body=354 status=ok
// SIG undefined FUN_1444a898c(void)

void FUN_1444a898c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_2f8 [32];
  undefined **local_2d8;
  undefined1 local_2c8 [480];
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar3 = *param_2;
  lVar4 = *param_1;
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_2c8);
  local_2d8 = &PTR_FUN_14bb906f0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0x3ff00000;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_60 = 0xffffffff;
  local_e8[0] = *(undefined8 *)(lVar3 + 0x14);
  local_73 = 1;
  iVar2 = *(int *)(lVar4 + 0xad8);
  *(uint *)(lVar4 + 0xad8) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0xadc) < iVar2 + 1U) {
    FUN_14920b502((longlong *)(lVar4 + 0xad0),iVar2);
  }
  lVar3 = *(longlong *)(lVar4 + 0xad0);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x290 + lVar3);
  *puVar1 = &PTR_FUN_14bb775c0;
  FUN_14920b596(puVar1 + 2,local_2c8);
  *puVar1 = &PTR_FUN_14bb906f0;
  memcpy((void *)((longlong)iVar2 * 0x290 + lVar3 + 0x1f0),local_e8,0x98);
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2c8);
  if ((local_40 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a8af0 FUN_1444a8af0 body=65 status=ok
// SIG undefined FUN_1444a8af0(void)

void FUN_1444a8af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [12];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1491d5fec(*param_1,local_14,*param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444a8b32 FUN_1444a8b32 body=1456 status=ok
// SIG undefined FUN_1444a8b32(void)

void FUN_1444a8b32(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_678 [32];
  undefined8 *local_658;
  float *local_650;
  undefined8 *local_648;
  undefined8 *local_640;
  undefined1 local_638;
  undefined1 local_630;
  undefined1 local_620 [12];
  undefined1 local_614;
  undefined2 local_613;
  undefined1 local_611;
  undefined8 local_610;
  undefined8 local_608;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  undefined4 local_42c;
  float local_428;
  float local_424;
  float local_420;
  undefined4 local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined8 local_3b8 [12];
  undefined8 local_358 [12];
  undefined1 local_2f8 [448];
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 local_128 [13];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a4;
  undefined1 local_a2;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_678;
  lVar10 = *param_2;
  lVar4 = *param_1;
  uVar5 = *(undefined8 *)(lVar10 + 0x14);
  iVar3 = *(int *)(lVar10 + 0x1c);
  plVar9 = param_1;
  if (((longlong)iVar3 < 0) || (plVar9 = *(longlong **)(lVar4 + 0x2f8), (int)plVar9[0x18] <= iVar3))
  {
    lVar7 = 0;
  }
  else {
    plVar9 = (longlong *)plVar9[0x17];
    lVar7 = plVar9[iVar3];
  }
  local_b0 = uVar5;
  lVar7 = FUN_140813120(plVar9,lVar7);
  uVar11 = 0xffffffff;
  if (lVar7 != 0) {
    uVar11 = *(uint *)(lVar7 + 0x1c);
  }
  FUN_1491d3bd8(&local_b8,&local_b0);
  FUN_1491d3b26(&local_c0,&local_b0);
  if (uVar11 == 0xffffffff) {
    iVar3 = *(int *)(lVar10 + 0x1c);
    if (((((longlong)iVar3 < 0) ||
         (lVar10 = *(longlong *)(lVar4 + 0x2f8), *(int *)(lVar10 + 0xc0) <= iVar3)) ||
        (lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0xb8) + (longlong)iVar3 * 8), lVar4 == 0)) ||
       (((bVar1 = *(byte *)(lVar4 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
        ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))) {
      puVar13 = &DAT_14c846480;
      puVar14 = (undefined8 *)local_2f8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    else {
      FUN_1401571e4(lVar10,local_2f8,lVar4,3);
    }
    uVar8 = *(undefined8 *)param_1[1];
    puVar13 = (undefined8 *)local_2f8;
    puVar14 = local_128;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    local_138 = local_138 & 0xffffff00;
    uStack_134 = 0;
    uStack_130 = 0;
    local_650 = (float *)CONCAT71(local_650._1_7_,1);
    puVar13 = &local_608;
  }
  else {
    lVar7 = *(longlong *)(lVar4 + 0x2f8);
    iVar3 = *(int *)(lVar10 + 0x1c);
    if (((((longlong)iVar3 < 0) || (*(int *)(lVar7 + 0xc0) <= iVar3)) ||
        (lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (longlong)iVar3 * 8), lVar10 == 0)) ||
       (((bVar1 = *(byte *)(lVar10 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
        ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))) {
      puVar13 = &DAT_14c846480;
      puVar14 = (undefined8 *)local_2f8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    else {
      FUN_1401571e4(lVar7,local_2f8,lVar10,3);
      lVar7 = *(longlong *)(lVar4 + 0x2f8);
    }
    if ((((int)uVar11 < 0) || (*(int *)(lVar7 + 0xc0) <= (int)uVar11)) ||
       ((lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar11 * 8), lVar10 == 0 ||
        (((bVar1 = *(byte *)(lVar10 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
         ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))))) {
      puVar13 = &DAT_14c846480;
      puVar14 = &local_608;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
    }
    else {
      FUN_1401571e4(lVar7,&local_608,lVar10,3);
    }
    FUN_1449437a2(local_2f8,&local_448,&local_608);
    uVar8 = *(undefined8 *)param_1[1];
    pfVar12 = &local_448;
    puVar13 = local_128;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar13 = *(undefined8 *)pfVar12;
      pfVar12 = pfVar12 + 2;
      puVar13 = puVar13 + 1;
    }
    if (((int)uVar11 < 0) || (*(int *)(*(longlong *)(lVar4 + 0x2f8) + 0xc0) <= (int)uVar11)) {
      local_138 = local_138 & 0xffffff00;
      uStack_134 = 0;
      uStack_130 = 0;
    }
    else {
      lVar10 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x2f8) + 0xb8) + (ulonglong)uVar11 * 8);
      uStack_130 = *(undefined4 *)(lVar10 + 0x18);
      uVar6 = *(undefined8 *)(lVar10 + 0x10);
      local_138 = (uint)uVar6;
      uStack_134 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    local_650 = (float *)((ulonglong)local_650 & 0xffffffffffffff00);
    puVar13 = local_358;
  }
  local_658 = local_128;
  local_640 = (undefined8 *)((ulonglong)local_640 & 0xffffffffffffff00);
  local_648 = (undefined8 *)((ulonglong)local_648 & 0xffffffffffffff00);
  FUN_1491e441c(uVar8,puVar13,local_b8,&local_138);
  uVar2 = *(undefined1 *)puVar13;
  local_a4 = *(undefined2 *)((longlong)puVar13 + 1);
  local_a2 = *(undefined1 *)((longlong)puVar13 + 3);
  uVar8 = *(undefined8 *)((longlong)puVar13 + 4);
  FUN_1491d73b0(local_2f8);
  local_2f8[1] = 7;
  uVar6 = *(undefined8 *)param_1[1];
  puVar13 = &DAT_14c846480;
  puVar14 = local_358;
  local_2f8._4_8_ = uVar5;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar13 = &DAT_14c846480;
  puVar14 = local_3b8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  local_448 = (float)DAT_14c846480;
  local_444 = (float)DAT_14c846488;
  local_440 = (float)DAT_14c846490;
  local_43c = (float)DAT_14c846498;
  local_438 = (float)DAT_14c8464a0;
  local_434 = (float)DAT_14c8464a8;
  local_430 = (float)DAT_14c8464b0;
  local_428 = (float)DAT_14c8464c0;
  local_424 = (float)DAT_14c8464c8;
  local_420 = (float)DAT_14c8464d0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 1;
  local_42c = 0;
  local_41c = 0;
  FUN_14918b1f6(&local_608,local_2f8);
  local_613 = local_a4;
  local_611 = local_a2;
  local_630 = 0;
  local_638 = 0;
  local_640 = local_358;
  local_658 = &local_608;
  local_650 = &local_448;
  local_648 = local_3b8;
  local_614 = uVar2;
  local_610 = uVar8;
  FUN_1491ecf78(uVar6,local_620,local_c0);
  FUN_14918b3e4(local_2f8);
  if ((local_a0 ^ (ulonglong)auStack_678) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444a90e4 FUN_1444a90e4 body=2802 status=ok
// SIG undefined FUN_1444a90e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444a90e4(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_418 [32];
  undefined1 local_3f8;
  undefined1 local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  ulonglong uStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8 [4];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_284 [4];
  undefined1 local_280 [8];
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
  double local_1d8;
  double dStack_1d0;
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
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  lVar3 = *param_2;
  lVar4 = *param_1;
  local_158 = (double)CONCAT71(local_158._1_7_,*(undefined1 *)(lVar3 + 0x10));
  FUN_1491d5112(local_280,lVar3 + 0x14);
  local_284[0] = 4;
  uVar6 = FUN_140813180(*(undefined8 *)(lVar4 + 0x2f8),local_284);
  if ((((int)uVar6 < 0) || (*(int *)(lVar4 + 0xad8) <= (int)uVar6)) ||
     (*(char *)(*(longlong *)(lVar4 + 0xad0) + (ulonglong)uVar6) != '\x01')) goto LAB_1444a9b27;
  lVar10 = *(longlong *)(lVar4 + 0x2f8);
  if (((int)uVar6 < *(int *)(lVar10 + 0xc0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0xb8) + (ulonglong)uVar6 * 8), lVar5 != 0)) {
    bVar1 = *(byte *)(lVar5 + 0x10);
    lVar14 = 0;
    if (bVar1 == 4) {
      lVar14 = lVar5;
    }
    if (((1 < bVar1 - 1) && (bVar1 != 0x80)) &&
       ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) == 0))))
    goto LAB_1444a9220;
    FUN_1401571e4(lVar10,local_2e8,lVar5,1);
  }
  else {
    lVar14 = 0;
LAB_1444a9220:
    pdVar12 = (double *)&DAT_14c846480;
    pdVar13 = local_2e8;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pdVar13 = *pdVar12;
      pdVar12 = pdVar12 + 1;
      pdVar13 = pdVar13 + 1;
    }
  }
  cVar2 = *(char *)(lVar4 + 0xae0);
  if (cVar2 == '\x02') {
    uVar11 = *(undefined8 *)(lVar4 + 0x2f8);
    pdVar12 = local_2e8;
  }
  else {
    if (cVar2 == '\x01') {
      uVar11 = *(undefined8 *)(lVar4 + 0x2f8);
      uVar7 = FUN_1401571e4(uVar11,&local_348,lVar3,1);
      uVar9 = (undefined4)uVar11;
    }
    else {
      if (cVar2 != '\0') goto LAB_1444a9b27;
      uVar11 = *(undefined8 *)(lVar4 + 0x2f8);
      uVar7 = FUN_1401261c4(uVar11,&local_348,lVar14,0);
      uVar9 = (undefined4)uVar11;
    }
    local_378 = ZEXT816(0);
    local_388 = 0.0;
    dStack_380 = 0.0;
    dVar30 = local_308._0_8_;
    dVar34 = local_308._8_8_;
    dVar16 = local_2f8._0_8_;
    dVar23 = local_2f8._8_8_;
    local_368 = local_2a8._0_8_;
    dStack_360 = local_2a8._8_8_;
    dVar36 = local_298._0_8_;
    auVar24 = minpd(local_2a8,local_308);
    auVar27 = minpd(local_298,local_2f8);
    auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    iVar8 = movmskpd(uVar7,auVar25);
    auVar24._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar24._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    uVar6 = movmskpd(uVar9,auVar24);
    if ((uVar6 & 0x3fffffff) == 0 && iVar8 == 0) {
      dVar26 = local_2e8[1] * local_338 * -1.0 +
               local_2e8[2] * dStack_340 +
               local_2e8[3] * local_348 * 1.0 + local_2e8[0] * dStack_330;
      dVar35 = local_2e8[0] * local_338 * 1.0 +
               local_2e8[3] * dStack_340 +
               local_2e8[2] * local_348 * -1.0 + local_2e8[1] * dStack_330;
      auVar27._0_8_ =
           local_2e8[3] * local_338 * 1.0 +
           ((local_348 * local_2e8[1] * 1.0 + local_2e8[2] * dStack_330) - local_2e8[0] * dStack_340
           );
      auVar27._8_8_ =
           local_2e8[2] * local_338 * -1.0 +
           ((local_348 * local_2e8[0] * -1.0 + local_2e8[3] * dStack_330) -
           local_2e8[1] * dStack_340);
      local_2c8 = local_2c8 * dVar30;
      dStack_2c0 = dStack_2c0 * dVar34;
      local_2b8 = local_2b8 * dVar16;
      dStack_2b0 = dStack_2b0 * dVar23;
      dVar31 = dStack_2c0 * local_348 - dStack_340 * local_2c8;
      dVar32 = local_2b8 * dStack_340 - local_338 * dStack_2c0;
      dVar33 = local_2c8 * local_338 - local_348 * local_2b8;
      dVar29 = dStack_2b0 * dStack_330 - dStack_330 * dStack_2b0;
      dVar32 = dVar32 + dVar32;
      dVar33 = dVar33 + dVar33;
      dVar31 = dVar31 + dVar31;
      dVar29 = dVar29 + dVar29;
      local_388 = (dVar31 * dStack_340 - local_338 * dVar33) + dStack_330 * dVar32 + local_2c8 +
                  local_328;
      dStack_380 = (dVar32 * local_338 - dVar31 * local_348) + dStack_330 * dVar33 + dStack_2c0 +
                   dStack_320;
      dStack_310 = (dVar29 * dStack_330 - dVar29 * dStack_330) + dStack_330 * dVar29 + dStack_2b0 +
                   dStack_310;
      local_378._8_4_ = SUB84(dStack_310,0);
      local_378._0_8_ =
           (dVar33 * local_348 - dStack_340 * dVar32) + dStack_330 * dVar31 + local_2b8 +
           (double)CONCAT44(uStack_314,local_318);
      local_378._12_4_ = (int)((ulonglong)dStack_310 >> 0x20);
      local_368 = local_368 * dVar30;
      dStack_360 = dStack_360 * dVar34;
      dVar36 = dVar36 * dVar16;
      dVar23 = local_298._8_8_ * dVar23;
    }
    else {
      dVar26 = dStack_340 + dStack_340;
      dVar33 = local_338 + local_338;
      dVar35 = local_348 * (local_348 + local_348);
      local_188 = (1.0 - (dVar35 + dStack_340 * dVar26)) * dVar16;
      dVar29 = (local_348 + local_348) * dStack_330;
      local_198 = (dVar26 * dStack_330 + local_348 * dVar33) * dVar16;
      dVar23 = dVar23 * local_298._8_8_;
      local_3b8._8_4_ = SUB84(dVar23,0);
      local_3b8._0_8_ = dVar16 * dVar36;
      local_3b8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_1b8 = (dVar26 * local_348 - dVar33 * dStack_330) * dVar34;
      dStack_190 = (dVar33 * dStack_340 - dVar29) * dVar16;
      local_1d8 = (1.0 - (local_338 * dVar33 + dStack_340 * dVar26)) * dVar30;
      dStack_1b0 = (1.0 - (local_338 * dVar33 + dVar35)) * dVar34;
      dStack_1d0 = (dVar26 * local_348 + dVar33 * dStack_330) * dVar30;
      local_1a8 = (dVar33 * dStack_340 + dVar29) * dVar34;
      local_1c8 = (local_348 * dVar33 - dVar26 * dStack_330) * dVar30;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_328;
      dStack_170 = dStack_320;
      local_168 = local_318;
      uStack_164 = uStack_314;
      uStack_160 = 0;
      uStack_15c = 0x3ff00000;
      dVar29 = local_2e8[1] + local_2e8[1];
      dVar16 = local_2e8[2] + local_2e8[2];
      dVar33 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
      local_208 = (1.0 - (dVar33 + local_2e8[1] * dVar29)) * dVar36;
      dVar23 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
      local_218 = (dVar29 * local_2e8[3] + local_2e8[0] * dVar16) * dVar36;
      local_238 = (dVar29 * local_2e8[0] - dVar16 * local_2e8[3]) * dStack_360;
      dStack_210 = (dVar16 * local_2e8[1] - dVar23) * dVar36;
      local_3c8 = dVar30 * local_368;
      dStack_3c0 = dVar34 * dStack_360;
      local_258 = (1.0 - (local_2e8[2] * dVar16 + local_2e8[1] * dVar29)) * local_368;
      dStack_230 = (1.0 - (local_2e8[2] * dVar16 + dVar33)) * dStack_360;
      dStack_250 = (dVar29 * local_2e8[0] + dVar16 * local_2e8[3]) * local_368;
      local_228 = (dVar16 * local_2e8[1] + dVar23) * dStack_360;
      local_248 = (local_2e8[0] * dVar16 - dVar29 * local_2e8[3]) * local_368;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = local_2c8;
      dStack_1f0 = dStack_2c0;
      local_1e8 = local_2b8;
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158);
      dVar31 = dStack_3c0;
      dVar29 = local_3c8;
      local_3d0 = local_148;
      dVar30 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      local_3d8 = local_128;
      dVar36 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      dVar16 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
      uVar15 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
      dVar34 = (double)(~uVar15 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar15);
      uVar15 = -(ulonglong)(0.0 <= dVar36 + -9.99999993922529e-09);
      dVar30 = (double)(~uVar15 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar36)) & uVar15);
      uVar15 = -(ulonglong)(0.0 <= dVar16 + -9.99999993922529e-09);
      dVar16 = (double)(~uVar15 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar16)) & uVar15);
      dVar36 = (double)local_3b8._0_8_;
      dVar23 = (double)local_3b8._8_8_;
      auVar17._8_8_ = -(ulonglong)(0.0 <= dStack_3c0);
      auVar17._0_8_ = -(ulonglong)(0.0 <= local_3c8);
      auVar24 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar17);
      dVar33 = (double)(~-(ulonglong)(0.0 <= (double)local_3b8._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_3b8._0_8_) & 0x3ff0000000000000);
      dVar26 = auVar24._0_8_;
      local_158 = local_158 * dVar34 * dVar26;
      local_150 = local_150 * dVar34 * dVar26;
      local_148 = dVar34 * local_148 * dVar26;
      dVar34 = auVar24._8_8_;
      local_128 = dVar30 * local_128 * dVar34;
      local_130 = local_130 * dVar30 * dVar34;
      local_138 = dVar34 * local_138 * dVar30;
      local_108 = dVar16 * local_108 * dVar33;
      local_110 = local_110 * dVar16 * dVar33;
      local_118 = dVar33 * local_118 * dVar16;
      FUN_14481fd10(&local_278,&local_158);
      dVar30 = local_268 * local_268 + local_278 * local_278;
      dVar16 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar21._0_8_ = dVar30 + dVar16;
      auVar21._8_8_ = dVar30 + dVar16;
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
      auVar24 = sqrtpd(auVar21,auVar21);
      auVar24 = divpd(_DAT_149934d80,auVar24);
      auVar28._0_8_ = auVar24._0_8_ * local_268;
      auVar28._8_8_ = auVar24._8_8_ * dStack_260;
      auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar18);
      dVar26 = (double)((ulonglong)(local_278 * auVar24._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
      dVar35 = (double)((ulonglong)(dStack_270 * auVar24._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
      local_368 = dVar29;
      dStack_360 = dVar31;
      local_388 = local_f8;
      dStack_380 = dStack_f0;
      local_378._8_8_ = 0;
      local_378._0_8_ = local_e8;
    }
    pdVar12 = &local_3a8;
    dVar34 = auVar27._0_8_;
    dVar33 = auVar27._8_8_;
    dVar30 = dVar34 * dVar34 + dVar26 * dVar26;
    dVar16 = dVar33 * dVar33 + dVar35 * dVar35;
    auVar20._0_8_ = dVar30 + dVar16;
    auVar20._8_8_ = dVar30 + dVar16;
    local_358._8_4_ = SUB84(dVar23,0);
    local_358._0_8_ = dVar36;
    local_358._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar19._8_8_ = -(ulonglong)(1e-08 <= auVar20._8_8_);
    auVar19._0_8_ = -(ulonglong)(1e-08 <= auVar20._0_8_);
    auVar24 = sqrtpd(auVar20,auVar20);
    auVar24 = divpd(_DAT_149934d80,auVar24);
    auVar22._0_8_ = auVar24._0_8_ * dVar34;
    auVar22._8_8_ = auVar24._8_8_ * dVar33;
    local_398 = blendvpd(_DAT_149935300,auVar22,auVar19);
    local_3a8 = (double)((ulonglong)(dVar26 * auVar24._0_8_) & -(ulonglong)(1e-08 <= auVar20._0_8_))
    ;
    uStack_3a0 = (ulonglong)(dVar35 * auVar24._8_8_) & -(ulonglong)(1e-08 <= auVar20._8_8_);
    uVar11 = *(undefined8 *)(lVar4 + 0x2f8);
  }
  local_3e0 = 0;
  local_3e8 = 0;
  local_3f0 = 0;
  local_3f8 = 1;
  FUN_140122d4e(uVar11,lVar3,pdVar12,1);
LAB_1444a9b27:
  if ((local_d0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444a9bd8 FUN_1444a9bd8 body=280 status=ok
// SIG undefined FUN_1444a9bd8(void)

void FUN_1444a9bd8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  float local_b0 [33];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_2;
  lVar3 = *param_1;
  local_b0[0] = (float)CONCAT31(local_b0[0]._1_3_,*(undefined1 *)(lVar2 + 0x10));
  FUN_1491d5112(local_28,lVar2 + 0x14);
  local_2c[0] = 4;
  uVar4 = FUN_140813180(*(undefined8 *)(lVar3 + 0x2f8),local_2c);
  if ((((int)uVar4 < 0) || (*(int *)(lVar3 + 0xad8) <= (int)uVar4)) ||
     (*(char *)(*(longlong *)(lVar3 + 0xad0) + (ulonglong)uVar4) != '\x01')) goto LAB_1444a9c4c;
  FUN_149181d3e(*(undefined8 *)(lVar3 + 0x2f8),local_b0,uVar4,1);
  cVar1 = *(char *)(lVar3 + 0xae0);
  if (cVar1 == '\x02') {
LAB_1444a9ca4:
    uVar6 = *(undefined8 *)(lVar3 + 0x2f8);
    fVar7 = local_b0[0];
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\0') goto LAB_1444a9c4c;
      goto LAB_1444a9ca4;
    }
    fVar7 = 0.0;
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x48) == '\x01')) {
      pfVar5 = (float *)&DAT_14bb83714;
      if (*(float **)(lVar2 + 0x50) != (float *)0x0) {
        pfVar5 = *(float **)(lVar2 + 0x50);
      }
      fVar7 = *pfVar5;
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x2f8);
    fVar7 = local_b0[0] + fVar7;
  }
  local_b8 = 0;
  FUN_14143b662(uVar6,lVar2,fVar7,0);
LAB_1444a9c4c:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


