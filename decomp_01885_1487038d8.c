// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487038d8 FUN_1487038d8 body=63 status=ok
// SIG undefined FUN_1487038d8(void)

undefined1 FUN_1487038d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487035c8(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148703940 FUN_148703940 body=59 status=ok
// SIG undefined FUN_148703940(void)

undefined8 FUN_148703940(longlong *param_1)

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



// FUNCTION 14870398c FUN_14870398c body=57 status=ok
// SIG undefined FUN_14870398c(void)

void FUN_14870398c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14b236850;
    FUN_140d9624e(param_2 + 0xd);
    FUN_140d9629a(param_2);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 148703a54 FUN_148703a54 body=90 status=ok
// SIG undefined FUN_148703a54(void)

undefined8 FUN_148703a54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined4 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(puVar1 + 2);
      uVar3 = puVar1[5];
      uVar4 = puVar1[6];
      uVar5 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x10) = puVar1[4];
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



// FUNCTION 148703ad6 FUN_148703ad6 body=59 status=ok
// SIG undefined FUN_148703ad6(void)

undefined8 FUN_148703ad6(longlong *param_1)

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



// FUNCTION 148703b1c FUN_148703b1c body=38 status=ok
// SIG undefined FUN_148703b1c(void)

void FUN_148703b1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148703bec FUN_148703bec body=68 status=ok
// SIG undefined FUN_148703bec(void)

undefined8 FUN_148703bec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148703d0e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148703c58 FUN_148703c58 body=59 status=ok
// SIG undefined FUN_148703c58(void)

undefined8 FUN_148703c58(longlong *param_1)

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



// FUNCTION 148703c9e FUN_148703c9e body=34 status=ok
// SIG undefined FUN_148703c9e(void)

void FUN_148703c9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145828e24(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148703d0e FUN_148703d0e body=93 status=ok
// SIG undefined FUN_148703d0e(void)

undefined8 * FUN_148703d0e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14119d219(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148703d6c(param_1,iVar1);
      FUN_148703ddf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148703d6c FUN_148703d6c body=115 status=ok
// SIG undefined FUN_148703d6c(void)

void FUN_148703d6c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148703ddf FUN_148703ddf body=52 status=ok
// SIG undefined FUN_148703ddf(void)

void FUN_148703ddf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148703e14(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148703e14 FUN_148703e14 body=116 status=ok
// SIG undefined FUN_148703e14(void)

undefined4 * FUN_148703e14(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148703ef2 FUN_148703ef2 body=59 status=ok
// SIG undefined FUN_148703ef2(void)

undefined8 FUN_148703ef2(longlong *param_1)

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



// FUNCTION 148703f92 FUN_148703f92 body=34 status=ok
// SIG undefined FUN_148703f92(void)

undefined8 FUN_148703f92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148703fb4 FUN_148703fb4 body=55 status=ok
// SIG undefined FUN_148703fb4(void)

void FUN_148703fb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb641b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb641b8 = FUN_140002ddd(FUN_1465019df,uVar1,L"GbxSkillAlias");
  }
  return;
}



// FUNCTION 148703fec FUN_148703fec body=42 status=ok
// SIG undefined FUN_148703fec(void)

undefined8 FUN_148703fec(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/GbxSkillAliasDef.h",
                0x15,L"Pure virtual not implemented (%s)",L"FGbxSkillAlias::GetDef");
  return 0;
}



// FUNCTION 148704016 FUN_148704016 body=32 status=ok
// SIG undefined FUN_148704016(void)

undefined8 FUN_148704016(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1487040d4 FUN_1487040d4 body=59 status=ok
// SIG undefined FUN_1487040d4(void)

undefined8 FUN_1487040d4(longlong *param_1)

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



// FUNCTION 148704168 FUN_148704168 body=55 status=ok
// SIG undefined FUN_148704168(void)

void FUN_148704168(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb641d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb641d0 = FUN_140002ddd(FUN_146501a75,uVar1,L"GbxSkillAlias_ResourcePool");
  }
  return;
}



// FUNCTION 1487041a0 FUN_1487041a0 body=71 status=ok
// SIG undefined FUN_1487041a0(void)

undefined8 FUN_1487041a0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 8);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487041ea FUN_1487041ea body=43 status=ok
// SIG undefined FUN_1487041ea(void)

void FUN_1487041ea(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b237790;
  return;
}



// FUNCTION 14870422c FUN_14870422c body=62 status=ok
// SIG undefined FUN_14870422c(void)

undefined1 FUN_14870422c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148704292 FUN_148704292 body=59 status=ok
// SIG undefined FUN_148704292(void)

undefined8 FUN_148704292(longlong *param_1)

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



// FUNCTION 1487042d8 FUN_1487042d8 body=43 status=ok
// SIG undefined FUN_1487042d8(void)

void FUN_1487042d8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14870434a FUN_14870434a body=57 status=ok
// SIG undefined FUN_14870434a(void)

void FUN_14870434a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb641e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb641e8 = FUN_140002ddd(FUN_146501ad4,uVar1,L"GbxSkillAliasDef");
  }
  return;
}



// FUNCTION 1487043e0 FUN_1487043e0 body=85 status=ok
// SIG undefined FUN_1487043e0(void)

undefined8 FUN_1487043e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_146130eee(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870445e FUN_14870445e body=59 status=ok
// SIG undefined FUN_14870445e(void)

undefined8 FUN_14870445e(longlong *param_1)

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



// FUNCTION 1487044fe FUN_1487044fe body=34 status=ok
// SIG undefined FUN_1487044fe(void)

undefined8 FUN_1487044fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148704520 FUN_148704520 body=55 status=ok
// SIG undefined FUN_148704520(void)

void FUN_148704520(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64200 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64200 = FUN_140002ddd(FUN_146501b6d,uVar1,L"GbxSkillAnimTrickResolver_Library");
  }
  return;
}



// FUNCTION 1487045a6 FUN_1487045a6 body=73 status=ok
// SIG undefined FUN_1487045a6(void)

undefined1 FUN_1487045a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144983130();
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148704618 FUN_148704618 body=59 status=ok
// SIG undefined FUN_148704618(void)

undefined8 FUN_148704618(longlong *param_1)

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



// FUNCTION 14870465e FUN_14870465e body=33 status=ok
// SIG undefined FUN_14870465e(void)

void FUN_14870465e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_144a2da94(param_2 + 8);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1487046ec FUN_1487046ec body=302 status=ok
// SIG undefined FUN_1487046ec(void)

void FUN_1487046ec(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uStack_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  FUN_148961cbe(param_1,&local_58,uVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148704823 FUN_148704823 body=106 status=ok
// SIG undefined FUN_148704823(void)

void FUN_148704823(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_5;
  local_20 = *param_6;
  uStack_1c = param_6[1];
  uStack_18 = param_6[2];
  uStack_14 = param_6[3];
  local_10 = *(undefined8 *)(param_6 + 4);
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  FUN_1447cd2ec(local_20,&local_40);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870488e FUN_14870488e body=209 status=ok
// SIG undefined FUN_14870488e(void)

void FUN_14870488e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b0 = 0x3002;
  local_a8 = 0;
  local_70 = 0;
  local_68 = 0x200000000;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  local_d8 = param_2;
  FUN_148631430(&local_d0,param_3);
  FUN_1447cd2ec(param_1,&local_d8);
  FUN_1413e0002(&local_d0);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148704960 FUN_148704960 body=193 status=ok
// SIG undefined FUN_148704960(void)

void FUN_148704960(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a0 = 0x3002;
  local_98 = 0;
  local_60 = 0;
  local_58 = 0x200000000;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
  FUN_1486314f8(&local_b8,param_2);
  FUN_1447cd2ec(param_1,&local_b8);
  FUN_141845c68(&local_b8);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148704a27 FUN_148704a27 body=170 status=ok
// SIG undefined FUN_148704a27(void)

void FUN_148704a27(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98 [4];
  undefined2 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60 [4];
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_a0 = param_2;
  FUN_144983130(local_98,param_3);
  FUN_144983130(local_60,param_4);
  FUN_1447cd2ec(param_1,&local_a0);
  FUN_144a2da94(local_60);
  FUN_144a2da94(local_98);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148704b0e FUN_148704b0e body=130 status=ok
// SIG undefined FUN_148704b0e(void)

/* WARNING: Removing unreachable block (ram,0x000148686f6b) */
/* WARNING: Removing unreachable block (ram,0x0001486870ce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_148704b0e(undefined8 param_1,undefined **param_2,longlong param_3,ulonglong param_4,
             undefined1 *param_5)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  uint uVar16;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  wchar_t *pwStack_78;
  code *pcStack_70;
  undefined1 *puStack_68;
  code **ppcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  code *pcStack_38;
  
  pcStack_40 = (code *)0x148704b2c;
  (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 0x10)])(param_2 + 9);
  ppuVar15 = (undefined **)(ulonglong)*(byte *)(param_2 + 7);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 7)) {
  case 0:
    ppuVar15 = param_2 + 1;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 5) * 0x120)
                       );
    ppuVar4 = (undefined **)0x0;
    if (pcVar1 != (code *)0x0) {
      ppuVar4 = ppuVar15;
      if (0x18 < *(ushort *)(param_2 + 4)) {
        ppuVar4 = (undefined **)*ppuVar15;
      }
      pcStack_40 = (code *)0x1414277b8;
      ppuVar4 = (undefined **)(*pcVar1)(ppuVar4);
    }
    if (0x18 < *(ushort *)(param_2 + 4)) {
      ppuVar15 = (undefined **)FUN_1400020a8(*ppuVar15);
      return ppuVar15;
    }
    return ppuVar4;
  case 1:
    puVar7 = param_2[3];
    if (puVar7 == (undefined *)0x0) {
      return ppuVar15;
    }
    break;
  case 2:
    return ppuVar15;
  case 3:
    puVar7 = param_2[5];
    if (puVar7 == (undefined *)0x0) {
      return ppuVar15;
    }
    break;
  case 4:
    ppuVar15 = (undefined **)FUN_14034cca6();
    return ppuVar15;
  case 5:
    *param_2 = switchD_148704b3c::caseD_0;
    *(undefined4 *)(param_2 + 1) = 0x459b2538;
    *(undefined4 *)((longlong)param_2 + 0xc) = 1;
    *(undefined4 *)(param_2 + 2) = 0x48686d7c;
    *(undefined4 *)((longlong)param_2 + 0x14) = 1;
    param_2[3] = (undefined *)0x0;
    *(undefined4 *)(param_2 + 4) = 0x48686f0c;
    pcStack_40 = (code *)0x148686f53;
    FUN_1446dd670(param_2 + 3,0x48686f0c,0);
    ppuVar15 = memcpy(param_2[3],switchD_148704b3c::caseD_3,0x90d0de18);
    return ppuVar15;
  case 6:
    pcStack_40 = (code *)0x148686f8b;
    ppuVar15 = (undefined **)FUN_144a7f96e();
    param_2[3] = switchD_148704b3c::caseD_3;
    param_2[4] = (undefined *)0x148686f0c;
    return ppuVar15;
  case 7:
    ppuVar15 = (undefined **)FUN_1400750e6();
    return ppuVar15;
  case 8:
    FUN_1400020a8(param_2);
    return param_2;
  case 9:
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c20) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c28) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c20) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c28) is written */
    switchD_148704b3c::switchdataD_14b103c20 = (undefined *)0x0;
    PTR_caseD_1_14b103c28 = (undefined *)0x200400000008;
    return &switchD_148704b3c::switchdataD_14b103c20;
  case 10:
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c38) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c38) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c28) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c30) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c28) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c30) is written */
    PTR_caseD_1_14b103c28 = (undefined *)0x0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c48) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c50) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c48) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c50) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c58) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c60) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c58) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c60) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c20) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c20) is written */
    switchD_148704b3c::switchdataD_14b103c20 = (undefined *)&PTR_caseD_34_14b103dc0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c30) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c38) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c30) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c38) is written */
    PTR_caseD_2_14b103c30 = (undefined *)0x0;
    PTR_caseD_3_14b103c38 = (undefined *)0x0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c48) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c48) is written */
    PTR_caseD_4_14b103c40 = (undefined *)0x0;
    PTR_caseD_5_14b103c48 = (undefined *)0x0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c50) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c58) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c50) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c58) is written */
    PTR_caseD_6_14b103c50 = (undefined *)0x0;
    PTR_caseD_7_14b103c58 = (undefined *)0x0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c60) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c60) is written */
    PTR_caseD_8_14b103c60 = &DAT_00000001;
    return &PTR_caseD_34_14b103dc0;
  case 0xb:
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c28) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c28) is written */
    PTR_caseD_1_14b103c28 = (undefined *)((ulonglong)PTR_caseD_1_14b103c28 & 0xffffffffffffff00);
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c20) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c20) is written */
    switchD_148704b3c::switchdataD_14b103c20 = (undefined *)&PTR_caseD_34_14b103dc0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c30) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c38) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c30) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c38) is written */
    PTR_caseD_2_14b103c30 = (undefined *)0x0;
    PTR_caseD_3_14b103c38 = (undefined *)0x0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c48) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c48) is written */
    PTR_caseD_4_14b103c40 = (undefined *)0x0;
    PTR_caseD_5_14b103c48 = (undefined *)0x0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c50) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c58) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c50) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c58) is written */
    PTR_caseD_6_14b103c50 = (undefined *)0x0;
    PTR_caseD_7_14b103c58 = (undefined *)0x0;
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c60) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c60) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c61) is written */
    PTR_caseD_8_14b103c60 = (undefined *)CONCAT71(PTR_caseD_8_14b103c60._1_7_,1);
    return &PTR_caseD_34_14b103dc0;
  case 0xc:
                    /* WARNING: Could not recover jumptable at 0x0001457fab45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar15 = (undefined **)(*_caseD_0)(&switchD_148704b3c::switchdataD_14b103c20,0);
    return ppuVar15;
  case 0xd:
    return (undefined **)0x0;
  case 0xe:
    return (undefined **)0x0;
  case 0xf:
    return ppuVar15;
  case 0x10:
    return (undefined **)0x0;
  case 0x11:
    return (undefined **)0x0;
  case 0x12:
    return ppuVar15;
  case 0x13:
    return ppuVar15;
  case 0x14:
    if ((int)param_4 != 0) {
      param_4 = param_4 & 0xffffffff;
      param_3 = param_3 + 0x28;
      ppuVar15 = &PTR_caseD_5_14b103c48;
      do {
        *(undefined1 *)(ppuVar15 + -4) = *(undefined1 *)(param_3 + -0x20);
        pcStack_40 = (code *)0x148687032;
        FUN_148687156(ppuVar15 + -3,param_3 + -0x18);
        pcStack_40 = (code *)0x14868703d;
        FUN_145c56af0(ppuVar15,param_3);
        *(undefined1 *)(ppuVar15 + 3) = *(undefined1 *)(param_3 + 0x18);
        param_3 = param_3 + 0x48;
        ppuVar15 = ppuVar15 + 9;
        uVar16 = (int)param_4 - 1;
        param_4 = (ulonglong)uVar16;
      } while (uVar16 != 0);
    }
    return (undefined **)0x1;
  case 0x15:
    *param_5 = 0;
    return (undefined **)0x0;
  case 0x16:
    return (undefined **)0x0;
  case 0x17:
    return (undefined **)0x0;
  case 0x18:
    return (undefined **)0x0;
  case 0x19:
    return (undefined **)&DAT_1486871aa;
  case 0x1a:
    return (undefined **)0x0;
  case 0x1b:
    return (undefined **)0x0;
  case 0x1c:
    uVar5 = DAT_14c707940 ^ (ulonglong)&pcStack_38;
    pcStack_40 = (code *)0x1486870a0;
    (**(code **)(*param_2 + 8))(param_2,&stack0xffffffffffffffe8);
    if ((uVar5 ^ (ulonglong)&pcStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      pcStack_40 = (code *)&UNK_1486870bd;
      FUN_144d8e3a0();
    }
    return (undefined **)0x0;
  case 0x1d:
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c68) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c68) is written */
    PTR_caseD_9_14b103c68._0_1_ = 0;
    return ppuVar15;
  case 0x1e:
    return (undefined **)0x82;
  case 0x1f:
                    /* WARNING: Read-only address (ram,0x00014b103c68) is written */
    return ppuVar15;
  case 0x20:
    return (undefined **)0x0;
  case 0x21:
    return (undefined **)&DAT_00000001;
  case 0x22:
    return (undefined **)0x0;
  case 0x23:
    return (undefined **)0x0;
  case 0x24:
    return ppuVar15;
  case 0x25:
    return (undefined **)0x0;
  case 0x26:
    return (undefined **)0x0;
  case 0x27:
    return (undefined **)0x0;
  case 0x28:
    return (undefined **)0x0;
  case 0x29:
    return (undefined **)0x0;
  case 0x2a:
    return (undefined **)0x0;
  case 0x2b:
    return (undefined **)0x0;
  case 0x2c:
    return ppuVar15;
  case 0x2d:
    return (undefined **)0x0;
  case 0x2e:
    return (undefined **)0x0;
  case 0x2f:
    return (undefined **)0x0;
  case 0x30:
    return (undefined **)0x0;
  case 0x31:
    return (undefined **)0x0;
  case 0x32:
    return (undefined **)0x0;
  case 0x33:
    return (undefined **)&DAT_00000020;
  case 0x34:
    FUN_1400020a8(param_2);
    return param_2;
  case 0x35:
    if (DAT_14cb5c108 == (undefined **)0x0) {
      uVar6 = FUN_140325e72();
      DAT_14cb5c108 =
           (undefined **)FUN_140002ddd(FUN_1464d4365,uVar6,L"GbxCondition_SkillCondition");
    }
    return DAT_14cb5c108;
  case 0x36:
    return (undefined **)0x0;
  case 0x37:
    return (undefined **)0x0;
  case 0x38:
    return (undefined **)0x0;
  case 0x39:
    return (undefined **)0x0;
  case 0x3a:
    return (undefined **)0x0;
  case 0x3b:
    return (undefined **)&DAT_00000001;
  case 0x3c:
    return (undefined **)0x0;
  case 0x3d:
    pcStack_38 = (code *)(DAT_14c707940 ^ (ulonglong)auStack_b8);
    pcVar1 = *(code **)(*param_2 + 0x90);
    if (pcVar1 != FUN_1448ff9ec) {
      if (pcVar1 == FUN_140070866) {
        lVar8 = FUN_140070894(param_4);
        if (lVar8 == 0) {
          cVar3 = *(char *)(param_2 + 2) == '\0';
        }
        else {
          cVar3 = *(char *)(lVar8 + 0xe39) == *(char *)(param_2 + 2);
        }
      }
      else {
        cVar3 = (*pcVar1)(param_2,param_3,param_4);
      }
      goto LAB_144aa869a;
    }
    puVar7 = param_2[3];
    if (puVar7 == (undefined *)0x0) {
      uVar6 = FUN_14110242a();
      puVar7 = (undefined *)FUN_14477b664(uVar6);
      param_2[3] = puVar7;
    }
    ppuVar15 = param_2 + 2;
    if (param_2[4] == (undefined *)0x0) {
      cVar3 = '\0';
      if ((puVar7 == (undefined *)0x0) || (*ppuVar15 == (undefined *)0x0)) goto LAB_144aa869a;
      plVar11 = *(longlong **)(puVar7 + 0xb8);
      if ((plVar11 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
        param_2[4] = (undefined *)0x0;
      }
      else {
        uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
        puVar7 = (undefined *)FUN_144aff482(uVar6,ppuVar15);
        param_2[4] = puVar7;
        if (puVar7 != (undefined *)0x0) goto LAB_144aa8633;
      }
    }
    else {
LAB_144aa8633:
      puVar7 = param_2[6];
      if (puVar7 == (undefined *)0x0) {
        uVar6 = FUN_140feeb70();
        puVar7 = (undefined *)FUN_14477b664(uVar6);
        param_2[6] = puVar7;
      }
      ppuVar4 = param_2 + 5;
      if (param_2[7] == (undefined *)0x0) {
        if ((*ppuVar4 != (undefined *)0x0) && (puVar7 != (undefined *)0x0)) {
          plVar11 = *(longlong **)(puVar7 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
            param_2[7] = (undefined *)0x0;
          }
          else {
            uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
            puVar7 = (undefined *)FUN_144aff482(uVar6,ppuVar4);
            param_2[7] = puVar7;
            if (puVar7 != (undefined *)0x0) goto LAB_144aa87e1;
          }
        }
        lVar10 = FUN_1447262c2(param_4);
        if (lVar10 != 0) {
          if (DAT_14cb63988 == 0) {
            ppcStack_60 = &pcStack_40;
            pcStack_40 = FUN_1449e2820;
            pcStack_50 = FUN_14081d0ea;
            pcStack_58 = FUN_14081d0ea;
            puStack_68 = &LAB_1486f5f94;
            pcStack_70 = (code *)&LAB_14106aa88;
            pwStack_78 = L"Engine";
            puStack_80 = (undefined *)0x0;
            uStack_88 = 0x10000000;
            uStack_90 = 8;
            uStack_98 = 0x250;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkill",&DAT_14cb63988,FUN_1464fe9ca);
          }
          if ((*(int *)(DAT_14cb63988 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb63988 + 0x38) * 8) == DAT_14cb63988 + 0x30)) {
LAB_144aa88cf:
            puVar7 = param_2[3];
            if (puVar7 == (undefined *)0x0) {
              uVar6 = FUN_14110242a();
              puVar7 = (undefined *)FUN_14477b664(uVar6);
              param_2[3] = puVar7;
            }
            puVar14 = param_2[4];
            if (puVar14 == (undefined *)0x0) {
              bVar2 = 0;
              if ((puVar7 != (undefined *)0x0) && (*ppuVar15 != (undefined *)0x0)) {
                plVar11 = *(longlong **)(puVar7 + 0xb8);
                if ((plVar11 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
                  param_2[4] = (undefined *)0x0;
                }
                else {
                  uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
                  puVar14 = (undefined *)FUN_144aff482(uVar6,ppuVar15);
                  param_2[4] = puVar14;
                  if (puVar14 != (undefined *)0x0) goto LAB_144aa88e9;
                }
                goto LAB_144aa8913;
              }
            }
            else {
LAB_144aa88e9:
              if ((longlong)*(int *)(lVar10 + 0x50) != 0) {
                plVar11 = *(longlong **)(lVar10 + 0x48);
                lVar8 = (longlong)*(int *)(lVar10 + 0x50) * 0x90;
                do {
                  if ((undefined *)*plVar11 == puVar14) {
                    if (plVar11 != (longlong *)0x0) {
                      bVar2 = *(byte *)(plVar11 + 0x11) & 1;
                      goto LAB_144aa8924;
                    }
                    break;
                  }
                  plVar11 = plVar11 + 0x12;
                  lVar8 = lVar8 + -0x90;
                } while (lVar8 != 0);
              }
LAB_144aa8913:
              bVar2 = 0;
            }
LAB_144aa8924:
            cVar3 = *(byte *)(param_2 + 8) == bVar2;
            goto LAB_144aa869a;
          }
        }
      }
      else {
LAB_144aa87e1:
        plVar11 = (longlong *)FUN_1447262c2(param_4);
        if (plVar11 != (longlong *)0x0) {
          if (DAT_14cb652c0 == 0) {
            ppcStack_60 = &pcStack_40;
            pcStack_40 = FUN_1449e2820;
            pcStack_50 = FUN_14081d0ea;
            pcStack_58 = FUN_1427b09ee;
            puStack_68 = &LAB_148715fe1;
            pcStack_70 = FUN_146508b0f;
            pwStack_78 = L"Engine";
            puStack_80 = (undefined *)0x0;
            uStack_88 = 0x10004001;
            uStack_90 = 8;
            uStack_98 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
          }
          plVar11 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,DAT_14cb652c0);
          if (plVar11 != (longlong *)0x0) {
            if (DAT_14cb652c0 == 0) {
              ppcStack_60 = &pcStack_40;
              pcStack_40 = FUN_1449e2820;
              pcStack_50 = FUN_14081d0ea;
              pcStack_58 = FUN_1427b09ee;
              puStack_68 = &LAB_148715fe1;
              pcStack_70 = FUN_146508b0f;
              pwStack_78 = L"Engine";
              puStack_80 = (undefined *)0x0;
              uStack_88 = 0x10004001;
              uStack_90 = 8;
              uStack_98 = 0x28;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
            }
            plVar12 = (longlong *)FUN_144718840(plVar11,DAT_14cb652c0);
            cVar3 = '\0';
            if ((plVar11 == plVar12) || (plVar12 == (longlong *)0x0)) goto LAB_144aa869a;
            lVar8 = (**(code **)(*plVar12 + 0x10))();
            puVar7 = param_2[6];
            if (puVar7 == (undefined *)0x0) {
              uVar6 = FUN_140feeb70();
              puVar7 = (undefined *)FUN_14477b664(uVar6);
              param_2[6] = puVar7;
            }
            puVar14 = param_2[7];
            if (((puVar14 == (undefined *)0x0) &&
                (puVar14 = (undefined *)0x0, puVar7 != (undefined *)0x0)) &&
               (*ppuVar4 != (undefined *)0x0)) {
              plVar11 = *(longlong **)(puVar7 + 0xb8);
              if ((plVar11 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar11 + 0x108))(), cVar3 == '\0')) {
                puVar14 = (undefined *)0x0;
              }
              else {
                uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
                puVar14 = (undefined *)FUN_144aff482(uVar6,ppuVar4);
              }
              param_2[7] = puVar14;
            }
            if (((*(byte *)(lVar8 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar8 + 0x40) != 0)) {
              lVar9 = 0;
              do {
                lVar10 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + lVar9);
                if (((lVar10 != 0) && ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)) &&
                   (*(undefined **)(lVar10 + 0xa8) == puVar14)) {
                  if ((*(byte *)(lVar10 + 0x248) & 2) == 0) goto LAB_144aa8698;
                  goto LAB_144aa88cf;
                }
                lVar9 = lVar9 + 8;
                cVar3 = '\0';
              } while ((longlong)*(int *)(lVar8 + 0x40) * 8 != lVar9);
              goto LAB_144aa869a;
            }
          }
        }
      }
    }
LAB_144aa8698:
    cVar3 = '\0';
LAB_144aa869a:
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c38) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c38) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c3a) is written */
    PTR_caseD_3_14b103c38 = (undefined *)CONCAT62(PTR_caseD_3_14b103c38._2_6_,4);
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c20) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c20) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c24) is written */
    switchD_148704b3c::switchdataD_14b103c20 =
         (undefined *)
         CONCAT44(switchD_148704b3c::switchdataD_14b103c20._4_4_,
                  (uint)(*(char *)(param_2 + 1) != cVar3));
                    /* WARNING (jumptable): Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c40) is written */
                    /* WARNING: Read-only address (ram,0x00014b103c41) is written */
    PTR_caseD_4_14b103c40 = (undefined *)CONCAT71(PTR_caseD_4_14b103c40._1_7_,1);
    if (((ulonglong)pcStack_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return &switchD_148704b3c::switchdataD_14b103c20;
  case 0x3e:
    return (undefined **)0x0;
  case 0x3f:
    return (undefined **)0x0;
  case 0x40:
    FUN_14162be86(&switchD_148704b3c::switchdataD_14b103c20,0);
    return &switchD_148704b3c::switchdataD_14b103c20;
  case 0x41:
    FUN_14162be86(&switchD_148704b3c::switchdataD_14b103c20,0);
    return &switchD_148704b3c::switchdataD_14b103c20;
  case 0x42:
    return (undefined **)0x0;
  case 0x43:
    return ppuVar15;
  case 0x44:
    return (undefined **)0x0;
  case 0x45:
    return ppuVar15;
  case 0x46:
    uVar5 = DAT_14c707940 ^ (ulonglong)&pwStack_78;
    puVar7 = param_2[3];
    if (puVar7 == (undefined *)0x0) {
      puStack_80 = (undefined *)0x145ddf539;
      uVar6 = FUN_14155b406();
      puStack_80 = (undefined *)0x145ddf541;
      puVar7 = (undefined *)FUN_14477b664(uVar6);
      param_2[3] = puVar7;
    }
    ppuVar15 = param_2 + 2;
    if (param_2[4] == (undefined *)0x0) {
      ppuVar4 = (undefined **)0x0;
      if ((puVar7 == (undefined *)0x0) || (*ppuVar15 == (undefined *)0x0)) goto LAB_145ddf511;
      plVar11 = *(longlong **)(puVar7 + 0xb8);
      if (plVar11 != (longlong *)0x0) {
        puStack_80 = (undefined *)0x145ddf3b7;
        cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11);
        if (cVar3 != '\0') {
          puStack_80 = (undefined *)0x145ddf3cb;
          uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
          puStack_80 = (undefined *)0x145ddf3d6;
          puVar7 = (undefined *)FUN_144aff482(uVar6,ppuVar15);
          param_2[4] = puVar7;
          if (puVar7 != (undefined *)0x0) goto LAB_145ddf3e3;
          goto LAB_145ddf555;
        }
      }
      param_2[4] = (undefined *)0x0;
      goto LAB_145ddf555;
    }
LAB_145ddf3e3:
    puVar7 = param_2[6];
    if (puVar7 == (undefined *)0x0) {
      puStack_80 = (undefined *)0x145ddf3f1;
      uVar6 = FUN_140feeb70();
      puStack_80 = (undefined *)0x145ddf3f9;
      puVar7 = (undefined *)FUN_14477b664(uVar6);
      param_2[6] = puVar7;
    }
    ppuVar4 = param_2 + 5;
    if (param_2[7] == (undefined *)0x0) {
      if ((*ppuVar4 != (undefined *)0x0) && (puVar7 != (undefined *)0x0)) {
        plVar11 = *(longlong **)(puVar7 + 0xb8);
        if (plVar11 != (longlong *)0x0) {
          puStack_80 = (undefined *)0x145ddf57e;
          cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11);
          if (cVar3 != '\0') {
            puStack_80 = (undefined *)0x145ddf592;
            uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
            puStack_80 = (undefined *)0x145ddf59d;
            puVar7 = (undefined *)FUN_144aff482(uVar6,ppuVar4);
            param_2[7] = puVar7;
            if (puVar7 != (undefined *)0x0) goto LAB_145ddf5aa;
            goto LAB_145ddf416;
          }
        }
        param_2[7] = (undefined *)0x0;
      }
LAB_145ddf416:
      puStack_80 = (undefined *)0x145ddf41e;
      lVar8 = FUN_14155b440(param_3);
LAB_145ddf41e:
      if (lVar8 != 0) {
        puVar7 = param_2[3];
        if (puVar7 == (undefined *)0x0) {
          puStack_80 = (undefined *)0x145ddf643;
          uVar6 = FUN_14155b406();
          puStack_80 = (undefined *)0x145ddf64b;
          puVar7 = (undefined *)FUN_14477b664(uVar6);
          param_2[3] = puVar7;
        }
        puVar14 = param_2[4];
        if (((puVar14 == (undefined *)0x0) &&
            (puVar14 = (undefined *)0x0, puVar7 != (undefined *)0x0)) &&
           (*ppuVar15 != (undefined *)0x0)) {
          plVar11 = *(longlong **)(puVar7 + 0xb8);
          if (plVar11 == (longlong *)0x0) {
LAB_145ddf727:
            puVar14 = (undefined *)0x0;
          }
          else {
            puStack_80 = (undefined *)0x145ddf686;
            cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11);
            if (cVar3 == '\0') goto LAB_145ddf727;
            puStack_80 = (undefined *)0x145ddf69a;
            uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
            puStack_80 = (undefined *)0x145ddf6a5;
            puVar14 = (undefined *)FUN_144aff482(uVar6,ppuVar15);
          }
          param_2[4] = puVar14;
        }
        pcStack_58 = (code *)0x0;
        pcStack_50 = (code *)0x0;
        puStack_48 = (undefined *)0x0;
        puStack_80 = (undefined *)0x145ddf45a;
        uVar6 = FUN_14155b406();
        puStack_80 = (undefined *)0x145ddf462;
        pcStack_50 = (code *)FUN_14477b664(uVar6);
        puStack_80 = (undefined *)0x145ddf46c;
        lVar9 = FUN_14155b406();
        puStack_80 = (undefined *)0x145ddf474;
        uVar6 = FUN_14155b406();
        puStack_80 = (undefined *)0x145ddf487;
        FUN_1402d1bfa(&pcStack_38,uVar6,puVar14);
        if (pcStack_58 != pcStack_38) {
          puStack_48 = (undefined *)0x0;
        }
        pcStack_58 = pcStack_38;
        puStack_80 = (undefined *)0x145ddf4a4;
        lVar10 = FUN_14155b406();
        if (lVar9 == 0) {
LAB_145ddf4cc:
          lVar10 = lVar9;
        }
        else if (lVar10 == 0) {
          lVar10 = 0;
        }
        else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                 == lVar10 + 0x30)) goto LAB_145ddf4cc;
        if (pcStack_50 != (code *)lVar10) {
          puStack_48 = (undefined *)0x0;
        }
        puStack_80 = (undefined *)0x145ddf4e2;
        uVar6 = FUN_14477b664(lVar10);
        puStack_80 = (undefined *)0x145ddf4ea;
        pcStack_50 = (code *)FUN_14477b664(uVar6);
        if ((pcStack_38 != (code *)0x0) && (pcStack_50 != (code *)0x0)) {
          puStack_48 = puVar14;
        }
        puStack_80 = (undefined *)0x145ddf50b;
        cVar3 = FUN_140d137fe(lVar8,&pcStack_58);
        ppuVar4 = (undefined **)(ulonglong)(*(char *)(param_2 + 8) == cVar3);
        goto LAB_145ddf511;
      }
    }
    else {
LAB_145ddf5aa:
      puStack_80 = (undefined *)0x145ddf5b2;
      plVar11 = (longlong *)FUN_1447262c2(param_3);
      if (plVar11 != (longlong *)0x0) {
        puStack_80 = (undefined *)0x145ddf5bf;
        uVar6 = FUN_144a7c80a();
        puStack_80 = (undefined *)0x145ddf5cf;
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,uVar6);
        if (plVar11 != (longlong *)0x0) {
          puStack_80 = (undefined *)0x145ddf5dc;
          uVar6 = FUN_144a7c80a();
          puStack_80 = (undefined *)0x145ddf5e7;
          plVar12 = (longlong *)FUN_144718840(plVar11,uVar6);
          if (plVar12 != (longlong *)0x0 && plVar11 != plVar12) {
            puStack_80 = (undefined *)0x145ddf604;
            uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
            puVar7 = param_2[6];
            if (puVar7 == (undefined *)0x0) {
              puStack_80 = (undefined *)0x145ddf615;
              uVar13 = FUN_140feeb70();
              puStack_80 = (undefined *)0x145ddf61d;
              puVar7 = (undefined *)FUN_14477b664(uVar13);
              param_2[6] = puVar7;
            }
            puVar14 = param_2[7];
            if (((puVar14 == (undefined *)0x0) &&
                (puVar14 = (undefined *)0x0, puVar7 != (undefined *)0x0)) &&
               (*ppuVar4 != (undefined *)0x0)) {
              plVar11 = *(longlong **)(puVar7 + 0xb8);
              if (plVar11 == (longlong *)0x0) {
LAB_145ddf72f:
                puVar14 = (undefined *)0x0;
              }
              else {
                puStack_80 = (undefined *)0x145ddf6f3;
                cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11);
                if (cVar3 == '\0') goto LAB_145ddf72f;
                puStack_80 = (undefined *)0x145ddf703;
                uVar13 = (**(code **)(*plVar11 + 0x110))(plVar11);
                puStack_80 = (undefined *)0x145ddf70e;
                puVar14 = (undefined *)FUN_144aff482(uVar13,ppuVar4);
              }
              param_2[7] = puVar14;
            }
            puStack_80 = (undefined *)0x145ddf639;
            lVar8 = FUN_144b39ca2(uVar6,puVar14,0);
            goto LAB_145ddf41e;
          }
        }
      }
    }
LAB_145ddf555:
    ppuVar4 = (undefined **)0x0;
LAB_145ddf511:
    if ((uVar5 ^ (ulonglong)&pwStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      puStack_80 = &UNK_145ddf533;
      FUN_144d8e3a0();
    }
    return ppuVar4;
  }
  if (puVar7 == (undefined *)0x0) {
    return ppuVar15;
  }
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar15 = (undefined **)(**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar7);
  return ppuVar15;
}



// FUNCTION 148704b56 FUN_148704b56 body=63 status=ok
// SIG undefined FUN_148704b56(void)

undefined1 FUN_148704b56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148686d7e(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148704bbe FUN_148704bbe body=59 status=ok
// SIG undefined FUN_148704bbe(void)

undefined8 FUN_148704bbe(longlong *param_1)

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



// FUNCTION 148704c0a FUN_148704c0a body=63 status=ok
// SIG undefined FUN_148704c0a(void)

void FUN_148704c0a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 0x80)])
              (param_2 + 0x48);
    (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_2 + 0x38)])(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148704cce FUN_148704cce body=54 status=ok
// SIG undefined FUN_148704cce(void)

undefined1 FUN_148704cce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148704d2c FUN_148704d2c body=59 status=ok
// SIG undefined FUN_148704d2c(void)

undefined8 FUN_148704d2c(longlong *param_1)

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



// FUNCTION 148704d72 FUN_148704d72 body=32 status=ok
// SIG undefined FUN_148704d72(void)

void FUN_148704d72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140d8c2c6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148704de0 FUN_148704de0 body=113 status=ok
// SIG undefined FUN_148704de0(void)

longlong FUN_148704de0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  if (param_2 != param_1) {
    FUN_140704fa0(param_1 + 0x38,param_2 + 0x38);
  }
  return param_1;
}



// FUNCTION 148704ea2 FUN_148704ea2 body=93 status=ok
// SIG undefined FUN_148704ea2(void)

undefined1 FUN_148704ea2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
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



// FUNCTION 148704f28 FUN_148704f28 body=59 status=ok
// SIG undefined FUN_148704f28(void)

undefined8 FUN_148704f28(longlong *param_1)

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



// FUNCTION 148704f6e FUN_148704f6e body=48 status=ok
// SIG undefined FUN_148704f6e(void)

void FUN_148704f6e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b23dd30;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148704fec FUN_148704fec body=57 status=ok
// SIG undefined FUN_148704fec(void)

undefined8 * FUN_148704fec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148705026 FUN_148705026 body=55 status=ok
// SIG undefined FUN_148705026(void)

void FUN_148705026(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb644d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb644d0 = FUN_140002ddd(FUN_146503359,uVar1,L"GbxSkillComponentDataItem");
  }
  return;
}



// FUNCTION 14870505e FUN_14870505e body=106 status=ok
// SIG undefined FUN_14870505e(void)

void FUN_14870505e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
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
  *(ulong *)(param_2 + 4) = local_28.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487050ca FUN_1487050ca body=106 status=ok
// SIG undefined FUN_1487050ca(void)

void FUN_1487050ca(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
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
  *(ulong *)(param_2 + 4) = local_28.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870515a FUN_14870515a body=93 status=ok
// SIG undefined FUN_14870515a(void)

undefined1 FUN_14870515a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_146130eee(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487051e0 FUN_1487051e0 body=59 status=ok
// SIG undefined FUN_1487051e0(void)

undefined8 FUN_1487051e0(longlong *param_1)

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



// FUNCTION 1487052ea FUN_1487052ea body=59 status=ok
// SIG undefined FUN_1487052ea(void)

undefined8 FUN_1487052ea(longlong *param_1)

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



// FUNCTION 14870538a FUN_14870538a body=29 status=ok
// SIG undefined FUN_14870538a(void)

undefined8 FUN_14870538a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487053a8 FUN_1487053a8 body=55 status=ok
// SIG undefined FUN_1487053a8(void)

void FUN_1487053a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64518 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64518 = FUN_140002ddd(FUN_1418574a4,uVar1,L"GbxSkillComponentActivationStrategy");
  }
  return;
}



// FUNCTION 1487053e0 FUN_1487053e0 body=42 status=ok
// SIG undefined FUN_1487053e0(void)

undefined8 FUN_1487053e0(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/GbxSkillComponentActivation.h"
                ,0x21,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentActivationStrategy::Attach");
  return 0;
}



// FUNCTION 14870540a FUN_14870540a body=42 status=ok
// SIG undefined FUN_14870540a(void)

undefined8 FUN_14870540a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/GbxSkillComponentActivation.h"
                ,0x20,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentActivationStrategy::Attach");
  return 0;
}



// FUNCTION 148705484 FUN_148705484 body=59 status=ok
// SIG undefined FUN_148705484(void)

undefined8 FUN_148705484(longlong *param_1)

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



// FUNCTION 148705556 FUN_148705556 body=62 status=ok
// SIG undefined FUN_148705556(void)

undefined1 FUN_148705556(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_145c43818(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487055bc FUN_1487055bc body=59 status=ok
// SIG undefined FUN_1487055bc(void)

undefined8 FUN_1487055bc(longlong *param_1)

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



// FUNCTION 1487056aa FUN_1487056aa body=62 status=ok
// SIG undefined FUN_1487056aa(void)

undefined1 FUN_1487056aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148705710 FUN_148705710 body=59 status=ok
// SIG undefined FUN_148705710(void)

undefined8 FUN_148705710(longlong *param_1)

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



// FUNCTION 148705756 FUN_148705756 body=34 status=ok
// SIG undefined FUN_148705756(void)

void FUN_148705756(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148705824(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1487057c6 FUN_1487057c6 body=38 status=ok
// SIG undefined FUN_1487057c6(void)

undefined8 FUN_1487057c6(undefined8 param_1,int param_2)

{
  FUN_148705824();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487057ec FUN_1487057ec body=55 status=ok
// SIG undefined FUN_1487057ec(void)

void FUN_1487057ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64560 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64560 =
         FUN_140002ddd(FUN_14650365b,uVar1,
                       L"GbxSkillComponentActivationStrategy_SkillStateCondition");
  }
  return;
}



// FUNCTION 148705824 FUN_148705824 body=66 status=ok
// SIG undefined FUN_148705824(void)

void FUN_148705824(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b23e530;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014870585b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487058f8 FUN_1487058f8 body=59 status=ok
// SIG undefined FUN_1487058f8(void)

undefined8 FUN_1487058f8(longlong *param_1)

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



// FUNCTION 1487059c6 FUN_1487059c6 body=113 status=ok
// SIG undefined FUN_1487059c6(void)

undefined1 FUN_1487059c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x14 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
      *(undefined4 *)(plVar1 + 3) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
      *(undefined4 *)(plVar1 + 4) = uVar10;
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148705a60 FUN_148705a60 body=59 status=ok
// SIG undefined FUN_148705a60(void)

undefined8 FUN_148705a60(longlong *param_1)

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



// FUNCTION 148705b26 FUN_148705b26 body=110 status=ok
// SIG undefined FUN_148705b26(void)

undefined1 FUN_148705b26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined1 *)(plVar1 + 2) = *(undefined1 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148705bbc FUN_148705bbc body=59 status=ok
// SIG undefined FUN_148705bbc(void)

undefined8 FUN_148705bbc(longlong *param_1)

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



// FUNCTION 148705cd2 FUN_148705cd2 body=59 status=ok
// SIG undefined FUN_148705cd2(void)

undefined8 FUN_148705cd2(longlong *param_1)

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



// FUNCTION 148705d74 FUN_148705d74 body=43 status=ok
// SIG undefined FUN_148705d74(void)

void FUN_148705d74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b242fa0;
  return;
}



// FUNCTION 148705db6 FUN_148705db6 body=62 status=ok
// SIG undefined FUN_148705db6(void)

undefined1 FUN_148705db6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148705e1c FUN_148705e1c body=59 status=ok
// SIG undefined FUN_148705e1c(void)

undefined8 FUN_148705e1c(longlong *param_1)

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



// FUNCTION 148705e62 FUN_148705e62 body=43 status=ok
// SIG undefined FUN_148705e62(void)

void FUN_148705e62(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148705ed4 FUN_148705ed4 body=57 status=ok
// SIG undefined FUN_148705ed4(void)

void FUN_148705ed4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb645f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb645f0 = FUN_140002ddd(FUN_1465033ed,uVar1,L"GbxSkillComponentIdentifierDef");
  }
  return;
}



// FUNCTION 148705f0e FUN_148705f0e body=28 status=ok
// SIG undefined FUN_148705f0e(void)

undefined8 FUN_148705f0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148705f8c FUN_148705f8c body=59 status=ok
// SIG undefined FUN_148705f8c(void)

undefined8 FUN_148705f8c(longlong *param_1)

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



// FUNCTION 14870602e FUN_14870602e body=48 status=ok
// SIG undefined FUN_14870602e(void)

void FUN_14870602e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b23ef20;
  FUN_144a7a8f6(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



// FUNCTION 148706074 FUN_148706074 body=89 status=ok
// SIG undefined FUN_148706074(void)

undefined8 FUN_148706074(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_145c56af0(param_2,param_3);
      FUN_146130eee(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487060f6 FUN_1487060f6 body=59 status=ok
// SIG undefined FUN_1487060f6(void)

undefined8 FUN_1487060f6(longlong *param_1)

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



// FUNCTION 148706196 FUN_148706196 body=55 status=ok
// SIG undefined FUN_148706196(void)

void FUN_148706196(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64620 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64620 = FUN_140002ddd(FUN_1465039f3,uVar1,L"GbxSkillComponentResolver");
  }
  return;
}



// FUNCTION 1487061e6 FUN_1487061e6 body=56 status=ok
// SIG undefined FUN_1487061e6(void)

void FUN_1487061e6(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000148706213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148706234 FUN_148706234 body=70 status=ok
// SIG undefined FUN_148706234(void)

undefined8 FUN_148706234(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487062a2 FUN_1487062a2 body=59 status=ok
// SIG undefined FUN_1487062a2(void)

undefined8 FUN_1487062a2(longlong *param_1)

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



// FUNCTION 1487062e8 FUN_1487062e8 body=64 status=ok
// SIG undefined FUN_1487062e8(void)

void FUN_1487062e8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
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
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1487063ac FUN_1487063ac body=60 status=ok
// SIG undefined FUN_1487063ac(void)

undefined1 FUN_1487063ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148704de0(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 148706410 FUN_148706410 body=59 status=ok
// SIG undefined FUN_148706410(void)

undefined8 FUN_148706410(longlong *param_1)

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



// FUNCTION 148706456 FUN_148706456 body=32 status=ok
// SIG undefined FUN_148706456(void)

void FUN_148706456(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140d8c2c6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1487064c6 FUN_1487064c6 body=146 status=ok
// SIG undefined FUN_1487064c6(void)

void FUN_1487064c6(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b23f360;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870655a FUN_14870655a body=138 status=ok
// SIG undefined FUN_14870655a(void)

void FUN_14870655a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b23f360;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14870660a FUN_14870660a body=89 status=ok
// SIG undefined FUN_14870660a(void)

undefined1 FUN_14870660a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_146130eee(param_2 + -0x30,param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_145c43818(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870668c FUN_14870668c body=59 status=ok
// SIG undefined FUN_14870668c(void)

undefined8 FUN_14870668c(longlong *param_1)

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



// FUNCTION 14870672c FUN_14870672c body=29 status=ok
// SIG undefined FUN_14870672c(void)

undefined8 FUN_14870672c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870674a FUN_14870674a body=55 status=ok
// SIG undefined FUN_14870674a(void)

void FUN_14870674a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64680 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64680 = FUN_140002ddd(FUN_146503bdf,uVar1,L"GbxSkillComponentData_Activatable");
  }
  return;
}



// FUNCTION 1487067ea FUN_1487067ea body=83 status=ok
// SIG undefined FUN_1487067ea(void)

undefined1 FUN_1487067ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_144a787a6(param_2 + -0x20,param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148706866 FUN_148706866 body=59 status=ok
// SIG undefined FUN_148706866(void)

undefined8 FUN_148706866(longlong *param_1)

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



// FUNCTION 1487068ac FUN_1487068ac body=34 status=ok
// SIG undefined FUN_1487068ac(void)

void FUN_1487068ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1458e29aa(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14870691c FUN_14870691c body=38 status=ok
// SIG undefined FUN_14870691c(void)

undefined8 FUN_14870691c(undefined8 param_1,int param_2)

{
  FUN_1458e29aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148706942 FUN_148706942 body=55 status=ok
// SIG undefined FUN_148706942(void)

void FUN_148706942(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64698 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64698 =
         FUN_140002ddd(FUN_146503c73,uVar1,L"GbxSkillComponentData_ActivationChannelItem");
  }
  return;
}



// FUNCTION 14870697a FUN_14870697a body=116 status=ok
// SIG undefined FUN_14870697a(void)

void FUN_14870697a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
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
  *(ulong *)(param_2 + 4) = local_28.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_28.Data4._4_4_;
  *param_2 = &PTR_FUN_14b23f660;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487069f0 FUN_1487069f0 body=116 status=ok
// SIG undefined FUN_1487069f0(void)

void FUN_1487069f0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
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
  *(ulong *)(param_2 + 4) = local_28.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_28.Data4._4_4_;
  *param_2 = &PTR_FUN_14b23f660;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148706a8a FUN_148706a8a body=93 status=ok
// SIG undefined FUN_148706a8a(void)

undefined1 FUN_148706a8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_146130eee(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148706b10 FUN_148706b10 body=59 status=ok
// SIG undefined FUN_148706b10(void)

undefined8 FUN_148706b10(longlong *param_1)

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



// FUNCTION 148706bb0 FUN_148706bb0 body=29 status=ok
// SIG undefined FUN_148706bb0(void)

undefined8 FUN_148706bb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148706bce FUN_148706bce body=55 status=ok
// SIG undefined FUN_148706bce(void)

void FUN_148706bce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb646b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb646b0 = FUN_140002ddd(FUN_146503d05,uVar1,L"GbxSkillComponentData_ActivationChannels");
  }
  return;
}



// FUNCTION 148706c06 FUN_148706c06 body=54 status=ok
// SIG undefined FUN_148706c06(void)

undefined8 * FUN_148706c06(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/GbxSkillComponent_ActivationChannels.h"
                ,0x1d,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentData_ActivationChannels::SpawnActivationChannelComponent");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148706c3c FUN_148706c3c body=45 status=ok
// SIG undefined FUN_148706c3c(void)

undefined8 FUN_148706c3c(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/GbxSkillComponent_ActivationChannels.h"
                ,0x1f,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentData_ActivationChannels::GetNumChannelItems");
  return 0xffffffff;
}



// FUNCTION 148706c6a FUN_148706c6a body=42 status=ok
// SIG undefined FUN_148706c6a(void)

undefined8 FUN_148706c6a(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/GbxSkillComponent_ActivationChannels.h"
                ,0x20,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponentData_ActivationChannels::GetChannelItem");
  return 0;
}



// FUNCTION 148706c96 FUN_148706c96 body=89 status=ok
// SIG undefined FUN_148706c96(void)

void FUN_148706c96(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1413ea01e(param_2);
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *param_2 = &PTR_FUN_14b242ff0;
  param_2[10] = &PTR_FUN_14b243050;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 148706cf0 FUN_148706cf0 body=73 status=ok
// SIG undefined FUN_148706cf0(void)

void FUN_148706cf0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *param_2 = &PTR_FUN_14b242ff0;
  param_2[10] = &PTR_FUN_14b243050;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 148706d5e FUN_148706d5e body=63 status=ok
// SIG undefined FUN_148706d5e(void)

undefined1 FUN_148706d5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148706f40(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148706dc6 FUN_148706dc6 body=59 status=ok
// SIG undefined FUN_148706dc6(void)

undefined8 FUN_148706dc6(longlong *param_1)

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



// FUNCTION 148706e12 FUN_148706e12 body=40 status=ok
// SIG undefined FUN_148706e12(void)

void FUN_148706e12(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1459b3c46(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148706e88 FUN_148706e88 body=38 status=ok
// SIG undefined FUN_148706e88(void)

undefined8 FUN_148706e88(undefined8 param_1,int param_2)

{
  FUN_1459b3c46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148706eae FUN_148706eae body=55 status=ok
// SIG undefined FUN_148706eae(void)

void FUN_148706eae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb646c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb646c8 = FUN_140002ddd(FUN_146503d97,uVar1,L"GbxSkillComponent_ActivationChannels");
  }
  return;
}



// FUNCTION 148706eea FUN_148706eea body=41 status=ok
// SIG undefined FUN_148706eea(void)

void FUN_148706eea(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/GbxSkillComponent_ActivationChannels.h"
                ,0x3b,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponent_ActivationChannels::OnItemActivated");
  return;
}



// FUNCTION 148706f14 FUN_148706f14 body=41 status=ok
// SIG undefined FUN_148706f14(void)

void FUN_148706f14(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Skills/Components/GbxSkillComponent_ActivationChannels.h"
                ,0x3c,L"Pure virtual not implemented (%s)",
                L"FGbxSkillComponent_ActivationChannels::OnItemDeactivated");
  return;
}



// FUNCTION 148706f40 FUN_148706f40 body=120 status=ok
// SIG undefined FUN_148706f40(void)

longlong FUN_148706f40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_148704de0();
  FUN_148706fb8(param_1 + 0x58,param_2 + 0x58);
  uVar6 = *(undefined4 *)(param_2 + 0x6c);
  uVar7 = *(undefined4 *)(param_2 + 0x70);
  uVar8 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar7;
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  lVar4 = *(longlong *)(param_2 + 0x80);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(longlong *)(param_1 + 0x80) = lVar4;
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
  return param_1;
}



// FUNCTION 148706fb8 FUN_148706fb8 body=93 status=ok
// SIG undefined FUN_148706fb8(void)

undefined8 * FUN_148706fb8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1414280cb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148707016(param_1,iVar1);
      FUN_148707078(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148707016 FUN_148707016 body=98 status=ok
// SIG undefined FUN_148707016(void)

void FUN_148707016(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148707078 FUN_148707078 body=45 status=ok
// SIG undefined FUN_148707078(void)

void FUN_148707078(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1487070a6 FUN_1487070a6 body=113 status=ok
// SIG undefined FUN_1487070a6(void)

void FUN_1487070a6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1413ea01e(param_2);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) & 0xf8;
  *param_2 = &PTR_FUN_14b2426c0;
  param_2[10] = &PTR_FUN_14b242710;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148707118 FUN_148707118 body=97 status=ok
// SIG undefined FUN_148707118(void)

void FUN_148707118(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) & 0xf8;
  *param_2 = &PTR_FUN_14b2426c0;
  param_2[10] = &PTR_FUN_14b242710;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 14870719e FUN_14870719e body=63 status=ok
// SIG undefined FUN_14870719e(void)

undefined1 FUN_14870719e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870732a(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148707206 FUN_148707206 body=59 status=ok
// SIG undefined FUN_148707206(void)

undefined8 FUN_148707206(longlong *param_1)

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



// FUNCTION 148707252 FUN_148707252 body=40 status=ok
// SIG undefined FUN_148707252(void)

void FUN_148707252(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_146211382(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1487072c8 FUN_1487072c8 body=38 status=ok
// SIG undefined FUN_1487072c8(void)

undefined8 FUN_1487072c8(undefined8 param_1,int param_2)

{
  FUN_146211382();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487072ee FUN_1487072ee body=57 status=ok
// SIG undefined FUN_1487072ee(void)

void FUN_1487072ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb646e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb646e0 = FUN_140002ddd(FUN_146503e29,uVar1,L"GbxSkillComponent_AOE_Gps");
  }
  return;
}



// FUNCTION 14870732a FUN_14870732a body=286 status=ok
// SIG undefined FUN_14870732a(void)

longlong FUN_14870732a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_148704de0();
  FUN_148707448(param_1 + 0x50,param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(longlong *)(param_1 + 0x78) = lVar4;
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
  uVar6 = *(undefined4 *)(param_2 + 0x84);
  uVar7 = *(undefined4 *)(param_2 + 0x88);
  uVar8 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  lVar4 = *(longlong *)(param_2 + 0x98);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(longlong *)(param_1 + 0x98) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar6 = *(undefined4 *)(param_2 + 0xa4);
  uVar7 = *(undefined4 *)(param_2 + 0xa8);
  uVar8 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  lVar4 = *(longlong *)(param_2 + 0xc0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(longlong *)(param_1 + 0xc0) = lVar4;
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
  return param_1;
}



// FUNCTION 148707448 FUN_148707448 body=93 status=ok
// SIG undefined FUN_148707448(void)

longlong FUN_148707448(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 1487074a6 FUN_1487074a6 body=171 status=ok
// SIG undefined FUN_1487074a6(void)

void FUN_1487074a6(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b23fcb0;
  *(undefined1 *)(param_2 + 6) = 1;
  param_2[7] = 0;
  FUN_14112fbd2(param_2 + 8);
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  param_2[0x58] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  param_2[0x5b] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148707576 FUN_148707576 body=63 status=ok
// SIG undefined FUN_148707576(void)

undefined1 FUN_148707576(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487076da(param_2,param_3);
    param_3 = param_3 + 0x2e0;
    param_2 = param_2 + 0x2e0;
  }
  return 1;
}



// FUNCTION 1487075de FUN_1487075de body=59 status=ok
// SIG undefined FUN_1487075de(void)

undefined8 FUN_1487075de(longlong *param_1)

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



// FUNCTION 14870762a FUN_14870762a body=40 status=ok
// SIG undefined FUN_14870762a(void)

void FUN_14870762a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_145ca1a4e(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 1487076a0 FUN_1487076a0 body=57 status=ok
// SIG undefined FUN_1487076a0(void)

void FUN_1487076a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb646f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb646f8 = FUN_140002ddd(FUN_146503ebb,uVar1,L"GbxSkillComponentData_AOE_Gps");
  }
  return;
}



// FUNCTION 1487076da FUN_1487076da body=99 status=ok
// SIG undefined FUN_1487076da(void)

longlong FUN_1487076da(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_14054d68c(param_1 + 0x38,param_2 + 0x38);
  FUN_14870773e(param_1 + 0x2b0,param_2 + 0x2b0);
  FUN_1401f3db8(param_1 + 0x2c8,param_2 + 0x2c8);
  return param_1;
}



// FUNCTION 14870773e FUN_14870773e body=84 status=ok
// SIG undefined FUN_14870773e(void)

longlong * FUN_14870773e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148707794 FUN_148707794 body=80 status=ok
// SIG undefined FUN_148707794(void)

void FUN_148707794(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
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
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b242730;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 1487077e4 FUN_1487077e4 body=43 status=ok
// SIG undefined FUN_1487077e4(void)

void FUN_1487077e4(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b242730;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 148707834 FUN_148707834 body=54 status=ok
// SIG undefined FUN_148707834(void)

undefined1 FUN_148707834(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487079a8(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148707892 FUN_148707892 body=59 status=ok
// SIG undefined FUN_148707892(void)

undefined8 FUN_148707892(longlong *param_1)

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



// FUNCTION 1487078d8 FUN_1487078d8 body=34 status=ok
// SIG undefined FUN_1487078d8(void)

void FUN_1487078d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1457f3d9a(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148707948 FUN_148707948 body=38 status=ok
// SIG undefined FUN_148707948(void)

undefined8 FUN_148707948(undefined8 param_1,int param_2)

{
  FUN_1457f3d9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870796e FUN_14870796e body=57 status=ok
// SIG undefined FUN_14870796e(void)

void FUN_14870796e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64748 = FUN_140002ddd(FUN_14650401f,uVar1,L"GbxSkillComponent_AttributeEffectEx");
  }
  return;
}



// FUNCTION 1487079a8 FUN_1487079a8 body=89 status=ok
// SIG undefined FUN_1487079a8(void)

longlong FUN_1487079a8(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_148704de0();
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  lVar3 = *(longlong *)(param_2 + 0x58);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(longlong *)(param_1 + 0x58) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_148707a02(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148707a02 FUN_148707a02 body=93 status=ok
// SIG undefined FUN_148707a02(void)

undefined8 * FUN_148707a02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410ac1a1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148707a60(param_1,iVar1);
      FUN_148707ac2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148707a60 FUN_148707a60 body=98 status=ok
// SIG undefined FUN_148707a60(void)

void FUN_148707a60(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148707ac2 FUN_148707ac2 body=45 status=ok
// SIG undefined FUN_148707ac2(void)

void FUN_148707ac2(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148707b74 FUN_148707b74 body=63 status=ok
// SIG undefined FUN_148707b74(void)

undefined1 FUN_148707b74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148707d4e(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148707bdc FUN_148707bdc body=59 status=ok
// SIG undefined FUN_148707bdc(void)

undefined8 FUN_148707bdc(longlong *param_1)

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



// FUNCTION 148707c28 FUN_148707c28 body=38 status=ok
// SIG undefined FUN_148707c28(void)

void FUN_148707c28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_148707cc8(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148707c90 FUN_148707c90 body=55 status=ok
// SIG undefined FUN_148707c90(void)

void FUN_148707c90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64760 = FUN_140002ddd(FUN_1465040b1,uVar1,L"GbxSkillComponent_AttributeEffect_SpecEx");
  }
  return;
}



// FUNCTION 148707cc8 FUN_148707cc8 body=133 status=ok
// SIG undefined FUN_148707cc8(void)

void FUN_148707cc8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b240080;
  FUN_140b47c46(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x14];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148707d4e FUN_148707d4e body=143 status=ok
// SIG undefined FUN_148707d4e(void)

longlong FUN_148707d4e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if ((*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) ||
     (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30))) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_140d02432(param_1 + 0x40,param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  FUN_1401f3db8(param_1 + 0x98,param_2 + 0x98);
  FUN_148707dde(param_1 + 0xb0,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 148707dde FUN_148707dde body=93 status=ok
// SIG undefined FUN_148707dde(void)

undefined8 * FUN_148707dde(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b47c46(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148707e3c(param_1,iVar1);
      FUN_1404e37a8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148707e3c FUN_148707e3c body=115 status=ok
// SIG undefined FUN_148707e3c(void)

void FUN_148707e3c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148707eb0 FUN_148707eb0 body=142 status=ok
// SIG undefined FUN_148707eb0(void)

void FUN_148707eb0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b2401f0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148707f56 FUN_148707f56 body=54 status=ok
// SIG undefined FUN_148707f56(void)

undefined1 FUN_148707f56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487080d6(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148707fb4 FUN_148707fb4 body=59 status=ok
// SIG undefined FUN_148707fb4(void)

undefined8 FUN_148707fb4(longlong *param_1)

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



// FUNCTION 148707ffa FUN_148707ffa body=32 status=ok
// SIG undefined FUN_148707ffa(void)

void FUN_148707ffa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14870805c(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870805c FUN_14870805c body=122 status=ok
// SIG undefined FUN_14870805c(void)

void FUN_14870805c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2401f0;
  FUN_140b47bad(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b47c46(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x0001487080cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487080d6 FUN_1487080d6 body=85 status=ok
// SIG undefined FUN_1487080d6(void)

longlong FUN_1487080d6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_1401f3db8(param_1 + 0x30,param_2 + 0x30);
  FUN_148707dde(param_1 + 0x48,param_2 + 0x48);
  FUN_14870812c(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14870812c FUN_14870812c body=93 status=ok
// SIG undefined FUN_14870812c(void)

undefined8 * FUN_14870812c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b47bad(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14870818a(param_1,iVar1);
      FUN_1487081fd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14870818a FUN_14870818a body=115 status=ok
// SIG undefined FUN_14870818a(void)

void FUN_14870818a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,8);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487081fd FUN_1487081fd body=60 status=ok
// SIG undefined FUN_1487081fd(void)

void FUN_1487081fd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14870823a(param_1,param_2);
    param_1 = param_1 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return;
}



// FUNCTION 14870823a FUN_14870823a body=346 status=ok
// SIG undefined FUN_14870823a(void)

undefined8 * FUN_14870823a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar2;
  *param_1 = &PTR_FUN_14b240080;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  FUN_144a7f96e(param_1 + 9,param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar2;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x90);
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_1401f3db8(param_1 + 0x13,param_2 + 0x98);
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_148707e3c(param_1 + 0x16,iVar1,0);
    FUN_1404e37a8(param_1[0x16],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148708396 FUN_148708396 body=87 status=ok
// SIG undefined FUN_148708396(void)

void FUN_148708396(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14b240380;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x13) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x14) = 3;
  return;
}



// FUNCTION 148708464 FUN_148708464 body=63 status=ok
// SIG undefined FUN_148708464(void)

undefined1 FUN_148708464(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487085f2(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1487084cc FUN_1487084cc body=59 status=ok
// SIG undefined FUN_1487084cc(void)

undefined8 FUN_1487084cc(longlong *param_1)

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



// FUNCTION 148708518 FUN_148708518 body=40 status=ok
// SIG undefined FUN_148708518(void)

void FUN_148708518(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1457f72cc(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14870858e FUN_14870858e body=55 status=ok
// SIG undefined FUN_14870858e(void)

void FUN_14870858e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64790 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64790 = FUN_140002ddd(FUN_1465041d5,uVar1,L"GbxSkillComponent_AttributeEffect_Spec");
  }
  return;
}



// FUNCTION 1487085c6 FUN_1487085c6 body=38 status=ok
// SIG undefined FUN_1487085c6(void)

undefined8 FUN_1487085c6(undefined8 param_1,int param_2)

{
  FUN_1457f72cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487085f2 FUN_1487085f2 body=119 status=ok
// SIG undefined FUN_1487085f2(void)

longlong FUN_1487085f2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_148707dde(param_1 + 0x28,param_2 + 0x28);
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_140d02432(param_1 + 0x50,param_2 + 0x50);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14870866a FUN_14870866a body=108 status=ok
// SIG undefined FUN_14870866a(void)

void FUN_14870866a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *param_2 = &PTR_FUN_14b242780;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 1487086d6 FUN_1487086d6 body=88 status=ok
// SIG undefined FUN_1487086d6(void)

void FUN_1487086d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *param_2 = &PTR_FUN_14b242780;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 148708752 FUN_148708752 body=63 status=ok
// SIG undefined FUN_148708752(void)

undefined1 FUN_148708752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870891e(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 1487087ba FUN_1487087ba body=59 status=ok
// SIG undefined FUN_1487087ba(void)

undefined8 FUN_1487087ba(longlong *param_1)

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



// FUNCTION 148708806 FUN_148708806 body=38 status=ok
// SIG undefined FUN_148708806(void)

void FUN_148708806(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_141069158(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14870887a FUN_14870887a body=38 status=ok
// SIG undefined FUN_14870887a(void)

undefined8 FUN_14870887a(undefined8 param_1,int param_2)

{
  FUN_141069158();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487088a0 FUN_1487088a0 body=57 status=ok
// SIG undefined FUN_1487088a0(void)

void FUN_1487088a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb647a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb647a8 = FUN_140002ddd(FUN_146504267,uVar1,L"GbxSkillComponent_AttributeEffect");
  }
  return;
}



// FUNCTION 1487088da FUN_1487088da body=60 status=ok
// SIG undefined FUN_1487088da(void)

undefined8 * FUN_1487088da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2431f0;
  FUN_141069212(param_1 + 0xb);
  FUN_140d8c2c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14870891e FUN_14870891e body=127 status=ok
// SIG undefined FUN_14870891e(void)

longlong FUN_14870891e(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_148704de0();
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_1487089fc(param_1 + 0x58,param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  lVar3 = *(longlong *)(param_2 + 0xa0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(longlong *)(param_1 + 0xa0) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_14870899e(param_1 + 0xa8,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 14870899e FUN_14870899e body=93 status=ok
// SIG undefined FUN_14870899e(void)

undefined8 * FUN_14870899e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410691c9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148708b56(param_1,iVar1);
      FUN_148708bb8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487089fc FUN_1487089fc body=98 status=ok
// SIG undefined FUN_1487089fc(void)

longlong FUN_1487089fc(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  FUN_148708a5e();
  FUN_141368656(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_148708a3c;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x2c) = uVar1;
  }
LAB_148708a3c:
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 148708a5e FUN_148708a5e body=93 status=ok
// SIG undefined FUN_148708a5e(void)

undefined8 * FUN_148708a5e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410692cb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148708abc(param_1,iVar1);
      FUN_148708b1e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148708abc FUN_148708abc body=98 status=ok
// SIG undefined FUN_148708abc(void)

void FUN_148708abc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148708b1e FUN_148708b1e body=55 status=ok
// SIG undefined FUN_148708b1e(void)

void FUN_148708b1e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      uVar2 = ((undefined8 *)(param_2 + lVar3))[1];
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
      *(undefined8 *)(param_1 + 0x10 + lVar3) = *(undefined8 *)(param_2 + 0x10 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x18 + lVar3);
      *(longlong *)(param_1 + 0x18 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148708b56 FUN_148708b56 body=98 status=ok
// SIG undefined FUN_148708b56(void)

void FUN_148708b56(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148708bb8 FUN_148708bb8 body=45 status=ok
// SIG undefined FUN_148708bb8(void)

void FUN_148708bb8(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148708be6 FUN_148708be6 body=162 status=ok
// SIG undefined FUN_148708be6(void)

void FUN_148708be6(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b240660;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148708c8a FUN_148708c8a body=146 status=ok
// SIG undefined FUN_148708c8a(void)

void FUN_148708c8a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14b240660;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148708d34 FUN_148708d34 body=54 status=ok
// SIG undefined FUN_148708d34(void)

undefined1 FUN_148708d34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148708e74(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148708d92 FUN_148708d92 body=59 status=ok
// SIG undefined FUN_148708d92(void)

undefined8 FUN_148708d92(longlong *param_1)

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



// FUNCTION 148708dd8 FUN_148708dd8 body=34 status=ok
// SIG undefined FUN_148708dd8(void)

void FUN_148708dd8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1457f7232(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148708e48 FUN_148708e48 body=38 status=ok
// SIG undefined FUN_148708e48(void)

undefined8 FUN_148708e48(undefined8 param_1,int param_2)

{
  FUN_1457f7294();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148708e74 FUN_148708e74 body=91 status=ok
// SIG undefined FUN_148708e74(void)

longlong FUN_148708e74(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_145c43818(param_1 + 0x38,param_2 + 0x38);
  FUN_148707dde(param_1 + 0x50,param_2 + 0x50);
  FUN_148708ed0(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148708ed0 FUN_148708ed0 body=93 status=ok
// SIG undefined FUN_148708ed0(void)

undefined8 * FUN_148708ed0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457f726b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148708f2e(param_1,iVar1);
      FUN_148708fa0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148708f2e FUN_148708f2e body=114 status=ok
// SIG undefined FUN_148708f2e(void)

void FUN_148708f2e(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148708fa0 FUN_148708fa0 body=60 status=ok
// SIG undefined FUN_148708fa0(void)

void FUN_148708fa0(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148708fdc(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return;
}



// FUNCTION 148708fdc FUN_148708fdc body=153 status=ok
// SIG undefined FUN_148708fdc(void)

undefined8 * FUN_148708fdc(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_148709076();
  *param_1 = &PTR_FUN_14b240380;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  FUN_144a7f96e(param_1 + 0xb,param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148709076 FUN_148709076 body=189 status=ok
// SIG undefined FUN_148709076(void)

undefined8 * FUN_148709076(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *param_1 = &PTR_FUN_14b240390;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_148707e3c(param_1 + 5,iVar1,0);
    FUN_1404e37a8(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148709134 FUN_148709134 body=92 status=ok
// SIG undefined FUN_148709134(void)

void FUN_148709134(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
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
  param_2[0xe] = 0;
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b2427f0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 148709190 FUN_148709190 body=51 status=ok
// SIG undefined FUN_148709190(void)

void FUN_148709190(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413ea01e(param_2);
  *param_2 = &PTR_FUN_14b2427f0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1487091e8 FUN_1487091e8 body=54 status=ok
// SIG undefined FUN_1487091e8(void)

undefined1 FUN_1487091e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870935c(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148709246 FUN_148709246 body=59 status=ok
// SIG undefined FUN_148709246(void)

undefined8 FUN_148709246(longlong *param_1)

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



// FUNCTION 14870928c FUN_14870928c body=34 status=ok
// SIG undefined FUN_14870928c(void)

void FUN_14870928c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1458c71b6(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1487092fc FUN_1487092fc body=38 status=ok
// SIG undefined FUN_1487092fc(void)

undefined8 FUN_1487092fc(undefined8 param_1,int param_2)

{
  FUN_1458c71b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148709322 FUN_148709322 body=57 status=ok
// SIG undefined FUN_148709322(void)

void FUN_148709322(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb647f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb647f0 = FUN_140002ddd(FUN_1465043b9,uVar1,L"GbxSkillComponent_DamageModifierEx");
  }
  return;
}



// FUNCTION 14870935c FUN_14870935c body=116 status=ok
// SIG undefined FUN_14870935c(void)

longlong FUN_14870935c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148704de0();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
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
  FUN_1487093d0(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 1487093d0 FUN_1487093d0 body=95 status=ok
// SIG undefined FUN_1487093d0(void)

undefined8 * FUN_1487093d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458c721b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148709430(param_1,iVar1);
      FUN_148709492(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148709430 FUN_148709430 body=98 status=ok
// SIG undefined FUN_148709430(void)

void FUN_148709430(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148709492 FUN_148709492 body=45 status=ok
// SIG undefined FUN_148709492(void)

void FUN_148709492(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148709506 FUN_148709506 body=54 status=ok
// SIG undefined FUN_148709506(void)

undefined1 FUN_148709506(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487096cc(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148709564 FUN_148709564 body=59 status=ok
// SIG undefined FUN_148709564(void)

undefined8 FUN_148709564(longlong *param_1)

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



// FUNCTION 1487095aa FUN_1487095aa body=32 status=ok
// SIG undefined FUN_1487095aa(void)

void FUN_1487095aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148709644(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14870960c FUN_14870960c body=55 status=ok
// SIG undefined FUN_14870960c(void)

void FUN_14870960c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64808 = FUN_140002ddd(FUN_14650444b,uVar1,L"GbxSkillComponentDataItem_DamageModifierEx")
    ;
  }
  return;
}



// FUNCTION 148709644 FUN_148709644 body=135 status=ok
// SIG undefined FUN_148709644(void)

void FUN_148709644(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b240a30;
  FUN_140b47c46(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487096cc FUN_1487096cc body=93 status=ok
// SIG undefined FUN_1487096cc(void)

longlong FUN_1487096cc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_14861620a(param_1 + 0x28,param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  FUN_1401f3db8(param_1 + 0x40,param_2 + 0x40);
  FUN_148707dde(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 14870972a FUN_14870972a body=142 status=ok
// SIG undefined FUN_14870972a(void)

void FUN_14870972a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b42ad00;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *(ulong *)(param_2 + 4) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48.Data4._4_4_;
  *param_2 = &PTR_FUN_14b240ba0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487097d0 FUN_1487097d0 body=54 status=ok
// SIG undefined FUN_1487097d0(void)

undefined1 FUN_1487097d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14870998a(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14870982e FUN_14870982e body=59 status=ok
// SIG undefined FUN_14870982e(void)

undefined8 FUN_14870982e(longlong *param_1)

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



// FUNCTION 148709874 FUN_148709874 body=32 status=ok
// SIG undefined FUN_148709874(void)

void FUN_148709874(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148709910(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1487098d6 FUN_1487098d6 body=57 status=ok
// SIG undefined FUN_1487098d6(void)

void FUN_1487098d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64820 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64820 = FUN_140002ddd(FUN_1465044dd,uVar1,L"GbxSkillComponentData_DamageModifierEx");
  }
  return;
}



// FUNCTION 148709910 FUN_148709910 body=122 status=ok
// SIG undefined FUN_148709910(void)

void FUN_148709910(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b240ba0;
  FUN_1410a53ff(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b47c46(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x000148709986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14870998a FUN_14870998a body=85 status=ok
// SIG undefined FUN_14870998a(void)

longlong FUN_14870998a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_146130eee(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_1401f3db8(param_1 + 0x30,param_2 + 0x30);
  FUN_148707dde(param_1 + 0x48,param_2 + 0x48);
  FUN_1487099e0(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 1487099e0 FUN_1487099e0 body=93 status=ok
// SIG undefined FUN_1487099e0(void)

undefined8 * FUN_1487099e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410a53ff(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148709a3e(param_1,iVar1);
      FUN_148709aad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148709a3e FUN_148709a3e body=111 status=ok
// SIG undefined FUN_148709a3e(void)

void FUN_148709a3e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148709aad FUN_148709aad body=52 status=ok
// SIG undefined FUN_148709aad(void)

void FUN_148709aad(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148709ae2(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148709ae2 FUN_148709ae2 body=288 status=ok
// SIG undefined FUN_148709ae2(void)

undefined8 * FUN_148709ae2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_FUN_14b23dd30;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *param_1 = &PTR_FUN_14b240a30;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_14861625a(param_1 + 5,iVar1,0);
    FUN_1486162cd(param_1[5],uVar2,iVar1);
  }
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x38);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1401f3db8(param_1 + 8,param_2 + 0x40);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_148707e3c(param_1 + 0xb,iVar1,0);
    FUN_1404e37a8(param_1[0xb],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148709c04 FUN_148709c04 body=111 status=ok
// SIG undefined FUN_148709c04(void)

void FUN_148709c04(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *param_2 = &PTR_FUN_14b242840;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148709c74 FUN_148709c74 body=91 status=ok
// SIG undefined FUN_148709c74(void)

void FUN_148709c74(undefined8 param_1,undefined8 *param_2)

{
  FUN_145c43014(param_2);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *param_2 = &PTR_FUN_14b242840;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 148709cf4 FUN_148709cf4 body=63 status=ok
// SIG undefined FUN_148709cf4(void)

undefined1 FUN_148709cf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148709eac(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148709d5c FUN_148709d5c body=59 status=ok
// SIG undefined FUN_148709d5c(void)

undefined8 FUN_148709d5c(longlong *param_1)

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



// FUNCTION 148709da8 FUN_148709da8 body=40 status=ok
// SIG undefined FUN_148709da8(void)

void FUN_148709da8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_145c3a504(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148709e1e FUN_148709e1e body=38 status=ok
// SIG undefined FUN_148709e1e(void)

undefined8 FUN_148709e1e(undefined8 param_1,int param_2)

{
  FUN_145c3a504();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148709e44 FUN_148709e44 body=57 status=ok
// SIG undefined FUN_148709e44(void)

void FUN_148709e44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64838 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64838 = FUN_140002ddd(FUN_14650456f,uVar1,L"GbxSkillComponent_DamageModifier");
  }
  return;
}



// FUNCTION 148709e7e FUN_148709e7e body=38 status=ok
// SIG undefined FUN_148709e7e(void)

undefined8 FUN_148709e7e(undefined8 param_1,int param_2)

{
  FUN_145c3a550();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148709eac FUN_148709eac body=157 status=ok
// SIG undefined FUN_148709eac(void)

longlong FUN_148709eac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148704de0();
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_1487089fc(param_1 + 0x58,param_2 + 0x58);
  FUN_148709f4a(param_1 + 0x98,param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  lVar4 = *(longlong *)(param_2 + 0xb0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = lVar4;
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
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  return param_1;
}



// FUNCTION 148709f4a FUN_148709f4a body=95 status=ok
// SIG undefined FUN_148709f4a(void)

undefined8 * FUN_148709f4a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c3a5a7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148709faa(param_1,iVar1);
      FUN_14870a01d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148709faa FUN_148709faa body=115 status=ok
// SIG undefined FUN_148709faa(void)

void FUN_148709faa(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14870a01d FUN_14870a01d body=52 status=ok
// SIG undefined FUN_14870a01d(void)

void FUN_14870a01d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14870a052(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 14870a052 FUN_14870a052 body=131 status=ok
// SIG undefined FUN_14870a052(void)

undefined8 * FUN_14870a052(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  puVar2 = (undefined8 *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 10;
  }
  else {
    _Src = param_2 + 1;
    if (puVar2 != (undefined8 *)0x0) {
      _Src = puVar2;
    }
    FUN_14870a0d6(param_1 + 1,iVar1,0);
    puVar2 = (undefined8 *)param_1[6];
    if ((undefined8 *)param_1[6] == (undefined8 *)0x0) {
      puVar2 = param_1 + 1;
    }
    memcpy(puVar2,_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 14870a0d6 FUN_14870a0d6 body=101 status=ok
// SIG undefined FUN_14870a0d6(void)

void FUN_14870a0d6(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 10;
    if (10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146815104(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x34) = param_3;
  return;
}



// FUNCTION 14870a1ac FUN_14870a1ac body=147 status=ok
// SIG undefined FUN_14870a1ac(void)

undefined1 FUN_14870a1ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      FUN_148707dde(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      FUN_14861620a(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      *(undefined1 *)(param_2 + lVar6 + 0x48) = *(undefined1 *)(param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14870a268 FUN_14870a268 body=59 status=ok
// SIG undefined FUN_14870a268(void)

undefined8 FUN_14870a268(longlong *param_1)

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


