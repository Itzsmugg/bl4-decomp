// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492959e4 FUN_1492959e4 body=59 status=ok
// SIG undefined FUN_1492959e4(void)

undefined8 FUN_1492959e4(longlong *param_1)

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



// FUNCTION 149295a2a FUN_149295a2a body=48 status=ok
// SIG undefined FUN_149295a2a(void)

void FUN_149295a2a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bbe0290;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 149295aa8 FUN_149295aa8 body=57 status=ok
// SIG undefined FUN_149295aa8(void)

undefined8 * FUN_149295aa8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe0290;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149295b46 FUN_149295b46 body=91 status=ok
// SIG undefined FUN_149295b46(void)

undefined8 FUN_149295b46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_1444888de(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149295bca FUN_149295bca body=59 status=ok
// SIG undefined FUN_149295bca(void)

undefined8 FUN_149295bca(longlong *param_1)

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



// FUNCTION 149295c66 FUN_149295c66 body=71 status=ok
// SIG undefined FUN_149295c66(void)

undefined8 * FUN_149295c66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe0480;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149295cae FUN_149295cae body=62 status=ok
// SIG undefined FUN_149295cae(void)

void FUN_149295cae(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14bbe0480;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 149295d50 FUN_149295d50 body=91 status=ok
// SIG undefined FUN_149295d50(void)

undefined8 FUN_149295d50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_1444888de(param_2 + -0x28,param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149295dd4 FUN_149295dd4 body=59 status=ok
// SIG undefined FUN_149295dd4(void)

undefined8 FUN_149295dd4(longlong *param_1)

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



// FUNCTION 149295e72 FUN_149295e72 body=62 status=ok
// SIG undefined FUN_149295e72(void)

void FUN_149295e72(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14bbe1f60;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 149295ee4 FUN_149295ee4 body=81 status=ok
// SIG undefined FUN_149295ee4(void)

undefined1 FUN_149295ee4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_1444888de(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149295f5e FUN_149295f5e body=59 status=ok
// SIG undefined FUN_149295f5e(void)

undefined8 FUN_149295f5e(longlong *param_1)

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



// FUNCTION 149295ffa FUN_149295ffa body=75 status=ok
// SIG undefined FUN_149295ffa(void)

undefined8 * FUN_149295ffa(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &PTR_FUN_14bbe07d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_149192788(param_1 + 1,0);
  puVar1 = (undefined1 *)param_1[1];
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 149296046 FUN_149296046 body=71 status=ok
// SIG undefined FUN_149296046(void)

undefined8 * FUN_149296046(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe07d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929608e FUN_14929608e body=62 status=ok
// SIG undefined FUN_14929608e(void)

void FUN_14929608e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    *param_1 = &PTR_FUN_14bbe07d0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 14929611c FUN_14929611c body=75 status=ok
// SIG undefined FUN_14929611c(void)

undefined1 FUN_14929611c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149296190 FUN_149296190 body=59 status=ok
// SIG undefined FUN_149296190(void)

undefined8 FUN_149296190(longlong *param_1)

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



// FUNCTION 14929622c FUN_14929622c body=71 status=ok
// SIG undefined FUN_14929622c(void)

undefined8 * FUN_14929622c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe09c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149296274 FUN_149296274 body=62 status=ok
// SIG undefined FUN_149296274(void)

void FUN_149296274(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_14bbe09c0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 149296302 FUN_149296302 body=75 status=ok
// SIG undefined FUN_149296302(void)

undefined1 FUN_149296302(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_14054c6c4(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149296376 FUN_149296376 body=59 status=ok
// SIG undefined FUN_149296376(void)

undefined8 FUN_149296376(longlong *param_1)

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



// FUNCTION 149296412 FUN_149296412 body=71 status=ok
// SIG undefined FUN_149296412(void)

undefined8 * FUN_149296412(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe0bb0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929645a FUN_14929645a body=62 status=ok
// SIG undefined FUN_14929645a(void)

void FUN_14929645a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_14bbe0bb0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1492964e8 FUN_1492964e8 body=75 status=ok
// SIG undefined FUN_1492964e8(void)

undefined1 FUN_1492964e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_14054c6c4(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929655c FUN_14929655c body=59 status=ok
// SIG undefined FUN_14929655c(void)

undefined8 FUN_14929655c(longlong *param_1)

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



// FUNCTION 1492965fa FUN_1492965fa body=62 status=ok
// SIG undefined FUN_1492965fa(void)

void FUN_1492965fa(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_14bbe1ff0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 149296698 FUN_149296698 body=131 status=ok
// SIG undefined FUN_149296698(void)

undefined1 FUN_149296698(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1444888de(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_1444888de(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      *(undefined1 *)(param_2 + lVar1 + 0x28) = *(undefined1 *)(param_3 + lVar1 + 0x28);
      FUN_1444888de(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149296744 FUN_149296744 body=59 status=ok
// SIG undefined FUN_149296744(void)

undefined8 FUN_149296744(longlong *param_1)

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



// FUNCTION 14929678a FUN_14929678a body=34 status=ok
// SIG undefined FUN_14929678a(void)

void FUN_14929678a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_149296820(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1492967fa FUN_1492967fa body=38 status=ok
// SIG undefined FUN_1492967fa(void)

undefined8 FUN_1492967fa(undefined8 param_1,int param_2)

{
  FUN_149296820();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149296820 FUN_149296820 body=72 status=ok
// SIG undefined FUN_149296820(void)

void FUN_149296820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe0f00;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492968c2 FUN_1492968c2 body=88 status=ok
// SIG undefined FUN_1492968c2(void)

undefined1 FUN_1492968c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_1444888de(param_2 + -0x20,param_3 + -0x20);
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149296942 FUN_149296942 body=59 status=ok
// SIG undefined FUN_149296942(void)

undefined8 FUN_149296942(longlong *param_1)

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



// FUNCTION 149296988 FUN_149296988 body=34 status=ok
// SIG undefined FUN_149296988(void)

void FUN_149296988(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_149296a1e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1492969f8 FUN_1492969f8 body=38 status=ok
// SIG undefined FUN_1492969f8(void)

undefined8 FUN_1492969f8(undefined8 param_1,int param_2)

{
  FUN_149296a1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149296a1e FUN_149296a1e body=72 status=ok
// SIG undefined FUN_149296a1e(void)

void FUN_149296a1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe10f0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149296ac0 FUN_149296ac0 body=88 status=ok
// SIG undefined FUN_149296ac0(void)

undefined1 FUN_149296ac0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_1444888de(param_2 + -0x20,param_3 + -0x20);
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149296b40 FUN_149296b40 body=59 status=ok
// SIG undefined FUN_149296b40(void)

undefined8 FUN_149296b40(longlong *param_1)

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



// FUNCTION 149296b86 FUN_149296b86 body=34 status=ok
// SIG undefined FUN_149296b86(void)

void FUN_149296b86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_149296c1c(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 149296bf6 FUN_149296bf6 body=38 status=ok
// SIG undefined FUN_149296bf6(void)

undefined8 FUN_149296bf6(undefined8 param_1,int param_2)

{
  FUN_149296c1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149296c1c FUN_149296c1c body=72 status=ok
// SIG undefined FUN_149296c1c(void)

void FUN_149296c1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe12e0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149296cb6 FUN_149296cb6 body=75 status=ok
// SIG undefined FUN_149296cb6(void)

undefined1 FUN_149296cb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149296d2a FUN_149296d2a body=59 status=ok
// SIG undefined FUN_149296d2a(void)

undefined8 FUN_149296d2a(longlong *param_1)

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



// FUNCTION 149296dc6 FUN_149296dc6 body=71 status=ok
// SIG undefined FUN_149296dc6(void)

undefined8 * FUN_149296dc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe14d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149296e0e FUN_149296e0e body=62 status=ok
// SIG undefined FUN_149296e0e(void)

void FUN_149296e0e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_14bbe14d0;
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 149296ea4 FUN_149296ea4 body=85 status=ok
// SIG undefined FUN_149296ea4(void)

undefined8 FUN_149296ea4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1444888de(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x18 + lVar1) = *(undefined4 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149296f22 FUN_149296f22 body=59 status=ok
// SIG undefined FUN_149296f22(void)

undefined8 FUN_149296f22(longlong *param_1)

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



// FUNCTION 149296f68 FUN_149296f68 body=48 status=ok
// SIG undefined FUN_149296f68(void)

void FUN_149296f68(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bbe16c0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 149296fe6 FUN_149296fe6 body=57 status=ok
// SIG undefined FUN_149296fe6(void)

undefined8 * FUN_149296fe6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe16c0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929707c FUN_14929707c body=93 status=ok
// SIG undefined FUN_14929707c(void)

undefined1 FUN_14929707c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1444888de(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149297102 FUN_149297102 body=59 status=ok
// SIG undefined FUN_149297102(void)

undefined8 FUN_149297102(longlong *param_1)

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



// FUNCTION 149297148 FUN_149297148 body=48 status=ok
// SIG undefined FUN_149297148(void)

void FUN_149297148(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbe18b0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492971c6 FUN_1492971c6 body=57 status=ok
// SIG undefined FUN_1492971c6(void)

undefined8 * FUN_1492971c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe18b0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149297200 FUN_149297200 body=107 status=ok
// SIG undefined FUN_149297200(void)

void FUN_149297200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe1aa0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x201) = 0;
  FUN_1412ca278(param_2 + 0x44);
  param_2[0x3e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0;
  return;
}



// FUNCTION 14929726c FUN_14929726c body=107 status=ok
// SIG undefined FUN_14929726c(void)

void FUN_14929726c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe1aa0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x201) = 0;
  FUN_1412ca278(param_2 + 0x44);
  param_2[0x3e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0;
  return;
}



// FUNCTION 1492972fc FUN_1492972fc body=189 status=ok
// SIG undefined FUN_1492972fc(void)

undefined8 FUN_1492972fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)(lVar2 + 0x1f0);
      FUN_1444888de(param_2 + lVar6 + 0x1f8,param_3 + lVar6 + 0x1f8);
      uVar3 = *(undefined4 *)(lVar2 + 0x20c);
      uVar4 = *(undefined4 *)(lVar2 + 0x210);
      uVar5 = *(undefined4 *)(lVar2 + 0x214);
      *(undefined4 *)(lVar1 + 0x208) = *(undefined4 *)(lVar2 + 0x208);
      *(undefined4 *)(lVar1 + 0x20c) = uVar3;
      *(undefined4 *)(lVar1 + 0x210) = uVar4;
      *(undefined4 *)(lVar1 + 0x214) = uVar5;
      *(undefined8 *)(lVar1 + 0x218) = *(undefined8 *)(lVar2 + 0x218);
      FUN_1491c05d4(param_2 + lVar6 + 0x220,param_3 + lVar6 + 0x220);
      lVar6 = lVar6 + 0x400;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492973e2 FUN_1492973e2 body=59 status=ok
// SIG undefined FUN_1492973e2(void)

undefined8 FUN_1492973e2(longlong *param_1)

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



// FUNCTION 14929742e FUN_14929742e body=40 status=ok
// SIG undefined FUN_14929742e(void)

void FUN_14929742e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x400) == '\x01') {
    FUN_1492975ca(param_2);
    *(undefined1 *)(param_2 + 0x400) = 0;
  }
  return;
}



// FUNCTION 1492974a4 FUN_1492974a4 body=38 status=ok
// SIG undefined FUN_1492974a4(void)

undefined8 FUN_1492974a4(undefined8 param_1,int param_2)

{
  FUN_1492975ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492974e2 FUN_1492974e2 body=230 status=ok
// SIG undefined FUN_1492974e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1492974e2(void)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0aed8) {
    FUN_144b3d300(&DAT_14cc0aed8);
    if (DAT_14cc0aed8 == -1) {
      FUN_1446f57c6(&DAT_14cc00d40,&local_20);
      FUN_1446f57c6(&DAT_14cc00d70,&uStack_18);
      DAT_14cc0aec8 = (undefined8 *)0x0;
      _DAT_14cc0aed0 = 2;
      FUN_1401b309e(&DAT_14cc0aec8,2,0);
      puVar1 = DAT_14cc0aec8;
      *DAT_14cc0aec8 = local_20;
      puVar1[1] = uStack_18;
      atexit((_func_5014 *)&LAB_1444b3c4e);
      _Init_thread_footer(&DAT_14cc0aed8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cc0aec8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492975ca FUN_1492975ca body=74 status=ok
// SIG undefined FUN_1492975ca(void)

void FUN_1492975ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe1aa0;
  FUN_140f8ccfc(param_1 + 0x44);
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14929767e FUN_14929767e body=89 status=ok
// SIG undefined FUN_14929767e(void)

undefined8 FUN_14929767e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_1444888de(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149297700 FUN_149297700 body=59 status=ok
// SIG undefined FUN_149297700(void)

undefined8 FUN_149297700(longlong *param_1)

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



// FUNCTION 14929779c FUN_14929779c body=71 status=ok
// SIG undefined FUN_14929779c(void)

undefined8 * FUN_14929779c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe1c90;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492977e4 FUN_1492977e4 body=62 status=ok
// SIG undefined FUN_1492977e4(void)

void FUN_1492977e4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14bbe1c90;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 149297822 FUN_149297822 body=71 status=ok
// SIG undefined FUN_149297822(void)

undefined8 * FUN_149297822(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe1d20;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929786a FUN_14929786a body=29 status=ok
// SIG undefined FUN_14929786a(void)

undefined8 FUN_14929786a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149297888 FUN_149297888 body=57 status=ok
// SIG undefined FUN_149297888(void)

undefined8 * FUN_149297888(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe1e40;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492978c2 FUN_1492978c2 body=282 status=ok
// SIG undefined FUN_1492978c2(void)

undefined4 * FUN_1492978c2(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492979de(param_1,local_48);
  FUN_149297b64(param_3,local_40);
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_149297ac4(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_149297c42(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492979de FUN_1492979de body=229 status=ok
// SIG undefined FUN_1492979de(void)

int * FUN_1492979de(longlong *param_1,int *param_2)

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



// FUNCTION 149297ac4 FUN_149297ac4 body=159 status=ok
// SIG undefined FUN_149297ac4(void)

undefined8 FUN_149297ac4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_149297bd0(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 149297b64 FUN_149297b64 body=107 status=ok
// SIG undefined FUN_149297b64(void)

undefined4 * FUN_149297b64(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_2[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[5] = 0;
  }
  else {
    FUN_149192186(param_2 + 2,iVar1,0);
    memcpy(*(void **)(param_2 + 2),_Src,(longlong)iVar1 * 0xc);
  }
  return param_2;
}



// FUNCTION 149297bd0 FUN_149297bd0 body=114 status=ok
// SIG undefined FUN_149297bd0(void)

void FUN_149297bd0(longlong *param_1,int param_2)

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



// FUNCTION 149297c42 FUN_149297c42 body=422 status=ok
// SIG undefined FUN_149297c42(void)

void FUN_149297c42(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 149297dea FUN_149297dea body=57 status=ok
// SIG undefined FUN_149297dea(void)

undefined8 * FUN_149297dea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe1ed0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149297e24 FUN_149297e24 body=71 status=ok
// SIG undefined FUN_149297e24(void)

undefined8 * FUN_149297e24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe1f60;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149297e6c FUN_149297e6c body=71 status=ok
// SIG undefined FUN_149297e6c(void)

undefined8 * FUN_149297e6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe1ff0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149297f1c FUN_149297f1c body=59 status=ok
// SIG undefined FUN_149297f1c(void)

undefined8 FUN_149297f1c(longlong *param_1)

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



// FUNCTION 149297fbc FUN_149297fbc body=29 status=ok
// SIG undefined FUN_149297fbc(void)

undefined8 FUN_149297fbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149297fda FUN_149297fda body=59 status=ok
// SIG undefined FUN_149297fda(void)

void FUN_149297fda(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe23d0;
  return;
}



// FUNCTION 149298016 FUN_149298016 body=43 status=ok
// SIG undefined FUN_149298016(void)

void FUN_149298016(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe23d0;
  return;
}



// FUNCTION 149298066 FUN_149298066 body=70 status=ok
// SIG undefined FUN_149298066(void)

undefined1 FUN_149298066(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492980d4 FUN_1492980d4 body=59 status=ok
// SIG undefined FUN_1492980d4(void)

undefined8 FUN_1492980d4(longlong *param_1)

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



// FUNCTION 149298120 FUN_149298120 body=49 status=ok
// SIG undefined FUN_149298120(void)

void FUN_149298120(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492981a0 FUN_1492981a0 body=52 status=ok
// SIG undefined FUN_1492981a0(void)

undefined8 * FUN_1492981a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492981d6 FUN_1492981d6 body=87 status=ok
// SIG undefined FUN_1492981d6(void)

void FUN_1492981d6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe25c0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 4;
  param_2[0x40] = 0;
  param_2[0x3e] = *(undefined8 *)((longlong)param_2 + 0x1fc);
  *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x204);
  return;
}



// FUNCTION 14929822e FUN_14929822e body=87 status=ok
// SIG undefined FUN_14929822e(void)

void FUN_14929822e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe25c0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 4;
  param_2[0x40] = 0;
  param_2[0x3e] = *(undefined8 *)((longlong)param_2 + 0x1fc);
  *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x204);
  return;
}



// FUNCTION 1492982aa FUN_1492982aa body=111 status=ok
// SIG undefined FUN_1492982aa(void)

undefined8 FUN_1492982aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar6,param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x200 + lVar6) = *(undefined8 *)(param_3 + 0x200 + lVar6);
      lVar6 = lVar6 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149298342 FUN_149298342 body=59 status=ok
// SIG undefined FUN_149298342(void)

undefined8 FUN_149298342(longlong *param_1)

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



// FUNCTION 14929838e FUN_14929838e body=49 status=ok
// SIG undefined FUN_14929838e(void)

void FUN_14929838e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14929840e FUN_14929840e body=52 status=ok
// SIG undefined FUN_14929840e(void)

undefined8 * FUN_14929840e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149298444 FUN_149298444 body=87 status=ok
// SIG undefined FUN_149298444(void)

void FUN_149298444(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe27b0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 4;
  param_2[0x40] = 0;
  param_2[0x3e] = *(undefined8 *)((longlong)param_2 + 0x1fc);
  *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x204);
  return;
}



// FUNCTION 14929849c FUN_14929849c body=87 status=ok
// SIG undefined FUN_14929849c(void)

void FUN_14929849c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe27b0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 4;
  param_2[0x40] = 0;
  param_2[0x3e] = *(undefined8 *)((longlong)param_2 + 0x1fc);
  *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x204);
  return;
}



// FUNCTION 149298518 FUN_149298518 body=111 status=ok
// SIG undefined FUN_149298518(void)

undefined8 FUN_149298518(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar6,param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x200 + lVar6) = *(undefined8 *)(param_3 + 0x200 + lVar6);
      lVar6 = lVar6 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492985b0 FUN_1492985b0 body=59 status=ok
// SIG undefined FUN_1492985b0(void)

undefined8 FUN_1492985b0(longlong *param_1)

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



// FUNCTION 1492985fc FUN_1492985fc body=49 status=ok
// SIG undefined FUN_1492985fc(void)

void FUN_1492985fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14929867c FUN_14929867c body=52 status=ok
// SIG undefined FUN_14929867c(void)

undefined8 * FUN_14929867c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492986b2 FUN_1492986b2 body=71 status=ok
// SIG undefined FUN_1492986b2(void)

void FUN_1492986b2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe29a0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 1492986fa FUN_1492986fa body=71 status=ok
// SIG undefined FUN_1492986fa(void)

void FUN_1492986fa(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe29a0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 149298766 FUN_149298766 body=111 status=ok
// SIG undefined FUN_149298766(void)

undefined8 FUN_149298766(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x210;
      param_2 = param_2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492987fe FUN_1492987fe body=59 status=ok
// SIG undefined FUN_1492987fe(void)

undefined8 FUN_1492987fe(longlong *param_1)

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



// FUNCTION 1492988a0 FUN_1492988a0 body=79 status=ok
// SIG undefined FUN_1492988a0(void)

undefined8 * FUN_1492988a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe29a0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492988f0 FUN_1492988f0 body=76 status=ok
// SIG undefined FUN_1492988f0(void)

void FUN_1492988f0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *param_1 = &PTR_FUN_14bbe29a0;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14929893c FUN_14929893c body=101 status=ok
// SIG undefined FUN_14929893c(void)

void FUN_14929893c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe2bf0;
  *(undefined1 *)(param_2 + 0x3e) = 2;
  *(undefined1 *)(param_2 + 0x40) = 4;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined8 *)((longlong)param_2 + 500) = param_2[0x40];
  *(undefined4 *)((longlong)param_2 + 0x1fc) = *(undefined4 *)(param_2 + 0x41);
  *(undefined1 *)((longlong)param_2 + 0x20c) = 1;
  return;
}



// FUNCTION 1492989a2 FUN_1492989a2 body=101 status=ok
// SIG undefined FUN_1492989a2(void)

void FUN_1492989a2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe2bf0;
  *(undefined1 *)(param_2 + 0x3e) = 2;
  *(undefined1 *)(param_2 + 0x40) = 4;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined8 *)((longlong)param_2 + 500) = param_2[0x40];
  *(undefined4 *)((longlong)param_2 + 0x1fc) = *(undefined4 *)(param_2 + 0x41);
  *(undefined1 *)((longlong)param_2 + 0x20c) = 1;
  return;
}



// FUNCTION 149298a2c FUN_149298a2c body=113 status=ok
// SIG undefined FUN_149298a2c(void)

undefined1 FUN_149298a2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar9,param_3 + 0x10 + lVar9);
      puVar1 = (undefined8 *)(param_3 + 0x1f0 + lVar9);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x1f0 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar3 = (undefined4 *)(param_3 + 0x1fd + lVar9);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x1fd + lVar9);
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      lVar9 = lVar9 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149298ac6 FUN_149298ac6 body=59 status=ok
// SIG undefined FUN_149298ac6(void)

undefined8 FUN_149298ac6(longlong *param_1)

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



// FUNCTION 149298b12 FUN_149298b12 body=49 status=ok
// SIG undefined FUN_149298b12(void)

void FUN_149298b12(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 149298b92 FUN_149298b92 body=52 status=ok
// SIG undefined FUN_149298b92(void)

undefined8 * FUN_149298b92(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149298c30 FUN_149298c30 body=89 status=ok
// SIG undefined FUN_149298c30(void)

undefined8 FUN_149298c30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1491bfba4(param_2,param_3);
      FUN_1444888de(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149298cb2 FUN_149298cb2 body=59 status=ok
// SIG undefined FUN_149298cb2(void)

undefined8 FUN_149298cb2(longlong *param_1)

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



// FUNCTION 149298d4e FUN_149298d4e body=71 status=ok
// SIG undefined FUN_149298d4e(void)

undefined8 * FUN_149298d4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe2de0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149298d96 FUN_149298d96 body=62 status=ok
// SIG undefined FUN_149298d96(void)

void FUN_149298d96(undefined8 *param_1)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14bbe2de0;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 149298e3c FUN_149298e3c body=89 status=ok
// SIG undefined FUN_149298e3c(void)

undefined8 FUN_149298e3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1491bfba4(param_2,param_3);
      FUN_1444888de(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149298ebe FUN_149298ebe body=59 status=ok
// SIG undefined FUN_149298ebe(void)

undefined8 FUN_149298ebe(longlong *param_1)

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



// FUNCTION 149298f5c FUN_149298f5c body=62 status=ok
// SIG undefined FUN_149298f5c(void)

void FUN_149298f5c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14bbe7d80;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 149298f9a FUN_149298f9a body=71 status=ok
// SIG undefined FUN_149298f9a(void)

void FUN_149298f9a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3130;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 149298fe2 FUN_149298fe2 body=71 status=ok
// SIG undefined FUN_149298fe2(void)

void FUN_149298fe2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3130;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 14929904e FUN_14929904e body=111 status=ok
// SIG undefined FUN_14929904e(void)

undefined8 FUN_14929904e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1491bfba4(param_2,param_3);
      param_3 = param_3 + 0x210;
      param_2 = param_2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492990e6 FUN_1492990e6 body=59 status=ok
// SIG undefined FUN_1492990e6(void)

undefined8 FUN_1492990e6(longlong *param_1)

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



// FUNCTION 149299188 FUN_149299188 body=79 status=ok
// SIG undefined FUN_149299188(void)

undefined8 * FUN_149299188(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe3130;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492991d8 FUN_1492991d8 body=76 status=ok
// SIG undefined FUN_1492991d8(void)

void FUN_1492991d8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *param_1 = &PTR_FUN_14bbe3130;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  return;
}



// FUNCTION 149299224 FUN_149299224 body=43 status=ok
// SIG undefined FUN_149299224(void)

void FUN_149299224(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3320;
  return;
}



// FUNCTION 149299250 FUN_149299250 body=43 status=ok
// SIG undefined FUN_149299250(void)

void FUN_149299250(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3320;
  return;
}



// FUNCTION 1492992a0 FUN_1492992a0 body=70 status=ok
// SIG undefined FUN_1492992a0(void)

undefined1 FUN_1492992a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929930e FUN_14929930e body=59 status=ok
// SIG undefined FUN_14929930e(void)

undefined8 FUN_14929930e(longlong *param_1)

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



// FUNCTION 14929935a FUN_14929935a body=49 status=ok
// SIG undefined FUN_14929935a(void)

void FUN_14929935a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492993da FUN_1492993da body=52 status=ok
// SIG undefined FUN_1492993da(void)

undefined8 * FUN_1492993da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149299410 FUN_149299410 body=71 status=ok
// SIG undefined FUN_149299410(void)

void FUN_149299410(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3510;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  return;
}



// FUNCTION 149299458 FUN_149299458 body=71 status=ok
// SIG undefined FUN_149299458(void)

void FUN_149299458(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3510;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  return;
}



// FUNCTION 1492994c4 FUN_1492994c4 body=111 status=ok
// SIG undefined FUN_1492994c4(void)

undefined8 FUN_1492994c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x210;
      param_2 = param_2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929955c FUN_14929955c body=59 status=ok
// SIG undefined FUN_14929955c(void)

undefined8 FUN_14929955c(longlong *param_1)

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



// FUNCTION 1492995fe FUN_1492995fe body=79 status=ok
// SIG undefined FUN_1492995fe(void)

undefined8 * FUN_1492995fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe3510;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929964e FUN_14929964e body=76 status=ok
// SIG undefined FUN_14929964e(void)

void FUN_14929964e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *param_1 = &PTR_FUN_14bbe3510;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14929969a FUN_14929969a body=68 status=ok
// SIG undefined FUN_14929969a(void)

void FUN_14929969a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3700;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 0;
  return;
}



// FUNCTION 1492996de FUN_1492996de body=68 status=ok
// SIG undefined FUN_1492996de(void)

void FUN_1492996de(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe3700;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 0;
  return;
}



// FUNCTION 149299746 FUN_149299746 body=109 status=ok
// SIG undefined FUN_149299746(void)

undefined8 FUN_149299746(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      uVar1 = *(undefined8 *)(param_3 + 0x1f5 + lVar2);
      *(undefined8 *)(param_2 + 0x1f0 + lVar2) = *(undefined8 *)(param_3 + 0x1f0 + lVar2);
      *(undefined8 *)(param_2 + 0x1f5 + lVar2) = uVar1;
      lVar2 = lVar2 + 0x200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492997dc FUN_1492997dc body=59 status=ok
// SIG undefined FUN_1492997dc(void)

undefined8 FUN_1492997dc(longlong *param_1)

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



// FUNCTION 149299828 FUN_149299828 body=49 status=ok
// SIG undefined FUN_149299828(void)

void FUN_149299828(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1492998a8 FUN_1492998a8 body=52 status=ok
// SIG undefined FUN_1492998a8(void)

undefined8 * FUN_1492998a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492998de FUN_1492998de body=92 status=ok
// SIG undefined FUN_1492998de(void)

void FUN_1492998de(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe38f0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  param_2[0x41] = 0;
  param_2[0x3e] = *(undefined8 *)((longlong)param_2 + 0x204);
  *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x20c);
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  return;
}



// FUNCTION 14929993a FUN_14929993a body=92 status=ok
// SIG undefined FUN_14929993a(void)

void FUN_14929993a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe38f0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  param_2[0x41] = 0;
  param_2[0x3e] = *(undefined8 *)((longlong)param_2 + 0x204);
  *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)((longlong)param_2 + 0x20c);
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  return;
}



// FUNCTION 1492999ba FUN_1492999ba body=113 status=ok
// SIG undefined FUN_1492999ba(void)

undefined1 FUN_1492999ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar10,param_3 + 0x10 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar10 = lVar10 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149299a54 FUN_149299a54 body=59 status=ok
// SIG undefined FUN_149299a54(void)

undefined8 FUN_149299a54(longlong *param_1)

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



// FUNCTION 149299aa0 FUN_149299aa0 body=49 status=ok
// SIG undefined FUN_149299aa0(void)

void FUN_149299aa0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 149299b20 FUN_149299b20 body=52 status=ok
// SIG undefined FUN_149299b20(void)

undefined8 * FUN_149299b20(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149299b8c FUN_149299b8c body=148 status=ok
// SIG undefined FUN_149299b8c(void)

undefined1 FUN_149299b8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar12 = (undefined8 *)(param_3 + 0x210 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x210 + lVar11);
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)(param_2 + 0x270 + lVar11) = *(undefined1 *)(param_3 + 0x270 + lVar11);
      lVar11 = lVar11 + 0x280;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149299c48 FUN_149299c48 body=59 status=ok
// SIG undefined FUN_149299c48(void)

undefined8 FUN_149299c48(longlong *param_1)

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



// FUNCTION 149299c94 FUN_149299c94 body=49 status=ok
// SIG undefined FUN_149299c94(void)

void FUN_149299c94(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 149299d14 FUN_149299d14 body=271 status=ok
// SIG undefined FUN_149299d14(void)

undefined8 * FUN_149299d14(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe3ae0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3ff00000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  FUN_1446f470e(&local_28,L"NewBone",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_28;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149299e24 FUN_149299e24 body=52 status=ok
// SIG undefined FUN_149299e24(void)

undefined8 * FUN_149299e24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149299e90 FUN_149299e90 body=148 status=ok
// SIG undefined FUN_149299e90(void)

undefined1 FUN_149299e90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar12 = (undefined8 *)(param_3 + 0x210 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x210 + lVar11);
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)(param_2 + 0x270 + lVar11) = *(undefined1 *)(param_3 + 0x270 + lVar11);
      lVar11 = lVar11 + 0x280;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149299f4c FUN_149299f4c body=59 status=ok
// SIG undefined FUN_149299f4c(void)

undefined8 FUN_149299f4c(longlong *param_1)

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



// FUNCTION 149299f98 FUN_149299f98 body=49 status=ok
// SIG undefined FUN_149299f98(void)

void FUN_149299f98(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14929a018 FUN_14929a018 body=271 status=ok
// SIG undefined FUN_14929a018(void)

undefined8 * FUN_14929a018(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe3ce0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3ff00000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  FUN_1446f470e(&local_28,0x14bbe3d70,1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_28;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929a128 FUN_14929a128 body=52 status=ok
// SIG undefined FUN_14929a128(void)

undefined8 * FUN_14929a128(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929a1f2 FUN_14929a1f2 body=59 status=ok
// SIG undefined FUN_14929a1f2(void)

undefined8 FUN_14929a1f2(longlong *param_1)

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



// FUNCTION 14929a292 FUN_14929a292 body=29 status=ok
// SIG undefined FUN_14929a292(void)

undefined8 FUN_14929a292(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929a2b0 FUN_14929a2b0 body=71 status=ok
// SIG undefined FUN_14929a2b0(void)

void FUN_14929a2b0(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 1;
  FUN_1446f470e(param_2 + 4,L"Default",1);
  *(undefined8 *)(param_2 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x14) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14929a2f8 FUN_14929a2f8 body=71 status=ok
// SIG undefined FUN_14929a2f8(void)

void FUN_14929a2f8(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 1;
  FUN_1446f470e(param_2 + 4,L"Default",1);
  *(undefined8 *)(param_2 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x14) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14929a358 FUN_14929a358 body=39 status=ok
// SIG undefined FUN_14929a358(void)

undefined8 FUN_14929a358(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929a3a8 FUN_14929a3a8 body=59 status=ok
// SIG undefined FUN_14929a3a8(void)

undefined8 FUN_14929a3a8(longlong *param_1)

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



// FUNCTION 14929a49a FUN_14929a49a body=94 status=ok
// SIG undefined FUN_14929a49a(void)

undefined1 FUN_14929a49a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      FUN_1444888de(lVar2,puVar1 + 8);
      *(undefined1 *)(lVar2 + 0x10) = puVar1[0x18];
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929a520 FUN_14929a520 body=59 status=ok
// SIG undefined FUN_14929a520(void)

undefined8 FUN_14929a520(longlong *param_1)

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



// FUNCTION 14929a566 FUN_14929a566 body=38 status=ok
// SIG undefined FUN_14929a566(void)

void FUN_14929a566(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14929a668 FUN_14929a668 body=59 status=ok
// SIG undefined FUN_14929a668(void)

undefined8 FUN_14929a668(longlong *param_1)

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



// FUNCTION 14929a70a FUN_14929a70a body=151 status=ok
// SIG undefined FUN_14929a70a(void)

void FUN_14929a70a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14bbe4480;
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined2 *)((longlong)param_2 + 0x14) = 0x101;
  param_2[3] = 0x42c8000000000000;
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined1 *)(param_2 + 6) = 1;
  FUN_1446f470e((longlong)param_2 + 0x34,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 1;
  return;
}



// FUNCTION 14929a7a2 FUN_14929a7a2 body=151 status=ok
// SIG undefined FUN_14929a7a2(void)

void FUN_14929a7a2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14bbe4480;
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined2 *)((longlong)param_2 + 0x14) = 0x101;
  param_2[3] = 0x42c8000000000000;
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined1 *)(param_2 + 6) = 1;
  FUN_1446f470e((longlong)param_2 + 0x34,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 1;
  return;
}



// FUNCTION 14929a85e FUN_14929a85e body=129 status=ok
// SIG undefined FUN_14929a85e(void)

undefined8 FUN_14929a85e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
    do {
      *(undefined8 *)(param_2 + -0xb0) = *(undefined8 *)(param_3 + -0xb0);
      memcpy((void *)(param_2 + -0xa8),(void *)(param_3 + -0xa8),0xa0);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0xd0;
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929a908 FUN_14929a908 body=59 status=ok
// SIG undefined FUN_14929a908(void)

undefined8 FUN_14929a908(longlong *param_1)

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



// FUNCTION 14929a954 FUN_14929a954 body=57 status=ok
// SIG undefined FUN_14929a954(void)

void FUN_14929a954(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    *param_2 = &PTR_FUN_14bbe4480;
    if (param_2[0x17] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 14929a9dc FUN_14929a9dc body=60 status=ok
// SIG undefined FUN_14929a9dc(void)

undefined8 * FUN_14929a9dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe4480;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929aa4e FUN_14929aa4e body=148 status=ok
// SIG undefined FUN_14929aa4e(void)

undefined1 FUN_14929aa4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar12 = (undefined8 *)(param_3 + 0x210 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x210 + lVar11);
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)(param_2 + 0x270 + lVar11) = *(undefined1 *)(param_3 + 0x270 + lVar11);
      lVar11 = lVar11 + 0x280;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929ab0a FUN_14929ab0a body=59 status=ok
// SIG undefined FUN_14929ab0a(void)

undefined8 FUN_14929ab0a(longlong *param_1)

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



// FUNCTION 14929ab56 FUN_14929ab56 body=49 status=ok
// SIG undefined FUN_14929ab56(void)

void FUN_14929ab56(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14929abd6 FUN_14929abd6 body=247 status=ok
// SIG undefined FUN_14929abd6(void)

undefined8 * FUN_14929abd6(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe4600;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3ff00000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  FUN_1446f470e(&local_20,L"NewControl",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_20;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929acce FUN_14929acce body=52 status=ok
// SIG undefined FUN_14929acce(void)

undefined8 * FUN_14929acce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929ad3e FUN_14929ad3e body=258 status=ok
// SIG undefined FUN_14929ad3e(void)

undefined8 FUN_14929ad3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  if (param_4 != 0) {
    puVar7 = (undefined1 *)(param_3 + 0x348);
    puVar8 = (undefined1 *)(param_2 + 0x348);
    do {
      FUN_1491c05d4(puVar8 + -0x338,puVar7 + -0x338);
      uVar1 = *(undefined8 *)(puVar7 + -0x150);
      uVar2 = *(undefined8 *)(puVar7 + -0x148);
      uVar3 = *(undefined8 *)(puVar7 + -0x140);
      *(undefined8 *)(puVar8 + -0x158) = *(undefined8 *)(puVar7 + -0x158);
      *(undefined8 *)(puVar8 + -0x150) = uVar1;
      *(undefined8 *)(puVar8 + -0x148) = uVar2;
      *(undefined8 *)(puVar8 + -0x140) = uVar3;
      puVar5 = (undefined8 *)(puVar7 + -0x138);
      puVar6 = (undefined8 *)(puVar8 + -0x138);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar8[-0xd8] = puVar7[-0xd8];
      *(undefined4 *)(puVar8 + -0xd0) = *(undefined4 *)(puVar7 + -0xd0);
      *(undefined8 *)(puVar8 + -0xc0) = *(undefined8 *)(puVar7 + -0xc0);
      memcpy(puVar8 + -0xb8,puVar7 + -0xb8,0xa0);
      puVar8[-0x18] = puVar7[-0x18];
      FUN_1444888de(puVar8 + -0x10,puVar7 + -0x10);
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 0x350;
      puVar8 = puVar8 + 0x350;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929ae68 FUN_14929ae68 body=59 status=ok
// SIG undefined FUN_14929ae68(void)

undefined8 FUN_14929ae68(longlong *param_1)

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



// FUNCTION 14929af0a FUN_14929af0a body=210 status=ok
// SIG undefined FUN_14929af0a(void)

undefined8 * FUN_14929af0a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_14929abd6();
  *param_1 = &PTR_FUN_14bbe4810;
  param_1[0x51] = 0;
  param_1[0x50] = &PTR_FUN_14bbe4480;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((longlong)param_1 + 0x294) = 0x101;
  param_1[0x53] = 0x42c8000000000000;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined1 *)(param_1 + 0x56) = 1;
  FUN_1446f470e((longlong)param_1 + 0x2b4,L"Default",1);
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x5a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  return param_1;
}



// FUNCTION 14929afdc FUN_14929afdc body=93 status=ok
// SIG undefined FUN_14929afdc(void)

undefined8 * FUN_14929afdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe4810;
  param_1[0x50] = &PTR_FUN_14bbe4480;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929b04e FUN_14929b04e body=90 status=ok
// SIG undefined FUN_14929b04e(void)

void FUN_14929b04e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    *param_1 = &PTR_FUN_14bbe4810;
    param_1[0x50] = &PTR_FUN_14bbe4480;
    if (param_1[0x67] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  return;
}



// FUNCTION 14929b134 FUN_14929b134 body=59 status=ok
// SIG undefined FUN_14929b134(void)

undefined8 FUN_14929b134(longlong *param_1)

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



// FUNCTION 14929b1d6 FUN_14929b1d6 body=156 status=ok
// SIG undefined FUN_14929b1d6(void)

void FUN_14929b1d6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14bbe4b70;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 4) = 0x101;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x6400000000;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 1;
  *(undefined1 *)(param_2 + 6) = 1;
  FUN_1446f470e((longlong)param_2 + 0x34,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 1;
  return;
}



// FUNCTION 14929b272 FUN_14929b272 body=156 status=ok
// SIG undefined FUN_14929b272(void)

void FUN_14929b272(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14bbe4b70;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 4) = 0x101;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x6400000000;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 1;
  *(undefined1 *)(param_2 + 6) = 1;
  FUN_1446f470e((longlong)param_2 + 0x34,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 1;
  return;
}



// FUNCTION 14929b332 FUN_14929b332 body=63 status=ok
// SIG undefined FUN_14929b332(void)

undefined1 FUN_14929b332(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14929b4aa(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 14929b39a FUN_14929b39a body=59 status=ok
// SIG undefined FUN_14929b39a(void)

undefined8 FUN_14929b39a(longlong *param_1)

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



// FUNCTION 14929b3e6 FUN_14929b3e6 body=57 status=ok
// SIG undefined FUN_14929b3e6(void)

void FUN_14929b3e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    *param_2 = &PTR_FUN_14bbe4b70;
    if (param_2[0x17] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 14929b46e FUN_14929b46e body=60 status=ok
// SIG undefined FUN_14929b46e(void)

undefined8 * FUN_14929b46e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe4b70;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929b4aa FUN_14929b4aa body=131 status=ok
// SIG undefined FUN_14929b4aa(void)

longlong FUN_14929b4aa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  memcpy((void *)(param_1 + 0x20),(void *)(param_2 + 0x20),0x90);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  FUN_1444888de(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 14929b562 FUN_14929b562 body=163 status=ok
// SIG undefined FUN_14929b562(void)

undefined8 FUN_14929b562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
    do {
      FUN_1491c05d4(param_2 + -0x270,param_3 + -0x270);
      uVar1 = *(undefined4 *)(param_3 + -0x8c);
      uVar2 = *(undefined4 *)(param_3 + -0x88);
      uVar3 = *(undefined4 *)(param_3 + -0x84);
      uVar4 = *(undefined4 *)(param_3 + -0x80);
      uVar5 = *(undefined4 *)(param_3 + -0x7c);
      uVar6 = *(undefined4 *)(param_3 + -0x78);
      uVar7 = *(undefined4 *)(param_3 + -0x74);
      *(undefined4 *)(param_2 + -0x90) = *(undefined4 *)(param_3 + -0x90);
      *(undefined4 *)(param_2 + -0x8c) = uVar1;
      *(undefined4 *)(param_2 + -0x88) = uVar2;
      *(undefined4 *)(param_2 + -0x84) = uVar3;
      *(undefined4 *)(param_2 + -0x80) = uVar4;
      *(undefined4 *)(param_2 + -0x7c) = uVar5;
      *(undefined4 *)(param_2 + -0x78) = uVar6;
      *(undefined4 *)(param_2 + -0x74) = uVar7;
      puVar9 = (undefined8 *)(param_3 + -0x70);
      puVar10 = (undefined8 *)(param_2 + -0x70);
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_14929b4aa(param_2,param_3);
      param_3 = param_3 + 0x350;
      param_2 = param_2 + 0x350;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929b62e FUN_14929b62e body=59 status=ok
// SIG undefined FUN_14929b62e(void)

undefined8 FUN_14929b62e(longlong *param_1)

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



// FUNCTION 14929b6d0 FUN_14929b6d0 body=218 status=ok
// SIG undefined FUN_14929b6d0(void)

undefined8 * FUN_14929b6d0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_14929abd6();
  *param_1 = &PTR_FUN_14bbe4cf0;
  param_1[0x51] = 0;
  param_1[0x50] = &PTR_FUN_14bbe4b70;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0x6400000000;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 1;
  *(undefined1 *)(param_1 + 0x56) = 1;
  FUN_1446f470e((longlong)param_1 + 0x2b4,L"Default",1);
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x5a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  return param_1;
}



// FUNCTION 14929b7aa FUN_14929b7aa body=93 status=ok
// SIG undefined FUN_14929b7aa(void)

undefined8 * FUN_14929b7aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe4cf0;
  param_1[0x50] = &PTR_FUN_14bbe4b70;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929b80c FUN_14929b80c body=90 status=ok
// SIG undefined FUN_14929b80c(void)

void FUN_14929b80c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    *param_1 = &PTR_FUN_14bbe4cf0;
    param_1[0x50] = &PTR_FUN_14bbe4b70;
    if (param_1[0x67] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  return;
}



// FUNCTION 14929b928 FUN_14929b928 body=59 status=ok
// SIG undefined FUN_14929b928(void)

undefined8 FUN_14929b928(longlong *param_1)

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



// FUNCTION 14929b9fe FUN_14929b9fe body=142 status=ok
// SIG undefined FUN_14929b9fe(void)

undefined8 FUN_14929b9fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
    do {
      *(undefined8 *)(param_2 + -0xe8) = *(undefined8 *)(param_3 + -0xe8);
      memcpy((void *)(param_2 + -0xe0),(void *)(param_3 + -0xe0),0xc0);
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_1444888de(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1491920d2(param_2,param_3);
      param_3 = param_3 + 0x100;
      param_2 = param_2 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929bab4 FUN_14929bab4 body=59 status=ok
// SIG undefined FUN_14929bab4(void)

undefined8 FUN_14929bab4(longlong *param_1)

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



// FUNCTION 14929bb56 FUN_14929bb56 body=181 status=ok
// SIG undefined FUN_14929bb56(void)

undefined8 * FUN_14929bb56(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14bbe5050;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0x1010101;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_1446f470e((longlong)param_1 + 0x54,L"Default",1);
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f80000000000000;
  puVar5 = &DAT_14c846480;
  puVar6 = param_1 + 0xe;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 14929bc0c FUN_14929bc0c body=77 status=ok
// SIG undefined FUN_14929bc0c(void)

undefined8 * FUN_14929bc0c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe5050;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929bc5a FUN_14929bc5a body=74 status=ok
// SIG undefined FUN_14929bc5a(void)

void FUN_14929bc5a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_1 = &PTR_FUN_14bbe5050;
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x1b] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14929bca4 FUN_14929bca4 body=58 status=ok
// SIG undefined FUN_14929bca4(void)

void FUN_14929bca4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe51d0;
  FUN_14929bb56(param_2 + 0x52);
  uVar1 = DAT_14c8463f8;
  param_2[0x4f] = DAT_14c8463f0;
  param_2[0x50] = uVar1;
  return;
}



// FUNCTION 14929bcde FUN_14929bcde body=58 status=ok
// SIG undefined FUN_14929bcde(void)

void FUN_14929bcde(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe51d0;
  FUN_14929bb56(param_2 + 0x52);
  uVar1 = DAT_14c8463f8;
  param_2[0x4f] = DAT_14c8463f0;
  param_2[0x50] = uVar1;
  return;
}



// FUNCTION 14929bd3c FUN_14929bd3c body=63 status=ok
// SIG undefined FUN_14929bd3c(void)

undefined1 FUN_14929bd3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14929beee(param_2,param_3);
    param_3 = param_3 + 0x390;
    param_2 = param_2 + 0x390;
  }
  return 1;
}



// FUNCTION 14929bda4 FUN_14929bda4 body=59 status=ok
// SIG undefined FUN_14929bda4(void)

undefined8 FUN_14929bda4(longlong *param_1)

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



// FUNCTION 14929bdf0 FUN_14929bdf0 body=40 status=ok
// SIG undefined FUN_14929bdf0(void)

void FUN_14929bdf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x390) == '\x01') {
    FUN_14929be90(param_2);
    *(undefined1 *)(param_2 + 0x390) = 0;
  }
  return;
}



// FUNCTION 14929be66 FUN_14929be66 body=38 status=ok
// SIG undefined FUN_14929be66(void)

undefined8 FUN_14929be66(undefined8 param_1,int param_2)

{
  FUN_14929be90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929be90 FUN_14929be90 body=93 status=ok
// SIG undefined FUN_14929be90(void)

void FUN_14929be90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe51d0;
  param_1[0x52] = &PTR_FUN_14bbe5050;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14929beee FUN_14929beee body=219 status=ok
// SIG undefined FUN_14929beee(void)

longlong FUN_14929beee(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  uVar2 = *(undefined8 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  puVar5 = (undefined8 *)(param_2 + 0x210);
  puVar6 = (undefined8 *)(param_1 + 0x210);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  uVar1 = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x280) = uVar1;
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  memcpy((void *)(param_1 + 0x2a0),(void *)(param_2 + 0x2a0),0xc0);
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x360);
  FUN_1444888de(param_1 + 0x368,param_2 + 0x368);
  *(undefined1 *)(param_1 + 0x378) = *(undefined1 *)(param_2 + 0x378);
  FUN_1491920d2(param_1 + 0x380,param_2 + 0x380);
  return param_1;
}



// FUNCTION 14929c0c4 FUN_14929c0c4 body=59 status=ok
// SIG undefined FUN_14929c0c4(void)

undefined8 FUN_14929c0c4(longlong *param_1)

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



// FUNCTION 14929c19a FUN_14929c19a body=142 status=ok
// SIG undefined FUN_14929c19a(void)

undefined8 FUN_14929c19a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
    do {
      *(undefined8 *)(param_2 + -0xf8) = *(undefined8 *)(param_3 + -0xf8);
      memcpy((void *)(param_2 + -0xf0),(void *)(param_3 + -0xf0),0xd0);
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_1444888de(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1491920d2(param_2,param_3);
      param_3 = param_3 + 0x110;
      param_2 = param_2 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929c250 FUN_14929c250 body=59 status=ok
// SIG undefined FUN_14929c250(void)

undefined8 FUN_14929c250(longlong *param_1)

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



// FUNCTION 14929c2f2 FUN_14929c2f2 body=201 status=ok
// SIG undefined FUN_14929c2f2(void)

undefined8 * FUN_14929c2f2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14bbe5530;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar1;
  param_1[6] = DAT_14c8464f0;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  param_1[9] = DAT_14c846520;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_1446f470e((longlong)param_1 + 100,L"Default",1);
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f80000000000000;
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x10;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 14929c3bc FUN_14929c3bc body=77 status=ok
// SIG undefined FUN_14929c3bc(void)

undefined8 * FUN_14929c3bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe5530;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929c40a FUN_14929c40a body=74 status=ok
// SIG undefined FUN_14929c40a(void)

void FUN_14929c40a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x22) == '\x01') {
    *param_1 = &PTR_FUN_14bbe5530;
    if (param_1[0x20] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x1d] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  return;
}



// FUNCTION 14929c454 FUN_14929c454 body=72 status=ok
// SIG undefined FUN_14929c454(void)

void FUN_14929c454(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe56b0;
  FUN_14929c2f2(param_2 + 0x52);
  uVar1 = DAT_14c8464e8;
  param_2[0x4f] = DAT_14c8464e0;
  param_2[0x50] = uVar1;
  param_2[0x51] = DAT_14c8464f0;
  return;
}



// FUNCTION 14929c49c FUN_14929c49c body=72 status=ok
// SIG undefined FUN_14929c49c(void)

void FUN_14929c49c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe56b0;
  FUN_14929c2f2(param_2 + 0x52);
  uVar1 = DAT_14c8464e8;
  param_2[0x4f] = DAT_14c8464e0;
  param_2[0x50] = uVar1;
  param_2[0x51] = DAT_14c8464f0;
  return;
}



// FUNCTION 14929c508 FUN_14929c508 body=63 status=ok
// SIG undefined FUN_14929c508(void)

undefined1 FUN_14929c508(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14929c6c0(param_2,param_3);
    param_3 = param_3 + 0x3a0;
    param_2 = param_2 + 0x3a0;
  }
  return 1;
}



// FUNCTION 14929c570 FUN_14929c570 body=59 status=ok
// SIG undefined FUN_14929c570(void)

undefined8 FUN_14929c570(longlong *param_1)

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



// FUNCTION 14929c5bc FUN_14929c5bc body=40 status=ok
// SIG undefined FUN_14929c5bc(void)

void FUN_14929c5bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3a0) == '\x01') {
    FUN_14929c662(param_2);
    *(undefined1 *)(param_2 + 0x3a0) = 0;
  }
  return;
}



// FUNCTION 14929c632 FUN_14929c632 body=38 status=ok
// SIG undefined FUN_14929c632(void)

undefined8 FUN_14929c632(undefined8 param_1,int param_2)

{
  FUN_14929c662();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929c662 FUN_14929c662 body=93 status=ok
// SIG undefined FUN_14929c662(void)

void FUN_14929c662(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe56b0;
  param_1[0x52] = &PTR_FUN_14bbe5530;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14929c6c0 FUN_14929c6c0 body=233 status=ok
// SIG undefined FUN_14929c6c0(void)

longlong FUN_14929c6c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  uVar2 = *(undefined8 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  puVar5 = (undefined8 *)(param_2 + 0x210);
  puVar6 = (undefined8 *)(param_1 + 0x210);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  uVar1 = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x280) = uVar1;
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  memcpy((void *)(param_1 + 0x2a0),(void *)(param_2 + 0x2a0),0xd0);
  *(undefined1 *)(param_1 + 0x370) = *(undefined1 *)(param_2 + 0x370);
  FUN_1444888de(param_1 + 0x378,param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x388);
  FUN_1491920d2(param_1 + 0x390,param_2 + 0x390);
  return param_1;
}



// FUNCTION 14929c8a4 FUN_14929c8a4 body=59 status=ok
// SIG undefined FUN_14929c8a4(void)

undefined8 FUN_14929c8a4(longlong *param_1)

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



// FUNCTION 14929c97a FUN_14929c97a body=142 status=ok
// SIG undefined FUN_14929c97a(void)

undefined8 FUN_14929c97a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
    do {
      *(undefined8 *)(param_2 + -0xf8) = *(undefined8 *)(param_3 + -0xf8);
      memcpy((void *)(param_2 + -0xf0),(void *)(param_3 + -0xf0),0xd0);
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_1444888de(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1491920d2(param_2,param_3);
      param_3 = param_3 + 0x110;
      param_2 = param_2 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929ca30 FUN_14929ca30 body=59 status=ok
// SIG undefined FUN_14929ca30(void)

undefined8 FUN_14929ca30(longlong *param_1)

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



// FUNCTION 14929cad2 FUN_14929cad2 body=205 status=ok
// SIG undefined FUN_14929cad2(void)

undefined8 * FUN_14929cad2(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14bbe5a10;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0xc066800000000000;
  param_1[5] = 0xc066800000000000;
  param_1[6] = 0xc066800000000000;
  param_1[7] = 0x4066800000000000;
  param_1[8] = 0x4066800000000000;
  param_1[9] = 0x4066800000000000;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_1446f470e((longlong)param_1 + 100,L"Default",1);
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 14929cba0 FUN_14929cba0 body=77 status=ok
// SIG undefined FUN_14929cba0(void)

undefined8 * FUN_14929cba0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe5a10;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929cbee FUN_14929cbee body=74 status=ok
// SIG undefined FUN_14929cbee(void)

void FUN_14929cbee(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x22) == '\x01') {
    *param_1 = &PTR_FUN_14bbe5a10;
    if (param_1[0x20] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x1d] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  return;
}



// FUNCTION 14929cc38 FUN_14929cc38 body=72 status=ok
// SIG undefined FUN_14929cc38(void)

void FUN_14929cc38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe5b90;
  FUN_14929cad2(param_2 + 0x52);
  uVar1 = DAT_14c846500;
  param_2[0x4f] = DAT_14c8464f8;
  param_2[0x50] = uVar1;
  param_2[0x51] = DAT_14c846508;
  return;
}



// FUNCTION 14929cc80 FUN_14929cc80 body=72 status=ok
// SIG undefined FUN_14929cc80(void)

void FUN_14929cc80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe5b90;
  FUN_14929cad2(param_2 + 0x52);
  uVar1 = DAT_14c846500;
  param_2[0x4f] = DAT_14c8464f8;
  param_2[0x50] = uVar1;
  param_2[0x51] = DAT_14c846508;
  return;
}



// FUNCTION 14929ccec FUN_14929ccec body=63 status=ok
// SIG undefined FUN_14929ccec(void)

undefined1 FUN_14929ccec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14929ce9e(param_2,param_3);
    param_3 = param_3 + 0x3a0;
    param_2 = param_2 + 0x3a0;
  }
  return 1;
}



// FUNCTION 14929cd54 FUN_14929cd54 body=59 status=ok
// SIG undefined FUN_14929cd54(void)

undefined8 FUN_14929cd54(longlong *param_1)

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



// FUNCTION 14929cda0 FUN_14929cda0 body=40 status=ok
// SIG undefined FUN_14929cda0(void)

void FUN_14929cda0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3a0) == '\x01') {
    FUN_14929ce40(param_2);
    *(undefined1 *)(param_2 + 0x3a0) = 0;
  }
  return;
}



// FUNCTION 14929ce16 FUN_14929ce16 body=38 status=ok
// SIG undefined FUN_14929ce16(void)

undefined8 FUN_14929ce16(undefined8 param_1,int param_2)

{
  FUN_14929ce40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929ce40 FUN_14929ce40 body=93 status=ok
// SIG undefined FUN_14929ce40(void)

void FUN_14929ce40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe5b90;
  param_1[0x52] = &PTR_FUN_14bbe5a10;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14929ce9e FUN_14929ce9e body=233 status=ok
// SIG undefined FUN_14929ce9e(void)

longlong FUN_14929ce9e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  uVar2 = *(undefined8 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  puVar5 = (undefined8 *)(param_2 + 0x210);
  puVar6 = (undefined8 *)(param_1 + 0x210);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  uVar1 = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x280) = uVar1;
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  memcpy((void *)(param_1 + 0x2a0),(void *)(param_2 + 0x2a0),0xd0);
  *(undefined1 *)(param_1 + 0x370) = *(undefined1 *)(param_2 + 0x370);
  FUN_1444888de(param_1 + 0x378,param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x388);
  FUN_1491920d2(param_1 + 0x390,param_2 + 0x390);
  return param_1;
}



// FUNCTION 14929cfb0 FUN_14929cfb0 body=68 status=ok
// SIG undefined FUN_14929cfb0(void)

undefined8 FUN_14929cfb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb0);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929d01c FUN_14929d01c body=59 status=ok
// SIG undefined FUN_14929d01c(void)

undefined8 FUN_14929d01c(longlong *param_1)

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



// FUNCTION 14929d0c8 FUN_14929d0c8 body=160 status=ok
// SIG undefined FUN_14929d0c8(void)

void FUN_14929d0c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0xc059000000000000;
  param_1[4] = 0xc059000000000000;
  param_1[5] = 0xc059000000000000;
  param_1[6] = 0xc066800000000000;
  param_1[7] = 0xc066800000000000;
  param_1[8] = 0xc066800000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x4059000000000000;
  param_1[0xd] = 0x4059000000000000;
  param_1[0xe] = 0x4059000000000000;
  param_1[0xf] = 0x4066800000000000;
  param_1[0x10] = 0x4066800000000000;
  param_1[0x11] = 0x4066800000000000;
  param_1[0x12] = 0x4024000000000000;
  param_1[0x13] = 0x4024000000000000;
  param_1[0x14] = 0x4024000000000000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}



// FUNCTION 14929d19e FUN_14929d19e body=142 status=ok
// SIG undefined FUN_14929d19e(void)

undefined8 FUN_14929d19e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
    do {
      *(undefined8 *)(param_2 + -0x168) = *(undefined8 *)(param_3 + -0x168);
      memcpy((void *)(param_2 + -0x160),(void *)(param_3 + -0x160),0x140);
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_1444888de(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1491920d2(param_2,param_3);
      param_3 = param_3 + 0x180;
      param_2 = param_2 + 0x180;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929d254 FUN_14929d254 body=59 status=ok
// SIG undefined FUN_14929d254(void)

undefined8 FUN_14929d254(longlong *param_1)

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



// FUNCTION 14929d2f6 FUN_14929d2f6 body=162 status=ok
// SIG undefined FUN_14929d2f6(void)

undefined8 * FUN_14929d2f6(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14bbe5ef0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 3;
  FUN_14929d0c8(param_1 + 3);
  *(undefined1 *)(param_1 + 0x1a) = 1;
  FUN_1446f470e((longlong)param_1 + 0xd4,L"Default",1);
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x1e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 14929d398 FUN_14929d398 body=77 status=ok
// SIG undefined FUN_14929d398(void)

undefined8 * FUN_14929d398(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe5ef0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929d3e6 FUN_14929d3e6 body=74 status=ok
// SIG undefined FUN_14929d3e6(void)

void FUN_14929d3e6(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *param_1 = &PTR_FUN_14bbe5ef0;
    if (param_1[0x2e] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x2b] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14929d430 FUN_14929d430 body=141 status=ok
// SIG undefined FUN_14929d430(void)

void FUN_14929d430(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe6070;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  *(undefined4 *)(param_2 + 0x52) = 0;
  *(undefined4 *)((longlong)param_2 + 0x294) = 0;
  *(undefined4 *)(param_2 + 0x53) = 0;
  *(undefined4 *)((longlong)param_2 + 0x29c) = 0x3ff00000;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c4) = 0x3ff00000;
  *(undefined4 *)(param_2 + 0x59) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2cc) = 0x3ff00000;
  param_2[0x5a] = 0x3ff0000000000000;
  param_2[0x5b] = 0;
  FUN_14929d2f6(param_2 + 0x5c);
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14929d4be FUN_14929d4be body=141 status=ok
// SIG undefined FUN_14929d4be(void)

void FUN_14929d4be(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_14929abd6(param_2);
  *param_2 = &PTR_FUN_14bbe6070;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  *(undefined4 *)(param_2 + 0x52) = 0;
  *(undefined4 *)((longlong)param_2 + 0x294) = 0;
  *(undefined4 *)(param_2 + 0x53) = 0;
  *(undefined4 *)((longlong)param_2 + 0x29c) = 0x3ff00000;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c4) = 0x3ff00000;
  *(undefined4 *)(param_2 + 0x59) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2cc) = 0x3ff00000;
  param_2[0x5a] = 0x3ff0000000000000;
  param_2[0x5b] = 0;
  FUN_14929d2f6(param_2 + 0x5c);
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14929d570 FUN_14929d570 body=63 status=ok
// SIG undefined FUN_14929d570(void)

undefined1 FUN_14929d570(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14929d722(param_2,param_3);
    param_3 = param_3 + 0x460;
    param_2 = param_2 + 0x460;
  }
  return 1;
}



// FUNCTION 14929d5d8 FUN_14929d5d8 body=59 status=ok
// SIG undefined FUN_14929d5d8(void)

undefined8 FUN_14929d5d8(longlong *param_1)

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



// FUNCTION 14929d624 FUN_14929d624 body=40 status=ok
// SIG undefined FUN_14929d624(void)

void FUN_14929d624(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x460) == '\x01') {
    FUN_14929d6c4(param_2);
    *(undefined1 *)(param_2 + 0x460) = 0;
  }
  return;
}


