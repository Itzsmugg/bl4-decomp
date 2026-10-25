// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f5de90 FUN_146f5de90 body=159 status=ok
// SIG undefined FUN_146f5de90(void)

void FUN_146f5de90(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,*puVar1 & 1,1);
  uVar5 = *(ushort *)((longlong)puVar1 + 6) - 1;
  if (*(ushort *)((longlong)puVar1 + 6) == 0) {
    uVar5 = 0;
  }
  lVar3 = 0x3f;
  if ((ulonglong)(uVar5 | 1) != 0) {
    for (; (ulonglong)(uVar5 | 1) * 2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar4 = ((uint)lVar3 ^ 0xffffffc0) + 0x47;
  FUN_146f5435e(uVar2,(uVar4 >> 3) - 1,2);
  FUN_146f5435e(uVar2,uVar5,uVar4 & 0x78);
  if (*(ushort *)((longlong)puVar1 + 6) == 0) {
    return;
  }
  FUN_146f59ca6(uVar2,*(undefined8 *)(puVar1 + 2),0,(uint)*(ushort *)((longlong)puVar1 + 6) * 8 + -8
               );
  return;
}



// FUNCTION 146f5df30 FUN_146f5df30 body=257 status=ok
// SIG undefined FUN_146f5df30(void)

void FUN_146f5df30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  bVar2 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  local_28 = CONCAT71(local_28._1_7_,bVar2) & 0xffffffffffffff01;
  if ((bVar2 & 1) == 0) {
    local_48 = *puVar1;
    uStack_40 = puVar1[1];
    local_50 = &local_48;
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    local_58 = *(undefined8 *)(param_2 + 0x10);
    local_68 = 0;
    FUN_146f5e032(param_1);
  }
  else {
    local_50 = &local_38;
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    local_58 = *(undefined8 *)(param_2 + 0x10);
    local_68 = DAT_14c99b620;
    (*DAT_14c99a4f8)(param_1);
    if (*(char *)(puVar1 + 4) == '\0') {
      (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar1[1]);
    }
  }
  puVar1[4] = local_28;
  *(undefined4 *)(puVar1 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar1 + 0x14) = local_38._4_4_;
  *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_30._4_4_;
  *(undefined4 *)puVar1 = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar1 + 4) = local_48._4_4_;
  *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_40._4_4_;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e032 FUN_146f5e032 body=254 status=ok
// SIG undefined FUN_146f5e032(void)

void FUN_146f5e032(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  puVar1 = *(uint **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar2,1);
  iVar4 = FUN_146f546d2(uVar2,2);
  uVar5 = FUN_146f546d2(uVar2,iVar4 * 8 + 8);
  uVar7 = DAT_14c999b78;
  if ((uVar5 < 0x10000) && ((uVar5 == 0 & (byte)uVar3) == 0)) {
    iVar4 = uVar5 + 1;
    *puVar1 = *puVar1 & 0xfffffffe | uVar3 & 1;
    if (uVar5 == 0) {
      iVar4 = 0;
    }
    FUN_146f5f9ac(puVar1,iVar4);
    if (uVar5 != 0) {
      FUN_146f59f56(uVar2,*(undefined8 *)(puVar1 + 2),uVar5 * 8);
      *(undefined1 *)(*(longlong *)(puVar1 + 2) + (ulonglong)uVar5) = 0;
      if ((uVar3 & 1) != 0) {
        uVar3 = 0;
        uVar6 = 0;
        do {
          do {
            uVar7 = DAT_14c99b8f0;
            if ((uVar3 == uVar5) || (2 < uVar6)) goto LAB_146f5e109;
            uVar6 = uVar6 + 1;
            uVar8 = (ulonglong)uVar3;
            uVar3 = uVar3 + (*(byte *)(*(longlong *)(puVar1 + 2) + uVar8) >> 7);
          } while ((char)*(byte *)(*(longlong *)(puVar1 + 2) + uVar8) < '\0');
          uVar3 = uVar3 + 1;
          uVar6 = 0;
        } while (uVar3 != uVar5);
      }
    }
  }
  else {
LAB_146f5e109:
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar7;
    }
  }
  return;
}



// FUNCTION 146f5e135 FUN_146f5e135 body=166 status=ok
// SIG undefined FUN_146f5e135(void)

void FUN_146f5e135(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5e2d2();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e1f3 FUN_146f5e1f3 body=214 status=ok
// SIG undefined FUN_146f5e1f3(void)

void FUN_146f5e1f3(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar9 & 1) != 0) {
    puVar10 = (undefined8 *)param_2[3];
    if (*(char *)(puVar10 + 4) == '\0') {
      (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar10[1]);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10 = (undefined8 *)param_2[3];
    }
    puVar1 = (undefined4 *)param_2[4];
    puVar10[4] = *(undefined8 *)(puVar1 + 8);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    uVar6 = puVar1[5];
    uVar7 = puVar1[6];
    uVar8 = puVar1[7];
    *(undefined4 *)(puVar10 + 2) = puVar1[4];
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar6;
    *(undefined4 *)(puVar10 + 3) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar8;
    *(undefined4 *)puVar10 = uVar2;
    *(undefined4 *)((longlong)puVar10 + 4) = uVar3;
    *(undefined4 *)(puVar10 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar10 + 0xc) = uVar5;
    local_30 = 0;
    local_38 = 0;
    local_40 = *param_2;
    local_28 = param_2[4];
    local_20 = param_2[3];
    FUN_146f5e4b4();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_146f5df30(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e2d2 FUN_146f5e2d2 body=293 status=ok
// SIG undefined FUN_146f5e2d2(void)

ulonglong FUN_146f5e2d2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong lStack_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(char *)(lVar1 + 0x20) == *(char *)(lVar2 + 0x20)) {
      if (*(char *)(lVar1 + 0x20) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
      }
      iStack_50 = *(int *)(param_2 + 8);
      uStack_4c = *(undefined4 *)(param_2 + 0xc);
      local_48 = *(undefined4 *)(param_2 + 0x10);
      uStack_44 = *(undefined4 *)(param_2 + 0x14);
      uStack_30 = *(undefined4 *)(param_2 + 0x28);
      uStack_2c = *(undefined4 *)(param_2 + 0x2c);
      local_58 = DAT_14c99b620;
      lStack_40 = lVar1;
      local_38 = lVar2;
      uVar3 = (*DAT_14c99a520)();
      uVar5 = (ulonglong)uVar3;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    FUN_14475cc44(lVar1 + 8,&local_58);
    FUN_14475cc44(lVar2 + 8,&local_68);
    uVar6 = (undefined7)((ulonglong)(lVar2 + 8) >> 8);
    if (iStack_50 == local_60) {
      uVar5 = CONCAT71(uVar6,1);
      if (1 < iStack_50) {
        iVar4 = wcscmp(local_58,local_68);
        uVar5 = CONCAT71(uVar6,iVar4 == 0);
      }
    }
    else {
      uVar5 = CONCAT71(uVar6,local_60 + iStack_50 == 1);
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8(local_68);
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 146f5e408 FUN_146f5e408 body=65 status=ok
// SIG undefined FUN_146f5e408(void)

undefined8 FUN_146f5e408(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  if ((((byte)*puVar2 ^ (byte)*puVar1) & 1) == 0 &&
      *(ushort *)((longlong)puVar1 + 6) == *(ushort *)((longlong)puVar2 + 6)) {
    iVar3 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                   (ulonglong)*(ushort *)((longlong)puVar1 + 6));
    uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 == 0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 146f5e44a FUN_146f5e44a body=104 status=ok
// SIG undefined FUN_146f5e44a(void)

undefined4 FUN_146f5e44a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14475cc44(*(longlong *)(param_2 + 0x18) + 8,&local_28);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  uVar1 = (local_20 + (uint)(local_20 == 0)) * 3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x10000);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e4b4 FUN_146f5e4b4 body=137 status=ok
// SIG undefined FUN_146f5e4b4(void)

void FUN_146f5e4b4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  void *_Dst;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  puVar2[4] = puVar1[4];
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar4 = *(undefined4 *)(puVar1 + 3);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar3;
  *(undefined4 *)(puVar2 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar5;
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  if (*(char *)(puVar1 + 4) == '\0') {
    uVar3 = *(undefined4 *)((longlong)puVar1 + 4);
    uVar4 = *(undefined4 *)(puVar1 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
    *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    if (*(ushort *)((longlong)puVar1 + 6) == 0) {
      uVar8 = 0;
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                               (DAT_14c872d28,*(ushort *)((longlong)puVar1 + 6) + 3 & 0xfffffffc,4);
      memcpy(_Dst,(void *)puVar1[1],(ulonglong)*(ushort *)((longlong)puVar1 + 6));
      uVar8 = *(undefined2 *)((longlong)puVar1 + 6);
    }
    *(undefined2 *)((longlong)puVar2 + 4) = uVar8;
    *(undefined2 *)((longlong)puVar2 + 6) = *(undefined2 *)((longlong)puVar1 + 6);
    puVar2[1] = _Dst;
  }
  return;
}



// FUNCTION 146f5e53e FUN_146f5e53e body=109 status=ok
// SIG undefined FUN_146f5e53e(void)

void FUN_146f5e53e(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  void *_Dst;
  
  puVar1 = *(undefined4 **)(param_2 + 0x18);
  puVar2 = *(undefined4 **)(param_2 + 0x20);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  if (*(ushort *)((longlong)puVar1 + 6) == 0) {
    uVar6 = 0;
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                             (DAT_14c872d28,*(ushort *)((longlong)puVar1 + 6) + 3 & 0xfffffffc,4);
    memcpy(_Dst,*(void **)(puVar1 + 2),(ulonglong)*(ushort *)((longlong)puVar1 + 6));
    uVar6 = *(undefined2 *)((longlong)puVar1 + 6);
  }
  *(undefined2 *)(puVar2 + 1) = uVar6;
  *(undefined2 *)((longlong)puVar2 + 6) = *(undefined2 *)((longlong)puVar1 + 6);
  *(void **)(puVar2 + 2) = _Dst;
  return;
}



// FUNCTION 146f5e5ac FUN_146f5e5ac body=44 status=ok
// SIG undefined FUN_146f5e5ac(void)

void FUN_146f5e5ac(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  if (*(char *)(puVar1 + 4) == '\0') {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 146f5e5d8 FUN_146f5e5d8 body=89 status=ok
// SIG undefined FUN_146f5e5d8(void)

void FUN_146f5e5d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [46];
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x20) == '\x01') {
    local_a = 1;
    FUN_146f3b77a(*(undefined8 *)(param_2 + 0x20),&local_a,*(longlong *)(param_2 + 0x18) + 0x10,
                  param_2 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e632 FUN_146f5e632 body=102 status=ok
// SIG undefined FUN_146f5e632(void)

void FUN_146f5e632(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14475cc44(*(undefined8 *)(param_2 + 0x18),local_30);
  FUN_146f5d890(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e69a FUN_146f5e69a body=121 status=ok
// SIG undefined FUN_146f5e69a(void)

void FUN_146f5e69a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_146f5dbd2();
  local_28 = local_38;
  local_20 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(*(undefined8 *)(param_2 + 0x20));
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e714 FUN_146f5e714 body=201 status=ok
// SIG undefined FUN_146f5e714(void)

ulonglong FUN_146f5e714(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  int local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0x28) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_14475cc44(*(undefined8 *)(param_2 + 0x18),&local_30);
  FUN_14475cc44(uVar1,&local_40);
  uVar4 = (undefined7)((ulonglong)&local_40 >> 8);
  if (local_28 == local_38) {
    uVar3 = CONCAT71(uVar4,1);
    if (1 < local_28) {
      iVar2 = wcscmp(local_30,local_40);
      uVar3 = CONCAT71(uVar4,iVar2 == 0);
    }
  }
  else {
    uVar3 = CONCAT71(uVar4,local_38 + local_28 == 1);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146f5e7ee FUN_146f5e7ee body=100 status=ok
// SIG undefined FUN_146f5e7ee(void)

undefined4 FUN_146f5e7ee(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14475cc44(*(undefined8 *)(param_2 + 0x18),&local_28);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  uVar1 = (local_20 + (uint)(local_20 == 0)) * 3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x10000);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e854 FUN_146f5e854 body=102 status=ok
// SIG undefined FUN_146f5e854(void)

void FUN_146f5e854(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14475cc44(*(undefined8 *)(param_2 + 0x18),local_30);
  FUN_146f5d890(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e8bc FUN_146f5e8bc body=121 status=ok
// SIG undefined FUN_146f5e8bc(void)

void FUN_146f5e8bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_146f5dbd2();
  local_28 = local_38;
  local_20 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(*(undefined8 *)(param_2 + 0x20));
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5e936 FUN_146f5e936 body=201 status=ok
// SIG undefined FUN_146f5e936(void)

ulonglong FUN_146f5e936(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  int local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0x28) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_14475cc44(*(undefined8 *)(param_2 + 0x18),&local_30);
  FUN_14475cc44(uVar1,&local_40);
  uVar4 = (undefined7)((ulonglong)&local_40 >> 8);
  if (local_28 == local_38) {
    uVar3 = CONCAT71(uVar4,1);
    if (1 < local_28) {
      iVar2 = wcscmp(local_30,local_40);
      uVar3 = CONCAT71(uVar4,iVar2 == 0);
    }
  }
  else {
    uVar3 = CONCAT71(uVar4,local_38 + local_28 == 1);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146f5ea10 FUN_146f5ea10 body=100 status=ok
// SIG undefined FUN_146f5ea10(void)

undefined4 FUN_146f5ea10(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14475cc44(*(undefined8 *)(param_2 + 0x18),&local_28);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  uVar1 = (local_20 + (uint)(local_20 == 0)) * 3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x10000);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5ebc4 FUN_146f5ebc4 body=509 status=ok
// SIG undefined FUN_146f5ebc4(void)

void FUN_146f5ebc4(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  if ((*(byte *)(param_1 + 0x120) & 2) != 0) {
    return;
  }
  puVar1 = *(uint **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar10 = FUN_146f546d2(uVar2,1);
  if ((uVar10 & 1) == 0) {
    uVar3 = FUN_146f546d2(uVar2,DAT_14c99b858);
    if (uVar3 != 0) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar11 = DAT_14c99c010;
      if (0x44c < uVar3) goto LAB_146f5ecdc;
    }
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(puVar1 + 4));
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[1] = uVar3;
  }
  else {
    uVar3 = FUN_146f546d2(uVar2,1);
    iVar4 = FUN_146f546d2(uVar2,2);
    uVar5 = FUN_146f546d2(uVar2,iVar4 * 8 + 8);
    uVar6 = FUN_146f546d2(uVar2,1);
    iVar7 = FUN_146f546d2(uVar2,2);
    uVar8 = FUN_146f546d2(uVar2,iVar7 * 8 + 8);
    uVar11 = DAT_14c999b78;
    if (uVar8 < 0xc03) {
      uVar9 = 0x80 << ((byte)(iVar4 << 3) & 0x1f);
      uVar9 = (uVar5 ^ uVar9) - uVar9;
      uVar5 = uVar9 ^ 0x7fffffff;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar9;
      }
      *puVar1 = (*puVar1 & 0xfffffff8) + (uVar3 & 1) * 2 + (uVar6 & 1) * 4 + 1;
      puVar1[1] = uVar5;
      FUN_146f5edc2(puVar1,uVar8 + 1);
      FUN_146f59f56(uVar2,*(undefined8 *)(puVar1 + 4),uVar8 * 8);
      *(undefined1 *)(*(longlong *)(puVar1 + 4) + (ulonglong)uVar8) = 0;
      if ((uVar6 & 1) == 0) {
        return;
      }
      if (uVar8 == 0) {
        return;
      }
      uVar3 = 0;
      uVar5 = 0;
      while ((uVar11 = DAT_14c99b8f0, uVar3 != uVar8 && (uVar5 < 3))) {
        uVar5 = uVar5 + 1;
        uVar10 = (ulonglong)uVar3;
        uVar3 = uVar3 + (*(byte *)(*(longlong *)(puVar1 + 4) + uVar10) >> 7);
        if (-1 < (char)*(byte *)(*(longlong *)(puVar1 + 4) + uVar10)) {
          uVar3 = uVar3 + 1;
          uVar5 = 0;
          if (uVar3 == uVar8) {
            return;
          }
        }
      }
    }
LAB_146f5ecdc:
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar11;
    }
  }
  return;
}



// FUNCTION 146f5edc2 FUN_146f5edc2 body=81 status=ok
// SIG undefined FUN_146f5edc2(void)

void FUN_146f5edc2(longlong param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if (*(ushort *)(param_1 + 8) < param_2) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(param_1 + 0x10));
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,param_2 + 3 & 0xfffc,4);
    *(ushort *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  *(ushort *)(param_1 + 10) = param_2;
  return;
}



// FUNCTION 146f5ee14 FUN_146f5ee14 body=437 status=ok
// SIG undefined FUN_146f5ee14(void)

void FUN_146f5ee14(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  short sVar8;
  char cVar9;
  uint *puVar10;
  ushort *puVar11;
  size_t _Size;
  short sVar12;
  undefined1 auStack_878 [32];
  undefined4 *local_858;
  undefined4 local_844;
  undefined8 local_840;
  undefined1 local_838 [2056];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_840 = **(ulonglong **)(param_2 + 0x18);
  puVar4 = *(uint **)(param_2 + 0x20);
  if (local_840 >> 0x20 == 0) {
    puVar10 = (uint *)FUN_1400760c2(&local_840);
    if (((puVar10 != (uint *)0x0) && (*puVar10 < 0x44d)) && (local_840._4_4_ == 0)) {
      (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(puVar4 + 4));
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[1] = *puVar10;
      goto LAB_146f5ee8e;
    }
  }
  puVar11 = (ushort *)FUN_142792290(&local_840);
  uVar3 = *puVar4;
  *puVar4 = uVar3 | 1;
  uVar2 = *puVar11;
  uVar6 = 0x1f;
  if (~(local_840._4_4_ * 2) != 0) {
    for (; ~(local_840._4_4_ * 2) >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  uVar1 = (ulonglong)((int)local_840._4_4_ >> 0x1f ^ local_840._4_4_) * 2 + 1;
  lVar7 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  puVar4[1] = local_840._4_4_;
  *puVar4 = (uVar3 & 0xfffffff9 | 1 | (uVar2 & 1) << 2) +
            (uint)(((uint)lVar7 ^ 0x3f) < (uVar6 ^ 0x1f | 0x20)) * 2;
  if ((uVar2 & 1) == 0) {
    _Size = (ulonglong)(*puVar11 >> 6) + 1;
    FUN_146f5edc2(puVar4,_Size);
    FUN_140024b62(&local_840,local_838);
    memcpy(*(void **)(puVar4 + 4),local_838,_Size);
  }
  else {
    FUN_1427922d0(&local_840,local_838);
    sVar12 = (*puVar11 >> 6) + 1;
    sVar8 = sVar12 * 3;
    FUN_146f5edc2(puVar4,sVar8);
    local_858 = &local_844;
    local_844 = 0;
    puVar5 = *(undefined1 **)(puVar4 + 4);
    cVar9 = FUN_146f5f722(puVar5,sVar8,local_838,sVar12);
    if (cVar9 == '\0') {
      *(undefined2 *)((longlong)puVar4 + 10) = 1;
      *puVar5 = 0;
    }
    else {
      *(undefined2 *)((longlong)puVar4 + 10) = (undefined2)local_844;
    }
  }
LAB_146f5ee8e:
  if ((local_30 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5efca FUN_146f5efca body=446 status=ok
// SIG undefined FUN_146f5efca(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146f5efca(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined1 auStack_1078 [32];
  int *local_1058;
  ulonglong local_1050;
  int local_1044;
  ulonglong local_1040 [512];
  ulonglong *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1078;
  puVar3 = *(uint **)(param_2 + 0x18);
  puVar4 = *(ulonglong **)(param_2 + 0x20);
  if ((*puVar3 & 1) == 0) {
    uVar2 = puVar3[1];
    if ((ulonglong)uVar2 == 0) {
      local_1040[0] = 0;
    }
    else {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      local_1040[0] = (ulonglong)*(uint *)(&DAT_14c892b40 + (ulonglong)uVar2 * 4);
    }
  }
  else {
    if ((*puVar3 & 4) != 0) {
      uVar1 = *(ushort *)((longlong)puVar3 + 10);
      uVar8 = (ulonglong)((uint)uVar1 * 4) / 3;
      local_40 = (ulonglong *)0x0;
      local_34 = 0x800;
      local_38 = ((uint)uVar1 * 4) / 3;
      if (0x600 < uVar1) {
        FUN_146f6a23a(local_1040);
        uVar8 = (ulonglong)local_38;
      }
      local_1058 = &local_1044;
      local_1044 = 0;
      puVar7 = local_40;
      if (local_40 == (ulonglong *)0x0) {
        puVar7 = local_1040;
      }
      cVar6 = FUN_146f5f84a(puVar7,uVar8,*(undefined8 *)(puVar3 + 4),uVar1);
      if (cVar6 == '\0') {
        *puVar4 = 0;
LAB_146f5f16d:
        uVar5 = DAT_14c99b8f0;
        FUN_146f5b89e(param_1);
        if (*(longlong *)(param_1 + 8) == 0) {
          *(undefined8 *)(param_1 + 8) = uVar5;
        }
      }
      else {
        if (local_1044 == 0) goto LAB_146f5f16d;
        puVar7 = local_1040;
        if (local_40 != (ulonglong *)0x0) {
          puVar7 = local_40;
        }
        if (*(short *)((longlong)puVar7 + (ulonglong)(local_1044 - 1) * 2) != 0) goto LAB_146f5f16d;
        FUN_1402790ee(&local_1050,(ulonglong)(local_1044 - 1),puVar7,puVar3[1]);
        *puVar4 = local_1050;
      }
      if (local_40 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146f5f05a;
    }
    FUN_14682cb8a(local_1040,*(ushort *)((longlong)puVar3 + 10) - 1,*(undefined8 *)(puVar3 + 4),
                  puVar3[1]);
  }
  *puVar4 = local_1040[0];
LAB_146f5f05a:
  if ((local_30 ^ (ulonglong)auStack_1078) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5f18a FUN_146f5f18a body=260 status=ok
// SIG undefined FUN_146f5f18a(void)

bool FUN_146f5f18a(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (uint *)param_2[3];
  puVar3 = (uint *)param_2[4];
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar1 = *puVar2;
    if (*(short *)((longlong)puVar3 + 10) == *(short *)((longlong)puVar2 + 10) &&
        (puVar3[1] == puVar2[1] && ((*puVar3 ^ uVar1) & 1) == 0)) {
      bVar5 = true;
      if ((uVar1 & 1) != 0) {
        if ((uVar1 & 4) == 0) {
          iVar4 = FUN_144afd3ce(*(undefined8 *)(puVar2 + 4),*(undefined8 *)(puVar3 + 4));
          bVar5 = iVar4 == 0;
        }
        else {
          local_48 = &local_38;
          local_38 = 0;
          local_40 = 0;
          local_60 = 0;
          local_58 = 0;
          local_68 = *param_2;
          local_50 = puVar2;
          FUN_146f5efca(param_1,&local_68);
          local_50 = (uint *)param_2[4];
          local_48 = &local_40;
          FUN_146f5efca(param_1,&local_68);
          bVar5 = local_38 == local_40;
        }
      }
    }
    else {
      bVar5 = false;
    }
  }
  else {
    bVar5 = *(longlong *)puVar2 == *(longlong *)puVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 146f5f29c FUN_146f5f29c body=117 status=ok
// SIG undefined FUN_146f5f29c(void)

void FUN_146f5f29c(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  void *_Dst;
  
  puVar1 = *(undefined4 **)(param_2 + 0x18);
  puVar2 = *(undefined4 **)(param_2 + 0x20);
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  if (*(ushort *)((longlong)puVar1 + 10) == 0) {
    uVar6 = 0;
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                             (DAT_14c872d28,*(ushort *)((longlong)puVar1 + 10) + 3 & 0xfffffffc,4);
    memcpy(_Dst,*(void **)(puVar1 + 4),(ulonglong)*(ushort *)((longlong)puVar1 + 10));
    uVar6 = *(undefined2 *)((longlong)puVar1 + 10);
  }
  *(undefined2 *)(puVar2 + 2) = uVar6;
  *(undefined2 *)((longlong)puVar2 + 10) = *(undefined2 *)((longlong)puVar1 + 10);
  *(void **)(puVar2 + 4) = _Dst;
  return;
}



// FUNCTION 146f5f312 FUN_146f5f312 body=46 status=ok
// SIG undefined FUN_146f5f312(void)

void FUN_146f5f312(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar1[2]);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



// FUNCTION 146f5f354 FUN_146f5f354 body=80 status=ok
// SIG undefined FUN_146f5f354(void)

undefined8 FUN_146f5f354(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uVar4 = FUN_146f5e408(param_2);
    return uVar4;
  }
  iVar2 = *(int *)(*(undefined8 **)(param_2 + 0x18) + 1);
  iVar1 = *(int *)(*(undefined8 **)(param_2 + 0x20) + 1);
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    iVar2 = wcscmp((wchar_t *)**(undefined8 **)(param_2 + 0x18),
                   (wchar_t *)**(undefined8 **)(param_2 + 0x20));
    uVar3 = CONCAT44(extraout_var,iVar2);
    bVar5 = iVar2 == 0;
  }
  else {
    uVar3 = (ulonglong)(uint)(iVar1 + iVar2);
    bVar5 = iVar1 + iVar2 == 1;
  }
  return CONCAT71((int7)(uVar3 >> 8),bVar5);
}



// FUNCTION 146f5f446 FUN_146f5f446 body=253 status=ok
// SIG undefined FUN_146f5f446(void)

void FUN_146f5f446(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = **(ulonglong **)(param_2 + 0x18);
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  if ((((local_20 >> 0x20 == 0) && (puVar2 = (uint *)FUN_1400760c2(), puVar2 != (uint *)0x0)) &&
      (*puVar2 < 0x44d)) && (local_20._4_4_ == 0)) {
    *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) & 0xfc;
    puVar1[1] = *puVar2;
    *puVar1 = 0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = (puVar1[2] & 0xfffffffc) + 1;
    if ((*(longlong **)(param_1 + 0xf0) == (longlong *)0x0) ||
       (lVar4 = **(longlong **)(param_1 + 0xf0), lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x58);
    }
    if ((longlong)*(int *)(lVar4 + 0x20) == 0) {
LAB_146f5f50e:
      lVar4 = 0;
    }
    else {
      plVar5 = *(longlong **)(lVar4 + 0x18);
      lVar3 = (longlong)*(int *)(lVar4 + 0x20) << 4;
      lVar4 = 0;
      do {
        if (*plVar5 == DAT_14c9995fc) {
          if (plVar5 == (longlong *)0x0) goto LAB_146f5f50e;
          lVar4 = plVar5[1];
          break;
        }
        plVar5 = plVar5 + 2;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    FUN_142a7d542(lVar4,&local_24,local_20);
    *puVar1 = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f5f544 FUN_146f5f544 body=117 status=ok
// SIG undefined FUN_146f5f544(void)

undefined8 FUN_146f5f544(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_2 + 0xf0);
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(*plVar1 + 0x28) + 0x58);
  }
  if ((longlong)*(int *)(lVar2 + 0x20) == 0) {
LAB_146f5f5a2:
    lVar2 = 0;
  }
  else {
    plVar4 = *(longlong **)(lVar2 + 0x18);
    lVar3 = (longlong)*(int *)(lVar2 + 0x20) << 4;
    lVar2 = 0;
    do {
      if (*plVar4 == DAT_14c9995fc) {
        if (plVar4 == (longlong *)0x0) goto LAB_146f5f5a2;
        lVar2 = plVar4[1];
        break;
      }
      plVar4 = plVar4 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  FUN_142a7d5c8(lVar2,param_1,param_3,plVar1[2]);
  return param_1;
}



// FUNCTION 146f5f5ba FUN_146f5f5ba body=148 status=ok
// SIG undefined FUN_146f5f5ba(void)

void FUN_146f5f5ba(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = *(undefined4 **)(param_2 + 0x18);
  puVar3 = *(ulonglong **)(param_2 + 0x20);
  if ((*(byte *)(puVar2 + 2) & 1) == 0) {
    uVar1 = puVar2[1];
    if ((ulonglong)uVar1 == 0) {
      local_20 = 0;
    }
    else {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      local_20 = (ulonglong)*(uint *)(&DAT_14c892b40 + (ulonglong)uVar1 * 4);
    }
  }
  else {
    FUN_146f5f544(&local_20,param_1,*puVar2);
  }
  *puVar3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5f650 FUN_146f5f650 body=197 status=ok
// SIG undefined FUN_146f5f650(void)

bool FUN_146f5f650(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  uint *local_30;
  uint *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = *(uint **)(param_2 + 0x18);
  puVar2 = *(uint **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) != '\x01') {
    bVar3 = *(longlong *)puVar1 == *(longlong *)puVar2;
    goto LAB_146f5f69c;
  }
  if (puVar2[1] != puVar1[1] || ((puVar2[2] ^ puVar1[2]) & 1) != 0) goto LAB_146f5f68f;
  if ((puVar1[2] & 1) != 0) {
    if (((byte)(*puVar1 >> 0x17) & 1) == ((byte)(*puVar2 >> 0x17) & 1)) {
      if (*puVar1 != *puVar2) {
LAB_146f5f68f:
        bVar3 = false;
        goto LAB_146f5f69c;
      }
    }
    else {
      FUN_146f5f544(&local_28,param_1);
      FUN_146f5f544(&local_30,param_1,*puVar2);
      if (local_28 != local_30) goto LAB_146f5f68f;
    }
  }
  bVar3 = true;
LAB_146f5f69c:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 146f5f722 FUN_146f5f722 body=295 status=ok
// SIG undefined FUN_146f5f722(void)

ulonglong FUN_146f5f722(longlong param_1,uint param_2,longlong param_3,uint param_4,uint *param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  if (param_4 * 3 <= param_2) {
    uVar8 = 0;
    if (param_4 != 0) {
      uVar8 = 0;
      uVar5 = 0;
      do {
        iVar6 = (int)uVar5;
        uVar1 = *(ushort *)(param_3 + uVar5 * 2);
        uVar3 = iVar6 + 1;
        uVar5 = (ulonglong)uVar3;
        uVar4 = param_4 - 1;
        if (uVar3 < param_4 - 1) {
          uVar4 = uVar3;
        }
        uVar9 = (ulonglong)uVar8;
        if ((uVar1 & 0xfc00) == 0xd800) {
          uVar2 = *(ushort *)(param_3 + (ulonglong)uVar4 * 2);
          if ((uVar2 & 0xfc00) != 0xdc00) goto LAB_146f5f7d6;
          uVar4 = (uint)uVar2 + (uint)uVar1 * 0x400 + 0xfca02400;
          *(byte *)(param_1 + uVar9) = (byte)(uVar4 >> 0xe) | 0x80;
          *(byte *)(param_1 + (ulonglong)(uVar8 + 1)) = (byte)(uVar4 >> 7) | 0x80;
          *(byte *)(param_1 + (ulonglong)(uVar8 + 2)) = (byte)uVar2 & 0x7f;
          uVar8 = uVar8 + 3;
          uVar5 = (ulonglong)(iVar6 + 2);
        }
        else {
LAB_146f5f7d6:
          bVar7 = (byte)uVar1;
          if (uVar1 < 0x80) {
            uVar8 = uVar8 + 1;
            *(byte *)(param_1 + uVar9) = bVar7;
          }
          else if (uVar1 < 0x400) {
            *(byte *)(param_1 + uVar9) = (byte)(uVar1 >> 7) | 0x80;
            *(byte *)(param_1 + (ulonglong)(uVar8 + 1)) = bVar7 & 0x7f;
            uVar8 = uVar8 + 2;
          }
          else {
            *(byte *)(param_1 + uVar9) = (byte)(uVar1 >> 0xe) | 0x80;
            *(byte *)(param_1 + (ulonglong)(uVar8 + 1)) = (byte)(uVar1 >> 7) | 0x80;
            *(byte *)(param_1 + (ulonglong)(uVar8 + 2)) = bVar7 & 0x7f;
            uVar8 = uVar8 + 3;
          }
        }
      } while ((uint)uVar5 < param_4);
    }
    *param_5 = uVar8;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),(uint)uVar5 == param_4);
  }
  return uVar5;
}



// FUNCTION 146f5f84a FUN_146f5f84a body=354 status=ok
// SIG undefined FUN_146f5f84a(void)

ulonglong FUN_146f5f84a(longlong param_1,uint param_2,longlong param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 unaff_RSI;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (param_2 < (param_4 * 4) / 3) {
      return 0;
    }
    if (param_2 != 0) {
      uVar5 = 0;
      uVar7 = 0;
      while( true ) {
        uVar4 = (uint)uVar5;
        bVar1 = *(byte *)(param_3 + (ulonglong)uVar7);
        bVar6 = (char)bVar1 >> 7;
        uVar9 = (ulonglong)(bVar6 & 1) + (ulonglong)uVar7;
        if (param_4 <= (uint)uVar9) break;
        bVar12 = (char)*(byte *)(param_3 + uVar9) >> 7;
        lVar10 = (uVar9 & 0xffffffff) + (ulonglong)(bVar12 & 1);
        uVar7 = (uint)lVar10;
        if (param_4 <= uVar7) break;
        uVar11 = (*(byte *)(param_3 + uVar9) & 0x7f | (bVar1 & 0x7f) << (bVar6 & 7)) << (bVar12 & 7)
        ;
        uVar8 = *(byte *)(param_3 + lVar10) & 0x7f | uVar11;
        bVar13 = 0x10ffff < uVar11;
        bVar14 = (uVar8 & 0xfffffffe) == 0xfffe;
        bVar3 = bVar14 || bVar13;
        if (bVar14 || bVar13) {
          uVar8 = 0xfffd;
        }
        if (uVar11 - 0x10000 < 0x100000) {
          if (param_2 <= uVar4 + 1) break;
          *(ushort *)(param_1 + uVar5 * 2) = (ushort)((uVar8 & 0xffff) >> 10) | 0xd800;
          *(ushort *)(param_1 + (ulonglong)(uVar4 + 1) * 2) = (ushort)uVar8 & 0x3ff | 0xdc00;
          uVar4 = uVar4 + 2;
        }
        else {
          uVar2 = (ushort)uVar8;
          if (bVar14 || bVar13) {
            uVar2 = 0xfffd;
          }
          uVar4 = uVar4 + 1;
          *(ushort *)(param_1 + uVar5 * 2) = uVar2;
        }
        uVar5 = (ulonglong)uVar4;
        uVar7 = uVar7 + 1;
        if (((param_4 <= uVar7) || (param_2 <= uVar4)) || (bVar3)) goto LAB_146f5f9a6;
      }
      bVar3 = true;
LAB_146f5f9a6:
      uVar5 = (ulonglong)bVar3 ^ 1;
    }
  }
  *param_5 = uVar4;
  return uVar5 & 0xffffffff;
}



// FUNCTION 146f5f9ac FUN_146f5f9ac body=117 status=ok
// SIG undefined FUN_146f5f9ac(void)

void FUN_146f5f9ac(undefined8 *param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(ushort *)((longlong)param_1 + 4) < param_2) {
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1[1]);
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,param_2 + 3 & 0xfffffffc,4);
    *(ushort *)((longlong)param_1 + 4) = param_2;
    *(ushort *)((longlong)param_1 + 6) = param_2;
    param_1[1] = uVar1;
  }
  else {
    *(ushort *)((longlong)param_1 + 6) = param_2;
  }
  return;
}



// FUNCTION 146f5fa22 FUN_146f5fa22 body=320 status=ok
// SIG undefined FUN_146f5fa22(void)

bool FUN_146f5fa22(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  bVar1 = *(byte *)(param_2 + 5);
  if ((bVar1 == 1) && ((*(byte *)(plVar2 + 0x17) & 0x40) == 0)) {
    iVar5 = memcmp((void *)param_2[3],(void *)param_2[4],
                   (ulonglong)*(uint *)((longlong)plVar2 + 0x74));
    bVar10 = iVar5 == 0;
  }
  else {
    lVar3 = *plVar2;
    plVar9 = (longlong *)plVar2[2];
    uVar8 = (ulonglong)*(ushort *)((longlong)plVar2 + 0x7c);
    local_60 = 0;
    local_70[1] = 0;
    local_48 = bVar1;
    if (uVar8 == 0) {
      bVar10 = true;
    }
    else {
      local_70[0] = plVar9[1];
      uVar6 = (ulonglong)*(uint *)(lVar3 + (ulonglong)bVar1 * 4);
      local_58 = param_2[3] + uVar6;
      local_50 = uVar6 + param_2[4];
      cVar4 = (**(code **)(*plVar9 + 0x38))(param_1);
      if (cVar4 == '\0') {
        bVar10 = false;
      }
      else {
        plVar9 = plVar9 + 3;
        uVar6 = 1;
        do {
          uVar7 = uVar6;
          if (uVar8 == uVar7) break;
          local_70[0] = *plVar9;
          uVar6 = (ulonglong)*(uint *)(lVar3 + (ulonglong)bVar1 * 4 + uVar7 * 8);
          local_58 = param_2[3] + uVar6;
          local_50 = uVar6 + param_2[4];
          cVar4 = (**(code **)(plVar9[-1] + 0x38))(param_1,local_70);
          plVar9 = plVar9 + 2;
          uVar6 = uVar7 + 1;
        } while (cVar4 != '\0');
        bVar10 = uVar8 <= uVar7;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5fb64 FUN_146f5fb64 body=158 status=ok
// SIG undefined FUN_146f5fb64(void)

void FUN_146f5fb64(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  lVar1 = *(longlong *)(local_40 + 0x10);
  if ((*(byte *)(lVar1 + 0xb8) & 0x40) != 0) {
    local_38 = 0;
    local_30 = (undefined4)param_2[2];
    local_28 = param_2[4];
    FUN_146f5ff3e();
    memcpy((void *)param_2[4],(void *)param_2[3],(ulonglong)*(uint *)(lVar1 + 0x74));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    memcpy((void *)param_2[4],(void *)param_2[3],(ulonglong)*(uint *)(lVar1 + 0x74));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
}



// FUNCTION 146f5fc16 FUN_146f5fc16 body=186 status=ok
// SIG undefined FUN_146f5fc16(void)

void FUN_146f5fc16(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
  if (uVar1 != 0) {
    lVar3 = *plVar2;
    lVar4 = plVar2[2];
    lVar5 = 0;
    do {
      local_58 = 0;
      local_68 = *(undefined8 *)(lVar4 + 8 + lVar5 * 2);
      local_50 = (ulonglong)*(uint *)(lVar3 + lVar5) + param_2[3];
      local_48 = (ulonglong)*(uint *)(lVar3 + 4 + lVar5) + param_2[4];
      local_60 = param_2[1];
      (**(code **)(*(longlong *)(lVar4 + lVar5 * 2) + 0x28))(param_1,&local_68);
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5fcd2 FUN_146f5fcd2 body=205 status=ok
// SIG undefined FUN_146f5fcd2(void)

void FUN_146f5fcd2(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
  if ((ulonglong)uVar1 != 0) {
    lVar3 = *plVar2;
    lVar4 = plVar2[2];
    lVar5 = 0;
    do {
      local_60 = 0;
      local_68 = 0;
      local_70 = *(undefined8 *)(lVar4 + 8 + lVar5 * 2);
      local_58 = (ulonglong)*(uint *)(lVar3 + 4 + lVar5) + param_2[3];
      local_50 = (ulonglong)*(uint *)(lVar3 + lVar5) + param_2[4];
      (**(code **)(*(longlong *)(lVar4 + lVar5 * 2) + 0x30))(param_1,&local_70);
      if (*(longlong *)(param_1 + 8) != 0) break;
      bVar6 = (ulonglong)uVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f5fda0 FUN_146f5fda0 body=205 status=ok
// SIG undefined FUN_146f5fda0(void)

undefined8 FUN_146f5fda0(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
    if ((ulonglong)uVar1 == 0) {
      uVar5 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
    }
    else {
      lVar3 = *plVar2;
      lVar4 = plVar2[2];
      lVar6 = 0;
      do {
        local_58 = 0;
        local_60 = 0;
        local_68 = *(undefined8 *)(lVar4 + 8 + lVar6 * 2);
        local_50 = (ulonglong)*(uint *)(lVar3 + lVar6) + param_2[3];
        uVar5 = (**(code **)(*(longlong *)(lVar4 + lVar6 * 2) + 0x40))(param_1,&local_68);
        if ((char)uVar5 == '\0') break;
        bVar7 = (ulonglong)uVar1 * 8 + -8 != lVar6;
        lVar6 = lVar6 + 8;
      } while (bVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146f5ff3e FUN_146f5ff3e body=194 status=ok
// SIG undefined FUN_146f5ff3e(void)

void FUN_146f5ff3e(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  if (((*(byte *)(plVar2 + 0x17) & 0x40) != 0) &&
     (uVar1 = *(ushort *)((longlong)plVar2 + 0x7c), uVar1 != 0)) {
    lVar3 = *plVar2;
    lVar4 = plVar2[2];
    lVar5 = plVar2[3];
    uVar6 = 0;
    do {
      if ((*(byte *)(lVar5 + uVar6) & 1) != 0) {
        local_58 = 0;
        local_60 = 0;
        local_68 = *(undefined8 *)(lVar4 + 8 + uVar6 * 8);
        local_50 = (ulonglong)*(uint *)(lVar3 + 4 + uVar6 * 4) + param_2[3];
        (**(code **)(*(longlong *)(lVar4 + uVar6 * 8) + 0x50))(param_1,&local_68);
      }
      uVar6 = uVar6 + 2;
    } while ((uint)uVar1 * 2 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f60002 FUN_146f60002 body=42 status=ok
// SIG undefined FUN_146f60002(void)

void FUN_146f60002(undefined8 param_1,longlong *param_2)

{
  FUN_146f3b614(param_1,param_2[4],param_2 + 1,param_2[3],*(undefined8 *)(*param_2 + 0x10));
  return;
}



// FUNCTION 146f600ac FUN_146f600ac body=237 status=ok
// SIG undefined FUN_146f600ac(void)

undefined8 * FUN_146f600ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)puVar1 + 9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11) = 0;
  FUN_146f602ae(puVar1 + 1);
  if ((longlong)*(int *)(puVar1 + 2) != 0) {
    memset((void *)puVar1[1],0,(longlong)*(int *)(puVar1 + 2) << 7);
  }
  *puVar1 = param_1[1];
  *(undefined1 *)(puVar1 + 3) = DAT_14c75f499;
  *param_1 = puVar1;
  FUN_1446f470e(&local_38,L"Undefined",1);
  FUN_146f6019a(param_1,local_38);
  FUN_1446f470e(&local_40,L"OOBChannel",1);
  FUN_146f6019a(param_1,local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6019a FUN_146f6019a body=121 status=ok
// SIG undefined FUN_146f6019a(void)

ulonglong FUN_146f6019a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[2];
  iVar1 = (int)param_1[3];
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar4 = uVar5 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_146f60207;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1446f84a2(param_1 + 2,iVar1);
    lVar2 = param_1[2];
  }
  *(longlong *)(lVar2 + uVar5 * 8) = param_2;
  FUN_146f602ae(*param_1 + 8,(int)param_1[3]);
LAB_146f60207:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146f60214 FUN_146f60214 body=72 status=ok
// SIG undefined FUN_146f60214(void)

void FUN_146f60214(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    thunk_FUN_1400020a8(lVar1,0x20);
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f6025c FUN_146f6025c body=82 status=ok
// SIG undefined FUN_146f6025c(void)

void FUN_146f6025c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  param_1[1] = *param_2;
  plVar1 = (longlong *)*param_1;
  FUN_146f602ae(plVar1 + 1);
  if ((longlong)*(int *)(plVar1 + 2) != 0) {
    memset((void *)plVar1[1],0,(longlong)*(int *)(plVar1 + 2) << 7);
  }
  *plVar1 = param_1[1];
  *(undefined1 *)(plVar1 + 3) = DAT_14c75f499;
  return;
}



// FUNCTION 146f602ae FUN_146f602ae body=109 status=ok
// SIG undefined FUN_146f602ae(void)

void FUN_146f602ae(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f6a300(param_1,iVar1);
    }
    FUN_146f6a2ed((longlong)iVar1 * 0x80 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146f6a386(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f60368 FUN_146f60368 body=43 status=ok
// SIG undefined FUN_146f60368(void)

undefined8 FUN_146f60368(undefined8 param_1,int param_2)

{
  FUN_146f56b38();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 146f60394 FUN_146f60394 body=78 status=ok
// SIG undefined FUN_146f60394(void)

undefined8 * FUN_146f60394(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f9ed30;
  if (param_1[7] != 0) {
    FUN_146f11920();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146f603e2 FUN_146f603e2 body=43 status=ok
// SIG undefined FUN_146f603e2(void)

undefined8 FUN_146f603e2(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f6040e FUN_146f6040e body=64 status=ok
// SIG undefined FUN_146f6040e(void)

undefined8 * FUN_146f6040e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f9f140;
  if (param_1[2] != 0) {
    FUN_146f11920();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146f60467 FUN_146f60467 body=37 status=ok
// SIG undefined FUN_146f60467(void)

void FUN_146f60467(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  **(undefined1 **)(param_2 + 0x18) = uVar1;
  return;
}



// FUNCTION 146f604aa FUN_146f604aa body=37 status=ok
// SIG undefined FUN_146f604aa(void)

void FUN_146f604aa(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  **(undefined1 **)(param_2 + 0x18) = uVar1;
  return;
}



// FUNCTION 146f604e9 FUN_146f604e9 body=131 status=ok
// SIG undefined FUN_146f604e9(void)

void FUN_146f604e9(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  bVar3 = **(longlong **)(param_2 + 0x18) == **(longlong **)(param_2 + 0x20);
  FUN_146f5435e(*(undefined8 *)(param_1 + 0xe0),bVar3,1);
  if (bVar3) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uVar2 = **(ulonglong **)(param_2 + 0x18);
  FUN_146f5435e(uVar1,uVar2 & 0xffffffff,0x20);
  FUN_146f5435e(uVar1,uVar2 >> 0x20,0x20);
  return;
}



// FUNCTION 146f6056c FUN_146f6056c body=107 status=ok
// SIG undefined FUN_146f6056c(void)

void FUN_146f6056c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    uVar2 = FUN_146f546d2(uVar1,0x20);
    lVar4 = FUN_146f546d2(uVar1,0x20);
    **(ulonglong **)(param_2 + 0x18) = lVar4 << 0x20 | (ulonglong)uVar2;
  }
  else {
    **(undefined8 **)(param_2 + 0x18) = **(undefined8 **)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 146f605e0 FUN_146f605e0 body=101 status=ok
// SIG undefined FUN_146f605e0(void)

void FUN_146f605e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar2) {
    FUN_146f5435e(uVar3,cVar1 == '\0',1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_146f5435e(uVar3,cVar1,bVar2);
  return;
}



// FUNCTION 146f6064c FUN_146f6064c body=71 status=ok
// SIG undefined FUN_146f6064c(void)

void FUN_146f6064c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f60689;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f60689:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f6069a FUN_146f6069a body=113 status=ok
// SIG undefined FUN_146f6069a(void)

void FUN_146f6069a(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined1 *)param_2[3],
                  *(undefined1 *)param_2[4],&DAT_149f9fa74 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f60712 FUN_146f60712 body=161 status=ok
// SIG undefined FUN_146f60712(void)

void FUN_146f60712(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined1 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined1 *)param_2[4],
                  &DAT_149f9fa74 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f607e0 FUN_146f607e0 body=93 status=ok
// SIG undefined FUN_146f607e0(void)

void FUN_146f607e0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  uVar1 = DAT_14c99c018;
  cVar4 = (char)*(undefined4 *)(*param_2 + 0x10);
  cVar2 = *(char *)param_2[3] + cVar4;
  cVar3 = *(char *)(*param_2 + 0x11);
  if (cVar2 < cVar3) {
    cVar3 = cVar2;
  }
  if (cVar3 < cVar4) {
    cVar3 = cVar4;
  }
  if (cVar3 == cVar2) {
    *(char *)param_2[4] = cVar2;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
  }
  return;
}



// FUNCTION 146f6088c FUN_146f6088c body=90 status=ok
// SIG undefined FUN_146f6088c(void)

ulonglong FUN_146f6088c(undefined8 param_1,ulonglong *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  uVar4 = *param_2;
  if (*(byte *)(uVar4 + 0x12) < 9) {
    cVar1 = *(char *)param_2[3];
    uVar3 = 0;
    cVar5 = *(char *)(uVar4 + 0x11);
    if (cVar1 < *(char *)(uVar4 + 0x11)) {
      cVar5 = cVar1;
    }
    cVar6 = (char)*(undefined4 *)(uVar4 + 0x10);
    if (cVar5 < cVar6) {
      cVar5 = cVar6;
    }
    if (cVar1 == cVar5) {
      lVar2 = *(longlong *)(uVar4 + 0x18);
      if (lVar2 != 0) {
        uVar3 = FUN_1427e11e8(lVar2,(longlong)cVar1);
        uVar4 = uVar3 & 0xffffffff;
      }
      uVar4 = CONCAT71((int7)(uVar3 >> 8),lVar2 == 0 | (byte)uVar4);
      goto LAB_146f608dc;
    }
  }
  uVar4 = 0;
LAB_146f608dc:
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 146f608ec FUN_146f608ec body=101 status=ok
// SIG undefined FUN_146f608ec(void)

void FUN_146f608ec(longlong param_1,longlong *param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = *(short *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,sVar2 == 0,1);
    if (sVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,sVar2,bVar1);
  return;
}



// FUNCTION 146f60958 FUN_146f60958 body=72 status=ok
// SIG undefined FUN_146f60958(void)

void FUN_146f60958(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined2 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f60995;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f60995:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f609a6 FUN_146f609a6 body=113 status=ok
// SIG undefined FUN_146f609a6(void)

void FUN_146f609a6(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined2 *)param_2[3],
                  *(undefined2 *)param_2[4],&DAT_149f9fa80 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f60a1e FUN_146f60a1e body=163 status=ok
// SIG undefined FUN_146f60a1e(void)

void FUN_146f60a1e(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined2 local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined2 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined2 *)param_2[4],
                  &DAT_149f9fa80 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f60af0 FUN_146f60af0 body=97 status=ok
// SIG undefined FUN_146f60af0(void)

void FUN_146f60af0(longlong param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  
  uVar3 = DAT_14c99c018;
  sVar5 = (short)*(undefined4 *)(*param_2 + 0x10);
  sVar4 = *(short *)param_2[3] + sVar5;
  sVar1 = *(short *)(*param_2 + 0x12);
  sVar2 = sVar4;
  if (sVar1 <= sVar4) {
    sVar2 = sVar1;
  }
  if (sVar2 < sVar5) {
    sVar2 = sVar5;
  }
  if (sVar2 == sVar4) {
    *(short *)param_2[4] = sVar4;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 146f60ba8 FUN_146f60ba8 body=93 status=ok
// SIG undefined FUN_146f60ba8(void)

ulonglong FUN_146f60ba8(undefined8 param_1,ulonglong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar4 = *param_2;
  if (*(byte *)(uVar4 + 0x14) < 0x11) {
    uVar1 = *(ushort *)param_2[3];
    uVar3 = (ulonglong)uVar1;
    uVar5 = *(ushort *)(uVar4 + 0x12);
    if ((short)uVar1 < (short)*(ushort *)(uVar4 + 0x12)) {
      uVar5 = uVar1;
    }
    uVar6 = (ushort)*(undefined4 *)(uVar4 + 0x10);
    if ((short)uVar5 < (short)uVar6) {
      uVar5 = uVar6;
    }
    if (uVar1 == uVar5) {
      lVar2 = *(longlong *)(uVar4 + 0x18);
      if (lVar2 != 0) {
        uVar3 = FUN_1427e11e8(lVar2,(longlong)(short)uVar1);
        uVar4 = uVar3 & 0xffffffff;
      }
      uVar4 = CONCAT71((int7)(uVar3 >> 8),lVar2 == 0 | (byte)uVar4);
      goto LAB_146f60bfb;
    }
  }
  uVar4 = 0;
LAB_146f60bfb:
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 146f60c0c FUN_146f60c0c body=100 status=ok
// SIG undefined FUN_146f60c0c(void)

void FUN_146f60c0c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,iVar2 == 0,1);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,iVar2,bVar1);
  return;
}



// FUNCTION 146f60c76 FUN_146f60c76 body=72 status=ok
// SIG undefined FUN_146f60c76(void)

void FUN_146f60c76(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    uVar4 = FUN_146f546d2(uVar3,1);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) goto LAB_146f60cb4;
  }
  uVar5 = FUN_146f546d2(uVar3,bVar1);
LAB_146f60cb4:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f60cc4 FUN_146f60cc4 body=111 status=ok
// SIG undefined FUN_146f60cc4(void)

void FUN_146f60cc4(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)param_2[3],
                  *(undefined4 *)param_2[4],&DAT_149f9fa8c + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f60d3a FUN_146f60d3a body=119 status=ok
// SIG undefined FUN_146f60d3a(void)

void FUN_146f60d3a(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 == '\0') {
    *(undefined4 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),(undefined4 *)param_2[3],*(undefined4 *)param_2[4]
                  ,&DAT_149f9fa8c + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f60ddc FUN_146f60ddc body=89 status=ok
// SIG undefined FUN_146f60ddc(void)

void FUN_146f60ddc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_14c99c018;
  iVar1 = *(int *)(*param_2 + 0x10);
  iVar4 = *(int *)(*param_2 + 0x14);
  iVar3 = *(int *)param_2[3] + iVar1;
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  if (iVar4 < iVar1) {
    iVar4 = iVar1;
  }
  if (iVar4 == iVar3) {
    *(int *)param_2[4] = iVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f60e7e FUN_146f60e7e body=88 status=ok
// SIG undefined FUN_146f60e7e(void)

ulonglong FUN_146f60e7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar4 = *param_2;
  if (*(byte *)(lVar4 + 0x18) < 0x21) {
    iVar1 = *(int *)param_2[3];
    iVar3 = *(int *)(lVar4 + 0x10);
    iVar6 = *(int *)(lVar4 + 0x14);
    if (iVar1 < *(int *)(lVar4 + 0x14)) {
      iVar6 = iVar1;
    }
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    if (iVar1 == iVar6) {
      lVar2 = *(longlong *)(lVar4 + 0x20);
      if (lVar2 != 0) {
        lVar4 = FUN_1427e11e8(lVar2);
        iVar3 = (int)lVar4;
      }
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar2 == 0 | (byte)iVar3);
      goto LAB_146f60ecc;
    }
  }
  uVar5 = 0;
LAB_146f60ecc:
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 146f60edc FUN_146f60edc body=138 status=ok
// SIG undefined FUN_146f60edc(void)

void FUN_146f60edc(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = *(ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if ((0xf < bVar1) && (FUN_146f5435e(uVar3,uVar2 == 0,1), uVar2 == 0)) {
    return;
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  FUN_146f5435e(uVar3,uVar2 & 0xffffffff,uVar4);
  if (bVar1 < 0x21) {
    return;
  }
  FUN_146f5435e(uVar3,uVar2 >> 0x20,bVar1 - 0x20);
  return;
}



// FUNCTION 146f60f6c FUN_146f60f6c body=117 status=ok
// SIG undefined FUN_146f60f6c(void)

void FUN_146f60f6c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar2 = (ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      goto LAB_146f60fbe;
    }
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  uVar4 = FUN_146f546d2(uVar3,uVar4);
  uVar5 = (ulonglong)uVar4;
  if (0x20 < bVar1) {
    lVar6 = FUN_146f546d2(uVar3,bVar1 - 0x20);
    uVar5 = uVar5 | lVar6 << 0x20;
  }
LAB_146f60fbe:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f60fe8 FUN_146f60fe8 body=112 status=ok
// SIG undefined FUN_146f60fe8(void)

void FUN_146f60fe8(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)param_2[3],
                  *(undefined8 *)param_2[4],&DAT_149f9fa98 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f6105e FUN_146f6105e body=120 status=ok
// SIG undefined FUN_146f6105e(void)

void FUN_146f6105e(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55d4b(*(undefined8 *)(param_1 + 0xd8),(undefined8 *)param_2[3],*(undefined8 *)param_2[4]
                  ,&DAT_149f9fa98 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f61102 FUN_146f61102 body=91 status=ok
// SIG undefined FUN_146f61102(void)

void FUN_146f61102(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = DAT_14c99c018;
  lVar1 = *(longlong *)(*param_2 + 0x10);
  lVar4 = *(longlong *)(*param_2 + 0x18);
  lVar3 = *(longlong *)param_2[3] + lVar1;
  if (lVar3 < lVar4) {
    lVar4 = lVar3;
  }
  if (lVar4 < lVar1) {
    lVar4 = lVar1;
  }
  if (lVar4 == lVar3) {
    *(longlong *)param_2[4] = lVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f611b0 FUN_146f611b0 body=89 status=ok
// SIG undefined FUN_146f611b0(void)

ulonglong FUN_146f611b0(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = *param_2;
  if (*(byte *)(uVar3 + 0x20) < 0x41) {
    uVar1 = *(ulonglong *)param_2[3];
    uVar4 = *(ulonglong *)(uVar3 + 0x10);
    uVar5 = *(ulonglong *)(uVar3 + 0x18);
    if ((longlong)uVar1 < (longlong)*(ulonglong *)(uVar3 + 0x18)) {
      uVar5 = uVar1;
    }
    if ((longlong)uVar5 < (longlong)uVar4) {
      uVar5 = uVar4;
    }
    if (uVar1 == uVar5) {
      lVar2 = *(longlong *)(uVar3 + 0x28);
      if (lVar2 != 0) {
        uVar3 = FUN_1427e11e8(lVar2);
        uVar4 = uVar3 & 0xffffffff;
      }
      uVar3 = CONCAT71((int7)(uVar3 >> 8),lVar2 == 0 | (byte)uVar4);
      goto LAB_146f611ff;
    }
  }
  uVar3 = 0;
LAB_146f611ff:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 146f61210 FUN_146f61210 body=101 status=ok
// SIG undefined FUN_146f61210(void)

void FUN_146f61210(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar2) {
    FUN_146f5435e(uVar3,cVar1 == '\0',1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_146f5435e(uVar3,cVar1,bVar2);
  return;
}



// FUNCTION 146f6127c FUN_146f6127c body=71 status=ok
// SIG undefined FUN_146f6127c(void)

void FUN_146f6127c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f612b9;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f612b9:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f612ca FUN_146f612ca body=113 status=ok
// SIG undefined FUN_146f612ca(void)

void FUN_146f612ca(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined1 *)param_2[3],
                  *(undefined1 *)param_2[4],&DAT_149f9faa4 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f61342 FUN_146f61342 body=161 status=ok
// SIG undefined FUN_146f61342(void)

void FUN_146f61342(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined1 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined1 *)param_2[4],
                  &DAT_149f9faa4 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6140e FUN_146f6140e body=93 status=ok
// SIG undefined FUN_146f6140e(void)

void FUN_146f6140e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = DAT_14c99c018;
  bVar4 = (byte)*(undefined4 *)(*param_2 + 0x10);
  bVar2 = *(char *)param_2[3] + bVar4;
  bVar3 = *(byte *)(*param_2 + 0x11);
  if (bVar2 < bVar3) {
    bVar3 = bVar2;
  }
  if (bVar3 < bVar4) {
    bVar3 = bVar4;
  }
  if (bVar3 == bVar2) {
    *(byte *)param_2[4] = bVar2;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
  }
  return;
}



// FUNCTION 146f614ba FUN_146f614ba body=86 status=ok
// SIG undefined FUN_146f614ba(void)

ulonglong FUN_146f614ba(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  
  lVar4 = *param_2;
  if (*(byte *)(lVar4 + 0x12) < 9) {
    bVar1 = *(byte *)param_2[3];
    bVar2 = (byte)*(undefined4 *)(lVar4 + 0x10);
    bVar6 = *(byte *)(lVar4 + 0x11);
    if (bVar1 < *(byte *)(lVar4 + 0x11)) {
      bVar6 = bVar1;
    }
    if (bVar6 < bVar2) {
      bVar6 = bVar2;
    }
    if (bVar1 == bVar6) {
      lVar3 = *(longlong *)(lVar4 + 0x18);
      if (lVar3 != 0) {
        lVar4 = FUN_1427e11e8(lVar3);
        bVar6 = (byte)lVar4;
      }
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar3 == 0 | bVar6);
      goto LAB_146f61506;
    }
  }
  uVar5 = 0;
LAB_146f61506:
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 146f61516 FUN_146f61516 body=101 status=ok
// SIG undefined FUN_146f61516(void)

void FUN_146f61516(longlong param_1,longlong *param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = *(short *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,sVar2 == 0,1);
    if (sVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,sVar2,bVar1);
  return;
}



// FUNCTION 146f61582 FUN_146f61582 body=72 status=ok
// SIG undefined FUN_146f61582(void)

void FUN_146f61582(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined2 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f615bf;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f615bf:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f615d0 FUN_146f615d0 body=113 status=ok
// SIG undefined FUN_146f615d0(void)

void FUN_146f615d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined2 *)param_2[3],
                  *(undefined2 *)param_2[4],&DAT_149f9fab0 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f61648 FUN_146f61648 body=163 status=ok
// SIG undefined FUN_146f61648(void)

void FUN_146f61648(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined2 local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined2 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined2 *)param_2[4],
                  &DAT_149f9fab0 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f61718 FUN_146f61718 body=97 status=ok
// SIG undefined FUN_146f61718(void)

void FUN_146f61718(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar3 = DAT_14c99c018;
  uVar5 = (ushort)*(undefined4 *)(*param_2 + 0x10);
  uVar4 = *(short *)param_2[3] + uVar5;
  uVar1 = *(ushort *)(*param_2 + 0x12);
  uVar2 = uVar4;
  if (uVar1 <= uVar4) {
    uVar2 = uVar1;
  }
  if (uVar2 < uVar5) {
    uVar2 = uVar5;
  }
  if (uVar2 == uVar4) {
    *(ushort *)param_2[4] = uVar4;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 146f617d0 FUN_146f617d0 body=89 status=ok
// SIG undefined FUN_146f617d0(void)

ulonglong FUN_146f617d0(undefined8 param_1,ulonglong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = *param_2;
  if (*(byte *)(uVar4 + 0x14) < 0x11) {
    uVar1 = *(ushort *)param_2[3];
    uVar2 = *(ushort *)(uVar4 + 0x12);
    if (uVar1 < *(ushort *)(uVar4 + 0x12)) {
      uVar2 = uVar1;
    }
    uVar5 = (ulonglong)uVar2;
    if (uVar2 < (ushort)*(uint *)(uVar4 + 0x10)) {
      uVar5 = (ulonglong)*(uint *)(uVar4 + 0x10);
    }
    if (uVar1 == (ushort)uVar5) {
      lVar3 = *(longlong *)(uVar4 + 0x18);
      if (lVar3 != 0) {
        uVar4 = FUN_1427e11e8(lVar3);
        uVar5 = uVar4 & 0xffffffff;
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),lVar3 == 0 | (byte)uVar5);
      goto LAB_146f6181f;
    }
  }
  uVar4 = 0;
LAB_146f6181f:
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 146f61830 FUN_146f61830 body=100 status=ok
// SIG undefined FUN_146f61830(void)

void FUN_146f61830(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,iVar2 == 0,1);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,iVar2,bVar1);
  return;
}



// FUNCTION 146f6189a FUN_146f6189a body=72 status=ok
// SIG undefined FUN_146f6189a(void)

void FUN_146f6189a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    uVar4 = FUN_146f546d2(uVar3,1);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) goto LAB_146f618d8;
  }
  uVar5 = FUN_146f546d2(uVar3,bVar1);
LAB_146f618d8:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f618e8 FUN_146f618e8 body=111 status=ok
// SIG undefined FUN_146f618e8(void)

void FUN_146f618e8(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)param_2[3],
                  *(undefined4 *)param_2[4],&DAT_149f9fabc + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f6195e FUN_146f6195e body=119 status=ok
// SIG undefined FUN_146f6195e(void)

void FUN_146f6195e(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 == '\0') {
    *(undefined4 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),(undefined4 *)param_2[3],*(undefined4 *)param_2[4]
                  ,&DAT_149f9fabc + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f619fc FUN_146f619fc body=89 status=ok
// SIG undefined FUN_146f619fc(void)

void FUN_146f619fc(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = DAT_14c99c018;
  uVar1 = *(uint *)(*param_2 + 0x10);
  uVar4 = *(uint *)(*param_2 + 0x14);
  uVar3 = *(int *)param_2[3] + uVar1;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if (uVar4 < uVar1) {
    uVar4 = uVar1;
  }
  if (uVar4 == uVar3) {
    *(uint *)param_2[4] = uVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f61a9e FUN_146f61a9e body=87 status=ok
// SIG undefined FUN_146f61a9e(void)

ulonglong FUN_146f61a9e(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  lVar4 = *param_2;
  if (*(byte *)(lVar4 + 0x18) < 0x21) {
    uVar1 = *(uint *)param_2[3];
    uVar3 = *(uint *)(lVar4 + 0x10);
    uVar6 = *(uint *)(lVar4 + 0x14);
    if (uVar1 < *(uint *)(lVar4 + 0x14)) {
      uVar6 = uVar1;
    }
    if (uVar6 < uVar3) {
      uVar6 = uVar3;
    }
    if (uVar1 == uVar6) {
      lVar2 = *(longlong *)(lVar4 + 0x20);
      if (lVar2 != 0) {
        lVar4 = FUN_1427e11e8(lVar2);
        uVar3 = (uint)lVar4;
      }
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar2 == 0 | (byte)uVar3);
      goto LAB_146f61aeb;
    }
  }
  uVar5 = 0;
LAB_146f61aeb:
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 146f61afc FUN_146f61afc body=138 status=ok
// SIG undefined FUN_146f61afc(void)

void FUN_146f61afc(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = *(ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if ((0xf < bVar1) && (FUN_146f5435e(uVar3,uVar2 == 0,1), uVar2 == 0)) {
    return;
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  FUN_146f5435e(uVar3,uVar2 & 0xffffffff,uVar4);
  if (bVar1 < 0x21) {
    return;
  }
  FUN_146f5435e(uVar3,uVar2 >> 0x20,bVar1 - 0x20);
  return;
}



// FUNCTION 146f61b8c FUN_146f61b8c body=117 status=ok
// SIG undefined FUN_146f61b8c(void)

void FUN_146f61b8c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar2 = (ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      goto LAB_146f61bde;
    }
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  uVar4 = FUN_146f546d2(uVar3,uVar4);
  uVar5 = (ulonglong)uVar4;
  if (0x20 < bVar1) {
    lVar6 = FUN_146f546d2(uVar3,bVar1 - 0x20);
    uVar5 = uVar5 | lVar6 << 0x20;
  }
LAB_146f61bde:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f61c08 FUN_146f61c08 body=112 status=ok
// SIG undefined FUN_146f61c08(void)

void FUN_146f61c08(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)param_2[3],
                  *(undefined8 *)param_2[4],&DAT_149f9fac8 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f61c7e FUN_146f61c7e body=120 status=ok
// SIG undefined FUN_146f61c7e(void)

void FUN_146f61c7e(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55d4b(*(undefined8 *)(param_1 + 0xd8),(undefined8 *)param_2[3],*(undefined8 *)param_2[4]
                  ,&DAT_149f9fac8 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f61d1e FUN_146f61d1e body=91 status=ok
// SIG undefined FUN_146f61d1e(void)

void FUN_146f61d1e(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = DAT_14c99c018;
  uVar1 = *(ulonglong *)(*param_2 + 0x10);
  uVar4 = *(ulonglong *)(*param_2 + 0x18);
  uVar3 = *(longlong *)param_2[3] + uVar1;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if (uVar4 < uVar1) {
    uVar4 = uVar1;
  }
  if (uVar4 == uVar3) {
    *(ulonglong *)param_2[4] = uVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f61dcc FUN_146f61dcc body=89 status=ok
// SIG undefined FUN_146f61dcc(void)

ulonglong FUN_146f61dcc(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = *param_2;
  if (*(byte *)(uVar3 + 0x20) < 0x41) {
    uVar1 = *(ulonglong *)param_2[3];
    uVar4 = *(ulonglong *)(uVar3 + 0x10);
    uVar5 = *(ulonglong *)(uVar3 + 0x18);
    if (uVar1 < *(ulonglong *)(uVar3 + 0x18)) {
      uVar5 = uVar1;
    }
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    if (uVar1 == uVar5) {
      lVar2 = *(longlong *)(uVar3 + 0x28);
      if (lVar2 != 0) {
        uVar3 = FUN_1427e11e8(lVar2);
        uVar4 = uVar3 & 0xffffffff;
      }
      uVar3 = CONCAT71((int7)(uVar3 >> 8),lVar2 == 0 | (byte)uVar4);
      goto LAB_146f61e1b;
    }
  }
  uVar3 = 0;
LAB_146f61e1b:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 146f61e26 FUN_146f61e26 body=43 status=ok
// SIG undefined FUN_146f61e26(void)

undefined8 FUN_146f61e26(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f61eab FUN_146f61eab body=123 status=ok
// SIG undefined FUN_146f61eab(void)

void FUN_146f61eab(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  piVar9 = *(int **)(param_2 + 0x18);
  piVar10 = *(int **)(param_2 + 0x20);
  iVar1 = *piVar9;
  iVar2 = piVar9[1];
  iVar3 = piVar9[2];
  iVar4 = piVar9[3];
  iVar5 = *piVar10;
  iVar6 = piVar10[1];
  iVar7 = piVar10[2];
  iVar8 = piVar10[3];
  FUN_146f5435e(*(undefined8 *)(param_1 + 0xe0),
                iVar4 == iVar8 && (iVar3 == iVar7 && (iVar2 == iVar6 && iVar1 == iVar5)),1);
  if (iVar4 == iVar8 && (iVar3 == iVar7 && (iVar2 == iVar6 && iVar1 == iVar5))) {
    return;
  }
  FUN_146f56956(param_1,param_2);
  return;
}



// FUNCTION 146f61f55 FUN_146f61f55 body=71 status=ok
// SIG undefined FUN_146f61f55(void)

void FUN_146f61f55(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    uVar2 = (*(undefined8 **)(param_2 + 0x20))[1];
    *puVar1 = **(undefined8 **)(param_2 + 0x20);
    puVar1[1] = uVar2;
    return;
  }
  FUN_146f569e8(param_1,param_2);
  return;
}



// FUNCTION 146f61fba FUN_146f61fba body=54 status=ok
// SIG undefined FUN_146f61fba(void)

void FUN_146f61fba(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = &PTR_FUN_149f9eaa8;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_146f56a7a(param_2 + 4);
  *(undefined4 *)(param_2 + 1) = 1;
  return;
}



// FUNCTION 146f61ff0 FUN_146f61ff0 body=54 status=ok
// SIG undefined FUN_146f61ff0(void)

void FUN_146f61ff0(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = &PTR_FUN_149f9eaa8;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_146f56a7a(param_2 + 4);
  *(undefined4 *)(param_2 + 1) = 1;
  return;
}



// FUNCTION 146f62076 FUN_146f62076 body=59 status=ok
// SIG undefined FUN_146f62076(void)

undefined8 FUN_146f62076(longlong *param_1)

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



// FUNCTION 146f620c2 FUN_146f620c2 body=40 status=ok
// SIG undefined FUN_146f620c2(void)

void FUN_146f620c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_146f56b38(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 146f6213a FUN_146f6213a body=43 status=ok
// SIG undefined FUN_146f6213a(void)

undefined8 FUN_146f6213a(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 146f62166 FUN_146f62166 body=25 status=ok
// SIG undefined FUN_146f62166(void)

void FUN_146f62166(void)

{
  FUN_146f62180();
  FUN_146f09d18(&DAT_14c99bee0);
  return;
}



// FUNCTION 146f62180 FUN_146f62180 body=194 status=ok
// SIG undefined FUN_146f62180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f62180(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99bf00) {
    FUN_144b3d300(&DAT_14c99bf00);
    if (DAT_14c99bf00 == -1) {
      FUN_1446ddc76(&local_18,"InstancedStruct",1);
      _DAT_14c99bef0 = &DAT_14c99a408;
      _DAT_14c99bef8 = 0;
      _DAT_14c99bee8 = local_18;
      _DAT_14c99bee0 = &PTR_LAB_149f9ed00;
      _Init_thread_footer(&DAT_14c99bf00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f62244 FUN_146f62244 body=52 status=ok
// SIG undefined FUN_146f62244(void)

void FUN_146f62244(longlong *param_1)

{
  FUN_146f62278();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f62278 FUN_146f62278 body=317 status=ok
// SIG undefined FUN_146f62278(void)

void FUN_146f62278(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) != 0) {
        FUN_146f11920();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f623b6 FUN_146f623b6 body=101 status=ok
// SIG undefined FUN_146f623b6(void)

void FUN_146f623b6(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar2) {
    FUN_146f5435e(uVar3,cVar1 == '\0',1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_146f5435e(uVar3,cVar1,bVar2);
  return;
}



// FUNCTION 146f6241c FUN_146f6241c body=88 status=ok
// SIG undefined FUN_146f6241c(void)

void FUN_146f6241c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  
  pcVar2 = (char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar6 = FUN_146f546d2(uVar3,1);
    if ((uVar6 & 1) != 0) {
      cVar5 = '\0';
      goto LAB_146f6246a;
    }
  }
  bVar4 = FUN_146f546d2(uVar3,bVar1);
  cVar5 = (bVar4 ^ (byte)(1 << ((byte)(bVar1 - 1) & 0x1f))) - (char)(1 << (bVar1 - 1 & 0x1f));
LAB_146f6246a:
  *pcVar2 = cVar5;
  return;
}



// FUNCTION 146f62474 FUN_146f62474 body=113 status=ok
// SIG undefined FUN_146f62474(void)

void FUN_146f62474(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),(int)*(char *)param_2[3],(int)*(char *)param_2[4],
                  &DAT_149f9fc90 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f624e6 FUN_146f624e6 body=161 status=ok
// SIG undefined FUN_146f624e6(void)

void FUN_146f624e6(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined1 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55b0f(*(undefined8 *)(param_1 + 0xd8),local_1c,(int)*(char *)param_2[4],
                  &DAT_149f9fc90 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f62638 FUN_146f62638 body=101 status=ok
// SIG undefined FUN_146f62638(void)

void FUN_146f62638(longlong param_1,longlong *param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = *(short *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,sVar2 == 0,1);
    if (sVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,sVar2,bVar1);
  return;
}



// FUNCTION 146f6269e FUN_146f6269e body=89 status=ok
// SIG undefined FUN_146f6269e(void)

void FUN_146f6269e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  short *psVar2;
  undefined8 uVar3;
  ushort uVar4;
  short sVar5;
  ulonglong uVar6;
  
  psVar2 = (short *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar6 = FUN_146f546d2(uVar3,1);
    if ((uVar6 & 1) != 0) {
      sVar5 = 0;
      goto LAB_146f626ec;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
  sVar5 = (uVar4 ^ (ushort)(1 << ((byte)(bVar1 - 1) & 0x1f))) - (short)(1 << (bVar1 - 1 & 0x1f));
LAB_146f626ec:
  *psVar2 = sVar5;
  return;
}



// FUNCTION 146f626f8 FUN_146f626f8 body=113 status=ok
// SIG undefined FUN_146f626f8(void)

void FUN_146f626f8(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),(int)*(short *)param_2[3],
                  (int)*(short *)param_2[4],&DAT_149f9fc9c + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f6276a FUN_146f6276a body=163 status=ok
// SIG undefined FUN_146f6276a(void)

void FUN_146f6276a(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined2 local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined2 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55b0f(*(undefined8 *)(param_1 + 0xd8),local_1c,(int)*(short *)param_2[4],
                  &DAT_149f9fc9c + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f628c6 FUN_146f628c6 body=100 status=ok
// SIG undefined FUN_146f628c6(void)

void FUN_146f628c6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,iVar2 == 0,1);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,iVar2,bVar1);
  return;
}



// FUNCTION 146f6292a FUN_146f6292a body=89 status=ok
// SIG undefined FUN_146f6292a(void)

void FUN_146f6292a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = (int *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar4 = FUN_146f546d2(uVar3,1);
    iVar5 = 0;
    if ((uVar4 & 1) != 0) goto LAB_146f62979;
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
  iVar5 = (uVar4 ^ 1 << ((byte)(bVar1 - 1) & 0x1f)) - (1 << (bVar1 - 1 & 0x1f));
LAB_146f62979:
  *piVar2 = iVar5;
  return;
}



// FUNCTION 146f62984 FUN_146f62984 body=111 status=ok
// SIG undefined FUN_146f62984(void)

void FUN_146f62984(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)param_2[3],
                  *(undefined4 *)param_2[4],&DAT_149f9fca8 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f629f4 FUN_146f629f4 body=119 status=ok
// SIG undefined FUN_146f629f4(void)

void FUN_146f629f4(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    *(undefined4 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55b0f(*(undefined8 *)(param_1 + 0xd8),(undefined4 *)param_2[3],*(undefined4 *)param_2[4]
                  ,&DAT_149f9fca8 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f62b1c FUN_146f62b1c body=138 status=ok
// SIG undefined FUN_146f62b1c(void)

void FUN_146f62b1c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = *(ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if ((0xf < bVar1) && (FUN_146f5435e(uVar3,uVar2 == 0,1), uVar2 == 0)) {
    return;
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  FUN_146f5435e(uVar3,uVar2 & 0xffffffff,uVar4);
  if (bVar1 < 0x21) {
    return;
  }
  FUN_146f5435e(uVar3,uVar2 >> 0x20,bVar1 - 0x20);
  return;
}



// FUNCTION 146f62ba6 FUN_146f62ba6 body=135 status=ok
// SIG undefined FUN_146f62ba6(void)

void FUN_146f62ba6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      lVar7 = 0;
      goto LAB_146f62c0c;
    }
  }
  bVar6 = 0x20;
  if (bVar1 < 0x20) {
    bVar6 = bVar1;
  }
  uVar4 = FUN_146f546d2(uVar3,bVar6);
  uVar5 = (ulonglong)uVar4;
  if (0x20 < bVar1) {
    lVar7 = FUN_146f546d2(uVar3,bVar1 - 0x20);
    uVar5 = uVar5 | lVar7 << 0x20;
  }
  lVar7 = (uVar5 ^ 1L << ((ulonglong)(byte)(bVar1 - 1) & 0x3f)) - (1L << (bVar1 - 1 & 0x3f));
LAB_146f62c0c:
  *plVar2 = lVar7;
  return;
}



// FUNCTION 146f62c2e FUN_146f62c2e body=112 status=ok
// SIG undefined FUN_146f62c2e(void)

void FUN_146f62c2e(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)param_2[3],
                  *(undefined8 *)param_2[4],&DAT_149f9fcb4 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f62c9e FUN_146f62c9e body=120 status=ok
// SIG undefined FUN_146f62c9e(void)

void FUN_146f62c9e(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55c32(*(undefined8 *)(param_1 + 0xd8),(undefined8 *)param_2[3],*(undefined8 *)param_2[4]
                  ,&DAT_149f9fcb4 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f62dda FUN_146f62dda body=101 status=ok
// SIG undefined FUN_146f62dda(void)

void FUN_146f62dda(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar2) {
    FUN_146f5435e(uVar3,cVar1 == '\0',1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_146f5435e(uVar3,cVar1,bVar2);
  return;
}



// FUNCTION 146f62e46 FUN_146f62e46 body=71 status=ok
// SIG undefined FUN_146f62e46(void)

void FUN_146f62e46(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f62e83;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f62e83:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f62e94 FUN_146f62e94 body=113 status=ok
// SIG undefined FUN_146f62e94(void)

void FUN_146f62e94(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined1 *)param_2[3],
                  *(undefined1 *)param_2[4],&DAT_149f9fcc0 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f62f0c FUN_146f62f0c body=161 status=ok
// SIG undefined FUN_146f62f0c(void)

void FUN_146f62f0c(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined1 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined1 *)param_2[4],
                  &DAT_149f9fcc0 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f62fda FUN_146f62fda body=93 status=ok
// SIG undefined FUN_146f62fda(void)

void FUN_146f62fda(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  uVar1 = DAT_14c99c018;
  cVar4 = (char)*(undefined4 *)(*param_2 + 0x10);
  cVar2 = *(char *)param_2[3] + cVar4;
  cVar3 = *(char *)(*param_2 + 0x11);
  if (cVar2 < cVar3) {
    cVar3 = cVar2;
  }
  if (cVar3 < cVar4) {
    cVar3 = cVar4;
  }
  if (cVar3 == cVar2) {
    *(char *)param_2[4] = cVar2;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
  }
  return;
}



// FUNCTION 146f630b6 FUN_146f630b6 body=101 status=ok
// SIG undefined FUN_146f630b6(void)

void FUN_146f630b6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = *(short *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,sVar2 == 0,1);
    if (sVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,sVar2,bVar1);
  return;
}



// FUNCTION 146f63122 FUN_146f63122 body=72 status=ok
// SIG undefined FUN_146f63122(void)

void FUN_146f63122(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined2 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f6315f;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f6315f:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f63170 FUN_146f63170 body=113 status=ok
// SIG undefined FUN_146f63170(void)

void FUN_146f63170(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined2 *)param_2[3],
                  *(undefined2 *)param_2[4],&DAT_149f9fccc + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f631e8 FUN_146f631e8 body=163 status=ok
// SIG undefined FUN_146f631e8(void)

void FUN_146f631e8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined2 local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined2 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined2 *)param_2[4],
                  &DAT_149f9fccc + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f632ba FUN_146f632ba body=97 status=ok
// SIG undefined FUN_146f632ba(void)

void FUN_146f632ba(longlong param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  
  uVar3 = DAT_14c99c018;
  sVar5 = (short)*(undefined4 *)(*param_2 + 0x10);
  sVar4 = *(short *)param_2[3] + sVar5;
  sVar1 = *(short *)(*param_2 + 0x12);
  sVar2 = sVar4;
  if (sVar1 <= sVar4) {
    sVar2 = sVar1;
  }
  if (sVar2 < sVar5) {
    sVar2 = sVar5;
  }
  if (sVar2 == sVar4) {
    *(short *)param_2[4] = sVar4;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 146f633a6 FUN_146f633a6 body=100 status=ok
// SIG undefined FUN_146f633a6(void)

void FUN_146f633a6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,iVar2 == 0,1);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,iVar2,bVar1);
  return;
}



// FUNCTION 146f63410 FUN_146f63410 body=72 status=ok
// SIG undefined FUN_146f63410(void)

void FUN_146f63410(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    uVar4 = FUN_146f546d2(uVar3,1);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) goto LAB_146f6344e;
  }
  uVar5 = FUN_146f546d2(uVar3,bVar1);
LAB_146f6344e:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f6345e FUN_146f6345e body=111 status=ok
// SIG undefined FUN_146f6345e(void)

void FUN_146f6345e(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)param_2[3],
                  *(undefined4 *)param_2[4],&DAT_149f9fcd8 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f634d4 FUN_146f634d4 body=119 status=ok
// SIG undefined FUN_146f634d4(void)

void FUN_146f634d4(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 == '\0') {
    *(undefined4 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),(undefined4 *)param_2[3],*(undefined4 *)param_2[4]
                  ,&DAT_149f9fcd8 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f63576 FUN_146f63576 body=89 status=ok
// SIG undefined FUN_146f63576(void)

void FUN_146f63576(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_14c99c018;
  iVar1 = *(int *)(*param_2 + 0x10);
  iVar4 = *(int *)(*param_2 + 0x14);
  iVar3 = *(int *)param_2[3] + iVar1;
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  if (iVar4 < iVar1) {
    iVar4 = iVar1;
  }
  if (iVar4 == iVar3) {
    *(int *)param_2[4] = iVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f63646 FUN_146f63646 body=138 status=ok
// SIG undefined FUN_146f63646(void)

void FUN_146f63646(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = *(ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if ((0xf < bVar1) && (FUN_146f5435e(uVar3,uVar2 == 0,1), uVar2 == 0)) {
    return;
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  FUN_146f5435e(uVar3,uVar2 & 0xffffffff,uVar4);
  if (bVar1 < 0x21) {
    return;
  }
  FUN_146f5435e(uVar3,uVar2 >> 0x20,bVar1 - 0x20);
  return;
}



// FUNCTION 146f636d6 FUN_146f636d6 body=117 status=ok
// SIG undefined FUN_146f636d6(void)

void FUN_146f636d6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar2 = (ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      goto LAB_146f63728;
    }
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  uVar4 = FUN_146f546d2(uVar3,uVar4);
  uVar5 = (ulonglong)uVar4;
  if (0x20 < bVar1) {
    lVar6 = FUN_146f546d2(uVar3,bVar1 - 0x20);
    uVar5 = uVar5 | lVar6 << 0x20;
  }
LAB_146f63728:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f63752 FUN_146f63752 body=112 status=ok
// SIG undefined FUN_146f63752(void)

void FUN_146f63752(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)param_2[3],
                  *(undefined8 *)param_2[4],&DAT_149f9fce4 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f637c8 FUN_146f637c8 body=120 status=ok
// SIG undefined FUN_146f637c8(void)

void FUN_146f637c8(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55d4b(*(undefined8 *)(param_1 + 0xd8),(undefined8 *)param_2[3],*(undefined8 *)param_2[4]
                  ,&DAT_149f9fce4 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f6386c FUN_146f6386c body=91 status=ok
// SIG undefined FUN_146f6386c(void)

void FUN_146f6386c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = DAT_14c99c018;
  lVar1 = *(longlong *)(*param_2 + 0x10);
  lVar4 = *(longlong *)(*param_2 + 0x18);
  lVar3 = *(longlong *)param_2[3] + lVar1;
  if (lVar3 < lVar4) {
    lVar4 = lVar3;
  }
  if (lVar4 < lVar1) {
    lVar4 = lVar1;
  }
  if (lVar4 == lVar3) {
    *(longlong *)param_2[4] = lVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f6394a FUN_146f6394a body=101 status=ok
// SIG undefined FUN_146f6394a(void)

void FUN_146f6394a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_146f639b0(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 146f639b0 FUN_146f639b0 body=133 status=ok
// SIG undefined FUN_146f639b0(void)

void FUN_146f639b0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 146f63a36 FUN_146f63a36 body=101 status=ok
// SIG undefined FUN_146f63a36(void)

void FUN_146f63a36(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_1456af3ba(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 146f63a9b FUN_146f63a9b body=166 status=ok
// SIG undefined FUN_146f63a9b(void)

void FUN_146f63a9b(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5a582();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f63b54 FUN_146f63b54 body=207 status=ok
// SIG undefined FUN_146f63b54(void)

void FUN_146f63b54(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar2 & 1) != 0) {
    lVar1 = param_2[3];
    FUN_146f59a56();
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,*(undefined8 *)(lVar1 + 0xe8));
    *(undefined4 *)(lVar1 + 0xe0) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    memcpy((void *)param_2[3],(void *)param_2[4],0xf0);
    local_38 = 0;
    local_40 = 0;
    local_48 = *param_2;
    local_30 = param_2[4];
    local_28 = param_2[3];
    FUN_146f5a6b8();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_142aa2ea6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f63c5f FUN_146f63c5f body=111 status=ok
// SIG undefined FUN_146f63c5f(void)

void FUN_146f63c5f(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  if (((**(ulonglong **)(param_2 + 0x18) ^ **(ulonglong **)(param_2 + 0x20)) & 0xfffffffffffffff) ==
      0) {
    bVar1 = (int)(*(ulonglong **)(param_2 + 0x18))[1] == (int)(*(ulonglong **)(param_2 + 0x20))[1];
  }
  else {
    bVar1 = false;
  }
  FUN_146f5435e(*(undefined8 *)(param_1 + 0xe0),bVar1,1);
  if (bVar1) {
    return;
  }
  FUN_142aa48d6(param_1,*(undefined8 *)(param_2 + 0x18));
  return;
}



// FUNCTION 146f63d02 FUN_146f63d02 body=72 status=ok
// SIG undefined FUN_146f63d02(void)

void FUN_146f63d02(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) == 0) {
    FUN_142aa4943(param_1,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  uVar2 = (*(undefined8 **)(param_2 + 0x20))[1];
  *puVar1 = **(undefined8 **)(param_2 + 0x20);
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 146f63d4a FUN_146f63d4a body=107 status=ok
// SIG undefined FUN_146f63d4a(void)

void FUN_146f63d4a(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
    FUN_146f23f7c(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8),&local_28,
                  **(undefined8 **)(param_2 + 0x18));
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
  }
  *puVar1 = (undefined4)local_28;
  puVar1[1] = local_28._4_4_;
  puVar1[2] = (undefined4)uStack_20;
  puVar1[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f63db6 FUN_146f63db6 body=108 status=ok
// SIG undefined FUN_146f63db6(void)

void FUN_146f63db6(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 8);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_20 = 0;
    FUN_142a836ac(lVar2,*(undefined8 *)(param_2 + 0x18),*(longlong *)(param_1 + 0xf0) + 0x10,
                  &local_20);
    uVar3 = local_20;
  }
  *puVar1 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f63e37 FUN_146f63e37 body=170 status=ok
// SIG undefined FUN_146f63e37(void)

void FUN_146f63e37(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f63ef4();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f63ef4 FUN_146f63ef4 body=122 status=ok
// SIG undefined FUN_146f63ef4(void)

ulonglong FUN_146f63ef4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (((**(ulonglong **)(param_2 + 0x18) ^ **(ulonglong **)(param_2 + 0x20)) & 0xfffffffffffffff)
        == 0) {
      iVar1 = (int)(*(ulonglong **)(param_2 + 0x18))[1];
      uVar2 = (ulonglong)
              CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == (int)(*(ulonglong **)(param_2 + 0x20))[1]);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    local_10 = **(undefined8 **)(param_2 + 0x18);
    local_18 = **(undefined8 **)(param_2 + 0x20);
    uVar2 = FUN_1401246e4();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f63f6f FUN_146f63f6f body=72 status=ok
// SIG undefined FUN_146f63f6f(void)

void FUN_146f63f6f(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) == 0) {
    FUN_142aa4943(param_1,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  uVar2 = (*(undefined8 **)(param_2 + 0x20))[1];
  *puVar1 = **(undefined8 **)(param_2 + 0x20);
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 146f63fb8 FUN_146f63fb8 body=117 status=ok
// SIG undefined FUN_146f63fb8(void)

void FUN_146f63fb8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  uVar2 = FUN_14479d2ce(*(undefined8 *)(param_2 + 0x18));
  if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
    FUN_146f23f7c(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8),&local_28,uVar2);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
  }
  *puVar1 = (undefined4)local_28;
  puVar1[1] = local_28._4_4_;
  puVar1[2] = (undefined4)uStack_20;
  puVar1[3] = uStack_20._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6402e FUN_146f6402e body=131 status=ok
// SIG undefined FUN_146f6402e(void)

void FUN_146f6402e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 8);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_20 = 0;
    FUN_142a836ac(lVar2,*(undefined8 *)(param_2 + 0x18),*(longlong *)(param_1 + 0xf0) + 0x10,
                  &local_20);
    uVar3 = local_20;
  }
  local_20 = 0;
  FUN_14485c47a(&local_20,uVar3);
  *puVar1 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f640c5 FUN_146f640c5 body=170 status=ok
// SIG undefined FUN_146f640c5(void)

void FUN_146f640c5(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f64182();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f64182 FUN_146f64182 body=159 status=ok
// SIG undefined FUN_146f64182(void)

undefined8 FUN_146f64182(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  bool bVar6;
  
  puVar5 = *(ulonglong **)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    puVar4 = *(ulonglong **)(param_2 + 0x20);
    if (((*puVar5 ^ *puVar4) & 0xfffffffffffffff) != 0) {
      return 0;
    }
    bVar6 = (int)puVar5[1] == (int)puVar4[1];
  }
  else {
    uVar1 = *puVar5;
    if ((uVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(uVar1);
    }
    puVar5 = (ulonglong *)puVar5[1];
    puVar2 = *(ulonglong **)(param_2 + 0x20);
    uVar3 = *puVar2;
    if ((uVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(uVar3);
    }
    if (uVar1 == 0) {
      puVar5 = (ulonglong *)0x0;
    }
    puVar4 = (ulonglong *)0x0;
    if (uVar3 != 0) {
      puVar4 = (ulonglong *)puVar2[1];
    }
    bVar6 = uVar1 == uVar3 && puVar5 == puVar4;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),bVar6);
}



// FUNCTION 146f64221 FUN_146f64221 body=72 status=ok
// SIG undefined FUN_146f64221(void)

void FUN_146f64221(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) == 0) {
    FUN_142aa4943(param_1,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  uVar2 = (*(undefined8 **)(param_2 + 0x20))[1];
  *puVar1 = **(undefined8 **)(param_2 + 0x20);
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 146f6426a FUN_146f6426a body=107 status=ok
// SIG undefined FUN_146f6426a(void)

void FUN_146f6426a(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
    FUN_146f23f7c(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8),&local_28,
                  **(undefined8 **)(param_2 + 0x18));
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
  }
  *puVar1 = (undefined4)local_28;
  puVar1[1] = local_28._4_4_;
  puVar1[2] = (undefined4)uStack_20;
  puVar1[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f643cc FUN_146f643cc body=166 status=ok
// SIG undefined FUN_146f643cc(void)

void FUN_146f643cc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5d2d0();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f64485 FUN_146f64485 body=71 status=ok
// SIG undefined FUN_146f64485(void)

void FUN_146f64485(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    uVar2 = (*(undefined8 **)(param_2 + 0x20))[1];
    *puVar1 = **(undefined8 **)(param_2 + 0x20);
    puVar1[1] = uVar2;
    return;
  }
  FUN_146f5d104(param_1,param_2);
  return;
}



// FUNCTION 146f6457a FUN_146f6457a body=301 status=ok
// SIG undefined FUN_146f6457a(void)

void FUN_146f6457a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = 0x3ff0000000000000;
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar1,7);
  lVar5 = 0x3ff0000000000000;
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_146f546d2(uVar1,0x20);
    lVar5 = FUN_146f546d2(uVar1,0x14);
    uVar7 = lVar5 << 0x20 | (ulonglong)uVar4;
    lVar5 = 0x4000000000000000;
    if (uVar7 != 0) {
      lVar5 = uVar7 + 0x3ff0000000000000;
    }
  }
  lVar6 = 0x3ff0000000000000;
  if ((uVar3 & 2) != 0) {
    uVar4 = FUN_146f546d2(uVar1,0x20);
    lVar6 = FUN_146f546d2(uVar1,0x14);
    uVar7 = lVar6 << 0x20 | (ulonglong)uVar4;
    lVar6 = 0x4000000000000000;
    if (uVar7 != 0) {
      lVar6 = uVar7 + 0x3ff0000000000000;
    }
  }
  if ((uVar3 & 4) != 0) {
    uVar4 = FUN_146f546d2(uVar1,0x20);
    lVar8 = FUN_146f546d2(uVar1,0x14);
    uVar7 = lVar8 << 0x20 | (ulonglong)uVar4;
    lVar8 = uVar7 + 0x3ff0000000000000;
    if (uVar7 == 0) {
      lVar8 = 0x4000000000000000;
    }
  }
  plVar2 = *(longlong **)(param_2 + 0x18);
  *plVar2 = lVar5;
  plVar2[1] = lVar6;
  plVar2[2] = lVar8;
  *(uint *)(plVar2 + 3) = uVar3;
  *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
  return;
}



// FUNCTION 146f646a7 FUN_146f646a7 body=166 status=ok
// SIG undefined FUN_146f646a7(void)

void FUN_146f646a7(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f64760();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f64760 FUN_146f64760 body=212 status=ok
// SIG undefined FUN_146f64760(void)

undefined8 FUN_146f64760(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    bVar4 = plVar1[2] == plVar2[2] && (plVar1[1] == plVar2[1] && *plVar1 == *plVar2);
    uVar3 = (ulonglong)CONCAT31((int3)((uint)(int)plVar1[3] >> 8),(int)plVar1[3] == (int)plVar2[3]);
  }
  else {
    FUN_146f64836(&local_48);
    FUN_146f64836(&local_68,plVar2);
    bVar4 = local_38 == local_58;
    uVar3 = CONCAT71((int7)((local_50 ^ local_30) >> 8),
                     -1 < (longlong)(local_50 ^ local_30) &
                     -(local_40 == local_60 && local_48 == local_68));
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f64836 FUN_146f64836 body=312 status=ok
// SIG undefined FUN_146f64836(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f64836(undefined1 (*param_1) [16],undefined8 *param_2)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined8 *)*param_1 = *param_2;
  *(undefined8 *)(*param_1 + 8) = uVar4;
  *(undefined8 *)param_1[1] = uVar5;
  *(undefined8 *)(param_1[1] + 8) = uVar6;
  uVar4 = DAT_14c8463e8;
  if (9.99999993922529e-09 <
      *(double *)(param_1[1] + 8) * *(double *)(param_1[1] + 8) +
      *(double *)param_1[1] * *(double *)param_1[1] +
      *(double *)*param_1 * *(double *)*param_1 +
      *(double *)(*param_1 + 8) * *(double *)(*param_1 + 8)) {
    auVar15 = *param_1;
    dVar8 = auVar15._0_8_;
    uVar10 = auVar15._0_4_;
    uVar11 = auVar15._4_4_;
    dVar1 = auVar15._8_8_;
    dVar12 = *(double *)param_1[1];
    dVar3 = *(double *)(param_1[1] + 8);
    dVar13 = dVar12 * dVar12 + dVar8 * dVar8;
    dVar17 = dVar3 * dVar3 + dVar1 * dVar1;
    auVar14._0_8_ = dVar13 + dVar17;
    auVar14._8_8_ = dVar13 + dVar17;
    auVar15._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - auVar14._8_8_));
    auVar15._0_8_ = -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - auVar14._0_8_));
    iVar7 = movmskpd((int)param_1,auVar15);
    if (iVar7 == 0) {
      dVar8 = *(double *)(*param_1 + 8);
    }
    else {
      auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
      auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
      auVar15 = sqrtpd(auVar14,auVar14);
      auVar15 = divpd(_DAT_149934d80,auVar15);
      auVar16._8_8_ = dVar3 * auVar15._8_8_;
      auVar16._0_8_ = dVar12 * auVar15._0_8_;
      auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar9);
      uVar2 = (ulonglong)(dVar8 * auVar15._0_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
      uVar10 = (undefined4)uVar2;
      uVar11 = (undefined4)(uVar2 >> 0x20);
      dVar8 = (double)((ulonglong)(dVar1 * auVar15._8_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_));
      param_1[1] = auVar16;
      dVar12 = auVar16._0_8_;
    }
    if (1.0 <= (double)CONCAT44(uVar11,uVar10)) {
      uVar10 = 0;
      uVar11 = 0x3ff00000;
    }
    if ((double)CONCAT44(uVar11,uVar10) <= -1.0) {
      uVar10 = 0;
      uVar11 = 0xbff00000;
    }
    *(ulonglong *)*param_1 = CONCAT44(uVar11,uVar10);
    if (1.0 <= dVar8) {
      dVar8 = 1.0;
    }
    if (dVar8 <= -1.0) {
      dVar8 = -1.0;
    }
    *(double *)(*param_1 + 8) = dVar8;
    if (1.0 <= dVar12) {
      dVar12 = 1.0;
    }
    if (dVar12 <= -1.0) {
      dVar12 = -1.0;
    }
    *(double *)param_1[1] = dVar12;
    return;
  }
  *(undefined8 *)param_1[1] = DAT_14c8463e0;
  *(undefined8 *)(param_1[1] + 8) = uVar4;
  uVar4 = DAT_14c8463d8;
  *(undefined8 *)*param_1 = DAT_14c8463d0;
  *(undefined8 *)(*param_1 + 8) = uVar4;
  return;
}



// FUNCTION 146f6496e FUN_146f6496e body=79 status=ok
// SIG undefined FUN_146f6496e(void)

void FUN_146f6496e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar6 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar6 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar5;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    return;
  }
  FUN_146f6457a(param_1,param_2);
  return;
}



// FUNCTION 146f649be FUN_146f649be body=501 status=ok
// SIG undefined FUN_146f649be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f649be(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 (*pauVar11) [16];
  
  pauVar11 = *(undefined1 (**) [16])(param_2 + 0x18);
  pdVar1 = *(double **)(param_2 + 0x20);
  auVar23 = *pauVar11;
  dVar6 = auVar23._0_8_;
  uVar18 = auVar23._0_4_;
  uVar19 = auVar23._4_4_;
  dVar2 = auVar23._8_8_;
  auVar23 = pauVar11[1];
  dVar21 = auVar23._0_8_;
  dVar25 = auVar23._8_8_;
  dVar20 = *(double *)(*pauVar11 + 8);
  uVar16 = SUB84(dVar20,0);
  uVar17 = (uint)((ulonglong)dVar20 >> 0x20);
  if (*(double *)(pauVar11[1] + 8) * *(double *)(pauVar11[1] + 8) +
      dVar21 * dVar21 + dVar6 * dVar6 + dVar20 * dVar20 <= 9.99999993922529e-09) {
    uVar18 = 0;
    uVar19 = 0;
    uVar16 = 0;
    uVar17 = 0;
    auVar23 = ZEXT816(0x3ff0000000000000) << 0x40;
  }
  else {
    dVar20 = dVar21 * dVar21 + dVar6 * dVar6;
    dVar24 = dVar25 * dVar25 + dVar2 * dVar2;
    auVar22._0_8_ = dVar20 + dVar24;
    auVar22._8_8_ = dVar20 + dVar24;
    lVar14 = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - auVar22._8_8_));
    auVar9._8_4_ = (int)lVar14;
    auVar9._0_8_ = -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - auVar22._0_8_));
    auVar9._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar10 = movmskpd((int)pauVar11,auVar9);
    pauVar11 = (undefined1 (*) [16])(ulonglong)uVar10;
    if (uVar10 != 0) {
      uVar15 = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
      auVar23 = sqrtpd(auVar22,auVar22);
      auVar23 = divpd(_DAT_149934d80,auVar23);
      uVar5 = (ulonglong)(dVar6 * auVar23._0_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
      uVar18 = (undefined4)uVar5;
      uVar19 = (undefined4)(uVar5 >> 0x20);
      uVar5 = (ulonglong)(dVar2 * auVar23._8_8_) & uVar15;
      uVar16 = (undefined4)uVar5;
      uVar17 = (uint)(uVar5 >> 0x20);
      auVar3._8_4_ = (int)uVar15;
      auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
      auVar3._12_4_ = (int)(uVar15 >> 0x20);
      auVar7._8_8_ = dVar25 * auVar23._8_8_;
      auVar7._0_8_ = dVar21 * auVar23._0_8_;
      auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar7,auVar3);
      dVar21 = auVar23._0_8_;
      dVar25 = auVar23._8_8_;
    }
    if (1.0 <= (double)CONCAT44(uVar19,uVar18)) {
      uVar18 = 0;
      uVar19 = 0x3ff00000;
    }
    if ((double)CONCAT44(uVar19,uVar18) <= -1.0) {
      uVar18 = 0;
      uVar19 = 0xbff00000;
    }
    if (1.0 <= (double)CONCAT44(uVar17,uVar16)) {
      uVar16 = 0;
      uVar17 = 0x3ff00000;
    }
    if ((double)CONCAT44(uVar17,uVar16) <= -1.0) {
      uVar16 = 0;
      uVar17 = 0xbff00000;
    }
    if (1.0 <= auVar23._0_8_) {
      auVar23._0_8_ = 0x3ff0000000000000;
    }
    if (auVar23._0_8_ <= -1.0) {
      auVar23._0_8_ = 0xbff0000000000000;
    }
    auVar8._8_8_ = dVar25;
    auVar8._0_8_ = dVar21;
    auVar23 = blendpd(auVar23,auVar8,2);
  }
  auVar4._4_4_ = uVar19;
  auVar4._0_4_ = uVar18;
  auVar4._8_4_ = uVar16;
  auVar4._12_4_ = uVar17;
  uVar10 = movmskpd((int)pauVar11,auVar4);
  uVar12 = (uVar17 & 0x80000000) >> 0x1b;
  uVar13 = movmskpd(uVar12,auVar23);
  dVar20 = ABS((double)CONCAT44(uVar19,uVar18)) + 1.0;
  dVar6 = ABS((double)CONCAT44(uVar17,uVar16)) + 1.0;
  dVar21 = ABS(auVar23._0_8_) + 1.0;
  *pdVar1 = dVar20;
  pdVar1[1] = dVar6;
  pdVar1[2] = dVar21;
  *(uint *)(pdVar1 + 3) =
       (uint)(dVar20 != 1.0) + (uint)(dVar6 != 1.0) * 2 + (uint)(dVar21 != 1.0) * 4 |
       (auVar23._12_4_ & 0x80000000) >> 0x19 | (uVar13 & 1) << 5 | uVar12 + (uVar10 & 1) * 8;
  *(undefined4 *)((longlong)pdVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 146f64d24 FUN_146f64d24 body=191 status=ok
// SIG undefined FUN_146f64d24(void)

void FUN_146f64d24(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar1,7);
  iVar7 = 0x3f800000;
  if ((uVar3 & 1) != 0) {
    iVar4 = FUN_146f546d2(uVar1,0x17);
    iVar7 = 0x40000000;
    if (iVar4 != 0) {
      iVar7 = iVar4 + 0x3f800000;
    }
  }
  iVar4 = 0x3f800000;
  if ((uVar3 & 2) != 0) {
    iVar5 = FUN_146f546d2(uVar1,0x17);
    iVar4 = 0x40000000;
    if (iVar5 != 0) {
      iVar4 = iVar5 + 0x3f800000;
    }
  }
  iVar5 = 0x3f800000;
  if ((uVar3 & 4) != 0) {
    iVar6 = FUN_146f546d2(uVar1,0x17);
    iVar5 = 0x40000000;
    if (iVar6 != 0) {
      iVar5 = iVar6 + 0x3f800000;
    }
  }
  piVar2 = *(int **)(param_2 + 0x18);
  *piVar2 = iVar7;
  piVar2[1] = iVar4;
  piVar2[2] = iVar5;
  piVar2[3] = uVar3;
  return;
}



// FUNCTION 146f64de3 FUN_146f64de3 body=166 status=ok
// SIG undefined FUN_146f64de3(void)

void FUN_146f64de3(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f64e9c();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f64e9c FUN_146f64e9c body=194 status=ok
// SIG undefined FUN_146f64e9c(void)

undefined4 FUN_146f64e9c(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(uint **)(param_2 + 0x18);
  puVar2 = *(uint **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uVar4 = puVar1[2] ^ puVar2[2] | puVar1[1] ^ puVar2[1] | *puVar1 ^ *puVar2;
    uVar3 = CONCAT31((int3)(uVar4 >> 8),puVar1[3] == puVar2[3] && uVar4 == 0);
  }
  else {
    FUN_146f64f60(&local_38);
    FUN_146f64f60(&local_48,puVar2);
    uVar3 = CONCAT31((int3)((local_3c ^ local_2c) >> 8),
                     -1 < (int)(local_3c ^ local_2c) &
                     -(local_34 == local_44 && local_38 == local_48) & local_30 == local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f64f60 FUN_146f64f60 body=259 status=ok
// SIG undefined FUN_146f64f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f64f60(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar5 = param_2[1];
  *(undefined8 *)*param_1 = *param_2;
  *(undefined8 *)(*param_1 + 8) = uVar5;
  uVar5 = _DAT_14c846348;
  if (1e-08 < *(float *)(*param_1 + 0xc) * *(float *)(*param_1 + 0xc) +
              *(float *)(*param_1 + 8) * *(float *)(*param_1 + 8) +
              *(float *)*param_1 * *(float *)*param_1 +
              *(float *)(*param_1 + 4) * *(float *)(*param_1 + 4)) {
    fVar10 = *(float *)*param_1;
    fVar8 = *(float *)(*param_1 + 4);
    fVar3 = *(float *)(*param_1 + 8);
    fVar4 = *(float *)(*param_1 + 0xc);
    fVar7 = fVar10 * fVar10 + fVar8 * fVar8;
    fVar9 = fVar3 * fVar3 + fVar4 * fVar4;
    auVar11._0_4_ = fVar9 + fVar7;
    auVar11._4_4_ = fVar9 + fVar7;
    auVar11._8_4_ = fVar7 + fVar9;
    auVar11._12_4_ = fVar7 + fVar9;
    auVar12._4_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._4_4_ - auVar11._4_4_));
    auVar12._0_4_ = -(uint)(0.01 < ABS((float)DAT_1499314a0 - auVar11._0_4_));
    auVar12._8_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._8_4_ - auVar11._8_4_));
    auVar12._12_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._12_4_ - auVar11._12_4_));
    iVar6 = movmskps((int)param_1,auVar12);
    if (iVar6 == 0) {
      auVar13 = ZEXT416(*(uint *)(*param_1 + 8));
    }
    else {
      auVar12 = sqrtps(auVar11,auVar11);
      auVar12 = divps(_DAT_1499314a0,auVar12);
      auVar1._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
      auVar1._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
      auVar1._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
      auVar1._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
      auVar2._4_4_ = fVar8 * auVar12._4_4_;
      auVar2._0_4_ = fVar10 * auVar12._0_4_;
      auVar2._8_4_ = fVar3 * auVar12._8_4_;
      auVar2._12_4_ = fVar4 * auVar12._12_4_;
      auVar12 = blendvps(_DAT_149932320,auVar2,auVar1);
      *param_1 = auVar12;
      fVar8 = auVar12._4_4_;
      fVar10 = auVar12._0_4_;
      auVar13._8_8_ = auVar12._8_8_;
      auVar13._0_8_ = auVar13._8_8_;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= -1.0) {
      fVar10 = -1.0;
    }
    *(float *)*param_1 = fVar10;
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar8 <= -1.0) {
      fVar8 = -1.0;
    }
    *(float *)(*param_1 + 4) = fVar8;
    if (1.0 <= auVar13._0_4_) {
      auVar13._0_4_ = 0x3f800000;
    }
    if (auVar13._0_4_ <= -1.0) {
      auVar13._0_4_ = 0xbf800000;
    }
    *(int *)(*param_1 + 8) = auVar13._0_4_;
    return;
  }
  *(undefined8 *)*param_1 = ram0x00014c846340;
  *(undefined8 *)(*param_1 + 8) = uVar5;
  return;
}



// FUNCTION 146f65063 FUN_146f65063 body=71 status=ok
// SIG undefined FUN_146f65063(void)

void FUN_146f65063(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    uVar2 = (*(undefined8 **)(param_2 + 0x20))[1];
    *puVar1 = **(undefined8 **)(param_2 + 0x20);
    puVar1[1] = uVar2;
    return;
  }
  FUN_146f64d24(param_1,param_2);
  return;
}



// FUNCTION 146f650aa FUN_146f650aa body=458 status=ok
// SIG undefined FUN_146f650aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f650aa(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 (*pauVar8) [16];
  
  pauVar8 = *(undefined1 (**) [16])(param_2 + 0x18);
  pfVar1 = *(float **)(param_2 + 0x20);
  auVar14 = *pauVar8;
  fVar12 = auVar14._0_4_;
  fVar18 = auVar14._4_4_;
  fVar16 = auVar14._8_4_;
  fVar17 = auVar14._12_4_;
  fVar19 = *(float *)(*pauVar8 + 8);
  fVar20 = 0.0;
  fVar21 = 0.0;
  auVar15 = _DAT_149932320;
  if (1e-08 < fVar17 * fVar17 + fVar19 * fVar19 + fVar12 * fVar12 + fVar18 * fVar18) {
    fVar22 = fVar12 * fVar12 + fVar18 * fVar18;
    fVar23 = fVar16 * fVar16 + fVar17 * fVar17;
    auVar13._0_4_ = fVar23 + fVar22;
    auVar13._4_4_ = fVar23 + fVar22;
    auVar13._8_4_ = fVar22 + fVar23;
    auVar13._12_4_ = fVar22 + fVar23;
    auVar15._4_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._4_4_ - auVar13._4_4_));
    auVar15._0_4_ = -(uint)(0.01 < ABS((float)DAT_1499314a0 - auVar13._0_4_));
    auVar15._8_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._8_4_ - auVar13._8_4_));
    auVar15._12_4_ = -(uint)(0.01 < ABS(DAT_1499314a0._12_4_ - auVar13._12_4_));
    uVar7 = movmskps((int)pauVar8,auVar15);
    pauVar8 = (undefined1 (*) [16])(ulonglong)uVar7;
    if (uVar7 != 0) {
      auVar14 = sqrtps(auVar13,auVar13);
      auVar14 = divps(_DAT_1499314a0,auVar14);
      auVar2._4_4_ = -(uint)(1e-08 <= auVar13._4_4_);
      auVar2._0_4_ = -(uint)(1e-08 <= auVar13._0_4_);
      auVar2._8_4_ = -(uint)(1e-08 <= auVar13._8_4_);
      auVar2._12_4_ = -(uint)(1e-08 <= auVar13._12_4_);
      auVar4._4_4_ = fVar18 * auVar14._4_4_;
      auVar4._0_4_ = fVar12 * auVar14._0_4_;
      auVar4._8_4_ = fVar16 * auVar14._8_4_;
      auVar4._12_4_ = fVar17 * auVar14._12_4_;
      auVar14 = blendvps(_DAT_149932320,auVar4,auVar2);
      fVar18 = auVar14._4_4_;
      fVar17 = auVar14._12_4_;
      fVar16 = auVar14._8_4_;
      fVar12 = auVar14._0_4_;
      fVar19 = fVar16;
      fVar20 = fVar16;
      fVar21 = fVar17;
    }
    if (1.0 <= auVar14._0_4_) {
      auVar14._0_4_ = 0x3f800000;
    }
    if (auVar14._0_4_ <= -1.0) {
      auVar14._0_4_ = 0xbf800000;
    }
    auVar5._4_4_ = fVar18;
    auVar5._0_4_ = fVar12;
    auVar5._8_4_ = fVar16;
    auVar5._12_4_ = fVar17;
    auVar14 = blendps(auVar14,auVar5,0xc);
    fVar12 = fVar18;
    if (1.0 <= fVar18) {
      fVar12 = 1.0;
    }
    if (fVar12 <= -1.0) {
      fVar12 = -1.0;
    }
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar12;
    auVar3._8_4_ = fVar17;
    auVar3._12_4_ = fVar17;
    auVar14 = insertps(auVar14,auVar3,0x10);
    if (1.0 <= fVar19) {
      fVar19 = 1.0;
    }
    if (fVar19 <= -1.0) {
      fVar19 = -1.0;
    }
    auVar6._4_4_ = fVar21;
    auVar6._0_4_ = fVar19;
    auVar6._8_4_ = fVar20;
    auVar6._12_4_ = fVar21;
    auVar15 = insertps(auVar14,auVar6,0x20);
  }
  uVar7 = movmskps((int)pauVar8,auVar15);
  uVar10 = extractps(auVar15,1);
  uVar11 = extractps(auVar15,2);
  uVar9 = extractps(auVar15,3);
  fVar19 = ABS(auVar15._0_4_) + 1.0;
  fVar18 = ABS(auVar15._4_4_) + 1.0;
  fVar12 = ABS(auVar15._8_4_) + 1.0;
  *pfVar1 = fVar19;
  pfVar1[1] = fVar18;
  pfVar1[2] = fVar12;
  pfVar1[3] = (float)(((uint)(fVar19 != 1.0) |
                      (uint)(uVar9 >> 0x19) & 0x40 |
                      (uint)(uVar11 >> 0x1a) & 0x20 |
                      ((uint)(uVar10 >> 0x1b) & 0x10) + (uVar7 & 1) * 8) + (uint)(fVar18 != 1.0) * 2
                     + (uint)(fVar12 != 1.0) * 4);
  return;
}



// FUNCTION 146f6535c FUN_146f6535c body=126 status=ok
// SIG undefined FUN_146f6535c(void)

void FUN_146f6535c(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  puVar1 = *(ushort **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,*puVar1,3);
  uVar3 = *puVar1;
  if ((uVar3 & 1) != 0) {
    FUN_146f5435e(uVar2,puVar1[1],0x10);
    uVar3 = *puVar1;
  }
  if ((uVar3 & 2) != 0) {
    FUN_146f5435e(uVar2,puVar1[2],0x10);
    uVar3 = *puVar1;
  }
  if ((uVar3 & 4) == 0) {
    return;
  }
  FUN_146f5435e(uVar2,puVar1[3],0x10);
  return;
}



// FUNCTION 146f653da FUN_146f653da body=141 status=ok
// SIG undefined FUN_146f653da(void)

void FUN_146f653da(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar1,3);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_146f546d2(uVar1,0x10);
  }
  if ((uVar3 & 2) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_146f546d2(uVar1,0x10);
  }
  if ((uVar3 & 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_146f546d2(uVar1,0x10);
  }
  puVar2 = *(ushort **)(param_2 + 0x18);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}



// FUNCTION 146f65468 FUN_146f65468 body=230 status=ok
// SIG undefined FUN_146f65468(void)

void FUN_146f65468(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  short sVar10;
  short sVar11;
  
  lVar7 = *(longlong *)(param_2 + 0x18);
  lVar8 = *(longlong *)(param_2 + 0x20);
  sVar1 = *(short *)(lVar7 + 2);
  sVar2 = *(short *)(lVar7 + 4);
  sVar3 = *(short *)(lVar8 + 2);
  sVar4 = *(short *)(lVar8 + 4);
  sVar11 = sVar2 - sVar4;
  sVar5 = *(short *)(lVar7 + 6);
  sVar6 = *(short *)(lVar8 + 6);
  sVar10 = sVar5 - sVar6;
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar9,(sVar1 != sVar3) + (sVar11 != 0) * '\x02' + (sVar10 != 0) * '\x04',3);
  if (sVar1 != sVar3) {
    FUN_146f5435e(uVar9,sVar1 - sVar3,0x10);
  }
  if (sVar2 != sVar4) {
    FUN_146f5435e(uVar9,sVar11,0x10);
  }
  if (sVar5 == sVar6) {
    return;
  }
  FUN_146f5435e(uVar9,sVar10,0x10);
  return;
}



// FUNCTION 146f6554e FUN_146f6554e body=189 status=ok
// SIG undefined FUN_146f6554e(void)

void FUN_146f6554e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  short *psVar3;
  short sVar4;
  ulonglong uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 0x20);
  sVar6 = *(short *)(lVar2 + 2);
  sVar7 = *(short *)(lVar2 + 4);
  sVar8 = *(short *)(lVar2 + 6);
  uVar5 = FUN_146f546d2(uVar1,3);
  if ((uVar5 & 1) != 0) {
    sVar4 = FUN_146f546d2(uVar1,0x10);
    sVar6 = sVar6 + sVar4;
  }
  if ((uVar5 & 2) != 0) {
    sVar4 = FUN_146f546d2(uVar1,0x10);
    sVar7 = sVar7 + sVar4;
  }
  if ((uVar5 & 4) != 0) {
    sVar4 = FUN_146f546d2(uVar1,0x10);
    sVar8 = sVar8 + sVar4;
  }
  psVar3 = *(short **)(param_2 + 0x18);
  *psVar3 = (ushort)(sVar6 != 0) + (ushort)(sVar7 != 0) * 2 + (ushort)(sVar8 != 0) * 4;
  psVar3[1] = sVar6;
  psVar3[2] = sVar7;
  psVar3[3] = sVar8;
  return;
}



// FUNCTION 146f6578a FUN_146f6578a body=20 status=ok
// SIG undefined FUN_146f6578a(void)

byte FUN_146f6578a(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14276fb66(*(undefined8 *)(param_2 + 0x18));
  return bVar1 ^ 1;
}



// FUNCTION 146f6579e FUN_146f6579e body=123 status=ok
// SIG undefined FUN_146f6579e(void)

void FUN_146f6579e(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  
  pbVar1 = *(byte **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,*pbVar1,3);
  bVar3 = *pbVar1;
  if ((bVar3 & 1) != 0) {
    FUN_146f5435e(uVar2,pbVar1[1],8);
    bVar3 = *pbVar1;
  }
  if ((bVar3 & 2) != 0) {
    FUN_146f5435e(uVar2,pbVar1[2],8);
    bVar3 = *pbVar1;
  }
  if ((bVar3 & 4) == 0) {
    return;
  }
  FUN_146f5435e(uVar2,pbVar1[3],8);
  return;
}



// FUNCTION 146f6581a FUN_146f6581a body=139 status=ok
// SIG undefined FUN_146f6581a(void)

void FUN_146f6581a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  bVar3 = FUN_146f546d2(uVar1,3);
  if ((bVar3 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = FUN_146f546d2(uVar1,8);
  }
  if ((bVar3 & 2) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = FUN_146f546d2(uVar1,8);
  }
  if ((bVar3 & 4) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = FUN_146f546d2(uVar1,8);
  }
  pbVar2 = *(byte **)(param_2 + 0x18);
  *pbVar2 = bVar3;
  pbVar2[1] = bVar4;
  pbVar2[2] = bVar5;
  pbVar2[3] = bVar6;
  return;
}



// FUNCTION 146f658a6 FUN_146f658a6 body=204 status=ok
// SIG undefined FUN_146f658a6(void)

void FUN_146f658a6(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  lVar7 = *(longlong *)(param_2 + 0x18);
  lVar8 = *(longlong *)(param_2 + 0x20);
  cVar1 = *(char *)(lVar8 + 1);
  cVar2 = *(char *)(lVar7 + 1);
  cVar3 = *(char *)(lVar7 + 2);
  cVar4 = *(char *)(lVar8 + 2);
  cVar5 = *(char *)(lVar8 + 3);
  cVar6 = *(char *)(lVar7 + 3);
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar9,(cVar2 != cVar1) + (cVar3 != cVar4) * '\x02' + (cVar6 != cVar5) * '\x04',3);
  if (cVar2 != cVar1) {
    FUN_146f5435e(uVar9,*(undefined1 *)(lVar7 + 1),8);
  }
  if (cVar3 != cVar4) {
    FUN_146f5435e(uVar9,*(undefined1 *)(lVar7 + 2),8);
  }
  if (cVar6 == cVar5) {
    return;
  }
  FUN_146f5435e(uVar9,*(undefined1 *)(lVar7 + 3),8);
  return;
}



// FUNCTION 146f65972 FUN_146f65972 body=178 status=ok
// SIG undefined FUN_146f65972(void)

void FUN_146f65972(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 0x20);
  bVar4 = *(byte *)(lVar2 + 1);
  bVar5 = *(byte *)(lVar2 + 2);
  bVar6 = *(byte *)(lVar2 + 3);
  uVar7 = FUN_146f546d2(uVar1,3);
  if ((uVar7 & 1) != 0) {
    bVar4 = FUN_146f546d2(uVar1,8);
  }
  if ((uVar7 & 2) != 0) {
    bVar5 = FUN_146f546d2(uVar1,8);
  }
  if ((uVar7 & 4) != 0) {
    bVar6 = FUN_146f546d2(uVar1,8);
  }
  pbVar3 = *(byte **)(param_2 + 0x18);
  *pbVar3 = (bVar6 != 0) << 2 | (bVar5 != 0) * '\x02' | bVar4 != 0;
  pbVar3[1] = bVar4;
  pbVar3[2] = bVar5;
  pbVar3[3] = bVar6;
  return;
}



// FUNCTION 146f65b8e FUN_146f65b8e body=20 status=ok
// SIG undefined FUN_146f65b8e(void)

byte FUN_146f65b8e(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14276fb66(*(undefined8 *)(param_2 + 0x18));
  return bVar1 ^ 1;
}



// FUNCTION 146f65ba2 FUN_146f65ba2 body=126 status=ok
// SIG undefined FUN_146f65ba2(void)

void FUN_146f65ba2(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  puVar1 = *(ushort **)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar2,*puVar1,3);
  uVar3 = *puVar1;
  if ((uVar3 & 1) != 0) {
    FUN_146f5435e(uVar2,puVar1[1],0x10);
    uVar3 = *puVar1;
  }
  if ((uVar3 & 2) != 0) {
    FUN_146f5435e(uVar2,puVar1[2],0x10);
    uVar3 = *puVar1;
  }
  if ((uVar3 & 4) == 0) {
    return;
  }
  FUN_146f5435e(uVar2,puVar1[3],0x10);
  return;
}



// FUNCTION 146f65c20 FUN_146f65c20 body=141 status=ok
// SIG undefined FUN_146f65c20(void)

void FUN_146f65c20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar3 = FUN_146f546d2(uVar1,3);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_146f546d2(uVar1,0x10);
  }
  if ((uVar3 & 2) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_146f546d2(uVar1,0x10);
  }
  if ((uVar3 & 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_146f546d2(uVar1,0x10);
  }
  puVar2 = *(ushort **)(param_2 + 0x18);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}



// FUNCTION 146f65cae FUN_146f65cae body=230 status=ok
// SIG undefined FUN_146f65cae(void)

void FUN_146f65cae(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  short sVar10;
  short sVar11;
  
  lVar7 = *(longlong *)(param_2 + 0x18);
  lVar8 = *(longlong *)(param_2 + 0x20);
  sVar1 = *(short *)(lVar7 + 2);
  sVar2 = *(short *)(lVar7 + 4);
  sVar3 = *(short *)(lVar8 + 2);
  sVar4 = *(short *)(lVar8 + 4);
  sVar11 = sVar2 - sVar4;
  sVar5 = *(short *)(lVar7 + 6);
  sVar6 = *(short *)(lVar8 + 6);
  sVar10 = sVar5 - sVar6;
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar9,(sVar1 != sVar3) + (sVar11 != 0) * '\x02' + (sVar10 != 0) * '\x04',3);
  if (sVar1 != sVar3) {
    FUN_146f5435e(uVar9,sVar1 - sVar3,0x10);
  }
  if (sVar2 != sVar4) {
    FUN_146f5435e(uVar9,sVar11,0x10);
  }
  if (sVar5 == sVar6) {
    return;
  }
  FUN_146f5435e(uVar9,sVar10,0x10);
  return;
}



// FUNCTION 146f65d94 FUN_146f65d94 body=189 status=ok
// SIG undefined FUN_146f65d94(void)

void FUN_146f65d94(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  short *psVar3;
  short sVar4;
  ulonglong uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 0x20);
  sVar6 = *(short *)(lVar2 + 2);
  sVar7 = *(short *)(lVar2 + 4);
  sVar8 = *(short *)(lVar2 + 6);
  uVar5 = FUN_146f546d2(uVar1,3);
  if ((uVar5 & 1) != 0) {
    sVar4 = FUN_146f546d2(uVar1,0x10);
    sVar6 = sVar6 + sVar4;
  }
  if ((uVar5 & 2) != 0) {
    sVar4 = FUN_146f546d2(uVar1,0x10);
    sVar7 = sVar7 + sVar4;
  }
  if ((uVar5 & 4) != 0) {
    sVar4 = FUN_146f546d2(uVar1,0x10);
    sVar8 = sVar8 + sVar4;
  }
  psVar3 = *(short **)(param_2 + 0x18);
  *psVar3 = (ushort)(sVar6 != 0) + (ushort)(sVar7 != 0) * 2 + (ushort)(sVar8 != 0) * 4;
  psVar3[1] = sVar6;
  psVar3[2] = sVar7;
  psVar3[3] = sVar8;
  return;
}



// FUNCTION 146f65fca FUN_146f65fca body=20 status=ok
// SIG undefined FUN_146f65fca(void)

byte FUN_146f65fca(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = FUN_1467fa81a(*(undefined8 *)(param_2 + 0x18));
  return bVar1 ^ 1;
}



// FUNCTION 146f65fde FUN_146f65fde body=166 status=ok
// SIG undefined FUN_146f65fde(void)

void FUN_146f65fde(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5e714();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f66097 FUN_146f66097 body=199 status=ok
// SIG undefined FUN_146f66097(void)

void FUN_146f66097(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  void *_Dst;
  
  uVar9 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar9 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    uVar7 = (*(undefined8 **)(param_2 + 0x20))[1];
    *puVar1 = **(undefined8 **)(param_2 + 0x20);
    puVar1[1] = uVar7;
    puVar2 = *(undefined4 **)(param_2 + 0x18);
    puVar3 = *(undefined4 **)(param_2 + 0x20);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    *puVar2 = *puVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    if (*(ushort *)((longlong)puVar3 + 6) == 0) {
      uVar8 = 0;
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                               (DAT_14c872d28,*(ushort *)((longlong)puVar3 + 6) + 3 & 0xfffffffc,4);
      memcpy(_Dst,*(void **)(puVar3 + 2),(ulonglong)*(ushort *)((longlong)puVar3 + 6));
      uVar8 = *(undefined2 *)((longlong)puVar3 + 6);
    }
    *(undefined2 *)(puVar2 + 1) = uVar8;
    *(undefined2 *)((longlong)puVar2 + 6) = *(undefined2 *)((longlong)puVar3 + 6);
    *(void **)(puVar2 + 2) = _Dst;
    return;
  }
  FUN_146f5e032(param_1,param_2);
  return;
}



// FUNCTION 146f6615e FUN_146f6615e body=166 status=ok
// SIG undefined FUN_146f6615e(void)

void FUN_146f6615e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5e936();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f66217 FUN_146f66217 body=166 status=ok
// SIG undefined FUN_146f66217(void)

void FUN_146f66217(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5f18a();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f662d0 FUN_146f662d0 body=223 status=ok
// SIG undefined FUN_146f662d0(void)

void FUN_146f662d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  void *_Dst;
  
  uVar10 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar10 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar1[2]);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    puVar1[2] = puVar2[2];
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    puVar3 = *(undefined4 **)(param_2 + 0x18);
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar4 + 4);
    uVar5 = puVar4[1];
    uVar6 = puVar4[2];
    uVar7 = puVar4[3];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    if (*(ushort *)((longlong)puVar4 + 10) == 0) {
      uVar9 = 0;
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)(**(code **)(*DAT_14c872d28 + 0x28))
                               (DAT_14c872d28,*(ushort *)((longlong)puVar4 + 10) + 3 & 0xfffffffc,4)
      ;
      memcpy(_Dst,*(void **)(puVar4 + 4),(ulonglong)*(ushort *)((longlong)puVar4 + 10));
      uVar9 = *(undefined2 *)((longlong)puVar4 + 10);
    }
    *(undefined2 *)(puVar3 + 2) = uVar9;
    *(undefined2 *)((longlong)puVar3 + 10) = *(undefined2 *)((longlong)puVar4 + 10);
    *(void **)(puVar3 + 4) = _Dst;
    return;
  }
  FUN_146f5ebc4(param_1,param_2);
  return;
}



// FUNCTION 146f663af FUN_146f663af body=166 status=ok
// SIG undefined FUN_146f663af(void)

void FUN_146f663af(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5f354();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f66468 FUN_146f66468 body=166 status=ok
// SIG undefined FUN_146f66468(void)

void FUN_146f66468(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_146f5f650();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f66521 FUN_146f66521 body=77 status=ok
// SIG undefined FUN_146f66521(void)

void FUN_146f66521(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) == 0) {
    FUN_142aa42ec(param_1,param_2);
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  return;
}



// FUNCTION 146f6656e FUN_146f6656e body=101 status=ok
// SIG undefined FUN_146f6656e(void)

void FUN_146f6656e(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar2) {
    FUN_146f5435e(uVar3,cVar1 == '\0',1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_146f5435e(uVar3,cVar1,bVar2);
  return;
}



// FUNCTION 146f665d4 FUN_146f665d4 body=71 status=ok
// SIG undefined FUN_146f665d4(void)

void FUN_146f665d4(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f66611;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f66611:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f6661c FUN_146f6661c body=113 status=ok
// SIG undefined FUN_146f6661c(void)

void FUN_146f6661c(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined1 *)param_2[3],
                  *(undefined1 *)param_2[4],&DAT_149f9fcf0 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f6668e FUN_146f6668e body=161 status=ok
// SIG undefined FUN_146f6668e(void)

void FUN_146f6668e(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined1 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined1 *)param_2[4],
                  &DAT_149f9fcf0 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f667be FUN_146f667be body=101 status=ok
// SIG undefined FUN_146f667be(void)

void FUN_146f667be(longlong param_1,longlong *param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = *(short *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,sVar2 == 0,1);
    if (sVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,sVar2,bVar1);
  return;
}



// FUNCTION 146f66824 FUN_146f66824 body=72 status=ok
// SIG undefined FUN_146f66824(void)

void FUN_146f66824(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined2 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f66861;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f66861:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f6686c FUN_146f6686c body=113 status=ok
// SIG undefined FUN_146f6686c(void)

void FUN_146f6686c(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined2 *)param_2[3],
                  *(undefined2 *)param_2[4],&DAT_149f9fcfc + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f668de FUN_146f668de body=163 status=ok
// SIG undefined FUN_146f668de(void)

void FUN_146f668de(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined2 local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined2 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined2 *)param_2[4],
                  &DAT_149f9fcfc + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f66a18 FUN_146f66a18 body=100 status=ok
// SIG undefined FUN_146f66a18(void)

void FUN_146f66a18(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,iVar2 == 0,1);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,iVar2,bVar1);
  return;
}



// FUNCTION 146f66a7c FUN_146f66a7c body=72 status=ok
// SIG undefined FUN_146f66a7c(void)

void FUN_146f66a7c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar4 = FUN_146f546d2(uVar3,1);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) goto LAB_146f66aba;
  }
  uVar5 = FUN_146f546d2(uVar3,bVar1);
LAB_146f66aba:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f66ac4 FUN_146f66ac4 body=111 status=ok
// SIG undefined FUN_146f66ac4(void)

void FUN_146f66ac4(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)param_2[3],
                  *(undefined4 *)param_2[4],&DAT_149f9fd08 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f66b34 FUN_146f66b34 body=119 status=ok
// SIG undefined FUN_146f66b34(void)

void FUN_146f66b34(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    *(undefined4 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),(undefined4 *)param_2[3],*(undefined4 *)param_2[4]
                  ,&DAT_149f9fd08 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f66c36 FUN_146f66c36 body=138 status=ok
// SIG undefined FUN_146f66c36(void)

void FUN_146f66c36(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = *(ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if ((0xf < bVar1) && (FUN_146f5435e(uVar3,uVar2 == 0,1), uVar2 == 0)) {
    return;
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  FUN_146f5435e(uVar3,uVar2 & 0xffffffff,uVar4);
  if (bVar1 < 0x21) {
    return;
  }
  FUN_146f5435e(uVar3,uVar2 >> 0x20,bVar1 - 0x20);
  return;
}



// FUNCTION 146f66cc0 FUN_146f66cc0 body=117 status=ok
// SIG undefined FUN_146f66cc0(void)

void FUN_146f66cc0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar2 = (ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x10);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      goto LAB_146f66d12;
    }
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  uVar4 = FUN_146f546d2(uVar3,uVar4);
  uVar5 = (ulonglong)uVar4;
  if (0x20 < bVar1) {
    lVar6 = FUN_146f546d2(uVar3,bVar1 - 0x20);
    uVar5 = uVar5 | lVar6 << 0x20;
  }
LAB_146f66d12:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f66d36 FUN_146f66d36 body=112 status=ok
// SIG undefined FUN_146f66d36(void)

void FUN_146f66d36(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)param_2[3],
                  *(undefined8 *)param_2[4],&DAT_149f9fd14 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f66da6 FUN_146f66da6 body=120 status=ok
// SIG undefined FUN_146f66da6(void)

void FUN_146f66da6(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x10);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55d4b(*(undefined8 *)(param_1 + 0xd8),(undefined8 *)param_2[3],*(undefined8 *)param_2[4]
                  ,&DAT_149f9fd14 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f66ec4 FUN_146f66ec4 body=101 status=ok
// SIG undefined FUN_146f66ec4(void)

void FUN_146f66ec4(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar2) {
    FUN_146f5435e(uVar3,cVar1 == '\0',1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_146f5435e(uVar3,cVar1,bVar2);
  return;
}



// FUNCTION 146f66f30 FUN_146f66f30 body=71 status=ok
// SIG undefined FUN_146f66f30(void)

void FUN_146f66f30(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x12);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f66f6d;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f66f6d:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f66f7e FUN_146f66f7e body=113 status=ok
// SIG undefined FUN_146f66f7e(void)

void FUN_146f66f7e(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined1 *)param_2[3],
                  *(undefined1 *)param_2[4],&DAT_149f9fd20 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f66ff6 FUN_146f66ff6 body=161 status=ok
// SIG undefined FUN_146f66ff6(void)

void FUN_146f66ff6(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined1 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x12);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined1 *)param_2[4],
                  &DAT_149f9fd20 + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f670c2 FUN_146f670c2 body=93 status=ok
// SIG undefined FUN_146f670c2(void)

void FUN_146f670c2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = DAT_14c99c018;
  bVar4 = (byte)*(undefined4 *)(*param_2 + 0x10);
  bVar2 = *(char *)param_2[3] + bVar4;
  bVar3 = *(byte *)(*param_2 + 0x11);
  if (bVar2 < bVar3) {
    bVar3 = bVar2;
  }
  if (bVar3 < bVar4) {
    bVar3 = bVar4;
  }
  if (bVar3 == bVar2) {
    *(byte *)param_2[4] = bVar2;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
  }
  return;
}



// FUNCTION 146f6719e FUN_146f6719e body=101 status=ok
// SIG undefined FUN_146f6719e(void)

void FUN_146f6719e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = *(short *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,sVar2 == 0,1);
    if (sVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,sVar2,bVar1);
  return;
}



// FUNCTION 146f6720a FUN_146f6720a body=72 status=ok
// SIG undefined FUN_146f6720a(void)

void FUN_146f6720a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined2 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x14);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f67247;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f67247:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f67258 FUN_146f67258 body=113 status=ok
// SIG undefined FUN_146f67258(void)

void FUN_146f67258(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined2 *)param_2[3],
                  *(undefined2 *)param_2[4],&DAT_149f9fd2c + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f672d0 FUN_146f672d0 body=163 status=ok
// SIG undefined FUN_146f672d0(void)

void FUN_146f672d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char local_30;
  undefined2 local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined2 *)param_2[3];
  cVar1 = *(char *)(*param_2 + 0x14);
  if (cVar1 == '\0') {
    local_1c[0] = 0;
  }
  else {
    uVar3 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    local_38 = *(undefined4 *)(&DAT_149f9fd50 + uVar3 * 4);
    local_30 = cVar1;
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),local_1c,*(undefined2 *)param_2[4],
                  &DAT_149f9fd2c + uVar3 * 3);
  }
  *puVar2 = local_1c[0];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f673a0 FUN_146f673a0 body=97 status=ok
// SIG undefined FUN_146f673a0(void)

void FUN_146f673a0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar3 = DAT_14c99c018;
  uVar5 = (ushort)*(undefined4 *)(*param_2 + 0x10);
  uVar4 = *(short *)param_2[3] + uVar5;
  uVar1 = *(ushort *)(*param_2 + 0x12);
  uVar2 = uVar4;
  if (uVar1 <= uVar4) {
    uVar2 = uVar1;
  }
  if (uVar2 < uVar5) {
    uVar2 = uVar5;
  }
  if (uVar2 == uVar4) {
    *(ushort *)param_2[4] = uVar4;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 146f6748c FUN_146f6748c body=100 status=ok
// SIG undefined FUN_146f6748c(void)

void FUN_146f6748c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    FUN_146f5435e(uVar3,iVar2 == 0,1);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_146f5435e(uVar3,iVar2,bVar1);
  return;
}



// FUNCTION 146f674f6 FUN_146f674f6 body=72 status=ok
// SIG undefined FUN_146f674f6(void)

void FUN_146f674f6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x18);
  if (0xf < bVar1) {
    uVar4 = FUN_146f546d2(uVar3,1);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) goto LAB_146f67534;
  }
  uVar5 = FUN_146f546d2(uVar3,bVar1);
LAB_146f67534:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f67544 FUN_146f67544 body=111 status=ok
// SIG undefined FUN_146f67544(void)

void FUN_146f67544(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa281e(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)param_2[3],
                  *(undefined4 *)param_2[4],&DAT_149f9fd38 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f675ba FUN_146f675ba body=119 status=ok
// SIG undefined FUN_146f675ba(void)

void FUN_146f675ba(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x18);
  if (cVar1 == '\0') {
    *(undefined4 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55bae(*(undefined8 *)(param_1 + 0xd8),(undefined4 *)param_2[3],*(undefined4 *)param_2[4]
                  ,&DAT_149f9fd38 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f67658 FUN_146f67658 body=89 status=ok
// SIG undefined FUN_146f67658(void)

void FUN_146f67658(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = DAT_14c99c018;
  uVar1 = *(uint *)(*param_2 + 0x10);
  uVar4 = *(uint *)(*param_2 + 0x14);
  uVar3 = *(int *)param_2[3] + uVar1;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if (uVar4 < uVar1) {
    uVar4 = uVar1;
  }
  if (uVar4 == uVar3) {
    *(uint *)param_2[4] = uVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f67728 FUN_146f67728 body=138 status=ok
// SIG undefined FUN_146f67728(void)

void FUN_146f67728(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = *(ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if ((0xf < bVar1) && (FUN_146f5435e(uVar3,uVar2 == 0,1), uVar2 == 0)) {
    return;
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  FUN_146f5435e(uVar3,uVar2 & 0xffffffff,uVar4);
  if (bVar1 < 0x21) {
    return;
  }
  FUN_146f5435e(uVar3,uVar2 >> 0x20,bVar1 - 0x20);
  return;
}



// FUNCTION 146f677b8 FUN_146f677b8 body=117 status=ok
// SIG undefined FUN_146f677b8(void)

void FUN_146f677b8(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar2 = (ulonglong *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x20);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      goto LAB_146f6780a;
    }
  }
  uVar4 = 0x20;
  if (bVar1 < 0x20) {
    uVar4 = (uint)bVar1;
  }
  uVar4 = FUN_146f546d2(uVar3,uVar4);
  uVar5 = (ulonglong)uVar4;
  if (0x20 < bVar1) {
    lVar6 = FUN_146f546d2(uVar3,bVar1 - 0x20);
    uVar5 = uVar5 | lVar6 << 0x20;
  }
LAB_146f6780a:
  *puVar2 = uVar5;
  return;
}



// FUNCTION 146f67834 FUN_146f67834 body=112 status=ok
// SIG undefined FUN_146f67834(void)

void FUN_146f67834(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_142aa28e2(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)param_2[3],
                  *(undefined8 *)param_2[4],&DAT_149f9fd44 + uVar2 * 3,
                  *(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f678aa FUN_146f678aa body=120 status=ok
// SIG undefined FUN_146f678aa(void)

void FUN_146f678aa(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*param_2 + 0x20);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2[3] = 0;
  }
  else {
    uVar2 = (ulonglong)((uint)(0xffa4L >> ((byte)(cVar1 - 1U) >> 2 & 0x3e)) & 3);
    FUN_146f55d4b(*(undefined8 *)(param_1 + 0xd8),(undefined8 *)param_2[3],*(undefined8 *)param_2[4]
                  ,&DAT_149f9fd44 + uVar2 * 3,*(undefined4 *)(&DAT_149f9fd50 + uVar2 * 4),cVar1);
  }
  return;
}



// FUNCTION 146f6794a FUN_146f6794a body=91 status=ok
// SIG undefined FUN_146f6794a(void)

void FUN_146f6794a(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = DAT_14c99c018;
  uVar1 = *(ulonglong *)(*param_2 + 0x10);
  uVar4 = *(ulonglong *)(*param_2 + 0x18);
  uVar3 = *(longlong *)param_2[3] + uVar1;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  if (uVar4 < uVar1) {
    uVar4 = uVar1;
  }
  if (uVar4 == uVar3) {
    *(ulonglong *)param_2[4] = uVar3;
  }
  else {
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 146f67a28 FUN_146f67a28 body=283 status=ok
// SIG undefined FUN_146f67a28(void)

void FUN_146f67a28(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  puVar1 = *(ulonglong **)(param_2 + 0x18);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar5,uVar2 != 0,1);
  if (uVar2 != 0) {
    FUN_146f5435e(uVar5,uVar2 & 0xffffffff,0x20);
    FUN_146f5435e(uVar5,uVar2 >> 0x20,0x20);
  }
  FUN_146f5435e(uVar5,uVar3 != 0,1);
  if (uVar3 != 0) {
    FUN_146f5435e(uVar5,uVar3 & 0xffffffff,0x20);
    FUN_146f5435e(uVar5,uVar3 >> 0x20,0x20);
  }
  FUN_146f5435e(uVar5,uVar4 != 0,1);
  if (uVar4 == 0) {
    return;
  }
  FUN_146f5435e(uVar5,uVar4 & 0xffffffff,0x20);
  FUN_146f5435e(uVar5,uVar4 >> 0x20,0x20);
  return;
}



// FUNCTION 146f67b44 FUN_146f67b44 body=225 status=ok
// SIG undefined FUN_146f67b44(void)

void FUN_146f67b44(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar6 = FUN_146f546d2(uVar1,1);
  if ((uVar6 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar3 = FUN_146f546d2(uVar1,0x20);
    uVar4 = FUN_146f546d2(uVar1,0x20);
    uVar8 = CONCAT44(uVar4,uVar3);
  }
  uVar6 = FUN_146f546d2(uVar1,1);
  if ((uVar6 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    uVar3 = FUN_146f546d2(uVar1,0x20);
    uVar4 = FUN_146f546d2(uVar1,0x20);
    uVar9 = CONCAT44(uVar4,uVar3);
  }
  uVar6 = FUN_146f546d2(uVar1,1);
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = FUN_146f546d2(uVar1,0x20);
    lVar7 = FUN_146f546d2(uVar1,0x20);
    uVar6 = lVar7 << 0x20 | (ulonglong)uVar5;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2[2] = uVar6;
  return;
}



// FUNCTION 146f67c25 FUN_146f67c25 body=118 status=ok
// SIG undefined FUN_146f67c25(void)

void FUN_146f67c25(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_2 + 0x20);
  if ((*plVar1 == *plVar2) && (plVar1[1] == plVar2[1])) {
    bVar3 = plVar1[2] == plVar2[2];
  }
  else {
    bVar3 = false;
  }
  FUN_146f5435e(*(undefined8 *)(param_1 + 0xe0),bVar3,1);
  if (bVar3) {
    return;
  }
  FUN_146f67a28(param_1,param_2);
  return;
}



// FUNCTION 146f67cc5 FUN_146f67cc5 body=79 status=ok
// SIG undefined FUN_146f67cc5(void)

void FUN_146f67cc5(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar4 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    puVar1[2] = puVar2[2];
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    return;
  }
  FUN_146f67b44(param_1,param_2);
  return;
}



// FUNCTION 146f67d42 FUN_146f67d42 body=212 status=ok
// SIG undefined FUN_146f67d42(void)

void FUN_146f67d42(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = *(int **)(param_2 + 0x18);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iVar3 = piVar4[2];
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f5435e(uVar5,iVar1 != 0,1);
  if (iVar1 != 0) {
    FUN_146f5435e(uVar5,iVar1,0x20);
  }
  FUN_146f5435e(uVar5,iVar2 != 0,1);
  if (iVar2 != 0) {
    FUN_146f5435e(uVar5,iVar2,0x20);
  }
  FUN_146f5435e(uVar5,iVar3 != 0,1);
  if (iVar3 == 0) {
    return;
  }
  FUN_146f5435e(uVar5,iVar3,0x20);
  return;
}



// FUNCTION 146f67e16 FUN_146f67e16 body=147 status=ok
// SIG undefined FUN_146f67e16(void)

void FUN_146f67e16(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar7 = FUN_146f546d2(uVar1,1);
  uVar4 = 0;
  uVar3 = 0;
  if ((uVar7 & 1) != 0) {
    uVar3 = FUN_146f546d2(uVar1,0x20);
  }
  uVar7 = FUN_146f546d2(uVar1,1);
  if ((uVar7 & 1) != 0) {
    uVar4 = FUN_146f546d2(uVar1,0x20);
  }
  uVar5 = FUN_146f546d2(uVar1,1);
  uVar6 = 0;
  if ((uVar5 & 1) != 0) {
    uVar6 = FUN_146f546d2(uVar1,0x20);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x18);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar6;
  return;
}



// FUNCTION 146f67ea9 FUN_146f67ea9 body=116 status=ok
// SIG undefined FUN_146f67ea9(void)

void FUN_146f67ea9(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_2 + 0x18);
  piVar2 = *(int **)(param_2 + 0x20);
  if ((*piVar1 == *piVar2) && (piVar1[1] == piVar2[1])) {
    bVar3 = piVar1[2] == piVar2[2];
  }
  else {
    bVar3 = false;
  }
  FUN_146f5435e(*(undefined8 *)(param_1 + 0xe0),bVar3,1);
  if (bVar3) {
    return;
  }
  FUN_146f67d42(param_1,param_2);
  return;
}



// FUNCTION 146f67f41 FUN_146f67f41 body=77 status=ok
// SIG undefined FUN_146f67f41(void)

void FUN_146f67f41(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar3 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    return;
  }
  FUN_146f67e16(param_1,param_2);
  return;
}


