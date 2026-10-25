// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457eca3c FUN_1457eca3c body=55 status=ok
// SIG undefined FUN_1457eca3c(void)

void FUN_1457eca3c(longlong *param_1)

{
  FUN_1457ecaee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457eca74 FUN_1457eca74 body=122 status=ok
// SIG undefined FUN_1457eca74(void)

longlong FUN_1457eca74(longlong param_1,longlong param_2)

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
    FUN_1457ecc80(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1457ecaee FUN_1457ecaee body=400 status=ok
// SIG undefined FUN_1457ecaee(void)

void FUN_1457ecaee(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78 + (longlong)iStack_5c * 0x50;
      FUN_145d5702a(lVar2 + 0x28);
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e9549c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ecc80 FUN_1457ecc80 body=212 status=ok
// SIG undefined FUN_1457ecc80(void)

undefined8 * FUN_1457ecc80(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1457ecaee(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406fba42(param_1);
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
          FUN_14889d4ca(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(puVar4 + 0x12);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x14;
        puVar6 = puVar6 + 0x14;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1457ecd54 FUN_1457ecd54 body=132 status=ok
// SIG undefined FUN_1457ecd54(void)

void FUN_1457ecd54(longlong param_1,int param_2)

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



// FUNCTION 1457ecdd8 FUN_1457ecdd8 body=147 status=ok
// SIG undefined FUN_1457ecdd8(void)

void FUN_1457ecdd8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1457ece6c FUN_1457ece6c body=150 status=ok
// SIG undefined FUN_1457ece6c(void)

void FUN_1457ece6c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1030,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1030)) {
      uVar5 = uVar4 / 0x1030 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1030,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457ecf04 FUN_1457ecf04 body=132 status=ok
// SIG undefined FUN_1457ecf04(void)

void FUN_1457ecf04(longlong param_1,int param_2)

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



// FUNCTION 1457ecf88 FUN_1457ecf88 body=38 status=ok
// SIG undefined FUN_1457ecf88(void)

undefined8 FUN_1457ecf88(undefined8 param_1,int param_2)

{
  FUN_141082778();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ecfae FUN_1457ecfae body=38 status=ok
// SIG undefined FUN_1457ecfae(void)

undefined8 FUN_1457ecfae(undefined8 param_1,int param_2)

{
  FUN_1457ecfd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ecfd4 FUN_1457ecfd4 body=422 status=ok
// SIG undefined FUN_1457ecfd4(void)

void FUN_1457ecfd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149f3b580;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1457ed17a(param_1 + 0x1c);
  puVar1 = (undefined8 *)param_1[0x1b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x1a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x19];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x18];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1457ed1b0(param_1 + 0xe);
  FUN_1457ed4c4(param_1 + 0xc,0);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457ed538(param_1 + 10,0);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    FUN_146c543c2(lVar2);
    FUN_1400020a8(lVar2);
  }
  FUN_1457ed1e6(param_1 + 6);
  FUN_1457ed222(param_1 + 4);
  *param_1 = &PTR_FUN_149f3b7d0;
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457ed17a FUN_1457ed17a body=53 status=ok
// SIG undefined FUN_1457ed17a(void)

void FUN_1457ed17a(longlong *param_1)

{
  FUN_1457ed708();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457ed1b0 FUN_1457ed1b0 body=53 status=ok
// SIG undefined FUN_1457ed1b0(void)

void FUN_1457ed1b0(longlong *param_1)

{
  FUN_1457ed5ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457ed1e6 FUN_1457ed1e6 body=60 status=ok
// SIG undefined FUN_1457ed1e6(void)

void FUN_1457ed1e6(longlong *param_1)

{
  FUN_1457ed25e();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457ed222 FUN_1457ed222 body=60 status=ok
// SIG undefined FUN_1457ed222(void)

void FUN_1457ed222(longlong *param_1)

{
  FUN_1457ed2a0();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457ed25e FUN_1457ed25e body=66 status=ok
// SIG undefined FUN_1457ed25e(void)

void FUN_1457ed25e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1457ed45a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 1457ed2a0 FUN_1457ed2a0 body=66 status=ok
// SIG undefined FUN_1457ed2a0(void)

void FUN_1457ed2a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1457ed328(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 1457ed2e2 FUN_1457ed2e2 body=70 status=ok
// SIG undefined FUN_1457ed2e2(void)

undefined8 * FUN_1457ed2e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f3bf50;
  FUN_141082b5c(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ed328 FUN_1457ed328 body=106 status=ok
// SIG undefined FUN_1457ed328(void)

void FUN_1457ed328(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x78,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1457ed392(param_1 + 0x48,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14117c64e(param_1 + 8);
  return;
}



// FUNCTION 1457ed392 FUN_1457ed392 body=104 status=ok
// SIG undefined FUN_1457ed392(void)

void FUN_1457ed392(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1457ed3fa(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1457ed3fa FUN_1457ed3fa body=96 status=ok
// SIG undefined FUN_1457ed3fa(void)

void FUN_1457ed3fa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1457ed45a FUN_1457ed45a body=106 status=ok
// SIG undefined FUN_1457ed45a(void)

void FUN_1457ed45a(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x78,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1457ed392(param_1 + 0x48,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14117c64e(param_1 + 8);
  return;
}



// FUNCTION 1457ed4c4 FUN_1457ed4c4 body=115 status=ok
// SIG undefined FUN_1457ed4c4(void)

void FUN_1457ed4c4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1457ed538 FUN_1457ed538 body=115 status=ok
// SIG undefined FUN_1457ed538(void)

void FUN_1457ed538(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1447ab16c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1457ed5ac FUN_1457ed5ac body=347 status=ok
// SIG undefined FUN_1457ed5ac(void)

void FUN_1457ed5ac(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = (undefined8 *)(*local_68 + (longlong)iStack_4c * 0x18 + 8);
      FUN_146c55ce2(puVar2,*puVar2);
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



// FUNCTION 1457ed708 FUN_1457ed708 body=351 status=ok
// SIG undefined FUN_1457ed708(void)

void FUN_1457ed708(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
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



// FUNCTION 1457ed868 FUN_1457ed868 body=59 status=ok
// SIG undefined FUN_1457ed868(void)

longlong FUN_1457ed868(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457ed8ba(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1457ed8a3(lVar2);
  return lVar2;
}



// FUNCTION 1457ed8a3 FUN_1457ed8a3 body=22 status=ok
// SIG undefined FUN_1457ed8a3(void)

void FUN_1457ed8a3(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1457ed8ba FUN_1457ed8ba body=132 status=ok
// SIG undefined FUN_1457ed8ba(void)

void FUN_1457ed8ba(longlong param_1,int param_2)

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



// FUNCTION 1457ed93e FUN_1457ed93e body=269 status=ok
// SIG undefined FUN_1457ed93e(void)

void FUN_1457ed93e(longlong param_1)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined1 *local_d8 [2];
  undefined ***local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined1 *local_98;
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = local_58;
  local_58[0] = 0;
  local_48 = (longlong *)0x0;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_14b967ea0;
  local_98 = &LAB_1441140ea;
  local_c8 = (undefined ***)0x0;
  local_b8 = &PTR_LAB_14b967e80;
  local_b0 = &LAB_1441140de;
  local_d8[0] = &LAB_148d162c6;
  local_70 = param_1;
  FUN_1457eda78(param_1,param_1 + 0x60,local_d8);
  if (local_d8[0] != (undefined1 *)0x0) {
    pppuVar1 = local_c8;
    if (local_c8 == (undefined ***)0x0) {
      pppuVar1 = &local_b8;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_98 != (undefined1 *)0x0) {
    pppuVar1 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar1 = &local_78;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_58[0] != 0) {
    plVar2 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar2 = local_38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eda4c FUN_1457eda4c body=12 status=ok
// SIG undefined FUN_1457eda4c(void)

void FUN_1457eda4c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457eda55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1457eda58 FUN_1457eda58 body=31 status=ok
// SIG undefined FUN_1457eda58(void)

undefined8 FUN_1457eda58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457eda78 FUN_1457eda78 body=710 status=ok
// SIG undefined FUN_1457eda78(void)

void FUN_1457eda78(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      *(undefined2 *)(lVar11 + 0x10 + lVar7) = 0x100;
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar7);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)param_2[1] != 0) {
    lVar11 = *param_2;
    lVar7 = (longlong)(int)param_2[1] * 0x20 + lVar11;
    local_68 = param_4 + 4;
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      local_58 = lVar11;
      local_50 = param_3;
      if ((longlong)iVar2 != 0) {
        local_70 = *(longlong *)(param_1 + 0x38);
        lVar10 = 0;
        do {
          cVar3 = FUN_148d16248(&local_58,local_70 + lVar10);
          if (cVar3 != '\0') {
            uVar8 = (int)(lVar10 >> 3) * -0x55555555;
            if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x40))) {
              *(undefined1 *)(*plVar1 + 0x11 + (ulonglong)(uVar8 & 0x7fffffff) * 0x18) = 0;
              if ((*param_5 == 0) ||
                 (lVar10 = *(longlong *)(*plVar1 + (ulonglong)(uVar8 & 0x7fffffff) * 0x18),
                 lVar10 == 0)) goto LAB_1457edb8c;
              lVar6 = FUN_145a25706();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1457edb8c;
              pcVar9 = (code *)*param_5;
              plVar4 = param_5 + 4;
              if ((longlong *)param_5[2] != (longlong *)0x0) {
                plVar4 = (longlong *)param_5[2];
              }
              goto LAB_1457edb7a;
            }
            break;
          }
          lVar10 = lVar10 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar10);
      }
      plVar4 = (longlong *)FUN_1404e9402(plVar1);
      *(undefined2 *)(plVar4 + 2) = 1;
      uVar5 = FUN_145a25706();
      FUN_1404e95e0(param_1,&local_60,uVar5);
      if ((*plVar4 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar10 = local_60;
      *plVar4 = local_60;
      if (local_60 != 0) {
        lVar6 = FUN_145a25706();
        if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
           (pcVar9 = (code *)*param_4, pcVar9 != (code *)0x0)) {
          plVar4 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar4 = local_68;
          }
LAB_1457edb7a:
          uVar5 = (**(code **)(*plVar4 + 8))();
          (*pcVar9)(uVar5,lVar10,lVar11);
        }
      }
LAB_1457edb8c:
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != lVar7);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar11 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar4[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar7 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_60,plVar4[-1]);
          lVar7 = local_60;
        }
        *plVar4 = lVar7;
      }
      else if (*(char *)((longlong)plVar4 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar4);
        }
        FUN_1404e9462(param_1,plVar4 + -1);
      }
      plVar4 = plVar4 + 3;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
  }
  FUN_1457edd40(plVar1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457edd40 FUN_1457edd40 body=104 status=ok
// SIG undefined FUN_1457edd40(void)

void FUN_1457edd40(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar4 = 0;
  bVar1 = false;
  do {
    uVar4 = (ulonglong)(int)uVar4;
    pcVar3 = (char *)(*param_1 + uVar4 * 0x18 + 0x11);
    while (*pcVar3 == '\0') {
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x18;
      if ((longlong)iVar2 <= (longlong)uVar4) {
        if (!bVar1) {
          return;
        }
        goto LAB_1457edd8f;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_1457edd8f:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 1457eddb0 FUN_1457eddb0 body=97 status=ok
// SIG undefined FUN_1457eddb0(void)

undefined8 * FUN_1457eddb0(undefined8 *param_1)

{
  FUN_1457ede12();
  *param_1 = &PTR_FUN_14bc72650;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FUN_14020fad6(param_1 + 0x4e,L"bUseInverseSquaredFalloff");
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  FUN_14020fad6(param_1 + 0x50,L"LightFalloffExponent");
  return param_1;
}



// FUNCTION 1457ede12 FUN_1457ede12 body=201 status=ok
// SIG undefined FUN_1457ede12(void)

undefined8 * FUN_1457ede12(undefined8 *param_1)

{
  FUN_1457ededc();
  *param_1 = &PTR_FUN_14bc71640;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_14020fad6(param_1 + 0x42,L"IntensityUnits");
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_14020fad6(param_1 + 0x44,L"AttenuationRadius");
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  FUN_14020fad6(param_1 + 0x46,L"IESTexture");
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  FUN_14020fad6(param_1 + 0x48,L"UseIESBrightness");
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_14020fad6(param_1 + 0x4a,L"IESBrightnessScale");
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_14020fad6(param_1 + 0x4c,L"Rotation");
  return param_1;
}



// FUNCTION 1457ededc FUN_1457ededc body=149 status=ok
// SIG undefined FUN_1457ededc(void)

undefined8 * FUN_1457ededc(undefined8 *param_1)

{
  FUN_1457edf72();
  *param_1 = &PTR_FUN_14bc701b0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"LightColor");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"Intensity");
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14020fad6(param_1 + 0x3e,L"Temperature");
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14020fad6(param_1 + 0x40,L"bUseTemperature");
  return param_1;
}



// FUNCTION 1457edf72 FUN_1457edf72 body=646 status=ok
// SIG undefined FUN_1457edf72(void)

undefined8 * FUN_1457edf72(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc78960;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"GlobalTransform");
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"LocalTransform");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"ActorClassName");
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_14020fad6(param_1 + 0x30,L"Mobility");
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_140056680(local_50,L"__LayerNames__");
  local_60 = param_1[5];
  plVar4 = (longlong *)param_1[6];
  if (plVar4 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = plVar4;
  }
  FUN_1410835a0(param_1 + 0x32,&local_60,local_50);
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"__Tags__");
  local_60 = param_1[5];
  plVar4 = (longlong *)param_1[6];
  if (plVar4 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = plVar4;
  }
  FUN_1410835a0(param_1 + 0x36,&local_60,local_50);
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ee1fa FUN_1457ee1fa body=9 status=ok
// SIG undefined FUN_1457ee1fa(void)

void FUN_1457ee1fa(longlong param_1)

{
  FUN_1457ee204(param_1 + 0x10);
  return;
}



// FUNCTION 1457ee204 FUN_1457ee204 body=57 status=ok
// SIG undefined FUN_1457ee204(void)

void FUN_1457ee204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b24d540;
  FUN_14108399b(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1457ee23e FUN_1457ee23e body=75 status=ok
// SIG undefined FUN_1457ee23e(void)

void FUN_1457ee23e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 8);
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
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1457ee2a0 FUN_1457ee2a0 body=29 status=ok
// SIG undefined FUN_1457ee2a0(void)

undefined8 FUN_1457ee2a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ee2be FUN_1457ee2be body=54 status=ok
// SIG undefined FUN_1457ee2be(void)

void FUN_1457ee2be(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_1401e1e6a(*(undefined8 *)(*plVar1 + 8));
    FUN_1400020a8(*plVar1);
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 1457ee2fa FUN_1457ee2fa body=57 status=ok
// SIG undefined FUN_1457ee2fa(void)

void FUN_1457ee2fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60c18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60c18 = FUN_140002ddd(FUN_1464ef028,uVar1,L"GbxMomentNodeState_PlayDialog");
  }
  return;
}



// FUNCTION 1457ee334 FUN_1457ee334 body=30 status=ok
// SIG undefined FUN_1457ee334(void)

void FUN_1457ee334(longlong param_1)

{
  FUN_145be2608(param_1 + -0x30);
  FUN_1410843e4(param_1);
  return;
}



// FUNCTION 1457ee352 FUN_1457ee352 body=101 status=ok
// SIG undefined FUN_1457ee352(void)

void FUN_1457ee352(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba0ade0;
  param_1[5] = &PTR_FUN_14ba0b190;
  param_1[0x13] = &PTR_FUN_14ba0b1b0;
  param_1[0x14] = &PTR_FUN_14ba0b1d0;
  param_1[0x15] = &PTR_FUN_14ba0b200;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 1457ee3b8 thunk_FUN_1411412f4 body=5 status=ok
// SIG undefined thunk_FUN_1411412f4(void)

void thunk_FUN_1411412f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aed80a0;
  param_1[5] = &PTR_FUN_14aed8420;
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457ee3be FUN_1457ee3be body=151 status=ok
// SIG undefined FUN_1457ee3be(void)

void FUN_1457ee3be(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x128);
  if (lVar3 == 0) {
    uVar4 = FUN_14034f1a8();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x128) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x120));
    }
    *(undefined8 *)(param_1 + 0x130) = uVar4;
    return;
  }
  return;
}



// FUNCTION 1457ee456 FUN_1457ee456 body=485 status=ok
// SIG undefined FUN_1457ee456(void)

void FUN_1457ee456(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_8c [4];
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 3) = 1;
  plVar1 = (longlong *)FUN_140d6a126(DAT_14c872ce0,param_1[1],0,*param_1);
  uVar2 = local_70;
  if (plVar1 != (longlong *)0x0) {
    local_58 = plVar1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)plVar1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_70 = local_50;
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = plVar1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar4 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar3 = *local_88;
        lVar5 = (longlong)iVar4 * 0x40;
        if (*(longlong *)(lVar3 + lVar5) == param_1[2]) {
          uVar6 = (ulonglong)(*(int *)(lVar3 + 0x28 + lVar5) - 2U < 0x7fffffff) * 0x10;
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(uVar6 + 0x18 + lVar3 + lVar5) != 0) {
            puVar7 = *(undefined2 **)(lVar3 + lVar5 + 8 + (uVar6 | 8));
          }
          uVar2 = FUN_144a3a302();
          local_a0 = 0;
          local_a8 = 0;
          lVar3 = FUN_141433b6f(uVar2,0,puVar7,0);
          if (lVar3 != 0) {
            local_60 = 0;
            FUN_14485c47a(&local_60,lVar3);
            FUN_1457ee63c(param_1 + 4,local_8c,&local_60);
          }
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ee63c FUN_1457ee63c body=282 status=ok
// SIG undefined FUN_1457ee63c(void)

undefined4 * FUN_1457ee63c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457ee7de(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_1457ee758(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1457ee97a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ee758 FUN_1457ee758 body=132 status=ok
// SIG undefined FUN_1457ee758(void)

undefined8 FUN_1457ee758(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_1457ee8c4();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_147adf6b4(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_1457ee79a;
    }
  }
  uVar2 = 0;
LAB_1457ee79a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ee7de FUN_1457ee7de body=230 status=ok
// SIG undefined FUN_1457ee7de(void)

int * FUN_1457ee7de(longlong *param_1,int *param_2)

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



// FUNCTION 1457ee8c4 FUN_1457ee8c4 body=180 status=ok
// SIG undefined FUN_1457ee8c4(void)

int FUN_1457ee8c4(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_14476110a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1457ee952;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1457ee952:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ee97a FUN_1457ee97a body=448 status=ok
// SIG undefined FUN_1457ee97a(void)

void FUN_1457ee97a(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1457eeb3c FUN_1457eeb3c body=40 status=ok
// SIG undefined FUN_1457eeb3c(void)

undefined8 FUN_1457eeb3c(undefined8 param_1,int param_2)

{
  FUN_1457eeb64();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457eeb64 FUN_1457eeb64 body=74 status=ok
// SIG undefined FUN_1457eeb64(void)

void FUN_1457eeb64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3d4a40;
  param_1[6] = &PTR_FUN_14a3d4d20;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1410891e4(param_1);
  return;
}



// FUNCTION 1457eebae FUN_1457eebae body=704 status=ok
// SIG undefined FUN_1457eebae(void)

void FUN_1457eebae(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      *(undefined2 *)(lVar10 + 0x10 + lVar6) = 0x100;
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)param_2[1] != 0) {
    lVar10 = *param_2;
    local_68 = lVar10 + (longlong)(int)param_2[1] * 0x18;
    local_70 = param_4 + 4;
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      local_58 = lVar10;
      local_50 = param_3;
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x38);
        lVar9 = 0;
        do {
          cVar3 = FUN_1457eeed8(&local_58,lVar6 + lVar9);
          if (cVar3 != '\0') {
            uVar8 = (int)(lVar9 >> 3) * -0x55555555;
            if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x40))) {
              *(undefined1 *)(*plVar1 + 0x11 + (ulonglong)(uVar8 & 0x7fffffff) * 0x18) = 0;
              if ((*param_5 == 0) ||
                 (lVar6 = *(longlong *)(*plVar1 + (ulonglong)(uVar8 & 0x7fffffff) * 0x18),
                 lVar6 == 0)) goto LAB_1457eecf4;
              lVar9 = FUN_141089b9c();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_1457eecf4;
              pcVar7 = (code *)*param_5;
              plVar4 = param_5 + 4;
              if ((longlong *)param_5[2] != (longlong *)0x0) {
                plVar4 = (longlong *)param_5[2];
              }
              goto LAB_1457eece2;
            }
            break;
          }
          lVar9 = lVar9 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar9);
      }
      plVar4 = (longlong *)FUN_1404e9402(plVar1);
      *(undefined2 *)(plVar4 + 2) = 1;
      uVar5 = FUN_141089b9c();
      FUN_1404e95e0(param_1,&local_60,uVar5);
      if ((*plVar4 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar6 = local_60;
      *plVar4 = local_60;
      if (local_60 != 0) {
        lVar9 = FUN_141089b9c();
        if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
           (pcVar7 = (code *)*param_4, pcVar7 != (code *)0x0)) {
          plVar4 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar4 = local_70;
          }
LAB_1457eece2:
          uVar5 = (**(code **)(*plVar4 + 8))();
          (*pcVar7)(uVar5,lVar6,lVar10);
        }
      }
LAB_1457eecf4:
      lVar10 = lVar10 + 0x18;
    } while (lVar10 != local_68);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar4[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar6 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_60,plVar4[-1]);
          lVar6 = local_60;
        }
        *plVar4 = lVar6;
      }
      else if (*(char *)((longlong)plVar4 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar4);
        }
        FUN_1404e9462(param_1,plVar4 + -1);
      }
      plVar4 = plVar4 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  FUN_1457eee70(plVar1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457eee70 FUN_1457eee70 body=104 status=ok
// SIG undefined FUN_1457eee70(void)

void FUN_1457eee70(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar4 = 0;
  bVar1 = false;
  do {
    uVar4 = (ulonglong)(int)uVar4;
    pcVar3 = (char *)(*param_1 + uVar4 * 0x18 + 0x11);
    while (*pcVar3 == '\0') {
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x18;
      if ((longlong)iVar2 <= (longlong)uVar4) {
        if (!bVar1) {
          return;
        }
        goto LAB_1457eeebf;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_1457eeebf:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 1457eeed8 FUN_1457eeed8 body=126 status=ok
// SIG undefined FUN_1457eeed8(void)

ulonglong FUN_1457eeed8(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong in_RAX;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  undefined8 unaff_RSI;
  undefined7 uVar10;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    in_RAX = FUN_141089b9c();
    piVar1 = (int *)(in_RAX + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (in_RAX = in_RAX + 0x30,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       in_RAX)) {
      puVar3 = (undefined8 *)param_1[1];
      pcVar4 = (code *)*puVar3;
      uVar10 = (undefined7)((ulonglong)unaff_RSI >> 8);
      bVar9 = 1;
      if (pcVar4 == (code *)0x0) {
        bVar6 = 0;
      }
      else {
        uVar5 = *param_1;
        plVar8 = puVar3 + 4;
        if ((longlong *)puVar3[2] != (longlong *)0x0) {
          plVar8 = (longlong *)puVar3[2];
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        bVar6 = (*pcVar4)(uVar7,lVar2,uVar5);
      }
      goto LAB_1457eef3f;
    }
  }
  bVar6 = (byte)in_RAX;
  bVar9 = 0;
  uVar10 = 0;
LAB_1457eef3f:
  return CONCAT71(uVar10,bVar9 & bVar6) & 0xffffffff;
}



// FUNCTION 1457eef5c FUN_1457eef5c body=84 status=ok
// SIG undefined FUN_1457eef5c(void)

void FUN_1457eef5c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  local_10 = 0;
  (*(code *)*param_1)(param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457eefb1 FUN_1457eefb1 body=53 status=ok
// SIG undefined FUN_1457eefb1(void)

void FUN_1457eefb1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457eefe6(puVar1,param_1);
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  *puVar1 = &PTR_FUN_14ad2b1a0;
  puVar1[5] = &PTR_FUN_14ad2b460;
  return;
}



// FUNCTION 1457eefe6 FUN_1457eefe6 body=43 status=ok
// SIG undefined FUN_1457eefe6(void)

undefined8 * FUN_1457eefe6(undefined8 *param_1)

{
  FUN_14108ad62();
  *param_1 = &PTR_FUN_14ad0a330;
  param_1[5] = &PTR_FUN_14ad0a5f0;
  return param_1;
}



// FUNCTION 1457ef011 FUN_1457ef011 body=56 status=ok
// SIG undefined FUN_1457ef011(void)

void FUN_1457ef011(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457ef04a FUN_1457ef04a body=493 status=ok
// SIG undefined FUN_1457ef04a(void)

longlong * FUN_1457ef04a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char ****ppppcVar9;
  undefined1 auStack_c8 [40];
  code *local_a0;
  undefined4 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_80 [8];
  char ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  uVar7 = FUN_14108b142(param_1 + 0x10);
  FUN_14108b31e(uVar6,local_80,uVar7);
  if (local_60 < 0x19) {
    local_78[0] = (char ***)local_78;
  }
  if (*(code **)(&DAT_14c9a8620 + (uint)local_58 * 0x120) == (code *)0x0) {
    ppppcVar9 = (char ****)
                ((longlong)local_78[0] +
                (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)local_58 * 0x120)));
    cVar5 = '\0';
    do {
      if (ppppcVar9 <= local_78[0]) {
        cVar5 = '\x02';
        break;
      }
      cVar3 = *(char *)local_78[0];
      local_78[0] = (char ***)((longlong)local_78[0] + 1);
    } while (cVar3 == '\0');
  }
  else {
    cVar5 = (**(code **)(&DAT_14c9a8620 + (uint)local_58 * 0x120))();
    cVar5 = cVar5 * '\x02';
  }
  plVar8 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b429880;
  plVar1 = plVar8 + 2;
  plVar8[3] = 0;
  plVar8[4] = 0;
  *(undefined8 *)((longlong)plVar8 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar8 + 0x2c) = 0;
  *(char *)(plVar8 + 7) = cVar5;
  plVar8[2] = (longlong)&PTR_FUN_14b4298a0;
  local_90 = plVar1;
  local_88 = plVar8;
  FUN_1457ef2f2(&local_90,plVar1);
  FUN_144a2da94(local_80);
  uVar6 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  local_a0 = FUN_148973362;
  local_98 = 0;
  FUN_1457ef394(local_80,&local_90);
  uVar7 = FUN_14108b142(param_1 + 0x10);
  FUN_1457ef27a(uVar6,&local_a0,uVar7,local_80);
  FUN_1449db362(local_80);
  plVar4 = local_88;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457ef238 FUN_1457ef238 body=65 status=ok
// SIG undefined FUN_1457ef238(void)

undefined8 FUN_1457ef238(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x38))(param_1 + 0x1a8,param_3);
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = param_3 + 0x30;
  }
  FUN_14034cca6(param_2,lVar2);
  return param_2;
}



// FUNCTION 1457ef27a FUN_1457ef27a body=120 status=ok
// SIG undefined FUN_1457ef27a(void)

undefined8 * FUN_1457ef27a(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  if (param_3 == 0) {
LAB_1457ef2e9:
    *param_2 = 0;
    return param_2;
  }
  if (*(char *)(param_3 + 0x68) == '\0') {
    param_1 = param_1 + 0xe0;
  }
  else {
    if ((((*(char *)(param_3 + 0x68) != '\x01') || (*(longlong *)(param_1 + 0x88) == 0)) ||
        (*(longlong **)(param_1 + 0x90) == (longlong *)0x0)) ||
       (param_1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(), param_1 == 0))
    goto LAB_1457ef2e9;
    param_1 = param_1 + 0x1a8;
  }
  FUN_14108b3c6(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1457ef2f2 FUN_1457ef2f2 body=162 status=ok
// SIG undefined FUN_1457ef2f2(void)

void FUN_1457ef2f2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457ef331;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457ef331;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1457ef331:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001457ef390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457ef394 FUN_1457ef394 body=300 status=ok
// SIG undefined FUN_1457ef394(void)

longlong * FUN_1457ef394(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b42a7c0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b4298c0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a7c0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b4298c0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 1457ef4c0 FUN_1457ef4c0 body=78 status=ok
// SIG undefined FUN_1457ef4c0(void)

void FUN_1457ef4c0(byte *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) {
    *(ushort *)(param_2 + 0x1b4) = *(ushort *)(param_2 + 0x1b4) & 0xfffe | (ushort)*param_1;
    *(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) | 8;
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8), lVar1 != 0)) {
      FUN_144a78688(lVar1 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 1457ef50e FUN_1457ef50e body=82 status=ok
// SIG undefined FUN_1457ef50e(void)

void FUN_1457ef50e(void)

{
  FUN_14108c858(DAT_14cc1cb90,DAT_14cc1cb98);
  if (DAT_14cc1cb90 != 0) {
    FUN_1400020a8();
  }
  DAT_14cc1cb88 = 0;
  if (DAT_14cc1cb80 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&DAT_14cc1cb40);
  return;
}



// FUNCTION 1457ef560 FUN_1457ef560 body=120 status=ok
// SIG undefined FUN_1457ef560(void)

void FUN_1457ef560(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar4 = 8;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_1457ef5d8(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1457ef5d8 FUN_1457ef5d8 body=133 status=ok
// SIG undefined FUN_1457ef5d8(void)

void FUN_1457ef5d8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1457ef65e FUN_1457ef65e body=48 status=ok
// SIG undefined FUN_1457ef65e(void)

void FUN_1457ef65e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1457ef68e FUN_1457ef68e body=29 status=ok
// SIG undefined FUN_1457ef68e(void)

void FUN_1457ef68e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1457ef6ac FUN_1457ef6ac body=31 status=ok
// SIG undefined FUN_1457ef6ac(void)

undefined8 FUN_1457ef6ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ef6d4 FUN_1457ef6d4 body=25 status=ok
// SIG undefined FUN_1457ef6d4(void)

undefined8 FUN_1457ef6d4(undefined8 param_1,undefined8 param_2)

{
  FUN_14075f7c0(param_2,param_1);
  return 1;
}



// FUNCTION 1457ef6ee FUN_1457ef6ee body=64 status=ok
// SIG undefined FUN_1457ef6ee(void)

void FUN_1457ef6ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457ef72e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,0x10);
  }
  return;
}



// FUNCTION 1457ef72e FUN_1457ef72e body=95 status=ok
// SIG undefined FUN_1457ef72e(void)

ulonglong FUN_1457ef72e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,0x10);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1457ef78e FUN_1457ef78e body=133 status=ok
// SIG undefined FUN_1457ef78e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457ef78e(void)

{
  _DAT_14ca56888 = L"BASE";
  DAT_14ca568b2 = 4;
  FUN_141526006();
  _DAT_14ca56898 = DAT_14ca4d018;
  _DAT_14ca56890 = &DAT_14ca4cf98;
  _DAT_14ca568a0 = &LAB_14682652b;
  DAT_14ca4d018 = &DAT_14ca56888;
  DAT_14ca4d06d = DAT_14ca4d06d + '\x01';
  _DAT_14ca568a8 = 0x100000000;
  if (DAT_14ca4cffc != '\0') {
    DAT_14ca4d06e = DAT_14ca4d06e + '\x01';
  }
  return;
}



// FUNCTION 1457ef814 FUN_1457ef814 body=375 status=ok
// SIG undefined FUN_1457ef814(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457ef814(void)

{
  _DAT_14ca55c28 = L"PassUniformBuffer";
  DAT_14ca55c52 = FUN_140850cc5();
  _DAT_14ca55c30 = FUN_14106a12a();
  _DAT_14ca55c40 = &LAB_14682652b;
  _DAT_14ca55c48 = 0x100000100;
  _DAT_14ca55c50 = 0;
  _DAT_14ca55c38 = DAT_14ca4d018;
  DAT_14ca4d018 = &DAT_14ca55c28;
  _DAT_14ca55bf8 = L"VertexFactoryParameters";
  DAT_14ca55c22 = FUN_140850cc5();
  if ((DAT_14ca55cbf & 2) == 0) {
    DAT_14ca55cbf = DAT_14ca55cbf | 3;
    _DAT_14ca55c60 = L"TMemoryImagePtr<T>";
    _DAT_14ca55c78 = &LAB_1472f5c04;
    _DAT_14ca55c80 = FUN_1472f5c0a;
    _DAT_14ca55c88 = &LAB_1472f5c20;
    _DAT_14ca55c90 = &LAB_1472f5c2e;
    _DAT_14ca55c98 = &LAB_1472f5c3c;
    _DAT_14ca55c70 = &LAB_1472f5c48;
    _DAT_14ca55cb0 = 0x800000008;
    _DAT_14ca55cb8 = 8;
    DAT_14ca55cbc = 0;
  }
  _DAT_14ca55c00 = &DAT_14ca55c58;
  _DAT_14ca55c10 = &LAB_1472f5bf6;
  _DAT_14ca55c18 = 0x1000000f8;
  DAT_14ca55c20 = 0;
  _DAT_14ca55c08 = DAT_14ca4d018;
  DAT_14ca4d018 = &DAT_14ca55bf8;
  return;
}



// FUNCTION 1457ef98c FUN_1457ef98c body=68 status=ok
// SIG undefined FUN_1457ef98c(void)

void FUN_1457ef98c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1487f54e4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1457ef9de FUN_1457ef9de body=45 status=ok
// SIG undefined FUN_1457ef9de(void)

undefined8 FUN_1457ef9de(undefined8 param_1,int param_2)

{
  FUN_1457efa0c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1457efa0c FUN_1457efa0c body=55 status=ok
// SIG undefined FUN_1457efa0c(void)

void FUN_1457efa0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b34fdd0;
  FUN_1447cd778(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457efa54 FUN_1457efa54 body=41 status=ok
// SIG undefined FUN_1457efa54(void)

void FUN_1457efa54(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1457efa7e FUN_1457efa7e body=40 status=ok
// SIG undefined FUN_1457efa7e(void)

undefined8 FUN_1457efa7e(undefined8 param_1,int param_2)

{
  FUN_1457efaa6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457efaa6 FUN_1457efaa6 body=62 status=ok
// SIG undefined FUN_1457efaa6(void)

void FUN_1457efaa6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7708f0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14102a02c(param_1 + 0x10);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457efae4 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457efafe FUN_1457efafe body=57 status=ok
// SIG undefined FUN_1457efafe(void)

void FUN_1457efafe(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0430 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0430 = FUN_140002ddd(FUN_1462a02b4,uVar1,L"GbxMetaDataDef");
  }
  return;
}



// FUNCTION 1457efb44 FUN_1457efb44 body=31 status=ok
// SIG undefined FUN_1457efb44(void)

undefined8 FUN_1457efb44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457efb6c FUN_1457efb6c body=113 status=ok
// SIG undefined FUN_1457efb6c(void)

undefined8 * FUN_1457efb6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bbf4760;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  if (DAT_14cc09f88 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09f88 = FUN_140002ddd(FUN_1466f921d,uVar1,L"RigDispatch_MetadataBase");
  }
  param_1[1] = DAT_14cc09f88;
  return param_1;
}



// FUNCTION 1457efbec FUN_1457efbec body=40 status=ok
// SIG undefined FUN_1457efbec(void)

undefined8 FUN_1457efbec(undefined8 param_1,int param_2)

{
  FUN_1457efc14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457efc14 FUN_1457efc14 body=61 status=ok
// SIG undefined FUN_1457efc14(void)

void FUN_1457efc14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7379e0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457efc52 FUN_1457efc52 body=122 status=ok
// SIG undefined FUN_1457efc52(void)

undefined8 FUN_1457efc52(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 8) == 1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  else {
    if (1 < *(int *)(param_1 + 8) - 2U) {
      if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001457efcbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))();
      return uVar2;
    }
    if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x98))(), cVar1 != '\0'))
    goto LAB_1457efc78;
    plVar3 = *(longlong **)(param_1 + 0x10);
  }
  if ((plVar3 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar3 + 0x98))(), cVar1 == '\0')) {
    return 0;
  }
LAB_1457efc78:
                    /* WARNING: Could not recover jumptable at 0x0001457efc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  return uVar2;
}



// FUNCTION 1457efcf8 FUN_1457efcf8 body=115 status=ok
// SIG undefined FUN_1457efcf8(void)

void FUN_1457efcf8(undefined8 param_1)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141499196();
  local_30 = &local_39;
  local_28 = &local_38;
  local_38 = &LAB_143dafe78;
  local_18 = &local_28;
  local_20 = FUN_14109633c;
  FUN_141095f96(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457efd6c FUN_1457efd6c body=72 status=ok
// SIG undefined FUN_1457efd6c(void)

void FUN_1457efd6c(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xa70))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001457efd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa78))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerPlayIdleTrick_Validate");
  return;
}



// FUNCTION 1457efdbe FUN_1457efdbe body=311 status=ok
// SIG undefined FUN_1457efdbe(void)

void FUN_1457efdbe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457efef6 FUN_1457efef6 body=322 status=ok
// SIG undefined FUN_1457efef6(void)

void FUN_1457efef6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1457f003a FUN_1457f003a body=132 status=ok
// SIG undefined FUN_1457f003a(void)

void FUN_1457f003a(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_1457f00be(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1457f00be FUN_1457f00be body=89 status=ok
// SIG undefined FUN_1457f00be(void)

void FUN_1457f00be(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1457f0118();
  return;
}



// FUNCTION 1457f0118 FUN_1457f0118 body=78 status=ok
// SIG undefined FUN_1457f0118(void)

void FUN_1457f0118(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_1457f0170(param_1,param_2);
  return;
}



// FUNCTION 1457f0166 FUN_1457f0166 body=9 status=ok
// SIG undefined FUN_1457f0166(void)

void FUN_1457f0166(longlong param_1)

{
  FUN_1457f01e4(param_1 + 0x10);
  return;
}



// FUNCTION 1457f0170 FUN_1457f0170 body=116 status=ok
// SIG undefined FUN_1457f0170(void)

void FUN_1457f0170(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1457f01e4 FUN_1457f01e4 body=126 status=ok
// SIG undefined FUN_1457f01e4(void)

void FUN_1457f01e4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1457f0262(param_1 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001457f025e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1457f0262 FUN_1457f0262 body=53 status=ok
// SIG undefined FUN_1457f0262(void)

void FUN_1457f0262(longlong *param_1)

{
  FUN_1457f0298();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f0298 FUN_1457f0298 body=356 status=ok
// SIG undefined FUN_1457f0298(void)

void FUN_1457f0298(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f03fe FUN_1457f03fe body=47 status=ok
// SIG undefined FUN_1457f03fe(void)

void FUN_1457f03fe(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb63b80);
                    /* WARNING: Could not recover jumptable at 0x0001457f042a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1457f042e FUN_1457f042e body=84 status=ok
// SIG undefined FUN_1457f042e(void)

int FUN_1457f042e(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar4);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 100) == param_2)) {
        iVar3 = (int)(uVar4 >> 3) * -0x55555555;
        if (iVar3 < 0) {
          return -1;
        }
        if (iVar1 <= iVar3) {
          return -1;
        }
        return iVar3;
      }
      uVar4 = uVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != uVar4);
  }
  return -1;
}



// FUNCTION 1457f04fe FUN_1457f04fe body=53 status=ok
// SIG undefined FUN_1457f04fe(void)

void FUN_1457f04fe(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x5d);
    *(undefined2 *)(param_1 + 0x5c) = 0x101;
    FUN_1457f0534();
    if (*(char *)(param_1 + 0x5c) == '\x01') {
      FUN_1457f0992(param_1);
    }
    *(undefined1 *)(param_1 + 0x5d) = uVar1;
  }
  return;
}



// FUNCTION 1457f0534 FUN_1457f0534 body=47 status=ok
// SIG undefined FUN_1457f0534(void)

void FUN_1457f0534(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb63ba8);
                    /* WARNING: Could not recover jumptable at 0x0001457f0560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1457f0564 FUN_1457f0564 body=174 status=ok
// SIG undefined FUN_1457f0564(void)

void FUN_1457f0564(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14477b072(param_1,DAT_14cb63b98);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38 = 0;
    local_48 = param_2;
    local_40 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_48);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001457f05d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f06bc FUN_1457f06bc body=210 status=ok
// SIG undefined FUN_1457f06bc(void)

void FUN_1457f06bc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x40) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) != 0)) &&
     (lVar1 = FUN_1447210f0(), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      lVar1 = lVar1 + 0x460;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
    FUN_1406338de(lVar1,local_30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f07a4 FUN_1457f07a4 body=426 status=ok
// SIG undefined FUN_1457f07a4(void)

void FUN_1457f07a4(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined1 *local_f0;
  undefined8 ***local_e8;
  undefined1 local_dc [4];
  undefined1 local_d8 [40];
  undefined4 local_b0;
  undefined1 local_a8 [56];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = FUN_14109b67c(*param_3);
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0x50))) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar3 = FUN_14108b142(*(longlong *)(param_1 + 0x48) + lVar8);
      if (lVar3 != 0) {
        lVar4 = FUN_14108b142(*(longlong *)(param_1 + 0x48) + lVar8);
        lVar5 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x38))((longlong *)(lVar2 + 8),lVar4);
        lVar3 = lVar5 + 0x10;
        if (lVar5 == 0) {
          lVar3 = lVar4 + 0x30;
        }
        FUN_14034cca6(local_a8,lVar3);
        local_d8[0] = 0;
        local_b0 = 0;
        FUN_1456bb102(local_d8,*(undefined8 *)(*param_2 + 0x40));
        FUN_1447c3578(local_a8,local_70,local_d8);
        FUN_14655f5bd(local_f8,uVar7 & 0xffffffff);
        local_f0 = local_f8;
        local_e8 = local_70;
        FUN_140e5edc4(param_4,local_dc,&local_f0,0);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar1 != (code *)0x0) {
          ppppuVar6 = local_70;
          if (0x18 < local_58) {
            ppppuVar6 = (undefined8 ****)local_70[0];
          }
          (*pcVar1)(ppppuVar6);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        FUN_144a5ac3a(local_d8);
        FUN_144a2da94(local_a8);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x50));
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f094f FUN_1457f094f body=67 status=ok
// SIG undefined FUN_1457f094f(void)

char FUN_1457f094f(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x20) == '\x01') && (*(int *)(param_1 + 0x24) != -1)) {
    lVar1 = *(longlong *)(param_1 + 0x24);
    if (lVar1 == DAT_14cb8ae40) {
      return '\x01';
    }
    if ((int)lVar1 != -1) {
      if (lVar1 == DAT_14cb8ae48) {
        return '\x02';
      }
      return (lVar1 == DAT_14cb8ae50) * '\x03';
    }
  }
  return '\0';
}



// FUNCTION 1457f0992 FUN_1457f0992 body=355 status=ok
// SIG undefined FUN_1457f0992(void)

void FUN_1457f0992(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_1458ee3fa();
  if (lVar3 != 0) {
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,3,0x10);
    puVar1 = local_a0;
    local_98 = 3;
    *local_a0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_a0[2] = lVar4;
    *local_a0 = &PTR_FUN_14b42a2a0;
    local_a0[3] = 0;
    FUN_14485c47a(local_a0 + 3,param_1);
    puVar1[4] = &LAB_1489747ee;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 0;
    local_8c = 0xbf800000;
    FUN_1406f4044(lVar3,param_1 + 0x70,&local_88,0x3f000000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_a0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f0af6 FUN_1457f0af6 body=394 status=ok
// SIG undefined FUN_1457f0af6(void)

void FUN_1457f0af6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(param_2 + 8);
    }
    uVar4 = FUN_140d2f994(puVar8);
  }
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uVar5 = FUN_1410b14ea();
  lStack_50 = FUN_14477b664(uVar5);
  lVar6 = FUN_1410b14ea();
  uVar5 = FUN_1410b14ea();
  FUN_1402d1bfa(&local_40,uVar5,uVar4);
  lVar3 = local_40;
  if (local_58 != local_40) {
    local_48 = 0;
  }
  local_58 = local_40;
  lVar7 = FUN_1410b14ea();
  if (lVar6 != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_1457f0bc5;
    }
    if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_1457f0bc5;
  }
  lVar7 = lVar6;
LAB_1457f0bc5:
  if (lStack_50 != lVar7) {
    local_48 = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  lStack_50 = FUN_14477b664(uVar5);
  if ((lVar3 != 0) && (lStack_50 != 0)) {
    local_48 = uVar4;
  }
  FUN_1410b15be(param_1,&local_40,&local_58);
  if (local_40 != 0) {
    FUN_14109b7da(local_40,param_2);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f0c82 FUN_1457f0c82 body=652 status=ok
// SIG undefined FUN_1457f0c82(void)

void FUN_1457f0c82(longlong param_1,undefined1 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_3 + 0x20) == '\x02') goto LAB_1457f0daa;
  lVar5 = param_1 + 0x108;
  lVar3 = FUN_14479d2ce(lVar5);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x110) == 0) goto LAB_1457f0daa;
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar5,lVar3);
      if (lVar3 == 0) goto LAB_1457f0daa;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar5,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) goto LAB_1457f0daa;
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) || (lVar4 = FUN_1457f0f10(), lVar4 == 0)) ||
     ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) goto LAB_1457f0daa;
  lVar3 = FUN_14479d2ce(lVar5);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar3 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar5,lVar3);
        if (lVar3 == 0) goto LAB_1457f0ec2;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar5,lVar3);
        }
      }
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_1457f0d34;
    }
LAB_1457f0ec2:
    lVar4 = 0;
  }
  else {
LAB_1457f0d34:
    lVar5 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) || (lVar5 = FUN_1457f0f10(), lVar5 == 0)) ||
       (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_1457f0ec2;
    lVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar4 = lVar3;
    }
  }
  if ((*(longlong *)(lVar4 + 0x110) != 0) ||
     (FUN_140aa6c08(lVar4), *(longlong *)(lVar4 + 0x110) != 0)) {
    local_40 = param_3;
    local_38 = param_2;
    FUN_1457f0fee();
  }
LAB_1457f0daa:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f0f10 FUN_1457f0f10 body=221 status=ok
// SIG undefined FUN_1457f0f10(void)

longlong FUN_1457f0f10(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb63a88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486f65ad;
    local_40 = FUN_1464fef7d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillActionExceptionHandler",&DAT_14cb63a88,FUN_1464fef56)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63a88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f0fee FUN_1457f0fee body=111 status=ok
// SIG undefined FUN_1457f0fee(void)

void FUN_1457f0fee(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1457f105e(&local_38);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar1 = FUN_14477b072(param_1,DAT_14cb63a50);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f105e FUN_1457f105e body=15 status=ok
// SIG undefined FUN_1457f105e(void)

undefined8 * FUN_1457f105e(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1457f106e FUN_1457f106e body=480 status=ok
// SIG undefined FUN_1457f106e(void)

void FUN_1457f106e(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStack_128 [32];
  undefined *local_108;
  undefined8 ***local_100;
  undefined1 local_f4 [4];
  undefined8 ***local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  byte local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_d8 = CONCAT62(uStack_d8._2_6_,4);
  local_f0 = (undefined8 ***)CONCAT44(local_f0._4_4_,2);
  local_d0 = 2;
  local_108 = &DAT_14cb8ae28;
  local_100 = &local_f0;
  FUN_140881f5a(&local_88,local_f4,&local_108,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = &local_f0;
    if (0x18 < (ushort)uStack_d8) {
      ppppuVar2 = (undefined8 ****)local_f0;
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < (ushort)uStack_d8) {
    FUN_1400020a8(local_f0);
  }
  if (*(char *)(param_2 + 0x20) == '\x02') {
    local_f0 = DAT_14cb8ae00;
    local_e8 = DAT_14cb8ae10;
    local_c0 = 0;
    local_b8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_b4 = 0xffffffff00000080;
    local_ac = 0;
    local_a0 = 0;
    local_98 = 0;
    FUN_140725242(&local_e0,&local_88);
    local_90 = 1;
    FUN_14109984c(param_1,param_2,&local_f0);
    local_98 = 0;
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_e0);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_88);
  FUN_1457f0c82(param_1,1,param_2);
  FUN_140f980d0(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10));
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f125a FUN_1457f125a body=413 status=ok
// SIG undefined FUN_1457f125a(void)

undefined8 * FUN_1457f125a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1457f13f8();
  *param_1 = &PTR_FUN_14b8fb570;
  param_1[5] = &PTR_FUN_14b8fbc50;
  param_1[6] = &PTR_LAB_14b8fbc90;
  param_1[0x2f] = &PTR_FUN_14b8fbce0;
  *(undefined1 *)(param_1 + 0x19e) = 0;
  FUN_1412c76f4(param_1 + 0x19f);
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  *(undefined1 *)(param_1 + 0x331) = 0;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  *(undefined8 *)((longlong)param_1 + 0x199d) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x335] = DAT_14c8464e0;
  param_1[0x336] = uVar1;
  param_1[0x337] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x338) = 0;
  param_1[0x33d] = 0;
  *(undefined4 *)(param_1 + 0x33e) = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19fc) = 0;
  param_1[0x341] = 0;
  *(undefined4 *)(param_1 + 0x342) = 0;
  param_1[0x347] = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  param_1[0x343] = 0;
  param_1[0x344] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4c) = 0;
  param_1[0x34b] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x34d) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x1a6c) = 0;
  param_1[0x34e] = 0;
  *(undefined4 *)(param_1 + 0x34f) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  param_1[0x353] = DAT_14c846520;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x351) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x1a8c) = uVar2;
  *(undefined4 *)(param_1 + 0x352) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1a94) = uVar4;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1aa4) = 0;
  FUN_1410b79d2(param_1 + 0x356);
  param_1[0x3b0] = 0;
  param_1[0x3b1] = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b3] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3b6] = 0;
  *(undefined1 *)(param_1 + 0x19d) = 1;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x42] = 0;
  *(undefined1 *)((longlong)param_1 + 0x9e5) = 2;
  return param_1;
}



// FUNCTION 1457f13f8 FUN_1457f13f8 body=852 status=ok
// SIG undefined FUN_1457f13f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1457f13f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1457f17b0();
  *param_1 = &PTR_FUN_14b51f760;
  param_1[5] = &PTR_FUN_14b51fe10;
  param_1[6] = &PTR_LAB_14b51fe50;
  param_1[0x2f] = &PTR_FUN_14b51fea0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  uVar1 = _DAT_14cad0ed8;
  param_1[0x13b] = _DAT_14cad0ed0;
  param_1[0x13c] = uVar1;
  uVar4 = uRam000000014cad0eec;
  uVar3 = uRam000000014cad0ee8;
  uVar2 = uRam000000014cad0ee4;
  *(undefined4 *)(param_1 + 0x13d) = _DAT_14cad0ee0;
  *(undefined4 *)((longlong)param_1 + 0x9ec) = uVar2;
  *(undefined4 *)(param_1 + 0x13e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9f4) = uVar4;
  *(undefined1 *)(param_1 + 0x13f) = 0;
  param_1[0x145] = 0;
  *(undefined4 *)(param_1 + 0x146) = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa3c) = 0;
  param_1[0x149] = 0;
  *(undefined4 *)(param_1 + 0x14a) = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xa6c) = 0x404;
  param_1[0x140] = &DAT_14a176f00;
  param_1[0x150] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  *(undefined4 *)((longlong)param_1 + 0xab4) = 0x4b01770;
  param_1[0x157] = 0x3f8000003e4ccccd;
  *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
  param_1[0x151] = 0x458ca00043960000;
  param_1[0x152] = 0x3d4ccccd44960000;
  param_1[0x153] = 0x4416000040a00000;
  *(undefined1 *)(param_1 + 0x15a) = 3;
  *(undefined4 *)((longlong)param_1 + 0xad4) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x159) = 3;
  *(undefined4 *)((longlong)param_1 + 0xacc) = 0x3f000000;
  FUN_1457f174c(param_1 + 0x15b);
  *(undefined1 *)(param_1 + 0x16a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb54) = 0;
  param_1[0x170] = 0;
  *(undefined4 *)(param_1 + 0x171) = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb94) = 0;
  param_1[0x174] = 0;
  *(undefined4 *)(param_1 + 0x175) = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined4 *)(param_1 + 0x178) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xbc4) = 0x404;
  param_1[0x16b] = &DAT_14a176f00;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  *(undefined8 *)((longlong)param_1 + 0xbe4) = 0x3fe666663f333333;
  *(undefined4 *)((longlong)param_1 + 0xbec) = 0x40733333;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0x7fefffffffffffff;
  param_1[0x182] = 0xffefffffffffffff;
  param_1[0x183] = 0x7fefffffffffffff;
  param_1[0x184] = 0xffefffffffffffff;
  FUN_14109b97e(param_1 + 0x16a);
  param_1[0x18e] = 0;
  *(undefined4 *)(param_1 + 399) = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc84) = 0;
  param_1[0x192] = 0;
  *(undefined4 *)(param_1 + 0x193) = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  FUN_1457f1e48(param_1 + 0x19a);
  *(undefined1 *)(param_1 + 0x19d) = 0;
  param_1[0x151] = 0x458ca00043960000;
  param_1[0x152] = 0x3d4ccccd44960000;
  param_1[0x153] = 0x4416000040a00000;
  *(undefined1 *)(param_1 + 0x159) = 3;
  *(undefined4 *)((longlong)param_1 + 0xacc) = 0x3f000000;
  FUN_14109b892(param_1 + 0x15b);
  FUN_14109b97e(param_1 + 0x16a);
  *(undefined1 *)(param_1 + 0x13f) = 1;
  *(undefined2 *)(param_1 + 0x138) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x9c2) = 0;
  uVar1 = _DAT_14cad0ed8;
  param_1[0x13b] = _DAT_14cad0ed0;
  param_1[0x13c] = uVar1;
  uVar1 = CONCAT44(uRam000000014cad0eec,uRam000000014cad0ee8);
  param_1[0x13d] = CONCAT44(uRam000000014cad0ee4,_DAT_14cad0ee0);
  param_1[0x13e] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x9de) = 0;
  return param_1;
}



// FUNCTION 1457f174c FUN_1457f174c body=99 status=ok
// SIG undefined FUN_1457f174c(void)

undefined2 * FUN_1457f174c(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x13883f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x9c4;
  *(undefined8 *)(param_1 + 0x36) = 0x3f8000003e4ccccd;
  param_1[0x3a] = 0x101;
  FUN_14109b892();
  return param_1;
}



// FUNCTION 1457f17b0 FUN_1457f17b0 body=1519 status=ok
// SIG undefined FUN_1457f17b0(void)

undefined8 * FUN_1457f17b0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  code *local_98;
  undefined4 local_90;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14109bb0a();
  *param_1 = &PTR_FUN_14b513e90;
  param_1[5] = &PTR_FUN_14b514510;
  param_1[6] = &PTR_LAB_14b514550;
  param_1[0x2f] = &PTR_FUN_14b5145a0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3ca3d70a;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3e4ccccd00000000;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x4100000040800000;
  param_1[100] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x7a] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  FUN_14109baa4(param_1 + 0x7c);
  param_1[0x8d] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  FUN_14109baa4(param_1 + 0x8f);
  param_1[0xa0] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_14109baa4(param_1 + 0xa2);
  param_1[0xb3] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  FUN_14109baa4(param_1 + 0xb5);
  param_1[0xc6] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 199) = 0;
  FUN_14109baa4(param_1 + 200);
  param_1[0xd9] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0xda) = 0;
  FUN_14109baa4(param_1 + 0xdb);
  param_1[0xec] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0xed) = 0;
  FUN_14109baa4(param_1 + 0xee);
  puVar7 = &DAT_14c846480;
  puVar8 = param_1 + 0x100;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x10e] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x10c] = DAT_14c8464e0;
  param_1[0x10d] = uVar2;
  param_1[0x111] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x10f] = DAT_14c8464e0;
  param_1[0x110] = uVar2;
  param_1[0x114] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x112] = DAT_14c8464e0;
  param_1[0x113] = uVar2;
  uVar2 = DAT_14c8464e8;
  param_1[0x115] = DAT_14c8464e0;
  param_1[0x116] = uVar2;
  param_1[0x117] = DAT_14c8464f0;
  param_1[0x11a] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x118] = DAT_14c8464e0;
  param_1[0x119] = uVar2;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0x3ff0000000000000;
  param_1[0x11e] = 0x3ff0000000000000;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0x3ff0000000000000;
  param_1[0x123] = 0;
  param_1[0x126] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x124] = DAT_14c8464e0;
  param_1[0x125] = uVar2;
  param_1[0x129] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x127] = DAT_14c8464e0;
  param_1[0x128] = uVar2;
  param_1[300] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x12a] = DAT_14c8464e0;
  param_1[299] = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x96d) = 0;
  param_1[0x12d] = 0;
  *(undefined2 *)((longlong)param_1 + 0x975) = 1;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x134] = 0x3dcccccd40000000;
  *(undefined4 *)(param_1 + 0x135) = 0x3dcccccd;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  *(byte *)((longlong)param_1 + 0x31c) = *(byte *)((longlong)param_1 + 0x31c) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x44bb8000;
  param_1[0x41] = 0x430c000043340000;
  param_1[0x42] = 0x3e99999a3e99999a;
  param_1[0x44] = 0x3ff0000000000000;
  param_1[0x45] = 0x3ff0000000000000;
  param_1[0x46] = 0x3ff0000000000000;
  param_1[0x47] = 0x3f5db22d41200000;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3ca3d70a;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x4100000040800000;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9ac) = 0;
  param_1[0x136] = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x7a) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x41200000;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x8d] = 0x4120000040c00000;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0xa0] = 0x40a0000040200000;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  param_1[0xb3] = 0x4140000041400000;
  param_1[0xc6] = 0x4120000040c00000;
  *(undefined1 *)(param_1 + 199) = 0;
  param_1[0xd9] = 0x4120000040c00000;
  *(undefined1 *)(param_1 + 0xda) = 0;
  param_1[0xec] = 0x4120000040c00000;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31d) = 1;
  FUN_140b967fa(param_1,1);
  uVar2 = FUN_14091baa4();
  plVar3 = (longlong *)FUN_14109baf6(uVar2);
  uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
  *(undefined1 *)(param_1 + 0x137) = uVar1;
  local_98 = FUN_148ad510a;
  local_90 = 0;
  FUN_1457f1da0(local_88,param_1);
  FUN_14109bcee(&DAT_14cae4848,&local_98,local_88);
  FUN_1401cb1ee(local_88);
  if (*(char *)(param_1 + 0x137) == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb99708) {
      FUN_144b3d300(&DAT_14cb99708);
      if (DAT_14cb99708 == -1) {
        FUN_1446f470e(&DAT_14cb99700,L"PC_NetworkPhysicsComponent",1);
        _Init_thread_footer(&DAT_14cb99708);
      }
    }
    uVar2 = DAT_14cb99700;
    uVar4 = FUN_14109bc08();
    uVar5 = FUN_14109bc08();
    local_a0 = 0;
    local_a8 = 1;
    lVar6 = FUN_14048696c(param_1,uVar2,uVar5,uVar4);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    param_1[100] = lVar6;
    FUN_1408c8a1a(lVar6);
    FUN_140b361ee(param_1[100],1);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f1da0 FUN_1457f1da0 body=168 status=ok
// SIG undefined FUN_1457f1da0(void)

LPCRITICAL_SECTION FUN_1457f1da0(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,param_1 + 1);
  *puVar3 = &PTR_LAB_14ae6ba10;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14b51f0f0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1457f1e48 FUN_1457f1e48 body=1796 status=ok
// SIG undefined FUN_1457f1e48(void)

undefined1 * FUN_1457f1e48(undefined1 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_218 [32];
  void *local_1f8;
  uint local_1f0;
  void *local_1e8;
  ulonglong uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  void *local_198;
  ulonglong uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  void *local_148;
  ulonglong uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  void *local_f8;
  ulonglong uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_218;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1400b22c2(&local_f8,"0 to 30 MPH");
  pvVar5 = local_f8;
  local_a8 = (void *)0x0;
  uStack_a0 = (ulonglong)(uint)uStack_f0;
  if ((longlong)(int)(uint)uStack_f0 != 0) {
    FUN_1446dd670(&local_a8,(uint)uStack_f0,0);
    memcpy(local_a8,pvVar5,(longlong)(int)(uint)uStack_f0 * 2);
  }
  uStack_70 = 0x41f0000000000000;
  local_98 = (uint)local_98._3_1_ << 0x18;
  local_68 = 0;
  uStack_60 = 0;
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8(local_f8);
  }
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_14109bf46(plVar1,iVar3);
  }
  pvVar5 = local_a8;
  lVar4 = *plVar1;
  lVar6 = (longlong)iVar3 * 0x50;
  puVar2 = (undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  lVar7 = (longlong)(int)uStack_a0;
  *(int *)(lVar4 + 8 + lVar6) = (int)uStack_a0;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,uStack_a0 & 0xffffffff,0);
    memcpy((void *)*puVar2,pvVar5,lVar7 * 2);
  }
  *(undefined4 *)(puVar2 + 8) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar2 + 0x44) = local_68._4_4_;
  *(undefined4 *)(puVar2 + 9) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_60._4_4_;
  *(undefined4 *)(puVar2 + 6) = local_78;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_74;
  *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_70._4_4_;
  *(undefined4 *)(puVar2 + 4) = local_88;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_84;
  *(undefined4 *)(puVar2 + 5) = uStack_80;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_7c;
  *(int *)(puVar2 + 2) = local_98;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_94;
  *(undefined4 *)(puVar2 + 3) = uStack_90;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_8c;
  FUN_1400b22c2(&local_148,"0 to 60 MPH");
  pvVar5 = local_148;
  local_f8 = (void *)0x0;
  uStack_f0 = (ulonglong)(uint)uStack_140;
  if ((longlong)(int)(uint)uStack_140 != 0) {
    FUN_1446dd670(&local_f8,(uint)uStack_140,0);
    memcpy(local_f8,pvVar5,(longlong)(int)(uint)uStack_140 * 2);
  }
  uStack_c0 = 0x4270000000000000;
  local_e8 = (uint)local_e8._3_1_ << 0x18;
  local_b8 = 0;
  uStack_b0 = 0;
  if (local_148 != (void *)0x0) {
    FUN_1400020a8(local_148);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_14109bf46(plVar1,iVar3);
  }
  pvVar5 = local_f8;
  lVar4 = *plVar1;
  lVar6 = (longlong)iVar3 * 0x50;
  puVar2 = (undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  lVar7 = (longlong)(int)(uint)uStack_f0;
  *(uint *)(lVar4 + 8 + lVar6) = (uint)uStack_f0;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,uStack_f0 & 0xffffffff,0);
    memcpy((void *)*puVar2,pvVar5,lVar7 * 2);
  }
  *(undefined4 *)(puVar2 + 8) = (undefined4)local_b8;
  *(undefined4 *)((longlong)puVar2 + 0x44) = local_b8._4_4_;
  *(undefined4 *)(puVar2 + 9) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_b0._4_4_;
  *(undefined4 *)(puVar2 + 6) = local_c8;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_c4;
  *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_c0._4_4_;
  *(undefined4 *)(puVar2 + 4) = local_d8;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_d4;
  *(undefined4 *)(puVar2 + 5) = uStack_d0;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_cc;
  *(int *)(puVar2 + 2) = local_e8;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_e4;
  *(undefined4 *)(puVar2 + 3) = uStack_e0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_dc;
  FUN_1400b22c2(&local_198,"Quarter Mile Drag");
  pvVar5 = local_198;
  local_148 = (void *)0x0;
  uStack_140 = (ulonglong)(uint)uStack_190;
  if ((longlong)(int)(uint)uStack_190 != 0) {
    FUN_1446dd670(&local_148,(uint)uStack_190,0);
    memcpy(local_148,pvVar5,(longlong)(int)(uint)uStack_190 * 2);
  }
  uStack_110 = 0;
  local_108 = 0x3e800000;
  local_138 = (uint)local_138._3_1_ << 0x18;
  uStack_104 = 0;
  uStack_fc = 0;
  if (local_198 != (void *)0x0) {
    FUN_1400020a8(local_198);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_14109bf46(plVar1,iVar3);
  }
  pvVar5 = local_148;
  lVar4 = *plVar1;
  lVar6 = (longlong)iVar3 * 0x50;
  puVar2 = (undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  lVar7 = (longlong)(int)(uint)uStack_140;
  *(uint *)(lVar4 + 8 + lVar6) = (uint)uStack_140;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,uStack_140 & 0xffffffff,0);
    memcpy((void *)*puVar2,pvVar5,lVar7 * 2);
  }
  *(undefined4 *)(puVar2 + 8) = local_108;
  *(undefined4 *)((longlong)puVar2 + 0x44) = (undefined4)uStack_104;
  *(undefined4 *)(puVar2 + 9) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_fc;
  *(undefined4 *)(puVar2 + 6) = local_118;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_114;
  *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_110._4_4_;
  *(undefined4 *)(puVar2 + 4) = local_128;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_124;
  *(undefined4 *)(puVar2 + 5) = uStack_120;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_11c;
  *(int *)(puVar2 + 2) = local_138;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_134;
  *(undefined4 *)(puVar2 + 3) = uStack_130;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_12c;
  FUN_1400b22c2(&local_1e8,"30 to 0 MPH");
  pvVar5 = local_1e8;
  local_198 = (void *)0x0;
  uStack_190 = (ulonglong)(uint)uStack_1e0;
  if ((longlong)(int)(uint)uStack_1e0 != 0) {
    FUN_1446dd670(&local_198,(uint)uStack_1e0,0);
    memcpy(local_198,pvVar5,(longlong)(int)(uint)uStack_1e0 * 2);
  }
  uStack_160 = 0x41f00000;
  local_188 = (uint)local_188._3_1_ << 0x18;
  uStack_15c = 0;
  uStack_154 = 0;
  uStack_14c = 0;
  if (local_1e8 != (void *)0x0) {
    FUN_1400020a8(local_1e8);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_14109bf46(plVar1,iVar3);
  }
  pvVar5 = local_198;
  lVar4 = *plVar1;
  lVar6 = (longlong)iVar3 * 0x50;
  puVar2 = (undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  lVar7 = (longlong)(int)(uint)uStack_190;
  *(uint *)(lVar4 + 8 + lVar6) = (uint)uStack_190;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,uStack_190 & 0xffffffff,0);
    memcpy((void *)*puVar2,pvVar5,lVar7 * 2);
  }
  *(undefined4 *)(puVar2 + 8) = uStack_15c._4_4_;
  *(undefined4 *)((longlong)puVar2 + 0x44) = (undefined4)uStack_154;
  *(undefined4 *)(puVar2 + 9) = uStack_154._4_4_;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_14c;
  *(undefined4 *)(puVar2 + 6) = local_168;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_164;
  *(undefined4 *)(puVar2 + 7) = uStack_160;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = (undefined4)uStack_15c;
  *(undefined4 *)(puVar2 + 4) = local_178;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_174;
  *(undefined4 *)(puVar2 + 5) = uStack_170;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_16c;
  *(int *)(puVar2 + 2) = local_188;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_184;
  *(undefined4 *)(puVar2 + 3) = uStack_180;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_17c;
  FUN_1400b22c2(&local_1f8,"60 to 0 MPH");
  pvVar5 = local_1f8;
  local_1e8 = (void *)0x0;
  uStack_1e0 = (ulonglong)local_1f0;
  if ((longlong)(int)local_1f0 != 0) {
    FUN_1446dd670(&local_1e8,local_1f0,0);
    memcpy(local_1e8,pvVar5,(longlong)(int)local_1f0 * 2);
  }
  uStack_1b0 = 0x42700000;
  local_1d8 = (uint)local_1d8._3_1_ << 0x18;
  uStack_1ac = 0;
  uStack_1a4 = 0;
  uStack_19c = 0;
  if (local_1f8 != (void *)0x0) {
    FUN_1400020a8(local_1f8);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_14109bf46(plVar1,iVar3);
  }
  pvVar5 = local_1e8;
  lVar4 = *plVar1;
  lVar6 = (longlong)iVar3 * 0x50;
  puVar2 = (undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  lVar7 = (longlong)(int)(uint)uStack_1e0;
  *(uint *)(lVar4 + 8 + lVar6) = (uint)uStack_1e0;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,uStack_1e0 & 0xffffffff,0);
    memcpy((void *)*puVar2,pvVar5,lVar7 * 2);
  }
  *(undefined4 *)(puVar2 + 8) = uStack_1ac._4_4_;
  *(undefined4 *)((longlong)puVar2 + 0x44) = (undefined4)uStack_1a4;
  *(undefined4 *)(puVar2 + 9) = uStack_1a4._4_4_;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = uStack_19c;
  *(undefined4 *)(puVar2 + 6) = local_1b8;
  *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_1b4;
  *(undefined4 *)(puVar2 + 7) = uStack_1b0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = (undefined4)uStack_1ac;
  *(undefined4 *)(puVar2 + 4) = local_1c8;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_1c4;
  *(undefined4 *)(puVar2 + 5) = uStack_1c0;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_1bc;
  *(int *)(puVar2 + 2) = local_1d8;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_1d4;
  *(undefined4 *)(puVar2 + 3) = uStack_1d0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_1cc;
  if (local_1e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f254d FUN_1457f254d body=62 status=ok
// SIG undefined FUN_1457f254d(void)

void FUN_1457f254d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140056680(param_1,&DAT_149dfb77a);
    FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1457f258c FUN_1457f258c body=147 status=ok
// SIG undefined FUN_1457f258c(void)

void FUN_1457f258c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457f2620 FUN_1457f2620 body=38 status=ok
// SIG undefined FUN_1457f2620(void)

void FUN_1457f2620(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457f2646(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1457f2646 FUN_1457f2646 body=89 status=ok
// SIG undefined FUN_1457f2646(void)

longlong * FUN_1457f2646(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  param_1[2] = 0;
  FUN_140056680(param_1 + 3,&DAT_149dfb77a);
  FUN_140056680(param_1 + 5,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 1457f26a0 FUN_1457f26a0 body=132 status=ok
// SIG undefined FUN_1457f26a0(void)

void FUN_1457f26a0(longlong param_1,int param_2)

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



// FUNCTION 1457f2724 FUN_1457f2724 body=726 status=ok
// SIG undefined FUN_1457f2724(void)

void FUN_1457f2724(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  *(bool *)(param_1 + 0x60) = 1 < *(int *)(param_1 + 0x38);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x61);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + 0x89);
  *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
  *(undefined1 *)(param_1 + 0x8b) = *(undefined1 *)(param_2 + 0x8b);
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  plVar2 = *(longlong **)(param_2 + 0xb0);
  plVar3 = *(longlong **)(param_1 + 0xb0);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0xb0) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_2 + 0xc0);
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0xc0) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
  FUN_144a787a6(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x111) = *(undefined1 *)(param_2 + 0x111);
  *(undefined1 *)(param_1 + 0x112) = *(undefined1 *)(param_2 + 0x112);
  *(undefined1 *)(param_1 + 0x113) = *(undefined1 *)(param_2 + 0x113);
  *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)(param_2 + 0x114);
  *(undefined1 *)(param_1 + 0x115) = *(undefined1 *)(param_2 + 0x115);
  *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_2 + 0x116);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x11d) = *(undefined1 *)(param_2 + 0x11d);
  *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_2 + 0x11e);
  *(undefined1 *)(param_1 + 0x11f) = *(undefined1 *)(param_2 + 0x11f);
  iVar1 = *(int *)(param_1 + 0xec);
  FUN_14109edd4(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xec) != 0)) {
    FUN_148eb1b80(param_1 + 0xe0);
  }
  if ((longlong)*(int *)(param_2 + 0xe8) != 0) {
    lVar5 = *(longlong *)(param_2 + 0xe0);
    lVar6 = (longlong)*(int *)(param_2 + 0xe8) * 0x20 + lVar5;
    do {
      lVar4 = FUN_1457f2b02(param_1 + 0xe0);
      FUN_144a787a6(lVar4,lVar5);
      FUN_144a787a6(lVar4 + 0x10,lVar5 + 0x10);
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar6);
  }
  return;
}



// FUNCTION 1457f29fa FUN_1457f29fa body=132 status=ok
// SIG undefined FUN_1457f29fa(void)

void FUN_1457f29fa(longlong param_1,int param_2)

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



// FUNCTION 1457f2a7e FUN_1457f2a7e body=132 status=ok
// SIG undefined FUN_1457f2a7e(void)

void FUN_1457f2a7e(longlong param_1,int param_2)

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



// FUNCTION 1457f2b02 FUN_1457f2b02 body=64 status=ok
// SIG undefined FUN_1457f2b02(void)

longlong FUN_1457f2b02(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457f26a0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1457f254d(lVar2,1);
  return lVar2;
}



// FUNCTION 1457f2b42 FUN_1457f2b42 body=143 status=ok
// SIG undefined FUN_1457f2b42(void)

void FUN_1457f2b42(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457f2bd2 FUN_1457f2bd2 body=63 status=ok
// SIG undefined FUN_1457f2bd2(void)

void FUN_1457f2bd2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457f2db2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 1457f2c12 FUN_1457f2c12 body=323 status=ok
// SIG undefined FUN_1457f2c12(void)

void FUN_1457f2c12(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x346) == '\0') && (lVar3 = FUN_1407f4ede(), lVar3 != 0)) {
    lVar4 = FUN_1407f4df8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30 && (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))))) {
      uVar2 = (uint)((ulonglong)DAT_14cbdf470 >> 0x10);
      uVar5 = (uint)DAT_14cbdf470 & 0xffff;
      lVar3 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
      }
      iVar6 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x120) - 1U &
                               (int)((ulonglong)DAT_14cbdf470 >> 0x20) +
                               ((uint)DAT_14cbdf470 << 0x10 | uVar5) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
          if (*plVar1 == DAT_14cbdf470) {
            if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
              local_20 = 0;
              FUN_14485c47a(&local_20,plVar1[1]);
              FUN_14143058a(param_1,local_20,0xb);
              *(undefined1 *)(param_1 + 0x346) = 1;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f2d56 FUN_1457f2d56 body=91 status=ok
// SIG undefined FUN_1457f2d56(void)

void FUN_1457f2d56(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x38 + *param_1);
  FUN_1459112ff(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1457f2db2 FUN_1457f2db2 body=97 status=ok
// SIG undefined FUN_1457f2db2(void)

ulonglong FUN_1457f2db2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x38) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 1457f2e14 FUN_1457f2e14 body=63 status=ok
// SIG undefined FUN_1457f2e14(void)

void FUN_1457f2e14(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1415da0d8(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1410a0d5c(param_1);
    return;
  }
  FUN_14890ad90(param_1);
  FUN_1415da0d8(param_1);
  return;
}



// FUNCTION 1457f2e62 FUN_1457f2e62 body=40 status=ok
// SIG undefined FUN_1457f2e62(void)

undefined8 FUN_1457f2e62(undefined8 param_1,int param_2)

{
  FUN_1457f2e8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f2e8a FUN_1457f2e8a body=59 status=ok
// SIG undefined FUN_1457f2e8a(void)

void FUN_1457f2e8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbf4760;
  FUN_1457f2ec5(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a12b0(param_1);
  return;
}



// FUNCTION 1457f2ec5 FUN_1457f2ec5 body=60 status=ok
// SIG undefined FUN_1457f2ec5(void)

void FUN_1457f2ec5(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457f2f10 FUN_1457f2f10 body=40 status=ok
// SIG undefined FUN_1457f2f10(void)

undefined8 FUN_1457f2f10(undefined8 param_1,int param_2)

{
  FUN_1457f2f38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f2f38 FUN_1457f2f38 body=59 status=ok
// SIG undefined FUN_1457f2f38(void)

void FUN_1457f2f38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b317930;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457f2f7c FUN_1457f2f7c body=159 status=ok
// SIG undefined FUN_1457f2f7c(void)

undefined8 * FUN_1457f2f7c(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149e191c0;
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1402341b0(puVar1 + 2,param_1,*param_2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f301c FUN_1457f301c body=42 status=ok
// SIG undefined FUN_1457f301c(void)

void FUN_1457f301c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f3046(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0a9be0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1457f3046 FUN_1457f3046 body=32 status=ok
// SIG undefined FUN_1457f3046(void)

undefined8 * FUN_1457f3046(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14a18f640;
  return param_1;
}



// FUNCTION 1457f3066 FUN_1457f3066 body=476 status=ok
// SIG undefined FUN_1457f3066(void)

void FUN_1457f3066(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e357e0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x79));
  if (*(int *)((longlong)param_1 + 0x3c4) != -1) {
    if (param_1[0x77] != 0) {
      FUN_1400020a8();
    }
    param_1[0x77] = 0;
    param_1[0x78] = 0xffffffff00000000;
  }
  FUN_1447a1747(param_1[0x75],*(undefined4 *)(param_1 + 0x76));
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x73],*(undefined4 *)(param_1 + 0x74));
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x71],*(undefined4 *)(param_1 + 0x72));
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x6f],*(undefined4 *)(param_1 + 0x70));
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x6d);
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_14141661e(param_1 + 0x62);
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f3242(param_1 + 0x4d);
  FUN_1457f32ae(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f3278(param_1 + 1);
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 1457f3242 FUN_1457f3242 body=53 status=ok
// SIG undefined FUN_1457f3242(void)

void FUN_1457f3242(longlong *param_1)

{
  FUN_1410a588c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f3278 FUN_1457f3278 body=53 status=ok
// SIG undefined FUN_1457f3278(void)

void FUN_1457f3278(longlong *param_1)

{
  FUN_1410a565e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f32ae FUN_1457f32ae body=61 status=ok
// SIG undefined FUN_1457f32ae(void)

void FUN_1457f32ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar1 = param_1;
  }
  FUN_1410c17b8(lVar1,*(undefined4 *)(param_1 + 0x208));
  if (*(longlong *)(param_1 + 0x200) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f32ec FUN_1457f32ec body=38 status=ok
// SIG undefined FUN_1457f32ec(void)

undefined8 FUN_1457f32ec(undefined8 param_1,int param_2)

{
  FUN_1457f3312();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f3312 FUN_1457f3312 body=87 status=ok
// SIG undefined FUN_1457f3312(void)

void FUN_1457f3312(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9cd6a0;
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_14071621b(param_1[0x61],*(undefined4 *)(param_1 + 0x62));
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a5cb2(param_1);
  return;
}



// FUNCTION 1457f337a FUN_1457f337a body=41 status=ok
// SIG undefined FUN_1457f337a(void)

void FUN_1457f337a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,1);
  return;
}



// FUNCTION 1457f33b8 FUN_1457f33b8 body=40 status=ok
// SIG undefined FUN_1457f33b8(void)

undefined8 FUN_1457f33b8(undefined8 param_1,int param_2)

{
  FUN_1457f33e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f33e0 FUN_1457f33e0 body=57 status=ok
// SIG undefined FUN_1457f33e0(void)

void FUN_1457f33e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b84bc30;
  FUN_1410a81e3(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4522c(param_1);
  return;
}



// FUNCTION 1457f3420 FUN_1457f3420 body=57 status=ok
// SIG undefined FUN_1457f3420(void)

void FUN_1457f3420(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf958 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf958 = FUN_140002ddd(FUN_1466136a0,uVar1,L"PhysicsObjectDef");
  }
  return;
}



// FUNCTION 1457f3468 FUN_1457f3468 body=45 status=ok
// SIG undefined FUN_1457f3468(void)

undefined8 FUN_1457f3468(undefined8 param_1,int param_2)

{
  FUN_1457f3496();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1457f3496 FUN_1457f3496 body=230 status=ok
// SIG undefined FUN_1457f3496(void)

void FUN_1457f3496(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1f33e0;
  FUN_1410a8800(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a8800(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a8800(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a8800(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a8800(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a8800(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a8800(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457f35a6 FUN_1457f35a6 body=31 status=ok
// SIG undefined FUN_1457f35a6(void)

undefined8 FUN_1457f35a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f35f8 FUN_1457f35f8 body=40 status=ok
// SIG undefined FUN_1457f35f8(void)

undefined8 FUN_1457f35f8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f3620 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f3636 FUN_1457f3636 body=44 status=ok
// SIG undefined FUN_1457f3636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457f3636(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb817c4 = _DAT_14cb817c4 + -1;
  *param_1 = DAT_14cb817b8;
  DAT_14cb817b8 = param_1;
  return;
}



// FUNCTION 1457f3672 FUN_1457f3672 body=44 status=ok
// SIG undefined FUN_1457f3672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457f3672(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8169c = _DAT_14cb8169c + -1;
  *param_1 = DAT_14cb81690;
  DAT_14cb81690 = param_1;
  return;
}



// FUNCTION 1457f36ba FUN_1457f36ba body=40 status=ok
// SIG undefined FUN_1457f36ba(void)

undefined8 FUN_1457f36ba(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f36e2 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f36e8 FUN_1457f36e8 body=103 status=ok
// SIG undefined FUN_1457f36e8(void)

ulonglong FUN_1457f36e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1457f3732:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1457f3732;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1457f375a FUN_1457f375a body=54 status=ok
// SIG undefined FUN_1457f375a(void)

void FUN_1457f375a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x688) != param_2) {
    *(int *)(param_1 + 0x688) = param_2;
    FUN_1410a9ec8();
    FUN_1410aa068(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1457f379c FUN_1457f379c body=56 status=ok
// SIG undefined FUN_1457f379c(void)

undefined8 * FUN_1457f379c(undefined8 *param_1)

{
  FUN_1410ab700();
  *param_1 = &PTR_FUN_14bd00f80;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_140e6507e(param_1 + 7);
  param_1[0xf] = 4;
  return param_1;
}



// FUNCTION 1457f37e2 FUN_1457f37e2 body=54 status=ok
// SIG undefined FUN_1457f37e2(void)

undefined8 * FUN_1457f37e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f3818 FUN_1457f3818 body=40 status=ok
// SIG undefined FUN_1457f3818(void)

undefined8 FUN_1457f3818(undefined8 param_1,int param_2)

{
  FUN_1457f3840();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f3840 FUN_1457f3840 body=126 status=ok
// SIG undefined FUN_1457f3840(void)

void FUN_1457f3840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcc7900;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1410aba6a(param_1);
  return;
}



// FUNCTION 1457f38c6 FUN_1457f38c6 body=36 status=ok
// SIG undefined FUN_1457f38c6(void)

undefined8 * FUN_1457f38c6(undefined8 *param_1)

{
  FUN_1457f38ea();
  *param_1 = &PTR_FUN_14b9a1090;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1457f38ea FUN_1457f38ea body=14 status=ok
// SIG undefined FUN_1457f38ea(void)

void FUN_1457f38ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b42f6e0;
  return;
}



// FUNCTION 1457f38f8 FUN_1457f38f8 body=95 status=ok
// SIG undefined FUN_1457f38f8(void)

undefined8 FUN_1457f38f8(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28);
  FUN_1406e1f6c(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f3958 FUN_1457f3958 body=398 status=ok
// SIG undefined FUN_1457f3958(void)

undefined4 *
FUN_1457f3958(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406e119c(param_1,local_40);
  puVar1 = (undefined1 *)param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  *(undefined1 *)(local_38 + 1) = *puVar1;
  local_38[2] = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined4 *)(local_38 + 3) = *(undefined4 *)(puVar1 + 0x10);
  *(undefined4 *)((longlong)local_38 + 0x1c) = *(undefined4 *)(puVar1 + 0x14);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  local_38[4] = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(local_38 + 5) = *(undefined4 *)(puVar1 + 0x20);
  *(undefined4 *)((longlong)local_38 + 0x2c) = *(undefined4 *)(puVar1 + 0x24);
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(local_38 + 6) = *(undefined4 *)(puVar1 + 0x28);
  *(undefined4 *)(local_38 + 7) = 0xffffffff;
  uVar2 = *local_38;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar7 = (uint)uVar2 & 0xffff;
    uVar5 = *(int *)(param_1 + 0x48) - 1U &
            (uVar7 >> 4) +
            ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    *(uint *)((longlong)local_38 + 0x3c) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 7) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1406e1ba4(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f3ae8 FUN_1457f3ae8 body=679 status=ok
// SIG undefined FUN_1457f3ae8(void)

void FUN_1457f3ae8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar1 = param_1 + 0xe6;
  cVar4 = FUN_144729dda(plVar1);
  if (cVar4 == '\0') {
LAB_1457f3c89:
    lVar9 = 0;
  }
  else {
    uVar5 = FUN_14479d2ce(plVar1);
    lVar6 = FUN_1410ac07e(uVar5);
    if ((lVar6 == 0) || (cVar4 = FUN_144729dda(plVar1), cVar4 == '\0')) goto LAB_1457f3c89;
    if ((*(char *)((longlong)param_1 + 0x741) == '\x01') ||
       (((char)param_1[0xe8] == '\x01' && (*(char *)((longlong)param_1 + 0x742) == '\x01')))) {
      uVar5 = FUN_14479d2ce(plVar1);
      lVar9 = param_1[0xe4];
      if (lVar9 == 0) {
        uVar7 = FUN_141030812();
        lVar9 = FUN_14477b664(uVar7);
        param_1[0xe4] = lVar9;
      }
      lVar8 = param_1[0xe5];
      if ((lVar8 == 0) && (lVar8 = 0, lVar9 != 0)) {
        lVar3 = param_1[0xe3];
joined_r0x0001457f3cfb:
        lVar8 = 0;
        if (lVar3 != 0) {
          plVar1 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
            lVar8 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar8 = FUN_144aff482(uVar7,param_1 + 0xe3);
          }
          param_1[0xe5] = lVar8;
        }
      }
LAB_1457f3be6:
      uVar7 = 6;
    }
    else {
      lVar8 = param_1[0xeb];
      uVar5 = FUN_14479d2ce(plVar1);
      plVar1 = param_1 + 0xe3;
      lVar9 = param_1[0xe4];
      if ((char)lVar8 != '\x01') {
        if (lVar9 == 0) {
          uVar7 = FUN_141030812();
          lVar9 = FUN_14477b664(uVar7);
          param_1[0xe4] = lVar9;
        }
        lVar8 = param_1[0xe5];
        if ((lVar8 == 0) && (lVar8 = 0, lVar3 = lVar9, *plVar1 != 0)) goto joined_r0x0001457f3cfb;
        goto LAB_1457f3be6;
      }
      if (lVar9 == 0) {
        uVar7 = FUN_141030812();
        lVar9 = FUN_14477b664(uVar7);
        param_1[0xe4] = lVar9;
      }
      lVar8 = param_1[0xe5];
      if (lVar8 == 0) {
        if (lVar9 == 0 || *plVar1 == 0) {
          lVar8 = 0;
        }
        else {
          plVar2 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            lVar8 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar8 = FUN_144aff482(uVar7,plVar1);
          }
          param_1[0xe5] = lVar8;
        }
      }
      uVar7 = 7;
    }
    lVar9 = FUN_141582ac8(uVar5,uVar7,lVar8);
    if (lVar9 == 0) goto LAB_1457f3c89;
    uVar5 = FUN_14479d2ce(param_1 + 0xe7);
    FUN_14016d8b0(lVar9,*(undefined8 *)(lVar6 + 0xe8),uVar5);
  }
  if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (param_1[0xcc] == 0) goto LAB_1457f3c5c;
  lVar6 = 0;
  do {
    (**(code **)(*param_1 + 0x638))(param_1,(&DAT_14b97a0aa)[lVar6],lVar9);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 2);
LAB_1457f3c5c:
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1457f3d90 FUN_1457f3d90 body=9 status=ok
// SIG undefined FUN_1457f3d90(void)

void FUN_1457f3d90(longlong param_1)

{
  FUN_1457f3d9a(param_1 + 0x10);
  return;
}



// FUNCTION 1457f3d9a FUN_1457f3d9a body=82 status=ok
// SIG undefined FUN_1457f3d9a(void)

void FUN_1457f3d9a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b242730;
  FUN_1410ac1a1(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1457f3dec FUN_1457f3dec body=76 status=ok
// SIG undefined FUN_1457f3dec(void)

void FUN_1457f3dec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b4e3f70;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001457f3e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1457f3e38 FUN_1457f3e38 body=176 status=ok
// SIG undefined FUN_1457f3e38(void)

void FUN_1457f3e38(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1449ce97a(param_2);
  }
  *(undefined1 *)(param_1 + 0x10a8) = uVar3;
  FUN_1410ac4d4(param_1,param_2);
  if ((*(char *)(param_1 + 0x10a8) == '\x01') && (*(char *)(param_1 + 0x178) == '\x03')) {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
      plVar2 = *(longlong **)
                (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar2 != (longlong *)0x0) {
        iVar4 = FUN_1457f3ee8(param_1);
        iVar5 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
        if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001457f3ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x378))(plVar2,iVar4 - iVar5,1,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1457f3ee8 FUN_1457f3ee8 body=313 status=ok
// SIG undefined FUN_1457f3ee8(void)

int FUN_1457f3ee8(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar2 = *(byte *)(param_1 + 0xbd8);
  iVar5 = 0;
  if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
    plVar3 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 0x10 +
              (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (**(code **)(*plVar3 + 0x2b8))();
      puVar1 = (undefined4 *)(param_1 + 0x1078);
      cVar4 = FUN_1403ae288(puVar1);
      if ((cVar4 == '\0') && (lVar6 = *(longlong *)(param_1 + 0x168), lVar6 != 0)) {
        lVar7 = FUN_144a2f878();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          uVar8 = (**(code **)(*(longlong *)(lVar6 + 0x3a20) + 0x10))(lVar6 + 0x3a20);
          FUN_145d23f66(extraout_XMM0_Da,&local_40,uVar8);
          *(undefined8 *)(param_1 + 0x1088) = local_30;
          *(undefined8 *)(param_1 + 0x1090) = uStack_28;
          *puVar1 = local_40;
          *(undefined4 *)(param_1 + 0x107c) = uStack_3c;
          *(undefined4 *)(param_1 + 0x1080) = uStack_38;
          *(undefined4 *)(param_1 + 0x1084) = uStack_34;
        }
      }
      cVar4 = FUN_1403ae288(puVar1);
      if (cVar4 != '\0') {
        lVar6 = FUN_14008e0ae(puVar1);
        if (0.0 < *(float *)(lVar6 + 200)) {
          lVar6 = FUN_14008e0ae(puVar1);
          iVar5 = (int)((float)iVar5 * (1.0 - *(float *)(lVar6 + 200)));
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f402c FUN_1457f402c body=42 status=ok
// SIG undefined FUN_1457f402c(void)

void FUN_1457f402c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1457f4056(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1457f4056 FUN_1457f4056 body=100 status=ok
// SIG undefined FUN_1457f4056(void)

void FUN_1457f4056(longlong *param_1)

{
  FUN_1410ad47a(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  FUN_1410ad4c5(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457f40ba FUN_1457f40ba body=102 status=ok
// SIG undefined FUN_1457f40ba(void)

ulonglong FUN_1457f40ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1457f4103:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1457f4103;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1457f4120 FUN_1457f4120 body=99 status=ok
// SIG undefined FUN_1457f4120(void)

void FUN_1457f4120(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        FUN_1410ae9e2(param_1,*(undefined8 *)(param_1 + 0x90));
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
                    /* WARNING: Could not recover jumptable at 0x0001457f417f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
  FUN_1410ae9e2(param_1,0);
  return;
}



// FUNCTION 1457f4184 FUN_1457f4184 body=18 status=ok
// SIG undefined FUN_1457f4184(void)

void FUN_1457f4184(longlong param_1,undefined8 param_2)

{
  FUN_1457f41da(param_2,param_1 + 0x1c0);
  return;
}



// FUNCTION 1457f4196 FUN_1457f4196 body=67 status=ok
// SIG undefined FUN_1457f4196(void)

void FUN_1457f4196(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1457f4294(param_1);
    FUN_1410afdaa(param_1,0);
    return;
  }
  FUN_1410afdaa(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1410afb42(param_1);
  return;
}



// FUNCTION 1457f41da FUN_1457f41da body=88 status=ok
// SIG undefined FUN_1457f41da(void)

undefined8 * FUN_1457f41da(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1457f4232(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1457f4232 FUN_1457f4232 body=98 status=ok
// SIG undefined FUN_1457f4232(void)

void FUN_1457f4232(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457f4294 FUN_1457f4294 body=327 status=ok
// SIG undefined FUN_1457f4294(void)

void FUN_1457f4294(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
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



// FUNCTION 1457f43dc FUN_1457f43dc body=62 status=ok
// SIG undefined FUN_1457f43dc(void)

void FUN_1457f43dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457f4474(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1457f441a FUN_1457f441a body=90 status=ok
// SIG undefined FUN_1457f441a(void)

void FUN_1457f441a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1457f4474 FUN_1457f4474 body=91 status=ok
// SIG undefined FUN_1457f4474(void)

ulonglong FUN_1457f4474(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1457f44d0 FUN_1457f44d0 body=132 status=ok
// SIG undefined FUN_1457f44d0(void)

void FUN_1457f44d0(longlong param_1,int param_2)

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



// FUNCTION 1457f4556 FUN_1457f4556 body=9 status=ok
// SIG undefined FUN_1457f4556(void)

void FUN_1457f4556(longlong param_1)

{
  FUN_1457f4560(param_1 + 0x10);
  return;
}



// FUNCTION 1457f4560 FUN_1457f4560 body=89 status=ok
// SIG undefined FUN_1457f4560(void)

void FUN_1457f4560(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b973e10;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f45ba(param_1 + 4);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001457f45b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1457f45ba FUN_1457f45ba body=55 status=ok
// SIG undefined FUN_1457f45ba(void)

void FUN_1457f45ba(longlong *param_1)

{
  FUN_1410b06f0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f45f1 FUN_1457f45f1 body=42 status=ok
// SIG undefined FUN_1457f45f1(void)

void FUN_1457f45f1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f461c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7fc570;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1457f461c FUN_1457f461c body=32 status=ok
// SIG undefined FUN_1457f461c(void)

undefined8 * FUN_1457f461c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5ced20;
  return param_1;
}



// FUNCTION 1457f463c FUN_1457f463c body=209 status=ok
// SIG undefined FUN_1457f463c(void)

void FUN_1457f463c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_1457f470e(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f470e FUN_1457f470e body=160 status=ok
// SIG undefined FUN_1457f470e(void)

void FUN_1457f470e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_140e391b0();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar6 == 0)) || (*param_2 == 0)) goto LAB_1457f4777;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_1457f4789:
    lVar5 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_1457f4789;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,param_2);
  }
  param_2[2] = lVar5;
LAB_1457f4777:
  FUN_1410b135e(lVar1,lVar5);
  return;
}



// FUNCTION 1457f47ba FUN_1457f47ba body=58 status=ok
// SIG undefined FUN_1457f47ba(void)

undefined8 * FUN_1457f47ba(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a9dca10;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1457f47f4 FUN_1457f47f4 body=45 status=ok
// SIG undefined FUN_1457f47f4(void)

void FUN_1457f47f4(longlong param_1)

{
  FUN_1410b16bc(param_1 + 0x928);
  FUN_1410b16bc(param_1 + 0x9a8);
  FUN_1410b16f8(param_1);
  return;
}



// FUNCTION 1457f4838 FUN_1457f4838 body=455 status=ok
// SIG undefined FUN_1457f4838(void)

undefined8 * FUN_1457f4838(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_258 [32];
  longlong local_238 [2];
  longlong *local_228;
  undefined1 *local_220;
  undefined1 local_214 [4];
  undefined1 local_210 [472];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a16f910;
  FUN_1411f12c4(param_1 + 3);
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  uVar2 = FUN_1457f4a00();
  FUN_140005f6c(param_1 + 0x3e,uVar2,0,0);
  FUN_1411f12c4(local_210);
  iVar1 = *(int *)(param_1 + 0x42);
  *(uint *)(param_1 + 0x42) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x214) < iVar1 + 1U) {
    FUN_1457f4a3a(param_1 + 0x41,iVar1);
  }
  FUN_1410b1c98((longlong)iVar1 * 0x1d8 + param_1[0x41],local_210);
  FUN_140056680(local_238,L"ElementA");
  local_228 = local_238;
  local_220 = local_210;
  FUN_1457f4de8(param_1 + 0x43,local_214);
  if (local_238[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f4acc(param_1 + 0x4d,&local_228,local_210);
  FUN_141054840(local_210);
  if ((local_38 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f4a00 FUN_1457f4a00 body=57 status=ok
// SIG undefined FUN_1457f4a00(void)

void FUN_1457f4a00(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a08e0 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a08e0 = FUN_140002ddd(FUN_1462a1689,uVar1,L"NexusSerializeTest_BasicTypes");
  }
  return;
}



// FUNCTION 1457f4a3a FUN_1457f4a3a body=146 status=ok
// SIG undefined FUN_1457f4a3a(void)

void FUN_1457f4a3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x1d8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1d8)) {
      uVar5 = uVar4 / 0x1d8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1d8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457f4acc FUN_1457f4acc body=296 status=ok
// SIG undefined FUN_1457f4acc(void)

undefined4 * FUN_1457f4acc(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_1457f4c6a(param_1,local_48);
  FUN_1410b1c98(local_40,param_3);
  *(undefined4 *)(local_40 + 0x1d8) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1410b225f(local_40);
  cVar2 = FUN_1457f4bf6(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)(local_40 + 0x1dc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1d8) =
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
      FUN_1457f5154(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f4bf6 FUN_1457f4bf6 body=116 status=ok
// SIG undefined FUN_1457f4bf6(void)

undefined8 FUN_1457f4bf6(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1470aa0b8(), iVar1 != -1)) {
    _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x1e0);
    (*(code *)**(undefined8 **)(*param_1 + (longlong)iVar1 * 0x1e0))(_Dst,0);
    memmove(_Dst,param_3,0x1d8);
    FUN_1470aa12a(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1457f4c6a FUN_1457f4c6a body=236 status=ok
// SIG undefined FUN_1457f4c6a(void)

int * FUN_1457f4c6a(longlong *param_1,int *param_2)

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
      FUN_1457f4d56(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1e0);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1e0) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x1e0 + *param_1;
  return param_2;
}



// FUNCTION 1457f4d56 FUN_1457f4d56 body=146 status=ok
// SIG undefined FUN_1457f4d56(void)

void FUN_1457f4d56(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x1e0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1e0)) {
      uVar5 = uVar4 / 0x1e0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1e0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457f4de8 FUN_1457f4de8 body=353 status=ok
// SIG undefined FUN_1457f4de8(void)

undefined4 * FUN_1457f4de8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  FUN_1457f4fd6(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  uVar2 = param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FUN_1410b1c98(local_40 + 2,uVar2);
  *(undefined4 *)(local_40 + 0x3d) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_1457f4f4a(param_1,uVar5,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1ec) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x3d) =
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
      FUN_1457f5320(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457f4f4a FUN_1457f4f4a body=139 status=ok
// SIG undefined FUN_1457f4f4a(void)

undefined8 FUN_1457f4f4a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1470a9f6c(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x1f0);
    FUN_141054840(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x1f0),param_3,0x1e8);
    FUN_1470aa03e(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1457f4fd6 FUN_1457f4fd6 body=236 status=ok
// SIG undefined FUN_1457f4fd6(void)

int * FUN_1457f4fd6(longlong *param_1,int *param_2)

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
      FUN_1457f50c2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1f0);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1f0) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x1f0 + *param_1;
  return param_2;
}



// FUNCTION 1457f50c2 FUN_1457f50c2 body=146 status=ok
// SIG undefined FUN_1457f50c2(void)

void FUN_1457f50c2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x1f0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x842108421084211),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x1f0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457f5154 FUN_1457f5154 body=459 status=ok
// SIG undefined FUN_1457f5154(void)

void FUN_1457f5154(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x1e0;
        iVar6 = FUN_1410b225f(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1dc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1d8 + lVar10) =
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



// FUNCTION 1457f5320 FUN_1457f5320 body=494 status=ok
// SIG undefined FUN_1457f5320(void)

void FUN_1457f5320(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x1f0;
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
        *(int *)(lVar3 + 0x1ec + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1e8 + lVar11) =
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



// FUNCTION 1457f5510 FUN_1457f5510 body=40 status=ok
// SIG undefined FUN_1457f5510(void)

undefined8 FUN_1457f5510(undefined8 param_1,int param_2)

{
  FUN_1457f5538();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f5538 FUN_1457f5538 body=158 status=ok
// SIG undefined FUN_1457f5538(void)

void FUN_1457f5538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8d4570;
  param_1[5] = &PTR_FUN_14a8d4810;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_140955eaa(param_1 + 0x31);
  FUN_1457f5636(param_1 + 0x29);
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f55d6(param_1 + 0xe);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457f55d6 FUN_1457f55d6 body=96 status=ok
// SIG undefined FUN_1457f55d6(void)

void FUN_1457f55d6(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1457f5636 FUN_1457f5636 body=96 status=ok
// SIG undefined FUN_1457f5636(void)

void FUN_1457f5636(longlong *param_1)

{
  FUN_1410b3bd6(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b3ba7(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b3ba7(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457f5696 FUN_1457f5696 body=73 status=ok
// SIG undefined FUN_1457f5696(void)

void FUN_1457f5696(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b3ba7(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457f56e0 FUN_1457f56e0 body=55 status=ok
// SIG undefined FUN_1457f56e0(void)

void FUN_1457f56e0(longlong *param_1)

{
  FUN_1410b4d7e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f572e FUN_1457f572e body=64 status=ok
// SIG undefined FUN_1457f572e(void)

void FUN_1457f572e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_14b1f93b0;
  FUN_140485912(param_1 + 0x60);
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14b1f9580;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f5776 FUN_1457f5776 body=70 status=ok
// SIG undefined FUN_1457f5776(void)

void FUN_1457f5776(longlong *param_1)

{
  FUN_1457f57bc(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457f57bc FUN_1457f57bc body=38 status=ok
// SIG undefined FUN_1457f57bc(void)

void FUN_1457f57bc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457f57e2(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1457f57e2 FUN_1457f57e2 body=59 status=ok
// SIG undefined FUN_1457f57e2(void)

void FUN_1457f57e2(longlong param_1)

{
  FUN_140861e20(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f5824 FUN_1457f5824 body=57 status=ok
// SIG undefined FUN_1457f5824(void)

void FUN_1457f5824(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69940 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69940 = FUN_140002ddd(FUN_1465220c4,uVar1,L"ImpactResponseEffect");
  }
  return;
}



// FUNCTION 1457f585e FUN_1457f585e body=221 status=ok
// SIG undefined FUN_1457f585e(void)

void FUN_1457f585e(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1410b58ca(param_2 + 0xf0);
  if (cVar1 == '\0') {
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_2 + 8);
    }
    FUN_1447325ac(puVar3,local_30,1);
    uVar2 = FUN_1410b58d2();
    FUN_140a93dbb(uVar2,local_30,param_2 + 0xf0,0);
  }
  if (*(char *)(param_1 + 0x390) == '\x01') {
    cVar1 = FUN_1410b58ca(param_2 + 0xf8);
    if (cVar1 == '\0') {
      uVar2 = FUN_1405c5fa2();
      puVar3 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(param_2 + 8);
      }
      FUN_1447325ac(puVar3,local_30,1);
      FUN_1405593a8(uVar2,param_2 + 0xf8,local_30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f593c FUN_1457f593c body=40 status=ok
// SIG undefined FUN_1457f593c(void)

undefined8 FUN_1457f593c(undefined8 param_1,int param_2)

{
  FUN_1457f5964();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f5964 FUN_1457f5964 body=82 status=ok
// SIG undefined FUN_1457f5964(void)

void FUN_1457f5964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b296760;
  param_1[0x4a] = &PTR_FUN_14b296b60;
  FUN_1457f59b6(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_140731102(param_1);
  return;
}



// FUNCTION 1457f59b6 FUN_1457f59b6 body=49 status=ok
// SIG undefined FUN_1457f59b6(void)

void FUN_1457f59b6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457f59e8 FUN_1457f59e8 body=259 status=ok
// SIG undefined FUN_1457f59e8(void)

void FUN_1457f59e8(longlong *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = *param_2;
    if (param_2[2] != 0) {
      uVar3 = FUN_144a78877(uVar3);
    }
    uVar4 = param_2[3];
    if (param_2[5] != 0) {
      uVar4 = FUN_144a78877(uVar4);
    }
    uVar2 = param_2[6];
    if (param_2[8] != 0) {
      uVar2 = FUN_144a78877(uVar2);
    }
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)(int)(uVar4 ^ uVar3 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar9 * 4);
    if (lVar5 != -1) {
      lVar5 = lVar5 * 0xb0 + *param_1;
      cVar1 = FUN_140ac16b0(lVar5,param_2);
      if (cVar1 == '\0') {
        do {
          lVar6 = lVar5;
          lVar5 = (longlong)*(int *)(lVar6 + 0xa8);
          if (lVar5 == -1) {
            return;
          }
          lVar5 = lVar5 * 0xb0 + *param_1;
          cVar1 = FUN_140ac16b0(lVar5,param_2);
        } while (cVar1 == '\0');
        puVar8 = (undefined4 *)(lVar6 + 0xa8);
      }
      else {
        puVar8 = (undefined4 *)((longlong)plVar7 + uVar9 * 4);
      }
      FUN_1410b653e(param_1,*puVar8);
      return;
    }
  }
  return;
}



// FUNCTION 1457f5aec FUN_1457f5aec body=292 status=ok
// SIG undefined FUN_1457f5aec(void)

void FUN_1457f5aec(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_3 != 0) {
    plVar1 = (longlong *)FUN_1410b65f8(param_1 + 0x1c);
    if (plVar1 != (longlong *)0x0) {
      FUN_14105743e(local_60,param_2);
      lVar2 = FUN_14479d2ce(param_1 + 0x1c);
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
      }
      FUN_140fda471(&local_7c,uVar3);
      if (local_7c == 0) {
        local_68 = DAT_14cb7bba0;
        local_70 = DAT_14cb7bb98;
      }
      else {
        local_68 = local_74;
        local_70 = CONCAT44(uStack_78,local_7c);
      }
      FUN_144928d62(local_50,1,&local_70);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_60,*param_3);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    *param_3 = 0;
  }
  FUN_140725f10(param_3);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f5c2d FUN_1457f5c2d body=35 status=ok
// SIG undefined FUN_1457f5c2d(void)

void FUN_1457f5c2d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457f5c50(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba0fee0;
  return;
}



// FUNCTION 1457f5c50 FUN_1457f5c50 body=32 status=ok
// SIG undefined FUN_1457f5c50(void)

undefined8 * FUN_1457f5c50(undefined8 *param_1)

{
  FUN_1457f5c70();
  *param_1 = &PTR_FUN_14aef4540;
  return param_1;
}



// FUNCTION 1457f5c70 FUN_1457f5c70 body=32 status=ok
// SIG undefined FUN_1457f5c70(void)

undefined8 * FUN_1457f5c70(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aea2b10;
  return param_1;
}



// FUNCTION 1457f5c90 FUN_1457f5c90 body=370 status=ok
// SIG undefined FUN_1457f5c90(void)

undefined8 * FUN_1457f5c90(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0xa30,0x10);
  FUN_1457f5ee0(puVar4);
  *puVar4 = &PTR_FUN_14b8fbee0;
  *(undefined4 *)(puVar4 + 0xe0) = 0;
  uVar3 = DAT_14c846518._4_4_;
  uVar2 = (undefined4)DAT_14c846518;
  uVar1 = DAT_14c846510._4_4_;
  *(undefined4 *)(puVar4 + 0xe1) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)puVar4 + 0x70c) = uVar1;
  *(undefined4 *)(puVar4 + 0xe2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x714) = uVar3;
  puVar4[0xe3] = DAT_14c846520;
  *(undefined4 *)(puVar4 + 0xe4) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x724) = 0;
  FUN_1410b79d2(puVar4 + 0xe6);
  *(undefined4 *)((longlong)puVar4 + 0xa07) = 0;
  puVar4[0x140] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(puVar4 + 0x142) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)puVar4 + 0xa14) = uVar1;
  *(undefined4 *)(puVar4 + 0x143) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0xa1c) = uVar3;
  puVar4[0x144] = DAT_14c8464f0;
  puVar5 = *(undefined8 **)(param_1 + 0x990);
  *(undefined8 **)(param_1 + 0x990) = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x300);
  memset(puVar4 + 1,0,0x2f8);
  *puVar4 = &PTR_FUN_14b8fbfc8;
  FUN_1410b79d2(puVar4 + 6);
  puVar5 = *(undefined8 **)(param_1 + 0x980);
  *(undefined8 **)(param_1 + 0x980) = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x100);
  memset(puVar5 + 1,0,0xf8);
  *(undefined2 *)(puVar5 + 0x1b) = 0x101;
  *(undefined1 *)((longlong)puVar5 + 0xda) = 1;
  *puVar5 = &PTR_FUN_14b8fbfd0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  *(undefined1 *)(puVar5 + 0x1f) = 0;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1457f5e02 FUN_1457f5e02 body=38 status=ok
// SIG undefined FUN_1457f5e02(void)

undefined8 FUN_1457f5e02(undefined8 param_1,int param_2)

{
  FUN_1457f5e28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f5e28 FUN_1457f5e28 body=79 status=ok
// SIG undefined FUN_1457f5e28(void)

void FUN_1457f5e28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b521910;
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f5e78(param_1 + 200);
  FUN_1457f5f54(param_1);
  return;
}



// FUNCTION 1457f5e78 FUN_1457f5e78 body=103 status=ok
// SIG undefined FUN_1457f5e78(void)

void FUN_1457f5e78(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
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



// FUNCTION 1457f5ee0 FUN_1457f5ee0 body=115 status=ok
// SIG undefined FUN_1457f5ee0(void)

undefined8 * FUN_1457f5ee0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1457f6192();
  *param_1 = &PTR_FUN_14b521910;
  memset(param_1 + 200,0,0x81);
  uVar1 = DAT_14c8464e8;
  param_1[0xdc] = DAT_14c8464e0;
  param_1[0xdd] = uVar1;
  param_1[0xde] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd9] = DAT_14c8464e0;
  param_1[0xda] = uVar1;
  param_1[0xdb] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  return param_1;
}



// FUNCTION 1457f5f54 FUN_1457f5f54 body=477 status=ok
// SIG undefined FUN_1457f5f54(void)

void FUN_1457f5f54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b521a00;
  puVar1 = (undefined8 *)param_1[0x34];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[0x34] = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0xb7] = &DAT_14a176f00;
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb7] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xb8);
  param_1[0xa4] = &DAT_14a176f00;
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  param_1[0xa4] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xa5);
  param_1[0x91] = &DAT_14a176f00;
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x91] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x92);
  param_1[0x7e] = &DAT_14a176f00;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7e] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x7f);
  param_1[0x6b] = &DAT_14a176f00;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  param_1[0x6b] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x6c);
  param_1[0x58] = &DAT_14a176f00;
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  param_1[0x58] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x59);
  param_1[0x45] = &DAT_14a176f00;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  param_1[0x45] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x46);
  FUN_1457f6132(param_1 + 0x35);
  puVar1 = (undefined8 *)param_1[0x34];
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001457f612e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 1457f6132 FUN_1457f6132 body=96 status=ok
// SIG undefined FUN_1457f6132(void)

void FUN_1457f6132(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457f6192 FUN_1457f6192 body=1177 status=ok
// SIG undefined FUN_1457f6192(void)

void FUN_1457f6192(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b521a00;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 4;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x12] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x15] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x13] = DAT_14c8464e0;
  param_1[0x14] = uVar1;
  param_1[0x18] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x16] = DAT_14c8464e0;
  param_1[0x17] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x19] = DAT_14c8464e0;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1c] = DAT_14c8464e0;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = DAT_14c8464f0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0;
  param_1[0x2a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x28] = DAT_14c8464e0;
  param_1[0x29] = uVar1;
  param_1[0x2d] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2b] = DAT_14c8464e0;
  param_1[0x2c] = uVar1;
  param_1[0x30] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2e] = DAT_14c8464e0;
  param_1[0x2f] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18d) = 0;
  param_1[0x31] = 0;
  *(undefined2 *)((longlong)param_1 + 0x195) = 1;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20d) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)((longlong)param_1 + 0x215) = 1;
  *(undefined1 *)((longlong)param_1 + 0x217) = 0;
  param_1[0x43] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x294) = 0x404;
  param_1[0x45] = &DAT_14a176f00;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x32c) = 0x404;
  param_1[0x58] = &DAT_14a176f00;
  param_1[0x68] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x3c4) = 0x404;
  param_1[0x6b] = &DAT_14a176f00;
  param_1[0x7b] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x45c) = 0x404;
  param_1[0x7e] = &DAT_14a176f00;
  param_1[0x8e] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x4f4) = 0x404;
  param_1[0x91] = &DAT_14a176f00;
  param_1[0xa1] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x58c) = 0x404;
  param_1[0xa4] = &DAT_14a176f00;
  param_1[0xb4] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb5] = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x624) = 0x404;
  param_1[0xb7] = &DAT_14a176f00;
  param_1[199] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  return;
}



// FUNCTION 1457f662c FUN_1457f662c body=116 status=ok
// SIG undefined FUN_1457f662c(void)

void FUN_1457f662c(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1457f66a0 FUN_1457f66a0 body=44 status=ok
// SIG undefined FUN_1457f66a0(void)

void FUN_1457f66a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1457f66cc(param_2);
  if (lVar1 != 0) {
    FUN_145bb46f2(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1457f66cc FUN_1457f66cc body=33 status=ok
// SIG undefined FUN_1457f66cc(void)

undefined8 FUN_1457f66cc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1411db1ae();
  if (lVar1 != 0) {
    uVar2 = FUN_1457f66ee(lVar1);
    return uVar2;
  }
  return 0;
}


