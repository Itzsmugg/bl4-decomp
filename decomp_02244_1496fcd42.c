// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1496fcd42 FUN_1496fcd42 body=148 status=ok
// SIG undefined FUN_1496fcd42(void)

void FUN_1496fcd42(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_1496fcdd6(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(uVar5 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x28;
    } while ((longlong)(int)lVar3 * 0x28 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1496fcee0(param_1,iVar1);
  }
  FUN_1496fce3a((longlong)iVar1 * 0x28 + *param_1,param_2);
  return;
}



// FUNCTION 1496fcdd6 FUN_1496fcdd6 body=99 status=ok
// SIG undefined FUN_1496fcdd6(void)

undefined8 FUN_1496fcdd6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == *(int *)(param_2 + 1)) {
    if ((1 < iVar1) && (iVar1 = FUN_144a80a00(*param_1,*param_2), iVar1 != 0)) {
      return 0;
    }
  }
  else if (*(int *)(param_2 + 1) + iVar1 != 1) {
    return 0;
  }
  if ((param_1[2] == param_2[2]) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
    uVar2 = FUN_14000b9e1(param_1[3],param_2[3]);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1496fce3a FUN_1496fce3a body=165 status=ok
// SIG undefined FUN_1496fce3a(void)

undefined8 * FUN_1496fce3a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1496fcee0 FUN_1496fcee0 body=147 status=ok
// SIG undefined FUN_1496fcee0(void)

void FUN_1496fcee0(longlong param_1,int param_2)

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



// FUNCTION 1496fcf74 FUN_1496fcf74 body=311 status=ok
// SIG undefined FUN_1496fcf74(void)

longlong FUN_1496fcf74(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1496fd0ac(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd0ac FUN_1496fd0ac body=218 status=ok
// SIG undefined FUN_1496fd0ac(void)

void FUN_1496fd0ac(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar5 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)puVar5 + 0xc) = *param_5;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
  *(undefined4 *)(puVar5 + 3) = uVar4;
  puVar5[4] = param_3;
  *(undefined4 *)(puVar5 + 5) = param_6;
  puVar5[6] = uVar1;
  *puVar5 = &PTR_FUN_14be15138;
  FUN_146ecd042(puVar5 + 7,param_4);
  local_50 = puVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd188 FUN_1496fd188 body=52 status=ok
// SIG undefined FUN_1496fd188(void)

undefined8 * FUN_1496fd188(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be15138;
  FUN_14054b30a(param_1 + 7);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fd1bc FUN_1496fd1bc body=101 status=ok
// SIG undefined FUN_1496fd1bc(void)

undefined8 * FUN_1496fd1bc(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15158;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fd224 FUN_1496fd224 body=29 status=ok
// SIG undefined FUN_1496fd224(void)

undefined8 FUN_1496fd224(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fd242 FUN_1496fd242 body=101 status=ok
// SIG undefined FUN_1496fd242(void)

undefined8 * FUN_1496fd242(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15158;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fd2a8 FUN_1496fd2a8 body=177 status=ok
// SIG undefined FUN_1496fd2a8(void)

void FUN_1496fd2a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496fd35a(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd35a FUN_1496fd35a body=218 status=ok
// SIG undefined FUN_1496fd35a(void)

void FUN_1496fd35a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar5 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)puVar5 + 0xc) = *param_5;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
  *(undefined4 *)(puVar5 + 3) = uVar4;
  puVar5[4] = param_3;
  *(undefined4 *)(puVar5 + 5) = param_6;
  puVar5[6] = uVar1;
  *puVar5 = &PTR_FUN_14be11e70;
  FUN_146ecd176(puVar5 + 7,param_4);
  local_50 = puVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd436 FUN_1496fd436 body=177 status=ok
// SIG undefined FUN_1496fd436(void)

void FUN_1496fd436(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496fd4e8(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd4e8 FUN_1496fd4e8 body=251 status=ok
// SIG undefined FUN_1496fd4e8(void)

void FUN_1496fd4e8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be15168;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_48[9] = param_4[2];
  param_4[2] = 0;
  *(undefined4 *)(local_48 + 10) = *(undefined4 *)(param_4 + 3);
  *(undefined4 *)((longlong)local_48 + 0x54) = *(undefined4 *)((longlong)param_4 + 0x1c);
  param_4[3] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd5e4 FUN_1496fd5e4 body=71 status=ok
// SIG undefined FUN_1496fd5e4(void)

undefined8 * FUN_1496fd5e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be15168;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fd62c FUN_1496fd62c body=101 status=ok
// SIG undefined FUN_1496fd62c(void)

undefined8 * FUN_1496fd62c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15178;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fd692 FUN_1496fd692 body=29 status=ok
// SIG undefined FUN_1496fd692(void)

undefined8 FUN_1496fd692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fd6b0 FUN_1496fd6b0 body=101 status=ok
// SIG undefined FUN_1496fd6b0(void)

undefined8 * FUN_1496fd6b0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15178;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fd716 FUN_1496fd716 body=22 status=ok
// SIG undefined FUN_1496fd716(void)

undefined8 FUN_1496fd716(undefined8 param_1)

{
  FUN_1496fd72c();
  return param_1;
}



// FUNCTION 1496fd72c FUN_1496fd72c body=153 status=ok
// SIG undefined FUN_1496fd72c(void)

undefined8 * FUN_1496fd72c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1d8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496fd7c6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd7c6 FUN_1496fd7c6 body=301 status=ok
// SIG undefined FUN_1496fd7c6(void)

undefined8 * FUN_1496fd7c6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be13ad0;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x35,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x37,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x39,&DAT_149e02088);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd8f4 FUN_1496fd8f4 body=25 status=ok
// SIG undefined FUN_1496fd8f4(void)

undefined8 FUN_1496fd8f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496fd92c FUN_1496fd92c body=22 status=ok
// SIG undefined FUN_1496fd92c(void)

undefined8 FUN_1496fd92c(undefined8 param_1)

{
  FUN_1496fd942();
  return param_1;
}



// FUNCTION 1496fd942 FUN_1496fd942 body=153 status=ok
// SIG undefined FUN_1496fd942(void)

undefined8 * FUN_1496fd942(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1d8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496fd9dc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fd9dc FUN_1496fd9dc body=301 status=ok
// SIG undefined FUN_1496fd9dc(void)

undefined8 * FUN_1496fd9dc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be13d70;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x35,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x37,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x39,&DAT_149e02088);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fdb0a FUN_1496fdb0a body=25 status=ok
// SIG undefined FUN_1496fdb0a(void)

undefined8 FUN_1496fdb0a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496fdb42 FUN_1496fdb42 body=311 status=ok
// SIG undefined FUN_1496fdb42(void)

longlong FUN_1496fdb42(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1496fdc7a(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fdc7a FUN_1496fdc7a body=218 status=ok
// SIG undefined FUN_1496fdc7a(void)

void FUN_1496fdc7a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(puVar5 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)puVar5 + 0xc) = *param_5;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
  *(undefined4 *)(puVar5 + 3) = uVar4;
  puVar5[4] = param_3;
  *(undefined4 *)(puVar5 + 5) = param_6;
  puVar5[6] = uVar1;
  *puVar5 = &PTR_FUN_14be151d0;
  FUN_1496f87b2(puVar5 + 7,param_4);
  local_50 = puVar5;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_50);
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fdd56 FUN_1496fdd56 body=71 status=ok
// SIG undefined FUN_1496fdd56(void)

undefined8 * FUN_1496fdd56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be151d0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fdd9e FUN_1496fdd9e body=101 status=ok
// SIG undefined FUN_1496fdd9e(void)

undefined8 * FUN_1496fdd9e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be151e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fde04 FUN_1496fde04 body=29 status=ok
// SIG undefined FUN_1496fde04(void)

undefined8 FUN_1496fde04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fde22 FUN_1496fde22 body=101 status=ok
// SIG undefined FUN_1496fde22(void)

undefined8 * FUN_1496fde22(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be151e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fde88 FUN_1496fde88 body=177 status=ok
// SIG undefined FUN_1496fde88(void)

void FUN_1496fde88(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496fdf3a(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fdf3a FUN_1496fdf3a body=208 status=ok
// SIG undefined FUN_1496fdf3a(void)

void FUN_1496fdf3a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1496fe00c(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe00c FUN_1496fe00c body=188 status=ok
// SIG undefined FUN_1496fe00c(void)

undefined8 *
FUN_1496fe00c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be151f0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe0ca FUN_1496fe0ca body=57 status=ok
// SIG undefined FUN_1496fe0ca(void)

undefined8 * FUN_1496fe0ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be151f0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fe104 FUN_1496fe104 body=101 status=ok
// SIG undefined FUN_1496fe104(void)

undefined8 * FUN_1496fe104(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15200;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fe16a FUN_1496fe16a body=29 status=ok
// SIG undefined FUN_1496fe16a(void)

undefined8 FUN_1496fe16a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fe188 FUN_1496fe188 body=101 status=ok
// SIG undefined FUN_1496fe188(void)

undefined8 * FUN_1496fe188(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15200;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fe1ee FUN_1496fe1ee body=22 status=ok
// SIG undefined FUN_1496fe1ee(void)

undefined8 FUN_1496fe1ee(undefined8 param_1)

{
  FUN_1496fe204();
  return param_1;
}



// FUNCTION 1496fe204 FUN_1496fe204 body=153 status=ok
// SIG undefined FUN_1496fe204(void)

undefined8 * FUN_1496fe204(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496fe29e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe29e FUN_1496fe29e body=186 status=ok
// SIG undefined FUN_1496fe29e(void)

undefined8 * FUN_1496fe29e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be14020;
  FUN_1446ddc76(param_1 + 0x33,"Overrides",1);
  FUN_1446ddc76(param_1 + 0x34,"FloatAttr",1);
  local_28 = param_1 + 0x35;
  *(undefined4 *)(param_1 + 0x35) = 0;
  local_40 = 0;
  local_20 = 0xffffffff;
  local_18 = 0;
  FUN_146fb8a66(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe35a FUN_1496fe35a body=25 status=ok
// SIG undefined FUN_1496fe35a(void)

undefined8 FUN_1496fe35a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496fe392 FUN_1496fe392 body=177 status=ok
// SIG undefined FUN_1496fe392(void)

void FUN_1496fe392(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496fe444(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe444 FUN_1496fe444 body=204 status=ok
// SIG undefined FUN_1496fe444(void)

void FUN_1496fe444(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar2;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be15230;
  *(undefined4 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe512 FUN_1496fe512 body=29 status=ok
// SIG undefined FUN_1496fe512(void)

undefined8 FUN_1496fe512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fe530 FUN_1496fe530 body=101 status=ok
// SIG undefined FUN_1496fe530(void)

undefined8 * FUN_1496fe530(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15240;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fe596 FUN_1496fe596 body=29 status=ok
// SIG undefined FUN_1496fe596(void)

undefined8 FUN_1496fe596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fe5b4 FUN_1496fe5b4 body=101 status=ok
// SIG undefined FUN_1496fe5b4(void)

undefined8 * FUN_1496fe5b4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15240;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fe61a FUN_1496fe61a body=22 status=ok
// SIG undefined FUN_1496fe61a(void)

undefined8 FUN_1496fe61a(undefined8 param_1)

{
  FUN_1496fe630();
  return param_1;
}



// FUNCTION 1496fe630 FUN_1496fe630 body=153 status=ok
// SIG undefined FUN_1496fe630(void)

undefined8 * FUN_1496fe630(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x290,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496f7c20(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe6ca FUN_1496fe6ca body=25 status=ok
// SIG undefined FUN_1496fe6ca(void)

undefined8 FUN_1496fe6ca(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496fe710 FUN_1496fe710 body=62 status=ok
// SIG undefined FUN_1496fe710(void)

undefined8 * FUN_1496fe710(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14c996ae0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1401b309e(param_2,1,0);
  *(undefined8 *)*param_2 = uVar1;
  return param_2;
}



// FUNCTION 1496fe74e FUN_1496fe74e body=289 status=ok
// SIG undefined FUN_1496fe74e(void)

undefined8 FUN_1496fe74e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  longlong *local_70;
  ulonglong *local_68;
  undefined8 local_60;
  longlong local_58 [3];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(local_80,L"SurfaceRender");
  FUN_1446ddc76(&local_88,"FGeometryCollection",1);
  FUN_1446f470e(&local_60,L"Collection",1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_60;
  FUN_1496fe870(local_58,local_80,local_88,&local_98);
  local_68 = &local_30;
  local_70 = local_58;
  FUN_1496fe930(param_2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fe870 FUN_1496fe870 body=191 status=ok
// SIG undefined FUN_1496fe870(void)

undefined8 *
FUN_1496fe870(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = param_3;
  param_1[3] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 3);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1496fe930 FUN_1496fe930 body=88 status=ok
// SIG undefined FUN_1496fe930(void)

undefined8 * FUN_1496fe930(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * -0x33333333;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1496fe988(param_1,iVar2);
    FUN_1496fe9f2(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 1496fe988 FUN_1496fe988 body=106 status=ok
// SIG undefined FUN_1496fe988(void)

undefined8 FUN_1496fe988(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x28)) {
    uVar5 = uVar2 / 0x28 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x28,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1496fe9f2 FUN_1496fe9f2 body=47 status=ok
// SIG undefined FUN_1496fe9f2(void)

void FUN_1496fe9f2(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1496fce3a(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1496fea22 FUN_1496fea22 body=31 status=ok
// SIG undefined FUN_1496fea22(void)

undefined8 FUN_1496fea22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fea5e FUN_1496fea5e body=93 status=ok
// SIG undefined FUN_1496fea5e(void)

void FUN_1496fea5e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be15330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1496feabc FUN_1496feabc body=123 status=ok
// SIG undefined FUN_1496feabc(void)

void FUN_1496feabc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be15330;
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



// FUNCTION 1496feb38 FUN_1496feb38 body=21 status=ok
// SIG undefined FUN_1496feb38(void)

undefined8 FUN_1496feb38(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1496feb4e FUN_1496feb4e body=22 status=ok
// SIG undefined FUN_1496feb4e(void)

undefined8 FUN_1496feb4e(undefined8 param_1)

{
  FUN_1496feb64();
  return param_1;
}



// FUNCTION 1496feb64 FUN_1496feb64 body=153 status=ok
// SIG undefined FUN_1496feb64(void)

undefined8 * FUN_1496feb64(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496febfe(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496febfe FUN_1496febfe body=155 status=ok
// SIG undefined FUN_1496febfe(void)

undefined8 * FUN_1496febfe(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be142d0;
  FUN_1400b22c2(param_1 + 0x33,"1 2 3");
  local_28 = param_1 + 0x35;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_40 = 0;
  local_20 = 0xffffffff;
  local_18 = 0;
  FUN_146fb8a66(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fec9a FUN_1496fec9a body=25 status=ok
// SIG undefined FUN_1496fec9a(void)

undefined8 FUN_1496fec9a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496fecd2 FUN_1496fecd2 body=223 status=ok
// SIG undefined FUN_1496fecd2(void)

void FUN_1496fecd2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be15400;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fedb2 FUN_1496fedb2 body=57 status=ok
// SIG undefined FUN_1496fedb2(void)

undefined8 * FUN_1496fedb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be15400;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fedec FUN_1496fedec body=101 status=ok
// SIG undefined FUN_1496fedec(void)

undefined8 * FUN_1496fedec(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15410;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496fee52 FUN_1496fee52 body=29 status=ok
// SIG undefined FUN_1496fee52(void)

undefined8 FUN_1496fee52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fee70 FUN_1496fee70 body=101 status=ok
// SIG undefined FUN_1496fee70(void)

undefined8 * FUN_1496fee70(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15410;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496feed6 FUN_1496feed6 body=22 status=ok
// SIG undefined FUN_1496feed6(void)

undefined8 FUN_1496feed6(undefined8 param_1)

{
  FUN_1496feeec();
  return param_1;
}



// FUNCTION 1496feeec FUN_1496feeec body=153 status=ok
// SIG undefined FUN_1496feeec(void)

undefined8 * FUN_1496feeec(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496fef86(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fef86 FUN_1496fef86 body=162 status=ok
// SIG undefined FUN_1496fef86(void)

undefined8 * FUN_1496fef86(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be14560;
  param_1[0x33] = 0;
  FUN_1446ddc76(param_1 + 0x34,"SkeletalMesh",1);
  local_50 = 0;
  local_30 = 0xffffffff;
  local_28 = 0;
  local_38 = param_1 + 0x33;
  FUN_146fb8a66(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff02a FUN_1496ff02a body=25 status=ok
// SIG undefined FUN_1496ff02a(void)

undefined8 FUN_1496ff02a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496ff062 FUN_1496ff062 body=22 status=ok
// SIG undefined FUN_1496ff062(void)

undefined8 FUN_1496ff062(undefined8 param_1)

{
  FUN_1496ff078();
  return param_1;
}



// FUNCTION 1496ff078 FUN_1496ff078 body=153 status=ok
// SIG undefined FUN_1496ff078(void)

undefined8 * FUN_1496ff078(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496ff112(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff112 FUN_1496ff112 body=162 status=ok
// SIG undefined FUN_1496ff112(void)

undefined8 * FUN_1496ff112(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be14800;
  param_1[0x33] = 0;
  FUN_1446ddc76(param_1 + 0x34,"Skeleton",1);
  local_50 = 0;
  local_30 = 0xffffffff;
  local_28 = 0;
  local_38 = param_1 + 0x33;
  FUN_146fb8a66(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff1b6 FUN_1496ff1b6 body=25 status=ok
// SIG undefined FUN_1496ff1b6(void)

undefined8 FUN_1496ff1b6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496ff1ee FUN_1496ff1ee body=22 status=ok
// SIG undefined FUN_1496ff1ee(void)

undefined8 FUN_1496ff1ee(undefined8 param_1)

{
  FUN_1496ff204();
  return param_1;
}



// FUNCTION 1496ff204 FUN_1496ff204 body=153 status=ok
// SIG undefined FUN_1496ff204(void)

undefined8 * FUN_1496ff204(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496ff29e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff29e FUN_1496ff29e body=231 status=ok
// SIG undefined FUN_1496ff29e(void)

undefined8 * FUN_1496ff29e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be14a90;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  FUN_1446ddc76((longlong)param_1 + 0x1ac,"Overrides",1);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff386 FUN_1496ff386 body=25 status=ok
// SIG undefined FUN_1496ff386(void)

undefined8 FUN_1496ff386(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496ff3be FUN_1496ff3be body=22 status=ok
// SIG undefined FUN_1496ff3be(void)

undefined8 FUN_1496ff3be(undefined8 param_1)

{
  FUN_1496ff3d4();
  return param_1;
}



// FUNCTION 1496ff3d4 FUN_1496ff3d4 body=153 status=ok
// SIG undefined FUN_1496ff3d4(void)

undefined8 * FUN_1496ff3d4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x210,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1496ff46e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff46e FUN_1496ff46e body=265 status=ok
// SIG undefined FUN_1496ff46e(void)

undefined8 * FUN_1496ff46e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be14d30;
  local_58 = param_1 + 0x33;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x36;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x34;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff578 FUN_1496ff578 body=25 status=ok
// SIG undefined FUN_1496ff578(void)

undefined8 FUN_1496ff578(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1496ff5b0 FUN_1496ff5b0 body=177 status=ok
// SIG undefined FUN_1496ff5b0(void)

void FUN_1496ff5b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496ff662(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff662 FUN_1496ff662 body=208 status=ok
// SIG undefined FUN_1496ff662(void)

void FUN_1496ff662(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1496ff734(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff734 FUN_1496ff734 body=190 status=ok
// SIG undefined FUN_1496ff734(void)

undefined8 *
FUN_1496ff734(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be154a0;
  param_1[7] = &PTR_FUN_14be154b0;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ff7f4 FUN_1496ff7f4 body=53 status=ok
// SIG undefined FUN_1496ff7f4(void)

longlong FUN_1496ff7f4(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496ff82a FUN_1496ff82a body=101 status=ok
// SIG undefined FUN_1496ff82a(void)

undefined8 * FUN_1496ff82a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be154d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496ff890 FUN_1496ff890 body=49 status=ok
// SIG undefined FUN_1496ff890(void)

undefined8 * FUN_1496ff890(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 1496ff8e0 FUN_1496ff8e0 body=32 status=ok
// SIG undefined FUN_1496ff8e0(void)

undefined8 FUN_1496ff8e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 1496ff900 FUN_1496ff900 body=29 status=ok
// SIG undefined FUN_1496ff900(void)

undefined8 FUN_1496ff900(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496ff91e FUN_1496ff91e body=101 status=ok
// SIG undefined FUN_1496ff91e(void)

undefined8 * FUN_1496ff91e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be154d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496ff984 FUN_1496ff984 body=177 status=ok
// SIG undefined FUN_1496ff984(void)

void FUN_1496ff984(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496ffa36(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ffa36 FUN_1496ffa36 body=208 status=ok
// SIG undefined FUN_1496ffa36(void)

void FUN_1496ffa36(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1496ffb08(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ffb08 FUN_1496ffb08 body=190 status=ok
// SIG undefined FUN_1496ffb08(void)

undefined8 *
FUN_1496ffb08(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be15518;
  param_1[7] = &PTR_FUN_14be15530;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ffbc8 FUN_1496ffbc8 body=53 status=ok
// SIG undefined FUN_1496ffbc8(void)

longlong FUN_1496ffbc8(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496ffbfe FUN_1496ffbfe body=101 status=ok
// SIG undefined FUN_1496ffbfe(void)

undefined8 * FUN_1496ffbfe(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15550;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496ffc64 FUN_1496ffc64 body=49 status=ok
// SIG undefined FUN_1496ffc64(void)

undefined8 * FUN_1496ffc64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 1496ffcb4 FUN_1496ffcb4 body=32 status=ok
// SIG undefined FUN_1496ffcb4(void)

undefined8 FUN_1496ffcb4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 1496ffcd4 FUN_1496ffcd4 body=29 status=ok
// SIG undefined FUN_1496ffcd4(void)

undefined8 FUN_1496ffcd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496ffcf2 FUN_1496ffcf2 body=101 status=ok
// SIG undefined FUN_1496ffcf2(void)

undefined8 * FUN_1496ffcf2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15550;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496ffd58 FUN_1496ffd58 body=177 status=ok
// SIG undefined FUN_1496ffd58(void)

void FUN_1496ffd58(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496ffe0a(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ffe0a FUN_1496ffe0a body=208 status=ok
// SIG undefined FUN_1496ffe0a(void)

void FUN_1496ffe0a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1496ffedc(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496ffedc FUN_1496ffedc body=190 status=ok
// SIG undefined FUN_1496ffedc(void)

undefined8 *
FUN_1496ffedc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be15560;
  param_1[7] = &PTR_FUN_14be15570;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496fff9c FUN_1496fff9c body=53 status=ok
// SIG undefined FUN_1496fff9c(void)

longlong FUN_1496fff9c(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fffd2 FUN_1496fffd2 body=101 status=ok
// SIG undefined FUN_1496fffd2(void)

undefined8 * FUN_1496fffd2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15590;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149700038 FUN_149700038 body=49 status=ok
// SIG undefined FUN_149700038(void)

undefined8 * FUN_149700038(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 149700088 FUN_149700088 body=32 status=ok
// SIG undefined FUN_149700088(void)

undefined8 FUN_149700088(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 1497000a8 FUN_1497000a8 body=29 status=ok
// SIG undefined FUN_1497000a8(void)

undefined8 FUN_1497000a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497000c6 FUN_1497000c6 body=101 status=ok
// SIG undefined FUN_1497000c6(void)

undefined8 * FUN_1497000c6(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15590;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14970012c FUN_14970012c body=177 status=ok
// SIG undefined FUN_14970012c(void)

void FUN_14970012c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497001de(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497001de FUN_1497001de body=208 status=ok
// SIG undefined FUN_1497001de(void)

void FUN_1497001de(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1497002b0(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497002b0 FUN_1497002b0 body=190 status=ok
// SIG undefined FUN_1497002b0(void)

undefined8 *
FUN_1497002b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be155a0;
  param_1[7] = &PTR_FUN_14be155b0;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700370 FUN_149700370 body=53 status=ok
// SIG undefined FUN_149700370(void)

longlong FUN_149700370(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497003a6 FUN_1497003a6 body=101 status=ok
// SIG undefined FUN_1497003a6(void)

undefined8 * FUN_1497003a6(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be155d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 14970040c FUN_14970040c body=49 status=ok
// SIG undefined FUN_14970040c(void)

undefined8 * FUN_14970040c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 14970045c FUN_14970045c body=32 status=ok
// SIG undefined FUN_14970045c(void)

undefined8 FUN_14970045c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 14970047c FUN_14970047c body=29 status=ok
// SIG undefined FUN_14970047c(void)

undefined8 FUN_14970047c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14970049a FUN_14970049a body=101 status=ok
// SIG undefined FUN_14970049a(void)

undefined8 * FUN_14970049a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be155d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149700500 FUN_149700500 body=177 status=ok
// SIG undefined FUN_149700500(void)

void FUN_149700500(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_146fd1ece(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497005b2 FUN_1497005b2 body=312 status=ok
// SIG undefined FUN_1497005b2(void)

longlong FUN_1497005b2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1496ff662(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 3) {
            param_3 = lVar1 + 0x48;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497006ec FUN_1497006ec body=177 status=ok
// SIG undefined FUN_1497006ec(void)

void FUN_1497006ec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_14970079e(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970079e FUN_14970079e body=200 status=ok
// SIG undefined FUN_14970079e(void)

void FUN_14970079e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be155e0;
  *(undefined4 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700868 FUN_149700868 body=29 status=ok
// SIG undefined FUN_149700868(void)

undefined8 FUN_149700868(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149700886 FUN_149700886 body=101 status=ok
// SIG undefined FUN_149700886(void)

undefined8 * FUN_149700886(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be155f0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497008ec FUN_1497008ec body=29 status=ok
// SIG undefined FUN_1497008ec(void)

undefined8 FUN_1497008ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14970090a FUN_14970090a body=101 status=ok
// SIG undefined FUN_14970090a(void)

undefined8 * FUN_14970090a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be155f0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149700970 FUN_149700970 body=177 status=ok
// SIG undefined FUN_149700970(void)

void FUN_149700970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149700a22(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700a22 FUN_149700a22 body=207 status=ok
// SIG undefined FUN_149700a22(void)

void FUN_149700a22(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be15600;
  puVar6 = local_48 + 8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700af2 FUN_149700af2 body=29 status=ok
// SIG undefined FUN_149700af2(void)

undefined8 FUN_149700af2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149700b10 FUN_149700b10 body=101 status=ok
// SIG undefined FUN_149700b10(void)

undefined8 * FUN_149700b10(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15610;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149700b76 FUN_149700b76 body=29 status=ok
// SIG undefined FUN_149700b76(void)

undefined8 FUN_149700b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149700b94 FUN_149700b94 body=101 status=ok
// SIG undefined FUN_149700b94(void)

undefined8 * FUN_149700b94(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15610;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149700bfa FUN_149700bfa body=177 status=ok
// SIG undefined FUN_149700bfa(void)

void FUN_149700bfa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149700cac(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700cac FUN_149700cac body=207 status=ok
// SIG undefined FUN_149700cac(void)

void FUN_149700cac(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be15620;
  puVar6 = local_48 + 8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700d7c FUN_149700d7c body=29 status=ok
// SIG undefined FUN_149700d7c(void)

undefined8 FUN_149700d7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149700d9a FUN_149700d9a body=101 status=ok
// SIG undefined FUN_149700d9a(void)

undefined8 * FUN_149700d9a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15630;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149700e00 FUN_149700e00 body=29 status=ok
// SIG undefined FUN_149700e00(void)

undefined8 FUN_149700e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149700e1e FUN_149700e1e body=101 status=ok
// SIG undefined FUN_149700e1e(void)

undefined8 * FUN_149700e1e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15630;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149700e84 FUN_149700e84 body=22 status=ok
// SIG undefined FUN_149700e84(void)

undefined8 FUN_149700e84(undefined8 param_1)

{
  FUN_149700e9a();
  return param_1;
}



// FUNCTION 149700e9a FUN_149700e9a body=153 status=ok
// SIG undefined FUN_149700e9a(void)

undefined8 * FUN_149700e9a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149700f34(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700f34 FUN_149700f34 body=162 status=ok
// SIG undefined FUN_149700f34(void)

undefined8 * FUN_149700f34(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be15000;
  param_1[0x33] = 0;
  FUN_1446ddc76(param_1 + 0x34,"StaticMesh",1);
  local_50 = 0;
  local_30 = 0xffffffff;
  local_28 = 0;
  local_38 = param_1 + 0x33;
  FUN_146fb8a66(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149700fd8 FUN_149700fd8 body=25 status=ok
// SIG undefined FUN_149700fd8(void)

undefined8 FUN_149700fd8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149701010 FUN_149701010 body=177 status=ok
// SIG undefined FUN_149701010(void)

void FUN_149701010(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1497010c2(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497010c2 FUN_1497010c2 body=208 status=ok
// SIG undefined FUN_1497010c2(void)

void FUN_1497010c2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_149701194(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149701194 FUN_149701194 body=190 status=ok
// SIG undefined FUN_149701194(void)

undefined8 *
FUN_149701194(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be15660;
  param_1[7] = &PTR_FUN_14be15670;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149701254 FUN_149701254 body=53 status=ok
// SIG undefined FUN_149701254(void)

longlong FUN_149701254(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14970128a FUN_14970128a body=101 status=ok
// SIG undefined FUN_14970128a(void)

undefined8 * FUN_14970128a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15690;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497012f0 FUN_1497012f0 body=49 status=ok
// SIG undefined FUN_1497012f0(void)

undefined8 * FUN_1497012f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 149701340 FUN_149701340 body=32 status=ok
// SIG undefined FUN_149701340(void)

undefined8 FUN_149701340(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 149701360 FUN_149701360 body=29 status=ok
// SIG undefined FUN_149701360(void)

undefined8 FUN_149701360(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14970137e FUN_14970137e body=101 status=ok
// SIG undefined FUN_14970137e(void)

undefined8 * FUN_14970137e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be15690;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497013e4 FUN_1497013e4 body=177 status=ok
// SIG undefined FUN_1497013e4(void)

void FUN_1497013e4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149701496(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149701496 FUN_149701496 body=208 status=ok
// SIG undefined FUN_149701496(void)

void FUN_149701496(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_149701568(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149701568 FUN_149701568 body=190 status=ok
// SIG undefined FUN_149701568(void)

undefined8 *
FUN_149701568(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_1 = &PTR_LAB_14be15148;
  *(undefined4 *)(param_1 + 1) = 3;
  local_28._0_4_ = (undefined4)uVar2;
  local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar3;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 2) = local_28._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_20;
  *(undefined4 *)(param_1 + 3) = uStack_20._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  param_1[7] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28 = uVar2;
  uStack_20 = uVar3;
  FUN_1405bceb4(param_1 + 7);
  *param_1 = &PTR_FUN_14be156a0;
  param_1[7] = &PTR_FUN_14be156b0;
  lVar1 = *param_4;
  param_1[9] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149701628 FUN_149701628 body=53 status=ok
// SIG undefined FUN_149701628(void)

longlong FUN_149701628(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x38) = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14970165e FUN_14970165e body=101 status=ok
// SIG undefined FUN_14970165e(void)

undefined8 * FUN_14970165e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be156d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497016c4 FUN_1497016c4 body=49 status=ok
// SIG undefined FUN_1497016c4(void)

undefined8 * FUN_1497016c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -7);
  }
  return param_1 + -7;
}



// FUNCTION 149701714 FUN_149701714 body=32 status=ok
// SIG undefined FUN_149701714(void)

undefined8 FUN_149701714(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TContextCacheElementUObject");
  return param_2;
}



// FUNCTION 149701734 FUN_149701734 body=29 status=ok
// SIG undefined FUN_149701734(void)

undefined8 FUN_149701734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149701752 FUN_149701752 body=101 status=ok
// SIG undefined FUN_149701752(void)

undefined8 * FUN_149701752(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be156d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497017b7 FUN_1497017b7 body=613 status=ok
// SIG undefined FUN_1497017b7(void)

undefined8 *
FUN_1497017b7(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_168 [36];
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [8];
  undefined4 *local_100;
  undefined1 *local_f8;
  undefined1 local_ec [4];
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_144 = param_4;
  local_140 = param_3;
  FUN_146eca9da(local_108,param_3);
  FUN_146eca9e2(local_108,0);
  param_1[4] = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  plVar1 = param_2 + 2;
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  iStack_84 = 0;
  local_80 = 0;
  plStack_90 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_98);
    iVar2 = (int)param_2[5];
  }
  local_118 = local_88;
  iStack_114 = iStack_84;
  local_110 = local_80;
  local_10c = local_7c;
  local_128 = local_98;
  local_120 = plStack_90;
  local_130 = param_2;
  if ((iStack_84 != iVar2) || (plStack_90 != plVar1)) {
    do {
      local_134 = *(undefined4 *)(*local_130 + (longlong)iStack_114 * 0xc);
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_149701a1d(local_140,local_134,local_144,&local_98);
      FUN_144a7cc9e(&local_98,local_134);
      FUN_146e256ae(&local_98,local_e8,param_2);
      local_100 = &local_134;
      local_f8 = local_e8;
      FUN_14970e0ba(param_1,local_ec);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_98);
      local_118 = local_118 & ~local_128._4_4_;
      FUN_1449c0562(&local_128);
    } while (local_130 != param_2 || (local_120 != plVar1 || iStack_114 != iVar2));
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149701a1d FUN_149701a1d body=665 status=ok
// SIG undefined FUN_149701a1d(void)

void FUN_149701a1d(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  uVar2 = DAT_14c996af0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = (longlong)param_2;
  if ((*(int *)(*(longlong *)(param_1 + 0x1b0) + lVar5 * 4) == 1) &&
     (*(int *)(*(longlong *)(param_1 + 400) + lVar5 * 4) != -1)) {
    FUN_1446ddc76(&local_68,"Proximity",1);
    lVar6 = FUN_146eab2fc(param_1,local_68,uVar2);
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 400) + lVar5 * 4) * 0x50;
    plVar1 = (longlong *)(*(longlong *)(lVar6 + 0x10) + lVar5);
    lVar5 = *(longlong *)(lVar6 + 0x10) + lVar5;
    lVar6 = lVar5 + 0x10;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar6;
    if (*(int *)(lVar5 + 0x28) == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar4 = (int)plVar1[5];
    }
    local_88 = (undefined4)local_60;
    uStack_84 = local_60._4_4_;
    uStack_80 = (undefined4)uStack_58;
    uStack_7c = uStack_58._4_4_;
    local_78 = local_50;
    iStack_74 = iStack_4c;
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_90 = plVar1;
    if ((iStack_4c != iVar4) || (uStack_58 != lVar6)) {
      do {
        uVar3 = FUN_146ebd444(param_1,*(undefined4 *)
                                       (*(longlong *)(param_1 + 0x3b0) +
                                       (longlong)*(int *)(*local_90 + (longlong)iStack_74 * 0xc) * 4
                                       ),param_3,0);
        local_60 = CONCAT44(local_60._4_4_,uVar3);
        FUN_144984904(param_4,local_94);
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar6 || iStack_74 != iVar4))
      ;
    }
  }
  else {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x140) + lVar5 * 0x50);
    lVar5 = *(longlong *)(param_1 + 0x140) + lVar5 * 0x50;
    lVar6 = lVar5 + 0x10;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = lVar6;
    if (*(int *)(lVar5 + 0x28) == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar4 = (int)plVar1[5];
    }
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_78 = local_50;
    iStack_74 = iStack_4c;
    local_88 = (undefined4)local_60;
    uStack_84 = local_60._4_4_;
    uStack_80 = (undefined4)uStack_58;
    uStack_7c = uStack_58._4_4_;
    local_90 = plVar1;
    if ((iStack_4c != iVar4) || (uStack_58 != lVar6)) {
      do {
        FUN_149701a1d(param_1,*(undefined4 *)(*local_90 + (longlong)iStack_74 * 0xc),param_3,param_4
                     );
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar6 || iStack_74 != iVar4))
      ;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149701cb7 FUN_149701cb7 body=687 status=ok
// SIG undefined FUN_149701cb7(void)

void FUN_149701cb7(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_94 [4];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_a8 = param_3;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  if (*(int *)((longlong)param_4 + 0xc) < (int)uVar5) {
    FUN_14970e1ee(param_4,uVar5);
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  }
  if ((uint)(*(int *)(param_5 + 8) - *(int *)(param_5 + 0x34)) < uVar5) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_1400bac10(param_5,uVar5);
    iVar2 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_5 + 0x48) == 0) || (*(int *)(param_5 + 0x48) < iVar2)) {
      *(int *)(param_5 + 0x48) = iVar2;
      FUN_144a56d22(param_5);
    }
  }
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar2 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (uint)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 == iVar2) && (uStack_60 == plVar1)) {
LAB_149701f0c:
    if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_149701e86:
  iVar4 = *(int *)(*local_90 + (longlong)iStack_74 * 0xc);
  local_68 = CONCAT44(local_68._4_4_,iVar4);
  if ((longlong)(int)param_2[1] != 0) {
    lVar6 = 0;
    do {
      if (*(int *)(*param_2 + lVar6) == iVar4) {
        FUN_149701f68(param_4);
        lVar7 = (longlong)((int)param_4[1] + -1) * 0xa0 + *param_4;
        lVar6 = 0;
        local_a0 = param_4;
        FUN_1447cbafe(lVar7,local_94,&local_68,0);
        if ((int)local_a8[1] == *(int *)((longlong)local_a8 + 0x34)) goto LAB_149701e1c;
        plVar3 = local_a8 + 7;
        if ((longlong *)local_a8[8] != (longlong *)0x0) {
          plVar3 = (longlong *)local_a8[8];
        }
        iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)local_a8[9] - 1U & (uint)local_68) * 4)
        ;
        if (iVar4 == -1) goto LAB_149701e61;
        goto LAB_149701e68;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)param_2[1] * 4 != lVar6);
  }
  FUN_1447cbafe(param_5,local_94,&local_68,0);
  goto LAB_149701ed1;
  while (iVar4 = *(int *)(lVar6 + 0x58), iVar4 != -1) {
LAB_149701e68:
    lVar6 = *local_a8 + (longlong)iVar4 * 0x60;
    if (*(uint *)(*local_a8 + (longlong)iVar4 * 0x60) == (uint)local_68) goto LAB_149701e1c;
  }
LAB_149701e61:
  lVar6 = 0;
LAB_149701e1c:
  FUN_145c3f772(lVar7 + 0x50,lVar6 + 8);
  param_4 = local_a0;
LAB_149701ed1:
  local_78 = local_78 & ~uStack_84;
  FUN_1449c0562(&local_88);
  if (local_90 == param_1 &&
      ((longlong *)CONCAT44(uStack_7c,uStack_80) == plVar1 && iStack_74 == iVar2))
  goto LAB_149701f0c;
  goto LAB_149701e86;
}



// FUNCTION 149701f68 FUN_149701f68 body=56 status=ok
// SIG undefined FUN_149701f68(void)

void FUN_149701f68(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14970e2a8(param_1,iVar1);
  }
  FUN_14970e25e((longlong)iVar1 * 0xa0 + *param_1);
  return;
}



// FUNCTION 149701fa0 FUN_149701fa0 body=713 status=ok
// SIG undefined FUN_149701fa0(void)

undefined8 FUN_149701fa0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  undefined1 local_e4 [4];
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  iVar8 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = (longlong *)(param_2 + 0x50);
  lVar2 = param_2 + 0x60;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_f8 = param_2;
  local_b0 = lVar2;
  if (*(int *)(param_2 + 0x78) != 0) {
    FUN_1449c0562(&local_b8);
    iVar8 = *(int *)(local_f8 + 0x78);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = plVar1;
  if ((iStack_a4 == iVar8) && (local_b0 == lVar2)) {
    uVar7 = 0;
LAB_1497020aa:
    FUN_1468b3f6e(plVar1,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    FUN_14062beec(param_1);
    if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar7;
  }
  local_f0 = param_1 + 7;
  uVar7 = 0;
LAB_149702147:
  uVar3 = *(uint *)(*local_e0 + (longlong)iStack_c4 * 0xc);
  local_b8 = CONCAT44(local_b8._4_4_,uVar3);
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    plVar4 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar4 = param_3 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_3[9] - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*param_3 + (longlong)iVar5 * 0xc) == uVar3) {
          FUN_1447cbafe(local_f8,local_e4,&local_b8,0);
          lVar6 = 0;
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1497021f9;
          plVar4 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar4 = local_f0;
          }
          iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & (uint)local_b8) * 4
                          );
          if (iVar5 == -1) goto LAB_14970223e;
          goto LAB_149702245;
        }
        iVar5 = *(int *)(*param_3 + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
  goto LAB_149702194;
  while (iVar5 = *(int *)(lVar6 + 0x58), iVar5 != -1) {
LAB_149702245:
    lVar6 = *param_1 + (longlong)iVar5 * 0x60;
    if (*(uint *)(*param_1 + (longlong)iVar5 * 0x60) == (uint)local_b8) goto LAB_1497021f9;
  }
LAB_14970223e:
  lVar6 = 0;
LAB_1497021f9:
  FUN_1468b3f6e(&local_98,lVar6 + 8);
  FUN_144a7cc9e(param_3,local_b8 & 0xffffffff);
  uVar7 = 1;
LAB_149702194:
  local_c8 = local_c8 & ~local_d8._4_4_;
  FUN_1449c0562(&local_d8);
  if (local_e0 == plVar1 && (local_d0 == lVar2 && iStack_c4 == iVar8)) goto LAB_1497020aa;
  goto LAB_149702147;
}



// FUNCTION 14970226a FUN_14970226a body=199 status=ok
// SIG undefined FUN_14970226a(void)

longlong * FUN_14970226a(longlong *param_1,longlong param_2,int param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_140619b9c((longlong)param_3 * 0x50 + *(longlong *)(param_2 + 0x140),&local_30);
  if (&local_30 == param_1) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 1) = local_28;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  }
  FUN_149702332(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149702332 FUN_149702332 body=152 status=ok
// SIG undefined FUN_149702332(void)

void FUN_149702332(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_48;
  undefined8 local_40;
  code *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14051b394(param_1 + 0x10,*(undefined4 *)(param_1 + 8));
  local_30 = &local_48;
  local_58 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_38 = FUN_144605abe;
  local_60 = 0;
  local_48 = param_1;
  local_40 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 8),1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497023cc FUN_1497023cc body=110 status=ok
// SIG undefined FUN_1497023cc(void)

void FUN_1497023cc(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0x30) = param_2;
  iVar2 = param_4[2];
  if (param_4[2] == 0) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0x30) = iVar2;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  FUN_14970243c();
  if (-1 < param_3) {
    do {
      bVar1 = FUN_149702570(param_1);
      bVar3 = param_3 != 0;
      param_3 = param_3 + -1;
    } while ((bVar1 & bVar3) != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970243c FUN_14970243c body=307 status=ok
// SIG undefined FUN_14970243c(void)

void FUN_14970243c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 8) < 1) {
    iVar5 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 8)) {
      iVar5 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x30) = iVar5;
    FUN_14051b394(param_1 + 0x48);
    if (0 < *(int *)(param_1 + 0x30)) {
      fVar14 = (float)*(int *)(param_1 + 8) / (float)*(int *)(param_1 + 0x30);
      uVar9 = (int)ROUND(fVar14 + fVar14 + -0.5) >> 1;
      uVar10 = 1;
      if (1 < (int)uVar9) {
        uVar10 = (ulonglong)uVar9;
      }
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(lVar4 + 0x10 + lVar12) = *(undefined8 *)(lVar3 + 0x10 + lVar11);
        puVar1 = (undefined4 *)(lVar3 + lVar11);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined4 *)(lVar4 + lVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 0x18;
        lVar11 = lVar11 + uVar10 * 0x18;
      } while (lVar13 < *(int *)(param_1 + 0x30));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) < 0) {
      FUN_1447a8aa0(param_1 + 0x48,0);
    }
    FUN_1483adaae(param_1 + 0x48,param_2);
  }
  local_24 = 0;
  FUN_1448156a8(param_1 + 0x20,&local_24,*(undefined4 *)(param_1 + 8));
  local_24 = 0;
  FUN_1448156a8(param_1 + 0x38,&local_24,*(undefined4 *)(param_1 + 0x30));
  if (0 < *(int *)(param_1 + 0x30)) {
    **(undefined4 **)(param_1 + 0x38) = *(undefined4 *)(param_1 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149702570 FUN_149702570 body=435 status=ok
// SIG undefined FUN_149702570(void)

undefined8 FUN_149702570(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  double dVar13;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
LAB_1497025c3:
    uVar7 = 0;
  }
  else {
    bVar11 = true;
    lVar10 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x20);
      while( true ) {
        iVar5 = FUN_1497035ce(param_1);
        iVar8 = *(int *)(lVar9 + lVar10 * 4);
        if (iVar5 != iVar8) break;
        lVar10 = lVar10 + 1;
        if ((int)uVar6 <= lVar10) {
          if (!bVar11) goto LAB_1497025f8;
          goto LAB_1497025c3;
        }
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar8 * 4);
      *piVar1 = *piVar1 + -1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 4);
      *piVar1 = *piVar1 + 1;
      *(int *)(*(longlong *)(param_1 + 0x20) + lVar10 * 4) = iVar5;
      uVar6 = (ulonglong)*(int *)(param_1 + 0x18);
      lVar10 = lVar10 + 1;
      bVar11 = false;
    } while (lVar10 < (longlong)uVar6);
LAB_1497025f8:
    iVar8 = *(int *)(param_1 + 0x30);
    if (0 < iVar8) {
      lVar10 = 0;
      lVar9 = 0;
      do {
        if (0 < *(int *)(*(longlong *)(param_1 + 0x38) + lVar9 * 4)) {
          lVar3 = *(longlong *)(param_1 + 0x48);
          puVar2 = (undefined8 *)(lVar3 + lVar10);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar3 + 0x10 + lVar10) = 0;
          iVar8 = *(int *)(param_1 + 0x30);
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x18;
      } while (lVar9 < iVar8);
    }
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar10 = 4;
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x10);
        lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
        lVar4 = *(longlong *)(param_1 + 0x48);
        *(double *)(lVar4 + lVar12 * 0x18) =
             *(double *)(lVar3 + -0x10 + lVar10 * 4) + *(double *)(lVar4 + lVar12 * 0x18);
        *(double *)(lVar4 + 8 + lVar12 * 0x18) =
             *(double *)(lVar3 + -8 + lVar10 * 4) + *(double *)(lVar4 + 8 + lVar12 * 0x18);
        *(double *)(lVar4 + 0x10 + lVar12 * 0x18) =
             *(double *)(lVar3 + lVar10 * 4) + *(double *)(lVar4 + 0x10 + lVar12 * 0x18);
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 6;
      } while (lVar9 < *(int *)(param_1 + 0x28));
      iVar8 = *(int *)(param_1 + 0x30);
    }
    uVar7 = 1;
    if (0 < iVar8) {
      lVar10 = 4;
      lVar9 = 0;
      do {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar9 * 4);
        if (0 < iVar5) {
          lVar3 = *(longlong *)(param_1 + 0x48);
          dVar13 = 1.0 / (double)iVar5;
          *(double *)(lVar3 + -0x10 + lVar10 * 4) = *(double *)(lVar3 + -0x10 + lVar10 * 4) * dVar13
          ;
          *(double *)(lVar3 + -8 + lVar10 * 4) = *(double *)(lVar3 + -8 + lVar10 * 4) * dVar13;
          *(double *)(lVar3 + lVar10 * 4) = dVar13 * *(double *)(lVar3 + lVar10 * 4);
          iVar8 = *(int *)(param_1 + 0x30);
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 6;
      } while (lVar9 < iVar8);
    }
  }
  return uVar7;
}



// FUNCTION 149702724 FUN_149702724 body=248 status=ok
// SIG undefined FUN_149702724(void)

void FUN_149702724(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c7a828(param_1 + 0xb,(int)param_1[1],1);
  uVar1 = DAT_14c9974a8;
  FUN_1446ddc76(&local_38,"Level",1);
  cVar2 = FUN_140498cd4(param_2,local_38,uVar1);
  uVar1 = DAT_14c9974a8;
  if (cVar2 != '\0') {
    FUN_1446ddc76(&local_40,"Level",1);
    lVar3 = FUN_140619ac2(param_2,local_40,uVar1);
    if (0 < (int)param_1[1]) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        local_48 = param_1[0xb] + lVar5;
        lVar4 = (longlong)*(int *)(*param_1 + lVar6 * 4);
        FUN_149703050(param_1,param_2,lVar4,*(undefined4 *)(*(longlong *)(lVar3 + 0x10) + lVar4 * 4)
                     );
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x50;
      } while (lVar6 < (int)param_1[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970281e FUN_14970281e body=1282 status=ok
// SIG undefined FUN_14970281e(void)

void FUN_14970281e(longlong *param_1,undefined8 param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[0xc] == 0) {
    FUN_149702724(param_1,param_2);
  }
  FUN_146ec1438(param_2);
  uVar6 = DAT_14c9974a8;
  FUN_1446ddc76(&local_a8,"Volume",1);
  lVar10 = FUN_14061a004(param_2,local_a8,uVar6);
  local_b8 = 0;
  uStack_b0 = 0;
  local_f0 = (longlong *)((ulonglong)local_f0._4_4_ << 0x20);
  FUN_1448158c6(&local_b8,&local_f0,(int)param_1[8]);
  iVar3 = (int)param_1[8];
  if ((longlong)iVar3 == 0) {
    iVar14 = 0;
  }
  else {
    lVar11 = 0;
    iVar14 = 0;
    do {
      iVar14 = iVar14 + (uint)(*(int *)(param_1[7] + lVar11) == 0);
      lVar11 = lVar11 + 4;
    } while ((longlong)iVar3 * 4 - lVar11 != 0);
  }
  if (0 < (int)param_1[1]) {
    lVar11 = 0;
    do {
      lVar12 = (longlong)*(int *)(param_1[4] + lVar11 * 4);
      *(float *)(local_b8 + lVar12 * 4) =
           *(float *)(*(longlong *)(lVar10 + 0x10) + (longlong)*(int *)(*param_1 + lVar11 * 4) * 4)
           + *(float *)(local_b8 + lVar12 * 4);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[1]);
  }
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  iVar8 = (int)param_1[5];
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_14481578e(&local_c8);
  }
  param_3 = param_3 * param_3 * param_3;
  if (0 < (int)uStack_b0) {
    lVar10 = 0;
    iVar8 = (int)uStack_b0;
    do {
      uVar16 = uStack_c0;
      pfVar1 = (float *)(local_b8 + lVar10 * 4);
      if (*pfVar1 <= param_3 && param_3 != *pfVar1) {
        lVar11 = (longlong)(int)uStack_c0;
        uVar9 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
        if (uStack_c0._4_4_ < uVar9) {
          FUN_1446f48e2(&local_c8,uVar16 & 0xffffffff);
        }
        local_c8[lVar11] = (int)lVar10;
        iVar8 = (int)uStack_b0;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if ((int)uStack_c0 != 0) {
    uVar16 = (ulonglong)(uint)(iVar3 - iVar14);
    do {
      iVar3 = local_c8[(longlong)(int)uStack_c0 + -1];
      lVar10 = (longlong)iVar3;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_c0 + -1);
      if ((int)uVar16 < 3) break;
      pfVar1 = (float *)(local_b8 + lVar10 * 4);
      if ((*pfVar1 <= param_3 && param_3 != *pfVar1) && (iVar14 = (int)param_1[1], 0 < iVar14)) {
        iVar8 = -1;
        lVar11 = 0;
        fVar17 = 3.4028235e+38;
        local_f8 = uVar16;
        do {
          if (*(int *)(param_1[4] + lVar11 * 4) == iVar3) {
            lVar5 = param_1[0xb];
            lVar12 = lVar5 + lVar11 * 0x50;
            lVar13 = lVar12 + 0x10;
            local_a0 = 0x100000000;
            local_90 = 0xffffffff;
            local_88 = 0;
            local_98 = lVar13;
            if (*(int *)(lVar12 + 0x28) != 0) {
              FUN_1449c0562(&local_a0);
            }
            plVar15 = (longlong *)(lVar5 + lVar11 * 0x50);
            local_d8 = local_90;
            local_d0 = local_88;
            local_cc = local_84;
            local_e8 = local_a0;
            local_e0 = local_98;
            uVar9 = *(uint *)(plVar15 + 5);
            local_a0 = CONCAT44(1 << ((byte)uVar9 & 0x1f),(int)uVar9 >> 5);
            local_90 = CONCAT44(uVar9,-1 << ((byte)uVar9 & 0x1f));
            local_88 = uVar9 & 0xffffffe0;
            local_f0 = plVar15;
            local_98 = lVar13;
            if (*(uint *)(plVar15 + 5) != uVar9) {
              FUN_1449c0562(&local_a0);
              uVar9 = local_90._4_4_;
            }
            lVar12 = local_98;
            if ((local_f0 != plVar15 || local_e0 != local_98) || local_d8._4_4_ != uVar9) {
              do {
                iVar14 = *(int *)(param_1[4] +
                                 (longlong)*(int *)(*local_f0 + (longlong)(int)local_d8._4_4_ * 0xc)
                                 * 4);
                if ((iVar14 != iVar3) &&
                   ((fVar2 = *(float *)(local_b8 + (longlong)iVar14 * 4), iVar8 == -1 ||
                    (fVar2 < fVar17)))) {
                  fVar17 = fVar2;
                  iVar8 = iVar14;
                }
                local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
                FUN_1449c0562(&local_e8);
              } while (local_f0 != plVar15 || (local_e0 != lVar12 || local_d8._4_4_ != uVar9));
            }
            iVar14 = (int)param_1[1];
          }
          uVar7 = uStack_c0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar14);
        uVar16 = local_f8;
        if (iVar8 != -1) {
          lVar12 = (longlong)iVar8;
          *(float *)(local_b8 + lVar12 * 4) =
               *(float *)(local_b8 + lVar10 * 4) + *(float *)(local_b8 + lVar12 * 4);
          *(undefined4 *)(local_b8 + lVar10 * 4) = 0;
          lVar11 = param_1[7];
          fVar17 = (float)(*(int *)(lVar11 + lVar10 * 4) + *(int *)(lVar11 + lVar12 * 4));
          *(int *)(lVar11 + lVar12 * 4) = (int)fVar17;
          if (fVar17 < param_3) {
            lVar11 = (longlong)(int)uStack_c0;
            uVar9 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
            if (uStack_c0._4_4_ < uVar9) {
              FUN_1446f48e2(&local_c8,uVar7 & 0xffffffff);
            }
            local_c8[lVar11] = iVar8;
            uVar4 = local_c8[(int)uStack_c0 + -1];
            local_c8[(int)uStack_c0 + -1] = *local_c8;
            *local_c8 = uVar4;
          }
          *(undefined4 *)(param_1[7] + lVar10 * 4) = 0;
          uVar16 = (ulonglong)((int)local_f8 - 1);
          iVar14 = (int)param_1[1];
          if (0 < iVar14) {
            lVar10 = 0;
            do {
              if (*(int *)(param_1[4] + lVar10 * 4) == iVar3) {
                *(int *)(param_1[4] + lVar10 * 4) = iVar8;
                iVar14 = (int)param_1[1];
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < iVar14);
          }
        }
      }
    } while ((int)uStack_c0 != 0);
  }
  if (local_c8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149702d22 FUN_149702d22 body=342 status=ok
// SIG undefined FUN_149702d22(void)

void FUN_149702d22(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = 0;
  FUN_14475e60e((longlong *)(param_1 + 0x68),&local_39,*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x60) == 0) {
    FUN_149702724(param_1);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar6 = 0;
    do {
      if ((longlong)*(int *)(param_1 + 0x28) != 0) {
        lVar3 = (longlong)*(int *)(param_1 + 0x28) << 2;
        lVar5 = 0;
        do {
          if (uVar6 == *(uint *)(*(longlong *)(param_1 + 0x20) + lVar5 * 4)) {
            if (-1 < (int)lVar5) {
              FUN_149702e7a(param_1,lVar5,uVar6 & 0xffffffff);
              iVar2 = *(int *)(param_1 + 8);
              if (0 < iVar2) {
                lVar3 = 0;
                bVar4 = false;
                do {
                  lVar5 = *(longlong *)(param_1 + 0x20);
                  if ((uVar6 == *(uint *)(lVar5 + lVar3 * 4)) &&
                     (*(char *)(*(longlong *)(param_1 + 0x68) + lVar3) == '\0')) {
                    if (!bVar4) {
                      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                      iVar2 = *(int *)(param_1 + 0x40);
                      *(uint *)(param_1 + 0x40) = iVar2 + 1U;
                      if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
                        FUN_1446f48e2(param_1 + 0x38,iVar2);
                      }
                      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 4) = 0;
                      lVar5 = *(longlong *)(param_1 + 0x20);
                    }
                    *(int *)(lVar5 + lVar3 * 4) = *(int *)(param_1 + 0x30) + -1;
                    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + -4 +
                                    (longlong)*(int *)(param_1 + 0x30) * 4);
                    *piVar1 = *piVar1 + 1;
                    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + uVar6 * 4);
                    *piVar1 = *piVar1 + -1;
                    iVar2 = *(int *)(param_1 + 8);
                    bVar4 = true;
                  }
                  lVar3 = lVar3 + 1;
                } while (lVar3 < iVar2);
              }
            }
            break;
          }
          lVar5 = lVar5 + 1;
          lVar3 = lVar3 + -4;
        } while (lVar3 != 0);
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x30));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149702e7a FUN_149702e7a body=318 status=ok
// SIG undefined FUN_149702e7a(void)

void FUN_149702e7a(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2) = 1;
  lVar2 = (longlong)param_2 * 0x50;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + lVar2);
  lVar2 = *(longlong *)(param_1 + 0x58) + lVar2;
  lVar4 = lVar2 + 0x10;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar4;
  if (*(int *)(lVar2 + 0x28) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)plVar1[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar4)) {
    do {
      lVar2 = (longlong)*(int *)(*local_80 + (longlong)iStack_64 * 0xc);
      if ((*(char *)(*(longlong *)(param_1 + 0x68) + lVar2) == '\0') &&
         (*(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4) == param_3)) {
        FUN_149702e7a(param_1,lVar2,param_3);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar4 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149702fba FUN_149702fba body=148 status=ok
// SIG undefined FUN_149702fba(void)

longlong * FUN_149702fba(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1];
  if (-1 < iVar2) {
    if (iVar2 != 0) {
      FUN_14481578e(param_2);
      iVar2 = (int)param_1[1];
      if (0 < iVar2) {
        lVar3 = 0;
        do {
          if (*(int *)(param_1[4] + lVar3 * 4) == param_3) {
            lVar1 = *param_1;
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_1446f48e2(param_2,iVar2);
            }
            *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar1 + lVar3 * 4);
            iVar2 = (int)param_1[1];
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 149703050 FUN_149703050 body=725 status=ok
// SIG undefined FUN_149703050(void)

void FUN_149703050(longlong *param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  uVar2 = DAT_14c996af0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = (longlong)param_3;
  if (*(int *)(*(longlong *)(param_2 + 0x1b0) + lVar6 * 4) == 1) {
    FUN_1446ddc76(&local_70,"Proximity",1);
    lVar7 = FUN_146eab2fc(param_2,local_70,uVar2);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 400) + lVar6 * 4) * 0x50;
    plVar1 = (longlong *)(*(longlong *)(lVar7 + 0x10) + lVar6);
    lVar6 = *(longlong *)(lVar7 + 0x10) + lVar6;
    lVar7 = lVar6 + 0x10;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = lVar7;
    if (*(int *)(lVar6 + 0x28) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar5 = (int)plVar1[5];
    }
    local_90 = (undefined4)local_68;
    uStack_8c = local_68._4_4_;
    uStack_88 = (undefined4)uStack_60;
    uStack_84 = uStack_60._4_4_;
    local_80 = local_58;
    iStack_7c = iStack_54;
    uStack_78 = CONCAT44(uStack_4c,uStack_50);
    local_98 = plVar1;
    if ((iStack_54 != iVar5) || (uStack_60 != lVar7)) {
      do {
        iVar3 = FUN_146ebd444(param_2,*(undefined4 *)
                                       (*(longlong *)(param_2 + 0x3b0) +
                                       (longlong)*(int *)(*local_98 + (longlong)iStack_7c * 0xc) * 4
                                       ),param_4,0);
        if ((longlong)(int)param_1[1] != 0) {
          lVar6 = (longlong)(int)param_1[1] << 2;
          lVar4 = 0;
          do {
            if (*(int *)(*param_1 + lVar4 * 4) == iVar3) {
              local_68 = CONCAT44(local_68._4_4_,(int)lVar4);
              if (-1 < (int)lVar4) {
                FUN_1447cbafe(param_5,local_9c,&local_68);
              }
              break;
            }
            lVar4 = lVar4 + 1;
            lVar6 = lVar6 + -4;
          } while (lVar6 != 0);
        }
        local_80 = local_80 & ~uStack_8c;
        FUN_1449c0562(&local_90);
      } while (local_98 != plVar1 || (CONCAT44(uStack_84,uStack_88) != lVar7 || iStack_7c != iVar5))
      ;
    }
  }
  else {
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x140) + lVar6 * 0x50);
    lVar6 = *(longlong *)(param_2 + 0x140) + lVar6 * 0x50;
    lVar7 = lVar6 + 0x10;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = lVar7;
    if (*(int *)(lVar6 + 0x28) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar5 = (int)plVar1[5];
    }
    uStack_78 = CONCAT44(uStack_4c,uStack_50);
    local_80 = local_58;
    iStack_7c = iStack_54;
    local_90 = (undefined4)local_68;
    uStack_8c = local_68._4_4_;
    uStack_88 = (undefined4)uStack_60;
    uStack_84 = uStack_60._4_4_;
    local_98 = plVar1;
    if ((iStack_54 != iVar5) || (uStack_60 != lVar7)) {
      do {
        local_a8 = param_5;
        FUN_149703050(param_1,param_2,*(undefined4 *)(*local_98 + (longlong)iStack_7c * 0xc),param_4
                     );
        local_80 = local_80 & ~uStack_8c;
        FUN_1449c0562(&local_90);
      } while (local_98 != plVar1 || (CONCAT44(uStack_84,uStack_88) != lVar7 || iStack_7c != iVar5))
      ;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149703326 FUN_149703326 body=678 status=ok
// SIG undefined FUN_149703326(void)

double * FUN_149703326(double *param_1,longlong param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auStack_98 [32];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  char local_48;
  undefined7 uStack_47;
  undefined4 *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (longlong)param_3;
  if (*(int *)(*(longlong *)(param_2 + 0x1b0) + lVar4 * 4) == 1) {
    FUN_146eb9b8f(&local_78,param_2 + 0xb0,param_2 + 0x110,param_3);
    lVar4 = (longlong)*(int *)(*(longlong *)(param_2 + 400) + lVar4 * 4);
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x430) + lVar4 * 4);
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x450) + lVar4 * 4);
    local_38 = (undefined4 *)0x0;
    uStack_30 = 0;
    FUN_14051b394(&local_38,iVar3,1);
    if (0 < (longlong)iVar3) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(param_2 + 0x230) + (longlong)iVar2 * 0xc + 8;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(lVar4 + -8 + lVar5);
        auVar11 = insertps(auVar11,*(undefined4 *)(lVar4 + lVar5),0x28);
        fVar10 = auVar11._0_4_ * local_58;
        fVar12 = auVar11._4_4_ * fStack_54;
        fVar13 = auVar11._8_4_ * fStack_50;
        fVar6 = fVar12 * local_78 - fStack_74 * fVar10;
        fVar7 = fVar13 * fStack_74 - fStack_70 * fVar12;
        fVar9 = fVar10 * fStack_70 - local_78 * fVar13;
        fVar6 = fVar6 + fVar6;
        fVar7 = fVar7 + fVar7;
        fVar9 = fVar9 + fVar9;
        *(double *)((longlong)local_38 + lVar4 * 2) =
             (double)((fVar6 * fStack_74 - fVar9 * fStack_70) + fStack_6c * fVar7 + fVar10 +
                     local_68);
        *(double *)((longlong)local_38 + lVar4 * 2 + 8) =
             (double)((fVar7 * fStack_70 - fVar6 * local_78) + fStack_6c * fVar9 + fVar12 +
                     fStack_64);
        *(double *)((longlong)local_38 + lVar4 * 2 + 0x10) =
             (double)((fVar9 * local_78 - fVar7 * fStack_74) + fStack_6c * fVar6 + fVar13 +
                     fStack_60);
        lVar4 = lVar4 + 0xc;
      } while ((longlong)iVar3 * 0xc != lVar4);
    }
    FUN_144b0bd4e(param_1,local_38,uStack_30 & 0xffffffff);
  }
  else {
    FUN_140619b9c(lVar4 * 0x50 + *(longlong *)(param_2 + 0x140),&local_38);
    if ((int)uStack_30 == 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      FUN_149703326(param_1,param_2,*local_38);
      if (1 < (int)uStack_30) {
        lVar4 = 1;
        do {
          FUN_149703326(&local_78,param_2,local_38[lVar4]);
          if (local_48 == '\0' || *(char *)(param_1 + 6) == '\0') {
            if (local_48 != '\0') {
              param_1[6] = (double)CONCAT71(uStack_47,local_48);
              param_1[4] = (double)CONCAT44(fStack_54,local_58);
              param_1[5] = (double)CONCAT44(uStack_4c,fStack_50);
              param_1[2] = (double)CONCAT44(fStack_64,local_68);
              param_1[3] = (double)CONCAT44(uStack_5c,fStack_60);
              *(float *)param_1 = local_78;
              *(float *)((longlong)param_1 + 4) = fStack_74;
              *(float *)(param_1 + 1) = fStack_70;
              *(float *)((longlong)param_1 + 0xc) = fStack_6c;
            }
          }
          else {
            dVar1 = *param_1;
            fVar6 = SUB84(dVar1,0);
            fVar7 = (float)((ulonglong)dVar1 >> 0x20);
            if ((double)CONCAT44(fStack_74,local_78) <= dVar1) {
              fVar6 = local_78;
              fVar7 = fStack_74;
            }
            *param_1 = (double)CONCAT44(fVar7,fVar6);
            dVar1 = param_1[1];
            if ((double)CONCAT44(fStack_6c,fStack_70) <= param_1[1]) {
              dVar1 = (double)CONCAT44(fStack_6c,fStack_70);
            }
            param_1[1] = dVar1;
            dVar1 = param_1[2];
            fVar6 = SUB84(dVar1,0);
            fVar7 = (float)((ulonglong)dVar1 >> 0x20);
            if ((double)CONCAT44(fStack_64,local_68) <= dVar1) {
              fVar6 = local_68;
              fVar7 = fStack_64;
            }
            param_1[2] = (double)CONCAT44(fVar7,fVar6);
            dVar1 = param_1[3];
            fVar6 = SUB84(dVar1,0);
            uVar8 = (int)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= (double)CONCAT44(uStack_5c,fStack_60)) {
              fVar6 = fStack_60;
              uVar8 = uStack_5c;
            }
            param_1[3] = (double)CONCAT44(uVar8,fVar6);
            dVar1 = param_1[4];
            fVar6 = SUB84(dVar1,0);
            fVar7 = (float)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= (double)CONCAT44(fStack_54,local_58)) {
              fVar6 = local_58;
              fVar7 = fStack_54;
            }
            param_1[4] = (double)CONCAT44(fVar7,fVar6);
            dVar1 = param_1[5];
            fVar6 = SUB84(dVar1,0);
            uVar8 = (int)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= (double)CONCAT44(uStack_4c,fStack_50)) {
              fVar6 = fStack_50;
              uVar8 = uStack_4c;
            }
            param_1[5] = (double)CONCAT44(uVar8,fVar6);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)uStack_30);
      }
    }
  }
  if (local_38 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497035ce FUN_1497035ce body=129 status=ok
// SIG undefined FUN_1497035ce(void)

ulonglong FUN_1497035ce(longlong param_1,double *param_2)

{
  ulonglong uVar1;
  double *pdVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  if ((longlong)*(int *)(param_1 + 0x30) < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x48) + 0x10);
    fVar4 = 3.4028235e+38;
    uVar1 = 0xffffffff;
    uVar3 = 0;
    do {
      fVar5 = (float)((*pdVar2 - param_2[2]) * (*pdVar2 - param_2[2]) +
                     (pdVar2[-1] - param_2[1]) * (pdVar2[-1] - param_2[1]) +
                     (pdVar2[-2] - *param_2) * (pdVar2[-2] - *param_2));
      if (fVar5 < fVar4) {
        uVar1 = uVar3 & 0xffffffff;
        fVar4 = fVar5;
      }
      uVar3 = uVar3 + 1;
      pdVar2 = pdVar2 + 3;
    } while ((longlong)*(int *)(param_1 + 0x30) != uVar3);
  }
  return uVar1;
}



// FUNCTION 149703650 FUN_149703650 body=203 status=ok
// SIG undefined FUN_149703650(void)

undefined8 FUN_149703650(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = DAT_14c9974a8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = *param_1;
  FUN_1446ddc76(&local_38,"Parent",1);
  plVar3 = (longlong *)FUN_140619ac2(uVar5,local_38,uVar1);
  iVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
  if ((int)param_2 < iVar2) {
    iVar2 = *(int *)(plVar3[2] + (ulonglong)param_2 * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(param_1 + 2) != 0) {
          lVar4 = 0;
          do {
            if (*(int *)(param_1[1] + lVar4) == iVar2) {
              uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
              goto LAB_1497036f5;
            }
            lVar4 = lVar4 + 4;
          } while ((longlong)*(int *)(param_1 + 2) << 2 != lVar4);
        }
        iVar2 = *(int *)(plVar3[2] + (longlong)iVar2 * 4);
        uVar5 = 0;
      } while (iVar2 != -1);
      goto LAB_1497036f5;
    }
  }
  uVar5 = 0;
LAB_1497036f5:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14970371c FUN_14970371c body=581 status=ok
// SIG undefined FUN_14970371c(void)

void FUN_14970371c(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_88 [40];
  uint local_60;
  int local_5c;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = FUN_1401f66f6(*param_1,DAT_14c9974a8);
  iVar14 = (int)param_1[2];
  lVar18 = (longlong)iVar14;
  piVar8 = (int *)param_1[1];
  if (lVar18 != 0) {
    uVar10 = 0;
    bVar6 = iVar4 <= *piVar8 || *piVar8 == -1;
    local_58 = param_1;
    iVar15 = 0;
    do {
      lVar5 = (longlong)iVar15;
      lVar11 = lVar5;
      iVar16 = iVar15;
      iVar7 = iVar15 + 1;
      if (iVar15 + 1 < iVar14) {
        iVar7 = iVar14;
      }
      do {
        lVar11 = lVar11 + 1;
        iVar17 = iVar7;
        if (lVar18 <= lVar11) break;
        iVar17 = iVar16 + 1;
        iVar16 = iVar17;
      } while (bVar6 == (iVar4 <= piVar8[lVar11] || piVar8[lVar11] == -1));
      iVar7 = (int)uVar10;
      if (bVar6 == false) {
        if (iVar7 != iVar15) {
          memmove(piVar8 + iVar7,piVar8 + lVar5,(longlong)(iVar17 - iVar15) << 2);
        }
        uVar10 = (ulonglong)(uint)(iVar7 + (iVar17 - iVar15));
      }
      plVar1 = local_58;
      bVar6 = (bool)(bVar6 ^ 1);
      iVar15 = iVar17;
    } while (lVar11 < lVar18);
    uVar9 = (uint)uVar10;
    *(uint *)(local_58 + 2) = uVar9;
    piVar8 = (int *)local_58[1];
    if (uVar9 != 0) {
      bVar3 = 1;
      local_60 = uVar9;
      if ((-1 < *piVar8) && (*piVar8 < *(int *)(*local_58 + 0x128))) {
        bVar3 = FUN_149703650(local_58);
        uVar10 = (ulonglong)local_60;
      }
      iVar4 = (int)uVar10;
      uVar12 = 0;
      iVar14 = 0;
LAB_149703852:
      do {
        local_5c = iVar14;
        iVar15 = (int)uVar12;
        uVar12 = (ulonglong)(iVar15 + 1U);
        if ((int)(iVar15 + 1U) < (int)uVar10) {
          bVar6 = true;
          uVar13 = (longlong)iVar15 + 1;
          do {
            uVar12 = uVar13;
            if ((piVar8[uVar12] < 0) || (*(int *)(*plVar1 + 0x128) <= piVar8[uVar12])) {
              if ((bVar3 & 1) == 0) goto LAB_1497038c4;
            }
            else {
              bVar2 = FUN_149703650(plVar1);
              uVar10 = (ulonglong)local_60;
              if (((bVar2 ^ bVar3) & 1) != 0) break;
            }
            uVar13 = uVar12 + 1;
            bVar6 = (longlong)uVar13 < (longlong)iVar4;
            uVar12 = uVar10;
          } while (uVar13 != (longlong)iVar4);
          if ((bVar3 & 1) != 0) {
            bVar3 = 0;
            iVar14 = local_5c;
            if (!bVar6) break;
            goto LAB_149703852;
          }
        }
        else {
          iVar14 = local_5c;
          if ((bVar3 & 1) != 0) break;
          bVar6 = false;
        }
LAB_1497038c4:
        iVar14 = local_5c;
        iVar7 = (int)uVar12 - iVar15;
        if (local_5c != iVar15) {
          memmove(piVar8 + local_5c,piVar8 + iVar15,(longlong)iVar7 << 2);
          uVar10 = (ulonglong)local_60;
        }
        iVar14 = iVar14 + iVar7;
        bVar3 = 1;
      } while (bVar6);
      *(int *)(plVar1 + 2) = iVar14;
      piVar8 = (int *)plVar1[1];
      goto LAB_149703907;
    }
  }
  iVar14 = 0;
LAB_149703907:
  FUN_144958a06(piVar8,iVar14);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149703962 FUN_149703962 body=331 status=ok
// SIG undefined FUN_149703962(void)

void FUN_149703962(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [44];
  int local_5c;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *param_1;
  FUN_14970371c();
  local_58 = (void *)0x0;
  uStack_50 = 0;
  lVar3 = param_1[2];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = param_1[1];
    lVar8 = 0;
    cVar4 = DAT_14c75f3b2;
    do {
      lVar5 = (longlong)*(int *)(lVar2 + lVar8);
      iVar1 = *(int *)(*(longlong *)(lVar7 + 0x1b0) + lVar5 * 4);
      if (iVar1 == 0) {
        piVar6 = (int *)(*(longlong *)(lVar7 + 0x120) +
                        (longlong)*(int *)(*(longlong *)(lVar7 + 0x120) + lVar5 * 4) * 4);
LAB_149703a36:
        local_5c = *piVar6;
        if (local_5c != cVar4) {
          FUN_1449e3bb0(&local_58,&local_5c);
          cVar4 = DAT_14c75f3b2;
        }
      }
      else {
        local_5c = (int)cVar4;
        if (iVar1 == 1) {
          piVar6 = (int *)(lVar5 * 4 + *(longlong *)(lVar7 + 0x120));
          goto LAB_149703a36;
        }
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar8);
    lVar7 = (longlong)(int)(uint)uStack_50;
    if (lVar7 != 0) {
      iVar1 = (int)param_1[2];
      *(uint *)(param_1 + 2) = iVar1 + (uint)uStack_50;
      if ((uint)(*(int *)((longlong)param_1 + 0x14) - iVar1) < (uint)uStack_50) {
        FUN_1446f48e2(param_1 + 1,iVar1);
      }
      memcpy((void *)((longlong)iVar1 * 4 + param_1[1]),local_58,lVar7 << 2);
    }
  }
  FUN_14970371c(param_1);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149703aae FUN_149703aae body=501 status=ok
// SIG undefined FUN_149703aae(void)

void FUN_149703aae(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined1 param_15,undefined4 param_16)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a0 = (void *)0x0;
  local_98 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_98;
  pvVar1 = (void *)*param_2;
  local_a8 = param_1;
  if (lVar3 == 0) {
    local_94 = 0;
  }
  else {
    FUN_144a06ca8(&local_a0,local_98,0);
    memcpy(local_a0,pvVar1,lVar3 << 2);
  }
  FUN_149703962(&local_a8);
  pvVar1 = local_a0;
  lVar3 = (longlong)local_98;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      local_b0 = param_16;
      local_b8 = param_15;
      local_c0 = param_14;
      local_c8 = param_13;
      local_d0 = param_12;
      local_d8 = param_11;
      local_e0 = param_10;
      local_e8 = param_9;
      local_f0 = param_8;
      local_f8 = param_7;
      local_100 = param_6;
      local_108 = param_5;
      FUN_149703ca4(param_1,*(undefined4 *)((longlong)pvVar1 + lVar2),param_3,param_4);
      lVar2 = lVar2 + 4;
    } while (lVar3 * 4 != lVar2);
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8(local_a0);
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149703ca4 FUN_149703ca4 body=1789 status=ok
// SIG undefined FUN_149703ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149703ca4(longlong param_1,int param_2,byte param_3,uint param_4,float param_5,
                  float param_6,char param_7,byte param_8,byte param_9,undefined4 param_10,
                  undefined4 param_11,undefined4 param_12,float param_13,undefined4 param_14,
                  char param_15,undefined4 param_16)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  byte local_1c5;
  int local_1c4;
  double local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  int local_194;
  longlong local_190;
  int local_188;
  int local_184;
  double local_180;
  uint local_178;
  double local_170;
  uint local_168;
  undefined4 uStack_164;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  int local_140;
  int *local_138;
  int local_130;
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1a0 = (longlong)param_2 * 0x50;
  iVar14 = *(int *)(*(longlong *)(param_1 + 0x140) + 8 + local_1a0) -
           *(int *)(*(longlong *)(param_1 + 0x140) + 0x34 + local_1a0);
  dVar13 = 0.0;
  if (3 < param_3) {
    uVar10 = 1;
    goto LAB_149703e55;
  }
  uVar19 = (uint)param_3;
  switch(param_3) {
  case 0:
    uVar10 = param_4;
    goto LAB_149703e58;
  case 1:
    param_5 = (float)iVar14 * param_5;
    fVar4 = 2.0;
    if (2.0 <= param_5) {
      fVar4 = param_5;
    }
    break;
  case 2:
    FUN_146eb0ece(param_1,&local_170);
    fVar21 = powf(param_6,3.0);
    fVar21 = (float)(((local_170 + local_158) - (local_170 - local_158)) *
                     (((double)CONCAT44(uStack_164,local_168) + local_150) -
                     ((double)CONCAT44(uStack_164,local_168) - local_150)) *
                    ((local_160 + local_148) - (local_160 - local_148))) / fVar21;
    fVar4 = 1.0;
    if (1.0 <= fVar21) {
      fVar4 = fVar21;
    }
    break;
  case 3:
    local_1d0 = param_12;
    local_1d8 = param_11;
    FUN_1497059d2(&local_170,param_1,param_2,param_10);
    dVar13 = local_170;
    uVar10 = local_168;
    uVar19 = local_168;
    goto LAB_149703e58;
  }
  uVar10 = (uint)fVar4;
LAB_149703e55:
  dVar13 = 0.0;
  uVar19 = 0;
LAB_149703e58:
  if (param_15 == '\0') {
    local_1c4 = param_2;
    local_1c0 = dVar13;
    FUN_14970226a(&local_170,param_1,param_2,param_7);
    if ((1 < iVar14) && (1 < (int)uVar10)) {
      if (0.0 < param_13) {
        FUN_146ec1438(param_1);
      }
      local_1b8 = param_1 + 0x130;
      uVar16 = uVar10;
      do {
        local_180 = local_1c0;
        local_178 = uVar19;
        FUN_1497023cc(&local_170,uVar16,param_14);
        if (local_140 == 0) goto LAB_149704328;
        if (param_7 != '\0' || param_8 != 0) {
          FUN_146eca9da(&local_e8,param_1);
          FUN_146ecaa68(&local_e8,0);
        }
        if (param_7 != '\0') {
          FUN_149702d22(&local_170,param_1);
        }
        if (0.0 < param_13) {
          FUN_14970281e(&local_170,param_1,param_13);
        }
        lVar11 = (longlong)local_130;
        iVar18 = 0;
        piVar1 = local_138 + lVar11;
        iVar14 = 0;
        if (param_8 == 0) {
LAB_149703fef:
          bVar5 = true;
          if (local_130 != 0) {
            lVar12 = 0;
            iVar18 = 0;
            do {
              iVar18 = iVar18 + (uint)(*(int *)((longlong)local_138 + lVar12) == 0);
              lVar12 = lVar12 + 4;
            } while (lVar11 * 4 - lVar12 != 0);
            bVar5 = false;
          }
        }
        else {
          if (local_130 != 0) {
            lVar12 = 0;
            iVar14 = 0;
            do {
              iVar14 = iVar14 + (uint)(*(int *)((longlong)local_138 + lVar12) == 1);
              lVar12 = lVar12 + 4;
            } while (lVar11 * 4 - lVar12 != 0);
            goto LAB_149703fef;
          }
          iVar14 = 0;
          bVar5 = true;
          iVar18 = 0;
        }
      } while (((param_9 & uVar19 == 0) != 0) &&
              (iVar14 = local_130 - (iVar14 + iVar18),
              bVar17 = iVar14 != 0x7fffffff && (1 < (int)uVar16 && (int)uVar10 < iVar14),
              uVar16 = uVar16 - bVar17, bVar17));
      iVar14 = 0;
      if (!bVar5) {
        iVar14 = 0;
        do {
          iVar14 = iVar14 + (uint)(*local_138 == 0);
          local_138 = local_138 + 1;
        } while (local_138 != piVar1);
      }
      if ((local_130 - iVar14 == 1 & param_8) == 0) {
        local_1c5 = 0 < local_130 - iVar14;
        uVar10 = FUN_1409bcbd8(param_1,local_140,DAT_14c9974a8);
        if (0 < (longlong)local_140) {
          local_1a8 = (longlong)(int)uVar10 * 4;
          local_1b0 = (ulonglong)uVar10;
          uVar20 = 0;
          do {
            FUN_149702fba(&local_170,&local_190,uVar20 & 0xffffffff);
            if ((param_8 != 0) && (local_188 == 1)) {
              local_188 = 0;
              local_1c5 = 1;
              if (local_184 < 0) {
                FUN_14481578e(&local_190,0);
              }
            }
            local_194 = (int)local_1b0 + (int)uVar20;
            *(int *)(*(longlong *)(param_1 + 0x120) + local_1a8 + uVar20 * 4) = local_1c4;
            FUN_1447cbafe(*(longlong *)(param_1 + 0x140) + local_1a0,&local_e8,&local_194,0);
            FUN_1400b22c2(&local_e8,"ClusterBone");
            plVar15 = (longlong *)((longlong)local_194 * 0x10 + *(longlong *)(param_1 + 0xe0));
            if (plVar15 != &local_e8) {
              if (*plVar15 != 0) {
                FUN_1400020a8();
              }
              *plVar15 = local_e8;
              local_e8 = 0;
              *(undefined4 *)(plVar15 + 1) = (undefined4)uStack_e0;
              *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_e0._4_4_;
              uStack_e0 = 0;
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            local_c8 = 0;
            local_c0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_bc = 0xffffffff00000080;
            local_b4 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_f8 = local_190;
            local_f0 = local_188;
            FUN_146bc855c(&local_e8,&local_f8);
            FUN_145be27ca((longlong)local_194 * 0x50 + *(longlong *)(param_1 + 0x140),&local_e8);
            local_a0 = 0;
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            FUN_1447a082e(&local_e8);
            *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + (longlong)local_194 * 4) = 2;
            uVar9 = uRam000000014c846088;
            lVar11 = *(longlong *)(param_1 + 0xc0);
            lVar12 = (longlong)local_194 * 0x30;
            puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar12);
            *puVar3 = _DAT_14c846080;
            puVar3[1] = uVar9;
            uVar9 = uRam000000014c846078;
            puVar3 = (undefined8 *)(lVar11 + 0x10 + lVar12);
            *puVar3 = _DAT_14c846070;
            puVar3[1] = uVar9;
            uVar8 = uRam000000014c84606c;
            uVar7 = uRam000000014c846068;
            uVar6 = uRam000000014c846064;
            puVar2 = (undefined4 *)(lVar11 + lVar12);
            *puVar2 = _DAT_14c846060;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            FUN_146eb9b25(param_1,(longlong)local_194,&local_190);
            if (local_190 != 0) {
              FUN_1400020a8();
            }
            uVar20 = uVar20 + 1;
          } while ((longlong)local_140 != uVar20);
        }
        if ((local_1c5 & 1) != 0) {
          FUN_146ebda4e(param_1);
        }
        iVar14 = local_1c4;
        FUN_146ebb8e4(param_1,local_1c4);
        FUN_146ebc230(iVar14,local_1b8,param_1 + 0xd0,0);
        FUN_146ebba3e(param_1);
      }
    }
LAB_149704328:
    FUN_149705c58(&local_170);
    dVar13 = local_1c0;
  }
  else {
    local_1d0 = param_16;
    local_1d8 = CONCAT31(local_1d8._1_3_,param_8);
    FUN_1497043a2(param_1,param_2,param_4);
  }
  if (dVar13 != 0.0) {
    FUN_1400020a8(dVar13);
  }
  if ((local_90 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497043a2 FUN_1497043a2 body=5678 status=ok
// SIG undefined FUN_1497043a2(void)

/* WARNING: Removing unreachable block (ram,0x000149705071) */
/* WARNING: Removing unreachable block (ram,0x00014970507c) */
/* WARNING: Removing unreachable block (ram,0x000149705080) */
/* WARNING: Removing unreachable block (ram,0x000149705181) */
/* WARNING: Removing unreachable block (ram,0x00014970518c) */
/* WARNING: Removing unreachable block (ram,0x000149705190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497043a2(longlong param_1,int param_2,undefined4 param_3,undefined1 param_4,char param_5,
                  float param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  int iVar17;
  undefined **ppuVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined ***pppuVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  bool bVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_5a8 [32];
  undefined1 **local_588;
  longlong *local_580;
  ulonglong local_578;
  int local_56c;
  ulonglong local_568;
  ulonglong local_560;
  longlong local_558;
  int local_54c;
  longlong local_548;
  int local_53c;
  longlong **local_538;
  undefined8 uStack_530;
  undefined1 *local_528;
  longlong ***local_520;
  undefined1 *local_518;
  longlong *local_510;
  undefined1 *local_508;
  longlong **local_500;
  longlong local_4f8;
  undefined4 local_4f0;
  longlong *local_4e8;
  undefined8 uStack_4e0;
  longlong *local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c4;
  longlong local_4b8;
  undefined8 uStack_4b0;
  longlong local_4a8;
  int local_4a0;
  longlong local_498;
  undefined8 uStack_490;
  longlong local_488;
  undefined8 uStack_480;
  longlong local_478;
  undefined8 uStack_470;
  longlong *local_468;
  undefined8 uStack_460;
  longlong local_458;
  undefined8 uStack_450;
  longlong local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined1 local_430 [168];
  longlong local_388;
  undefined8 uStack_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  uint local_360;
  undefined8 local_358;
  undefined1 local_350 [8];
  undefined8 local_348;
  longlong *plStack_340;
  undefined8 local_338;
  uint local_330;
  undefined4 local_32c;
  longlong **local_328;
  undefined8 uStack_320;
  undefined8 *local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  longlong *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  ulonglong local_2c0;
  undefined8 uStack_2b8;
  undefined1 *local_2a8;
  undefined8 uStack_2a0;
  undefined ***local_298;
  undefined8 uStack_290;
  undefined **local_288;
  longlong *plStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 *local_268;
  longlong *plStack_260;
  undefined ***local_258;
  longlong *plStack_250;
  undefined **local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined **local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  int iStack_1f4;
  undefined8 uStack_1f0;
  undefined8 *local_1e8;
  int local_1e0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  local_560 = CONCAT71(local_560._1_7_,param_4);
  local_568 = CONCAT44(local_568._4_4_,param_3);
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  FUN_146ec1438();
  FUN_146eca9da(local_350,param_1);
  FUN_146ecaa68(local_350,0);
  uVar16 = DAT_14c9974a8;
  FUN_1446ddc76(&local_358,"Volume",1);
  FUN_14061a004(param_1,local_358,uVar16);
  local_1d0 = 0x3f50624dd2f1a9fc;
  local_1c8 = 0x3f50624dd2f1a9fc;
  local_1c0 = 0x3e7ad7f29abcaf48;
  local_1b8 = 0x3fefae147ae147ae;
  local_1b0 = 0x403e000000000000;
  local_1a8 = 0x4065400000000000;
  local_1a0 = 0x3fb999999999999a;
  local_198 = 0x32;
  local_194 = 0x101;
  local_190 = 0;
  local_188 = 0xffffffff;
  local_180 = 0;
  uStack_178 = 0;
  local_138 = DAT_14c846510;
  uStack_130 = DAT_14c846518;
  local_128 = DAT_14c846520;
  local_150 = DAT_14c8464e0;
  uStack_148 = DAT_14c8464e8;
  local_140 = DAT_14c8464f0;
  local_160 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_158 = 0x3ff0000000000000;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_548 = (longlong)param_2 * 0x50;
  lVar35 = *(longlong *)(param_1 + 0x140) + local_548;
  local_56c = param_2;
  FUN_140619b9c(lVar35,&local_368);
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  FUN_146bad868(&local_388,local_360);
  FUN_14075a44e(local_430,param_1);
  FUN_141051328(local_430);
  uVar16 = DAT_14c9974a8;
  FUN_1446ddc76(&local_438,"Level",1);
  lVar22 = FUN_140619ac2(param_1,local_438,uVar16);
  iVar20 = *(int *)(*(longlong *)(lVar22 + 0x10) + (longlong)param_2 * 4);
  local_448 = 0;
  uStack_440 = 0;
  local_458 = 0;
  uStack_450 = 0;
  FUN_144a127d2(&local_448,local_360,1);
  FUN_144a127d2(&local_458,local_360,1);
  local_468 = (longlong *)0x0;
  uStack_460 = 0;
  FUN_146be4e92(&local_468,local_360,1);
  local_478 = 0;
  uStack_470 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_498 = 0;
  uStack_490 = 0;
  FUN_146eb7819(param_1 + 0xb0,param_1 + 0x110);
  uVar27 = (ulonglong)local_360;
  if (0 < (int)local_360) {
    uVar36 = 0;
    local_558 = lVar35;
    local_54c = iVar20;
    do {
      *(int *)(local_458 + uVar36 * 4) = (int)uStack_470;
      uVar7 = *(undefined4 *)(local_368 + uVar36 * 4);
      uVar19 = uStack_480._4_4_;
      iVar20 = 0;
      if ((longlong)uStack_480 < 0) {
        uStack_480 = (ulonglong)uStack_480._4_4_ << 0x20;
        FUN_14481578e(&local_488,0);
        uVar19 = uStack_480._4_4_;
        iVar20 = (int)uStack_480;
      }
      uStack_480 = CONCAT44(uStack_480._4_4_,iVar20 + 1U);
      if (uVar19 < iVar20 + 1U) {
        FUN_1446f48e2(&local_488,iVar20);
      }
      *(undefined4 *)(local_488 + (longlong)iVar20 * 4) = uVar7;
      uVar27 = uVar36;
      uVar34 = local_578;
      lVar35 = local_558;
      iVar20 = local_54c;
      while (local_578 = uVar27, iVar17 = (int)uStack_470, local_558 = lVar35, local_54c = iVar20,
            (int)uStack_480 != 0) {
        lVar35 = (longlong)*(int *)(local_488 + -4 + (longlong)(int)uStack_480 * 4);
        uStack_480._4_4_ = (uint)(uStack_480 >> 0x20);
        uStack_480 = CONCAT44(uStack_480._4_4_,(int)uStack_480 + -1);
        cVar6 = *(char *)(*(longlong *)(param_1 + 0x1b0) + lVar35 * 4);
        if (cVar6 == '\x01') {
          lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 400) + lVar35 * 4);
          if (lVar22 != -1) {
            lVar30 = (longlong)*(int *)(*(longlong *)(param_1 + 0x450) + lVar22 * 4);
            if (0 < lVar30) {
              lVar29 = (longlong)*(int *)(*(longlong *)(param_1 + 0x430) + lVar22 * 4);
              lVar30 = lVar30 + lVar29;
              lVar22 = lVar29 * 0xc + 8;
              do {
                uVar27 = uStack_470;
                lVar31 = *(longlong *)(param_1 + 0x230);
                lVar23 = lVar35 * 0x60;
                pdVar3 = (double *)(local_498 + 0x40 + lVar23);
                dVar9 = (double)*(float *)(lVar31 + -8 + lVar22) * *pdVar3;
                dVar10 = (double)*(float *)(lVar31 + -4 + lVar22) * pdVar3[1];
                dVar38 = (double)*(float *)(lVar31 + lVar22) *
                         *(double *)(local_498 + 0x50 + lVar23);
                dVar13 = *(double *)(local_498 + lVar23);
                dVar14 = ((double *)(local_498 + lVar23))[1];
                dVar15 = *(double *)(local_498 + 0x10 + lVar23);
                pdVar3 = (double *)(local_498 + 0x18 + lVar23);
                dVar39 = *pdVar3;
                dVar40 = dVar10 * dVar13 - dVar9 * dVar14;
                dVar41 = dVar38 * dVar14 - dVar10 * dVar15;
                dVar42 = dVar9 * dVar15 - dVar13 * dVar38;
                dVar41 = dVar41 + dVar41;
                dVar42 = dVar42 + dVar42;
                dVar40 = dVar40 + dVar40;
                pdVar4 = (double *)(local_498 + 0x20 + lVar23);
                dVar5 = *pdVar4;
                dVar12 = (dVar15 * dVar41 - dVar13 * dVar40) + *pdVar3 * dVar42 + dVar10 + pdVar4[1]
                ;
                dVar10 = *(double *)(local_498 + 0x30 + lVar23);
                lVar31 = (longlong)(int)uStack_470;
                uVar19 = (int)uStack_470 + 1;
                uStack_470 = CONCAT44(uStack_470._4_4_,uVar19);
                if (uStack_470._4_4_ < uVar19) {
                  FUN_1403e3958(&local_478,uVar27 & 0xffffffff);
                }
                auVar11._8_4_ = SUB84(dVar12,0);
                auVar11._0_8_ =
                     (dVar40 * dVar14 - dVar42 * dVar15) + dVar39 * dVar41 + dVar9 + dVar5;
                auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                *(undefined1 (*) [16])(local_478 + lVar31 * 0x18) = auVar11;
                *(double *)(local_478 + 0x10 + lVar31 * 0x18) =
                     dVar40 * dVar39 + dVar38 + (dVar42 * dVar13 - dVar41 * dVar14) + dVar10;
                lVar29 = lVar29 + 1;
                lVar22 = lVar22 + 0xc;
              } while (lVar29 < lVar30);
              uVar36 = local_578;
            }
            local_4a0 = (int)uStack_470 - iVar17;
            local_4a8 = (longlong)iVar17 * 0x18 + local_478;
            dVar39 = (double)FUN_146badda6(&local_4a8);
            local_468[uVar36] = (longlong)(dVar39 + (double)local_468[uVar36]);
          }
        }
        else if (cVar6 == '\x02') {
          lVar30 = *(longlong *)(param_1 + 0x140);
          lVar22 = lVar30 + lVar35 * 0x50;
          lVar29 = lVar22 + 0x10;
          local_228 = (longlong *)0x100000000;
          local_218 = 0xffffffff;
          uStack_210 = uStack_210 & 0xffffffff00000000;
          uStack_220 = lVar29;
          if (*(int *)(lVar22 + 0x28) != 0) {
            FUN_1449c0562(&local_228);
          }
          plVar33 = (longlong *)(lVar30 + lVar35 * 0x50);
          local_2d0 = local_218;
          local_2c8 = (undefined4)uStack_210;
          local_2c4 = uStack_210._4_4_;
          local_2e0 = local_228;
          local_2d8 = uStack_220;
          iVar20 = (int)plVar33[5];
          local_228 = (longlong *)CONCAT44(1 << ((byte)iVar20 & 0x1f),iVar20 >> 5);
          local_218 = CONCAT44(iVar20,-1 << ((byte)iVar20 & 0x1f));
          uStack_210 = CONCAT44(uStack_210._4_4_,iVar20) & 0xffffffffffffffe0;
          local_2e8 = plVar33;
          uStack_220 = lVar29;
          if ((int)plVar33[5] != iVar20) {
            FUN_1449c0562(&local_228);
            iVar20 = local_218._4_4_;
          }
          lVar35 = uStack_220;
          if ((local_2e8 != plVar33 || local_2d8 != uStack_220) || local_2d0._4_4_ != iVar20) {
            do {
              uVar27 = uStack_480;
              uVar7 = *(undefined4 *)(*local_2e8 + (longlong)local_2d0._4_4_ * 0xc);
              lVar22 = (longlong)(int)uStack_480;
              uVar19 = (int)uStack_480 + 1;
              uStack_480 = CONCAT44(uStack_480._4_4_,uVar19);
              if (uStack_480._4_4_ < uVar19) {
                FUN_1446f48e2(&local_488,uVar27 & 0xffffffff);
              }
              *(undefined4 *)(local_488 + lVar22 * 4) = uVar7;
              local_2d0 = CONCAT44(local_2d0._4_4_,(uint)local_2d0 & ~local_2e0._4_4_);
              FUN_1449c0562(&local_2e0);
            } while (local_2e8 != plVar33 || (local_2d8 != lVar35 || local_2d0._4_4_ != iVar20));
          }
        }
        uVar27 = local_578;
        uVar34 = local_578;
        lVar35 = local_558;
        iVar20 = local_54c;
      }
      *(int *)(local_448 + uVar36 * 4) = (int)uStack_470 - *(int *)(local_458 + uVar36 * 4);
      uVar36 = uVar36 + 1;
      uVar27 = (ulonglong)(int)local_360;
      local_578 = uVar34;
    } while ((longlong)uVar36 < (longlong)uVar27);
  }
  local_4f0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  if ((char)local_560 != '\0') {
    FUN_1497017b7(&local_2e8,lVar35,param_1,iVar20 + 1);
    local_208 = (undefined **)0x0;
    uStack_200 = 0;
    local_228 = (longlong *)0x0;
    uStack_220 = 0;
    uStack_1fc = 0x80;
    uStack_1f8 = 0xffffffff;
    iStack_1f4 = 0;
    local_1e8 = (undefined8 *)0x0;
    local_1e0 = 0;
    local_348 = (undefined8 *)((ulonglong)local_348 & 0xffffffff00000000);
    local_578 = 0;
    if (0 < (int)local_360) {
      iVar20 = 0;
      do {
        local_328 = (longlong **)((longlong)iVar20 * 4 + local_368);
        uStack_320 = &local_348;
        FUN_140263e2a(&local_228,&local_4e8,&local_328,0);
        iVar20 = (int)local_348 + 1;
        local_348 = (undefined8 *)CONCAT44(local_348._4_4_,iVar20);
      } while (iVar20 < (int)local_360);
    }
    uStack_4e0 = &local_2d8;
    local_4e8 = (longlong *)&DAT_100000000;
    local_4d8 = (longlong *)0xffffffff;
    local_4d0 = (ulonglong)local_4d0._4_4_ << 0x20;
    if ((int)local_2c0 != 0) {
      FUN_1449c0562(&local_4e8);
      local_578 = local_2c0 & 0xffffffff;
    }
    uStack_310 = local_4d8;
    plVar33 = uStack_310;
    local_308 = local_4d0;
    uStack_320 = local_4e8;
    local_318 = uStack_4e0;
    local_328 = &local_2e8;
    uStack_310._4_4_ = (int)((ulonglong)local_4d8 >> 0x20);
    if ((uStack_310._4_4_ != (int)local_578) || (uStack_4e0 != &local_2d8)) {
      iVar20 = uStack_310._4_4_;
      uStack_310 = plVar33;
      do {
        plVar33 = *local_328;
        lVar35 = (longlong)iVar20;
        if ((int)uStack_220 != iStack_1f4) {
          puVar26 = local_1e8;
          if (local_1e8 == (undefined8 *)0x0) {
            puVar26 = &uStack_1f0;
          }
          iVar20 = *(int *)((longlong)puVar26 +
                           (ulonglong)(local_1e0 - 1U & *(uint *)(plVar33 + lVar35 * 0xc)) * 4);
          while (iVar20 != -1) {
            lVar22 = (longlong)local_228 + (longlong)iVar20 * 0x10;
            if (*(uint *)((longlong)local_228 + (longlong)iVar20 * 0x10) ==
                *(uint *)(plVar33 + lVar35 * 0xc)) goto LAB_1497056cb;
            iVar20 = *(int *)(lVar22 + 8);
          }
        }
        lVar22 = 0;
LAB_1497056cb:
        uVar7 = *(undefined4 *)(lVar22 + 4);
        plVar1 = plVar33 + lVar35 * 0xc + 3;
        local_348 = (undefined8 *)&DAT_100000000;
        local_338 = 0xffffffff;
        local_330 = 0;
        plStack_340 = plVar1;
        if ((int)plVar33[lVar35 * 0xc + 6] != 0) {
          FUN_1449c0562(&local_348);
        }
        plVar2 = plVar33 + lVar35 * 0xc + 1;
        local_4d0 = local_338;
        local_4c8 = local_330;
        local_4c4 = local_32c;
        uStack_4e0 = local_348;
        local_4d8 = plStack_340;
        uVar19 = *(uint *)(plVar33 + lVar35 * 0xc + 6);
        local_348 = (undefined8 *)CONCAT44(1 << ((byte)uVar19 & 0x1f),(int)uVar19 >> 5);
        local_338 = CONCAT44(uVar19,-1 << ((byte)uVar19 & 0x1f));
        local_330 = uVar19 & 0xffffffe0;
        local_4e8 = plVar2;
        plStack_340 = plVar1;
        if (*(uint *)(plVar33 + lVar35 * 0xc + 6) != uVar19) {
          FUN_1449c0562(&local_348);
          uVar19 = local_338._4_4_;
        }
        plVar33 = plStack_340;
        if ((local_4e8 != plVar2 || local_4d8 != plStack_340) || local_4d0._4_4_ != uVar19) {
          do {
            uVar27 = uStack_4b0;
            if ((int)uStack_220 != iStack_1f4) {
              uVar21 = *(uint *)(*local_4e8 + (longlong)(int)local_4d0._4_4_ * 0xc);
              puVar26 = local_1e8;
              if (local_1e8 == (undefined8 *)0x0) {
                puVar26 = &uStack_1f0;
              }
              iVar20 = *(int *)((longlong)puVar26 + (ulonglong)(local_1e0 - 1U & uVar21) * 4);
              while (iVar20 != -1) {
                lVar35 = (longlong)local_228 + (longlong)iVar20 * 0x10;
                if (*(uint *)((longlong)local_228 + (longlong)iVar20 * 0x10) == uVar21)
                goto LAB_149705819;
                iVar20 = *(int *)(lVar35 + 8);
              }
            }
            lVar35 = 0;
LAB_149705819:
            uVar8 = *(undefined4 *)(lVar35 + 4);
            lVar35 = (longlong)(int)uStack_4b0;
            uVar21 = (int)uStack_4b0 + 1;
            uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar21);
            if (uStack_4b0._4_4_ < uVar21) {
              FUN_1406b704c(&local_4b8,uVar27 & 0xffffffff);
            }
            *(undefined4 *)(local_4b8 + lVar35 * 8) = uVar7;
            *(undefined4 *)(local_4b8 + 4 + lVar35 * 8) = uVar8;
            local_4d0 = CONCAT44(local_4d0._4_4_,(uint)local_4d0 & ~uStack_4e0._4_4_);
            FUN_1449c0562(&uStack_4e0);
          } while (local_4e8 != plVar2 || (local_4d8 != plVar33 || local_4d0._4_4_ != uVar19));
        }
        uStack_310 = (longlong *)CONCAT44(uStack_310._4_4_,(uint)uStack_310 & ~uStack_320._4_4_);
        FUN_1449c0562(&uStack_320);
        iVar20 = uStack_310._4_4_;
        plVar33 = uStack_310;
      } while (local_328 != &local_2e8 ||
               (local_318 != &local_2d8 || uStack_310._4_4_ != (int)local_578));
    }
    uStack_310 = plVar33;
    local_1e0 = 0;
    if (local_1e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_228);
    uStack_2a0 = (ulonglong)uStack_2a0._4_4_ << 0x20;
    if (local_2a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14062beec(&local_2e8);
    local_4f0 = (undefined4)uStack_4b0;
    uVar27 = (ulonglong)local_360;
  }
  local_580 = &local_4f8;
  local_2e8 = &local_478;
  local_500 = &local_2e8;
  local_2e0 = &local_458;
  local_588 = &local_508;
  local_508 = &LAB_144605b7a;
  local_228 = &local_448;
  local_518 = &LAB_144605b6c;
  local_520 = &local_328;
  local_328 = &local_468;
  local_528 = &LAB_144605b5c;
  local_510 = &local_228;
  local_4f8 = local_4b8;
  FUN_146ba4c5e(&local_1d0,uVar27);
  if ((char)local_560 == '\0') {
    FUN_146ba52d2(&local_1d0,0,0,0);
  }
  plVar33 = plStack_260;
  uVar16 = uStack_270;
  ppuVar18 = local_288;
  lVar35 = uStack_2a0;
  uVar19 = (uint)local_2d8;
  local_2d8 = CONCAT44(0xffffffff,uVar19 & 0xffffff00);
  local_2d0 = 0;
  local_2c8 = CONCAT22(local_2c8._2_2_,1);
  local_2a8 = (undefined1 *)0x0;
  local_298 = (undefined ***)0x0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2e8 = (longlong *)CONCAT44(local_2e8._4_4_,(undefined4)local_568);
  dVar39 = 0.0;
  if ((longlong)(int)uStack_460 != 0) {
    lVar22 = 0;
    dVar39 = 0.0;
    do {
      dVar39 = dVar39 + *(double *)((longlong)local_468 + lVar22);
      lVar22 = lVar22 + 8;
    } while ((longlong)(int)uStack_460 * 8 != lVar22);
  }
  local_2e0 = (longlong *)(double)param_6;
  dVar10 = dVar39 / (double)(local_568 & 0xffffffff);
  dVar39 = (dVar39 * 0.2) / (double)(local_568 & 0xffffffff);
  uStack_1f8 = SUB84(local_238,0);
  iStack_1f4 = (int)((ulonglong)local_238 >> 0x20);
  uStack_1f0 = uStack_230;
  local_208 = local_248;
  uStack_200 = SUB84(dStack_240,0);
  uStack_1fc = (undefined4)((ulonglong)dStack_240 >> 0x20);
  local_218 = 0;
  uStack_210 = (ulonglong)plStack_250;
  local_228 = (longlong *)0x0;
  uStack_220 = (longlong)plStack_260;
  local_238 = dVar39;
  local_248 = &PTR_LAB_14be16490;
  dStack_240 = dVar10;
  local_258 = (undefined ***)0x0;
  plStack_250 = uStack_310;
  local_268 = &LAB_144605bac;
  plStack_260 = uStack_320;
  uStack_1f0._0_4_ = (undefined4)uStack_230;
  uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_230 >> 0x20);
  uStack_2f0 = (undefined4)uStack_1f0;
  uStack_2ec = uStack_1f0._4_4_;
  uStack_1f8 = (undefined4)local_278;
  iStack_1f4 = (int)((ulonglong)local_278 >> 0x20);
  uStack_1f0 = uStack_270;
  local_208 = local_288;
  uStack_200 = SUB84(plStack_280,0);
  uStack_1fc = (undefined4)((ulonglong)plStack_280 >> 0x20);
  local_218 = 0;
  uStack_210 = uStack_290;
  local_228 = (longlong *)0x0;
  uStack_220 = uStack_2a0;
  uStack_270 = uStack_230;
  local_288 = &PTR_LAB_14be164b0;
  plStack_280 = &local_388;
  local_298 = (undefined ***)0x0;
  local_2a8 = &LAB_144605c3e;
  uStack_2a0 = (longlong)plVar33;
  uStack_1f0._0_4_ = (undefined4)uVar16;
  uStack_1f0._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
  uStack_2f0 = (undefined4)uStack_1f0;
  uStack_2ec = uStack_1f0._4_4_;
  local_208 = ppuVar18;
  local_218 = 0;
  uStack_220 = lVar35;
  local_228 = (longlong *)0x0;
  local_248 = &PTR_LAB_14be16490;
  local_258 = (undefined ***)0x0;
  local_268 = &LAB_144605bac;
  local_288 = &PTR_LAB_14be164b0;
  local_298 = (undefined ***)0x0;
  local_2a8 = &LAB_144605c3e;
  uStack_2b8 = 0;
  local_2c0 = 0;
  local_2d0 = 0;
  local_318 = (undefined8 *)0x0;
  uStack_320 = (longlong *)lVar35;
  local_328 = (longlong **)0x0;
  lVar35 = param_1 + 0x130;
  FUN_146ba5abc(&local_1d0,&local_2e8);
  local_4e8 = (longlong *)0x0;
  uStack_4e0 = (undefined8 *)0x0;
  local_348 = (undefined8 *)0x0;
  plStack_340 = (longlong *)0x0;
  uVar19 = FUN_146b9cfc8(&local_388,&local_4e8,&local_348,1);
  uVar27 = (ulonglong)uVar19;
  local_538 = (longlong **)0x0;
  uStack_530 = 0;
  iVar20 = FUN_1409bcbd8(param_1,uVar19,DAT_14c9974a8);
  if (0 < (int)uVar19) {
    local_578 = (ulonglong)iVar20;
    uVar36 = 0;
    local_568 = 0;
    local_560 = uVar27;
    local_558 = lVar35;
    do {
      bVar37 = (longlong)uStack_530 < 0;
      uStack_530 = uStack_530 & 0xffffffff00000000;
      if (bVar37) {
        uVar27 = FUN_14481578e(&local_538,0);
      }
      if (0 < (int)local_360) {
        uVar19 = *(uint *)((longlong)local_4e8 + uVar36 * 4);
        uVar34 = 0;
        do {
          lVar35 = local_368;
          uVar27 = uStack_530;
          uVar24 = (ulonglong)*(uint *)(local_388 + uVar34 * 4);
          uVar21 = (uint)uVar34;
          if (uVar34 != uVar24) {
            puVar28 = (uint *)(local_388 + uVar34 * 4);
            uVar32 = uVar34;
            do {
              *puVar28 = *(uint *)(local_388 + (longlong)(int)uVar24 * 4);
              uVar21 = *(uint *)(local_388 + uVar32 * 4);
              uVar32 = (ulonglong)(int)uVar21;
              puVar28 = (uint *)(local_388 + uVar32 * 4);
              uVar24 = (ulonglong)*puVar28;
            } while (*puVar28 != uVar21);
          }
          if (uVar21 == uVar19) {
            lVar22 = (longlong)(int)uStack_530;
            uVar21 = (int)uStack_530 + 1;
            uStack_530 = CONCAT44(uStack_530._4_4_,uVar21);
            if (uStack_530._4_4_ < uVar21) {
              FUN_1446f48e2(&local_538,uVar27 & 0xffffffff);
            }
            *(undefined4 *)((longlong)local_538 + lVar22 * 4) = *(undefined4 *)(lVar35 + uVar34 * 4)
            ;
          }
          uVar34 = uVar34 + 1;
          uVar27 = (ulonglong)(int)local_360;
        } while ((longlong)uVar34 < (longlong)uVar27);
      }
      if ((param_5 != '\0') && ((int)uStack_530 == 1)) {
        bVar37 = (longlong)uStack_530 < 0;
        uStack_530 = uStack_530 & 0xffffffff00000000;
        local_568 = CONCAT71((int7)(uVar27 >> 8),1);
        if (bVar37) {
          FUN_14481578e(&local_538,0);
        }
      }
      local_53c = (int)(local_578 + uVar36);
      *(int *)(*(longlong *)(param_1 + 0x120) + (local_578 + uVar36) * 4) = local_56c;
      FUN_1447cbafe(*(longlong *)(param_1 + 0x140) + local_548,&local_228,&local_53c,0);
      FUN_1400b22c2(&local_228,"ClusterBone");
      plVar33 = (longlong *)((longlong)local_53c * 0x10 + *(longlong *)(param_1 + 0xe0));
      if (plVar33 != &local_228) {
        if (*plVar33 != 0) {
          FUN_1400020a8();
        }
        *plVar33 = (longlong)local_228;
        local_228 = (longlong *)0x0;
        *(int *)(plVar33 + 1) = (int)uStack_220;
        *(undefined4 *)((longlong)plVar33 + 0xc) = uStack_220._4_4_;
        uStack_220 = 0;
      }
      if (local_228 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_208 = (undefined **)0x0;
      uStack_200 = 0;
      local_228 = (longlong *)0x0;
      uStack_220 = 0;
      uStack_1fc = 0x80;
      uStack_1f8 = 0xffffffff;
      iStack_1f4 = 0;
      local_1e8 = (undefined8 *)0x0;
      local_1e0 = 0;
      local_328 = local_538;
      uStack_320 = (longlong *)CONCAT44(uStack_320._4_4_,(int)uStack_530);
      FUN_146bc855c(&local_228,&local_328);
      FUN_145be27ca((longlong)local_53c * 0x50 + *(longlong *)(param_1 + 0x140),&local_228);
      local_1e0 = 0;
      if (local_1e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&local_228);
      *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + (longlong)local_53c * 4) = 2;
      uVar16 = uRam000000014c846088;
      lVar35 = *(longlong *)(param_1 + 0xc0);
      lVar22 = (longlong)local_53c * 0x30;
      puVar26 = (undefined8 *)(lVar35 + 0x20 + lVar22);
      *puVar26 = _DAT_14c846080;
      puVar26[1] = uVar16;
      uVar16 = uRam000000014c846078;
      puVar26 = (undefined8 *)(lVar35 + 0x10 + lVar22);
      *puVar26 = _DAT_14c846070;
      puVar26[1] = uVar16;
      uVar16 = uRam000000014c846068;
      *(undefined8 *)(lVar35 + lVar22) = _DAT_14c846060;
      ((undefined8 *)(lVar35 + lVar22))[1] = uVar16;
      uVar27 = FUN_146eb9b25(param_1,(longlong)local_53c,&local_538);
      lVar35 = local_558;
      uVar36 = uVar36 + 1;
    } while (uVar36 != local_560);
    if ((local_568 & 1) != 0) {
      FUN_146ebda4e(param_1);
    }
  }
  iVar20 = local_56c;
  FUN_146ebb8e4(param_1,local_56c);
  FUN_146ebc230(iVar20,lVar35,param_1 + 0xd0,0);
  FUN_146ebba3e(param_1);
  if (local_538 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_348 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_268 != (undefined1 *)0x0) {
    pppuVar25 = local_258;
    if (local_258 == (undefined ***)0x0) {
      pppuVar25 = &local_248;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  if (local_2a8 != (undefined1 *)0x0) {
    pppuVar25 = local_298;
    if (local_298 == (undefined ***)0x0) {
      pppuVar25 = &local_288;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  if (local_4b8 != 0) {
    FUN_1400020a8();
  }
  if (local_498 != 0) {
    FUN_1400020a8();
  }
  if (local_488 != 0) {
    FUN_1400020a8();
  }
  if (local_478 != 0) {
    FUN_1400020a8();
  }
  if (local_468 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_458 != 0) {
    FUN_1400020a8();
  }
  if (local_448 != 0) {
    FUN_1400020a8();
  }
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  FUN_146ec51d6(&local_1d0);
  if ((local_a0 ^ (ulonglong)auStack_5a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497059d2 FUN_1497059d2 body=644 status=ok
// SIG undefined FUN_1497059d2(void)

longlong *
FUN_1497059d2(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
             int param_6)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_149703326(&local_128);
  if (param_4 < 2) {
    param_4 = 1;
  }
  if (param_5 < 2) {
    param_5 = 1;
  }
  iVar12 = 1;
  if (1 < param_6) {
    iVar12 = param_6;
  }
  FUN_1447a8aa0(param_1,param_5 * param_4 * iVar12);
  local_140 = (double)param_4;
  local_130 = (double)param_5;
  iVar13 = 0;
  dVar3 = 0.0;
  do {
    dVar4 = (local_110 - local_128) * ((dVar3 + 0.5) / local_140) + local_128;
    dVar5 = 0.0;
    iVar10 = 0;
    local_138 = dVar3;
    do {
      dVar6 = (local_108 - local_120) * ((dVar5 + 0.5) / local_130) + local_120;
      dVar3 = 0.0;
      iVar11 = iVar12;
      do {
        dVar8 = local_100;
        dVar7 = local_118;
        iVar1 = (int)param_1[1];
        lVar9 = (longlong)iVar1;
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1403e3958(param_1,iVar1);
        }
        lVar2 = *param_1;
        *(double *)(lVar2 + lVar9 * 0x18) = dVar4;
        *(double *)(lVar2 + 8 + lVar9 * 0x18) = dVar6;
        *(double *)(lVar2 + 0x10 + lVar9 * 0x18) =
             (dVar8 - dVar7) * ((dVar3 + 0.5) / (double)iVar12) + dVar7;
        dVar3 = dVar3 + 1.0;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      dVar5 = dVar5 + 1.0;
      iVar10 = iVar10 + 1;
    } while (iVar10 != param_5);
    dVar3 = local_138 + 1.0;
    iVar13 = iVar13 + 1;
  } while (iVar13 != param_4);
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149705c58 FUN_149705c58 body=129 status=ok
// SIG undefined FUN_149705c58(void)

void FUN_149705c58(longlong *param_1)

{
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140f35b7a(param_1[0xb],(int)param_1[0xc]);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149705cda FUN_149705cda body=248 status=ok
// SIG undefined FUN_149705cda(void)

ulonglong FUN_149705cda(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined1 local_340 [168];
  undefined1 local_298 [624];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar1 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  if (iVar1 != 0) {
    FUN_146ea9b2e(local_298,param_1);
    FUN_146ea9f0e(local_298,param_2);
    FUN_146eaa24a(local_298,param_2,1);
    if (1 < *(int *)(param_2 + 8)) {
      FUN_14075a44e(local_340,param_1);
      uVar2 = FUN_1401f66f6(param_1,DAT_14c9974a8);
      iVar1 = FUN_146ebd6ac(param_1,param_2);
      uVar3 = CONCAT71((int7)((ulonglong)local_298 >> 8),iVar1 != -1);
      if (iVar1 != -1) {
        local_348 = 1;
        FUN_146ebb6ce(param_1,iVar1,param_2,1);
        FUN_146eccd9f(param_1,uVar2,1);
        FUN_146ebda4e(param_1);
        FUN_141051328(local_340);
      }
      goto LAB_149705d41;
    }
  }
  uVar3 = 0;
LAB_149705d41:
  if ((local_28 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149705dd4 FUN_149705dd4 body=664 status=ok
// SIG undefined FUN_149705dd4(void)

ulonglong FUN_149705dd4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  int local_38c;
  void *local_388;
  uint local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined1 local_360 [624];
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  FUN_14075a44e(local_f0,param_1);
  iVar3 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  if (iVar3 < *(int *)(param_2 + 1)) {
    uVar8 = 0;
    goto LAB_149705e25;
  }
  FUN_146ea9b2e(local_360,param_1);
  FUN_146eaa880(local_360,param_2);
  local_378 = 0;
  uStack_370 = 0;
  iVar3 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_14481578e(&local_378,iVar3);
  }
  local_38c = iVar3;
  if ((longlong)*(int *)(param_2 + 1) == 0) {
LAB_149705fc9:
    iVar3 = FUN_146ebd6ac(param_1,param_2);
    if (iVar3 != -1) {
      local_398 = 1;
      FUN_146ebb6ce(param_1,iVar3,param_2,1);
      FUN_146eccd9f(param_1,local_38c,1);
      FUN_144a1a59e(param_2,1,1);
      *(int *)*param_2 = iVar3;
      goto LAB_14970602e;
    }
LAB_149705fd9:
    uVar8 = 0;
  }
  else {
    piVar9 = (int *)*param_2;
    piVar1 = piVar9 + *(int *)(param_2 + 1);
    bVar5 = false;
    do {
      while (uVar8 = uStack_370, iVar3 = *piVar9,
            *(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar3 * 4) == 2) {
        FUN_146e9aa80(local_f0,&local_388,iVar3);
        uVar8 = uStack_370;
        lVar6 = (longlong)(int)local_380;
        if (lVar6 != 0) {
          iVar3 = (int)uStack_370;
          lVar7 = (longlong)(int)uStack_370;
          uStack_370 = CONCAT44(uStack_370._4_4_,(int)uStack_370 + local_380);
          if (uStack_370._4_4_ - iVar3 < local_380) {
            FUN_1446f48e2(&local_378,uVar8 & 0xffffffff);
          }
          memmove((void *)(lVar7 * 4 + local_378),local_388,lVar6 << 2);
          local_380 = 0;
        }
        if (local_388 != (void *)0x0) {
          FUN_1400020a8();
        }
        piVar9 = piVar9 + 1;
        bVar5 = true;
        if (piVar9 == piVar1) goto LAB_149705f92;
      }
      lVar6 = (longlong)(int)uStack_370;
      uVar4 = (int)uStack_370 + 1;
      uStack_370 = CONCAT44(uStack_370._4_4_,uVar4);
      if (uStack_370._4_4_ < uVar4) {
        FUN_1446f48e2(&local_378,uVar8 & 0xffffffff);
      }
      *(int *)(local_378 + lVar6 * 4) = iVar3;
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar1);
    if (!bVar5) goto LAB_149705fc9;
LAB_149705f92:
    iVar3 = FUN_146ebc7ee(param_1,param_2);
    if (iVar3 < 0) goto LAB_149705fd9;
    FUN_146ebc92a(param_1,iVar3,&local_378);
    FUN_144a1a59e(param_2,1,1);
    *(int *)*param_2 = iVar3;
LAB_14970602e:
    cVar2 = FUN_146ebda4e(param_1);
    if ((cVar2 != '\0') &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14481578e(param_2,0);
    }
    FUN_141051328(local_f0);
    uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  if (local_378 != 0) {
    FUN_1400020a8();
  }
LAB_149705e25:
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14970606e FUN_14970606e body=1251 status=ok
// SIG undefined FUN_14970606e(void)

bool FUN_14970606e(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int *piVar9;
  undefined1 auStack_568 [32];
  undefined8 *local_548;
  int local_534;
  int local_530;
  int local_52c;
  longlong local_528;
  longlong local_520;
  undefined4 *local_518;
  undefined4 local_510;
  longlong local_508;
  ulonglong uStack_500;
  longlong *local_4f8;
  undefined4 local_4f0;
  uint uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined1 local_4d0 [624];
  undefined8 local_260;
  undefined1 local_258 [176];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0 [2];
  undefined1 local_a0 [24];
  int local_88;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_568;
  local_534 = param_3;
  iVar4 = FUN_1401f66f6(param_1,DAT_14c9974a8);
  if (iVar4 != 0) {
    FUN_14075a44e(local_258,param_1);
    FUN_141051328(local_258);
    uVar2 = DAT_14c9974a8;
    FUN_1446ddc76(&local_260,"Level",1);
    local_520 = FUN_140619ac2(param_1,local_260,uVar2);
    FUN_146ea9b2e(local_4d0,param_1);
    FUN_146eaa24a(local_4d0,param_2,1);
    FUN_146eaa880(local_4d0,param_2);
    FUN_146eac356(local_4d0,local_b0,param_2);
    uStack_f8 = local_a0;
    local_100 = 0x100000000;
    local_f0 = 0xffffffff;
    uStack_e8 = 0;
    local_528 = param_1;
    if (local_88 == 0) {
      local_88 = 0;
    }
    else {
      FUN_1449c0562(&local_100);
    }
    uStack_4d8 = CONCAT44(uStack_e4,uStack_e8);
    local_4e0 = local_f0;
    uVar2 = local_4e0;
    local_4f0 = (undefined4)local_100;
    uStack_4ec = local_100._4_4_;
    uStack_4e8 = (undefined4)uStack_f8;
    uStack_4e4 = uStack_f8._4_4_;
    local_4f8 = local_b0;
    local_4e0._4_4_ = (int)((ulonglong)local_f0 >> 0x20);
    iVar5 = local_4e0._4_4_;
    iVar1 = iVar4;
    if ((local_4e0._4_4_ != local_88) || (local_4e0 = uVar2, uStack_f8 != local_a0)) {
      do {
        local_4e0 = uVar2;
        local_52c = local_88;
        local_530 = iVar1;
        lVar7 = local_528;
        lVar6 = (longlong)*(int *)(*local_4f8 + (longlong)iVar5 * 0x20);
        if (lVar6 != -1) {
          piVar9 = (int *)(*local_4f8 + (longlong)iVar5 * 0x20);
          FUN_1497017b7(&local_100,lVar6 * 0x50 + *(longlong *)(local_528 + 0x140),local_528,
                        *(int *)(*(longlong *)(local_520 + 0x10) + lVar6 * 4) + 1);
          local_508 = 0;
          uStack_500 = 0;
          local_138 = 0;
          local_130 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_12c = 0xffffffff00000080;
          local_124 = 0;
          local_118 = 0;
          local_110 = 0;
          local_548 = &local_158;
          FUN_149701cb7((longlong)*piVar9 * 0x50 + *(longlong *)(lVar7 + 0x140),piVar9 + 2,
                        &local_100,&local_508);
          if (0 < local_534) {
            iVar4 = 0;
            do {
              if ((longlong)(int)uStack_500 == 0) goto LAB_1497064cd;
              lVar7 = (longlong)(int)uStack_500 * 0xa0;
              bVar8 = 0;
              lVar6 = local_508;
              do {
                local_188 = 0;
                local_180 = 0;
                local_1a8 = 0;
                uStack_1a0 = 0;
                local_17c = 0xffffffff00000080;
                local_174 = 0;
                local_168 = 0;
                local_160 = 0;
                FUN_14970df04(&local_1a8,&local_100);
                bVar3 = FUN_149701fa0(&local_1a8,lVar6,&local_158);
                bVar8 = bVar8 | bVar3;
                lVar6 = lVar6 + 0xa0;
                lVar7 = lVar7 + -0xa0;
              } while (lVar7 != 0);
              iVar4 = iVar4 + 1;
            } while ((bVar8 & iVar4 < local_534) != 0);
          }
          if ((longlong)(int)uStack_500 != 0) {
            lVar7 = (longlong)(int)uStack_500 * 0xa0;
            lVar6 = local_508;
            do {
              if (1 < *(int *)(lVar6 + 8) - *(int *)(lVar6 + 0x34)) {
                FUN_140619b9c(lVar6,&local_518);
                FUN_144958a06(local_518,local_510);
                local_548 = (undefined8 *)((ulonglong)local_548 & 0xffffffffffffff00);
                FUN_146ebb682(local_528,*local_518,&local_518,0);
                if (local_518 != (undefined4 *)0x0) {
                  FUN_1400020a8();
                }
              }
              lVar6 = lVar6 + 0xa0;
              lVar7 = lVar7 + -0xa0;
            } while (lVar7 != 0);
          }
LAB_1497064cd:
          local_110 = 0;
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_158);
          FUN_14970e33c(local_508,uStack_500 & 0xffffffff);
          iVar4 = local_530;
          if (local_508 != 0) {
            FUN_1400020a8();
          }
          local_b8 = 0;
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          FUN_14062beec(&local_100);
        }
        local_4e0 = CONCAT44(local_4e0._4_4_,(uint)local_4e0 & ~uStack_4ec);
        FUN_1449c0562(&local_4f0);
        iVar5 = local_4e0._4_4_;
        iVar1 = local_530;
        local_88 = local_52c;
        uVar2 = local_4e0;
      } while (local_4f8 != local_b0 ||
               ((undefined1 *)CONCAT44(uStack_4e4,uStack_4e8) != local_a0 ||
               local_4e0._4_4_ != local_52c));
    }
    local_68 = 0;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_14083ed90(local_b0);
  }
  if ((local_60 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4 != 0;
}



// FUNCTION 149706552 FUN_149706552 body=398 status=ok
// SIG undefined FUN_149706552(void)

ulonglong FUN_149706552(undefined8 param_1,undefined8 param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong local_150 [2];
  undefined1 local_140 [240];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_14582f278(param_2);
  cVar3 = FUN_146ebe002(param_1);
  uVar7 = DAT_14c9974a8;
  if (cVar3 == '\0') {
    uVar9 = 0;
    goto LAB_149706599;
  }
  FUN_1446ddc76(&local_50,"TransformToConvexIndices",1);
  uVar7 = FUN_146eab2fc(param_1,local_50,uVar7);
  uVar8 = FUN_146ec600e(param_1,DAT_14c9974d0,DAT_14c9974c8);
  FUN_146ea80f4(local_140,param_1);
  FUN_146ea825e(local_140,local_150);
  uVar10 = (undefined7)((ulonglong)param_4 >> 8);
  local_170 = uVar7;
  local_168 = uVar8;
  local_160 = local_150;
  local_158 = param_2;
  if (param_3 == '\0') {
    iVar5 = FUN_1401f66f6(param_1,DAT_14c9974a8);
    if (iVar5 < 1) goto LAB_1497066c6;
    iVar5 = 0;
    uVar9 = CONCAT71(uVar10,1);
    do {
      bVar4 = FUN_144604424(&local_170,iVar5);
      uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 & bVar4);
      iVar5 = iVar5 + 1;
      iVar6 = FUN_1401f66f6(param_1,DAT_14c9974a8);
    } while (iVar5 < iVar6);
  }
  else {
    lVar2 = param_4[1];
    if ((longlong)(int)lVar2 == 0) {
LAB_1497066c6:
      uVar9 = CONCAT71(uVar10,1);
    }
    else {
      lVar1 = *param_4;
      uVar9 = CONCAT71(uVar10,1);
      lVar11 = 0;
      do {
        bVar4 = FUN_144604424(&local_170,*(undefined4 *)(lVar1 + lVar11));
        uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 & bVar4);
        lVar11 = lVar11 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar11);
    }
  }
  if (local_150[0] != 0) {
    FUN_1400020a8();
  }
LAB_149706599:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1497066e1 FUN_1497066e1 body=313 status=ok
// SIG undefined FUN_1497066e1(void)

ulonglong FUN_1497066e1(undefined8 param_1,undefined8 param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_146ebe002();
  uVar7 = DAT_14c9974a8;
  if (cVar3 == '\0') {
    uVar8 = 0;
  }
  else {
    FUN_1446ddc76(&local_40,"TransformToConvexIndices",1);
    uVar7 = FUN_146eb57a6(param_1,local_40,uVar7);
    local_50 = FUN_140dffbf6(param_1,DAT_14c9974d0,DAT_14c9974c8);
    uVar9 = (undefined7)((ulonglong)param_4 >> 8);
    local_58 = uVar7;
    local_48 = param_2;
    if (param_3 == '\0') {
      iVar5 = FUN_1401f66f6(param_1,DAT_14c9974a8);
      if (0 < iVar5) {
        iVar5 = 0;
        uVar8 = CONCAT71(uVar9,1);
        do {
          bVar4 = FUN_14460463e(&local_58,iVar5);
          uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 & bVar4);
          iVar5 = iVar5 + 1;
          iVar6 = FUN_1401f66f6(param_1,DAT_14c9974a8);
        } while (iVar5 < iVar6);
        goto LAB_149706714;
      }
    }
    else {
      lVar2 = param_4[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = *param_4;
        uVar8 = CONCAT71(uVar9,1);
        lVar10 = 0;
        do {
          bVar4 = FUN_14460463e(&local_58,*(undefined4 *)(lVar1 + lVar10));
          uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 & bVar4);
          lVar10 = lVar10 + 4;
        } while ((longlong)(int)lVar2 * 4 != lVar10);
        goto LAB_149706714;
      }
    }
    uVar8 = CONCAT71(uVar9,1);
  }
LAB_149706714:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14970681b FUN_14970681b body=3730 status=ok
// SIG undefined FUN_14970681b(void)

ulonglong FUN_14970681b(longlong param_1,longlong param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined7 uVar30;
  ulonglong uVar28;
  undefined8 *puVar29;
  uint uVar31;
  undefined8 *puVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  undefined *puVar38;
  double dVar39;
  double dVar40;
  undefined *puVar41;
  undefined *puVar42;
  double dVar43;
  undefined1 auStack_908 [32];
  undefined1 local_8e8;
  longlong local_8e0;
  longlong local_8d8 [3];
  undefined8 uStack_8c0;
  longlong local_8b8 [2];
  undefined **local_8a8;
  longlong **pplStack_8a0;
  longlong *local_898;
  longlong local_888;
  undefined1 local_879;
  longlong local_878;
  undefined8 uStack_870;
  longlong *local_7a8;
  longlong *local_7a0;
  longlong *local_798;
  undefined ***local_790;
  undefined8 local_788;
  undefined8 local_588;
  undefined4 local_580;
  undefined ***local_4b8;
  uint local_438;
  undefined4 local_424;
  undefined8 local_420;
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  int local_2d0;
  int local_2cc;
  undefined8 *local_2c8;
  undefined8 uStack_2c0;
  int local_2a0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_908;
  local_888 = param_1;
  if (param_2 == 0 || param_1 == 0) {
    uVar28 = 0;
  }
  else {
    plVar17 = *(longlong **)(param_1 + 0x58);
    uVar28 = 0;
    if (plVar17 != (longlong *)0x0) {
      uVar31 = *(uint *)(param_1 + 0x28);
      uVar24 = (ulonglong)(int)uVar31;
      if (0 < (longlong)uVar24) {
        cVar6 = *(char *)(param_1 + 0x60);
        uVar19 = 0;
        uVar28 = 0;
        do {
          if (cVar6 == '\x03') {
            uVar22 = *(uint *)(*plVar17 + 4 + uVar19 * 8);
          }
          else if (cVar6 == '\x02') {
            uVar22 = (uint)*(short *)(*plVar17 + 2 + uVar19 * 4);
          }
          else {
            uVar22 = 0;
            if (cVar6 == '\x01') {
              uVar22 = (uint)*(byte *)(*plVar17 + 1 + uVar19 * 2);
            }
          }
          if ((int)uVar22 < 3) {
            uVar22 = 2;
          }
          uVar28 = (ulonglong)(((int)uVar28 + uVar22) - 2);
          uVar19 = uVar19 + 1;
        } while (uVar24 != uVar19);
      }
      uVar30 = (undefined7)(uVar28 >> 8);
      if (((char)param_3[10] == '\x01') && ((int)uVar28 <= param_3[0xb])) {
        uVar28 = CONCAT71(uVar30,1);
        if (param_1 != param_2) {
          uVar14 = FUN_14001cc68(0xb0,0x10);
          FUN_140515e58(uVar14,param_1);
          FUN_146d834a8(param_2,uVar14);
        }
      }
      else if (*param_3 == 1) {
        local_878 = 0;
        uStack_870 = 0;
        uVar22 = 0;
        local_8e0 = param_2;
        FUN_14017c08a(&local_878,uVar31,0);
        if (uVar31 != 0) {
          do {
            *(uint *)(local_878 + (longlong)(int)uVar22 * 4) = uVar22;
            uVar22 = uVar22 + 1;
          } while (uVar31 != uVar22);
        }
        local_8a8 = (undefined **)0x0;
        pplStack_8a0 = (longlong **)0x0;
        FUN_140b463b8(&local_8a8,uVar31,1);
        local_8b8[0] = 0;
        local_8b8[1] = 0;
        FUN_146bad8b2(local_8b8,uVar31,1);
        if (0 < (int)uVar31) {
          uVar28 = 0;
          do {
            lVar16 = local_888;
            lVar21 = *(longlong *)(local_888 + 0x20);
            lVar15 = uVar28 * 0x18;
            fVar34 = *(float *)(lVar21 + 0x14 + lVar15);
            fVar1 = *(float *)(lVar21 + 0x10 + lVar15);
            local_8a8[uVar28 * 3] = (undefined *)(double)*(float *)(lVar21 + 0xc + lVar15);
            local_8a8[uVar28 * 3 + 1] = (undefined *)(double)fVar1;
            local_8a8[uVar28 * 3 + 2] = (undefined *)(double)fVar34;
            if (*(longlong *)(local_888 + 0x58) == 0) {
              iVar13 = -1;
              plVar17 = (longlong *)0x0;
            }
            else {
              local_588 = uVar28 & 0xffffffff;
              iVar13 = FUN_144b030e2(local_888 + 0x58,&local_588,local_2f0);
              plVar17 = *(longlong **)(local_888 + 0x58);
            }
            if (plVar17 == (longlong *)0x0) {
              dVar3 = 0.0;
            }
            else {
              lVar21 = *(longlong *)(lVar16 + 0x30);
              lVar15 = (longlong)iVar13;
              dVar4 = (double)*(float *)(lVar21 + 8 + lVar15 * 0xc);
              dVar5 = (double)*(float *)(lVar21 + 4 + lVar15 * 0xc);
              dVar43 = (double)*(float *)(lVar21 + lVar15 * 0xc);
              dVar3 = 0.0;
              iVar13 = 1;
              do {
                lVar21 = local_888;
                cVar6 = *(char *)(local_888 + 0x60);
                if (cVar6 == '\x03') {
                  uVar22 = *(uint *)(*plVar17 + 4 + uVar28 * 8);
                }
                else if (cVar6 == '\x02') {
                  uVar22 = (uint)*(short *)(*plVar17 + 2 + uVar28 * 4);
                }
                else {
                  if (cVar6 != '\x01') break;
                  uVar22 = (uint)*(byte *)(*plVar17 + 1 + uVar28 * 2);
                }
                iVar26 = iVar13 + 1;
                if ((int)uVar22 <= iVar26) break;
                local_588 = CONCAT44(iVar13,(int)uVar28);
                iVar13 = FUN_144b030e2(local_888 + 0x58,&local_588,local_2f0);
                lVar15 = local_888;
                lVar21 = *(longlong *)(lVar21 + 0x30);
                lVar16 = (longlong)iVar13;
                fVar34 = *(float *)(lVar21 + 8 + lVar16 * 0xc);
                fVar1 = *(float *)(lVar21 + 4 + lVar16 * 0xc);
                fVar2 = *(float *)(lVar21 + lVar16 * 0xc);
                if (*(longlong *)(local_888 + 0x58) == 0) {
                  iVar13 = -1;
                  plVar17 = (longlong *)0x0;
                }
                else {
                  local_588 = CONCAT44(iVar26,(int)uVar28);
                  iVar13 = FUN_144b030e2(local_888 + 0x58,&local_588,local_2f0);
                  plVar17 = *(longlong **)(local_888 + 0x58);
                }
                lVar21 = *(longlong *)(lVar15 + 0x30);
                lVar15 = (longlong)iVar13;
                dVar9 = (double)fVar34 - dVar4;
                dVar8 = (double)fVar1 - dVar5;
                dVar40 = (double)fVar2 - dVar43;
                dVar39 = (double)*(float *)(lVar21 + 8 + lVar15 * 0xc) - dVar4;
                dVar36 = (double)*(float *)(lVar21 + 4 + lVar15 * 0xc) - dVar5;
                dVar37 = (double)*(float *)(lVar21 + lVar15 * 0xc) - dVar43;
                dVar7 = dVar37 * dVar8 - dVar40 * dVar36;
                dVar40 = dVar39 * dVar40 - dVar9 * dVar37;
                dVar37 = dVar36 * dVar9 - dVar39 * dVar8;
                dVar3 = dVar3 + SQRT(dVar7 * dVar7 + dVar37 * dVar37 + dVar40 * dVar40) * 0.5;
                iVar13 = iVar26;
              } while (plVar17 != (longlong *)0x0);
            }
            *(double *)(local_8b8[0] + uVar28 * 8) = dVar3;
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar24);
        }
        iVar13 = 0;
        if ((*(longlong *)(local_888 + 0x58) != 0) &&
           (iVar13 = 0, (byte)(*(char *)(local_888 + 0x60) - 1U) < 3)) {
          iVar13 = *(int *)(*(longlong *)(local_888 + 0x58) + 0x38);
        }
        local_2f0[0] = 0;
        FUN_146bd2140(local_2e8);
        local_2c8 = (undefined8 *)0x0;
        uStack_2c0 = 0;
        FUN_146bd223a(local_2e8);
        local_588 = CONCAT44(local_588._4_4_,0xffffffff);
        FUN_1448156a8(&local_2c8,&local_588,iVar13);
        local_2d0 = 0;
        uVar33 = 0xeb1c432d;
        uVar35 = 0x3f1a36e2;
        dVar3 = *(double *)(param_3 + 4);
        if (0.0001 <= dVar3) {
          uVar33 = SUB84(dVar3,0);
          uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        local_7a8 = &local_888;
        local_798 = local_8b8;
        local_790 = &local_8a8;
        local_788 = CONCAT44(uVar35,uVar33);
        local_7a0 = &local_878;
        dVar3 = cos(*(double *)(param_3 + 2) * 0.017453292519943295);
        puVar29 = (undefined8 *)(ulonglong)uVar31;
        if (0 < iVar13) {
          iVar26 = 0;
          do {
            uVar14 = FUN_144604846(&local_7a8,iVar26,0);
            if ((float)uVar14 < (float)(1.0 - dVar3)) {
              FUN_146b9cbf0(local_2f0,iVar26,uVar14);
            }
            iVar26 = iVar26 + 1;
          } while (iVar13 != iVar26);
          puVar29 = (undefined8 *)(ulonglong)uVar31;
        }
        do {
          if (local_2d0 < 1) break;
          uVar22 = *(uint *)(*local_2e0 + 0xc);
          FUN_146bd26ea(local_2f0,1);
          fVar34 = (float)FUN_144604846(&local_7a8,uVar22,1);
          if (fVar34 < (float)(1.0 - dVar3)) {
            uVar12 = 0xffffffff;
            if (*(longlong *)(local_888 + 0x58) != 0) {
              local_588 = (ulonglong)uVar22;
              uVar12 = FUN_1457189ec(local_888 + 0x58,&local_588,local_8d8 + 2);
            }
            uVar20 = *(uint *)(local_878 + (longlong)(int)uVar12 * 4);
            uVar18 = uVar20;
            uVar25 = uVar12;
            if (uVar20 != uVar12) {
              do {
                uVar25 = uVar18;
                uVar18 = *(uint *)(local_878 + (longlong)(int)uVar25 * 4);
              } while (uVar18 != uVar25);
            }
            while (uVar18 = uVar20, uVar18 != uVar25) {
              *(uint *)(local_878 + (longlong)(int)uVar12 * 4) = uVar25;
              uVar12 = uVar18;
              uVar20 = *(uint *)(local_878 + (longlong)(int)uVar18 * 4);
            }
            uVar12 = 0xffffffff;
            if (*(longlong *)(local_888 + 0x58) != 0) {
              local_588 = CONCAT44(1,uVar22);
              uVar12 = FUN_1457189ec(local_888 + 0x58,&local_588,local_8d8 + 2);
            }
            uVar22 = *(uint *)(local_878 + (longlong)(int)uVar12 * 4);
            uVar20 = uVar22;
            uVar18 = uVar12;
            if (uVar22 != uVar12) {
              do {
                uVar18 = uVar20;
                uVar20 = *(uint *)(local_878 + (longlong)(int)uVar18 * 4);
              } while (uVar20 != uVar18);
            }
            while (uVar20 = uVar22, uVar20 != uVar18) {
              *(uint *)(local_878 + (longlong)(int)uVar12 * 4) = uVar18;
              uVar12 = uVar20;
              uVar22 = *(uint *)(local_878 + (longlong)(int)uVar20 * 4);
            }
            lVar15 = (longlong)(int)uVar25;
            uVar22 = *(uint *)(local_878 + lVar15 * 4);
            lVar21 = (longlong)(int)uVar18;
            uVar12 = *(uint *)(local_878 + lVar21 * 4);
            uVar20 = uVar25;
            if (uVar22 != uVar12) {
              do {
                if (uVar22 < uVar12) {
                  *(uint *)(local_878 + (longlong)(int)uVar20 * 4) = uVar12;
                  if (uVar20 == uVar22) break;
                  uVar10 = *(uint *)(local_878 + (longlong)(int)uVar22 * 4);
                  uVar11 = uVar12;
                  uVar20 = uVar22;
                }
                else {
                  *(uint *)(local_878 + (longlong)(int)uVar18 * 4) = uVar22;
                  if (uVar18 == uVar12) break;
                  uVar10 = uVar22;
                  uVar11 = *(uint *)(local_878 + (longlong)(int)uVar12 * 4);
                  uVar18 = uVar12;
                }
                uVar12 = uVar11;
                uVar22 = uVar10;
              } while (uVar22 != uVar12);
              uVar22 = *(uint *)(local_878 + lVar15 * 4);
            }
            uVar12 = uVar22;
            uVar20 = uVar25;
            if (uVar22 != uVar25) {
              do {
                uVar20 = uVar12;
                uVar12 = *(uint *)(local_878 + (longlong)(int)uVar20 * 4);
              } while (uVar12 != uVar20);
            }
            while (uVar12 = uVar22, uVar12 != uVar20) {
              *(uint *)(local_878 + (longlong)(int)uVar25 * 4) = uVar20;
              uVar25 = uVar12;
              uVar22 = *(uint *)(local_878 + (longlong)(int)uVar12 * 4);
            }
            dVar4 = *(double *)(local_8b8[0] + lVar15 * 8);
            dVar5 = *(double *)(local_8b8[0] + lVar21 * 8);
            puVar38 = (undefined *)
                      ((double)local_8a8[lVar21 * 3 + 2] * dVar5 +
                      (double)local_8a8[lVar15 * 3 + 2] * dVar4);
            puVar41 = (undefined *)
                      ((double)local_8a8[lVar21 * 3 + 1] * dVar5 +
                      (double)local_8a8[lVar15 * 3 + 1] * dVar4);
            puVar42 = (undefined *)
                      ((double)local_8a8[lVar21 * 3] * dVar5 + (double)local_8a8[lVar15 * 3] * dVar4
                      );
            dVar43 = (double)puVar38 * (double)puVar38 +
                     (double)puVar42 * (double)puVar42 + (double)puVar41 * (double)puVar41;
            if (9.99999993922529e-09 < dVar43) {
              dVar43 = 1.0 / SQRT(dVar43);
              puVar42 = (undefined *)((double)puVar42 * dVar43);
              puVar41 = (undefined *)((double)puVar41 * dVar43);
              puVar38 = (undefined *)((double)puVar38 * dVar43);
            }
            lVar21 = (longlong)(int)uVar20;
            local_8a8[lVar21 * 3] = puVar42;
            local_8a8[lVar21 * 3 + 1] = puVar41;
            local_8a8[lVar21 * 3 + 2] = puVar38;
            *(double *)(local_8b8[0] + lVar21 * 8) = dVar4 + dVar5;
            puVar29 = (undefined8 *)(ulonglong)((int)puVar29 - 1);
          }
        } while (param_3[0xb] <= (int)puVar29);
        local_8d8[2] = 0;
        uStack_8c0 = 0;
        uVar22 = *(uint *)(local_888 + 0x38);
        if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar22);
        }
        if (uVar22 != 0) {
          FUN_140163800(local_8d8 + 2,uVar22);
        }
        local_8d8[0] = 0;
        local_8d8[1] = 0;
        local_588 = 0xffffffffffffffff;
        local_580 = 0xffffffff;
        FUN_1485c2374(local_8d8,&local_588,uVar22);
        if (0 < (int)uVar31) {
          uVar28 = 0;
          puVar29 = &local_588;
          do {
            uVar31 = *(uint *)(local_878 + uVar28 * 4);
            uVar27 = (ulonglong)uVar31;
            uVar19 = uVar27;
            if (uVar28 != uVar27) {
              do {
                uVar20 = (uint)uVar19;
                uVar12 = *(uint *)(local_878 + (longlong)(int)uVar20 * 4);
                uVar19 = (ulonglong)uVar12;
              } while (uVar12 != uVar20);
              if (uVar31 != uVar20) {
                uVar19 = uVar28 & 0xffffffff;
                do {
                  *(uint *)(local_878 + (longlong)(int)uVar19 * 4) = uVar20;
                  uVar12 = *(uint *)(local_878 + (longlong)(int)uVar27 * 4);
                  uVar19 = uVar27;
                  uVar27 = (ulonglong)uVar12;
                  uVar31 = uVar20;
                } while (uVar12 != uVar20);
              }
            }
            plVar17 = *(longlong **)(local_888 + 0x58);
            if (plVar17 != (longlong *)0x0) {
              cVar6 = *(char *)(local_888 + 0x60);
              if (cVar6 == '\x03') {
                uVar12 = *(uint *)(*plVar17 + 4 + uVar28 * 8);
              }
              else if (cVar6 == '\x02') {
                uVar12 = (uint)*(short *)(*plVar17 + 2 + uVar28 * 4);
              }
              else {
                if (cVar6 != '\x01') goto LAB_149707518;
                uVar12 = (uint)*(byte *)(*plVar17 + 1 + uVar28 * 2);
              }
              if (0 < (int)uVar12) {
                uVar20 = 0;
                do {
                  if (*(longlong *)(local_888 + 0x58) == 0) {
                    iVar13 = -1;
                  }
                  else {
                    local_588 = CONCAT44(uVar20,(int)uVar28);
                    iVar13 = FUN_144b030e2(local_888 + 0x58,puVar29,&local_879);
                  }
                  lVar21 = (longlong)iVar13 * 0xc + local_8d8[0];
                  uVar19 = 0;
                  while (uVar18 = *(uint *)(lVar21 + uVar19 * 4), uVar18 != 0xffffffff) {
                    if ((1 < uVar19) || (uVar19 = uVar19 + 1, uVar18 == uVar31)) goto LAB_149707509;
                  }
                  *(uint *)(lVar21 + uVar19 * 4) = uVar31;
LAB_149707509:
                  uVar20 = uVar20 + 1;
                } while (uVar20 != uVar12);
              }
            }
LAB_149707518:
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar24);
        }
        lVar21 = local_8e0;
        if (uVar22 != 0) {
          uVar28 = 1;
          if (1 < (int)uVar22) {
            uVar28 = (ulonglong)uVar22;
          }
          puVar29 = (undefined8 *)(uVar28 * 0xc);
          puVar32 = (undefined8 *)0x0;
          do {
            uVar28 = uStack_8c0;
            if (-1 < *(int *)(local_8d8[0] + 8 + (longlong)puVar32)) {
              puVar23 = (undefined8 *)(*(longlong *)(local_888 + 0x30) + (longlong)puVar32);
              lVar15 = (longlong)(int)uStack_8c0;
              uVar31 = (int)uStack_8c0 + 1;
              uStack_8c0 = CONCAT44(uStack_8c0._4_4_,uVar31);
              if (uStack_8c0._4_4_ < uVar31) {
                FUN_140aacb36(local_8d8 + 2,uVar28 & 0xffffffff);
              }
              *(undefined4 *)(local_8d8[2] + 8 + lVar15 * 0xc) = *(undefined4 *)(puVar23 + 1);
              *(undefined8 *)(local_8d8[2] + lVar15 * 0xc) = *puVar23;
            }
            puVar32 = (undefined8 *)((longlong)puVar32 + 0xc);
          } while (puVar29 != puVar32);
        }
        FUN_146d83314(&local_588,local_8d8 + 2,*(undefined8 *)(local_888 + 0x10),0);
        FUN_146d834a8(lVar21,&local_588);
        FUN_146d835c4(&local_588);
        if (local_8d8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_8d8[2] != 0) {
          FUN_1400020a8();
        }
        FUN_146b9cd14(local_2f0);
        if (local_8b8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_8a8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (local_878 != 0) {
          FUN_1400020a8();
        }
        uVar28 = CONCAT71((int7)((ulonglong)puVar29 >> 8),1);
      }
      else {
        uVar28 = CONCAT71(uVar30,1);
        if (*param_3 == 0) {
          local_8e8 = 0;
          FUN_1411b354a(local_2f0,0,0,0);
          local_8e8 = 0;
          FUN_1446054a4(param_1,local_2f0,0,0);
          FUN_1482bc5b8(&local_588,local_2f0);
          local_438 = (uint)*(byte *)(param_3 + 0xc);
          if ((char)param_3[6] == '\x01') {
            local_424 = 1;
            local_420 = *(undefined8 *)(param_3 + 8);
            FUN_146bff712(&local_7a8,local_2f0);
            FUN_146ba21d6(&local_878,&local_7a8,1);
            local_4b8 = &local_8a8;
            local_8a8 = &PTR_FUN_14ae73f80;
            iVar13 = 4;
            if ((char)param_3[10] != '\0') {
              iVar13 = param_3[0xb];
            }
            pplStack_8a0 = &local_7a8;
            local_898 = &local_878;
            FUN_1482bc72c(&local_588,iVar13);
            FUN_1457e5b52(&local_878);
            FUN_141082778(&local_7a8);
          }
          else if ((char)param_3[10] == '\x01') {
            FUN_1482bc72c(&local_588,param_3[0xb]);
          }
          else {
            FUN_1482bc7d2(&local_588,*(double *)(param_3 + 8) * *(double *)(param_3 + 8));
          }
          local_878 = 0;
          uStack_870 = 0;
          if (local_2a0 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(local_2a0);
          }
          if (local_2a0 != 0) {
            FUN_140163800(&local_878);
          }
          uVar22 = local_2d0 * 0x200 + local_2cc;
          uVar31 = 0;
          if ((uVar22 != 0) && (uVar31 = 0, 0xfffd < (ushort)(*(short *)*local_2c8 - 1U))) {
            uVar12 = 1;
            uVar20 = 1;
            if (1 < (int)uVar22) {
              uVar12 = uVar22;
            }
            do {
              uVar31 = uVar12;
              if (uVar12 == uVar20) break;
              uVar18 = uVar20 >> 9;
              uVar25 = uVar20 & 0x1ff;
              uVar31 = uVar20;
              uVar20 = uVar20 + 1;
            } while (0xfffd < (ushort)(*(short *)(local_2c8[uVar18] + (ulonglong)uVar25 * 2) - 1U));
          }
          if (uVar31 != uVar22) {
            do {
              uVar24 = uStack_870;
              lVar21 = local_2e0[uVar31 >> 9];
              uVar19 = (ulonglong)(uVar31 & 0x1ff);
              dVar3 = *(double *)(lVar21 + 0x10 + uVar19 * 0x18);
              dVar4 = *(double *)(lVar21 + 8 + uVar19 * 0x18);
              dVar5 = *(double *)(lVar21 + uVar19 * 0x18);
              lVar21 = (longlong)(int)uStack_870;
              uVar12 = (int)uStack_870 + 1;
              uStack_870 = CONCAT44(uStack_870._4_4_,uVar12);
              if (uStack_870._4_4_ < uVar12) {
                FUN_140aacb36(&local_878,uVar24 & 0xffffffff);
              }
              *(float *)(local_878 + lVar21 * 0xc) = (float)dVar5;
              *(float *)(local_878 + 4 + lVar21 * 0xc) = (float)dVar4;
              *(float *)(local_878 + 8 + lVar21 * 0xc) = (float)dVar3;
              uVar12 = uVar31 + 1;
              if ((int)(uVar31 + 1) < (int)uVar22) {
                uVar12 = uVar22;
              }
              do {
                uVar20 = uVar12;
                if (uVar12 - 1 == uVar31) break;
                uVar31 = uVar31 + 1;
                uVar20 = uVar31;
              } while (0xfffd < (ushort)(*(short *)(local_2c8[uVar31 >> 9] +
                                                   (ulonglong)(uVar31 & 0x1ff) * 2) - 1U));
              uVar31 = uVar20;
            } while (uVar31 != uVar22);
          }
          FUN_146d83314(&local_7a8,&local_878,*(undefined8 *)(local_888 + 0x10),0);
          FUN_146d834a8(param_2,&local_7a8);
          FUN_146d835c4(&local_7a8);
          if (local_878 != 0) {
            FUN_1400020a8();
          }
          FUN_1482fec66(&local_588);
          FUN_141082778(local_2f0);
        }
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_908) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar28 & 0xffffffff;
}



// FUNCTION 1497076af FUN_1497076af body=1168 status=ok
// SIG undefined FUN_1497076af(void)

ulonglong FUN_1497076af(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                       undefined8 *param_5,char param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *unaff_RBP;
  ulonglong uVar9;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined8 local_758;
  undefined8 local_750;
  longlong *local_748;
  longlong *local_740;
  longlong local_738 [2];
  longlong *local_728;
  ulonglong uStack_720;
  undefined1 local_710 [624];
  undefined1 local_4a0 [240];
  undefined8 local_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  undefined8 uStack_398;
  uint local_390;
  undefined4 local_38c;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined4 local_36c;
  longlong local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_340;
  longlong *local_338;
  undefined8 uStack_330;
  longlong local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_268 [544];
  ulonglong local_48;
  undefined7 uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_788;
  cVar4 = FUN_146ebe002();
  uVar3 = DAT_14c9974a8;
  if (cVar4 == '\0') {
    uVar9 = 0;
  }
  else {
    FUN_1446ddc76(&local_3b0,"TransformToConvexIndices",1);
    plVar7 = (longlong *)FUN_146eb57a6(param_1,local_3b0,uVar3);
    lVar8 = FUN_140dffbf6(param_1,DAT_14c9974d0,DAT_14c9974c8);
    local_768 = 0;
    FUN_1411b354a(local_268,0,0,0);
    FUN_146ea7fa0(local_4a0,param_1);
    FUN_146ea9b2e(local_710,param_1);
    local_728 = (longlong *)0x0;
    uStack_720 = 0;
    local_758 = param_2;
    local_750 = param_3;
    if (param_4 == '\0') {
      if (param_6 == '\0') {
        FUN_146eaac2a(local_710,&local_338);
      }
      else {
        FUN_146eaad94();
      }
      local_728 = local_338;
      uStack_720 = uStack_330;
    }
    else {
      uVar11 = *(uint *)(param_5 + 1);
      if ((longlong)(int)uVar11 != 0) {
        uStack_720 = (ulonglong)uVar11;
        FUN_1446f48e2(&local_728,0);
        memcpy(local_728,(void *)*param_5,(longlong)(int)uVar11 << 2);
      }
      unaff_RBP = plVar7;
      if (param_6 != '\0') {
        FUN_146eaa79e(local_710,&local_728);
      }
    }
    FUN_146ea825e(local_4a0,local_738);
    uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar9 = CONCAT71(uVar10,1);
    if ((longlong)(int)uStack_720 != 0) {
      plVar12 = (longlong *)((longlong)local_728 + (longlong)(int)uStack_720 * 4);
      uVar9 = CONCAT71(uVar10,1);
      plVar13 = local_728;
      local_748 = plVar12;
      local_740 = plVar7;
      do {
        lVar2 = *plVar13;
        lVar15 = (longlong)(int)lVar2;
        if ((lVar15 < 0) || (iVar6 = (**(code **)(*plVar7 + 0x60))(plVar7), iVar6 <= (int)lVar2)) {
          bVar5 = 0;
        }
        else {
          lVar1 = plVar7[2];
          lVar2 = lVar1 + lVar15 * 0x50;
          lVar14 = lVar2 + 0x10;
          local_3a8 = (longlong **)0x100000000;
          uStack_398 = 0xffffffff;
          local_390 = 0;
          local_3a0 = lVar14;
          if (*(int *)(lVar2 + 0x28) != 0) {
            FUN_1449c0562(&local_3a8);
          }
          plVar7 = (longlong *)(lVar1 + lVar15 * 0x50);
          local_320 = uStack_398;
          local_318 = local_390;
          local_314 = local_38c;
          uStack_330 = (ulonglong)local_3a8;
          local_328 = local_3a0;
          uVar11 = *(uint *)(plVar7 + 5);
          local_3a8 = (longlong **)CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
          uStack_398 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
          local_390 = uVar11 & 0xffffffe0;
          local_3a0 = lVar14;
          local_338 = plVar7;
          if (*(uint *)(plVar7 + 5) != uVar11) {
            FUN_1449c0562(&local_3a8);
            uVar11 = uStack_398._4_4_;
          }
          lVar2 = local_3a0;
          while (((local_320._4_4_ != uVar11 || (local_328 != lVar2)) || (local_338 != plVar7))) {
            local_768 = 0;
            FUN_1446054a4(*(undefined8 *)
                           (*(longlong *)(lVar8 + 0x10) +
                           (longlong)*(int *)(*local_338 + (longlong)(int)local_320._4_4_ * 0xc) * 8
                           ),local_268,lVar15 * 0x60 + local_738[0],1);
            local_320 = CONCAT44(local_320._4_4_,(uint)local_320 & ~uStack_330._4_4_);
            FUN_1449c0562(&uStack_330);
          }
          bVar5 = 1;
          plVar7 = local_740;
          plVar12 = local_748;
        }
        uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 & bVar5);
        plVar13 = (longlong *)((longlong)plVar13 + 4);
      } while (plVar13 != plVar12);
    }
    FUN_146ba21d6(&local_338,local_268,1);
    local_380 = 0;
    local_378 = 0;
    local_3a0 = 0;
    uStack_398 = 0;
    local_374 = 0xffffffff00000080;
    local_36c = 0;
    local_360 = 0;
    local_358 = 0;
    local_350 = 0;
    local_348 = 0x4000000000000000;
    local_340 = 2;
    local_3a8 = &local_338;
    FUN_146bef8a8(&local_3a8,1);
    FUN_146b9dbb6(local_758,&local_3a8,local_750,1);
    local_358 = 0;
    if (local_360 != 0) {
      FUN_1400020a8();
    }
    FUN_146bddd50(&local_3a0);
    FUN_1457e5b52(&local_338);
    if (local_738[0] != 0) {
      FUN_1400020a8();
    }
    if (local_728 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_141082778(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_788) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 149707b40 FUN_149707b40 body=499 status=ok
// SIG undefined FUN_149707b40(void)

void FUN_149707b40(longlong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_318 [40];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  ulonglong uStack_2d0;
  void *local_2c0;
  int local_2b8;
  undefined4 local_2b4;
  undefined1 local_2b0 [632];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_146ea9b2e(local_2b0,param_1);
  local_2c0 = (void *)0x0;
  local_2b8 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_2b8;
  pvVar1 = (void *)*param_2;
  if (lVar5 == 0) {
    local_2b4 = 0;
  }
  else {
    FUN_144a06ca8(&local_2c0,local_2b8,0);
    memcpy(local_2c0,pvVar1,lVar5 << 2);
  }
  FUN_146ea9f0e(local_2b0,&local_2c0);
  FUN_146eaa24a(local_2b0,&local_2c0,1);
  uVar3 = DAT_14c9974a8;
  local_2d8 = 0;
  uStack_2d0 = 0;
  FUN_1446ddc76(&local_2e0,"Children",1);
  uVar3 = FUN_146eab2fc(param_1,local_2e0,uVar3);
  pvVar1 = local_2c0;
  lVar5 = (longlong)local_2b8;
  if (lVar5 == 0) {
    uVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar6 = 0;
    do {
      FUN_146ebd130(uVar3,*(undefined4 *)((longlong)pvVar1 + lVar6),&local_2d8);
      lVar6 = lVar6 + 4;
    } while (lVar5 * 4 != lVar6);
    uVar4 = uStack_2d0 & 0xffffffff;
    lVar5 = local_2d8;
  }
  FUN_144958a06(lVar5,uVar4);
  (**(code **)(*param_1 + 0x28))(param_1,&DAT_14c9974a8,&local_2d8,0x101);
  FUN_146ebda4e(param_1);
  uVar3 = DAT_14c996af0;
  FUN_1446ddc76(&local_2e8,"Proximity",1);
  cVar2 = FUN_140498cd4(param_1,local_2e8,uVar3);
  uVar3 = DAT_14c996af0;
  if (cVar2 != '\0') {
    FUN_1446ddc76(&local_2f0,"Proximity",1);
    FUN_140498ea8(param_1,local_2f0,uVar3);
  }
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
  if (local_2c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149707d34 FUN_149707d34 body=594 status=ok
// SIG undefined FUN_149707d34(void)

void FUN_149707d34(undefined8 param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_308 [32];
  int *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [624];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  FUN_146ea9b2e(local_2b8,param_1);
  uVar3 = DAT_14c9974a8;
  FUN_1446ddc76(&local_2c0,"TransformToGeometryIndex",1);
  lVar4 = FUN_140619ac2(param_1,local_2c0,uVar3);
  uVar3 = DAT_14c996af0;
  FUN_1446ddc76(&local_2c8,"FaceStart",1);
  lVar5 = FUN_140619ac2(param_1,local_2c8,uVar3);
  uVar3 = DAT_14c996af0;
  FUN_1446ddc76(&local_2d0,"FaceCount",1);
  lVar6 = FUN_140619ac2(param_1,local_2d0,uVar3);
  uVar3 = DAT_14c996ae8;
  FUN_1446ddc76(&local_2d8,"Visible",1);
  lVar7 = FUN_140b1fd10(param_1,local_2d8,uVar3);
  local_2e8 = (int *)0x0;
  local_2e0 = *(int *)(param_2 + 1);
  lVar14 = (longlong)local_2e0;
  _Src = (void *)*param_2;
  if (lVar14 == 0) {
    local_2dc = 0;
  }
  else {
    FUN_144a06ca8(&local_2e8,local_2e0,0);
    memcpy(local_2e8,_Src,lVar14 << 2);
  }
  FUN_146eaa79e(local_2b8,&local_2e8);
  if ((longlong)local_2e0 != 0) {
    lVar14 = *(longlong *)(lVar4 + 0x10);
    piVar8 = local_2e8;
    do {
      lVar10 = (longlong)*piVar8;
      lVar11 = (longlong)*(int *)(lVar14 + lVar10 * 4);
      if ((-1 < lVar11) &&
         (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)*(int *)(lVar14 + lVar10 * 4) * 4)))
      {
        iVar2 = *(int *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 4);
        iVar12 = 0;
        do {
          iVar1 = iVar2 + iVar12;
          uVar9 = 1 << ((byte)iVar1 & 0x1f);
          lVar14 = *(longlong *)(lVar7 + 0x20);
          if (*(longlong *)(lVar7 + 0x20) == 0) {
            lVar14 = lVar7 + 0x10;
          }
          iVar13 = iVar2 + iVar12 + 0x1f;
          if (-1 < iVar1) {
            iVar13 = iVar1;
          }
          lVar11 = (longlong)(iVar13 >> 5);
          if (param_3 == '\0') {
            uVar9 = ~uVar9 & *(uint *)(lVar14 + lVar11 * 4);
          }
          else {
            uVar9 = uVar9 | *(uint *)(lVar14 + lVar11 * 4);
          }
          *(uint *)(lVar14 + lVar11 * 4) = uVar9;
          iVar12 = iVar12 + 1;
          lVar14 = *(longlong *)(lVar4 + 0x10);
        } while (iVar12 < *(int *)(*(longlong *)(lVar6 + 0x10) +
                                  (longlong)*(int *)(lVar14 + lVar10 * 4) * 4));
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != local_2e8 + local_2e0);
  }
  if (local_2e8 != (int *)0x0) {
    FUN_1400020a8(local_2e8);
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149707f88 FUN_149707f88 body=228 status=ok
// SIG undefined FUN_149707f88(void)

void FUN_149707f88(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar4 = DAT_14c996ae8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_38,"Visible",1);
  lVar5 = FUN_140b1fd10(param_1,local_38,uVar4);
  FUN_1401f66f6(param_1,DAT_14c996ae8);
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar8);
      uVar9 = 1 << ((byte)iVar1 & 0x1f);
      lVar10 = *(longlong *)(lVar5 + 0x20);
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        lVar10 = lVar5 + 0x10;
      }
      iVar7 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar7 = iVar1;
      }
      lVar6 = (longlong)(iVar7 >> 5);
      if (param_3 == '\0') {
        uVar9 = ~uVar9 & *(uint *)(lVar10 + lVar6 * 4);
      }
      else {
        uVar9 = uVar9 | *(uint *)(lVar10 + lVar6 * 4);
      }
      *(uint *)(lVar10 + lVar6 * 4) = uVar9;
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970806e FUN_14970806e body=328 status=ok
// SIG undefined FUN_14970806e(void)

void FUN_14970806e(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_2f8 [40];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  void *local_2b0;
  int local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0 [624];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_146ea9b2e(local_2a0,param_1);
  local_2b0 = (void *)0x0;
  local_2a8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_2a8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_2a4 = 0;
  }
  else {
    FUN_144a06ca8(&local_2b0,local_2a8,0);
    memcpy(local_2b0,_Src,lVar3 << 2);
  }
  FUN_146eaa24a(local_2a0,&local_2b0,1);
  local_2c0 = *param_2;
  local_2b8 = *(undefined4 *)(param_2 + 1);
  FUN_14849828d(param_1,&local_2c0,0);
  uVar1 = DAT_14c996af0;
  FUN_1446ddc76(&local_2c8,"Proximity",1);
  cVar2 = FUN_140498cd4(param_1,local_2c8,uVar1);
  uVar1 = DAT_14c996af0;
  if (cVar2 != '\0') {
    FUN_1446ddc76(&local_2d0,"Proximity",1);
    FUN_140498ea8(param_1,local_2d0,uVar1);
  }
  if (local_2b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497081b8 FUN_1497081b8 body=1347 status=ok
// SIG undefined FUN_1497081b8(void)

void FUN_1497081b8(undefined8 param_1,double *param_2,float param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  double dVar21;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8 [3];
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  ulonglong local_90;
  
  uVar16 = DAT_14c9974a8;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1446ddc76(&local_140,"Transform",1);
  cVar11 = FUN_140498cd4(param_1,local_140,uVar16);
  uVar16 = DAT_14c9974a8;
  if (cVar11 != '\0') {
    local_150 = 0;
    local_148 = 0;
    FUN_1446ddc76(&local_158,"ExplodedVector",1);
    FUN_140676448(param_1,local_158,uVar16,&local_150);
    uVar16 = DAT_14c9974a8;
    FUN_1446ddc76(&local_160,"ExplodedVector",1);
    lVar13 = FUN_14067648e(param_1,local_160,uVar16);
    uVar16 = DAT_14c9974a8;
    FUN_1446ddc76(&local_168,"Transform",1);
    plVar14 = (longlong *)FUN_1497086fc(param_1,local_168,uVar16);
    uVar16 = DAT_14c9974a8;
    FUN_1446ddc76(&local_170,"TransformToGeometryIndex",1);
    local_1c0 = FUN_140619ac2(param_1,local_170,uVar16);
    uVar16 = DAT_14c996af0;
    FUN_1446ddc76(&local_178,"BoundingBox",1);
    local_1c8 = FUN_1429fcaca(param_1,local_178,uVar16);
    FUN_14075a44e(&local_138,param_1);
    FUN_141051328(&local_138);
    uVar16 = DAT_14c9974a8;
    FUN_1446ddc76(&local_180,"Level",1);
    lVar15 = FUN_140619ac2(param_1,local_180,uVar16);
    uVar16 = DAT_14c9974a8;
    FUN_1446ddc76(&local_188,"Parent",1);
    local_1d8 = FUN_140619ac2(param_1,local_188,uVar16);
    uVar16 = DAT_14c9974a8;
    FUN_1446ddc76(&local_190,"Children",1);
    local_1d0 = FUN_146eab2fc(param_1,local_190,uVar16);
    uVar16 = DAT_14c9974a8;
    FUN_1446ddc76(&local_198,"SimulationType",1);
    uVar16 = FUN_140619ac2(param_1,local_198,uVar16);
    uVar12 = (**(code **)(*plVar14 + 0x60))(plVar14);
    if ((int)uVar12 < 1) {
      iVar18 = -1;
    }
    else {
      iVar18 = -1;
      uVar17 = 0;
      do {
        iVar19 = *(int *)(*(longlong *)(lVar15 + 0x10) + uVar17 * 4);
        if (iVar18 < iVar19) {
          iVar18 = iVar19;
        }
        uVar17 = uVar17 + 1;
      } while (uVar12 != uVar17);
    }
    local_1b8[2] = 0;
    uStack_1a0 = 0;
    FUN_146eb7819(plVar14,local_1d8,local_1b8 + 2);
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    FUN_140b463b8(local_1b8,uStack_1a0 & 0xffffffff,1);
    uVar12 = (**(code **)(*plVar14 + 0x60))(plVar14);
    if ((int)uVar12 < 1) {
      dVar9 = 0.0;
      dVar10 = 0.0;
      dVar8 = 0.0;
      dVar21 = 0.0;
    }
    else {
      dVar8 = 0.0;
      lVar15 = 0;
      uVar17 = 0;
      iVar19 = 0;
      dVar10 = 0.0;
      dVar9 = 0.0;
      do {
        lVar6 = *(longlong *)(lVar13 + 0x10);
        *(undefined4 *)(lVar6 + 8 + lVar15) = DAT_14c846338;
        *(undefined8 *)(lVar6 + lVar15) = DAT_14c846330;
        local_1e0 = &local_138;
        local_1e8 = (undefined4)uVar17;
        local_1f8 = local_1c8;
        local_1f0 = uVar16;
        cVar11 = FUN_144604a20(local_1c0,local_1b8 + 2,local_1d8,local_1d0);
        if (cVar11 != '\0') {
          puVar1 = (undefined4 *)(local_1b8[0] + lVar15 * 2);
          *puVar1 = local_138;
          puVar1[1] = uStack_134;
          puVar1[2] = uStack_130;
          puVar1[3] = uStack_12c;
          *(undefined8 *)(local_1b8[0] + 0x10 + lVar15 * 2) = local_128;
          dVar9 = dVar9 + *(double *)(local_1b8[0] + lVar15 * 2);
          dVar10 = dVar10 + *(double *)(local_1b8[0] + 8 + lVar15 * 2);
          dVar8 = dVar8 + *(double *)(local_1b8[0] + 0x10 + lVar15 * 2);
          iVar19 = iVar19 + 1;
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 0xc;
      } while (uVar12 != uVar17);
      dVar21 = (double)iVar19;
    }
    if (0 < iVar18) {
      dVar21 = 1.0 / dVar21;
      dVar7 = (double)param_3;
      iVar19 = 1;
      do {
        if (0 < (longlong)(int)uStack_1a0) {
          lVar15 = 0;
          do {
            dVar2 = param_2[2];
            dVar3 = param_2[1];
            dVar4 = *(double *)(local_1b8[0] + 0x10 + lVar15 * 2);
            dVar5 = *(double *)(local_1b8[0] + 8 + lVar15 * 2);
            lVar6 = *(longlong *)(lVar13 + 0x10);
            *(float *)(lVar6 + lVar15) =
                 (float)(*param_2 * dVar7) *
                 (float)(*(double *)(local_1b8[0] + lVar15 * 2) - dVar9 * dVar21);
            *(float *)(lVar6 + 4 + lVar15) =
                 (float)(dVar3 * dVar7) * (float)(dVar5 - dVar10 * dVar21);
            *(float *)(lVar6 + 8 + lVar15) =
                 (float)(dVar2 * dVar7) * (float)(dVar4 - dVar8 * dVar21);
            lVar15 = lVar15 + 0xc;
          } while ((longlong)(int)uStack_1a0 * 0xc != lVar15);
        }
        bVar20 = iVar19 != iVar18;
        iVar19 = iVar19 + 1;
      } while (bVar20);
    }
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1b8[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497086fc FUN_1497086fc body=227 status=ok
// SIG undefined FUN_1497086fc(void)

undefined8 FUN_1497086fc(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar1 * 0x40;
        lVar2 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) goto LAB_149708708;
        iVar1 = *(int *)(lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_149708708:
  return *(undefined8 *)(lVar2 + 0x30);
}



// FUNCTION 1497087e0 FUN_1497087e0 body=2359 status=ok
// SIG undefined FUN_1497087e0(void)

undefined4
FUN_1497087e0(undefined8 param_1,longlong param_2,double *param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,float param_8,float param_9,
             undefined4 param_10,float param_11,undefined4 param_12,int param_13,undefined4 param_14
             ,undefined8 param_15,float param_16)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_388 [32];
  double local_368;
  undefined4 local_360;
  undefined8 *local_358;
  undefined1 local_350;
  undefined1 local_348;
  undefined8 local_340;
  double *local_338;
  undefined1 local_330;
  undefined8 *local_320;
  undefined8 local_318;
  longlong local_310;
  longlong local_308;
  int local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  longlong local_2e0;
  int local_2d8;
  double local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c0 [72];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined3 uStack_1dc;
  undefined8 local_1d8 [12];
  undefined1 local_178;
  double local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  float local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  puVar10 = (undefined8 *)FUN_146eab21e();
  uVar6 = DAT_14c9974a8;
  if (puVar10 == (undefined8 *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = 0xffffffff;
    if (0 < *(int *)(param_3 + 1)) {
      FUN_1446ddc76(&local_1e8,"Transform",1);
      cVar7 = FUN_140498cd4(param_1,local_1e8,uVar6);
      uVar6 = DAT_14c9974a8;
      if (cVar7 != '\0') {
        FUN_1446ddc76(&local_1f0,"Parent",1);
        cVar7 = FUN_140498cd4(param_1,local_1f0,uVar6);
        uVar6 = DAT_14c996af0;
        if (cVar7 != '\0') {
          FUN_1446ddc76(&local_1f8,"TransformIndex",1);
          cVar7 = FUN_140498cd4(param_1,local_1f8,uVar6);
          uVar6 = DAT_14c996af0;
          if (cVar7 != '\0') {
            FUN_1446ddc76(&local_200,"BoundingBox",1);
            cVar7 = FUN_140498cd4(param_1,local_200,uVar6);
            uVar6 = DAT_14c9974a8;
            if (cVar7 != '\0') {
              local_320 = param_4;
              FUN_1446ddc76(&local_208,"Transform",1);
              uVar11 = FUN_1497086fc(param_1,local_208,uVar6);
              uVar6 = DAT_14c9974a8;
              FUN_1446ddc76(&local_210,"Parent",1);
              local_318 = FUN_140619ac2(param_1,local_210,uVar6);
              uVar6 = DAT_14c996af0;
              FUN_1446ddc76(&local_218,"TransformIndex",1);
              local_310 = FUN_140619ac2(param_1,local_218,uVar6);
              uVar6 = DAT_14c996af0;
              FUN_1446ddc76(&local_220,"BoundingBox",1);
              plVar12 = (longlong *)FUN_1429fcaca(param_1,local_220,uVar6);
              local_238 = 0;
              uStack_230 = 0;
              FUN_140517ae0(uVar11,local_318,&local_238);
              bVar19 = true;
              uVar9 = 0;
              uVar24 = 0;
              if ((int)uStack_230 < 1) {
                uVar35 = 0;
                uVar36 = 0;
                uVar26 = 0;
                uVar27 = 0;
                uVar32 = 0;
                uVar33 = 0;
                uVar29 = 0;
                uVar30 = 0;
                uVar22 = 0;
                uVar23 = 0;
              }
              else {
                iVar8 = (**(code **)(*plVar12 + 0x60))(plVar12);
                uVar35 = 0;
                uVar36 = 0;
                uVar26 = 0;
                uVar27 = 0;
                uVar32 = 0;
                uVar33 = 0;
                uVar29 = 0;
                uVar30 = 0;
                uVar22 = 0;
                uVar23 = 0;
                if (0 < iVar8) {
                  lVar14 = 0;
                  lVar15 = 0;
                  cVar7 = '\0';
                  uVar9 = 0;
                  uVar24 = 0;
                  do {
                    FUN_144b12ece(plVar12[2] + lVar14,&local_160,
                                  (longlong)*(int *)(*(longlong *)(local_310 + 0x10) + lVar15 * 4) *
                                  0x80 + local_238);
                    uVar25 = (undefined4)((ulonglong)local_160 >> 0x20);
                    uVar28 = (undefined4)((ulonglong)local_150 >> 0x20);
                    uVar34 = (undefined4)((ulonglong)dStack_148 >> 0x20);
                    uVar31 = (undefined4)((ulonglong)local_140 >> 0x20);
                    uVar18 = (undefined4)((ulonglong)dStack_138 >> 0x20);
                    if ((char)local_130 == '\0' || cVar7 == '\0') {
                      if ((char)local_130 != '\0') {
                        local_1e0._0_3_ = (undefined3)((uint)local_130 >> 8);
                        local_1e0._3_1_ = (undefined1)uStack_12c;
                        uStack_1dc = (undefined3)((uint)uStack_12c >> 8);
                        uVar22 = SUB84(dStack_138,0);
                        uVar23 = uVar18;
                        uVar9 = SUB84(local_160,0);
                        uVar24 = uVar25;
                        uVar26 = SUB84(local_150,0);
                        uVar27 = uVar28;
                        uVar29 = SUB84(local_140,0);
                        uVar30 = uVar31;
                        uVar32 = SUB84(dStack_148,0);
                        uVar33 = uVar34;
                        uVar35 = uStack_158;
                        uVar36 = uStack_154;
                        cVar7 = (char)local_130;
                      }
                    }
                    else {
                      if (local_160 <= (double)CONCAT44(uVar24,uVar9)) {
                        uVar9 = SUB84(local_160,0);
                        uVar24 = uVar25;
                      }
                      if ((double)CONCAT44(uStack_154,uStack_158) <= (double)CONCAT44(uVar36,uVar35)
                         ) {
                        uVar35 = uStack_158;
                        uVar36 = uStack_154;
                      }
                      if (local_150 <= (double)CONCAT44(uVar27,uVar26)) {
                        uVar26 = SUB84(local_150,0);
                        uVar27 = uVar28;
                      }
                      if ((double)CONCAT44(uVar33,uVar32) <= dStack_148) {
                        uVar32 = SUB84(dStack_148,0);
                        uVar33 = uVar34;
                      }
                      if ((double)CONCAT44(uVar30,uVar29) <= local_140) {
                        uVar29 = SUB84(local_140,0);
                        uVar30 = uVar31;
                      }
                      if ((double)CONCAT44(uVar23,uVar22) <= dStack_138) {
                        uVar22 = SUB84(dStack_138,0);
                        uVar23 = uVar18;
                      }
                    }
                    lVar15 = lVar15 + 1;
                    iVar8 = (**(code **)(*plVar12 + 0x60))(plVar12);
                    lVar14 = lVar14 + 0x38;
                  } while (lVar15 < iVar8);
                  bVar19 = cVar7 == '\0';
                }
              }
              dVar4 = (double)local_320[4];
              dVar5 = (double)local_320[5];
              dVar2 = (double)local_320[6];
              pdVar13 = (double *)*param_3;
              uVar18 = 0;
              if ((longlong)*(int *)(param_3 + 1) != 0) {
                pdVar1 = pdVar13 + (longlong)*(int *)(param_3 + 1) * 3;
                do {
                  *pdVar13 = *pdVar13 - dVar4;
                  pdVar13[1] = pdVar13[1] - dVar5;
                  pdVar13[2] = pdVar13[2] - dVar2;
                  pdVar13 = pdVar13 + 3;
                } while (pdVar13 != pdVar1);
                uVar18 = *(undefined4 *)(param_3 + 1);
                pdVar13 = (double *)*param_3;
              }
              local_278 = (double)CONCAT44(uVar24,uVar9);
              dStack_270 = (double)CONCAT44(uVar36,uVar35);
              local_268 = (double)CONCAT44(uVar27,uVar26);
              dStack_260 = (double)CONCAT44(uVar33,uVar32);
              local_258 = (double)CONCAT44(uVar30,uVar29);
              dStack_250 = (double)CONCAT44(uVar23,uVar22);
              local_248._0_5_ = CONCAT41(local_1e0,(undefined1)local_248);
              local_248 = CONCAT44(CONCAT31(uStack_1dc,local_1e0._3_1_),(undefined4)local_248);
              FUN_144b0bd4e(&local_160,pdVar13,uVar18);
              if ((bool)(bVar19 | (char)local_130 == '\0')) {
                if ((char)local_130 != '\0') {
                  local_248 = CONCAT44(uStack_12c,local_130);
                  dStack_270 = (double)CONCAT44(uStack_154,uStack_158);
                  local_258 = local_140;
                  dStack_250 = dStack_138;
                  local_268 = local_150;
                  dStack_260 = dStack_148;
                  local_278 = local_160;
                }
              }
              else {
                if (local_160 <= (double)CONCAT44(uVar24,uVar9)) {
                  uVar9 = SUB84(local_160,0);
                  uVar24 = (undefined4)((ulonglong)local_160 >> 0x20);
                }
                local_278 = (double)CONCAT44(uVar24,uVar9);
                if ((double)CONCAT44(uStack_154,uStack_158) <= (double)CONCAT44(uVar36,uVar35)) {
                  uVar35 = uStack_158;
                  uVar36 = uStack_154;
                }
                dStack_270 = (double)CONCAT44(uVar36,uVar35);
                if (local_150 <= (double)CONCAT44(uVar27,uVar26)) {
                  uVar26 = SUB84(local_150,0);
                  uVar27 = (undefined4)((ulonglong)local_150 >> 0x20);
                }
                if ((double)CONCAT44(uVar33,uVar32) <= dStack_148) {
                  uVar32 = SUB84(dStack_148,0);
                  uVar33 = (undefined4)((ulonglong)dStack_148 >> 0x20);
                }
                local_268 = (double)CONCAT44(uVar27,uVar26);
                dStack_260 = (double)CONCAT44(uVar33,uVar32);
                if ((double)CONCAT44(uVar30,uVar29) <= local_140) {
                  uVar29 = SUB84(local_140,0);
                  uVar30 = (undefined4)((ulonglong)local_140 >> 0x20);
                }
                local_258 = (double)CONCAT44(uVar30,uVar29);
                if ((double)CONCAT44(uVar23,uVar22) <= dStack_138) {
                  uVar22 = SUB84(dStack_138,0);
                  uVar23 = (undefined4)((ulonglong)dStack_138 >> 0x20);
                }
                dStack_250 = (double)CONCAT44(uVar23,uVar22);
              }
              fVar20 = param_8;
              fVar21 = param_9;
              iVar8 = param_13;
              if (0 < param_13) {
                do {
                  fVar20 = fVar20 + ABS(fVar21);
                  iVar8 = iVar8 + -1;
                  fVar21 = fVar21 * param_11;
                } while (iVar8 != 0);
              }
              dVar3 = (double)(fVar20 + 0.0001);
              dStack_250 = dStack_250 + dVar3;
              local_258 = local_258 + dVar3;
              dStack_260 = dStack_260 + dVar3;
              local_268 = local_268 - dVar3;
              dStack_270 = dStack_270 - dVar3;
              local_278 = local_278 - dVar3;
              local_248 = CONCAT71(local_248._1_7_,1);
              local_160 = *param_3;
              uStack_158 = *(undefined4 *)(param_3 + 1);
              local_368 = 9.999999747378752e-05;
              FUN_146c942b4(local_2c0,&local_160,&local_278,0x3fb99999a0000000);
              local_2d0 = *param_3;
              local_2c8 = *(undefined4 *)(param_3 + 1);
              FUN_148493f1a(&local_160);
              local_10c = param_9;
              local_108 = param_10;
              local_104 = param_13;
              local_100 = param_14;
              local_fc = param_12;
              local_f8 = param_11;
              local_f4 = 1;
              FUN_144604eb5(param_2,param_5,param_6);
              FUN_146fd58e4(param_2,&local_2e0);
              iVar8 = FUN_1401f66f6(param_1,DAT_14c9974a8);
              if ((longlong)local_2d8 != 0) {
                lVar14 = 0;
                uVar9 = 0xffffffff;
                do {
                  if ((*(int *)(local_2e0 + lVar14) < 0) || (iVar8 <= *(int *)(local_2e0 + lVar14)))
                  goto LAB_1497090aa;
                  lVar14 = lVar14 + 4;
                } while ((longlong)local_2d8 * 4 - lVar14 != 0);
              }
              local_338 = &local_2f8;
              local_358 = local_1d8;
              puVar16 = local_320;
              puVar17 = local_358;
              for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
                *puVar17 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar17 = puVar17 + 1;
              }
              local_178 = 1;
              local_368 = (double)param_16;
              local_308 = local_2e0;
              local_300 = local_2d8;
              local_330 = param_7;
              local_348 = 1;
              local_350 = 1;
              local_360 = param_5;
              local_340 = 0;
              local_2f8 = dVar4;
              dStack_2f0 = dVar5;
              local_2e8 = dVar2;
              uVar9 = FUN_14849583b(&local_160,puVar10,&local_308,(double)param_8);
              FUN_146ecd102(param_1,puVar10);
LAB_1497090aa:
              if (local_2e0 != 0) {
                FUN_1400020a8(local_2e0);
              }
              FUN_148490186(&local_160);
              FUN_146c942a2(local_2c0);
              if (local_238 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
    }
    (**(code **)*puVar10)(puVar10,1);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149709118 FUN_149709118 body=1849 status=ok
// SIG undefined FUN_149709118(void)

undefined4
FUN_149709118(undefined8 param_1,longlong param_2,double *param_3,undefined8 *param_4,int param_5,
             uint param_6,undefined8 param_7,undefined1 param_8,float param_9,float param_10,
             undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
             undefined4 param_15,undefined8 param_16,float param_17)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_268 [32];
  double local_248;
  double local_240;
  uint local_238;
  undefined8 *local_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_208;
  undefined8 *local_200;
  longlong local_1f8;
  undefined8 *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  int local_1c0;
  longlong local_1b8;
  int local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188 [12];
  undefined1 local_128;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  puVar24 = (undefined8 *)FUN_146eab21e();
  uVar21 = 0xffffffff;
  if (puVar24 != (undefined8 *)0x0) {
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1f0 = param_4;
    if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_5);
    }
    if (param_5 != 0) {
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar4 = param_3[2];
      dVar5 = param_3[3];
      dVar6 = param_3[4];
      dVar7 = param_3[5];
      local_208 = param_1;
      local_200 = puVar24;
      local_1f8 = param_2;
      FUN_1401a2688(&local_1a8,param_5);
      uVar23 = param_6;
      do {
        local_110 = (double)(((float)(uVar23 * 0x77a73631 + 0xf6ff3a94 >> 9 | 0x3f800000) + -1.0) *
                            360.0);
        uVar30 = uVar23 * -0x32d83db + 0x44a0d40f;
        local_118 = (double)(((float)(uVar30 >> 9 | 0x3f800000) + -1.0) * 360.0);
        local_108 = 0;
        FUN_144a7484c(&local_118,local_188);
        uVar19 = local_188[3];
        uVar18 = local_188[2];
        uVar17 = local_188[1];
        uVar16 = local_188[0];
        uVar15 = uStack_1a0;
        lVar28 = (longlong)(int)uStack_1a0;
        uVar22 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar22);
        if (uStack_1a0._4_4_ < uVar22) {
          FUN_144a2c682(&local_1a8,uVar15 & 0xffffffff);
        }
        lVar14 = local_1a8;
        param_2 = local_1f8;
        puVar24 = local_200;
        param_1 = local_208;
        lVar28 = lVar28 * 0x60;
        *(undefined8 *)(local_1a8 + lVar28) = uVar16;
        ((undefined8 *)(local_1a8 + lVar28))[1] = uVar17;
        puVar25 = (undefined8 *)(local_1a8 + 0x10 + lVar28);
        *puVar25 = uVar18;
        puVar25[1] = uVar19;
        pdVar1 = (double *)(local_1a8 + 0x20 + lVar28);
        *pdVar1 = (double)((float)(uVar23 * 0x1c3c718d + 0xf50d3da5 >> 9 | 0x3f800000) + -1.0) *
                  (dVar5 - dVar2) + dVar2;
        pdVar1[1] = (double)((float)(uVar23 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000) + -1.0) *
                    (dVar6 - dVar3) + dVar3;
        pdVar1 = (double *)(local_1a8 + 0x30 + lVar28);
        *pdVar1 = (double)((float)(uVar23 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0) *
                  (dVar7 - dVar4) + dVar4;
        pdVar1[1] = 0.0;
        puVar25 = (undefined8 *)(local_1a8 + 0x40 + lVar28);
        *puVar25 = 0x3ff0000000000000;
        puVar25[1] = 0x3ff0000000000000;
        puVar25 = (undefined8 *)(local_1a8 + 0x50 + lVar28);
        *puVar25 = 0x3ff0000000000000;
        puVar25[1] = 0;
        param_5 = param_5 + -1;
        uVar23 = uVar30;
      } while (param_5 != 0);
      lVar28 = (longlong)(int)uStack_1a0;
      if (lVar28 != 0) {
        lVar29 = 0;
        uVar21 = 0;
        uVar32 = 0;
        uVar33 = 0;
        uVar34 = 0x3ff00000;
        local_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0x3ff00000;
        do {
          uVar15 = uStack_190;
          pdVar1 = (double *)(lVar14 + 0x18 + lVar29);
          dVar3 = *pdVar1;
          dVar2 = *pdVar1;
          dVar9 = *(double *)(lVar14 + lVar29);
          dVar10 = ((double *)(lVar14 + lVar29))[1];
          dVar11 = *(double *)(lVar14 + 0x10 + lVar29);
          pdVar1 = (double *)(lVar14 + 0x20 + lVar29);
          dVar12 = *pdVar1;
          dVar13 = pdVar1[1];
          dVar5 = dVar9 * (double)CONCAT44(uVar32,uVar21) - dVar10 * 0.0;
          dVar7 = dVar10 * (double)CONCAT44(uVar34,uVar33) - dVar11 * 0.0;
          dVar31 = dVar9 * -1.0 + dVar11 * 0.0;
          dVar7 = dVar7 + dVar7;
          dVar31 = dVar31 + dVar31;
          dVar5 = dVar5 + dVar5;
          dVar6 = dVar3 * dVar5 + 1.0 + (dVar31 * dVar9 - dVar10 * dVar7);
          dVar4 = *(double *)(lVar14 + 0x30 + lVar29);
          lVar26 = (longlong)(int)uStack_190;
          uVar23 = (int)uStack_190 + 1;
          uStack_190 = CONCAT44(uStack_190._4_4_,uVar23);
          if (uStack_190._4_4_ < uVar23) {
            FUN_146bfae70(&local_198,uVar15 & 0xffffffff);
            uVar21 = local_1e8;
            uVar32 = uStack_1e4;
            uVar33 = uStack_1e0;
            uVar34 = uStack_1dc;
          }
          dVar3 = (dVar5 * dVar10 - dVar11 * dVar31) + dVar3 * dVar7 + 0.0;
          dVar2 = (dVar11 * dVar7 - dVar9 * dVar5) + dVar2 * dVar31 + 0.0;
          lVar26 = lVar26 * 0x20;
          auVar8._8_4_ = SUB84(dVar2,0);
          auVar8._0_8_ = dVar3;
          auVar8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          *(undefined1 (*) [16])(local_198 + lVar26) = auVar8;
          *(double *)(local_198 + 0x10 + lVar26) = dVar6;
          *(double *)(local_198 + 0x18 + lVar26) = dVar4 * dVar6 + dVar12 * dVar3 + dVar13 * dVar2;
          lVar29 = lVar29 + 0x60;
        } while (lVar28 * 0x60 != lVar29);
      }
    }
    local_118 = (double)CONCAT35((int3)((ulonglong)local_118 >> 0x28),0x100000000);
    local_f4 = 0.0 < param_10;
    if ((bool)local_f4) {
      local_108 = CONCAT44(param_14,param_11);
      local_100 = param_15;
      local_fc = param_13;
      local_f8 = param_12;
      local_110._4_4_ = param_10;
    }
    local_110 = (double)CONCAT44(local_110._4_4_,0x3f800000);
    FUN_144604eb5(param_2,param_6);
    FUN_146fd58e4(param_2,&local_1b8);
    iVar20 = FUN_1401f66f6(param_1,DAT_14c9974a8);
    if ((longlong)local_1b0 != 0) {
      lVar28 = 0;
      uVar21 = 0xffffffff;
      do {
        if ((*(int *)(local_1b8 + lVar28) < 0) || (iVar20 <= *(int *)(local_1b8 + lVar28)))
        goto LAB_14970945a;
        lVar28 = lVar28 + 4;
      } while ((longlong)local_1b0 * 4 - lVar28 != 0);
    }
    local_230 = local_188;
    puVar25 = local_1f0;
    puVar27 = local_230;
    for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
      *puVar27 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar27 = puVar27 + 1;
    }
    local_128 = 1;
    local_240 = (double)param_17;
    local_248 = (double)param_9;
    local_1c8 = local_1b8;
    local_1c0 = local_1b0;
    local_1d8 = local_198;
    local_1d0 = (int)uStack_190;
    local_218 = param_8;
    local_228 = 1;
    local_238 = param_6;
    local_220 = 0;
    uVar21 = FUN_1484962b6(&local_1d8,&local_118,puVar24);
    FUN_146ecd102(param_1,puVar24);
LAB_14970945a:
    if (local_1b8 != 0) {
      FUN_1400020a8(local_1b8);
    }
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    (**(code **)*puVar24)(puVar24,1);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21;
}



// FUNCTION 149709854 FUN_149709854 body=3710 status=ok
// SIG undefined FUN_149709854(void)

void FUN_149709854(longlong *param_1,double *param_2,int param_3,int param_4,int param_5,
                  uint param_6,float param_7,float param_8)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_208 [32];
  double local_1e8;
  float local_1dc;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar13 = param_4 * param_3 * param_5;
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  local_118 = param_2[2];
  local_1b0 = param_2[5];
  local_1e8 = local_118 + local_1b0;
  dVar16 = *param_2;
  local_1c0 = param_2[1];
  local_158 = param_2[4];
  local_1d0 = local_1c0 + local_158;
  dVar3 = param_2[3];
  if (*(int *)((longlong)param_1 + 0xc) < iVar13) {
    FUN_1401a2688(param_1);
  }
  local_1d8 = dVar16 + dVar3;
  local_1e8 = local_1e8 * 0.5;
  local_1d0 = local_1d0 * 0.5;
  local_f8 = param_6;
  local_f4 = param_6;
  local_1dc = param_7 * 0.017453292;
  local_1c8 = (double)param_8;
  if (0 < param_3) {
    local_128 = (dVar3 - dVar16) / (double)(param_3 + 1);
    local_138 = local_1e8 + 0.0;
    local_148 = local_1d0 + 0.0;
    local_1b8 = (double)local_1dc;
    dVar16 = 0.0;
    do {
      dVar19 = local_128 * dVar16 + local_128;
      dVar3 = *param_2;
      local_168 = dVar16;
      FUN_1477ee866(&local_f8,&local_110);
      dVar15 = local_1b8;
      dVar21 = DAT_14c846290;
      dVar18 = (double)((float)(local_f4 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0);
      local_178 = local_100 * dVar18;
      uStack_170 = 0;
      dVar8 = local_108 * dVar18;
      dVar18 = dVar18 * local_110;
      local_198 = DAT_14c846298;
      uStack_190 = 0;
      local_188 = DAT_14c8462a0;
      uStack_180 = 0;
      local_f4 = local_f4 * -0x4b9b4d07 + 0x9d6f2492;
      dVar16 = ((double)((float)(local_f4 >> 9 | 0x3f800000) + -1.0) * local_1b8 + 0.0) * 0.5;
      dVar14 = sin(dVar16);
      local_1a8 = cos(dVar16);
      dVar20 = DAT_14c8462e8;
      dVar7 = DAT_14c8462e0;
      dVar17 = DAT_14c8462d8;
      local_f4 = local_f4 * 0xbb38435 + 0x3619636b;
      dVar16 = ((double)((float)(local_f4 >> 9 | 0x3f800000) + -1.0) * dVar15 + 0.0) * 0.5;
      dStack_1a0 = extraout_XMM0_Qb;
      dVar15 = sin(dVar16);
      dVar16 = cos(dVar16);
      iVar13 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar13 + 1U) {
        FUN_144a2c682(param_1,iVar13);
      }
      dVar9 = dVar8 * local_1c8 + local_148;
      dVar5 = dVar21 * dVar14;
      dVar22 = local_198 * dVar14;
      dVar14 = local_188 * dVar14;
      dVar17 = dVar17 * dVar15;
      dVar7 = dVar7 * dVar15;
      dVar20 = dVar20 * dVar15;
      dVar21 = dVar21 * 0.7071067966408575;
      dVar15 = dVar7 * dVar14 * -1.0 + dVar20 * dVar22 + dVar5 * dVar16 * 1.0 + local_1a8 * dVar17;
      dVar23 = dVar17 * dVar14 * 1.0 + dVar16 * dVar22 + dVar5 * dVar20 * -1.0 + local_1a8 * dVar7;
      dVar8 = dVar16 * dVar14 * 1.0 + ((dVar5 * dVar7 * 1.0 + local_1a8 * dVar20) - dVar17 * dVar22)
      ;
      dVar16 = dVar20 * dVar14 * -1.0 +
               ((dVar5 * dVar17 * -1.0 + local_1a8 * dVar16) - dVar7 * dVar22);
      dVar14 = local_198 * 0.7071067966408575;
      dVar17 = local_188 * 0.7071067966408575;
      lVar4 = *param_1;
      lVar12 = (longlong)iVar13 * 0x60;
      *(double *)(lVar4 + lVar12) =
           dVar23 * dVar17 * -1.0 +
           dVar8 * dVar14 + dVar21 * dVar16 * 1.0 + dVar15 * 0.7071067657322372;
      ((double *)(lVar4 + lVar12))[1] =
           dVar15 * dVar17 * 1.0 +
           dVar16 * dVar14 + dVar21 * dVar8 * -1.0 + dVar23 * 0.7071067657322372;
      pdVar1 = (double *)(lVar4 + 0x10 + lVar12);
      *pdVar1 = dVar16 * dVar17 * 1.0 +
                ((dVar21 * dVar23 * 1.0 + dVar8 * 0.7071067657322372) - dVar15 * dVar14);
      pdVar1[1] = dVar8 * dVar17 * -1.0 +
                  ((dVar21 * dVar15 * -1.0 + dVar16 * 0.7071067657322372) - dVar23 * dVar14);
      auVar6._8_4_ = SUB84(dVar9,0);
      auVar6._0_8_ = dVar19 + dVar3 + dVar18 * local_1c8;
      auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + 0x20 + lVar12) = auVar6;
      pdVar1 = (double *)(lVar4 + 0x30 + lVar12);
      *pdVar1 = local_178 * local_1c8 + local_138;
      pdVar1[1] = 0.0;
      puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar12);
      *puVar2 = 0x3ff0000000000000;
      puVar2[1] = 0x3ff0000000000000;
      puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar12);
      *puVar2 = 0x3ff0000000000000;
      puVar2[1] = 0;
      dVar16 = local_168 + 1.0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  local_1d8 = local_1d8 * 0.5;
  if (0 < param_4) {
    local_158 = (local_158 - local_1c0) / (double)(param_4 + 1);
    dVar16 = 0.0;
    local_1e8 = local_1e8 + 0.0;
    local_1b8 = local_1d8 + 0.0;
    local_1c0 = (double)local_1dc;
    do {
      dVar17 = local_158 * dVar16 + local_158;
      dVar3 = param_2[1];
      local_168 = dVar16;
      FUN_1477ee866(&local_f8,&local_110);
      dVar15 = local_1c0;
      dVar7 = DAT_14c846290;
      dVar21 = (double)((float)(local_f4 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0);
      local_138 = local_100 * dVar21;
      uStack_130 = 0;
      dVar19 = local_108 * dVar21;
      dVar21 = dVar21 * local_110;
      local_198 = DAT_14c8462d8 * 0.7071067966408575;
      uStack_190 = 0;
      local_188 = DAT_14c8462e0 * 0.7071067966408575;
      uStack_180 = 0;
      local_178 = DAT_14c8462e8 * 0.7071067966408575;
      uStack_170 = 0;
      local_f4 = local_f4 * -0x4b9b4d07 + 0x9d6f2492;
      local_128 = DAT_14c846298;
      uStack_120 = 0;
      local_1a8 = DAT_14c8462a0;
      dStack_1a0 = 0.0;
      dVar16 = ((double)((float)(local_f4 >> 9 | 0x3f800000) + -1.0) * local_1c0 + 0.0) * 0.5;
      dVar18 = sin(dVar16);
      local_148 = cos(dVar16);
      dVar20 = DAT_14c8462e8;
      dVar8 = DAT_14c8462e0;
      dVar14 = DAT_14c8462d8;
      local_f4 = local_f4 * 0xbb38435 + 0x3619636b;
      dVar16 = ((double)((float)(local_f4 >> 9 | 0x3f800000) + -1.0) * dVar15 + 0.0) * 0.5;
      dVar15 = sin(dVar16);
      dVar16 = cos(dVar16);
      iVar13 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar13 + 1U) {
        FUN_144a2c682(param_1,iVar13);
      }
      dVar19 = dVar17 + dVar3 + dVar19 * local_1c8;
      dVar7 = dVar7 * dVar18;
      dVar17 = local_128 * dVar18;
      dVar18 = local_1a8 * dVar18;
      dVar14 = dVar14 * dVar15;
      dVar8 = dVar8 * dVar15;
      dVar20 = dVar20 * dVar15;
      dVar15 = dVar8 * dVar18 * -1.0 + dVar20 * dVar17 + dVar7 * dVar16 * 1.0 + local_148 * dVar14;
      dVar5 = dVar14 * dVar18 * 1.0 + dVar16 * dVar17 + dVar7 * dVar20 * -1.0 + local_148 * dVar8;
      dVar3 = dVar16 * dVar18 * 1.0 + ((dVar7 * dVar8 * 1.0 + local_148 * dVar20) - dVar14 * dVar17)
      ;
      dVar16 = dVar20 * dVar18 * -1.0 +
               ((dVar7 * dVar14 * -1.0 + local_148 * dVar16) - dVar8 * dVar17);
      lVar4 = *param_1;
      lVar12 = (longlong)iVar13 * 0x60;
      *(double *)(lVar4 + lVar12) =
           dVar5 * local_178 * -1.0 +
           dVar3 * local_188 + local_198 * dVar16 * 1.0 + dVar15 * 0.7071067657322372;
      ((double *)(lVar4 + lVar12))[1] =
           dVar15 * local_178 * 1.0 +
           dVar16 * local_188 + local_198 * dVar3 * -1.0 + dVar5 * 0.7071067657322372;
      pdVar1 = (double *)(lVar4 + 0x10 + lVar12);
      *pdVar1 = dVar16 * local_178 * 1.0 +
                ((local_198 * dVar5 * 1.0 + dVar3 * 0.7071067657322372) - dVar15 * local_188);
      pdVar1[1] = dVar3 * local_178 * -1.0 +
                  ((local_198 * dVar15 * -1.0 + dVar16 * 0.7071067657322372) - dVar5 * local_188);
      auVar10._8_4_ = SUB84(dVar19,0);
      auVar10._0_8_ = dVar21 * local_1c8 + local_1b8;
      auVar10._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + 0x20 + lVar12) = auVar10;
      pdVar1 = (double *)(lVar4 + 0x30 + lVar12);
      *pdVar1 = local_138 * local_1c8 + local_1e8;
      pdVar1[1] = 0.0;
      puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar12);
      *puVar2 = 0x3ff0000000000000;
      puVar2[1] = 0x3ff0000000000000;
      puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar12);
      *puVar2 = 0x3ff0000000000000;
      puVar2[1] = 0;
      dVar16 = local_168 + 1.0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if (0 < param_5) {
    local_1b0 = (local_1b0 - local_118) / (double)(param_5 + 1);
    dVar16 = 0.0;
    local_1d0 = local_1d0 + 0.0;
    local_1d8 = local_1d8 + 0.0;
    local_198 = (double)local_1dc;
    local_1a8 = 1.0;
    dStack_1a0 = -1.0;
    do {
      dVar7 = local_1b0 * dVar16 + local_1b0;
      dVar3 = param_2[2];
      local_1e8 = dVar16;
      FUN_1477ee866(&local_f8,&local_110);
      dVar15 = local_198;
      dVar21 = (double)((float)(local_f4 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0);
      dVar17 = local_100 * dVar21;
      dVar8 = local_108 * dVar21;
      dVar21 = dVar21 * local_110;
      local_f4 = local_f4 * -0x4b9b4d07 + 0x9d6f2492;
      local_178 = DAT_14c846290;
      uStack_170 = 0;
      local_168 = DAT_14c846298;
      uStack_160 = 0;
      local_158 = DAT_14c8462a0;
      uStack_150 = 0;
      dVar16 = ((double)((float)(local_f4 >> 9 | 0x3f800000) + -1.0) * local_198 + 0.0) * 0.5;
      dVar18 = sin(dVar16);
      local_188 = cos(dVar16);
      dVar14 = DAT_14c8462e8;
      dVar20 = DAT_14c8462e0;
      dVar19 = DAT_14c8462d8;
      local_f4 = local_f4 * 0xbb38435 + 0x3619636b;
      dVar16 = ((double)((float)(local_f4 >> 9 | 0x3f800000) + -1.0) * dVar15 + 0.0) * 0.5;
      uStack_180 = extraout_XMM0_Qb_00;
      dVar15 = sin(dVar16);
      dVar16 = cos(dVar16);
      iVar13 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar13 + 1U) {
        FUN_144a2c682(param_1,iVar13);
      }
      dVar5 = dVar8 * local_1c8 + local_1d0;
      dVar22 = local_178 * dVar18;
      dVar23 = local_168 * dVar18;
      dVar18 = local_158 * dVar18;
      dVar19 = dVar19 * dVar15;
      dVar20 = dVar20 * dVar15;
      dVar14 = dVar14 * dVar15;
      dVar15 = dVar20 * dVar18 * -1.0 + dVar14 * dVar23 + dVar22 * dVar16 * 1.0 + local_188 * dVar19
      ;
      dVar9 = dVar19 * dVar18 * 1.0 + dVar16 * dVar23 + dVar22 * dVar14 * -1.0 + local_188 * dVar20;
      dVar8 = dVar16 * dVar18 * 1.0 +
              ((dVar22 * dVar20 * 1.0 + local_188 * dVar14) - dVar19 * dVar23);
      dVar16 = dVar14 * dVar18 * -1.0 +
               ((dVar22 * dVar19 * -1.0 + local_188 * dVar16) - dVar20 * dVar23);
      dVar19 = dVar8 * 0.0;
      dVar18 = dVar16 * 0.0;
      dVar14 = dVar15 * 0.0;
      dVar20 = dVar9 * 0.0;
      dVar23 = dVar18 * local_1a8;
      dVar22 = dVar19 * dStack_1a0;
      lVar4 = *param_1;
      lVar12 = (longlong)iVar13 * 0x60;
      *(double *)(lVar4 + lVar12) = dVar20 * -1.0 + dVar15 + dVar23 + dVar19;
      ((double *)(lVar4 + lVar12))[1] = dVar14 * 1.0 + dVar9 + dVar22 + dVar18;
      pdVar1 = (double *)(lVar4 + 0x10 + lVar12);
      *pdVar1 = ((dVar20 * 1.0 + dVar8) - dVar14) + dVar23;
      pdVar1[1] = ((dVar14 * -1.0 + dVar16) - dVar20) + dVar22;
      auVar11._8_4_ = SUB84(dVar5,0);
      auVar11._0_8_ = dVar21 * local_1c8 + local_1d8;
      auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(lVar4 + 0x20 + lVar12) = auVar11;
      pdVar1 = (double *)(lVar4 + 0x30 + lVar12);
      *pdVar1 = dVar7 + dVar3 + dVar17 * local_1c8;
      pdVar1[1] = 0.0;
      puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar12);
      *puVar2 = 0x3ff0000000000000;
      puVar2[1] = 0x3ff0000000000000;
      puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar12);
      *puVar2 = 0x3ff0000000000000;
      puVar2[1] = 0;
      dVar16 = local_1e8 + 1.0;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970a6d4 FUN_14970a6d4 body=1521 status=ok
// SIG undefined FUN_14970a6d4(void)

undefined4
FUN_14970a6d4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined1 param_11,float param_12,
             float param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,float param_20)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_248 [32];
  double local_228;
  double local_220;
  undefined4 local_218;
  undefined8 *local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  int local_1c0;
  longlong local_1b8;
  int local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  ulonglong uStack_190;
  undefined8 local_188 [12];
  undefined1 local_128;
  undefined4 local_118;
  undefined1 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  ulonglong local_f0;
  double dVar3;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  puVar20 = (undefined8 *)FUN_146eab21e();
  uVar18 = 0xffffffff;
  if (puVar20 != (undefined8 *)0x0) {
    local_198 = 0;
    uStack_190 = 0;
    local_210 = (undefined8 *)CONCAT44(local_210._4_4_,param_8);
    local_218 = param_7;
    local_220 = (double)CONCAT44(local_220._4_4_,param_9);
    local_228 = (double)CONCAT44(local_228._4_4_,param_6);
    FUN_149709854(&local_198,param_3,param_4,param_5);
    local_1a8 = 0;
    uStack_1a0 = 0;
    if ((int)uStack_190 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_190 & 0xffffffff);
    }
    if ((uStack_190 & 0xffffffff) != 0) {
      FUN_1484a950e(&local_1a8);
      lVar26 = local_198;
      lVar21 = (longlong)(int)uStack_190;
      if (lVar21 != 0) {
        lVar22 = 0;
        uVar18 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0x3ff00000;
        local_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0x3ff00000;
        do {
          uVar15 = uStack_1a0;
          pdVar1 = (double *)(lVar26 + 0x18 + lVar22);
          dVar2 = *pdVar1;
          dVar3 = *pdVar1;
          dVar9 = *(double *)(lVar26 + lVar22);
          dVar10 = ((double *)(lVar26 + lVar22))[1];
          dVar11 = *(double *)(lVar26 + 0x10 + lVar22);
          pdVar1 = (double *)(lVar26 + 0x20 + lVar22);
          dVar12 = *pdVar1;
          dVar13 = pdVar1[1];
          dVar6 = dVar9 * (double)CONCAT44(uVar28,uVar18) - dVar10 * 0.0;
          dVar7 = dVar10 * (double)CONCAT44(uVar30,uVar29) - dVar11 * 0.0;
          dVar27 = dVar9 * -1.0 + dVar11 * 0.0;
          dVar7 = dVar7 + dVar7;
          dVar27 = dVar27 + dVar27;
          dVar6 = dVar6 + dVar6;
          dVar5 = dVar2 * dVar6 + 1.0 + (dVar27 * dVar9 - dVar10 * dVar7);
          dVar4 = *(double *)(lVar26 + 0x30 + lVar22);
          lVar25 = (longlong)(int)uStack_1a0;
          uVar19 = (int)uStack_1a0 + 1;
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
          if (uStack_1a0._4_4_ < uVar19) {
            FUN_146bfae70(&local_1a8,uVar15 & 0xffffffff);
            uVar18 = local_1e8;
            uVar28 = uStack_1e4;
            uVar29 = uStack_1e0;
            uVar30 = uStack_1dc;
          }
          dVar2 = (dVar6 * dVar10 - dVar11 * dVar27) + dVar2 * dVar7 + 0.0;
          dVar3 = (dVar11 * dVar7 - dVar9 * dVar6) + dVar3 * dVar27 + 0.0;
          lVar25 = lVar25 * 0x20;
          auVar8._8_4_ = SUB84(dVar3,0);
          auVar8._0_8_ = dVar2;
          auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          *(undefined1 (*) [16])(local_1a8 + lVar25) = auVar8;
          *(double *)(local_1a8 + 0x10 + lVar25) = dVar5;
          *(double *)(local_1a8 + 0x18 + lVar25) = dVar4 * dVar5 + dVar12 * dVar2 + dVar13 * dVar3;
          lVar22 = lVar22 + 0x60;
        } while (lVar21 * 0x60 != lVar22);
      }
    }
    local_118 = 0;
    local_114 = 1;
    local_110 = 0x3f800000;
    local_f4 = 0.0 < param_13;
    if ((bool)local_f4) {
      local_10c = param_13;
      local_108 = param_14;
      local_104 = param_17;
      local_100 = param_18;
      local_fc = param_16;
      local_f8 = param_15;
    }
    FUN_144604eb5(param_2,param_9,param_10);
    FUN_146fd58e4(param_2,&local_1b8);
    iVar17 = FUN_1401f66f6(param_1,DAT_14c9974a8);
    uVar14 = DAT_14c996af0;
    if ((longlong)local_1b0 != 0) {
      lVar26 = 0;
      uVar18 = 0xffffffff;
      do {
        if ((*(int *)(local_1b8 + lVar26) < 0) || (iVar17 <= *(int *)(local_1b8 + lVar26)))
        goto LAB_14970aaee;
        lVar26 = lVar26 + 4;
      } while ((longlong)local_1b0 * 4 != lVar26);
    }
    FUN_1446ddc76(local_188,"Proximity",1);
    cVar16 = FUN_140498cd4(puVar20,local_188[0],uVar14);
    uVar14 = DAT_14c996af0;
    if (cVar16 != '\0') {
      FUN_1446ddc76(&local_1c8,"Proximity",1);
      FUN_140498ea8(puVar20,local_1c8,uVar14);
    }
    puVar23 = &DAT_14c846480;
    puVar24 = local_188;
    for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
      *puVar24 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar24 = puVar24 + 1;
    }
    local_128 = 1;
    local_220 = (double)param_20;
    local_228 = (double)param_12;
    local_1c8 = local_1b8;
    local_1c0 = local_1b0;
    local_1d8 = local_1a8;
    local_1d0 = (int)uStack_1a0;
    local_1f8 = param_11;
    local_208 = 1;
    local_218 = param_9;
    local_200 = 0;
    local_210 = local_188;
    uVar18 = FUN_1484962b6(&local_1d8,&local_118,puVar20);
    FUN_146ecd102(param_1,puVar20);
LAB_14970aaee:
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    (**(code **)*puVar20)(puVar20,1);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 14970acc8 FUN_14970acc8 body=1449 status=ok
// SIG undefined FUN_14970acc8(void)

void FUN_14970acc8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[2];
  uVar3 = param_3[1];
  uVar4 = *param_2;
  local_78 = param_2[2];
  local_88 = *(undefined4 *)param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_78;
  *(undefined8 *)(lVar7 + lVar8) = CONCAT44(uStack_84,local_88);
  ((undefined8 *)(lVar7 + lVar8))[1] = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar2;
  uVar2 = param_3[2];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  local_78 = param_2[2];
  local_88 = *(undefined4 *)param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_78;
  puVar1 = (undefined4 *)(lVar7 + lVar8);
  *puVar1 = local_88;
  puVar1[1] = uStack_84;
  puVar1[2] = uStack_80;
  puVar1[3] = uStack_7c;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar2;
  uVar2 = *param_2;
  uVar3 = param_2[2];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar3;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar3;
  uVar2 = *param_3;
  uVar3 = param_3[2];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar3;
  uVar2 = param_2[2];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  local_78 = param_3[2];
  local_88 = *(undefined4 *)param_3;
  uStack_84 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_80 = *(undefined4 *)(param_3 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_78;
  *(undefined8 *)(lVar7 + lVar8) = CONCAT44(uStack_84,local_88);
  ((undefined8 *)(lVar7 + lVar8))[1] = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar2;
  uVar2 = param_3[2];
  uVar3 = param_2[1];
  uVar4 = *param_3;
  local_78 = param_3[2];
  local_88 = *(undefined4 *)param_3;
  uStack_84 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_80 = *(undefined4 *)(param_3 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_78;
  *(undefined8 *)(lVar7 + lVar8) = CONCAT44(uStack_84,local_88);
  ((undefined8 *)(lVar7 + lVar8))[1] = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  uVar4 = *param_3;
  local_78 = param_2[2];
  local_88 = *(undefined4 *)param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_78;
  puVar1 = (undefined4 *)(lVar7 + lVar8);
  *puVar1 = local_88;
  puVar1[1] = uStack_84;
  puVar1[2] = uStack_80;
  puVar1[3] = uStack_7c;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar2;
  uVar2 = *param_3;
  uVar3 = param_3[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar3;
  uVar2 = *param_2;
  uVar3 = param_2[2];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + lVar8) = uVar2;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x18 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 0x20 + lVar8) = uVar5;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uVar3;
  uVar2 = param_3[2];
  uVar3 = param_3[1];
  uVar4 = *param_2;
  local_78 = param_3[2];
  local_88 = *(undefined4 *)param_3;
  uStack_84 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_80 = *(undefined4 *)(param_3 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_146c94cea(param_1,iVar6);
  }
  lVar7 = *param_1;
  lVar8 = (longlong)iVar6 * 0x30;
  *(undefined8 *)(lVar7 + lVar8) = uVar4;
  *(undefined8 *)(lVar7 + 8 + lVar8) = uVar3;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = uVar2;
  puVar1 = (undefined4 *)(lVar7 + 0x18 + lVar8);
  *puVar1 = local_88;
  puVar1[1] = uStack_84;
  puVar1[2] = uStack_80;
  puVar1[3] = uStack_7c;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = local_78;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970b272 FUN_14970b272 body=3778 status=ok
// SIG undefined FUN_14970b272(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14970b272(double *param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  bool bVar18;
  longlong lVar19;
  byte bVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_238 [32];
  double *local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_190;
  undefined1 local_188 [16];
  double local_170;
  float local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_208 = param_1[5] - param_1[2];
  local_210 = param_1[4] - param_1[1];
  dVar33 = param_1[3] - *param_1;
  local_218 = &local_f8;
  local_f8 = dVar33;
  local_f0 = local_210;
  local_e8 = local_208;
  FUN_144604fd3(&local_110,param_4,param_3,param_6);
  local_1e8 = local_110;
  if ((local_110 == DAT_14c8464e0) && (!NAN(local_110) && !NAN(DAT_14c8464e0))) {
    if ((local_108 == DAT_14c8464e8) && (!NAN(local_108) && !NAN(DAT_14c8464e8))) {
      if ((local_100 == DAT_14c8464f0) && (!NAN(local_100) && !NAN(DAT_14c8464f0)))
      goto LAB_14970c0aa;
    }
  }
  iVar14 = FUN_1446051c0(&local_110,&local_f8);
  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar14) {
    FUN_1401a2688(param_2,iVar14);
  }
  local_1f0 = local_100;
  local_1c8 = local_100 * 0.5;
  uStack_1c0 = 0;
  local_1f8 = local_108;
  local_1b8 = local_108 * 0.5;
  uStack_1b0 = 0;
  local_1a8 = local_1e8 * 0.5;
  uStack_1a0 = 0;
  if ((byte)param_3 < 5) {
    local_1d8 = DAT_14c8462c0 * 0.7071080798594735;
    uStack_1d0 = DAT_14c8462c8 * 0.7071080798594735;
    auVar31._0_8_ = DAT_14c8462d0 * 0.7071080798594735;
    auVar31._8_8_ = 0;
    local_188 = blendpd(auVar31,_DAT_14be15700,2);
    switch(param_3 & 0xff) {
    case 0:
      if (0.0 <= local_210) {
        local_1d8 = (double)(float)local_1c8;
        bVar17 = 0;
        dVar36 = 0.0;
        do {
          if (local_1d8 <= local_208) {
            bVar20 = 0;
            dVar32 = local_1d8;
            do {
              if (0.0 <= dVar33) {
                dVar34 = 0.0;
                do {
                  dVar25 = dVar34;
                  if (!(bool)(bVar17 ^ bVar20)) {
                    dVar25 = local_1a8 + dVar34;
                  }
                  dVar24 = param_1[2];
                  dVar28 = param_1[1];
                  dVar37 = *param_1;
                  iVar14 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar14 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
                    FUN_144a2c682(param_2,iVar14);
                  }
                  lVar13 = *param_2;
                  lVar16 = (longlong)iVar14 * 0x60;
                  *(undefined8 *)(lVar13 + lVar16) = 0;
                  ((undefined8 *)(lVar13 + lVar16))[1] = 0;
                  puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar16);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0x3ff00000;
                  auVar5._8_4_ = SUB84(dVar28 + dVar36,0);
                  auVar5._0_8_ = dVar25 + dVar37;
                  auVar5._12_4_ = (int)((ulonglong)(dVar28 + dVar36) >> 0x20);
                  *(undefined1 (*) [16])(lVar13 + 0x20 + lVar16) = auVar5;
                  pdVar3 = (double *)(lVar13 + 0x30 + lVar16);
                  *pdVar3 = dVar24 + dVar32;
                  pdVar3[1] = 0.0;
                  puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0x3ff0000000000000;
                  puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0;
                  dVar34 = (double)(float)(dVar34 + local_1e8);
                } while (dVar34 <= dVar33);
              }
              bVar20 = bVar20 ^ 1;
              dVar32 = (double)(float)(dVar32 + local_1f0);
            } while (dVar32 <= local_208);
          }
          bVar17 = bVar17 ^ 1;
          dVar36 = (double)(float)(dVar36 + local_1f8);
        } while (dVar36 <= local_210);
      }
      break;
    case 1:
      if (0.0 <= local_210) {
        local_1d8 = (double)(float)local_1c8;
        bVar18 = false;
        dVar36 = 0.0;
        do {
          dVar32 = local_1d8;
          if (local_1d8 <= local_208) {
            do {
              if (0.0 <= dVar33) {
                dVar34 = 0.0;
                do {
                  dVar25 = dVar34;
                  if (!bVar18) {
                    dVar25 = local_1a8 + dVar34;
                  }
                  dVar24 = param_1[2];
                  dVar28 = param_1[1];
                  dVar37 = *param_1;
                  iVar14 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar14 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
                    FUN_144a2c682(param_2,iVar14);
                  }
                  lVar13 = *param_2;
                  lVar16 = (longlong)iVar14 * 0x60;
                  *(undefined8 *)(lVar13 + lVar16) = 0;
                  ((undefined8 *)(lVar13 + lVar16))[1] = 0;
                  puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar16);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1[2] = 0;
                  puVar1[3] = 0x3ff00000;
                  auVar4._8_4_ = SUB84(dVar28 + dVar36,0);
                  auVar4._0_8_ = dVar25 + dVar37;
                  auVar4._12_4_ = (int)((ulonglong)(dVar28 + dVar36) >> 0x20);
                  *(undefined1 (*) [16])(lVar13 + 0x20 + lVar16) = auVar4;
                  pdVar3 = (double *)(lVar13 + 0x30 + lVar16);
                  *pdVar3 = dVar24 + dVar32;
                  pdVar3[1] = 0.0;
                  puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0x3ff0000000000000;
                  puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0;
                  dVar34 = (double)(float)(dVar34 + local_1e8);
                } while (dVar34 <= dVar33);
              }
              dVar34 = dVar32 + local_1f0;
              dVar32 = (double)(float)dVar34;
            } while ((double)(float)dVar34 <= local_208);
          }
          bVar18 = (bool)(bVar18 ^ 1);
          dVar36 = (double)(float)(dVar36 + local_1f8);
        } while (dVar36 <= local_210);
      }
      break;
    case 2:
      if (0.0 <= local_210) {
        local_168 = (float)((local_1a8 - local_1b8) - local_1b8);
        local_158 = ZEXT416((uint)local_168);
        local_190 = (double)(float)local_1c8;
        local_168 = -local_168;
        uStack_164 = 0x80000000;
        uStack_160 = 0x80000000;
        uStack_15c = 0x80000000;
        fVar23 = 0.0;
        bVar18 = false;
        local_200 = 0.0;
        do {
          if (local_190 <= local_208) {
            fVar27 = (float)local_158._0_4_;
            if (!bVar18) {
              fVar27 = local_168;
            }
            dVar36 = local_1b8 + local_200;
            dVar32 = local_190;
            bVar21 = false;
            do {
              if ((bool)(bVar21 ^ 1U) || bVar18) {
                if (!bVar21 && 0.0 <= dVar33) {
                  dVar34 = 0.0;
                  do {
                    dVar25 = dVar34;
                    if (!bVar18) {
                      dVar25 = local_1a8 + dVar34;
                    }
                    dVar24 = param_1[2];
                    dVar28 = param_1[1];
                    dVar37 = *param_1;
                    iVar14 = (int)param_2[1];
                    *(uint *)(param_2 + 1) = iVar14 + 1U;
                    if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
                      FUN_144a2c682(param_2,iVar14);
                    }
                    lVar13 = *param_2;
                    lVar16 = (longlong)iVar14 * 0x60;
                    *(undefined1 (*) [16])(lVar13 + lVar16) = ZEXT816(0);
                    puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar16);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    puVar1[2] = 0;
                    puVar1[3] = 0x3ff00000;
                    pdVar3 = (double *)(lVar13 + 0x20 + lVar16);
                    *pdVar3 = dVar25 + dVar37;
                    pdVar3[1] = dVar28 + (double)(fVar23 + fVar27);
                    pdVar3 = (double *)(lVar13 + 0x30 + lVar16);
                    *pdVar3 = dVar24 + dVar32;
                    pdVar3[1] = 0.0;
                    puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar16);
                    *puVar2 = 0x3ff0000000000000;
                    puVar2[1] = 0x3ff0000000000000;
                    puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar16);
                    *puVar2 = 0x3ff0000000000000;
                    puVar2[1] = 0;
                    dVar34 = (double)(float)(dVar34 + local_1e8);
                  } while (dVar34 <= dVar33);
                }
              }
              else if (0.0 <= dVar33) {
                dVar34 = 0.0;
                do {
                  dVar25 = param_1[2];
                  dVar24 = param_1[1];
                  dVar28 = *param_1;
                  iVar14 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar14 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
                    FUN_144a2c682(param_2,iVar14);
                  }
                  lVar13 = *param_2;
                  lVar16 = (longlong)iVar14 * 0x60;
                  *(double *)(lVar13 + lVar16) = local_1d8;
                  ((double *)(lVar13 + lVar16))[1] = uStack_1d0;
                  puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar16);
                  *puVar1 = local_188._0_4_;
                  puVar1[1] = local_188._4_4_;
                  puVar1[2] = local_188._8_4_;
                  puVar1[3] = local_188._12_4_;
                  pdVar3 = (double *)(lVar13 + 0x20 + lVar16);
                  *pdVar3 = dVar28 + dVar34;
                  pdVar3[1] = dVar24 + dVar36;
                  pdVar3 = (double *)(lVar13 + 0x30 + lVar16);
                  *pdVar3 = dVar25 + dVar32;
                  pdVar3[1] = 0.0;
                  puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0x3ff0000000000000;
                  puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0;
                  dVar34 = (double)(float)(dVar34 + local_1f8);
                } while (dVar34 <= dVar33);
              }
              dVar32 = (double)(float)(dVar32 + local_1f0);
              bVar21 = (bool)(bVar21 ^ 1U);
            } while (dVar32 <= local_208);
          }
          fVar23 = (float)(local_200 + local_1f8);
          bVar18 = (bool)(bVar18 ^ 1);
          local_200 = (double)fVar23;
        } while (local_200 <= local_210);
      }
      break;
    case 3:
      if (0.0 <= local_210) {
        local_200 = (double)(float)local_1c8;
        bVar17 = 0;
        dVar36 = 0.0;
        do {
          if (local_200 <= local_208) {
            bVar20 = 0;
            dVar32 = local_200;
            do {
              if (0.0 <= dVar33) {
                dVar34 = 0.0;
                do {
                  dVar25 = dVar34;
                  if (!(bool)(bVar17 ^ bVar20)) {
                    dVar25 = local_1b8 + dVar34;
                  }
                  dVar24 = param_1[2];
                  dVar28 = param_1[1];
                  dVar37 = *param_1;
                  iVar14 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar14 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
                    FUN_144a2c682(param_2,iVar14);
                  }
                  lVar13 = *param_2;
                  lVar16 = (longlong)iVar14 * 0x60;
                  *(double *)(lVar13 + lVar16) = local_1d8;
                  ((double *)(lVar13 + lVar16))[1] = uStack_1d0;
                  puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar16);
                  *puVar2 = local_188._0_8_;
                  puVar2[1] = local_188._8_8_;
                  pdVar3 = (double *)(lVar13 + 0x20 + lVar16);
                  *pdVar3 = dVar25 + dVar37;
                  pdVar3[1] = dVar28 + dVar36;
                  pdVar3 = (double *)(lVar13 + 0x30 + lVar16);
                  *pdVar3 = dVar24 + dVar32;
                  pdVar3[1] = 0.0;
                  puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0x3ff0000000000000;
                  puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar16);
                  *puVar2 = 0x3ff0000000000000;
                  puVar2[1] = 0;
                  dVar34 = (double)(float)(dVar34 + local_1f8);
                } while (dVar34 <= dVar33);
              }
              bVar20 = bVar20 ^ 1;
              dVar32 = (double)(float)(dVar32 + local_1f0);
            } while (dVar32 <= local_208);
          }
          bVar17 = bVar17 ^ 1;
          dVar36 = (double)(float)(dVar36 + local_1e8);
        } while (dVar36 <= local_210);
      }
      break;
    case 4:
      if (0.0 <= local_210) {
        local_200 = (double)(float)local_1c8;
        local_1e8 = (double)(float)(local_1a8 - local_108);
        dVar32 = local_1a8 + local_1b8;
        bVar18 = false;
        dVar36 = 0.0;
        local_170 = dVar33;
        do {
          if (local_200 <= local_208) {
            bVar21 = false;
            dVar34 = local_200;
            do {
              if (0.0 <= dVar33) {
                dVar25 = 0.0;
                bVar22 = bVar21;
                do {
                  dVar24 = param_1[2] + dVar34;
                  dVar28 = param_1[1] + dVar36;
                  dVar37 = *param_1 + dVar25;
                  if (bVar22) {
                    if (bVar18) {
                      dVar24 = dVar24 + 0.0;
                      dVar28 = dVar28 + local_1e8;
                      dVar37 = dVar37 + 0.0;
                    }
                    else {
                      dVar28 = dVar28 - local_1e8;
                    }
                    iVar14 = (int)param_2[1];
                    uVar15 = iVar14 + 1;
                    *(uint *)(param_2 + 1) = uVar15;
                    uVar40 = 0;
                    uVar41 = 0;
                    uVar42 = 0;
                    uVar43 = 0;
                    uVar44 = 0;
                    uVar45 = 0;
                    uVar46 = 0;
                    uVar47 = 0x3ff00000;
LAB_14970b76d:
                    if (*(uint *)((longlong)param_2 + 0xc) < uVar15) {
                      FUN_144a2c682(param_2,iVar14);
                      dVar33 = local_170;
                    }
                    lVar13 = *param_2;
                    lVar16 = (longlong)iVar14 * 0x60;
                    puVar1 = (undefined4 *)(lVar13 + lVar16);
                    *puVar1 = uVar40;
                    puVar1[1] = uVar41;
                    puVar1[2] = uVar42;
                    puVar1[3] = uVar43;
                    puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar16);
                    *puVar1 = uVar44;
                    puVar1[1] = uVar45;
                    puVar1[2] = uVar46;
                    puVar1[3] = uVar47;
                    pdVar3 = (double *)(lVar13 + 0x20 + lVar16);
                    *pdVar3 = dVar37;
                    pdVar3[1] = dVar28;
                    pdVar3 = (double *)(lVar13 + 0x30 + lVar16);
                    *pdVar3 = dVar24;
                    pdVar3[1] = 0.0;
                    puVar2 = (undefined8 *)(lVar13 + 0x40 + lVar16);
                    *puVar2 = 0x3ff0000000000000;
                    puVar2[1] = 0x3ff0000000000000;
                    puVar2 = (undefined8 *)(lVar13 + 0x50 + lVar16);
                    *puVar2 = 0x3ff0000000000000;
                    puVar2[1] = 0;
                  }
                  else if (!bVar18) {
                    dVar24 = dVar24 + 0.0;
                    dVar28 = dVar28 + local_1b8;
                    dVar37 = dVar37 + 0.0;
                    iVar14 = (int)param_2[1];
                    uVar15 = iVar14 + 1;
                    *(uint *)(param_2 + 1) = uVar15;
                    uVar40 = (undefined4)local_1d8;
                    uVar41 = local_1d8._4_4_;
                    uVar42 = (undefined4)uStack_1d0;
                    uVar43 = uStack_1d0._4_4_;
                    uVar44 = local_188._0_4_;
                    uVar45 = local_188._4_4_;
                    uVar46 = local_188._8_4_;
                    uVar47 = local_188._12_4_;
                    goto LAB_14970b76d;
                  }
                  bVar22 = (bool)(bVar22 ^ 1);
                  dVar25 = (double)(float)(dVar25 + dVar32);
                } while (dVar25 <= dVar33);
              }
              bVar21 = (bool)(bVar21 ^ 1);
              dVar34 = (double)(float)(dVar34 + local_1f0);
            } while (dVar34 <= local_208);
          }
          bVar18 = (bool)(bVar18 ^ 1);
          dVar36 = (double)(float)(dVar36 + local_1f8);
        } while (dVar36 <= local_210);
      }
    }
  }
  dVar36 = local_1a8;
  dVar33 = local_1b8;
  lVar13 = param_2[1];
  if ((longlong)(int)lVar13 != 0) {
    dVar32 = -local_1a8;
    dVar34 = -local_1b8;
    lVar16 = *param_2;
    local_1e8 = local_1c8;
    uStack_1e0 = 0;
    dVar25 = (double)((ulonglong)local_1c8 ^ DAT_149931e80);
    lVar19 = 0;
    do {
      pdVar3 = (double *)(lVar16 + 0x40 + lVar19);
      dVar29 = *pdVar3;
      dVar30 = pdVar3[1];
      dVar6 = dVar36 * dVar29;
      dVar7 = dVar33 * dVar30;
      dVar26 = *(double *)(lVar16 + 0x50 + lVar19);
      dVar35 = local_1e8 * dVar26;
      pdVar3 = (double *)(lVar16 + 0x18 + lVar19);
      dVar24 = *pdVar3;
      dVar28 = *pdVar3;
      dVar9 = *(double *)(lVar16 + lVar19);
      dVar10 = ((double *)(lVar16 + lVar19))[1];
      dVar11 = *(double *)(lVar16 + 0x10 + lVar19);
      dVar37 = dVar7 * dVar9 - dVar6 * dVar10;
      dVar39 = dVar35 * dVar10 - dVar7 * dVar11;
      dVar38 = dVar6 * dVar11 - dVar35 * dVar9;
      dVar39 = dVar39 + dVar39;
      dVar38 = dVar38 + dVar38;
      dVar37 = dVar37 + dVar37;
      pdVar3 = (double *)(lVar16 + 0x20 + lVar19);
      dVar12 = *pdVar3;
      dVar8 = pdVar3[1];
      dVar7 = (dVar11 * dVar39 - dVar9 * dVar37) + dVar28 * dVar38 + dVar7 + dVar8;
      local_138 = *(double *)(lVar16 + 0x30 + lVar19);
      local_128._8_4_ = SUB84(dVar7,0);
      local_128._0_8_ = (dVar37 * dVar10 - dVar38 * dVar11) + dVar24 * dVar39 + dVar6 + dVar12;
      local_128._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_118 = dVar37 * dVar24 + dVar35 + (dVar38 * dVar9 - dVar39 * dVar10) + local_138;
      dVar29 = dVar29 * dVar32;
      dVar30 = dVar30 * dVar34;
      dVar26 = dVar26 * dVar25;
      dVar37 = dVar30 * dVar9 - dVar29 * dVar10;
      dVar38 = dVar26 * dVar10 - dVar30 * dVar11;
      dVar39 = dVar29 * dVar11 - dVar9 * dVar26;
      dVar38 = dVar38 + dVar38;
      dVar39 = dVar39 + dVar39;
      dVar37 = dVar37 + dVar37;
      dVar8 = (dVar11 * dVar38 - dVar9 * dVar37) + dVar28 * dVar39 + dVar30 + dVar8;
      local_148._8_4_ = SUB84(dVar8,0);
      local_148._0_8_ = (dVar37 * dVar10 - dVar39 * dVar11) + dVar24 * dVar38 + dVar29 + dVar12;
      local_148._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_138 = dVar37 * dVar24 + dVar26 + (dVar39 * dVar9 - dVar38 * dVar10) + local_138;
      FUN_14970acc8(param_7,local_148,local_128);
      lVar19 = lVar19 + 0x60;
    } while ((longlong)(int)lVar13 * 0x60 != lVar19);
  }
LAB_14970c0aa:
  if ((local_e0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14970c136 FUN_14970c136 body=2880 status=ok
// SIG undefined FUN_14970c136(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14970c136(undefined8 param_1,longlong param_2,double *param_3,longlong *param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined1 param_11,float param_12)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  double *pdVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar34;
  double dVar35;
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  float in_stack_00000090;
  undefined1 auStack_4b8 [32];
  double *local_498;
  undefined4 local_490;
  longlong *local_488;
  undefined1 local_480;
  undefined1 local_478;
  undefined8 local_470;
  double *local_468;
  undefined1 local_460;
  longlong *local_458;
  undefined8 local_450;
  undefined8 *local_448;
  longlong local_440;
  double local_438;
  longlong lStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  undefined8 uStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  longlong local_3d8;
  undefined4 local_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_360;
  double dStack_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  undefined1 local_330;
  longlong local_328;
  undefined8 uStack_320;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  longlong local_2b8 [3];
  undefined8 uStack_2a0;
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8 [4];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
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
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  puVar13 = (undefined8 *)FUN_146eab21e();
  uVar12 = 0xffffffff;
  if (puVar13 != (undefined8 *)0x0) {
    local_2b8[2] = 0;
    local_488 = local_2b8;
    local_2b8[0] = 0;
    local_2b8[1] = 0;
    uStack_2a0 = 0;
    local_2c8 = param_3[6];
    local_2f8 = *param_3;
    dStack_2f0 = param_3[1];
    local_2e8 = param_3[2];
    dStack_2e0 = param_3[3];
    local_2d8 = param_3[4];
    dStack_2d0 = param_3[5];
    local_490 = param_8;
    local_498 = (double *)CONCAT44(local_498._4_4_,param_7);
    local_450 = param_1;
    local_448 = puVar13;
    local_440 = param_2;
    FUN_14970b272(&local_2f8,local_2b8 + 2,param_5,param_6);
    local_168 = dStack_2d0 - local_2e8;
    dStack_170 = local_2d8 - dStack_2f0;
    local_178 = dStack_2e0 - local_2f8;
    local_498 = &local_178;
    pdVar16 = &local_310;
    FUN_144604fd3(pdVar16,param_6,param_7,param_8);
    lVar20 = local_2b8[2];
    auVar9 = _DAT_149934d80;
    local_300 = local_300 * 0.5;
    local_308 = local_308 * 0.5;
    local_310 = local_310 * 0.5;
    dVar4 = local_310;
    if (local_308 <= local_310) {
      dVar4 = local_308;
    }
    if (local_300 <= dVar4) {
      dVar4 = local_300;
    }
    fVar7 = param_12 * 0.5;
    if ((float)dVar4 * 0.98 <= param_12 * 0.5) {
      fVar7 = (float)dVar4 * 0.98;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    local_348 = (double)fVar7;
    local_338 = local_300 - local_348;
    local_340 = local_308 - local_348;
    local_348 = local_310 - local_348;
    local_328 = 0;
    uStack_320 = 0;
    local_350 = -local_338;
    local_360 = -local_348;
    dStack_358 = -local_340;
    local_330 = 1;
    local_428 = (double)param_4[4];
    dStack_420 = (double)param_4[5];
    local_438 = (double)param_4[6];
    lStack_430 = param_4[7];
    lVar14 = (longlong)(int)uStack_2a0;
    local_458 = param_4;
    if (lVar14 != 0) {
      dVar40 = -local_428;
      dVar41 = -dStack_420;
      local_418 = -local_438;
      dStack_410 = 0.0;
      uStack_400 = 0x3ff0000000000000;
      lVar19 = 0;
      dVar4 = (double)DAT_149934d80;
      dVar6 = DAT_149934d80._8_8_;
      lVar21 = lVar14 * 0x20;
      local_408 = local_418;
      do {
        local_398 = 0.0;
        dStack_390 = 0.0;
        local_3a8 = 0.0;
        dStack_3a0 = 0.0;
        auVar2 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar19);
        dVar32 = auVar2._0_8_;
        dVar35 = auVar2._8_8_;
        auVar3 = *(undefined1 (*) [16])(lVar20 + 0x50 + lVar19);
        dVar5 = auVar3._0_8_;
        auVar24 = minpd(auVar2,auVar9);
        auVar27 = minpd(auVar3,ZEXT816(0x3ff0000000000000));
        auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
        auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
        iVar11 = movmskpd((int)lVar21,auVar25);
        auVar24._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
        auVar24._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
        uVar15 = movmskpd((int)pdVar16,auVar24);
        if ((uVar15 & 0x3fffffff) == 0 && iVar11 == 0) {
          dVar26 = *(double *)(lVar20 + lVar19);
          dVar29 = ((double *)(lVar20 + lVar19))[1];
          pdVar16 = (double *)(lVar20 + 0x10 + lVar19);
          dVar36 = *pdVar16;
          dVar38 = pdVar16[1];
          pdVar16 = (double *)(lVar20 + 0x20 + lVar19);
          dVar8 = *pdVar16;
          dVar28 = pdVar16[1];
          dVar34 = dVar26 * 0.0;
          dVar39 = dVar29 * 0.0;
          dVar30 = dVar36 * 0.0;
          dVar31 = dVar38 * 0.0;
          dVar35 = dVar31 * 1.0;
          dVar32 = dVar30 * -1.0;
          local_3c8 = dVar39 * -1.0 + dVar26 + dVar35 + dVar30;
          dStack_3c0 = dVar34 * 1.0 + dVar29 + dVar32 + dVar31;
          dVar32 = ((dVar34 * -1.0 + dVar38) - dVar39) + dVar32;
          pdVar16 = (double *)(lVar20 + 0x30 + lVar19);
          dVar26 = *pdVar16 * 1.0;
          dVar29 = pdVar16[1] * 0.0;
          local_3b8._8_4_ = SUB84(dVar32,0);
          local_3b8._0_8_ = ((dVar39 * 1.0 + dVar36) - dVar34) + dVar35;
          local_3b8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          dVar32 = dVar28 * 0.0 - dVar8 * 0.0;
          dVar36 = dVar26 * 0.0 - dVar28 * 0.0;
          dVar38 = dVar8 * 0.0 - dVar26 * 0.0;
          dVar35 = dVar29 * 1.0 - dVar29 * 1.0;
          dVar36 = dVar36 + dVar36;
          dVar38 = dVar38 + dVar38;
          dVar32 = dVar32 + dVar32;
          dVar35 = dVar35 + dVar35;
          local_398 = (dVar38 * 0.0 - dVar36 * 0.0) + dVar26 + dVar32 + local_418;
          dStack_390 = (dVar35 * 1.0 - dVar35 * 1.0) + dVar29 + dVar35 + dStack_410;
          local_3a8 = (dVar32 * 0.0 - dVar38 * 0.0) + dVar8 + dVar36 + dVar40;
          dStack_3a0 = (dVar36 * 0.0 - dVar32 * 0.0) + dVar28 + dVar38 + dVar41;
        }
        else {
          local_1f8[0] = 0x3ff0000000000000;
          local_1f8[1] = 0;
          local_1f8[2] = 0;
          local_1f8[3] = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1a8 = 0x3ff0000000000000;
          uStack_1a0 = 0;
          local_188 = local_408;
          uStack_180 = uStack_400;
          dVar38 = *(double *)(lVar20 + lVar19);
          dVar8 = ((double *)(lVar20 + lVar19))[1];
          dVar26 = *(double *)(lVar20 + 0x10 + lVar19);
          dVar28 = dVar8 + dVar8;
          dVar30 = dVar26 + dVar26;
          dVar29 = dVar38 * (dVar38 + dVar38);
          local_278 = (dVar4 - (dVar26 * dVar30 + dVar8 * dVar28)) * dVar32;
          dStack_250 = (dVar6 - (dVar26 * dVar30 + dVar29)) * dVar35;
          dVar36 = *(double *)(lVar20 + lVar19) * dVar30;
          pdVar16 = (double *)(lVar20 + 0x18 + lVar19);
          dVar26 = *pdVar16;
          dVar31 = dVar30 * dVar26;
          dVar34 = (dVar38 + dVar38) * *pdVar16;
          dVar26 = dVar28 * dVar26;
          local_258 = (dVar28 * dVar38 - dVar31) * dVar35;
          dStack_230 = (dVar30 * dVar8 - dVar34) * dVar5;
          local_238 = (dVar26 + dVar36) * dVar5;
          dStack_270 = (dVar28 * dVar38 + dVar31) * dVar32;
          local_248 = (dVar30 * dVar8 + dVar34) * dVar35;
          local_268 = (dVar36 - dVar26) * dVar32;
          uStack_260 = 0;
          uStack_240 = 0;
          local_228 = (1.0 - (dVar29 + dVar8 * dVar28)) * dVar5;
          uStack_220 = 0;
          puVar13 = (undefined8 *)(lVar20 + 0x20 + lVar19);
          local_218 = *puVar13;
          uStack_210 = puVar13[1];
          local_208 = *(undefined8 *)(lVar20 + 0x30 + lVar19);
          uStack_200 = 0x3ff0000000000000;
          local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_198 = dVar40;
          dStack_190 = dVar41;
          FUN_1447fea8d(&local_178,&local_278,local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar27._8_8_ = -(ulonglong)(0.0 <= dVar35);
          auVar27._0_8_ = -(ulonglong)(0.0 <= dVar32);
          auVar24 = blendvpd(_DAT_149936790,auVar9,auVar27);
          uVar22 = -(ulonglong)(0.0 <= dVar5 * 1.0);
          dVar32 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
          dVar35 = auVar24._0_8_;
          local_168 = local_168 * dVar35;
          dStack_170 = dStack_170 * dVar35;
          local_178 = local_178 * dVar35;
          dVar35 = auVar24._8_8_;
          local_148 = local_148 * dVar35;
          dStack_150 = dStack_150 * dVar35;
          local_158 = dVar35 * local_158;
          local_128 = local_128 * dVar32;
          local_130 = local_130 * dVar32;
          local_138 = dVar32 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar32 = local_288 * local_288 + local_298 * local_298;
          dVar35 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar33._0_8_ = dVar32 + dVar35;
          auVar33._8_8_ = dVar32 + dVar35;
          auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
          auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
          auVar24 = sqrtpd(auVar33,auVar33);
          auVar24 = divpd(auVar9,auVar24);
          auVar37._0_8_ = auVar24._0_8_ * local_288;
          auVar37._8_8_ = auVar24._8_8_ * dStack_280;
          local_3c8 = (double)((ulonglong)(local_298 * auVar24._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
          dStack_3c0 = (double)((ulonglong)(dStack_290 * auVar24._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
          local_3b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar23);
          local_3a8 = local_118;
          dStack_3a0 = dStack_110;
          local_398 = local_108;
          dStack_390 = 0.0;
        }
        dVar32 = auVar3._8_8_ * 0.0;
        local_378._8_4_ = SUB84(dVar32,0);
        local_378._0_8_ = dVar5 * 1.0;
        local_378._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        local_388 = auVar2;
        FUN_144a1c3a2(&local_360,&local_178);
        uVar22 = uStack_320;
        lVar21 = (longlong)(int)uStack_320;
        uVar15 = (int)uStack_320 + 1;
        uStack_320 = CONCAT44(uStack_320._4_4_,uVar15);
        if (uStack_320._4_4_ < uVar15) {
          FUN_140555802(&local_328,uVar22 & 0xffffffff);
        }
        pdVar16 = (double *)(lVar21 * 0x38);
        *(double *)(local_328 + 0x30 + (longlong)pdVar16) = local_148;
        pdVar1 = (double *)(local_328 + 0x20 + (longlong)pdVar16);
        *pdVar1 = local_158;
        pdVar1[1] = dStack_150;
        pdVar1 = (double *)(local_328 + 0x10 + (longlong)pdVar16);
        *pdVar1 = local_168;
        pdVar1[1] = dStack_160;
        *(double *)(local_328 + (longlong)pdVar16) = local_178;
        ((double *)(local_328 + (longlong)pdVar16))[1] = dStack_170;
        lVar19 = lVar19 + 0x60;
        lVar21 = local_328;
      } while (lVar14 * 0x60 != lVar19);
    }
    param_2 = local_440;
    FUN_144604eb5(local_440,param_9);
    FUN_146fd58e4(param_2,&local_278);
    uVar10 = local_450;
    iVar11 = FUN_1401f66f6(local_450,DAT_14c9974a8);
    puVar13 = local_448;
    if ((longlong)dStack_270._0_4_ != 0) {
      lVar20 = 0;
      uVar12 = 0xffffffff;
      do {
        if ((*(int *)((longlong)local_278 + lVar20) < 0) ||
           (iVar11 <= *(int *)((longlong)local_278 + lVar20))) goto LAB_14970c5ed;
        lVar20 = lVar20 + 4;
      } while ((longlong)dStack_270._0_4_ * 4 != lVar20);
    }
    local_3d8 = local_328;
    local_3d0 = (int)uStack_320;
    FUN_1484943a0(&local_178,&local_3d8,param_12 <= 0.0001);
    local_468 = &local_3f8;
    local_3f8 = local_428;
    dStack_3f0 = dStack_420;
    local_3e8 = local_438;
    local_488 = local_1f8;
    plVar17 = local_458;
    plVar18 = local_488;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *plVar18 = *plVar17;
      plVar17 = plVar17 + 1;
      plVar18 = plVar18 + 1;
    }
    local_198 = (double)CONCAT71(local_198._1_7_,1);
    local_498 = (double *)(double)in_stack_00000090;
    local_3c8 = local_278;
    dStack_3c0 = (double)CONCAT44(dStack_3c0._4_4_,dStack_270._0_4_);
    local_460 = param_11;
    local_478 = 1;
    local_480 = 1;
    local_490 = param_9;
    local_470 = 0;
    uVar12 = FUN_14849583b(&local_178,puVar13,&local_3c8,0);
    FUN_146ecd102(uVar10,puVar13);
    FUN_148490186(&local_178);
LAB_14970c5ed:
    if (local_278 != 0.0) {
      FUN_1400020a8();
    }
    if (local_328 != 0) {
      FUN_1400020a8();
    }
    if (local_2b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_2b8[2] != 0) {
      FUN_1400020a8();
    }
    (**(code **)*puVar13)(puVar13,1);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14970cc7c FUN_14970cc7c body=502 status=ok
// SIG undefined FUN_14970cc7c(void)

void FUN_14970cc7c(longlong param_1,float param_2,undefined4 param_3,float param_4,
                  undefined4 param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_108 [32];
  double local_e8;
  undefined4 local_e0;
  double local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x50) != 0) {
    local_cc = 50000000;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0x4000000000000000;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 1;
    local_94 = 0x100;
    local_90 = 0;
    local_e8 = (double)param_2;
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
    local_d0 = param_5;
    local_d8 = (double)param_4;
    local_e0 = param_3;
    FUN_146c815bc(&local_e8,param_1,0);
    uVar11 = uStack_60;
    lVar15 = (longlong)(int)uStack_60;
    FUN_1407a57f6(param_6,uStack_60 & 0xffffffff,1);
    FUN_144a127d2(param_7,uVar11 & 0xffffffff,1);
    FUN_140b463b8(param_8,uVar11 & 0xffffffff,1);
    if (0 < lVar15) {
      lVar12 = 0x30;
      lVar13 = 0;
      lVar14 = 0;
      do {
        puVar1 = (undefined8 *)(local_68 + -0x18 + lVar12);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(local_68 + -8 + lVar12);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(local_68 + -0x30 + lVar12);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar4 = *(undefined8 *)(local_68 + -0x20 + lVar12);
        lVar5 = *param_6;
        puVar2 = (undefined8 *)(lVar5 + lVar13 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar13 * 4);
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar13 * 4);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar13 * 4);
        *puVar2 = uVar4;
        puVar2[1] = 0;
        puVar3 = (undefined4 *)(lVar5 + 0x40 + lVar13 * 4);
        *puVar3 = 0;
        puVar3[1] = 0x3ff00000;
        puVar3[2] = 0;
        puVar3[3] = 0x3ff00000;
        puVar2 = (undefined8 *)(lVar5 + 0x50 + lVar13 * 4);
        *puVar2 = 0x3ff0000000000000;
        puVar2[1] = 0;
        *(undefined4 *)(*param_7 + lVar14 * 4) = *(undefined4 *)(local_48 + lVar14 * 4);
        lVar5 = *param_8;
        *(undefined8 *)(lVar5 + 0x10 + lVar13) = *(undefined8 *)(local_38 + 0x10 + lVar13);
        uVar4 = ((undefined8 *)(local_38 + lVar13))[1];
        puVar2 = (undefined8 *)(lVar5 + lVar13);
        *puVar2 = *(undefined8 *)(local_38 + lVar13);
        puVar2[1] = uVar4;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x18;
        lVar12 = lVar12 + 0x38;
      } while (lVar15 != lVar14);
    }
    FUN_1485b4f74(&local_e8);
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970ce74 FUN_14970ce74 body=648 status=ok
// SIG undefined FUN_14970ce74(void)

void FUN_14970ce74(longlong param_1,float param_2,undefined4 param_3,float param_4,
                  undefined4 param_5,float param_6,byte param_7,float param_8,longlong *param_9,
                  longlong *param_10,longlong *param_11,longlong *param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [40];
  double local_f0;
  undefined4 local_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  double local_d0;
  uint local_c8;
  double local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong uStack_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x50) != 0) {
    local_d4 = 50000000;
    local_d0 = 0.0;
    local_c8 = 0;
    local_c0 = 2.0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 1;
    local_9c = 0x100;
    local_98 = 0;
    local_f0 = (double)param_2;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_d8 = param_5;
    local_e0 = (double)param_4;
    if (param_2 < param_6) {
      local_d0 = (double)param_6;
      local_c8 = (uint)param_7;
      if (10.0 <= param_8) {
        param_8 = 10.0;
      }
      if (param_8 <= 1.0) {
        param_8 = 1.0;
      }
      local_c0 = (double)param_8;
    }
    local_e8 = param_3;
    FUN_146c815bc(&local_f0,param_1,0);
    uVar11 = uStack_68;
    lVar15 = (longlong)(int)uStack_68;
    FUN_1407a57f6(param_9,uStack_68 & 0xffffffff,1);
    FUN_144a12820(param_10,uVar11 & 0xffffffff,1);
    FUN_144a127d2(param_11,uVar11 & 0xffffffff,1);
    FUN_140b463b8(param_12,uVar11 & 0xffffffff,1);
    if (0 < lVar15) {
      lVar12 = 0x30;
      lVar13 = 0;
      lVar14 = 0;
      do {
        puVar1 = (undefined8 *)(local_70 + -0x18 + lVar12);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(local_70 + -8 + lVar12);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(local_70 + -0x30 + lVar12);
        uVar9 = *puVar2;
        uVar10 = puVar2[1];
        uVar4 = *(undefined8 *)(local_70 + -0x20 + lVar12);
        lVar5 = *param_9;
        puVar2 = (undefined8 *)(lVar5 + lVar13 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar13 * 4);
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar13 * 4);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar13 * 4);
        *puVar2 = uVar4;
        puVar2[1] = 0;
        puVar3 = (undefined4 *)(lVar5 + 0x40 + lVar13 * 4);
        *puVar3 = 0;
        puVar3[1] = 0x3ff00000;
        puVar3[2] = 0;
        puVar3[3] = 0x3ff00000;
        puVar2 = (undefined8 *)(lVar5 + 0x50 + lVar13 * 4);
        *puVar2 = 0x3ff0000000000000;
        puVar2[1] = 0;
        *(float *)(*param_10 + lVar14) = (float)*(double *)(local_60 + lVar14 * 2);
        *(undefined4 *)(*param_11 + lVar14) = *(undefined4 *)(local_50 + lVar14);
        lVar5 = *param_12;
        *(undefined8 *)(lVar5 + 0x10 + lVar13) = *(undefined8 *)(local_40 + 0x10 + lVar13);
        uVar4 = ((undefined8 *)(local_40 + lVar13))[1];
        puVar2 = (undefined8 *)(lVar5 + lVar13);
        *puVar2 = *(undefined8 *)(local_40 + lVar13);
        puVar2[1] = uVar4;
        lVar14 = lVar14 + 4;
        lVar13 = lVar13 + 0x18;
        lVar12 = lVar12 + 0x38;
      } while (lVar15 * 4 != lVar14);
    }
    FUN_1485b4f74(&local_f0);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970d0fe FUN_14970d0fe body=908 status=ok
// SIG undefined FUN_14970d0fe(void)

void FUN_14970d0fe(longlong param_1,longlong *param_2,float param_3,undefined4 param_4,float param_5
                  ,undefined4 param_6,float param_7,byte param_8,float param_9,byte param_10,
                  undefined1 param_11,longlong *param_12,longlong *param_13,longlong *param_14,
                  longlong *param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *_Src;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_138 [32];
  void *local_118;
  ulonglong uStack_110;
  double local_108;
  undefined4 local_100;
  double local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  uint local_e0;
  double local_d8;
  undefined1 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar5 = *(uint *)(param_1 + 0x50);
  if ((ulonglong)uVar5 != 0) {
    local_ec = 50000000;
    local_e8 = 0.0;
    local_e0 = 0;
    local_d8 = 2.0;
    local_d0 = 0;
    local_c8 = (void *)0x0;
    uStack_c0 = 0;
    local_b8 = 1;
    local_b4 = 0x100;
    local_b0 = 0;
    local_108 = (double)param_3;
    local_a8 = 0;
    uStack_a0 = 0;
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
    local_f0 = param_6;
    local_f8 = (double)param_5;
    local_100 = param_4;
    if (param_3 < param_7) {
      local_e8 = (double)param_7;
      local_e0 = (uint)param_8;
      if (10.0 <= param_9) {
        param_9 = 10.0;
      }
      if (param_9 <= 1.0) {
        param_9 = 1.0;
      }
      local_d8 = (double)param_9;
      if (*(uint *)(param_2 + 1) == uVar5) {
        local_118 = (void *)0x0;
        uStack_110 = 0;
        FUN_146bad8b2(&local_118,uVar5,1);
        _Src = local_118;
        if (0 < (int)uVar5) {
          uVar13 = 0;
          do {
            *(double *)((longlong)local_118 + uVar13 * 8) =
                 (double)*(float *)(*param_2 + uVar13 * 4);
            uVar13 = uVar13 + 1;
          } while (uVar5 != uVar13);
        }
        iVar12 = (int)uStack_110;
        lVar17 = (longlong)(int)uStack_110;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_110);
        if ((int)uStack_110 == 0 && uStack_c0._4_4_ == 0) {
          uStack_c0 = uStack_110 & 0xffffffff;
        }
        else {
          FUN_1408fdf90(&local_c8,uStack_110 & 0xffffffff);
          if (iVar12 != 0) {
            memcpy(local_c8,_Src,lVar17 << 3);
          }
        }
        local_d0 = 1;
        local_b8 = (uint)param_10;
        local_b4 = CONCAT11(local_b4._1_1_,param_11);
        if (local_118 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_146c815bc(&local_108,param_1,0);
    uVar13 = uStack_80;
    lVar17 = (longlong)(int)uStack_80;
    FUN_1407a57f6(param_12,uStack_80 & 0xffffffff,1);
    FUN_144a12820(param_13,uVar13 & 0xffffffff,1);
    FUN_144a127d2(param_14,uVar13 & 0xffffffff,1);
    FUN_140b463b8(param_15,uVar13 & 0xffffffff,1);
    if (0 < lVar17) {
      lVar14 = 0x30;
      lVar15 = 0;
      lVar16 = 0;
      do {
        puVar1 = (undefined8 *)(local_88 + -0x18 + lVar14);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(local_88 + -8 + lVar14);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)(local_88 + -0x30 + lVar14);
        uVar10 = *puVar2;
        uVar11 = puVar2[1];
        uVar4 = *(undefined8 *)(local_88 + -0x20 + lVar14);
        lVar6 = *param_12;
        puVar2 = (undefined8 *)(lVar6 + lVar15 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar15 * 4);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar15 * 4);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar15 * 4);
        *puVar2 = uVar4;
        puVar2[1] = 0;
        puVar3 = (undefined4 *)(lVar6 + 0x40 + lVar15 * 4);
        *puVar3 = 0;
        puVar3[1] = 0x3ff00000;
        puVar3[2] = 0;
        puVar3[3] = 0x3ff00000;
        puVar2 = (undefined8 *)(lVar6 + 0x50 + lVar15 * 4);
        *puVar2 = 0x3ff0000000000000;
        puVar2[1] = 0;
        *(float *)(*param_13 + lVar16) = (float)*(double *)(local_78 + lVar16 * 2);
        *(undefined4 *)(*param_14 + lVar16) = *(undefined4 *)(local_68 + lVar16);
        lVar6 = *param_15;
        *(undefined8 *)(lVar6 + 0x10 + lVar15) = *(undefined8 *)(local_58 + 0x10 + lVar15);
        uVar4 = ((undefined8 *)(local_58 + lVar15))[1];
        puVar2 = (undefined8 *)(lVar6 + lVar15);
        *puVar2 = *(undefined8 *)(local_58 + lVar15);
        puVar2[1] = uVar4;
        lVar16 = lVar16 + 4;
        lVar15 = lVar15 + 0x18;
        lVar14 = lVar14 + 0x38;
      } while (lVar17 * 4 != lVar16);
    }
    FUN_1485b4f74(&local_108);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970d48c FUN_14970d48c body=525 status=ok
// SIG undefined FUN_14970d48c(void)

void FUN_14970d48c(double *param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = param_2[1];
  *(int *)(param_2 + 1) = (int)lVar3 + 8;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar3) < 8) {
    FUN_140c0b6f2(param_2);
  }
  lVar3 = param_3[1];
  *(int *)(param_3 + 1) = (int)lVar3 + 0xc;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar3) < 0xc) {
    FUN_146ddc768(param_3);
  }
  fVar5 = (float)param_1[2];
  fVar6 = (float)param_1[1];
  fVar4 = (float)*param_1;
  fVar7 = (float)param_1[3];
  fVar8 = (float)param_1[4];
  fVar9 = (float)param_1[5];
  pfVar1 = (float *)*param_2;
  *pfVar1 = fVar4;
  pfVar1[1] = fVar6;
  pfVar1[2] = fVar5;
  lVar3 = *param_2;
  *(float *)(lVar3 + 0xc) = fVar7;
  *(float *)(lVar3 + 0x10) = fVar6;
  *(float *)(lVar3 + 0x14) = fVar5;
  lVar3 = *param_2;
  *(float *)(lVar3 + 0x18) = fVar7;
  *(float *)(lVar3 + 0x1c) = fVar8;
  *(float *)(lVar3 + 0x20) = fVar5;
  lVar3 = *param_2;
  *(float *)(lVar3 + 0x24) = fVar4;
  *(float *)(lVar3 + 0x28) = fVar8;
  *(float *)(lVar3 + 0x2c) = fVar5;
  lVar3 = *param_2;
  *(float *)(lVar3 + 0x30) = fVar4;
  *(float *)(lVar3 + 0x34) = fVar6;
  *(float *)(lVar3 + 0x38) = fVar9;
  lVar3 = *param_2;
  *(float *)(lVar3 + 0x3c) = fVar7;
  *(float *)(lVar3 + 0x40) = fVar6;
  *(float *)(lVar3 + 0x44) = fVar9;
  lVar3 = *param_2;
  *(float *)(lVar3 + 0x48) = fVar7;
  *(float *)(lVar3 + 0x4c) = fVar8;
  *(float *)(lVar3 + 0x50) = fVar9;
  lVar3 = *param_2;
  *(float *)(lVar3 + 0x54) = fVar4;
  *(float *)(lVar3 + 0x58) = fVar8;
  *(float *)(lVar3 + 0x5c) = fVar9;
  puVar2 = (undefined8 *)*param_3;
  *puVar2 = 0x100000000;
  *(undefined4 *)(puVar2 + 1) = 3;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0xc) = 0x200000001;
  *(undefined4 *)(lVar3 + 0x14) = 3;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x18) = 0x400000000;
  *(undefined4 *)(lVar3 + 0x20) = 1;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x24) = 0x500000004;
  *(undefined4 *)(lVar3 + 0x2c) = 1;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x30) = 0x200000005;
  *(undefined4 *)(lVar3 + 0x38) = 1;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x3c) = 0x600000005;
  *(undefined4 *)(lVar3 + 0x44) = 2;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x48) = 0x200000003;
  *(undefined4 *)(lVar3 + 0x50) = 6;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x54) = 0x300000007;
  *(undefined4 *)(lVar3 + 0x5c) = 6;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x60) = 0x300000000;
  *(undefined4 *)(lVar3 + 0x68) = 7;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x6c) = 4;
  *(undefined4 *)(lVar3 + 0x74) = 7;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x78) = 0x400000005;
  *(undefined4 *)(lVar3 + 0x80) = 7;
  lVar3 = *param_3;
  *(undefined8 *)(lVar3 + 0x84) = 0x700000005;
  *(undefined4 *)(lVar3 + 0x8c) = 6;
  return;
}



// FUNCTION 14970d69a FUN_14970d69a body=323 status=ok
// SIG undefined FUN_14970d69a(void)

void FUN_14970d69a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (int)param_2[1]) {
    lVar2 = 8;
    lVar3 = 0;
    do {
      lVar1 = *param_2;
      local_70 = (double)*(float *)(lVar1 + lVar2);
      local_78 = (double)*(float *)(lVar1 + -4 + lVar2);
      local_80 = (double)*(float *)(lVar1 + -8 + lVar2);
      local_60 = DAT_14c846338;
      local_68 = DAT_14c846330;
      local_54 = DAT_14c846338;
      local_5c = DAT_14c846330;
      local_50 = DAT_14c84635c;
      local_48 = 0;
      local_46 = 0;
      FUN_146c02208(param_1,&local_80);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0xc;
    } while (lVar3 < (int)param_2[1]);
  }
  if (0 < (int)param_3[1]) {
    lVar2 = 8;
    lVar3 = 0;
    do {
      local_80 = *(double *)(*param_3 + -8 + lVar2);
      local_78 = (double)CONCAT44(local_78._4_4_,*(undefined4 *)(*param_3 + lVar2));
      FUN_146c01152(param_1,&local_80,0);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0xc;
    } while (lVar3 < (int)param_3[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970d7de FUN_14970d7de body=1394 status=ok
// SIG undefined FUN_14970d7de(void)

void FUN_14970d7de(undefined8 param_1,longlong param_2,char param_3,undefined8 param_4,char param_5,
                  float param_6,float param_7,char param_8,undefined8 param_9,char param_10,
                  undefined1 param_11,undefined1 param_12)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_368 [32];
  int **local_348;
  undefined1 local_340;
  uint local_338;
  void *local_328;
  ulonglong uStack_320;
  int *local_318;
  undefined8 uStack_310;
  void *local_308;
  uint local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  void *local_2e0;
  uint local_2d8;
  undefined4 local_2d4;
  int *local_2d0;
  uint local_2c8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  puVar4 = (undefined8 *)FUN_146eab21e();
  if (puVar4 == (undefined8 *)0x0) goto LAB_14970d81f;
  FUN_146fd58e4(param_2,&local_308);
  local_318 = (int *)0x0;
  uStack_310 = 0;
  local_328 = (void *)0x0;
  uStack_320 = 0;
  local_2d0 = (int *)0x0;
  local_2c8 = 0;
  local_348 = (int **)CONCAT71(local_348._1_7_,param_3 == '\x01');
  FUN_1484969b2(puVar4,&local_2d0,&local_328,0x3f847ae147ae147b);
  dVar11 = 0.0;
  if (0 < *(int *)(puVar4 + 0x19) && (uint)uStack_320 == *(int *)(puVar4 + 0x19)) {
    uVar8 = 0;
    dVar11 = 0.0;
    do {
      if (*(int *)(puVar4[0x36] + uVar8 * 4) == 1) {
        dVar11 = dVar11 + *(double *)((longlong)local_328 + uVar8 * 8);
      }
      uVar8 = uVar8 + 1;
    } while ((uStack_320 & 0xffffffff) != uVar8);
  }
  if (param_5 == '\0') {
    dVar11 = (double)param_6 * 0.01;
    dVar11 = dVar11 * dVar11 * dVar11;
  }
  else {
    dVar11 = pow(dVar11,0.3333333333333333);
    dVar11 = (double)param_7 * dVar11;
    dVar11 = dVar11 * dVar11 * dVar11;
  }
  FUN_146ea9b2e(&local_2d0,puVar4);
  pvVar2 = local_308;
  if (param_8 == '\x02') {
    uStack_310 = CONCAT44(uStack_310._4_4_,local_300);
    if (param_3 != '\x01') {
      if (local_300 == 0 && uStack_310._4_4_ == 0) {
        uStack_310 = (ulonglong)local_300;
      }
      else {
        FUN_144a06ca8(&local_318,local_300);
        if (local_300 != 0) {
          memcpy(local_318,pvVar2,(longlong)(int)local_300 << 2);
        }
      }
      FUN_146eaa79e(&local_2d0,&local_318);
      goto LAB_14970d9ef;
    }
    if (local_300 != 0 || uStack_310._4_4_ != 0) {
      FUN_144a06ca8(&local_318,local_300);
      if (local_300 != 0) {
        memcpy(local_318,pvVar2,(longlong)(int)local_300 << 2);
      }
      goto LAB_14970d9ef;
    }
    uStack_310 = (ulonglong)local_300;
    if (local_300 != 0) {
      uVar3 = (uint)(param_10 == '\x01');
      local_2c8 = local_300;
      goto LAB_14970dbeb;
    }
  }
  else {
    local_2e0 = local_328;
    local_2d8 = (uint)uStack_320;
    local_2f0 = 0;
    local_2e8 = 0;
    local_340 = param_3 == '\x01';
    local_348 = &local_318;
    FUN_148496c78(puVar4,&local_2f0,&local_2e0,dVar11);
    uVar1 = DAT_14c9974a8;
    FUN_1446ddc76(&local_2f8,"Level",1);
    FUN_146eb0af2(puVar4,local_2f8,uVar1);
    if (param_3 == '\x01') {
      piVar7 = local_318;
      if ((longlong)(int)(uint)uStack_310 != 0) {
        piVar6 = local_318 + (int)(uint)uStack_310;
        piVar5 = local_318;
        do {
          while (*(int *)(puVar4[0x36] + (longlong)*piVar5 * 4) == 2) {
            piVar5 = piVar5 + 1;
            piVar7 = piVar6;
            if (piVar5 == piVar6) goto LAB_14970dc53;
          }
          while( true ) {
            piVar6 = piVar6 + -1;
            if (*(int *)(puVar4[0x36] + (longlong)*piVar6 * 4) == 2) break;
            piVar7 = piVar5;
            if (piVar6 == piVar5) goto LAB_14970dc53;
          }
          *piVar5 = *piVar6;
          piVar5 = piVar5 + 1;
          piVar7 = piVar6;
        } while (piVar6 != piVar5);
      }
LAB_14970dc53:
      FUN_144a1a59e(&local_318,(ulonglong)((longlong)piVar7 - (longlong)local_318) >> 2,1);
    }
    pvVar2 = local_308;
    if (param_8 == '\x01') {
      local_2e0 = (void *)0x0;
      local_2d8 = local_300;
      if ((longlong)(int)local_300 == 0) {
        local_2d4 = 0;
      }
      else {
        FUN_144a06ca8(&local_2e0,local_300,0);
        memcpy(local_2e0,pvVar2,(longlong)(int)local_300 << 2);
      }
      if (param_3 != '\x01') {
        FUN_146eaa79e(&local_2d0,&local_2e0);
      }
      pvVar2 = local_2e0;
      lVar10 = (longlong)(int)local_2d8;
      if (lVar10 != 0) {
        lVar9 = 0;
        do {
          local_2f0 = CONCAT44(local_2f0._4_4_,*(undefined4 *)((longlong)pvVar2 + lVar9));
          FUN_1449e3bb0(&local_318,&local_2f0);
          lVar9 = lVar9 + 4;
        } while (lVar10 * 4 != lVar9);
      }
      if (local_2e0 != (void *)0x0) {
        FUN_1400020a8(local_2e0);
      }
    }
LAB_14970d9ef:
    if ((uint)uStack_310 != 0) {
      uVar3 = (uint)(param_10 == '\x01');
      local_2c8 = (uint)uStack_310;
      if (param_3 == '\0') {
        local_2d0 = local_318;
        local_2e0 = local_328;
        local_2d8 = (uint)uStack_320;
        local_2f0 = 0;
        local_2e8 = 0;
        local_340 = 0;
        local_348 = &local_2d0;
        local_338 = uVar3;
        FUN_143b65bdb(puVar4,&local_2f0,&local_2e0,dVar11);
      }
      else {
LAB_14970dbeb:
        local_2d0 = local_318;
        local_2e0 = local_328;
        local_2d8 = (uint)uStack_320;
        local_338 = CONCAT31(local_338._1_3_,param_12);
        local_340 = param_11;
        local_348 = (int **)CONCAT44(local_348._4_4_,uVar3);
        FUN_148496d56(puVar4,&local_2e0,dVar11);
      }
      FUN_146ecd102(param_1,puVar4);
    }
  }
  if (local_328 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_318 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_308 != (void *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)*puVar4)(puVar4,1);
LAB_14970d81f:
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14970dd52 FUN_14970dd52 body=234 status=ok
// SIG undefined FUN_14970dd52(void)

void FUN_14970dd52(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_80;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)FUN_146eab21e();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_146fd58e4(param_2,&local_60);
    local_88 = &local_70;
    local_70 = local_60;
    local_68 = local_58;
    local_80 = param_6;
    FUN_148499018(param_3,param_4,param_5,puVar1);
    FUN_146ecd102(param_1,puVar1);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970de3e FUN_14970de3e body=196 status=ok
// SIG undefined FUN_14970de3e(void)

undefined8 FUN_14970de3e(undefined8 param_1,longlong param_2,float param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_146eab21e();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_146fd58e4(param_2,&local_50);
    local_60 = local_50;
    local_58 = local_48;
    FUN_148499117((double)param_3,puVar1);
    FUN_146ecd102(param_1,puVar1);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970df04 FUN_14970df04 body=122 status=ok
// SIG undefined FUN_14970df04(void)

longlong FUN_14970df04(longlong param_1,longlong param_2)

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
    FUN_14970df7e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14970df7e FUN_14970df7e body=316 status=ok
// SIG undefined FUN_14970df7e(void)

longlong * FUN_14970df7e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_14062bf24(param_1,(ulonglong)uVar2);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar7 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar3 = *(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
        if ((uVar3 >> ((uint)uVar8 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar7) = *(undefined4 *)(lVar4 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar5 + 0x28 + lVar7) = 0;
          *(undefined4 *)(lVar5 + 0x30 + lVar7) = 0;
          puVar1 = (undefined8 *)(lVar5 + 8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar5 + 0x34 + lVar7) = 0xffffffff00000080;
          *(undefined4 *)(lVar5 + 0x3c + lVar7) = 0;
          *(undefined8 *)(lVar5 + 0x48 + lVar7) = 0;
          *(undefined4 *)(lVar5 + 0x50 + lVar7) = 0;
          FUN_145c3f772(lVar5 + 8 + lVar7,lVar4 + 8 + lVar7);
          *(undefined8 *)(lVar5 + 0x58 + lVar7) = *(undefined8 *)(lVar4 + 0x58 + lVar7);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x60;
      } while (uVar2 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 14970e0ba FUN_14970e0ba body=306 status=ok
// SIG undefined FUN_14970e0ba(void)

undefined4 * FUN_14970e0ba(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_146d8bd3c(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_14627166e(local_40 + 2,uVar1);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  local_58 = 0;
  cVar2 = FUN_146d8be2a(param_1,uVar4,local_40);
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
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
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
      FUN_146d8b9a4(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14970e1ee FUN_14970e1ee body=112 status=ok
// SIG undefined FUN_14970e1ee(void)

void FUN_14970e1ee(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xa0,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 14970e25e FUN_14970e25e body=74 status=ok
// SIG undefined FUN_14970e25e(void)

void FUN_14970e25e(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return;
}



// FUNCTION 14970e2a8 FUN_14970e2a8 body=147 status=ok
// SIG undefined FUN_14970e2a8(void)

void FUN_14970e2a8(longlong param_1,int param_2)

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



// FUNCTION 14970e33c FUN_14970e33c body=41 status=ok
// SIG undefined FUN_14970e33c(void)

void FUN_14970e33c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14970e366(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 14970e366 FUN_14970e366 body=83 status=ok
// SIG undefined FUN_14970e366(void)

void FUN_14970e366(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  return;
}



// FUNCTION 14970e3ba FUN_14970e3ba body=31 status=ok
// SIG undefined FUN_14970e3ba(void)

undefined8 FUN_14970e3ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14970e3f6 FUN_14970e3f6 body=93 status=ok
// SIG undefined FUN_14970e3f6(void)

void FUN_14970e3f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be164d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14970e454 FUN_14970e454 body=123 status=ok
// SIG undefined FUN_14970e454(void)

void FUN_14970e454(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14be164d0;
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



// FUNCTION 14970e4d0 FUN_14970e4d0 body=21 status=ok
// SIG undefined FUN_14970e4d0(void)

undefined8 FUN_14970e4d0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14970e506 FUN_14970e506 body=56 status=ok
// SIG undefined FUN_14970e506(void)

void FUN_14970e506(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1d610;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0;
  return;
}



// FUNCTION 14970e53e FUN_14970e53e body=56 status=ok
// SIG undefined FUN_14970e53e(void)

void FUN_14970e53e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1d610;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0;
  return;
}



// FUNCTION 14970e59a FUN_14970e59a body=113 status=ok
// SIG undefined FUN_14970e59a(void)

undefined8 FUN_14970e59a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    FUN_144a67f5c(param_2 + 0x1a0,param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_3 + 0x1b0);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14970e634 FUN_14970e634 body=59 status=ok
// SIG undefined FUN_14970e634(void)

undefined8 FUN_14970e634(longlong *param_1)

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



// FUNCTION 14970e680 FUN_14970e680 body=67 status=ok
// SIG undefined FUN_14970e680(void)

void FUN_14970e680(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be1d610;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 14970e712 FUN_14970e712 body=73 status=ok
// SIG undefined FUN_14970e712(void)

undefined8 * FUN_14970e712(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be1d610;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14970e75c FUN_14970e75c body=38 status=ok
// SIG undefined FUN_14970e75c(void)

undefined8 FUN_14970e75c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetFloatArrayElementDataflowNode",1);
  return param_2;
}



// FUNCTION 14970e782 FUN_14970e782 body=38 status=ok
// SIG undefined FUN_14970e782(void)

undefined8 FUN_14970e782(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetFloatArrayElement",1);
  return param_2;
}



// FUNCTION 14970e7a8 FUN_14970e7a8 body=38 status=ok
// SIG undefined FUN_14970e7a8(void)

undefined8 FUN_14970e7a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Utilities|Array",1);
  return param_2;
}



// FUNCTION 14970e7ce FUN_14970e7ce body=32 status=ok
// SIG undefined FUN_14970e7ce(void)

undefined8 FUN_14970e7ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14970e7ee FUN_14970e7ee body=123 status=ok
// SIG undefined FUN_14970e7ee(void)

void FUN_14970e7ee(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24518 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24518 = FUN_140002ddd(FUN_146750267,uVar1,L"GetFloatArrayElementDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24518,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014970e866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14970e86a FUN_14970e86a body=93 status=ok
// SIG undefined FUN_14970e86a(void)

void FUN_14970e86a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24518 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24518 = FUN_140002ddd(FUN_146750267,uVar2,L"GetFloatArrayElementDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24518,param_1);
  return;
}



// FUNCTION 14970e8c8 FUN_14970e8c8 body=55 status=ok
// SIG undefined FUN_14970e8c8(void)

void FUN_14970e8c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24518 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24518 = FUN_140002ddd(FUN_146750267,uVar1,L"GetFloatArrayElementDataflowNode");
  }
  return;
}



// FUNCTION 14970e900 FUN_14970e900 body=233 status=ok
// SIG undefined FUN_14970e900(void)

ulonglong FUN_14970e900(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FGetFloatArrayElementDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14970e99a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14970e99a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14970e99a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14970e99a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14970e9ec FUN_14970e9ec body=56 status=ok
// SIG undefined FUN_14970e9ec(void)

void FUN_14970e9ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1dae0;
  *(undefined1 *)(param_2 + 0x33) = 4;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 14970ea24 FUN_14970ea24 body=56 status=ok
// SIG undefined FUN_14970ea24(void)

void FUN_14970ea24(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be1dae0;
  *(undefined1 *)(param_2 + 0x33) = 4;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 14970ea80 FUN_14970ea80 body=120 status=ok
// SIG undefined FUN_14970ea80(void)

undefined1 FUN_14970ea80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x198) = *(undefined1 *)(param_3 + 0x198);
    FUN_144a67f5c(param_2 + 0x1a0,param_3 + 0x1a0);
    FUN_14054c6c4(param_2 + 0x1b0,param_3 + 0x1b0);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 14970eb20 FUN_14970eb20 body=59 status=ok
// SIG undefined FUN_14970eb20(void)

undefined8 FUN_14970eb20(longlong *param_1)

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



// FUNCTION 14970eb6c FUN_14970eb6c body=40 status=ok
// SIG undefined FUN_14970eb6c(void)

void FUN_14970eb6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_14970ee9c(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}


