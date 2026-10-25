// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147de50fe FUN_147de50fe body=359 status=ok
// SIG undefined FUN_147de50fe(void)

void FUN_147de50fe(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
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



// FUNCTION 147de5268 FUN_147de5268 body=122 status=ok
// SIG undefined FUN_147de5268(void)

longlong FUN_147de5268(longlong param_1,longlong param_2)

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
    FUN_147de5480(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147de52e2 FUN_147de52e2 body=122 status=ok
// SIG undefined FUN_147de52e2(void)

longlong FUN_147de52e2(longlong param_1,longlong param_2)

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
    FUN_147de535c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147de535c FUN_147de535c body=291 status=ok
// SIG undefined FUN_147de535c(void)

undefined8 * FUN_147de535c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147de50fe(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140044672(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar9 = (undefined8 *)*param_1;
      puVar8 = (undefined8 *)*param_2;
      uVar7 = 0;
      do {
        puVar6 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar6 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
          *(undefined4 *)((longlong)puVar9 + 4) = *(undefined4 *)((longlong)puVar8 + 4);
        }
        else {
          *puVar9 = 0;
          iVar2 = *(int *)(puVar8 + 1);
          _Src = (void *)*puVar8;
          *(int *)(puVar9 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar9,iVar2,0);
            memcpy((void *)*puVar9,_Src,(longlong)iVar2 * 2);
          }
          puVar9[4] = puVar8[4];
          uVar3 = *(undefined4 *)((longlong)puVar8 + 0x14);
          uVar4 = *(undefined4 *)(puVar8 + 3);
          uVar5 = *(undefined4 *)((longlong)puVar8 + 0x1c);
          *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar8 + 2);
          *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
          *(undefined4 *)(puVar9 + 3) = uVar4;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
          puVar9[5] = puVar8[5];
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 6;
        puVar9 = puVar9 + 6;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 147de5480 FUN_147de5480 body=117 status=ok
// SIG undefined FUN_147de5480(void)

undefined8 * FUN_147de5480(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147de5046(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 147de55c4 FUN_147de55c4 body=59 status=ok
// SIG undefined FUN_147de55c4(void)

undefined8 FUN_147de55c4(longlong *param_1)

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



// FUNCTION 147de5694 FUN_147de5694 body=129 status=ok
// SIG undefined FUN_147de5694(void)

undefined8 FUN_147de5694(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
    do {
      memcpy((void *)(param_2 + -0x1c8),(void *)(param_3 + -0x1c8),0x168);
      FUN_140de4b5e(param_2 + -0x60,param_3 + -0x60);
      FUN_147de6a02(param_2 + -0x50,param_3 + -0x50);
      FUN_147de6988(param_2,param_3);
      param_3 = param_3 + 0x220;
      param_2 = param_2 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147de573e FUN_147de573e body=59 status=ok
// SIG undefined FUN_147de573e(void)

undefined8 FUN_147de573e(longlong *param_1)

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



// FUNCTION 147de578a FUN_147de578a body=40 status=ok
// SIG undefined FUN_147de578a(void)

void FUN_147de578a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_147de66b8(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 147de5800 FUN_147de5800 body=957 status=ok
// SIG undefined FUN_147de5800(void)

undefined8 * FUN_147de5800(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined8 local_64;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0x402000003fa00000;
  param_1[1] = 0x4010000040700000;
  *(undefined4 *)(param_1 + 2) = 0x40600000;
  param_1[4] = 0x3fa000003f000000;
  param_1[5] = 0x4070000040200000;
  param_1[6] = 0x401000003fa00000;
  param_1[7] = 0x40500000;
  param_1[8] = 0x40b0000040880000;
  param_1[9] = 0x40d00000;
  param_1[10] = 0x4104000040e80000;
  param_1[0xb] = 0x41140000;
  param_1[0xc] = 0x400000003f800000;
  param_1[0xd] = 0x3f80000040400000;
  param_1[0xe] = 0x3fa000003e800000;
  param_1[0xf] = 0x4050000040100000;
  param_1[0x10] = 0x3f0000003e800000;
  param_1[0x11] = 0x3f8000003f400000;
  param_1[0x12] = 0x4010000040100000;
  *(undefined4 *)(param_1 + 0x13) = 0x40100000;
  param_1[0x14] = 0x400000003f800000;
  param_1[0x15] = 0x4080000040400000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = &DAT_3f8000003f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x400000003f800000;
  param_1[0x1b] = 0x40a0000040400000;
  param_1[0x1c] = 0x40e0000040c00000;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x41a0000041200000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x4220000041f00000;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x40000000;
  *(undefined4 *)(param_1 + 0x21) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x41200000;
  param_1[0x22] = 0x4120000041200000;
  *(undefined4 *)(param_1 + 0x23) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x2b) = 0x40a80000;
  param_1[0x2c] = 0x3ff1d2f1a9fbe76d;
  plVar1 = param_1 + 0x2d;
  puVar2 = param_1 + 0x2f;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x25] = &DAT_3f8000003f800000;
  param_1[0x26] = 0x400000003f800000;
  *(undefined4 *)(param_1 + 0x27) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x28) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x40400000;
  *(undefined4 *)(param_1 + 0x29) = 0x40400000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x40a0000040a00000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x41a0000041200000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  FUN_140c0b6f2(plVar1,0);
  puVar4 = (undefined8 *)param_1[0x2d];
  *puVar4 = 0x400000003f800000;
  *(undefined4 *)(puVar4 + 1) = 0x40400000;
  iVar3 = *(int *)(param_1 + 0x2e);
  *(uint *)(param_1 + 0x2e) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x174) < iVar3 + 1U) {
    FUN_140c0b6f2(plVar1,iVar3);
  }
  lVar5 = *plVar1;
  *(undefined8 *)(lVar5 + (longlong)iVar3 * 0xc) = 0xc0000000bf800000;
  *(undefined4 *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = 0xc0400000;
  local_64 = 0;
  local_5c = 0;
  FUN_140056680(local_78,L"V000");
  local_58 = local_78;
  local_50 = &local_64;
  FUN_147de5bbe(puVar2,local_44);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_64 = 0x400000003f800000;
  local_5c = 0x40400000;
  FUN_140056680(local_78,L"V123");
  local_58 = local_78;
  local_50 = &local_64;
  FUN_147de5bbe(puVar2,local_44);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_64 = 0x40c0000040c00000;
  local_5c = 0x40c00000;
  FUN_140056680(local_78,L"V666");
  local_58 = local_78;
  local_50 = &local_64;
  FUN_147de5bbe(puVar2,local_44);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = (longlong *)0x4130000041200000;
  local_50 = (undefined8 *)CONCAT44(local_50._4_4_,0x41400000);
  FUN_147de6194(param_1 + 0x39,local_78);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de5bbe FUN_147de5bbe body=353 status=ok
// SIG undefined FUN_147de5bbe(void)

undefined4 * FUN_147de5bbe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147de5d20(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = *(undefined4 *)(puVar2 + 1);
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_147de5e06(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x24) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147de5fb6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147de5d20 FUN_147de5d20 body=230 status=ok
// SIG undefined FUN_147de5d20(void)

int * FUN_147de5d20(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147de5e06 FUN_147de5e06 body=114 status=ok
// SIG undefined FUN_147de5e06(void)

undefined8 FUN_147de5e06(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_147de5e78(), iVar9 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(plVar1 + 2) = param_3[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_147de5f44(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 147de5e78 FUN_147de5e78 body=203 status=ok
// SIG undefined FUN_147de5e78(void)

int FUN_147de5e78(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_147de5ec2:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_147de5f38;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147de5f38;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147de5f29;
    }
  }
  return -1;
LAB_147de5f38:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147de5f29:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147de5ec2;
}



// FUNCTION 147de5f44 FUN_147de5f44 body=114 status=ok
// SIG undefined FUN_147de5f44(void)

void FUN_147de5f44(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 147de5fb6 FUN_147de5fb6 body=476 status=ok
// SIG undefined FUN_147de5fb6(void)

void FUN_147de5fb6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
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
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 147de6194 FUN_147de6194 body=300 status=ok
// SIG undefined FUN_147de6194(void)

undefined4 * FUN_147de6194(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147de62c2(param_1,local_48);
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1448eb174(local_40,0xc,0);
  cVar2 = FUN_147de63a8(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_147de64f8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de62c2 FUN_147de62c2 body=230 status=ok
// SIG undefined FUN_147de62c2(void)

int * FUN_147de62c2(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 147de63a8 FUN_147de63a8 body=93 status=ok
// SIG undefined FUN_147de63a8(void)

undefined8 FUN_147de63a8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_147de6406(), iVar3 != -1)) {
    lVar1 = *param_1;
    uVar2 = *param_3;
    *(undefined4 *)(lVar1 + 8 + (longlong)iVar3 * 0x14) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x14) = uVar2;
    FUN_147de6486(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 147de6406 FUN_147de6406 body=128 status=ok
// SIG undefined FUN_147de6406(void)

int FUN_147de6406(longlong *param_1,uint param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        fVar2 = *(float *)(lVar4 + lVar6 * 0x14);
        if ((fVar2 == *param_3) && (!NAN(fVar2) && !NAN(*param_3))) {
          lVar1 = lVar4 + lVar6 * 0x14;
          fVar2 = *(float *)(lVar1 + 4);
          if ((fVar2 == param_3[1]) && (!NAN(fVar2) && !NAN(param_3[1]))) {
            fVar2 = *(float *)(lVar1 + 8);
            if ((fVar2 == param_3[2]) && (!NAN(fVar2) && !NAN(param_3[2]))) {
              return iVar3;
            }
          }
        }
        iVar3 = *(int *)(lVar4 + 0xc + lVar6 * 0x14);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 147de6486 FUN_147de6486 body=114 status=ok
// SIG undefined FUN_147de6486(void)

void FUN_147de6486(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147de64f8 FUN_147de64f8 body=446 status=ok
// SIG undefined FUN_147de64f8(void)

void FUN_147de64f8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x14;
        iVar6 = FUN_1448eb174(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147de66b8 FUN_147de66b8 body=124 status=ok
// SIG undefined FUN_147de66b8(void)

void FUN_147de66b8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  FUN_147de6734(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_147de67ec(param_1 + 0x178);
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de6734 FUN_147de6734 body=54 status=ok
// SIG undefined FUN_147de6734(void)

void FUN_147de6734(longlong *param_1)

{
  FUN_147de676a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de676a FUN_147de676a body=128 status=ok
// SIG undefined FUN_147de676a(void)

void FUN_147de676a(longlong param_1,int param_2)

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



// FUNCTION 147de67ec FUN_147de67ec body=54 status=ok
// SIG undefined FUN_147de67ec(void)

void FUN_147de67ec(longlong *param_1)

{
  FUN_147de6822(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de6822 FUN_147de6822 body=355 status=ok
// SIG undefined FUN_147de6822(void)

void FUN_147de6822(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
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



// FUNCTION 147de6988 FUN_147de6988 body=122 status=ok
// SIG undefined FUN_147de6988(void)

longlong FUN_147de6988(longlong param_1,longlong param_2)

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
    FUN_147de6b9e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147de6a02 FUN_147de6a02 body=122 status=ok
// SIG undefined FUN_147de6a02(void)

longlong FUN_147de6a02(longlong param_1,longlong param_2)

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
    FUN_147de6a7c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147de6a7c FUN_147de6a7c body=289 status=ok
// SIG undefined FUN_147de6a7c(void)

undefined8 * FUN_147de6a7c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147de6822(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)*param_2;
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar4 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar4 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
          *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)((longlong)puVar5 + 4);
        }
        else {
          *puVar6 = 0;
          iVar2 = *(int *)(puVar5 + 1);
          _Src = (void *)*puVar5;
          *(int *)(puVar6 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar6,iVar2,0);
            memcpy((void *)*puVar6,_Src,(longlong)iVar2 * 2);
          }
          *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar5 + 3);
          puVar6[2] = puVar5[2];
          puVar6[4] = puVar5[4];
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 5;
        puVar6 = puVar6 + 5;
      } while (uVar1 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 147de6b9e FUN_147de6b9e body=121 status=ok
// SIG undefined FUN_147de6b9e(void)

undefined8 * FUN_147de6b9e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147de676a(param_1,uVar1);
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



// FUNCTION 147de6c28 FUN_147de6c28 body=48 status=ok
// SIG undefined FUN_147de6c28(void)

void FUN_147de6c28(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de6c6e FUN_147de6c6e body=129 status=ok
// SIG undefined FUN_147de6c6e(void)

undefined8 FUN_147de6c6e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_1447a122a(lVar2,puVar1 + 2);
      *(undefined4 *)(lVar2 + 0x10) = puVar1[6];
      FUN_140bec736(param_2 + lVar3 + 0x20,param_3 + lVar3 + 0x20);
      *(undefined4 *)(param_2 + lVar3 + 0x30) = *(undefined4 *)(param_3 + lVar3 + 0x30);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147de6d18 FUN_147de6d18 body=59 status=ok
// SIG undefined FUN_147de6d18(void)

undefined8 FUN_147de6d18(longlong *param_1)

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



// FUNCTION 147de6db4 FUN_147de6db4 body=246 status=ok
// SIG undefined FUN_147de6db4(void)

undefined4 * FUN_147de6db4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *param_1 = 1;
  param_1[6] = 2;
  param_1[0xc] = 3;
  param_1[4] = 1;
  FUN_1447403be(puVar1,0);
  **(undefined1 **)(param_1 + 2) = 0;
  iVar2 = param_1[4];
  param_1[4] = iVar2 + 1U;
  if ((uint)param_1[5] < iVar2 + 1U) {
    FUN_1447403be(puVar1,iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 2) + (longlong)iVar2) = 0x7f;
  iVar2 = param_1[4];
  param_1[4] = iVar2 + 1U;
  if ((uint)param_1[5] < iVar2 + 1U) {
    FUN_1447403be(puVar1,iVar2);
  }
  puVar1 = param_1 + 8;
  *(undefined1 *)(*(longlong *)(param_1 + 2) + (longlong)iVar2) = 0xff;
  iVar2 = param_1[10];
  param_1[10] = iVar2 + 1U;
  if ((uint)param_1[0xb] < iVar2 + 1U) {
    FUN_140cd36ae(puVar1,iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2) = 0x80;
  iVar2 = param_1[10];
  param_1[10] = iVar2 + 1U;
  if ((uint)param_1[0xb] < iVar2 + 1U) {
    FUN_140cd36ae(puVar1,iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2) = 0;
  iVar2 = param_1[10];
  param_1[10] = iVar2 + 1U;
  if ((uint)param_1[0xb] < iVar2 + 1U) {
    FUN_140cd36ae(puVar1,iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2) = 0x7f;
  return param_1;
}



// FUNCTION 147de6eac FUN_147de6eac body=52 status=ok
// SIG undefined FUN_147de6eac(void)

void FUN_147de6eac(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147de6f0e FUN_147de6f0e body=54 status=ok
// SIG undefined FUN_147de6f0e(void)

undefined1 FUN_147de6f0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147de7362(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147de6f6c FUN_147de6f6c body=59 status=ok
// SIG undefined FUN_147de6f6c(void)

undefined8 FUN_147de6f6c(longlong *param_1)

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



// FUNCTION 147de6fb2 FUN_147de6fb2 body=34 status=ok
// SIG undefined FUN_147de6fb2(void)

void FUN_147de6fb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_147de72ca(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147de7022 FUN_147de7022 body=429 status=ok
// SIG undefined FUN_147de7022(void)

longlong * FUN_147de7022(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1446f48e2(0,0);
  *(undefined4 *)*param_1 = 0xffffffff;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = 0;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  plVar1 = param_1 + 2;
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = 1;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1447403be(plVar1,iVar2);
  }
  *(undefined1 *)(param_1[2] + (longlong)iVar2) = 0;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1447403be(plVar1,iVar2);
  }
  *(undefined1 *)(param_1[2] + (longlong)iVar2) = 0x7f;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1447403be(plVar1,iVar2);
  }
  *(undefined1 *)(param_1[2] + (longlong)iVar2) = 0xff;
  *(undefined4 *)(param_1 + 4) = 0x2a;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  param_1[6] = 0xbf800000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  iVar2 = (int)param_1[9];
  lVar4 = (longlong)iVar2;
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1403e3958(param_1 + 8,iVar2);
  }
  lVar3 = param_1[8];
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = 0x3ff0000000000000;
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = 0x4000000000000000;
  *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x18) = 0x4008000000000000;
  iVar2 = (int)param_1[9];
  lVar4 = (longlong)iVar2;
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1403e3958(param_1 + 8,iVar2);
  }
  lVar3 = param_1[8];
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = 0xbff0000000000000;
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = 0xc000000000000000;
  *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x18) = 0xc008000000000000;
  FUN_147de71d0(param_1 + 10);
  return param_1;
}



// FUNCTION 147de71d0 FUN_147de71d0 body=60 status=ok
// SIG undefined FUN_147de71d0(void)

void FUN_147de71d0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2) {
    FUN_147de7236(param_1,iVar1);
  }
  FUN_147de720c((longlong)iVar1 * 0xd0 + *param_1);
  return;
}



// FUNCTION 147de720c FUN_147de720c body=42 status=ok
// SIG undefined FUN_147de720c(void)

void FUN_147de720c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_147de3afa(param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while ((int)lVar1 != 0x1a0);
  return;
}



// FUNCTION 147de7236 FUN_147de7236 body=146 status=ok
// SIG undefined FUN_147de7236(void)

void FUN_147de7236(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147de72ca FUN_147de72ca body=87 status=ok
// SIG undefined FUN_147de72ca(void)

void FUN_147de72ca(longlong *param_1)

{
  FUN_147de7321(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
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



// FUNCTION 147de7321 FUN_147de7321 body=65 status=ok
// SIG undefined FUN_147de7321(void)

void FUN_147de7321(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147de7362 FUN_147de7362 body=85 status=ok
// SIG undefined FUN_147de7362(void)

longlong FUN_147de7362(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_14054c6c4();
  FUN_1447a122a(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  FUN_1405b70a4(param_1 + 0x40,param_2 + 0x40);
  FUN_147de73b8(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 147de73b8 FUN_147de73b8 body=95 status=ok
// SIG undefined FUN_147de73b8(void)

undefined8 * FUN_147de73b8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147de7321(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147de7418(param_1,iVar1);
      FUN_147de748a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147de7418 FUN_147de7418 body=114 status=ok
// SIG undefined FUN_147de7418(void)

void FUN_147de7418(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd0,0x10);
    iVar2 = (int)(uVar1 / 0xd0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xd0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147de748a FUN_147de748a body=60 status=ok
// SIG undefined FUN_147de748a(void)

void FUN_147de748a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147de74c6(param_1,param_2);
    param_1 = param_1 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return;
}



// FUNCTION 147de74c6 FUN_147de74c6 body=160 status=ok
// SIG undefined FUN_147de74c6(void)

undefined4 * FUN_147de74c6(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 2);
  }
  plVar2 = *(longlong **)(param_2 + 10);
  *(longlong **)(param_1 + 10) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[0xc] = param_2[0xc];
  memcpy(param_1 + 0xe,param_2 + 0xe,0x8c);
  return param_1;
}



// FUNCTION 147de7596 FUN_147de7596 body=63 status=ok
// SIG undefined FUN_147de7596(void)

undefined1 FUN_147de7596(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147de8604(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 147de75fe FUN_147de75fe body=59 status=ok
// SIG undefined FUN_147de75fe(void)

undefined8 FUN_147de75fe(longlong *param_1)

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



// FUNCTION 147de764a FUN_147de764a body=40 status=ok
// SIG undefined FUN_147de764a(void)

void FUN_147de764a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_147de83c6(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 147de76c0 FUN_147de76c0 body=1175 status=ok
// SIG undefined FUN_147de76c0(void)

undefined8 * FUN_147de76c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_158 [40];
  longlong local_130 [2];
  longlong *local_120;
  undefined8 **local_118;
  undefined1 local_10c [4];
  undefined8 *local_108;
  undefined8 **ppuStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
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
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  FUN_140056680(&local_120,&DAT_149ebbb90);
  local_10c = (undefined1  [4])0x1;
  local_108 = (undefined8 *)local_10c;
  ppuStack_100 = &local_120;
  FUN_147de7b58(param_1,local_130,&local_108,0);
  if (local_120 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_120,&DAT_149ebbb98);
  local_10c = (undefined1  [4])0x2;
  local_108 = (undefined8 *)local_10c;
  ppuStack_100 = &local_120;
  FUN_147de7b58(param_1,local_130,&local_108,0);
  if (local_120 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = param_1 + 10;
  FUN_140056680(&local_120,L"Three");
  local_10c = (undefined1  [4])0x3;
  local_108 = (undefined8 *)local_10c;
  ppuStack_100 = &local_120;
  FUN_147de7b58(param_1,local_130,&local_108,0);
  if (local_120 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_120,&DAT_149e3aa3e);
  FUN_140056680(local_130,L"StrAll");
  local_108 = local_130;
  ppuStack_100 = &local_120;
  FUN_1411f1c38(puVar1,local_10c,&local_108,0);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  if (local_120 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_120,L"Your");
  FUN_140056680(local_130,L"StrYour");
  local_108 = local_130;
  ppuStack_100 = &local_120;
  FUN_1411f1c38(puVar1,local_10c,&local_108,0);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  if (local_120 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_120,L"Base");
  FUN_140056680(local_130,L"StrBase");
  local_108 = local_130;
  ppuStack_100 = &local_120;
  FUN_1411f1c38(puVar1,local_10c,&local_108,0);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  puVar1 = param_1 + 0x14;
  if (local_120 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_108 = (undefined8 *)0x0;
  ppuStack_100 = (undefined8 **)0x0;
  local_f8 = 0;
  FUN_140056680(local_130,L"V000");
  local_120 = local_130;
  local_118 = &local_108;
  FUN_147de4466(puVar1,local_10c);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  local_108 = (undefined8 *)0x3ff0000000000000;
  ppuStack_100 = (undefined8 **)0x4000000000000000;
  local_f8 = 0x4008000000000000;
  FUN_140056680(local_130,L"V123");
  local_120 = local_130;
  local_118 = &local_108;
  FUN_147de4466(puVar1,local_10c);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  local_108 = (undefined8 *)0x4018000000000000;
  ppuStack_100 = (undefined8 **)0x4018000000000000;
  local_f8 = 0x4018000000000000;
  FUN_140056680(local_130,L"V666");
  local_120 = local_130;
  local_118 = &local_108;
  FUN_147de4466(puVar1,local_10c);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  FUN_147de3afa(&local_108);
  FUN_140056680(local_130,L"StructOne");
  local_120 = local_130;
  local_118 = &local_108;
  FUN_147de7c9c(param_1 + 0x1e,local_10c);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_147de3afa(&local_108);
  FUN_140056680(local_130,L"StructTwo");
  local_120 = local_130;
  local_118 = &local_108;
  FUN_147de7c9c(param_1 + 0x1e,local_10c);
  if (local_130[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de7b58 FUN_147de7b58 body=323 status=ok
// SIG undefined FUN_147de7b58(void)

undefined4 *
FUN_147de7b58(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140967e96(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  *puVar1 = 0;
  local_48[4] = *(uint *)(puVar1 + 1);
  local_48[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_140967dda(param_1,uVar4,local_48);
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
      local_48[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140968080(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de7c9c FUN_147de7c9c body=324 status=ok
// SIG undefined FUN_147de7c9c(void)

undefined4 * FUN_147de7c9c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147de7de2(param_1,local_48);
  FUN_147de7fd0(param_3,local_40);
  *(undefined4 *)(local_40 + 0x1c) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_147de7ed0(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0xe4) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1c) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147de81e0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de7de2 FUN_147de7de2 body=237 status=ok
// SIG undefined FUN_147de7de2(void)

int * FUN_147de7de2(longlong *param_1,int *param_2)

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
      FUN_147de7f3c(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xf0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xf0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xf0 + *param_1;
  return param_2;
}



// FUNCTION 147de7ed0 FUN_147de7ed0 body=108 status=ok
// SIG undefined FUN_147de7ed0(void)

undefined8 FUN_147de7ed0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_147de8056(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0xf0 + *param_1);
    FUN_147de81a2(_Dst);
    memmove(_Dst,param_3,0xe0);
    FUN_147de8128(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 147de7f3c FUN_147de7f3c body=146 status=ok
// SIG undefined FUN_147de7f3c(void)

void FUN_147de7f3c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147de7fd0 FUN_147de7fd0 body=134 status=ok
// SIG undefined FUN_147de7fd0(void)

undefined8 * FUN_147de7fd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  param_2[4] = *(undefined8 *)(puVar2 + 4);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(param_2 + 2) = *puVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  param_2[5] = *(undefined8 *)(puVar2 + 6);
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined4 *)(param_2 + 6) = puVar2[8];
  *(undefined4 *)((longlong)param_2 + 0x34) = puVar2[9];
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_14023423e(param_2 + 7,puVar2 + 10);
  memcpy(param_2 + 9,puVar2 + 0xe,0x8c);
  return param_2;
}



// FUNCTION 147de8056 FUN_147de8056 body=209 status=ok
// SIG undefined FUN_147de8056(void)

int FUN_147de8056(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_147de80a0:
      lVar10 = (longlong)iVar1 * 0xf0;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_147de811c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147de811c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147de810a;
    }
  }
  return -1;
LAB_147de811c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147de810a:
  iVar1 = *(int *)(lVar4 + 0xe0 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147de80a0;
}



// FUNCTION 147de8128 FUN_147de8128 body=122 status=ok
// SIG undefined FUN_147de8128(void)

void FUN_147de8128(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xf0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xf0 + 4) = uVar5;
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



// FUNCTION 147de81a2 FUN_147de81a2 body=62 status=ok
// SIG undefined FUN_147de81a2(void)

void FUN_147de81a2(longlong *param_1)

{
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de81e0 FUN_147de81e0 body=485 status=ok
// SIG undefined FUN_147de81e0(void)

void FUN_147de81e0(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0xf0;
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
        *(int *)(lVar3 + 0xe4 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xe0 + lVar11) =
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



// FUNCTION 147de83c6 FUN_147de83c6 body=167 status=ok
// SIG undefined FUN_147de83c6(void)

void FUN_147de83c6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_147de846e(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_147de50c8(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140926446(param_1);
  return;
}



// FUNCTION 147de846e FUN_147de846e body=54 status=ok
// SIG undefined FUN_147de846e(void)

void FUN_147de846e(longlong *param_1)

{
  FUN_147de84a4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de84a4 FUN_147de84a4 body=349 status=ok
// SIG undefined FUN_147de84a4(void)

void FUN_147de84a4(longlong *param_1,int param_2)

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
      FUN_147de81a2((longlong)iStack_54 * 0xf0 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e2ec3a(param_1,param_2);
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



// FUNCTION 147de8604 FUN_147de8604 body=77 status=ok
// SIG undefined FUN_147de8604(void)

longlong FUN_147de8604(longlong param_1,longlong param_2)

{
  FUN_1468070c8();
  FUN_14058acb2(param_1 + 0x50,param_2 + 0x50);
  FUN_147de52e2(param_1 + 0xa0,param_2 + 0xa0);
  FUN_147de8652(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 147de8652 FUN_147de8652 body=122 status=ok
// SIG undefined FUN_147de8652(void)

longlong FUN_147de8652(longlong param_1,longlong param_2)

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
    FUN_147de86cc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147de86cc FUN_147de86cc body=230 status=ok
// SIG undefined FUN_147de86cc(void)

undefined8 * FUN_147de86cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147de84a4(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147de7f3c(param_1);
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
          FUN_147de87b2(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x38) = *(undefined8 *)(puVar4 + 0x38);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x3c;
        puVar6 = puVar6 + 0x3c;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147de87b2 FUN_147de87b2 body=105 status=ok
// SIG undefined FUN_147de87b2(void)

undefined8 * FUN_147de87b2(undefined8 *param_1,undefined8 *param_2)

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
  FUN_147de74c6(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 147de884a FUN_147de884a body=63 status=ok
// SIG undefined FUN_147de884a(void)

undefined1 FUN_147de884a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147de96b8(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 147de88b2 FUN_147de88b2 body=59 status=ok
// SIG undefined FUN_147de88b2(void)

undefined8 FUN_147de88b2(longlong *param_1)

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



// FUNCTION 147de88fe FUN_147de88fe body=40 status=ok
// SIG undefined FUN_147de88fe(void)

void FUN_147de88fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_147de9452(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 147de8974 FUN_147de8974 body=746 status=ok
// SIG undefined FUN_147de8974(void)

undefined8 * FUN_147de8974(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_128 [44];
  undefined1 local_fc [4];
  undefined4 local_f8;
  undefined4 uStack_f4;
  longlong local_e0;
  longlong *local_d0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar1 = param_1 + 10;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  local_f8 = 1;
  FUN_144984904(puVar1,local_fc,&local_f8,0);
  local_f8 = 2;
  FUN_144984904(puVar1,local_fc,&local_f8,0);
  local_f8 = 3;
  FUN_144984904(puVar1,local_fc,&local_f8,0);
  FUN_140056680(&local_f8,&DAT_14ab33050);
  FUN_140e830ae(param_1,local_fc,&local_f8,0);
  if (CONCAT44(uStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_f8,L"Belong");
  FUN_140e830ae(param_1,local_fc,&local_f8,0);
  if (CONCAT44(uStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_f8,&DAT_149e3bde4);
  FUN_140e830ae(param_1,local_fc,&local_f8,0);
  if (CONCAT44(uStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  puVar1 = param_1 + 0x14;
  FUN_140056680(&local_f8,&DAT_14ab33066);
  FUN_140e830ae(param_1,local_fc,&local_f8,0);
  if (CONCAT44(uStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_f8,L"Make",1);
  FUN_144869592(puVar1,local_fc,&local_f8,0);
  FUN_1446f470e(&local_f8,L"Your",1);
  FUN_144869592(puVar1,local_fc,&local_f8,0);
  FUN_1446f470e(&local_f8,L"Time",1);
  FUN_144869592(puVar1,local_fc,&local_f8,0);
  FUN_147de3afa(&local_f8);
  FUN_147de8c60(param_1 + 0x1e,local_fc,&local_f8);
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de8c60 FUN_147de8c60 body=404 status=ok
// SIG undefined FUN_147de8c60(void)

undefined4 * FUN_147de8c60(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147de8df6(param_1,local_50);
  *(undefined8 *)(local_48 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *local_48 = *param_3;
  local_48[1] = uVar1;
  local_48[2] = uVar2;
  local_48[3] = uVar3;
  iVar8 = 0;
  *(undefined8 *)(local_48 + 6) = 0;
  *(undefined8 *)(local_48 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 6) = 0;
  local_48[8] = param_3[8];
  local_48[9] = param_3[9];
  *(undefined8 *)(param_3 + 8) = 0;
  FUN_14023423e(local_48 + 10,param_3 + 10);
  memcpy(local_48 + 0xe,param_3 + 0xe,0x8c);
  local_48[0x34] = 0xffffffff;
  local_54 = local_50[0];
  if (local_48[8] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(local_48 + 6);
    iVar8 = local_48[8] + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_147de8ee2(param_1,uVar5,local_48,&local_54);
  uVar1 = local_54;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[0x35] = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_48[0x34] =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147de926a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147de8df6 FUN_147de8df6 body=235 status=ok
// SIG undefined FUN_147de8df6(void)

int * FUN_147de8df6(longlong *param_1,int *param_2)

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
      FUN_140df211e(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xe0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xe0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xe0 + *param_1;
  return param_2;
}



// FUNCTION 147de8ee2 FUN_147de8ee2 body=135 status=ok
// SIG undefined FUN_147de8ee2(void)

undefined8 FUN_147de8ee2(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_147de8f6a(), iVar2 != -1)) {
    _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xe0);
    plVar1 = *(longlong **)(*param_1 + 0x28 + (longlong)iVar2 * 0xe0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
      FUN_1400020a8();
    }
    memmove(_Dst,param_3,0xd0);
    FUN_147de8fdc(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 147de8f6a FUN_147de8f6a body=114 status=ok
// SIG undefined FUN_147de8f6a(void)

int FUN_147de8f6a(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_147de9056(lVar3 + (longlong)iVar4 * 0xe0,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xd0 + (longlong)iVar4 * 0xe0);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147de8fdc FUN_147de8fdc body=122 status=ok
// SIG undefined FUN_147de8fdc(void)

void FUN_147de8fdc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe0 + 4) = uVar5;
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



// FUNCTION 147de9056 FUN_147de9056 body=532 status=ok
// SIG undefined FUN_147de9056(void)

bool FUN_147de9056(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if (param_1[1] != param_2[1]) {
    return false;
  }
  if (param_1[2] != param_2[2]) {
    return false;
  }
  if (param_1[3] != param_2[3]) {
    return false;
  }
  if (*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4)) {
    iVar4 = param_1[8];
    if (iVar4 == param_2[8]) {
      if (1 < iVar4) {
        lVar7 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*(longlong *)(param_1 + 6) + lVar7);
          uVar9 = (ulonglong)uVar8;
          uVar10 = *(ushort *)(*(longlong *)(param_2 + 6) + lVar7);
          if (uVar8 != uVar10) break;
          if (uVar8 == 0) goto LAB_147de9113;
LAB_147de90d6:
          lVar7 = lVar7 + 2;
        }
        if ((uVar10 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar11 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_147de90d6;
        }
        if (uVar8 != uVar10) {
          return false;
        }
      }
    }
    else if (param_2[8] + iVar4 != 1) {
      return false;
    }
LAB_147de9113:
    piVar6 = param_1 + 10;
    cVar3 = FUN_144722c14(piVar6,param_2 + 10,0);
    if (cVar3 == '\0') {
      return false;
    }
    if ((*(longlong *)(param_1 + 0xe) == *(longlong *)(param_2 + 0xe)) &&
       (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10))) {
      if ((*(double *)(param_1 + 0x12) == *(double *)(param_2 + 0x12)) &&
         (!NAN(*(double *)(param_1 + 0x12)) && !NAN(*(double *)(param_2 + 0x12)))) {
        if ((*(double *)(param_1 + 0x14) == *(double *)(param_2 + 0x14)) &&
           (!NAN(*(double *)(param_1 + 0x14)) && !NAN(*(double *)(param_2 + 0x14)))) {
          if ((*(double *)(param_1 + 0x16) == *(double *)(param_2 + 0x16)) &&
             (!NAN(*(double *)(param_1 + 0x16)) && !NAN(*(double *)(param_2 + 0x16)))) {
            if ((*(double *)(param_1 + 0x18) == *(double *)(param_2 + 0x18)) &&
               (!NAN(*(double *)(param_1 + 0x18)) && !NAN(*(double *)(param_2 + 0x18)))) {
              if ((*(double *)(param_1 + 0x1a) == *(double *)(param_2 + 0x1a)) &&
                 (!NAN(*(double *)(param_1 + 0x1a)) && !NAN(*(double *)(param_2 + 0x1a)))) {
                if ((*(double *)(param_1 + 0x1c) == *(double *)(param_2 + 0x1c)) &&
                   (!NAN(*(double *)(param_1 + 0x1c)) && !NAN(*(double *)(param_2 + 0x1c)))) {
                  if ((*(double *)(param_1 + 0x1e) == *(double *)(param_2 + 0x1e)) &&
                     (!NAN(*(double *)(param_1 + 0x1e)) && !NAN(*(double *)(param_2 + 0x1e)))) {
                    if ((*(double *)(param_1 + 0x20) == *(double *)(param_2 + 0x20)) &&
                       (!NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_2 + 0x20)))) {
                      if ((*(double *)(param_1 + 0x22) == *(double *)(param_2 + 0x22)) &&
                         (!NAN(*(double *)(param_1 + 0x22)) && !NAN(*(double *)(param_2 + 0x22)))) {
                        if ((*(double *)(param_1 + 0x24) == *(double *)(param_2 + 0x24)) &&
                           (!NAN(*(double *)(param_1 + 0x24)) && !NAN(*(double *)(param_2 + 0x24))))
                        {
                          auVar1._8_8_ = -(ulonglong)
                                          (*(double *)(param_2 + 0x2a) ==
                                          *(double *)(param_1 + 0x2a));
                          auVar1._0_8_ = -(ulonglong)
                                          (*(double *)(param_2 + 0x28) ==
                                          *(double *)(param_1 + 0x28));
                          iVar4 = movmskpd((int)*(longlong *)(param_1 + 0x10),auVar1);
                          auVar2._8_8_ = -(ulonglong)
                                          (*(double *)(param_2 + 0x2e) ==
                                          *(double *)(param_1 + 0x2e));
                          auVar2._0_8_ = -(ulonglong)
                                          (*(double *)(param_2 + 0x2c) ==
                                          *(double *)(param_1 + 0x2c));
                          iVar5 = movmskpd((int)piVar6,auVar2);
                          if (iVar4 + iVar5 * 4 == 0xf) {
                            return param_1[0x30] == param_2[0x30];
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
  return false;
}



// FUNCTION 147de926a FUN_147de926a body=486 status=ok
// SIG undefined FUN_147de926a(void)

void FUN_147de926a(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0xe0;
        iVar6 = *(int *)(lVar3 + 0x20 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + 0x18 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xd4 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xd0 + lVar11) =
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



// FUNCTION 147de9452 FUN_147de9452 body=167 status=ok
// SIG undefined FUN_147de9452(void)

void FUN_147de9452(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_147de94fa(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 147de94fa FUN_147de94fa body=54 status=ok
// SIG undefined FUN_147de94fa(void)

void FUN_147de94fa(longlong *param_1)

{
  FUN_147de9530(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de9530 FUN_147de9530 body=389 status=ok
// SIG undefined FUN_147de9530(void)

void FUN_147de9530(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
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
      lVar5 = (longlong)iStack_64;
      plVar3 = *(longlong **)(lVar2 + 0x28 + lVar5 * 0xe0);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (*(longlong *)(lVar2 + lVar5 * 0xe0 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14053096a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar4 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
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



// FUNCTION 147de96b8 FUN_147de96b8 body=77 status=ok
// SIG undefined FUN_147de96b8(void)

longlong FUN_147de96b8(longlong param_1,longlong param_2)

{
  FUN_1410b2022();
  FUN_145c3f772(param_1 + 0x50,param_2 + 0x50);
  FUN_144881636(param_1 + 0xa0,param_2 + 0xa0);
  FUN_147de9706(param_1 + 0xf0,param_2 + 0xf0);
  return param_1;
}



// FUNCTION 147de9706 FUN_147de9706 body=122 status=ok
// SIG undefined FUN_147de9706(void)

longlong FUN_147de9706(longlong param_1,longlong param_2)

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
    FUN_147de9780(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147de9780 FUN_147de9780 body=221 status=ok
// SIG undefined FUN_147de9780(void)

undefined8 * FUN_147de9780(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147de9530(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140df211e(param_1);
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
          FUN_147de74c6(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x34) = *(undefined8 *)(puVar4 + 0x34);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x38;
        puVar6 = puVar6 + 0x38;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147de988c FUN_147de988c body=63 status=ok
// SIG undefined FUN_147de988c(void)

undefined1 FUN_147de988c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147de9bec(param_2,param_3);
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
  }
  return 1;
}



// FUNCTION 147de98f4 FUN_147de98f4 body=59 status=ok
// SIG undefined FUN_147de98f4(void)

undefined8 FUN_147de98f4(longlong *param_1)

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



// FUNCTION 147de9940 FUN_147de9940 body=40 status=ok
// SIG undefined FUN_147de9940(void)

void FUN_147de9940(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_147de9b02(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 147de99b6 FUN_147de99b6 body=330 status=ok
// SIG undefined FUN_147de99b6(void)

undefined8 * FUN_147de99b6(undefined8 *param_1)

{
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0 [2];
  undefined1 local_c0 [152];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(&local_f8,L"Test String");
  *param_1 = local_f8;
  local_f8 = 0;
  *(undefined4 *)(param_1 + 1) = uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_ec;
  param_1[2] = 0;
  param_1[3] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 4) = 0x4d2;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  FUN_1446f470e(&local_f8,L"Test Name",1);
  param_1[6] = local_f8;
  param_1[7] = 0xffffffff;
  FUN_147de3afa(&local_f8);
  *(undefined4 *)(param_1 + 8) = (undefined4)local_f8;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_f8._4_4_;
  *(undefined4 *)(param_1 + 9) = uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_ec;
  param_1[10] = local_e8;
  param_1[0xb] = local_e0;
  local_e0 = 0;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_1 + 100) = local_d8._4_4_;
  local_d8 = 0;
  FUN_14023423e(param_1 + 0xd,local_d0);
  memcpy(param_1 + 0xf,local_c0,0x8c);
  *(undefined1 *)(param_1 + 0x22) = 1;
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de9b02 FUN_147de9b02 body=234 status=ok
// SIG undefined FUN_147de9b02(void)

void FUN_147de9b02(longlong *param_1)

{
  if ((char)param_1[0x3e] == '\x01') {
    if ((longlong *)param_1[0x29] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x29] + 0x10))();
    }
    if (param_1[0x27] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  if ((char)param_1[0x22] == '\x01') {
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
    }
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  if ((int)param_1[7] != -1) {
    param_1[7] = 0xffffffff;
  }
  if ((int)param_1[6] != -1) {
    param_1[6] = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = -0x100000000;
  }
  return;
}



// FUNCTION 147de9bec FUN_147de9bec body=193 status=ok
// SIG undefined FUN_147de9bec(void)

longlong FUN_147de9bec(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_14054da5a();
  FUN_14054da5a(param_1 + 0x10,param_2 + 0x10);
  if (param_2 == param_1) goto LAB_147de9c0f;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    uVar1 = 1;
LAB_147de9c45:
    *(undefined1 *)(param_1 + 0x24) = uVar1;
  }
  else if (*(char *)(param_1 + 0x24) == '\x01') {
    uVar1 = 0;
    goto LAB_147de9c45;
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  else if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_2 + 0x30) == -1) {
    if (*(int *)(param_1 + 0x30) != -1) {
      uVar2 = 0xffffffff;
      goto LAB_147de9c85;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
LAB_147de9c85:
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_2 + 0x38) == -1) {
    if (*(int *)(param_1 + 0x38) == -1) goto LAB_147de9c0f;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar2;
LAB_147de9c0f:
  FUN_147de9cae(param_1 + 0x40,param_2 + 0x40);
  FUN_147de9cae(param_1 + 0x120,param_2 + 0x120);
  return param_1;
}



// FUNCTION 147de9cae FUN_147de9cae body=86 status=ok
// SIG undefined FUN_147de9cae(void)

longlong FUN_147de9cae(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xd0) == '\x01') {
      FUN_147de9d04(param_1);
    }
    else if (*(char *)(param_1 + 0xd0) == '\x01') {
      if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
      }
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0xd0) = 0;
    }
  }
  return param_1;
}



// FUNCTION 147de9d04 FUN_147de9d04 body=78 status=ok
// SIG undefined FUN_147de9d04(void)

longlong FUN_147de9d04(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_147de74c6(param_1,param_2);
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return param_1;
}



// FUNCTION 147de9d54 FUN_147de9d54 body=37 status=ok
// SIG undefined FUN_147de9d54(void)

void FUN_147de9d54(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa10);
  FUN_147de9eca(param_2);
  return;
}



// FUNCTION 147de9da0 FUN_147de9da0 body=63 status=ok
// SIG undefined FUN_147de9da0(void)

undefined1 FUN_147de9da0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147dea008(param_2,param_3);
    param_3 = param_3 + 0xa10;
    param_2 = param_2 + 0xa10;
  }
  return 1;
}



// FUNCTION 147de9e08 FUN_147de9e08 body=59 status=ok
// SIG undefined FUN_147de9e08(void)

undefined8 FUN_147de9e08(longlong *param_1)

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



// FUNCTION 147de9e54 FUN_147de9e54 body=40 status=ok
// SIG undefined FUN_147de9e54(void)

void FUN_147de9e54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa10) == '\x01') {
    FUN_147de9f90(param_2);
    *(undefined1 *)(param_2 + 0xa10) = 0;
  }
  return;
}



// FUNCTION 147de9eca FUN_147de9eca body=198 status=ok
// SIG undefined FUN_147de9eca(void)

undefined1 * FUN_147de9eca(undefined1 *param_1)

{
  *param_1 = 0x81;
  *(undefined2 *)(param_1 + 2) = 0x8001;
  *(undefined4 *)(param_1 + 4) = 0x80000001;
  *(undefined8 *)(param_1 + 8) = 0xffffac1d29dc725d;
  param_1[0x10] = 0xff;
  *(undefined2 *)(param_1 + 0x12) = 0xffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0x10c6f7a0b5ed;
  *(undefined4 *)(param_1 + 0x20) = 0x40840000;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0800000000000;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  param_1[0x32] = 0xb4;
  memset(param_1 + 0x38,0,0xc0);
  FUN_147de3afa(param_1 + 0x100);
  FUN_147de7022(param_1 + 0x1d0);
  FUN_147de76c0(param_1 + 0x230);
  FUN_147de8974(param_1 + 0x370);
  FUN_147de99b6(param_1 + 0x4b0);
  FUN_147de3ece(param_1 + 0x6b0);
  return param_1;
}



// FUNCTION 147de9f90 FUN_147de9f90 body=120 status=ok
// SIG undefined FUN_147de9f90(void)

void FUN_147de9f90(longlong param_1)

{
  FUN_147de4f94(param_1 + 0x6b0);
  FUN_147de9b02(param_1 + 0x4b0);
  FUN_147de9452(param_1 + 0x370);
  FUN_147de83c6(param_1 + 0x230);
  FUN_147de72ca(param_1 + 0x1d0);
  if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_147de3780(param_1 + 0x38);
  return;
}



// FUNCTION 147dea008 FUN_147dea008 body=225 status=ok
// SIG undefined FUN_147dea008(void)

undefined4 * FUN_147dea008(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
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
  
  *(undefined4 *)((longlong)param_1 + 0x2f) = *(undefined4 *)((longlong)param_2 + 0x2f);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_147de37d2(param_1 + 0xe,param_2 + 0xe);
  FUN_147de3cba(param_1 + 0x40,param_2 + 0x40);
  FUN_147de7362(param_1 + 0x74,param_2 + 0x74);
  FUN_147de8604(param_1 + 0x8c,param_2 + 0x8c);
  FUN_147de96b8(param_1 + 0xdc,param_2 + 0xdc);
  FUN_147de9bec(param_1 + 300,param_2 + 300);
  memcpy(param_1 + 0x1ac,param_2 + 0x1ac,0x2b0);
  FUN_1405b70a4(param_1 + 600,param_2 + 600);
  FUN_147de52e2(param_1 + 0x25c,param_2 + 0x25c);
  FUN_147de5268(param_1 + 0x270,param_2 + 0x270);
  return param_1;
}



// FUNCTION 147dea0ea FUN_147dea0ea body=140 status=ok
// SIG undefined FUN_147dea0ea(void)

void FUN_147dea0ea(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14047c1fc(param_1,&local_34);
  if (cVar1 != '\0') {
    iVar2 = 0;
    do {
      if (local_34 == param_2 && iVar2 == 0) break;
      switch(local_34) {
      case 0:
      case 2:
        iVar2 = iVar2 + 1;
        break;
      case 1:
      case 3:
        iVar2 = iVar2 + -1;
        break;
      case 8:
        goto switchD_147dea13e_caseD_8;
      }
      cVar1 = FUN_14047c1fc(param_1,&local_34);
    } while (cVar1 != '\0');
  }
switchD_147dea13e_caseD_8:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dea178 FUN_147dea178 body=86 status=ok
// SIG undefined FUN_147dea178(void)

void FUN_147dea178(longlong *param_1,undefined8 *param_2)

{
  wchar_t *_Str;
  uint uVar1;
  size_t sVar2;
  
  _Str = (wchar_t *)*param_2;
  if (_Str == (wchar_t *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 1);
    if ((int)uVar1 < 1) {
      if (uVar1 == 0xffffffff) {
        sVar2 = wcslen(_Str);
        uVar1 = (uint)sVar2;
      }
    }
    else if (_Str[uVar1 - 1] == L'\0') {
      uVar1 = uVar1 - 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147dea1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,_Str,(longlong)(int)uVar1 * 2);
  return;
}



// FUNCTION 147dea306 FUN_147dea306 body=366 status=ok
// SIG undefined FUN_147dea306(void)

void FUN_147dea306(longlong *param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  wchar_t *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = L"\r\n";
  local_40 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (wchar_t *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (wchar_t *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = L"false";
  if (param_3 != 0) {
    local_48 = L"true";
  }
  local_40 = param_3 ^ 5;
  FUN_147dea178(param_1[1],&local_48);
  *(uint *)(param_1 + 4) = 10 - (uint)param_3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dea476 FUN_147dea476 body=366 status=ok
// SIG undefined FUN_147dea476(void)

void FUN_147dea476(longlong *param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  wchar_t *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = L"\r\n";
  local_40 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (wchar_t *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (wchar_t *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = L"false";
  if (param_3 != 0) {
    local_48 = L"true";
  }
  local_40 = param_3 ^ 5;
  FUN_147dea178(param_1[1],&local_48);
  *(uint *)(param_1 + 4) = 10 - (uint)param_3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dea6dc FUN_147dea6dc body=362 status=ok
// SIG undefined FUN_147dea6dc(void)

void FUN_147dea6dc(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178(param_1[1]);
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_40 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_40 = 0;
  }
  local_48 = (undefined1 *)*param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dea848 FUN_147dea848 body=362 status=ok
// SIG undefined FUN_147dea848(void)

void FUN_147dea848(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178(param_1[1]);
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_40 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_40 = 0;
  }
  local_48 = (undefined1 *)*param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deab3e FUN_147deab3e body=433 status=ok
// SIG undefined FUN_147deab3e(void)

void FUN_147deab3e(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deacf0 FUN_147deacf0 body=433 status=ok
// SIG undefined FUN_147deacf0(void)

void FUN_147deacf0(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deafb8 FUN_147deafb8 body=330 status=ok
// SIG undefined FUN_147deafb8(void)

void FUN_147deafb8(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  }
  local_58 = &DAT_149e02010;
  local_50 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_58 = (undefined1 *)CONCAT62(local_58._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_58,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58 = (undefined1 *)*param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  FUN_147deb250(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deb104 FUN_147deb104 body=330 status=ok
// SIG undefined FUN_147deb104(void)

void FUN_147deb104(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  }
  local_58 = &DAT_149e02010;
  local_50 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_58 = (undefined1 *)CONCAT62(local_58._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_58,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58 = (undefined1 *)*param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  FUN_147deb250(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deb250 FUN_147deb250 body=168 status=ok
// SIG undefined FUN_147deb250(void)

void FUN_147deb250(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"%.17g");
  uVar1 = local_20 - 1;
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
    uVar1 = 0;
  }
  uVar2 = 0;
  if (((puVar3 != (undefined2 *)0x0) && (uVar2 = uVar1, 0 < (int)uVar1)) && (puVar3[uVar1 - 1] == 0)
     ) {
    uVar2 = uVar1 - 1;
  }
  (**(code **)(*param_1 + 0x170))(param_1,puVar3,(longlong)(int)uVar2 * 2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deb410 FUN_147deb410 body=330 status=ok
// SIG undefined FUN_147deb410(void)

void FUN_147deb410(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  }
  local_58 = &DAT_149e02010;
  local_50 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_58 = (undefined1 *)CONCAT62(local_58._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_58,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58 = (undefined1 *)*param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  FUN_147deb6a8(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deb55c FUN_147deb55c body=330 status=ok
// SIG undefined FUN_147deb55c(void)

void FUN_147deb55c(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  }
  local_58 = &DAT_149e02010;
  local_50 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_58 = (undefined1 *)CONCAT62(local_58._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_58,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58 = (undefined1 *)*param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  FUN_147deb6a8(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deb6a8 FUN_147deb6a8 body=168 status=ok
// SIG undefined FUN_147deb6a8(void)

void FUN_147deb6a8(longlong *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,&DAT_149e14292,(double)param_2);
  uVar1 = local_20 - 1;
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
    uVar1 = 0;
  }
  uVar2 = 0;
  if (((puVar3 != (undefined2 *)0x0) && (uVar2 = uVar1, 0 < (int)uVar1)) && (puVar3[uVar1 - 1] == 0)
     ) {
    uVar2 = uVar1 - 1;
  }
  (**(code **)(*param_1 + 0x170))(param_1,puVar3,(longlong)(int)uVar2 * 2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deb8da FUN_147deb8da body=432 status=ok
// SIG undefined FUN_147deb8da(void)

void FUN_147deb8da(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",(longlong)param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147deba8c FUN_147deba8c body=432 status=ok
// SIG undefined FUN_147deba8c(void)

void FUN_147deba8c(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",(longlong)param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147debdc8 FUN_147debdc8 body=433 status=ok
// SIG undefined FUN_147debdc8(void)

void FUN_147debdc8(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",(longlong)param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147debf7a FUN_147debf7a body=433 status=ok
// SIG undefined FUN_147debf7a(void)

void FUN_147debf7a(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",(longlong)param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dec2b6 FUN_147dec2b6 body=433 status=ok
// SIG undefined FUN_147dec2b6(void)

void FUN_147dec2b6(longlong *param_1,undefined8 *param_2,short param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",(longlong)param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dec468 FUN_147dec468 body=433 status=ok
// SIG undefined FUN_147dec468(void)

void FUN_147dec468(longlong *param_1,undefined8 *param_2,short param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",(longlong)param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dec7a4 FUN_147dec7a4 body=433 status=ok
// SIG undefined FUN_147dec7a4(void)

void FUN_147dec7a4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dec956 FUN_147dec956 body=433 status=ok
// SIG undefined FUN_147dec956(void)

void FUN_147dec956(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147decc92 FUN_147decc92 body=433 status=ok
// SIG undefined FUN_147decc92(void)

void FUN_147decc92(longlong *param_1,undefined8 *param_2,undefined2 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dece44 FUN_147dece44 body=433 status=ok
// SIG undefined FUN_147dece44(void)

void FUN_147dece44(longlong *param_1,undefined8 *param_2,undefined2 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ded17e FUN_147ded17e body=432 status=ok
// SIG undefined FUN_147ded17e(void)

void FUN_147ded17e(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%llu",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ded330 FUN_147ded330 body=432 status=ok
// SIG undefined FUN_147ded330(void)

void FUN_147ded330(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%llu",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ded66c FUN_147ded66c body=433 status=ok
// SIG undefined FUN_147ded66c(void)

void FUN_147ded66c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%llu",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ded81e FUN_147ded81e body=433 status=ok
// SIG undefined FUN_147ded81e(void)

void FUN_147ded81e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%llu",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_147dea178(param_1[1],&local_a8);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ded9d0 FUN_147ded9d0 body=34 status=ok
// SIG undefined FUN_147ded9d0(void)

void FUN_147ded9d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab333f0;
  return;
}



// FUNCTION 147ded9f2 FUN_147ded9f2 body=31 status=ok
// SIG undefined FUN_147ded9f2(void)

undefined8 FUN_147ded9f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147deda2e FUN_147deda2e body=93 status=ok
// SIG undefined FUN_147deda2e(void)

void FUN_147deda2e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab33380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147deda8c FUN_147deda8c body=126 status=ok
// SIG undefined FUN_147deda8c(void)

void FUN_147deda8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab33380;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dedafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dedb16 FUN_147dedb16 body=21 status=ok
// SIG undefined FUN_147dedb16(void)

undefined8 FUN_147dedb16(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147dedb2c FUN_147dedb2c body=29 status=ok
// SIG undefined FUN_147dedb2c(void)

undefined8 FUN_147dedb2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dedb52 FUN_147dedb52 body=132 status=ok
// SIG undefined FUN_147dedb52(void)

void FUN_147dedb52(longlong param_1,int param_2)

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



// FUNCTION 147dedbd8 FUN_147dedbd8 body=132 status=ok
// SIG undefined FUN_147dedbd8(void)

void FUN_147dedbd8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dedc5d FUN_147dedc5d body=520 status=ok
// SIG undefined FUN_147dedc5d(void)

longlong * FUN_147dedc5d(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = *(longlong *)(param_2 + 0x20);
  puVar9 = (ulonglong *)((longlong)*(int *)(lVar3 + 0x44) + *(longlong *)(param_2 + 0x18));
  bVar2 = *(byte *)(lVar3 + 0x70);
  (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
  lVar14 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x78) + 0x34);
  uVar7 = *(uint *)(param_2 + 0x38);
  if (uVar7 == 0xffffffff) {
    iVar8 = 1;
  }
  else {
    iVar8 = (int)puVar9[1];
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if (iVar8 == 0) goto LAB_147dedcc0;
  }
  FUN_147dede66(param_1,iVar8);
  uVar7 = *(uint *)(param_2 + 0x38);
  if (uVar7 == 0xffffffff) {
    uVar10 = (ulonglong)(int)puVar9[1];
    if ((longlong)uVar10 < 1) {
      return param_1;
    }
    lVar15 = (uVar10 - 1) * lVar14;
    do {
      if ((longlong)uVar10 <= (longlong)(int)puVar9[1]) {
        if ((bVar2 & 1) == 0) {
          uVar11 = *puVar9;
        }
        else {
          uVar11 = *puVar9;
          if ((uVar11 & 1) != 0) {
            uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar9;
          }
        }
        lVar12 = *(longlong *)(lVar3 + 0x78);
        uVar4 = *(undefined8 *)(lVar12 + 8);
        iVar8 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
          FUN_147dedbd8(param_1,iVar8);
        }
        lVar5 = *param_1;
        lVar13 = (longlong)iVar8 * 0x40;
        *(undefined1 *)(lVar5 + lVar13) = 0;
        puVar1 = (undefined8 *)(lVar5 + 8 + lVar13);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(ulonglong *)(lVar5 + 0x18 + lVar13) = uVar11 + lVar15;
        *(longlong *)(lVar5 + 0x20 + lVar13) = lVar12;
        *(undefined8 *)(lVar5 + 0x28 + lVar13) = 0;
        *(undefined8 *)(lVar5 + 0x30 + lVar13) = uVar4;
        *(undefined8 *)(lVar5 + 0x38 + lVar13) = 0xffffffff;
      }
      lVar15 = lVar15 - lVar14;
      bVar6 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar6);
    return param_1;
  }
LAB_147dedcc0:
  if ((-1 < (int)uVar7) && ((int)uVar7 < (int)puVar9[1])) {
    lVar3 = *(longlong *)(lVar3 + 0x78);
    if ((bVar2 & 1) == 0) {
      uVar10 = *puVar9;
    }
    else {
      uVar10 = *puVar9;
      if ((uVar10 & 1) != 0) {
        uVar10 = (longlong)puVar9 + ((longlong)uVar10 >> 0x18);
      }
    }
    uVar4 = *(undefined8 *)(lVar3 + 8);
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_147dedbd8(param_1,iVar8);
    }
    lVar15 = *param_1;
    lVar12 = (longlong)iVar8 * 0x40;
    *(undefined1 *)(lVar15 + lVar12) = 0;
    puVar1 = (undefined8 *)(lVar15 + 8 + lVar12);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(ulonglong *)(lVar15 + 0x18 + lVar12) = (ulonglong)uVar7 * lVar14 + uVar10;
    *(longlong *)(lVar15 + 0x20 + lVar12) = lVar3;
    *(undefined8 *)(lVar15 + 0x28 + lVar12) = 0;
    *(undefined8 *)(lVar15 + 0x30 + lVar12) = uVar4;
    *(undefined8 *)(lVar15 + 0x38 + lVar12) = 0x1ffffffff;
  }
  return param_1;
}



// FUNCTION 147dede66 FUN_147dede66 body=95 status=ok
// SIG undefined FUN_147dede66(void)

void FUN_147dede66(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 147dedec5 FUN_147dedec5 body=674 status=ok
// SIG undefined FUN_147dedec5(void)

longlong * FUN_147dedec5(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(longlong *)(param_2 + 0x20);
  lVar10 = (longlong)*(int *)(lVar4 + 0x44) + *(longlong *)(param_2 + 0x18);
  bVar3 = *(byte *)(lVar4 + 0x98);
  local_80 = *(undefined8 *)(lVar4 + 0x70);
  uStack_78 = *(undefined8 *)(lVar4 + 0x78);
  local_68 = *(undefined4 *)(lVar4 + 0x80);
  uStack_64 = *(undefined4 *)(lVar4 + 0x84);
  uStack_60 = *(undefined4 *)(lVar4 + 0x88);
  uStack_5c = *(undefined4 *)(lVar4 + 0x8c);
  local_58 = *(undefined8 *)(lVar4 + 0x90);
  iVar8 = *(int *)(param_2 + 0x38);
  local_70 = lVar10;
  local_50 = bVar3;
  if ((bVar3 & 1) == 0) {
    lVar6 = 0x34;
    if (iVar8 == -1) {
      FUN_147dede66(param_1,1);
      iVar8 = *(int *)(param_2 + 0x38);
      if (iVar8 == -1) {
LAB_147dedf78:
        lVar6 = 0x34;
        goto LAB_147dedf7d;
      }
    }
    else {
LAB_147dee032:
      iVar7 = *(int *)(lVar10 + 8) - *(int *)(lVar10 + lVar6);
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (iVar7 != 0) {
        FUN_147dede66(param_1);
        iVar8 = *(int *)(param_2 + 0x38);
        if (iVar8 == -1) {
          lVar6 = 0x24;
          if ((bVar3 & 1) == 0) goto LAB_147dedf78;
          goto LAB_147dedf7d;
        }
      }
    }
LAB_147dee046:
    local_c0 = iVar8;
    cVar5 = FUN_1446ec082(&local_80);
    if (cVar5 != '\0') {
      local_d0 = 1;
      local_d8 = param_3;
      FUN_147de1e9b(&local_c0,&local_80,lVar4,*(undefined4 *)(param_2 + 0x38));
      iVar8 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
        FUN_147dedbd8(param_1,iVar8);
      }
      lVar4 = *param_1;
      lVar10 = (longlong)iVar8 * 0x40;
      puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar10);
      *puVar2 = local_90;
      puVar2[1] = uStack_88;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar10);
      *puVar2 = local_a0;
      puVar2[1] = uStack_98;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar10);
      *puVar2 = local_b0;
      puVar2[1] = uStack_a8;
      piVar1 = (int *)(lVar4 + lVar10);
      *piVar1 = local_c0;
      piVar1[1] = iStack_bc;
      piVar1[2] = iStack_b8;
      piVar1[3] = iStack_b4;
    }
  }
  else {
    lVar6 = 0x24;
    if (iVar8 != -1) goto LAB_147dee032;
    FUN_147dede66(param_1,1);
    iVar8 = *(int *)(param_2 + 0x38);
    if (iVar8 != -1) goto LAB_147dee046;
    lVar6 = 0x24;
LAB_147dedf7d:
    iVar8 = *(int *)(lVar10 + 8) - *(int *)(lVar10 + lVar6);
    if (iVar8 != 0 && *(int *)(lVar10 + lVar6) <= *(int *)(lVar10 + 8)) {
      uVar9 = iVar8 + 1;
      do {
        local_c0 = uVar9 - 2;
        cVar5 = FUN_1446ec082(&local_80,&local_c0);
        if (cVar5 != '\0') {
          local_d0 = 0;
          local_d8 = param_3;
          FUN_147de1e9b(&local_c0,&local_80,lVar4,uVar9 - 2);
          iVar8 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
            FUN_147dedbd8(param_1,iVar8);
          }
          lVar10 = *param_1;
          lVar6 = (longlong)iVar8 * 0x40;
          puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar6);
          *puVar2 = local_90;
          puVar2[1] = uStack_88;
          puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar6);
          *puVar2 = local_a0;
          puVar2[1] = uStack_98;
          puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar6);
          *puVar2 = local_b0;
          puVar2[1] = uStack_a8;
          piVar1 = (int *)(lVar10 + lVar6);
          *piVar1 = local_c0;
          piVar1[1] = iStack_bc;
          piVar1[2] = iStack_b8;
          piVar1[3] = iStack_b4;
        }
        uVar9 = uVar9 - 1;
      } while (1 < uVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147dee169 FUN_147dee169 body=547 status=ok
// SIG undefined FUN_147dee169(void)

longlong * FUN_147dee169(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *(longlong *)(param_2 + 0x20);
  plVar11 = (longlong *)((longlong)*(int *)(lVar2 + 0x44) + *(longlong *)(param_2 + 0x18));
  lVar14 = (longlong)*(int *)(lVar2 + 0x88);
  uVar7 = *(uint *)(param_2 + 0x38);
  if (uVar7 == 0xffffffff) {
    iVar10 = 1;
  }
  else {
    iVar10 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (iVar10 == 0) goto LAB_147dee1bb;
  }
  FUN_147dede66(param_1,iVar10);
  uVar7 = *(uint *)(param_2 + 0x38);
  if (uVar7 == 0xffffffff) {
    uVar7 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
    if (uVar7 == 0 || (int)plVar11[1] < *(int *)((longlong)plVar11 + 0x34)) {
      return param_1;
    }
    lVar15 = ((ulonglong)uVar7 - 1) * lVar14;
    uVar8 = (ulonglong)uVar7;
    do {
      if ((longlong)uVar8 <= (longlong)(int)plVar11[5]) {
        plVar9 = (longlong *)plVar11[4];
        if ((longlong *)plVar11[4] == (longlong *)0x0) {
          plVar9 = plVar11 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + (uVar8 - 1 >> 5 & 0x7ffffff) * 4) >>
             ((byte)((char)uVar8 - 1) & 0x1f) & 1) != 0) {
          if ((int)plVar11[1] == *(int *)((longlong)plVar11 + 0x34)) {
            lVar12 = 0;
          }
          else {
            lVar12 = *plVar11 + lVar15;
          }
          lVar4 = *(longlong *)(lVar2 + 0x70);
          uVar3 = *(undefined8 *)(lVar4 + 8);
          iVar10 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
            FUN_147dedbd8(param_1,iVar10);
          }
          lVar5 = *param_1;
          lVar13 = (longlong)iVar10 * 0x40;
          *(undefined1 *)(lVar5 + lVar13) = 0;
          puVar1 = (undefined8 *)(lVar5 + 8 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(longlong *)(lVar5 + 0x18 + lVar13) = lVar12;
          *(longlong *)(lVar5 + 0x20 + lVar13) = lVar4;
          *(undefined8 *)(lVar5 + 0x28 + lVar13) = 0;
          *(undefined8 *)(lVar5 + 0x30 + lVar13) = uVar3;
          *(undefined8 *)(lVar5 + 0x38 + lVar13) = 0xffffffff;
        }
      }
      lVar15 = lVar15 - lVar14;
      bVar6 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar6);
    return param_1;
  }
LAB_147dee1bb:
  if ((-1 < (int)uVar7) && ((int)uVar7 < (int)plVar11[5])) {
    plVar9 = plVar11 + 2;
    if ((longlong *)plVar11[4] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar11[4];
    }
    if ((*(uint *)((longlong)plVar9 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x70);
      if ((int)plVar11[1] == *(int *)((longlong)plVar11 + 0x34)) {
        lVar14 = 0;
      }
      else {
        lVar14 = (int)uVar7 * lVar14 + *plVar11;
      }
      uVar3 = *(undefined8 *)(lVar2 + 8);
      iVar10 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
        FUN_147dedbd8(param_1,iVar10);
      }
      lVar15 = *param_1;
      lVar12 = (longlong)iVar10 * 0x40;
      *(undefined1 *)(lVar15 + lVar12) = 0;
      puVar1 = (undefined8 *)(lVar15 + 8 + lVar12);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(longlong *)(lVar15 + 0x18 + lVar12) = lVar14;
      *(longlong *)(lVar15 + 0x20 + lVar12) = lVar2;
      *(undefined8 *)(lVar15 + 0x28 + lVar12) = 0;
      *(undefined8 *)(lVar15 + 0x30 + lVar12) = uVar3;
      *(undefined8 *)(lVar15 + 0x38 + lVar12) = 0x1ffffffff;
    }
  }
  return param_1;
}



// FUNCTION 147dee39c FUN_147dee39c body=77 status=ok
// SIG undefined FUN_147dee39c(void)

void FUN_147dee39c(undefined8 param_1)

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



// FUNCTION 147dee3ea FUN_147dee3ea body=75 status=ok
// SIG undefined FUN_147dee3ea(void)

undefined8 * FUN_147dee3ea(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_147dee9aa(param_2,iVar1);
    FUN_147deea13(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 147dee436 FUN_147dee436 body=301 status=ok
// SIG undefined FUN_147dee436(void)

void FUN_147dee436(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  FUN_145b0419f(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_147deea94(param_3);
  }
  iVar4 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar12 = 0;
    do {
      if ((*(longlong *)(lVar6 + lVar12) <= *param_2) &&
         (*param_2 < *(longlong *)(lVar6 + 8 + lVar12))) {
        iVar5 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
          FUN_147deeac4(param_3,iVar5);
        }
        puVar1 = (undefined4 *)(lVar6 + lVar12);
        lVar7 = *param_3;
        lVar11 = (longlong)iVar5 * 0x30;
        lVar2 = lVar7 + lVar11;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (undefined4 *)(lVar7 + lVar11);
        *puVar3 = *puVar1;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        *(undefined8 *)(lVar7 + 0x10 + lVar11) = 0;
        iVar5 = *(int *)(lVar6 + 0x18 + lVar12);
        _Src = *(void **)(lVar6 + 0x10 + lVar12);
        *(int *)(lVar7 + 0x18 + lVar11) = iVar5;
        if ((longlong)iVar5 == 0) {
          *(undefined4 *)(lVar2 + 0x1c) = 0;
        }
        else {
          puVar13 = (undefined8 *)(lVar7 + lVar11 + 0x10);
          FUN_1446dd670(puVar13,iVar5,0);
          memcpy((void *)*puVar13,_Src,(longlong)iVar5 * 2);
        }
        puVar1 = (undefined4 *)(lVar6 + 0x20 + lVar12);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        *(undefined4 *)(lVar2 + 0x20) = *puVar1;
        *(undefined4 *)(lVar2 + 0x24) = uVar8;
        *(undefined4 *)(lVar2 + 0x28) = uVar9;
        *(undefined4 *)(lVar2 + 0x2c) = uVar10;
      }
      lVar12 = lVar12 + 0x30;
    } while ((longlong)iVar4 * 0x30 != lVar12);
  }
  return;
}



// FUNCTION 147dee56e FUN_147dee56e body=77 status=ok
// SIG undefined FUN_147dee56e(void)

void FUN_147dee56e(undefined8 param_1)

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



// FUNCTION 147dee5bc FUN_147dee5bc body=362 status=ok
// SIG undefined FUN_147dee5bc(void)

undefined8 FUN_147dee5bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = FUN_140d5712e();
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  plVar10 = *(longlong **)(lVar5 + 0x30);
  if (plVar10 == (longlong *)0x0) {
    uVar6 = FUN_14142d806(uVar6);
    FUN_1406db95e(lVar5,&local_48,uVar6);
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    uVar6 = FUN_14142d806(uVar6);
    FUN_1406db95e(lVar5,&local_48,uVar6);
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((longlong)local_40 != 0) {
    plVar10 = (longlong *)(param_1 + 0x30);
    lVar5 = (longlong)local_40 << 4;
    puVar7 = local_48;
    do {
      puVar9 = &DAT_149dfb77a;
      iVar4 = 0;
      if (*(int *)(puVar7 + 1) != 0) {
        puVar9 = (undefined2 *)*puVar7;
        iVar4 = *(int *)(puVar7 + 1) + -1;
      }
      uVar3 = FUN_144a49b4a(iVar4,puVar9);
      iVar4 = FUN_147deeb58(plVar10,uVar3,puVar7);
      if (iVar4 != -1) {
        iVar4 = *(int *)(puVar7 + 1);
        if (iVar4 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = (undefined2 *)*puVar7;
        }
        uVar12 = 0;
        uVar8 = (ulonglong)(iVar4 - 1);
        if (iVar4 == 0) {
          uVar8 = uVar12;
        }
        uVar3 = FUN_144a49b4a(uVar8,puVar9);
        iVar4 = FUN_147deeb58(plVar10,uVar3,puVar7);
        if (iVar4 != -1) {
          uVar12 = (longlong)iVar4 * 0x20 + *plVar10;
        }
        puVar7 = (undefined8 *)(uVar12 + 0x10);
        if (uVar12 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        uVar11 = *puVar7;
        break;
      }
      puVar7 = puVar7 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  FUN_1447a1747(local_48,local_40);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dee728 FUN_147dee728 body=51 status=ok
// SIG undefined FUN_147dee728(void)

undefined8 * FUN_147dee728(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_147dee5bc();
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147dee75c FUN_147dee75c body=100 status=ok
// SIG undefined FUN_147dee75c(void)

void FUN_147dee75c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  
  FUN_145b0419f(*param_3,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_147deea94(param_3);
  }
  plVar1 = (longlong *)FUN_147dee5bc(param_1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dee7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x2a8));
    return;
  }
  return;
}



// FUNCTION 147dee7c0 FUN_147dee7c0 body=54 status=ok
// SIG undefined FUN_147dee7c0(void)

undefined8 * FUN_147dee7c0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/Overlay/Public/Overlays.h",0x39,L"Pure virtual not implemented (%s)",
                L"UOverlays::GetAllOverlays");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147dee7f6 FUN_147dee7f6 body=41 status=ok
// SIG undefined FUN_147dee7f6(void)

void FUN_147dee7f6(void)

{
  FUN_140033559(".\\Runtime/Overlay/Public/Overlays.h",0x41,L"Pure virtual not implemented (%s)",
                L"UOverlays::GetAllOverlays");
  return;
}



// FUNCTION 147dee864 FUN_147dee864 body=98 status=ok
// SIG undefined FUN_147dee864(void)

undefined1 FUN_147dee864(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      uVar6 = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      lVar7 = lVar7 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147dee8ee FUN_147dee8ee body=59 status=ok
// SIG undefined FUN_147dee8ee(void)

undefined8 FUN_147dee8ee(longlong *param_1)

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



// FUNCTION 147dee934 FUN_147dee934 body=38 status=ok
// SIG undefined FUN_147dee934(void)

void FUN_147dee934(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147dee9aa FUN_147dee9aa body=105 status=ok
// SIG undefined FUN_147dee9aa(void)

undefined8 FUN_147dee9aa(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x30)) {
    uVar5 = uVar2 / 0x30 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x30,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147deea13 FUN_147deea13 body=129 status=ok
// SIG undefined FUN_147deea13(void)

void FUN_147deea13(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(param_1 + 0x10);
  do {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(puVar6 + -2) = *param_2;
    *(undefined4 *)((longlong)puVar6 + -0xc) = uVar2;
    *(undefined4 *)(puVar6 + -1) = uVar3;
    *(undefined4 *)((longlong)puVar6 + -4) = uVar4;
    *puVar6 = 0;
    iVar1 = param_2[6];
    _Src = *(void **)(param_2 + 4);
    *(int *)(puVar6 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar6,iVar1,0);
      memcpy((void *)*puVar6,_Src,(longlong)iVar1 * 2);
    }
    uVar5 = *(undefined8 *)(param_2 + 10);
    puVar6[2] = *(undefined8 *)(param_2 + 8);
    puVar6[3] = uVar5;
    param_2 = param_2 + 0xc;
    puVar6 = puVar6 + 6;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147deea94 FUN_147deea94 body=48 status=ok
// SIG undefined FUN_147deea94(void)

void FUN_147deea94(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147deeac4 FUN_147deeac4 body=147 status=ok
// SIG undefined FUN_147deeac4(void)

void FUN_147deeac4(longlong param_1,int param_2)

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



// FUNCTION 147deeb58 FUN_147deeb58 body=139 status=ok
// SIG undefined FUN_147deeb58(void)

int FUN_147deeb58(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        iVar2 = *(int *)(lVar4 + 8 + lVar5);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147deebe4 FUN_147deebe4 body=36 status=ok
// SIG undefined FUN_147deebe4(void)

undefined8 FUN_147deebe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147deec24 FUN_147deec24 body=93 status=ok
// SIG undefined FUN_147deec24(void)

void FUN_147deec24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab34470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147deec82 FUN_147deec82 body=123 status=ok
// SIG undefined FUN_147deec82(void)

void FUN_147deec82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab34470;
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



// FUNCTION 147deecfe FUN_147deecfe body=21 status=ok
// SIG undefined FUN_147deecfe(void)

undefined8 FUN_147deecfe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147deed1c FUN_147deed1c body=125 status=ok
// SIG undefined FUN_147deed1c(void)

void FUN_147deed1c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_147deed9a(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147deed9a FUN_147deed9a body=142 status=ok
// SIG undefined FUN_147deed9a(void)

void FUN_147deed9a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 147deee28 FUN_147deee28 body=62 status=ok
// SIG undefined FUN_147deee28(void)

void FUN_147deee28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_1447a1747(lVar1,*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147deee66 FUN_147deee66 body=230 status=ok
// SIG undefined FUN_147deee66(void)

undefined8 * FUN_147deee66(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 147deef4e FUN_147deef4e body=34 status=ok
// SIG undefined FUN_147deef4e(void)

void FUN_147deef4e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab346e0;
  return;
}



// FUNCTION 147deef70 FUN_147deef70 body=36 status=ok
// SIG undefined FUN_147deef70(void)

undefined8 FUN_147deef70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147deefb0 FUN_147deefb0 body=93 status=ok
// SIG undefined FUN_147deefb0(void)

void FUN_147deefb0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab34670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147def00e FUN_147def00e body=123 status=ok
// SIG undefined FUN_147def00e(void)

void FUN_147def00e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab34670;
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



// FUNCTION 147def096 FUN_147def096 body=21 status=ok
// SIG undefined FUN_147def096(void)

undefined8 FUN_147def096(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147def0ac FUN_147def0ac body=34 status=ok
// SIG undefined FUN_147def0ac(void)

undefined8 FUN_147def0ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147def0d2 FUN_147def0d2 body=284 status=ok
// SIG undefined FUN_147def0d2(void)

void FUN_147def0d2(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147def1f0 FUN_147def1f0 body=122 status=ok
// SIG undefined FUN_147def1f0(void)

longlong FUN_147def1f0(longlong param_1,longlong param_2)

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
    FUN_147def26a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147def26a FUN_147def26a body=202 status=ok
// SIG undefined FUN_147def26a(void)

undefined8 * FUN_147def26a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14062ea76(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_147def334(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147def334 FUN_147def334 body=103 status=ok
// SIG undefined FUN_147def334(void)

undefined8 * FUN_147def334(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 147def3c0 FUN_147def3c0 body=257 status=ok
// SIG undefined FUN_147def3c0(void)

void FUN_147def3c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 != (longlong *)0x0) {
    uVar5 = *(uint *)(param_1 + 200);
    if (uVar5 != *(uint *)(param_1 + 0xd8)) {
      iVar1 = *(int *)(param_1 + 0xdc);
      iVar3 = 0;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        FUN_14481578e(param_1 + 0xd0);
        uVar5 = *(uint *)(param_1 + 200);
        iVar3 = *(int *)(param_1 + 0xd8);
        iVar1 = *(int *)(param_1 + 0xdc);
      }
      *(uint *)(param_1 + 0xd8) = uVar5 + iVar3;
      if ((uint)(iVar1 - iVar3) < uVar5) {
        FUN_1446f48e2(param_1 + 0xd0);
      }
      memset((void *)((longlong)iVar3 * 4 + *(longlong *)(param_1 + 0xd0)),0,
             (longlong)(int)uVar5 << 2);
      uVar5 = *(uint *)(param_1 + 200);
    }
    if (0 < (int)uVar5) {
      lVar4 = 0;
      lVar6 = 0;
      do {
        uVar2 = (**(code **)(*param_2 + 0x310))(param_2);
        iVar1 = FUN_144a750a0(uVar2,*(longlong *)(param_1 + 0xc0) + lVar4);
        if (iVar1 == -1) {
          iVar1 = 0;
        }
        *(int *)(*(longlong *)(param_1 + 0xd0) + lVar6 * 4) = iVar1;
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar6 < *(int *)(param_1 + 200));
    }
  }
  return;
}



// FUNCTION 147def4dc FUN_147def4dc body=1704 status=ok
// SIG undefined FUN_147def4dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147def4dc(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong **pplVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 auStack_238 [40];
  longlong *local_210;
  longlong **local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined1 *local_1d4;
  undefined1 *puStack_1cc;
  undefined1 *local_1c4;
  undefined1 *puStack_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 *local_dc;
  undefined1 *puStack_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar8 = FUN_1448c2e86();
  FUN_1417fcbbc(uVar8,&local_70,DAT_14c99d400);
  if ((longlong)local_68 != 0) {
    puVar1 = local_70 + local_68;
    local_210 = (longlong *)(param_1 + 0x50);
    local_200 = param_1 + 0x88;
    puVar17 = local_70;
    do {
      (*(code *)**(undefined8 **)*puVar17)((undefined8 *)*puVar17,&local_1f8);
      plVar13 = local_1f8;
      if (local_1f8 != (longlong *)0x0) {
        lVar9 = FUN_14010780e();
        plVar19 = local_1f8;
        if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= (int)plVar13[7])) &&
            (*(longlong *)(plVar13[6] + (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
           (local_1f8 != (longlong *)0x0)) {
          plVar13 = (longlong *)local_1f8[0x22];
          if (plVar13 == (longlong *)0x0) {
            FUN_140aa6c08(local_1f8);
            plVar13 = (longlong *)plVar19[0x22];
          }
          (**(code **)(*plVar13 + 0x2c8))(plVar13,&local_80);
          if ((longlong)local_78 != 0) {
            plVar13 = local_80 + local_78;
            lVar9 = local_200;
            plVar19 = local_80;
            do {
              lVar16 = *plVar19;
              if ((lVar16 != 0 & DAT_14c950c29) == 1) {
                FUN_14689c22e();
LAB_147def619:
                lVar10 = FUN_145985ee2();
                if ((lVar10 == 0) || (*(int *)(lVar16 + 0x38) < *(int *)(lVar10 + 0x38))) {
                  bVar4 = false;
                  goto LAB_147def632;
                }
                bVar4 = false;
                lVar11 = 0;
                if (*(longlong *)
                     (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                    lVar10 + 0x30) {
                  lVar11 = lVar16;
                }
              }
              else {
                if (lVar16 != 0) goto LAB_147def619;
                bVar4 = true;
LAB_147def632:
                lVar11 = 0;
              }
              local_88 = *(longlong *)(lVar11 + 0x18);
              if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
                uVar3 = (uint)((ulonglong)local_88 >> 0x10);
                uVar18 = (uint)local_88 & 0xffff;
                lVar10 = *(longlong *)(param_1 + 0x90);
                if (*(longlong *)(param_1 + 0x90) == 0) {
                  lVar10 = lVar9;
                }
                iVar14 = *(int *)(lVar10 + (ulonglong)
                                           (*(int *)(param_1 + 0x98) - 1U &
                                           (int)((ulonglong)local_88 >> 0x20) +
                                           ((uint)local_88 << 0x10 | uVar18) +
                                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar18 >> 4)) * 4);
                if (iVar14 != -1) {
                  do {
                    plVar12 = (longlong *)(*local_210 + (longlong)iVar14 * 0x18);
                    if (*plVar12 == local_88) goto LAB_147def64d;
                    iVar14 = (int)plVar12[2];
                  } while (iVar14 != -1);
                }
              }
              plVar12 = (longlong *)0x0;
LAB_147def64d:
              plVar15 = plVar12 + 1;
              if (plVar12 == (longlong *)0x0) {
                plVar15 = (longlong *)0x0;
              }
              if ((plVar15 == (longlong *)0x0) || (*plVar15 == 0)) {
                uVar8 = _DAT_00000018;
                if (bVar4) {
LAB_147def72a:
                  lVar16 = 0;
                }
                else {
                  lVar9 = FUN_145985ee2();
                  if ((lVar9 == 0) || (*(int *)(lVar16 + 0x38) < *(int *)(lVar9 + 0x38))) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = 0;
                    if (*(longlong *)
                         (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                        lVar9 + 0x30) {
                      lVar10 = lVar16;
                    }
                  }
                  uVar8 = *(undefined8 *)(lVar10 + 0x18);
                  lVar9 = FUN_145985ee2();
                  if ((lVar9 == 0) || (*(int *)(lVar16 + 0x38) < *(int *)(lVar9 + 0x38)))
                  goto LAB_147def72a;
                  if (*(longlong *)
                       (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                      lVar9 + 0x30) {
                    lVar16 = 0;
                  }
                }
                plVar12 = (longlong *)FUN_147defb85(param_1,lVar16,uVar8);
                local_90 = plVar12;
                if (plVar12 != (longlong *)0x0) {
                  lVar9 = FUN_14599316c();
                  if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                      lVar9 + 0x30)) {
                    local_208 = (longlong **)(param_1 + 0x60);
                    local_1f8._0_4_ = 0;
                    local_1f8._4_4_ = 1;
                    local_1e8 = 0xffffffff;
                    iStack_1e4 = 0;
                    uStack_1e0 = 0;
                    if (*(int *)(param_1 + 0x78) == 0) {
                      iVar14 = 0;
                      pplVar5 = local_208;
                    }
                    else {
                      uStack_1f0 = local_208;
                      FUN_1449c0562(&local_1f8);
                      iVar14 = *(int *)(param_1 + 0x78);
                      pplVar5 = uStack_1f0;
                    }
                    uStack_1f0._4_4_ = (undefined4)((ulonglong)pplVar5 >> 0x20);
                    uStack_1f0._0_4_ = SUB84(pplVar5,0);
                    local_b0 = (uint)local_1f8;
                    uStack_ac = local_1f8._4_4_;
                    uStack_a8 = (undefined4)uStack_1f0;
                    uStack_a4 = uStack_1f0._4_4_;
                    local_a0 = CONCAT44(iStack_1e4,local_1e8);
                    uStack_98 = CONCAT44(uStack_1dc,uStack_1e0);
                    local_b8 = local_210;
                    iVar2 = iStack_1e4;
                    if ((iStack_1e4 != iVar14) || (uStack_1f0 = pplVar5, pplVar5 != local_208)) {
                      do {
                        local_c8 = *(undefined8 *)(*local_b8 + (longlong)iVar2 * 0x18);
                        local_c0 = *(longlong **)(*local_b8 + 8 + (longlong)iVar2 * 0x18);
                        uStack_1f0 = pplVar5;
                        if ((DAT_14c950c29 == 1) && (local_c0 != (longlong *)0x0)) {
                          FUN_14689c22e();
                        }
                        if (local_c0 != (longlong *)0x0) {
                          uVar8 = FUN_14599316c();
                          bVar6 = FUN_144a7ca96(&local_c0,uVar8);
                          if ((local_c0 != (longlong *)0x0 & bVar6) == 1) {
                            local_1f8._0_4_ = (uint)local_1f8 & 0xffffff00;
                            local_1f8._4_4_ = 0x3f800000;
                            uStack_1f0._0_4_ = 0x3f800000;
                            uStack_1f0._4_4_ = 0x3f800000;
                            local_1e8 = 0x3f800000;
                            iStack_1e4 = 0x3f800000;
                            uStack_1e0 = 0x3f800000;
                            uStack_1dc = 0x3f800000;
                            uStack_1d8 = 0x3f800000;
                            local_1d4 = &DAT_3f8000003f800000;
                            puStack_1cc = &DAT_3f8000003f800000;
                            local_1c4 = &DAT_3f8000003f800000;
                            puStack_1bc = &DAT_3f8000003f800000;
                            local_1b4 = 0;
                            local_1ac = 0x3f800000;
                            local_1a8 = 0x3fd99999a0000000;
                            local_1a0 = 0x3fd99999a0000000;
                            local_198 = 0x3fd99999a0000000;
                            local_190 = 0x3951b7173dcccccd;
                            local_188 = 0x3951b717;
                            local_180 = 0x3fc99999a0000000;
                            local_178 = 0x3fc99999a0000000;
                            local_170 = 0x3fc99999a0000000;
                            local_168 = 0x3fc99999a0000000;
                            local_160 = 0x3fc99999a0000000;
                            local_158 = 0x3fc99999a0000000;
                            local_150 = 0x3ff0000000000000;
                            local_148 = 0x3ff0000000000000;
                            local_140 = 0x3ff0000000000000;
                            local_138 = 0x3ff0000000000000;
                            local_130 = 0x3ff0000000000000;
                            local_128 = 0x3ff0000000000000;
                            local_120 = 0x3ff0000000000000;
                            local_118 = 0x3ff0000000000000;
                            local_110 = 0x3ff0000000000000;
                            local_108 = 0x42c8000042f00000;
                            local_100 = 0x3f800000;
                            local_e8 = DAT_14c8464f0;
                            local_f8 = (undefined4)DAT_14c8464e0;
                            uStack_f4 = DAT_14c8464e0._4_4_;
                            uStack_f0 = (undefined4)DAT_14c8464e8;
                            uStack_ec = DAT_14c8464e8._4_4_;
                            local_e0 = 0;
                            local_dc = &DAT_3f8000003f800000;
                            puStack_d4 = &DAT_3f8000003f800000;
                            local_cc = 0x3f800000;
                            cVar7 = (**(code **)(*local_c0 + 0x2e0))(local_c0,&local_1f8);
                            if (cVar7 != '\0') {
                              (**(code **)(*plVar12 + 0x2d8))(plVar12,&local_1f8);
                              break;
                            }
                          }
                        }
                        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
                        FUN_1449c0562(&local_b0);
                        iVar2 = local_a0._4_4_;
                        pplVar5 = uStack_1f0;
                      } while (local_b8 != local_210 ||
                               ((longlong **)CONCAT44(uStack_a4,uStack_a8) != local_208 ||
                               local_a0._4_4_ != iVar14));
                    }
                  }
                }
                plVar12 = local_90;
                if (plVar15 == (longlong *)0x0) {
                  local_1f8 = &local_88;
                  uStack_1f0 = &local_90;
                  FUN_147df9aa4(local_210,&local_b8,&local_1f8);
                  lVar9 = local_200;
                }
                else {
                  if ((local_90 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
                    FUN_14689c22e();
                  }
                  *plVar15 = (longlong)plVar12;
                  lVar9 = local_200;
                }
              }
              plVar19 = plVar19 + 1;
            } while (plVar19 != plVar13);
          }
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar1);
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147defb85 FUN_147defb85 body=196 status=ok
// SIG undefined FUN_147defb85(void)

undefined8 FUN_147defb85(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147defd64 FUN_147defd64 body=1900 status=ok
// SIG undefined FUN_147defd64(void)

void FUN_147defd64(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *plStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  longlong *plStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar8 = *(longlong **)(param_1 + 0x20);
  if (plVar8 != (longlong *)0x0) {
    lVar7 = FUN_144a85a6c();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      local_100 = plVar8;
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x4b8))(plVar8);
      iVar6 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      if ((longlong)(int)plVar8[1] == 0) {
        plStack_b8 = local_88;
        local_c0 = (longlong *)0x100000000;
        local_b0._0_4_ = 0xffffffff;
        local_b0._4_4_ = 0;
        uStack_a8 = 0;
      }
      else {
        plVar16 = (longlong *)*plVar8;
        plVar8 = plVar16 + (int)plVar8[1];
        local_f0 = plVar8;
        do {
          lVar7 = *plVar16;
          if (lVar7 != 0 && lVar7 != param_1) {
            lVar9 = FUN_1414cc2e6();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
              uVar14 = (*(int *)(lVar7 + 0x58) - *(int *)(lVar7 + 0x84)) +
                       ((int)uStack_90 - local_64);
              if ((uint)((int)uStack_90 - local_64) < uVar14) {
                if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456acd4b((longlong)(int)uVar14);
                }
                FUN_147df9fbe(&local_98,uVar14);
                iVar6 = 1;
                if (3 < uVar14) {
                  uVar14 = (uVar14 | 1) + 0xe;
                  iVar6 = 0x1f;
                  if (uVar14 != 0) {
                    for (; uVar14 >> iVar6 == 0; iVar6 = iVar6 + -1) {
                    }
                  }
                  iVar6 = 1 << ((byte)iVar6 & 0x1f);
                }
                if ((local_50 == 0) || (local_50 < iVar6)) {
                  local_50 = iVar6;
                  FUN_147df9de4(&local_98);
                }
              }
              plVar2 = (longlong *)(lVar7 + 0x60);
              local_c0 = (longlong *)&DAT_100000000;
              local_b0 = 0xffffffff;
              uStack_a8 = 0;
              plStack_b8 = plVar2;
              if (*(int *)(lVar7 + 0x78) == 0) {
                iVar6 = 0;
              }
              else {
                FUN_1449c0562(&local_c0);
                iVar6 = *(int *)(lVar7 + 0x78);
              }
              plVar15 = (longlong *)(lVar7 + 0x50);
              uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
              local_d0 = local_b0;
              uVar10 = local_d0;
              local_e0 = local_c0;
              plStack_d8 = plStack_b8;
              local_d0._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
              iVar5 = local_d0._4_4_;
              local_e8 = plVar15;
              if ((local_d0._4_4_ != iVar6) || (local_d0 = uVar10, plStack_b8 != plVar2)) {
                do {
                  local_d0 = uVar10;
                  lVar7 = *local_e8;
                  lVar9 = (longlong)iVar5;
                  if (*(longlong *)(lVar7 + 8 + lVar9 * 0x18) != 0) {
                    plVar13 = (longlong *)(lVar9 * 0x18 + 8 + lVar7);
                    uVar10 = FUN_145a73bae();
                    plVar8 = local_f0;
                    local_f8 = plVar13;
                    cVar3 = FUN_144a7ca96(plVar13,uVar10);
                    if ((cVar3 != '\0') && (*local_f8 != 0)) {
                      plVar13 = (longlong *)(lVar9 * 0x18 + lVar7);
                      if ((int)uStack_90 != local_64) {
                        lVar7 = *plVar13;
                        uVar14 = (uint)((ulonglong)lVar7 >> 0x10);
                        uVar11 = (uint)lVar7 & 0xffff;
                        puVar12 = local_58;
                        if (local_58 == (undefined1 *)0x0) {
                          puVar12 = local_60;
                        }
                        iVar5 = *(int *)(puVar12 +
                                        (ulonglong)
                                        (local_50 - 1U &
                                        (int)((ulonglong)lVar7 >> 0x20) +
                                        ((uint)lVar7 << 0x10 | uVar11) +
                                        (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar11 >> 4)) * 4);
                        while (iVar5 != -1) {
                          plVar1 = (longlong *)(local_98 + (longlong)iVar5 * 0x18);
                          if (*plVar1 == lVar7) {
                            if ((plVar1 != (longlong *)0x0) &&
                               (plVar1 != (longlong *)&DAT_fffffffffffffff8)) goto LAB_147df006e;
                            break;
                          }
                          iVar5 = (int)plVar1[2];
                        }
                      }
                      plStack_b8 = local_f8;
                      local_c0 = plVar13;
                      FUN_147dfa15a(&local_98,local_9c,&local_c0);
                    }
                  }
LAB_147df006e:
                  local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
                  FUN_1449c0562(&local_e0);
                  iVar5 = local_d0._4_4_;
                  uVar10 = local_d0;
                } while (local_e8 != plVar15 || (plStack_d8 != plVar2 || local_d0._4_4_ != iVar6));
              }
            }
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar8);
        plStack_b8 = local_88;
        local_c0 = (longlong *)0x100000000;
        local_b0._0_4_ = 0xffffffff;
        local_b0._4_4_ = 0;
        uStack_a8 = 0;
        if (local_70 == 0) {
          iVar6 = 0;
        }
        else {
          FUN_1449c0562(&local_c0);
          iVar6 = local_70;
        }
      }
      local_d0._0_4_ = (uint)local_b0;
      local_d0._4_4_ = local_b0._4_4_;
      uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
      local_e0 = local_c0;
      plStack_d8 = plStack_b8;
      local_e8 = &local_98;
      if ((local_b0._4_4_ != iVar6) || (plStack_b8 != local_88)) {
        do {
          plVar8 = (longlong *)(*local_e8 + (longlong)local_d0._4_4_ * 0x18);
          if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
            lVar7 = *(longlong *)(*local_e8 + (longlong)local_d0._4_4_ * 0x18);
            uVar14 = (uint)((ulonglong)lVar7 >> 0x10);
            uVar11 = (uint)lVar7 & 0xffff;
            lVar9 = *(longlong *)(param_1 + 0x90);
            if (*(longlong *)(param_1 + 0x90) == 0) {
              lVar9 = param_1 + 0x88;
            }
            iVar5 = *(int *)(lVar9 + (ulonglong)
                                     (*(int *)(param_1 + 0x98) - 1U &
                                     (int)((ulonglong)lVar7 >> 0x20) +
                                     ((uint)lVar7 << 0x10 | uVar11) +
                                     (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar11 >> 4)) * 4);
            if (iVar5 != -1) {
              do {
                plVar16 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 0x18);
                if (*plVar16 == lVar7) {
                  if ((plVar16 != (longlong *)0x0) && (plVar16 + 1 != (longlong *)0x0)) {
                    lVar7 = plVar8[1];
                    if (DAT_14c950c29 == '\x01') {
                      if (lVar7 == 0) {
                        lVar7 = 0;
                      }
                      else {
                        FUN_14689c22e();
                        lVar7 = plVar8[1];
                      }
                    }
                    plVar16[1] = lVar7;
                    goto LAB_147df033b;
                  }
                  break;
                }
                iVar5 = (int)plVar16[2];
              } while (iVar5 != -1);
            }
          }
          plStack_b8 = plVar8 + 1;
          local_c0 = plVar8;
          FUN_147dfa15a((longlong *)(param_1 + 0x50),local_9c,&local_c0);
LAB_147df033b:
          local_d0._0_4_ = (uint)local_d0 & ~local_e0._4_4_;
          FUN_1449c0562(&local_e0);
        } while (local_e8 != &local_98 || (plStack_d8 != local_88 || local_d0._4_4_ != iVar6));
      }
      plVar8 = (longlong *)(param_1 + 0x50);
      plVar16 = (longlong *)(param_1 + 0x60);
      local_c0 = (longlong *)&DAT_100000000;
      local_b0 = 0xffffffff;
      uStack_a8 = 0;
      plStack_b8 = plVar16;
      if (*(int *)(param_1 + 0x78) == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_c0);
        iVar6 = *(int *)(param_1 + 0x78);
      }
      plVar2 = local_100;
      uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
      local_d0 = local_b0;
      uVar10 = local_d0;
      local_e0 = local_c0;
      plStack_d8 = plStack_b8;
      local_d0._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
      iVar5 = local_d0._4_4_;
      local_e8 = plVar8;
      if ((local_d0._4_4_ != iVar6) || (local_d0 = uVar10, plStack_b8 != plVar16)) {
        do {
          local_d0 = uVar10;
          if (*(longlong *)(*local_e8 + 8 + (longlong)iVar5 * 0x18) != 0) {
            plVar13 = (longlong *)(*local_e8 + (longlong)iVar5 * 0x18 + 8);
            uVar10 = FUN_145a73bae();
            bVar4 = FUN_144a7ca96(plVar13,uVar10);
            plVar15 = (longlong *)*plVar13;
            if ((plVar15 != (longlong *)0x0 & bVar4) == 1) {
              lVar7 = plVar15[4];
              if (lVar7 != 0) {
                lVar9 = FUN_1414cc2e6();
                lVar7 = *(longlong *)(lVar7 + 0x10);
                if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                    lVar9 + 0x30)) {
                  (**(code **)(*plVar15 + 0x170))(plVar15,0,plVar2,0x30);
                }
              }
              if ((longlong *)plVar15[4] != plVar2) {
                lVar7 = plVar15[3];
                uVar10 = FUN_145a73bae();
                lVar7 = FUN_14092e757(uVar10,plVar15,plVar2,lVar7);
                if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_14689c22e(lVar7);
                }
                *plVar13 = lVar7;
              }
            }
          }
          local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
          FUN_1449c0562(&local_e0);
          iVar5 = local_d0._4_4_;
          uVar10 = local_d0;
        } while (local_e8 != plVar8 || (plStack_d8 != plVar16 || local_d0._4_4_ != iVar6));
      }
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140d7aba0(&local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df04d2 FUN_147df04d2 body=26 status=ok
// SIG undefined FUN_147df04d2(void)

void FUN_147df04d2(undefined8 param_1)

{
  FUN_147def4dc();
  FUN_147defd64(param_1);
  return;
}



// FUNCTION 147df04ec FUN_147df04ec body=21 status=ok
// SIG undefined FUN_147df04ec(void)

void FUN_147df04ec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 147df0520 FUN_147df0520 body=143 status=ok
// SIG undefined FUN_147df0520(void)

void FUN_147df0520(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar1 = *(undefined8 *)(*param_2 + 8);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = uVar1;
  switchD_143c3d4dc::caseD_20();
  uVar1 = FUN_1400d018c(uVar1,param_1 + 0x198);
  FUN_1400d018c(uVar1,param_1 + 0x1a8);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df05b0 FUN_147df05b0 body=138 status=ok
// SIG undefined FUN_147df05b0(void)

void FUN_147df05b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  uVar1 = FUN_1400d018c(param_2,param_1 + 0x198);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    FUN_1400d018c(uVar1,param_1 + 0x1a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df063c FUN_147df063c body=56 status=ok
// SIG undefined FUN_147df063c(void)

void FUN_147df063c(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400337aa();
    FUN_147df0674(param_1 + 0x30,*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147df0674 FUN_147df0674 body=660 status=ok
// SIG undefined FUN_147df0674(void)

void FUN_147df0674(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong *)(param_2 + 0x28) != param_1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *(longlong *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0x34);
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  if (param_1 + 2 != (longlong *)(param_2 + 0x38)) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = *(longlong *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x44);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  if (param_1 + 4 != (longlong *)(param_2 + 0x48)) {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = *(longlong *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x54);
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  if (param_1 + 0x10 != (longlong *)(param_2 + 0x58)) {
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    param_1[0x10] = *(longlong *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 100);
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  if (param_1 + 0x12 != (longlong *)(param_2 + 0x68)) {
    if (param_1[0x12] != 0) {
      FUN_1400020a8();
    }
    param_1[0x12] = *(longlong *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x74);
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x7c);
  FUN_14068ded2(param_1 + 0x14,*(undefined4 *)(param_2 + 0x88));
  iVar1 = *(int *)(param_2 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x80);
    lVar6 = 0;
    do {
      local_60 = *(undefined4 *)(lVar5 + lVar6);
      FUN_144984904(param_1 + 0x14,&local_4c,&local_60,0);
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  FUN_146fddeb8(param_2,&local_60);
  lVar5 = CONCAT44(uStack_5c,local_60);
  if ((longlong)local_58 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar5 + lVar6);
      plVar3 = (longlong *)FUN_146fdde58(param_2,uVar2);
      if (plVar3 != (longlong *)0x0) {
        local_4c = uVar2;
        plVar4 = (longlong *)FUN_147dfa41e(param_1 + 6,uVar2,&local_4c);
        if (plVar4 != plVar3) {
          if (*plVar4 != 0) {
            FUN_1400020a8();
          }
          *plVar4 = *plVar3;
          *plVar3 = 0;
          *(int *)(plVar4 + 1) = (int)plVar3[1];
          *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
          plVar3[1] = 0;
        }
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)local_58 * 4 != lVar6);
    lVar5 = CONCAT44(uStack_5c,local_60);
  }
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df090a FUN_147df090a body=531 status=ok
// SIG undefined FUN_147df090a(void)

void FUN_147df090a(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  longlong local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar4 = *(uint *)(param_1 + 0x248);
  if ((longlong)(int)uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1400bac10(&local_88,uVar4);
    iVar1 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar1)) {
      local_40 = iVar1;
      FUN_144a56d22();
    }
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar5 = (longlong)(int)param_2[1] * 0xa0 + lVar3;
    do {
      if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
        lVar2 = lVar3 + 0x88;
        if (*(longlong *)(lVar3 + 0x90) != 0) {
          lVar2 = *(longlong *)(lVar3 + 0x90);
        }
        iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_3) * 4);
        if (iVar1 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar1 * 0xc) == param_3) {
              FUN_1468b3f6e(&local_88,lVar3);
              break;
            }
            iVar1 = *(int *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar1 * 0xc + 4);
          } while (iVar1 != -1);
        }
      }
      lVar3 = lVar3 + 0xa0;
    } while (lVar3 != lVar5);
  }
  if ((*(int *)(param_1 + 0x248) != 0) || ((int)uStack_80 != local_54)) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  FUN_140619b9c(&local_88,&local_98);
  if ((longlong *)(param_1 + 0x240) == &local_98) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x240) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x240) = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 0x248) = local_90;
    *(undefined4 *)(param_1 + 0x24c) = local_8c;
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_88);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147df0b20 FUN_147df0b20 body=313 status=ok
// SIG undefined FUN_147df0b20(void)

void FUN_147df0b20(longlong *param_1,double *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  double *local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = param_1[6];
  lVar3 = (longlong)param_3;
  lVar4 = (longlong)*(int *)(lVar2 + lVar3 * 4);
  lVar5 = (longlong)*(int *)(lVar2 + 4 + lVar3 * 4);
  lVar1 = *param_1;
  local_20 = (double)*(float *)(lVar1 + 8 + lVar4 * 0xc);
  local_28 = (double)*(float *)(lVar1 + 4 + lVar4 * 0xc);
  local_30 = (double)*(float *)(lVar1 + lVar4 * 0xc);
  lVar2 = (longlong)*(int *)(lVar2 + 8 + lVar3 * 4);
  local_38 = (double)*(float *)(lVar1 + 8 + lVar5 * 0xc);
  local_40 = (double)*(float *)(lVar1 + 4 + lVar5 * 0xc);
  local_48 = (double)*(float *)(lVar1 + lVar5 * 0xc);
  local_50 = (double)*(float *)(lVar1 + 8 + lVar2 * 0xc);
  local_58 = (double)*(float *)(lVar1 + 4 + lVar2 * 0xc);
  local_60 = (double)*(float *)(lVar1 + lVar2 * 0xc);
  local_88 = &local_60;
  FUN_14276f25e(&local_78);
  dVar6 = SQRT((local_68 - param_2[2]) * (local_68 - param_2[2]) +
               (local_78 - *param_2) * (local_78 - *param_2) +
               (local_70 - param_2[1]) * (local_70 - param_2[1]));
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6));
}



// FUNCTION 147df0c5a FUN_147df0c5a body=801 status=ok
// SIG undefined FUN_147df0c5a(void)

longlong * FUN_147df0c5a(longlong param_1,longlong *param_2,double *param_3,float param_4)

{
  int iVar1;
  void *_Src;
  double dVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined8 uStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0x248);
  if ((longlong)iVar1 != 0) {
    *param_2 = 0;
    _Src = *(void **)(param_1 + 0x240);
    *(int *)(param_2 + 1) = iVar1;
    FUN_144a06ca8(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
  if (0x12e < *(int *)(param_1 + 0x38)) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      iVar1 = *(int *)(param_1 + 0x38) / 3;
      local_98 = 0.0;
      uStack_90 = 0.0;
      FUN_147df0f7c(&local_98,iVar1);
      iVar5 = 0;
      do {
        uVar3 = (ulonglong)uStack_90;
        lVar7 = (longlong)(int)uStack_90;
        uVar4 = (int)uStack_90 + 1;
        uStack_90 = (double)CONCAT44(uStack_90._4_4_,uVar4);
        if (uStack_90._4_4_ < uVar4) {
          FUN_147dfa920(&local_98,uVar3 & 0xffffffff);
        }
        *(longlong *)((longlong)local_98 + lVar7 * 0x10) = param_1;
        *(int *)((longlong)local_98 + 8 + lVar7 * 0x10) = iVar5;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
      *(undefined1 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0x100000000c;
      *(undefined8 *)(param_1 + 0x188) = 0x40f86a0000000000;
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined2 *)(param_1 + 0x1d8) = 0x100;
      *(undefined1 *)(param_1 + 0x1da) = 1;
      FUN_1437d08e6(param_1 + 0x58,&local_98);
      *(undefined1 *)(param_1 + 0x50) = 1;
      if (local_98 != 0.0) {
        FUN_1400020a8();
      }
    }
    local_70 = (double)param_4;
    local_98 = *param_3 - local_70;
    uStack_90 = param_3[1] - local_70;
    local_88 = param_3[2] - local_70;
    local_80 = *param_3 + local_70;
    dStack_78 = param_3[1] + local_70;
    local_70 = local_70 + param_3[2];
    local_68 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_147dfab38(param_1 + 0x58);
    lVar7 = local_a8;
    lVar6 = (longlong)(int)uStack_a0;
    if (lVar6 != 0) {
      fVar10 = 3.4028235e+38;
      lVar8 = 0;
      do {
        fVar9 = (float)FUN_147df0b20(param_1,param_3,*(int *)(lVar7 + lVar8) * 3);
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        lVar8 = lVar8 + 4;
      } while (lVar6 * 4 != lVar8);
      dVar2 = (double)fVar10;
      local_98 = local_98 - dVar2;
      uStack_90 = uStack_90 - dVar2;
      local_88 = local_88 - dVar2;
      local_80 = local_80 + dVar2;
      dStack_78 = dStack_78 + dVar2;
      local_70 = dVar2 + local_70;
      *param_2 = 0;
      param_2[1] = 0;
      local_68 = param_2;
      FUN_147dfab38(param_1 + 0x58);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_147df0d02;
    }
    if (local_a8 != 0) {
      FUN_1400020a8(local_a8);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147df0d02:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147df0f7c FUN_147df0f7c body=41 status=ok
// SIG undefined FUN_147df0f7c(void)

void FUN_147df0f7c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147dfa8c0();
  return;
}



// FUNCTION 147df0fa6 FUN_147df0fa6 body=79 status=ok
// SIG undefined FUN_147df0fa6(void)

undefined8 * FUN_147df0fa6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_147dfab38(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df0ff6 FUN_147df0ff6 body=390 status=ok
// SIG undefined FUN_147df0ff6(void)

longlong * FUN_147df0ff6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[0x47] == 0) {
    uVar2 = *(uint *)(param_1 + 7);
    local_34 = 0;
    FUN_1448158c6(param_1 + 0x46,&local_34,(int)param_1[1]);
    if (2 < (int)uVar2) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar3 = param_1[6];
        lVar1 = lVar3 + uVar7 * 0xc;
        lVar9 = 1;
        do {
          lVar10 = (longlong)*(int *)(lVar3 + lVar6 + -4 + lVar9 * 4);
          lVar11 = *param_1;
          lVar8 = 0;
          if (lVar9 != 3) {
            lVar8 = lVar9;
          }
          lVar12 = (longlong)*(int *)(lVar1 + lVar8 * 4);
          fVar5 = *(float *)(lVar11 + 4 + lVar12 * 0xc) - *(float *)(lVar11 + 4 + lVar10 * 0xc);
          fVar4 = *(float *)(lVar11 + lVar12 * 0xc) - *(float *)(lVar11 + lVar10 * 0xc);
          fVar13 = *(float *)(lVar11 + 8 + lVar12 * 0xc) - *(float *)(lVar11 + 8 + lVar10 * 0xc);
          fVar4 = SQRT(fVar13 * fVar13 + fVar5 * fVar5 + fVar4 * fVar4);
          fVar13 = *(float *)(param_1[0x46] + lVar10 * 4);
          if (fVar13 <= fVar4) {
            fVar13 = fVar4;
          }
          *(float *)(param_1[0x46] + lVar10 * 4) = fVar13;
          lVar11 = (longlong)*(int *)(lVar1 + lVar8 * 4);
          fVar13 = *(float *)(param_1[0x46] + lVar11 * 4);
          if (fVar13 <= fVar4) {
            fVar13 = fVar4;
          }
          *(float *)(param_1[0x46] + lVar11 * 4) = fVar13;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 4);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0xc;
      } while (uVar7 != (ulonglong)uVar2 / 3);
    }
  }
  *param_2 = param_1[0x46];
  *(int *)(param_2 + 1) = (int)param_1[0x47];
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147df117e FUN_147df117e body=695 status=ok
// SIG undefined FUN_147df117e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147df117e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  plVar1 = param_1 + 8;
  FUN_144815938(plVar1,&DAT_14c846330,(int)param_1[1]);
  uVar2 = *(uint *)(param_1 + 7);
  if (2 < (int)uVar2) {
    lVar3 = 0;
    do {
      lVar4 = *param_1;
      lVar5 = param_1[6];
      lVar6 = (longlong)*(int *)(lVar5 + lVar3);
      lVar7 = (longlong)*(int *)(lVar5 + 4 + lVar3);
      lVar5 = (longlong)*(int *)(lVar5 + 8 + lVar3);
      fVar14 = *(float *)(lVar4 + 8 + lVar6 * 0xc);
      fVar11 = *(float *)(lVar4 + 8 + lVar7 * 0xc) - fVar14;
      fVar8 = *(float *)(lVar4 + lVar6 * 0xc);
      fVar10 = *(float *)(lVar4 + 4 + lVar6 * 0xc);
      fVar13 = *(float *)(lVar4 + 4 + lVar7 * 0xc) - fVar10;
      fVar12 = *(float *)(lVar4 + lVar7 * 0xc) - fVar8;
      fVar14 = *(float *)(lVar4 + 8 + lVar5 * 0xc) - fVar14;
      fVar10 = *(float *)(lVar4 + 4 + lVar5 * 0xc) - fVar10;
      fVar8 = *(float *)(lVar4 + lVar5 * 0xc) - fVar8;
      fVar9 = fVar8 * fVar13 - fVar12 * fVar10;
      fVar8 = fVar14 * fVar12 - fVar11 * fVar8;
      fVar14 = fVar10 * fVar11 - fVar14 * fVar13;
      fVar10 = fVar9 * fVar9 + fVar14 * fVar14 + fVar8 * fVar8;
      if (1e-08 < fVar10) {
        fVar10 = 1.0 / SQRT(fVar10);
        fVar14 = fVar14 * fVar10;
        fVar8 = fVar8 * fVar10;
        fVar9 = fVar9 * fVar10;
        lVar4 = *plVar1;
        *(float *)(lVar4 + lVar6 * 0xc) = *(float *)(lVar4 + lVar6 * 0xc) + fVar14;
        *(float *)(lVar4 + 4 + lVar6 * 0xc) = *(float *)(lVar4 + 4 + lVar6 * 0xc) + fVar8;
        *(float *)(lVar4 + 8 + lVar6 * 0xc) = *(float *)(lVar4 + 8 + lVar6 * 0xc) + fVar9;
        lVar4 = *plVar1;
        *(float *)(lVar4 + lVar7 * 0xc) = *(float *)(lVar4 + lVar7 * 0xc) + fVar14;
        *(float *)(lVar4 + 4 + lVar7 * 0xc) = *(float *)(lVar4 + 4 + lVar7 * 0xc) + fVar8;
        *(float *)(lVar4 + 8 + lVar7 * 0xc) = *(float *)(lVar4 + 8 + lVar7 * 0xc) + fVar9;
        lVar4 = *plVar1;
        *(float *)(lVar4 + lVar5 * 0xc) = fVar14 + *(float *)(lVar4 + lVar5 * 0xc);
        *(float *)(lVar4 + 4 + lVar5 * 0xc) = fVar8 + *(float *)(lVar4 + 4 + lVar5 * 0xc);
        *(float *)(lVar4 + 8 + lVar5 * 0xc) = fVar9 + *(float *)(lVar4 + 8 + lVar5 * 0xc);
      }
      lVar3 = lVar3 + 0xc;
    } while (((ulonglong)uVar2 * 0xaaaaaaab >> 0x1f & 0xfffffffffffffffc) * 3 != lVar3);
  }
  if (0 < (int)param_1[9]) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar5 = *plVar1;
      fVar14 = *(float *)(lVar5 + lVar3);
      fVar8 = *(float *)(lVar5 + 4 + lVar3);
      fVar10 = *(float *)(lVar5 + 8 + lVar3);
      fVar9 = fVar10 * fVar10 + fVar14 * fVar14 + fVar8 * fVar8;
      if (fVar9 <= 1e-08) {
        *(undefined4 *)((undefined8 *)(lVar5 + lVar3) + 1) = DAT_14c846384;
        *(undefined8 *)(lVar5 + lVar3) = _DAT_14c84637c;
      }
      else {
        fVar9 = 1.0 / SQRT(fVar9);
        *(float *)(lVar5 + lVar3) = fVar14 * fVar9;
        *(float *)(lVar5 + 4 + lVar3) = fVar8 * fVar9;
        *(float *)(lVar5 + 8 + lVar3) = fVar10 * fVar9;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (lVar4 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 147df1435 FUN_147df1435 body=870 status=ok
// SIG undefined FUN_147df1435(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147df1435(longlong *param_1,longlong *param_2,byte param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined2 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined2 uVar15;
  bool bVar16;
  bool bVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  longlong lVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar33 [16];
  
  auVar10 = _DAT_149931e80;
  lVar14 = *param_1;
  iVar2 = (int)param_1[1];
  if ((int)param_2[1] == 0) {
    if (iVar2 != 0) {
      uVar12 = (longlong)iVar2 + 0x3ffffffffffffff;
      uVar13 = uVar12 & 0x3ffffffffffffff;
      auVar20._8_4_ = (int)uVar13;
      auVar20._0_8_ = uVar13;
      auVar20._12_4_ = (int)(uVar13 >> 0x20);
      puVar11 = (undefined2 *)(lVar14 + 0x1f6);
      lVar14 = 0;
      auVar22 = pmovsxbq(in_XMM1,0x706);
      auVar23 = pmovsxbq(in_XMM2,0x504);
      auVar24 = pmovsxbq(in_XMM3,0x302);
      auVar25 = pmovsxbq(in_XMM4,0x100);
      auVar20 = auVar20 | _DAT_149931e80;
      do {
        auVar27._8_4_ = (int)lVar14;
        auVar27._0_8_ = lVar14;
        auVar27._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        auVar29 = (auVar27 | auVar25) ^ auVar10;
        lVar18 = auVar20._0_8_;
        auVar30._0_8_ = -(ulonglong)(lVar18 < auVar29._0_8_);
        lVar21 = auVar20._8_8_;
        auVar30._8_8_ = -(ulonglong)(lVar21 < auVar29._8_8_);
        auVar33 = pshuflw(unaff_XMM9,auVar30,0xe8);
        auVar29._8_4_ = 0xffffffff;
        auVar29._0_8_ = 0xffffffffffffffff;
        auVar29._12_4_ = 0xffffffff;
        auVar29 = packssdw(auVar33 ^ auVar29,auVar33 ^ auVar29);
        if ((auVar29._0_4_ & 1) != 0) {
          puVar11[-0xe0] = 0;
        }
        auVar30 = packssdw(auVar30,auVar30);
        auVar33._8_4_ = 0xffffffff;
        auVar33._0_8_ = 0xffffffffffffffff;
        auVar33._12_4_ = 0xffffffff;
        auVar30 = packssdw(auVar30 ^ auVar33,auVar30 ^ auVar33);
        if ((auVar30[2] & 1) != 0) {
          puVar11[-0xc0] = 0;
        }
        auVar30 = (auVar27 | auVar24) ^ auVar10;
        auVar31._0_8_ = -(ulonglong)(lVar18 < auVar30._0_8_);
        auVar31._8_8_ = -(ulonglong)(lVar21 < auVar30._8_8_);
        auVar29 = packssdw(auVar29,auVar31);
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar29 = packssdw(auVar29 ^ auVar4,auVar29 ^ auVar4);
        if ((auVar29[4] & 1) != 0) {
          puVar11[-0xa0] = 0;
        }
        auVar30 = pshufhw(auVar31,auVar31,0x84);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar30 = packssdw(auVar30 ^ auVar5,auVar30 ^ auVar5);
        if ((auVar30[6] & 1) != 0) {
          puVar11[-0x80] = 0;
        }
        auVar30 = (auVar27 | auVar23) ^ auVar10;
        auVar32._0_8_ = -(ulonglong)(lVar18 < auVar30._0_8_);
        auVar32._8_8_ = -(ulonglong)(lVar21 < auVar30._8_8_);
        auVar29 = pshuflw(auVar29,auVar32,0xe8);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        unaff_XMM9 = packssdw(auVar29 ^ auVar6,auVar29 ^ auVar6);
        if ((unaff_XMM9[8] & 1) != 0) {
          puVar11[-0x60] = 0;
        }
        auVar29 = packssdw(auVar32,auVar32);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar29 = packssdw(auVar29 ^ auVar7,auVar29 ^ auVar7);
        if ((auVar29[10] & 1) != 0) {
          puVar11[-0x40] = 0;
        }
        auVar27 = (auVar27 | auVar22) ^ auVar10;
        auVar28._0_8_ = -(ulonglong)(lVar18 < auVar27._0_8_);
        auVar28._8_8_ = -(ulonglong)(lVar21 < auVar27._8_8_);
        auVar29 = packssdw(auVar29,auVar28);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar29 = packssdw(auVar29 ^ auVar8,auVar29 ^ auVar8);
        if ((auVar29[0xc] & 1) != 0) {
          puVar11[-0x20] = 0;
        }
        auVar29 = pshufhw(auVar28,auVar28,0x84);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar29 = packssdw(auVar29 ^ auVar9,auVar29 ^ auVar9);
        if ((auVar29[0xe] & 1) != 0) {
          *puVar11 = 0;
        }
        lVar14 = lVar14 + 8;
        puVar11 = puVar11 + 0x100;
      } while ((uVar13 - ((uint)uVar12 & 7)) + 8 != lVar14);
    }
  }
  else if (iVar2 != 0) {
    lVar18 = 0;
    do {
      uVar1 = *(ushort *)(lVar14 + 0x30 + lVar18);
      iVar3 = (int)param_2[1];
      if ((int)(uint)uVar1 < iVar3) {
        bVar19 = *(float *)(*param_2 + (ulonglong)uVar1 * 4) <= 0.1;
      }
      else {
        bVar19 = false;
      }
      uVar1 = *(ushort *)(lVar14 + 0x32 + lVar18);
      if ((int)(uint)uVar1 < iVar3) {
        bVar16 = *(float *)(*param_2 + (ulonglong)uVar1 * 4) <= 0.1;
      }
      else {
        bVar16 = false;
      }
      uVar1 = *(ushort *)(lVar14 + 0x34 + lVar18);
      if ((int)(uint)uVar1 < iVar3) {
        fVar26 = *(float *)(*param_2 + (ulonglong)uVar1 * 4);
        bVar17 = fVar26 <= 0.1;
        if (((bVar19 & bVar16) != 1) || (uVar15 = 0xffff, 0.1 < fVar26)) goto LAB_147df14fd;
      }
      else {
        bVar17 = false;
LAB_147df14fd:
        if (param_4 != '\0') {
          fVar26 = *(float *)(lVar14 + 0x38 + lVar18);
          uVar15 = 0xffff;
          if ((fVar26 == 0.0) && (!NAN(fVar26))) goto LAB_147df1579;
        }
        if (((bVar19 | bVar16 | bVar17) & param_3) == 1) {
          fVar26 = (float)bVar17 * *(float *)(lVar14 + 8 + lVar18) +
                   (float)bVar19 * *(float *)(lVar14 + lVar18) +
                   (float)bVar16 * *(float *)(lVar14 + 4 + lVar18);
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          uVar15 = (undefined2)(int)(fVar26 * 65535.0);
        }
        else {
          uVar15 = 0;
        }
      }
LAB_147df1579:
      *(undefined2 *)(lVar14 + 0x36 + lVar18) = uVar15;
      lVar18 = lVar18 + 0x40;
    } while ((longlong)iVar2 * 0x40 != lVar18);
  }
  return;
}



// FUNCTION 147df179b FUN_147df179b body=582 status=ok
// SIG undefined FUN_147df179b(void)

float * FUN_147df179b(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_148 [32];
  double *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_80 = param_4[2];
  local_88 = *(undefined8 *)param_4;
  local_98 = *(undefined8 *)param_3;
  local_90 = param_3[2];
  local_a8 = *(undefined8 *)param_2;
  local_a0 = param_2[2];
  FUN_1467fbf90(&local_78);
  fVar3 = (local_70 * param_5[2] + local_78 * *param_5 + local_74 * param_5[1]) - local_6c;
  local_c8 = (double)param_4[2];
  local_d0 = (double)param_4[1];
  local_d8 = (double)*param_4;
  local_128 = &local_d8;
  local_e0 = (double)param_3[2];
  local_e8 = (double)param_3[1];
  local_f0 = (double)*param_3;
  local_f8 = (double)param_2[2];
  local_100 = (double)param_2[1];
  local_108 = (double)*param_2;
  local_110 = (double)(param_5[2] - local_70 * fVar3);
  local_118 = (double)(param_5[1] - local_74 * fVar3);
  local_120 = (double)(*param_5 - fVar3 * local_78);
  FUN_14276fa06(&local_c0);
  fVar3 = param_5[1];
  fVar1 = *param_5;
  fVar2 = param_5[2];
  *param_1 = (float)local_c0;
  param_1[1] = (float)local_b8;
  param_1[2] = (float)local_b0;
  param_1[3] = (local_70 * fVar2 + local_78 * fVar1 + local_74 * fVar3) - local_6c;
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df19e2 FUN_147df19e2 body=690 status=ok
// SIG undefined FUN_147df19e2(void)

undefined8 FUN_147df19e2(double param_1,double param_2,double param_3,double *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_1 * param_1;
  dVar3 = (param_2 * -3.0 + dVar4) / 9.0;
  dVar5 = ((dVar4 + dVar4 + param_2 * -9.0) * param_1 + param_3 * 27.0) / 54.0;
  dVar4 = dVar3 * dVar3 * dVar3;
  if (dVar5 * dVar5 <= dVar4 + 9.99999993922529e-09) {
    if (dVar4 < 0.0) {
      dVar4 = sqrt(dVar4);
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    dVar5 = dVar5 / dVar4;
    dVar4 = dVar5;
    if (1.0 <= dVar5) {
      dVar4 = 1.0;
    }
    dVar4 = acos((double)(-(ulonglong)(dVar5 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar5 < -1.0) & (ulonglong)dVar4));
    if (dVar3 < 0.0) {
      dVar3 = sqrt(dVar3);
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    dVar3 = dVar3 * -2.0;
    dVar5 = cos(dVar4 / 3.0);
    param_1 = param_1 / -3.0;
    *param_4 = dVar5 * dVar3 + param_1;
    dVar5 = cos((dVar4 + 6.2831854820251465) / 3.0);
    param_4[1] = dVar5 * dVar3 + param_1;
    dVar4 = cos((dVar4 + -6.2831854820251465) / 3.0);
    param_1 = dVar4 * dVar3 + param_1;
    uVar1 = 3;
    lVar2 = 0x10;
  }
  else {
    dVar4 = dVar5 * dVar5 - dVar4;
    if (dVar4 < 0.0) {
      dVar4 = sqrt(dVar4);
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    dVar4 = pow(ABS(dVar5) + dVar4,0.3333333333333333);
    dVar5 = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)-dVar4 |
                    ~-(ulonglong)(0.0 < dVar5) & (ulonglong)dVar4);
    dVar4 = (double)(~-(ulonglong)(ABS(param_1) <= 1e-08) & (ulonglong)(dVar3 / dVar5));
    dVar3 = dVar5 + dVar4;
    *param_4 = dVar3 - param_1 / 3.0;
    if (1e-08 < ABS((dVar5 - dVar4) * 0.8660253882408142)) {
      return 1;
    }
    param_1 = dVar3 * -0.5 - param_1 / 3.0;
    uVar1 = 2;
    lVar2 = 8;
  }
  *(double *)((longlong)param_4 + lVar2) = param_1;
  return uVar1;
}



// FUNCTION 147df1c94 FUN_147df1c94 body=5219 status=ok
// SIG undefined FUN_147df1c94(void)

/* WARNING: Removing unreachable block (ram,0x000147df21c6) */
/* WARNING: Removing unreachable block (ram,0x000147df2301) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_147df1c94(float *param_1,float *param_2,double *param_3,double *param_4,float *param_5,
                     float *param_6,float *param_7,double *param_8)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  ulonglong *puVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  int iVar30;
  int iVar31;
  ulonglong *puVar32;
  ulonglong *puVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  float fVar52;
  double dVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auStack_598 [32];
  double *local_578;
  float local_56c;
  float local_568;
  float local_564;
  float *local_560;
  float local_554;
  float local_550;
  float local_54c;
  float local_548;
  float local_544;
  double *local_540;
  double *local_538;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  double local_518;
  float local_50c;
  undefined1 local_508 [16];
  double local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  undefined8 local_4a8;
  float local_4a0;
  float local_49c;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468 [4];
  double local_448 [6];
  double local_418;
  double local_410;
  double local_408;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  ulonglong local_f0;
  
  auVar12 = _DAT_149931180;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_598;
  fVar36 = param_5[2];
  local_554 = *(float *)(param_8 + 1);
  fVar47 = param_2[2] - local_554;
  fVar56 = *(float *)param_8;
  fVar50 = *(float *)((longlong)param_8 + 4);
  local_56c = param_2[1] - fVar50;
  local_568 = *param_2 - fVar56;
  fVar60 = *(float *)(param_3 + 1) - local_554;
  fVar61 = *(float *)((longlong)param_3 + 4) - fVar50;
  fVar52 = *(float *)param_3 - fVar56;
  local_554 = *(float *)(param_4 + 1) - local_554;
  fVar50 = *(float *)((longlong)param_4 + 4) - fVar50;
  fVar56 = *(float *)param_4 - fVar56;
  local_564 = fVar52 * fVar50 - fVar56 * fVar61;
  fVar41 = fVar60 * fVar56 - local_554 * fVar52;
  local_550 = fVar61 * local_554 - fVar50 * fVar60;
  local_518 = (double)CONCAT44(local_518._4_4_,fVar41);
  local_560 = (float *)CONCAT44(local_560._4_4_,fVar47);
  dVar38 = (double)(fVar47 * local_564 + local_568 * local_550 + local_56c * fVar41);
  fVar54 = *param_5;
  fVar55 = param_5[1];
  local_52c = param_6[2];
  local_528 = *param_6;
  local_544 = param_6[1];
  local_524 = param_7[2];
  local_51c = *param_7;
  local_520 = param_7[1];
  local_508 = ZEXT416((uint)fVar54);
  local_54c = fVar36;
  local_548 = fVar55;
  local_540 = param_3;
  local_538 = param_4;
  if (9.99999993922529e-09 < ABS(dVar38)) {
    local_4f8 = ABS(dVar38);
    fVar35 = local_528 * local_520 - local_544 * local_51c;
    fVar58 = local_52c * local_51c - local_528 * local_524;
    fVar48 = local_544 * local_524 - local_52c * local_520;
    fVar57 = -fVar54;
    fVar59 = local_51c * fVar61 - fVar52 * local_520;
    fVar42 = local_524 * fVar52 - fVar60 * local_51c;
    fVar61 = local_520 * fVar60 - fVar61 * local_524;
    fVar52 = local_544 * fVar56 - local_528 * fVar50;
    fVar60 = local_528 * local_554 - fVar56 * local_52c;
    fVar50 = fVar50 * local_52c - local_554 * local_544;
    dVar4 = (double)((fVar57 * fVar50 - fVar60 * fVar55) - fVar36 * fVar52) +
            (double)((fVar57 * fVar61 - fVar42 * fVar55) - fVar36 * fVar59) +
            (double)(fVar35 * fVar47 + fVar48 * local_568 + fVar58 * local_56c);
    dVar8 = (double)((fVar57 * fVar48 - fVar58 * fVar55) - fVar36 * fVar35);
    dVar3 = (double)((fVar57 * local_550 - fVar41 * fVar55) - local_564 * fVar36) +
            (double)(fVar52 * fVar47 + fVar50 * local_568 + fVar60 * local_56c) +
            (double)(fVar59 * fVar47 + fVar61 * local_568 + fVar42 * local_56c);
    uVar62 = SUB84(dVar8,0) & (uint)DAT_149931180;
    uVar63 = (uint)((ulonglong)dVar8 >> 0x20) & DAT_149931180._4_4_;
    uVar22 = DAT_149931180;
    dVar37 = dVar8 * 3.0;
    dVar7 = dVar4 + dVar4;
    if ((double)((ulonglong)dVar37 & uVar22) <= 1e-08) {
      if (ABS(dVar7) <= 1e-08) goto LAB_147df21b6;
      local_468[0] = -dVar3 / dVar7;
      lVar15 = 1;
LAB_147df2203:
      lVar16 = 0;
      iVar23 = 0;
      do {
        dVar37 = local_468[lVar16];
        if (ABS(dVar3 * dVar37 + dVar37 * dVar8 * dVar37 * dVar37 + dVar4 * dVar37 * dVar37 + dVar38
               ) <= ((double)CONCAT44(uVar63,uVar62) + (double)((ulonglong)dVar4 & uVar22) +
                     (double)((ulonglong)dVar3 & uVar22) + ABS(dVar38)) * 0.1) {
          lVar18 = (longlong)iVar23;
          iVar23 = iVar23 + 1;
          local_448[lVar18] = dVar37;
        }
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
    }
    else {
      dVar7 = dVar7 / dVar37;
      dVar37 = dVar7 * 0.25 * dVar7 - dVar3 / dVar37;
      if (0.0 <= dVar37) {
        dVar37 = SQRT(dVar37);
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
        local_468[0] = dVar7 * -0.5 - dVar37;
        local_468[1] = dVar7 * -0.5 + dVar37;
        lVar15 = 2;
        goto LAB_147df2203;
      }
LAB_147df21b6:
      iVar23 = 0;
    }
    uStack_4e0 = 0;
    uStack_4f0 = 0;
    local_50c = fVar56;
    local_4e8 = dVar38;
    if (1e-08 < (double)CONCAT44(uVar63,uVar62)) {
      iVar14 = FUN_147df19e2(dVar4 / dVar8,SUB84(dVar3 / dVar8,0),SUB84(dVar38 / dVar8,0),&local_418
                            );
      fVar54 = (float)local_508._0_4_;
LAB_147df2332:
      memcpy(local_448 + iVar23,&local_418,(ulonglong)(uint)(iVar14 * 8));
      dVar38 = local_4e8;
    }
    else {
      if ((double)((ulonglong)dVar4 & uVar22) <= 1e-08) {
        if (1e-08 < (double)((ulonglong)dVar3 & uVar22)) {
          local_418 = -dVar38 / dVar3;
          iVar14 = 1;
          goto LAB_147df2332;
        }
      }
      else {
        dVar3 = dVar3 / dVar4;
        dVar37 = dVar3 * 0.25 * dVar3 - dVar38 / dVar4;
        if (0.0 <= dVar37) {
          dVar37 = SQRT(dVar37);
          uStack_4e0 = 0;
          uStack_4f0 = 0;
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
          local_418 = dVar3 * -0.5 - dVar37;
          local_410 = dVar3 * -0.5 + dVar37;
          iVar14 = 2;
          goto LAB_147df2332;
        }
      }
      iVar14 = 0;
    }
    uVar62 = iVar14 + iVar23;
    local_4e8 = dVar38;
    if (1 < (int)uVar62) {
      local_560 = param_1;
      memset(&local_3e8,0,0x2f0);
      local_3f8 = local_448;
      local_3f0 = local_468 + (ulonglong)uVar62 + 3;
      fVar36 = logf((float)(int)uVar62);
      local_3e8 = (int)(longlong)(fVar36 + fVar36);
      puVar17 = &local_3f8;
      do {
        puVar19 = (ulonglong *)*puVar17;
        puVar20 = (ulonglong *)puVar17[1];
        iVar23 = *(int *)(puVar17 + 2);
        iVar14 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar19) >> 3);
        uVar63 = iVar14 + 1;
        puVar28 = puVar20;
        puVar33 = puVar19;
        if (iVar23 != 0) {
LAB_147df23e8:
          puVar24 = puVar19;
          if (8 < (int)uVar63) {
            uVar27 = puVar24[uVar63 >> 1];
            puVar24[uVar63 >> 1] = *puVar24;
            *puVar24 = uVar27;
            puVar32 = puVar28 + 1;
            puVar19 = puVar24;
            do {
              puVar13 = puVar19 + 1;
              puVar29 = puVar19 + 1;
              do {
                puVar19 = puVar29;
                puVar25 = puVar13;
                if (puVar28 < puVar19) break;
                puVar13 = puVar25 + 1;
                puVar29 = puVar19 + 1;
              } while ((double)(*puVar19 & uVar22) <= (double)(*puVar24 & uVar22));
              puVar13 = puVar32 + -2;
              do {
                puVar29 = puVar32;
                puVar21 = puVar13;
                puVar32 = puVar29 + -1;
                if (puVar32 <= puVar24) break;
                puVar13 = puVar21 + -1;
              } while ((double)(*puVar24 & uVar22) <= (double)(*puVar32 & uVar22));
              if (puVar32 < puVar19) goto LAB_147df249d;
              uVar27 = *puVar19;
              *puVar19 = *puVar32;
              *puVar32 = uVar27;
            } while( true );
          }
          if (puVar24 < puVar28) {
            do {
              puVar19 = puVar24;
              if (puVar24 + 1 <= puVar28) {
                uVar27 = *puVar24;
                uVar43 = (undefined4)uVar27;
                uVar44 = (undefined4)(uVar27 >> 0x20);
                uVar45 = 0;
                uVar46 = 0;
                auVar40._8_8_ = 0;
                auVar40._0_8_ = uVar27;
                puVar20 = puVar24 + 1;
                do {
                  dVar38 = (double)(auVar40._0_8_ & uVar22);
                  dVar37 = (double)(*puVar20 & uVar22);
                  uVar27 = -(ulonglong)(dVar38 < dVar37);
                  auVar39._0_8_ = ~uVar27 & CONCAT44(uVar44,uVar43);
                  auVar39._8_8_ = ~(auVar40._8_8_ & auVar12._8_8_) & CONCAT44(uVar46,uVar45);
                  if (dVar38 < dVar37) {
                    puVar19 = puVar20;
                  }
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = *puVar20 & uVar27;
                  auVar40 = auVar39 | auVar2;
                  puVar20 = puVar20 + 1;
                  uVar43 = auVar40._0_4_;
                  uVar44 = auVar40._4_4_;
                  uVar45 = auVar40._8_4_;
                  uVar46 = auVar40._12_4_;
                } while (puVar20 <= puVar28);
              }
              uVar27 = *puVar19;
              *puVar19 = *puVar28;
              *puVar28 = uVar27;
              puVar28 = puVar28 + -1;
            } while (puVar24 < puVar28);
          }
          goto LAB_147df2746;
        }
LAB_147df2536:
        if (uVar63 != 0) {
          iVar23 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar14 = iVar23;
joined_r0x000147df255d:
          do {
            iVar31 = iVar23 * 2 + 1;
            if (iVar31 < (int)uVar63) {
              iVar30 = iVar23 * 2 + 2;
              if ((iVar30 < (int)uVar63) &&
                 ((double)(puVar19[iVar31] & uVar22) <= (double)(puVar19[iVar30] & uVar22))) {
                iVar31 = iVar30;
              }
              uVar27 = puVar19[iVar23];
              if ((double)(uVar27 & uVar22) < (double)(puVar19[iVar31] & uVar22)) {
                puVar19[iVar23] = puVar19[iVar31];
                puVar19[iVar31] = uVar27;
                iVar23 = iVar31;
                goto joined_r0x000147df255d;
              }
            }
            bVar34 = iVar14 != 0;
            iVar23 = iVar14 + -1;
            iVar14 = iVar23;
          } while (bVar34);
          if (1 < (int)uVar63) {
            uVar26 = (ulonglong)uVar63;
            uVar27 = *puVar19;
            *puVar19 = puVar19[uVar26 - 1];
            puVar19[uVar26 - 1] = uVar27;
            if (uVar63 != 2) {
              do {
                uVar27 = uVar26 - 1;
                iVar23 = 0;
                iVar31 = 1;
                iVar14 = 0;
                do {
                  iVar23 = iVar23 + 2;
                  iVar30 = iVar31;
                  if (((longlong)iVar23 < (longlong)uVar27) &&
                     ((double)(puVar19[iVar31] & uVar22) <= (double)(puVar19[iVar23] & uVar22))) {
                    iVar30 = iVar23;
                  }
                  uVar1 = puVar19[iVar14];
                  if ((double)(puVar19[iVar30] & uVar22) <= (double)(uVar1 & uVar22)) break;
                  puVar19[iVar14] = puVar19[iVar30];
                  puVar19[iVar30] = uVar1;
                  iVar23 = iVar30 * 2;
                  iVar31 = iVar30 * 2 + 1;
                  iVar14 = iVar30;
                } while ((longlong)iVar31 < (longlong)uVar27);
                uVar1 = *puVar19;
                *puVar19 = puVar19[uVar26 - 2];
                puVar19[uVar26 - 2] = uVar1;
                uVar26 = uVar27;
              } while (2 < uVar27);
            }
          }
        }
LAB_147df2746:
        puVar17 = puVar17 + -3;
        param_1 = local_560;
      } while (&local_3f8 <= puVar17);
    }
    if (uVar62 != 0) {
      fVar56 = *(float *)(param_8 + 1);
      fVar41 = *(float *)param_8;
      fVar50 = *(float *)((longlong)param_8 + 4);
      fVar36 = local_54c;
      goto LAB_147df277e;
    }
  }
  else {
    local_478 = (double)CONCAT44(local_478._4_4_,*(float *)(param_4 + 1));
    local_480 = *param_4;
    local_498 = *param_3;
    local_490 = (double)CONCAT44(local_490._4_4_,*(float *)(param_3 + 1));
    local_4a8 = *(undefined8 *)param_2;
    local_4a0 = param_2[2];
    FUN_1467fbf90(&local_3f8);
    fVar41 = *(float *)param_8;
    fVar50 = *(float *)((longlong)param_8 + 4);
    fVar56 = *(float *)(param_8 + 1);
    local_448[0] = (double)-(((float)local_3f0 * fVar56 +
                             (float)local_3f8 * fVar41 + local_3f8._4_4_ * fVar50) - local_3f0._4_4_
                            );
    uVar62 = 1;
LAB_147df277e:
    local_408 = (double)*(float *)(local_538 + 1);
    local_410 = (double)*(float *)((longlong)local_538 + 4);
    local_418 = (double)*(float *)local_538;
    local_468[2] = (double)*(float *)(local_540 + 1);
    local_468[1] = (double)*(float *)((longlong)local_540 + 4);
    local_468[0] = (double)*(float *)local_540;
    local_470 = (double)param_2[2];
    local_478 = (double)param_2[1];
    local_480 = (double)*param_2;
    local_488 = (double)fVar56;
    local_490 = (double)fVar50;
    local_498 = (double)fVar41;
    local_578 = &local_418;
    FUN_14276f25e(&local_3f8);
    if (0 < (int)uVar62) {
      fVar50 = (float)(double)local_3f8;
      fVar56 = *(float *)param_8;
      fVar41 = (float)(double)local_3f0 - *(float *)((longlong)param_8 + 4);
      fVar47 = (float)(double)CONCAT44(uStack_3e4,local_3e8) - *(float *)(param_8 + 1);
      local_550 = 3.4028235e+38;
      bVar34 = false;
      local_560 = (float *)CONCAT44(local_560._4_4_,0x3f800000);
      local_568 = 0.0;
      local_56c = 0.0;
      local_564 = 0.0;
      uVar22 = 0;
      do {
        while( true ) {
          uVar27 = uVar22 + 1;
          if (ABS(local_468[uVar22 + 4]) <=
              (double)(SQRT(fVar47 * fVar47 +
                            fVar41 * fVar41 + (fVar50 - fVar56) * (fVar50 - fVar56)) * 3.0)) break;
LAB_147df2922:
          uVar22 = uVar27;
          if (uVar27 == uVar62) {
            if (!bVar34) goto LAB_147df2d61;
            goto LAB_147df2b69;
          }
        }
        fVar52 = (float)local_468[uVar22 + 4];
        fVar60 = param_2[2] - fVar36 * fVar52;
        fVar42 = param_2[1] - fVar55 * fVar52;
        fVar35 = *param_2 - fVar54 * fVar52;
        fVar48 = *(float *)(local_540 + 1) - local_52c * fVar52;
        fVar61 = *(float *)((longlong)local_540 + 4) - local_544 * fVar52;
        fVar54 = *(float *)local_540 - local_528 * fVar52;
        fVar55 = *(float *)(local_538 + 1) - local_524 * fVar52;
        fVar36 = *(float *)((longlong)local_538 + 4) - local_520 * fVar52;
        fVar52 = *(float *)local_538 - fVar52 * local_51c;
        local_4cc = fVar35;
        local_4c8 = fVar42;
        local_4c4 = fVar60;
        local_4c0 = fVar54;
        local_4bc = fVar61;
        local_4b8 = fVar48;
        local_4b4 = fVar52;
        local_4b0 = fVar36;
        local_4ac = fVar55;
        FUN_1467fbf90(&local_4a8,&local_4cc,&local_4c0,&local_4b4);
        local_518 = (double)fVar48;
        dVar37 = (double)fVar61;
        dVar51 = (double)fVar54;
        dVar38 = (double)fVar60;
        dVar49 = (double)fVar42;
        dVar53 = (double)fVar35;
        dVar4 = dVar37 - dVar49;
        dVar5 = dVar51 - dVar53;
        dVar8 = (double)fVar55;
        dVar10 = (double)fVar36;
        dVar11 = (double)fVar52;
        dVar3 = dVar8 - dVar38;
        dVar7 = dVar10 - dVar49;
        dVar9 = dVar11 - dVar53;
        dVar6 = dVar5 * dVar7 - dVar9 * dVar4;
        dVar5 = (local_518 - dVar38) * dVar9 - dVar3 * dVar5;
        dVar3 = dVar4 * dVar3 - dVar7 * (local_518 - dVar38);
        if (dVar6 * dVar6 + dVar3 * dVar3 + dVar5 * dVar5 <= 1e-08) {
          fVar55 = local_548;
          fVar36 = local_54c;
          fVar54 = (float)local_508._0_4_;
          goto LAB_147df2922;
        }
        local_554 = local_4a0;
        fVar36 = (local_4a0 * *(float *)(param_8 + 1) +
                 (float)local_4a8 * *(float *)param_8 +
                 local_4a8._4_4_ * *(float *)((longlong)param_8 + 4)) - local_49c;
        local_498 = (double)(*(float *)param_8 - (float)local_4a8 * fVar36);
        local_490 = (double)(*(float *)((longlong)param_8 + 4) - local_4a8._4_4_ * fVar36);
        local_488 = (double)(*(float *)(param_8 + 1) - fVar36 * local_4a0);
        local_578 = &local_418;
        local_480 = dVar53;
        local_478 = dVar49;
        local_470 = dVar38;
        local_468[0] = dVar51;
        local_468[1] = dVar37;
        local_468[2] = local_518;
        local_418 = dVar11;
        local_410 = dVar10;
        local_408 = dVar8;
        FUN_14276fa06(&local_3f8,&local_498,&local_480,local_468);
        fVar52 = (float)(double)CONCAT44(uStack_3e4,local_3e8);
        fVar60 = (float)(double)local_3f0;
        fVar61 = (float)(double)local_3f8;
        fVar55 = local_548;
        fVar36 = local_54c;
        fVar54 = (float)local_508._0_4_;
        if ((((0.0 <= fVar61) && (fVar61 <= 1.0)) && (0.0 <= fVar60)) &&
           (((fVar60 <= 1.0 && (0.0 <= fVar52)) && (fVar52 <= 1.0)))) {
          local_560 = (float *)CONCAT44(local_560._4_4_,(float)local_468[uVar22 + 4]);
          local_56c = fVar60;
          local_568 = fVar52;
          local_564 = fVar61;
          break;
        }
        fVar35 = (fVar52 + -0.5) * (fVar52 + -0.5) +
                 (fVar60 + -0.5) * (fVar60 + -0.5) + (fVar61 + -0.5) * (fVar61 + -0.5);
        if (fVar35 < local_550) {
          local_560 = (float *)CONCAT44(local_560._4_4_,(float)local_468[uVar22 + 4]);
          local_56c = fVar60;
          local_568 = fVar52;
          local_564 = fVar61;
          local_550 = fVar35;
        }
        bVar34 = true;
        uVar22 = uVar27;
      } while (uVar27 != uVar62);
LAB_147df2b69:
      fVar50 = ((*(float *)local_538 - local_51c * local_560._0_4_) * local_568 +
               (*(float *)local_540 - local_528 * local_560._0_4_) * local_56c +
               (*param_2 - fVar54 * local_560._0_4_) * local_564) - *(float *)param_8;
      fVar56 = ((*(float *)((longlong)local_538 + 4) - local_520 * local_560._0_4_) * local_568 +
               (*(float *)((longlong)local_540 + 4) - local_544 * local_560._0_4_) * local_56c +
               (param_2[1] - fVar55 * local_560._0_4_) * local_564) -
               *(float *)((longlong)param_8 + 4);
      fVar36 = ((*(float *)(local_538 + 1) - local_524 * local_560._0_4_) * local_568 +
               (*(float *)(local_540 + 1) - local_52c * local_560._0_4_) * local_56c +
               (param_2[2] - fVar36 * local_560._0_4_) * local_564) - *(float *)(param_8 + 1);
      if (ABS(SQRT(fVar36 * fVar36 + fVar56 * fVar56 + fVar50 * fVar50)) <= 0.0001) {
        *param_1 = local_564;
        param_1[1] = local_56c;
        param_1[2] = local_568;
        param_1[3] = local_560._0_4_;
        goto LAB_147df2cd8;
      }
    }
  }
LAB_147df2d61:
  local_578 = param_8;
  FUN_147df179b(param_1,param_2,local_540,local_538);
LAB_147df2cd8:
  if ((local_f0 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147df249d:
  uVar27 = *puVar24;
  *puVar24 = *puVar32;
  *puVar32 = uVar27;
  iVar23 = iVar23 + -1;
  puVar29 = puVar29 + -2;
  if ((longlong)puVar21 - (longlong)puVar33 < (longlong)puVar20 - (longlong)puVar25) {
    if (puVar19 < puVar28) {
      *puVar17 = puVar19;
      puVar17[1] = puVar28;
      *(int *)(puVar17 + 2) = iVar23;
      puVar17 = puVar17 + 3;
    }
    puVar19 = puVar24;
    puVar20 = puVar21;
    if (puVar32 <= puVar24 + 1) goto LAB_147df2746;
  }
  else {
    if (puVar24 + 1 < puVar32) {
      *puVar17 = puVar24;
      puVar17[1] = puVar29;
      *(int *)(puVar17 + 2) = iVar23;
      puVar17 = puVar17 + 3;
    }
    puVar24 = puVar25;
    puVar29 = puVar28;
    puVar20 = puVar28;
    if (puVar28 <= puVar19) goto LAB_147df2746;
  }
  iVar14 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar24) >> 3);
  uVar63 = iVar14 + 1;
  puVar28 = puVar29;
  puVar33 = puVar24;
  if (iVar23 == 0) goto LAB_147df2536;
  goto LAB_147df23e8;
}



// FUNCTION 147df30f8 FUN_147df30f8 body=77 status=ok
// SIG undefined FUN_147df30f8(void)

void FUN_147df30f8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  FUN_147df5014(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147df3168 FUN_147df3168 body=29 status=ok
// SIG undefined FUN_147df3168(void)

undefined8 FUN_147df3168(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147df31fa FUN_147df31fa body=59 status=ok
// SIG undefined FUN_147df31fa(void)

undefined8 FUN_147df31fa(longlong *param_1)

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



// FUNCTION 147df32c4 FUN_147df32c4 body=68 status=ok
// SIG undefined FUN_147df32c4(void)

undefined8 FUN_147df32c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x130);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147df3330 FUN_147df3330 body=59 status=ok
// SIG undefined FUN_147df3330(void)

undefined8 FUN_147df3330(longlong *param_1)

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



// FUNCTION 147df33fc FUN_147df33fc body=54 status=ok
// SIG undefined FUN_147df33fc(void)

undefined1 FUN_147df33fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a67f5c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147df345a FUN_147df345a body=59 status=ok
// SIG undefined FUN_147df345a(void)

undefined8 FUN_147df345a(longlong *param_1)

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



// FUNCTION 147df34a0 FUN_147df34a0 body=37 status=ok
// SIG undefined FUN_147df34a0(void)

void FUN_147df34a0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147df3516 FUN_147df3516 body=63 status=ok
// SIG undefined FUN_147df3516(void)

void FUN_147df3516(undefined8 param_1,longlong param_2)

{
  FUN_140ddf4ee(param_2);
  *(undefined1 *)(param_2 + 0x128) = 0;
  *(undefined4 *)(param_2 + 300) = 0x42c80000;
  *(undefined1 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  return;
}



// FUNCTION 147df3570 FUN_147df3570 body=155 status=ok
// SIG undefined FUN_147df3570(void)

undefined8 FUN_147df3570(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_3 + lVar3;
      lVar2 = param_2 + lVar3;
      FUN_147df36f4(lVar2,lVar1);
      *(undefined8 *)(param_2 + 0x128 + lVar3) = *(undefined8 *)(param_3 + 0x128 + lVar3);
      *(undefined1 *)(param_2 + 0x130 + lVar3) = *(undefined1 *)(param_3 + 0x130 + lVar3);
      FUN_147df37ae(lVar2 + 0x138,lVar1 + 0x138);
      FUN_147df37ae(lVar2 + 0x148,lVar1 + 0x148);
      lVar3 = lVar3 + 0x158;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147df3634 FUN_147df3634 body=59 status=ok
// SIG undefined FUN_147df3634(void)

undefined8 FUN_147df3634(longlong *param_1)

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



// FUNCTION 147df3680 FUN_147df3680 body=38 status=ok
// SIG undefined FUN_147df3680(void)

void FUN_147df3680(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_140d7ab38(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 147df36f4 FUN_147df36f4 body=185 status=ok
// SIG undefined FUN_147df36f4(void)

longlong FUN_147df36f4(longlong param_1,longlong param_2)

{
  FUN_140de4b5e();
  FUN_140de4b5e(param_1 + 0x10,param_2 + 0x10);
  FUN_1447bdc4c(param_1 + 0x20,param_2 + 0x20);
  FUN_147df385c(param_1 + 0x30,param_2 + 0x30);
  FUN_144a67f5c(param_1 + 0x80,param_2 + 0x80);
  FUN_147df3806(param_1 + 0x90,param_2 + 0x90);
  FUN_145c3f772(param_1 + 0xa0,param_2 + 0xa0);
  FUN_147df3a80(param_1 + 0xf0,param_2 + 0xf0);
  FUN_147df3a80(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  FUN_1447bdc4c(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 147df37ae FUN_147df37ae body=88 status=ok
// SIG undefined FUN_147df37ae(void)

undefined8 * FUN_147df37ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d2de54(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 147df3806 FUN_147df3806 body=85 status=ok
// SIG undefined FUN_147df3806(void)

undefined8 * FUN_147df3806(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147df3a10(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x4c);
      }
    }
  }
  return param_1;
}



// FUNCTION 147df385c FUN_147df385c body=122 status=ok
// SIG undefined FUN_147df385c(void)

longlong FUN_147df385c(longlong param_1,longlong param_2)

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
    FUN_147df38d6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147df38d6 FUN_147df38d6 body=202 status=ok
// SIG undefined FUN_147df38d6(void)

undefined8 * FUN_147df38d6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140ddf9fa(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_147df39a0(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147df39a0 FUN_147df39a0 body=112 status=ok
// SIG undefined FUN_147df39a0(void)

undefined4 * FUN_147df39a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 147df3a10 FUN_147df3a10 body=111 status=ok
// SIG undefined FUN_147df3a10(void)

void FUN_147df3a10(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x4c,4);
    iVar2 = (int)(uVar1 / 0x4c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x4c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147df3a80 FUN_147df3a80 body=93 status=ok
// SIG undefined FUN_147df3a80(void)

undefined8 * FUN_147df3a80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d7adea(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147df3ade(param_1,iVar1);
      FUN_147df3b40(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147df3ade FUN_147df3ade body=98 status=ok
// SIG undefined FUN_147df3ade(void)

void FUN_147df3ade(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147df3b40 FUN_147df3b40 body=117 status=ok
// SIG undefined FUN_147df3b40(void)

void FUN_147df3b40(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_147df3bb6(param_1,iVar1);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147df3bb6 FUN_147df3bb6 body=106 status=ok
// SIG undefined FUN_147df3bb6(void)

undefined8 FUN_147df3bb6(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xc)) {
    uVar5 = uVar2 / 0xc & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147df3c92 FUN_147df3c92 body=104 status=ok
// SIG undefined FUN_147df3c92(void)

undefined8 FUN_147df3c92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_144a67f5c(lVar2,puVar1 + 6);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 10);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147df3d22 FUN_147df3d22 body=59 status=ok
// SIG undefined FUN_147df3d22(void)

undefined8 FUN_147df3d22(longlong *param_1)

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



// FUNCTION 147df3d68 FUN_147df3d68 body=38 status=ok
// SIG undefined FUN_147df3d68(void)

void FUN_147df3d68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147df3e0c FUN_147df3e0c body=63 status=ok
// SIG undefined FUN_147df3e0c(void)

undefined1 FUN_147df3e0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147df36f4(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 147df3e74 FUN_147df3e74 body=59 status=ok
// SIG undefined FUN_147df3e74(void)

undefined8 FUN_147df3e74(longlong *param_1)

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



// FUNCTION 147df3ec0 FUN_147df3ec0 body=38 status=ok
// SIG undefined FUN_147df3ec0(void)

void FUN_147df3ec0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_140d7ac14(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 147df3f46 FUN_147df3f46 body=44 status=ok
// SIG undefined FUN_147df3f46(void)

void FUN_147df3f46(undefined8 param_1,longlong *param_2)

{
  FUN_140d7adea(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147df3f84 FUN_147df3f84 body=54 status=ok
// SIG undefined FUN_147df3f84(void)

undefined1 FUN_147df3f84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147df3a80(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147df3fe2 FUN_147df3fe2 body=59 status=ok
// SIG undefined FUN_147df3fe2(void)

undefined8 FUN_147df3fe2(longlong *param_1)

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



// FUNCTION 147df4080 FUN_147df4080 body=48 status=ok
// SIG undefined FUN_147df4080(void)

void FUN_147df4080(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140d7adea(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147df40b0 FUN_147df40b0 body=353 status=ok
// SIG undefined FUN_147df40b0(void)

void FUN_147df40b0(undefined8 *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_14ab38d10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x25] = 0x100000000c;
  param_1[0x26] = 0x40f86a0000000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x181) = 0x101;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  iVar2 = DAT_14c75efb8;
  dVar3 = (double)DAT_14c75efb8;
  param_1[0x19] = dVar3;
  dVar1 = 1.0;
  if (0 < iVar2) {
    dVar1 = 1.0 / dVar3;
  }
  param_1[0x1a] = dVar1;
  *(undefined4 *)(param_1 + 0x1b) = DAT_14c75efbc;
  *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c75efc4;
  return;
}



// FUNCTION 147df4212 FUN_147df4212 body=38 status=ok
// SIG undefined FUN_147df4212(void)

undefined8 FUN_147df4212(undefined8 param_1,int param_2)

{
  FUN_147df5014();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147df4254 FUN_147df4254 body=895 status=ok
// SIG undefined FUN_147df4254(void)

void FUN_147df4254(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  while( true ) {
    FUN_147df49cc(param_1);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined1 *)(param_1 + 0x181) = *(undefined1 *)(param_2 + 0x181);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      FUN_14008b684(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x2c) < iVar2) {
      FUN_146e37be2(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x3c) < iVar2) {
      FUN_140c108c0(param_1 + 0x30);
    }
    uVar5 = (longlong)*(int *)(param_2 + 0x58) - (longlong)*(int *)(param_2 + 0x84);
    uVar4 = (uint)uVar5;
    if ((uint)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84)) < uVar4) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar5);
      }
      FUN_146ded982(param_1 + 0x50,uVar5 & 0xffffffff);
      iVar2 = 1;
      if (3 < uVar4) {
        uVar4 = (uVar4 | 1) + 0xe;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = 1 << ((byte)iVar2 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0x98) < iVar2)) {
        *(int *)(param_1 + 0x98) = iVar2;
        FUN_146dedb2e(param_1 + 0x50);
      }
    }
    iVar2 = *(int *)(param_2 + 0xa8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xac) < iVar2) {
      FUN_14481578e(param_1 + 0xa0);
    }
    iVar2 = *(int *)(param_2 + 0xb8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xbc) < iVar2) {
      FUN_14481578e(param_1 + 0xb0);
    }
    iVar2 = *(int *)(param_2 + 0x110);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x114) < iVar2) {
      FUN_140c108c0(param_1 + 0x108);
    }
    iVar2 = *(int *)(param_2 + 0x120);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x124) < iVar2) {
      FUN_145784e7e(param_1 + 0x118);
    }
    iVar2 = *(int *)(param_2 + 400);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x194) < iVar2) {
      FUN_14481578e(param_1 + 0x188);
    }
    iVar2 = *(int *)(param_2 + 0x1a0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1a4) < iVar2) {
      FUN_14481578e(param_1 + 0x198);
    }
    iVar2 = *(int *)(param_2 + 0x1b0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1b4) < iVar2) {
      FUN_146dedcd2(param_1 + 0x1a8);
    }
    iVar2 = *(int *)(param_2 + 0x1c0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c4) < iVar2) {
      FUN_14481578e(param_1 + 0x1b8);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_147df5014(lVar3);
        FUN_1400020a8(lVar3);
        return;
      }
      return;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d8,0x10);
      FUN_147df40b0(lVar3);
      lVar1 = *(longlong *)(param_1 + 0xc0);
      *(longlong *)(param_1 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_147df5014(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(param_1 + 0xc0);
      }
    }
    param_2 = *(longlong *)(param_2 + 0xc0);
    param_1 = lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 147df45d4 FUN_147df45d4 body=608 status=ok
// SIG undefined FUN_147df45d4(void)

void FUN_147df45d4(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_34 = param_3;
  cVar1 = FUN_147df626e(&local_40,param_3,0);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
    if (ABS(*(double *)(param_1 + 0x140)) <= 1e-08) {
      QueryPerformanceCounter(&local_30);
      *(double *)(param_1 + 0x140) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    cVar1 = FUN_147df6352(param_2 + 0x10,param_1 + 0x10,&local_34,&local_40);
    if ((((((cVar1 != '\0') &&
           (cVar1 = FUN_147df63c8(param_2 + 0x20,param_1 + 0x20,&local_34,&local_40), cVar1 != '\0')
           ) && (cVar1 = FUN_147df643e(param_2 + 0x30,param_1 + 0x30,&local_34,&local_40),
                cVar1 != '\0')) &&
         ((cVar1 = FUN_147df651e(param_2 + 0xa0,param_1 + 0xa0,&local_34,&local_40), cVar1 != '\0'
          && (cVar1 = FUN_147df651e(param_2 + 0xb0,param_1 + 0xb0,&local_34,&local_40),
             cVar1 != '\0')))) &&
        (((cVar1 = FUN_147df643e(param_2 + 0x108,param_1 + 0x108,&local_34,&local_40), cVar1 != '\0'
          && ((cVar1 = FUN_147df65bc(param_2 + 0x118,param_1 + 0x118,&local_34,&local_40),
              cVar1 != '\0' &&
              (cVar1 = FUN_147df651e(param_2 + 0x188,param_1 + 0x188,&local_34,&local_40),
              cVar1 != '\0')))) &&
         (cVar1 = FUN_147df651e(param_2 + 0x198,param_1 + 0x198,&local_34,&local_40), cVar1 != '\0')
         ))) && (((cVar1 = FUN_147df651e(param_2 + 0x1b8,param_1 + 0x1b8,&local_34,&local_40),
                  cVar1 != '\0' &&
                  (cVar1 = FUN_147df667c(param_2 + 0x1a8,param_1 + 0x1a8,&local_34,&local_40),
                  cVar1 != '\0')) &&
                 ((*(longlong *)(param_1 + 0xc0) == 0 ||
                  (FUN_147df45d4(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0xc0),
                                 param_3), *(char *)(*(longlong *)(param_1 + 0xc0) + 0xc) == '\x01')
                  ))))) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147df4848 FUN_147df4848 body=69 status=ok
// SIG undefined FUN_147df4848(void)

void FUN_147df4848(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = in_stack_00000028;
  FUN_147df6ec0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df488e FUN_147df488e body=253 status=ok
// SIG undefined FUN_147df488e(void)

void FUN_147df488e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = param_6;
  local_b8 = *param_5;
  uStack_b4 = param_5[1];
  uStack_b0 = param_5[2];
  uStack_ac = param_5[3];
  local_a8 = *(undefined8 *)(param_5 + 4);
  FUN_144b01d78(&local_68,param_3,param_4);
  local_c8 = local_38;
  local_d0 = local_60;
  local_e8 = &local_98;
  local_98 = 0x7fefffffffffffff;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0xffefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_d8 = local_68;
  local_e0 = &local_a0;
  FUN_147df7dfa(param_1,param_2,&local_68,&local_b8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df498c FUN_147df498c body=62 status=ok
// SIG undefined FUN_147df498c(void)

void FUN_147df498c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_147df8a06(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df49cc FUN_147df49cc body=745 status=ok
// SIG undefined FUN_147df49cc(void)

void FUN_147df49cc(longlong param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14008b684(param_1 + 0x10,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_146e37bb6(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_146e37be2(param_1 + 0x20,0);
    }
    if (*(int *)(param_1 + 0x3c) < 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_140c108c0(param_1 + 0x30,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    FUN_1402a3552(param_1 + 0x50);
    if (*(int *)(param_1 + 0xac) < 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      FUN_14481578e(param_1 + 0xa0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if (*(int *)(param_1 + 0xbc) < 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      FUN_14481578e(param_1 + 0xb0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    if (*(int *)(param_1 + 0x114) < 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      FUN_140c108c0(param_1 + 0x108,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if (*(int *)(param_1 + 0x124) < 0) {
      *(undefined4 *)(param_1 + 0x120) = 0;
      FUN_145784e7e(param_1 + 0x118,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    if (*(int *)(param_1 + 0x194) < 0) {
      *(undefined4 *)(param_1 + 400) = 0;
      FUN_14481578e(param_1 + 0x188,0);
    }
    else {
      *(undefined4 *)(param_1 + 400) = 0;
    }
    if (*(int *)(param_1 + 0x1a4) < 0) {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      FUN_14481578e(param_1 + 0x198,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
    if (*(int *)(param_1 + 0x1b4) < 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      FUN_146dedcd2(param_1 + 0x1a8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
    if (*(int *)(param_1 + 0x1c4) < 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      FUN_14481578e(param_1 + 0x1b8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    if (*(int *)(param_1 + 0x15c) < 0) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      FUN_14481578e(param_1 + 0x150,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
    if (*(int *)(param_1 + 0x16c) < 0) {
      *(undefined4 *)(param_1 + 0x168) = 0;
      FUN_14481578e(param_1 + 0x160,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x17c);
    FUN_147df5182(*(undefined8 *)(param_1 + 0x170));
    *(undefined4 *)(param_1 + 0x178) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x17c) != 0)) {
      FUN_147df904e(param_1 + 0x170);
    }
    *(undefined1 *)(param_1 + 0x181) = 1;
    *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1 = *(longlong *)(param_1 + 0xc0);
  } while (param_1 != 0);
  return;
}



// FUNCTION 147df4cb6 FUN_147df4cb6 body=56 status=ok
// SIG undefined FUN_147df4cb6(void)

undefined8 * FUN_147df4cb6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1d8,0x10);
  FUN_147df9530(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 147df4cf4 FUN_147df4cf4 body=799 status=ok
// SIG undefined FUN_147df4cf4(void)

void FUN_147df4cf4(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  double *pdVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x28) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140d03e72(param_2);
  }
  FUN_146e08b02(param_2,param_1 + 0x10);
  FUN_146e38167(param_2,param_1 + 0x20);
  FUN_146c9c284(param_2,param_1 + 0x30);
  FUN_146c9c284(param_2,param_1 + 0x108);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x1a < iVar7) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_58 = CONCAT44(local_58._4_4_,1);
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      uVar3 = (uint)(float)local_58;
      if (1 < (uint)(float)local_58) {
        FUN_14572541c(param_2);
        uVar3 = (uint)(float)local_58;
      }
    }
    else {
      uVar3 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) goto LAB_147df4ded;
  }
  FUN_146def3e6(param_1 + 0x118,param_2);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_145784e7e(param_1 + 0x118,0);
  }
LAB_147df4ded:
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x128),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 300),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 300) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pdVar2 = (double *)(param_1 + 0x130);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_58 = CONCAT44(local_58._4_4_,(float)*pdVar2);
    puVar4 = (ulonglong *)param_2[1];
    puVar5 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar5) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_58);
      }
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar5;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)(float)local_58;
    }
  }
  else {
    pdVar6 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x181) = 1;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x182) = 1;
      *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147df5014 FUN_147df5014 body=366 status=ok
// SIG undefined FUN_147df5014(void)

void FUN_147df5014(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  FUN_147df5182(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_147df5014(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9e122(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_146e37bb6(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147df5182 FUN_147df5182 body=50 status=ok
// SIG undefined FUN_147df5182(void)

void FUN_147df5182(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147df51b4 FUN_147df51b4 body=1943 status=ok
// SIG undefined FUN_147df51b4(void)

void FUN_147df51b4(longlong param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_138 [32];
  int local_118;
  double *local_110;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  int local_ac;
  int local_a8 [2];
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar21 = (longlong *)(param_1 + 0x150);
  plVar24 = (longlong *)(param_1 + 0x170);
  lVar18 = param_1 + 0x10;
  local_d0 = param_1 + 0x118;
  local_d8 = param_1 + 0x20;
  local_e0 = param_1 + 0xf4;
  do {
    if (*(int *)(param_1 + 0x158) == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      break;
    }
    iVar16 = *(int *)(param_1 + 0x158) + -1;
    iVar8 = *(int *)(*plVar21 + (longlong)iVar16 * 4);
    lVar20 = (longlong)iVar8 * 0xf8;
    if (*(int *)(*plVar24 + lVar20) == 2) {
      *(int *)(param_1 + 0x158) = iVar16;
LAB_147df5271:
      FUN_147df594e(param_1,iVar8);
      iVar16 = 2;
    }
    else {
      local_104 = *(int *)(*plVar24 + lVar20 + 0x7c);
      if (*(int *)(param_1 + 0x18) <= local_104) {
        FUN_14172ad8e(lVar18,(local_104 - *(int *)(param_1 + 0x18)) + 1);
      }
      cVar15 = FUN_147df5a68(param_1,1);
      if (cVar15 == '\0') break;
      local_a8[0] = local_104;
      local_a0 = local_d0;
      local_88 = local_d8;
      local_78 = local_e0;
      lVar17 = *(longlong *)(param_1 + 0x170);
      local_98 = plVar24;
      local_90 = iVar8;
      local_80 = lVar18;
      if ((*(int *)(lVar17 + 0x40 + lVar20) <= *(int *)(param_1 + 0x128)) ||
         (*(int *)(param_1 + 300) <= ((int *)(lVar17 + lVar20))[0x1e])) {
        FUN_147df5b5c(local_a8);
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
        goto LAB_147df5271;
      }
      iVar16 = *(int *)(lVar17 + lVar20);
      local_f8 = plVar21;
      local_f0 = lVar18;
      if (iVar16 == 0) {
        local_e4 = FUN_147df5c52(param_1);
        iVar16 = FUN_147df5c52();
        *(int *)(*(longlong *)(param_1 + 0x170) + 0xb8 + lVar20) = local_e4;
        *(int *)(*(longlong *)(param_1 + 0x170) + 0xf0 + lVar20) = iVar16;
        lVar18 = *(longlong *)(param_1 + 0x170) + lVar20;
        lVar17 = 0;
        do {
          *(undefined8 *)(lVar18 + 0x88 + lVar17) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar18 + 0x90 + lVar17) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar18 + 0x98 + lVar17) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar18 + 0xa0 + lVar17) = 0xffefffffffffffff;
          *(undefined8 *)(lVar18 + 0xa8 + lVar17) = 0xffefffffffffffff;
          *(undefined8 *)(lVar18 + 0xb0 + lVar17) = 0xffefffffffffffff;
          lVar17 = lVar17 + 0x38;
        } while (lVar17 != 0x70);
        *(undefined4 *)(*plVar24 + 0x80 + lVar20) = 0;
        *(undefined4 *)(*plVar24 + lVar20) = 1;
        lVar18 = *plVar24;
        iVar9 = *(int *)(lVar18 + 0x40 + lVar20);
        iVar23 = iVar9 / 2;
        local_100 = plVar24;
        if (iVar9 < -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar23);
        }
        lVar17 = (longlong)local_e4 * 0xf8;
        if (*(int *)(lVar18 + lVar17 + 0x44) < iVar23) {
          FUN_140c108c0(lVar18 + lVar17 + 0x38,iVar23);
          lVar18 = *local_100;
        }
        lVar19 = (longlong)iVar16 * 0xf8;
        if (*(int *)(lVar18 + 0x44 + lVar19) < iVar23) {
          FUN_140c108c0(lVar18 + lVar19 + 0x38,iVar23);
          lVar18 = *local_100;
        }
        plVar24 = local_100;
        *(undefined8 *)(lVar18 + 0x58 + lVar17) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x48 + lVar17);
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar18 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar18 + 0x70 + lVar17) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x60 + lVar17);
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar18 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar18 + 0x58 + lVar19) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x48 + lVar19);
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar18 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar18 + 0x70 + lVar19) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x60 + lVar19);
        *puVar5 = 0;
        puVar5[1] = 0;
        cVar15 = FUN_147df5a68(param_1,1);
        iVar16 = 1;
        plVar21 = local_f8;
        lVar18 = local_f0;
        if (cVar15 != '\0') {
          lVar17 = *plVar24;
          iVar16 = *(int *)(lVar17 + lVar20);
          goto LAB_147df536a;
        }
      }
      else {
LAB_147df536a:
        lVar18 = local_f0;
        plVar21 = local_f8;
        if (iVar16 == 1) {
          lVar19 = lVar17 + lVar20;
          if ((DAT_14c75efd0 == '\x01') || (*(int *)(param_1 + 0x138) < 1)) {
            local_ac = *(int *)(lVar17 + 0x40 + lVar20);
          }
          else {
            local_ac = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x13c)) +
                       *(int *)(lVar19 + 0x80);
            if (*(int *)(lVar19 + 0x40) <= local_ac) {
              local_ac = *(int *)(lVar19 + 0x40);
            }
          }
          if (DAT_14c75efc8 == 1) {
            dVar7 = *(double *)(lVar17 + 0x60 + lVar20);
            dVar25 = *(double *)(lVar17 + 0x68 + lVar20);
            dVar26 = *(double *)(lVar17 + 0x70 + lVar20);
            if (dVar7 <= dVar25) {
              local_118 = (dVar25 <= dVar26) + 1;
            }
            else {
              local_118 = (uint)(dVar7 <= dVar26) * 2;
            }
          }
          else {
            dVar7 = *(double *)(lVar17 + 0x30 + lVar20) - *(double *)(lVar17 + 0x18 + lVar20);
            dVar26 = *(double *)(lVar17 + 0x28 + lVar20) - *(double *)(lVar17 + 0x10 + lVar20);
            dVar25 = *(double *)(lVar17 + 0x20 + lVar20) - *(double *)(lVar17 + 8 + lVar20);
            local_118 = (dVar26 <= dVar7) + 1;
            if (dVar7 < dVar25 && dVar26 < dVar25) {
              local_118 = 0;
            }
          }
          if (DAT_14c75efcc == 1) {
            local_b8 = *(double *)(lVar17 + 0x58 + lVar20);
            pdVar4 = (double *)(lVar17 + 0x48 + lVar20);
            local_c8 = *pdVar4;
            dStack_c0 = pdVar4[1];
          }
          else {
            local_b8 = *(double *)(lVar17 + 0x18 + lVar20);
            local_c8 = *(double *)(lVar17 + 8 + lVar20);
            dStack_c0 = *(double *)(lVar17 + 0x10 + lVar20);
            local_b8 = (*(double *)(lVar17 + 0x30 + lVar20) - local_b8) * 0.5 + local_b8;
            dStack_c0 = (*(double *)(lVar17 + 0x28 + lVar20) - dStack_c0) * 0.5 + dStack_c0;
            local_c8 = (*(double *)(lVar17 + 0x20 + lVar20) - local_c8) * 0.5 + local_c8;
          }
          local_110 = &local_c8;
          FUN_147df5ca4(param_1,*(undefined4 *)(lVar19 + 0x80),&local_ac);
          *(int *)(*(longlong *)(param_1 + 0x170) + 0x80 + lVar20) = local_ac;
          cVar15 = FUN_147df5a68(param_1,1);
          iVar16 = 1;
          if (cVar15 == '\0') goto LAB_147df5280;
          lVar17 = *plVar24;
        }
        iVar16 = *(int *)(lVar17 + 0xb8 + lVar20);
        lVar18 = (longlong)iVar16 * 0xf8;
        if (*(int *)(lVar17 + 0x40 + lVar18) != 0) {
          iVar9 = *(int *)(lVar17 + 0xf0 + lVar20);
          lVar19 = (longlong)iVar9 * 0xf8;
          if (*(int *)(lVar17 + 0x40 + lVar19) != 0) {
            lVar22 = (longlong)local_104 * 0x70;
            pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar22);
            *pbVar1 = *pbVar1 & 0xfe;
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar17 + 0x10 + lVar22) = *(undefined8 *)(lVar10 + 0x98 + lVar20);
            puVar5 = (undefined8 *)(lVar10 + 0x88 + lVar20);
            uVar14 = puVar5[1];
            *(undefined8 *)(lVar17 + lVar22) = *puVar5;
            ((undefined8 *)(lVar17 + lVar22))[1] = uVar14;
            *(undefined8 *)(lVar17 + 0x28 + lVar22) = *(undefined8 *)(lVar10 + 0xb0 + lVar20);
            puVar6 = (undefined8 *)(lVar10 + 0xa0 + lVar20);
            uVar14 = puVar6[1];
            puVar5 = (undefined8 *)(lVar17 + 0x18 + lVar22);
            *puVar5 = *puVar6;
            puVar5[1] = uVar14;
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar10 + 0x18 + lVar18) = *(undefined8 *)(lVar17 + 0x10 + lVar22);
            uVar14 = ((undefined8 *)(lVar17 + lVar22))[1];
            puVar5 = (undefined8 *)(lVar10 + 8 + lVar18);
            *puVar5 = *(undefined8 *)(lVar17 + lVar22);
            puVar5[1] = uVar14;
            *(undefined8 *)(lVar10 + 0x30 + lVar18) = *(undefined8 *)(lVar17 + 0x28 + lVar22);
            puVar5 = (undefined8 *)(lVar17 + 0x18 + lVar22);
            uVar14 = puVar5[1];
            puVar6 = (undefined8 *)(lVar10 + 0x20 + lVar18);
            *puVar6 = *puVar5;
            puVar6[1] = uVar14;
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar22) =
                 *(undefined4 *)(param_1 + 0x18);
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar17 + 0x40 + lVar22) = *(undefined8 *)(lVar10 + 0xd0 + lVar20);
            puVar6 = (undefined8 *)(lVar10 + 0xc0 + lVar20);
            uVar14 = puVar6[1];
            puVar5 = (undefined8 *)(lVar17 + 0x30 + lVar22);
            *puVar5 = *puVar6;
            puVar5[1] = uVar14;
            *(undefined8 *)(lVar17 + 0x58 + lVar22) = *(undefined8 *)(lVar10 + 0xe8 + lVar20);
            puVar6 = (undefined8 *)(lVar10 + 0xd8 + lVar20);
            uVar14 = puVar6[1];
            puVar5 = (undefined8 *)(lVar17 + 0x48 + lVar22);
            *puVar5 = *puVar6;
            puVar5[1] = uVar14;
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar10 + 0x18 + lVar19) = *(undefined8 *)(lVar17 + 0x40 + lVar22);
            puVar5 = (undefined8 *)(lVar17 + 0x30 + lVar22);
            uVar14 = puVar5[1];
            puVar6 = (undefined8 *)(lVar10 + 8 + lVar19);
            *puVar6 = *puVar5;
            puVar6[1] = uVar14;
            *(undefined8 *)(lVar10 + 0x30 + lVar19) = *(undefined8 *)(lVar17 + 0x58 + lVar22);
            puVar2 = (undefined4 *)(lVar17 + 0x48 + lVar22);
            uVar11 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            puVar3 = (undefined4 *)(lVar10 + 0x20 + lVar19);
            *puVar3 = *puVar2;
            puVar3[1] = uVar11;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            *(int *)(*(longlong *)(param_1 + 0x10) + 100 + lVar22) = *(int *)(param_1 + 0x18) + 1;
            *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar18) =
                 *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar20) + 1;
            *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar19) =
                 *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar20) + 1;
            *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x7c + lVar18) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar22);
            *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x7c + lVar19) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar22);
            iVar8 = *(int *)(param_1 + 0x158);
            *(uint *)(param_1 + 0x158) = iVar8 + 1U;
            local_100 = plVar24;
            if (*(uint *)(param_1 + 0x15c) < iVar8 + 1U) {
              FUN_1446f48e2(local_f8,iVar8);
            }
            plVar21 = local_f8;
            *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 4) = iVar9;
            iVar8 = *(int *)(param_1 + 0x158);
            *(uint *)(param_1 + 0x158) = iVar8 + 1U;
            if (*(uint *)(param_1 + 0x15c) < iVar8 + 1U) {
              FUN_1446f48e2(local_f8,iVar8);
            }
            lVar18 = local_f0;
            *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 4) = iVar16;
            FUN_14172ad8e(local_f0,(*(int *)(*(longlong *)(param_1 + 0x10) + 100 + lVar22) -
                                   *(int *)(param_1 + 0x18)) + 1);
            *(undefined4 *)(*(longlong *)(param_1 + 0x170) + lVar20) = 2;
            iVar16 = 0;
            plVar24 = local_100;
            goto LAB_147df5280;
          }
        }
        FUN_147df5b5c(local_a8);
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
        FUN_147df594e(param_1,iVar8);
        iVar16 = 0;
        plVar21 = local_f8;
        lVar18 = local_f0;
      }
    }
LAB_147df5280:
  } while (iVar16 != 1);
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147df594e FUN_147df594e body=280 status=ok
// SIG undefined FUN_147df594e(void)

void FUN_147df594e(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 auStack_148 [5];
  longlong local_120 [31];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120[0]._0_4_ = 0;
  local_120[1] = 0x7fefffffffffffff;
  local_120[2] = 0x7fefffffffffffff;
  local_120[3] = 0x7fefffffffffffff;
  local_120[4] = 0xffefffffffffffff;
  local_120[5] = 0xffefffffffffffff;
  local_120[6] = 0xffefffffffffffff;
  local_120[7] = 0;
  local_120[8] = 0;
  lVar2 = 0xb0;
  do {
    *(undefined8 *)((longlong)auStack_148 + lVar2) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 0x18) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)local_120 + lVar2) = 0xffefffffffffffff;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x120);
  FUN_147df604e((longlong)param_2 * 0xf8 + *(longlong *)(param_1 + 0x170),local_120);
  if (local_120[7] != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x168);
  *(uint *)(param_1 + 0x168) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x160),iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar1 * 4) = param_2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df5a68 FUN_147df5a68 body=242 status=ok
// SIG undefined FUN_147df5a68(void)

ulonglong FUN_147df5a68(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  undefined7 uVar6;
  int iVar7;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  iVar2 = DAT_14c75efd4;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c75efd0 == '\x01') {
    if (param_2 == '\0') {
      iVar1 = *(int *)(param_1 + 0x148);
      uVar5 = CONCAT71((int7)(local_10 >> 8),1);
      iVar7 = 0;
      if (iVar1 < DAT_14c75efd4) {
        iVar7 = iVar1 + 1;
      }
      *(int *)(param_1 + 0x148) = iVar7;
      if (iVar1 < iVar2) goto LAB_147df5b3a;
    }
    BVar4 = QueryPerformanceCounter(&local_18);
    uVar6 = (undefined7)(CONCAT44(extraout_var,BVar4) >> 8);
    uVar5 = CONCAT71(uVar6,1);
    if (0.0 < DAT_14c75efd8) {
      uVar5 = CONCAT71(uVar6,((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) -
                             *(double *)(param_1 + 0x140) <= (double)DAT_14c75efd8 ||
                             (ABS(*(double *)(param_1 + 0x140)) <= 1e-08 ||
                             *(int *)(param_1 + 0x138) < 1));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x138);
    uVar3 = (uint3)((uint)iVar2 >> 8);
    if (iVar2 < 1) {
      uVar5 = CONCAT71((uint7)uVar3,1);
    }
    else {
      uVar5 = (ulonglong)CONCAT31(uVar3,*(int *)(param_1 + 0x13c) < iVar2);
    }
  }
LAB_147df5b3a:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df5b5c FUN_147df5b5c body=244 status=ok
// SIG undefined FUN_147df5b5c(void)

/* WARNING: Removing unreachable block (ram,0x000147df5c1c) */

void FUN_147df5b5c(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)(**(longlong **)(param_1 + 10) + 0x6c + (longlong)*param_1 * 0x70);
  *pbVar1 = *pbVar1 | 1;
  plVar3 = *(longlong **)(param_1 + 8);
  FUN_146e37c54(&local_40);
  iVar2 = (int)plVar3[1];
  lVar5 = (longlong)iVar2;
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_146e37ca6(plVar3);
  }
  lVar4 = *plVar3;
  *(undefined8 *)(lVar4 + lVar5 * 0x18) = 0;
  *(undefined8 *)(lVar4 + lVar5 * 0x18) = local_40;
  *(undefined4 *)(lVar4 + 8 + lVar5 * 0x18) = (undefined4)local_38;
  *(undefined4 *)(lVar4 + 0xc + lVar5 * 0x18) = local_38._4_4_;
  *(undefined1 *)(lVar4 + 0x10 + lVar5 * 0x18) = local_30;
  *(int *)(**(longlong **)(param_1 + 10) + 0x60 + (longlong)*param_1 * 0x70) = iVar2;
  local_38 = 0;
  local_40 = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147df5c52 FUN_147df5c52 body=82 status=ok
// SIG undefined FUN_147df5c52(void)

ulonglong FUN_147df5c52(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x160) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x168) = iVar1 + -1;
    FUN_14479f406(param_1 + 0x160);
    return (ulonglong)uVar2;
  }
  uVar3 = FUN_147df6118(param_1 + 0x170,1);
  return uVar3;
}



// FUNCTION 147df5ca4 FUN_147df5ca4 body=938 status=ok
// SIG undefined FUN_147df5ca4(void)

void FUN_147df5ca4(longlong param_1,int param_2,int *param_3,longlong param_4,int param_5,
                  longlong param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  double *pdVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  iVar11 = *param_3;
  if (param_2 < iVar11) {
    dVar3 = *(double *)(param_6 + (longlong)param_5 * 8);
    lVar13 = (longlong)param_2;
    lVar19 = lVar13 * 0x38 + 0x30;
    iVar16 = 0;
    do {
      lVar7 = *(longlong *)(param_4 + 0x38);
      dVar4 = *(double *)(lVar7 + -0x18 + lVar19);
      dVar5 = *(double *)(lVar7 + -0x28 + lVar19);
      dVar6 = *(double *)(lVar7 + -0x20 + lVar19);
      dVar4 = (*(double *)(lVar7 + lVar19) - dVar4) * 0.5 + dVar4;
      dVar6 = (*(double *)(lVar7 + -8 + lVar19) - dVar6) * 0.5 + dVar6;
      dVar5 = (*(double *)(lVar7 + -0x10 + lVar19) - dVar5) * 0.5 + dVar5;
      dVar8 = dVar4;
      if ((param_5 != 2) && (dVar8 = dVar5, param_5 == 1)) {
        dVar8 = dVar6;
      }
      lVar17 = (ulonglong)(dVar3 < dVar8) * 0x38;
      lVar15 = *(longlong *)(param_1 + 0x170);
      lVar12 = (longlong)*(int *)(param_4 + 0xb8 + lVar17) * 0xf8;
      iVar11 = *(int *)(lVar15 + 0x40 + lVar12);
      uVar14 = iVar11 + 1;
      *(uint *)(lVar15 + 0x40 + lVar12) = uVar14;
      if (*(uint *)(lVar15 + 0x44 + lVar12) < uVar14) {
        FUN_140c11858(lVar15 + lVar12 + 0x38,iVar11);
      }
      pdVar1 = (double *)(lVar7 + lVar19);
      pdVar18 = (double *)(lVar17 + param_4 + 0x88);
      lVar15 = lVar15 + lVar12;
      lVar7 = *(longlong *)(lVar15 + 0x38);
      lVar12 = (longlong)iVar11 * 0x38;
      *(undefined4 *)(lVar7 + lVar12) = *(undefined4 *)(pdVar1 + -6);
      *(double *)(lVar7 + 0x18 + lVar12) = pdVar1[-3];
      dVar8 = pdVar1[-4];
      pdVar2 = (double *)(lVar7 + 8 + lVar12);
      *pdVar2 = pdVar1[-5];
      pdVar2[1] = dVar8;
      dVar8 = pdVar1[-1];
      pdVar2 = (double *)(lVar7 + 0x20 + lVar12);
      *pdVar2 = pdVar1[-2];
      pdVar2[1] = dVar8;
      dVar8 = (double)(int)uVar14;
      *(double *)(lVar7 + 0x30 + lVar12) = *pdVar1;
      dVar20 = pdVar18[2];
      if (pdVar1[-3] <= pdVar18[2]) {
        dVar20 = pdVar1[-3];
      }
      dVar22 = pdVar18[1];
      if (pdVar1[-4] <= pdVar18[1]) {
        dVar22 = pdVar1[-4];
      }
      dVar23 = pdVar1[-5];
      dVar21 = *pdVar18;
      if (dVar23 <= *pdVar18) {
        dVar21 = dVar23;
      }
      *pdVar18 = dVar21;
      pdVar18[1] = dVar22;
      pdVar18[2] = dVar20;
      dVar20 = pdVar18[5];
      if (pdVar18[5] <= *pdVar1) {
        dVar20 = *pdVar1;
      }
      dVar22 = pdVar18[4];
      if (pdVar18[4] <= pdVar1[-1]) {
        dVar22 = pdVar1[-1];
      }
      dVar23 = pdVar18[3];
      if (pdVar18[3] <= pdVar1[-2]) {
        dVar23 = pdVar1[-2];
      }
      pdVar18[3] = dVar23;
      pdVar18[4] = dVar22;
      pdVar18[5] = dVar20;
      dVar24 = dVar4 - *(double *)(lVar15 + 0x58);
      dVar21 = dVar6 - *(double *)(lVar15 + 0x50);
      dVar20 = dVar5 - *(double *)(lVar15 + 0x48);
      dVar23 = dVar20 / dVar8 + *(double *)(lVar15 + 0x48);
      *(double *)(lVar15 + 0x48) = dVar23;
      dVar22 = dVar21 / dVar8 + *(double *)(lVar15 + 0x50);
      *(double *)(lVar15 + 0x50) = dVar22;
      dVar8 = dVar24 / dVar8 + *(double *)(lVar15 + 0x58);
      *(double *)(lVar15 + 0x58) = dVar8;
      *(double *)(lVar15 + 0x60) = (dVar5 - dVar23) * dVar20 + *(double *)(lVar15 + 0x60);
      *(double *)(lVar15 + 0x68) = (dVar6 - dVar22) * dVar21 + *(double *)(lVar15 + 0x68);
      *(double *)(lVar15 + 0x70) = (dVar4 - dVar8) * dVar24 + *(double *)(lVar15 + 0x70);
      cVar10 = FUN_147df5a68(param_1,0);
      iVar11 = *param_3;
      if (cVar10 == '\0') {
        iVar9 = (param_2 - iVar16) + 1;
        if (param_2 - iVar16 == iVar11 + -1) {
          iVar9 = iVar11;
        }
        iVar11 = iVar9;
        *param_3 = iVar11;
        break;
      }
      lVar13 = lVar13 + 1;
      iVar16 = iVar16 + -1;
      lVar19 = lVar19 + 0x38;
    } while (lVar13 < iVar11);
  }
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + (iVar11 - param_2);
  return;
}


