// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14782171a FUN_14782171a body=203 status=ok
// SIG undefined FUN_14782171a(void)

void FUN_14782171a(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_28 = *(undefined2 **)(param_1 + 0x18);
    FUN_1400021e4(&local_28,&local_38);
    puVar1 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar1 = local_38;
    }
    FUN_140002266(&local_28,L"Cannot synchronize when Sequence has authority (%s)",puVar1);
    puVar1 = &DAT_149dfb77a;
    if (local_20 != 0) {
      puVar1 = local_28;
    }
    FUN_1415b7ec4(puVar1,3,0);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_143378b84();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1478217f2 FUN_1478217f2 body=104 status=ok
// SIG undefined FUN_1478217f2(void)

void FUN_1478217f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabce38) {
    FUN_144b3d300(&DAT_14cabce38);
    if (DAT_14cabce38 == -1) {
      FUN_1446f470e(&DAT_14cabce30,L"ServerStartTimeSeconds",1);
      _Init_thread_footer(&DAT_14cabce38);
      return;
    }
  }
  return;
}



// FUNCTION 14782185a FUN_14782185a body=140 status=ok
// SIG undefined FUN_14782185a(void)

void FUN_14782185a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_38,L"ServerStartTimeSeconds",1);
  uVar1 = FUN_145a6aa68();
  FUN_145a6aa68();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782192c FUN_14782192c body=178 status=ok
// SIG undefined FUN_14782192c(void)

void FUN_14782192c(longlong param_1,float param_2,float param_3)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14780cd1c(*(undefined8 *)(param_1 + 0x10));
  fVar3 = (float)FUN_14780da82(uVar2);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    cVar1 = FUN_14780e98a(uVar2);
    if (cVar1 == '\0') {
      dVar4 = (double)(param_2 * param_3) + *(double *)(param_1 + 0x20);
      goto LAB_147821993;
    }
  }
  FUN_14780dd44(uVar2,&local_48);
  dVar4 = (double)local_48 / 10000000.0;
LAB_147821993:
  *(double *)(param_1 + 0x20) = dVar4;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478219e2 FUN_1478219e2 body=34 status=ok
// SIG undefined FUN_1478219e2(void)

undefined8 FUN_1478219e2(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_143378d4c(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_3 + 8));
  return param_2;
}



// FUNCTION 147821a04 FUN_147821a04 body=45 status=ok
// SIG undefined FUN_147821a04(void)

longlong FUN_147821a04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147821a3c FUN_147821a3c body=45 status=ok
// SIG undefined FUN_147821a3c(void)

longlong FUN_147821a3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x68;
  FUN_140843792(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147821a80 FUN_147821a80 body=48 status=ok
// SIG undefined FUN_147821a80(void)

longlong FUN_147821a80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147821abe FUN_147821abe body=48 status=ok
// SIG undefined FUN_147821abe(void)

longlong FUN_147821abe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147821b08 FUN_147821b08 body=45 status=ok
// SIG undefined FUN_147821b08(void)

longlong FUN_147821b08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145898044(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147821b3a FUN_147821b3a body=45 status=ok
// SIG undefined FUN_147821b3a(void)

longlong FUN_147821b3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140a07136(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147821b68 FUN_147821b68 body=48 status=ok
// SIG undefined FUN_147821b68(void)

longlong FUN_147821b68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x210;
  FUN_140a07136(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147821c30 FUN_147821c30 body=75 status=ok
// SIG undefined FUN_147821c30(void)

void FUN_147821c30(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1447addd0(param_2,0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147821d4c FUN_147821d4c body=59 status=ok
// SIG undefined FUN_147821d4c(void)

undefined8 FUN_147821d4c(longlong *param_1)

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



// FUNCTION 147821e2a FUN_147821e2a body=75 status=ok
// SIG undefined FUN_147821e2a(void)

undefined1 FUN_147821e2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147821e9e FUN_147821e9e body=59 status=ok
// SIG undefined FUN_147821e9e(void)

undefined8 FUN_147821e9e(longlong *param_1)

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



// FUNCTION 147821ee4 FUN_147821ee4 body=38 status=ok
// SIG undefined FUN_147821ee4(void)

void FUN_147821ee4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147821fa8 FUN_147821fa8 body=42 status=ok
// SIG undefined FUN_147821fa8(void)

void FUN_147821fa8(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147822122(param_2);
  return;
}



// FUNCTION 147821fd6 FUN_147821fd6 body=19 status=ok
// SIG undefined FUN_147821fd6(void)

undefined1 FUN_147821fd6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14781fcea(param_3);
  return 1;
}



// FUNCTION 147821ff8 FUN_147821ff8 body=54 status=ok
// SIG undefined FUN_147821ff8(void)

undefined1 FUN_147821ff8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478222be(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147822056 FUN_147822056 body=59 status=ok
// SIG undefined FUN_147822056(void)

undefined8 FUN_147822056(longlong *param_1)

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



// FUNCTION 14782209c FUN_14782209c body=55 status=ok
// SIG undefined FUN_14782209c(void)

void FUN_14782209c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147822122(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147822122 FUN_147822122 body=54 status=ok
// SIG undefined FUN_147822122(void)

void FUN_147822122(longlong *param_1)

{
  FUN_147822158(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147822158 FUN_147822158 body=356 status=ok
// SIG undefined FUN_147822158(void)

void FUN_147822158(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1478222be FUN_1478222be body=122 status=ok
// SIG undefined FUN_1478222be(void)

longlong FUN_1478222be(longlong param_1,longlong param_2)

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
    FUN_147822338(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147822338 FUN_147822338 body=201 status=ok
// SIG undefined FUN_147822338(void)

undefined8 * FUN_147822338(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147822158(param_1,(ulonglong)uVar1);
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
          FUN_147822402(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147822402 FUN_147822402 body=121 status=ok
// SIG undefined FUN_147822402(void)

undefined8 * FUN_147822402(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
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
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 1478224c4 FUN_1478224c4 body=59 status=ok
// SIG undefined FUN_1478224c4(void)

undefined8 FUN_1478224c4(longlong *param_1)

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



// FUNCTION 147822622 FUN_147822622 body=178 status=ok
// SIG undefined FUN_147822622(void)

undefined8 FUN_147822622(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar9);
      uVar8 = puVar1[1];
      lVar3 = param_2 + 0x20 + lVar9;
      *(undefined8 *)(lVar3 + -0x20) = *puVar1;
      *(undefined8 *)(lVar3 + -0x18) = uVar8;
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar5 = *(undefined4 *)(puVar1 + 3);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar3 + -0x10) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_144a787a6(lVar3,puVar1 + 4);
      *(undefined8 *)(lVar3 + 0x10) = puVar1[6];
      FUN_140bee9ec(param_2 + lVar9 + 0x38,param_3 + lVar9 + 0x38);
      lVar3 = param_2 + lVar9;
      lVar2 = param_3 + lVar9;
      FUN_140bee9ec(lVar3 + 0x48,lVar2 + 0x48);
      uVar8 = *(undefined8 *)(lVar2 + 0x60);
      uVar4 = *(undefined4 *)(lVar2 + 100);
      uVar5 = *(undefined4 *)(lVar2 + 0x68);
      uVar6 = *(undefined4 *)(lVar2 + 0x6c);
      uVar7 = *(undefined4 *)(lVar2 + 0x70);
      *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar2 + 0x58);
      *(undefined8 *)(lVar3 + 0x60) = uVar8;
      *(undefined4 *)(lVar3 + 100) = uVar4;
      *(undefined4 *)(lVar3 + 0x68) = uVar5;
      *(undefined4 *)(lVar3 + 0x6c) = uVar6;
      *(undefined4 *)(lVar3 + 0x70) = uVar7;
      lVar9 = lVar9 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478226fc FUN_1478226fc body=59 status=ok
// SIG undefined FUN_1478226fc(void)

undefined8 FUN_1478226fc(longlong *param_1)

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



// FUNCTION 147822742 FUN_147822742 body=34 status=ok
// SIG undefined FUN_147822742(void)

void FUN_147822742(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1478227b2(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1478227b2 FUN_1478227b2 body=86 status=ok
// SIG undefined FUN_1478227b2(void)

void FUN_1478227b2(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147822856 FUN_147822856 body=88 status=ok
// SIG undefined FUN_147822856(void)

undefined1 FUN_147822856(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    FUN_144a787a6(param_2 + 0x30,param_3 + 0x30);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 1478228d6 FUN_1478228d6 body=59 status=ok
// SIG undefined FUN_1478228d6(void)

undefined8 FUN_1478228d6(longlong *param_1)

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



// FUNCTION 14782291c FUN_14782291c body=34 status=ok
// SIG undefined FUN_14782291c(void)

void FUN_14782291c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14782298c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14782298c FUN_14782298c body=61 status=ok
// SIG undefined FUN_14782298c(void)

void FUN_14782298c(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478229da FUN_1478229da body=44 status=ok
// SIG undefined FUN_1478229da(void)

void FUN_1478229da(undefined8 param_1,longlong *param_2)

{
  FUN_147822b16(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147822a1c FUN_147822a1c body=54 status=ok
// SIG undefined FUN_147822a1c(void)

undefined1 FUN_147822a1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147822b3c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147822a7a FUN_147822a7a body=59 status=ok
// SIG undefined FUN_147822a7a(void)

undefined8 FUN_147822a7a(longlong *param_1)

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



// FUNCTION 147822b16 FUN_147822b16 body=38 status=ok
// SIG undefined FUN_147822b16(void)

void FUN_147822b16(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14782298c(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 147822b3c FUN_147822b3c body=95 status=ok
// SIG undefined FUN_147822b3c(void)

undefined8 * FUN_147822b3c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147822b16(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147822b9c(param_1,iVar1);
      FUN_147822bfe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147822b9c FUN_147822b9c body=98 status=ok
// SIG undefined FUN_147822b9c(void)

void FUN_147822b9c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147822bfe FUN_147822bfe body=52 status=ok
// SIG undefined FUN_147822bfe(void)

void FUN_147822bfe(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147822c32(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 147822c32 FUN_147822c32 body=242 status=ok
// SIG undefined FUN_147822c32(void)

undefined8 * FUN_147822c32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
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
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 147822d26 FUN_147822d26 body=50 status=ok
// SIG undefined FUN_147822d26(void)

void FUN_147822d26(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_147822b16(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147822d68 FUN_147822d68 body=44 status=ok
// SIG undefined FUN_147822d68(void)

void FUN_147822d68(undefined8 param_1,longlong *param_2)

{
  FUN_1408437ec(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147822daa FUN_147822daa body=54 status=ok
// SIG undefined FUN_147822daa(void)

undefined1 FUN_147822daa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14757a4e4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147822e0c FUN_147822e0c body=59 status=ok
// SIG undefined FUN_147822e0c(void)

undefined8 FUN_147822e0c(longlong *param_1)

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



// FUNCTION 147822eaa FUN_147822eaa body=48 status=ok
// SIG undefined FUN_147822eaa(void)

void FUN_147822eaa(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1408437ec(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147822eda FUN_147822eda body=37 status=ok
// SIG undefined FUN_147822eda(void)

void FUN_147822eda(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  FUN_14781fa1a(param_2);
  return;
}



// FUNCTION 147822f26 FUN_147822f26 body=118 status=ok
// SIG undefined FUN_147822f26(void)

undefined1 FUN_147822f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147823086(param_2,param_3);
    FUN_145ff0016(param_2 + 0x50,param_3 + 0x50);
    FUN_145ff0016(param_2 + 0xa0,param_3 + 0xa0);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 147822fc4 FUN_147822fc4 body=59 status=ok
// SIG undefined FUN_147822fc4(void)

undefined8 FUN_147822fc4(longlong *param_1)

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



// FUNCTION 147823010 FUN_147823010 body=40 status=ok
// SIG undefined FUN_147823010(void)

void FUN_147823010(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14781fc6c(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147823086 FUN_147823086 body=122 status=ok
// SIG undefined FUN_147823086(void)

longlong FUN_147823086(longlong param_1,longlong param_2)

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
    FUN_147823100(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147823100 FUN_147823100 body=235 status=ok
// SIG undefined FUN_147823100(void)

longlong * FUN_147823100(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478231ec(param_1,(ulonglong)uVar1);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar6 = *param_2 + 0x10;
      lVar8 = *param_1 + 0x10;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar6 + -0x10);
          *(undefined4 *)(lVar8 + -0xc) = *(undefined4 *)(lVar6 + -0xc);
        }
        else {
          uVar2 = *(undefined4 *)(lVar6 + -0xc);
          uVar3 = *(undefined4 *)(lVar6 + -8);
          uVar4 = *(undefined4 *)(lVar6 + -4);
          *(undefined4 *)(lVar8 + -0x10) = *(undefined4 *)(lVar6 + -0x10);
          *(undefined4 *)(lVar8 + -0xc) = uVar2;
          *(undefined4 *)(lVar8 + -8) = uVar3;
          *(undefined4 *)(lVar8 + -4) = uVar4;
          FUN_14782336e(lVar8,lVar6);
          *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x28;
        lVar8 = lVar8 + 0x28;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1478231ec FUN_1478231ec body=383 status=ok
// SIG undefined FUN_1478231ec(void)

void FUN_1478231ec(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      FUN_147822b16(*(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x28),
                    *(undefined4 *)(lVar2 + 0x18 + lVar4 * 0x28));
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14782336e FUN_14782336e body=77 status=ok
// SIG undefined FUN_14782336e(void)

undefined8 * FUN_14782336e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147822b9c(param_1,iVar1,0);
    FUN_147822bfe(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1478233bc FUN_1478233bc body=54 status=ok
// SIG undefined FUN_1478233bc(void)

void FUN_1478233bc(longlong *param_1)

{
  FUN_1478231ec(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478233f2 FUN_1478233f2 body=132 status=ok
// SIG undefined FUN_1478233f2(void)

void FUN_1478233f2(longlong param_1,int param_2)

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



// FUNCTION 1478234bc FUN_1478234bc body=104 status=ok
// SIG undefined FUN_1478234bc(void)

undefined8 FUN_1478234bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 6);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 10);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14782354c FUN_14782354c body=59 status=ok
// SIG undefined FUN_14782354c(void)

undefined8 FUN_14782354c(longlong *param_1)

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



// FUNCTION 147823592 FUN_147823592 body=38 status=ok
// SIG undefined FUN_147823592(void)

void FUN_147823592(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147823608 FUN_147823608 body=37 status=ok
// SIG undefined FUN_147823608(void)

void FUN_147823608(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  FUN_14155658c(param_2);
  return;
}



// FUNCTION 147823654 FUN_147823654 body=63 status=ok
// SIG undefined FUN_147823654(void)

undefined1 FUN_147823654(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14782377c(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1478236bc FUN_1478236bc body=59 status=ok
// SIG undefined FUN_1478236bc(void)

undefined8 FUN_1478236bc(longlong *param_1)

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



// FUNCTION 147823708 FUN_147823708 body=38 status=ok
// SIG undefined FUN_147823708(void)

void FUN_147823708(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_141552110(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14782377c FUN_14782377c body=174 status=ok
// SIG undefined FUN_14782377c(void)

longlong FUN_14782377c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  FUN_144a787a6();
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  lVar8 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x98);
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar8;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14782382b FUN_14782382b body=28 status=ok
// SIG undefined FUN_14782382b(void)

void FUN_14782382b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 147823848 FUN_147823848 body=296 status=ok
// SIG undefined FUN_147823848(void)

undefined4 * FUN_147823848(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147823972(param_1,local_48);
  FUN_147823ad2(param_3,local_40);
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1447addd0(local_40,0x10);
  cVar2 = FUN_147823a54(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)(local_40 + 0x34) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
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
      FUN_147823c2e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147823972 FUN_147823972 body=226 status=ok
// SIG undefined FUN_147823972(void)

int * FUN_147823972(longlong *param_1,int *param_2)

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



// FUNCTION 147823a54 FUN_147823a54 body=125 status=ok
// SIG undefined FUN_147823a54(void)

undefined8 FUN_147823a54(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
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
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_147823b46(), iVar13 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
    if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar13 * 0x38) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[9];
    uVar11 = param_3[10];
    uVar12 = param_3[0xb];
    puVar1[8] = param_3[8];
    puVar1[9] = uVar10;
    puVar1[10] = uVar11;
    puVar1[0xb] = uVar12;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147823bba(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 147823ad2 FUN_147823ad2 body=115 status=ok
// SIG undefined FUN_147823ad2(void)

undefined8 * FUN_147823ad2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined4 *)param_1[1];
  uVar6 = ((undefined8 *)*param_1)[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = uVar6;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(param_2 + 2) = *puVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  param_2[4] = 0;
  iVar1 = puVar2[6];
  _Src = *(void **)(puVar2 + 4);
  *(int *)(param_2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 4,iVar1,0);
    memcpy((void *)param_2[4],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147823b46 FUN_147823b46 body=115 status=ok
// SIG undefined FUN_147823b46(void)

int FUN_147823b46(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x38;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147823bba FUN_147823bba body=116 status=ok
// SIG undefined FUN_147823bba(void)

void FUN_147823bba(longlong *param_1,int param_2)

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



// FUNCTION 147823c2e FUN_147823c2e body=446 status=ok
// SIG undefined FUN_147823c2e(void)

void FUN_147823c2e(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
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



// FUNCTION 147823dee FUN_147823dee body=230 status=ok
// SIG undefined FUN_147823dee(void)

undefined8 * FUN_147823dee(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 147823ed6 FUN_147823ed6 body=29 status=ok
// SIG undefined FUN_147823ed6(void)

undefined8 FUN_147823ed6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147823f0e FUN_147823f0e body=29 status=ok
// SIG undefined FUN_147823f0e(void)

bool FUN_147823f0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147823f2c FUN_147823f2c body=26 status=ok
// SIG undefined FUN_147823f2c(void)

bool FUN_147823f2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147823f46 FUN_147823f46 body=24 status=ok
// SIG undefined FUN_147823f46(void)

bool FUN_147823f46(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147823f6a FUN_147823f6a body=101 status=ok
// SIG undefined FUN_147823f6a(void)

void FUN_147823f6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a4760;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a46f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147823fd0 FUN_147823fd0 body=101 status=ok
// SIG undefined FUN_147823fd0(void)

void FUN_147823fd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a4760;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a46f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147824036 FUN_147824036 body=134 status=ok
// SIG undefined FUN_147824036(void)

void FUN_147824036(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5a4760;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a46f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001478240ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478240bc FUN_1478240bc body=62 status=ok
// SIG undefined FUN_1478240bc(void)

void FUN_1478240bc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001478240f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1478240fa FUN_1478240fa body=165 status=ok
// SIG undefined FUN_1478240fa(void)

bool FUN_1478240fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478241a2 FUN_1478241a2 body=28 status=ok
// SIG undefined FUN_1478241a2(void)

undefined8 FUN_1478241a2(undefined8 param_1,undefined8 param_2)

{
  FUN_14781b6a8(param_2,param_1);
  return param_1;
}



// FUNCTION 1478241d0 FUN_1478241d0 body=22 status=ok
// SIG undefined FUN_1478241d0(void)

undefined8 FUN_1478241d0(undefined8 param_1)

{
  FUN_14781b7ce();
  return param_1;
}



// FUNCTION 1478241e6 FUN_1478241e6 body=31 status=ok
// SIG undefined FUN_1478241e6(void)

undefined8 FUN_1478241e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782421c FUN_14782421c body=93 status=ok
// SIG undefined FUN_14782421c(void)

void FUN_14782421c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a4d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a4ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14782427a FUN_14782427a body=126 status=ok
// SIG undefined FUN_14782427a(void)

void FUN_14782427a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5a4d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a4ce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478242e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478242f8 FUN_1478242f8 body=102 status=ok
// SIG undefined FUN_1478242f8(void)

undefined8 FUN_1478242f8(longlong param_1)

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



// FUNCTION 147824362 FUN_147824362 body=31 status=ok
// SIG undefined FUN_147824362(void)

undefined8 FUN_147824362(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782439e FUN_14782439e body=93 status=ok
// SIG undefined FUN_14782439e(void)

void FUN_14782439e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5a47d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1478243fc FUN_1478243fc body=126 status=ok
// SIG undefined FUN_1478243fc(void)

void FUN_1478243fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a47d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014782446b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14782447a FUN_14782447a body=21 status=ok
// SIG undefined FUN_14782447a(void)

undefined8 FUN_14782447a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147824490 FUN_147824490 body=45 status=ok
// SIG undefined FUN_147824490(void)

longlong FUN_147824490(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145d09244(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478244c4 FUN_1478244c4 body=253 status=ok
// SIG undefined FUN_1478244c4(void)

void FUN_1478244c4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  longlong local_80 [9];
  
  local_80[8] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_88[0] = param_2;
  FUN_1405b70a4(local_80,param_3);
  FUN_14054c6c4(local_80 + 2,param_4);
  FUN_1405b70a4(local_80 + 4,param_5);
  FUN_144a67f5c(local_80 + 6,param_6);
  FUN_1447cd2ec(param_1,local_88);
  if (local_80[6] != 0) {
    FUN_1400020a8();
  }
  if (local_80[4] != 0) {
    FUN_1400020a8();
  }
  if (local_80[2] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80[8] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478245c2 FUN_1478245c2 body=156 status=ok
// SIG undefined FUN_1478245c2(void)

void FUN_1478245c2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143379972(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478249e4 FUN_1478249e4 body=315 status=ok
// SIG undefined FUN_1478249e4(void)

longlong * FUN_1478249e4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xb8) < 1) {
    plVar3 = (longlong *)FUN_14001cc68(0x90);
    memset(plVar3 + 1,0,0x88);
    *param_2 = (longlong)plVar3;
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar4[1] = &DAT_100000001;
    *puVar4 = &PTR_FUN_14a5a8350;
    puVar4[2] = plVar3;
    param_2[1] = (longlong)puVar4;
    *plVar3 = param_1;
    iVar1 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
      FUN_147826248((longlong *)(param_1 + 0xa0),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0xa0);
    *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = plVar3;
    *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar5 = (longlong)*(int *)(param_1 + 0xb8) * 0x10;
    plVar3 = *(longlong **)(lVar2 + -0x10 + lVar5);
    *param_2 = (longlong)plVar3;
    param_2[1] = *(longlong *)(lVar2 + -8 + lVar5);
    puVar4 = (undefined8 *)(lVar2 + -0x10 + lVar5);
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_147826102(param_1 + 0xb0,*(int *)(param_1 + 0xb8) + -1);
    *plVar3 = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  }
  return param_2;
}



// FUNCTION 147824ba2 FUN_147824ba2 body=49 status=ok
// SIG undefined FUN_147824ba2(void)

void FUN_147824ba2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x620) + 8))(param_1 + 0x620);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147824bd8 FUN_147824bd8 body=158 status=ok
// SIG undefined FUN_147824bd8(void)

void FUN_147824bd8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14337ad16(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147824c7c FUN_147824c7c body=162 status=ok
// SIG undefined FUN_147824c7c(void)

void FUN_147824c7c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x63f) = local_1c != 0;
  FUN_1448c6f34(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147824d20 FUN_147824d20 body=160 status=ok
// SIG undefined FUN_147824d20(void)

void FUN_147824d20(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147824dc2(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147824dc2 FUN_147824dc2 body=313 status=ok
// SIG undefined FUN_147824dc2(void)

void FUN_147824dc2(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x630);
  lVar7 = *(longlong *)(param_1 + 0x630);
  do {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(param_1 + 0x658) = *param_2;
    *(undefined4 *)(param_1 + 0x65c) = uVar2;
    *(undefined4 *)(param_1 + 0x660) = uVar3;
    *(undefined4 *)(param_1 + 0x664) = uVar4;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      uVar6 = FUN_144a772c4();
      bVar5 = FUN_144a7ca96(plVar1,uVar6);
      lVar7 = *plVar1;
      if ((lVar7 != 0 & bVar5) == 1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cabcff0) {
          FUN_144b3d300(&DAT_14cabcff0);
          if (DAT_14cabcff0 == -1) {
            FUN_1446f470e(&DAT_14cabcfe8,L"Color",1);
            _Init_thread_footer(&DAT_14cabcff0);
          }
        }
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        FUN_144a9d3f0(lVar7,DAT_14cabcfe8);
        FUN_1448c6f34(param_1);
        if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
    lVar7 = FUN_14090ceee(lVar7,param_1,0);
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    *plVar1 = lVar7;
  } while( true );
}



// FUNCTION 147824efc FUN_147824efc body=160 status=ok
// SIG undefined FUN_147824efc(void)

void FUN_147824efc(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x9f8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147824fb8 FUN_147824fb8 body=36 status=ok
// SIG undefined FUN_147824fb8(void)

void FUN_147824fb8(longlong param_1)

{
  FUN_1401c3c2c();
  FUN_1457ba972(param_1,*(byte *)(param_1 + 0x9e) >> 7);
  return;
}



// FUNCTION 147824fdc FUN_147824fdc body=44 status=ok
// SIG undefined FUN_147824fdc(void)

void FUN_147824fdc(longlong param_1,undefined4 param_2)

{
  (**(code **)(*(longlong *)(param_1 + 0x620) + 0x28))(param_1 + 0x620);
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 147825008 FUN_147825008 body=77 status=ok
// SIG undefined FUN_147825008(void)

void FUN_147825008(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar3 = 0;
    do {
      FUN_1400bcfd8(*(longlong *)(lVar2 + lVar3) + 0x38);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1417e9838(param_1);
  return;
}



// FUNCTION 14782505a FUN_14782505a body=189 status=ok
// SIG undefined FUN_14782505a(void)

void FUN_14782505a(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_144b261ba(param_1 + 0x410);
  if (iVar3 != param_2) {
    iVar3 = *(int *)(param_1 + 0x688);
    if ((longlong)iVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x680);
      lVar4 = 0;
      do {
        FUN_140a18d12(*(longlong *)(lVar1 + lVar4) + 0x38,param_2,1);
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar3 * 8 != lVar4);
    }
    if (((((*(byte *)(param_1 + 0x9c) & 1) != 0) && ((*(byte *)(param_1 + 0x418) & 1) != 0)) &&
        (cVar2 = FUN_140a196da(param_1), cVar2 == '\0')) &&
       (iVar3 = *(int *)(param_1 + 0x688), (longlong)iVar3 != 0)) {
      lVar1 = *(longlong *)(param_1 + 0x680);
      lVar4 = 0;
      do {
        FUN_1405a3210(*(longlong *)(lVar1 + lVar4) + 0x38);
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar3 * 8 != lVar4);
    }
  }
  FUN_140a18afe(param_1,param_2);
  return;
}



// FUNCTION 147825118 FUN_147825118 body=87 status=ok
// SIG undefined FUN_147825118(void)

void FUN_147825118(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar3 = 0;
    do {
      FUN_1412b4a80(*(longlong *)(lVar2 + lVar3) + 0x38,param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1417e9802(param_1,param_2);
  return;
}



// FUNCTION 147825170 FUN_147825170 body=100 status=ok
// SIG undefined FUN_147825170(void)

void FUN_147825170(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar3 = 0;
    do {
      FUN_1402b9d88(*(longlong *)(lVar2 + lVar3) + 0x38,param_2,param_3);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1402b9d52(param_1,param_2,param_3);
  return;
}



// FUNCTION 1478251d4 FUN_1478251d4 body=87 status=ok
// SIG undefined FUN_1478251d4(void)

void FUN_1478251d4(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar3 = 0;
    do {
      FUN_1402ba50c(*(longlong *)(lVar2 + lVar3) + 0x38,param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1402ba4d6(param_1,param_2);
  return;
}



// FUNCTION 14782522c FUN_14782522c body=90 status=ok
// SIG undefined FUN_14782522c(void)

void FUN_14782522c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar3 = 0;
    do {
      FUN_1406902ca(*(longlong *)(lVar2 + lVar3) + 0x38,param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_140690294(param_1,param_2);
  return;
}



// FUNCTION 147825286 FUN_147825286 body=94 status=ok
// SIG undefined FUN_147825286(void)

void FUN_147825286(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar4 = 0;
    do {
      cVar3 = FUN_144727810(*(longlong *)(lVar2 + lVar4) + 0x38);
      if (cVar3 != '\0') {
        FUN_1400bcfd8(*(longlong *)(lVar2 + lVar4) + 0x38);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_147cb2abe(param_1);
  return;
}



// FUNCTION 1478252e4 FUN_1478252e4 body=110 status=ok
// SIG undefined FUN_1478252e4(void)

void FUN_1478252e4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar4 = 0;
    do {
      cVar3 = FUN_144727810(*(longlong *)(lVar2 + lVar4) + 0x38);
      if (cVar3 != '\0') {
        FUN_143605d98(*(longlong *)(lVar2 + lVar4) + 0x38,param_2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_147cb168e(param_1,param_2);
  return;
}



// FUNCTION 147825352 FUN_147825352 body=39 status=ok
// SIG undefined FUN_147825352(void)

void FUN_147825352(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x310,0x10);
  FUN_14782537a(uVar1,param_1);
  return;
}



// FUNCTION 14782537a FUN_14782537a body=204 status=ok
// SIG undefined FUN_14782537a(void)

undefined8 * FUN_14782537a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1406ff4f8(param_1,param_2,*(undefined8 *)(param_2 + 0x18));
  *param_1 = &PTR_FUN_14a5a8370;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  if (((*(char *)(param_2 + 0x63f) != '\x01') ||
      (lVar1 = *(longlong *)(param_2 + 0x630), *(longlong *)(param_2 + 0x630) == 0)) &&
     (lVar1 = *(longlong *)(param_2 + 0x628), *(longlong *)(param_2 + 0x628) == 0)) {
    FUN_14003fbd6();
    lVar1 = DAT_14caea080;
  }
  param_1[0x55] = lVar1;
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_1[0x42] + 8);
  *(undefined1 *)((longlong)param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x63e);
  *(undefined1 *)((longlong)param_1 + 0x2b5) = *(undefined1 *)(param_2 + 0x63f);
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 147825446 FUN_147825446 body=113 status=ok
// SIG undefined FUN_147825446(void)

void FUN_147825446(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x628);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 0x630);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1478254eb FUN_1478254eb body=185 status=ok
// SIG undefined FUN_1478254eb(void)

undefined8 FUN_1478254eb(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459d47b8();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = (ulonglong)param_2;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478255a6 FUN_1478255a6 body=225 status=ok
// SIG undefined FUN_1478255a6(void)

void FUN_1478255a6(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x1d0) = param_2;
  uVar3 = 0;
  lVar2 = param_1;
  do {
    if (lVar2 == 0) {
LAB_1478255e5:
      local_30 = 0;
      local_38 = 0;
      lVar2 = FUN_140c9d4a9(param_1,0,uVar3,0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x30) = lVar2;
      FUN_1412e3d1e(&local_28);
      lVar2 = *(longlong *)(param_1 + 0x30);
      *(undefined4 *)(lVar2 + 0xe8) = local_28;
      *(undefined4 *)(lVar2 + 0xec) = uStack_24;
      *(undefined4 *)(lVar2 + 0xf0) = uStack_20;
      *(undefined4 *)(lVar2 + 0xf4) = uStack_1c;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x30) + 0xb8);
      *pbVar1 = *pbVar1 & 0xbf;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x30) + 0xb9);
      *pbVar1 = *pbVar1 | 4;
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x31) = 3;
      *(undefined1 *)(param_1 + 0x220) = 0;
      if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((*(uint *)(lVar2 + 8) & 0x30) != 0) {
      uVar3 = 0x21;
      goto LAB_1478255e5;
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
  } while( true );
}



// FUNCTION 147825688 FUN_147825688 body=122 status=ok
// SIG undefined FUN_147825688(void)

void FUN_147825688(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x220) == '\x01') {
    FUN_147c49008(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1c8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001478256f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147825702 FUN_147825702 body=158 status=ok
// SIG undefined FUN_147825702(void)

void FUN_147825702(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  *(longlong *)(param_1 + 0x1c8) = lVar4;
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
  *(undefined8 *)(param_1 + 0x1d8) = param_2[3];
  *(undefined8 *)(param_1 + 0x1e0) = param_2[7];
  uVar3 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  uVar9 = param_2[0xd];
  *(undefined8 *)(param_1 + 0x1e8) = param_2[8];
  *(undefined8 *)(param_1 + 0x1f0) = uVar3;
  *(undefined8 *)(param_1 + 0x1f8) = uVar6;
  *(undefined8 *)(param_1 + 0x200) = uVar7;
  *(undefined8 *)(param_1 + 0x208) = uVar8;
  *(undefined8 *)(param_1 + 0x210) = uVar9;
  *(undefined8 *)(param_1 + 0x218) = param_2[0xe];
  return;
}



// FUNCTION 1478257a0 FUN_1478257a0 body=187 status=ok
// SIG undefined FUN_1478257a0(void)

longlong *
FUN_1478257a0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a5a8900;
  puVar3[1] = *param_4;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14a5a8890;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 14782585c FUN_14782585c body=325 status=ok
// SIG undefined FUN_14782585c(void)

void FUN_14782585c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  longlong local_a8 [13];
  undefined1 local_3b [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_145898aa8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      plVar4 = plVar1 + 0x48;
      plVar5 = local_a8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar5 = *plVar4;
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
      }
      plVar4 = param_1 + 7;
      FUN_140156df6(plVar4,0,0);
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar3 = *(undefined8 *)(lVar2 + 0x260);
      lVar2 = param_1[6];
      FUN_14025a69a(local_3b,plVar1);
      local_b8 = 0;
      local_c8 = uVar3;
      local_c0 = local_3b;
      FUN_140311a0a(plVar4,lVar2,local_a8,plVar1);
      uVar3 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
      FUN_147c47c16(plVar4,uVar3);
      *(undefined1 *)((longlong)plVar1 + 0x63a) = 1;
      if ((*(char *)((longlong)plVar1 + 0x639) == '\x01') &&
         (*(char *)((longlong)plVar1 + 0x2e9) != '\0')) {
        *(undefined1 *)((longlong)plVar1 + 0x63a) = 0;
        FUN_14348be42(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478259a2 FUN_1478259a2 body=210 status=ok
// SIG undefined FUN_1478259a2(void)

void FUN_1478259a2(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = (longlong)(int)param_2;
  FUN_147825a74(*(undefined8 *)(*(longlong *)(param_1 + 0x680) + lVar3 * 8));
  iVar1 = *(int *)(param_1 + 0x688);
  iVar2 = iVar1 + ~param_2;
  if (iVar2 != 0) {
    iVar4 = 1;
    if (iVar2 < 1) {
      iVar4 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x680) + lVar3 * 8),
            (void *)(*(longlong *)(param_1 + 0x680) + (longlong)(iVar1 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar1 = *(int *)(param_1 + 0x688);
  }
  *(int *)(param_1 + 0x688) = iVar1 + -1;
  FUN_147829ac8(param_1 + 0x680);
  iVar1 = *(int *)(param_1 + 0x698);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar4 = 1;
    if (iVar2 < 1) {
      iVar4 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x690) + lVar3 * 8),
            (void *)(*(longlong *)(param_1 + 0x690) + (longlong)(iVar1 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar1 = *(int *)(param_1 + 0x698);
  }
  *(int *)(param_1 + 0x698) = iVar1 + -1;
  FUN_140496560(param_1 + 0x690);
  return;
}



// FUNCTION 147825a74 FUN_147825a74 body=110 status=ok
// SIG undefined FUN_147825a74(void)

void FUN_147825a74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147825688();
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1c8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
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
  FUN_140156df6(param_1 + 0x38,0,0);
  return;
}



// FUNCTION 147825ae2 FUN_147825ae2 body=193 status=ok
// SIG undefined FUN_147825ae2(void)

void FUN_147825ae2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a8c35e();
  iVar1 = *(int *)(param_1 + 0x688);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x680);
    lVar3 = 0;
    do {
      FUN_140043566(*(longlong *)(lVar2 + lVar3) + 0x38,param_1 + 0x240,param_3,1);
      local_58 = *(undefined8 *)(param_1 + 0x280);
      uStack_50 = *(undefined8 *)(param_1 + 0x288);
      local_48 = *(undefined8 *)(param_1 + 0x290);
      FUN_140043360(*(longlong *)(lVar2 + lVar3) + 0x38,&local_58,0);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147825ba4 FUN_147825ba4 body=74 status=ok
// SIG undefined FUN_147825ba4(void)

void FUN_147825ba4(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x628) != param_3) {
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(param_1 + 0x628) = param_3;
    FUN_1448c6f34(param_1);
    return;
  }
  return;
}



// FUNCTION 147825bf6 FUN_147825bf6 body=74 status=ok
// SIG undefined FUN_147825bf6(void)

void FUN_147825bf6(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x630) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x630) = param_2;
    FUN_1448c6f34(param_1);
    return;
  }
  return;
}



// FUNCTION 147825c40 FUN_147825c40 body=90 status=ok
// SIG undefined FUN_147825c40(void)

undefined8 FUN_147825c40(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x3e0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3d8);
    lVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x28))
                (param_2,*(undefined8 *)(*(longlong *)(lVar2 + lVar3) + 0x30),param_1 + -0x68);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 147825cc2 FUN_147825cc2 body=301 status=ok
// SIG undefined FUN_147825cc2(void)

undefined8 FUN_147825cc2(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((*(longlong *)(param_1 + 0x198) == 0) || (*(int *)(*(longlong *)(param_1 + 0x1b8) + 8) < 1)) {
    uVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1b0) + 8);
    lVar8 = param_2[1];
    *(uint *)(param_2 + 1) = (int)lVar8 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar8) < uVar1) {
      FUN_140c0b6f2();
    }
    plVar11 = *(longlong **)(param_1 + 0x1b0);
    if (0 < (int)plVar11[1]) {
      lVar8 = 0;
      lVar10 = 0;
      do {
        lVar6 = *param_2;
        uVar9 = *(undefined8 *)(*plVar11 + lVar8);
        *(undefined4 *)(lVar6 + 8 + lVar8) = *(undefined4 *)(*plVar11 + 8 + lVar8);
        *(undefined8 *)(lVar6 + lVar8) = uVar9;
        lVar10 = lVar10 + 1;
        plVar11 = *(longlong **)(param_1 + 0x1b0);
        lVar8 = lVar8 + 0xc;
      } while (lVar10 < (int)plVar11[1]);
    }
    plVar7 = *(longlong **)(param_1 + 0x1b8);
    plVar11 = param_2 + 2;
    FUN_147825df0(plVar11,(int)plVar7[1] / 3);
    if (0 < (int)plVar7[1]) {
      lVar8 = 0;
      do {
        lVar10 = *plVar7;
        uVar2 = *(undefined4 *)(lVar10 + lVar8 * 4);
        uVar3 = *(undefined4 *)(lVar10 + 4 + lVar8 * 4);
        uVar4 = *(undefined4 *)(lVar10 + 8 + lVar8 * 4);
        iVar5 = (int)param_2[3];
        lVar10 = (longlong)iVar5;
        *(uint *)(param_2 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0x1c) < iVar5 + 1U) {
          FUN_140e90710(plVar11,iVar5);
        }
        lVar6 = *plVar11;
        *(undefined4 *)(lVar6 + lVar10 * 0xc) = uVar2;
        *(undefined4 *)(lVar6 + 4 + lVar10 * 0xc) = uVar3;
        *(undefined4 *)(lVar6 + 8 + lVar10 * 0xc) = uVar4;
        lVar8 = lVar8 + 3;
      } while ((int)lVar8 < (int)plVar7[1]);
    }
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 7;
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 147825df0 FUN_147825df0 body=41 status=ok
// SIG undefined FUN_147825df0(void)

void FUN_147825df0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147829c30();
  return;
}



// FUNCTION 147825e36 FUN_147825e36 body=160 status=ok
// SIG undefined FUN_147825e36(void)

void FUN_147825e36(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147825ef6 FUN_147825ef6 body=41 status=ok
// SIG undefined FUN_147825ef6(void)

void FUN_147825ef6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147825f24 FUN_147825f24 body=41 status=ok
// SIG undefined FUN_147825f24(void)

void FUN_147825f24(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147825fb2 FUN_147825fb2 body=45 status=ok
// SIG undefined FUN_147825fb2(void)

longlong FUN_147825fb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a17db2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147825fe0 FUN_147825fe0 body=45 status=ok
// SIG undefined FUN_147825fe0(void)

longlong FUN_147825fe0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cf44a2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782601a FUN_14782601a body=45 status=ok
// SIG undefined FUN_14782601a(void)

longlong FUN_14782601a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1460210e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147826048 FUN_147826048 body=48 status=ok
// SIG undefined FUN_147826048(void)

longlong FUN_147826048(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1460210e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147826078 FUN_147826078 body=48 status=ok
// SIG undefined FUN_147826078(void)

longlong FUN_147826078(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1460210e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478260a8 FUN_1478260a8 body=48 status=ok
// SIG undefined FUN_1478260a8(void)

longlong FUN_1478260a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1460210e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478260e0 FUN_1478260e0 body=33 status=ok
// SIG undefined FUN_1478260e0(void)

void FUN_1478260e0(longlong param_1,undefined8 param_2)

{
  FUN_144927a08(param_1 + -0x620,param_2,0,0,0);
  return;
}



// FUNCTION 147826102 FUN_147826102 body=118 status=ok
// SIG undefined FUN_147826102(void)

void FUN_147826102(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147826178 FUN_147826178 body=41 status=ok
// SIG undefined FUN_147826178(void)

void FUN_147826178(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1478261c0(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1478261a2 FUN_1478261a2 body=29 status=ok
// SIG undefined FUN_1478261a2(void)

undefined8 FUN_1478261a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478261c0 FUN_1478261c0 body=135 status=ok
// SIG undefined FUN_1478261c0(void)

void FUN_1478261c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147826248 FUN_147826248 body=132 status=ok
// SIG undefined FUN_147826248(void)

void FUN_147826248(longlong param_1,int param_2)

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



// FUNCTION 1478262ce FUN_1478262ce body=38 status=ok
// SIG undefined FUN_1478262ce(void)

undefined8 FUN_1478262ce(undefined8 param_1,int param_2)

{
  FUN_1478262f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478262f4 FUN_1478262f4 body=82 status=ok
// SIG undefined FUN_1478262f4(void)

void FUN_1478262f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5a8368;
  FUN_147826346(param_1[1],param_1 + 1);
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
                    /* WARNING: Could not recover jumptable at 0x00014782633b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147826346 FUN_147826346 body=389 status=ok
// SIG undefined FUN_147826346(void)

void FUN_147826346(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_1447a8aa0(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_140678446(param_1 + 4,0);
  }
  else {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN_14480809c(param_1 + 0xe,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_1447a8aa0(param_1 + 6,0);
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_1408652ee(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_146971392(param_1 + 10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN_141742b1c(param_1 + 0xc,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x8c) < 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    FUN_14482f6fa(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_1478264cc(lVar1,param_2);
  return;
}



// FUNCTION 1478264cc FUN_1478264cc body=131 status=ok
// SIG undefined FUN_1478264cc(void)

void FUN_1478264cc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  iVar1 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar1 + 1U) {
    FUN_147826248((longlong *)(param_1 + 0xb0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014782653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  return;
}



// FUNCTION 147826550 FUN_147826550 body=48 status=ok
// SIG undefined FUN_147826550(void)

void FUN_147826550(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147826580 FUN_147826580 body=38 status=ok
// SIG undefined FUN_147826580(void)

undefined8 FUN_147826580(undefined8 param_1,int param_2)

{
  FUN_1478270d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478265ae FUN_1478265ae body=2548 status=ok
// SIG undefined FUN_1478265ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478265ae(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong **pplVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined7 uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_238 [32];
  undefined *local_218;
  undefined *local_210;
  byte local_208;
  undefined1 local_200;
  undefined1 local_1f8;
  byte local_1f0;
  uint local_1e4;
  longlong *local_1e0;
  int local_1d4;
  longlong *local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  longlong **pplStack_188;
  undefined8 local_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong local_168;
  char local_160;
  undefined1 local_14c [4];
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  ulonglong local_d0;
  
  uVar19 = param_4 & 0xffffffff;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar17 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabd0a0) && (FUN_144b3d300(), DAT_14cabd0a0 == -1)) {
    _DAT_14cabd078 = DAT_14c8464f0;
    _DAT_14cabd068 = (undefined4)DAT_14c8464e0;
    uRam000000014cabd06c = DAT_14c8464e0._4_4_;
    uRam000000014cabd070 = (undefined4)DAT_14c8464e8;
    uRam000000014cabd074 = DAT_14c8464e8._4_4_;
    _DAT_14cabd098 = 0x4290000000000000;
    _DAT_14cabd080 = 0x4290000000000000;
    _DAT_14cabd088 = 0x4290000000000000;
    _DAT_14cabd090 = 0x4290000000000000;
    _Init_thread_footer();
  }
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  iVar20 = *(int *)(DAT_14cabcfe0 + 4);
  local_1e4 = (uint)param_4;
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x298);
    local_1c8 = puVar9 + *(int *)(param_1 + 0x2a0);
    local_1c0 = param_1 + 0x2f0;
    local_1b0 = param_1 + 0x100;
    local_1d4 = iVar20;
    do {
      plVar1 = (longlong *)*puVar9;
      local_1b8 = puVar9;
      if ((plVar1 != (longlong *)0x0) &&
         (local_1e0 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x2f0))(),
         0 < (int)param_2[1])) {
        local_1d0 = plVar1 + 0x59;
        local_1a0 = plVar1 + 0x11;
        local_1a8 = plVar1 + 0x15;
        uVar13 = 0;
        do {
          if (((uint)uVar19 >> ((uint)uVar13 & 0x1f) & 1) != 0) {
            plVar21 = (longlong *)(((double)plVar1[0x5d] - (double)plVar1[0x5a]) * 0.5);
            plVar22 = (longlong *)(((double)plVar1[0x5c] - (double)plVar1[0x59]) * 0.5);
            if ((9.999999747378752e-05 < ABS((double)plVar22)) ||
               (9.999999747378752e-05 < ABS((double)plVar21))) {
              dVar3 = (double)plVar1[0x5b];
              uVar23 = SUB84(dVar3,0);
              uVar24 = (undefined4)((ulonglong)dVar3 >> 0x20);
              dVar4 = (double)plVar1[0x5e];
              uVar25 = SUB84(dVar4,0);
              uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
              pplVar2 = (longlong **)((dVar4 - dVar3) * 0.5);
LAB_147826b49:
              local_138 = ((double)CONCAT44(uVar24,uVar23) + (double)CONCAT44(uVar26,uVar25)) * 0.5;
              uStack_140 = (longlong **)(((double)plVar1[0x5d] + (double)plVar1[0x5a]) * 0.5);
              local_148 = (longlong *)(((double)plVar1[0x5c] + (double)plVar1[0x59]) * 0.5);
              local_198 = plVar22;
              uStack_190 = plVar21;
              pplStack_188 = pplVar2;
              cVar5 = FUN_144b22be2(*(longlong *)(*param_2 + uVar13 * 8) + 8000,&local_148,
                                    &local_198);
            }
            else {
              dVar3 = (double)plVar1[0x5b];
              uVar23 = SUB84(dVar3,0);
              uVar24 = (undefined4)((ulonglong)dVar3 >> 0x20);
              dVar4 = (double)plVar1[0x5e];
              uVar25 = SUB84(dVar4,0);
              uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
              pplVar2 = (longlong **)((dVar4 - dVar3) * 0.5);
              cVar5 = '\x01';
              if (9.999999747378752e-05 < ABS((double)pplVar2)) goto LAB_147826b49;
            }
            if (iVar20 == 2) {
              if (*(int *)(param_1 + 0x2c0) != *(int *)(param_1 + 0x2ec)) {
                lVar14 = *plVar1;
                lVar8 = *(longlong *)(param_1 + 0x2f8);
                if (*(longlong *)(param_1 + 0x2f8) == 0) {
                  lVar8 = local_1c0;
                }
                iVar6 = *(int *)(lVar8 + (ulonglong)
                                         (*(int *)(param_1 + 0x300) - 1U &
                                         (int)lVar14 + (int)((ulonglong)lVar14 >> 0x20) * 0x17) * 4)
                ;
                if (iVar6 != -1) {
                  do {
                    lVar8 = *(longlong *)(param_1 + 0x2b8) + (longlong)iVar6 * 0x50;
                    if (*(longlong *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar6 * 0x50) ==
                        lVar14) {
                      if ((longlong *)(lVar8 + 8) != (longlong *)0x0 && lVar8 != 0) {
                        local_198 = plVar1;
                        uStack_190 = (longlong *)(lVar8 + 8);
                        FUN_14782786a(&local_128,&local_148,&local_198);
                        cVar5 = *(char *)(lVar8 + 0x40);
                        goto LAB_147826bce;
                      }
                      break;
                    }
                    iVar6 = *(int *)(lVar8 + 0x48);
                  } while (iVar6 != -1);
                }
              }
            }
            else {
              if (iVar20 == 1) {
                local_168 = local_1d0[6];
                local_198 = (longlong *)*local_1d0;
                uStack_190 = (longlong *)local_1d0[1];
                pplStack_188 = (longlong **)local_1d0[2];
                local_180 = (double)local_1d0[3];
                lStack_178 = local_1d0[4];
                lStack_170 = local_1d0[5];
                uStack_140 = &local_198;
                local_160 = cVar5;
                local_148 = plVar1;
                FUN_14782735c(&local_128,local_14c,&local_148);
              }
LAB_147826bce:
              if (cVar5 != '\0') {
                iVar20 = FUN_14470b8a2(param_5,1);
                lVar8 = *(longlong *)(*param_5 + (longlong)(iVar20 / 0x44) * 8);
                lVar10 = (ulonglong)(uint)(iVar20 % 0x44) * 0xf0;
                lVar14 = lVar8 + lVar10;
                lVar15 = *(longlong *)(lVar8 + 0xa8 + lVar10);
                if (lVar15 == 0) {
                  lVar15 = lVar14;
                }
                *(longlong **)(lVar15 + 0x18) = local_1a0;
                uVar11 = (uint)*(byte *)(param_1 + 0x2b5) << 0xc;
                uVar7 = *(uint *)(lVar8 + 0xe4 + lVar10);
                *(uint *)(lVar8 + 0xe4 + lVar10) = uVar7 & 0xffffefff | uVar11;
                uVar12 = (uint)*(byte *)(param_1 + 0x2b4) << 0xb;
                *(uint *)(lVar8 + 0xe4 + lVar10) = uVar7 & 0xffffe7ff | uVar11 | uVar12;
                *(uint *)(lVar8 + 0xe4 + lVar10) =
                     uVar7 & 0xffffe3ff | uVar11 | uVar12 | (uint)*(byte *)(param_1 + 0x2b4) << 10;
                *(longlong **)(lVar8 + 0xb8 + lVar10) = local_1a8;
                *(longlong **)(lVar8 + 0xc0 + lVar10) = local_1e0;
                lVar8 = FUN_14337cb52(param_5[0x1d]);
                FUN_1436a1a18(lVar8);
                bVar16 = *(byte *)(param_1 + 0x75);
                local_1f0 = 1;
                if (bVar16 < 0x40) {
                  if ((bVar16 & 8) == 0) {
                    local_1f0 = 0;
                  }
                  else {
                    local_1f0 = (bVar16 & 4) >> 2;
                  }
                }
                local_208 = *(byte *)(param_1 + 0x77) >> 6 & 1;
                local_210 = &DAT_14cabd068;
                local_218 = &DAT_14cabd068;
                local_1f8 = 0;
                local_200 = 1;
                uVar17 = local_1b0;
                FUN_147ceee92(lVar8,param_5[0x22],local_1b0,local_1b0);
                *(longlong *)(lVar15 + 8) = lVar8 + 8;
                *(undefined4 *)(lVar15 + 0x58) = 0;
                *(int *)(lVar15 + 0x5c) = (int)plVar1[0x14] / 3;
                *(undefined4 *)(lVar15 + 0x68) = 0;
                *(int *)(lVar15 + 0x6c) = (int)plVar1[4] + -1;
                *(uint *)(lVar14 + 0xe4) =
                     *(uint *)(lVar14 + 0xe4) & 0xffe03fbf | (*(byte *)(param_1 + 0x6b) & 1) << 6;
                FUN_1436a14f8(param_5,uVar13 & 0xffffffff,lVar14);
                uVar19 = (ulonglong)local_1e4;
                iVar20 = local_1d4;
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while ((longlong)uVar13 < (longlong)(int)param_2[1]);
      }
      puVar9 = local_1b8 + 1;
    } while (puVar9 != local_1c8);
  }
  plVar1 = (longlong *)(param_1 + 0x2b8);
  FUN_1478279b6(plVar1,&local_128);
  if ((iVar20 != 0) && (iVar20 = (int)param_2[1], 0 < iVar20)) {
    pplVar2 = (longlong **)(param_1 + 0x2c8);
    local_1e0 = param_5 + 10;
    lVar14 = 0;
    do {
      if (((uint)uVar19 >> ((uint)lVar14 & 0x1f) & 1) != 0) {
        local_148 = (longlong *)&DAT_100000000;
        local_138 = 2.12199579047121e-314;
        uStack_130 = 0;
        uStack_140 = pplVar2;
        if (*(int *)(param_1 + 0x2e0) == 0) {
          iVar20 = 0;
        }
        else {
          FUN_1449c0562(&local_148);
          iVar20 = *(int *)(param_1 + 0x2e0);
        }
        lStack_178 = CONCAT44(uStack_12c,uStack_130);
        local_180 = local_138;
        dVar3 = local_180;
        uStack_190 = local_148;
        pplStack_188 = uStack_140;
        local_180._4_4_ = (int)((ulonglong)local_138 >> 0x20);
        iVar6 = local_180._4_4_;
        local_198 = plVar1;
        if ((local_180._4_4_ != iVar20) || (local_180 = dVar3, uStack_140 != pplVar2)) {
          do {
            local_180 = dVar3;
            uVar7 = 0xff7f7f7f;
            if (*(char *)(*local_198 + 0x40 + (longlong)iVar6 * 0x50) != '\0') {
              uVar7 = 0xff00ff00;
            }
            plVar21 = (longlong *)param_5[0xc];
            if ((longlong *)param_5[0xc] == (longlong *)0x0) {
              plVar21 = local_1e0;
            }
            if ((*(byte *)(param_1 + 0x6c) & 0x20) != 0) {
              uVar17 = 0;
              if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
                uVar17 = (longlong)*(int *)(param_1 + 0xf0) * 8;
                uVar19 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar19) ==
                      *(longlong *)(*(longlong *)(*param_2 + lVar14 * 8) + 0x4c0)) {
                    uVar17 = 0x7fffffff8;
                    if ((~uVar19 & 0x7fffffff8) != 0) {
                      bVar16 = *(byte *)(param_1 + 0x6d) >> 3;
                      uVar18 = 0x7ffffff;
                      goto LAB_147826845;
                    }
                    break;
                  }
                  uVar19 = uVar19 + 8;
                } while (uVar17 != uVar19);
              }
            }
            bVar16 = *(byte *)(param_1 + 0x6d);
            uVar18 = (undefined7)(uVar17 >> 8);
LAB_147826845:
            uVar17 = CONCAT71(uVar18,bVar16) & 0xffffffffffffff07;
            local_148 = (longlong *)
                        CONCAT44((&DAT_14c758c60)[uVar7 >> 8 & 0xff],
                                 (&DAT_14c758c60)[uVar7 >> 0x10 & 0x7f]);
            uStack_140 = (longlong **)CONCAT44(0x3f800000,(&DAT_14c758c60)[uVar7 & 0x7f]);
            local_210 = (undefined *)((ulonglong)local_210 & 0xffffffff00000000);
            local_218 = (undefined *)((ulonglong)local_218 & 0xffffffff00000000);
            local_208 = 0;
            FUN_147cb7407(plVar21[lVar14],(longlong)iVar6 * 0x50 + *local_198 + 8,&local_148,uVar17)
            ;
            local_180 = (double)CONCAT44(local_180._4_4_,(uint)local_180 & ~uStack_190._4_4_);
            FUN_1449c0562(&uStack_190);
            iVar6 = local_180._4_4_;
            dVar3 = local_180;
          } while (local_198 != plVar1 || (pplStack_188 != pplVar2 || local_180._4_4_ != iVar20));
        }
        iVar20 = (int)param_2[1];
        uVar19 = (ulonglong)local_1e4;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar20);
  }
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1478272a4(&local_128);
  if ((local_d0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147826fa4 FUN_147826fa4 body=289 status=ok
// SIG undefined FUN_147826fa4(void)

undefined8 * FUN_147826fa4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar4 = FUN_14480c900(0,param_3);
  uVar5 = FUN_144914152(param_1,param_3);
  if (*(char *)(param_1 + 0x2b5) == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x2a8);
    FUN_14003fbd6();
    if (lVar7 == DAT_14caea080) {
      uVar6 = 0;
      goto LAB_147827017;
    }
  }
  uVar6 = (*(byte *)(param_1 + 0x6e) & 8) << 4;
LAB_147827017:
  bVar1 = *(byte *)(param_1 + 0x2b4);
  cVar2 = *(char *)(param_1 + 0x82);
  bVar3 = FUN_144b26b6a(param_1);
  *(uint *)(param_2 + 2) =
       (uint)bVar1 << 6 | (uVar4 & 0xff) * 4 + (uVar5 & 0xff) * 8 | uVar6 |
       (uint)(cVar2 != '\x01') << 0xd | (uint)bVar3 << 5 | 2;
  local_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x2c0))();
  *(byte *)((longlong)param_2 + 4) = (*(char *)(lVar7 + 0x189) == '\x01') << 6 | 2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478270d4 FUN_1478270d4 body=164 status=ok
// SIG undefined FUN_1478270d4(void)

void FUN_1478270d4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x2a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x298);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_147827178(lVar3);
        FUN_1478271c4(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_1400020a8();
  }
  FUN_1478272a4(param_1 + 0x2b8);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 147827178 FUN_147827178 body=76 status=ok
// SIG undefined FUN_147827178(void)

void FUN_147827178(longlong param_1)

{
  FUN_144725486(param_1 + 8);
  FUN_144725486(param_1 + 0x28);
  FUN_144725486(param_1 + 0x48);
  FUN_144725486(param_1 + 0x68);
  FUN_144725486(param_1 + 0x88);
  FUN_144725486(param_1 + 0xa8);
  return;
}



// FUNCTION 1478271c4 FUN_1478271c4 body=224 status=ok
// SIG undefined FUN_1478271c4(void)

void FUN_1478271c4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x318) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x318) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x310) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x308) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x300) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1412b7f2a(param_1 + 0xa8);
  FUN_14003f39a(param_1 + 0x88);
  FUN_144a80d50(param_1 + 0x68);
  FUN_144a80d50(param_1 + 0x48);
  FUN_144a80d50(param_1 + 0x28);
  FUN_144a80d50(param_1 + 8);
  return;
}



// FUNCTION 1478272a4 FUN_1478272a4 body=54 status=ok
// SIG undefined FUN_1478272a4(void)

void FUN_1478272a4(longlong *param_1)

{
  FUN_1478272da(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478272da FUN_1478272da body=128 status=ok
// SIG undefined FUN_1478272da(void)

void FUN_1478272da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140e9549c(param_1,param_2);
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



// FUNCTION 14782735c FUN_14782735c body=330 status=ok
// SIG undefined FUN_14782735c(void)

undefined4 * FUN_14782735c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
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
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478274a8(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  uVar10 = puVar1[8];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  uVar14 = puVar1[0xc];
  uVar15 = puVar1[0xd];
  uVar16 = puVar1[0xe];
  uVar17 = puVar1[0xf];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar7;
  *(undefined4 *)(local_40 + 4) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar9;
  *(undefined4 *)(local_40 + 5) = uVar10;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar11;
  *(undefined4 *)(local_40 + 6) = uVar12;
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar13;
  *(undefined4 *)(local_40 + 7) = uVar14;
  *(undefined4 *)((longlong)local_40 + 0x3c) = uVar15;
  *(undefined4 *)(local_40 + 8) = uVar16;
  *(undefined4 *)((longlong)local_40 + 0x44) = uVar17;
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar23 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar18 = FUN_147827596(param_1,uVar23,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar18 == '\0') {
    uVar19 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar21 = 1;
    if (3 < uVar19) {
      uVar20 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar21 <= *(int *)(param_1 + 0x48))) {
      uVar23 = *(int *)(param_1 + 0x48) - 1U & uVar23;
      *(uint *)((longlong)local_40 + 0x4c) = uVar23;
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar23) * 4);
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar23) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar21;
      FUN_1478276a6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478274a8 FUN_1478274a8 body=238 status=ok
// SIG undefined FUN_1478274a8(void)

int * FUN_1478274a8(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 147827596 FUN_147827596 body=149 status=ok
// SIG undefined FUN_147827596(void)

undefined8 FUN_147827596(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x50);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x50) == *param_3) {
          memmove(_Dst,param_3,0x48);
          FUN_14782762c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14782762c FUN_14782762c body=122 status=ok
// SIG undefined FUN_14782762c(void)

void FUN_14782762c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1478276a6 FUN_1478276a6 body=451 status=ok
// SIG undefined FUN_1478276a6(void)

void FUN_1478276a6(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
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



// FUNCTION 14782786a FUN_14782786a body=330 status=ok
// SIG undefined FUN_14782786a(void)

undefined4 * FUN_14782786a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
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
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478274a8(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  uVar10 = puVar1[8];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  uVar14 = puVar1[0xc];
  uVar15 = puVar1[0xd];
  uVar16 = puVar1[0xe];
  uVar17 = puVar1[0xf];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar7;
  *(undefined4 *)(local_40 + 4) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar9;
  *(undefined4 *)(local_40 + 5) = uVar10;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar11;
  *(undefined4 *)(local_40 + 6) = uVar12;
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar13;
  *(undefined4 *)(local_40 + 7) = uVar14;
  *(undefined4 *)((longlong)local_40 + 0x3c) = uVar15;
  *(undefined4 *)(local_40 + 8) = uVar16;
  *(undefined4 *)((longlong)local_40 + 0x44) = uVar17;
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar23 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar18 = FUN_147827596(param_1,uVar23,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar18 == '\0') {
    uVar19 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar21 = 1;
    if (3 < uVar19) {
      uVar20 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar21 <= *(int *)(param_1 + 0x48))) {
      uVar23 = *(int *)(param_1 + 0x48) - 1U & uVar23;
      *(uint *)((longlong)local_40 + 0x4c) = uVar23;
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar23) * 4);
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar23) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar21;
      FUN_1478276a6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478279b6 FUN_1478279b6 body=122 status=ok
// SIG undefined FUN_1478279b6(void)

longlong FUN_1478279b6(longlong param_1,longlong param_2)

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
    FUN_147827a30(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147827a30 FUN_147827a30 body=121 status=ok
// SIG undefined FUN_147827a30(void)

undefined8 * FUN_147827a30(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478272da(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406fba42(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x50);
    }
  }
  return param_1;
}



// FUNCTION 147827b0e FUN_147827b0e body=59 status=ok
// SIG undefined FUN_147827b0e(void)

undefined8 FUN_147827b0e(longlong *param_1)

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



// FUNCTION 147827bb0 FUN_147827bb0 body=168 status=ok
// SIG undefined FUN_147827bb0(void)

void FUN_147827bb0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x18) == param_2) {
          lVar2 = *param_1;
          plVar4 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar4 = (longlong *)param_1[8];
          }
          lVar1 = lVar2 + (longlong)iVar3 * 0x18;
          lVar7 = (longlong)*(int *)(lVar1 + 0x14);
          iVar6 = *(int *)((longlong)plVar4 + lVar7 * 4);
          if (iVar6 == iVar3) {
            puVar5 = (undefined4 *)((longlong)plVar4 + lVar7 * 4);
          }
          else {
            do {
              lVar7 = (longlong)iVar6;
              iVar6 = *(int *)(lVar2 + 0x10 + lVar7 * 0x18);
            } while (iVar6 != iVar3);
            puVar5 = (undefined4 *)(lVar2 + lVar7 * 0x18 + 0x10);
          }
          *puVar5 = *(undefined4 *)(lVar1 + 0x10);
          FUN_147827c5a();
          return;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 147827c5a FUN_147827c5a body=114 status=ok
// SIG undefined FUN_147827c5a(void)

void FUN_147827c5a(longlong *param_1,int param_2)

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



// FUNCTION 147827ccc FUN_147827ccc body=287 status=ok
// SIG undefined FUN_147827ccc(void)

undefined4 * FUN_147827ccc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147827dec(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_147827ed2(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147827f52(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147827dec FUN_147827dec body=230 status=ok
// SIG undefined FUN_147827dec(void)

int * FUN_147827dec(longlong *param_1,int *param_2)

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



// FUNCTION 147827ed2 FUN_147827ed2 body=128 status=ok
// SIG undefined FUN_147827ed2(void)

undefined8 FUN_147827ed2(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147827c5a(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147827f52 FUN_147827f52 body=419 status=ok
// SIG undefined FUN_147827f52(void)

void FUN_147827f52(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14782810e FUN_14782810e body=29 status=ok
// SIG undefined FUN_14782810e(void)

undefined8 FUN_14782810e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782812c FUN_14782812c body=181 status=ok
// SIG undefined FUN_14782812c(void)

undefined8 *
FUN_14782812c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_14a5a87b0;
  param_1[1] = *param_4;
  lVar3 = param_4[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar5 = param_4 + 2;
  puVar6 = param_1 + 3;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  param_1[0x10] = lVar4;
  *param_1 = &PTR_FUN_14a5a8740;
  param_1[0x11] = 0;
  FUN_14485c47a(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x13) = uVar1;
  param_1[0x12] = uVar2;
  return param_1;
}



// FUNCTION 1478281e2 FUN_1478281e2 body=83 status=ok
// SIG undefined FUN_1478281e2(void)

undefined8 * FUN_1478281e2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5a87b0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147828256 FUN_147828256 body=32 status=ok
// SIG undefined FUN_147828256(void)

bool FUN_147828256(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x88);
  return lVar1 == param_2;
}



// FUNCTION 147828276 FUN_147828276 body=29 status=ok
// SIG undefined FUN_147828276(void)

bool FUN_147828276(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x88,1);
  return lVar1 == 0;
}



// FUNCTION 147828294 FUN_147828294 body=27 status=ok
// SIG undefined FUN_147828294(void)

bool FUN_147828294(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x88);
  return lVar1 != 0;
}



// FUNCTION 1478282be FUN_1478282be body=162 status=ok
// SIG undefined FUN_1478282be(void)

void FUN_1478282be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((int)param_2[1] != 10) {
    FUN_1446efa72(param_2,0,10,0x10);
    *(undefined4 *)(param_2 + 1) = 10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a87b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)(param_1 + 0x18);
  puVar5 = puVar1 + 3;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1[0x10] = *(undefined8 *)(param_1 + 0x80);
  *puVar1 = &PTR_FUN_14a5a8740;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  puVar1[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar1[0x12] = uVar2;
  puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
  return;
}



// FUNCTION 147828360 FUN_147828360 body=162 status=ok
// SIG undefined FUN_147828360(void)

void FUN_147828360(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((int)param_2[1] != 10) {
    FUN_1446efa72(param_2,0,10,0x10);
    *(undefined4 *)(param_2 + 1) = 10;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a87b0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)(param_1 + 0x18);
  puVar5 = puVar1 + 3;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1[0x10] = *(undefined8 *)(param_1 + 0x80);
  *puVar1 = &PTR_FUN_14a5a8740;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  puVar1[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar1[0x12] = uVar2;
  puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
  return;
}



// FUNCTION 147828402 FUN_147828402 body=205 status=ok
// SIG undefined FUN_147828402(void)

void FUN_147828402(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  _LIST_ENTRY **pp_Var9;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 10) {
    FUN_1446efa72(param_2 + 1,0,10,0x10);
    param_2[1].LockCount = 10;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5a87b0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(param_1 + 0x18);
  pp_Var9 = &(p_Var1->ProcessLocksList).Blink;
  for (lVar7 = 0xd; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pp_Var9 = (_LIST_ENTRY *)*puVar8;
    puVar8 = puVar8 + 1;
    pp_Var9 = pp_Var9 + 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  p_Var1[2].EntryCount = (int)uVar3;
  p_Var1[2].ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a8740;
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  uVar5 = *(undefined4 *)(param_1 + 0x90);
  uVar6 = *(undefined4 *)(param_1 + 0x94);
  p_Var1[2].Flags = *(DWORD *)(param_1 + 0x88);
  p_Var1[2].CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1[2].SpareWORD = (short)((uint)uVar4 >> 0x10);
  p_Var1[3].Type = (short)uVar5;
  p_Var1[3].CreatorBackTraceIndex = (short)((uint)uVar5 >> 0x10);
  *(undefined4 *)&p_Var1[3].field_0x4 = uVar6;
  p_Var1[3].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x98);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478284bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478284d0 FUN_1478284d0 body=151 status=ok
// SIG undefined FUN_1478284d0(void)

void FUN_1478284d0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80 [13];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_14479d2ce(param_1 + 0x88);
  iVar1 = *(int *)(param_1 + 0x98);
  pcVar2 = *(code **)(param_1 + 0x90);
  local_90 = *(undefined8 *)(param_1 + 8);
  local_88 = *(longlong *)(param_1 + 0x10);
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)(param_1 + 0x18);
  puVar6 = local_80;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  (*pcVar2)(lVar3 + iVar1,&local_90);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147828568 FUN_147828568 body=219 status=ok
// SIG undefined FUN_147828568(void)

bool FUN_147828568(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 local_90 [13];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_1400841de(param_1 + 0x88,&local_a0);
    lVar6 = local_a0;
  }
  else {
    lVar6 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x88);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    pcVar2 = *(code **)(param_1 + 0x90);
    local_a0 = *(longlong *)(param_1 + 8);
    local_98 = *(longlong *)(param_1 + 0x10);
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)(param_1 + 0x18);
    puVar8 = local_90;
    for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,&local_a0);
  }
  if (lVar6 != 0) {
    FUN_140113f3a(lVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147828646 FUN_147828646 body=29 status=ok
// SIG undefined FUN_147828646(void)

undefined8 FUN_147828646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782867e FUN_14782867e body=29 status=ok
// SIG undefined FUN_14782867e(void)

bool FUN_14782867e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14782869c FUN_14782869c body=26 status=ok
// SIG undefined FUN_14782869c(void)

bool FUN_14782869c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1478286b6 FUN_1478286b6 body=24 status=ok
// SIG undefined FUN_1478286b6(void)

bool FUN_1478286b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1478286ce FUN_1478286ce body=101 status=ok
// SIG undefined FUN_1478286ce(void)

void FUN_1478286ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a8820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147828734 FUN_147828734 body=101 status=ok
// SIG undefined FUN_147828734(void)

void FUN_147828734(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a8820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14782879a FUN_14782879a body=134 status=ok
// SIG undefined FUN_14782879a(void)

void FUN_14782879a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a8820;
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
                    /* WARNING: Could not recover jumptable at 0x000147828811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147828820 FUN_147828820 body=39 status=ok
// SIG undefined FUN_147828820(void)

void FUN_147828820(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147828843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147828848 FUN_147828848 body=134 status=ok
// SIG undefined FUN_147828848(void)

bool FUN_147828848(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478288d0 FUN_1478288d0 body=175 status=ok
// SIG undefined FUN_1478288d0(void)

void FUN_1478288d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147828959;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147828959:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147828980 FUN_147828980 body=132 status=ok
// SIG undefined FUN_147828980(void)

void FUN_147828980(longlong param_1,int param_2)

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



// FUNCTION 147828a06 FUN_147828a06 body=29 status=ok
// SIG undefined FUN_147828a06(void)

undefined8 FUN_147828a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147828a3e FUN_147828a3e body=29 status=ok
// SIG undefined FUN_147828a3e(void)

bool FUN_147828a3e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147828a5c FUN_147828a5c body=26 status=ok
// SIG undefined FUN_147828a5c(void)

bool FUN_147828a5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147828a76 FUN_147828a76 body=24 status=ok
// SIG undefined FUN_147828a76(void)

bool FUN_147828a76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147828a9a FUN_147828a9a body=101 status=ok
// SIG undefined FUN_147828a9a(void)

void FUN_147828a9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a8900;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5a8890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147828b00 FUN_147828b00 body=101 status=ok
// SIG undefined FUN_147828b00(void)

void FUN_147828b00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5a8900;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5a8890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147828b66 FUN_147828b66 body=134 status=ok
// SIG undefined FUN_147828b66(void)

void FUN_147828b66(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5a8900;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a8890;
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
                    /* WARNING: Could not recover jumptable at 0x000147828bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147828bec FUN_147828bec body=46 status=ok
// SIG undefined FUN_147828bec(void)

void FUN_147828bec(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147828c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147828c1a FUN_147828c1a body=146 status=ok
// SIG undefined FUN_147828c1a(void)

bool FUN_147828c1a(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))
              (*(int *)(param_1 + 0x28) + lVar2,param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 147828cb0 FUN_147828cb0 body=204 status=ok
// SIG undefined FUN_147828cb0(void)

void FUN_147828cb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x2a0) < 1) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x298);
  if (**(longlong **)*plVar1 == param_2) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      if ((longlong)*(int *)(param_1 + 0x2a0) + -1 == lVar6) {
        return;
      }
      lVar2 = lVar6 + 1;
      lVar6 = lVar6 + 1;
    } while (*(longlong *)((undefined8 *)*plVar1)[lVar2] != param_2);
  }
  FUN_147827178();
  lVar2 = *(longlong *)(*plVar1 + lVar6 * 8);
  if (lVar2 != 0) {
    FUN_1478271c4(lVar2);
    FUN_1400020a8(lVar2);
  }
  iVar3 = *(int *)(param_1 + 0x2a0);
  iVar4 = ~(uint)lVar6 + iVar3;
  if (iVar4 != 0) {
    iVar5 = 1;
    if (iVar4 < 1) {
      iVar5 = iVar4;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x298) + lVar6 * 8),
            (void *)(*(longlong *)(param_1 + 0x298) + (longlong)(iVar3 - iVar5) * 8),
            (longlong)iVar5 << 3);
    iVar3 = *(int *)(param_1 + 0x2a0);
  }
  *(int *)(param_1 + 0x2a0) = iVar3 + -1;
  FUN_147828d7c(plVar1);
  return;
}



// FUNCTION 147828d7c FUN_147828d7c body=62 status=ok
// SIG undefined FUN_147828d7c(void)

void FUN_147828d7c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147828dba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147828dba FUN_147828dba body=93 status=ok
// SIG undefined FUN_147828dba(void)

ulonglong FUN_147828dba(uint param_1,uint param_2)

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



// FUNCTION 147828e18 FUN_147828e18 body=336 status=ok
// SIG undefined FUN_147828e18(void)

undefined8 * FUN_147828e18(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  FUN_144a34e6c(param_1 + 1);
  param_1[1] = &PTR_FUN_14a5a8970;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_144a34e6c(param_1 + 5);
  param_1[5] = &PTR_FUN_14a5a89a0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_144a34e6c(param_1 + 9);
  param_1[9] = &PTR_FUN_14a5a89d0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_144a34e6c(param_1 + 0xd);
  param_1[0xd] = &PTR_FUN_14a5a8a00;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_14322417a(param_1 + 0x11);
  param_1[0x11] = &PTR_FUN_14a5a8a30;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_144b1dcb8(param_1 + 0x15,param_3);
  param_1[0x15] = &PTR_FUN_14a1ca480;
  param_1[0x49] = 0x400000000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x294) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x296) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  return param_1;
}



// FUNCTION 147828f68 FUN_147828f68 body=521 status=ok
// SIG undefined FUN_147828f68(void)

void FUN_147828f68(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  int local_88;
  int local_7c [3];
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 0x18) = iVar3;
  uVar4 = *param_2;
  uVar6 = FUN_1414e3242(0x4001,0);
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_88 = iVar3 * 0xc;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FMRMeshVertexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c[1] = 0;
  local_7c[2] = 0x4001;
  local_90 = uVar4;
  local_7c[0] = local_88;
  if (local_88 == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_70,0x4001,0);
  }
  local_b8 = uVar6;
  if (DAT_14ca85169 == '\0') {
    FUN_1446f970a(&DAT_14ca85100,1);
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar6;
    FUN_1446f970a(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar6;
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_a0) {
    lVar5 = *plVar7;
    *plVar7 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1478290f7;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1478290f7:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147829172 FUN_147829172 body=514 status=ok
// SIG undefined FUN_147829172(void)

void FUN_147829172(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  int local_88;
  int local_7c [3];
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(uint *)(param_2 + 1);
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar3 = *param_2;
  uVar5 = FUN_1414e3242(0x4001,0);
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_88 = uVar2 << 4;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FMRMeshVertexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c[1] = 0;
  local_7c[2] = 0x4001;
  local_90 = uVar3;
  local_7c[0] = local_88;
  if ((uVar2 & 0xfffffff) == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_70,0x4001,0);
  }
  local_b8 = uVar5;
  if (DAT_14ca85169 == '\0') {
    FUN_1446f970a(&DAT_14ca85100,1);
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
    FUN_1446f970a(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_a0) {
    lVar4 = *plVar6;
    *plVar6 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_1478292fa;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1478292fa:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147829376 FUN_147829376 body=514 status=ok
// SIG undefined FUN_147829376(void)

void FUN_147829376(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  int local_88;
  int local_7c [3];
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(uint *)(param_2 + 1);
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar3 = *param_2;
  uVar5 = FUN_1414e3242(0x4001,0);
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_88 = uVar2 << 2;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FMRMeshVertexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c[1] = 0;
  local_7c[2] = 0x4001;
  local_90 = uVar3;
  local_7c[0] = local_88;
  if ((uVar2 & 0x3fffffff) == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_70,0x4001,0);
  }
  local_b8 = uVar5;
  if (DAT_14ca85169 == '\0') {
    FUN_1446f970a(&DAT_14ca85100,1);
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
    FUN_1446f970a(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_a0) {
    lVar4 = *plVar6;
    *plVar6 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_1478294fe;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1478294fe:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782957a FUN_14782957a body=514 status=ok
// SIG undefined FUN_14782957a(void)

void FUN_14782957a(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  int local_88;
  int local_7c [3];
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(uint *)(param_2 + 1);
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar3 = *param_2;
  uVar5 = FUN_1414e3242(0x4001,0);
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_88 = uVar2 << 2;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FMRMeshVertexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c[1] = 0;
  local_7c[2] = 0x4001;
  local_90 = uVar3;
  local_7c[0] = local_88;
  if ((uVar2 & 0x3fffffff) == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_70,0x4001,0);
  }
  local_b8 = uVar5;
  if (DAT_14ca85169 == '\0') {
    FUN_1446f970a(&DAT_14ca85100,1);
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
    FUN_1446f970a(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_a0) {
    lVar4 = *plVar6;
    *plVar6 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_147829702;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147829702:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782977e FUN_14782977e body=517 status=ok
// SIG undefined FUN_14782977e(void)

void FUN_14782977e(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  int local_88;
  int local_7c [3];
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(uint *)(param_2 + 1);
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar3 = *param_2;
  uVar5 = FUN_1414e3242(0x8001,0);
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_88 = uVar2 << 2;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FMRMeshIndexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c[1] = 4;
  local_7c[2] = 0x8001;
  local_90 = uVar3;
  local_7c[0] = local_88;
  if ((uVar2 & 0x3fffffff) == 0) {
    FUN_14570b4be(&DAT_14ca85100,&local_70,0x8001,4);
  }
  local_b8 = uVar5;
  if (DAT_14ca85169 == '\0') {
    FUN_1446f970a(&DAT_14ca85100,1);
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
    FUN_1446f970a(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar5;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_a0) {
    lVar4 = *plVar6;
    *plVar6 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_147829909;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147829909:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147829984 FUN_147829984 body=38 status=ok
// SIG undefined FUN_147829984(void)

undefined8 FUN_147829984(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478299aa FUN_1478299aa body=38 status=ok
// SIG undefined FUN_1478299aa(void)

undefined8 FUN_1478299aa(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478299d0 FUN_1478299d0 body=38 status=ok
// SIG undefined FUN_1478299d0(void)

undefined8 FUN_1478299d0(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478299f6 FUN_1478299f6 body=38 status=ok
// SIG undefined FUN_1478299f6(void)

undefined8 FUN_1478299f6(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147829a1c FUN_147829a1c body=38 status=ok
// SIG undefined FUN_147829a1c(void)

undefined8 FUN_147829a1c(undefined8 param_1,int param_2)

{
  FUN_14003f39a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147829a42 FUN_147829a42 body=132 status=ok
// SIG undefined FUN_147829a42(void)

void FUN_147829a42(longlong param_1,int param_2)

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



// FUNCTION 147829ac8 FUN_147829ac8 body=62 status=ok
// SIG undefined FUN_147829ac8(void)

void FUN_147829ac8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147829b06(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147829b06 FUN_147829b06 body=93 status=ok
// SIG undefined FUN_147829b06(void)

ulonglong FUN_147829b06(uint param_1,uint param_2)

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



// FUNCTION 147829b64 FUN_147829b64 body=204 status=ok
// SIG undefined FUN_147829b64(void)

void FUN_147829b64(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0x2a0);
  if (0 < (longlong)iVar2) {
    plVar1 = (longlong *)(param_1 + 0x298);
    iVar7 = -iVar2;
    uVar6 = (longlong)iVar2;
    do {
      FUN_147827178(*(undefined8 *)(*plVar1 + -8 + uVar6 * 8));
      lVar3 = *(longlong *)(*plVar1 + -8 + uVar6 * 8);
      if (lVar3 != 0) {
        FUN_1478271c4(lVar3);
        FUN_1400020a8(lVar3);
      }
      uVar5 = *(uint *)(param_1 + 0x2a0);
      if (uVar6 != uVar5) {
        iVar2 = iVar7 + uVar5;
        if (0 < (int)(iVar7 + uVar5)) {
          iVar2 = 1;
        }
        memmove((void *)(*(longlong *)(param_1 + 0x298) + uVar6 * 8 + -8),
                (void *)(*(longlong *)(param_1 + 0x298) + (longlong)(int)(uVar5 - iVar2) * 8),
                (longlong)iVar2 << 3);
        uVar5 = *(uint *)(param_1 + 0x2a0);
      }
      *(uint *)(param_1 + 0x2a0) = uVar5 - 1;
      FUN_147828d7c(plVar1);
      iVar7 = iVar7 + 1;
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 147829c30 FUN_147829c30 body=113 status=ok
// SIG undefined FUN_147829c30(void)

void FUN_147829c30(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 147829ca2 FUN_147829ca2 body=31 status=ok
// SIG undefined FUN_147829ca2(void)

undefined8 FUN_147829ca2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147829cde FUN_147829cde body=93 status=ok
// SIG undefined FUN_147829cde(void)

void FUN_147829cde(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5a8ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147829d3c FUN_147829d3c body=126 status=ok
// SIG undefined FUN_147829d3c(void)

void FUN_147829d3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a8ca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147829dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147829dba FUN_147829dba body=21 status=ok
// SIG undefined FUN_147829dba(void)

undefined8 FUN_147829dba(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147829dd0 FUN_147829dd0 body=127 status=ok
// SIG undefined FUN_147829dd0(void)

undefined8 FUN_147829dd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10) + 200))(plVar1);
  if ((longlong)(int)plVar2[1] != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(*plVar2 + 8 + lVar4) != 0) && (*(longlong *)(*plVar2 + lVar4) != 0)) {
        uVar3 = (**(code **)(*plVar1 + 200))(plVar1);
        FUN_14782ce6c(uVar3,param_4);
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)plVar2[1] * 0x10 != lVar4);
  }
  FUN_14782a3da(param_1,param_2);
  return param_2;
}



// FUNCTION 147829e50 FUN_147829e50 body=127 status=ok
// SIG undefined FUN_147829e50(void)

undefined8 FUN_147829e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0xd8))(plVar1);
  if ((longlong)(int)plVar2[1] != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(*plVar2 + 8 + lVar4) != 0) && (*(longlong *)(*plVar2 + lVar4) != 0)) {
        uVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1);
        FUN_14782cdc8(uVar3,param_4);
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)plVar2[1] * 0x10 != lVar4);
  }
  FUN_14782a3da(param_1,param_2);
  return param_2;
}



// FUNCTION 147829ed0 FUN_147829ed0 body=160 status=ok
// SIG undefined FUN_147829ed0(void)

undefined1 * FUN_147829ed0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0xd0))(plVar4);
  if ((longlong)(int)plVar1[1] != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(*plVar1 + 8 + lVar3) != 0) && (*(longlong *)(*plVar1 + lVar3) != 0)) {
        uVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        FUN_14782ce6c(uVar2);
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)plVar1[1] * 0x10 != lVar3);
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 147829f70 FUN_147829f70 body=113 status=ok
// SIG undefined FUN_147829f70(void)

ulonglong FUN_147829f70(void)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  plVar2 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.AndroidDisableThreadedRenderingFirstLoad",1);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    if (iVar1 != 0) {
      if (DAT_14cb0d2b0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147829fd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
        return uVar3;
      }
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14782a010 FUN_14782a010 body=942 status=ok
// SIG undefined FUN_14782a010(void)

/* WARNING: Removing unreachable block (ram,0x00014782a1a8) */

void FUN_14782a010(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  size_t sVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *_Str;
  bool bVar12;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_52;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_1[0x15] == 0) && ((int)param_1[0x18] < 1)) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = 0xbf800000;
    local_52 = 0x2010001;
    local_4e = 1;
    local_54 = 0;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_53 = param_4;
    if (param_2 == 0) {
      if (param_3 != 0) {
        FUN_140bee9ec(&local_88,param_3);
      }
    }
    else {
      local_d8 = &DAT_14c872af8;
      FUN_14105aa76(DAT_14c872ce0,L"/Script/MoviePlayer.MoviePlayerSettings",param_2,&local_88);
    }
    if ((int)uStack_80 == 0) {
      local_d8 = &DAT_14c872af8;
      FUN_14105aa76(DAT_14c872ce0,L"/Script/MoviePlayer.MoviePlayerSettings",param_2,&local_88);
      if ((int)uStack_80 == 0) {
        FUN_140056680(&local_98,L"Default_Startup");
        uVar2 = uStack_80;
        lVar8 = (longlong)(int)uStack_80;
        uVar3 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
        if (uStack_80._4_4_ < uVar3) {
          FUN_1447a1bd6(&local_88,uVar2 & 0xffffffff);
        }
        local_88[lVar8 * 2] = 0;
        local_88[lVar8 * 2] = local_98;
        *(int *)(local_88 + lVar8 * 2 + 1) = (int)uStack_90;
        *(undefined4 *)((longlong)local_88 + lVar8 * 0x10 + 0xc) = uStack_90._4_4_;
      }
    }
    local_98 = 0;
    uStack_90 = 0;
    plVar5 = (longlong *)FUN_14054d1d4();
    FUN_1410f2562(local_b8);
    FUN_144a882a8(&local_a8,local_b8,L"Movies");
    puVar9 = local_a8;
    if (local_a0 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar5 + 0x70))(plVar5,&local_98,puVar9,0);
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)uStack_80 != 0) {
      puVar11 = local_88 + (longlong)(int)uStack_80 * 2;
      bVar12 = false;
      puVar7 = local_88;
      local_c0 = param_1;
      do {
        if ((longlong)(int)uStack_90 != 0) {
          lVar10 = (longlong)(int)uStack_90 << 4;
          lVar8 = local_98;
          do {
            _Str = L"";
            if (*(int *)(puVar7 + 1) != 0) {
              _Str = (wchar_t *)*puVar7;
            }
            if (_Str != (wchar_t *)0x0) {
              sVar6 = wcslen(_Str);
              local_d0 = 0xffffffff;
              local_d8 = (undefined8 *)((ulonglong)local_d8 & 0xffffffff00000000);
              iVar4 = FUN_1447ee042(lVar8,_Str,sVar6 & 0xffffffff,1);
              uVar2 = uStack_60;
              if (iVar4 != -1) {
                if (lVar8 != 0) {
                  lVar8 = (longlong)(int)uStack_60;
                  uVar3 = (int)uStack_60 + 1;
                  uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
                  if (uStack_60._4_4_ < uVar3) {
                    FUN_1447a1bd6(&local_68,uVar2 & 0xffffffff);
                  }
                  lVar8 = lVar8 * 0x10;
                  puVar1 = (undefined8 *)(local_68 + lVar8);
                  *(undefined8 *)(local_68 + lVar8) = 0;
                  iVar4 = *(int *)(puVar7 + 1);
                  _Src = (void *)*puVar7;
                  *(int *)(local_68 + 8 + lVar8) = iVar4;
                  if ((longlong)iVar4 == 0) {
                    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(puVar1,iVar4,0);
                    memcpy((void *)*puVar1,_Src,(longlong)iVar4 * 2);
                  }
                  bVar12 = true;
                }
                break;
              }
            }
            lVar8 = lVar8 + 0x10;
            lVar10 = lVar10 + -0x10;
          } while (lVar10 != 0);
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar11);
      if (bVar12) {
        local_52._0_2_ = CONCAT11(1,(undefined1)local_52);
        *(undefined1 *)((longlong)local_c0 + 0xa1) = 1;
        (**(code **)(*local_c0 + 0x20))();
      }
    }
    FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14619aa88(&local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782a3da FUN_14782a3da body=380 status=ok
// SIG undefined FUN_14782a3da(void)

undefined1 * FUN_14782a3da(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x10);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x60))(plVar1);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0xdd) == '\x01')) {
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0xb8))(plVar1);
    if ((longlong *)*plVar3 != (longlong *)0x0 && (int)plVar3[1] != 0) {
      cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x30))();
      if (cVar2 != '\0') {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0xb8))(plVar1);
        (**(code **)(*plVar1 + 0x88))(plVar1,local_48);
        if (*(int *)(puVar4 + 1) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)*puVar4;
        }
        cVar2 = (**(code **)(*plVar3 + 0x58))();
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
        if (cVar2 == '\0') goto LAB_14782a4fe;
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0xa8) = 1;
    UNLOCK();
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      *(undefined1 *)(param_1 + 0xb2) = 1;
    }
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    (**(code **)(*plVar1 + 0x88))(plVar1,local_48);
    FUN_1411f311e(uVar5);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14782a4fe:
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782a558 FUN_14782a558 body=232 status=ok
// SIG undefined FUN_14782a558(void)

undefined8 FUN_14782a558(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14a5aa550;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782a642 FUN_14782a642 body=145 status=ok
// SIG undefined FUN_14782a642(void)

void FUN_14782a642(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x60), plVar3 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x240))(plVar3,&local_20);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782a6fe FUN_14782a6fe body=52 status=ok
// SIG undefined FUN_14782a6fe(void)

undefined8 FUN_14782a6fe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14782a78e FUN_14782a78e body=59 status=ok
// SIG undefined FUN_14782a78e(void)

void FUN_14782a78e(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1c9) != param_2) {
    *(char *)(param_1 + 0x1c9) = param_2;
    if (param_2 != '\0') {
      FUN_147064730();
      return;
    }
    (**(code **)(*(longlong *)(param_1 + 8) + 0x10))();
    DAT_14c99f930 = 0;
  }
  return;
}



// FUNCTION 14782a7ca FUN_14782a7ca body=235 status=ok
// SIG undefined FUN_14782a7ca(void)

undefined8 * FUN_14782a7ca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [424];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  thunk_FUN_140a5071c(local_1d0);
  FUN_14782d0c8(local_1f8,&local_1f9);
  FUN_14782a8bc(local_1f8,&local_1e0,local_1d0);
  *param_1 = local_1e0;
  param_1[1] = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
    UNLOCK();
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
        }
      }
    }
  }
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_140a4ff8c(local_1d0);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14782a8b6 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 14782a8bc FUN_14782a8bc body=109 status=ok
// SIG undefined FUN_14782a8bc(void)

longlong * FUN_14782a8bc(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14782d35c(*param_1);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14782a92a FUN_14782a92a body=325 status=ok
// SIG undefined FUN_14782a92a(void)

void FUN_14782a92a(void)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = FUN_14001cc68(0x100,0x10);
  FUN_14782ae04(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a5a9b20;
  plVar5[2] = lVar4;
  if ((lVar4 == 0) ||
     (((*(longlong *)(lVar4 + 8) != 0 && (*(longlong *)(lVar4 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar4 + 0x10) + 8))))) goto LAB_14782aa07;
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(lVar4 + 8) = lVar4;
    plVar6 = *(longlong **)(lVar4 + 0x10);
    if (plVar6 == (longlong *)0x0) goto LAB_14782aa07;
LAB_14782a9be:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *(longlong **)(lVar4 + 0x10) = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_14782aa07;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong *)(lVar4 + 8) = lVar4;
    if (*(longlong **)(lVar4 + 0x10) != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (plVar6 != (longlong *)0x0) goto LAB_14782a9be;
      *(longlong **)(lVar4 + 0x10) = plVar5;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_14782aa07:
  plVar6 = DAT_14cabd160;
  DAT_14cabd158 = lVar4;
  if (plVar5 == DAT_14cabd160) {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar6 = plVar5;
  }
  else {
    if (DAT_14cabd160 == (longlong *)0x0) {
      DAT_14cabd160 = plVar5;
      return;
    }
    LOCK();
    plVar2 = DAT_14cabd160 + 1;
    DAT_14cabd160 = plVar5;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
  return;
}



// FUNCTION 14782aa86 FUN_14782aa86 body=47 status=ok
// SIG undefined FUN_14782aa86(void)

undefined8 FUN_14782aa86(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = GetCurrentThreadId();
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_14c867d18 == 0;
  if (!bVar3) {
    uVar2 = (ulonglong)DAT_14c867d18;
    uVar1 = DAT_14c867d18;
  }
  DAT_14c867d18 = uVar1;
  UNLOCK();
  if (!bVar3) {
    LOCK();
    **(undefined1 **)(param_1 + 8) = 0;
    UNLOCK();
  }
  return CONCAT71((int7)(uVar2 >> 8),bVar3);
}



// FUNCTION 14782aab6 FUN_14782aab6 body=25 status=ok
// SIG undefined FUN_14782aab6(void)

DWORD FUN_14782aab6(void)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = GetCurrentThreadId();
  LOCK();
  DVar2 = DAT_14c867d18;
  if (DVar1 == DAT_14c867d18) {
    DAT_14c867d18 = 0;
    DVar2 = DVar1;
  }
  UNLOCK();
  return DVar2;
}



// FUNCTION 14782ab26 FUN_14782ab26 body=45 status=ok
// SIG undefined FUN_14782ab26(void)

longlong FUN_14782ab26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_141698b5c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782ab78 FUN_14782ab78 body=38 status=ok
// SIG undefined FUN_14782ab78(void)

undefined8 FUN_14782ab78(undefined8 param_1,int param_2)

{
  FUN_1463693d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782aba0 FUN_14782aba0 body=31 status=ok
// SIG undefined FUN_14782aba0(void)

undefined8 FUN_14782aba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14782abd6 FUN_14782abd6 body=93 status=ok
// SIG undefined FUN_14782abd6(void)

void FUN_14782abd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f02f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5a98a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14782ac34 FUN_14782ac34 body=126 status=ok
// SIG undefined FUN_14782ac34(void)

void FUN_14782ac34(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f02f40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5a98a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014782aca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


