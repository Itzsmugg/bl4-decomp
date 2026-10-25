// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f83514 FUN_146f83514 body=33 status=ok
// SIG undefined FUN_146f83514(void)

void FUN_146f83514(longlong param_1)

{
  FUN_146f840ea(param_1 + 0x18);
  FUN_146f84030(param_1 + 0x18);
  return;
}



// FUNCTION 146f83536 FUN_146f83536 body=53 status=ok
// SIG undefined FUN_146f83536(void)

void FUN_146f83536(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8356b(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f8356b FUN_146f8356b body=43 status=ok
// SIG undefined FUN_146f8356b(void)

void FUN_146f8356b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f83596 FUN_146f83596 body=86 status=ok
// SIG undefined FUN_146f83596(void)

void FUN_146f83596(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f835ec(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f83653(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f835ec FUN_146f835ec body=103 status=ok
// SIG undefined FUN_146f835ec(void)

void FUN_146f835ec(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f836d0(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f83653 FUN_146f83653 body=125 status=ok
// SIG undefined FUN_146f83653(void)

void FUN_146f83653(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f836d0 FUN_146f836d0 body=141 status=ok
// SIG undefined FUN_146f836d0(void)

void FUN_146f836d0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f8375e FUN_146f8375e body=318 status=ok
// SIG undefined FUN_146f8375e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f8375e(longlong *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  iVar6 = (param_2 + 1) * (int)param_1[2];
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < iVar6) {
    *(int *)(param_1 + 1) = iVar6;
    if (*(int *)((longlong)param_1 + 0xc) - uVar3 < iVar6 - uVar3) {
      FUN_14475e4ac(param_1);
    }
    auVar4 = _DAT_149931e80;
    uVar2 = *param_3;
    uVar7 = iVar6 + ~uVar3;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = uVar7;
    auVar9._8_4_ = uVar7;
    auVar9._12_4_ = 0;
    lVar1 = *param_1 + (longlong)(int)uVar3 * 4;
    uVar5 = 0;
    auVar11 = pmovsxbq(in_XMM2,0x302);
    auVar12 = pmovsxbq(in_XMM3,0x100);
    auVar9 = auVar9 | _DAT_149931e80;
    do {
      lVar8 = auVar9._0_8_;
      lVar10 = auVar9._8_8_;
      if ((bool)(~(lVar8 < (longlong)(uVar5 ^ auVar4._0_8_)) & 1)) {
        *(undefined4 *)(lVar1 + uVar5 * 4) = uVar2;
      }
      auVar13._8_4_ = (int)uVar5;
      auVar13._0_8_ = uVar5;
      auVar13._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar13._8_8_ | auVar12._8_8_) ^ auVar4._8_8_) <= lVar10) {
        *(undefined4 *)(lVar1 + 4 + uVar5 * 4) = uVar2;
      }
      auVar13 = (auVar13 | auVar11) ^ auVar4;
      if (auVar13._0_8_ <= lVar8) {
        *(undefined4 *)(lVar1 + 8 + uVar5 * 4) = uVar2;
      }
      if (auVar13._8_8_ <= lVar10) {
        *(undefined4 *)(lVar1 + 0xc + uVar5 * 4) = uVar2;
      }
      uVar5 = uVar5 + 4;
    } while (((ulonglong)uVar7 + 4 & 0xfffffffffffffffc) != uVar5);
  }
  return;
}



// FUNCTION 146f8389c FUN_146f8389c body=28 status=ok
// SIG undefined FUN_146f8389c(void)

void FUN_146f8389c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_144a84024(param_1,iVar1,1);
    return;
  }
  FUN_146f8375e(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f838b8 FUN_146f838b8 body=254 status=ok
// SIG undefined FUN_146f838b8(void)

longlong * FUN_146f838b8(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f839b6(param_1,param_2 + 0x18);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x40),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f839b6 FUN_146f839b6 body=341 status=ok
// SIG undefined FUN_146f839b6(void)

longlong * FUN_146f839b6(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f83b0c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f83b59(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f83b0c(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f83c20(param_2);
        FUN_146f83b59(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f83b0c FUN_146f83b0c body=76 status=ok
// SIG undefined FUN_146f83b0c(void)

void FUN_146f83b0c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8356b(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f83c6c(param_1,param_2);
  return;
}



// FUNCTION 146f83b59 FUN_146f83b59 body=199 status=ok
// SIG undefined FUN_146f83b59(void)

longlong * FUN_146f83b59(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
      (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 == 0x1f)) ||
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e3cc78), 3 < iVar2)) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 < 0x11)) {
    FUN_146db24e8(param_1,param_2);
    return param_1;
  }
  FUN_140ec5f04(param_2,param_1,0);
  return param_1;
}



// FUNCTION 146f83c20 FUN_146f83c20 body=76 status=ok
// SIG undefined FUN_146f83c20(void)

longlong FUN_146f83c20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f83cec(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f83cd2(lVar2,1);
  return lVar2;
}



// FUNCTION 146f83c6c FUN_146f83c6c body=102 status=ok
// SIG undefined FUN_146f83c6c(void)

void FUN_146f83c6c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f836d0(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f83cd2 FUN_146f83cd2 body=26 status=ok
// SIG undefined FUN_146f83cd2(void)

void FUN_146f83cd2(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f83cec FUN_146f83cec body=145 status=ok
// SIG undefined FUN_146f83cec(void)

void FUN_146f83cec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f836d0(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f83d7e FUN_146f83d7e body=434 status=ok
// SIG undefined FUN_146f83d7e(void)

void FUN_146f83d7e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (int)param_1[2];
  local_78 = 0;
  uStack_70 = 0;
  local_58 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_98 = local_60;
  local_90 = local_58;
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_a0 = param_2;
  if (iStack_4c < (int)local_58[3]) {
    do {
      iVar4 = iStack_84;
      iVar1 = *(int *)(*param_2 + (longlong)iStack_84 * 8);
      FUN_146f8375e(&local_78,iVar1,param_3);
      lVar3 = param_1[2];
      if ((int)lVar3 != 0) {
        lVar2 = *param_1;
        uVar5 = 0;
        do {
          *(undefined4 *)((longlong)(iVar1 * local_68) * 4 + local_78 + uVar5 * 4) =
               *(undefined4 *)((longlong)((int)lVar3 * iVar4) * 4 + lVar2 + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 2));
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[3]);
  }
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f83f32 FUN_146f83f32 body=143 status=ok
// SIG undefined FUN_146f83f32(void)

void FUN_146f83f32(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f83cec(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f83cd2(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f83fc2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f84030(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f83fc2 FUN_146f83fc2 body=109 status=ok
// SIG undefined FUN_146f83fc2(void)

void FUN_146f83fc2(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_146f8356b(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f84030 FUN_146f84030 body=59 status=ok
// SIG undefined FUN_146f84030(void)

void FUN_146f84030(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8406c(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f836d0(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f8406c FUN_146f8406c body=126 status=ok
// SIG undefined FUN_146f8406c(void)

ulonglong FUN_146f8406c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f840ea FUN_146f840ea body=97 status=ok
// SIG undefined FUN_146f840ea(void)

void FUN_146f840ea(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  if (*(longlong *)(lVar2 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f8414c FUN_146f8414c body=42 status=ok
// SIG undefined FUN_146f8414c(void)

longlong FUN_146f8414c(longlong param_1,int param_2)

{
  FUN_146f845fa(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f84176 FUN_146f84176 body=112 status=ok
// SIG undefined FUN_146f84176(void)

undefined8 * FUN_146f84176(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa79c0;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f84694(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f841e6 FUN_146f841e6 body=116 status=ok
// SIG undefined FUN_146f841e6(void)

void FUN_146f841e6(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      if (*(int *)(lVar2 + 0x10) <= param_2) {
        FUN_146f84974(lVar2,param_2 + 1,param_1 + 0x40);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// FUNCTION 146f842ae FUN_146f842ae body=86 status=ok
// SIG undefined FUN_146f842ae(void)

void FUN_146f842ae(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f84d6e(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f84304 FUN_146f84304 body=86 status=ok
// SIG undefined FUN_146f84304(void)

void FUN_146f84304(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f84974(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8435a FUN_146f8435a body=125 status=ok
// SIG undefined FUN_146f8435a(void)

ulonglong FUN_146f8435a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x38) * 3;
    uVar4 = 0;
    do {
      lVar3 = plVar5[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = *plVar5;
        lVar6 = 0;
        do {
          uVar4 = (*(code *)PTR_FUN_14c75b148)
                            (*(undefined8 *)(lVar2 + lVar6),*(int *)(lVar2 + 8 + lVar6) << 2,
                             uVar4 & 0xffffffff);
          lVar6 = lVar6 + 0xc18;
        } while ((longlong)(int)lVar3 * 0xc18 - lVar6 != 0);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
  }
  return uVar4;
}



// FUNCTION 146f843e6 FUN_146f843e6 body=94 status=ok
// SIG undefined FUN_146f843e6(void)

void FUN_146f843e6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f85686(lVar2,param_2,param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f84454 FUN_146f84454 body=33 status=ok
// SIG undefined FUN_146f84454(void)

void FUN_146f84454(longlong param_1)

{
  FUN_146f85c1c(param_1 + 0x18);
  FUN_146f85b62(param_1 + 0x18);
  return;
}



// FUNCTION 146f8447a FUN_146f8447a body=174 status=ok
// SIG undefined FUN_146f8447a(void)

void FUN_146f8447a(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x18;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 <= param_2) {
    if (iVar4 < param_2) {
      do {
        *(uint *)(param_1 + 0x38) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
          FUN_146f855f4(lVar1,iVar4);
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar3 = lVar1;
        }
        puVar2 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x40);
        FUN_146f84d6e(puVar2,*(undefined4 *)(param_1 + 0x10),param_1 + 0x40);
        iVar4 = *(int *)(param_1 + 0x38);
      } while (iVar4 < param_2);
    }
    return;
  }
  FUN_146f85a64(lVar1,param_2,1);
  return;
}



// FUNCTION 146f84528 FUN_146f84528 body=175 status=ok
// SIG undefined FUN_146f84528(void)

void FUN_146f84528(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f855f4(lVar1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar4 = lVar1;
  }
  lVar3 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar4 + lVar3 + 0x18),(void *)(lVar4 + lVar3),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar4 = lVar1;
  }
  *(undefined8 *)(lVar4 + lVar3) = 0;
  ((undefined8 *)(lVar4 + lVar3))[1] = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar4 + 0x14 + lVar3) = *(undefined4 *)(param_1 + 0x40);
  FUN_146f84d6e(lVar4 + lVar3,*(undefined4 *)(param_1 + 0x10),param_1 + 0x40);
  return;
}



// FUNCTION 146f845d8 FUN_146f845d8 body=33 status=ok
// SIG undefined FUN_146f845d8(void)

void FUN_146f845d8(longlong param_1)

{
  FUN_146f85c1c(param_1 + 0x18);
  FUN_146f85b62(param_1 + 0x18);
  return;
}



// FUNCTION 146f845fa FUN_146f845fa body=53 status=ok
// SIG undefined FUN_146f845fa(void)

void FUN_146f845fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8462f(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f8462f FUN_146f8462f body=54 status=ok
// SIG undefined FUN_146f8462f(void)

void FUN_146f8462f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f84665(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f84665 FUN_146f84665 body=46 status=ok
// SIG undefined FUN_146f84665(void)

void FUN_146f84665(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f84694 FUN_146f84694 body=86 status=ok
// SIG undefined FUN_146f84694(void)

void FUN_146f84694(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f846ea(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f84751(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f846ea FUN_146f846ea body=103 status=ok
// SIG undefined FUN_146f846ea(void)

void FUN_146f846ea(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f84786(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f84751 FUN_146f84751 body=52 status=ok
// SIG undefined FUN_146f84751(void)

void FUN_146f84751(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f84814(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 146f84786 FUN_146f84786 body=141 status=ok
// SIG undefined FUN_146f84786(void)

void FUN_146f84786(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f84814 FUN_146f84814 body=92 status=ok
// SIG undefined FUN_146f84814(void)

undefined8 * FUN_146f84814(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f84870(param_1,iVar1,0);
    FUN_146f848e2(*param_1,uVar2,iVar1);
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 146f84870 FUN_146f84870 body=114 status=ok
// SIG undefined FUN_146f84870(void)

void FUN_146f84870(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    iVar2 = (int)(uVar1 / 0xc18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f848e2 FUN_146f848e2 body=146 status=ok
// SIG undefined FUN_146f848e2(void)

void FUN_146f848e2(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Src_00;
  
  if (param_3 != 0) {
    _Src_00 = (void *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)((longlong)_Src_00 + -8);
      _Src = *(void **)((longlong)_Src_00 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      memcpy(param_1 + 2,_Src_00,0xc04);
      param_1 = param_1 + 0x183;
      _Src_00 = (void *)((longlong)_Src_00 + 0xc18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f84974 FUN_146f84974 body=245 status=ok
// SIG undefined FUN_146f84974(void)

void FUN_146f84974(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar4 = param_2 + 0xff;
  iVar3 = (int)uVar4 >> 8;
  FUN_146f84a6a(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f849cb;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f849cb;
    uVar6 = uVar6 & 0xff;
    uVar7 = (ulonglong)uVar6;
    uVar4 = (uVar4 & 0xff) + 1;
    if (uVar7 != 0) {
      uVar5 = 0x100;
      if (iVar3 == (int)lVar1) {
        uVar5 = uVar4;
      }
      lVar2 = (longlong)(int)lVar1 * 0xc18;
      lVar1 = *param_1 + lVar2;
      iVar3 = *(int *)(lVar1 + -0x408 + (ulonglong)(uVar6 - 1) * 4) +
              *(int *)(lVar1 + -0xc08 + (ulonglong)(uVar6 - 1) * 4);
      FUN_144a84024(lVar2 + *param_1 + -0xc18,iVar3,0);
      if (uVar6 < uVar5) {
        do {
          *(int *)(lVar1 + -0xc08 + uVar7 * 4) = iVar3;
          *(undefined4 *)(lVar1 + -0x808 + uVar7 * 4) = 0;
          *(undefined4 *)(lVar1 + -0x408 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      *(uint *)(lVar1 + -8) = uVar5;
    }
  }
  *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) = uVar4;
LAB_146f849cb:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f84a6a FUN_146f84a6a body=134 status=ok
// SIG undefined FUN_146f84a6a(void)

void FUN_146f84a6a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f84b1a(param_1,iVar1);
    }
    FUN_146f84af1((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f84c54(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f84cba(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f84af1 FUN_146f84af1 body=41 status=ok
// SIG undefined FUN_146f84af1(void)

void FUN_146f84af1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f84bae(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f84b1a FUN_146f84b1a body=146 status=ok
// SIG undefined FUN_146f84b1a(void)

void FUN_146f84b1a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc18)) {
      uVar5 = uVar4 / 0xc18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f84bae FUN_146f84bae body=164 status=ok
// SIG undefined FUN_146f84bae(void)

undefined8 * FUN_146f84bae(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = 0;
  FUN_146f7c72a(param_1 + 2,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x82,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x102,0,param_3,&local_24);
  *(undefined4 *)(param_1 + 0x182) = 0x100;
  if (*(int *)((longlong)param_1 + 0xc) < 0x100) {
    FUN_14482f6fa(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f84c54 FUN_146f84c54 body=101 status=ok
// SIG undefined FUN_146f84c54(void)

void FUN_146f84c54(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f84665(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f84cba FUN_146f84cba body=63 status=ok
// SIG undefined FUN_146f84cba(void)

void FUN_146f84cba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f84cfa(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f84cfa FUN_146f84cfa body=115 status=ok
// SIG undefined FUN_146f84cfa(void)

ulonglong FUN_146f84cfa(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc18,8);
      uVar1 = uVar1 / 0xc18;
    }
  }
  return uVar1;
}



// FUNCTION 146f84d6e FUN_146f84d6e body=91 status=ok
// SIG undefined FUN_146f84d6e(void)

void FUN_146f84d6e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f84dca(param_1,iVar1);
  FUN_146f84a6a(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f84dca FUN_146f84dca body=68 status=ok
// SIG undefined FUN_146f84dca(void)

void FUN_146f84dca(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f84665(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f84e10(param_1,param_2);
  return;
}



// FUNCTION 146f84e10 FUN_146f84e10 body=112 status=ok
// SIG undefined FUN_146f84e10(void)

void FUN_146f84e10(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc18)) {
      uVar2 = uVar1 / 0xc18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc18,8);
  }
  return;
}



// FUNCTION 146f84e80 FUN_146f84e80 body=254 status=ok
// SIG undefined FUN_146f84e80(void)

longlong * FUN_146f84e80(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f84f7e(param_1,param_2 + 0x18);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x40),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f84f7e FUN_146f84f7e body=341 status=ok
// SIG undefined FUN_146f84f7e(void)

longlong * FUN_146f84f7e(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f850d4(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f85121(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f850d4(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f851cc(param_2);
        FUN_146f85121(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f850d4 FUN_146f850d4 body=76 status=ok
// SIG undefined FUN_146f850d4(void)

void FUN_146f850d4(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f8462f(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f85218(param_1,param_2);
  return;
}



// FUNCTION 146f85121 FUN_146f85121 body=171 status=ok
// SIG undefined FUN_146f85121(void)

longlong * FUN_146f85121(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_146f8527e();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f851cc FUN_146f851cc body=76 status=ok
// SIG undefined FUN_146f851cc(void)

longlong FUN_146f851cc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f855f4(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f855dd(lVar2,1);
  return lVar2;
}



// FUNCTION 146f85218 FUN_146f85218 body=102 status=ok
// SIG undefined FUN_146f85218(void)

void FUN_146f85218(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f84786(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f8527e FUN_146f8527e body=358 status=ok
// SIG undefined FUN_146f8527e(void)

longlong * FUN_146f8527e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f84665(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f84e10(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x152a < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f853e5(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f84dca(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f8559a(param_2);
        FUN_146f853e5(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f853e5 FUN_146f853e5 body=436 status=ok
// SIG undefined FUN_146f853e5(void)

longlong * FUN_146f853e5(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_146db24e8();
  piVar1 = (int *)(param_2 + 0xc10);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_1,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (0 < *piVar1) {
    puVar4 = (undefined4 *)(param_2 + 0x10);
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar4);
        }
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 < *piVar1);
    if (0 < *piVar1) {
      puVar4 = (undefined4 *)(param_2 + 0x410);
      lVar5 = 0;
      do {
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 < *piVar1);
      if (0 < *piVar1) {
        puVar4 = (undefined4 *)(param_2 + 0x810);
        lVar5 = 0;
        do {
          puVar3 = *(undefined4 **)param_1[1];
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
            }
            else {
              thunk_FUN_14572512c(param_1,puVar4);
            }
          }
          else {
            *puVar4 = *puVar3;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (lVar5 < *piVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f8559a FUN_146f8559a body=67 status=ok
// SIG undefined FUN_146f8559a(void)

longlong FUN_146f8559a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f84b1a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f84af1(lVar2,1);
  return lVar2;
}



// FUNCTION 146f855dd FUN_146f855dd body=22 status=ok
// SIG undefined FUN_146f855dd(void)

void FUN_146f855dd(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 146f855f4 FUN_146f855f4 body=145 status=ok
// SIG undefined FUN_146f855f4(void)

void FUN_146f855f4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f84786(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f85686 FUN_146f85686 body=516 status=ok
// SIG undefined FUN_146f85686(void)

void FUN_146f85686(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined4 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  int local_78;
  undefined4 uStack_74;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_74 = *param_3;
  local_60 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_b8 = param_3;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_a8 = local_68;
  local_a0 = local_60;
  local_98 = local_58;
  uStack_94 = uStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_b0 = param_2;
  if ((int)uStack_54 < (int)local_60[3]) {
    do {
      uVar5 = uStack_94;
      iVar2 = *(int *)(*param_2 + (longlong)(int)uStack_94 * 8);
      if (local_78 <= iVar2) {
        FUN_146f84974(&local_88,iVar2 + 1,local_b8);
      }
      uVar7 = (ulonglong)(uVar5 & 0xff);
      lVar6 = (longlong)((int)uVar5 >> 8) * 0xc18;
      lVar1 = *param_1 + lVar6;
      iVar3 = *(int *)(lVar1 + 0x410 + uVar7 * 4);
      iVar4 = *(int *)(lVar1 + 0x10 + uVar7 * 4);
      lVar1 = *(longlong *)(*param_1 + lVar6);
      local_c0 = 0;
      local_c8 = 1;
      FUN_146f8588c(&local_88,&local_68,iVar2,iVar3);
      if (0 < (longlong)iVar3) {
        lVar6 = 0;
        do {
          *(undefined4 *)(local_68 + lVar6 * 4) =
               *(undefined4 *)((longlong)iVar4 * 4 + lVar1 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (iVar3 != lVar6);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while ((int)uStack_94 < (int)local_a0[3]);
  }
  FUN_146f85a14(param_1,&local_88);
  param_1[2] = CONCAT44(uStack_74,local_78);
  FUN_146f84665(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8588c FUN_146f8588c body=392 status=ok
// SIG undefined FUN_146f8588c(void)

longlong *
FUN_146f8588c(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
             char param_6)

{
  longlong *plVar1;
  void *_Src;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar11 = param_3 & 0xff;
  lVar7 = *param_1;
  lVar10 = (longlong)((int)param_3 >> 8) * 0xc18;
  plVar1 = (longlong *)(lVar10 + lVar7);
  piVar2 = (int *)((longlong)plVar1 + uVar11 * 4 + 0x810);
  uVar9 = param_4 - *piVar2;
  if (uVar9 == 0 || param_4 < *piVar2) {
    lVar8 = *(longlong *)(lVar7 + lVar10);
  }
  else {
    lVar6 = plVar1[1];
    FUN_144a84024(plVar1,(int)lVar6 + uVar9,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
                 );
    lVar8 = *plVar1;
    _Src = (void *)(lVar8 + (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) * 4 +
                   (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x810) * 4);
    memmove((void *)((longlong)_Src + (ulonglong)uVar9 * 4),_Src,
            (lVar8 + (longlong)(int)lVar6 * 4) - (longlong)_Src);
    *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810) = param_4;
    if ((int)uVar11 + 1 < (int)plVar1[0x182]) {
      uVar5 = uVar11;
      do {
        piVar2 = (int *)(lVar10 + lVar7 + 0x14 + uVar5 * 4);
        *piVar2 = *piVar2 + uVar9;
        lVar6 = uVar5 + 2;
        uVar5 = uVar5 + 1;
      } while (lVar6 < (int)plVar1[0x182]);
    }
  }
  if (param_6 != '\0') {
    iVar4 = *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410);
    lVar7 = (longlong)iVar4;
    if (iVar4 < param_4) {
      if (iVar4 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810)) {
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
        do {
          *(undefined4 *)(*plVar1 + (*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) + lVar7) * 4) =
               uVar3;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810));
      }
    }
    else if (param_4 < iVar4) {
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar7 = (longlong)param_4;
      do {
        *(undefined4 *)(*plVar1 + (*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) + lVar7) * 4) =
             uVar3;
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410));
    }
  }
  if (param_5 == '\0') {
    param_4 = *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410);
  }
  else {
    *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410) = param_4;
  }
  *param_2 = lVar8 + (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) * 4;
  *(int *)(param_2 + 1) = param_4;
  return param_2;
}



// FUNCTION 146f85a14 FUN_146f85a14 body=80 status=ok
// SIG undefined FUN_146f85a14(void)

longlong * FUN_146f85a14(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f84665(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146f85a64 FUN_146f85a64 body=143 status=ok
// SIG undefined FUN_146f85a64(void)

void FUN_146f85a64(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f855f4(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f855dd(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f85af4(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f85b62(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f85af4 FUN_146f85af4 body=109 status=ok
// SIG undefined FUN_146f85af4(void)

void FUN_146f85af4(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_146f8462f(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f85b62 FUN_146f85b62 body=59 status=ok
// SIG undefined FUN_146f85b62(void)

void FUN_146f85b62(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f85b9e(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f84786(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f85b9e FUN_146f85b9e body=126 status=ok
// SIG undefined FUN_146f85b9e(void)

ulonglong FUN_146f85b9e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f85c1c FUN_146f85c1c body=111 status=ok
// SIG undefined FUN_146f85c1c(void)

void FUN_146f85c1c(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = param_1;
  }
  lVar2 = (longlong)(int)param_2;
  FUN_146f84665(*(undefined8 *)(lVar3 + lVar2 * 0x18),*(undefined4 *)(lVar3 + 8 + lVar2 * 0x18));
  if (*(longlong *)(lVar3 + lVar2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar3 + lVar2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f85c8c FUN_146f85c8c body=108 status=ok
// SIG undefined FUN_146f85c8c(void)

undefined8 * FUN_146f85c8c(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7a50;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f86054(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f85cf8 FUN_146f85cf8 body=100 status=ok
// SIG undefined FUN_146f85cf8(void)

void FUN_146f85cf8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8621c(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar2 = param_2 + 1;
  if (param_2 + 1 <= *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 146f85d5c FUN_146f85d5c body=89 status=ok
// SIG undefined FUN_146f85d5c(void)

void FUN_146f85d5c(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  plVar3 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      uVar4 = *(uint *)(plVar3 + 2);
      if (uVar4 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x40);
        uVar5 = 0;
        do {
          *(undefined4 *)(*plVar3 + (longlong)(int)(uVar4 * param_2 + uVar5) * 4) = uVar2;
          uVar5 = uVar5 + 1;
          uVar4 = *(uint *)(plVar3 + 2);
        } while (uVar5 < uVar4);
      }
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar1);
  }
  return;
}



// FUNCTION 146f85db6 FUN_146f85db6 body=113 status=ok
// SIG undefined FUN_146f85db6(void)

void FUN_146f85db6(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_144a9ff88(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f8621c(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f85e28 FUN_146f85e28 body=86 status=ok
// SIG undefined FUN_146f85e28(void)

void FUN_146f85e28(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8634a(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f85e7e FUN_146f85e7e body=84 status=ok
// SIG undefined FUN_146f85e7e(void)

ulonglong FUN_146f85e7e(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = (*(code *)PTR_FUN_14c75b148)
                        (*(undefined8 *)(lVar4 + lVar3),*(int *)(lVar4 + 8 + lVar3) << 2,
                         uVar2 & 0xffffffff);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return uVar2;
}



// FUNCTION 146f85ee0 FUN_146f85ee0 body=99 status=ok
// SIG undefined FUN_146f85ee0(void)

void FUN_146f85ee0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8682c(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f85f54 FUN_146f85f54 body=33 status=ok
// SIG undefined FUN_146f85f54(void)

void FUN_146f85f54(longlong param_1)

{
  FUN_146f86b92(param_1 + 0x18);
  FUN_146f86ad8(param_1 + 0x18);
  return;
}



// FUNCTION 146f85f76 FUN_146f85f76 body=188 status=ok
// SIG undefined FUN_146f85f76(void)

void FUN_146f85f76(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f8679a(lVar1,iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar5 + lVar4 + 0x18),(void *)(lVar5 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(lVar5 + lVar4) = 0;
  ((undefined8 *)(lVar5 + lVar4))[1] = 0;
  *(int *)(lVar5 + 0x10 + lVar4) = iVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  FUN_144a9ff88(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f8621c(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}



// FUNCTION 146f86032 FUN_146f86032 body=33 status=ok
// SIG undefined FUN_146f86032(void)

void FUN_146f86032(longlong param_1)

{
  FUN_146f86b92(param_1 + 0x18);
  FUN_146f86ad8(param_1 + 0x18);
  return;
}



// FUNCTION 146f86054 FUN_146f86054 body=86 status=ok
// SIG undefined FUN_146f86054(void)

void FUN_146f86054(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f860aa(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f86111(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f860aa FUN_146f860aa body=103 status=ok
// SIG undefined FUN_146f860aa(void)

void FUN_146f860aa(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f8618e(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f86111 FUN_146f86111 body=125 status=ok
// SIG undefined FUN_146f86111(void)

void FUN_146f86111(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f8618e FUN_146f8618e body=141 status=ok
// SIG undefined FUN_146f8618e(void)

void FUN_146f8618e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f8621c FUN_146f8621c body=302 status=ok
// SIG undefined FUN_146f8621c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f8621c(longlong *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  iVar5 = (param_2 + 1) * (int)param_1[2];
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < iVar5) {
    *(int *)(param_1 + 1) = iVar5;
    if (*(int *)((longlong)param_1 + 0xc) - uVar2 < iVar5 - uVar2) {
      FUN_1446f48e2(param_1,uVar2);
    }
    auVar4 = _DAT_149931e80;
    uVar3 = *param_3;
    uVar6 = iVar5 + ~uVar2;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = uVar6;
    auVar9._8_4_ = uVar6;
    auVar9._12_4_ = 0;
    lVar1 = *param_1 + (longlong)(int)uVar2 * 4;
    uVar7 = 0;
    auVar11 = pmovsxbq(in_XMM1,0x302);
    auVar12 = pmovsxbq(in_XMM2,0x100);
    auVar9 = auVar9 | _DAT_149931e80;
    do {
      lVar8 = auVar9._0_8_;
      lVar10 = auVar9._8_8_;
      if ((bool)(~(lVar8 < (longlong)(uVar7 ^ auVar4._0_8_)) & 1)) {
        *(undefined4 *)(lVar1 + uVar7 * 4) = uVar3;
      }
      auVar13._8_4_ = (int)uVar7;
      auVar13._0_8_ = uVar7;
      auVar13._12_4_ = (int)(uVar7 >> 0x20);
      if ((longlong)((auVar13._8_8_ | auVar12._8_8_) ^ auVar4._8_8_) <= lVar10) {
        *(undefined4 *)(lVar1 + 4 + uVar7 * 4) = uVar3;
      }
      auVar13 = (auVar13 | auVar11) ^ auVar4;
      if (auVar13._0_8_ <= lVar8) {
        *(undefined4 *)(lVar1 + 8 + uVar7 * 4) = uVar3;
      }
      if (auVar13._8_8_ <= lVar10) {
        *(undefined4 *)(lVar1 + 0xc + uVar7 * 4) = uVar3;
      }
      uVar7 = uVar7 + 4;
    } while (((ulonglong)uVar6 + 4 & 0xfffffffffffffffc) != uVar7);
  }
  return;
}



// FUNCTION 146f8634a FUN_146f8634a body=28 status=ok
// SIG undefined FUN_146f8634a(void)

void FUN_146f8634a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_144a1a59e(param_1,iVar1,1);
    return;
  }
  FUN_146f8621c(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f86366 FUN_146f86366 body=254 status=ok
// SIG undefined FUN_146f86366(void)

longlong * FUN_146f86366(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f86464(param_1,param_2 + 0x18);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x40),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f86464 FUN_146f86464 body=341 status=ok
// SIG undefined FUN_146f86464(void)

longlong * FUN_146f86464(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f865ba(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f86607(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f865ba(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f866ce(param_2);
        FUN_146f86607(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f865ba FUN_146f865ba body=76 status=ok
// SIG undefined FUN_146f865ba(void)

void FUN_146f865ba(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_1411db842(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f8671a(param_1,param_2);
  return;
}



// FUNCTION 146f86607 FUN_146f86607 body=199 status=ok
// SIG undefined FUN_146f86607(void)

longlong * FUN_146f86607(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
      (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 == 0x1f)) ||
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e3cc78), 3 < iVar2)) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 < 0x11)) {
    FUN_1403b0476(param_1,param_2);
    return param_1;
  }
  FUN_140c151f0(param_2,param_1,0);
  return param_1;
}



// FUNCTION 146f866ce FUN_146f866ce body=76 status=ok
// SIG undefined FUN_146f866ce(void)

longlong FUN_146f866ce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f8679a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f86780(lVar2,1);
  return lVar2;
}



// FUNCTION 146f8671a FUN_146f8671a body=102 status=ok
// SIG undefined FUN_146f8671a(void)

void FUN_146f8671a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f8618e(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f86780 FUN_146f86780 body=26 status=ok
// SIG undefined FUN_146f86780(void)

void FUN_146f86780(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f8679a FUN_146f8679a body=145 status=ok
// SIG undefined FUN_146f8679a(void)

void FUN_146f8679a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f8618e(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8682c FUN_146f8682c body=428 status=ok
// SIG undefined FUN_146f8682c(void)

void FUN_146f8682c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (int)param_1[2];
  local_78 = 0;
  uStack_70 = 0;
  local_58 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_98 = local_60;
  local_90 = local_58;
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_a0 = param_2;
  if (iStack_4c < (int)local_58[3]) {
    do {
      iVar4 = iStack_84;
      iVar1 = *(int *)(*param_2 + (longlong)iStack_84 * 8);
      FUN_146f8621c(&local_78,iVar1,param_3);
      lVar3 = param_1[2];
      if ((int)lVar3 != 0) {
        lVar2 = *param_1;
        uVar5 = 0;
        do {
          *(undefined4 *)((longlong)(iVar1 * local_68) * 4 + local_78 + uVar5 * 4) =
               *(undefined4 *)((longlong)((int)lVar3 * iVar4) * 4 + lVar2 + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 2));
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[3]);
  }
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f869da FUN_146f869da body=143 status=ok
// SIG undefined FUN_146f869da(void)

void FUN_146f869da(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8679a(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f86780(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f86a6a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f86ad8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f86a6a FUN_146f86a6a body=109 status=ok
// SIG undefined FUN_146f86a6a(void)

void FUN_146f86a6a(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_1411db842(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f86ad8 FUN_146f86ad8 body=59 status=ok
// SIG undefined FUN_146f86ad8(void)

void FUN_146f86ad8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f86b14(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f8618e(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f86b14 FUN_146f86b14 body=126 status=ok
// SIG undefined FUN_146f86b14(void)

ulonglong FUN_146f86b14(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f86b92 FUN_146f86b92 body=97 status=ok
// SIG undefined FUN_146f86b92(void)

void FUN_146f86b92(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  if (*(longlong *)(lVar2 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f86bf4 FUN_146f86bf4 body=42 status=ok
// SIG undefined FUN_146f86bf4(void)

longlong FUN_146f86bf4(longlong param_1,int param_2)

{
  FUN_146f87096(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f86c1e FUN_146f86c1e body=108 status=ok
// SIG undefined FUN_146f86c1e(void)

undefined8 * FUN_146f86c1e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7ae0;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f87130(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f86c8a FUN_146f86c8a body=116 status=ok
// SIG undefined FUN_146f86c8a(void)

void FUN_146f86c8a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      if (*(int *)(lVar2 + 0x10) <= param_2) {
        FUN_146f87410(lVar2,param_2 + 1,param_1 + 0x40);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// FUNCTION 146f86d52 FUN_146f86d52 body=86 status=ok
// SIG undefined FUN_146f86d52(void)

void FUN_146f86d52(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8780a(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f86da8 FUN_146f86da8 body=86 status=ok
// SIG undefined FUN_146f86da8(void)

void FUN_146f86da8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f87410(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f86dfe FUN_146f86dfe body=125 status=ok
// SIG undefined FUN_146f86dfe(void)

ulonglong FUN_146f86dfe(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x38) * 3;
    uVar4 = 0;
    do {
      lVar3 = plVar5[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = *plVar5;
        lVar6 = 0;
        do {
          uVar4 = (*(code *)PTR_FUN_14c75b148)
                            (*(undefined8 *)(lVar2 + lVar6),*(int *)(lVar2 + 8 + lVar6) << 2,
                             uVar4 & 0xffffffff);
          lVar6 = lVar6 + 0xc18;
        } while ((longlong)(int)lVar3 * 0xc18 - lVar6 != 0);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
  }
  return uVar4;
}



// FUNCTION 146f86e8a FUN_146f86e8a body=94 status=ok
// SIG undefined FUN_146f86e8a(void)

void FUN_146f86e8a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f88122(lVar2,param_2,param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f86ef8 FUN_146f86ef8 body=33 status=ok
// SIG undefined FUN_146f86ef8(void)

void FUN_146f86ef8(longlong param_1)

{
  FUN_146f886a8(param_1 + 0x18);
  FUN_146f885ee(param_1 + 0x18);
  return;
}



// FUNCTION 146f86f1e FUN_146f86f1e body=170 status=ok
// SIG undefined FUN_146f86f1e(void)

void FUN_146f86f1e(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x18;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 <= param_2) {
    if (iVar4 < param_2) {
      do {
        *(uint *)(param_1 + 0x38) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
          FUN_146f88090(lVar1,iVar4);
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar3 = lVar1;
        }
        puVar2 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x40);
        FUN_146f8780a(puVar2,*(undefined4 *)(param_1 + 0x10),param_1 + 0x40);
        iVar4 = *(int *)(param_1 + 0x38);
      } while (iVar4 < param_2);
    }
    return;
  }
  FUN_146f884f0(lVar1,param_2,1);
  return;
}



// FUNCTION 146f86fc8 FUN_146f86fc8 body=171 status=ok
// SIG undefined FUN_146f86fc8(void)

void FUN_146f86fc8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f88090(lVar1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar4 = lVar1;
  }
  lVar3 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar4 + lVar3 + 0x18),(void *)(lVar4 + lVar3),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar4 = lVar1;
  }
  *(undefined8 *)(lVar4 + lVar3) = 0;
  ((undefined8 *)(lVar4 + lVar3))[1] = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar4 + 0x14 + lVar3) = *(undefined4 *)(param_1 + 0x40);
  FUN_146f8780a(lVar4 + lVar3,*(undefined4 *)(param_1 + 0x10),param_1 + 0x40);
  return;
}



// FUNCTION 146f87074 FUN_146f87074 body=33 status=ok
// SIG undefined FUN_146f87074(void)

void FUN_146f87074(longlong param_1)

{
  FUN_146f886a8(param_1 + 0x18);
  FUN_146f885ee(param_1 + 0x18);
  return;
}



// FUNCTION 146f87096 FUN_146f87096 body=53 status=ok
// SIG undefined FUN_146f87096(void)

void FUN_146f87096(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f870cb(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f870cb FUN_146f870cb body=54 status=ok
// SIG undefined FUN_146f870cb(void)

void FUN_146f870cb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f87101(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f87101 FUN_146f87101 body=46 status=ok
// SIG undefined FUN_146f87101(void)

void FUN_146f87101(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f87130 FUN_146f87130 body=86 status=ok
// SIG undefined FUN_146f87130(void)

void FUN_146f87130(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f87186(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f871ed(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f87186 FUN_146f87186 body=103 status=ok
// SIG undefined FUN_146f87186(void)

void FUN_146f87186(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f87222(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f871ed FUN_146f871ed body=52 status=ok
// SIG undefined FUN_146f871ed(void)

void FUN_146f871ed(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f872b0(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 146f87222 FUN_146f87222 body=141 status=ok
// SIG undefined FUN_146f87222(void)

void FUN_146f87222(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f872b0 FUN_146f872b0 body=92 status=ok
// SIG undefined FUN_146f872b0(void)

undefined8 * FUN_146f872b0(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f8730c(param_1,iVar1,0);
    FUN_146f8737e(*param_1,uVar2,iVar1);
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 146f8730c FUN_146f8730c body=114 status=ok
// SIG undefined FUN_146f8730c(void)

void FUN_146f8730c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    iVar2 = (int)(uVar1 / 0xc18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f8737e FUN_146f8737e body=146 status=ok
// SIG undefined FUN_146f8737e(void)

void FUN_146f8737e(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Src_00;
  
  if (param_3 != 0) {
    _Src_00 = (void *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)((longlong)_Src_00 + -8);
      _Src = *(void **)((longlong)_Src_00 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      memcpy(param_1 + 2,_Src_00,0xc04);
      param_1 = param_1 + 0x183;
      _Src_00 = (void *)((longlong)_Src_00 + 0xc18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f87410 FUN_146f87410 body=245 status=ok
// SIG undefined FUN_146f87410(void)

void FUN_146f87410(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar4 = param_2 + 0xff;
  iVar3 = (int)uVar4 >> 8;
  FUN_146f87506(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f87467;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f87467;
    uVar6 = uVar6 & 0xff;
    uVar7 = (ulonglong)uVar6;
    uVar4 = (uVar4 & 0xff) + 1;
    if (uVar7 != 0) {
      uVar5 = 0x100;
      if (iVar3 == (int)lVar1) {
        uVar5 = uVar4;
      }
      lVar2 = (longlong)(int)lVar1 * 0xc18;
      lVar1 = *param_1 + lVar2;
      iVar3 = *(int *)(lVar1 + -0x408 + (ulonglong)(uVar6 - 1) * 4) +
              *(int *)(lVar1 + -0xc08 + (ulonglong)(uVar6 - 1) * 4);
      FUN_144a1a59e(lVar2 + *param_1 + -0xc18,iVar3,0);
      if (uVar6 < uVar5) {
        do {
          *(int *)(lVar1 + -0xc08 + uVar7 * 4) = iVar3;
          *(undefined4 *)(lVar1 + -0x808 + uVar7 * 4) = 0;
          *(undefined4 *)(lVar1 + -0x408 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      *(uint *)(lVar1 + -8) = uVar5;
    }
  }
  *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) = uVar4;
LAB_146f87467:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f87506 FUN_146f87506 body=134 status=ok
// SIG undefined FUN_146f87506(void)

void FUN_146f87506(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f875b6(param_1,iVar1);
    }
    FUN_146f8758d((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f876f0(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f87756(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8758d FUN_146f8758d body=41 status=ok
// SIG undefined FUN_146f8758d(void)

void FUN_146f8758d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f8764a(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f875b6 FUN_146f875b6 body=146 status=ok
// SIG undefined FUN_146f875b6(void)

void FUN_146f875b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc18)) {
      uVar5 = uVar4 / 0xc18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8764a FUN_146f8764a body=164 status=ok
// SIG undefined FUN_146f8764a(void)

undefined8 * FUN_146f8764a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = 0;
  FUN_146f7c72a(param_1 + 2,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x82,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x102,0,param_3,&local_24);
  *(undefined4 *)(param_1 + 0x182) = 0x100;
  if (*(int *)((longlong)param_1 + 0xc) < 0x100) {
    FUN_14481578e(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f876f0 FUN_146f876f0 body=101 status=ok
// SIG undefined FUN_146f876f0(void)

void FUN_146f876f0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f87101(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f87756 FUN_146f87756 body=63 status=ok
// SIG undefined FUN_146f87756(void)

void FUN_146f87756(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f87796(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f87796 FUN_146f87796 body=115 status=ok
// SIG undefined FUN_146f87796(void)

ulonglong FUN_146f87796(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc18,8);
      uVar1 = uVar1 / 0xc18;
    }
  }
  return uVar1;
}



// FUNCTION 146f8780a FUN_146f8780a body=91 status=ok
// SIG undefined FUN_146f8780a(void)

void FUN_146f8780a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f87866(param_1,iVar1);
  FUN_146f87506(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f87866 FUN_146f87866 body=68 status=ok
// SIG undefined FUN_146f87866(void)

void FUN_146f87866(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f87101(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f878ac(param_1,param_2);
  return;
}



// FUNCTION 146f878ac FUN_146f878ac body=112 status=ok
// SIG undefined FUN_146f878ac(void)

void FUN_146f878ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc18)) {
      uVar2 = uVar1 / 0xc18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc18,8);
  }
  return;
}



// FUNCTION 146f8791c FUN_146f8791c body=254 status=ok
// SIG undefined FUN_146f8791c(void)

longlong * FUN_146f8791c(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f87a1a(param_1,param_2 + 0x18);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x40),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f87a1a FUN_146f87a1a body=341 status=ok
// SIG undefined FUN_146f87a1a(void)

longlong * FUN_146f87a1a(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f87b70(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f87bbd(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f87b70(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f87c68(param_2);
        FUN_146f87bbd(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f87b70 FUN_146f87b70 body=76 status=ok
// SIG undefined FUN_146f87b70(void)

void FUN_146f87b70(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f870cb(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f87cb4(param_1,param_2);
  return;
}



// FUNCTION 146f87bbd FUN_146f87bbd body=171 status=ok
// SIG undefined FUN_146f87bbd(void)

longlong * FUN_146f87bbd(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_146f87d1a();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f87c68 FUN_146f87c68 body=76 status=ok
// SIG undefined FUN_146f87c68(void)

longlong FUN_146f87c68(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f88090(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f88079(lVar2,1);
  return lVar2;
}



// FUNCTION 146f87cb4 FUN_146f87cb4 body=102 status=ok
// SIG undefined FUN_146f87cb4(void)

void FUN_146f87cb4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f87222(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f87d1a FUN_146f87d1a body=358 status=ok
// SIG undefined FUN_146f87d1a(void)

longlong * FUN_146f87d1a(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f87101(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f878ac(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x152a < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f87e81(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f87866(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f88036(param_2);
        FUN_146f87e81(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f87e81 FUN_146f87e81 body=436 status=ok
// SIG undefined FUN_146f87e81(void)

longlong * FUN_146f87e81(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_1403b0476();
  piVar1 = (int *)(param_2 + 0xc10);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_1,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (0 < *piVar1) {
    puVar4 = (undefined4 *)(param_2 + 0x10);
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar4);
        }
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 < *piVar1);
    if (0 < *piVar1) {
      puVar4 = (undefined4 *)(param_2 + 0x410);
      lVar5 = 0;
      do {
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 < *piVar1);
      if (0 < *piVar1) {
        puVar4 = (undefined4 *)(param_2 + 0x810);
        lVar5 = 0;
        do {
          puVar3 = *(undefined4 **)param_1[1];
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
            }
            else {
              thunk_FUN_14572512c(param_1,puVar4);
            }
          }
          else {
            *puVar4 = *puVar3;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (lVar5 < *piVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f88036 FUN_146f88036 body=67 status=ok
// SIG undefined FUN_146f88036(void)

longlong FUN_146f88036(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f875b6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f8758d(lVar2,1);
  return lVar2;
}



// FUNCTION 146f88079 FUN_146f88079 body=22 status=ok
// SIG undefined FUN_146f88079(void)

void FUN_146f88079(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 146f88090 FUN_146f88090 body=145 status=ok
// SIG undefined FUN_146f88090(void)

void FUN_146f88090(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f87222(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f88122 FUN_146f88122 body=508 status=ok
// SIG undefined FUN_146f88122(void)

void FUN_146f88122(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined4 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  int local_78;
  undefined4 uStack_74;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_74 = *param_3;
  local_60 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_b8 = param_3;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_a8 = local_68;
  local_a0 = local_60;
  local_98 = local_58;
  uStack_94 = uStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_b0 = param_2;
  if ((int)uStack_54 < (int)local_60[3]) {
    do {
      uVar5 = uStack_94;
      iVar2 = *(int *)(*param_2 + (longlong)(int)uStack_94 * 8);
      if (local_78 <= iVar2) {
        FUN_146f87410(&local_88,iVar2 + 1,local_b8);
      }
      uVar7 = (ulonglong)(uVar5 & 0xff);
      lVar6 = (longlong)((int)uVar5 >> 8) * 0xc18;
      lVar1 = *param_1 + lVar6;
      iVar3 = *(int *)(lVar1 + 0x410 + uVar7 * 4);
      iVar4 = *(int *)(lVar1 + 0x10 + uVar7 * 4);
      lVar1 = *(longlong *)(*param_1 + lVar6);
      local_c0 = 0;
      local_c8 = 1;
      FUN_146f88320(&local_88,&local_68,iVar2,iVar3);
      if (0 < (longlong)iVar3) {
        lVar6 = 0;
        do {
          *(undefined4 *)(local_68 + lVar6 * 4) =
               *(undefined4 *)((longlong)iVar4 * 4 + lVar1 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (iVar3 != lVar6);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while ((int)uStack_94 < (int)local_a0[3]);
  }
  FUN_146f884a0(param_1,&local_88);
  param_1[2] = CONCAT44(uStack_74,local_78);
  FUN_146f87101(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f88320 FUN_146f88320 body=384 status=ok
// SIG undefined FUN_146f88320(void)

longlong *
FUN_146f88320(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
             char param_6)

{
  longlong *plVar1;
  void *_Src;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar11 = param_3 & 0xff;
  lVar7 = *param_1;
  lVar10 = (longlong)((int)param_3 >> 8) * 0xc18;
  plVar1 = (longlong *)(lVar10 + lVar7);
  piVar2 = (int *)((longlong)plVar1 + uVar11 * 4 + 0x810);
  uVar9 = param_4 - *piVar2;
  if (uVar9 == 0 || param_4 < *piVar2) {
    lVar8 = *(longlong *)(lVar7 + lVar10);
  }
  else {
    lVar6 = plVar1[1];
    FUN_144a1a59e(plVar1,(int)lVar6 + uVar9,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
                 );
    lVar8 = *plVar1;
    _Src = (void *)(lVar8 + (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) * 4 +
                   (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x810) * 4);
    memmove((void *)((longlong)_Src + (ulonglong)uVar9 * 4),_Src,
            (lVar8 + (longlong)(int)lVar6 * 4) - (longlong)_Src);
    *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810) = param_4;
    if ((int)uVar11 + 1 < (int)plVar1[0x182]) {
      uVar5 = uVar11;
      do {
        piVar2 = (int *)(lVar10 + lVar7 + 0x14 + uVar5 * 4);
        *piVar2 = *piVar2 + uVar9;
        lVar6 = uVar5 + 2;
        uVar5 = uVar5 + 1;
      } while (lVar6 < (int)plVar1[0x182]);
    }
  }
  if (param_6 != '\0') {
    iVar3 = *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410);
    lVar7 = (longlong)iVar3;
    if (iVar3 < param_4) {
      if (iVar3 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810)) {
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
        do {
          *(undefined4 *)(*plVar1 + (*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) + lVar7) * 4) =
               uVar4;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x810));
      }
    }
    else if (param_4 < iVar3) {
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar7 = (longlong)param_4;
      do {
        *(undefined4 *)(*plVar1 + (*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) + lVar7) * 4) =
             uVar4;
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410));
    }
  }
  if (param_5 == '\0') {
    param_4 = *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410);
  }
  else {
    *(int *)((longlong)plVar1 + uVar11 * 4 + 0x410) = param_4;
  }
  *param_2 = lVar8 + (longlong)*(int *)((longlong)plVar1 + uVar11 * 4 + 0x10) * 4;
  *(int *)(param_2 + 1) = param_4;
  return param_2;
}



// FUNCTION 146f884a0 FUN_146f884a0 body=80 status=ok
// SIG undefined FUN_146f884a0(void)

longlong * FUN_146f884a0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f87101(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146f884f0 FUN_146f884f0 body=143 status=ok
// SIG undefined FUN_146f884f0(void)

void FUN_146f884f0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f88090(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f88079(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f88580(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f885ee(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f88580 FUN_146f88580 body=109 status=ok
// SIG undefined FUN_146f88580(void)

void FUN_146f88580(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_146f870cb(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f885ee FUN_146f885ee body=59 status=ok
// SIG undefined FUN_146f885ee(void)

void FUN_146f885ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8862a(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f87222(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f8862a FUN_146f8862a body=126 status=ok
// SIG undefined FUN_146f8862a(void)

ulonglong FUN_146f8862a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f886a8 FUN_146f886a8 body=111 status=ok
// SIG undefined FUN_146f886a8(void)

void FUN_146f886a8(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = param_1;
  }
  lVar2 = (longlong)(int)param_2;
  FUN_146f87101(*(undefined8 *)(lVar3 + lVar2 * 0x18),*(undefined4 *)(lVar3 + 8 + lVar2 * 0x18));
  if (*(longlong *)(lVar3 + lVar2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar3 + lVar2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f88718 FUN_146f88718 body=42 status=ok
// SIG undefined FUN_146f88718(void)

longlong FUN_146f88718(longlong param_1,int param_2)

{
  FUN_146f88bd4(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f88742 FUN_146f88742 body=108 status=ok
// SIG undefined FUN_146f88742(void)

undefined8 * FUN_146f88742(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7b70;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f88c34(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f887ae FUN_146f887ae body=100 status=ok
// SIG undefined FUN_146f887ae(void)

void FUN_146f887ae(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f88df8(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar2 = param_2 + 1;
  if (param_2 + 1 <= *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 146f88812 FUN_146f88812 body=89 status=ok
// SIG undefined FUN_146f88812(void)

void FUN_146f88812(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  plVar3 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      uVar4 = *(uint *)(plVar3 + 2);
      if (uVar4 != 0) {
        uVar2 = *(undefined1 *)(param_1 + 0x40);
        uVar5 = 0;
        do {
          *(undefined1 *)(*plVar3 + (longlong)(int)(uVar4 * param_2 + uVar5)) = uVar2;
          uVar5 = uVar5 + 1;
          uVar4 = *(uint *)(plVar3 + 2);
        } while (uVar5 < uVar4);
      }
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar1);
  }
  return;
}



// FUNCTION 146f8886c FUN_146f8886c body=113 status=ok
// SIG undefined FUN_146f8886c(void)

void FUN_146f8886c(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_14172833e(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f88df8(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f888de FUN_146f888de body=86 status=ok
// SIG undefined FUN_146f888de(void)

void FUN_146f888de(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f88e5c(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f88934 FUN_146f88934 body=81 status=ok
// SIG undefined FUN_146f88934(void)

ulonglong FUN_146f88934(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = (*(code *)PTR_FUN_14c75b148)
                        (*(undefined8 *)(lVar4 + lVar3),*(undefined4 *)(lVar4 + 8 + lVar3),
                         uVar2 & 0xffffffff);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return uVar2;
}



// FUNCTION 146f88994 FUN_146f88994 body=99 status=ok
// SIG undefined FUN_146f88994(void)

void FUN_146f88994(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f89386(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f88a08 FUN_146f88a08 body=33 status=ok
// SIG undefined FUN_146f88a08(void)

void FUN_146f88a08(longlong param_1)

{
  FUN_146f896e4(param_1 + 0x18);
  FUN_146f8962a(param_1 + 0x18);
  return;
}



// FUNCTION 146f88a2e FUN_146f88a2e body=200 status=ok
// SIG undefined FUN_146f88a2e(void)

void FUN_146f88a2e(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = param_1 + 0x18;
  iVar5 = *(int *)(param_1 + 0x38);
  if (param_2 < iVar5) {
    FUN_146f8952c(lVar1,param_2,1);
    return;
  }
  if (iVar5 < param_2) {
    do {
      *(uint *)(param_1 + 0x38) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
        FUN_146f892f4(lVar1,iVar5);
      }
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = lVar1;
      }
      puVar2 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x18);
      iVar5 = *(int *)(param_1 + 0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(int *)(puVar2 + 2) = iVar5;
      iVar3 = *(int *)(param_1 + 0x10);
      FUN_14172833e(puVar2,iVar5 * iVar3);
      if (0 < iVar3) {
        FUN_146f88df8(puVar2,iVar3 + -1,param_1 + 0x40);
      }
      iVar5 = *(int *)(param_1 + 0x38);
    } while (iVar5 < param_2);
  }
  return;
}



// FUNCTION 146f88af6 FUN_146f88af6 body=188 status=ok
// SIG undefined FUN_146f88af6(void)

void FUN_146f88af6(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f892f4(lVar1,iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  lVar4 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar5 + lVar4 + 0x18),(void *)(lVar5 + lVar4),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = lVar1;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined8 *)(lVar5 + lVar4) = 0;
  ((undefined8 *)(lVar5 + lVar4))[1] = 0;
  *(int *)(lVar5 + 0x10 + lVar4) = iVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  FUN_14172833e(lVar5 + lVar4,iVar2 * iVar3);
  if (iVar3 < 1) {
    return;
  }
  FUN_146f88df8(lVar5 + lVar4,iVar3 + -1,param_1 + 0x40);
  return;
}



// FUNCTION 146f88bb2 FUN_146f88bb2 body=33 status=ok
// SIG undefined FUN_146f88bb2(void)

void FUN_146f88bb2(longlong param_1)

{
  FUN_146f896e4(param_1 + 0x18);
  FUN_146f8962a(param_1 + 0x18);
  return;
}



// FUNCTION 146f88bd4 FUN_146f88bd4 body=53 status=ok
// SIG undefined FUN_146f88bd4(void)

void FUN_146f88bd4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f88c09(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f88c09 FUN_146f88c09 body=43 status=ok
// SIG undefined FUN_146f88c09(void)

void FUN_146f88c09(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f88c34 FUN_146f88c34 body=86 status=ok
// SIG undefined FUN_146f88c34(void)

void FUN_146f88c34(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f88c8a(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f88cf1(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f88c8a FUN_146f88c8a body=103 status=ok
// SIG undefined FUN_146f88c8a(void)

void FUN_146f88c8a(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f88d6a(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f88cf1 FUN_146f88cf1 body=121 status=ok
// SIG undefined FUN_146f88cf1(void)

void FUN_146f88cf1(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447cd5fa(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f88d6a FUN_146f88d6a body=141 status=ok
// SIG undefined FUN_146f88d6a(void)

void FUN_146f88d6a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f88df8 FUN_146f88df8 body=100 status=ok
// SIG undefined FUN_146f88df8(void)

void FUN_146f88df8(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = ((int)param_2 + 1) * (int)param_1[2];
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) - uVar1 < iVar2 - uVar1) {
      param_2 = (ulonglong)uVar1;
      FUN_1401c3474(param_1,param_2);
    }
    memset((void *)((longlong)(int)uVar1 + *param_1),(int)CONCAT71((int7)(param_2 >> 8),*param_3),
           (ulonglong)(iVar2 + ~uVar1) + 1);
    return;
  }
  return;
}



// FUNCTION 146f88e5c FUN_146f88e5c body=28 status=ok
// SIG undefined FUN_146f88e5c(void)

void FUN_146f88e5c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) * param_2;
  if (iVar1 < *(int *)(param_1 + 8)) {
    FUN_1448c4dd6(param_1,iVar1,1);
    return;
  }
  FUN_146f88df8(param_1,param_2 + -1);
  return;
}



// FUNCTION 146f88e78 FUN_146f88e78 body=324 status=ok
// SIG undefined FUN_146f88e78(void)

longlong * FUN_146f88e78(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f88fbe(param_1,param_2 + 0x18);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x40);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x40) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x40) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f88fbe FUN_146f88fbe body=341 status=ok
// SIG undefined FUN_146f88fbe(void)

longlong * FUN_146f88fbe(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f89114(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f89161(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f89114(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f89228(param_2);
        FUN_146f89161(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f89114 FUN_146f89114 body=76 status=ok
// SIG undefined FUN_146f89114(void)

void FUN_146f89114(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f88c09(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f89274(param_1,param_2);
  return;
}



// FUNCTION 146f89161 FUN_146f89161 body=199 status=ok
// SIG undefined FUN_146f89161(void)

longlong * FUN_146f89161(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
      (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 == 0x1f)) ||
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e3cc78), 3 < iVar2)) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 < 0x11)) {
    FUN_146e9d99c(param_1,param_2);
    return param_1;
  }
  FUN_140f1ec18(param_2,param_1,0);
  return param_1;
}



// FUNCTION 146f89228 FUN_146f89228 body=76 status=ok
// SIG undefined FUN_146f89228(void)

longlong FUN_146f89228(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f892f4(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f892da(lVar2,1);
  return lVar2;
}



// FUNCTION 146f89274 FUN_146f89274 body=102 status=ok
// SIG undefined FUN_146f89274(void)

void FUN_146f89274(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f88d6a(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f892da FUN_146f892da body=26 status=ok
// SIG undefined FUN_146f892da(void)

void FUN_146f892da(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f892f4 FUN_146f892f4 body=145 status=ok
// SIG undefined FUN_146f892f4(void)

void FUN_146f892f4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f88d6a(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f89386 FUN_146f89386 body=420 status=ok
// SIG undefined FUN_146f89386(void)

void FUN_146f89386(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (int)param_1[2];
  local_78 = 0;
  uStack_70 = 0;
  local_58 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_98 = local_60;
  local_90 = local_58;
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_80 = local_48;
  local_7c = local_44;
  local_a0 = param_2;
  if (iStack_4c < (int)local_58[3]) {
    do {
      iVar4 = iStack_84;
      iVar1 = *(int *)(*param_2 + (longlong)iStack_84 * 8);
      FUN_146f88df8(&local_78,iVar1,param_3);
      lVar3 = param_1[2];
      if ((int)lVar3 != 0) {
        lVar2 = *param_1;
        uVar5 = 0;
        do {
          *(undefined1 *)(iVar1 * local_68 + local_78 + uVar5) =
               *(undefined1 *)((int)lVar3 * iVar4 + lVar2 + uVar5);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 2));
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (iStack_84 < (int)local_90[3]);
  }
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8952c FUN_146f8952c body=143 status=ok
// SIG undefined FUN_146f8952c(void)

void FUN_146f8952c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f892f4(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f892da(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f895bc(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8962a(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f895bc FUN_146f895bc body=109 status=ok
// SIG undefined FUN_146f895bc(void)

void FUN_146f895bc(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_146f88c09(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8962a FUN_146f8962a body=59 status=ok
// SIG undefined FUN_146f8962a(void)

void FUN_146f8962a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f89666(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f88d6a(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f89666 FUN_146f89666 body=126 status=ok
// SIG undefined FUN_146f89666(void)

ulonglong FUN_146f89666(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f896e4 FUN_146f896e4 body=97 status=ok
// SIG undefined FUN_146f896e4(void)

void FUN_146f896e4(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  if (*(longlong *)(lVar2 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f89746 FUN_146f89746 body=42 status=ok
// SIG undefined FUN_146f89746(void)

longlong FUN_146f89746(longlong param_1,int param_2)

{
  FUN_146f89be4(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f89770 FUN_146f89770 body=108 status=ok
// SIG undefined FUN_146f89770(void)

undefined8 * FUN_146f89770(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7c00;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f89c7e(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f897dc FUN_146f897dc body=116 status=ok
// SIG undefined FUN_146f897dc(void)

void FUN_146f897dc(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      if (*(int *)(lVar2 + 0x10) <= param_2) {
        FUN_146f89f5e(lVar2,param_2 + 1,param_1 + 0x40);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}



// FUNCTION 146f898a4 FUN_146f898a4 body=86 status=ok
// SIG undefined FUN_146f898a4(void)

void FUN_146f898a4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8a358(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f898fa FUN_146f898fa body=86 status=ok
// SIG undefined FUN_146f898fa(void)

void FUN_146f898fa(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f89f5e(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f89950 FUN_146f89950 body=122 status=ok
// SIG undefined FUN_146f89950(void)

ulonglong FUN_146f89950(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    uVar4 = 0;
  }
  else {
    plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x38) * 3;
    uVar4 = 0;
    do {
      lVar3 = plVar5[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = *plVar5;
        lVar6 = 0;
        do {
          uVar4 = (*(code *)PTR_FUN_14c75b148)
                            (*(undefined8 *)(lVar2 + lVar6),*(undefined4 *)(lVar2 + 8 + lVar6),
                             uVar4 & 0xffffffff);
          lVar6 = lVar6 + 0xc18;
        } while ((longlong)(int)lVar3 * 0xc18 - lVar6 != 0);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
  }
  return uVar4;
}



// FUNCTION 146f899d8 FUN_146f899d8 body=94 status=ok
// SIG undefined FUN_146f899d8(void)

void FUN_146f899d8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8acfa(lVar2,param_2,param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f89a46 FUN_146f89a46 body=33 status=ok
// SIG undefined FUN_146f89a46(void)

void FUN_146f89a46(longlong param_1)

{
  FUN_146f8b280(param_1 + 0x18);
  FUN_146f8b1c6(param_1 + 0x18);
  return;
}



// FUNCTION 146f89a6c FUN_146f89a6c body=170 status=ok
// SIG undefined FUN_146f89a6c(void)

void FUN_146f89a6c(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x18;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 <= param_2) {
    if (iVar4 < param_2) {
      do {
        *(uint *)(param_1 + 0x38) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
          FUN_146f8ac68(lVar1,iVar4);
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar3 = lVar1;
        }
        puVar2 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined1 *)((longlong)puVar2 + 0x14) = *(undefined1 *)(param_1 + 0x40);
        FUN_146f8a358(puVar2,*(undefined4 *)(param_1 + 0x10),param_1 + 0x40);
        iVar4 = *(int *)(param_1 + 0x38);
      } while (iVar4 < param_2);
    }
    return;
  }
  FUN_146f8b0c8(lVar1,param_2,1);
  return;
}



// FUNCTION 146f89b16 FUN_146f89b16 body=171 status=ok
// SIG undefined FUN_146f89b16(void)

void FUN_146f89b16(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == iVar2) {
    FUN_146f8ac68(lVar1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar4 = lVar1;
  }
  lVar3 = (longlong)param_2 * 0x18;
  memmove((void *)(lVar4 + lVar3 + 0x18),(void *)(lVar4 + lVar3),
          (ulonglong)(uint)(iVar2 - param_2) * 0x18);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar4 = lVar1;
  }
  *(undefined8 *)(lVar4 + lVar3) = 0;
  ((undefined8 *)(lVar4 + lVar3))[1] = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar3) = 0;
  *(undefined1 *)(lVar4 + 0x14 + lVar3) = *(undefined1 *)(param_1 + 0x40);
  FUN_146f8a358(lVar4 + lVar3,*(undefined4 *)(param_1 + 0x10),param_1 + 0x40);
  return;
}



// FUNCTION 146f89bc2 FUN_146f89bc2 body=33 status=ok
// SIG undefined FUN_146f89bc2(void)

void FUN_146f89bc2(longlong param_1)

{
  FUN_146f8b280(param_1 + 0x18);
  FUN_146f8b1c6(param_1 + 0x18);
  return;
}



// FUNCTION 146f89be4 FUN_146f89be4 body=53 status=ok
// SIG undefined FUN_146f89be4(void)

void FUN_146f89be4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f89c19(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f89c19 FUN_146f89c19 body=54 status=ok
// SIG undefined FUN_146f89c19(void)

void FUN_146f89c19(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f89c4f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f89c4f FUN_146f89c4f body=46 status=ok
// SIG undefined FUN_146f89c4f(void)

void FUN_146f89c4f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x183;
  }
  return;
}



// FUNCTION 146f89c7e FUN_146f89c7e body=86 status=ok
// SIG undefined FUN_146f89c7e(void)

void FUN_146f89c7e(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x20) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  FUN_146f89cd4(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f89d3b(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f89cd4 FUN_146f89cd4 body=103 status=ok
// SIG undefined FUN_146f89cd4(void)

void FUN_146f89cd4(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_146f89d70(param_1,0,uVar3,0x18);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 146f89d3b FUN_146f89d3b body=52 status=ok
// SIG undefined FUN_146f89d3b(void)

void FUN_146f89d3b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146f89dfe(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 146f89d70 FUN_146f89d70 body=141 status=ok
// SIG undefined FUN_146f89d70(void)

void FUN_146f89d70(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f89dfe FUN_146f89dfe body=96 status=ok
// SIG undefined FUN_146f89dfe(void)

undefined8 * FUN_146f89dfe(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f89e5e(param_1,iVar1,0);
    FUN_146f89ed0(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 146f89e5e FUN_146f89e5e body=114 status=ok
// SIG undefined FUN_146f89e5e(void)

void FUN_146f89e5e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    iVar2 = (int)(uVar1 / 0xc18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146f89ed0 FUN_146f89ed0 body=142 status=ok
// SIG undefined FUN_146f89ed0(void)

void FUN_146f89ed0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Src_00;
  
  if (param_3 != 0) {
    _Src_00 = (void *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)((longlong)_Src_00 + -8);
      _Src = *(void **)((longlong)_Src_00 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447cd5fa(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      memcpy(param_1 + 2,_Src_00,0xc04);
      param_1 = param_1 + 0x183;
      _Src_00 = (void *)((longlong)_Src_00 + 0xc18);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f89f5e FUN_146f89f5e body=245 status=ok
// SIG undefined FUN_146f89f5e(void)

void FUN_146f89f5e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar4 = param_2 + 0xff;
  iVar3 = (int)uVar4 >> 8;
  FUN_146f8a054(param_1,iVar3,1);
  uVar6 = *(uint *)(param_1 + 2);
  if (param_2 < (int)uVar6) {
    if (iVar3 < 1) goto LAB_146f89fb5;
    uVar4 = (uVar4 & 0xff) + 1;
  }
  else {
    if (param_2 <= (int)uVar6) goto LAB_146f89fb5;
    uVar6 = uVar6 & 0xff;
    uVar7 = (ulonglong)uVar6;
    uVar4 = (uVar4 & 0xff) + 1;
    if (uVar7 != 0) {
      uVar5 = 0x100;
      if (iVar3 == (int)lVar1) {
        uVar5 = uVar4;
      }
      lVar2 = (longlong)(int)lVar1 * 0xc18;
      lVar1 = *param_1 + lVar2;
      iVar3 = *(int *)(lVar1 + -0x408 + (ulonglong)(uVar6 - 1) * 4) +
              *(int *)(lVar1 + -0xc08 + (ulonglong)(uVar6 - 1) * 4);
      FUN_1448c4dd6(lVar2 + *param_1 + -0xc18,iVar3,0);
      if (uVar6 < uVar5) {
        do {
          *(int *)(lVar1 + -0xc08 + uVar7 * 4) = iVar3;
          *(undefined4 *)(lVar1 + -0x808 + uVar7 * 4) = 0;
          *(undefined4 *)(lVar1 + -0x408 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
      *(uint *)(lVar1 + -8) = uVar5;
    }
  }
  *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) = uVar4;
LAB_146f89fb5:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f8a054 FUN_146f8a054 body=134 status=ok
// SIG undefined FUN_146f8a054(void)

void FUN_146f8a054(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8a104(param_1,iVar1);
    }
    FUN_146f8a0db((longlong)iVar1 * 0xc18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f8a23e(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8a2a4(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8a0db FUN_146f8a0db body=41 status=ok
// SIG undefined FUN_146f8a0db(void)

void FUN_146f8a0db(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f8a198(param_1);
    param_1 = param_1 + 0xc18;
  }
  return;
}



// FUNCTION 146f8a104 FUN_146f8a104 body=146 status=ok
// SIG undefined FUN_146f8a104(void)

void FUN_146f8a104(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc18)) {
      uVar5 = uVar4 / 0xc18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8a198 FUN_146f8a198 body=164 status=ok
// SIG undefined FUN_146f8a198(void)

undefined8 * FUN_146f8a198(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = 0;
  FUN_146f7c72a(param_1 + 2,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x82,0,param_3,&local_24);
  local_24 = 0;
  FUN_146f7c72a(param_1 + 0x102,0,param_3,&local_24);
  *(undefined4 *)(param_1 + 0x182) = 0x100;
  if (*(int *)((longlong)param_1 + 0xc) < 0x100) {
    FUN_14475e67c(param_1,0x100);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8a23e FUN_146f8a23e body=101 status=ok
// SIG undefined FUN_146f8a23e(void)

void FUN_146f8a23e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xc18 + *param_1);
  FUN_146f89c4f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xc18 + (longlong)_Dst),(longlong)iVar2 * 0xc18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8a2a4 FUN_146f8a2a4 body=63 status=ok
// SIG undefined FUN_146f8a2a4(void)

void FUN_146f8a2a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8a2e4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc18,8);
  }
  return;
}



// FUNCTION 146f8a2e4 FUN_146f8a2e4 body=115 status=ok
// SIG undefined FUN_146f8a2e4(void)

ulonglong FUN_146f8a2e4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc18,8);
      uVar1 = uVar1 / 0xc18;
    }
  }
  return uVar1;
}



// FUNCTION 146f8a358 FUN_146f8a358 body=91 status=ok
// SIG undefined FUN_146f8a358(void)

void FUN_146f8a358(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + 0xffU) >> 8;
  FUN_146f8a3b4(param_1,iVar1);
  FUN_146f8a054(param_1,iVar1,1);
  if (0 < iVar1) {
    *(uint *)(*param_1 + 0xc10 + (longlong)((int)param_1[1] + -1) * 0xc18) =
         (param_2 + 0xffU & 0xff) + 1;
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 146f8a3b4 FUN_146f8a3b4 body=68 status=ok
// SIG undefined FUN_146f8a3b4(void)

void FUN_146f8a3b4(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146f89c4f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f8a3fa(param_1,param_2);
  return;
}



// FUNCTION 146f8a3fa FUN_146f8a3fa body=112 status=ok
// SIG undefined FUN_146f8a3fa(void)

void FUN_146f8a3fa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc18)) {
      uVar2 = uVar1 / 0xc18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc18,8);
  }
  return;
}



// FUNCTION 146f8a46a FUN_146f8a46a body=324 status=ok
// SIG undefined FUN_146f8a46a(void)

longlong * FUN_146f8a46a(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f8a5b0(param_1,param_2 + 0x18);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x40);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x40) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x40) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = (undefined4 *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8a5b0 FUN_146f8a5b0 body=341 status=ok
// SIG undefined FUN_146f8a5b0(void)

longlong * FUN_146f8a5b0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x20) * 0x18,
             (longlong)*(int *)(param_2 + 0x24) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x20);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f8a706(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x20) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) == 0) {
        lVar4 = param_2;
      }
      FUN_146f8a753(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0x20));
  }
  else {
    FUN_146f8a706(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f8a83c(param_2);
        FUN_146f8a753(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f8a706 FUN_146f8a706 body=76 status=ok
// SIG undefined FUN_146f8a706(void)

void FUN_146f8a706(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_146f89c19(lVar1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == param_2) {
    return;
  }
  FUN_146f8a888(param_1,param_2);
  return;
}



// FUNCTION 146f8a753 FUN_146f8a753 body=232 status=ok
// SIG undefined FUN_146f8a753(void)

longlong * FUN_146f8a753(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f8a8ee();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x14);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x14) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x14) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8a83c FUN_146f8a83c body=76 status=ok
// SIG undefined FUN_146f8a83c(void)

longlong FUN_146f8a83c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146f8ac68(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_146f8ac4d(lVar2,1);
  return lVar2;
}



// FUNCTION 146f8a888 FUN_146f8a888 body=102 status=ok
// SIG undefined FUN_146f8a888(void)

void FUN_146f8a888(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = (uint)(uVar1 / 0x18);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  FUN_146f89d70(param_1,*(undefined4 *)(param_1 + 0x20),uVar3,0x18);
  return;
}



// FUNCTION 146f8a8ee FUN_146f8a8ee body=358 status=ok
// SIG undefined FUN_146f8a8ee(void)

longlong * FUN_146f8a8ee(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f89c4f(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f8a3fa(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x152a < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f8aa55(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146f8a3b4(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f8ac0a(param_2);
        FUN_146f8aa55(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f8aa55 FUN_146f8aa55 body=436 status=ok
// SIG undefined FUN_146f8aa55(void)

longlong * FUN_146f8aa55(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  FUN_146e9d99c();
  piVar1 = (int *)(param_2 + 0xc10);
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_1,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (0 < *piVar1) {
    puVar4 = (undefined4 *)(param_2 + 0x10);
    lVar5 = 0;
    do {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar4);
        }
      }
      else {
        *puVar4 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar5 < *piVar1);
    if (0 < *piVar1) {
      puVar4 = (undefined4 *)(param_2 + 0x410);
      lVar5 = 0;
      do {
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar4);
          }
        }
        else {
          *puVar4 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        lVar5 = lVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar5 < *piVar1);
      if (0 < *piVar1) {
        puVar4 = (undefined4 *)(param_2 + 0x810);
        lVar5 = 0;
        do {
          puVar3 = *(undefined4 **)param_1[1];
          if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
            }
            else {
              thunk_FUN_14572512c(param_1,puVar4);
            }
          }
          else {
            *puVar4 = *puVar3;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
          }
          lVar5 = lVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (lVar5 < *piVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 146f8ac0a FUN_146f8ac0a body=67 status=ok
// SIG undefined FUN_146f8ac0a(void)

longlong FUN_146f8ac0a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f8a104(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc18 + *param_1;
  FUN_146f8a0db(lVar2,1);
  return lVar2;
}



// FUNCTION 146f8ac4d FUN_146f8ac4d body=27 status=ok
// SIG undefined FUN_146f8ac4d(void)

void FUN_146f8ac4d(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0xd) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146f8ac68 FUN_146f8ac68 body=145 status=ok
// SIG undefined FUN_146f8ac68(void)

void FUN_146f8ac68(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
        uVar5 = uVar4 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x24) = (int)uVar5;
    FUN_146f89d70(param_1,param_2,uVar5,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f8acfa FUN_146f8acfa body=512 status=ok
// SIG undefined FUN_146f8acfa(void)

void FUN_146f8acfa(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  int local_78;
  undefined1 local_74;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_74 = *param_3;
  local_60 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_b8 = param_3;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_a8 = local_68;
  local_a0 = local_60;
  local_98 = local_58;
  uStack_94 = uStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_b0 = param_2;
  if ((int)uStack_54 < (int)local_60[3]) {
    do {
      uVar5 = uStack_94;
      iVar2 = *(int *)(*param_2 + (longlong)(int)uStack_94 * 8);
      if (local_78 <= iVar2) {
        FUN_146f89f5e(&local_88,iVar2 + 1,local_b8);
      }
      uVar7 = (ulonglong)(uVar5 & 0xff);
      lVar6 = (longlong)((int)uVar5 >> 8) * 0xc18;
      lVar1 = *param_1 + lVar6;
      iVar3 = *(int *)(lVar1 + 0x410 + uVar7 * 4);
      iVar4 = *(int *)(lVar1 + 0x10 + uVar7 * 4);
      lVar1 = *(longlong *)(*param_1 + lVar6);
      local_c0 = 0;
      local_c8 = 1;
      FUN_146f8aefc(&local_88,&local_68,iVar2,iVar3);
      if (0 < (longlong)iVar3) {
        lVar6 = 0;
        do {
          *(undefined1 *)(local_68 + lVar6) = *(undefined1 *)(iVar4 + lVar1 + lVar6);
          lVar6 = lVar6 + 1;
        } while (iVar3 != lVar6);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while ((int)uStack_94 < (int)local_a0[3]);
  }
  FUN_146f8b078(param_1,&local_88);
  *(int *)(param_1 + 2) = local_78;
  *(undefined1 *)((longlong)param_1 + 0x14) = local_74;
  FUN_146f89c4f(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f8aefc FUN_146f8aefc body=380 status=ok
// SIG undefined FUN_146f8aefc(void)

void FUN_146f8aefc(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4,char param_5,
                  char param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Src;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = param_3 & 0xff;
  lVar7 = *param_1;
  lVar9 = (longlong)((int)param_3 >> 8) * 0xc18;
  plVar1 = (longlong *)(lVar7 + lVar9);
  piVar2 = (int *)((longlong)plVar1 + uVar10 * 4 + 0x810);
  uVar8 = param_4 - *piVar2;
  if (uVar8 == 0 || param_4 < *piVar2) {
    lVar11 = *(longlong *)(lVar7 + lVar9);
  }
  else {
    lVar6 = plVar1[1];
    FUN_1448c4dd6(plVar1,(int)lVar6 + uVar8,CONCAT71((uint7)(uint3)(int3)(short)(param_3 >> 0x10),1)
                 );
    lVar11 = *plVar1;
    _Src = (void *)((longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) +
                   *(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + lVar11);
    memmove((void *)((ulonglong)uVar8 + (longlong)_Src),_Src,((int)lVar6 + lVar11) - (longlong)_Src)
    ;
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810) = param_4;
    if ((int)uVar10 + 1 < (int)plVar1[0x182]) {
      uVar5 = uVar10;
      do {
        piVar2 = (int *)(lVar9 + lVar7 + 0x14 + uVar5 * 4);
        *piVar2 = *piVar2 + uVar8;
        lVar6 = uVar5 + 2;
        uVar5 = uVar5 + 1;
      } while (lVar6 < (int)plVar1[0x182]);
    }
  }
  if (param_6 != '\0') {
    iVar4 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
    lVar7 = (longlong)iVar4;
    if (iVar4 < param_4) {
      if (iVar4 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810)) {
        uVar3 = *(undefined1 *)((longlong)param_1 + 0x14);
        do {
          *(undefined1 *)
           (lVar7 + (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + *plVar1) = uVar3;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x810));
      }
    }
    else if (param_4 < iVar4) {
      uVar3 = *(undefined1 *)((longlong)param_1 + 0x14);
      lVar7 = (longlong)param_4;
      do {
        *(undefined1 *)(lVar7 + (longlong)*(int *)((longlong)plVar1 + uVar10 * 4 + 0x10) + *plVar1)
             = uVar3;
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410));
    }
  }
  if (param_5 == '\0') {
    param_4 = *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410);
  }
  else {
    *(int *)((longlong)plVar1 + uVar10 * 4 + 0x410) = param_4;
  }
  *param_2 = lVar11 + *(int *)((longlong)plVar1 + uVar10 * 4 + 0x10);
  *(int *)(param_2 + 1) = param_4;
  return;
}



// FUNCTION 146f8b078 FUN_146f8b078 body=80 status=ok
// SIG undefined FUN_146f8b078(void)

longlong * FUN_146f8b078(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146f89c4f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146f8b0c8 FUN_146f8b0c8 body=143 status=ok
// SIG undefined FUN_146f8b0c8(void)

void FUN_146f8b0c8(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f8ac68(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    FUN_146f8ac4d(lVar2 + (longlong)iVar1 * 0x18,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f8b158(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f8b1c6(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f8b158 FUN_146f8b158 body=109 status=ok
// SIG undefined FUN_146f8b158(void)

void FUN_146f8b158(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 0x18);
  FUN_146f89c19(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 - param_3;
  return;
}



// FUNCTION 146f8b1c6 FUN_146f8b1c6 body=59 status=ok
// SIG undefined FUN_146f8b1c6(void)

void FUN_146f8b1c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f8b202(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_146f89d70(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 146f8b202 FUN_146f8b202 body=126 status=ok
// SIG undefined FUN_146f8b202(void)

ulonglong FUN_146f8b202(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146f8b280 FUN_146f8b280 body=111 status=ok
// SIG undefined FUN_146f8b280(void)

void FUN_146f8b280(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = param_1;
  }
  lVar2 = (longlong)(int)param_2;
  FUN_146f89c4f(*(undefined8 *)(lVar3 + lVar2 * 0x18),*(undefined4 *)(lVar3 + 8 + lVar2 * 0x18));
  if (*(longlong *)(lVar3 + lVar2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (~param_2 + iVar1 != 0) {
    _Dst = (void *)(lVar3 + lVar2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  return;
}



// FUNCTION 146f8b2f0 FUN_146f8b2f0 body=42 status=ok
// SIG undefined FUN_146f8b2f0(void)

longlong FUN_146f8b2f0(longlong param_1,int param_2)

{
  FUN_146f8b7a4(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f8b31a FUN_146f8b31a body=110 status=ok
// SIG undefined FUN_146f8b31a(void)

undefined8 * FUN_146f8b31a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *puVar4 = &PTR_FUN_149fa7c90;
  puVar4[6] = 0;
  lVar5 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f8b804(puVar4 + 3,lVar5,*(undefined4 *)(param_1 + 0x38),0);
  puVar4[8] = *(undefined8 *)(param_1 + 0x40);
  *param_2 = puVar4;
  return param_2;
}



// FUNCTION 146f8b388 FUN_146f8b388 body=100 status=ok
// SIG undefined FUN_146f8b388(void)

void FUN_146f8b388(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8b9cc(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar2 = param_2 + 1;
  if (param_2 + 1 <= *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 146f8b3ec FUN_146f8b3ec body=89 status=ok
// SIG undefined FUN_146f8b3ec(void)

void FUN_146f8b3ec(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  plVar2 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x38) * 3;
    do {
      uVar3 = *(uint *)(plVar2 + 2);
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          *(undefined8 *)(*plVar2 + (longlong)(int)(uVar3 * param_2 + uVar4) * 8) =
               *(undefined8 *)(param_1 + 0x40);
          uVar4 = uVar4 + 1;
          uVar3 = *(uint *)(plVar2 + 2);
        } while (uVar4 < uVar3);
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar1);
  }
  return;
}



// FUNCTION 146f8b446 FUN_146f8b446 body=113 status=ok
// SIG undefined FUN_146f8b446(void)

void FUN_146f8b446(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_140ee6e62(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f8b9cc(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8b4b8 FUN_146f8b4b8 body=86 status=ok
// SIG undefined FUN_146f8b4b8(void)

void FUN_146f8b4b8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8ba30(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f8b50e FUN_146f8b50e body=71 status=ok
// SIG undefined FUN_146f8b50e(void)

ulonglong FUN_146f8b50e(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    uVar1 = 0;
    do {
      uVar1 = FUN_146f8ba4c(lVar2,uVar1 & 0xffffffff);
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  return uVar1;
}



// FUNCTION 146f8b564 FUN_146f8b564 body=99 status=ok
// SIG undefined FUN_146f8b564(void)

void FUN_146f8b564(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f8bf5a(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f8b5d8 FUN_146f8b5d8 body=33 status=ok
// SIG undefined FUN_146f8b5d8(void)

void FUN_146f8b5d8(longlong param_1)

{
  FUN_146f8c2c0(param_1 + 0x18);
  FUN_146f8c206(param_1 + 0x18);
  return;
}



// FUNCTION 146f8b5fe FUN_146f8b5fe body=200 status=ok
// SIG undefined FUN_146f8b5fe(void)

void FUN_146f8b5fe(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = param_1 + 0x18;
  iVar5 = *(int *)(param_1 + 0x38);
  if (param_2 < iVar5) {
    FUN_146f8c108(lVar1,param_2,1);
    return;
  }
  if (iVar5 < param_2) {
    do {
      *(uint *)(param_1 + 0x38) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
        FUN_146f8bec8(lVar1,iVar5);
      }
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = lVar1;
      }
      puVar2 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x18);
      iVar5 = *(int *)(param_1 + 0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(int *)(puVar2 + 2) = iVar5;
      iVar3 = *(int *)(param_1 + 0x10);
      FUN_140ee6e62(puVar2,iVar5 * iVar3);
      if (0 < iVar3) {
        FUN_146f8b9cc(puVar2,iVar3 + -1,param_1 + 0x40);
      }
      iVar5 = *(int *)(param_1 + 0x38);
    } while (iVar5 < param_2);
  }
  return;
}


