// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14868e83e FUN_14868e83e body=93 status=ok
// SIG undefined FUN_14868e83e(void)

undefined8 * FUN_14868e83e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d1f760(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14868e89c(param_1,iVar1);
      FUN_14868e90f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14868e89c FUN_14868e89c body=115 status=ok
// SIG undefined FUN_14868e89c(void)

void FUN_14868e89c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14868e90f FUN_14868e90f body=52 status=ok
// SIG undefined FUN_14868e90f(void)

void FUN_14868e90f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14868e944(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 14868e944 FUN_14868e944 body=203 status=ok
// SIG undefined FUN_14868e944(void)

undefined8 * FUN_14868e944(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14868e256(param_1 + 1,iVar1,0);
    FUN_14868e2c5(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_14868e380(param_1 + 3,iVar1,0);
    FUN_14868e3e2(param_1[3],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1403de7ba(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 14868ea10 FUN_14868ea10 body=43 status=ok
// SIG undefined FUN_14868ea10(void)

undefined8 FUN_14868ea10(undefined8 param_1,int param_2)

{
  FUN_140d1f6d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 14868ea3c FUN_14868ea3c body=55 status=ok
// SIG undefined FUN_14868ea3c(void)

void FUN_14868ea3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c7d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c7d8 = FUN_140002ddd(FUN_1464d6a7c,uVar1,L"GbxDecoCharacterDef");
  }
  return;
}



// FUNCTION 14868ea7c FUN_14868ea7c body=127 status=ok
// SIG undefined FUN_14868ea7c(void)

void FUN_14868ea7c(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[0xd] = 0;
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14b10fdb0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  return;
}



// FUNCTION 14868eafc FUN_14868eafc body=87 status=ok
// SIG undefined FUN_14868eafc(void)

void FUN_14868eafc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14b10fdb0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  return;
}



// FUNCTION 14868eb78 FUN_14868eb78 body=86 status=ok
// SIG undefined FUN_14868eb78(void)

undefined8 FUN_14868eb78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      if (*(char *)(param_3 + -0x10) == '\0') {
        *(undefined1 *)(param_2 + -0x10) = 0;
        *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      }
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14868eefc(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14868ebf6 FUN_14868ebf6 body=59 status=ok
// SIG undefined FUN_14868ebf6(void)

undefined8 FUN_14868ebf6(longlong *param_1)

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



// FUNCTION 14868ec3c FUN_14868ec3c body=34 status=ok
// SIG undefined FUN_14868ec3c(void)

void FUN_14868ec3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14868ed14(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14868ecb0 FUN_14868ecb0 body=43 status=ok
// SIG undefined FUN_14868ecb0(void)

undefined8 FUN_14868ecb0(undefined8 param_1,int param_2)

{
  FUN_14868ed14();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14868ecdc FUN_14868ecdc body=55 status=ok
// SIG undefined FUN_14868ecdc(void)

void FUN_14868ecdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c7f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c7f0 = FUN_140002ddd(FUN_1464d6aab,uVar1,L"GbxDecoCharacterTaggedAnimDef");
  }
  return;
}



// FUNCTION 14868ed14 FUN_14868ed14 body=75 status=ok
// SIG undefined FUN_14868ed14(void)

void FUN_14868ed14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b10fdb0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14868ed60(param_1 + 4);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14868ed60 FUN_14868ed60 body=54 status=ok
// SIG undefined FUN_14868ed60(void)

void FUN_14868ed60(longlong *param_1)

{
  FUN_14868ed96(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14868ed96 FUN_14868ed96 body=356 status=ok
// SIG undefined FUN_14868ed96(void)

void FUN_14868ed96(longlong *param_1,int param_2)

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



// FUNCTION 14868eefc FUN_14868eefc body=122 status=ok
// SIG undefined FUN_14868eefc(void)

longlong FUN_14868eefc(longlong param_1,longlong param_2)

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
    FUN_14868ef76(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14868ef76 FUN_14868ef76 body=210 status=ok
// SIG undefined FUN_14868ef76(void)

undefined8 * FUN_14868ef76(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14868ed96(param_1,(ulonglong)uVar1);
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
          FUN_14868f048(puVar6,puVar4);
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



// FUNCTION 14868f048 FUN_14868f048 body=114 status=ok
// SIG undefined FUN_14868f048(void)

undefined8 * FUN_14868f048(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14868f0bc FUN_14868f0bc body=98 status=ok
// SIG undefined FUN_14868f0bc(void)

void FUN_14868f0bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14868f11e FUN_14868f11e body=52 status=ok
// SIG undefined FUN_14868f11e(void)

void FUN_14868f11e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14868f152(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 14868f152 FUN_14868f152 body=153 status=ok
// SIG undefined FUN_14868f152(void)

undefined8 * FUN_14868f152(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14868bfac(param_1,iVar1,0);
    FUN_14868c00e(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 14868f1ec FUN_14868f1ec body=157 status=ok
// SIG undefined FUN_14868f1ec(void)

void FUN_14868f1ec(longlong *param_1,undefined8 param_2,void *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined1 local_138 [256];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = param_2;
  memcpy(local_138,param_3,0x100);
  local_38 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5c898);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_140);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868f28a FUN_14868f28a body=199 status=ok
// SIG undefined FUN_14868f28a(void)

void FUN_14868f28a(longlong *param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_1a8 [32];
  undefined8 local_188 [2];
  undefined1 local_178 [272];
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_68[0] = 0;
  local_58 = (longlong *)0x0;
  local_188[0] = param_2;
  memcpy(local_178,param_3,0x10d);
  FUN_147f65dfc(local_68,(longlong)param_3 + 0x110);
  uVar1 = FUN_14477b072(param_1,DAT_14cb5c8a8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_188);
  if (local_68[0] != 0) {
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868f36e FUN_14868f36e body=288 status=ok
// SIG undefined FUN_14868f36e(void)

void FUN_14868f36e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_14887f006(local_18,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868f490 FUN_14868f490 body=288 status=ok
// SIG undefined FUN_14868f490(void)

void FUN_14868f490(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_14887f056(local_18,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868f5c0 FUN_14868f5c0 body=366 status=ok
// SIG undefined FUN_14868f5c0(void)

void FUN_14868f5c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [44];
  int local_10c;
  undefined1 local_108 [56];
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_10c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  uVar8 = uStack_90;
  uVar1 = local_c8;
  local_108[0] = local_10c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d0 = 3;
  if ((undefined8 *)local_108 == param_3) {
    uVar8 = 3;
  }
  else {
    uStack_90 = CONCAT71(uStack_90._1_7_,3);
    local_c8 = CONCAT71(local_c8._1_7_,local_108[0]);
    uStack_90._4_4_ = SUB84(uVar8,4);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_c8._4_4_ = SUB84(uVar1,4);
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(param_3 + 6) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_98._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_90._4_4_;
    *(undefined4 *)(param_3 + 4) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_a8._4_4_;
    *(undefined4 *)(param_3 + 5) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_a0._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)param_3 = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_3 + 4) = local_c8._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c0._4_4_;
    local_c8 = uVar1;
    uStack_c0 = uVar2;
    local_b8 = uVar3;
    uStack_b0 = uVar4;
    local_a8 = uVar5;
    uStack_a0 = uVar6;
    local_98 = uVar7;
    uStack_90 = uVar8;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8 & 0xff])();
    uVar8 = (ulonglong)local_d0;
  }
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8])(local_108);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868f730 FUN_14868f730 body=365 status=ok
// SIG undefined FUN_14868f730(void)

void FUN_14868f730(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108 [7];
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  uVar8 = uStack_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108[0] = local_110;
  local_d0 = 5;
  if (local_108 == param_3) {
    uVar8 = 5;
  }
  else {
    uStack_90 = CONCAT71(uStack_90._1_7_,5);
    uStack_90._4_4_ = SUB84(uVar8,4);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_c8._0_4_ = (undefined4)local_110;
    local_c8._4_4_ = (undefined4)((ulonglong)local_110 >> 0x20);
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(param_3 + 6) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_98._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_90._4_4_;
    *(undefined4 *)(param_3 + 4) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_a8._4_4_;
    *(undefined4 *)(param_3 + 5) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_a0._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)param_3 = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_3 + 4) = local_c8._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c0._4_4_;
    local_c8 = uVar1;
    uStack_c0 = uVar2;
    local_b8 = uVar3;
    uStack_b0 = uVar4;
    local_a8 = uVar5;
    uStack_a0 = uVar6;
    local_98 = uVar7;
    uStack_90 = uVar8;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8 & 0xff])();
    uVar8 = (ulonglong)local_d0;
  }
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8])(local_108);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868f89e FUN_14868f89e body=476 status=ok
// SIG undefined FUN_14868f89e(void)

void FUN_14868f89e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_198 [32];
  undefined1 local_178 [40];
  longlong local_150;
  undefined8 local_140 [7];
  byte local_108;
  undefined1 local_100 [40];
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144928b90(local_100,0);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_100);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1400750e6(local_178,local_100);
  FUN_1400750e6(local_140,local_178);
  local_108 = 4;
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  if (local_140 != param_3) {
    uStack_90 = CONCAT71(uStack_90._1_7_,local_108);
    (*(code *)(&PTR_FUN_14b119c50)[local_108])(&local_c8,local_140);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(param_3 + 6) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_98._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_90._4_4_;
    *(undefined4 *)(param_3 + 4) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_a8._4_4_;
    *(undefined4 *)(param_3 + 5) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_a0._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)param_3 = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_3 + 4) = local_c8._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c0._4_4_;
    local_c8 = uVar1;
    uStack_c0 = uVar2;
    local_b8 = uVar3;
    uStack_b0 = uVar4;
    local_a8 = uVar5;
    uStack_a0 = uVar6;
    local_98 = uVar7;
    uStack_90 = uVar8;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8 & 0xff])(&local_c8);
  }
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_108])(local_140);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868fa7c FUN_14868fa7c body=459 status=ok
// SIG undefined FUN_14868fa7c(void)

void FUN_14868fa7c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  byte local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  uVar7 = local_138;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_14477b664(uStack_130);
  uVar6 = FUN_14477b664(uVar5);
  uVar5 = local_128;
  local_118 = uVar7;
  uVar6 = FUN_14477b664(uVar6);
  local_110 = FUN_14477b664(uVar6);
  local_108 = uVar5;
  local_e0 = 0;
  if (&local_118 == param_3) {
    uVar8 = 0;
  }
  else {
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    local_d8 = uVar7;
    uVar7 = FUN_14477b664(local_110);
    uVar7 = FUN_14477b664(uVar7);
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_c8._0_4_ = (undefined4)local_108;
    local_c8._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    uStack_d0._0_4_ = (undefined4)uVar7;
    uStack_d0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_98 = (undefined4)local_d8;
    uStack_94 = local_d8._4_4_;
    uStack_90 = (undefined4)uStack_d0;
    uStack_8c = uStack_d0._4_4_;
    uVar7 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar1 = param_3[3];
    uVar2 = param_3[4];
    uVar3 = param_3[5];
    uVar4 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)param_3 = (undefined4)local_d8;
    *(undefined4 *)((longlong)param_3 + 4) = local_d8._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d0._4_4_;
    *(undefined4 *)(param_3 + 6) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_a8._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_a0._4_4_;
    *(undefined4 *)(param_3 + 4) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
    *(undefined4 *)(param_3 + 3) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_c0._4_4_;
    local_d8 = uVar7;
    uStack_d0 = uVar5;
    local_c8 = uVar6;
    uStack_c0 = uVar1;
    local_b8 = uVar2;
    uStack_b0 = uVar3;
    local_a8 = uVar4;
    uStack_a0 = uVar8;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8 & 0xff])(&local_d8);
    uVar8 = (ulonglong)local_e0;
  }
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8])(&local_118);
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868fc48 FUN_14868fc48 body=367 status=ok
// SIG undefined FUN_14868fc48(void)

void FUN_14868fc48(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [44];
  undefined4 local_10c;
  undefined4 local_108 [14];
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_10c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  uVar8 = uStack_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108[0] = local_10c;
  local_d0 = 2;
  if ((undefined8 *)local_108 == param_3) {
    uVar8 = 2;
  }
  else {
    uStack_90 = CONCAT71(uStack_90._1_7_,2);
    uStack_90._4_4_ = SUB84(uVar8,4);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_88 = local_10c;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(param_3 + 6) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_98._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_90._4_4_;
    *(undefined4 *)(param_3 + 4) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_a8._4_4_;
    *(undefined4 *)(param_3 + 5) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_a0._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)param_3 = local_10c;
    *(undefined4 *)((longlong)param_3 + 4) = local_c8._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c0._4_4_;
    local_c8 = uVar1;
    uStack_c0 = uVar2;
    local_b8 = uVar3;
    uStack_b0 = uVar4;
    local_a8 = uVar5;
    uStack_a0 = uVar6;
    local_98 = uVar7;
    uStack_90 = uVar8;
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8 & 0xff])();
    uVar8 = (ulonglong)local_d0;
  }
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8])(local_108);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14868fe04 FUN_14868fe04 body=45 status=ok
// SIG undefined FUN_14868fe04(void)

longlong FUN_14868fe04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868fe38 FUN_14868fe38 body=45 status=ok
// SIG undefined FUN_14868fe38(void)

longlong FUN_14868fe38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868fe6c FUN_14868fe6c body=48 status=ok
// SIG undefined FUN_14868fe6c(void)

longlong FUN_14868fe6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14868fedc FUN_14868fedc body=112 status=ok
// SIG undefined FUN_14868fedc(void)

void FUN_14868fedc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0x3fb99999a0000000;
  return;
}



// FUNCTION 14868ffd4 FUN_14868ffd4 body=63 status=ok
// SIG undefined FUN_14868ffd4(void)

undefined1 FUN_14868ffd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148690102(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 14869003c FUN_14869003c body=59 status=ok
// SIG undefined FUN_14869003c(void)

undefined8 FUN_14869003c(longlong *param_1)

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



// FUNCTION 148690088 FUN_148690088 body=44 status=ok
// SIG undefined FUN_148690088(void)

void FUN_148690088(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148690102 FUN_148690102 body=121 status=ok
// SIG undefined FUN_148690102(void)

longlong * FUN_148690102(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_14065c7a4(param_1 + 1,param_2 + 1);
  plVar2 = param_2 + 3;
  plVar3 = param_1 + 3;
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  FUN_144a7bb84(param_1 + 0x12,param_2 + 0x12);
  lVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = lVar1;
  return param_1;
}



// FUNCTION 1486901ec FUN_1486901ec body=106 status=ok
// SIG undefined FUN_1486901ec(void)

undefined1 FUN_1486901ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
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
      puVar1 = (undefined1 *)(param_3 + lVar10);
      lVar2 = param_2 + 8 + lVar10;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      FUN_144a7bb84(lVar2,puVar1 + 8);
      uVar3 = *(undefined4 *)(puVar1 + 0x24);
      uVar4 = *(undefined4 *)(puVar1 + 0x28);
      uVar5 = *(undefined4 *)(puVar1 + 0x2c);
      uVar6 = *(undefined4 *)(puVar1 + 0x2c);
      uVar7 = *(undefined4 *)(puVar1 + 0x30);
      uVar8 = *(undefined4 *)(puVar1 + 0x34);
      uVar9 = *(undefined4 *)(puVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 0x20);
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      *(undefined4 *)(lVar2 + 0x24) = uVar6;
      *(undefined4 *)(lVar2 + 0x28) = uVar7;
      *(undefined4 *)(lVar2 + 0x2c) = uVar8;
      *(undefined4 *)(lVar2 + 0x30) = uVar9;
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14869027e FUN_14869027e body=59 status=ok
// SIG undefined FUN_14869027e(void)

undefined8 FUN_14869027e(longlong *param_1)

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



// FUNCTION 148690320 FUN_148690320 body=48 status=ok
// SIG undefined FUN_148690320(void)

void FUN_148690320(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x300);
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b119620;
  return;
}



// FUNCTION 148690350 FUN_148690350 body=32 status=ok
// SIG undefined FUN_148690350(void)

void FUN_148690350(undefined8 param_1,undefined8 *param_2)

{
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b119620;
  return;
}



// FUNCTION 148690394 FUN_148690394 body=63 status=ok
// SIG undefined FUN_148690394(void)

undefined1 FUN_148690394(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f74370(param_2,param_3);
    param_3 = param_3 + 0x300;
    param_2 = param_2 + 0x300;
  }
  return 1;
}



// FUNCTION 1486903fc FUN_1486903fc body=59 status=ok
// SIG undefined FUN_1486903fc(void)

undefined8 FUN_1486903fc(longlong *param_1)

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



// FUNCTION 148690448 FUN_148690448 body=38 status=ok
// SIG undefined FUN_148690448(void)

void FUN_148690448(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x300) == '\x01') {
    FUN_14060fc84(param_2);
    *(undefined1 *)(param_2 + 0x300) = 0;
  }
  return;
}



// FUNCTION 1486904bc FUN_1486904bc body=38 status=ok
// SIG undefined FUN_1486904bc(void)

undefined8 FUN_1486904bc(undefined8 param_1,int param_2)

{
  FUN_14060fc84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486904e2 FUN_1486904e2 body=55 status=ok
// SIG undefined FUN_1486904e2(void)

void FUN_1486904e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c940 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c940 = FUN_140002ddd(FUN_1464d74e1,uVar1,L"GbxDialogAudioProvider");
  }
  return;
}



// FUNCTION 14869051a FUN_14869051a body=32 status=ok
// SIG undefined FUN_14869051a(void)

void FUN_14869051a(undefined8 param_1,undefined8 *param_2)

{
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b1197f0;
  return;
}



// FUNCTION 148690550 FUN_148690550 body=63 status=ok
// SIG undefined FUN_148690550(void)

undefined1 FUN_148690550(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f75384(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1486905b8 FUN_1486905b8 body=59 status=ok
// SIG undefined FUN_1486905b8(void)

undefined8 FUN_1486905b8(longlong *param_1)

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



// FUNCTION 148690604 FUN_148690604 body=38 status=ok
// SIG undefined FUN_148690604(void)

void FUN_148690604(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1407f61d0(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148690678 FUN_148690678 body=57 status=ok
// SIG undefined FUN_148690678(void)

void FUN_148690678(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c958 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c958 = FUN_140002ddd(FUN_1464d7577,uVar1,L"GbxDialogAudioProviderDef");
  }
  return;
}



// FUNCTION 1486906ee FUN_1486906ee body=70 status=ok
// SIG undefined FUN_1486906ee(void)

undefined1 FUN_1486906ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_148690816(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14869075c FUN_14869075c body=59 status=ok
// SIG undefined FUN_14869075c(void)

undefined8 FUN_14869075c(longlong *param_1)

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



// FUNCTION 1486907a2 FUN_1486907a2 body=38 status=ok
// SIG undefined FUN_1486907a2(void)

void FUN_1486907a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148690816 FUN_148690816 body=88 status=ok
// SIG undefined FUN_148690816(void)

undefined8 * FUN_148690816(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14869086e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14869086e FUN_14869086e body=98 status=ok
// SIG undefined FUN_14869086e(void)

void FUN_14869086e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148690936 FUN_148690936 body=108 status=ok
// SIG undefined FUN_148690936(void)

undefined1 FUN_148690936(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
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
      puVar1 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar8;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_141471d82(lVar2,puVar1 + 4);
      uVar7 = *(undefined8 *)(puVar1 + 0xc);
      uVar3 = puVar1[0xe];
      uVar4 = puVar1[0xf];
      uVar5 = puVar1[0x10];
      uVar6 = puVar1[0x11];
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x20) = uVar7;
      *(undefined4 *)(lVar2 + 0x28) = uVar3;
      *(undefined4 *)(lVar2 + 0x2c) = uVar4;
      *(undefined4 *)(lVar2 + 0x30) = uVar5;
      *(undefined4 *)(lVar2 + 0x34) = uVar6;
      lVar8 = lVar8 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486909ca FUN_1486909ca body=59 status=ok
// SIG undefined FUN_1486909ca(void)

undefined8 FUN_1486909ca(longlong *param_1)

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



// FUNCTION 148690aac FUN_148690aac body=106 status=ok
// SIG undefined FUN_148690aac(void)

undefined8 FUN_148690aac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_14132837e(lVar2,puVar1 + 6);
      uVar6 = *(undefined8 *)(puVar1 + 0xe);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(puVar1 + 0xc);
      *(undefined8 *)(lVar2 + 0x20) = uVar6;
      lVar7 = lVar7 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148690b3e FUN_148690b3e body=59 status=ok
// SIG undefined FUN_148690b3e(void)

undefined8 FUN_148690b3e(longlong *param_1)

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



// FUNCTION 148690bfe thunk_FUN_14014e938 body=5 status=ok
// SIG undefined thunk_FUN_14014e938(void)

void thunk_FUN_14014e938(void)

{
  FUN_14014e938();
  return;
}



// FUNCTION 148690c46 FUN_148690c46 body=85 status=ok
// SIG undefined FUN_148690c46(void)

undefined8 FUN_148690c46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_148690d90(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148690cc4 FUN_148690cc4 body=59 status=ok
// SIG undefined FUN_148690cc4(void)

undefined8 FUN_148690cc4(longlong *param_1)

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



// FUNCTION 148690d58 FUN_148690d58 body=55 status=ok
// SIG undefined FUN_148690d58(void)

void FUN_148690d58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ca98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ca98 = FUN_140002ddd(FUN_1464d7c71,uVar1,L"DialogParameterMapping");
  }
  return;
}



// FUNCTION 148690d90 FUN_148690d90 body=84 status=ok
// SIG undefined FUN_148690d90(void)

longlong * FUN_148690d90(longlong *param_1,longlong *param_2)

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



// FUNCTION 148690e2c FUN_148690e2c body=97 status=ok
// SIG undefined FUN_148690e2c(void)

undefined8 FUN_148690e2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_148690f5e(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148690eb6 FUN_148690eb6 body=59 status=ok
// SIG undefined FUN_148690eb6(void)

undefined8 FUN_148690eb6(longlong *param_1)

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



// FUNCTION 148690efc FUN_148690efc body=32 status=ok
// SIG undefined FUN_148690efc(void)

void FUN_148690efc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_141851044(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148690f5e FUN_148690f5e body=93 status=ok
// SIG undefined FUN_148690f5e(void)

undefined8 * FUN_148690f5e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400e1cb7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1405a690c(param_1,iVar1);
      FUN_1405a687f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14869104c FUN_14869104c body=63 status=ok
// SIG undefined FUN_14869104c(void)

undefined1 FUN_14869104c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14869117a(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1486910b4 FUN_1486910b4 body=59 status=ok
// SIG undefined FUN_1486910b4(void)

undefined8 FUN_1486910b4(longlong *param_1)

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



// FUNCTION 148691100 FUN_148691100 body=44 status=ok
// SIG undefined FUN_148691100(void)

void FUN_148691100(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14869117a FUN_14869117a body=132 status=ok
// SIG undefined FUN_14869117a(void)

undefined4 * FUN_14869117a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_140e7790a(param_1 + 6,param_2 + 6);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  uVar5 = param_2[0x10];
  uVar6 = param_2[0x11];
  uVar7 = param_2[0x12];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar7;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  lVar8 = *(longlong *)(param_2 + 0x14);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x14);
    }
  }
  *(longlong *)(param_1 + 0x14) = lVar8;
  uVar1 = param_2[0x17];
  uVar2 = param_2[0x18];
  uVar3 = param_2[0x19];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar3;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  FUN_14054c6c4(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 14869122c FUN_14869122c body=70 status=ok
// SIG undefined FUN_14869122c(void)

undefined8 FUN_14869122c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14132837e(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 14869129a FUN_14869129a body=59 status=ok
// SIG undefined FUN_14869129a(void)

undefined8 FUN_14869129a(longlong *param_1)

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



// FUNCTION 148691354 FUN_148691354 body=74 status=ok
// SIG undefined FUN_148691354(void)

undefined8 FUN_148691354(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148691474(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1486913c6 FUN_1486913c6 body=59 status=ok
// SIG undefined FUN_1486913c6(void)

undefined8 FUN_1486913c6(longlong *param_1)

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



// FUNCTION 14869140c FUN_14869140c body=37 status=ok
// SIG undefined FUN_14869140c(void)

void FUN_14869140c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148691474 FUN_148691474 body=79 status=ok
// SIG undefined FUN_148691474(void)

undefined8 * FUN_148691474(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486914c4(param_1,iVar1);
      FUN_1401fd2a8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486914c4 FUN_1486914c4 body=115 status=ok
// SIG undefined FUN_1486914c4(void)

void FUN_1486914c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14869159c FUN_14869159c body=59 status=ok
// SIG undefined FUN_14869159c(void)

undefined8 FUN_14869159c(longlong *param_1)

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



// FUNCTION 148691668 FUN_148691668 body=105 status=ok
// SIG undefined FUN_148691668(void)

undefined8 FUN_148691668(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_148690f5e(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486916fa FUN_1486916fa body=59 status=ok
// SIG undefined FUN_1486916fa(void)

undefined8 FUN_1486916fa(longlong *param_1)

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



// FUNCTION 148691740 FUN_148691740 body=32 status=ok
// SIG undefined FUN_148691740(void)

void FUN_148691740(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_141851044(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486917ca FUN_1486917ca body=80 status=ok
// SIG undefined FUN_1486917ca(void)

undefined1 FUN_1486917ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405a6582(param_2,param_3);
    FUN_1405a652a(param_2 + 0x10,param_3 + 0x10);
    FUN_1486918ea(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148691842 FUN_148691842 body=59 status=ok
// SIG undefined FUN_148691842(void)

undefined8 FUN_148691842(longlong *param_1)

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



// FUNCTION 148691888 FUN_148691888 body=32 status=ok
// SIG undefined FUN_148691888(void)

void FUN_148691888(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1418510bc(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486918ea FUN_1486918ea body=93 status=ok
// SIG undefined FUN_1486918ea(void)

undefined8 * FUN_1486918ea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400e1c41(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148691948(param_1,iVar1);
      FUN_1486919bb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148691948 FUN_148691948 body=115 status=ok
// SIG undefined FUN_148691948(void)

void FUN_148691948(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486919bb FUN_1486919bb body=52 status=ok
// SIG undefined FUN_1486919bb(void)

void FUN_1486919bb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486919f0(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486919f0 FUN_1486919f0 body=90 status=ok
// SIG undefined FUN_1486919f0(void)

undefined8 * FUN_1486919f0(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1486914c4(param_1,iVar1,0);
    FUN_1401fd2a8(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 148691a94 FUN_148691a94 body=59 status=ok
// SIG undefined FUN_148691a94(void)

undefined8 FUN_148691a94(longlong *param_1)

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



// FUNCTION 148691b90 FUN_148691b90 body=59 status=ok
// SIG undefined FUN_148691b90(void)

undefined8 FUN_148691b90(longlong *param_1)

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



// FUNCTION 148691c30 FUN_148691c30 body=55 status=ok
// SIG undefined FUN_148691c30(void)

void FUN_148691c30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cbb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cbb8 = FUN_140002ddd(FUN_1464d827f,uVar1,L"GbxDialogGestureWeight_ValueResolver");
  }
  return;
}



// FUNCTION 148691cd6 FUN_148691cd6 body=59 status=ok
// SIG undefined FUN_148691cd6(void)

undefined8 FUN_148691cd6(longlong *param_1)

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



// FUNCTION 148691d76 FUN_148691d76 body=55 status=ok
// SIG undefined FUN_148691d76(void)

void FUN_148691d76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cbd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cbd0 = FUN_140002ddd(FUN_1464d8315,uVar1,L"GbxDialogIsSpeaking_ValueResolver");
  }
  return;
}



// FUNCTION 148691e4a FUN_148691e4a body=59 status=ok
// SIG undefined FUN_148691e4a(void)

undefined8 FUN_148691e4a(longlong *param_1)

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



// FUNCTION 148691e96 FUN_148691e96 body=38 status=ok
// SIG undefined FUN_148691e96(void)

void FUN_148691e96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1408e69a6(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148691f64 FUN_148691f64 body=54 status=ok
// SIG undefined FUN_148691f64(void)

undefined1 FUN_148691f64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14869208e(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148691fc2 FUN_148691fc2 body=59 status=ok
// SIG undefined FUN_148691fc2(void)

undefined8 FUN_148691fc2(longlong *param_1)

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



// FUNCTION 148692008 FUN_148692008 body=55 status=ok
// SIG undefined FUN_148692008(void)

void FUN_148692008(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145accad0(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14869208e FUN_14869208e body=122 status=ok
// SIG undefined FUN_14869208e(void)

longlong FUN_14869208e(longlong param_1,longlong param_2)

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
    FUN_148692108(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148692108 FUN_148692108 body=211 status=ok
// SIG undefined FUN_148692108(void)

undefined8 * FUN_148692108(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145acd0d0(param_1,(ulonglong)uVar1);
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
          FUN_1486921dc(puVar6,puVar4);
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



// FUNCTION 1486921dc FUN_1486921dc body=114 status=ok
// SIG undefined FUN_1486921dc(void)

undefined8 * FUN_1486921dc(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486922be FUN_1486922be body=54 status=ok
// SIG undefined FUN_1486922be(void)

undefined1 FUN_1486922be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486923bc(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14869231c FUN_14869231c body=59 status=ok
// SIG undefined FUN_14869231c(void)

undefined8 FUN_14869231c(longlong *param_1)

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



// FUNCTION 1486923bc FUN_1486923bc body=122 status=ok
// SIG undefined FUN_1486923bc(void)

undefined8 * FUN_1486923bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[1];
    }
  }
  bVar2 = DAT_14c950c29;
  param_1[1] = lVar3;
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[3];
    }
  }
  param_1[3] = lVar3;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 148692492 FUN_148692492 body=59 status=ok
// SIG undefined FUN_148692492(void)

undefined8 FUN_148692492(longlong *param_1)

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



// FUNCTION 148692532 FUN_148692532 body=55 status=ok
// SIG undefined FUN_148692532(void)

void FUN_148692532(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cc78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cc78 = FUN_140002ddd(FUN_1464d871b,uVar1,L"GbxDialogMoodWeight_ValueResolver");
  }
  return;
}



// FUNCTION 1486925d4 FUN_1486925d4 body=59 status=ok
// SIG undefined FUN_1486925d4(void)

undefined8 FUN_1486925d4(longlong *param_1)

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



// FUNCTION 1486926ce FUN_1486926ce body=59 status=ok
// SIG undefined FUN_1486926ce(void)

undefined8 FUN_1486926ce(longlong *param_1)

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



// FUNCTION 14869279c FUN_14869279c body=406 status=ok
// SIG undefined FUN_14869279c(void)

void FUN_14869279c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_60 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_58 = FUN_14477b664(uVar1);
  local_50 = local_28;
  FUN_143d15368(local_18,&local_60,&local_48);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148692934 FUN_148692934 body=371 status=ok
// SIG undefined FUN_148692934(void)

void FUN_148692934(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_148828138(local_18,local_20,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148692aa8 FUN_148692aa8 body=148 status=ok
// SIG undefined FUN_148692aa8(void)

void FUN_148692aa8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143d155b4(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148692b3e FUN_148692b3e body=148 status=ok
// SIG undefined FUN_148692b3e(void)

void FUN_148692b3e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148828228(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148692c32 FUN_148692c32 body=104 status=ok
// SIG undefined FUN_148692c32(void)

void FUN_148692c32(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5d058) {
    FUN_144b3d300(&DAT_14cb5d058);
    if (DAT_14cb5d058 == -1) {
      FUN_1446f470e(&DAT_14cb5d050,L"ReplicatedLocationType",1);
      _Init_thread_footer(&DAT_14cb5d058);
      return;
    }
  }
  return;
}



// FUNCTION 148692c9a FUN_148692c9a body=75 status=ok
// SIG undefined FUN_148692c9a(void)

void FUN_148692c9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  thunk_FUN_14482855a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148692d9a FUN_148692d9a body=45 status=ok
// SIG undefined FUN_148692d9a(void)

longlong FUN_148692d9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140feedda(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148692dce FUN_148692dce body=48 status=ok
// SIG undefined FUN_148692dce(void)

longlong FUN_148692dce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_140feedda(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148692e1a FUN_148692e1a body=96 status=ok
// SIG undefined FUN_148692e1a(void)

void FUN_148692e1a(undefined8 param_1,undefined8 *param_2)

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
  FUN_144a6ccf8(param_2 + 2);
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 0;
  *(undefined4 *)((longlong)param_2 + 0x67) = 0;
  return;
}



// FUNCTION 148692e7a FUN_148692e7a body=71 status=ok
// SIG undefined FUN_148692e7a(void)

void FUN_148692e7a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_144a6ccf8(param_2 + 2);
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 0;
  *(undefined4 *)((longlong)param_2 + 0x67) = 0;
  return;
}



// FUNCTION 148692ee2 FUN_148692ee2 body=166 status=ok
// SIG undefined FUN_148692ee2(void)

undefined8 FUN_148692ee2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar8);
      lVar2 = param_2 + 0x10 + lVar8;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_1411f346e(lVar2,puVar1 + 2);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[4];
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(puVar1 + 5);
      lVar3 = param_2 + 0x30 + lVar8;
      lVar2 = param_3 + lVar8;
      FUN_14132837e(lVar3,lVar2 + 0x30);
      uVar7 = *(undefined8 *)(lVar2 + 0x50);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x48);
      *(undefined8 *)(lVar3 + 0x20) = uVar7;
      *(undefined4 *)(lVar3 + 0x37) = *(undefined4 *)(lVar2 + 0x67);
      uVar4 = *(undefined4 *)(lVar2 + 0x5c);
      uVar5 = *(undefined4 *)(lVar2 + 0x60);
      uVar6 = *(undefined4 *)(lVar2 + 100);
      *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar2 + 0x58);
      *(undefined4 *)(lVar3 + 0x2c) = uVar4;
      *(undefined4 *)(lVar3 + 0x30) = uVar5;
      *(undefined4 *)(lVar3 + 0x34) = uVar6;
      lVar8 = lVar8 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148692fb0 FUN_148692fb0 body=59 status=ok
// SIG undefined FUN_148692fb0(void)

undefined8 FUN_148692fb0(longlong *param_1)

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



// FUNCTION 148692ff6 FUN_148692ff6 body=33 status=ok
// SIG undefined FUN_148692ff6(void)

void FUN_148692ff6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_144a7b030(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1486930ce FUN_1486930ce body=59 status=ok
// SIG undefined FUN_1486930ce(void)

undefined8 FUN_1486930ce(longlong *param_1)

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



// FUNCTION 14869311a FUN_14869311a body=39 status=ok
// SIG undefined FUN_14869311a(void)

void FUN_14869311a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_1407acd04(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x2e8) = 0;
  }
  return;
}



// FUNCTION 1486931ec FUN_1486931ec body=59 status=ok
// SIG undefined FUN_1486931ec(void)

undefined8 FUN_1486931ec(longlong *param_1)

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



// FUNCTION 14869328c FUN_14869328c body=55 status=ok
// SIG undefined FUN_14869328c(void)

void FUN_14869328c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ce20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ce20 = FUN_140002ddd(FUN_1464d93fd,uVar1,L"GbxDialogVoicePitchOffset_ValueResolver");
  }
  return;
}



// FUNCTION 14869333a FUN_14869333a body=75 status=ok
// SIG undefined FUN_14869333a(void)

undefined1 FUN_14869333a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1486934d2(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486933ae FUN_1486933ae body=59 status=ok
// SIG undefined FUN_1486933ae(void)

undefined8 FUN_1486933ae(longlong *param_1)

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



// FUNCTION 1486933f4 FUN_1486933f4 body=43 status=ok
// SIG undefined FUN_1486933f4(void)

void FUN_1486933f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148693466 FUN_148693466 body=52 status=ok
// SIG undefined FUN_148693466(void)

undefined8 * FUN_148693466(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14869349a FUN_14869349a body=55 status=ok
// SIG undefined FUN_14869349a(void)

void FUN_14869349a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ce50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ce50 = FUN_140002ddd(FUN_1464d948b,uVar1,L"GbxDiscoveryCategoryDef");
  }
  return;
}



// FUNCTION 1486934d2 FUN_1486934d2 body=84 status=ok
// SIG undefined FUN_1486934d2(void)

longlong * FUN_1486934d2(longlong *param_1,longlong *param_2)

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



// FUNCTION 148693528 FUN_148693528 body=28 status=ok
// SIG undefined FUN_148693528(void)

undefined8 FUN_148693528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14869360e FUN_14869360e body=97 status=ok
// SIG undefined FUN_14869360e(void)

undefined8 FUN_14869360e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (param_4 != 0) {
    puVar9 = (undefined4 *)(param_3 + 0x18);
    puVar8 = (undefined4 *)(param_2 + 0x18);
    do {
      FUN_141289ada(puVar8 + -4,puVar9 + -4);
      *puVar8 = *puVar9;
      FUN_148693780(puVar8 + 2,puVar9 + 2);
      uVar1 = puVar9[7];
      uVar2 = puVar9[8];
      uVar3 = puVar9[9];
      uVar4 = puVar9[10];
      uVar5 = puVar9[0xb];
      uVar6 = puVar9[0xc];
      uVar7 = puVar9[0xd];
      puVar8[6] = puVar9[6];
      puVar8[7] = uVar1;
      puVar8[8] = uVar2;
      puVar8[9] = uVar3;
      puVar8[10] = uVar4;
      puVar8[0xb] = uVar5;
      puVar8[0xc] = uVar6;
      puVar8[0xd] = uVar7;
      puVar9 = puVar9 + 0x14;
      puVar8 = puVar8 + 0x14;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148693698 FUN_148693698 body=59 status=ok
// SIG undefined FUN_148693698(void)

undefined8 FUN_148693698(longlong *param_1)

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



// FUNCTION 1486936de FUN_1486936de body=34 status=ok
// SIG undefined FUN_1486936de(void)

void FUN_1486936de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14585cdb4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148693746 FUN_148693746 body=57 status=ok
// SIG undefined FUN_148693746(void)

void FUN_148693746(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ce80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ce80 = FUN_140002ddd(FUN_1464d951b,uVar1,L"GbxDiscoveryDiscovererDef");
  }
  return;
}



// FUNCTION 148693780 FUN_148693780 body=93 status=ok
// SIG undefined FUN_148693780(void)

undefined8 * FUN_148693780(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14585cdfb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486937de(param_1,iVar1);
      FUN_148693851(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486937de FUN_1486937de body=115 status=ok
// SIG undefined FUN_1486937de(void)

void FUN_1486937de(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148693851 FUN_148693851 body=134 status=ok
// SIG undefined FUN_148693851(void)

void FUN_148693851(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 1486938d8 FUN_1486938d8 body=28 status=ok
// SIG undefined FUN_1486938d8(void)

undefined8 FUN_1486938d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148693946 FUN_148693946 body=62 status=ok
// SIG undefined FUN_148693946(void)

undefined1 FUN_148693946(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1486939ac FUN_1486939ac body=59 status=ok
// SIG undefined FUN_1486939ac(void)

undefined8 FUN_1486939ac(longlong *param_1)

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



// FUNCTION 1486939f2 FUN_1486939f2 body=43 status=ok
// SIG undefined FUN_1486939f2(void)

void FUN_1486939f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148693a72 FUN_148693a72 body=104 status=ok
// SIG undefined FUN_148693a72(void)

undefined8 FUN_148693a72(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14882941c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148693adc FUN_148693adc body=28 status=ok
// SIG undefined FUN_148693adc(void)

undefined8 FUN_148693adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148693b72 FUN_148693b72 body=104 status=ok
// SIG undefined FUN_148693b72(void)

undefined8 FUN_148693b72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148693c02 FUN_148693c02 body=59 status=ok
// SIG undefined FUN_148693c02(void)

undefined8 FUN_148693c02(longlong *param_1)

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



// FUNCTION 148693c48 FUN_148693c48 body=38 status=ok
// SIG undefined FUN_148693c48(void)

void FUN_148693c48(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148693d72 FUN_148693d72 body=55 status=ok
// SIG undefined FUN_148693d72(void)

void FUN_148693d72(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148693dc0 FUN_148693dc0 body=63 status=ok
// SIG undefined FUN_148693dc0(void)

undefined1 FUN_148693dc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148693eca(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148693e28 FUN_148693e28 body=59 status=ok
// SIG undefined FUN_148693e28(void)

undefined8 FUN_148693e28(longlong *param_1)

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



// FUNCTION 148693eca FUN_148693eca body=150 status=ok
// SIG undefined FUN_148693eca(void)

longlong FUN_148693eca(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  FUN_14184b2ce();
  FUN_1486934d2(param_1 + 0x18,param_2 + 0x18);
  FUN_1486934d2(param_1 + 0x30,param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  FUN_144a787a6(param_1 + 0xa8,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 148693f62 FUN_148693f62 body=64 status=ok
// SIG undefined FUN_148693f62(void)

void FUN_148693f62(longlong param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148693fe4 FUN_148693fe4 body=102 status=ok
// SIG undefined FUN_148693fe4(void)

undefined8 FUN_148693fe4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      lVar2 = param_2 + 0x40 + lVar14;
      *(undefined4 *)(lVar2 + -0x20) = puVar1[8];
      *(undefined4 *)(lVar2 + -0x1c) = uVar11;
      *(undefined4 *)(lVar2 + -0x18) = uVar12;
      *(undefined4 *)(lVar2 + -0x14) = uVar13;
      *(undefined4 *)(lVar2 + -0x30) = uVar7;
      *(undefined4 *)(lVar2 + -0x2c) = uVar8;
      *(undefined4 *)(lVar2 + -0x28) = uVar9;
      *(undefined4 *)(lVar2 + -0x24) = uVar10;
      *(undefined4 *)(lVar2 + -0x40) = uVar3;
      *(undefined4 *)(lVar2 + -0x3c) = uVar4;
      *(undefined4 *)(lVar2 + -0x38) = uVar5;
      *(undefined4 *)(lVar2 + -0x34) = uVar6;
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(puVar1 + 0xc);
      *(undefined4 *)(lVar2 + -8) = puVar1[0xe];
      FUN_1447715ec();
      lVar14 = lVar14 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148694072 FUN_148694072 body=59 status=ok
// SIG undefined FUN_148694072(void)

undefined8 FUN_148694072(longlong *param_1)

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



// FUNCTION 1486940b8 FUN_1486940b8 body=40 status=ok
// SIG undefined FUN_1486940b8(void)

void FUN_1486940b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148694142 FUN_148694142 body=63 status=ok
// SIG undefined FUN_148694142(void)

undefined1 FUN_148694142(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486942a6(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 1486941aa FUN_1486941aa body=59 status=ok
// SIG undefined FUN_1486941aa(void)

undefined8 FUN_1486941aa(longlong *param_1)

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



// FUNCTION 1486941f6 FUN_1486941f6 body=40 status=ok
// SIG undefined FUN_1486941f6(void)

void FUN_1486941f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_1459a6540(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 14869426c FUN_14869426c body=57 status=ok
// SIG undefined FUN_14869426c(void)

void FUN_14869426c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5cfa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5cfa8 = FUN_140002ddd(FUN_1464d9a79,uVar1,L"GbxDiscoveryGlobals");
  }
  return;
}



// FUNCTION 1486942a6 FUN_1486942a6 body=371 status=ok
// SIG undefined FUN_1486942a6(void)

longlong FUN_1486942a6(longlong param_1,longlong param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_14869441a(param_1 + 0x20,param_2 + 0x20);
  FUN_14869446e(param_1 + 0x38,param_2 + 0x38);
  FUN_14869446e(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  uVar6 = *(undefined4 *)(param_2 + 0x7c);
  uVar7 = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  FUN_148693eca(param_1 + 0x88,param_2 + 0x88);
  uVar1 = *(undefined4 *)(param_2 + 0x144);
  uVar2 = *(undefined4 *)(param_2 + 0x148);
  uVar3 = *(undefined4 *)(param_2 + 0x14c);
  uVar4 = *(undefined4 *)(param_2 + 0x150);
  uVar5 = *(undefined4 *)(param_2 + 0x154);
  uVar6 = *(undefined4 *)(param_2 + 0x158);
  uVar7 = *(undefined4 *)(param_2 + 0x15c);
  uVar8 = *(undefined4 *)(param_2 + 0x160);
  uVar9 = *(undefined4 *)(param_2 + 0x164);
  uVar10 = *(undefined4 *)(param_2 + 0x168);
  uVar11 = *(undefined4 *)(param_2 + 0x16c);
  uVar12 = *(undefined4 *)(param_2 + 0x170);
  uVar13 = *(undefined4 *)(param_2 + 0x174);
  uVar14 = *(undefined4 *)(param_2 + 0x178);
  uVar15 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  *(undefined4 *)(param_1 + 0x154) = uVar5;
  *(undefined4 *)(param_1 + 0x158) = uVar6;
  *(undefined4 *)(param_1 + 0x15c) = uVar7;
  *(undefined4 *)(param_1 + 0x160) = uVar8;
  *(undefined4 *)(param_1 + 0x164) = uVar9;
  *(undefined4 *)(param_1 + 0x168) = uVar10;
  *(undefined4 *)(param_1 + 0x16c) = uVar11;
  *(undefined4 *)(param_1 + 0x170) = uVar12;
  *(undefined4 *)(param_1 + 0x174) = uVar13;
  *(undefined4 *)(param_1 + 0x178) = uVar14;
  *(undefined4 *)(param_1 + 0x17c) = uVar15;
  FUN_14863e21c(param_1 + 0x180,param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = *(undefined4 *)(param_2 + 0x1a8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  FUN_144a787a6(param_1 + 0x1b0,param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  uVar1 = *(undefined4 *)(param_2 + 0x1d4);
  uVar2 = *(undefined4 *)(param_2 + 0x1d8);
  uVar3 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  *(undefined4 *)(param_1 + 0x1dc) = uVar3;
  FUN_144a787a6(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  uVar1 = *(undefined4 *)(param_2 + 0x1fc);
  uVar2 = *(undefined4 *)(param_2 + 0x200);
  uVar3 = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = uVar1;
  *(undefined4 *)(param_1 + 0x200) = uVar2;
  *(undefined4 *)(param_1 + 0x204) = uVar3;
  FUN_1486944c2(param_1 + 0x208,param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  FUN_148694512(param_1 + 0x220,param_2 + 0x220);
  return param_1;
}



// FUNCTION 14869441a FUN_14869441a body=84 status=ok
// SIG undefined FUN_14869441a(void)

longlong * FUN_14869441a(longlong *param_1,longlong *param_2)

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



// FUNCTION 14869446e FUN_14869446e body=84 status=ok
// SIG undefined FUN_14869446e(void)

longlong * FUN_14869446e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486944c2 FUN_1486944c2 body=79 status=ok
// SIG undefined FUN_1486944c2(void)

undefined8 * FUN_1486944c2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148694570(param_1,iVar1);
      FUN_1486945e3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148694512 FUN_148694512 body=93 status=ok
// SIG undefined FUN_148694512(void)

undefined8 * FUN_148694512(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141420108(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148694618(param_1,iVar1);
      FUN_148694687(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148694570 FUN_148694570 body=115 status=ok
// SIG undefined FUN_148694570(void)

void FUN_148694570(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486945e3 FUN_1486945e3 body=52 status=ok
// SIG undefined FUN_1486945e3(void)

void FUN_1486945e3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14185130a(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148694618 FUN_148694618 body=111 status=ok
// SIG undefined FUN_148694618(void)

void FUN_148694618(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148694687 FUN_148694687 body=141 status=ok
// SIG undefined FUN_148694687(void)

void FUN_148694687(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
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
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      puVar2 = (undefined8 *)(param_1 + 0x40 + lVar14);
      *(undefined4 *)(puVar2 + -4) = puVar1[8];
      *(undefined4 *)((longlong)puVar2 + -0x1c) = uVar11;
      *(undefined4 *)(puVar2 + -3) = uVar12;
      *(undefined4 *)((longlong)puVar2 + -0x14) = uVar13;
      *(undefined4 *)(puVar2 + -6) = uVar7;
      *(undefined4 *)((longlong)puVar2 + -0x2c) = uVar8;
      *(undefined4 *)(puVar2 + -5) = uVar9;
      *(undefined4 *)((longlong)puVar2 + -0x24) = uVar10;
      *(undefined4 *)(puVar2 + -8) = uVar3;
      *(undefined4 *)((longlong)puVar2 + -0x3c) = uVar4;
      *(undefined4 *)(puVar2 + -7) = uVar5;
      *(undefined4 *)((longlong)puVar2 + -0x34) = uVar6;
      *(undefined2 *)(puVar2 + -2) = 0;
      *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[-2] = *(undefined8 *)(puVar1 + 0xc);
      *(undefined4 *)(puVar2 + -1) = puVar1[0xe];
      FUN_1447715ec();
      lVar14 = lVar14 + 0x68;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148694756 FUN_148694756 body=103 status=ok
// SIG undefined FUN_148694756(void)

undefined8 FUN_148694756(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_141289ada(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + 0x28 + lVar6) = *(undefined4 *)(param_3 + 0x28 + lVar6);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486947e6 FUN_1486947e6 body=59 status=ok
// SIG undefined FUN_1486947e6(void)

undefined8 FUN_1486947e6(longlong *param_1)

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



// FUNCTION 14869482c FUN_14869482c body=43 status=ok
// SIG undefined FUN_14869482c(void)

void FUN_14869482c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1486948a0 FUN_1486948a0 body=28 status=ok
// SIG undefined FUN_1486948a0(void)

undefined8 FUN_1486948a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1486948ec FUN_1486948ec body=63 status=ok
// SIG undefined FUN_1486948ec(void)

undefined1 FUN_1486948ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148694b10(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148694954 FUN_148694954 body=59 status=ok
// SIG undefined FUN_148694954(void)

undefined8 FUN_148694954(longlong *param_1)

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



// FUNCTION 1486949a0 FUN_1486949a0 body=38 status=ok
// SIG undefined FUN_1486949a0(void)

void FUN_1486949a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_148694a98(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148694a98 FUN_148694a98 body=119 status=ok
// SIG undefined FUN_148694a98(void)

void FUN_148694a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b125430;
  if ((param_1[0x15] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x15] + 0x50));
  }
  FUN_140f68e5d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148694b10 FUN_148694b10 body=210 status=ok
// SIG undefined FUN_148694b10(void)

longlong FUN_148694b10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_148694be2(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  uVar6 = *(undefined4 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_144a7bb84(param_1 + 0x90,param_2 + 0x90);
  FUN_144a82394(param_1 + 0xa8,param_2 + 0xa8);
  FUN_14123c256(param_1 + 0xb0,param_2 + 0xb0);
  uVar8 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar8;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148694be2 FUN_148694be2 body=93 status=ok
// SIG undefined FUN_148694be2(void)

undefined8 * FUN_148694be2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f68e5d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148694c40(param_1,iVar1);
      FUN_148694ca2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148694c40 FUN_148694c40 body=98 status=ok
// SIG undefined FUN_148694c40(void)

void FUN_148694c40(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148694ca2 FUN_148694ca2 body=68 status=ok
// SIG undefined FUN_148694ca2(void)

void FUN_148694ca2(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_14034cca6(param_1,param_2);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148694ce8 FUN_148694ce8 body=28 status=ok
// SIG undefined FUN_148694ce8(void)

undefined8 FUN_148694ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148694d16 FUN_148694d16 body=75 status=ok
// SIG undefined FUN_148694d16(void)

undefined8 * FUN_148694d16(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b127600;
  lVar1 = 0x268;
  do {
    FUN_14494dff0((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x120;
  } while (lVar1 != -0xf8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148694da4 FUN_148694da4 body=63 status=ok
// SIG undefined FUN_148694da4(void)

undefined1 FUN_148694da4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148694eee(param_2,param_3);
    param_3 = param_3 + 0x3f8;
    param_2 = param_2 + 0x3f8;
  }
  return 1;
}



// FUNCTION 148694e0c FUN_148694e0c body=59 status=ok
// SIG undefined FUN_148694e0c(void)

undefined8 FUN_148694e0c(longlong *param_1)

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



// FUNCTION 148694e58 FUN_148694e58 body=72 status=ok
// SIG undefined FUN_148694e58(void)

void FUN_148694e58(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x7f) == '\x01') {
    *param_2 = &PTR_FUN_14b127600;
    lVar1 = 0x268;
    do {
      FUN_14494dff0((longlong)param_2 + lVar1);
      lVar1 = lVar1 + -0x120;
    } while (lVar1 != -0xf8);
    *(undefined1 *)(param_2 + 0x7f) = 0;
  }
  return;
}



// FUNCTION 148694eee FUN_148694eee body=97 status=ok
// SIG undefined FUN_148694eee(void)

longlong FUN_148694eee(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_14184b2ce(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  lVar2 = 0x28;
  do {
    FUN_14053c976(param_1 + lVar2,param_2 + lVar2);
    lVar2 = lVar2 + 0x120;
  } while (lVar2 != 0x388);
  puVar1 = (undefined8 *)(param_2 + 0x388);
  puVar3 = (undefined8 *)(param_1 + 0x388);
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 148694f50 FUN_148694f50 body=46 status=ok
// SIG undefined FUN_148694f50(void)

void FUN_148694f50(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 148694f94 FUN_148694f94 body=115 status=ok
// SIG undefined FUN_148694f94(void)

undefined8 FUN_148694f94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar5 = (undefined8 *)(param_3 + lVar7);
      lVar4 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar4 + -0x18) = *puVar5;
      uVar1 = *(undefined4 *)((longlong)puVar5 + 0xc);
      uVar2 = *(undefined4 *)(puVar5 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar5 + 0x14);
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)(lVar4 + -0xc) = uVar1;
      *(undefined4 *)(lVar4 + -8) = uVar2;
      *(undefined4 *)(lVar4 + -4) = uVar3;
      FUN_144a787a6();
      puVar5 = (undefined8 *)(param_3 + lVar7 + 0x28);
      puVar6 = (undefined8 *)(param_2 + lVar7 + 0x28);
      for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar7 = lVar7 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148695030 FUN_148695030 body=59 status=ok
// SIG undefined FUN_148695030(void)

undefined8 FUN_148695030(longlong *param_1)

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



// FUNCTION 14869507c FUN_14869507c body=44 status=ok
// SIG undefined FUN_14869507c(void)

void FUN_14869507c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14869510a FUN_14869510a body=63 status=ok
// SIG undefined FUN_14869510a(void)

undefined1 FUN_14869510a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14869521e(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 148695172 FUN_148695172 body=59 status=ok
// SIG undefined FUN_148695172(void)

undefined8 FUN_148695172(longlong *param_1)

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



// FUNCTION 1486951be FUN_1486951be body=38 status=ok
// SIG undefined FUN_1486951be(void)

void FUN_1486951be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_14084010c(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 14869521e FUN_14869521e body=378 status=ok
// SIG undefined FUN_14869521e(void)

longlong FUN_14869521e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_14124fed2(param_1 + 0x18,param_2 + 0x18);
  FUN_14184b2ce(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_1447715ec(param_1 + 0x58,param_2 + 0x58);
  memcpy((void *)(param_1 + 0x80),(void *)(param_2 + 0x80),0xc0);
  FUN_148695398(param_1 + 0x140,param_2 + 0x140);
  lVar4 = param_2 + 0x160;
  lVar2 = param_1 + 0x160;
  lVar6 = 3;
  do {
    uVar1 = *(undefined8 *)(lVar4 + -0x10);
    *(undefined8 *)(lVar2 + -0xb) = *(undefined8 *)(lVar4 + -0xb);
    *(undefined8 *)(lVar2 + -0x10) = uVar1;
    FUN_1404ebb6e(lVar2,lVar4);
    lVar4 = lVar4 + 0x20;
    lVar2 = lVar2 + 0x20;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar3 = (undefined8 *)(param_2 + 0x1b0);
  puVar5 = (undefined8 *)(param_1 + 0x1b0);
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1406fa324(param_1 + 0x218,param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  if ((*(longlong *)(param_1 + 0x230) != *(longlong *)(param_2 + 0x230)) ||
     (*(int *)(param_1 + 0x238) != *(int *)(param_2 + 0x238))) {
    *(longlong *)(param_1 + 0x230) = *(longlong *)(param_2 + 0x230);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  FUN_1486953f6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  FUN_148695454(param_1 + 0x270,param_2 + 0x270);
  return param_1;
}



// FUNCTION 148695398 FUN_148695398 body=93 status=ok
// SIG undefined FUN_148695398(void)

undefined8 * FUN_148695398(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14084024c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486954ac(param_1,iVar1);
      FUN_14869551f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486953f6 FUN_1486953f6 body=93 status=ok
// SIG undefined FUN_1486953f6(void)

undefined8 * FUN_1486953f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14054e5f7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14054e9ce(param_1,iVar1);
      FUN_14054e6f4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148695454 FUN_148695454 body=88 status=ok
// SIG undefined FUN_148695454(void)

undefined8 * FUN_148695454(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486955de(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486954ac FUN_1486954ac body=115 status=ok
// SIG undefined FUN_1486954ac(void)

void FUN_1486954ac(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,0x10);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14869551f FUN_14869551f body=60 status=ok
// SIG undefined FUN_14869551f(void)

void FUN_14869551f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14869555c(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 14869555c FUN_14869555c body=129 status=ok
// SIG undefined FUN_14869555c(void)

undefined8 * FUN_14869555c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  puVar6 = param_2 + 5;
  puVar7 = param_1 + 5;
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return param_1;
}



// FUNCTION 1486955de FUN_1486955de body=98 status=ok
// SIG undefined FUN_1486955de(void)

void FUN_1486955de(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148695682 FUN_148695682 body=63 status=ok
// SIG undefined FUN_148695682(void)

undefined1 FUN_148695682(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486957a2(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 1486956ea FUN_1486956ea body=59 status=ok
// SIG undefined FUN_1486956ea(void)

undefined8 FUN_1486956ea(longlong *param_1)

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



// FUNCTION 148695736 FUN_148695736 body=38 status=ok
// SIG undefined FUN_148695736(void)

void FUN_148695736(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_140c233ac(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 1486957a2 FUN_1486957a2 body=282 status=ok
// SIG undefined FUN_1486957a2(void)

longlong FUN_1486957a2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1486958bc(param_1 + 0x18,param_2 + 0x18);
  lVar5 = param_2 + 0x40;
  lVar7 = param_1 + 0x40;
  lVar9 = 3;
  do {
    uVar1 = *(undefined8 *)(lVar5 + -0x10);
    *(undefined8 *)(lVar7 + -0xb) = *(undefined8 *)(lVar5 + -0xb);
    *(undefined8 *)(lVar7 + -0x10) = uVar1;
    FUN_1404ebb6e(lVar7,lVar5);
    lVar5 = lVar5 + 0x20;
    lVar7 = lVar7 + 0x20;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  FUN_14124fed2(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  lVar5 = 200;
  do {
    FUN_1486934d2(param_1 + lVar5,param_2 + lVar5);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x110);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  FUN_142b358c0(param_1 + 0x114,param_2 + 0x114);
  FUN_148695910(param_1 + 0x120,param_2 + 0x120);
  puVar6 = (undefined8 *)(param_2 + 0x170);
  puVar8 = (undefined8 *)(param_1 + 0x170);
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 1486958bc FUN_1486958bc body=84 status=ok
// SIG undefined FUN_1486958bc(void)

longlong * FUN_1486958bc(longlong *param_1,longlong *param_2)

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



// FUNCTION 148695910 FUN_148695910 body=122 status=ok
// SIG undefined FUN_148695910(void)

longlong FUN_148695910(longlong param_1,longlong param_2)

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
    FUN_14869598a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14869598a FUN_14869598a body=307 status=ok
// SIG undefined FUN_14869598a(void)

longlong * FUN_14869598a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_140c234b4(param_1,(ulonglong)uVar3);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar3) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar7 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
          *(undefined4 *)(lVar5 + 4 + lVar7) = *(undefined4 *)(lVar4 + 4 + lVar7);
        }
        else {
          puVar1 = (undefined8 *)(lVar7 + lVar5 + 0x28);
          puVar2 = (undefined8 *)(lVar4 + lVar7);
          *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar2 + 1);
          puVar1[-5] = *puVar2;
          FUN_141851504(lVar5 + 0x10 + lVar7,lVar4 + 0x10 + lVar7);
          *puVar1 = puVar2[5];
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x30;
      } while (uVar3 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 148695abe FUN_148695abe body=38 status=ok
// SIG undefined FUN_148695abe(void)

undefined8 FUN_148695abe(undefined8 param_1,int param_2)

{
  FUN_140c233ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148695ae4 FUN_148695ae4 body=55 status=ok
// SIG undefined FUN_148695ae4(void)

void FUN_148695ae4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d0f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d0f8 = FUN_140002ddd(FUN_1418512d9,uVar1,L"GbxDiscoveryLocationTypeDef");
  }
  return;
}



// FUNCTION 148695b24 FUN_148695b24 body=28 status=ok
// SIG undefined FUN_148695b24(void)

undefined8 FUN_148695b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148695b52 FUN_148695b52 body=79 status=ok
// SIG undefined FUN_148695b52(void)

void FUN_148695b52(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0x4040000000000000;
  param_2[0xe] = 0x4040000000000000;
  param_2[0xf] = 0x4040000000000000;
  param_2[0x10] = 0x4230000041b00000;
  *(undefined4 *)(param_2 + 0x11) = 0x41b00000;
  return;
}



// FUNCTION 148695bb8 FUN_148695bb8 body=68 status=ok
// SIG undefined FUN_148695bb8(void)

undefined8 FUN_148695bb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148695c24 FUN_148695c24 body=59 status=ok
// SIG undefined FUN_148695c24(void)

undefined8 FUN_148695c24(longlong *param_1)

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



// FUNCTION 148695cfa FUN_148695cfa body=83 status=ok
// SIG undefined FUN_148695cfa(void)

undefined8 FUN_148695cfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + lVar2);
      *(undefined8 *)(param_2 + lVar2 + 5) = *(undefined8 *)(param_3 + lVar2 + 5);
      *(undefined8 *)(param_2 + lVar2) = uVar1;
      FUN_1404ebb6e();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148695d76 FUN_148695d76 body=59 status=ok
// SIG undefined FUN_148695d76(void)

undefined8 FUN_148695d76(longlong *param_1)

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



// FUNCTION 148695dbc FUN_148695dbc body=38 status=ok
// SIG undefined FUN_148695dbc(void)

void FUN_148695dbc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148695e26 FUN_148695e26 body=111 status=ok
// SIG undefined FUN_148695e26(void)

void FUN_148695e26(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  FUN_14485c47a(param_2,0);
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[3] = DAT_14c8464e0;
  param_2[4] = uVar1;
  param_2[5] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 148695e96 FUN_148695e96 body=80 status=ok
// SIG undefined FUN_148695e96(void)

void FUN_148695e96(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  FUN_14485c47a(param_2,0);
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[3] = DAT_14c8464e0;
  param_2[4] = uVar1;
  param_2[5] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 148695fcc FUN_148695fcc body=59 status=ok
// SIG undefined FUN_148695fcc(void)

undefined8 FUN_148695fcc(longlong *param_1)

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



// FUNCTION 1486960da FUN_1486960da body=59 status=ok
// SIG undefined FUN_1486960da(void)

undefined8 FUN_1486960da(longlong *param_1)

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



// FUNCTION 148696120 FUN_148696120 body=34 status=ok
// SIG undefined FUN_148696120(void)

void FUN_148696120(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1457e62c0(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148696190 FUN_148696190 body=111 status=ok
// SIG undefined FUN_148696190(void)

void FUN_148696190(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    iVar2 = (int)(uVar1 / 0x78);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x78,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486961ff FUN_1486961ff body=115 status=ok
// SIG undefined FUN_1486961ff(void)

void FUN_1486961ff(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = 0;
    do {
      uVar4 = *(undefined8 *)(param_2 + lVar9);
      uVar5 = ((undefined8 *)(param_2 + lVar9))[1];
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar9);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + lVar9) = uVar4;
      ((undefined8 *)(param_1 + lVar9))[1] = uVar5;
      cVar3 = *(char *)(param_2 + 0x60 + lVar9);
      *(char *)(param_1 + 0x60 + lVar9) = cVar3;
      if (cVar3 == '\x01') {
        puVar1 = (undefined8 *)(param_2 + 0x30 + lVar9);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        puVar1 = (undefined8 *)(param_2 + 0x40 + lVar9);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        puVar1 = (undefined8 *)(param_2 + 0x50 + lVar9);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0x50 + lVar9);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar1 = (undefined8 *)(param_1 + 0x40 + lVar9);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1 = (undefined8 *)(param_1 + 0x30 + lVar9);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
      }
      *(undefined1 *)(param_1 + lVar9 + 0x70) = *(undefined1 *)(param_2 + lVar9 + 0x70);
      *(undefined8 *)(param_1 + lVar9 + 0x68) = *(undefined8 *)(param_2 + lVar9 + 0x68);
      lVar9 = lVar9 + 0x78;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486962e0 FUN_1486962e0 body=156 status=ok
// SIG undefined FUN_1486962e0(void)

void FUN_1486962e0(undefined8 param_1,longlong param_2)

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
  FUN_14882f766(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148696388 FUN_148696388 body=55 status=ok
// SIG undefined FUN_148696388(void)

void FUN_148696388(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d4b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d4b0 = FUN_14171c317(FUN_1464db210,uVar1,L"EGbxDiscoveryPinType");
  }
  return;
}



// FUNCTION 148696458 FUN_148696458 body=158 status=ok
// SIG undefined FUN_148696458(void)

void FUN_148696458(undefined8 param_1,longlong param_2)

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
  FUN_1487c27e6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486964fc FUN_1486964fc body=158 status=ok
// SIG undefined FUN_1486964fc(void)

void FUN_1486964fc(undefined8 param_1,longlong param_2)

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
  FUN_1487c282e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14869659c FUN_14869659c body=38 status=ok
// SIG undefined FUN_14869659c(void)

void FUN_14869659c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487c27da();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486965c2 FUN_1486965c2 body=100 status=ok
// SIG undefined FUN_1486965c2(void)

void FUN_1486965c2(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6f0))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148696628 FUN_148696628 body=45 status=ok
// SIG undefined FUN_148696628(void)

void FUN_148696628(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0x16fc);
  *param_3 = uVar1;
  return;
}



// FUNCTION 148696656 FUN_148696656 body=96 status=ok
// SIG undefined FUN_148696656(void)

void FUN_148696656(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407ef2d4(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486966b8 FUN_1486966b8 body=39 status=ok
// SIG undefined FUN_1486966b8(void)

void FUN_1486966b8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14053bc36();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486966e4 FUN_1486966e4 body=37 status=ok
// SIG undefined FUN_1486966e4(void)

void FUN_1486966e4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487c25c2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148696710 FUN_148696710 body=163 status=ok
// SIG undefined FUN_148696710(void)

void FUN_148696710(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487c24d4(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486967f2 FUN_1486967f2 body=331 status=ok
// SIG undefined FUN_1486967f2(void)

void FUN_1486967f2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_2d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146544592(param_1,local_28,iVar1 != 0,local_2d);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148696944 FUN_148696944 body=339 status=ok
// SIG undefined FUN_148696944(void)

void FUN_148696944(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_3d;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_48 = local_28;
  FUN_14654451c(param_1,&local_58,iVar1 != 0,local_3d);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148696a9e FUN_148696a9e body=489 status=ok
// SIG undefined FUN_148696a9e(void)

void FUN_148696a9e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_6d;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar1 = local_6c;
  local_6d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6d);
  }
  _Src = pvStack_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_6d);
  local_98 = local_68;
  local_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  uStack_88 = (undefined4)local_58;
  uStack_84 = local_58._4_4_;
  local_80 = (void *)0x0;
  lVar3 = (longlong)(int)local_48;
  local_78 = (int)local_48;
  if (lVar3 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,local_48 & 0xffffffff,0);
    memcpy(local_80,_Src,lVar3 * 2);
  }
  FUN_1487c242a(param_1,&local_98,iVar1 != 0,uVar2 & 0xffffffff);
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148696c8c FUN_148696c8c body=158 status=ok
// SIG undefined FUN_148696c8c(void)

void FUN_148696c8c(undefined8 param_1,longlong param_2)

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
  FUN_1487c26c4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148696da0 FUN_148696da0 body=26 status=ok
// SIG undefined FUN_148696da0(void)

undefined8 * FUN_148696da0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 148696dfa FUN_148696dfa body=48 status=ok
// SIG undefined FUN_148696dfa(void)

longlong FUN_148696dfa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148696e32 FUN_148696e32 body=48 status=ok
// SIG undefined FUN_148696e32(void)

longlong FUN_148696e32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148696e6a FUN_148696e6a body=48 status=ok
// SIG undefined FUN_148696e6a(void)

longlong FUN_148696e6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148696ea2 FUN_148696ea2 body=48 status=ok
// SIG undefined FUN_148696ea2(void)

longlong FUN_148696ea2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_14136916c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


