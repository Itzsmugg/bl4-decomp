// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148728e75 FUN_148728e75 body=134 status=ok
// SIG undefined FUN_148728e75(void)

void FUN_148728e75(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148728f1a FUN_148728f1a body=63 status=ok
// SIG undefined FUN_148728f1a(void)

undefined1 FUN_148728f1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148729034(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 148728f82 FUN_148728f82 body=59 status=ok
// SIG undefined FUN_148728f82(void)

undefined8 FUN_148728f82(longlong *param_1)

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



// FUNCTION 148728fce FUN_148728fce body=38 status=ok
// SIG undefined FUN_148728fce(void)

void FUN_148728fce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_140f71356(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 148729034 FUN_148729034 body=229 status=ok
// SIG undefined FUN_148729034(void)

longlong FUN_148729034(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147e1a790();
  FUN_14872911a(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  if ((*(longlong *)(param_1 + 0xa8) != *(longlong *)(param_2 + 0xa8)) ||
     (*(int *)(param_1 + 0xb0) != *(int *)(param_2 + 0xb0))) {
    *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  FUN_148729178(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  FUN_148729378(param_1 + 0x100,param_2 + 0x100);
  FUN_148615fc0(param_1 + 0x150,param_2 + 0x150);
  return param_1;
}



// FUNCTION 14872911a FUN_14872911a body=93 status=ok
// SIG undefined FUN_14872911a(void)

undefined8 * FUN_14872911a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f7145d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487291d6(param_1,iVar1);
      FUN_148729249(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148729178 FUN_148729178 body=93 status=ok
// SIG undefined FUN_148729178(void)

undefined8 * FUN_148729178(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f7142a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872927e(param_1,iVar1);
      FUN_1487292f1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487291d6 FUN_1487291d6 body=115 status=ok
// SIG undefined FUN_1487291d6(void)

void FUN_1487291d6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148729249 FUN_148729249 body=52 status=ok
// SIG undefined FUN_148729249(void)

void FUN_148729249(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14872927e FUN_14872927e body=115 status=ok
// SIG undefined FUN_14872927e(void)

void FUN_14872927e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487292f1 FUN_1487292f1 body=134 status=ok
// SIG undefined FUN_1487292f1(void)

void FUN_1487292f1(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148729378 FUN_148729378 body=122 status=ok
// SIG undefined FUN_148729378(void)

longlong FUN_148729378(longlong param_1,longlong param_2)

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
    FUN_1487293f2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487293f2 FUN_1487293f2 body=211 status=ok
// SIG undefined FUN_1487293f2(void)

undefined8 * FUN_1487293f2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c08b02(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
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
          FUN_1487294c6(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1487294c6 FUN_1487294c6 body=114 status=ok
// SIG undefined FUN_1487294c6(void)

undefined8 * FUN_1487294c6(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14872953a FUN_14872953a body=28 status=ok
// SIG undefined FUN_14872953a(void)

undefined8 FUN_14872953a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487295da FUN_1487295da body=131 status=ok
// SIG undefined FUN_1487295da(void)

undefined8 FUN_1487295da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined4 *)(param_2 + lVar1 + 0x18) = *(undefined4 *)(param_3 + lVar1 + 0x18);
      FUN_148729780(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1487297d4(param_2 + lVar1 + 0x38,param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148729686 FUN_148729686 body=59 status=ok
// SIG undefined FUN_148729686(void)

undefined8 FUN_148729686(longlong *param_1)

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



// FUNCTION 1487296cc FUN_1487296cc body=43 status=ok
// SIG undefined FUN_1487296cc(void)

void FUN_1487296cc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148729746 FUN_148729746 body=57 status=ok
// SIG undefined FUN_148729746(void)

void FUN_148729746(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66480 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66480 = FUN_140002ddd(FUN_14650ee35,uVar1,L"GbxStandInGlobals");
  }
  return;
}



// FUNCTION 148729780 FUN_148729780 body=84 status=ok
// SIG undefined FUN_148729780(void)

longlong * FUN_148729780(longlong *param_1,longlong *param_2)

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



// FUNCTION 1487297d4 FUN_1487297d4 body=84 status=ok
// SIG undefined FUN_1487297d4(void)

longlong * FUN_1487297d4(longlong *param_1,longlong *param_2)

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



// FUNCTION 14872982a FUN_14872982a body=40 status=ok
// SIG undefined FUN_14872982a(void)

void FUN_14872982a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 148729852 FUN_148729852 body=34 status=ok
// SIG undefined FUN_148729852(void)

void FUN_148729852(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 148729898 FUN_148729898 body=42 status=ok
// SIG undefined FUN_148729898(void)

undefined8 FUN_148729898(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487298ea FUN_1487298ea body=59 status=ok
// SIG undefined FUN_1487298ea(void)

undefined8 FUN_1487298ea(longlong *param_1)

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



// FUNCTION 14872998a FUN_14872998a body=29 status=ok
// SIG undefined FUN_14872998a(void)

undefined8 FUN_14872998a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487299a8 FUN_1487299a8 body=55 status=ok
// SIG undefined FUN_1487299a8(void)

void FUN_1487299a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb664c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb664c8 = FUN_140002ddd(FUN_14650efdb,uVar1,L"GbxStandInScene_Element");
  }
  return;
}



// FUNCTION 1487299e0 FUN_1487299e0 body=79 status=ok
// SIG undefined FUN_1487299e0(void)

void FUN_1487299e0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b27ff60;
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
  return;
}



// FUNCTION 148729a46 FUN_148729a46 body=146 status=ok
// SIG undefined FUN_148729a46(void)

undefined8 FUN_148729a46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
    do {
      puVar5 = (undefined8 *)(param_3 + -0x78);
      puVar6 = (undefined8 *)(param_2 + -0x78);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148729b00 FUN_148729b00 body=59 status=ok
// SIG undefined FUN_148729b00(void)

undefined8 FUN_148729b00(longlong *param_1)

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



// FUNCTION 148729b4c FUN_148729b4c body=38 status=ok
// SIG undefined FUN_148729b4c(void)

void FUN_148729b4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_148729bec(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148729bb4 FUN_148729bb4 body=55 status=ok
// SIG undefined FUN_148729bb4(void)

void FUN_148729bb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb664e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb664e0 = FUN_140002ddd(FUN_14650f03c,uVar1,L"GbxStandInScene_Background");
  }
  return;
}



// FUNCTION 148729bec FUN_148729bec body=65 status=ok
// SIG undefined FUN_148729bec(void)

void FUN_148729bec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b27ff60;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148729c2e FUN_148729c2e body=63 status=ok
// SIG undefined FUN_148729c2e(void)

void FUN_148729c2e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b2800d0;
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x42b40000;
  return;
}



// FUNCTION 148729c84 FUN_148729c84 body=63 status=ok
// SIG undefined FUN_148729c84(void)

undefined8 FUN_148729c84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0x70;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar7);
      puVar2 = (undefined8 *)(param_3 + -0x60 + lVar7);
      puVar5 = puVar2;
      puVar6 = puVar1 + -0xc;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar3 = puVar2[0xd];
      *puVar1 = puVar2[0xc];
      puVar1[1] = uVar3;
      lVar7 = lVar7 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148729cec FUN_148729cec body=59 status=ok
// SIG undefined FUN_148729cec(void)

undefined8 FUN_148729cec(longlong *param_1)

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



// FUNCTION 148729d8c FUN_148729d8c body=55 status=ok
// SIG undefined FUN_148729d8c(void)

void FUN_148729d8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb664f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb664f8 = FUN_140002ddd(FUN_14650f0d3,uVar1,L"GbxStandInScene_CameraPerspective");
  }
  return;
}



// FUNCTION 148729dc4 FUN_148729dc4 body=74 status=ok
// SIG undefined FUN_148729dc4(void)

void FUN_148729dc4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x42b40000;
  *param_2 = &PTR_FUN_14b280240;
  FUN_144894d4c(param_2 + 0x10);
  return;
}



// FUNCTION 148729e24 FUN_148729e24 body=107 status=ok
// SIG undefined FUN_148729e24(void)

undefined8 FUN_148729e24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
    do {
      puVar5 = (undefined8 *)(param_3 + -0x70);
      puVar6 = (undefined8 *)(param_2 + -0x70);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_14477b16e(param_2,param_3);
      param_3 = param_3 + 0x940;
      param_2 = param_2 + 0x940;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148729eb8 FUN_148729eb8 body=59 status=ok
// SIG undefined FUN_148729eb8(void)

undefined8 FUN_148729eb8(longlong *param_1)

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



// FUNCTION 148729f04 FUN_148729f04 body=38 status=ok
// SIG undefined FUN_148729f04(void)

void FUN_148729f04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x940) == '\x01') {
    FUN_148729fa4(param_2);
    *(undefined1 *)(param_2 + 0x940) = 0;
  }
  return;
}



// FUNCTION 148729f6c FUN_148729f6c body=55 status=ok
// SIG undefined FUN_148729f6c(void)

void FUN_148729f6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66510 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66510 = FUN_140002ddd(FUN_14650f16b,uVar1,L"GbxStandInScene_Camera");
  }
  return;
}



// FUNCTION 148729fa4 FUN_148729fa4 body=65 status=ok
// SIG undefined FUN_148729fa4(void)

void FUN_148729fa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b280240;
  if (param_1[0x126] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x115] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148729fe6 FUN_148729fe6 body=94 status=ok
// SIG undefined FUN_148729fe6(void)

void FUN_148729fe6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0x90);
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b2803b0;
  param_2[0xe] = &DAT_3f8000003f800000;
  param_2[0xf] = 0x3f8000003e99999a;
  *(undefined4 *)(param_2 + 0x10) = 0x447a0000;
  return;
}



// FUNCTION 14872a044 FUN_14872a044 body=72 status=ok
// SIG undefined FUN_14872a044(void)

void FUN_14872a044(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b2803b0;
  param_2[0xe] = &DAT_3f8000003f800000;
  param_2[0xf] = 0x3f8000003e99999a;
  *(undefined4 *)(param_2 + 0x10) = 0x447a0000;
  *(byte *)((longlong)param_2 + 0x84) = *(byte *)((longlong)param_2 + 0x84) & 0xfe;
  return;
}



// FUNCTION 14872a0a2 FUN_14872a0a2 body=74 status=ok
// SIG undefined FUN_14872a0a2(void)

undefined8 FUN_14872a0a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0x70;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar7);
      puVar2 = (undefined8 *)(param_3 + -0x60 + lVar7);
      puVar5 = puVar2;
      puVar6 = puVar1 + -0xc;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined8 *)((longlong)puVar1 + 0xd) = *(undefined8 *)((longlong)puVar2 + 0x6d);
      uVar3 = puVar2[0xd];
      *puVar1 = puVar2[0xc];
      puVar1[1] = uVar3;
      lVar7 = lVar7 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872a114 FUN_14872a114 body=59 status=ok
// SIG undefined FUN_14872a114(void)

undefined8 FUN_14872a114(longlong *param_1)

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



// FUNCTION 14872a1bc FUN_14872a1bc body=55 status=ok
// SIG undefined FUN_14872a1bc(void)

void FUN_14872a1bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66528 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66528 = FUN_140002ddd(FUN_14650f201,uVar1,L"GbxStandInScene_Wind");
  }
  return;
}



// FUNCTION 14872a1f4 FUN_14872a1f4 body=50 status=ok
// SIG undefined FUN_14872a1f4(void)

void FUN_14872a1f4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b280520;
  return;
}



// FUNCTION 14872a226 FUN_14872a226 body=44 status=ok
// SIG undefined FUN_14872a226(void)

void FUN_14872a226(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b280520;
  return;
}



// FUNCTION 14872a276 FUN_14872a276 body=42 status=ok
// SIG undefined FUN_14872a276(void)

undefined8 FUN_14872a276(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872a2c8 FUN_14872a2c8 body=59 status=ok
// SIG undefined FUN_14872a2c8(void)

undefined8 FUN_14872a2c8(longlong *param_1)

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



// FUNCTION 14872a368 FUN_14872a368 body=29 status=ok
// SIG undefined FUN_14872a368(void)

undefined8 FUN_14872a368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872a386 FUN_14872a386 body=55 status=ok
// SIG undefined FUN_14872a386(void)

void FUN_14872a386(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66540 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66540 = FUN_140002ddd(FUN_14650f297,uVar1,L"GbxStandInScene_DynamicElement");
  }
  return;
}



// FUNCTION 14872a3be FUN_14872a3be body=94 status=ok
// SIG undefined FUN_14872a3be(void)

void FUN_14872a3be(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b280690;
  param_2[0xe] = DAT_14caa8578;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined2 *)(param_2 + 0x12) = 1;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 14872a432 FUN_14872a432 body=133 status=ok
// SIG undefined FUN_14872a432(void)

undefined8 FUN_14872a432(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
    do {
      puVar2 = (undefined8 *)(param_3 + -0x68);
      puVar3 = (undefined8 *)(param_2 + -0x68);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14872a5b8(param_2,param_3);
      *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_3 + 0x18);
      FUN_140862116(param_2 + 0x20,param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872a4e0 FUN_14872a4e0 body=59 status=ok
// SIG undefined FUN_14872a4e0(void)

undefined8 FUN_14872a4e0(longlong *param_1)

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



// FUNCTION 14872a580 FUN_14872a580 body=55 status=ok
// SIG undefined FUN_14872a580(void)

void FUN_14872a580(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66558 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66558 = FUN_140002ddd(FUN_14650f32d,uVar1,L"GbxStandInScene_StandIn");
  }
  return;
}



// FUNCTION 14872a5b8 FUN_14872a5b8 body=84 status=ok
// SIG undefined FUN_14872a5b8(void)

longlong * FUN_14872a5b8(longlong *param_1,longlong *param_2)

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



// FUNCTION 14872a60e FUN_14872a60e body=54 status=ok
// SIG undefined FUN_14872a60e(void)

void FUN_14872a60e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b280800;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 14872a644 FUN_14872a644 body=51 status=ok
// SIG undefined FUN_14872a644(void)

void FUN_14872a644(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b280800;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



// FUNCTION 14872a68e FUN_14872a68e body=94 status=ok
// SIG undefined FUN_14872a68e(void)

undefined1 FUN_14872a68e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      puVar2 = (undefined8 *)(param_3 + -0x60);
      puVar3 = (undefined8 *)(param_2 + -0x60);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_1406fa324(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872a714 FUN_14872a714 body=59 status=ok
// SIG undefined FUN_14872a714(void)

undefined8 FUN_14872a714(longlong *param_1)

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



// FUNCTION 14872a760 FUN_14872a760 body=54 status=ok
// SIG undefined FUN_14872a760(void)

void FUN_14872a760(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b280800;
    if (param_2[0xe] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14872a7e0 FUN_14872a7e0 body=55 status=ok
// SIG undefined FUN_14872a7e0(void)

void FUN_14872a7e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66570 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66570 = FUN_140002ddd(FUN_14650f3c3,uVar1,L"GbxStandInScene_InventoryModel");
  }
  return;
}



// FUNCTION 14872a89a FUN_14872a89a body=116 status=ok
// SIG undefined FUN_14872a89a(void)

undefined8 FUN_14872a89a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar8);
      lVar2 = param_2 + 0x18 + lVar8;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      uVar7 = puVar1[6];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar4 = *(undefined4 *)(puVar1 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      uVar6 = *(undefined4 *)(puVar1 + 8);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      *(undefined8 *)(lVar2 + 0x18) = uVar7;
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      *(undefined4 *)(lVar2 + 0x28) = uVar6;
      lVar8 = lVar8 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872a936 FUN_14872a936 body=59 status=ok
// SIG undefined FUN_14872a936(void)

undefined8 FUN_14872a936(longlong *param_1)

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



// FUNCTION 14872a97c FUN_14872a97c body=38 status=ok
// SIG undefined FUN_14872a97c(void)

void FUN_14872a97c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14872aa82 FUN_14872aa82 body=59 status=ok
// SIG undefined FUN_14872aa82(void)

undefined8 FUN_14872aa82(longlong *param_1)

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



// FUNCTION 14872ab24 FUN_14872ab24 body=84 status=ok
// SIG undefined FUN_14872ab24(void)

void FUN_14872ab24(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[4] = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[4] = &PTR_FUN_14b2800d0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0x42b40000;
  return;
}



// FUNCTION 14872ab8e FUN_14872ab8e body=124 status=ok
// SIG undefined FUN_14872ab8e(void)

undefined1 FUN_14872ab8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872acec(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    puVar5 = (undefined8 *)(param_3 + 0x30);
    puVar6 = (undefined8 *)(param_2 + 0x30);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar1 = *(undefined4 *)(param_3 + 0x94);
    uVar2 = *(undefined4 *)(param_3 + 0x98);
    uVar3 = *(undefined4 *)(param_3 + 0x9c);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    *(undefined4 *)(param_2 + 0x94) = uVar1;
    *(undefined4 *)(param_2 + 0x98) = uVar2;
    *(undefined4 *)(param_2 + 0x9c) = uVar3;
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14872ac32 FUN_14872ac32 body=59 status=ok
// SIG undefined FUN_14872ac32(void)

undefined8 FUN_14872ac32(longlong *param_1)

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



// FUNCTION 14872ac7e FUN_14872ac7e body=43 status=ok
// SIG undefined FUN_14872ac7e(void)

void FUN_14872ac7e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0x14] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 14872acec FUN_14872acec body=89 status=ok
// SIG undefined FUN_14872acec(void)

undefined8 * FUN_14872acec(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14872ad46(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 14872ad46 FUN_14872ad46 body=115 status=ok
// SIG undefined FUN_14872ad46(void)

void FUN_14872ad46(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872add8 FUN_14872add8 body=63 status=ok
// SIG undefined FUN_14872add8(void)

undefined1 FUN_14872add8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872b0d2(param_2,param_3);
    param_3 = param_3 + 0xc40;
    param_2 = param_2 + 0xc40;
  }
  return 1;
}



// FUNCTION 14872ae40 FUN_14872ae40 body=59 status=ok
// SIG undefined FUN_14872ae40(void)

undefined8 FUN_14872ae40(longlong *param_1)

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



// FUNCTION 14872ae8c FUN_14872ae8c body=38 status=ok
// SIG undefined FUN_14872ae8c(void)

void FUN_14872ae8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc40) == '\x01') {
    FUN_140fd5be4(param_2);
    *(undefined1 *)(param_2 + 0xc40) = 0;
  }
  return;
}



// FUNCTION 14872aef8 FUN_14872aef8 body=473 status=ok
// SIG undefined FUN_14872aef8(void)

undefined8 * FUN_14872aef8(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b280d90;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = &PTR_FUN_14b27fdf0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[8] = &PTR_FUN_14b280800;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x1a;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x42b40000;
  param_1[0x18] = &PTR_FUN_14b280240;
  FUN_144894d4c(param_1 + 0x28);
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x148;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x146] = &PTR_FUN_14b2800d0;
  param_1[0x154] = 0;
  *(undefined1 *)(param_1 + 0x155) = 0;
  *(undefined4 *)((longlong)param_1 + 0xaac) = 0x42b40000;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x15c;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x15a] = &PTR_FUN_14b2800d0;
  param_1[0x168] = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4c) = 0x42b40000;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc34);
  *(undefined1 *)(param_1 + 0x16f) = 0;
  *(undefined1 **)((longlong)param_1 + 0xb7c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0xb84) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0xb8c) = 0;
  *(undefined4 *)(param_1 + 0x172) = 0x3f800000;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  *(undefined1 *)(param_1 + 0x175) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x178;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x176] = &PTR_FUN_14b2803b0;
  param_1[0x184] = &DAT_3f8000003f800000;
  param_1[0x185] = 0x3f8000003e99999a;
  *(undefined4 *)(param_1 + 0x186) = 0x447a0000;
  *(uint *)((longlong)param_1 + 0xc34) = uVar1 & 0xfffffffe;
  return param_1;
}



// FUNCTION 14872b0d2 FUN_14872b0d2 body=461 status=ok
// SIG undefined FUN_14872b0d2(void)

longlong FUN_14872b0d2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1486c70ac(param_1 + 0x18,param_2 + 0x18);
  FUN_14872b2a0(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  puVar10 = (undefined8 *)(param_2 + 0x50);
  puVar11 = (undefined8 *)(param_1 + 0x50);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_1406fa324(param_1 + 0xb0,param_2 + 0xb0);
  puVar10 = (undefined8 *)(param_2 + 0xd0);
  puVar11 = (undefined8 *)(param_1 + 0xd0);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  FUN_14477b16e(param_1 + 0x140,param_2 + 0x140);
  FUN_14872b2fe(param_1 + 0xa00,param_2 + 0xa00);
  FUN_14872acec(param_1 + 0xa10,param_2 + 0xa10);
  *(undefined1 *)(param_1 + 0xa20) = *(undefined1 *)(param_2 + 0xa20);
  puVar10 = (undefined8 *)(param_2 + 0xa40);
  puVar11 = (undefined8 *)(param_1 + 0xa40);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xaa4);
  uVar2 = *(undefined4 *)(param_2 + 0xaa8);
  uVar3 = *(undefined4 *)(param_2 + 0xaac);
  *(undefined4 *)(param_1 + 0xaa0) = *(undefined4 *)(param_2 + 0xaa0);
  *(undefined4 *)(param_1 + 0xaa4) = uVar1;
  *(undefined4 *)(param_1 + 0xaa8) = uVar2;
  *(undefined4 *)(param_1 + 0xaac) = uVar3;
  FUN_14872acec(param_1 + 0xab0,param_2 + 0xab0);
  *(undefined1 *)(param_1 + 0xac0) = *(undefined1 *)(param_2 + 0xac0);
  puVar10 = (undefined8 *)(param_2 + 0xae0);
  puVar11 = (undefined8 *)(param_1 + 0xae0);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar8 = *(undefined8 *)(param_2 + 0xb48);
  *(undefined8 *)(param_1 + 0xb40) = *(undefined8 *)(param_2 + 0xb40);
  *(undefined8 *)(param_1 + 0xb48) = uVar8;
  *(undefined8 *)(param_1 + 0xb50) = *(undefined8 *)(param_2 + 0xb50);
  uVar1 = *(undefined4 *)(param_2 + 0xb5c);
  uVar2 = *(undefined4 *)(param_2 + 0xb60);
  uVar3 = *(undefined4 *)(param_2 + 0xb64);
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xb58);
  *(undefined4 *)(param_1 + 0xb5c) = uVar1;
  *(undefined4 *)(param_1 + 0xb60) = uVar2;
  *(undefined4 *)(param_1 + 0xb64) = uVar3;
  FUN_144a787a6(param_1 + 0xb68,param_2 + 0xb68);
  uVar1 = *(undefined4 *)(param_2 + 0xb7c);
  uVar2 = *(undefined4 *)(param_2 + 0xb80);
  uVar3 = *(undefined4 *)(param_2 + 0xb84);
  uVar4 = *(undefined4 *)(param_2 + 0xb84);
  uVar5 = *(undefined4 *)(param_2 + 0xb88);
  uVar6 = *(undefined4 *)(param_2 + 0xb8c);
  uVar7 = *(undefined4 *)(param_2 + 0xb90);
  *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_2 + 0xb78);
  *(undefined4 *)(param_1 + 0xb7c) = uVar1;
  *(undefined4 *)(param_1 + 0xb80) = uVar2;
  *(undefined4 *)(param_1 + 0xb84) = uVar3;
  *(undefined4 *)(param_1 + 0xb84) = uVar4;
  *(undefined4 *)(param_1 + 0xb88) = uVar5;
  *(undefined4 *)(param_1 + 0xb8c) = uVar6;
  *(undefined4 *)(param_1 + 0xb90) = uVar7;
  FUN_14872b34e(param_1 + 0xb98,param_2 + 0xb98);
  *(undefined1 *)(param_1 + 0xba8) = *(undefined1 *)(param_2 + 0xba8);
  puVar10 = (undefined8 *)(param_2 + 0xbc0);
  puVar11 = (undefined8 *)(param_1 + 0xbc0);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined8 *)(param_1 + 0xc2d) = *(undefined8 *)(param_2 + 0xc2d);
  uVar8 = *(undefined8 *)(param_2 + 0xc28);
  *(undefined8 *)(param_1 + 0xc20) = *(undefined8 *)(param_2 + 0xc20);
  *(undefined8 *)(param_1 + 0xc28) = uVar8;
  return param_1;
}



// FUNCTION 14872b2a0 FUN_14872b2a0 body=93 status=ok
// SIG undefined FUN_14872b2a0(void)

undefined8 * FUN_14872b2a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fd5d79(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145ca4120(param_1,iVar1);
      FUN_145ca4193(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872b2fe FUN_14872b2fe body=79 status=ok
// SIG undefined FUN_14872b2fe(void)

undefined8 * FUN_14872b2fe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14872b3ac(param_1,iVar1);
      FUN_14872b40e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872b34e FUN_14872b34e body=93 status=ok
// SIG undefined FUN_14872b34e(void)

undefined8 * FUN_14872b34e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fd5d7a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872b46c(param_1,iVar1);
      FUN_14872b4df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872b3ac FUN_14872b3ac body=98 status=ok
// SIG undefined FUN_14872b3ac(void)

void FUN_14872b3ac(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14872b40e FUN_14872b40e body=94 status=ok
// SIG undefined FUN_14872b40e(void)

void FUN_14872b40e(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar7);
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar7);
      *puVar1 = &PTR_FUN_14b27fdf0;
      puVar5 = puVar2;
      puVar6 = puVar1 + 2;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *puVar1 = &PTR_FUN_14b2800d0;
      uVar3 = puVar2[0xd];
      puVar1[0xe] = puVar2[0xc];
      puVar1[0xf] = uVar3;
      lVar7 = lVar7 + 0x80;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14872b46c FUN_14872b46c body=115 status=ok
// SIG undefined FUN_14872b46c(void)

void FUN_14872b46c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,0x10);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14872b4df FUN_14872b4df body=60 status=ok
// SIG undefined FUN_14872b4df(void)

void FUN_14872b4df(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14872b51c(param_1,param_2);
    param_1 = param_1 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return;
}



// FUNCTION 14872b51c FUN_14872b51c body=290 status=ok
// SIG undefined FUN_14872b51c(void)

undefined8 * FUN_14872b51c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_14b27fdf0;
  puVar7 = (undefined8 *)(param_2 + 0x10);
  puVar8 = param_1 + 2;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *param_1 = &PTR_FUN_14b27ff60;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  uVar4 = *(undefined4 *)(param_2 + 0x80);
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  pvVar2 = *(void **)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  uVar4 = *(undefined4 *)(param_2 + 0xa8);
  uVar5 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  pvVar2 = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14872b640 FUN_14872b640 body=104 status=ok
// SIG undefined FUN_14872b640(void)

undefined8 FUN_14872b640(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14578babe(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872b6aa FUN_14872b6aa body=28 status=ok
// SIG undefined FUN_14872b6aa(void)

undefined8 FUN_14872b6aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14872b78c FUN_14872b78c body=141 status=ok
// SIG undefined FUN_14872b78c(void)

undefined1 FUN_14872b78c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
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
  undefined8 uVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar18,param_3 + 8 + lVar18);
      puVar2 = (undefined8 *)(param_3 + 0x18 + lVar18);
      uVar17 = puVar2[1];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar18);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x38 + lVar18);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x48 + lVar18);
      uVar13 = *puVar3;
      uVar14 = puVar3[1];
      uVar15 = puVar3[2];
      uVar16 = puVar3[3];
      puVar4 = (undefined8 *)(param_2 + 0x18 + lVar18);
      *puVar4 = *puVar2;
      puVar4[1] = uVar17;
      puVar3 = (undefined4 *)(param_2 + 0x28 + lVar18);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      puVar3 = (undefined4 *)(param_2 + 0x38 + lVar18);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      puVar3 = (undefined4 *)(param_2 + 0x48 + lVar18);
      *puVar3 = uVar13;
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      puVar3[3] = uVar16;
      puVar3 = (undefined4 *)(param_3 + 0x58 + lVar18);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar1 = (undefined4 *)(param_2 + 0x58 + lVar18);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar18 = lVar18 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872b842 FUN_14872b842 body=59 status=ok
// SIG undefined FUN_14872b842(void)

undefined8 FUN_14872b842(longlong *param_1)

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



// FUNCTION 14872b888 FUN_14872b888 body=43 status=ok
// SIG undefined FUN_14872b888(void)

void FUN_14872b888(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 14872b906 FUN_14872b906 body=57 status=ok
// SIG undefined FUN_14872b906(void)

void FUN_14872b906(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66640 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66640 = FUN_140002ddd(FUN_14650ee64,uVar1,L"GbxStandInViewerDef");
  }
  return;
}



// FUNCTION 14872b940 FUN_14872b940 body=28 status=ok
// SIG undefined FUN_14872b940(void)

undefined8 FUN_14872b940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14872b98e FUN_14872b98e body=101 status=ok
// SIG undefined FUN_14872b98e(void)

undefined1 FUN_14872b98e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872ba1c FUN_14872ba1c body=59 status=ok
// SIG undefined FUN_14872ba1c(void)

undefined8 FUN_14872ba1c(longlong *param_1)

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



// FUNCTION 14872bae2 FUN_14872bae2 body=63 status=ok
// SIG undefined FUN_14872bae2(void)

undefined1 FUN_14872bae2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470d0d20(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 14872bb4a FUN_14872bb4a body=59 status=ok
// SIG undefined FUN_14872bb4a(void)

undefined8 FUN_14872bb4a(longlong *param_1)

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



// FUNCTION 14872bb96 FUN_14872bb96 body=38 status=ok
// SIG undefined FUN_14872bb96(void)

void FUN_14872bb96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14076bd02(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14872bc7c FUN_14872bc7c body=59 status=ok
// SIG undefined FUN_14872bc7c(void)

undefined8 FUN_14872bc7c(longlong *param_1)

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



// FUNCTION 14872bd1c FUN_14872bd1c body=29 status=ok
// SIG undefined FUN_14872bd1c(void)

undefined8 FUN_14872bd1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872bd3a FUN_14872bd3a body=55 status=ok
// SIG undefined FUN_14872bd3a(void)

void FUN_14872bd3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66688 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66688 = FUN_140002ddd(FUN_14650f909,uVar1,L"GbxStatusEffectDriver");
  }
  return;
}



// FUNCTION 14872bd72 FUN_14872bd72 body=54 status=ok
// SIG undefined FUN_14872bd72(void)

undefined8 * FUN_14872bd72(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffect.h"
                ,0x166,L"Pure virtual not implemented (%s)",L"FGbxStatusEffectDriver::Spawn");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14872be12 FUN_14872be12 body=59 status=ok
// SIG undefined FUN_14872be12(void)

undefined8 FUN_14872be12(longlong *param_1)

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



// FUNCTION 14872beb2 FUN_14872beb2 body=29 status=ok
// SIG undefined FUN_14872beb2(void)

undefined8 FUN_14872beb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872bed0 FUN_14872bed0 body=55 status=ok
// SIG undefined FUN_14872bed0(void)

void FUN_14872bed0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb666b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb666b8 = FUN_140002ddd(FUN_14650f9a0,uVar1,L"GbxStatusEffectAction");
  }
  return;
}



// FUNCTION 14872bf08 FUN_14872bf08 body=41 status=ok
// SIG undefined FUN_14872bf08(void)

void FUN_14872bf08(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectAction.h"
                ,0x20,L"Pure virtual not implemented (%s)",L"FGbxStatusEffectAction::Execute");
  return;
}



// FUNCTION 14872bfc4 FUN_14872bfc4 body=59 status=ok
// SIG undefined FUN_14872bfc4(void)

undefined8 FUN_14872bfc4(longlong *param_1)

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



// FUNCTION 14872c064 FUN_14872c064 body=29 status=ok
// SIG undefined FUN_14872c064(void)

undefined8 FUN_14872c064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872c082 FUN_14872c082 body=55 status=ok
// SIG undefined FUN_14872c082(void)

void FUN_14872c082(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb666d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb666d0 = FUN_140002ddd(FUN_14650fa9f,uVar1,L"GbxStatusEffectAction_PopResourceGroup");
  }
  return;
}



// FUNCTION 14872c14a FUN_14872c14a body=59 status=ok
// SIG undefined FUN_14872c14a(void)

undefined8 FUN_14872c14a(longlong *param_1)

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



// FUNCTION 14872c1ea FUN_14872c1ea body=29 status=ok
// SIG undefined FUN_14872c1ea(void)

undefined8 FUN_14872c1ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872c208 FUN_14872c208 body=55 status=ok
// SIG undefined FUN_14872c208(void)

void FUN_14872c208(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb666e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb666e8 = FUN_140002ddd(FUN_14650fb35,uVar1,L"GbxStatusEffectAction_StopStatusEffect");
  }
  return;
}



// FUNCTION 14872c2ba FUN_14872c2ba body=83 status=ok
// SIG undefined FUN_14872c2ba(void)

undefined8 FUN_14872c2ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + lVar2);
      *(undefined8 *)(param_2 + lVar2 + 5) = *(undefined8 *)(param_3 + lVar2 + 5);
      *(undefined8 *)(param_2 + lVar2) = uVar1;
      FUN_140d02432();
      lVar2 = lVar2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872c336 FUN_14872c336 body=59 status=ok
// SIG undefined FUN_14872c336(void)

undefined8 FUN_14872c336(longlong *param_1)

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



// FUNCTION 14872c448 FUN_14872c448 body=59 status=ok
// SIG undefined FUN_14872c448(void)

undefined8 FUN_14872c448(longlong *param_1)

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



// FUNCTION 14872c546 FUN_14872c546 body=59 status=ok
// SIG undefined FUN_14872c546(void)

undefined8 FUN_14872c546(longlong *param_1)

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



// FUNCTION 14872c5e6 FUN_14872c5e6 body=29 status=ok
// SIG undefined FUN_14872c5e6(void)

undefined8 FUN_14872c5e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872c604 FUN_14872c604 body=41 status=ok
// SIG undefined FUN_14872c604(void)

void FUN_14872c604(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectApplicationDefaults.h"
                ,0x2b,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectApplicationDefaults::WriteStatusEffectModifiers");
  return;
}



// FUNCTION 14872c64c FUN_14872c64c body=54 status=ok
// SIG undefined FUN_14872c64c(void)

undefined1 FUN_14872c64c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148636cfe(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14872c6aa FUN_14872c6aa body=59 status=ok
// SIG undefined FUN_14872c6aa(void)

undefined8 FUN_14872c6aa(longlong *param_1)

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



// FUNCTION 14872c73c FUN_14872c73c body=48 status=ok
// SIG undefined FUN_14872c73c(void)

void FUN_14872c73c(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1408c28ac(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14872c76c FUN_14872c76c body=94 status=ok
// SIG undefined FUN_14872c76c(void)

void FUN_14872c76c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b2841e0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  *(undefined4 *)(param_2 + 2) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872c7cc FUN_14872c7cc body=94 status=ok
// SIG undefined FUN_14872c7cc(void)

void FUN_14872c7cc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b2841e0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_2 + 1) = local_28;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
  *(undefined4 *)(param_2 + 2) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872c850 FUN_14872c850 body=70 status=ok
// SIG undefined FUN_14872c850(void)

undefined1 FUN_14872c850(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872c8be FUN_14872c8be body=59 status=ok
// SIG undefined FUN_14872c8be(void)

undefined8 FUN_14872c8be(longlong *param_1)

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



// FUNCTION 14872c904 FUN_14872c904 body=48 status=ok
// SIG undefined FUN_14872c904(void)

void FUN_14872c904(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b2841e0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14872c984 FUN_14872c984 body=57 status=ok
// SIG undefined FUN_14872c984(void)

undefined8 * FUN_14872c984(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2841e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872c9be FUN_14872c9be body=55 status=ok
// SIG undefined FUN_14872c9be(void)

void FUN_14872c9be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66808 = FUN_140002ddd(FUN_14650ff5f,uVar1,L"GbxStatusEffectAspectResourceData");
  }
  return;
}



// FUNCTION 14872c9f6 FUN_14872c9f6 body=32 status=ok
// SIG undefined FUN_14872c9f6(void)

undefined8 FUN_14872c9f6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Resource");
  return param_2;
}



// FUNCTION 14872ca16 FUN_14872ca16 body=108 status=ok
// SIG undefined FUN_14872ca16(void)

void FUN_14872ca16(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b284200;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_2 + 5) = local_28;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_24;
  *(undefined4 *)(param_2 + 6) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872ca84 FUN_14872ca84 body=108 status=ok
// SIG undefined FUN_14872ca84(void)

void FUN_14872ca84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = &PTR_FUN_14b284200;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_2 + 5) = local_28;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_24;
  *(undefined4 *)(param_2 + 6) = uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872cb16 FUN_14872cb16 body=105 status=ok
// SIG undefined FUN_14872cb16(void)

undefined8 FUN_14872cb16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined2 *)(param_2 + 8 + lVar6) = *(undefined2 *)(param_3 + 8 + lVar6);
      FUN_1401f3db8(param_2 + 0x10 + lVar6,param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x28 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x28 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872cba8 FUN_14872cba8 body=59 status=ok
// SIG undefined FUN_14872cba8(void)

undefined8 FUN_14872cba8(longlong *param_1)

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



// FUNCTION 14872cbee FUN_14872cbee body=32 status=ok
// SIG undefined FUN_14872cbee(void)

void FUN_14872cbee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14584efb0(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14872cc5e FUN_14872cc5e body=38 status=ok
// SIG undefined FUN_14872cc5e(void)

undefined8 FUN_14872cc5e(undefined8 param_1,int param_2)

{
  FUN_14584efb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872cc84 FUN_14872cc84 body=55 status=ok
// SIG undefined FUN_14872cc84(void)

void FUN_14872cc84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66820 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66820 = FUN_140002ddd(FUN_14650f96f,uVar1,L"GbxStatusEffectAspectData");
  }
  return;
}



// FUNCTION 14872ccbc FUN_14872ccbc body=82 status=ok
// SIG undefined FUN_14872ccbc(void)

void FUN_14872ccbc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectAspect.h"
                ,0x20c,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectAspectData::ForEachResource");
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014872cd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14872cd0e FUN_14872cd0e body=42 status=ok
// SIG undefined FUN_14872cd0e(void)

undefined8 FUN_14872cd0e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectAspect.h"
                ,0x217,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectAspectData::GetResourceType");
  return 0;
}



// FUNCTION 14872cd3c FUN_14872cd3c body=54 status=ok
// SIG undefined FUN_14872cd3c(void)

undefined8 * FUN_14872cd3c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectAspect.h"
                ,0x222,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectAspectData::SpawnAspectInner");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14872cdc4 FUN_14872cdc4 body=54 status=ok
// SIG undefined FUN_14872cdc4(void)

undefined1 FUN_14872cdc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872cec2(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14872ce22 FUN_14872ce22 body=59 status=ok
// SIG undefined FUN_14872ce22(void)

undefined8 FUN_14872ce22(longlong *param_1)

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



// FUNCTION 14872cec2 FUN_14872cec2 body=69 status=ok
// SIG undefined FUN_14872cec2(void)

longlong * FUN_14872cec2(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  FUN_140d02432(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14872cf08 FUN_14872cf08 body=122 status=ok
// SIG undefined FUN_14872cf08(void)

void FUN_14872cf08(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b2841e0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_2 + 1) = local_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3c;
  *(undefined4 *)(param_2 + 2) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_34;
  *param_2 = &PTR_FUN_14b283190;
  param_2[5] = 0;
  param_2[6] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872cf84 FUN_14872cf84 body=118 status=ok
// SIG undefined FUN_14872cf84(void)

void FUN_14872cf84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b2841e0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_2 + 1) = local_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3c;
  *(undefined4 *)(param_2 + 2) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_34;
  *param_2 = &PTR_FUN_14b283190;
  param_2[5] = 0;
  param_2[6] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872d020 FUN_14872d020 body=83 status=ok
// SIG undefined FUN_14872d020(void)

undefined1 FUN_14872d020(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_14872d1da(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872d09c FUN_14872d09c body=59 status=ok
// SIG undefined FUN_14872d09c(void)

undefined8 FUN_14872d09c(longlong *param_1)

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



// FUNCTION 14872d0e2 FUN_14872d0e2 body=32 status=ok
// SIG undefined FUN_14872d0e2(void)

void FUN_14872d0e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14872d196(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14872d150 FUN_14872d150 body=38 status=ok
// SIG undefined FUN_14872d150(void)

undefined8 FUN_14872d150(undefined8 param_1,int param_2)

{
  FUN_14872d196();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872d176 FUN_14872d176 body=32 status=ok
// SIG undefined FUN_14872d176(void)

undefined8 FUN_14872d176(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Attribute Effect Set");
  return param_2;
}



// FUNCTION 14872d196 FUN_14872d196 body=68 status=ok
// SIG undefined FUN_14872d196(void)

void FUN_14872d196(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b283190;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b2841e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14872d1da FUN_14872d1da body=79 status=ok
// SIG undefined FUN_14872d1da(void)

undefined8 * FUN_14872d1da(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14872d22a(param_1,iVar1);
      FUN_14872d299(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872d22a FUN_14872d22a body=111 status=ok
// SIG undefined FUN_14872d22a(void)

void FUN_14872d22a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14872d299 FUN_14872d299 body=137 status=ok
// SIG undefined FUN_14872d299(void)

void FUN_14872d299(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(param_2 + -0x28);
      *(undefined4 *)(param_1 + -0x20) = *(undefined4 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined1 *)(param_1 + -0x10) = *(undefined1 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      param_1 = param_1 + 0x70;
      param_2 = param_2 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14872d34e FUN_14872d34e body=63 status=ok
// SIG undefined FUN_14872d34e(void)

undefined1 FUN_14872d34e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872d476(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14872d3b6 FUN_14872d3b6 body=59 status=ok
// SIG undefined FUN_14872d3b6(void)

undefined8 FUN_14872d3b6(longlong *param_1)

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



// FUNCTION 14872d402 FUN_14872d402 body=38 status=ok
// SIG undefined FUN_14872d402(void)

void FUN_14872d402(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14872d6aa(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14872d476 FUN_14872d476 body=115 status=ok
// SIG undefined FUN_14872d476(void)

longlong FUN_14872d476(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  FUN_1401f3db8(param_1 + 0x10,param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  FUN_14872d1da(param_1 + 0x60,param_2 + 0x60);
  FUN_14872d4ea(param_1 + 0x70,param_2 + 0x70);
  FUN_14872d1da(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 14872d4ea FUN_14872d4ea body=93 status=ok
// SIG undefined FUN_14872d4ea(void)

undefined8 * FUN_14872d4ea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141123c14(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872d548(param_1,iVar1);
      FUN_14872d5b7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872d548 FUN_14872d548 body=111 status=ok
// SIG undefined FUN_14872d548(void)

void FUN_14872d548(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14872d5b7 FUN_14872d5b7 body=52 status=ok
// SIG undefined FUN_14872d5b7(void)

void FUN_14872d5b7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14872d5ec(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14872d5ec FUN_14872d5ec body=189 status=ok
// SIG undefined FUN_14872d5ec(void)

undefined8 * FUN_14872d5ec(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = &PTR_FUN_14b2841e0;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
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
  *param_1 = &PTR_FUN_14b283190;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_14872d22a(param_1 + 5,iVar1,0);
    FUN_14872d299(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14872d6aa FUN_14872d6aa body=175 status=ok
// SIG undefined FUN_14872d6aa(void)

void FUN_14872d6aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b283110;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_141123c14(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14b283190;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14b2841e0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b284200;
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
                    /* WARNING: Could not recover jumptable at 0x00014872d755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14872d75a FUN_14872d75a body=143 status=ok
// SIG undefined FUN_14872d75a(void)

void FUN_14872d75a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    lVar6 = (longlong)*(int *)(param_1 + 0x78) * 0x38;
    do {
      lVar6 = lVar6 + -0x38;
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar5);
    } while ((cVar2 != '\0') && (lVar5 = lVar5 + 0x38, lVar6 != 0));
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014872d7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14872d858 FUN_14872d858 body=59 status=ok
// SIG undefined FUN_14872d858(void)

undefined8 FUN_14872d858(longlong *param_1)

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



// FUNCTION 14872d8f8 FUN_14872d8f8 body=29 status=ok
// SIG undefined FUN_14872d8f8(void)

undefined8 FUN_14872d8f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872d916 FUN_14872d916 body=55 status=ok
// SIG undefined FUN_14872d916(void)

void FUN_14872d916(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66880 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66880 = FUN_140002ddd(FUN_1465101b9,uVar1,L"GbxStatusEffectDOTResourceStrategy");
  }
  return;
}



// FUNCTION 14872d94e FUN_14872d94e body=42 status=ok
// SIG undefined FUN_14872d94e(void)

undefined8 FUN_14872d94e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/Aspects/DamageOverTime/GbxStatusEffectAspect_DamageOverTime.h"
                ,0x1e,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectDOTResourceStrategy::MakeRoom");
  return 0;
}



// FUNCTION 14872da20 FUN_14872da20 body=59 status=ok
// SIG undefined FUN_14872da20(void)

undefined8 FUN_14872da20(longlong *param_1)

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



// FUNCTION 14872dac0 FUN_14872dac0 body=31 status=ok
// SIG undefined FUN_14872dac0(void)

undefined8 FUN_14872dac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872dae0 FUN_14872dae0 body=126 status=ok
// SIG undefined FUN_14872dae0(void)

void FUN_14872dae0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14b2841e0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_2 + 1) = local_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3c;
  *(undefined4 *)(param_2 + 2) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_34;
  *param_2 = &PTR_FUN_14b2831e0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872db84 FUN_14872db84 body=83 status=ok
// SIG undefined FUN_14872db84(void)

undefined1 FUN_14872db84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_14872dd1e(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872dc00 FUN_14872dc00 body=59 status=ok
// SIG undefined FUN_14872dc00(void)

undefined8 FUN_14872dc00(longlong *param_1)

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



// FUNCTION 14872dc46 FUN_14872dc46 body=48 status=ok
// SIG undefined FUN_14872dc46(void)

void FUN_14872dc46(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b2841e0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14872dcc4 FUN_14872dcc4 body=57 status=ok
// SIG undefined FUN_14872dcc4(void)

undefined8 * FUN_14872dcc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2841e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872dcfe FUN_14872dcfe body=32 status=ok
// SIG undefined FUN_14872dcfe(void)

undefined8 FUN_14872dcfe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Damage Over Time");
  return param_2;
}



// FUNCTION 14872dd1e FUN_14872dd1e body=84 status=ok
// SIG undefined FUN_14872dd1e(void)

longlong * FUN_14872dd1e(longlong *param_1,longlong *param_2)

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



// FUNCTION 14872dda0 FUN_14872dda0 body=63 status=ok
// SIG undefined FUN_14872dda0(void)

undefined1 FUN_14872dda0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872deca(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 14872de08 FUN_14872de08 body=59 status=ok
// SIG undefined FUN_14872de08(void)

undefined8 FUN_14872de08(longlong *param_1)

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



// FUNCTION 14872de54 FUN_14872de54 body=40 status=ok
// SIG undefined FUN_14872de54(void)

void FUN_14872de54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14584ef2e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14872deca FUN_14872deca body=127 status=ok
// SIG undefined FUN_14872deca(void)

longlong FUN_14872deca(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  FUN_1401f3db8(param_1 + 0x10,param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  FUN_14872dd1e(param_1 + 0x60,param_2 + 0x60);
  FUN_14872df4a(param_1 + 0x78,param_2 + 0x78);
  FUN_1401f3db8(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14872df4a FUN_14872df4a body=95 status=ok
// SIG undefined FUN_14872df4a(void)

undefined8 * FUN_14872df4a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14584eff1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872dfaa(param_1,iVar1);
      FUN_14872e00c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872dfaa FUN_14872dfaa body=98 status=ok
// SIG undefined FUN_14872dfaa(void)

void FUN_14872dfaa(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872e00c FUN_14872e00c body=52 status=ok
// SIG undefined FUN_14872e00c(void)

void FUN_14872e00c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14872e040(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 14872e040 FUN_14872e040 body=143 status=ok
// SIG undefined FUN_14872e040(void)

undefined8 * FUN_14872e040(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b2841e0;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
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
  *param_1 = &PTR_FUN_14b2831e0;
  FUN_14872e0d0(param_1 + 5,param_2 + 0x28);
  return param_1;
}



// FUNCTION 14872e0d0 FUN_14872e0d0 body=71 status=ok
// SIG undefined FUN_14872e0d0(void)

undefined8 * FUN_14872e0d0(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14872e158 FUN_14872e158 body=42 status=ok
// SIG undefined FUN_14872e158(void)

undefined8 FUN_14872e158(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectNotifyDelegateBinding.h"
                ,0x18,L"Pure virtual not implemented (%s)",
                L"UGbxStatusEffectNotifyDelegateBinding::ResolveNotifyComponent");
  return 0;
}



// FUNCTION 14872e182 FUN_14872e182 body=45 status=ok
// SIG undefined FUN_14872e182(void)

longlong FUN_14872e182(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872e1b0 FUN_14872e1b0 body=72 status=ok
// SIG undefined FUN_14872e1b0(void)

void FUN_14872e1b0(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14899da2c(param_2);
  *param_2 = &PTR_FUN_14b2910e0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 14872e1f8 FUN_14872e1f8 body=47 status=ok
// SIG undefined FUN_14872e1f8(void)

void FUN_14872e1f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_14899da2c(param_2);
  *param_2 = &PTR_FUN_14b2910e0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 14872e24c FUN_14872e24c body=83 status=ok
// SIG undefined FUN_14872e24c(void)

undefined1 FUN_14872e24c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_1401f3db8(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872e2c8 FUN_14872e2c8 body=59 status=ok
// SIG undefined FUN_14872e2c8(void)

undefined8 FUN_14872e2c8(longlong *param_1)

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



// FUNCTION 14872e30e FUN_14872e30e body=34 status=ok
// SIG undefined FUN_14872e30e(void)

void FUN_14872e30e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14872e3fc(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14872e37e FUN_14872e37e body=38 status=ok
// SIG undefined FUN_14872e37e(void)

undefined8 FUN_14872e37e(undefined8 param_1,int param_2)

{
  FUN_14872e3fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872e3a4 FUN_14872e3a4 body=55 status=ok
// SIG undefined FUN_14872e3a4(void)

void FUN_14872e3a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66910 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66910 = FUN_140002ddd(FUN_146510a8f,uVar1,L"GbxStatusEffectAspectData_RuleItem");
  }
  return;
}



// FUNCTION 14872e3dc FUN_14872e3dc body=32 status=ok
// SIG undefined FUN_14872e3dc(void)

undefined8 FUN_14872e3dc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Rule");
  return param_2;
}



// FUNCTION 14872e3fc FUN_14872e3fc body=95 status=ok
// SIG undefined FUN_14872e3fc(void)

void FUN_14872e3fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2910e0;
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
  *param_1 = &PTR_FUN_14b2841e0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14872e490 FUN_14872e490 body=63 status=ok
// SIG undefined FUN_14872e490(void)

undefined1 FUN_14872e490(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872e5ba(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14872e4f8 FUN_14872e4f8 body=59 status=ok
// SIG undefined FUN_14872e4f8(void)

undefined8 FUN_14872e4f8(longlong *param_1)

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



// FUNCTION 14872e544 FUN_14872e544 body=40 status=ok
// SIG undefined FUN_14872e544(void)

void FUN_14872e544(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14872e7cc(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14872e5ba FUN_14872e5ba body=101 status=ok
// SIG undefined FUN_14872e5ba(void)

longlong FUN_14872e5ba(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  FUN_1401f3db8(param_1 + 0x10,param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  FUN_1401f3db8(param_1 + 0x60,param_2 + 0x60);
  FUN_14872e620(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 14872e620 FUN_14872e620 body=95 status=ok
// SIG undefined FUN_14872e620(void)

undefined8 * FUN_14872e620(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14872e67f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14872e6a6(param_1,iVar1);
      FUN_14872e708(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14872e67f FUN_14872e67f body=38 status=ok
// SIG undefined FUN_14872e67f(void)

void FUN_14872e67f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14872e3fc(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 14872e6a6 FUN_14872e6a6 body=98 status=ok
// SIG undefined FUN_14872e6a6(void)

void FUN_14872e6a6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872e708 FUN_14872e708 body=52 status=ok
// SIG undefined FUN_14872e708(void)

void FUN_14872e708(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14872e73c(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 14872e73c FUN_14872e73c body=143 status=ok
// SIG undefined FUN_14872e73c(void)

undefined8 * FUN_14872e73c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b2841e0;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
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
  *param_1 = &PTR_FUN_14b2910e0;
  FUN_1401f3da4(param_1 + 5,param_2 + 0x28);
  return param_1;
}



// FUNCTION 14872e7cc FUN_14872e7cc body=69 status=ok
// SIG undefined FUN_14872e7cc(void)

void FUN_14872e7cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2910a0;
  FUN_14872e67f(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14872e3fc(param_1 + 7);
  FUN_14584efb0(param_1);
  return;
}



// FUNCTION 14872e812 FUN_14872e812 body=38 status=ok
// SIG undefined FUN_14872e812(void)

undefined8 FUN_14872e812(undefined8 param_1,int param_2)

{
  FUN_14872e7cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872e838 FUN_14872e838 body=55 status=ok
// SIG undefined FUN_14872e838(void)

void FUN_14872e838(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66928 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66928 = FUN_140002ddd(FUN_146510b27,uVar1,L"GbxStatusEffectAspectData_Rule");
  }
  return;
}



// FUNCTION 14872e870 FUN_14872e870 body=146 status=ok
// SIG undefined FUN_14872e870(void)

void FUN_14872e870(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x78);
    lVar5 = (longlong)*(int *)(param_1 + 0x80) * 0x40;
    do {
      lVar5 = lVar5 + -0x40;
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar6);
    } while ((cVar2 != '\0') && (lVar6 = lVar6 + 0x40, lVar5 != 0));
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014872e8f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14872e902 FUN_14872e902 body=55 status=ok
// SIG undefined FUN_14872e902(void)

void FUN_14872e902(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66910 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66910 = FUN_140002ddd(FUN_146510a8f,uVar1,L"GbxStatusEffectAspectData_RuleItem");
  }
  return;
}



// FUNCTION 14872e9ce FUN_14872e9ce body=59 status=ok
// SIG undefined FUN_14872e9ce(void)

undefined8 FUN_14872e9ce(longlong *param_1)

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



// FUNCTION 14872ea6e FUN_14872ea6e body=29 status=ok
// SIG undefined FUN_14872ea6e(void)

undefined8 FUN_14872ea6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14872ea8c FUN_14872ea8c body=55 status=ok
// SIG undefined FUN_14872ea8c(void)

void FUN_14872ea8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66940 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66940 = FUN_140002ddd(FUN_146510bbd,uVar1,L"GbxStatusEffectConditionData");
  }
  return;
}



// FUNCTION 14872eac8 FUN_14872eac8 body=54 status=ok
// SIG undefined FUN_14872eac8(void)

undefined8 * FUN_14872eac8(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/StatusEffects/GbxStatusEffectCondition.h"
                ,0x69,L"Pure virtual not implemented (%s)",
                L"FGbxStatusEffectConditionData::SpawnConditionInner");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14872eb1e FUN_14872eb1e body=55 status=ok
// SIG undefined FUN_14872eb1e(void)

void FUN_14872eb1e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014872eb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14872eb6c FUN_14872eb6c body=54 status=ok
// SIG undefined FUN_14872eb6c(void)

undefined1 FUN_14872eb6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14872ec9e(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14872ebca FUN_14872ebca body=59 status=ok
// SIG undefined FUN_14872ebca(void)

undefined8 FUN_14872ebca(longlong *param_1)

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



// FUNCTION 14872ec10 FUN_14872ec10 body=64 status=ok
// SIG undefined FUN_14872ec10(void)

void FUN_14872ec10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x28);
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
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14872ec9e FUN_14872ec9e body=165 status=ok
// SIG undefined FUN_14872ec9e(void)

undefined8 * FUN_14872ec9e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != param_1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  lVar5 = param_2[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[2];
    }
  }
  param_1[2] = lVar5;
  param_1[3] = param_2[3];
  uVar3 = param_2[4];
  lVar5 = param_2[5];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[5];
  param_1[4] = uVar3;
  param_1[5] = lVar5;
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
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe | *(byte *)(param_2 + 6) & 1;
  return param_1;
}



// FUNCTION 14872ed44 FUN_14872ed44 body=46 status=ok
// SIG undefined FUN_14872ed44(void)

void FUN_14872ed44(undefined8 param_1,longlong param_2)

{
  FUN_140f23ff6(param_2);
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(byte *)(param_2 + 0x130) = *(byte *)(param_2 + 0x130) & 0xfc;
  return;
}



// FUNCTION 14872edac FUN_14872edac body=59 status=ok
// SIG undefined FUN_14872edac(void)

undefined8 FUN_14872edac(longlong *param_1)

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



// FUNCTION 14872edf8 FUN_14872edf8 body=38 status=ok
// SIG undefined FUN_14872edf8(void)

void FUN_14872edf8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_14099ad88(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 14872eea9 FUN_14872eea9 body=30 status=ok
// SIG undefined FUN_14872eea9(void)

void FUN_14872eea9(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return;
}



// FUNCTION 14872eec8 FUN_14872eec8 body=111 status=ok
// SIG undefined FUN_14872eec8(void)

void FUN_14872eec8(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14872ef37 FUN_14872ef37 body=52 status=ok
// SIG undefined FUN_14872ef37(void)

void FUN_14872ef37(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14872ef6c(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14872ef6c FUN_14872ef6c body=116 status=ok
// SIG undefined FUN_14872ef6c(void)

undefined8 * FUN_14872ef6c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  lVar1 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe | *(byte *)(param_2 + 0x30) & 1;
  return param_1;
}



// FUNCTION 14872f016 FUN_14872f016 body=63 status=ok
// SIG undefined FUN_14872f016(void)

undefined1 FUN_14872f016(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140f82572(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 14872f07e FUN_14872f07e body=59 status=ok
// SIG undefined FUN_14872f07e(void)

undefined8 FUN_14872f07e(longlong *param_1)

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



// FUNCTION 14872f0ca FUN_14872f0ca body=38 status=ok
// SIG undefined FUN_14872f0ca(void)

void FUN_14872f0ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_140c2c418(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14872f13e FUN_14872f13e body=98 status=ok
// SIG undefined FUN_14872f13e(void)

void FUN_14872f13e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872f1a0 FUN_14872f1a0 body=82 status=ok
// SIG undefined FUN_14872f1a0(void)

void FUN_14872f1a0(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14872f1f2 FUN_14872f1f2 body=98 status=ok
// SIG undefined FUN_14872f1f2(void)

void FUN_14872f1f2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872f254 FUN_14872f254 body=45 status=ok
// SIG undefined FUN_14872f254(void)

void FUN_14872f254(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14872f282 FUN_14872f282 body=98 status=ok
// SIG undefined FUN_14872f282(void)

void FUN_14872f282(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14872f2e4 FUN_14872f2e4 body=45 status=ok
// SIG undefined FUN_14872f2e4(void)

void FUN_14872f2e4(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14872f312 FUN_14872f312 body=115 status=ok
// SIG undefined FUN_14872f312(void)

void FUN_14872f312(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14872f385 FUN_14872f385 body=60 status=ok
// SIG undefined FUN_14872f385(void)

void FUN_14872f385(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14872f3c2(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 14872f3c2 FUN_14872f3c2 body=172 status=ok
// SIG undefined FUN_14872f3c2(void)

undefined4 * FUN_14872f3c2(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  lVar2 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  cVar1 = *(char *)(param_2 + 0xb);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    param_1[10] = param_2[10];
  }
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  FUN_140725242(param_1 + 0xe,param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  return param_1;
}



// FUNCTION 14872f46e FUN_14872f46e body=111 status=ok
// SIG undefined FUN_14872f46e(void)

void FUN_14872f46e(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14872f4dd FUN_14872f4dd body=52 status=ok
// SIG undefined FUN_14872f4dd(void)

void FUN_14872f4dd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14872f512(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14872f512 FUN_14872f512 body=113 status=ok
// SIG undefined FUN_14872f512(void)

undefined8 * FUN_14872f512(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  if (param_2 == param_1) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 2;
  }
  else {
    FUN_14872f584(param_1 + 1,param_2 + 1);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 2;
    FUN_14872f584(param_1 + 4,param_2 + 4);
  }
  return param_1;
}



// FUNCTION 14872f584 FUN_14872f584 body=304 status=ok
// SIG undefined FUN_14872f584(void)

void FUN_14872f584(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14872f708 FUN_14872f708 body=78 status=ok
// SIG undefined FUN_14872f708(void)

undefined8 FUN_14872f708(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872f77e FUN_14872f77e body=59 status=ok
// SIG undefined FUN_14872f77e(void)

undefined8 FUN_14872f77e(longlong *param_1)

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



// FUNCTION 14872f7c4 FUN_14872f7c4 body=48 status=ok
// SIG undefined FUN_14872f7c4(void)

void FUN_14872f7c4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b28b1e0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14872f842 FUN_14872f842 body=55 status=ok
// SIG undefined FUN_14872f842(void)

void FUN_14872f842(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb669a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb669a0 = FUN_140002ddd(FUN_146510e1d,uVar1,L"GbxStatusEffectContributionCountResolver");
  }
  return;
}



// FUNCTION 14872f8c6 FUN_14872f8c6 body=110 status=ok
// SIG undefined FUN_14872f8c6(void)

undefined8 FUN_14872f8c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    do {
      FUN_140d02432(param_2 + -0xa0,param_3 + -0xa0);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0xf8;
      param_2 = param_2 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14872f95c FUN_14872f95c body=59 status=ok
// SIG undefined FUN_14872f95c(void)

undefined8 FUN_14872f95c(longlong *param_1)

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


