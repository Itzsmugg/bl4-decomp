// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143efce50 FUN_143efce50 body=79 status=ok
// SIG undefined FUN_143efce50(void)

void FUN_143efce50(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efcea0 FUN_143efcea0 body=204 status=ok
// SIG undefined FUN_143efcea0(void)

void FUN_143efcea0(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_4;
  puVar7 = (undefined4 *)*param_3;
  puVar4 = (undefined4 *)param_3[1];
  uVar2 = *param_2;
  local_58 = 0;
  uStack_50 = 0;
  if (puVar7 != puVar4) {
    do {
      uVar5 = uStack_50;
      uVar3 = *puVar7;
      lVar8 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_14657e454(&local_58,uVar5 & 0xffffffff);
      }
      *(undefined4 *)(local_58 + lVar8 * 4) = uVar3;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar4);
  }
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))(param_1,uVar2,&local_58,uVar1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143efcfac FUN_143efcfac body=79 status=ok
// SIG undefined FUN_143efcfac(void)

void FUN_143efcfac(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efcffc FUN_143efcffc body=98 status=ok
// SIG undefined FUN_143efcffc(void)

void FUN_143efcffc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_5;
  uVar2 = *param_4;
  uVar3 = *param_3;
  lVar4 = FUN_140773fe2();
  lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x108) + 0x2b0))
                    (*(longlong **)(lVar4 + 0x108),param_2,1);
  if (lVar4 == 0) {
    return;
  }
  FUN_148a6763a(lVar4 + 0x1b0,uVar3,uVar2,uVar1);
  return;
}



// FUNCTION 143efd0c4 FUN_143efd0c4 body=79 status=ok
// SIG undefined FUN_143efd0c4(void)

void FUN_143efd0c4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efd178 FUN_143efd178 body=79 status=ok
// SIG undefined FUN_143efd178(void)

void FUN_143efd178(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efd228 FUN_143efd228 body=79 status=ok
// SIG undefined FUN_143efd228(void)

void FUN_143efd228(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efd2dc FUN_143efd2dc body=79 status=ok
// SIG undefined FUN_143efd2dc(void)

void FUN_143efd2dc(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efd32c FUN_143efd32c body=252 status=ok
// SIG undefined FUN_143efd32c(void)

void FUN_143efd32c(undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined1 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[8];
  uVar7 = 3;
  if ((uint)param_3[2] < 4) {
    uVar7 = param_3[2];
  }
  uVar4 = *param_2;
  local_58 = param_3[4];
  uStack_54 = param_3[5];
  uStack_50 = param_3[6];
  uStack_4c = param_3[7];
  local_80 = param_1;
  FUN_14152e0f7(&local_78);
  iVar5 = local_70;
  _Src = (void *)CONCAT44(uStack_74,local_78);
  lVar6 = (longlong)local_70;
  local_6c = (undefined1)uVar7;
  local_68 = (void *)0x0;
  local_60 = local_70;
  local_78 = uVar3;
  uStack_74 = uVar1;
  local_70 = uVar2;
  if (lVar6 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,iVar5,0);
    memcpy(local_68,_Src,lVar6 * 2);
  }
  uVar7 = 4;
  if (uVar4 < 4) {
    uVar7 = uVar4;
  }
  FUN_148a61a28(local_80,uVar7,&local_78);
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efd468 FUN_143efd468 body=79 status=ok
// SIG undefined FUN_143efd468(void)

void FUN_143efd468(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efd4b8 FUN_143efd4b8 body=225 status=ok
// SIG undefined FUN_143efd4b8(void)

void FUN_143efd4b8(longlong *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = *param_3;
  local_38 = param_3[1];
  local_40 = param_3[8];
  uVar1 = *param_2;
  local_30 = 0;
  uStack_28 = 0;
  uVar3 = 3;
  if ((uint)param_3[2] < 4) {
    uVar3 = param_3[2];
  }
  local_34 = (undefined1)uVar3;
  if (*(longlong *)(param_3 + 6) != *(longlong *)(param_3 + 4)) {
    local_60 = *(longlong *)(param_3 + 4);
    local_58 = *(longlong *)(param_3 + 6);
    FUN_14152e0f7(&local_50);
    local_30 = CONCAT44(uStack_4c,local_50);
    uStack_28 = CONCAT44(uStack_44,uStack_48);
  }
  uVar3 = 4;
  if (uVar1 < 4) {
    uVar3 = uVar1;
  }
  if (((int)param_1[1] != 0) && (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,uVar3);
  }
  FUN_143efd59a(param_1[2] + 0x188,&local_40);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efd59a FUN_143efd59a body=162 status=ok
// SIG undefined FUN_143efd59a(void)

void FUN_143efd59a(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_143efd627;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143efd627:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143efd63c FUN_143efd63c body=46 status=ok
// SIG undefined FUN_143efd63c(void)

void FUN_143efd63c(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1418bf9e8();
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return;
}



// FUNCTION 143efd66a FUN_143efd66a body=112 status=ok
// SIG undefined FUN_143efd66a(void)

void FUN_143efd66a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)(param_2 + 1) = 0;
  param_1[2] = param_2[2];
  if ((int)param_2[1] != 0) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efd6da FUN_143efd6da body=79 status=ok
// SIG undefined FUN_143efd6da(void)

void FUN_143efd6da(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efd760 FUN_143efd760 body=137 status=ok
// SIG undefined FUN_143efd760(void)

void FUN_143efd760(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efd7ea FUN_143efd7ea body=137 status=ok
// SIG undefined FUN_143efd7ea(void)

void FUN_143efd7ea(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efd8ea FUN_143efd8ea body=347 status=ok
// SIG undefined FUN_143efd8ea(void)

void FUN_143efd8ea(uint *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = param_2[7];
  local_38 = param_2[3];
  uStack_34 = param_2[4];
  uStack_30 = param_2[5];
  uStack_2c = param_2[6];
  if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((plVar1 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar1 != (longlong *)0x0 && (*(uint *)(plVar1 + 2) == param_1[1])))) &&
     ((*(uint *)(plVar1 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar1 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar1;
    }
    else {
      lVar4 = 0;
    }
    if ((longlong)*(int *)(lVar4 + 400) != 0) {
      lVar3 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x188) + 8 + lVar3) != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x188) + lVar3) != 0)) {
          if ((*(uint *)(plVar1 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar1;
          }
          else {
            lVar4 = 0;
          }
          uVar2 = 3;
          if ((uint)param_2[2] < 4) {
            uVar2 = param_2[2];
          }
          local_4c = (undefined1)uVar2;
          local_68 = uStack_34;
          uStack_64 = uStack_30;
          uStack_60 = uStack_2c;
          uStack_5c = local_28;
          local_58 = param_2[8];
          local_54 = *param_2;
          local_50 = param_2[1];
          FUN_14152e0f7();
          FUN_143efd59a(lVar4 + 0x188,&local_58);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 400) * 0x10 != lVar3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143efda58 FUN_143efda58 body=346 status=ok
// SIG undefined FUN_143efda58(void)

void FUN_143efda58(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_50 = *(undefined4 *)(param_2 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_14152e0f7();
  pvVar3 = local_48;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    lVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143efdaef;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((*(uint *)(plVar4 + 2) == param_1[1] && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar5 = *plVar4;
      goto LAB_143efdaef;
    }
  }
  lVar5 = 0;
LAB_143efdaef:
  local_68 = (void *)0x0;
  uStack_60 = CONCAT44(uStack_60._4_4_,(int)local_40);
  local_70 = uVar2;
  if ((int)local_40 == 0) {
    uStack_60 = (ulonglong)local_40 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&local_68,(ulonglong)local_40 & 0xffffffff,0);
    memcpy(local_68,local_48,(longlong)(int)local_40 * 2);
  }
  if (*(int *)(lVar5 + 0x1a8) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(lVar5 + 0x1a0);
  }
  local_48 = (void *)local_70;
  local_40 = local_68;
  uStack_38 = uStack_60;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  (**(code **)(*plVar4 + 0x58))();
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvVar3 != (void *)0x0) {
    FUN_1400020a8(pvVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efdbc6 FUN_143efdbc6 body=810 status=ok
// SIG undefined FUN_143efdbc6(void)

void FUN_143efdbc6(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  undefined2 *local_70;
  int iStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *(undefined8 *)(param_2 + 2);
  uStack_a0 = *(undefined8 *)(param_2 + 4);
  local_b8 = param_2[6];
  uStack_b4 = param_2[7];
  uStack_b0 = param_2[8];
  uStack_ac = param_2[9];
  if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((plVar13 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == param_1[1])))) &&
     (uVar1 = *(undefined1 *)(param_2 + 10), (*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar10 = *plVar13;
    }
    else {
      lVar10 = 0;
    }
    if ((longlong)*(int *)(lVar10 + 0x1d0) != 0) {
      lVar14 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar10 + 0x1c8) + 8 + lVar14) != 0) &&
           (*(longlong *)(*(longlong *)(lVar10 + 0x1c8) + lVar14) != 0)) {
          local_40 = 0;
          local_48 = 0;
          local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
          uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
          local_88 = (undefined4)local_a8;
          uStack_84 = local_a8._4_4_;
          uStack_80 = (undefined4)uStack_a0;
          uStack_7c = uStack_a0._4_4_;
          local_60 = *param_2;
          local_5c = param_2[1];
          FUN_14152e0f7(&local_70);
          local_58 = local_70;
          local_98 = local_b8;
          uStack_94 = uStack_b4;
          uStack_90 = uStack_b0;
          uStack_8c = uStack_ac;
          FUN_14152e0f7(&local_70);
          puVar8 = local_70;
          if (iStack_68 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          FUN_14170a85e(puVar8,&local_48);
          if (local_70 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (param_1[1] == 0) {
LAB_143efdeb0:
            lVar10 = 0;
          }
          else {
            uVar2 = *param_1;
            lVar10 = 0;
            if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
              plVar13 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if ((plVar13 == (longlong *)0x0) ||
                 ((*(uint *)(plVar13 + 2) != param_1[1] ||
                  ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143efdeb0;
              lVar10 = *plVar13;
            }
          }
          iVar6 = *(int *)(lVar10 + 0x1dc);
          *(int *)(lVar10 + 0x1dc) = iVar6 + 1;
          uVar7 = (ulonglong)*(int *)(lVar10 + 0x1d0);
          local_40 = uVar1;
          if ((longlong)uVar7 < 1) {
            *(int *)(lVar10 + 0x1dc) = iVar6;
          }
          else {
            plVar13 = (longlong *)(lVar10 + 0x1c8);
            bVar11 = false;
            do {
              lVar14 = uVar7 * 0x10 + -8;
              uVar15 = uVar7;
              while (((*(int *)(*plVar13 + lVar14) != 0 &&
                      (plVar3 = *(longlong **)(*plVar13 + -8 + lVar14), plVar3 != (longlong *)0x0))
                     && (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_60), cVar5 != '\0'))) {
                lVar14 = lVar14 + -0x10;
                bVar4 = uVar15 < 2;
                uVar15 = uVar15 - 1;
                if (bVar4) {
                  iVar6 = *(int *)(lVar10 + 0x1dc) + -1;
                  *(int *)(lVar10 + 0x1dc) = iVar6;
                  if (bVar11) goto LAB_143efde23;
                  goto LAB_143efde95;
                }
              }
              uVar7 = uVar15 - 1;
              bVar11 = true;
            } while (1 < uVar15);
            iVar6 = *(int *)(lVar10 + 0x1dc) + -1;
            *(int *)(lVar10 + 0x1dc) = iVar6;
LAB_143efde23:
            if (iVar6 < 1) {
              iVar6 = *(int *)(lVar10 + 0x1d0);
              iVar9 = iVar6;
              if (0 < iVar6) {
                iVar12 = 0;
                do {
                  if (((*(int *)(*plVar13 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                      (plVar3 = *(longlong **)(*plVar13 + (longlong)iVar12 * 0x10),
                      plVar3 == (longlong *)0x0)) ||
                     (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                    FUN_14005b288(plVar13,iVar12);
                    FUN_14005b248(plVar13);
                  }
                  else {
                    iVar12 = iVar12 + 1;
                  }
                  iVar9 = *(int *)(lVar10 + 0x1d0);
                } while (iVar12 < iVar9);
              }
              iVar12 = 2;
              if (2 < iVar9 * 2) {
                iVar12 = iVar9 * 2;
              }
              *(int *)(lVar10 + 0x1d8) = iVar12;
              if ((iVar12 < iVar6) && (*(int *)(lVar10 + 0x1d4) != iVar9)) {
                FUN_14045812c(plVar13);
              }
            }
          }
LAB_143efde95:
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar14 = lVar14 + 0x10;
      } while ((longlong)*(int *)(lVar10 + 0x1d0) * 0x10 != lVar14);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143efdf04 FUN_143efdf04 body=259 status=ok
// SIG undefined FUN_143efdf04(void)

void FUN_143efdf04(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((plVar2 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])))) {
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if ((longlong)*(int *)(lVar3 + 0x1e8) != 0) {
        lVar4 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x1e0) + 8 + lVar4) != 0) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x1e0) + lVar4) != 0)) {
            if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
              lVar3 = *plVar2;
            }
            else {
              lVar3 = 0;
            }
            local_20 = *param_2;
            local_1c = param_2[1];
            local_18 = param_2[2];
            local_14 = param_2[3];
            FUN_148a6777e(lVar3 + 0x1e0,&local_20);
            break;
          }
          lVar4 = lVar4 + 0x10;
        } while ((longlong)*(int *)(lVar3 + 0x1e8) * 0x10 != lVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143efe01a FUN_143efe01a body=283 status=ok
// SIG undefined FUN_143efe01a(void)

void FUN_143efe01a(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (uVar2 = *param_2, (*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar3;
      }
      else {
        lVar4 = 0;
      }
      if ((longlong)*(int *)(lVar4 + 0x200) != 0) {
        lVar5 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x1f8) + 8 + lVar5) != 0) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x1f8) + lVar5) != 0)) {
            if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar3;
            }
            else {
              lVar4 = 0;
            }
            local_48 = local_58;
            uStack_44 = uStack_54;
            uStack_40 = uStack_50;
            uStack_3c = uStack_4c;
            FUN_14152e0f7(local_30);
            FUN_148a67820(lVar4 + 0x1f8,uVar2,local_30);
            if (local_30[0] != 0) {
              FUN_1400020a8();
            }
            break;
          }
          lVar5 = lVar5 + 0x10;
        } while ((longlong)*(int *)(lVar4 + 0x200) * 0x10 != lVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efe148 FUN_143efe148 body=115 status=ok
// SIG undefined FUN_143efe148(void)

void FUN_143efe148(longlong *param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar1 = *param_4;
  uVar2 = *param_3;
  lVar4 = FUN_140773fe2();
  uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x108) + 0x2b0))
                    (*(longlong **)(lVar4 + 0x108),param_2,1);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  uVar3 = 4;
  if (uVar2 < 4) {
    uVar3 = uVar2;
  }
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143efe1ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,uVar5,uVar3,uVar1);
    return;
  }
  return;
}



// FUNCTION 143efe1d0 FUN_143efe1d0 body=41 status=ok
// SIG undefined FUN_143efe1d0(void)

void FUN_143efe1d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)(param_2 + 1) = 0;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 143efe1fa FUN_143efe1fa body=78 status=ok
// SIG undefined FUN_143efe1fa(void)

void FUN_143efe1fa(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efe32e FUN_143efe32e body=86 status=ok
// SIG undefined FUN_143efe32e(void)

void FUN_143efe32e(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efe468 FUN_143efe468 body=86 status=ok
// SIG undefined FUN_143efe468(void)

void FUN_143efe468(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efe5a2 FUN_143efe5a2 body=86 status=ok
// SIG undefined FUN_143efe5a2(void)

void FUN_143efe5a2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efe5f8 FUN_143efe5f8 body=111 status=ok
// SIG undefined FUN_143efe5f8(void)

void FUN_143efe5f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_18 = param_1[3];
  local_28 = &local_18;
  param_1[3] = 0;
  local_10 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*(longlong *)*param_1 + 0x2f0))
            ((longlong *)*param_1,*(undefined4 *)(param_1 + 1),param_1[2],uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efe6d2 FUN_143efe6d2 body=86 status=ok
// SIG undefined FUN_143efe6d2(void)

void FUN_143efe6d2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efe728 FUN_143efe728 body=29 status=ok
// SIG undefined FUN_143efe728(void)

undefined8 FUN_143efe728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143efe75a FUN_143efe75a body=93 status=ok
// SIG undefined FUN_143efe75a(void)

void FUN_143efe75a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4dabc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4dab50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143efe7b8 FUN_143efe7b8 body=93 status=ok
// SIG undefined FUN_143efe7b8(void)

void FUN_143efe7b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4dabc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4dab50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143efe816 FUN_143efe816 body=126 status=ok
// SIG undefined FUN_143efe816(void)

void FUN_143efe816(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4dabc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4dab50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143efe885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143efe8ac FUN_143efe8ac body=34 status=ok
// SIG undefined FUN_143efe8ac(void)

undefined8 FUN_143efe8ac(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x2b8) != 0) {
    FUN_143ef21ae(param_2,*(undefined4 *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 143efe8ce FUN_143efe8ce body=304 status=ok
// SIG undefined FUN_143efe8ce(void)

void FUN_143efe8ce(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_3;
  lVar5 = (**(code **)(**(longlong **)(*param_1 + 0x108) + 0x2b0))
                    (*(longlong **)(*param_1 + 0x108),param_2,1);
  if (*(int *)(lVar5 + 0x38) == -1) {
    *(int *)(lVar5 + 0x38) = (int)param_1[1];
  }
  if (*(longlong *)(lVar5 + 0x28) == 0) {
    FUN_140a67f50(&local_40,(int)param_1[1]);
    plVar3 = local_38;
    if ((undefined8 *)(lVar5 + 0x28) != &local_40) {
      *(undefined8 *)(lVar5 + 0x28) = local_40;
      local_40 = 0;
      plVar4 = *(longlong **)(lVar5 + 0x30);
      if (local_38 != plVar4) {
        local_38 = (longlong *)0x0;
        *(longlong **)(lVar5 + 0x30) = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    plVar3 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (((int)param_1[4] != 0) && (plVar3 = (longlong *)param_1[3], plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))
              (plVar3,lVar5,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efea6a FUN_143efea6a body=86 status=ok
// SIG undefined FUN_143efea6a(void)

void FUN_143efea6a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efeac0 FUN_143efeac0 body=111 status=ok
// SIG undefined FUN_143efeac0(void)

void FUN_143efeac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_18 = param_1[3];
  local_28 = &local_18;
  param_1[3] = 0;
  local_10 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*(longlong *)*param_1 + 0x2f0))
            ((longlong *)*param_1,*(undefined4 *)(param_1 + 1),param_1[2],uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efeb9a FUN_143efeb9a body=86 status=ok
// SIG undefined FUN_143efeb9a(void)

void FUN_143efeb9a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efebf0 FUN_143efebf0 body=100 status=ok
// SIG undefined FUN_143efebf0(void)

void FUN_143efebf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  local_18 = param_1[1];
  param_1[1] = 0;
  local_10 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)(param_1 + 2) = 0;
  (**(code **)(*(longlong *)*param_1 + 0x2f8))((longlong *)*param_1,uVar1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efecb0 FUN_143efecb0 body=86 status=ok
// SIG undefined FUN_143efecb0(void)

void FUN_143efecb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efed54 FUN_143efed54 body=140 status=ok
// SIG undefined FUN_143efed54(void)

void FUN_143efed54(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x108);
  lVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2,*param_2,0);
  if (lVar3 != 0) {
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    FUN_14152e0f7(local_30);
    FUN_148a67bd0(lVar1 + 0x40,lVar3,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efedf4 FUN_143efedf4 body=516 status=ok
// SIG undefined FUN_143efedf4(void)

void FUN_143efedf4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(undefined4 *)(param_2 + 0x40);
  uStack_44 = *(undefined4 *)(param_2 + 0x44);
  uStack_40 = *(undefined4 *)(param_2 + 0x48);
  uStack_3c = *(undefined4 *)(param_2 + 0x4c);
  FUN_14152e0f7(&local_38);
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x100) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x100) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x100) = local_38;
    local_38 = 0;
    *(undefined4 *)(lVar1 + 0x108) = local_30;
    *(undefined4 *)(lVar1 + 0x10c) = local_2c;
  }
  local_58 = *(undefined4 *)(param_2 + 0x60);
  uStack_54 = *(undefined4 *)(param_2 + 100);
  uStack_50 = *(undefined4 *)(param_2 + 0x68);
  uStack_4c = *(undefined4 *)(param_2 + 0x6c);
  FUN_14152e0f7(&local_38);
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x228) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x228) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x228) = local_38;
    local_38 = 0;
    *(undefined4 *)(lVar1 + 0x230) = local_30;
    *(undefined4 *)(lVar1 + 0x234) = local_2c;
  }
  *(undefined4 *)(*param_1 + 0x248) = *(undefined4 *)(param_2 + 0x34);
  local_68 = *(undefined4 *)(param_2 + 0x70);
  uStack_64 = *(undefined4 *)(param_2 + 0x74);
  uStack_60 = *(undefined4 *)(param_2 + 0x78);
  uStack_5c = *(undefined4 *)(param_2 + 0x7c);
  FUN_14152e0f7(&local_38);
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x238) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x238) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x238) = local_38;
    local_38 = 0;
    *(undefined4 *)(lVar1 + 0x240) = local_30;
    *(undefined4 *)(lVar1 + 0x244) = local_2c;
  }
  local_78 = *(undefined4 *)(param_2 + 0x50);
  uStack_74 = *(undefined4 *)(param_2 + 0x54);
  uStack_70 = *(undefined4 *)(param_2 + 0x58);
  uStack_6c = *(undefined4 *)(param_2 + 0x5c);
  FUN_14152e0f7(&local_38);
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0xf0) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0xf0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0xf0) = local_38;
    *(undefined4 *)(lVar1 + 0xf8) = local_30;
    *(undefined4 *)(lVar1 + 0xfc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efeffa FUN_143efeffa body=295 status=ok
// SIG undefined FUN_143efeffa(void)

void FUN_143efeffa(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_40 = *(undefined4 *)(param_2 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_14152e0f7(&local_30);
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x250) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x250) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x250) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar1 + 600) = local_28;
    *(undefined4 *)(lVar1 + 0x25c) = local_24;
  }
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  FUN_14152e0f7(&local_30);
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x260) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x260) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x260) = local_30;
    *(undefined4 *)(lVar1 + 0x268) = local_28;
    *(undefined4 *)(lVar1 + 0x26c) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eff134 FUN_143eff134 body=29 status=ok
// SIG undefined FUN_143eff134(void)

undefined8 FUN_143eff134(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eff166 FUN_143eff166 body=85 status=ok
// SIG undefined FUN_143eff166(void)

void FUN_143eff166(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4daca0;
  return;
}



// FUNCTION 143eff1bc FUN_143eff1bc body=85 status=ok
// SIG undefined FUN_143eff1bc(void)

void FUN_143eff1bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4daf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4daca0;
  return;
}



// FUNCTION 143eff212 FUN_143eff212 body=118 status=ok
// SIG undefined FUN_143eff212(void)

void FUN_143eff212(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4daf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4daca0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eff279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143eff28e FUN_143eff28e body=29 status=ok
// SIG undefined FUN_143eff28e(void)

undefined8 FUN_143eff28e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eff42a FUN_143eff42a body=93 status=ok
// SIG undefined FUN_143eff42a(void)

void FUN_143eff42a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4dad10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143eff488 FUN_143eff488 body=93 status=ok
// SIG undefined FUN_143eff488(void)

void FUN_143eff488(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4dad10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143eff4e6 FUN_143eff4e6 body=126 status=ok
// SIG undefined FUN_143eff4e6(void)

void FUN_143eff4e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4dad10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eff555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143eff564 FUN_143eff564 body=65 status=ok
// SIG undefined FUN_143eff564(void)

void FUN_143eff564(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143eff6be(param_1 + 0x20,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eff5a6 FUN_143eff5a6 body=278 status=ok
// SIG undefined FUN_143eff5a6(void)

undefined8 FUN_143eff5a6(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143eff6b6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143eff6b6;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143eff6b6:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143eff66a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143eff6be(param_1 + 0x20,&local_29);
      uVar6 = 1;
      goto LAB_143eff66a;
    }
  }
  uVar6 = 0;
LAB_143eff66a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eff6be FUN_143eff6be body=132 status=ok
// SIG undefined FUN_143eff6be(void)

void FUN_143eff6be(longlong *param_1,char *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x2b8) != 0) {
    if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    FUN_1400b22c2(local_28,"invalid-auth-token");
    FUN_143ef2136(lVar1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eff754 FUN_143eff754 body=458 status=ok
// SIG undefined FUN_143eff754(void)

void FUN_143eff754(longlong *param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [40];
  void *local_90;
  void *local_88;
  ulonglong uStack_80;
  void **local_78;
  code *local_70;
  undefined8 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_70 = FUN_143f00b4a;
  local_78 = &local_88;
  local_68 = &local_78;
  bifrost::users::shiftId(param_2,&local_70);
  uVar6 = uStack_80;
  local_90 = local_88;
  iVar4 = (int)uStack_80;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_70 = FUN_143f00bd4;
  local_78 = &local_88;
  local_68 = &local_78;
  bifrost::users::displayName(param_2,&local_70);
  uVar7 = uStack_80;
  _Src = local_88;
  iVar5 = (int)uStack_80;
  iVar1 = *(int *)(lVar2 + 0x360);
  *(uint *)(lVar2 + 0x360) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x364) < iVar1 + 1U) {
    FUN_145c69d66((longlong *)(lVar2 + 0x358),iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x358);
  lVar9 = (longlong)iVar1 * 0x40;
  lVar2 = lVar3 + lVar9;
  *(undefined4 *)(lVar3 + lVar9) = param_2;
  *(undefined8 *)(lVar3 + 8 + lVar9) = 0;
  *(int *)(lVar3 + 0x10 + lVar9) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(lVar2 + 0x14) = 0;
    pvVar8 = local_90;
  }
  else {
    puVar10 = (undefined8 *)(lVar9 + lVar3 + 8);
    FUN_1446dd670(puVar10,uVar6 & 0xffffffff,0);
    pvVar8 = local_90;
    memcpy((void *)*puVar10,local_90,(longlong)iVar4 * 2);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(int *)(lVar2 + 0x20) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(lVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(lVar2 + 0x18),uVar7 & 0xffffffff,0);
    memcpy(*(void **)(lVar2 + 0x18),_Src,(longlong)iVar5 * 2);
  }
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(ushort *)(lVar2 + 0x38) = param_3 & 0xff | 0x300;
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
  if (pvVar8 != (void *)0x0) {
    FUN_1400020a8(pvVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eff920 FUN_143eff920 body=137 status=ok
// SIG undefined FUN_143eff920(void)

void FUN_143eff920(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eff9aa FUN_143eff9aa body=200 status=ok
// SIG undefined FUN_143eff9aa(void)

void FUN_143eff9aa(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  int local_38;
  undefined1 local_34;
  undefined1 local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (longlong)*(int *)(*param_1 + 0x30);
  if (lVar5 != 0) {
    uVar3 = *param_3;
    cVar1 = *(char *)((longlong)param_3 + 0xc);
    uVar2 = *(undefined1 *)(param_3 + 1);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x28) + lVar6);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2b8) == param_2)) {
        FUN_1458ee840(lVar4);
        local_3c = (undefined4)uVar3;
        local_38 = (int)((ulonglong)uVar3 >> 0x20);
        local_33 = cVar1 != '\0';
        if ((bool)local_33) {
          local_34 = uVar2;
        }
        FUN_148a67e9a(lVar4 + 0x140,lVar4,&local_3c);
        if (local_38 == 1) {
          *(undefined1 *)(lVar4 + 0x368) = 1;
        }
        break;
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143effa86 FUN_143effa86 body=71 status=ok
// SIG undefined FUN_143effa86(void)

void FUN_143effa86(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efface FUN_143efface body=66 status=ok
// SIG undefined FUN_143efface(void)

void FUN_143efface(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (*(code *)*param_1)(param_1[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143effb12 FUN_143effb12 body=66 status=ok
// SIG undefined FUN_143effb12(void)

void FUN_143effb12(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (*(code *)*param_1)(param_1[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143effb56 FUN_143effb56 body=275 status=ok
// SIG undefined FUN_143effb56(void)

void FUN_143effb56(uint *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar9 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)param_2[1];
  local_48 = 0;
  uStack_40 = 0;
  if (puVar9 != puVar2) {
    do {
      uVar4 = uStack_40;
      uVar1 = *puVar9;
      lVar8 = (longlong)(int)uStack_40;
      uVar5 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
      if (uStack_40._4_4_ < uVar5) {
        FUN_14657e454(&local_48,uVar4 & 0xffffffff);
      }
      *(undefined4 *)(local_48 + lVar8 * 4) = uVar1;
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
  }
  if ((((((char)param_1[8] != '\0') && (param_1[1] != 0)) && (uVar5 = *param_1, -1 < (int)uVar5)) &&
      (((int)uVar5 < DAT_14c9647dc &&
       (puVar7 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       puVar7 != (undefined8 *)0x0)))) &&
     ((*(uint *)(puVar7 + 2) == param_1[1] && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar7;
    }
    else {
      uVar6 = 0;
    }
    FUN_1458ee840(uVar6);
  }
  if ((param_1[6] != 0) && (plVar3 = *(longlong **)(param_1 + 4), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143effc6a FUN_143effc6a body=65 status=ok
// SIG undefined FUN_143effc6a(void)

void FUN_143effc6a(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_14657ea26(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return;
}



// FUNCTION 143effcac FUN_143effcac body=133 status=ok
// SIG undefined FUN_143effcac(void)

void FUN_143effcac(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  plVar1 = param_2 + 2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (*(int *)(param_2 + 3) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 3) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143effd32 FUN_143effd32 body=86 status=ok
// SIG undefined FUN_143effd32(void)

void FUN_143effd32(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143effd88 FUN_143effd88 body=111 status=ok
// SIG undefined FUN_143effd88(void)

undefined8 * FUN_143effd88(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4dae00;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143effdd9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143effdd9:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143effe0c FUN_143effe0c body=115 status=ok
// SIG undefined FUN_143effe0c(void)

void FUN_143effe0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4dae00;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_141502386(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 143effe80 FUN_143effe80 body=115 status=ok
// SIG undefined FUN_143effe80(void)

void FUN_143effe80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4dae00;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_141502386(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 143effef4 FUN_143effef4 body=149 status=ok
// SIG undefined FUN_143effef4(void)

void FUN_143effef4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4da840;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4dae00;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_141502386(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143efff7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143efff94 FUN_143efff94 body=20 status=ok
// SIG undefined FUN_143efff94(void)

undefined1 FUN_143efff94(longlong param_1)

{
  FUN_143efffa8(param_1 + 0x18);
  return 1;
}



// FUNCTION 143efffa8 FUN_143efffa8 body=357 status=ok
// SIG undefined FUN_143efffa8(void)

/* WARNING: Removing unreachable block (ram,0x000143f0008b) */

void FUN_143efffa8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  lVar3 = param_2[1];
  local_a0 = param_1;
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      local_98 = 0;
      uStack_90 = 0;
      local_78 = &local_98;
      local_70 = FUN_143f00bd4;
      local_68 = &local_78;
      bifrost::users::displayName(*(undefined4 *)(lVar1 + lVar6),&local_70);
      uVar4 = uStack_80;
      lVar7 = (longlong)(int)uStack_80;
      uVar5 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
      if (uStack_80._4_4_ < uVar5) {
        FUN_1447a1bd6(&local_88,uVar4 & 0xffffffff);
      }
      lVar7 = lVar7 * 0x10;
      *(undefined8 *)(local_88 + lVar7) = 0;
      *(undefined8 *)(local_88 + lVar7) = local_98;
      *(undefined4 *)(local_88 + 8 + lVar7) = (undefined4)uStack_90;
      *(undefined4 *)(local_88 + 0xc + lVar7) = uStack_90._4_4_;
      uStack_90 = 0;
      local_98 = 0;
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar6);
  }
  plVar2 = (longlong *)*local_a0;
  if (plVar2 != (longlong *)0x0 && (int)local_a0[1] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_88);
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0010e FUN_143f0010e body=335 status=ok
// SIG undefined FUN_143f0010e(void)

void FUN_143f0010e(uint *param_1,char *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 uStack_50;
  code **local_40;
  code *local_38;
  longlong **local_30;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == '\0') {
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_1a = 0x30;
    FUN_1400020e8(&local_58,&local_1a,1);
  }
  else {
    puVar2 = (undefined4 *)*param_3;
    if ((undefined4 *)param_3[1] <= puVar2) {
      FUN_140056680(&local_38,&DAT_149dfb77a);
      pcVar4 = local_38;
      if ((param_1[8] != 0) && (plVar3 = *(longlong **)(param_1 + 6), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
        pcVar4 = local_38;
      }
      goto LAB_143f0021b;
    }
    if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)
         ) && ((puVar6 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               puVar6 != (undefined8 *)0x0 && (*(uint *)(puVar6 + 2) == param_1[1])))) &&
       ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = 0;
      }
      FUN_1458ee840(uVar5);
    }
    local_40 = &local_58;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_30 = (longlong **)&local_40;
    local_38 = FUN_143f00b4a;
    bifrost::users::shiftId(*puVar2);
  }
  pcVar4 = local_58;
  if ((param_1[8] != 0) && (plVar3 = *(longlong **)(param_1 + 6), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_58);
    pcVar4 = local_58;
  }
LAB_143f0021b:
  if (pcVar4 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0025e FUN_143f0025e body=132 status=ok
// SIG undefined FUN_143f0025e(void)

void FUN_143f0025e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_146281d3c(param_1 + 3,param_2 + 3);
  return;
}



// FUNCTION 143f002e2 FUN_143f002e2 body=174 status=ok
// SIG undefined FUN_143f002e2(void)

void FUN_143f002e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f00390 FUN_143f00390 body=103 status=ok
// SIG undefined FUN_143f00390(void)

void FUN_143f00390(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f003d4;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f003d4:
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f003f8 FUN_143f003f8 body=345 status=ok
// SIG undefined FUN_143f003f8(void)

/* WARNING: Removing unreachable block (ram,0x000143f004d4) */

void FUN_143f003f8(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = param_1;
  if (puVar6 != puVar1) {
    do {
      local_98 = 0;
      uStack_90 = 0;
      local_78 = &local_98;
      local_70 = FUN_143f00b4a;
      local_68 = &local_78;
      bifrost::users::shiftId(*puVar6,&local_70);
      uVar3 = uStack_80;
      lVar5 = (longlong)(int)uStack_80;
      uVar4 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
      if (uStack_80._4_4_ < uVar4) {
        FUN_1447a1bd6(&local_88,uVar3 & 0xffffffff);
      }
      lVar5 = lVar5 * 0x10;
      *(undefined8 *)(local_88 + lVar5) = 0;
      *(undefined8 *)(local_88 + lVar5) = local_98;
      *(undefined4 *)(local_88 + 8 + lVar5) = (undefined4)uStack_90;
      *(undefined4 *)(local_88 + 0xc + lVar5) = uStack_90._4_4_;
      uStack_90 = 0;
      local_98 = 0;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  if ((*(int *)(local_a0 + 0x10) != 0) &&
     (plVar2 = *(longlong **)(local_a0 + 8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_88);
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f005a8 FUN_143f005a8 body=86 status=ok
// SIG undefined FUN_143f005a8(void)

void FUN_143f005a8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f005fe FUN_143f005fe body=389 status=ok
// SIG undefined FUN_143f005fe(void)

void FUN_143f005fe(uint *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = param_1[1];
  if (((uVar1 != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 0x10) == uVar1)) {
      uVar3 = *param_3;
      if (((*(uint *)(lVar5 + 8) & 0x10200000) == 0) && (*param_2 != '\0')) {
        local_88 = *(longlong *)(param_1 + 2);
        param_1[2] = 0;
        param_1[3] = 0;
        uVar4 = param_1[4];
        param_1[4] = 0;
        local_48 = FUN_143f00784;
        local_40 = &LAB_143f007f6;
        local_38 = &LAB_143f0080a;
        local_30 = FUN_143f00834;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
        if (((((int)uVar2 < DAT_14c9647dc) &&
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0)) && (*(uint *)(plVar6 + 2) == uVar1)) &&
           ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
          lVar5 = *plVar6;
        }
        else {
          lVar5 = 0;
        }
        bifrost::users::compatibleServiceId(*(undefined8 *)(lVar5 + 0x2b8),uVar3,&local_88);
        goto LAB_143f0075b;
      }
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  if ((param_1[4] != 0) && (plVar6 = *(longlong **)(param_1 + 2), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_88);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
LAB_143f0075b:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f00784 FUN_143f00784 body=112 status=ok
// SIG undefined FUN_143f00784(void)

void FUN_143f00784(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(local_20);
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))(param_1,local_20);
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f00834 FUN_143f00834 body=79 status=ok
// SIG undefined FUN_143f00834(void)

void FUN_143f00834(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f00884 FUN_143f00884 body=121 status=ok
// SIG undefined FUN_143f00884(void)

void FUN_143f00884(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_146281d3c(param_1 + 1,param_2 + 1);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 143f008fe FUN_143f008fe body=211 status=ok
// SIG undefined FUN_143f008fe(void)

void FUN_143f008fe(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  param_1[3] = 0;
  iVar2 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar2,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar2 * 2);
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_2 + 1;
  if (*(int *)(param_2 + 2) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 2) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f009d2 FUN_143f009d2 body=100 status=ok
// SIG undefined FUN_143f009d2(void)

void FUN_143f009d2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f00a36 FUN_143f00a36 body=137 status=ok
// SIG undefined FUN_143f00a36(void)

void FUN_143f00a36(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f00ac0 FUN_143f00ac0 body=137 status=ok
// SIG undefined FUN_143f00ac0(void)

void FUN_143f00ac0(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f00b4a FUN_143f00b4a body=137 status=ok
// SIG undefined FUN_143f00b4a(void)

void FUN_143f00b4a(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f00bd4 FUN_143f00bd4 body=137 status=ok
// SIG undefined FUN_143f00bd4(void)

void FUN_143f00bd4(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f00c5e FUN_143f00c5e body=252 status=ok
// SIG undefined FUN_143f00c5e(void)

void FUN_143f00c5e(uint *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
          (*(uint *)(lVar3 + 0x10) == param_1[1])))) && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0))
  {
    if (*param_2 == 0) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      FUN_14152e0f7(local_28);
      if ((param_1[4] != 0) && (plVar2 = *(longlong **)(param_1 + 2), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x60))(plVar2,local_28,0);
      }
    }
    else {
      local_28[0] = 0;
      local_28[1] = 0;
      if ((param_1[4] == 0) || (plVar2 = *(longlong **)(param_1 + 2), plVar2 == (longlong *)0x0))
      goto LAB_143f00cc3;
      (**(code **)(*plVar2 + 0x60))(plVar2,local_28);
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_143f00cc3:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f00db6 FUN_143f00db6 body=86 status=ok
// SIG undefined FUN_143f00db6(void)

void FUN_143f00db6(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f00e0c FUN_143f00e0c body=252 status=ok
// SIG undefined FUN_143f00e0c(void)

void FUN_143f00e0c(uint *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
          (*(uint *)(lVar3 + 0x10) == param_1[1])))) && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0))
  {
    if (*param_2 == 0) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      FUN_14152e0f7(local_28);
      if ((param_1[8] != 0) && (plVar2 = *(longlong **)(param_1 + 6), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x60))(plVar2,local_28,0);
      }
    }
    else {
      local_28[0] = 0;
      local_28[1] = 0;
      if ((param_1[8] == 0) || (plVar2 = *(longlong **)(param_1 + 6), plVar2 == (longlong *)0x0))
      goto LAB_143f00e71;
      (**(code **)(*plVar2 + 0x60))(plVar2,local_28);
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_143f00e71:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f00f0a FUN_143f00f0a body=132 status=ok
// SIG undefined FUN_143f00f0a(void)

void FUN_143f00f0a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_14657eaa4(param_1 + 3,param_2 + 3);
  return;
}



// FUNCTION 143f00f8e FUN_143f00f8e body=174 status=ok
// SIG undefined FUN_143f00f8e(void)

void FUN_143f00f8e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f0103c FUN_143f0103c body=103 status=ok
// SIG undefined FUN_143f0103c(void)

void FUN_143f0103c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f01080;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f01080:
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f010a4 FUN_143f010a4 body=414 status=ok
// SIG undefined FUN_143f010a4(void)

void FUN_143f010a4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_88 = *(undefined4 *)(param_2 + 2);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_80 = *(undefined4 *)(param_2 + 3);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_78 = *(undefined4 *)(param_2 + 4);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_70 = *(undefined4 *)(param_2 + 5);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_14152e0f7(&local_30);
  plVar1 = (longlong *)*param_1;
  if (plVar1 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_30;
    local_30 = 0;
    *(undefined4 *)(plVar1 + 1) = local_28;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_24;
  }
  local_58 = local_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  FUN_14152e0f7(&local_30);
  lVar2 = *param_1;
  if ((longlong *)(lVar2 + 0x10) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar2 + 0x10) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar2 + 0x18) = local_28;
    *(undefined4 *)(lVar2 + 0x1c) = local_24;
  }
  local_68 = local_78;
  uStack_64 = uStack_74;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  FUN_14152e0f7(&local_30);
  lVar2 = *param_1;
  if ((longlong *)(lVar2 + 0x20) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar2 + 0x20) = local_30;
    *(undefined4 *)(lVar2 + 0x28) = local_28;
    *(undefined4 *)(lVar2 + 0x2c) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f01244 FUN_143f01244 body=1683 status=ok
// SIG undefined FUN_143f01244(void)

void FUN_143f01244(uint *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  undefined1 auStack_1c8 [36];
  int local_1a4;
  longlong *local_1a0;
  uint *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((((param_1[1] == 0) || (uVar6 = *param_1, (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6))
     || ((plVar7 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar7 == (longlong *)0x0 || (*(uint *)(plVar7 + 2) != param_1[1])))) goto LAB_143f012c0;
  plVar16 = (longlong *)*param_3;
  plVar3 = (longlong *)param_3[1];
  iVar13 = *param_2;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) goto LAB_143f012c0;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar8 = *plVar7;
  }
  else {
    lVar8 = 0;
  }
  iVar1 = *(int *)(lVar8 + 0x37c);
  FUN_145be9a8c(*(undefined8 *)(lVar8 + 0x370),*(undefined4 *)(lVar8 + 0x378));
  *(undefined4 *)(lVar8 + 0x378) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar8 + 0x37c) != 0)) {
    FUN_148a67e2e(lVar8 + 0x370,0);
  }
  uVar6 = param_1[1];
  if (uVar6 == 0) {
LAB_143f018a2:
    lVar8 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar8 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((*(uint *)(plVar7 + 2) != uVar6 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_143f018a2;
      lVar8 = *plVar7;
    }
  }
  uVar9 = ((longlong)plVar3 - (longlong)plVar16 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if ((int)uVar9 < 0) {
LAB_143f018d1:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar9 & 0xffffffff);
  }
  if (*(int *)(lVar8 + 0x37c) < (int)uVar9) {
    FUN_148a67e2e(lVar8 + 0x370);
    uVar6 = param_1[1];
  }
  if (uVar6 == 0) {
LAB_143f018a9:
    lVar8 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar8 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((*(uint *)(plVar7 + 2) != uVar6 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_143f018a9;
      lVar8 = *plVar7;
    }
  }
  if (plVar16 != plVar3) {
    local_1a0 = (longlong *)(lVar8 + 0x370);
    local_1a4 = iVar13;
    local_198 = param_1;
    local_190 = lVar8;
    local_188 = plVar3;
    do {
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_88 = 0;
      FUN_148a68200(&local_178,&local_d8);
      FUN_148a5c554(&local_d8);
      local_e8 = 0;
      uStack_e0 = 0;
      puVar12 = (undefined4 *)*plVar16;
      puVar15 = (undefined4 *)plVar16[1];
      uVar9 = ((longlong)puVar15 - (longlong)puVar12 >> 3) * -0x5555555555555555;
      if ((int)uVar9 < 0) goto LAB_143f018d1;
      if ((int)uVar9 != 0) {
        FUN_148a683a6(&local_e8);
        puVar12 = (undefined4 *)*plVar16;
        puVar15 = (undefined4 *)plVar16[1];
      }
      for (; local_180 = plVar16, puVar12 != puVar15; puVar12 = puVar12 + 6) {
        uVar10 = *(undefined8 *)(puVar12 + 4);
        local_78 = *puVar12;
        uStack_74 = puVar12[1];
        uStack_70 = puVar12[2];
        uStack_6c = puVar12[3];
        FUN_14152e0f7(&local_d8,&local_78);
        lVar8 = local_d8;
        uVar9 = uStack_e0;
        uVar4 = (undefined4)uStack_d0;
        uVar5 = uStack_d0._4_4_;
        lVar14 = (longlong)(int)uStack_e0;
        uVar6 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
        if (uStack_e0._4_4_ < uVar6) {
          FUN_148a6840e(&local_e8,uVar9 & 0xffffffff);
        }
        *(longlong *)(local_e8 + lVar14 * 0x18) = lVar8;
        *(undefined4 *)(local_e8 + 8 + lVar14 * 0x18) = uVar4;
        *(undefined4 *)(local_e8 + 0xc + lVar14 * 0x18) = uVar5;
        *(undefined8 *)(local_e8 + 0x10 + lVar14 * 0x18) = uVar10;
        plVar16 = local_180;
      }
      FUN_148a682f6(&local_148,&local_e8);
      plVar16 = local_180;
      local_78 = (undefined4)local_180[5];
      uStack_74 = *(undefined4 *)((longlong)local_180 + 0x2c);
      uStack_70 = (undefined4)local_180[6];
      uStack_6c = *(undefined4 *)((longlong)local_180 + 0x34);
      FUN_14152e0f7(&local_d8,&local_78);
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      local_158 = local_d8;
      uStack_150 = uStack_d0;
      local_138 = plVar16[2];
      local_f8 = (undefined4)plVar16[3];
      uStack_f4 = *(undefined4 *)((longlong)plVar16 + 0x1c);
      uStack_f0 = (undefined4)plVar16[4];
      uStack_ec = *(undefined4 *)((longlong)plVar16 + 0x24);
      FUN_14152e0f7(&local_d8,&local_f8);
      lVar8 = local_190;
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      local_168 = local_d8;
      uStack_160 = uStack_d0;
      local_108 = (undefined4)plVar16[7];
      uStack_104 = *(undefined4 *)((longlong)plVar16 + 0x3c);
      uStack_100 = (undefined4)plVar16[8];
      uStack_fc = *(undefined4 *)((longlong)plVar16 + 0x44);
      FUN_14152e0f7(&local_d8,&local_108);
      plVar7 = local_188;
      if (local_130 != 0) {
        FUN_1400020a8();
      }
      local_130 = local_d8;
      uStack_128 = uStack_d0;
      local_118 = (undefined4)plVar16[0xb];
      uStack_114 = *(undefined4 *)((longlong)plVar16 + 0x5c);
      uStack_110 = (undefined4)plVar16[0xc];
      uStack_10c = *(undefined4 *)((longlong)plVar16 + 100);
      FUN_14152e0f7(&local_d8,&local_118);
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      local_178 = local_d8;
      uStack_170 = uStack_d0;
      FUN_148a5c5b9(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      iVar13 = *(int *)(lVar8 + 0x378);
      *(uint *)(lVar8 + 0x378) = iVar13 + 1U;
      if (*(uint *)(lVar8 + 0x37c) < iVar13 + 1U) {
        FUN_148a68170(local_1a0,iVar13);
      }
      lVar8 = *local_1a0;
      lVar14 = (longlong)iVar13 * 0x58;
      *(undefined8 *)(lVar8 + lVar14) = 0;
      *(longlong *)(lVar8 + lVar14) = local_178;
      local_178 = 0;
      *(undefined4 *)(lVar8 + 8 + lVar14) = (undefined4)uStack_170;
      *(undefined4 *)(lVar8 + 0xc + lVar14) = uStack_170._4_4_;
      uStack_170 = 0;
      *(undefined8 *)(lVar8 + 0x10 + lVar14) = 0;
      *(longlong *)(lVar8 + 0x10 + lVar14) = local_168;
      local_168 = 0;
      *(undefined4 *)(lVar8 + 0x18 + lVar14) = (undefined4)uStack_160;
      *(undefined4 *)(lVar8 + 0x1c + lVar14) = uStack_160._4_4_;
      uStack_160 = 0;
      *(undefined8 *)(lVar8 + 0x20 + lVar14) = 0;
      *(longlong *)(lVar8 + 0x20 + lVar14) = local_158;
      local_158 = 0;
      *(undefined4 *)(lVar8 + 0x28 + lVar14) = (undefined4)uStack_150;
      *(undefined4 *)(lVar8 + 0x2c + lVar14) = uStack_150._4_4_;
      uStack_150 = 0;
      *(undefined8 *)(lVar8 + 0x30 + lVar14) = 0;
      *(undefined8 *)(lVar8 + 0x30 + lVar14) = local_148;
      local_148 = 0;
      *(undefined4 *)(lVar8 + 0x38 + lVar14) = (undefined4)uStack_140;
      *(undefined4 *)(lVar8 + 0x3c + lVar14) = uStack_140._4_4_;
      uStack_140 = 0;
      *(longlong *)(lVar8 + 0x40 + lVar14) = local_138;
      *(undefined8 *)(lVar8 + 0x48 + lVar14) = 0;
      *(longlong *)(lVar8 + 0x48 + lVar14) = local_130;
      local_130 = 0;
      *(undefined4 *)(lVar8 + 0x50 + lVar14) = (undefined4)uStack_128;
      *(undefined4 *)(lVar8 + 0x54 + lVar14) = uStack_128._4_4_;
      uStack_128 = 0;
      FUN_148a5c554(&local_178);
      plVar16 = plVar16 + 0xd;
    } while (plVar16 != plVar7);
    uVar6 = local_198[1];
    param_1 = local_198;
    iVar13 = local_1a4;
  }
  if (uVar6 == 0) {
LAB_143f018b0:
    uVar10 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar11 + 2) != uVar6 || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))))
      goto LAB_143f018b0;
      uVar10 = *puVar11;
    }
  }
  if ((param_1[4] != 0) && (plVar7 = *(longlong **)(param_1 + 2), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))(plVar7,uVar10,iVar13 == 0);
  }
LAB_143f012c0:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f01934 FUN_143f01934 body=86 status=ok
// SIG undefined FUN_143f01934(void)

void FUN_143f01934(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f0198a FUN_143f0198a body=1949 status=ok
// SIG undefined FUN_143f0198a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f0198a(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  code *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446f470e(&DAT_14cb966b4,L"UNSET",1);
  local_88 = (code *)0x14b4d9f1c;
  local_80 = 0xd;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96770 = (ulonglong)uVar1;
  local_88 = (code *)0x14b4d9f2a;
  local_80 = 0xe;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb96778 = (ulonglong)uVar1;
  local_88 = (code *)0x14b4d9f39;
  local_80 = 0xc;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96780 = (ulonglong)uVar1;
  local_88 = (code *)0x14a1843b9;
  local_80 = 9;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96788 = (ulonglong)uVar1;
  DAT_14cb96790._0_1_ = 1;
  local_88 = (code *)0x14a1843c3;
  local_80 = 9;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96798 = (ulonglong)uVar1;
  DAT_14cb967a0._0_1_ = 1;
  local_88 = (code *)0x14a1843cd;
  local_80 = 0xb;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb967a8 = (ulonglong)uVar1;
  DAT_14cb967b0._0_1_ = 1;
  local_88 = (code *)0x14b4d9f46;
  local_80 = 0xc;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb967b8 = (ulonglong)uVar1;
  DAT_14cb967c0._0_1_ = 1;
  local_88 = (code *)0x14b41030d;
  local_80 = 0x12;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb967c8 = (ulonglong)uVar1;
  DAT_14cb967d0 = 1;
  local_88 = (code *)0x14b4d9f53;
  local_80 = 0x12;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb967d8 = (ulonglong)uVar1;
  local_88 = (code *)0x14a1843d9;
  local_80 = 8;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb967e0 = (ulonglong)uVar1;
  DAT_14cb967e8._0_1_ = 1;
  local_88 = (code *)&DAT_14b3fdf44;
  local_80 = 4;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb967f0 = (ulonglong)uVar1;
  DAT_14cb967f8._0_1_ = 1;
  local_88 = (code *)0x14b4d9f66;
  local_80 = 0xb;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96800 = (ulonglong)uVar1;
  DAT_14cb96808._0_1_ = 1;
  local_88 = (code *)&DAT_14b4d9f72;
  local_80 = 3;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96810 = (ulonglong)uVar1;
  local_88 = (code *)&DAT_14b3f1684;
  local_80 = 3;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96818 = (ulonglong)uVar1;
  local_88 = (code *)&DAT_14b3f2748;
  local_80 = 3;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb96820 = (ulonglong)uVar1;
  local_78 = 0;
  local_68 = &PTR_LAB_14b4daeb0;
  local_60 = FUN_143ef791c;
  local_88 = (code *)&LAB_148a660f2;
  local_98 = "frame";
  local_90 = 5;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96870,uVar2,0x6f,&local_88);
  atexit(FUN_143eeef80);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4da820;
  local_60 = (code *)&LAB_143ef79ca;
  local_88 = FUN_148a6611a;
  local_98 = "game";
  local_90 = 4;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb968d0,uVar2,0x6f,&local_88);
  atexit(FUN_143eeefc7);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4da820;
  local_60 = (code *)&LAB_143ef79f2;
  local_88 = FUN_148a6611a;
  local_98 = "render";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96930,uVar2,0x6f,&local_88);
  atexit(FUN_143eef00e);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4da820;
  local_60 = (code *)&LAB_143ef7a1a;
  local_88 = FUN_148a6611a;
  local_98 = "rhi";
  local_90 = 3;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96990,uVar2,0x6f,&local_88);
  atexit(FUN_143eef055);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4daeb0;
  local_60 = (code *)&LAB_143ef7a42;
  local_88 = (code *)&LAB_148a660f2;
  local_98 = "input_latency";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb969f0,uVar2,0x6f,&local_88);
  atexit(FUN_143eef09c);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4daeb0;
  local_60 = (code *)&LAB_143ef7a6e;
  local_88 = (code *)&LAB_148a660f2;
  local_98 = "net_flush";
  local_90 = 9;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96a50,uVar2,0x6f,&local_88);
  atexit(FUN_143eef0e3);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4daeb0;
  local_60 = FUN_143ef7a80;
  local_88 = (code *)&LAB_148a660f2;
  local_98 = "gpu";
  local_90 = 3;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96ab0,uVar2,0x6f,&local_88);
  atexit(FUN_143eef12a);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4daeb0;
  local_60 = FUN_143ef7b6c;
  local_88 = (code *)&LAB_148a660f2;
  local_98 = "dynres";
  local_90 = 6;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96b10,uVar2,0x7e,&local_88);
  atexit(FUN_143eef171);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4daeb0;
  local_60 = FUN_143ef7c4a;
  local_88 = (code *)&LAB_148a660f2;
  local_98 = "os_physical_mb_used";
  local_90 = 0x13;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96b70,uVar2,0x7e,&local_88);
  atexit(FUN_143eef1b8);
  local_78 = 0;
  local_68 = &PTR_LAB_14b4daeb0;
  local_60 = FUN_143ef7cb4;
  local_88 = (code *)&LAB_148a660f2;
  local_98 = "streaming_over_budget_mb";
  local_90 = 0x18;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  FUN_1412d94ec(&DAT_14cb96bd0,uVar2,0x7e,&local_88);
  atexit(FUN_143eef1ff);
  local_88 = (code *)0x8000000149eff412;
  local_98 = (char *)CONCAT44(local_98._4_4_,5);
  local_80 = FUN_14577453c(L"Shift",&local_98);
  local_7c = 1;
  FUN_14657d8c8(&local_88);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f0212e FUN_143f0212e body=379 status=ok
// SIG undefined FUN_143f0212e(void)

void FUN_143f0212e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x165) == '\x01') {
    FUN_1402160b8(&local_38);
    lVar1 = *(longlong *)(param_1 + 0x150);
    lVar2 = FUN_140eefd48();
    if ((double)*(int *)(lVar2 + 0x3c) < (double)(local_38 - lVar1) / 10000000.0) {
      FUN_148a68598(param_1);
    }
  }
  else if (*(int *)(param_1 + 0x148) == 7) {
    *(undefined1 *)(param_1 + 0x165) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else if (*(longlong *)(param_1 + 0x110) == 0) {
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = 4;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *local_48 = &PTR_LAB_14b4db6c0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_48[2] = lVar2;
    *local_48 = &PTR_FUN_14b4db650;
    local_48[3] = param_1;
    local_48[4] = FUN_143f027e8;
    FUN_148a61903(&local_48);
    FUN_1402160b8(&local_38);
    *(longlong *)(param_1 + 0x150) = local_38;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined1 *)(param_1 + 0x165) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f022aa FUN_143f022aa body=920 status=ok
// SIG undefined FUN_143f022aa(void)

void FUN_143f022aa(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  size_t sVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x148) == 7) {
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x140) < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
    *(undefined4 *)(param_1 + 0x148) = 5;
    plVar3 = (longlong *)FUN_140e92164();
    local_88 = 0;
    uStack_80 = 0;
    if ((longlong)*(int *)(param_1 + 0x140) == 0) {
      uVar9 = 0;
    }
    else {
      puVar11 = *(undefined8 **)(param_1 + 0x138);
      puVar10 = puVar11 + (longlong)*(int *)(param_1 + 0x140) * 5;
      local_b0 = puVar10;
      do {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb96df8) && (FUN_144b3d300(), DAT_14cb96df8 == -1)) {
          local_78 = (wchar_t *)FUN_140d69f9e();
          uVar6 = 0;
          if (local_78 != (wchar_t *)0x0) {
            sVar5 = wcslen(local_78);
            uVar6 = (int)sVar5;
          }
          local_68 = L"shiftsdk/bifrost/patch";
          local_60 = 0x16;
          local_70 = uVar6;
          FUN_140bee87a(&DAT_14cb96de8,&local_78,2);
          atexit((_func_5014 *)&LAB_143f0296f);
          _Init_thread_footer(&DAT_14cb96df8);
          puVar10 = local_b0;
        }
        local_78 = DAT_14cb96de8;
        local_70 = DAT_14cb96df0 + -1;
        if (DAT_14cb96df0 == 0) {
          local_70 = 0;
        }
        local_68 = (wchar_t *)*puVar11;
        local_60 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          local_60 = 0;
        }
        FUN_140bee87a(&local_98,&local_78,2);
        lVar4 = FUN_1457baddc();
        local_78 = *(wchar_t **)(lVar4 + 0x10);
        local_70 = *(int *)(lVar4 + 0x18) + -1;
        if (*(int *)(lVar4 + 0x18) == 0) {
          local_70 = 0;
        }
        local_68 = *(wchar_t **)(param_1 + 0xb0);
        local_60 = *(int *)(param_1 + 0xb8) + -1;
        if (*(int *)(param_1 + 0xb8) == 0) {
          local_60 = 0;
        }
        local_58 = *puVar11;
        local_50 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          local_50 = 0;
        }
        FUN_140bee87a(&local_a8,&local_78,3);
        FUN_140bee914(&local_78,&local_a8);
        pwVar7 = L"";
        if (local_70 != 0) {
          pwVar7 = local_78;
        }
        (**(code **)(*plVar3 + 0x1d8))(plVar3,pwVar7);
        puVar12 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar12 = local_98;
        }
        puVar8 = &DAT_149dfb77a;
        if (local_a0 != 0) {
          puVar8 = local_a8;
        }
        cVar1 = (**(code **)(*plVar3 + 0x220))(plVar3,puVar8,puVar12);
        uVar9 = uStack_80;
        if (cVar1 != '\0') {
          lVar4 = (longlong)(int)uStack_80;
          uVar2 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
          if (uStack_80._4_4_ < uVar2) {
            FUN_1447a1bd6(&local_88,uVar9 & 0xffffffff);
          }
          puVar12 = local_a8;
          lVar4 = lVar4 * 0x10;
          puVar10 = (undefined8 *)(local_88 + lVar4);
          *(undefined8 *)(local_88 + lVar4) = 0;
          lVar13 = (longlong)local_a0;
          *(int *)(local_88 + 8 + lVar4) = local_a0;
          if (lVar13 == 0) {
            *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            puVar10 = local_b0;
          }
          else {
            FUN_1446dd670(puVar10,local_a0,0);
            memcpy((void *)*puVar10,puVar12,lVar13 * 2);
            puVar10 = local_b0;
          }
        }
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar11 = puVar11 + 5;
      } while (puVar11 != puVar10);
      uVar9 = uStack_80 & 0xffffffff;
    }
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    FUN_1447a1747(local_88,uVar9);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0265e FUN_143f0265e body=394 status=ok
// SIG undefined FUN_143f0265e(void)

void FUN_143f0265e(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(int *)(param_1 + 0x148) == 7) {
    *(undefined1 *)(param_1 + 0x166) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x166) == '\0') {
      lVar2 = FUN_140eefd48();
      auVar5._0_8_ = (double)*(int *)(lVar2 + 0x38) * 10000000.0 + 0.5;
      auVar5._8_8_ = 0;
      auVar5 = roundpd(auVar5,auVar5,1);
      lVar2 = (longlong)auVar5._0_8_;
      *(longlong *)(param_1 + 0x158) = lVar2;
      *(undefined1 *)(param_1 + 0x166) = 1;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x158);
      auVar4._0_8_ = (double)param_2 * 10000000.0 + 0.5;
      auVar4._8_8_ = 0;
      auVar5 = roundpd(auVar4,auVar4,1);
      lVar3 = lVar2 - (longlong)auVar5._0_8_;
      *(longlong *)(param_1 + 0x158) = lVar3;
      lVar3 = (lVar3 / 10000000) % 0x3c;
      if (lVar3 < 1) {
        if ((*(int *)(param_1 + 0x70) != 0) &&
           (plVar1 = *(longlong **)(param_1 + 0x68), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_1 + 0xb0);
        }
        *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
      }
      if ((lVar2 / 10000000 - lVar2 / -0x6769800000000000) % 0x3c == lVar3) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0x158);
    }
    if ((*(int *)(param_1 + 0x30) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143f027dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143f027e8 FUN_143f027e8 body=390 status=ok
// SIG undefined FUN_143f027e8(void)

void FUN_143f027e8(longlong param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = *param_2;
  if (cVar2 == '\x04' || *(int *)(param_1 + 0x148) == 7) {
    *(undefined1 *)(param_1 + 0x165) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x20) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2);
      cVar2 = *param_2;
    }
    if (cVar2 == '\x05') {
      *(undefined1 *)(param_1 + 0x165) = 0;
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    }
    else if (cVar2 == '\x01') {
      *(undefined1 *)(param_1 + 0x165) = 0;
      FUN_140056680(local_40,L"Error while downloading patch.");
      if ((*(int *)(param_1 + 0x50) != 0) &&
         (plVar1 = *(longlong **)(param_1 + 0x48), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_1 + 0xb0,local_40);
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      FUN_148a68598(param_1);
    }
    else {
      fVar3 = ((float)*(ulonglong *)(param_2 + 8) / (float)*(ulonglong *)(param_2 + 0x10)) * 100.0;
      if (*(float *)(param_1 + 0x160) <= fVar3 && fVar3 != *(float *)(param_1 + 0x160)) {
        FUN_1402160b8(local_40);
        *(longlong *)(param_1 + 0x150) = local_40[0];
      }
      *(float *)(param_1 + 0x160) = fVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f029c2 FUN_143f029c2 body=29 status=ok
// SIG undefined FUN_143f029c2(void)

undefined8 FUN_143f029c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f029df FUN_143f029df body=192 status=ok
// SIG undefined FUN_143f029df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f029df(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/GbxPatch",&PTR_FUN_14b4db3e0,1,0);
  local_28 = "nexus";
  local_20 = 5;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  _DAT_14cb96c70 = (ulonglong)uVar1;
  local_28 = (char *)0x800000014b4db480;
  local_14 = 8;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14657ebb6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f02aa5 FUN_143f02aa5 body=55 status=ok
// SIG undefined FUN_143f02aa5(void)

void FUN_143f02aa5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb96f00 == 0) {
    uVar1 = FUN_141462c07();
    DAT_14cb96f00 = FUN_14171c317(FUN_14657f191,uVar1,L"EGbxMatchmakingState");
  }
  return;
}



// FUNCTION 143f02aed FUN_143f02aed body=55 status=ok
// SIG undefined FUN_143f02aed(void)

void FUN_143f02aed(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb96f70 == 0) {
    uVar1 = FUN_141462c07();
    DAT_14cb96f70 = FUN_14171c317(FUN_14657f238,uVar1,L"EGbxNetworkDestroyReason");
  }
  return;
}



// FUNCTION 143f02b88 FUN_143f02b88 body=55 status=ok
// SIG undefined FUN_143f02b88(void)

void FUN_143f02b88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb97038 == 0) {
    uVar1 = FUN_141462c07();
    DAT_14cb97038 = FUN_14171c317(FUN_14657f3c4,uVar1,L"EVoiceServiceName");
  }
  return;
}



// FUNCTION 143f02c38 FUN_143f02c38 body=1150 status=ok
// SIG undefined FUN_143f02c38(void)

void FUN_143f02c38(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  void *pvVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_108 [40];
  longlong local_e0;
  uint local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar9 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x58);
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar10 * 0xc) == param_2) {
          FUN_140f0cb98(&local_70,param_2);
          if ((local_70 != 0) && ((int)param_3[1] != 0)) {
            plVar8 = (longlong *)FUN_140a68038(1);
            if (plVar8 == (longlong *)0x0) {
              local_88 = (longlong *)0x0;
              plStack_80 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar8 + 0xa8))(plVar8,&local_88);
              if (local_88 != (longlong *)0x0) {
                local_98 = 0;
                uStack_90 = 0;
                (**(code **)(*local_88 + 0x28))(local_88,local_70);
                local_a0 = (longlong *)FUN_14001cc68(0x70,0x10);
                local_a0[1] = (longlong)&DAT_100000001;
                *local_a0 = (longlong)&PTR_FUN_14b4e0430;
                plVar8 = local_a0 + 2;
                local_a0[7] = 0;
                iVar10 = 0;
                *(undefined4 *)(local_a0 + 8) = 0;
                local_a0[3] = 0;
                local_a0[4] = 0;
                *(undefined8 *)((longlong)local_a0 + 0x44) = 0xffffffff00000080;
                *(undefined4 *)((longlong)local_a0 + 0x4c) = 0;
                local_a0[0xb] = 0;
                *(undefined4 *)(local_a0 + 0xc) = 0;
                local_a0[2] = (longlong)&PTR_FUN_14b4391c0;
                *(undefined4 *)(local_a0 + 0xd) = 0;
                pvVar12 = (void *)*param_3;
                lVar9 = param_3[1];
                local_a8 = plVar8;
                if ((longlong)(int)lVar9 != 0) {
                  lVar11 = 0;
                  do {
                    iVar10 = *(int *)((longlong)pvVar12 + lVar11);
                    if ((-1 < (longlong)iVar10) && (iVar10 < (int)uStack_90)) {
                      iVar4 = *(int *)((longlong)pvVar12 + lVar11 + 4);
                      iVar5 = *(int *)((longlong)pvVar12 + lVar11 + 8);
                      if (iVar5 <= iVar4) {
                        iVar4 = iVar5;
                      }
                      fVar13 = (float)iVar4;
                      fVar14 = (fVar13 / (float)iVar5) * 100.0;
                      if (*(char *)(param_1 + 0xb8) == '\0') {
                        fVar14 = fVar13;
                      }
                      if (iVar5 < 1) {
                        fVar14 = fVar13;
                      }
                      (**(code **)(*plVar8 + 8))(plVar8,(longlong)iVar10 * 0x20 + local_98,fVar14);
                    }
                    lVar11 = lVar11 + 0xc;
                  } while ((longlong)(int)lVar9 * 0xc != lVar11);
                  iVar10 = (int)param_3[1];
                  pvVar12 = (void *)*param_3;
                }
                plVar8 = local_88;
                uVar7 = (int)uStack_90;
                local_d0 = (void *)0x0;
                local_e0 = param_1;
                local_d8 = param_2;
                local_c8 = iVar10;
                if (iVar10 == 0) {
                  local_c4 = 0;
                }
                else {
                  FUN_143f1310a(&local_d0,iVar10);
                  memcpy(local_d0,pvVar12,(longlong)iVar10 * 0xc);
                }
                local_c0 = uVar7;
                local_b8 = (undefined8 *)0x0;
                local_b0 = 0;
                FUN_1446efa72(&local_b8,0,4,0x10);
                puVar6 = local_b8;
                pvVar12 = local_d0;
                local_b0 = 4;
                *local_b8 = &PTR_LAB_14b438700;
                LOCK();
                UNLOCK();
                lVar11 = DAT_14c758608 + 1;
                lVar9 = DAT_14c758608 + 1;
                if (lVar11 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar11 = DAT_14c758608 + 2;
                  lVar9 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar9;
                local_b8[2] = lVar11;
                *local_b8 = &PTR_FUN_14b4e04c0;
                local_b8[3] = local_e0;
                *(uint *)(local_b8 + 4) = local_d8;
                local_b8[5] = 0;
                lVar9 = (longlong)local_c8;
                *(int *)(local_b8 + 6) = local_c8;
                if (lVar9 == 0) {
                  *(undefined4 *)((longlong)local_b8 + 0x34) = 0;
                }
                else {
                  puVar1 = local_b8 + 5;
                  FUN_143f1310a(puVar1,local_c8);
                  memcpy((void *)*puVar1,pvVar12,lVar9 * 0xc);
                }
                *(undefined4 *)(puVar6 + 7) = local_c0;
                (**(code **)(*plVar8 + 8))(plVar8,local_70,&local_a8,&local_b8);
                if (local_b0 == 0) {
LAB_143f02fae:
                  if (local_b8 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_b8 != (undefined8 *)0x0) {
                  (**(code **)*local_b8)(local_b8,0);
                  FUN_1446efa72(&local_b8,0,0,0x10);
                  local_b0 = 0;
                  goto LAB_143f02fae;
                }
                if (local_d0 != (void *)0x0) {
                  FUN_1400020a8();
                }
                plVar8 = local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_a0 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar8 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
                FUN_140f5addd(local_98,uStack_90 & 0xffffffff);
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            plVar8 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_80 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_80)(plStack_80);
                LOCK();
                piVar3 = (int *)((longlong)plVar8 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_68 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar3 = (int *)((longlong)local_68 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
          break;
        }
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar10 * 0xc + 4);
      } while (iVar10 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f030b8 FUN_143f030b8 body=250 status=ok
// SIG undefined FUN_143f030b8(void)

void FUN_143f030b8(longlong param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  plVar2 = (longlong *)FUN_146163f36(param_1 + 0xc0);
  iVar1 = param_3 + 1;
  iVar3 = (int)plVar2[1];
  if ((int)param_3 < iVar3) {
    if ((int)param_3 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 < iVar3) {
      *(int *)(plVar2 + 1) = iVar1;
      iVar3 = iVar1;
    }
  }
  else {
    *(int *)(plVar2 + 1) = iVar1;
    if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar3) < (uint)(iVar1 - iVar3)) {
      FUN_14475e4ac(plVar2);
    }
    memset((void *)((longlong)iVar3 * 4 + *plVar2),0,(longlong)(iVar1 - iVar3) << 2);
    iVar3 = (int)plVar2[1];
  }
  if ((-1 < (int)param_3) && ((int)param_3 < iVar3)) {
    fVar4 = (float)param_4;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      fVar4 = (fVar4 / (float)param_5) * 100.0;
    }
    *(float *)(*plVar2 + (ulonglong)param_3 * 4) = fVar4;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f031b4 FUN_143f031b4 body=128 status=ok
// SIG undefined FUN_143f031b4(void)

void FUN_143f031b4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f031f8;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143f031f8:
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143f03221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143f03234 FUN_143f03234 body=678 status=ok
// SIG undefined FUN_143f03234(void)

void FUN_143f03234(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_70 = param_1;
  FUN_148a7189c(&local_68,param_3);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  puVar2 = local_58;
  local_50 = 4;
  *local_58 = &PTR_LAB_14b4e3fb0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14b4e1000;
  local_58[3] = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = local_70;
  puVar2[5] = local_68;
  local_68 = (undefined8 *)0x0;
  *(int *)(puVar2 + 6) = local_60;
  local_60 = 0;
  local_78 = param_1;
  FUN_143f034dc(param_1 + 0x30,&local_78,param_2,&local_58);
  if (local_50 == 0) {
LAB_143f033a8:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143f033a8;
  }
  if (local_60 == 0) {
LAB_143f033e9:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_143f033e9;
  }
  if ((int)param_3[1] != 0) {
    puVar2 = (undefined8 *)*param_3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f0342e;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_143f0342e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f034dc FUN_143f034dc body=250 status=ok
// SIG undefined FUN_143f034dc(void)

void FUN_143f034dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  FUN_143f15dc6(plVar3,param_2,param_3,param_4);
  local_50 = plVar3 + 2;
  local_48 = plVar3;
  FUN_143f15fc0(&local_50);
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_148a7192e(param_1,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f035d8 FUN_143f035d8 body=280 status=ok
// SIG undefined FUN_143f035d8(void)

undefined8 FUN_143f035d8(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar2 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar6;
      }
    }
  }
  local_30 = CONCAT44(uVar2,uVar5);
  iVar1 = FUN_143f16066((longlong *)(param_1 + 0x98),uVar2 ^ uVar5);
  if ((iVar1 == -1) ||
     (lVar7 = *(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 0x14,
     puVar3 = (undefined1 *)(lVar7 + 8), puVar3 == (undefined1 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),*puVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143f036f2 FUN_143f036f2 body=4123 status=ok
// SIG undefined FUN_143f036f2(void)

void FUN_143f036f2(longlong param_1,longlong param_2,char param_3,undefined1 param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  char local_a1;
  longlong local_a0;
  undefined8 *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_3 = param_3;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar7 = FUN_1400b465c(param_1);
    if (lVar7 != 0) {
      if (DAT_14cb5e538 == 0) {
        local_c0 = &local_68;
        local_68 = (longlong *)&LAB_1417c5d06;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_1417ad04a;
        local_c8 = &LAB_1486a7af7;
        local_d0 = &LAB_1464e1631;
        local_d8 = &DAT_149e063b2;
        local_e0 = 0;
        local_e8 = 0x1000000c;
        local_f0 = 8;
        local_f8 = 0x420;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      }
      if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar7);
        }
        *(longlong *)(param_1 + 0x70) = lVar7;
        if (*(longlong *)(param_1 + 0x78) == 0) {
          local_68 = (longlong *)&LAB_143f0470e;
          plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
          FUN_148a6a054(&local_a0,param_1);
          *(longlong *)(param_1 + 0x78) = local_a0;
          lVar7 = *(longlong *)(param_1 + 0x70);
        }
        local_a1 = param_3;
        if ((*(longlong *)(lVar7 + 0x1e0) != 0) &&
           (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x1e0) + 0x30), lVar7 != 0)) {
          if (*(longlong *)(param_1 + 0x80) == 0) {
            local_68 = (longlong *)0x0;
            plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
            FUN_1446efa72(&local_68,0,3,0x10);
            plVar11 = local_68;
            plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,3);
            *local_68 = (longlong)&PTR_LAB_14b434710;
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 1;
            lVar13 = DAT_14c758608 + 1;
            if (lVar9 == 0) {
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 2;
              lVar13 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar13;
            local_68[2] = lVar9;
            *local_68 = (longlong)&PTR_FUN_14b4e1100;
            local_68[3] = 0;
            iVar5 = 0;
            if (param_1 != 0) {
              uVar6 = *(uint *)(param_1 + 0xc);
              *(uint *)(local_68 + 3) = uVar6;
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              iVar5 = *(int *)(lVar13 + 0x10);
              if (*(int *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                iVar4 = DAT_14c964868 + 1;
                bVar15 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar15) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar4);
                }
                LOCK();
                iVar5 = *(int *)(lVar13 + 0x10);
                bVar15 = iVar5 == 0;
                if (bVar15) {
                  *(int *)(lVar13 + 0x10) = iVar4;
                  iVar5 = 0;
                }
                UNLOCK();
                if (bVar15) {
                  iVar5 = iVar4;
                }
              }
            }
            *(int *)((longlong)plVar11 + 0x1c) = iVar5;
            plVar11[4] = (longlong)FUN_143f0471c;
            *(undefined4 *)(plVar11 + 5) = 0;
            FUN_1489b1224(lVar7,&local_a0,&local_68);
            param_3 = local_a1;
            *(longlong *)(param_1 + 0x80) = local_a0;
            if ((int)plStack_60 != 0) {
              if (local_68 == (longlong *)0x0) goto LAB_143f039c6;
              (**(code **)*local_68)(local_68,0);
              FUN_1446efa72(&local_68,0,0,0x10);
              plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
            }
            if (local_68 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_143f039c6:
          if (*(longlong *)(param_1 + 0x88) == 0) {
            local_68 = (longlong *)0x0;
            plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
            FUN_1446efa72(&local_68,0,3,0x10);
            plVar11 = local_68;
            plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,3);
            *local_68 = (longlong)&PTR_LAB_14b4e11e0;
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 1;
            lVar13 = DAT_14c758608 + 1;
            if (lVar9 == 0) {
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 2;
              lVar13 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar13;
            local_68[2] = lVar9;
            *local_68 = (longlong)&PTR_FUN_14b4e1170;
            local_68[3] = 0;
            iVar5 = 0;
            if (param_1 != 0) {
              uVar6 = *(uint *)(param_1 + 0xc);
              *(uint *)(local_68 + 3) = uVar6;
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              iVar5 = *(int *)(lVar13 + 0x10);
              if (*(int *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                iVar4 = DAT_14c964868 + 1;
                bVar15 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar15) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar4);
                }
                LOCK();
                iVar5 = *(int *)(lVar13 + 0x10);
                bVar15 = iVar5 == 0;
                if (bVar15) {
                  *(int *)(lVar13 + 0x10) = iVar4;
                  iVar5 = 0;
                }
                UNLOCK();
                if (bVar15) {
                  iVar5 = iVar4;
                }
              }
            }
            *(int *)((longlong)plVar11 + 0x1c) = iVar5;
            plVar11[4] = (longlong)FUN_148a6a14e;
            *(undefined4 *)(plVar11 + 5) = 0;
            FUN_1461bf862(lVar7,&local_a0,&local_68);
            param_3 = local_a1;
            *(longlong *)(param_1 + 0x88) = local_a0;
            if ((int)plStack_60 != 0) {
              if (local_68 == (longlong *)0x0) goto LAB_143f03b1c;
              (**(code **)*local_68)(local_68,0);
              FUN_1446efa72(&local_68,0,0,0x10);
              plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
            }
            if (local_68 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
LAB_143f03b1c:
        if (*(longlong *)(param_1 + 0x90) != 0) goto LAB_143f03dbf;
        lVar13 = FUN_14657d4c2();
        local_68 = (longlong *)0x0;
        plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
        FUN_1446efa72(&local_68,0,3,0x10);
        plVar11 = local_68;
        plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,3);
        *local_68 = (longlong)&PTR_LAB_14b4e12c0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_68[2] = lVar9;
        *local_68 = (longlong)&PTR_FUN_14b4e1250;
        local_68[3] = 0;
        iVar5 = 0;
        if (param_1 != 0) {
          uVar6 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_68 + 3) = uVar6;
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar5 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar4 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar4);
            }
            LOCK();
            iVar5 = *(int *)(lVar7 + 0x10);
            bVar15 = iVar5 == 0;
            if (bVar15) {
              *(int *)(lVar7 + 0x10) = iVar4;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar5 = iVar4;
            }
          }
        }
        *(int *)((longlong)plVar11 + 0x1c) = iVar5;
        plVar11[4] = (longlong)FUN_143f04970;
        *(undefined4 *)(plVar11 + 5) = 0;
        if (local_68 == (longlong *)0x0 || (int)plStack_60 == 0) {
LAB_143f03cbc:
          if ((int)plStack_60 == 0) {
            lVar7 = 0;
            goto LAB_143f03daa;
          }
          if (local_68 != (longlong *)0x0) {
            lVar7 = 0;
            (**(code **)*local_68)(local_68,0);
            FUN_1446efa72(&local_68,0,0,0x10);
            goto LAB_143f03d97;
          }
          lVar7 = 0;
        }
        else {
          cVar3 = (**(code **)(*local_68 + 0x30))();
          if (cVar3 == '\0') {
            goto LAB_143f03cbc;
          }
          plVar11 = (longlong *)(lVar13 + 8);
          if (*(int *)(lVar13 + 0x1c) < 1) {
            iVar5 = *(int *)(lVar13 + 0x10);
            iVar4 = *(int *)(lVar13 + 0x18) + -1;
            *(int *)(lVar13 + 0x18) = iVar4;
            if (iVar4 <= iVar5) {
              iVar4 = iVar5;
              if (0 < iVar5) {
                iVar12 = 0;
                do {
                  if (((*(int *)(*plVar11 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                      (plVar8 = *(longlong **)(*plVar11 + (longlong)iVar12 * 0x10),
                      plVar8 == (longlong *)0x0)) ||
                     (cVar3 = (**(code **)(*plVar8 + 0x28))(), cVar3 != '\0')) {
                    FUN_14005b288(plVar11,iVar12);
                    FUN_14005b248(plVar11);
                  }
                  else {
                    iVar12 = iVar12 + 1;
                  }
                  iVar4 = *(int *)(lVar13 + 0x10);
                } while (iVar12 < iVar4);
              }
              iVar12 = 2;
              if (2 < iVar4 * 2) {
                iVar12 = iVar4 * 2;
              }
              *(int *)(lVar13 + 0x18) = iVar12;
              if ((iVar12 < iVar5) && (*(int *)(lVar13 + 0x14) != iVar4)) {
                FUN_14045812c(plVar11);
              }
            }
          }
          if (local_68 == (longlong *)0x0 || (int)plStack_60 == 0) {
            lVar7 = 0;
          }
          else {
            (**(code **)(*local_68 + 0x38))(local_68,&local_a0);
            lVar7 = local_a0;
          }
          iVar5 = *(int *)(lVar13 + 0x10);
          *(uint *)(lVar13 + 0x10) = iVar5 + 1U;
          if (*(uint *)(lVar13 + 0x14) < iVar5 + 1U) {
            FUN_1447a71f6(plVar11,iVar5);
          }
          lVar13 = *plVar11;
          lVar9 = (longlong)iVar5 * 0x10;
          *(undefined8 *)(lVar13 + lVar9) = 0;
          *(undefined4 *)(lVar13 + 8 + lVar9) = 0;
          *(longlong **)(lVar13 + lVar9) = local_68;
          local_68 = (longlong *)0x0;
          *(int *)(lVar13 + 8 + lVar9) = (int)plStack_60;
LAB_143f03d97:
          plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
LAB_143f03daa:
          if (local_68 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        *(longlong *)(param_1 + 0x90) = lVar7;
        param_3 = local_a1;
        goto LAB_143f03dbf;
      }
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    if ((int)param_5[1] != 0) {
      plVar11 = (longlong *)*param_5;
      if (plVar11 == (longlong *)0x0) goto LAB_143f037ce;
      (**(code **)(*plVar11 + 0x60))(plVar11,2);
    }
  }
  else {
LAB_143f03dbf:
    local_a1 = param_3;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    local_a0 = param_1;
    FUN_148a7189c(&local_98,param_5);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,4);
    plVar11 = local_88;
    local_80 = 4;
    *local_88 = (longlong)&PTR_LAB_14b4e3fb0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_88[2] = lVar13;
    *local_88 = (longlong)&PTR_FUN_14b4e1330;
    local_88[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar6 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_88 + 3) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(lVar7 + 0x10) = iVar4;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar5 = iVar4;
        }
      }
    }
    *(int *)((longlong)plVar11 + 0x1c) = iVar5;
    plVar11[4] = local_a0;
    plVar11[5] = (longlong)local_98;
    uVar14 = 0;
    local_98 = (undefined8 *)0x0;
    *(int *)(plVar11 + 6) = local_90;
    local_90 = 0;
    plVar8 = (longlong *)FUN_14001cc68(0x1f8,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b4e13a0;
    plVar11 = plVar8 + 2;
    local_78 = local_88;
    local_88 = (longlong *)0x0;
    local_70 = (longlong *)CONCAT44(local_70._4_4_,local_80);
    local_80 = 0;
    FUN_143f0738a(plVar11,param_1,param_2);
    plVar8[2] = (longlong)&PTR_FUN_14b4df4c0;
    plVar8[6] = (longlong)&PTR_FUN_14b4df4e8;
    *(undefined1 *)(plVar8 + 0xd) = param_4;
    plVar8[0xe] = 0;
    *(undefined4 *)(plVar8 + 0xf) = 0;
    FUN_148a7189c(plVar8 + 0xe,&local_78);
    plVar8[0x20] = 0;
    plVar8[0x21] = 0x200000000;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    plVar8[0x12] = 0;
    plVar8[0x13] = 0;
    plVar8[0x23] = 0;
    *(undefined4 *)(plVar8 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar8 + 0x124) = 0x20;
    *(undefined4 *)(plVar8 + 0x25) = 0xffffffff;
    *(undefined4 *)((longlong)plVar8 + 300) = 0;
    plVar8[0x27] = 0;
    *(undefined4 *)(plVar8 + 0x28) = 0;
    plVar8[0x35] = 0;
    plVar8[0x36] = 0x200000000;
    plVar8[0x38] = 0;
    *(undefined4 *)(plVar8 + 0x39) = 0;
    *(undefined4 *)((longlong)plVar8 + 0x1cc) = 0x20;
    *(undefined4 *)(plVar8 + 0x3a) = 0xffffffff;
    *(undefined4 *)((longlong)plVar8 + 0x1d4) = 0;
    plVar8[0x3c] = 0;
    *(undefined4 *)(plVar8 + 0x3d) = 0;
    *(undefined1 *)(plVar8 + 0x3e) = 0;
    local_58 = 0;
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    local_50[0] = 0xffff;
    if ((int)plVar8[10] != 0) {
      uVar6 = *(uint *)((longlong)plVar8 + 0x4c);
      uVar14 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != (int)plVar8[10] ||
            ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) {
          uVar14 = 0;
        }
        else {
          uVar14 = *puVar10;
        }
      }
    }
    lVar7 = FUN_148a6ad30(plVar8[8],uVar14,&local_68);
    cVar3 = local_a1;
    if (lVar7 == 0) {
      *(undefined4 *)(plVar8 + 0x11) = 0;
      iVar5 = 0;
    }
    else {
      uVar6 = *(uint *)(lVar7 + 0xc);
      *(uint *)(plVar8 + 0x11) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(lVar7 + 0x10) = iVar4;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar5 = iVar4;
        }
      }
    }
    *(int *)((longlong)plVar8 + 0x8c) = iVar5;
    if (local_68 == (longlong *)0x0) {
      *(uint *)(plVar8 + 0x10) = 0;
      iVar5 = 0;
    }
    else {
      uVar6 = *(uint *)((longlong)local_68 + 0xc);
      *(uint *)(plVar8 + 0x10) = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(lVar7 + 0x10) = iVar4;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar5 = iVar4;
        }
      }
    }
    *(int *)((longlong)plVar8 + 0x84) = iVar5;
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)plVar8[8] + 0x2c0))((longlong *)plVar8[8],param_2,plVar8 + 0x14);
    }
    if ((((char)plVar8[0xd] == '\x01') && (*(longlong **)(plVar8[8] + 0x70) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(plVar8[8] + 0x70) + 0x498))(),
       (byte)(cVar3 - 6U) < 0xfd)) {
      lVar7 = (longlong)*(int *)(*(longlong *)(plVar8[8] + 0x70) + 0x40);
      if (lVar7 != 0) {
        lVar13 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(plVar8[8] + 0x70) + 0x38) + lVar13);
          if ((plVar2 != (longlong *)0x0) && ((int)plVar2[0x1c] == *(int *)(param_2 + 0x38))) {
            iVar5 = (**(code **)(*plVar2 + 0x328))();
            if (iVar5 == 0) goto LAB_143f04208;
            break;
          }
          lVar13 = lVar13 + 8;
        } while (lVar7 * 8 != lVar13);
      }
      if ((plStack_60 != (longlong *)0x0) && (uVar6 = FUN_1402d8968(plStack_60,local_50), 5 < uVar6)
         ) {
LAB_143f04208:
        *(undefined1 *)(plVar8 + 0xd) = 0;
      }
    }
    if ((int)local_70 == 0) {
LAB_143f0424e:
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_78 != (longlong *)0x0) {
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = (longlong *)((ulonglong)local_70 & 0xffffffff00000000);
      goto LAB_143f0424e;
    }
    local_78 = plVar11;
    local_70 = plVar8;
    FUN_148a72496(&local_78,plVar11);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_68 = plVar11;
    plStack_60 = plVar8;
    FUN_148a7192e(param_1 + 0x30,&local_68);
    plVar11 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_60 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar11 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_70 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_80 == 0) {
LAB_143f04338:
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_88 != (longlong *)0x0) {
      (**(code **)*local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      local_80 = 0;
      goto LAB_143f04338;
    }
    if (local_90 != 0) {
      if (local_98 == (undefined8 *)0x0) goto LAB_143f03793;
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f03793:
  puVar10 = (undefined8 *)*param_5;
  if ((int)param_5[1] != 0) {
    if (puVar10 == (undefined8 *)0x0) goto LAB_143f037ce;
    (**(code **)*puVar10)(puVar10,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
    puVar10 = (undefined8 *)*param_5;
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f037ce:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0471c FUN_143f0471c body=593 status=ok
// SIG undefined FUN_143f0471c(void)

void FUN_143f0471c(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void **ppvVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  void *local_80;
  ulonglong uStack_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 6) != 0) goto LAB_143f04748;
  lVar7 = FUN_148a6b04c(param_1,*param_2);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x2b8) == 0)) goto LAB_143f04748;
  lVar8 = FUN_143f065cc(param_1,lVar7,param_2 + 1,0);
  if ((lVar8 == 0) ||
     ((((*(byte *)(lVar8 + 0x88) & 2) == 0 || ((*(byte *)(lVar8 + 0x89) & 0xfe) != 2)) ||
      (*(int *)(param_1 + 0x40) < *(int *)(param_2[7] + 8))))) goto LAB_143f04748;
  local_58 = 0;
  uStack_50 = 0;
  cVar5 = FUN_148a6b10a(param_1,lVar7,lVar8 + 0x60);
  if (cVar5 == '\0') {
    local_80 = (void *)0x0;
    uStack_78 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1400b2348(lVar8 + 0x10,&local_b8,1);
    iVar3 = (int)uStack_b0;
    iVar6 = ((int)uStack_b0 == 0) + 4;
    local_a0 = local_b8;
    local_b8 = 0;
    iVar4 = uStack_b0._4_4_;
    uStack_98 = uStack_b0;
    uStack_b0 = 0;
    iVar10 = iVar6 + iVar3;
    if (iVar10 < iVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (iVar4 < iVar10) {
      FUN_1446f8c06(&local_a0);
    }
    FUN_1400020e8(&local_a0,L".sav",4);
    local_90 = local_a0;
    uStack_88 = uStack_98;
    local_a0 = 0;
    uStack_98 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    ppvVar2 = (void **)param_2[7];
    if (&local_80 == ppvVar2) {
LAB_143f048e6:
      local_70 = 0;
    }
    else {
      uVar1 = *(uint *)(ppvVar2 + 1);
      _Src = *ppvVar2;
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_78 = (ulonglong)uVar1;
        goto LAB_143f048e6;
      }
      FUN_1447a127e(&local_80,uVar1,0);
      memcpy(local_80,_Src,(longlong)(int)uVar1);
      local_70 = (undefined4)uStack_78;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    local_68 = local_58;
    uStack_60 = uStack_50;
    local_58 = 0;
    uStack_50 = 0;
    uVar9 = FUN_14657d4c2();
    FUN_143eee5e0(uVar9,lVar7,&local_90);
    FUN_148a5d960(&local_90);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_143f04748:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f04970 FUN_143f04970 body=803 status=ok
// SIG undefined FUN_143f04970(void)

void FUN_143f04970(longlong *param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) goto LAB_143f04992;
  uVar3 = *(uint *)(param_2 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar5 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    uVar8 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar8);
    }
    LOCK();
    uVar5 = *(uint *)(lVar9 + 0x10);
    bVar10 = uVar5 == 0;
    if (bVar10) {
      *(uint *)(lVar9 + 0x10) = uVar8;
      uVar5 = 0;
    }
    UNLOCK();
    if (bVar10) {
      uVar5 = uVar8;
    }
  }
  local_50 = (longlong *)CONCAT44(uVar5,uVar3);
  iVar4 = FUN_148a72ae6(param_1 + 0x1d,uVar3 ^ uVar5);
  if (iVar4 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar4 * 0x48 + param_1[0x1d];
  }
  lVar6 = lVar9 + 8;
  if (lVar9 == 0) {
    lVar6 = 0;
  }
  if ((lVar6 == 0) || (*param_3 != '\0')) goto LAB_143f04992;
  if (param_3[1] == '\x02') {
    (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3 + 8);
    goto LAB_143f04992;
  }
  if ((param_3[1] != '\x01') || (*(char *)(lVar6 + 0x30) != '\0')) goto LAB_143f04992;
  *(undefined1 *)(lVar6 + 0x30) = 1;
  local_68 = 0;
  plVar7 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b4e1890;
  plVar1 = plVar7 + 2;
  local_50 = (longlong *)0x0;
  local_70 = (undefined8 *)0x0;
  local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_143f0738a(plVar1,param_1,param_2);
  plVar7[2] = (longlong)&PTR_FUN_14b4df740;
  plVar7[6] = (longlong)&PTR_FUN_14b4df768;
  plVar7[0xd] = 0;
  *(undefined4 *)(plVar7 + 0xe) = 0;
  FUN_148a7189c(plVar7 + 0xd,&local_50);
  *(undefined1 *)(plVar7 + 0xf) = 1;
  if ((int)local_48 == 0) {
LAB_143f04b3b:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (longlong *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    goto LAB_143f04b3b;
  }
  local_60 = plVar1;
  local_58 = plVar7;
  FUN_143f18bc8(&local_60,plVar1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_50 = plVar1;
  local_48 = plVar7;
  FUN_148a7192e(param_1 + 6,&local_50);
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((int)local_68 != 0) {
    if (local_70 == (undefined8 *)0x0) goto LAB_143f04992;
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143f04992:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f04c94 FUN_143f04c94 body=1002 status=ok
// SIG undefined FUN_143f04c94(void)

void FUN_143f04c94(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_90 = param_1;
  FUN_148a7189c(&local_88,param_3);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,4,0x10);
  plVar1 = local_78;
  local_70 = 4;
  *local_78 = (longlong)&PTR_LAB_14b4e3fb0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_78[2] = lVar7;
  *local_78 = (longlong)&PTR_FUN_14b4e13c0;
  local_78[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_78 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar5 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar5 = iVar8;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x1c) = iVar5;
  plVar1[4] = local_90;
  plVar1[5] = (longlong)local_88;
  local_88 = (undefined8 *)0x0;
  *(int *)(plVar1 + 6) = local_80;
  local_80 = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4e1430;
  plVar1 = plVar6 + 2;
  local_58 = local_78;
  local_78 = (longlong *)0x0;
  local_50._0_4_ = local_70;
  local_70 = 0;
  FUN_143f0738a(plVar1,param_1,param_2);
  plVar6[2] = (longlong)&PTR_FUN_14b4df7d0;
  plVar6[6] = (longlong)&PTR_FUN_14b4df7f8;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 0;
  FUN_148a7189c(plVar6 + 0xd,&local_58);
  if ((int)local_50 == 0) {
LAB_143f04e73:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
    goto LAB_143f04e73;
  }
  local_68 = plVar1;
  local_60 = plVar6;
  FUN_143f1712a(&local_68,plVar1);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_58 = plVar1;
  local_50 = plVar6;
  FUN_148a7192e(param_1 + 0x30,&local_58);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_70 == 0) {
LAB_143f04f41:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (longlong *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_143f04f41;
  }
  if (local_80 == 0) {
LAB_143f04f82:
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_143f04f82;
  }
  if ((int)param_3[1] != 0) {
    puVar4 = (undefined8 *)*param_3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143f04fcb;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_143f04fcb:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f05080 FUN_143f05080 body=672 status=ok
// SIG undefined FUN_143f05080(void)

void FUN_143f05080(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_70 = param_1;
  FUN_148a7189c(&local_68);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  puVar2 = local_58;
  local_50 = 4;
  *local_58 = &PTR_LAB_14b4e3fb0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14b4e1450;
  local_58[3] = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = local_70;
  puVar2[5] = local_68;
  local_68 = (undefined8 *)0x0;
  *(int *)(puVar2 + 6) = local_60;
  local_60 = 0;
  local_78 = param_1;
  FUN_143f05322(param_1 + 0x30,&local_78,&local_58);
  if (local_50 == 0) {
LAB_143f051f1:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143f051f1;
  }
  if (local_60 == 0) {
LAB_143f05232:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_143f05232;
  }
  if ((int)param_2[1] != 0) {
    puVar2 = (undefined8 *)*param_2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f05277;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_143f05277:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f05322 FUN_143f05322 body=240 status=ok
// SIG undefined FUN_143f05322(void)

void FUN_143f05322(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
  FUN_143f176b2(plVar3,param_2,param_3);
  local_48 = plVar3 + 2;
  local_40 = plVar3;
  FUN_143f1788c(&local_48);
  local_38 = local_48;
  local_30 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_148a7192e(param_1,&local_38);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f05414 FUN_143f05414 body=492 status=ok
// SIG undefined FUN_143f05414(void)

void FUN_143f05414(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_143f1852e(&local_58,param_3);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4e1800;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14b4e1790;
  local_48[3] = local_58;
  local_58 = (undefined8 *)0x0;
  *(int *)(local_48 + 4) = local_50;
  local_50 = 0;
  local_60 = param_1;
  FUN_143f05602(param_1 + 0x30,&local_60,param_2,&local_48);
  if (local_40 == 0) {
LAB_143f05527:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_143f05527;
  }
  if (local_50 == 0) {
LAB_143f0556c:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143f0556c;
  }
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)*param_3;
    if (puVar1 == (undefined8 *)0x0) goto LAB_143f055ad;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_143f055ad:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f05602 FUN_143f05602 body=250 status=ok
// SIG undefined FUN_143f05602(void)

void FUN_143f05602(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x80,0x10);
  FUN_143f188b0(plVar3,param_2,param_3,param_4);
  local_50 = plVar3 + 2;
  local_48 = plVar3;
  FUN_143f18a5e(&local_50);
  local_40 = local_50;
  local_38 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_148a7192e(param_1,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f056fe FUN_143f056fe body=3098 status=ok
// SIG undefined FUN_143f056fe(void)

undefined8 FUN_143f056fe(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  int iVar29;
  int *piVar30;
  undefined4 *_Dst;
  longlong lVar31;
  bool bVar32;
  undefined1 auStack_1b8 [47];
  char local_189;
  longlong *local_188;
  int *local_180;
  longlong *local_178;
  undefined8 *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  int *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined4 *local_128;
  undefined8 uStack_120;
  undefined1 local_118 [144];
  ulonglong local_88;
  int local_80;
  undefined4 uStack_7c;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_2 == 0) {
    uVar20 = 0;
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(param_2 + 0xc);
    uVar20 = (ulonglong)uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    uVar13 = *(uint *)(lVar22 + 0x10);
    if (*(uint *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      uVar16 = DAT_14c964868 + 1;
      bVar32 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar32) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar16);
      }
      LOCK();
      uVar13 = *(uint *)(lVar22 + 0x10);
      bVar32 = uVar13 == 0;
      if (bVar32) {
        *(uint *)(lVar22 + 0x10) = uVar16;
        uVar13 = 0;
      }
      UNLOCK();
      if (bVar32) {
        uVar13 = uVar16;
      }
    }
  }
  local_88 = uVar20 | (ulonglong)uVar13 << 0x20;
  iVar12 = FUN_148a72ae6(param_1 + 0x1d,uVar13 ^ (uint)uVar20);
  if (iVar12 == -1) {
    uVar14 = 4;
    goto LAB_143f05834;
  }
  lVar22 = param_1[0x1d] + (longlong)iVar12 * 0x48;
  plVar27 = (longlong *)(lVar22 + 8);
  uVar14 = 4;
  local_178 = param_3;
  if (plVar27 == (longlong *)0x0 || lVar22 == 0) goto LAB_143f05834;
  lVar15 = FUN_148a6ad30(param_1,param_2,0);
  uVar14 = 5;
  if (lVar15 == 0) goto LAB_143f05834;
  local_128 = (undefined4 *)0x0;
  uStack_120 = 0;
  local_189 = param_4;
  local_168 = param_1;
  local_160 = param_2;
  local_158 = lVar15;
  if ((longlong)(int)local_178[1] == 0) {
    local_80 = 0;
LAB_143f05bec:
    local_88 = 0;
    uStack_7c = 0;
    local_180 = (int *)(lVar22 + 0x10);
    local_188 = (longlong *)CONCAT44(local_188._4_4_,*(int *)(lVar22 + 0x10));
    if (*(int *)(lVar22 + 0x10) != 0) {
      lVar15 = *plVar27;
      bVar32 = true;
LAB_143f05c1b:
      uVar24 = (ulonglong)(int)local_188;
      iVar12 = 0;
      uVar20 = 0;
LAB_143f05c26:
      do {
        iVar7 = (int)uVar20;
        uVar20 = (ulonglong)(iVar7 + 1U);
        if ((int)(iVar7 + 1U) < (int)local_188) {
          uVar20 = (longlong)iVar7 + 1;
          bVar6 = true;
          do {
            if (local_80 != 0) {
              uVar23 = local_88;
              lVar31 = (longlong)local_80 * 0x90;
              do {
                if (*(int *)(uVar23 + 0x10) == *(int *)(lVar15 + 0x10 + uVar20 * 0x90)) {
                  if ((bool)(uVar23 == 0 ^ bVar32)) goto LAB_143f05cad;
                  goto LAB_143f05c97;
                }
                uVar23 = uVar23 + 0x90;
                lVar31 = lVar31 + -0x90;
              } while (lVar31 != 0);
            }
            if (!bVar32) {
              iVar29 = (int)uVar20 - iVar7;
              goto LAB_143f05ce3;
            }
LAB_143f05c97:
            uVar20 = uVar20 + 1;
            bVar6 = (longlong)uVar20 < (longlong)uVar24;
          } while (uVar20 != uVar24);
          uVar20 = (ulonglong)local_188 & 0xffffffff;
        }
        else {
          bVar6 = false;
        }
LAB_143f05cad:
        iVar29 = (int)uVar20 - iVar7;
        if (bVar32) {
          FUN_148a6ed85((longlong)iVar7 * 0x90 + lVar15,iVar29);
          bVar32 = false;
          if (!bVar6) break;
          goto LAB_143f05c26;
        }
LAB_143f05ce3:
        if (iVar12 != iVar7) {
          memmove((void *)((longlong)iVar12 * 0x90 + lVar15),
                  (void *)((longlong)iVar7 * 0x90 + lVar15),(longlong)iVar29 * 0x90);
        }
        iVar12 = iVar12 + iVar29;
        bVar32 = true;
      } while (bVar6);
      *local_180 = iVar12;
    }
  }
  else {
    puVar18 = (undefined8 *)*local_178;
    puVar19 = puVar18 + (longlong)(int)local_178[1] * 7;
    local_180 = (int *)(lVar22 + 0x10);
    local_170 = puVar19;
    do {
      local_138 = (void *)0x0;
      local_130 = *(int *)(puVar18 + 1);
      lVar15 = (longlong)local_130;
      pvVar5 = (void *)*puVar18;
      if (lVar15 == 0) {
        local_12c = 0;
      }
      else {
        FUN_1446dd670(&local_138,local_130,0);
        memcpy(local_138,pvVar5,lVar15 * 2);
      }
      cVar11 = FUN_140b127b8(&local_138,L".sav",4,1);
      if (cVar11 != '\0') {
        FUN_148a69ddc(&local_148);
        if (local_148 != 0) {
          lVar15 = (longlong)(int)uStack_120;
          uVar13 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar13);
          if (uStack_120._4_4_ < uVar13) {
            FUN_148a72b9c(&local_128);
          }
          puVar25 = local_128;
          local_188 = (longlong *)(local_128 + lVar15 * 0x24);
          piVar30 = local_128 + lVar15 * 0x24 + 4;
          memset(local_188,0,0x90);
          FUN_1447a97f4(piVar30,&DAT_14c9485f0);
          *(undefined8 *)(puVar25 + lVar15 * 0x24 + 0xe) = 0;
          *(undefined8 *)(puVar25 + lVar15 * 0x24 + 0x10) = 0;
          *(undefined8 *)(puVar25 + lVar15 * 0x24 + 0x12) = 0;
          *(undefined8 *)(puVar25 + lVar15 * 0x24 + 0x14) = 0;
          *(undefined8 *)(puVar25 + lVar15 * 0x24 + 0x16) = 0;
          FUN_1447a97f4(puVar25 + lVar15 * 0x24 + 0x18,&DAT_14c9485f0);
          *(undefined2 *)(puVar25 + lVar15 * 0x24 + 0x22) = 0;
          FUN_14000bbd8(&local_88,&local_138,0);
          local_150 = piVar30;
          FUN_1404e49fa(piVar30,&local_88);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          plVar4 = local_188;
          puVar19 = (undefined8 *)(puVar25 + lVar15 * 0x24 + 0xe);
          if (puVar19 != puVar18 + 2) {
            iVar12 = *(int *)(puVar18 + 3);
            pvVar5 = (void *)puVar18[2];
            *(int *)(local_188 + 8) = iVar12;
            if (iVar12 == 0 && *(int *)((longlong)local_188 + 0x44) == 0) {
              *(undefined4 *)((longlong)local_188 + 0x44) = 0;
            }
            else {
              FUN_1446dd670(puVar19,iVar12);
              if (iVar12 != 0) {
                memcpy((void *)*puVar19,pvVar5,(longlong)iVar12 * 2);
              }
            }
          }
          plVar2 = local_168;
          plVar4[9] = puVar18[6];
          if ((longlong)*local_180 != 0) {
            lVar15 = *plVar27;
            lVar31 = (longlong)*local_180 * 0x90;
            do {
              if (*(int *)(lVar15 + 0x10) == *local_150) {
                if (lVar15 != 0) {
                  lVar31 = *(longlong *)(lVar15 + 0x50);
                  lVar15 = *(longlong *)(lVar15 + 0x58);
                  if (lVar15 != 0) {
                    LOCK();
                    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
                    UNLOCK();
                  }
                  plVar3 = (longlong *)plVar4[0xb];
                  plVar4[10] = lVar31;
                  plVar4[0xb] = lVar15;
                  if (plVar3 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar3 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar3)(plVar3);
                      LOCK();
                      piVar30 = (int *)((longlong)plVar3 + 0xc);
                      *piVar30 = *piVar30 + -1;
                      UNLOCK();
                      if (*piVar30 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                      }
                    }
                  }
                }
                break;
              }
              lVar15 = lVar15 + 0x90;
              lVar31 = lVar31 + -0x90;
            } while (lVar31 != 0);
          }
          cVar11 = (**(code **)(*plVar2 + 0x2e0))(plVar2);
          if (cVar11 == '\0') {
            lVar15 = plVar4[10];
            uVar8 = *(undefined4 *)(lVar15 + 0x60);
            uVar9 = *(undefined4 *)(lVar15 + 100);
            uVar10 = *(undefined4 *)(lVar15 + 0x68);
            *(undefined4 *)plVar4 = *(undefined4 *)(lVar15 + 0x5c);
            *(undefined4 *)((longlong)plVar4 + 4) = uVar8;
            *(undefined4 *)(plVar4 + 1) = uVar9;
            *(undefined4 *)((longlong)plVar4 + 0xc) = uVar10;
            puVar19 = local_170;
          }
          else {
            FUN_148a6ae10(&local_128);
            FUN_148a6ae9c(local_118);
            puVar19 = local_170;
          }
        }
        plVar4 = uStack_140;
        if (uStack_140 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_140 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*uStack_140)(uStack_140);
            LOCK();
            piVar30 = (int *)((longlong)plVar4 + 0xc);
            *piVar30 = *piVar30 + -1;
            UNLOCK();
            if (*piVar30 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      if (local_138 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar20 = uStack_120;
      puVar25 = local_128;
      puVar18 = puVar18 + 7;
    } while (puVar18 != puVar19);
    local_88 = 0;
    local_80 = (int)uStack_120;
    if ((int)uStack_120 == 0) goto LAB_143f05bec;
    FUN_148a72d86(&local_88,uStack_120 & 0xffffffff);
    FUN_148a72def(local_88,puVar25,uVar20 & 0xffffffff);
    local_188 = (longlong *)CONCAT44(local_188._4_4_,*local_180);
    if (*local_180 != 0) {
      lVar15 = *plVar27;
      bVar32 = true;
      if (local_80 != 0) {
        lVar31 = (longlong)local_80 * 0x90;
        uVar20 = local_88;
        do {
          if (*(int *)(uVar20 + 0x10) == *(int *)(lVar15 + 0x10)) goto LAB_143f062e7;
          uVar20 = uVar20 + 0x90;
          lVar31 = lVar31 + -0x90;
        } while (lVar31 != 0);
        uVar20 = 0;
LAB_143f062e7:
        bVar32 = uVar20 == 0;
      }
      goto LAB_143f05c1b;
    }
  }
  FUN_148a6ed85(local_88);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_120 != 0) {
    local_188 = (longlong *)(local_128 + (longlong)(int)uStack_120 * 0x24);
    puVar25 = local_128;
    do {
      puVar21 = (undefined4 *)*plVar27;
      lVar15 = (longlong)*local_180;
      if (lVar15 != 0) {
        lVar31 = lVar15 * 0x90;
        _Dst = puVar21;
        do {
          if (_Dst[4] == puVar25[4]) {
            if (_Dst != (undefined4 *)0x0) goto LAB_143f05ed8;
            break;
          }
          _Dst = _Dst + 0x24;
          lVar31 = lVar31 + -0x90;
        } while (lVar31 != 0);
      }
      uVar13 = *local_180 + 1;
      *(uint *)(lVar22 + 0x10) = uVar13;
      if (*(uint *)(lVar22 + 0x14) < uVar13) {
        FUN_148a72b9c(plVar27);
        puVar21 = (undefined4 *)*plVar27;
      }
      _Dst = puVar21 + lVar15 * 0x24;
      memset(_Dst,0,0x90);
      FUN_1447a97f4(puVar21 + lVar15 * 0x24 + 4,&DAT_14c9485f0);
      puVar17 = puVar21 + lVar15 * 0x24;
      *(undefined8 *)(puVar17 + 0xe) = 0;
      *(undefined8 *)(puVar17 + 0x10) = 0;
      *(undefined8 *)(puVar17 + 0x12) = 0;
      *(undefined8 *)(puVar17 + 0x14) = 0;
      *(undefined8 *)(puVar17 + 0x16) = 0;
      FUN_1447a97f4(puVar17 + 0x18,&DAT_14c9485f0);
      *(undefined2 *)(puVar17 + 0x22) = 0;
      uVar8 = puVar25[1];
      uVar9 = puVar25[2];
      uVar10 = puVar25[3];
      *puVar17 = *puVar25;
      puVar17[1] = uVar8;
      puVar17[2] = uVar9;
      puVar17[3] = uVar10;
      FUN_1447715ec(puVar21 + lVar15 * 0x24 + 4);
      *(byte *)(puVar17 + 0x22) = *(byte *)(puVar17 + 0x22) | 2;
      if (local_189 == '\0') {
        FUN_1489af67a(local_158,&local_88,puVar25);
        if (local_88 != 0) {
          FUN_1447715ec(puVar17 + 0x18);
          *(byte *)(_Dst + 0x22) = *(byte *)(_Dst + 0x22) | 1;
        }
        plVar4 = (longlong *)CONCAT44(uStack_7c,local_80);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar30 = (int *)((longlong)plVar4 + 0xc);
            *piVar30 = *piVar30 + -1;
            UNLOCK();
            if (*piVar30 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
LAB_143f05ed8:
      if (_Dst != puVar25) {
        iVar12 = puVar25[0x10];
        pvVar5 = *(void **)(puVar25 + 0xe);
        _Dst[0x10] = iVar12;
        if (iVar12 == 0 && _Dst[0x11] == 0) {
          _Dst[0x11] = 0;
        }
        else {
          FUN_1446dd670(_Dst + 0xe);
          if (iVar12 != 0) {
            memcpy(*(void **)(_Dst + 0xe),pvVar5,(longlong)iVar12 * 2);
          }
        }
      }
      *(undefined8 *)(_Dst + 0x12) = *(undefined8 *)(puVar25 + 0x12);
      uVar14 = *(undefined8 *)(puVar25 + 0x14);
      lVar15 = *(longlong *)(puVar25 + 0x16);
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(_Dst + 0x16);
      *(undefined8 *)(_Dst + 0x14) = uVar14;
      *(longlong *)(_Dst + 0x16) = lVar15;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar30 = (int *)((longlong)plVar4 + 0xc);
          *piVar30 = *piVar30 + -1;
          UNLOCK();
          if (*piVar30 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      puVar25 = puVar25 + 0x24;
    } while ((longlong *)puVar25 != local_188);
  }
  plVar27 = local_178;
  local_188 = (longlong *)(lVar22 + 0x18);
  FUN_148a6af04(local_188,(int)local_178[3]);
  if ((longlong)(int)plVar27[3] != 0) {
    lVar15 = (longlong)(int)plVar27[3] << 6;
    lVar31 = local_178[2] + 0x20;
    do {
      local_138 = (void *)0x0;
      local_130 = *(int *)(lVar31 + -0x18);
      lVar26 = (longlong)local_130;
      pvVar5 = *(void **)(lVar31 + -0x20);
      if (lVar26 == 0) {
        local_12c = 0;
      }
      else {
        FUN_1446dd670(&local_138,local_130,0);
        memcpy(local_138,pvVar5,lVar26 * 2);
      }
      cVar11 = FUN_140b127b8(&local_138,L".sav",4,1);
      if (cVar11 != '\0') {
        local_148 = 0;
        uStack_140 = (longlong *)0x0;
        FUN_148a69f03(lVar31,&local_148);
        FUN_14000bbd8(&local_88,&local_138);
        iVar12 = *(int *)(lVar22 + 0x20);
        *(uint *)(lVar22 + 0x20) = iVar12 + 1U;
        if (*(uint *)(lVar22 + 0x24) < iVar12 + 1U) {
          FUN_148a72ed8(local_188,iVar12);
        }
        lVar26 = *local_188;
        lVar28 = (longlong)iVar12 * 0x38;
        *(undefined8 *)(lVar26 + lVar28) = 0;
        ((undefined8 *)(lVar26 + lVar28))[1] = 0;
        *(undefined4 *)(lVar26 + 0x10 + lVar28) = 0;
        puVar18 = (undefined8 *)(lVar26 + 0x18 + lVar28);
        *puVar18 = 0;
        puVar18[1] = 0;
        FUN_1404e49fa(lVar28 + lVar26,&local_88);
        puVar25 = (undefined4 *)(lVar26 + 0x28 + lVar28);
        *puVar25 = (undefined4)local_148;
        puVar25[1] = local_148._4_4_;
        puVar25[2] = (undefined4)uStack_140;
        puVar25[3] = uStack_140._4_4_;
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_138 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar31 = lVar31 + 0x40;
      lVar15 = lVar15 + -0x40;
    } while (lVar15 != 0);
  }
  plVar4 = local_178;
  plVar27 = (longlong *)(lVar22 + 0x28);
  FUN_145f977a8(plVar27,(int)local_178[5]);
  lVar15 = (longlong)(int)plVar4[5];
  if (lVar15 != 0) {
    lVar31 = plVar4[4];
    lVar26 = 0;
    do {
      local_138 = (void *)0x0;
      local_130 = *(int *)(lVar31 + 8 + lVar26);
      lVar28 = (longlong)local_130;
      pvVar5 = *(void **)(lVar31 + lVar26);
      if (lVar28 == 0) {
        local_12c = 0;
      }
      else {
        FUN_1446dd670(&local_138,local_130,0);
        memcpy(local_138,pvVar5,lVar28 * 2);
      }
      cVar11 = FUN_140b127b8(&local_138,L".sav",4,1);
      if (cVar11 != '\0') {
        FUN_14000bbd8(&local_88,&local_138);
        iVar12 = *(int *)(lVar22 + 0x30);
        *(uint *)(lVar22 + 0x30) = iVar12 + 1U;
        if (*(uint *)(lVar22 + 0x34) < iVar12 + 1U) {
          FUN_14014a81a(plVar27,iVar12);
        }
        puVar18 = (undefined8 *)(*plVar27 + (longlong)iVar12 * 0x28);
        *puVar18 = 0;
        puVar18[1] = 0;
        *(undefined4 *)(puVar18 + 2) = 0;
        puVar18[3] = 0;
        puVar18[4] = 0;
        FUN_1404e49fa(puVar18,&local_88);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_138 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar26 = lVar26 + 0x10;
    } while (lVar15 * 0x10 != lVar26);
  }
  (**(code **)(*local_168 + 0x318))(local_168,local_160);
  FUN_148a6ed85(local_128,uStack_120 & 0xffffffff);
  if (local_128 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  uVar14 = 0;
LAB_143f05834:
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 143f0631a FUN_143f0631a body=688 status=ok
// SIG undefined FUN_143f0631a(void)

void FUN_143f0631a(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x70) == param_2) {
    iVar2 = *(int *)(param_1 + 0x110);
    if (iVar2 == 0) {
      uVar17 = 1;
      uVar16 = 0;
      iVar13 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x108);
      if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0xf8);
      }
      uVar15 = *puVar8;
      if (uVar15 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar17 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar17 = uVar16;
        }
        iVar13 = 0;
        do {
          if (uVar17 == uVar16) goto LAB_143f06594;
          iVar13 = iVar13 + 0x20;
          uVar15 = puVar8[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar16 = 0;
        iVar13 = 0;
      }
      uVar17 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar17 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar4 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 < iVar2) {
      uVar15 = 0xffffffff;
      do {
        lVar9 = (longlong)iVar4;
        iVar4 = *(int *)(*(longlong *)(param_1 + 0xe8) + 4 + lVar9 * 0x48);
        if ((((iVar4 != 0) &&
             (uVar5 = *(uint *)(*(longlong *)(param_1 + 0xe8) + lVar9 * 0x48), -1 < (int)uVar5)) &&
            ((int)uVar5 < DAT_14c9647dc)) &&
           (((plVar14 = (longlong *)
                        ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             plVar14 != (longlong *)0x0 && ((int)plVar14[2] == iVar4)) &&
            ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
            lVar10 = *plVar14;
          }
          else {
            lVar10 = 0;
          }
          if (*(longlong *)(lVar10 + 0x2b8) != 0) {
            uVar3 = FUN_14657d4c2();
            local_78 = 0;
            uStack_70 = 0;
            iVar2 = *(int *)(*(longlong *)(param_1 + 0xe8) + 4 + lVar9 * 0x48);
            if ((iVar2 == 0) ||
               (uVar5 = *(uint *)(*(longlong *)(param_1 + 0xe8) + lVar9 * 0x48), (int)uVar5 < 0)) {
LAB_143f06589:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((int)uVar5 < DAT_14c9647dc) {
                puVar12 = (undefined8 *)
                          ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
                if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar2)) ||
                   ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143f06589;
                uVar11 = *puVar12;
              }
            }
            FUN_143eee130(uVar3,uVar11,&local_78);
            iVar2 = *(int *)(param_1 + 0x110);
          }
        }
        uVar15 = uVar15 & ~(uint)uVar17;
        puVar8 = *(uint **)(param_1 + 0x108);
        if (*(uint **)(param_1 + 0x108) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0xf8);
        }
        iVar4 = (int)uVar16;
        lVar9 = (longlong)iVar4;
        uVar5 = puVar8[lVar9] & uVar15;
        if (uVar5 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar5 = puVar8[lVar9 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar9 == lVar10) goto LAB_143f06594;
          }
          uVar16 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar15 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar17 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar4 = (iVar13 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar2);
    }
  }
LAB_143f06594:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f065cc FUN_143f065cc body=825 status=ok
// SIG undefined FUN_143f065cc(void)

void * FUN_143f065cc(longlong param_1,longlong param_2,int *param_3,char param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  void *_Dst;
  bool bVar17;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar13 = 0;
    uVar8 = 0;
  }
  else {
    uVar13 = *(uint *)(param_2 + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    uVar8 = *(uint *)(lVar14 + 0x10);
    if (*(uint *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar16 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar16);
      }
      LOCK();
      uVar8 = *(uint *)(lVar14 + 0x10);
      bVar17 = uVar8 == 0;
      if (bVar17) {
        *(uint *)(lVar14 + 0x10) = uVar16;
        uVar8 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar8 = uVar16;
      }
    }
  }
  local_70[0] = CONCAT44(uVar8,uVar13);
  iVar7 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),uVar8 ^ uVar13);
  if (iVar7 != -1) {
    lVar14 = *(longlong *)(param_1 + 0xe8) + (longlong)iVar7 * 0x48;
    plVar11 = (longlong *)(lVar14 + 8);
    if (plVar11 != (longlong *)0x0 && lVar14 != 0) {
      if ((longlong)*(int *)(lVar14 + 0x10) != 0) {
        _Dst = *(void **)(lVar14 + 8);
        lVar9 = (longlong)*(int *)(lVar14 + 0x10) * 0x90;
        do {
          if (((*(byte *)((longlong)_Dst + 0x88) & 1) != 0) &&
             (*(int *)((longlong)_Dst + 0x60) == *param_3)) goto LAB_143f066c8;
          _Dst = (void *)((longlong)_Dst + 0x90);
          lVar9 = lVar9 + -0x90;
        } while (lVar9 != 0);
      }
      _Dst = (void *)0x0;
LAB_143f066c8:
      if (param_4 != '\x01' || _Dst != (void *)0x0) goto LAB_143f066d7;
      _Dst = (void *)0x0;
      lVar9 = FUN_148a6ad30(param_1,param_2);
      if (lVar9 == 0) goto LAB_143f066d7;
      local_80 = DAT_14cb8dd60;
      local_78 = DAT_14cb8dd68;
      FUN_1448075d0(local_70);
      iVar7 = *param_3;
      iVar6 = (int)local_70[0];
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (iVar7 == iVar6) {
        lVar15 = *(longlong *)(lVar9 + 0x160);
        plVar10 = *(longlong **)(lVar9 + 0x168);
LAB_143f067e0:
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if (lVar15 == 0) {
          _Dst = (void *)0x0;
        }
        else {
          iVar7 = *(int *)(lVar14 + 0x10);
          uVar8 = iVar7 + 1;
          *(uint *)(lVar14 + 0x10) = uVar8;
          if (*(uint *)(lVar14 + 0x14) < uVar8) {
            FUN_148a72b9c(plVar11);
          }
          lVar14 = *plVar11;
          lVar9 = (longlong)iVar7 * 0x90;
          _Dst = (void *)(lVar14 + lVar9);
          memset(_Dst,0,0x90);
          FUN_1447a97f4(lVar14 + lVar9 + 0x10,&DAT_14c9485f0);
          puVar2 = (undefined4 *)(lVar14 + lVar9);
          *(undefined8 *)(puVar2 + 0xe) = 0;
          *(undefined8 *)(puVar2 + 0x10) = 0;
          *(undefined8 *)(puVar2 + 0x12) = 0;
          *(undefined8 *)(puVar2 + 0x14) = 0;
          *(undefined8 *)(puVar2 + 0x16) = 0;
          FUN_1447a97f4(puVar2 + 0x18,&DAT_14c9485f0);
          *(undefined2 *)(puVar2 + 0x22) = 0;
          FUN_1447715ec(puVar2 + 0x18,param_3);
          uVar3 = *(undefined4 *)(lVar15 + 0x60);
          uVar4 = *(undefined4 *)(lVar15 + 100);
          uVar5 = *(undefined4 *)(lVar15 + 0x68);
          *puVar2 = *(undefined4 *)(lVar15 + 0x5c);
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          *(byte *)(puVar2 + 0x22) = *(byte *)(puVar2 + 0x22) | 1;
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar10 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        goto LAB_143f066d7;
      }
      if ((longlong)*(int *)(lVar9 + 0x178) != 0) {
        _Dst = (void *)0x0;
        lVar12 = 0;
        do {
          lVar15 = *(longlong *)(*(longlong *)(lVar9 + 0x170) + lVar12);
          if (*(int *)(lVar15 + 8) == *param_3) {
            plVar10 = *(longlong **)(*(longlong *)(lVar9 + 0x170) + 8 + lVar12);
            goto LAB_143f067e0;
          }
          lVar12 = lVar12 + 0x10;
        } while ((longlong)*(int *)(lVar9 + 0x178) * 0x10 != lVar12);
        goto LAB_143f066d7;
      }
    }
  }
  _Dst = (void *)0x0;
LAB_143f066d7:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Dst;
}



// FUNCTION 143f06906 FUN_143f06906 body=428 status=ok
// SIG undefined FUN_143f06906(void)

void FUN_143f06906(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e1890;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_4;
  *param_4 = 0;
  local_50._0_4_ = *(int *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_143f0738a(plVar1,*param_2,param_3);
  plVar3[2] = (longlong)&PTR_FUN_14b4df740;
  plVar3[6] = (longlong)&PTR_FUN_14b4df768;
  plVar3[0xd] = 0;
  *(undefined4 *)(plVar3 + 0xe) = 0;
  FUN_148a7189c(plVar3 + 0xd,&local_58);
  *(undefined1 *)(plVar3 + 0xf) = 0;
  if ((int)local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_143f069fd;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f069fd:
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_143f18bc8(&local_68,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148a7192e(param_1,&local_58);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f06ab4 FUN_143f06ab4 body=1637 status=ok
// SIG undefined FUN_143f06ab4(void)

undefined8 FUN_143f06ab4(longlong param_1,longlong param_2,uint *param_3,int *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined7 uVar17;
  undefined8 uVar16;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98 [2];
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = DAT_14cb8dd60;
  uStack_80 = CONCAT44(uStack_80._4_4_,DAT_14cb8dd68);
  FUN_1448075d0(local_70);
  uVar8 = *param_3;
  uVar15 = (ulonglong)uVar8;
  uVar14 = (uint)local_70[0];
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (uVar8 == uVar14) {
    FUN_1447715ec(param_4,param_3);
    uVar16 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar8 = 0;
      uVar11 = 0;
    }
    else {
      uVar8 = *(uint *)(param_2 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar11 = (ulonglong)*(uint *)(lVar19 + 0x10);
      if (*(uint *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar14 = DAT_14c964868 + 1;
        uVar15 = (ulonglong)uVar14;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar15);
        }
        LOCK();
        uVar7 = *(uint *)(lVar19 + 0x10);
        bVar23 = uVar7 == 0;
        if (bVar23) {
          *(uint *)(lVar19 + 0x10) = uVar14;
          uVar7 = 0;
        }
        UNLOCK();
        uVar11 = (ulonglong)uVar7;
        if (bVar23) {
          uVar11 = uVar15;
        }
      }
    }
    local_70[0] = (ulonglong)uVar8 | uVar11 << 0x20;
    iVar6 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),(uint)uVar11 ^ uVar8);
    uVar17 = (undefined7)(uVar15 >> 8);
    if (iVar6 == -1) {
      uVar16 = CONCAT71(uVar17,4);
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0xe8);
      uVar16 = CONCAT71(uVar17,4);
      if ((lVar19 + (longlong)iVar6 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
        lVar9 = FUN_148a6ad30(param_1,param_2);
        if (lVar9 == 0) {
          uVar16 = CONCAT71(uVar17,5);
        }
        else {
          uVar16 = CONCAT71(uVar17,0xb);
          if ((longlong)*(int *)(lVar9 + 0x178) != 0) {
            lVar19 = lVar19 + (longlong)iVar6 * 0x48;
            lVar18 = 0;
            do {
              lVar22 = *(longlong *)(*(longlong *)(lVar9 + 0x170) + lVar18);
              if (*(uint *)(lVar22 + 8) == *param_3) {
                plVar21 = *(longlong **)(*(longlong *)(lVar9 + 0x170) + 8 + lVar18);
                if (plVar21 == (longlong *)0x0) {
                  if (lVar22 == 0) break;
                  plVar20 = (longlong *)0x0;
                }
                else {
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                  if (lVar22 == 0) {
                    uVar16 = CONCAT71(uVar17,0xb);
                    goto LAB_143f070bd;
                  }
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                  plVar20 = plVar21;
                }
                piVar12 = *(int **)(lVar19 + 8);
                lVar9 = (longlong)*(int *)(lVar19 + 0x10);
                if (lVar9 == 0) {
                  bVar23 = true;
                  piVar13 = piVar12;
                  goto LAB_143f06d3f;
                }
                piVar10 = piVar12 + lVar9 * 0x24;
                lVar9 = lVar9 * 0x90;
                goto LAB_143f06cf5;
              }
              lVar18 = lVar18 + 0x10;
            } while ((longlong)*(int *)(lVar9 + 0x178) * 0x10 != lVar18);
          }
        }
      }
    }
  }
  goto LAB_143f06b2e;
  while( true ) {
    piVar12 = piVar12 + 0x24;
    lVar9 = lVar9 + -0x90;
    piVar13 = piVar10;
    if (lVar9 == 0) break;
LAB_143f06cf5:
    bVar2 = piVar12[3] == *(int *)(lVar22 + 0x68);
    bVar3 = piVar12[2] == *(int *)(lVar22 + 100);
    bVar4 = piVar12[1] == *(int *)(lVar22 + 0x60);
    bVar5 = *piVar12 == *(int *)(lVar22 + 0x5c);
    bVar23 = !bVar2 || (!bVar3 || (!bVar4 || !bVar5));
    piVar13 = piVar12;
    if (bVar2 && (bVar3 && (bVar4 && bVar5))) break;
  }
LAB_143f06d3f:
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar12 = (int *)((longlong)plVar20 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
    LOCK();
    plVar1 = plVar20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar12 = (int *)((longlong)plVar20 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if ((((bVar23 || piVar13 == (int *)0x0) || (piVar13[4] == 0)) || (piVar13[5] == 0)) ||
     (piVar13[4] == DAT_14c948000)) {
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
    }
    piVar12 = *(int **)(lVar19 + 0x18);
    lVar9 = (longlong)*(int *)(lVar19 + 0x20);
    if (lVar9 == 0) {
      bVar23 = true;
      piVar13 = piVar12;
    }
    else {
      lVar18 = lVar9 * 0x38;
      piVar10 = piVar12 + lVar9 * 0xe;
      do {
        bVar2 = piVar12[0xd] == *(int *)(lVar22 + 0x68);
        bVar3 = piVar12[0xc] == *(int *)(lVar22 + 100);
        bVar4 = piVar12[0xb] == *(int *)(lVar22 + 0x60);
        bVar5 = piVar12[10] == *(int *)(lVar22 + 0x5c);
        bVar23 = !bVar2 || (!bVar3 || (!bVar4 || !bVar5));
        piVar13 = piVar12;
        if (bVar2 && (bVar3 && (bVar4 && bVar5))) break;
        piVar12 = piVar12 + 0xe;
        lVar18 = lVar18 + -0x38;
        piVar13 = piVar10;
      } while (lVar18 != 0);
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar20 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar12 = (int *)((longlong)plVar20 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
      LOCK();
      plVar21 = plVar20 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar12 = (int *)((longlong)plVar20 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    if (((!bVar23 && piVar13 != (int *)0x0) && (*piVar13 != 0)) &&
       ((piVar13[1] != 0 && (*piVar13 != DAT_14c948000)))) goto LAB_143f06e86;
    local_88 = 0;
    uStack_80 = 0;
    iVar6 = *(int *)(lVar19 + 0x10);
    local_a0 = plVar20;
    if ((longlong)iVar6 != 0) {
      lVar9 = *(longlong *)(lVar19 + 8);
      lVar18 = 0;
      do {
        uVar15 = uStack_80;
        if ((*(byte *)(lVar9 + 0x88 + lVar18) & 2) != 0) {
          lVar22 = (longlong)(int)uStack_80;
          uVar8 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
          if (uStack_80._4_4_ < uVar8) {
            FUN_14014a81a(&local_88,uVar15 & 0xffffffff);
          }
          FUN_1447a97f4(lVar22 * 0x28 + local_88,lVar18 + lVar9 + 0x10);
        }
        lVar18 = lVar18 + 0x90;
      } while ((longlong)iVar6 * 0x90 != lVar18);
    }
    if ((longlong)*(int *)(lVar19 + 0x20) != 0) {
      lVar9 = *(longlong *)(lVar19 + 0x18);
      lVar18 = (longlong)*(int *)(lVar19 + 0x20) * 0x38;
      do {
        uVar15 = uStack_80;
        lVar22 = (longlong)(int)uStack_80;
        uVar8 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
        if (uStack_80._4_4_ < uVar8) {
          FUN_14014a81a(&local_88,uVar15 & 0xffffffff);
        }
        FUN_1447a97f4(lVar22 * 0x28 + local_88,lVar9);
        lVar9 = lVar9 + 0x38;
        lVar18 = lVar18 + -0x38;
      } while (lVar18 != 0);
    }
    if ((longlong)*(int *)(lVar19 + 0x30) != 0) {
      lVar9 = *(longlong *)(lVar19 + 0x28);
      lVar19 = (longlong)*(int *)(lVar19 + 0x30) * 0x28;
      do {
        uVar15 = uStack_80;
        lVar18 = (longlong)(int)uStack_80;
        uVar8 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
        if (uStack_80._4_4_ < uVar8) {
          FUN_14014a81a(&local_88,uVar15 & 0xffffffff);
        }
        FUN_1447a97f4(lVar18 * 0x28 + local_88,lVar9);
        lVar9 = lVar9 + 0x28;
        lVar19 = lVar19 + -0x28;
      } while (lVar19 != 0);
    }
    plVar20 = local_a0;
    uVar15 = uStack_80 & 0xffffffff;
    if (-1 < (int)uStack_80) {
      uVar14 = (int)uStack_80 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar8 = 1;
      do {
        FUN_140002266(local_98,&DAT_149e063bc);
        FUN_14000bbd8(local_70,local_98);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if ((longlong)(int)uStack_80 == 0) {
LAB_143f07063:
          FUN_1447715ec(param_4,local_70);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar19 = 0;
        while (*(int *)(local_88 + lVar19) != (uint)local_70[0]) {
          lVar19 = lVar19 + 0x28;
          if ((longlong)(int)uStack_80 * 0x28 == lVar19) goto LAB_143f07063;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        bVar23 = uVar8 != uVar14;
        uVar8 = uVar8 + 1;
      } while (bVar23);
    }
    if (((*param_4 == 0) || (param_4[1] == 0)) || (*param_4 == DAT_14c948000)) {
      uVar16 = CONCAT71((int7)(uVar15 >> 8),10);
    }
    else {
      uVar16 = 0;
    }
    FUN_1456d172d(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    piVar13 = piVar13 + 4;
LAB_143f06e86:
    FUN_1447715ec(param_4,piVar13);
    uVar16 = 0;
  }
  plVar21 = plVar20;
  if (plVar20 != (longlong *)0x0) {
LAB_143f070bd:
    LOCK();
    plVar20 = plVar21 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar12 = (int *)((longlong)plVar21 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
LAB_143f06b2e:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 143f0711a FUN_143f0711a body=623 status=ok
// SIG undefined FUN_143f0711a(void)

ulonglong FUN_143f0711a(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78 [3];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_148a6ad30();
  if (lVar6 == 0) {
    plVar7 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),5);
  }
  else {
    local_88 = DAT_14cb8dd60;
    local_80 = DAT_14cb8dd68;
    plVar7 = local_78;
    FUN_1448075d0(plVar7);
    iVar3 = *param_3;
    iVar5 = (int)local_78[0];
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (iVar3 == iVar5) {
      lVar10 = *(longlong *)(lVar6 + 0x160);
      plVar8 = *(longlong **)(lVar6 + 0x168);
LAB_143f071df:
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),0xb);
      if (lVar10 != 0) {
        local_78[0] = 0;
        local_78[1] = 0;
        FUN_1407c869a(lVar10 + 0x5c,local_78,1);
        FUN_140056680(&local_88,L"guid");
        FUN_145964f10(param_4,&local_88,local_78);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        uVar4 = *(uint *)(lVar10 + 0x80);
        FUN_140056680(local_78,&DAT_14b4e00e2);
        FUN_14626eb76(param_4,local_78,(double)uVar4);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140212f8e(&local_88);
        lVar6 = local_88;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        FUN_14021300e(local_78,0x7b2,1,1);
        lVar6 = lVar6 - local_78[0];
        FUN_140056680(local_78,&DAT_14b4e00e8);
        FUN_14626eb76(param_4,local_78,(double)(lVar6 / 10000000));
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        plVar7 = (longlong *)0x0;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),0xb);
      if ((longlong)*(int *)(lVar6 + 0x178) != 0) {
        lVar9 = 0;
        do {
          lVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x170) + lVar9);
          if (*(int *)(lVar10 + 8) == *param_3) {
            plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x170) + 8 + lVar9);
            goto LAB_143f071df;
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)*(int *)(lVar6 + 0x178) * 0x10 != lVar9);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar7 & 0xffffffff;
}



// FUNCTION 143f0738a FUN_143f0738a body=361 status=ok
// SIG undefined FUN_143f0738a(void)

undefined8 * FUN_143f0738a(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[5] = 0;
  *param_1 = &PTR_LAB_14b4df400;
  param_1[4] = &PTR_LAB_14b4df428;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  if (param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)((longlong)param_1 + 0x3c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (iVar2 == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
      param_1[9] = 0;
      param_1[10] = 0;
      if (iVar2 == 0) {
        return param_1;
      }
    }
    else {
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
      param_1[9] = 0;
      param_1[10] = 0;
    }
    uVar1 = *(uint *)((longlong)param_1 + 0x3c);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0)) &&
       (((int)plVar5[2] == iVar2 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar5;
      }
      else {
        lVar3 = 0;
      }
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(lVar3 + 0x38);
    }
  }
  return param_1;
}



// FUNCTION 143f074f4 FUN_143f074f4 body=36 status=ok
// SIG undefined FUN_143f074f4(void)

void FUN_143f074f4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 143f07518 FUN_143f07518 body=1271 status=ok
// SIG undefined FUN_143f07518(void)

void FUN_143f07518(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_143f0798e;
  FUN_1446f470e(&local_38,L"SHIFT",1);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  plVar8 = (longlong *)FUN_1401e3228(&local_38);
  if (plVar8 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)((ulonglong)plStack_30 & 0xffffffff00000000);
    FUN_1446efa72(&local_38,0,4,0x10);
    plStack_30 = (longlong *)CONCAT44(plStack_30._4_4_,4);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_143f07685:
      *local_38 = (longlong)&PTR_LAB_14b4e4420;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_38[2] = lVar10;
      *local_38 = (longlong)&PTR_FUN_14b4e18d0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = (longlong)&LAB_143f07a10;
      *(undefined4 *)(local_38 + 6) = 0;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_143f07685;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar11);
      lVar4 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *local_38 = (longlong)&PTR_LAB_14b4e4420;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_38[2] = lVar9;
      *local_38 = (longlong)&PTR_FUN_14b4e18d0;
      local_38[3] = lVar4;
      local_38[4] = (longlong)plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_38[5] = (longlong)&LAB_143f07a10;
      *(undefined4 *)(local_38 + 6) = 0;
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
    (**(code **)(*plVar8 + 0x170))(plVar8,&local_58,&local_38);
    *(undefined8 **)(param_1 + 0x48) = local_58;
    if ((int)plStack_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_143f0773a;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      plStack_30 = (longlong *)((ulonglong)plStack_30 & 0xffffffff00000000);
    }
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143f0773a:
  FUN_1446f470e(&local_40,L"SHIFT",1);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  local_58 = local_40;
  plVar8 = (longlong *)FUN_1401e3228();
  if (plVar8 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x80))(plVar8,&local_38);
    plVar8 = local_38;
    if (local_38 != (longlong *)0x0) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,4,0x10);
      local_50 = 4;
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_143f078b5:
        *local_58 = &PTR_LAB_14b4e4d10;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_58[2] = lVar10;
        *local_58 = &PTR_FUN_14b4e1940;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = &LAB_143f07a26;
        *(undefined4 *)(local_58 + 6) = 0;
      }
      else {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_143f078b5;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        uVar5 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *local_58 = &PTR_LAB_14b4e4d10;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_58[2] = lVar10;
        *local_58 = &PTR_FUN_14b4e1940;
        local_58[3] = uVar5;
        local_58[4] = plVar3;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        local_58[5] = &LAB_143f07a26;
        *(undefined4 *)(local_58 + 6) = 0;
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
      (**(code **)(*plVar8 + 0x28))(plVar8,&local_48,*(undefined4 *)(param_1 + 0x44),&local_58);
      *(undefined8 *)(param_1 + 0x50) = local_48;
      if (local_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_143f07967;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143f07967:
  plVar8 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_143f0798e:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f07a40 FUN_143f07a40 body=313 status=ok
// SIG undefined FUN_143f07a40(void)

void FUN_143f07a40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1446f470e(&local_38,L"SHIFT",1);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    plVar3 = (longlong *)FUN_1401e3228(&local_38);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x178))(plVar3,(undefined8 *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1446f470e(&local_40,L"SHIFT",1);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    local_28 = local_40;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x30))
                  (local_38,*(undefined4 *)(param_1 + 0x44),(undefined8 *)(param_1 + 0x50));
      }
    }
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f07b7a FUN_143f07b7a body=903 status=ok
// SIG undefined FUN_143f07b7a(void)

void FUN_143f07b7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_94;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar5 = FUN_143f07f02();
  if (cVar5 != '\0') goto LAB_143f07cc2;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f07ec2:
    lVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c);
    lVar7 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x40) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) goto LAB_143f07ec2;
      lVar7 = *plVar8;
    }
  }
  local_38 = &local_a0;
  local_a0 = 0x3000300000000;
  local_98 = 3;
  local_96 = 3;
  local_94 = 0;
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
  local_28 = &local_38;
  local_30 = FUN_143ef2b5a;
  bifrost::account::get(*(undefined8 *)(lVar7 + 0x2b8));
  cVar5 = (char)local_a0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((byte)(cVar5 - 4U) < 0xfe) {
    *(undefined1 *)(param_1 + 0x38) = 0x19;
    *(undefined1 *)(param_1 + 0x18) = 1;
    goto LAB_143f07cc2;
  }
  FUN_143f07518(param_1);
  uVar9 = FUN_14657d4c2();
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  FUN_1446efa72(&local_b0,0,4,0x10);
  local_a8 = 4;
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 == (longlong *)0x0) {
LAB_143f07d37:
    *local_b0 = &PTR_LAB_14b4e1a20;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_b0[2] = lVar10;
    *local_b0 = &PTR_FUN_14b4e19b0;
    local_b0[3] = 0;
    local_b0[4] = 0;
    local_b0[5] = FUN_143f07f7c;
    *(undefined4 *)(local_b0 + 6) = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_143f07d37;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    uVar11 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *local_b0 = &PTR_LAB_14b4e1a20;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_b0[2] = lVar10;
    *local_b0 = &PTR_FUN_14b4e19b0;
    local_b0[3] = uVar11;
    local_b0[4] = plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    local_b0[5] = FUN_143f07f7c;
    *(undefined4 *)(local_b0 + 6) = 0;
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f07ec9:
    uVar11 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar11 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143f07ec9;
      uVar11 = *puVar12;
    }
  }
  FUN_148a5e11a(uVar9,uVar11,&local_b0);
LAB_143f07cc2:
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f07f02 FUN_143f07f02 body=121 status=ok
// SIG undefined FUN_143f07f02(void)

char FUN_143f07f02(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cVar2 = *(char *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    if ((((*(int *)(param_1 + 0x40) != 0) && (uVar1 = *(uint *)(param_1 + 0x3c), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x40))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x2b8) != 0) {
        return '\0';
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 3;
    *(undefined1 *)(param_1 + 0x18) = 1;
    cVar2 = '\x01';
  }
  return cVar2;
}



// FUNCTION 143f07f7c FUN_143f07f7c body=363 status=ok
// SIG undefined FUN_143f07f7c(void)

void FUN_143f07f7c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  
  FUN_143f07a40();
  cVar6 = FUN_143f07f02(param_1);
  if (cVar6 != '\0') goto LAB_143f080ad;
  uVar8 = 0x19;
  if ((longlong)(int)param_3[1] != 0) {
    plVar9 = (longlong *)*param_3;
    plVar7 = plVar9 + (longlong)(int)param_3[1] * 4;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x48);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x50);
    uVar11 = 0;
LAB_143f07fe3:
    iVar10 = 0;
    if (iVar3 != 0) {
      iVar4 = (int)plVar9[1];
      plVar14 = plVar5;
LAB_143f07ff7:
      if ((int)plVar14[1] == iVar4) {
        iVar10 = 1;
        if (1 < iVar4) {
          lVar12 = 0;
          do {
            uVar1 = *(ushort *)(*plVar14 + lVar12);
            uVar2 = *(ushort *)(*plVar9 + lVar12);
            if (uVar1 == uVar2) {
              if (uVar1 == 0) break;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) {
                iVar13 = (uint)uVar1 - (uint)uVar2;
                goto LAB_143f08067;
              }
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
              goto code_r0x000143f08064;
            }
            lVar12 = lVar12 + 2;
          } while( true );
        }
      }
      else {
        if ((int)plVar14[1] + iVar4 != 1) goto LAB_143f08009;
        iVar10 = 1;
      }
    }
    goto LAB_143f08075;
  }
  goto LAB_143f080a6;
code_r0x000143f08064:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_143f08067:
  if (iVar13 == 0) goto LAB_143f08075;
LAB_143f08009:
  plVar14 = plVar14 + 2;
  if (plVar14 == plVar5 + (longlong)iVar3 * 2) goto LAB_143f08073;
  goto LAB_143f07ff7;
LAB_143f08073:
  iVar10 = 0;
LAB_143f08075:
  uVar11 = uVar11 + iVar10;
  plVar9 = plVar9 + 4;
  if (plVar9 == plVar7) goto LAB_143f0808e;
  goto LAB_143f07fe3;
LAB_143f0808e:
  uVar8 = 0x19;
  if (1 < uVar11) {
    uVar8 = 0;
  }
LAB_143f080a6:
  *(undefined1 *)(param_1 + 0x38) = uVar8;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f080ad:
  FUN_148a5b019(*param_3,(int)param_3[1]);
  if (*param_3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f080e8 FUN_143f080e8 body=2449 status=ok
// SIG undefined FUN_143f080e8(void)

void FUN_143f080e8(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_98 [39];
  char local_71;
  uint *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(int *)(param_1 + 0x40) == 0) || (uVar24 = *(uint *)(param_1 + 0x3c), (int)uVar24 < 0))
       || (DAT_14c9647dc <= (int)uVar24)) ||
      ((plVar18 = (longlong *)
                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
       plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + 0x40))))) ||
     ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_143f08803;
  cVar23 = *(char *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar24 = 0;
  if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
    uVar24 = 0;
    uVar15 = 0;
    if (*plVar18 != 0) {
      uVar24 = *(uint *)(*plVar18 + 0xc);
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar27 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar27 = 0;
      }
      uVar15 = *(uint *)(lVar27 + 0x10);
      if (*(uint *)(lVar27 + 0x10) == 0) {
        LOCK();
        iVar25 = DAT_14c964868 + 1;
        UNLOCK();
        uVar17 = DAT_14c964868 + 1;
        bVar28 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar25;
        if (bVar28) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar17);
        }
        LOCK();
        uVar15 = *(uint *)(lVar27 + 0x10);
        bVar28 = uVar15 == 0;
        if (bVar28) {
          *(uint *)(lVar27 + 0x10) = uVar17;
          uVar15 = 0;
        }
        UNLOCK();
        if (bVar28) {
          uVar15 = uVar17;
        }
      }
    }
  }
  else {
    uVar15 = 0;
  }
  plVar18 = (longlong *)(lVar2 + 0x98);
  lVar27 = CONCAT44(uVar15,uVar24);
  uVar15 = uVar15 ^ uVar24;
  iVar25 = *(int *)(lVar2 + 0xa0);
  if (iVar25 != *(int *)(lVar2 + 0xcc)) {
    lVar22 = lVar2 + 0xd0;
    if (*(longlong *)(lVar2 + 0xd8) != 0) {
      lVar22 = *(longlong *)(lVar2 + 0xd8);
    }
    iVar25 = *(int *)(lVar22 + (ulonglong)(*(int *)(lVar2 + 0xe0) - 1U & uVar15) * 4);
    if (iVar25 != -1) {
      lVar22 = *plVar18;
      do {
        lVar6 = (longlong)iVar25;
        local_50 = *(longlong *)(lVar22 + lVar6 * 0x14);
        local_58 = lVar27;
        cVar4 = FUN_148a640b6(&local_50,&local_58);
        lVar22 = *plVar18;
        if (cVar4 != '\0') {
          if (lVar22 + lVar6 * 0x14 != 0) {
            lVar22 = lVar22 + lVar6 * 0x14;
            goto LAB_143f087fd;
          }
          break;
        }
        iVar25 = *(int *)(lVar22 + 0xc + lVar6 * 0x14);
      } while (iVar25 != -1);
    }
    iVar25 = *(int *)(lVar2 + 0xcc);
  }
  local_71 = cVar23;
  local_60 = plVar18;
  if (iVar25 == 0) {
    iVar21 = *(int *)(lVar2 + 0xa0);
    *(int *)(lVar2 + 0xa0) = iVar21 + 1;
    if (*(int *)(lVar2 + 0xa4) == iVar21) {
      FUN_140171ad2(plVar18,iVar21);
    }
    iVar25 = *(int *)(lVar2 + 0xc0);
    if (iVar25 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar9 = iVar25 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    lVar22 = lVar2 + 0xa8;
    iVar12 = iVar25 + 1;
    iVar16 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar16 = iVar25;
    }
    if (iVar16 >> 5 == iVar9) {
      *(int *)(lVar2 + 0xc0) = iVar12;
    }
    else {
      if (*(int *)(lVar2 + 0xc4) <= iVar25) {
        iVar9 = iVar25;
        if (iVar25 + 0x20U < 0xa0) {
          iVar12 = 0x80;
        }
        else {
          uVar24 = iVar25 + 0x20U >> 5;
          local_70 = (uint *)(ulonglong)uVar24;
          if (*(int *)(lVar2 + 0xc4) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar24) {
              uVar17 = uVar24;
            }
          }
          else {
            uVar17 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
          }
          uVar7 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar24 = (uint)(uVar7 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar7 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]];
              }
              else {
                uVar26 = (ulonglong)(uVar24 & 0xfffffff0);
                if (uVar26 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar24 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar8) {
                    uVar14 = (ulonglong)bVar8;
                  }
                  uVar20 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_143f0894a;
                    lVar6 = uVar14 + 1 + uVar20;
                    uVar20 = uVar20 - 1;
                  } while (lVar6 != 0x33);
                }
                uVar7 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar7 = (ulonglong)DAT_14c841df8;
                }
                uVar7 = -uVar7 & (uVar26 + uVar7) - 1;
              }
            }
            else {
              uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
              iVar9 = *(int *)(lVar2 + 0xc0);
            }
          }
LAB_143f0894a:
          iVar5 = (int)(uVar7 >> 2);
          iVar12 = -0x20;
          if ((int)local_70 <= iVar5) {
            iVar12 = iVar5 << 5;
          }
        }
        *(int *)(lVar2 + 0xc4) = iVar12;
        FUN_1446efbd8(lVar22,iVar9);
        iVar12 = *(int *)(lVar2 + 0xc0) + 1;
      }
      iVar9 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar9 = iVar12;
      }
      *(int *)(lVar2 + 0xc0) = iVar12;
      if (iVar12 % 0x20 != 0) {
        lVar6 = *(longlong *)(lVar2 + 0xb8);
        if (*(longlong *)(lVar2 + 0xb8) == 0) {
          lVar6 = lVar22;
        }
        bVar8 = -(char)(iVar12 % 0x20);
        *(uint *)(lVar6 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)(lVar6 + (longlong)(iVar9 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar21;
    if (*(longlong *)(lVar2 + 0xb8) != 0) {
      lVar22 = *(longlong *)(lVar2 + 0xb8);
    }
    bVar8 = (byte)iVar25 & 0x1f;
    puVar11 = (uint *)(lVar22 + (longlong)(iVar16 >> 5) * 4);
    *puVar11 = *puVar11 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar21 = *(int *)(lVar2 + 200);
    lVar6 = (longlong)iVar21;
    iVar9 = *(int *)(*(longlong *)(lVar2 + 0x98) + 4 + lVar6 * 0x14);
    *(int *)(lVar2 + 200) = iVar9;
    *(int *)(lVar2 + 0xcc) = iVar25 + -1;
    if (iVar25 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar9 * 0x14) = 0xffffffff;
    }
  }
  local_70 = (uint *)(lVar2 + 0xa8);
  uVar24 = 1 << ((byte)iVar21 & 0x1f);
  puVar11 = *(uint **)(lVar2 + 0xb8);
  if (*(uint **)(lVar2 + 0xb8) == (uint *)0x0) {
    puVar11 = local_70;
  }
  iVar25 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar25 = iVar21;
  }
  puVar11[iVar25 >> 5] = puVar11[iVar25 >> 5] | uVar24;
  uVar17 = 1;
  plVar18 = (longlong *)(*(longlong *)(lVar2 + 0x98) + lVar6 * 0x14);
  *plVar18 = lVar27;
  *(undefined1 *)(plVar18 + 1) = 0;
  *(undefined4 *)((longlong)plVar18 + 0xc) = 0xffffffff;
  local_68 = (longlong)iVar21;
  if (*(int *)(lVar2 + 0xa0) - *(int *)(lVar2 + 0xcc) == 1) {
    uVar24 = 1;
LAB_143f083d3:
    cVar23 = local_71;
    if (((int)uVar24 < 1) || ((int)uVar17 <= *(int *)(lVar2 + 0xe0))) {
      uVar15 = *(int *)(lVar2 + 0xe0) - 1U & uVar15;
      *(uint *)(plVar18 + 2) = uVar15;
      lVar27 = *(longlong *)(lVar2 + 0xd8);
      if (*(longlong *)(lVar2 + 0xd8) == 0) {
        lVar27 = lVar2 + 0xd0;
      }
      *(undefined4 *)((longlong)plVar18 + 0xc) =
           *(undefined4 *)
            (lVar27 + ((longlong)*(int *)(lVar2 + 0xe0) - 1U & (longlong)(int)uVar15) * 4);
      lVar27 = *(longlong *)(lVar2 + 0xd8);
      if (*(longlong *)(lVar2 + 0xd8) == 0) {
        lVar27 = lVar2 + 0xd0;
      }
      *(int *)(lVar27 + ((longlong)*(int *)(lVar2 + 0xe0) - 1U & (longlong)(int)uVar15) * 4) =
           iVar21;
    }
    else {
      *(uint *)(lVar2 + 0xe0) = uVar17;
      plVar18 = (longlong *)(lVar2 + 0xd8);
      if (*(longlong *)(lVar2 + 0xd8) != 0) {
        FUN_1446efa72(plVar18,0,0,4);
        uVar17 = *(uint *)(lVar2 + 0xe0);
      }
      if (uVar17 != 0) {
        lVar27 = lVar2 + 0xd0;
        if (uVar17 == 1) {
          if (*plVar18 != 0) {
            FUN_1446efa72(plVar18,0,0,4);
          }
LAB_143f0843e:
          uVar24 = 0;
          do {
            lVar22 = *(longlong *)(lVar2 + 0xd8);
            if (*(longlong *)(lVar2 + 0xd8) == 0) {
              lVar22 = lVar27;
            }
            *(undefined4 *)(lVar22 + (ulonglong)(*(int *)(lVar2 + 0xe0) + 0x7fffffffU & uVar24) * 4)
                 = 0xffffffff;
            uVar24 = uVar24 + 1;
          } while (uVar17 != uVar24);
        }
        else {
          FUN_1446efa72(plVar18,0,uVar17,4);
          if (0 < (int)uVar17) goto LAB_143f0843e;
        }
        iVar25 = *(int *)(lVar2 + 0xc0);
        if (iVar25 == 0) {
          uVar7 = 0;
          puVar13 = &DAT_00000001;
          iVar9 = 0;
          iVar21 = 0;
        }
        else {
          puVar11 = *(uint **)(lVar2 + 0xb8);
          if (*(uint **)(lVar2 + 0xb8) == (uint *)0x0) {
            puVar11 = local_70;
          }
          uVar24 = *puVar11;
          if (uVar24 == 0) {
            iVar21 = iVar25 + 0x1e;
            if (-1 < iVar25 + -1) {
              iVar21 = iVar25 + -1;
            }
            uVar7 = 0;
            uVar26 = (ulonglong)(uint)(iVar21 >> 5);
            if (iVar21 >> 5 < 1) {
              uVar26 = uVar7;
            }
            iVar9 = 0;
            do {
              if (uVar26 == uVar7) goto LAB_143f087e4;
              iVar9 = iVar9 + 0x20;
              uVar24 = puVar11[uVar7 + 1];
              uVar7 = uVar7 + 1;
            } while (uVar24 == 0);
          }
          else {
            uVar7 = 0;
            iVar9 = 0;
          }
          puVar13 = (undefined1 *)(ulonglong)(-uVar24 & uVar24);
          uVar26 = (longlong)puVar13 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar21 = (iVar9 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar25 <= iVar21) {
            iVar21 = iVar25;
          }
        }
        if (iVar21 < iVar25) {
          uVar24 = 0xffffffff;
          do {
            lVar22 = *(longlong *)(lVar2 + 0x98);
            lVar19 = (longlong)iVar21;
            uVar3 = *(undefined8 *)(lVar22 + lVar19 * 0x14);
            uVar26 = (longlong)(int)((uint)((ulonglong)uVar3 >> 0x20) ^ (uint)uVar3) &
                     (longlong)*(int *)(lVar2 + 0xe0) - 1U;
            iVar25 = (int)uVar26;
            *(int *)(lVar22 + 0x10 + lVar19 * 0x14) = iVar25;
            lVar6 = *(longlong *)(lVar2 + 0xd8);
            if (*(longlong *)(lVar2 + 0xd8) == 0) {
              lVar6 = lVar27;
            }
            *(undefined4 *)(lVar22 + 0xc + lVar19 * 0x14) =
                 *(undefined4 *)(lVar6 + ((longlong)*(int *)(lVar2 + 0xe0) - 1U & uVar26) * 4);
            lVar22 = *(longlong *)(lVar2 + 0xd8);
            if (*(longlong *)(lVar2 + 0xd8) == 0) {
              lVar22 = lVar27;
            }
            *(int *)(lVar22 + ((longlong)iVar25 & (longlong)*(int *)(lVar2 + 0xe0) - 1U) * 4) =
                 iVar21;
            uVar24 = ~(uint)puVar13 & uVar24;
            puVar11 = *(uint **)(lVar2 + 0xb8);
            if (*(uint **)(lVar2 + 0xb8) == (uint *)0x0) {
              puVar11 = local_70;
            }
            iVar25 = *(int *)(lVar2 + 0xc0);
            iVar21 = (int)uVar7;
            lVar22 = (longlong)iVar21;
            uVar15 = puVar11[lVar22] & uVar24;
            if (uVar15 == 0) {
              iVar12 = iVar25 + 0x1e;
              if (-1 < iVar25 + -1) {
                iVar12 = iVar25 + -1;
              }
              iVar12 = iVar12 >> 5;
              iVar16 = iVar12;
              if (iVar12 < iVar21) {
                iVar16 = iVar21;
              }
              if (iVar12 <= iVar21) break;
              lVar6 = 0;
              while( true ) {
                iVar9 = iVar9 + 0x20;
                uVar15 = puVar11[lVar6 + lVar22 + 1];
                if (uVar15 != 0) break;
                lVar6 = lVar6 + 1;
                if (iVar16 - lVar22 == lVar6) goto LAB_143f087e4;
              }
              uVar7 = (ulonglong)(iVar21 + (int)lVar6 + 1);
              uVar24 = 0xffffffff;
            }
            puVar13 = (undefined1 *)(ulonglong)(-uVar15 & uVar15);
            uVar26 = (longlong)puVar13 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar21 = (iVar9 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          } while (iVar21 < iVar25);
        }
      }
    }
  }
  else {
    local_50 = lVar27;
    iVar9 = FUN_143f16066(local_60,uVar15);
    if (iVar9 == -1) {
      uVar24 = *(int *)(lVar2 + 0xa0) - *(int *)(lVar2 + 0xcc);
      if (3 < uVar24) {
        uVar7 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
        lVar27 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        uVar17 = 1 << ((byte)lVar27 & 0x1f);
      }
      goto LAB_143f083d3;
    }
    lVar27 = *(longlong *)(lVar2 + 0x98);
    lVar22 = *plVar18;
    *(int *)(lVar27 + 8 + (longlong)iVar9 * 0x14) = (int)plVar18[1];
    *(longlong *)(lVar27 + (longlong)iVar9 * 0x14) = lVar22;
    lVar27 = *(longlong *)(lVar2 + 0x98);
    if (*(int *)(lVar2 + 0xcc) != 0) {
      *(int *)(lVar27 + (longlong)*(int *)(lVar2 + 200) * 0x14) = iVar21;
    }
    puVar1 = (undefined4 *)(lVar27 + local_68 * 0x14);
    *puVar1 = 0xffffffff;
    if (*(int *)(lVar2 + 0xcc) < 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *(undefined4 *)(lVar2 + 200);
    }
    puVar1[1] = uVar10;
    *(int *)(lVar2 + 200) = iVar21;
    *(int *)(lVar2 + 0xcc) = *(int *)(lVar2 + 0xcc) + 1;
    puVar11 = local_70;
    if (*(uint **)(lVar2 + 0xb8) != (uint *)0x0) {
      puVar11 = *(uint **)(lVar2 + 0xb8);
    }
    puVar11[iVar25 >> 5] = puVar11[iVar25 >> 5] & ~uVar24;
    cVar23 = local_71;
  }
LAB_143f087e4:
  lVar22 = *local_60 + local_68 * 0x14;
LAB_143f087fd:
  *(bool *)(lVar22 + 8) = cVar23 == '\0';
LAB_143f08803:
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (plVar18 = *(longlong **)(param_1 + 0x58), plVar18 != (longlong *)0x0)) {
    (**(code **)(*plVar18 + 0x60))(plVar18,*(undefined1 *)(param_1 + 0x38));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f08a7a FUN_143f08a7a body=32 status=ok
// SIG undefined FUN_143f08a7a(void)

undefined8 FUN_143f08a7a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FQueryPlayerCanUseCrossSaveTask");
  return param_2;
}



// FUNCTION 143f08a9a FUN_143f08a9a body=1312 status=ok
// SIG undefined FUN_143f08a9a(void)

void FUN_143f08a9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  wchar_t *local_88;
  undefined4 local_80;
  code *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  code *local_48;
  int local_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar6 = FUN_143f08fbc();
  if (cVar6 != '\0') goto LAB_143f08ac2;
  if ((((*(char *)(param_1 + 0x58) == '\x01') &&
       (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))(), lVar8 != 0)) &&
      (*(longlong *)(lVar8 + 0x1f0) != 0)) && (lVar8 = FUN_141028a6c(), lVar8 != 0)) {
    local_48 = (code *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    plVar13 = *(longlong **)(param_1 + 0x10);
    if (plVar13 == (longlong *)0x0) {
LAB_143f08b6f:
      *(undefined ***)local_48 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_48 + 0x10) = lVar11;
      *(undefined ***)local_48 = &PTR_FUN_14b4e1a90;
      *(undefined8 *)(local_48 + 0x18) = 0;
      *(undefined8 *)(local_48 + 0x20) = 0;
      *(longlong *)(local_48 + 0x28) = param_1;
    }
    else {
      iVar7 = (int)plVar13[1];
      do {
        if (iVar7 == 0) goto LAB_143f08b6f;
        LOCK();
        iVar4 = (int)plVar13[1];
        bVar14 = iVar7 == iVar4;
        if (bVar14) {
          *(int *)(plVar13 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar14);
      uVar9 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *(undefined ***)local_48 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_48 + 0x10) = lVar11;
      *(undefined ***)local_48 = &PTR_FUN_14b4e1a90;
      *(undefined8 *)(local_48 + 0x18) = uVar9;
      *(longlong **)(local_48 + 0x20) = plVar13;
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      *(longlong *)(local_48 + 0x28) = param_1;
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    FUN_1448b6402(lVar8 + 0xb8,local_58,&local_48);
    if (local_40 == 0) {
LAB_143f08bf9:
      if (local_48 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_48 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
      goto LAB_143f08bf9;
    }
    *(longlong *)(param_1 + 0x80) = local_58[0];
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x138) == 0) {
    local_58[0] = 0;
    local_58[1] = 0;
    uVar9 = FUN_140b74eb8();
    FUN_140056680(&local_78,uVar9);
    local_48 = local_78;
    local_40 = local_70 + -1;
    if (local_70 == 0) {
      local_40 = 0;
    }
    local_38 = L"GbxCrossSave.cache";
    local_30 = 0x12;
    FUN_140bee87a(&local_68,&local_48,2);
    puVar12 = local_68;
    if (local_60 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    FUN_140f7cb10(local_58,puVar12,0,0);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = *(longlong *)(param_1 + 0x30);
    FUN_14047afda(&local_48,local_58);
    cVar6 = FUN_14047b282(local_48,lVar8 + 0x138,0);
    if (cVar6 == '\0') {
      plVar13 = (longlong *)CONCAT44(uStack_3c,local_40);
      if (plVar13 != (longlong *)0x0) {
LAB_143f08d9d:
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x138);
      plVar13 = (longlong *)CONCAT44(uStack_3c,local_40);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      if (lVar8 != 0) {
        local_48 = (code *)CONCAT44(local_48._4_4_,0xffffffff);
        local_88 = L"version";
        local_80 = 7;
        cVar6 = FUN_14047faa2(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x138));
        if ((cVar6 == '\0') || (1 < (int)local_48)) {
          lVar8 = *(longlong *)(param_1 + 0x30);
          *(undefined8 *)(lVar8 + 0x138) = 0;
          plVar13 = *(longlong **)(lVar8 + 0x140);
          if (plVar13 != (longlong *)0x0) {
            *(undefined8 *)(lVar8 + 0x140) = 0;
            goto LAB_143f08d9d;
          }
        }
      }
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f08f7b:
    uVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar9 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143f08f7b;
      uVar9 = *puVar10;
    }
  }
  FUN_143eedefc(uVar9);
  FUN_143f07518(param_1);
  local_48 = FUN_143f090dc;
  local_40 = 0;
  FUN_148a6b5ba(local_98,param_1);
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f08f82:
    uVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar9 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143f08f82;
      uVar9 = *puVar10;
    }
  }
  FUN_148a5da3c(uVar9,local_98);
LAB_143f08ac2:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f08fbc FUN_143f08fbc body=288 status=ok
// SIG undefined FUN_143f08fbc(void)

char FUN_143f08fbc(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar2 = *(char *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    uVar3 = 3;
    if (((((*(int *)(param_1 + 0x40) != 0) && (uVar1 = *(uint *)(param_1 + 0x3c), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x40))))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      if (*(longlong *)(lVar5 + 0x2b8) != 0) {
        uVar3 = 5;
        if (((*(int *)(param_1 + 0x7c) != 0) && (uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1)
            ) && (((int)uVar1 < DAT_14c9647dc &&
                  (((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8),
                    lVar5 != 0 && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x7c))) &&
                   ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
          uVar3 = 7;
          if (((*(int *)(param_1 + 0x74) != 0) &&
              (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
             (((int)uVar1 < DAT_14c9647dc &&
              (((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0
                && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x74))) &&
               ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
            return '\0';
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x38) = uVar3;
    *(undefined1 *)(param_1 + 0x18) = 1;
    cVar2 = '\x01';
  }
  return cVar2;
}



// FUNCTION 143f090dc FUN_143f090dc body=926 status=ok
// SIG undefined FUN_143f090dc(void)

void FUN_143f090dc(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143f07a40();
  cVar4 = FUN_143f08fbc(param_1);
  if (cVar4 != '\0') goto LAB_143f0914b;
  switch(param_2) {
  case 0:
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (((((*(int *)(param_1 + 0x40) == 0) || (uVar5 = *(uint *)(param_1 + 0x3c), (int)uVar5 < 0))
         || (DAT_14c9647dc <= (int)uVar5)) ||
        ((plVar9 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x40))))) ||
       (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)))) {
      local_50._0_4_ = 0;
      uVar5 = 0;
      uVar1 = (uint)local_50;
    }
    else {
      uVar1 = *(uint *)(*plVar9 + 0xc);
      local_50 = (code *)(ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar5 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar5 = *(uint *)(lVar10 + 0x10);
        bVar11 = uVar5 == 0;
        if (bVar11) {
          *(uint *)(lVar10 + 0x10) = uVar8;
          uVar5 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_50;
        if (bVar11) {
          uVar5 = uVar8;
        }
      }
    }
    local_50._0_4_ = uVar1;
    local_50 = (code *)CONCAT44(uVar5,(uint)local_50);
    puVar6 = (undefined8 *)FUN_148a735b2(lVar2 + 0xe8,uVar5 ^ (uint)local_50);
    FUN_148a6ed85(*puVar6,*(undefined4 *)(puVar6 + 1));
    *(undefined4 *)(puVar6 + 1) = 0;
    if (*(int *)((longlong)puVar6 + 0xc) != 0) {
      FUN_148a6edae(puVar6);
    }
    FUN_148a6e8c1(puVar6[2],*(undefined4 *)(puVar6 + 3));
    *(undefined4 *)(puVar6 + 3) = 0;
    if (*(int *)((longlong)puVar6 + 0x1c) != 0) {
      FUN_148a6ee44(puVar6 + 2,0);
    }
    FUN_1456d172d(puVar6[4],*(undefined4 *)(puVar6 + 5));
    *(undefined4 *)(puVar6 + 5) = 0;
    if (*(int *)((longlong)puVar6 + 0x2c) != 0) {
      FUN_140179e18(puVar6 + 4,0);
    }
    *(undefined1 *)(puVar6 + 6) = 0;
    if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0941d:
      uVar7 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x3c);
      uVar7 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x40) ||
            ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143f0941d;
        uVar7 = *puVar6;
      }
    }
    cVar4 = FUN_143f056fe(*(undefined8 *)(param_1 + 0x30),uVar7,param_3,1);
    if (cVar4 == '\0') {
      if (*(int *)(param_1 + 0x7c) == 0) {
LAB_143f0944b:
        uVar7 = 0;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x78);
        uVar7 = 0;
        if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x7c) ||
              ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143f0944b;
          uVar7 = *puVar6;
        }
      }
      local_50 = FUN_143f09780;
      local_48 = 0;
      FUN_148a6b75c(local_40,param_1);
      FUN_1489af5c0(uVar7,&local_50,local_40);
      *(code **)(param_1 + 0x88) = local_50;
      if (*(int *)(param_1 + 0x7c) == 0) {
LAB_143f09452:
        uVar7 = 0;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x78);
        uVar7 = 0;
        if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x7c) ||
              ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143f09452;
          uVar7 = *puVar6;
        }
      }
      FUN_1458e19a0(uVar7);
      goto LAB_143f0914b;
    }
    *(char *)(param_1 + 0x38) = cVar4;
    goto LAB_143f09147;
  case 1:
    break;
  case 2:
    param_2 = 0x18;
    break;
  case 3:
    param_2 = 0x19;
    break;
  case 4:
    param_2 = 0x1a;
    break;
  case 5:
    param_2 = 0x1b;
    break;
  case 6:
    param_2 = 0x1c;
    break;
  case 7:
    param_2 = 0x1d;
    break;
  case 8:
    param_2 = 0x1e;
    break;
  default:
    param_2 = 0x1f;
  }
  *(undefined1 *)(param_1 + 0x38) = param_2;
LAB_143f09147:
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0914b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0947c FUN_143f0947c body=772 status=ok
// SIG undefined FUN_143f0947c(void)

void FUN_143f0947c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  
  pwVar10 = (wchar_t *)CONCAT71((int7)((ulonglong)param_3 >> 8),*(char *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x38) == '\0') {
    pwVar10 = (wchar_t *)0x0;
  }
  else if (((((*(int *)(param_1 + 0x40) != 0) &&
             (uVar12 = *(uint *)(param_1 + 0x3c), -1 < (int)uVar12)) &&
            ((int)uVar12 < DAT_14c9647dc)) &&
           ((puVar11 = (ulonglong *)
                       ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 4)),
            puVar11 != (ulonglong *)0x0 && ((int)puVar11[2] == *(int *)(param_1 + 0x40))))) &&
          ((puVar11[1] & 0x10200000) == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar12 = 0;
    if ((puVar11[1] & 0x10200000) == 0) {
      pwVar10 = (wchar_t *)*puVar11;
      uVar3 = 0;
      uVar12 = 0;
      if (pwVar10 != (wchar_t *)0x0) {
        uVar12 = *(uint *)(pwVar10 + 6);
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 4);
        }
        else {
          lVar13 = 0;
        }
        uVar3 = (ulonglong)*(uint *)(lVar13 + 0x10);
        if (*(uint *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar9 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar14) {
            pwVar10 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar9);
          }
          LOCK();
          uVar2 = *(uint *)(lVar13 + 0x10);
          bVar14 = uVar2 == 0;
          if (bVar14) {
            *(uint *)(lVar13 + 0x10) = uVar9;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar14) {
            uVar2 = uVar9;
          }
          uVar3 = (ulonglong)uVar2;
        }
      }
    }
    else {
      uVar3 = 0;
    }
    FUN_148a733c2(lVar5 + 0xe8,(ulonglong)uVar12 | uVar3 << 0x20);
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
LAB_143f0971b:
      lVar5 = 0;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x3c);
      lVar5 = 0;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 4));
        pwVar10 = DAT_14c9647c8;
        if ((plVar6 == (longlong *)0x0) ||
           (((int)plVar6[2] != iVar1 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
        goto LAB_143f0971b;
        lVar5 = *plVar6;
      }
    }
    if (*(longlong *)(lVar5 + 0x2b8) != 0) {
      uVar4 = FUN_14657d4c2();
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f09750:
        uVar8 = 0;
      }
      else {
        uVar12 = *(uint *)(param_1 + 0x3c);
        uVar8 = 0;
        if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 4));
          if ((puVar7 == (undefined8 *)0x0) ||
             ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_143f09750;
          uVar8 = *puVar7;
        }
      }
      pwVar10 = (wchar_t *)0x0;
      FUN_143eee028(uVar4,uVar8,0);
      iVar1 = *(int *)(param_1 + 0x40);
    }
    if (iVar1 == 0) {
LAB_143f09722:
      uVar4 = 0;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x3c);
      pwVar10 = (wchar_t *)(ulonglong)uVar12;
      uVar4 = 0;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
        pwVar10 = (wchar_t *)(ulonglong)(uVar12 >> 0x10);
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (longlong)pwVar10 * 4));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != iVar1 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
        goto LAB_143f09722;
        uVar4 = *puVar7;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x300))(*(longlong **)(param_1 + 0x30),uVar4);
    pwVar10 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar10 >> 8),*(undefined1 *)(param_1 + 0x38));
  }
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (plVar6 = *(longlong **)(param_1 + 0x60), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x60))(plVar6,(ulonglong)pwVar10 & 0xffffffff);
    pwVar10 = (wchar_t *)(ulonglong)*(byte *)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar12 = *(uint *)(param_1 + 0x3c);
    uVar4 = 0;
    if (((int)uVar12 < 0) || (DAT_14c9647dc <= (int)uVar12)) goto LAB_143f09699;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar12 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 4));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x40) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar7;
      goto LAB_143f09699;
    }
  }
  uVar4 = 0;
LAB_143f09699:
                    /* WARNING: Could not recover jumptable at 0x000143f096ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x30) + 800))(*(longlong **)(param_1 + 0x30),uVar4,pwVar10)
  ;
  return;
}



// FUNCTION 143f09780 FUN_143f09780 body=3322 status=ok
// SIG undefined FUN_143f09780(void)

void FUN_143f09780(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  ushort uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  int *piVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int *piVar25;
  bool bVar26;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  int local_1ac;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  int *local_190;
  longlong *local_188;
  longlong local_180;
  wchar_t *local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  wchar_t *local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined4 local_110;
  longlong local_108 [3];
  wchar_t *local_f0;
  undefined4 local_e8;
  longlong *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  longlong local_90;
  code *local_88;
  longlong **pplStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar8 = FUN_143f08fbc();
  if (cVar8 != '\0') goto LAB_143f097bc;
  if (*(int *)(param_1 + 0x7c) == 0) {
LAB_143f0a3c0:
    lVar24 = 0;
  }
  else {
    uVar22 = *(uint *)(param_1 + 0x78);
    lVar24 = 0;
    if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
      plVar12 = (longlong *)
                ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
      if ((plVar12 == (longlong *)0x0) ||
         (((int)plVar12[2] != *(int *)(param_1 + 0x7c) ||
          ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143f0a3c0;
      lVar24 = *plVar12;
    }
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) && (cVar8 = FUN_14480f766(lVar24 + 0x180), cVar8 != '\0')
     ) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  uVar23 = 0;
  if (((((*(int *)(param_1 + 0x40) == 0) || (uVar22 = *(uint *)(param_1 + 0x3c), (int)uVar22 < 0))
       || (DAT_14c9647dc <= (int)uVar22)) ||
      ((plVar18 = (longlong *)
                  ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
       plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + 0x40))))) ||
     ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) {
    uVar22 = 0;
  }
  else {
    uVar23 = 0;
    uVar22 = 0;
    if (*plVar18 != 0) {
      uVar22 = *(uint *)(*plVar18 + 0xc);
      uVar23 = (ulonglong)uVar22;
      if ((int)uVar22 < DAT_14c9647dc) {
        lVar24 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
      }
      else {
        lVar24 = 0;
      }
      uVar22 = *(uint *)(lVar24 + 0x10);
      if (*(uint *)(lVar24 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar22 = *(uint *)(lVar24 + 0x10);
        bVar26 = uVar22 == 0;
        if (bVar26) {
          *(uint *)(lVar24 + 0x10) = uVar16;
          uVar22 = 0;
        }
        UNLOCK();
        if (bVar26) {
          uVar22 = uVar16;
        }
      }
    }
  }
  local_88 = (code *)(uVar23 | (ulonglong)uVar22 << 0x20);
  iVar9 = FUN_148a72ae6(plVar12,uVar22 ^ (uint)uVar23);
  if (iVar9 != -1) {
    lVar24 = *plVar12;
    if ((lVar24 + (longlong)iVar9 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      lVar24 = lVar24 + (longlong)iVar9 * 0x48;
      if ((*(char *)(*(longlong *)(param_1 + 0x30) + 0x58) == '\x01') &&
         (iVar9 = *(int *)(lVar24 + 0x10), (longlong)iVar9 != 0)) {
        local_190 = *(int **)(lVar24 + 8);
        piVar21 = local_190 + 4;
        lVar15 = 0;
        do {
          local_a8 = DAT_14cb8dd60;
          local_a0 = DAT_14cb8dd68;
          FUN_1448075d0(&local_88,&local_a8);
          iVar2 = *piVar21;
          iVar7 = (int)local_88;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (iVar2 == iVar7) {
            local_190 = (int *)((longlong)local_190 - lVar15);
            if (local_190 != (int *)0x0) {
              local_a0 = DAT_14cb8dd68;
              local_a8 = DAT_14cb8dd60;
              FUN_1448075d0(&local_88);
              FUN_1404e49fa(local_190 + 0x18,&local_88);
              if (local_70 != 0) {
                FUN_1400020a8();
              }
              *(byte *)(piVar21 + 0x1e) = *(byte *)(piVar21 + 0x1e) | 1;
            }
            break;
          }
          lVar15 = lVar15 + -0x90;
          piVar21 = piVar21 + 0x24;
        } while (-lVar15 != (longlong)iVar9 * 0x90);
      }
      if ((longlong)(int)param_2[1] != 0) {
        plVar12 = (longlong *)*param_2;
        plVar18 = plVar12 + (longlong)(int)param_2[1] * 2;
        do {
          lVar15 = *plVar12;
          plVar11 = (longlong *)plVar12[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          piVar21 = *(int **)(lVar24 + 8);
          lVar20 = (longlong)*(int *)(lVar24 + 0x10);
          if (lVar20 == 0) {
            bVar26 = true;
            piVar25 = piVar21;
          }
          else {
            piVar10 = piVar21 + lVar20 * 0x24;
            lVar20 = lVar20 * 0x90;
            do {
              bVar3 = piVar21[3] == *(int *)(lVar15 + 0x68);
              bVar4 = piVar21[2] == *(int *)(lVar15 + 100);
              bVar5 = piVar21[1] == *(int *)(lVar15 + 0x60);
              bVar6 = *piVar21 == *(int *)(lVar15 + 0x5c);
              bVar26 = !bVar3 || (!bVar4 || (!bVar5 || !bVar6));
              piVar25 = piVar21;
              if (bVar3 && (bVar4 && (bVar5 && bVar6))) break;
              piVar21 = piVar21 + 0x24;
              lVar20 = lVar20 + -0x90;
              piVar25 = piVar10;
            } while (lVar20 != 0);
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar21 = (int *)((longlong)plVar11 + 0xc);
              *piVar21 = *piVar21 + -1;
              UNLOCK();
              if (*piVar21 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (!(bool)(bVar26 | piVar25 == (int *)0x0)) {
            FUN_1447715ec(piVar25 + 0x18,*plVar12 + 8);
            *(byte *)(piVar25 + 0x22) = *(byte *)(piVar25 + 0x22) | 1;
          }
          plVar12 = plVar12 + 2;
        } while (plVar12 != plVar18);
      }
      cVar8 = FUN_143f08fbc(param_1);
      if (cVar8 != '\0') goto LAB_143f097bc;
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
      uVar22 = 0;
      if ((((*(int *)(param_1 + 0x40) == 0) || (uVar16 = *(uint *)(param_1 + 0x3c), (int)uVar16 < 0)
           ) || (DAT_14c9647dc <= (int)uVar16)) ||
         (((plVar18 = (longlong *)
                      ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
           plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + 0x40))) ||
          ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) {
        uVar16 = 0;
      }
      else {
        uVar22 = 0;
        uVar16 = 0;
        if (*plVar18 != 0) {
          uVar22 = *(uint *)(*plVar18 + 0xc);
          if ((int)uVar22 < DAT_14c9647dc) {
            lVar24 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
          }
          else {
            lVar24 = 0;
          }
          uVar16 = *(uint *)(lVar24 + 0x10);
          if (*(uint *)(lVar24 + 0x10) == 0) {
            LOCK();
            iVar9 = DAT_14c964868 + 1;
            UNLOCK();
            uVar14 = DAT_14c964868 + 1;
            bVar26 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar9;
            if (bVar26) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar14);
            }
            LOCK();
            uVar16 = *(uint *)(lVar24 + 0x10);
            bVar26 = uVar16 == 0;
            if (bVar26) {
              *(uint *)(lVar24 + 0x10) = uVar14;
              uVar16 = 0;
            }
            UNLOCK();
            if (bVar26) {
              uVar16 = uVar14;
            }
          }
        }
      }
      local_88 = (code *)CONCAT44(uVar16,uVar22);
      iVar9 = FUN_148a72ae6(plVar12,uVar16 ^ uVar22);
      if (iVar9 != -1) {
        lVar24 = *plVar12;
        if ((lVar24 + (longlong)iVar9 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
          lVar24 = lVar24 + (longlong)iVar9 * 0x48;
          if ((*(int *)(lVar24 + 0x10) != 0) &&
             (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x138), lVar15 != 0)) {
            local_a8 = L"users";
            local_a0 = 5;
            cVar8 = FUN_140480164(lVar15,&local_a8,&local_98);
            if ((cVar8 != '\0') && (local_98 != (longlong *)0x0)) {
              if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0a42a:
                lVar15 = 0;
              }
              else {
                uVar22 = *(uint *)(param_1 + 0x3c);
                lVar15 = 0;
                if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
                  plVar12 = (longlong *)
                            ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
                  if ((plVar12 == (longlong *)0x0) ||
                     (((int)plVar12[2] != *(int *)(param_1 + 0x40) ||
                      ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_143f0a42a;
                  lVar15 = *plVar12;
                }
              }
              local_c8 = &local_b8;
              local_b8 = 0;
              uStack_b0 = 0;
              pplStack_80 = &local_c8;
              local_88 = FUN_143f00b4a;
              local_180 = lVar24;
              bifrost::users::shiftId(*(undefined4 *)(lVar15 + 0x248));
              if ((longlong)(int)local_98[1] != 0) {
                plVar12 = (longlong *)*local_98;
                plVar18 = plVar12 + (longlong)(int)local_98[1] * 2;
                local_198 = plVar18;
                do {
                  if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
                    plVar11 = (longlong *)(*(code *)**(undefined8 **)*plVar12)();
                    lVar24 = *plVar11;
                    plVar11 = (longlong *)plVar11[1];
                    if (plVar11 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                      UNLOCK();
                    }
                    if (lVar24 == 0) {
                      iVar9 = 3;
                    }
                    else {
                      local_c8 = (longlong *)0x0;
                      uStack_c0 = 0;
                      local_d8 = &DAT_149f0f4f8;
                      local_d0 = 2;
                      cVar8 = FUN_14047fa10(lVar24,&local_d8);
                      local_1ac = 3;
                      if (cVar8 != '\0') {
                        if ((int)uStack_c0 == (int)uStack_b0) {
                          if (1 < (int)uStack_c0) {
                            lVar15 = 0;
                            while( true ) {
                              uVar13 = *(ushort *)((longlong)local_c8 + lVar15);
                              uVar23 = (ulonglong)uVar13;
                              uVar17 = *(ushort *)(local_b8 + lVar15);
                              if (uVar13 != uVar17) break;
                              if (uVar13 == 0) goto LAB_143f09ec9;
LAB_143f09e2c:
                              lVar15 = lVar15 + 2;
                            }
                            plVar18 = local_198;
                            if ((uVar17 | uVar13) < 0x80) {
                              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                              uVar19 = (ulonglong)uVar17;
                              uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                              local_1a8 = plVar11;
                              if ((&DAT_149e05da0)[uVar23] == (&DAT_149e05da0)[uVar19])
                              goto LAB_143f09e2c;
                            }
                            local_1a8 = plVar11;
                            if (uVar13 != uVar17) goto LAB_143f0a34a;
                          }
                        }
                        else if ((int)uStack_b0 + (int)uStack_c0 != 1) goto LAB_143f0a34a;
LAB_143f09ec9:
                        local_f0 = L"files";
                        local_e8 = 5;
                        cVar8 = FUN_140480164(lVar24,&local_f0,&local_e0);
                        if (cVar8 == '\0') {
                          local_1ac = 2;
                        }
                        else {
                          local_1ac = 2;
                          if (local_e0 != (longlong *)0x0) {
                            local_1ac = 0;
                            plVar18 = local_198;
                            local_1a8 = plVar11;
                            local_188 = plVar12;
                            if ((longlong)*(int *)(local_180 + 0x10) != 0) {
                              piVar21 = *(int **)(local_180 + 8);
                              local_190 = piVar21 + (longlong)*(int *)(local_180 + 0x10) * 0x24;
                              do {
                                if ((((~*(byte *)(piVar21 + 0x22) & 3) == 0) &&
                                    (*(char *)((longlong)piVar21 + 0x89) == '\0')) &&
                                   ((longlong)(int)local_e0[1] != 0)) {
                                  plVar12 = (longlong *)*local_e0;
                                  plVar18 = plVar12 + (longlong)(int)local_e0[1] * 2;
                                  local_1a0 = plVar18;
                                  do {
                                    if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
                                      plVar11 = (longlong *)(*(code *)**(undefined8 **)*plVar12)();
                                      lVar24 = *plVar11;
                                      plVar11 = (longlong *)plVar11[1];
                                      if (plVar11 != (longlong *)0x0) {
                                        LOCK();
                                        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                                        UNLOCK();
                                      }
                                      if (lVar24 == 0) {
                                        iVar9 = 7;
                                      }
                                      else {
                                        local_108[0] = 0;
                                        local_108[1] = 0;
                                        local_118 = L"name";
                                        local_110 = 4;
                                        cVar8 = FUN_14047fa10(lVar24,&local_118,local_108);
                                        iVar9 = 0;
                                        if (cVar8 != '\0') {
                                          FUN_14000bbd8(&local_88,local_108,0);
                                          iVar7 = (int)local_88;
                                          iVar2 = piVar21[4];
                                          if (local_70 != 0) {
                                            FUN_1400020a8();
                                          }
                                          plVar18 = local_1a0;
                                          if (iVar7 == iVar2) {
                                            local_88 = (code *)0x0;
                                            pplStack_80 = (longlong **)0x0;
                                            local_128 = 0;
                                            uStack_120 = 0;
                                            local_130 = 0;
                                            local_140 = L"guid";
                                            local_138 = 4;
                                            cVar8 = FUN_14047fa10(lVar24,&local_140);
                                            if (cVar8 != '\0') {
                                              cVar8 = FUN_140b10a34();
                                              if (cVar8 == '\0') {
                                                local_158 = 0;
                                                uStack_150 = 0;
                                                uStack_150._4_4_ = 0;
                                                uStack_150._0_4_ = 0;
                                                local_158._4_4_ = 0;
                                                local_158._0_4_ = 0;
                                              }
                                              else {
                                              }
                                              if (((*piVar21 == (int)local_158) &&
                                                  (piVar21[1] == local_158._4_4_)) &&
                                                 ((piVar21[2] == (int)uStack_150 &&
                                                  (piVar21[3] == uStack_150._4_4_)))) {
                                                local_168 = &DAT_14b4e0132;
                                                local_160 = 3;
                                                cVar8 = FUN_14047fa10(lVar24,&local_168);
                                                if (cVar8 != '\0') {
                                                  iVar9 = piVar21[0x10];
                                                  plVar18 = local_1a0;
                                                  if (iVar9 == (int)uStack_120) {
                                                    if (1 < iVar9) {
                                                      lVar15 = 0;
                                                      while( true ) {
                                                        uVar13 = *(ushort *)
                                                                  (*(longlong *)(piVar21 + 0xe) +
                                                                  lVar15);
                                                        uVar23 = (ulonglong)uVar13;
                                                        uVar17 = *(ushort *)(local_128 + lVar15);
                                                        if (uVar13 != uVar17) {
                                                          if ((uVar17 | uVar13) < 0x80) {
                                                            uVar13 = (ushort)(byte)(&DAT_149e05da0)
                                                                                   [uVar23];
                                                            uVar19 = (ulonglong)uVar17;
                                                            uVar17 = (ushort)(byte)(&DAT_149e05da0)
                                                                                   [uVar19];
                                                            if ((&DAT_149e05da0)[uVar23] ==
                                                                (&DAT_149e05da0)[uVar19])
                                                            goto LAB_143f0a1a9;
                                                          }
                                                          bVar26 = uVar13 == uVar17;
                                                          goto LAB_143f0a1f7;
                                                        }
                                                        if (uVar13 == 0) break;
LAB_143f0a1a9:
                                                        lVar15 = lVar15 + 2;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    bVar26 = (int)uStack_120 + iVar9 == 1;
LAB_143f0a1f7:
                                                    if (!bVar26) goto LAB_143f0a292;
                                                  }
                                                  local_178 = L"time";
                                                  local_170 = 4;
                                                  cVar8 = FUN_1468394e2(lVar24,&local_178,&local_130
                                                                       );
                                                  if (cVar8 != '\0') {
                                                    lVar24 = local_130 * 10000000;
                                                    local_1c0 = 0;
                                                    local_1c8 = 0;
                                                    local_1d0 = 0;
                                                    local_1d8 = 0;
                                                    FUN_14021300e(&local_90,0x7b2,1,1);
                                                    if (*(longlong *)(piVar21 + 0x12) ==
                                                        lVar24 + local_90) {
                                                      *(undefined1 *)((longlong)piVar21 + 0x89) = 3;
                                                    }
                                                  }
                                                }
                                              }
                                            }
LAB_143f0a292:
                                            if (local_128 != 0) {
                                              FUN_1400020a8();
                                            }
                                            if (local_88 != (code *)0x0) {
                                              FUN_1400020a8();
                                            }
                                            iVar9 = 6;
                                          }
                                        }
                                        if (local_108[0] != 0) {
                                          FUN_1400020a8();
                                        }
                                      }
                                      if (plVar11 != (longlong *)0x0) {
                                        LOCK();
                                        plVar1 = plVar11 + 1;
                                        *(int *)plVar1 = (int)*plVar1 + -1;
                                        UNLOCK();
                                        if ((int)*plVar1 == 0) {
                                          (**(code **)*plVar11)(plVar11);
                                          LOCK();
                                          piVar25 = (int *)((longlong)plVar11 + 0xc);
                                          *piVar25 = *piVar25 + -1;
                                          UNLOCK();
                                          if (*piVar25 == 0) {
                                            (**(code **)(*plVar11 + 0x10))(plVar11);
                                          }
                                        }
                                      }
                                      if ((iVar9 != 7) && (iVar9 != 0)) break;
                                    }
                                    plVar12 = plVar12 + 2;
                                  } while (plVar12 != plVar18);
                                }
                                piVar21 = piVar21 + 0x24;
                                plVar18 = local_198;
                                plVar11 = local_1a8;
                                plVar12 = local_188;
                              } while (piVar21 != local_190);
                            }
                          }
                        }
                      }
LAB_143f0a34a:
                      iVar9 = local_1ac;
                      if (local_c8 != (longlong *)0x0) {
                        FUN_1400020a8();
                        iVar9 = local_1ac;
                      }
                    }
                    if (plVar11 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plVar11 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plVar11)(plVar11);
                        LOCK();
                        piVar21 = (int *)((longlong)plVar11 + 0xc);
                        *piVar21 = *piVar21 + -1;
                        UNLOCK();
                        if (*piVar21 == 0) {
                          (**(code **)(*plVar11 + 0x10))(plVar11);
                        }
                      }
                    }
                    if ((iVar9 != 3) && (iVar9 != 0)) break;
                  }
                  plVar12 = plVar12 + 2;
                } while (plVar12 != plVar18);
              }
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
            }
          }
          FUN_143f0a47c(param_1);
          goto LAB_143f097bc;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 4;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f097bc:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0a47c FUN_143f0a47c body=5421 status=ok
// SIG undefined FUN_143f0a47c(void)

void FUN_143f0a47c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  longlong *plVar27;
  uint *puVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStack_108 [32];
  code **local_e8;
  code **local_e0;
  longlong local_d0;
  code *local_c8;
  int local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  code *local_a8;
  longlong *local_a0;
  code *local_98;
  longlong *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  code *local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar8 = FUN_143f08fbc();
  if (cVar8 != '\0') goto LAB_143f0abdf;
  puVar24 = (undefined8 *)(param_1 + 0x30);
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x58) == '\x01') {
    lVar11 = param_1 + 0x138;
    local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb8dd68);
    local_98 = DAT_14cb8dd60;
    FUN_1448075d0(&local_88);
    if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1c4)) {
      lVar31 = param_1 + 0x1c8;
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        lVar31 = *(longlong *)(param_1 + 0x1d0);
      }
      iVar9 = *(int *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x1d8) - 1U & (uint)local_88) * 4);
      if (iVar9 != -1) {
        lVar31 = *(longlong *)(param_1 + 0x198);
        if (*(longlong *)(param_1 + 0x198) == 0) {
          lVar31 = lVar11;
        }
        do {
          if (*(uint *)(lVar31 + (longlong)iVar9 * 0x30) == (uint)local_88) {
            if (local_70 != (code *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_143f0a678;
          }
          iVar9 = *(int *)((longlong)iVar9 * 0x30 + lVar31 + 0x28);
        } while (iVar9 != -1);
      }
    }
    if (local_70 != (code *)0x0) {
      FUN_1400020a8();
    }
    plVar30 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    uVar29 = 0;
    if (((((*(int *)(param_1 + 0x40) == 0) || (uVar20 = *(uint *)(param_1 + 0x3c), (int)uVar20 < 0))
         || (DAT_14c9647dc <= (int)uVar20)) ||
        ((plVar27 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
         plVar27 == (longlong *)0x0 || ((int)plVar27[2] != *(int *)(param_1 + 0x40))))) ||
       ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)) {
      uVar20 = 0;
    }
    else {
      uVar29 = 0;
      uVar20 = 0;
      if (*plVar27 != 0) {
        uVar29 = *(uint *)(*plVar27 + 0xc);
        if ((int)uVar29 < DAT_14c9647dc) {
          lVar31 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
        }
        else {
          lVar31 = 0;
        }
        uVar20 = *(uint *)(lVar31 + 0x10);
        if (*(uint *)(lVar31 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          uVar26 = DAT_14c964868 + 1;
          bVar33 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar33) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar26);
          }
          LOCK();
          uVar20 = *(uint *)(lVar31 + 0x10);
          bVar33 = uVar20 == 0;
          if (bVar33) {
            *(uint *)(lVar31 + 0x10) = uVar26;
            uVar20 = 0;
          }
          UNLOCK();
          if (bVar33) {
            uVar20 = uVar26;
          }
        }
      }
    }
    local_88 = (code *)CONCAT44(uVar20,uVar29);
    iVar9 = FUN_148a72ae6(plVar30,uVar20 ^ uVar29);
    if (iVar9 != -1) {
      lVar31 = *plVar30;
      if ((lVar31 + (longlong)iVar9 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
        local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb8dd68);
        local_98 = DAT_14cb8dd60;
        FUN_1448075d0(&local_88);
        FUN_148a73f52(lVar11,&local_98);
        plVar30 = local_90;
        *local_90 = 0;
        local_90[1] = 0;
        *(int *)(local_90 + 2) = 0;
        local_90[3] = 0;
        local_90[4] = 0;
        FUN_1404e49fa(local_90,&local_88);
        *(int *)(plVar30 + 5) = -1;
        local_a8 = (code *)CONCAT44(local_a8._4_4_,local_98._0_4_);
        lVar16 = *plVar30;
        local_e8 = (code **)0x0;
        cVar8 = FUN_148a74066(lVar11,(int)lVar16,plVar30);
        if (cVar8 == '\0') {
          uVar7 = local_a8._0_4_;
          cVar8 = FUN_148a74282(lVar11,*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x1c4),0);
          if (cVar8 == '\0') {
            uVar15 = (longlong)*(int *)(param_1 + 0x1d8) - 1U & (longlong)(int)lVar16;
            iVar12 = (int)uVar15;
            *(int *)((longlong)plVar30 + 0x2c) = iVar12;
            lVar11 = *(longlong *)(param_1 + 0x1d0);
            if (*(longlong *)(param_1 + 0x1d0) == 0) {
              lVar11 = param_1 + 0x1c8;
            }
            *(int *)(plVar30 + 5) =
                 *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x1d8) - 1U & uVar15) * 4);
            lVar11 = *(longlong *)(param_1 + 0x1d0);
            if (*(longlong *)(param_1 + 0x1d0) == 0) {
              lVar11 = param_1 + 0x1c8;
            }
            *(undefined4 *)
             (lVar11 + ((longlong)iVar12 & (longlong)*(int *)(param_1 + 0x1d8) - 1U) * 4) = uVar7;
          }
        }
        if (local_70 != (code *)0x0) {
          FUN_1400020a8();
        }
        cVar8 = FUN_143f0b9aa(lVar31 + (longlong)iVar9 * 0x48 + 0x28);
        if (cVar8 != '\0') {
          if (*(char *)(param_1 + 0x58) != '\x01') {
            FUN_143f0a47c(param_1);
            goto LAB_143f0abdf;
          }
          *(undefined1 *)(param_1 + 0x1e0) = 1;
          plVar30 = *(longlong **)(param_1 + 0x30);
          local_b8 = (undefined8 *)0x0;
          local_b0 = 0;
          FUN_1446efa72(&local_b8,0,3,0x10);
          local_b0 = 3;
          plVar27 = *(longlong **)(param_1 + 0x10);
          if (plVar27 == (longlong *)0x0) {
LAB_143f0b5ae:
            *local_b8 = &PTR_LAB_14b4e3fb0;
            LOCK();
            UNLOCK();
            lVar31 = DAT_14c758608 + 1;
            lVar11 = DAT_14c758608 + 1;
            if (lVar31 == 0) {
              LOCK();
              UNLOCK();
              lVar31 = DAT_14c758608 + 2;
              lVar11 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar11;
            local_b8[2] = lVar31;
            *local_b8 = &PTR_FUN_14b4e1c50;
            local_b8[3] = 0;
            local_b8[4] = 0;
            local_b8[5] = param_1;
          }
          else {
            iVar9 = (int)plVar27[1];
            do {
              if (iVar9 == 0) goto LAB_143f0b5ae;
              LOCK();
              iVar12 = (int)plVar27[1];
              bVar33 = iVar9 == iVar12;
              if (bVar33) {
                *(int *)(plVar27 + 1) = iVar9 + 1;
                iVar12 = iVar9;
              }
              iVar9 = iVar12;
              UNLOCK();
            } while (!bVar33);
            uVar22 = *(undefined8 *)(param_1 + 8);
            LOCK();
            *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
            UNLOCK();
            *local_b8 = &PTR_LAB_14b4e3fb0;
            LOCK();
            UNLOCK();
            lVar31 = DAT_14c758608 + 1;
            lVar11 = DAT_14c758608 + 1;
            if (lVar31 == 0) {
              LOCK();
              UNLOCK();
              lVar31 = DAT_14c758608 + 2;
              lVar11 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar11;
            local_b8[2] = lVar31;
            *local_b8 = &PTR_FUN_14b4e1c50;
            local_b8[3] = uVar22;
            local_b8[4] = plVar27;
            LOCK();
            *(int *)((longlong)plVar27 + 0xc) = *(int *)((longlong)plVar27 + 0xc) + 1;
            UNLOCK();
            local_b8[5] = param_1;
            LOCK();
            plVar1 = plVar27 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar2 = (int *)((longlong)plVar27 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
            }
            LOCK();
            plVar1 = plVar27 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar2 = (int *)((longlong)plVar27 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
            }
            LOCK();
            plVar1 = plVar27 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar2 = (int *)((longlong)plVar27 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
            }
          }
          if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b927:
            uVar22 = 0;
          }
          else {
            uVar29 = *(uint *)(param_1 + 0x3c);
            uVar22 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              puVar24 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((puVar24 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar24 + 2) != *(int *)(param_1 + 0x40) ||
                  ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)))) goto LAB_143f0b927;
              uVar22 = *puVar24;
            }
          }
          (**(code **)(*plVar30 + 0x2f8))(plVar30,uVar22,&local_b8);
          goto LAB_143f0abdf;
        }
        uVar22 = *(undefined8 *)(param_1 + 0x30);
        local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb8dd68);
        local_98 = DAT_14cb8dd60;
        FUN_1448075d0(&local_88,&local_98);
        if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b920:
          uVar17 = 0;
        }
        else {
          uVar29 = *(uint *)(param_1 + 0x3c);
          uVar17 = 0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            puVar23 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((puVar23 == (undefined8 *)0x0) ||
               ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x40) ||
                ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_143f0b920;
            uVar17 = *puVar23;
          }
        }
        lVar11 = FUN_143f065cc(uVar22,uVar17,&local_88,0);
        if (local_70 != (code *)0x0) {
          FUN_1400020a8();
        }
        if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x88) & 2) == 0)) {
          local_88 = FUN_143f0bbf2;
          uStack_80 = (longlong *)((ulonglong)uStack_80 & 0xffffffff00000000);
          FUN_143f0ba70(&local_a8,param_1);
          if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b940:
            uVar22 = 0;
          }
          else {
            uVar29 = *(uint *)(param_1 + 0x3c);
            uVar22 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              puVar23 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((puVar23 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x40) ||
                  ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_143f0b940;
              uVar22 = *puVar23;
            }
          }
          plVar30 = (longlong *)FUN_14001cc68(200,0x10);
          plVar30[1] = (longlong)&DAT_100000001;
          *plVar30 = (longlong)&PTR_FUN_14b4e1650;
          pcVar19 = (code *)(plVar30 + 2);
          local_98 = local_a8;
          local_a8 = (code *)0x0;
          local_90 = (longlong *)CONCAT44(local_90._4_4_,(int)local_a0);
          local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
          local_c0 = DAT_14cb8dd68;
          local_c8 = DAT_14cb8dd60;
          FUN_1448075d0(&local_88);
          local_e8 = &local_98;
          FUN_148a6bf16(pcVar19,*puVar24,uVar22,&local_88);
          if (local_70 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_98 = pcVar19;
          local_90 = plVar30;
          FUN_148a726c8(&local_98,pcVar19);
          if (plVar30 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
            UNLOCK();
          }
          local_88 = pcVar19;
          uStack_80 = plVar30;
          FUN_148a7192e(param_1 + 0x20,&local_88);
          plVar30 = uStack_80;
          if (uStack_80 != (longlong *)0x0) {
            LOCK();
            plVar27 = uStack_80 + 1;
            *(int *)plVar27 = (int)*plVar27 + -1;
            UNLOCK();
            if ((int)*plVar27 == 0) {
              (**(code **)*uStack_80)(uStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar30 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
            }
          }
          plVar30 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar27 = local_90 + 1;
            *(int *)plVar27 = (int)*plVar27 + -1;
            UNLOCK();
            if ((int)*plVar27 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar30 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
            }
          }
          pcVar19 = local_a8;
          if ((int)local_a0 != 0) {
            if (local_a8 == (code *)0x0) goto LAB_143f0abdf;
            (*(code *)**(undefined8 **)local_a8)(local_a8,0);
            FUN_1446efa72(&local_a8,0,0,0x10);
            local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
            pcVar19 = local_a8;
          }
        }
        else {
          if (*(char *)(lVar11 + 0x89) != '\0') goto LAB_143f0a678;
          local_98 = FUN_143f0bca8;
          local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
          FUN_148a6b9c8(&local_88,param_1);
          local_e8 = (code **)(param_1 + 0x58);
          if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b948:
            uVar22 = 0;
          }
          else {
            uVar29 = *(uint *)(param_1 + 0x3c);
            uVar22 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              puVar23 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((puVar23 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x40) ||
                  ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_143f0b948;
              uVar22 = *puVar23;
            }
          }
          local_e0 = &local_88;
          FUN_148a6b8de(param_1 + 0x20,puVar24,uVar22,lVar11 + 0x10);
          pcVar19 = local_88;
          if ((int)uStack_80 != 0) {
            if (local_88 == (code *)0x0) goto LAB_143f0abdf;
            (*(code *)**(undefined8 **)local_88)(local_88,0);
            FUN_1446efa72(&local_88,0,0,0x10);
            uStack_80 = (longlong *)((ulonglong)uStack_80._4_4_ << 0x20);
            pcVar19 = local_88;
          }
        }
        goto LAB_143f0ae45;
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 4;
  }
  else {
LAB_143f0a678:
    if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x11c)) {
      lVar11 = param_1 + 0x90;
      iVar9 = *(int *)(param_1 + 0x110);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        puVar28 = (uint *)(param_1 + 0x100);
        if (*(uint **)(param_1 + 0x108) != (uint *)0x0) {
          puVar28 = *(uint **)(param_1 + 0x108);
        }
        uVar29 = *puVar28;
        if (uVar29 == 0) {
          iVar12 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar12 = iVar9 + -1;
          }
          uVar15 = 0;
          uVar32 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar32 = uVar15;
          }
          do {
            puVar28 = puVar28 + 1;
            if (uVar32 * 0x20 == uVar15) goto LAB_143f0a718;
            uVar29 = *puVar28;
            uVar15 = uVar15 + 0x20;
          } while (uVar29 == 0);
        }
        else {
          uVar15 = 0;
        }
        uVar32 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar31 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        iVar12 = ((int)uVar15 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if (iVar12 < iVar9) {
          iVar9 = iVar12;
        }
      }
LAB_143f0a718:
      lVar31 = *(longlong *)(param_1 + 0xf0);
      if (*(longlong *)(param_1 + 0xf0) == 0) {
        lVar31 = lVar11;
      }
      FUN_1447a97f4(&local_88,(longlong)iVar9 * 0x30 + lVar31);
      if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x11c)) {
        lVar31 = param_1 + 0x120;
        if (*(longlong *)(param_1 + 0x128) != 0) {
          lVar31 = *(longlong *)(param_1 + 0x128);
        }
        iVar9 = *(int *)(lVar31 + ((longlong)*(int *)(param_1 + 0x130) - 1U &
                                  (longlong)(int)(uint)local_88) * 4);
        if (iVar9 != -1) {
          lVar16 = *(longlong *)(param_1 + 0xf0);
          if (*(longlong *)(param_1 + 0xf0) == 0) {
            lVar16 = lVar11;
          }
LAB_143f0a78e:
          lVar21 = (longlong)iVar9 * 0x30;
          lVar3 = lVar16 + lVar21;
          if (*(int *)(lVar16 + lVar21) != (uint)local_88) goto code_r0x000143f0a7a7;
          iVar12 = *(int *)(lVar31 + (longlong)*(int *)(lVar3 + 0x2c) * 4);
          if (iVar12 == iVar9) {
            puVar10 = (undefined4 *)(lVar31 + (longlong)*(int *)(lVar3 + 0x2c) * 4);
          }
          else {
            do {
              lVar31 = (longlong)iVar12;
              iVar12 = *(int *)(lVar16 + 0x28 + lVar31 * 0x30);
            } while (iVar12 != iVar9);
            puVar10 = (undefined4 *)(lVar31 * 0x30 + lVar16 + 0x28);
          }
          *puVar10 = *(undefined4 *)(lVar3 + 0x28);
          lVar31 = *(longlong *)(param_1 + 0xf0);
          if (*(longlong *)(param_1 + 0xf0) == 0) {
            lVar31 = lVar11;
          }
          if (*(longlong *)(lVar31 + 0x18 + lVar21) != 0) {
            FUN_1400020a8();
          }
          FUN_148a741d2(lVar11,iVar9,1);
        }
      }
LAB_143f0a7b0:
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b00a:
        uVar22 = 0;
      }
      else {
        uVar29 = *(uint *)(param_1 + 0x3c);
        uVar22 = 0;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
          puVar23 = (undefined8 *)
                    ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
          if ((puVar23 == (undefined8 *)0x0) ||
             ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_143f0b00a;
          uVar22 = *puVar23;
        }
      }
      lVar11 = FUN_143f065cc(*(undefined8 *)(param_1 + 0x30),uVar22,&local_88,0);
      if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x88) & 2) == 0)) {
        local_98 = FUN_143f0bbf2;
        local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
        FUN_143f0ba70(&local_c8,param_1,&local_98);
        if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b599:
          uVar22 = 0;
        }
        else {
          uVar29 = *(uint *)(param_1 + 0x3c);
          uVar22 = 0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            puVar23 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((puVar23 == (undefined8 *)0x0) ||
               ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x40) ||
                ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_143f0b599;
            uVar22 = *puVar23;
          }
        }
        plVar30 = (longlong *)FUN_14001cc68(200,0x10);
        plVar30[1] = (longlong)&DAT_100000001;
        *plVar30 = (longlong)&PTR_FUN_14b4e1650;
        pcVar19 = (code *)(plVar30 + 2);
        local_98 = local_c8;
        local_c8 = (code *)0x0;
        local_90 = (longlong *)CONCAT44(local_90._4_4_,local_c0);
        local_c0 = 0;
        local_e8 = &local_98;
        FUN_148a6bf16(pcVar19,*puVar24,uVar22,&local_88);
        local_a8 = pcVar19;
        local_a0 = plVar30;
        FUN_148a726c8(&local_a8,pcVar19);
        if (plVar30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
          UNLOCK();
        }
        local_98 = pcVar19;
        local_90 = plVar30;
        FUN_148a7192e(param_1 + 0x20,&local_98);
        plVar30 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar27 = local_90 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar30 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
        plVar30 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar27 = local_a0 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar30 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
        pcVar18 = local_c8;
        if (local_c0 != 0) {
          pcVar19 = local_70;
          if (local_c8 == (code *)0x0) goto LAB_143f0ae45;
          (*(code *)**(undefined8 **)local_c8)(local_c8,0);
          FUN_1446efa72(&local_c8,0,0,0x10);
          local_c0 = 0;
          pcVar18 = local_c8;
        }
LAB_143f0ae34:
        pcVar19 = local_70;
        if (pcVar18 != (code *)0x0) {
          FUN_1400020a8();
          pcVar19 = local_70;
        }
LAB_143f0ae45:
        if (pcVar19 != (code *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143f0abdf;
      }
      if (local_70 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(int *)(param_1 + 0x74) == 0) {
LAB_143f0afee:
      lVar11 = 0;
    }
    else {
      uVar29 = *(uint *)(param_1 + 0x70);
      lVar11 = 0;
      if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
        plVar30 = (longlong *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
        if ((plVar30 == (longlong *)0x0) ||
           (((int)plVar30[2] != *(int *)(param_1 + 0x74) ||
            ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) goto LAB_143f0afee;
        lVar11 = *plVar30;
      }
    }
    iVar9 = *(int *)(lVar11 + 0x1f8);
    if (0 < iVar9) {
      local_d0 = param_1 + 0x1c8;
      uVar15 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar11 + 0x1f0) + 0x14 + uVar15 * 0x50) == '\x01') {
          local_88 = (code *)0x0;
          uStack_80 = (longlong *)0x0;
          local_78 = 0;
          local_70 = (code *)0x0;
          uStack_68 = 0;
          if ((*(int *)(param_1 + 0x7c) == 0) ||
             (uVar29 = *(uint *)(param_1 + 0x78), (int)uVar29 < 0)) {
LAB_143f0aaef:
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            if ((int)uVar29 < DAT_14c9647dc) {
              puVar23 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if (((puVar23 == (undefined8 *)0x0) ||
                  (*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x7c))) ||
                 ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)) goto LAB_143f0aaef;
              uVar22 = *puVar23;
            }
          }
          if ((*(int *)(param_1 + 0x74) == 0) ||
             (uVar29 = *(uint *)(param_1 + 0x70), (int)uVar29 < 0)) {
LAB_143f0aaf6:
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            if ((int)uVar29 < DAT_14c9647dc) {
              puVar23 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if (((puVar23 == (undefined8 *)0x0) ||
                  (*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x74))) ||
                 ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)) goto LAB_143f0aaf6;
              uVar17 = *puVar23;
            }
          }
          cVar8 = FUN_148a6afbc(uVar17,uVar22,uVar15 & 0xffffffff,&local_88);
          if (cVar8 != '\0') {
            if ((*(int *)(param_1 + 0x40) == 0) ||
               (uVar29 = *(uint *)(param_1 + 0x3c), (int)uVar29 < 0)) {
LAB_143f0aafd:
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              if ((int)uVar29 < DAT_14c9647dc) {
                puVar23 = (undefined8 *)
                          ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                if (((puVar23 == (undefined8 *)0x0) ||
                    (*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x40))) ||
                   ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)) goto LAB_143f0aafd;
                uVar22 = *puVar23;
              }
            }
            lVar31 = FUN_143f065cc(*(undefined8 *)(param_1 + 0x30),uVar22,&local_88,0);
            if ((lVar31 != 0) && (*(char *)(lVar31 + 0x89) == '\0')) {
              puVar28 = (uint *)(lVar31 + 0x10);
              if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1c4)) {
                lVar31 = *(longlong *)(param_1 + 0x1d0);
                if (*(longlong *)(param_1 + 0x1d0) == 0) {
                  lVar31 = local_d0;
                }
                iVar9 = *(int *)(lVar31 + (ulonglong)(*(int *)(param_1 + 0x1d8) - 1U & *puVar28) * 4
                                );
                if (iVar9 != -1) {
                  lVar31 = *(longlong *)(param_1 + 0x198);
                  if (*(longlong *)(param_1 + 0x198) == 0) {
                    lVar31 = param_1 + 0x138;
                  }
                  while (*(uint *)(lVar31 + (longlong)iVar9 * 0x30) != *puVar28) {
                    iVar9 = *(int *)((longlong)iVar9 * 0x30 + lVar31 + 0x28);
                    if (iVar9 == -1) goto LAB_143f0b07e;
                  }
                  goto LAB_143f0aa5e;
                }
              }
LAB_143f0b07e:
              uVar22 = 0;
              FUN_148a748f4(param_1 + 0x138,&local_98,puVar28,0);
              local_a8 = FUN_143f0bca8;
              local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
              FUN_148a6b9c8(&local_98,param_1);
              local_e8 = (code **)(param_1 + 0x58);
              if (*(int *)(param_1 + 0x40) != 0) {
                uVar29 = *(uint *)(param_1 + 0x3c);
                uVar22 = 0;
                if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
                  puVar23 = (undefined8 *)
                            ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                  if ((puVar23 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar23 + 2) != *(int *)(param_1 + 0x40) ||
                      ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = *puVar23;
                  }
                }
              }
              local_e0 = &local_98;
              FUN_148a6b8de(param_1 + 0x20,puVar24,uVar22,puVar28);
              pcVar18 = local_98;
              if ((int)local_90 == 0) goto LAB_143f0ae34;
              pcVar19 = local_70;
              if (local_98 == (code *)0x0) goto LAB_143f0ae45;
              (*(code *)**(undefined8 **)local_98)(local_98,0);
              FUN_1446efa72(&local_98,0,0,0x10);
              local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
              pcVar18 = local_98;
              goto LAB_143f0ae34;
            }
          }
LAB_143f0aa5e:
          if (local_70 != (code *)0x0) {
            FUN_1400020a8();
          }
          iVar9 = *(int *)(lVar11 + 0x1f8);
        }
        uVar15 = uVar15 + 1;
      } while ((longlong)uVar15 < (longlong)iVar9);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar11 = (**(code **)(*(longlong *)*puVar24 + 0x180))();
      if ((((lVar11 != 0) && (*(longlong *)(lVar11 + 0x1f0) != 0)) &&
          (lVar11 = FUN_141028a6c(), lVar11 != 0)) && (*(longlong *)(param_1 + 0x80) != 0)) {
        FUN_14480f766(lVar11 + 0xb8);
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    cVar8 = FUN_143f08fbc(param_1);
    if (cVar8 != '\0') goto LAB_143f0abdf;
    if (*(char *)(param_1 + 0x58) == '\0') {
      iVar9 = *(int *)(param_1 + 0x1b8);
      if (iVar9 == 0) {
        uVar32 = 1;
        uVar15 = 0;
        iVar12 = 0;
        iVar25 = 0;
      }
      else {
        puVar28 = *(uint **)(param_1 + 0x1b0);
        if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
          puVar28 = (uint *)(param_1 + 0x1a8);
        }
        uVar29 = *puVar28;
        if (uVar29 == 0) {
          iVar12 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar12 = iVar9 + -1;
          }
          uVar15 = 0;
          uVar32 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar32 = uVar15;
          }
          iVar25 = 0;
          do {
            if (uVar32 == uVar15) goto LAB_143f0ab71;
            iVar25 = iVar25 + 0x20;
            uVar29 = puVar28[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar29 == 0);
        }
        else {
          uVar15 = 0;
          iVar25 = 0;
        }
        uVar32 = (ulonglong)(-uVar29 & uVar29);
        uVar4 = uVar32 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar12 = (iVar25 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar12) {
          iVar12 = iVar9;
        }
      }
      if (iVar12 != iVar9) {
        uVar29 = 0xffffffff;
        do {
          lVar11 = *(longlong *)(param_1 + 0x198);
          if (*(longlong *)(param_1 + 0x198) == 0) {
            lVar11 = param_1 + 0x138;
          }
          if ((*(int *)(param_1 + 0x40) == 0) ||
             (uVar20 = *(uint *)(param_1 + 0x3c), (int)uVar20 < 0)) {
LAB_143f0af7b:
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            if ((int)uVar20 < DAT_14c9647dc) {
              puVar24 = (undefined8 *)
                        ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
              if (((puVar24 == (undefined8 *)0x0) ||
                  (*(int *)(puVar24 + 2) != *(int *)(param_1 + 0x40))) ||
                 ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)) goto LAB_143f0af7b;
              uVar22 = *puVar24;
            }
          }
          lVar11 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar22,
                                 lVar11 + (longlong)iVar12 * 0x30);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x89) == '\0')) {
            if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b919:
              uVar22 = 0;
            }
            else {
              uVar29 = *(uint *)(param_1 + 0x3c);
              uVar22 = 0;
              if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
                puVar24 = (undefined8 *)
                          ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                if ((puVar24 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar24 + 2) != *(int *)(param_1 + 0x40) ||
                    ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)))) goto LAB_143f0b919;
                uVar22 = *puVar24;
              }
            }
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x308))
                      (*(longlong **)(param_1 + 0x30),uVar22);
            break;
          }
          uVar29 = uVar29 & ~(uint)uVar32;
          puVar28 = *(uint **)(param_1 + 0x1b0);
          if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
            puVar28 = (uint *)(param_1 + 0x1a8);
          }
          iVar5 = *(int *)(param_1 + 0x1b8);
          iVar12 = (int)uVar15;
          lVar11 = (longlong)iVar12;
          uVar20 = puVar28[lVar11] & uVar29;
          if (uVar20 == 0) {
            iVar13 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar13 = iVar5 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar25 = iVar25 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar12) {
              iVar14 = iVar12;
            }
            iVar6 = iVar12;
            if (iVar12 < iVar13) {
              lVar31 = 0;
              do {
                uVar20 = puVar28[lVar11 + lVar31 + 1];
                if (uVar20 != 0) {
                  uVar15 = (ulonglong)(iVar12 + (int)lVar31 + 1);
                  uVar29 = 0xffffffff;
                  goto LAB_143f0afbb;
                }
                iVar25 = iVar25 + 0x20;
                lVar31 = lVar31 + 1;
                uVar29 = 0xffffffff;
                iVar6 = iVar14;
              } while (iVar14 - lVar11 != lVar31);
            }
            uVar15 = (ulonglong)(iVar6 + 1);
            iVar12 = iVar5;
          }
          else {
LAB_143f0afbb:
            uVar32 = (ulonglong)(-uVar20 & uVar20);
            uVar4 = uVar32 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar12 = (iVar25 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar5 <= iVar12) {
              iVar12 = iVar5;
            }
          }
        } while (iVar12 != iVar9);
      }
    }
LAB_143f0ab71:
    if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0b011:
      uVar22 = 0;
    }
    else {
      uVar29 = *(uint *)(param_1 + 0x3c);
      uVar22 = 0;
      if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
        puVar24 = (undefined8 *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
        if ((puVar24 == (undefined8 *)0x0) ||
           ((*(int *)(puVar24 + 2) != *(int *)(param_1 + 0x40) ||
            ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)))) goto LAB_143f0b011;
        uVar22 = *puVar24;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x318))(*(longlong **)(param_1 + 0x30),uVar22);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0abdf:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143f0a7a7:
  iVar9 = *(int *)(lVar3 + 0x28);
  if (iVar9 == -1) goto LAB_143f0a7b0;
  goto LAB_143f0a78e;
}



// FUNCTION 143f0b9aa FUN_143f0b9aa body=197 status=ok
// SIG undefined FUN_143f0b9aa(void)

ulonglong FUN_143f0b9aa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong unaff_RDI;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  int local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 == 0) {
    unaff_RDI = 0;
  }
  else {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      local_80 = DAT_14cb8dd60;
      local_78 = DAT_14cb8dd68;
      FUN_1448075d0(local_70,&local_80);
      iVar4 = local_70[0];
      iVar1 = *(int *)(lVar2 + lVar5);
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),iVar1 == local_70[0]);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    } while ((iVar1 != iVar4) &&
            (bVar6 = (longlong)(int)lVar3 * 0x28 + -0x28 != lVar5, lVar5 = lVar5 + 0x28, bVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 143f0ba70 FUN_143f0ba70 body=386 status=ok
// SIG undefined FUN_143f0ba70(void)

longlong * FUN_143f0ba70(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_143f0bb81:
    *puVar5 = &PTR_LAB_14b4e1550;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e1cc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_143f0bb81;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4e1550;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e1cc0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 143f0bbf2 FUN_143f0bbf2 body=181 status=ok
// SIG undefined FUN_143f0bbf2(void)

void FUN_143f0bbf2(longlong param_1,char param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_143f08fbc();
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
      FUN_148a748f4(param_1 + 0x138,local_58,param_3,0);
    }
    else {
      local_68 = DAT_14cb8dd60;
      local_60 = DAT_14cb8dd68;
      FUN_1448075d0(local_58);
      iVar1 = *param_3;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (iVar1 == local_58[0]) {
        *(char *)(param_1 + 0x38) = param_2;
        *(undefined1 *)(param_1 + 0x18) = 1;
        goto LAB_143f0bc7f;
      }
    }
    FUN_143f0a47c(param_1);
  }
LAB_143f0bc7f:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f0bca8 FUN_143f0bca8 body=52 status=ok
// SIG undefined FUN_143f0bca8(void)

void FUN_143f0bca8(longlong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_143f08fbc();
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      FUN_143f0a47c(param_1);
      return;
    }
    *(char *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// FUNCTION 143f0bcdc FUN_143f0bcdc body=539 status=ok
// SIG undefined FUN_143f0bcdc(void)

void FUN_143f0bcdc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 uStack_60;
  code *local_58;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_143f0befa();
  if (cVar4 != '\0') goto LAB_143f0bd04;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0bda6:
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143f0bda6;
      uVar7 = *puVar9;
    }
  }
  lVar6 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar7,param_1 + 0x58);
  if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x88) & 1) != 0)) || (*(char *)(lVar6 + 0x89) != '\0')) {
    *(undefined1 *)(param_1 + 0x38) = 8;
    *(undefined1 *)(param_1 + 0x18) = 1;
    goto LAB_143f0bd04;
  }
  *(undefined1 *)(lVar6 + 0x89) = 1;
  FUN_143f07518(param_1);
  uVar7 = FUN_14657d4c2();
  local_58 = FUN_143f0bfa2;
  local_50 = 0;
  FUN_148a6bbc6(local_48,param_1,&local_58);
  local_68 = (code *)0x0;
  uStack_60 = 0;
  FUN_1400b2348(lVar6 + 0x10,&local_68,1);
  iVar2 = (int)uStack_60;
  iVar5 = ((int)uStack_60 == 0) + 4;
  local_58 = local_68;
  local_68 = (code *)0x0;
  local_50 = (int)uStack_60;
  iVar3 = uStack_60._4_4_;
  local_4c = uStack_60._4_4_;
  uStack_60 = 0;
  iVar8 = iVar5 + iVar2;
  if (iVar8 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar3 < iVar8) {
    FUN_1446f8c06(&local_58);
  }
  FUN_1400020e8(&local_58,L".sav",4);
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0bee6:
    uVar10 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar10 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143f0bee6;
      uVar10 = *puVar9;
    }
  }
  FUN_148a5e020(uVar7,uVar10,&local_58,local_48);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143f0bd04:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f0befa FUN_143f0befa body=167 status=ok
// SIG undefined FUN_143f0befa(void)

ulonglong FUN_143f0befa(longlong param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(char *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_143f0bf6b;
  if (((*(int *)(param_1 + 0x40) == 0) || (uVar1 = *(uint *)(param_1 + 0x3c), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_143f0bf61:
    *(undefined1 *)(param_1 + 0x38) = 3;
  }
  else {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 == (longlong *)0x0) || ((int)plVar2[2] != *(int *)(param_1 + 0x40))) ||
       ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)) goto LAB_143f0bf61;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(lVar3 + 0x2b8) == 0) goto LAB_143f0bf61;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    plVar2 = (longlong *)FUN_148a6a1fe(*(undefined8 *)(param_1 + 0x30),lVar3);
    if ((char)plVar2 != '\0') {
      plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x18));
      goto LAB_143f0bf6b;
    }
    *(undefined1 *)(param_1 + 0x38) = 4;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_143f0bf6b:
  return (ulonglong)plVar2 & 0xffffffffffffff01;
}



// FUNCTION 143f0bfa2 FUN_143f0bfa2 body=886 status=ok
// SIG undefined FUN_143f0bfa2(void)

void FUN_143f0bfa2(longlong param_1,byte param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  code *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_143f07a40();
  cVar6 = FUN_143f0befa(param_1);
  if (cVar6 != '\0') goto LAB_143f0bfde;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0c0c1:
    uVar10 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar10 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143f0c0c1;
      uVar10 = *puVar11;
    }
  }
  lVar7 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar10,param_1 + 0x58);
  if (lVar7 == 0) {
LAB_143f0c0b4:
    *(undefined1 *)(param_1 + 0x38) = 8;
  }
  else {
    if ((*(byte *)(lVar7 + 0x88) & 1) != 0) {
      *(undefined1 *)(lVar7 + 0x89) = 0;
      goto LAB_143f0c0b4;
    }
    if (param_2 == 0) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_40 = 0xffff;
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0c206:
        uVar10 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x3c);
        uVar10 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143f0c206;
          uVar10 = *puVar11;
        }
      }
      lVar8 = FUN_148a6ad30(*(undefined8 *)(param_1 + 0x30),uVar10,local_58);
      if (lVar8 == 0) {
        *(undefined1 *)(lVar7 + 0x89) = 0;
        *(undefined1 *)(param_1 + 0x38) = 5;
      }
      else if (local_58[0] == 0) {
        *(undefined1 *)(lVar7 + 0x89) = 0;
        *(undefined1 *)(param_1 + 0x38) = 7;
      }
      else {
        lVar3 = param_1 + 0x80;
        if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0c270:
          uVar10 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x3c);
          uVar10 = 0;
          if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if ((puVar11 == (undefined8 *)0x0) ||
               ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x40) ||
                ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143f0c270;
            uVar10 = *puVar11;
          }
        }
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))
                          (*(longlong **)(param_1 + 0x30),uVar10,param_1 + 0x58,lVar3);
        if (cVar6 == '\0') {
          local_68 = 0;
          plStack_60 = (longlong *)0x0;
          cVar6 = FUN_148a69f88(param_3 + 0x10);
          if (cVar6 == '\0') {
            *(undefined1 *)(lVar7 + 0x89) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0xc;
            *(undefined1 *)(param_1 + 0x18) = 1;
          }
          else {
            FUN_1447715ec(lVar7 + 0x60,lVar3);
            local_88 = FUN_143f0c31a;
            local_80 = 0;
            FUN_148a6bd94(&local_78,param_1);
            local_98 = &local_78;
            FUN_143e5e21a(local_58[0],lVar8,lVar3,&local_68);
            if (local_70 != 0) {
              if (local_78 == (undefined8 *)0x0) goto LAB_143f0c238;
              (**(code **)*local_78)(local_78,0);
              FUN_1446efa72(&local_78,0,0,0x10);
              local_70 = 0;
            }
            if (local_78 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_143f0c238:
          plVar5 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          goto LAB_143f0bfde;
        }
        *(undefined1 *)(lVar7 + 0x89) = 0;
        *(char *)(param_1 + 0x38) = cVar6;
      }
    }
    else {
      *(undefined1 *)(lVar7 + 0x89) = 0;
      uVar9 = 0x1f;
      if (param_2 < 9) {
        uVar9 = (undefined1)(0x1e1d1c1b1a191801 >> ((param_2 - 1) * '\b' & 0x3f));
      }
      *(undefined1 *)(param_1 + 0x38) = uVar9;
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0bfde:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f0c31a FUN_143f0c31a body=1008 status=ok
// SIG undefined FUN_143f0c31a(void)

void FUN_143f0c31a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar7 = '\x12';
  if ((int)param_2[6] == 0) {
    lVar9 = *param_2;
    if (lVar9 == 0) {
      cVar7 = '\x05';
    }
    else {
      cVar7 = '\a';
      if (((*(uint *)(lVar9 + 8) & 0x10) == 0) &&
         (plVar4 = *(longlong **)(lVar9 + 0x20), plVar4 != (longlong *)0x0)) {
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        cVar7 = (**(code **)(*plVar4 + 0x318))(plVar4,lVar9,param_2 + 1);
        if (cVar7 != '\0') {
          FUN_1489b11aa(plVar4,*param_2,&local_58);
        }
        cVar7 = cVar7 == '\0';
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  cVar6 = FUN_143f0befa(param_1);
  if (cVar6 != '\0') goto LAB_143f0c34d;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0c6d4:
    uVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143f0c6d4;
      uVar10 = *puVar11;
    }
  }
  lVar9 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar10,param_1 + 0x58);
  if (lVar9 == 0) {
LAB_143f0c483:
    *(undefined1 *)(param_1 + 0x38) = 8;
  }
  else {
    if ((*(byte *)(lVar9 + 0x88) & 1) != 0) {
      *(undefined1 *)(lVar9 + 0x89) = 0;
      goto LAB_143f0c483;
    }
    if (cVar7 == '\0') {
      *(byte *)(lVar9 + 0x88) = *(byte *)(lVar9 + 0x88) | 1;
      *(undefined1 *)(lVar9 + 0x89) = 3;
      local_58 = (undefined8 *)0x0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      FUN_1446efa72(&local_58,0,4,0x10);
      uStack_50 = CONCAT44(uStack_50._4_4_,4);
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_143f0c5ac:
        *local_58 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_58[2] = lVar12;
        *local_58 = &PTR_FUN_14b4e1ef0;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = &LAB_143f0c8ba;
        *(undefined4 *)(local_58 + 6) = 0;
      }
      else {
        iVar8 = (int)plVar4[1];
        do {
          if (iVar8 == 0) goto LAB_143f0c5ac;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar13 = iVar8 == iVar5;
          if (bVar13) {
            *(int *)(plVar4 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
        } while (!bVar13);
        uVar10 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_58 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_58[2] = lVar12;
        *local_58 = &PTR_FUN_14b4e1ef0;
        local_58[3] = uVar10;
        local_58[4] = plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        local_58[5] = &LAB_143f0c8ba;
        *(undefined4 *)(local_58 + 6) = 0;
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
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0c6db:
        uVar10 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x3c);
        uVar10 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143f0c6db;
          uVar10 = *puVar11;
        }
      }
      FUN_143f0c70c(param_1 + 0x20,param_1 + 0x30,uVar10,&local_58);
      if ((int)uStack_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_143f0c34d;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        uStack_50 = uStack_50 & 0xffffffff00000000;
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f0c34d;
    }
    FUN_1447715ec(lVar9 + 0x60,&DAT_14c9485f0);
    *(undefined1 *)(lVar9 + 0x89) = 0;
    *(char *)(param_1 + 0x38) = cVar7;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0c34d:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0c70c FUN_143f0c70c body=428 status=ok
// SIG undefined FUN_143f0c70c(void)

void FUN_143f0c70c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4e1890;
  plVar1 = plVar3 + 2;
  local_58 = (longlong *)*param_4;
  *param_4 = 0;
  local_50._0_4_ = *(int *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_143f0738a(plVar1,*param_2,param_3);
  plVar3[2] = (longlong)&PTR_FUN_14b4df740;
  plVar3[6] = (longlong)&PTR_FUN_14b4df768;
  plVar3[0xd] = 0;
  *(undefined4 *)(plVar3 + 0xe) = 0;
  FUN_148a7189c(plVar3 + 0xd,&local_58);
  *(undefined1 *)(plVar3 + 0xf) = 0;
  if ((int)local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_143f0c803;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f0c803:
  local_68 = plVar1;
  local_60 = plVar3;
  FUN_143f18bc8(&local_68,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_148a7192e(param_1,&local_58);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f0c8c2 FUN_143f0c8c2 body=167 status=ok
// SIG undefined FUN_143f0c8c2(void)

ulonglong FUN_143f0c8c2(longlong param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(char *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_143f0c933;
  if (((*(int *)(param_1 + 0x40) == 0) || (uVar1 = *(uint *)(param_1 + 0x3c), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_143f0c929:
    *(undefined1 *)(param_1 + 0x38) = 3;
  }
  else {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 == (longlong *)0x0) || ((int)plVar2[2] != *(int *)(param_1 + 0x40))) ||
       ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)) goto LAB_143f0c929;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(lVar3 + 0x2b8) == 0) goto LAB_143f0c929;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    plVar2 = (longlong *)FUN_148a6a1fe(*(undefined8 *)(param_1 + 0x30),lVar3);
    if ((char)plVar2 != '\0') {
      plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x18));
      goto LAB_143f0c933;
    }
    *(undefined1 *)(param_1 + 0x38) = 4;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_143f0c933:
  return (ulonglong)plVar2 & 0xffffffffffffff01;
}



// FUNCTION 143f0c96a FUN_143f0c96a body=1629 status=ok
// SIG undefined FUN_143f0c96a(void)

void FUN_143f0c96a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *****_Src_00;
  size_t _Size;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_f8 [16];
  void *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined8 ****local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  void *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 ****local_98;
  undefined8 uStack_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar6 = FUN_143f0c8c2();
  if (cVar6 != '\0') goto LAB_143f0ca5b;
  if (*(int *)(param_2 + 0x30) == 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x40) < *(int *)(*(longlong *)(param_2 + 0x48) + 8)
       ) {
      *(undefined1 *)(param_1 + 0x38) = 0x10;
    }
    else {
      lVar1 = param_1 + 0x58;
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0cb4d:
        uVar10 = 0;
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x3c);
        uVar10 = 0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
          puVar13 = (undefined8 *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((puVar13 == (undefined8 *)0x0) ||
             ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143f0cb4d;
          uVar10 = *puVar13;
        }
      }
      lVar9 = FUN_143f065cc(*(longlong *)(param_1 + 0x30),uVar10,lVar1,1);
      if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x88) & 2) != 0)) {
        *(undefined1 *)(param_1 + 0x38) = 8;
      }
      else {
        if (*(char *)(lVar9 + 0x89) == '\0') {
          if (((*(int *)(lVar9 + 0x10) == 0) || (*(int *)(lVar9 + 0x14) == 0)) ||
             (*(int *)(lVar9 + 0x10) == DAT_14c948000)) {
            if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0cf98:
              uVar10 = 0;
            }
            else {
              uVar11 = *(uint *)(param_1 + 0x3c);
              uVar10 = 0;
              if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
                puVar13 = (undefined8 *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                if ((puVar13 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x40) ||
                    ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143f0cf98;
                uVar10 = *puVar13;
              }
            }
            cVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2c8))
                              (*(longlong **)(param_1 + 0x30),uVar10,lVar1,param_1 + 0x80);
            if (cVar6 != '\0') {
              *(char *)(param_1 + 0x38) = cVar6;
              goto LAB_143f0ca57;
            }
          }
          local_e8 = (void *)0x0;
          uStack_e0 = *(uint *)(*(undefined8 **)(param_2 + 0x48) + 1);
          _Size = (size_t)(int)uStack_e0;
          _Src = (void *)**(undefined8 **)(param_2 + 0x48);
          if (_Size == 0) {
            uStack_dc = 0;
          }
          else {
            FUN_1447a127e(&local_e8,uStack_e0,0);
            memcpy(local_e8,_Src,_Size);
          }
          plVar3 = *(longlong **)(param_1 + 0x30);
          if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0cf9f:
            uVar10 = 0;
          }
          else {
            uVar11 = *(uint *)(param_1 + 0x3c);
            uVar10 = 0;
            if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
              if ((puVar13 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x40) ||
                  ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143f0cf9f;
              uVar10 = *puVar13;
            }
          }
          local_108 = 0;
          FUN_1401412e0(param_2 + 0x38,local_b8,1,0);
          cVar6 = (**(code **)(*plVar3 + 0x2e8))(plVar3,uVar10,lVar1,local_b8);
          local_d8 = (undefined8 ****)0x0;
          uStack_d0 = 0;
          local_c8 = 0;
          local_c0 = 0xffff;
          FUN_148a6ad30(plVar3,uVar10,&local_d8);
          if ((local_d8 == (undefined8 ****)0x0) ||
             (cVar7 = (*(code *)(*local_d8)[0x60])(local_d8,local_b8), cVar7 != '\0')) {
            if (cVar6 != '\0') goto LAB_143f0cc69;
          }
          else {
            (*(code *)(*local_d8)[0x61])(local_d8,local_b8,0);
LAB_143f0cc69:
            local_78 = (void *)0x0;
            local_88 = (undefined8 *****)0x0;
            uStack_80 = 0;
            local_70 = 0xf;
            local_98 = (undefined8 ****)(((ulonglong)local_98 >> 0x10 & 0xffff) << 0x10);
            uStack_90 = 0;
            FUN_140c1c7d8(local_b8,&local_88);
            _Src_00 = &local_88;
            if (0xf < local_70) {
              _Src_00 = (undefined8 *****)local_88;
            }
            uVar11 = (uint)local_78;
            local_a8 = (void *)0x0;
            if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4((ulonglong)local_78 & 0xffffffff);
            }
            uStack_a0 = uVar11;
            if (uVar11 == 0) {
              uStack_9c = 0;
            }
            else {
              FUN_1447a127e(&local_a8,local_78,0);
              memcpy(local_a8,_Src_00,(ulonglong)(uVar11 & 0x7fffffff));
            }
            if (local_e8 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_e8 = local_a8;
            uStack_e0 = uStack_a0;
            uStack_dc = uStack_9c;
            FUN_1401d9a90(&local_88);
          }
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_b0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)local_b0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_b0 + 0x10))(local_b0);
              }
            }
          }
          local_60 = 0;
          uStack_58 = 0;
          local_98 = (undefined8 *****)0x0;
          uStack_90 = 0;
          FUN_1400b2348(param_1 + 0x80,&local_98,1);
          iVar4 = (int)uStack_90;
          iVar8 = ((int)uStack_90 == 0) + 4;
          local_d8 = local_98;
          local_98 = (undefined8 ****)0x0;
          iVar5 = uStack_90._4_4_;
          uStack_d0 = uStack_90;
          uStack_90 = 0;
          iVar12 = iVar8 + iVar4;
          if (iVar12 < iVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar8);
          }
          if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar12);
          }
          if (iVar5 < iVar12) {
            FUN_1446f8c06(&local_d8);
          }
          FUN_1400020e8(&local_d8,L".sav",4);
          local_88 = local_d8;
          uStack_80 = uStack_d0;
          local_d8 = (undefined8 ****)0x0;
          uStack_d0 = 0;
          if (local_98 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          local_68 = uStack_e0;
          local_78 = local_e8;
          local_e8 = (void *)0x0;
          local_70 = CONCAT44(uStack_dc,uStack_e0);
          uVar10 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          if (*(int *)(param_1 + 0x40) != 0) {
            uVar11 = *(uint *)(param_1 + 0x3c);
            uVar10 = 0;
            if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
              if ((puVar13 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x40) ||
                  ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
                uVar10 = 0;
              }
              else {
                uVar10 = *puVar13;
              }
            }
          }
          cVar6 = FUN_148a6b10a(*(undefined8 *)(param_1 + 0x30),uVar10,lVar1);
          if (cVar6 == '\0') {
            FUN_1447715ec(lVar9 + 0x10,param_1 + 0x80);
            *(undefined1 *)(lVar9 + 0x89) = 2;
            FUN_143f07518(param_1);
            uVar10 = FUN_14657d4c2();
            local_d8 = (undefined8 ****)FUN_143f0cfca;
            uStack_d0 = uStack_d0 & 0xffffffff00000000;
            FUN_148a6c242(local_f8,param_1);
            if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0cfa7:
              uVar14 = 0;
            }
            else {
              uVar11 = *(uint *)(param_1 + 0x3c);
              uVar14 = 0;
              if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
                puVar13 = (undefined8 *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                if ((puVar13 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x40) ||
                    ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143f0cfa7;
                uVar14 = *puVar13;
              }
            }
            FUN_148a5daf0(uVar10,uVar14,&local_88,local_f8);
          }
          else {
            *(char *)(param_1 + 0x38) = cVar6;
            *(undefined1 *)(param_1 + 0x18) = 1;
          }
          FUN_148a5d960(&local_88);
          if (local_e8 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_143f0ca5b;
        }
        *(undefined1 *)(param_1 + 0x38) = 0xd;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0x11;
  }
LAB_143f0ca57:
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0ca5b:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0cfca FUN_143f0cfca body=464 status=ok
// SIG undefined FUN_143f0cfca(void)

void FUN_143f0cfca(longlong param_1,byte param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  FUN_143f07a40();
  cVar2 = FUN_143f0c8c2(param_1);
  if (cVar2 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0d188:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143f0d188;
      uVar5 = *puVar6;
    }
  }
  lVar3 = FUN_143f065cc(*(undefined8 *)(param_1 + 0x30),uVar5,param_1 + 0x58,0);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x38) = 8;
    goto LAB_143f0d0f7;
  }
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0d196:
      uVar5 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x3c);
      uVar5 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x40) ||
            ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143f0d196;
        uVar5 = *puVar6;
      }
    }
    FUN_148a6b32c(*(undefined8 *)(param_1 + 0x30),uVar5,param_1 + 0x58);
    uVar4 = 0x1f;
    if (param_2 < 9) {
      uVar4 = (undefined1)(0x1e1d1c1b1a191801 >> ((param_2 - 1) * '\b' & 0x3f));
    }
    *(undefined1 *)(param_1 + 0x38) = uVar4;
    goto LAB_143f0d0f7;
  }
  *(byte *)(lVar3 + 0x88) = *(byte *)(lVar3 + 0x88) | 2;
  *(undefined1 *)(lVar3 + 0x89) = 3;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0d18f:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143f0d18f;
      uVar5 = *puVar6;
    }
  }
  cVar2 = FUN_143f056fe(*(undefined8 *)(param_1 + 0x30),uVar5,param_3,0);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    *(char *)(param_1 + 0x38) = cVar2;
  }
LAB_143f0d0f7:
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 143f0d19a FUN_143f0d19a body=167 status=ok
// SIG undefined FUN_143f0d19a(void)

ulonglong FUN_143f0d19a(longlong param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(char *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_143f0d20b;
  if (((*(int *)(param_1 + 0x40) == 0) || (uVar1 = *(uint *)(param_1 + 0x3c), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_143f0d201:
    *(undefined1 *)(param_1 + 0x38) = 3;
  }
  else {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 == (longlong *)0x0) || ((int)plVar2[2] != *(int *)(param_1 + 0x40))) ||
       ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)) goto LAB_143f0d201;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(lVar3 + 0x2b8) == 0) goto LAB_143f0d201;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    plVar2 = (longlong *)FUN_148a6a1fe(*(undefined8 *)(param_1 + 0x30),lVar3);
    if ((char)plVar2 != '\0') {
      plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x18));
      goto LAB_143f0d20b;
    }
    *(undefined1 *)(param_1 + 0x38) = 4;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_143f0d20b:
  return (ulonglong)plVar2 & 0xffffffffffffff01;
}



// FUNCTION 143f0d242 FUN_143f0d242 body=841 status=ok
// SIG undefined FUN_143f0d242(void)

void FUN_143f0d242(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143f07a40();
  cVar7 = FUN_143f0d19a(param_1);
  if (cVar7 != '\0') goto LAB_143f0d327;
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0d558:
      uVar9 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x3c);
      uVar9 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x40) ||
            ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143f0d558;
        uVar9 = *puVar10;
      }
    }
    cVar7 = FUN_143f056fe(*(undefined8 *)(param_1 + 0x30),uVar9,param_3,0);
    if (cVar7 == '\0') {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,4,0x10);
      local_28 = 4;
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_143f0d453:
        *local_30 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_30[2] = lVar11;
        *local_30 = &PTR_FUN_14b4e20b0;
        local_30[3] = 0;
        local_30[4] = 0;
        local_30[5] = &LAB_143f0d58c;
        *(undefined4 *)(local_30 + 6) = 0;
      }
      else {
        iVar8 = (int)plVar4[1];
        do {
          if (iVar8 == 0) goto LAB_143f0d453;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar12 = iVar8 == iVar5;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
        } while (!bVar12);
        uVar9 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_30 = &PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_30[2] = lVar11;
        *local_30 = &PTR_FUN_14b4e20b0;
        local_30[3] = uVar9;
        local_30[4] = plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        local_30[5] = &LAB_143f0d58c;
        *(undefined4 *)(local_30 + 6) = 0;
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
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0d55f:
        uVar9 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x3c);
        uVar9 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar10 == (undefined8 *)0x0) ||
             ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143f0d55f;
          uVar9 = *puVar10;
        }
      }
      FUN_143f0c70c(param_1 + 0x20,param_1 + 0x30,uVar9,&local_30);
      if (local_28 != 0) {
        if (local_30 == (undefined8 *)0x0) goto LAB_143f0d327;
        (**(code **)*local_30)(local_30,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f0d327;
    }
    *(char *)(param_1 + 0x38) = cVar7;
    goto LAB_143f0d323;
  case 1:
    break;
  case 2:
    param_2 = 0x18;
    break;
  case 3:
    param_2 = 0x19;
    break;
  case 4:
    param_2 = 0x1a;
    break;
  case 5:
    param_2 = 0x1b;
    break;
  case 6:
    param_2 = 0x1c;
    break;
  case 7:
    param_2 = 0x1d;
    break;
  case 8:
    param_2 = 0x1e;
    break;
  default:
    param_2 = 0x1f;
  }
  *(undefined1 *)(param_1 + 0x38) = param_2;
LAB_143f0d323:
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0d327:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0d594 FUN_143f0d594 body=976 status=ok
// SIG undefined FUN_143f0d594(void)

void FUN_143f0d594(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  code *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar7 = FUN_143f0d966();
  if (cVar7 != '\0') goto LAB_143f0d5b8;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0d682:
    uVar11 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar11 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143f0d682;
      uVar11 = *puVar12;
    }
  }
  lVar9 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar11,param_1 + 0x58);
  if ((((lVar9 == 0) || ((*(byte *)(lVar9 + 0x88) & 1) == 0)) || (*(int *)(lVar9 + 0x60) == 0)) ||
     ((*(int *)(lVar9 + 100) == 0 || (*(int *)(lVar9 + 0x60) == DAT_14c948000)))) {
    *(undefined1 *)(param_1 + 0x38) = 8;
  }
  else if (*(char *)(lVar9 + 0x89) == '\x03') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    if (*(char *)(lVar9 + 0x89) == '\0') {
      if (((*(char *)(param_1 + 0x80) == '\x01') &&
          (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))(), lVar10 != 0)) &&
         ((*(longlong *)(lVar10 + 0x1f0) != 0 && (lVar10 = FUN_141028a6c(), lVar10 != 0)))) {
        local_38 = (code *)0x0;
        local_30 = 0;
        FUN_1446efa72(&local_38,0,3,0x10);
        local_30 = 3;
        plVar4 = *(longlong **)(param_1 + 0x10);
        if (plVar4 == (longlong *)0x0) {
LAB_143f0d713:
          *(undefined ***)local_38 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          *(longlong *)(local_38 + 0x10) = lVar13;
          *(undefined ***)local_38 = &PTR_FUN_14b4e2120;
          *(undefined8 *)(local_38 + 0x18) = 0;
          *(undefined8 *)(local_38 + 0x20) = 0;
          *(longlong *)(local_38 + 0x28) = param_1;
        }
        else {
          iVar8 = (int)plVar4[1];
          do {
            if (iVar8 == 0) goto LAB_143f0d713;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar14 = iVar8 == iVar5;
            if (bVar14) {
              *(int *)(plVar4 + 1) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar14);
          uVar11 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          *(undefined ***)local_38 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          *(longlong *)(local_38 + 0x10) = lVar13;
          *(undefined ***)local_38 = &PTR_FUN_14b4e2120;
          *(undefined8 *)(local_38 + 0x18) = uVar11;
          *(longlong **)(local_38 + 0x20) = plVar4;
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          *(longlong *)(local_38 + 0x28) = param_1;
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
        FUN_1448b6402(lVar10 + 0xb8,&local_40,&local_38);
        if (local_30 == 0) {
LAB_143f0d79e:
          if (local_38 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_38 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_38)(local_38,0);
          FUN_1446efa72(&local_38,0,0,0x10);
          local_30 = 0;
          goto LAB_143f0d79e;
        }
        *(undefined8 *)(param_1 + 0x98) = local_40;
      }
      plVar4 = *(longlong **)(param_1 + 0x30);
      local_38 = FUN_143f0da0e;
      local_30 = 0;
      FUN_148a6c772(local_50,param_1);
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0d92c:
        uVar11 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x3c);
        uVar11 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar12 == (undefined8 *)0x0) ||
             ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143f0d92c;
          uVar11 = *puVar12;
        }
      }
      local_58 = local_50;
      (**(code **)(*plVar4 + 0x2f0))(plVar4,uVar11,lVar9,*(undefined1 *)(param_1 + 0x80));
      goto LAB_143f0d5b8;
    }
    *(undefined1 *)(param_1 + 0x38) = 0xd;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0d5b8:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0d966 FUN_143f0d966 body=167 status=ok
// SIG undefined FUN_143f0d966(void)

ulonglong FUN_143f0d966(longlong param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(char *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_143f0d9d7;
  if (((*(int *)(param_1 + 0x40) == 0) || (uVar1 = *(uint *)(param_1 + 0x3c), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_143f0d9cd:
    *(undefined1 *)(param_1 + 0x38) = 3;
  }
  else {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 == (longlong *)0x0) || ((int)plVar2[2] != *(int *)(param_1 + 0x40))) ||
       ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)) goto LAB_143f0d9cd;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(lVar3 + 0x2b8) == 0) goto LAB_143f0d9cd;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    plVar2 = (longlong *)FUN_148a6a1fe(*(undefined8 *)(param_1 + 0x30),lVar3);
    if ((char)plVar2 != '\0') {
      plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x18));
      goto LAB_143f0d9d7;
    }
    *(undefined1 *)(param_1 + 0x38) = 4;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_143f0d9d7:
  return (ulonglong)plVar2 & 0xffffffffffffff01;
}



// FUNCTION 143f0da0e FUN_143f0da0e body=956 status=ok
// SIG undefined FUN_143f0da0e(void)

void FUN_143f0da0e(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  code *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f0) != 0)) &&
        (lVar6 = FUN_141028a6c(), lVar6 != 0)) && (*(longlong *)(param_1 + 0x98) != 0)) {
      FUN_14480f766(lVar6 + 0xb8);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  cVar4 = FUN_143f0d966(param_1);
  if (cVar4 != '\0') goto LAB_143f0daa1;
  if ((byte)(param_2 - 0x18U) < 0xfd) {
    *(char *)(param_1 + 0x38) = param_2;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0db81:
      uVar7 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x3c);
      uVar7 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x40) ||
            ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143f0db81;
        uVar7 = *puVar10;
      }
    }
    lVar6 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar7,param_1 + 0x58);
    if ((((lVar6 == 0) || ((*(byte *)(lVar6 + 0x88) & 1) == 0)) || (*(int *)(lVar6 + 0x60) == 0)) ||
       ((*(int *)(lVar6 + 100) == 0 || (*(int *)(lVar6 + 0x60) == DAT_14c948000)))) {
      *(undefined1 *)(param_1 + 0x38) = 8;
    }
    else if (*(char *)(lVar6 + 0x89) == '\x03') {
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
    else if (param_2 == '\x15') {
      if (*(char *)(lVar6 + 0x89) == '\0') {
        *(undefined1 *)(lVar6 + 0x89) = 1;
        FUN_143f07518(param_1);
        uVar7 = FUN_14657d4c2();
        local_48 = FUN_143f0de40;
        local_40 = 0;
        FUN_148a6c93a(local_68,param_1,&local_48);
        local_58 = (code *)0x0;
        uStack_50 = 0;
        FUN_1400b2348(lVar6 + 0x10,&local_58,1);
        iVar2 = (int)uStack_50;
        iVar5 = ((int)uStack_50 == 0) + 4;
        local_48 = local_58;
        local_58 = (code *)0x0;
        local_40 = (int)uStack_50;
        iVar3 = uStack_50._4_4_;
        local_3c = uStack_50._4_4_;
        uStack_50 = 0;
        iVar9 = iVar5 + iVar2;
        if (iVar9 < iVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        if (iVar3 < iVar9) {
          FUN_1446f8c06(&local_48);
        }
        FUN_1400020e8(&local_48,L".sav",4);
        if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0ddb9:
          uVar11 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x3c);
          uVar11 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar10 == (undefined8 *)0x0) ||
               ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x40) ||
                ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143f0ddb9;
            uVar11 = *puVar10;
          }
        }
        FUN_148a5e020(uVar7,uVar11,&local_48,local_68);
        pcVar8 = local_58;
        if (local_48 != (code *)0x0) {
          FUN_1400020a8();
          pcVar8 = local_58;
        }
        goto LAB_143f0dd9e;
      }
      *(undefined1 *)(param_1 + 0x38) = 0xd;
    }
    else {
      if (param_2 == '\x16') {
        *(undefined1 *)(lVar6 + 0x89) = 3;
        local_58 = (code *)&LAB_143f0ddcc;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        FUN_148a6c772(&local_48,param_1);
        if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0ddb1:
          uVar7 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x3c);
          uVar7 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar10 == (undefined8 *)0x0) ||
               ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x40) ||
                ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_143f0ddb1;
            uVar7 = *puVar10;
          }
        }
        FUN_143f0c70c(param_1 + 0x20,param_1 + 0x30,uVar7,&local_48);
        pcVar8 = local_48;
        if (local_40 != 0) {
          if (local_48 == (code *)0x0) goto LAB_143f0daa1;
          (*(code *)**(undefined8 **)local_48)(local_48,0);
          FUN_1446efa72(&local_48,0,0,0x10);
          local_40 = 0;
          pcVar8 = local_48;
        }
LAB_143f0dd9e:
        if (pcVar8 != (code *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143f0daa1;
      }
      *(undefined1 *)(lVar6 + 0x89) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0daa1:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0de40 FUN_143f0de40 body=6204 status=ok
// SIG undefined FUN_143f0de40(void)

void FUN_143f0de40(longlong param_1,byte param_2,undefined8 *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong **pplVar22;
  byte *pbVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_258 [32];
  byte **local_238;
  longlong *local_228;
  uint *local_220;
  uint *local_218;
  longlong local_210;
  longlong *local_208;
  longlong *local_200;
  uint *local_1f8;
  uint *local_1f0;
  code *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  uint local_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  undefined8 local_198;
  uint local_190;
  undefined8 local_188;
  uint local_180;
  undefined8 local_178;
  uint local_170;
  undefined8 local_168;
  uint local_160;
  undefined8 local_158;
  uint local_150;
  byte *local_148;
  longlong *plStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  byte *local_108;
  undefined8 uStack_100;
  longlong local_f0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  longlong local_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_143f07a40();
  cVar3 = FUN_143f0d966(param_1);
  if (cVar3 != '\0') goto LAB_143f0de87;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0e063:
    uVar17 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x3c);
    uVar17 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar18 = (undefined8 *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar18 == (undefined8 *)0x0) ||
         ((*(int *)(puVar18 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_143f0e063;
      uVar17 = *puVar18;
    }
  }
  lVar6 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar17,(uint *)(param_1 + 0x58));
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x89) != '\x01')) {
    *(undefined1 *)(param_1 + 0x38) = 8;
  }
  else {
    if (param_2 == 0) {
      local_118 = (void *)0x0;
      local_110 = *(int *)(param_3 + 1);
      lVar26 = (longlong)local_110;
      _Src = (void *)*param_3;
      if (lVar26 == 0) {
        local_10c = 0;
      }
      else {
        FUN_1446dd670(&local_118,local_110,0);
        memcpy(local_118,_Src,lVar26 * 2);
      }
      cVar3 = FUN_140b127b8(&local_118,L".sav",4,1);
      if (cVar3 == '\0') {
LAB_143f0e039:
        *(undefined1 *)(lVar6 + 0x89) = 0;
        *(undefined1 *)(param_1 + 0x38) = 10;
LAB_143f0e044:
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      else {
        FUN_14000bbd8(&local_d8,&local_118,0);
        uVar4 = local_d8;
        uVar5 = *(uint *)(param_1 + 0x58);
        if (CONCAT44(uStack_bc,uStack_c0) != 0) {
          FUN_1400020a8();
        }
        if (uVar4 != uVar5) goto LAB_143f0e039;
        if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x40) < *(int *)(param_3 + 3)) {
          *(undefined1 *)(lVar6 + 0x89) = 0;
          *(undefined1 *)(param_1 + 0x38) = 0x10;
          goto LAB_143f0e044;
        }
        local_138 = (longlong *)0x0;
        uStack_130 = 0;
        local_128 = 0;
        local_120 = 0xffff;
        if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0e1f3:
          uVar17 = 0;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x3c);
          uVar17 = 0;
          if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
            puVar18 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if ((puVar18 == (undefined8 *)0x0) ||
               ((*(int *)(puVar18 + 2) != *(int *)(param_1 + 0x40) ||
                ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_143f0e1f3;
            uVar17 = *puVar18;
          }
        }
        local_210 = FUN_148a6ad30(*(longlong *)(param_1 + 0x30),uVar17,&local_138);
        if (local_210 == 0) {
          *(undefined1 *)(lVar6 + 0x89) = 0;
          *(undefined1 *)(param_1 + 0x38) = 5;
          goto LAB_143f0e044;
        }
        if (local_138 == (longlong *)0x0) {
          *(undefined1 *)(lVar6 + 0x89) = 0;
          *(undefined1 *)(param_1 + 0x38) = 7;
          goto LAB_143f0e044;
        }
        local_148 = (byte *)0x0;
        plStack_140 = (longlong *)0x0;
        cVar3 = FUN_148a69f88(param_3 + 2);
        if (cVar3 == '\0') {
          *(undefined1 *)(lVar6 + 0x89) = 0;
          *(undefined1 *)(param_1 + 0x38) = 0xc;
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        else {
          local_88 = (code *)DAT_14cb8dd60;
          plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cb8dd68);
          FUN_1448075d0(&local_d8);
          uVar4 = local_d8;
          uVar5 = *(uint *)(lVar6 + 0x60);
          if (CONCAT44(uStack_bc,uStack_c0) != 0) {
            FUN_1400020a8();
          }
          lVar6 = lVar6 + 0x60;
          if (uVar5 == uVar4) {
            lVar26 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x68);
            if (lVar26 != 0) {
              local_220 = *(uint **)(*(longlong *)(param_1 + 0x30) + 0x60);
              local_1f8 = local_220 + lVar26 * 10;
              do {
                local_88 = (code *)local_148;
                plStack_80 = plStack_140;
                if (plStack_140 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
                  UNLOCK();
                }
                pbVar23 = *(byte **)(local_210 + 0x68);
                plVar11 = *(longlong **)(local_210 + 0x70);
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                }
                uVar5 = local_220[1];
                if ((int)uVar5 < 2 && (int)local_220[9] < 1) {
                  local_218 = local_220 + 2;
                }
                else {
                  local_218 = *(uint **)(local_220 + 6);
                }
                local_228 = (longlong *)(ulonglong)uVar5;
                if (0 < (int)uVar5) {
                  local_208 = (longlong *)(ulonglong)(uVar5 - 1);
                  plVar7 = (longlong *)0x0;
                  do {
                    puVar10 = local_218 + (longlong)plVar7 * 3;
                    if (plVar7 == local_208) {
                      local_198 = *(undefined8 *)puVar10;
                      local_190 = puVar10[2];
                      FUN_1448075d0(&local_d8,&local_198);
                      plVar20 = plStack_80;
                      puVar18 = &DAT_14c9a1308;
                      if (local_88 != (code *)0x0) {
                        plVar15 = &DAT_14c9a1288;
                        if (((byte)*local_88 & 2) != 0) {
                          plVar15 = (longlong *)(*(longlong *)(local_88 + 8) + 0x18);
                        }
                        puVar18 = &DAT_14c9a1308;
                        if ((int)plVar15[2] != *(int *)((longlong)plVar15 + 0x3c)) {
                          plVar19 = plVar15 + 8;
                          if ((longlong *)plVar15[9] != (longlong *)0x0) {
                            plVar19 = (longlong *)plVar15[9];
                          }
                          iVar24 = *(int *)((longlong)plVar19 +
                                           (ulonglong)((int)plVar15[10] - 1U & local_d8) * 4);
                          puVar18 = &DAT_14c9a1308;
                          if (iVar24 != -1) {
                            do {
                              lVar26 = *plVar15 + (longlong)iVar24 * 0x40;
                              if (*(uint *)(*plVar15 + (longlong)iVar24 * 0x40) == local_d8) {
                                puVar18 = &DAT_14c9a1308;
                                if (lVar26 == 0) goto LAB_143f0e62f;
                                puVar8 = (undefined8 *)(lVar26 + 0x28);
                                puVar18 = &DAT_14c9a1308;
                                if ((puVar8 == (undefined8 *)0x0) ||
                                   (((byte *)*puVar8 != (byte *)0x0 &&
                                    (puVar18 = puVar8, (*(byte *)*puVar8 & 0x40) == 0))))
                                goto LAB_143f0e62f;
                                break;
                              }
                              iVar24 = *(int *)(lVar26 + 0x38);
                            } while (iVar24 != -1);
                            puVar18 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_143f0e62f:
                      local_88 = (code *)*puVar18;
                      plVar15 = (longlong *)puVar18[1];
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                        UNLOCK();
                      }
                      if (plStack_80 != (longlong *)0x0) {
                        LOCK();
                        plVar19 = plStack_80 + 1;
                        *(int *)plVar19 = (int)*plVar19 + -1;
                        UNLOCK();
                        if ((int)*plVar19 == 0) {
                          puVar18 = (undefined8 *)*plStack_80;
                          plStack_80 = plVar15;
                          (*(code *)*puVar18)(plVar20);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar20 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          plVar15 = plStack_80;
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar20 + 0x10))(plVar20);
                            plVar15 = plStack_80;
                          }
                        }
                      }
                      plStack_80 = plVar15;
                      if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                        FUN_1400020a8();
                      }
                      puVar18 = &DAT_14c9a1288;
                      if ((pbVar23 != (byte *)0x0) &&
                         (puVar18 = &DAT_14c9a1288, (*pbVar23 & 2) != 0)) {
                        puVar18 = (undefined8 *)(*(longlong *)(pbVar23 + 8) + 0x18);
                      }
                      local_1a8 = *(undefined8 *)puVar10;
                      local_1a0 = puVar10[2];
                      FUN_1448075d0(&local_d8,&local_1a8);
                      FUN_14045886c(puVar18,&local_d8);
                      if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                        FUN_1400020a8();
                      }
                      if ((local_88 != (code *)0x0) && (((byte)*local_88 & 3) != 0)) {
                        local_238 = (byte **)((ulonglong)local_238 & 0xffffffffffffff00);
                        FUN_1401412e0(&local_88,&local_108);
                        local_1b8 = *(undefined8 *)puVar10;
                        local_1b0 = puVar10[2];
                        FUN_1448075d0(&local_d8,&local_1b8);
                        if (pbVar23 != (byte *)0x0) {
                          local_238 = (byte **)((ulonglong)local_238 & 0xffffffffffffff00);
                          FUN_14014191c(pbVar23,&local_d8,&local_108,0);
                        }
                        if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                          FUN_1400020a8();
                        }
                        plVar20 = uStack_100;
                        if (uStack_100 != (longlong *)0x0) {
                          LOCK();
                          plVar15 = uStack_100 + 1;
                          *(int *)plVar15 = (int)*plVar15 + -1;
                          UNLOCK();
                          if ((int)*plVar15 == 0) {
                            (**(code **)*uStack_100)(uStack_100);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar20 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar20 + 0x10))(plVar20);
                            }
                          }
                        }
                      }
                    }
                    else {
                      local_158 = *(undefined8 *)puVar10;
                      local_150 = puVar10[2];
                      FUN_1448075d0(&local_d8,&local_158);
                      puVar18 = &DAT_14c9a1308;
                      if (pbVar23 != (byte *)0x0) {
                        plVar20 = &DAT_14c9a1288;
                        if ((*pbVar23 & 2) != 0) {
                          plVar20 = (longlong *)(*(longlong *)(pbVar23 + 8) + 0x18);
                        }
                        puVar18 = &DAT_14c9a1308;
                        if ((int)plVar20[2] != *(int *)((longlong)plVar20 + 0x3c)) {
                          plVar15 = plVar20 + 8;
                          if ((longlong *)plVar20[9] != (longlong *)0x0) {
                            plVar15 = (longlong *)plVar20[9];
                          }
                          iVar24 = *(int *)((longlong)plVar15 +
                                           (ulonglong)((int)plVar20[10] - 1U & local_d8) * 4);
                          puVar18 = &DAT_14c9a1308;
                          if (iVar24 != -1) {
                            do {
                              lVar26 = *plVar20 + (longlong)iVar24 * 0x40;
                              if (*(uint *)(*plVar20 + (longlong)iVar24 * 0x40) == local_d8) {
                                puVar18 = &DAT_14c9a1308;
                                if (lVar26 == 0) goto LAB_143f0e7e4;
                                puVar8 = (undefined8 *)(lVar26 + 0x28);
                                puVar18 = &DAT_14c9a1308;
                                if ((puVar8 == (undefined8 *)0x0) ||
                                   (((byte *)*puVar8 != (byte *)0x0 &&
                                    (puVar18 = puVar8, (*(byte *)*puVar8 & 0x40) == 0))))
                                goto LAB_143f0e7e4;
                                break;
                              }
                              iVar24 = *(int *)(lVar26 + 0x38);
                            } while (iVar24 != -1);
                            puVar18 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_143f0e7e4:
                      if ((byte *)*puVar18 == (byte *)0x0) {
                        bVar28 = false;
                      }
                      else {
                        bVar28 = (*(byte *)*puVar18 & 3) != 0;
                      }
                      if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                        FUN_1400020a8();
                      }
                      if (!bVar28) {
                        local_108 = (byte *)0x0;
                        uStack_100 = (longlong *)0x0;
                        FUN_14009b010(&local_108,3,0);
                        local_168 = *(undefined8 *)puVar10;
                        local_160 = puVar10[2];
                        FUN_1448075d0(&local_d8,&local_168);
                        if (pbVar23 != (byte *)0x0) {
                          local_238 = (byte **)((ulonglong)local_238 & 0xffffffffffffff00);
                          FUN_14014191c(pbVar23,&local_d8,&local_108,0);
                        }
                        if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                          FUN_1400020a8();
                        }
                        plVar20 = uStack_100;
                        if (uStack_100 != (longlong *)0x0) {
                          LOCK();
                          plVar15 = uStack_100 + 1;
                          *(int *)plVar15 = (int)*plVar15 + -1;
                          UNLOCK();
                          if ((int)*plVar15 == 0) {
                            (**(code **)*uStack_100)(uStack_100);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar20 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar20 + 0x10))(plVar20);
                            }
                          }
                        }
                      }
                      local_178 = *(undefined8 *)puVar10;
                      local_170 = puVar10[2];
                      FUN_1448075d0(&local_d8,&local_178);
                      plVar20 = plStack_80;
                      puVar18 = &DAT_14c9a1308;
                      if (local_88 != (code *)0x0) {
                        plVar15 = &DAT_14c9a1288;
                        if (((byte)*local_88 & 2) != 0) {
                          plVar15 = (longlong *)(*(longlong *)(local_88 + 8) + 0x18);
                        }
                        puVar18 = &DAT_14c9a1308;
                        if ((int)plVar15[2] != *(int *)((longlong)plVar15 + 0x3c)) {
                          plVar19 = plVar15 + 8;
                          if ((longlong *)plVar15[9] != (longlong *)0x0) {
                            plVar19 = (longlong *)plVar15[9];
                          }
                          iVar24 = *(int *)((longlong)plVar19 +
                                           (ulonglong)((int)plVar15[10] - 1U & local_d8) * 4);
                          puVar18 = &DAT_14c9a1308;
                          if (iVar24 != -1) {
                            do {
                              lVar26 = *plVar15 + (longlong)iVar24 * 0x40;
                              if (*(uint *)(*plVar15 + (longlong)iVar24 * 0x40) == local_d8) {
                                puVar18 = &DAT_14c9a1308;
                                if (lVar26 == 0) goto LAB_143f0e998;
                                puVar8 = (undefined8 *)(lVar26 + 0x28);
                                puVar18 = &DAT_14c9a1308;
                                if ((puVar8 == (undefined8 *)0x0) ||
                                   (((byte *)*puVar8 != (byte *)0x0 &&
                                    (puVar18 = puVar8, (*(byte *)*puVar8 & 0x40) == 0))))
                                goto LAB_143f0e998;
                                break;
                              }
                              iVar24 = *(int *)(lVar26 + 0x38);
                            } while (iVar24 != -1);
                            puVar18 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_143f0e998:
                      local_88 = (code *)*puVar18;
                      plVar15 = (longlong *)puVar18[1];
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                        UNLOCK();
                      }
                      if (plStack_80 != (longlong *)0x0) {
                        LOCK();
                        plVar19 = plStack_80 + 1;
                        *(int *)plVar19 = (int)*plVar19 + -1;
                        UNLOCK();
                        if ((int)*plVar19 == 0) {
                          puVar18 = (undefined8 *)*plStack_80;
                          plStack_80 = plVar15;
                          (*(code *)*puVar18)(plVar20);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar20 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          plVar15 = plStack_80;
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar20 + 0x10))(plVar20);
                            plVar15 = plStack_80;
                          }
                        }
                      }
                      plStack_80 = plVar15;
                      if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                        FUN_1400020a8();
                      }
                      local_188 = *(undefined8 *)puVar10;
                      local_180 = puVar10[2];
                      FUN_1448075d0(&local_d8,&local_188);
                      puVar18 = &DAT_14c9a1308;
                      if (pbVar23 != (byte *)0x0) {
                        plVar20 = &DAT_14c9a1288;
                        if ((*pbVar23 & 2) != 0) {
                          plVar20 = (longlong *)(*(longlong *)(pbVar23 + 8) + 0x18);
                        }
                        puVar18 = &DAT_14c9a1308;
                        if ((int)plVar20[2] != *(int *)((longlong)plVar20 + 0x3c)) {
                          plVar15 = plVar20 + 8;
                          if ((longlong *)plVar20[9] != (longlong *)0x0) {
                            plVar15 = (longlong *)plVar20[9];
                          }
                          iVar24 = *(int *)((longlong)plVar15 +
                                           (ulonglong)((int)plVar20[10] - 1U & local_d8) * 4);
                          puVar18 = &DAT_14c9a1308;
                          if (iVar24 != -1) {
                            do {
                              lVar26 = *plVar20 + (longlong)iVar24 * 0x40;
                              if (*(uint *)(*plVar20 + (longlong)iVar24 * 0x40) == local_d8) {
                                puVar18 = &DAT_14c9a1308;
                                if (lVar26 == 0) goto LAB_143f0eaa8;
                                puVar8 = (undefined8 *)(lVar26 + 0x28);
                                puVar18 = &DAT_14c9a1308;
                                if ((puVar8 == (undefined8 *)0x0) ||
                                   (((byte *)*puVar8 != (byte *)0x0 &&
                                    (puVar18 = puVar8, (*(byte *)*puVar8 & 0x40) == 0))))
                                goto LAB_143f0eaa8;
                                break;
                              }
                              iVar24 = *(int *)(lVar26 + 0x38);
                            } while (iVar24 != -1);
                            puVar18 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_143f0eaa8:
                      pbVar23 = (byte *)*puVar18;
                      plVar20 = (longlong *)puVar18[1];
                      if (plVar20 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                        UNLOCK();
                      }
                      if (plVar11 != (longlong *)0x0) {
                        LOCK();
                        plVar15 = plVar11 + 1;
                        *(int *)plVar15 = (int)*plVar15 + -1;
                        UNLOCK();
                        if ((int)*plVar15 == 0) {
                          (**(code **)*plVar11)(plVar11);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar11 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar11 + 0x10))(plVar11);
                          }
                        }
                      }
                      plVar11 = plVar20;
                      if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                        FUN_1400020a8();
                      }
                    }
                    plVar7 = (longlong *)((longlong)plVar7 + 1);
                  } while (plVar7 != local_228);
                }
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = plVar11 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
                plVar11 = plStack_80;
                if (plStack_80 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = plStack_80 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*plStack_80)(plStack_80);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
                local_220 = local_220 + 10;
              } while (local_220 != local_1f8);
            }
            lVar26 = local_210;
            FUN_148a6af4a(local_138,local_210);
            local_238 = (byte **)((ulonglong)local_238 & 0xffffffffffffff00);
            FUN_1401412e0(lVar26 + 0x68,&local_108,1,0);
            local_208 = local_138;
            if ((longlong)(int)local_138[0x3f] != 0) {
              local_218 = (uint *)local_138[0x3e];
              local_1f0 = local_218 + (longlong)(int)local_138[0x3f] * 0x14;
              do {
                plVar11 = local_208;
                if ((char)local_218[5] == '\x01') {
                  local_78 = (undefined8 *)0x0;
                  local_70 = (longlong **)0x400000000;
                  pplVar22 = local_70;
                  pbVar23 = local_108;
                  for (uVar5 = local_218[9];
                      (local_108 = pbVar23, -1 < (int)uVar5 && ((int)uVar5 < (int)plVar11[0x3f]));
                      uVar5 = *(uint *)(plVar11[0x3e] + 0x24 + (ulonglong)uVar5 * 0x50)) {
                    local_70._0_4_ = (int)pplVar22;
                    lVar26 = (longlong)(int)local_70;
                    uVar4 = (int)local_70 + 1;
                    local_70._4_4_ = (uint)((ulonglong)pplVar22 >> 0x20);
                    local_70 = (longlong **)CONCAT44(local_70._4_4_,uVar4);
                    if (local_70._4_4_ < uVar4) {
                      FUN_1400c4ccc(&local_88,(ulonglong)pplVar22 & 0xffffffff);
                    }
                    puVar18 = local_78;
                    if (local_78 == (undefined8 *)0x0) {
                      puVar18 = &local_88;
                    }
                    *(uint *)((longlong)puVar18 + lVar26 * 4) = uVar5;
                    pplVar22 = local_70;
                    pbVar23 = local_108;
                  }
                  local_228 = uStack_100;
                  local_70 = pplVar22;
                  if (uStack_100 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(uStack_100 + 1) = (int)uStack_100[1] + 1;
                    UNLOCK();
                  }
                  while ((int)local_70 != 0) {
                    puVar18 = local_78;
                    if (local_78 == (undefined8 *)0x0) {
                      puVar18 = &local_88;
                    }
                    lVar26 = (longlong)
                             *(int *)((longlong)puVar18 + (longlong)(int)local_70 * 4 + -4);
                    local_70 = (longlong **)CONCAT44(local_70._4_4_,(int)local_70 + -1);
                    FUN_146968f00();
                    puVar18 = &DAT_14c9a1308;
                    if (pbVar23 != (byte *)0x0) {
                      puVar18 = (undefined8 *)FUN_1446e60f4(pbVar23,lVar26 * 0x50 + local_208[0x3e])
                      ;
                    }
                    plVar7 = local_228;
                    pbVar23 = (byte *)*puVar18;
                    plVar11 = (longlong *)puVar18[1];
                    if (plVar11 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                      UNLOCK();
                    }
                    if (local_228 != (longlong *)0x0) {
                      LOCK();
                      plVar20 = local_228 + 1;
                      *(int *)plVar20 = (int)*plVar20 + -1;
                      UNLOCK();
                      if ((int)*plVar20 == 0) {
                        (**(code **)*local_228)(local_228);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar7 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*local_228 + 0x10))();
                        }
                      }
                    }
                    local_228 = plVar11;
                    if ((byte)(*(char *)(local_208[0x3e] + 8 + lVar26 * 0x50) - 1U) < 2) {
                      puVar18 = &DAT_14c9a1308;
                      if (pbVar23 != (byte *)0x0) {
                        plVar7 = &DAT_14c9a1288;
                        if ((*pbVar23 & 2) != 0) {
                          plVar7 = (longlong *)(*(longlong *)(pbVar23 + 8) + 0x18);
                        }
                        puVar18 = &DAT_14c9a1308;
                        if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
                          uVar5 = *(uint *)(*(longlong *)(local_210 + 0x78) + lVar26 * 0x70 + 0x10);
                          plVar20 = plVar7 + 8;
                          if ((longlong *)plVar7[9] != (longlong *)0x0) {
                            plVar20 = (longlong *)plVar7[9];
                          }
                          iVar24 = *(int *)((longlong)plVar20 +
                                           (ulonglong)((int)plVar7[10] - 1U & uVar5) * 4);
                          puVar18 = &DAT_14c9a1308;
                          if (iVar24 != -1) {
                            do {
                              lVar26 = *plVar7 + (longlong)iVar24 * 0x40;
                              if (*(uint *)(*plVar7 + (longlong)iVar24 * 0x40) == uVar5) {
                                puVar18 = &DAT_14c9a1308;
                                if (lVar26 == 0) goto LAB_143f0ee82;
                                puVar8 = (undefined8 *)(lVar26 + 0x28);
                                puVar18 = &DAT_14c9a1308;
                                if ((puVar8 == (undefined8 *)0x0) ||
                                   (((byte *)*puVar8 != (byte *)0x0 &&
                                    (puVar18 = puVar8, (*(byte *)*puVar8 & 0x40) == 0))))
                                goto LAB_143f0ee82;
                                break;
                              }
                              iVar24 = *(int *)(lVar26 + 0x38);
                            } while (iVar24 != -1);
                            puVar18 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_143f0ee82:
                      pbVar23 = (byte *)*puVar18;
                      local_228 = (longlong *)puVar18[1];
                      if (local_228 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(local_228 + 1) = (int)local_228[1] + 1;
                        UNLOCK();
                      }
                      if (plVar11 != (longlong *)0x0) {
                        LOCK();
                        plVar7 = plVar11 + 1;
                        *(int *)plVar7 = (int)*plVar7 + -1;
                        UNLOCK();
                        if ((int)*plVar7 == 0) {
                          (**(code **)*plVar11)(plVar11);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar11 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar11 + 0x10))(plVar11);
                          }
                        }
                      }
                    }
                  }
                  if ((pbVar23 != (byte *)0x0) && ((*pbVar23 & 0x6b) == 3)) {
                    if ((byte)((char)local_218[2] - 1U) < 2) {
                      puVar18 = (undefined8 *)FUN_1446e60f4(pbVar23,local_218);
                      pbVar23 = (byte *)*puVar18;
                      local_200 = (longlong *)puVar18[1];
                      if (local_200 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(local_200 + 1) = (int)local_200[1] + 1;
                        UNLOCK();
                      }
                      plVar11 = &DAT_14c9a1288;
                      if ((pbVar23 != (byte *)0x0) &&
                         (plVar11 = &DAT_14c9a1288, (*pbVar23 & 2) != 0)) {
                        plVar11 = (longlong *)(*(longlong *)(pbVar23 + 8) + 0x18);
                      }
                      local_1f8 = (uint *)(plVar11 + 3);
                      uVar5 = *(uint *)(plVar11 + 6);
                      local_220 = (uint *)(ulonglong)uVar5;
                      if (uVar5 == 0) {
                        uVar21 = 1;
                        uVar27 = 0;
                        iVar24 = 0;
                        puVar10 = (uint *)0x0;
                      }
                      else {
                        puVar10 = (uint *)plVar11[5];
                        if ((uint *)plVar11[5] == (uint *)0x0) {
                          puVar10 = local_1f8;
                        }
                        uVar4 = *puVar10;
                        if (uVar4 == 0) {
                          iVar24 = uVar5 + 0x1e;
                          if (-1 < (int)(uVar5 - 1)) {
                            iVar24 = uVar5 - 1;
                          }
                          uVar27 = 0;
                          uVar21 = (ulonglong)(uint)(iVar24 >> 5);
                          if (iVar24 >> 5 < 1) {
                            uVar21 = uVar27;
                          }
                          iVar24 = 0;
                          do {
                            if (uVar21 == uVar27) goto LAB_143f0f054;
                            iVar24 = iVar24 + 0x20;
                            uVar4 = puVar10[uVar27 + 1];
                            uVar27 = uVar27 + 1;
                          } while (uVar4 == 0);
                        }
                        else {
                          uVar27 = 0;
                          iVar24 = 0;
                        }
                        uVar21 = (ulonglong)(-uVar4 & uVar4);
                        uVar2 = uVar21 * 2 + 1;
                        lVar26 = 0x3f;
                        if (uVar2 != 0) {
                          for (; uVar2 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                          }
                        }
                        uVar4 = (iVar24 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                        puVar10 = (uint *)(ulonglong)uVar4;
                        if ((int)uVar5 <= (int)uVar4) {
                          puVar10 = local_220;
                        }
                      }
                      if ((uint)puVar10 != uVar5) {
                        uVar5 = 0xffffffff;
                        do {
                          lVar26 = *plVar11;
                          lVar9 = (longlong)(int)puVar10 * 0x40;
                          *(undefined8 *)(lVar26 + 0x28 + lVar9) = 0;
                          plVar7 = *(longlong **)(lVar26 + 0x30 + lVar9);
                          if (plVar7 != (longlong *)0x0) {
                            *(undefined8 *)(lVar9 + lVar26 + 0x30) = 0;
                            LOCK();
                            plVar20 = plVar7 + 1;
                            *(int *)plVar20 = (int)*plVar20 + -1;
                            UNLOCK();
                            if ((int)*plVar20 == 0) {
                              (**(code **)*plVar7)(plVar7);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar7 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                (**(code **)(*plVar7 + 0x10))(plVar7);
                              }
                            }
                          }
                          uVar5 = uVar5 & ~(uint)uVar21;
                          puVar10 = (uint *)plVar11[5];
                          if ((uint *)plVar11[5] == (uint *)0x0) {
                            puVar10 = local_1f8;
                          }
                          uVar4 = *(uint *)(plVar11 + 6);
                          iVar25 = (int)uVar27;
                          lVar26 = (longlong)iVar25;
                          uVar16 = puVar10[lVar26] & uVar5;
                          if (uVar16 == 0) {
                            iVar13 = uVar4 + 0x1e;
                            if (-1 < (int)(uVar4 - 1)) {
                              iVar13 = uVar4 - 1;
                            }
                            iVar13 = iVar13 >> 5;
                            iVar24 = iVar24 + 0x20;
                            iVar14 = iVar13;
                            if (iVar13 < iVar25) {
                              iVar14 = iVar25;
                            }
                            if (iVar25 < iVar13) {
                              lVar9 = 0;
                              do {
                                uVar16 = puVar10[lVar26 + lVar9 + 1];
                                if (uVar16 != 0) {
                                  uVar27 = (ulonglong)(iVar25 + (int)lVar9 + 1);
                                  uVar5 = 0xffffffff;
                                  goto LAB_143f0f1b1;
                                }
                                iVar24 = iVar24 + 0x20;
                                lVar9 = lVar9 + 1;
                              } while (iVar14 - lVar26 != lVar9);
                              uVar5 = 0xffffffff;
                              iVar25 = iVar14;
                            }
                            uVar27 = (ulonglong)(iVar25 + 1);
                            uVar16 = uVar4;
                          }
                          else {
LAB_143f0f1b1:
                            uVar21 = (ulonglong)(-uVar16 & uVar16);
                            uVar2 = uVar21 * 2 + 1;
                            lVar26 = 0x3f;
                            if (uVar2 != 0) {
                              for (; uVar2 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                              }
                            }
                            uVar16 = (iVar24 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                            if ((int)uVar4 <= (int)uVar16) {
                              uVar16 = uVar4;
                            }
                          }
                          puVar10 = (uint *)(ulonglong)uVar16;
                        } while (uVar16 != (uint)local_220);
                      }
LAB_143f0f054:
                      plVar11 = local_200;
                      if (local_200 != (longlong *)0x0) {
                        LOCK();
                        plVar7 = local_200 + 1;
                        *(int *)plVar7 = (int)*plVar7 + -1;
                        UNLOCK();
                        if ((int)*plVar7 == 0) {
                          (**(code **)*local_200)(local_200);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar11 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*local_200 + 0x10))();
                          }
                        }
                      }
                    }
                    else {
                      lVar26 = *(longlong *)(pbVar23 + 8);
                      FUN_1446dcdd4(&local_d8,local_218);
                      FUN_14045886c(lVar26 + 0x18,&local_d8);
                      if (CONCAT44(uStack_bc,uStack_c0) != 0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  plVar11 = local_228;
                  if (local_228 != (longlong *)0x0) {
                    LOCK();
                    plVar7 = local_228 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      (**(code **)*local_228)(local_228);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar11 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_228 + 0x10))();
                      }
                    }
                  }
                  if (local_78 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                local_218 = local_218 + 0x14;
              } while (local_218 != local_1f0);
            }
            local_88 = FUN_143f0f67e;
            plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
            FUN_148a6cabc(&local_d8,param_1);
            local_238 = (byte **)&local_d8;
            FUN_143e5e21a(local_138,local_210,lVar6,&local_108);
            if (uStack_d0 == 0) {
LAB_143f0e335:
              if (CONCAT44(uStack_d4,local_d8) != 0) {
                FUN_1400020a8();
              }
            }
            else {
              puVar18 = (undefined8 *)CONCAT44(uStack_d4,local_d8);
              if (puVar18 != (undefined8 *)0x0) {
                (**(code **)*puVar18)(puVar18,0);
                FUN_1446efa72(&local_d8,0,0,0x10);
                uStack_d0 = 0;
                goto LAB_143f0e335;
              }
            }
            plVar11 = uStack_100;
            if (uStack_100 != (longlong *)0x0) {
              LOCK();
              plVar7 = uStack_100 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*uStack_100)(uStack_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
          }
          else {
            local_88 = (code *)0x0;
            plStack_80 = (longlong *)0x0;
            local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
            local_70 = (longlong **)0x0;
            uStack_68 = 0;
            cVar3 = (**(code **)(*local_138 + 0x318))(local_138,local_210,lVar6);
            if (cVar3 == '\0') {
              *(undefined1 *)(param_1 + 0x38) = 6;
              *(undefined1 *)(param_1 + 0x18) = 1;
            }
            else {
              local_1c8 = 0;
              iVar24 = (int)local_138[0x3f];
              lVar26 = local_138[0x3e];
              local_1c0 = iVar24;
              if (iVar24 == 0) {
                local_1bc = 0;
              }
              else {
                FUN_148a76562(&local_1c8,iVar24);
                FUN_148a765cb(local_1c8,lVar26,iVar24);
              }
              uVar5 = FUN_1489b0f9e(local_138,&local_88);
              if ((int)uVar5 < 0 || local_1c0 <= (int)uVar5) {
                *(undefined1 *)(param_1 + 0x38) = 6;
                *(undefined1 *)(param_1 + 0x18) = 1;
              }
              else {
                puVar10 = (uint *)(local_1c8 + (ulonglong)uVar5 * 0x50);
                local_d8 = *puVar10;
                uStack_d4 = puVar10[1];
                uStack_d0 = puVar10[2];
                uStack_cc = puVar10[3];
                local_c8 = puVar10[4];
                uStack_c4 = puVar10[5];
                uStack_c0 = puVar10[6];
                uStack_bc = puVar10[7];
                local_b8 = *(undefined8 *)(puVar10 + 8);
                FUN_1447a97f4(local_b0);
                local_108 = (byte *)CONCAT44(uStack_d4,local_d8);
                plVar11 = (longlong *)FUN_1489b104e(local_138,local_210,&local_108,0);
                if (plVar11 == (longlong *)0x0) {
                  *(undefined1 *)(param_1 + 0x38) = 6;
                  *(undefined1 *)(param_1 + 0x18) = 1;
                }
                else {
                  if ((byte)((char)uStack_d0 - 1U) < 2) {
                    pplVar22 = &plStack_80;
                    if (1 < local_88._4_4_) {
                      pplVar22 = local_70;
                    }
                    if (0 < uStack_68._4_4_) {
                      pplVar22 = local_70;
                    }
                    local_1d8 = *(undefined8 *)
                                 ((longlong)pplVar22 + (longlong)(local_88._4_4_ + -1) * 0xc);
                    local_1d0 = *(undefined4 *)
                                 ((longlong)pplVar22 + (longlong)(local_88._4_4_ + -1) * 0xc + 8);
                    FUN_1448075d0(&local_108);
                    if ((int)plVar11[2] == (uint)local_108) {
                      FUN_14131a8f2(&local_148,&local_108);
                      plVar7 = &DAT_14c9a1308;
                      if (*plVar11 != 0) {
                        local_238 = (byte **)((ulonglong)local_238 & 0xffffffffffffff00);
                        FUN_14014191c(*plVar11,&local_108,&local_148,0);
                        pbVar23 = (byte *)*plVar11;
                        plVar7 = &DAT_14c9a1308;
                        if (pbVar23 != (byte *)0x0) {
                          if ((*pbVar23 & 2) == 0) {
                            plVar20 = &DAT_14c9a1288;
                          }
                          else {
                            plVar20 = (longlong *)(*(longlong *)(pbVar23 + 8) + 0x18);
                          }
                          plVar7 = &DAT_14c9a1308;
                          if ((int)plVar20[2] != *(int *)((longlong)plVar20 + 0x3c)) {
                            plVar7 = plVar20 + 8;
                            if ((longlong *)plVar20[9] != (longlong *)0x0) {
                              plVar7 = (longlong *)plVar20[9];
                            }
                            iVar24 = *(int *)((longlong)plVar7 +
                                             (ulonglong)((int)plVar20[10] - 1U & (uint)local_108) *
                                             4);
                            plVar7 = &DAT_14c9a1308;
                            if (iVar24 != -1) {
                              do {
                                lVar26 = *plVar20 + (longlong)iVar24 * 0x40;
                                if (*(uint *)(*plVar20 + (longlong)iVar24 * 0x40) == (uint)local_108
                                   ) {
                                  plVar7 = &DAT_14c9a1308;
                                  if (lVar26 == 0) goto LAB_143f0f4de;
                                  plVar20 = (longlong *)(lVar26 + 0x28);
                                  plVar7 = &DAT_14c9a1308;
                                  if ((plVar20 == (longlong *)0x0) ||
                                     (((byte *)*plVar20 != (byte *)0x0 &&
                                      (plVar7 = plVar20, (*(byte *)*plVar20 & 0x40) == 0))))
                                  goto LAB_143f0f4de;
                                  break;
                                }
                                iVar24 = *(int *)(lVar26 + 0x38);
                              } while (iVar24 != -1);
                              plVar7 = &DAT_14c9a1308;
                            }
                          }
                        }
                      }
LAB_143f0f4de:
                      if (plVar11 != (longlong *)&DAT_14c9a12a8) {
                        lVar26 = *plVar7;
                        lVar9 = plVar7[1];
                        if (lVar9 != 0) {
                          LOCK();
                          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
                          UNLOCK();
                        }
                        plVar7 = (longlong *)plVar11[0xd];
                        plVar11[0xc] = lVar26;
                        plVar11[0xd] = lVar9;
                        if (plVar7 != (longlong *)0x0) {
                          LOCK();
                          plVar11 = plVar7 + 1;
                          *(int *)plVar11 = (int)*plVar11 + -1;
                          UNLOCK();
                          if ((int)*plVar11 == 0) {
                            (**(code **)*plVar7)(plVar7);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar7 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar7 + 0x10))(plVar7);
                            }
                          }
                        }
                      }
                      FUN_148a6af4a(local_138,local_210);
                    }
                    if (local_f0 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    local_238 = (byte **)((ulonglong)local_238 & 0xffffffffffffff00);
                    FUN_1401412e0(&local_148,&local_108,1,0);
                    if (plVar11 != &DAT_14c9a1308) {
                      if (uStack_100 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(uStack_100 + 1) = (int)uStack_100[1] + 1;
                        UNLOCK();
                      }
                      plVar7 = (longlong *)plVar11[1];
                      *plVar11 = (longlong)local_108;
                      plVar11[1] = (longlong)uStack_100;
                      if (plVar7 != (longlong *)0x0) {
                        LOCK();
                        plVar11 = plVar7 + 1;
                        *(int *)plVar11 = (int)*plVar11 + -1;
                        UNLOCK();
                        if ((int)*plVar11 == 0) {
                          (**(code **)*plVar7)(plVar7);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar7 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar7 + 0x10))(plVar7);
                          }
                        }
                      }
                    }
                    plVar11 = uStack_100;
                    if (uStack_100 != (longlong *)0x0) {
                      LOCK();
                      plVar7 = uStack_100 + 1;
                      *(int *)plVar7 = (int)*plVar7 + -1;
                      UNLOCK();
                      if ((int)*plVar7 == 0) {
                        (**(code **)*uStack_100)(uStack_100);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar11 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar11 + 0x10))(plVar11);
                        }
                      }
                    }
                    FUN_148a6af4a(local_138,local_210);
                  }
                  local_1e8 = FUN_143f0f67e;
                  local_1e0 = 0;
                  FUN_148a6cabc(&local_108,param_1);
                  local_238 = &local_108;
                  FUN_143e5e21a(local_138,local_210,lVar6,&local_148);
                  if ((int)uStack_100 != 0) {
                    if (local_108 == (byte *)0x0) goto LAB_143f0f5ce;
                    (*(code *)**(undefined8 **)local_108)(local_108,0);
                    FUN_1446efa72(&local_108,0,0,0x10);
                    uStack_100 = (longlong *)((ulonglong)uStack_100._4_4_ << 0x20);
                  }
                  if (local_108 != (byte *)0x0) {
                    FUN_1400020a8();
                  }
                }
LAB_143f0f5ce:
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
              }
              FUN_145a9affc(local_1c8,local_1c0);
              if (local_1c8 != 0) {
                FUN_1400020a8();
              }
            }
            if (local_70 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
        }
        plVar11 = plStack_140;
        if (plStack_140 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_140 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plStack_140)(plStack_140);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      if (local_118 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f0de87;
    }
    *(undefined1 *)(lVar6 + 0x89) = 0;
    uVar12 = 0x1f;
    if (param_2 < 9) {
      uVar12 = (undefined1)(0x1e1d1c1b1a191801 >> ((param_2 - 1) * '\b' & 0x3f));
    }
    *(undefined1 *)(param_1 + 0x38) = uVar12;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0de87:
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f0f67e FUN_143f0f67e body=443 status=ok
// SIG undefined FUN_143f0f67e(void)

void FUN_143f0f67e(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_143f0d966();
  if (cVar2 != '\0') goto LAB_143f0f6a3;
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0f82e:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143f0f82e;
      uVar4 = *puVar5;
    }
  }
  lVar3 = FUN_148a6b25e(*(undefined8 *)(param_1 + 0x30),uVar4,param_1 + 0x58);
  if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x38) = 8;
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      *(undefined1 *)(lVar3 + 0x89) = 3;
      local_40 = &LAB_143f0ddcc;
      local_38 = 0;
      FUN_148a6c772(&local_30,param_1);
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0f835:
        uVar4 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x3c);
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143f0f835;
          uVar4 = *puVar5;
        }
      }
      FUN_143f0c70c(param_1 + 0x20,param_1 + 0x30,uVar4,&local_30);
      if (local_28 != 0) {
        if (local_30 == (undefined8 *)0x0) goto LAB_143f0f6a3;
        (**(code **)*local_30)(local_30,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f0f6a3;
    }
    *(undefined1 *)(lVar3 + 0x89) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0x12;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0f6a3:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f0f83a FUN_143f0f83a body=682 status=ok
// SIG undefined FUN_143f0f83a(void)

void FUN_143f0f83a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar6 = FUN_143f0faf4();
  if (cVar6 != '\0') goto LAB_143f0f85b;
  if (*(char *)(param_1 + 0x68) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  local_20 = *(undefined8 *)(param_1 + 0x3c);
  iVar7 = FUN_148a72ae6(plVar11,(uint)((ulonglong)local_20 >> 0x20) ^ (uint)local_20);
  if (iVar7 != -1) {
    lVar4 = *plVar11;
    if ((lVar4 + (longlong)iVar7 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      *(undefined1 *)(lVar4 + (longlong)iVar7 * 0x48 + 0x38) = 0;
      FUN_143f07518(param_1);
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,4,0x10);
      local_28 = 4;
      plVar11 = *(longlong **)(param_1 + 0x10);
      if (plVar11 == (longlong *)0x0) {
LAB_143f0f93c:
        *local_30 = &PTR_LAB_14b4da550;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_30[2] = lVar10;
        *local_30 = &PTR_FUN_14b4e22e0;
        local_30[3] = 0;
        local_30[4] = 0;
        local_30[5] = FUN_143f0fb6e;
        *(undefined4 *)(local_30 + 6) = 0;
      }
      else {
        iVar7 = (int)plVar11[1];
        do {
          if (iVar7 == 0) goto LAB_143f0f93c;
          LOCK();
          iVar5 = (int)plVar11[1];
          bVar12 = iVar7 == iVar5;
          if (bVar12) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar12);
        uVar8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        *local_30 = &PTR_LAB_14b4da550;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_30[2] = lVar10;
        *local_30 = &PTR_FUN_14b4e22e0;
        local_30[3] = uVar8;
        local_30[4] = plVar11;
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        local_30[5] = FUN_143f0fb6e;
        *(undefined4 *)(local_30 + 6) = 0;
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0fac4:
        uVar8 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x3c);
        uVar8 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          puVar9 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((puVar9 == (undefined8 *)0x0) ||
             ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143f0fac4;
          uVar8 = *puVar9;
        }
      }
      FUN_148a5da3c(uVar8,&local_30);
      goto LAB_143f0f85b;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 4;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0f85b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0faf4 FUN_143f0faf4 body=121 status=ok
// SIG undefined FUN_143f0faf4(void)

char FUN_143f0faf4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cVar2 = *(char *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    if ((((*(int *)(param_1 + 0x40) != 0) && (uVar1 = *(uint *)(param_1 + 0x3c), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x40))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x2b8) != 0) {
        return '\0';
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 3;
    *(undefined1 *)(param_1 + 0x18) = 1;
    cVar2 = '\x01';
  }
  return cVar2;
}



// FUNCTION 143f0fb6e FUN_143f0fb6e body=329 status=ok
// SIG undefined FUN_143f0fb6e(void)

void FUN_143f0fb6e(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143f07a40();
  cVar2 = FUN_143f0faf4(param_1);
  if (cVar2 != '\0') goto LAB_143f0fbda;
  switch(param_2) {
  case 0:
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    local_28 = *(undefined8 *)(param_1 + 0x3c);
    iVar3 = FUN_148a72ae6(plVar6,(uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
    if ((iVar3 == -1) || ((*plVar6 + (longlong)iVar3 * 0x48 + 8U & 0xfffffffffffffff7) == 0)) {
      *(undefined1 *)(param_1 + 0x38) = 4;
    }
    else {
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f0fcb4:
        uVar4 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x3c);
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143f0fcb4;
          uVar4 = *puVar5;
        }
      }
      cVar2 = FUN_143f056fe(*(undefined8 *)(param_1 + 0x30),uVar4,param_3,0);
      if (cVar2 == '\0') {
        FUN_143f0fcb8(param_1);
        goto LAB_143f0fbda;
      }
      *(char *)(param_1 + 0x38) = cVar2;
    }
    goto LAB_143f0fbd6;
  case 1:
    break;
  case 2:
    param_2 = 0x18;
    break;
  case 3:
    param_2 = 0x19;
    break;
  case 4:
    param_2 = 0x1a;
    break;
  case 5:
    param_2 = 0x1b;
    break;
  case 6:
    param_2 = 0x1c;
    break;
  case 7:
    param_2 = 0x1d;
    break;
  case 8:
    param_2 = 0x1e;
    break;
  default:
    param_2 = 0x1f;
  }
  *(undefined1 *)(param_1 + 0x38) = param_2;
LAB_143f0fbd6:
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0fbda:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f0fcb8 FUN_143f0fcb8 body=3224 status=ok
// SIG undefined FUN_143f0fcb8(void)

void FUN_143f0fcb8(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  longlong *local_168;
  longlong local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined8 uStack_130;
  wchar_t *local_128;
  undefined4 local_120;
  undefined *local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  wchar_t *local_f0;
  undefined4 local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  code *local_b8 [2];
  undefined8 *local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar6 = FUN_143f0faf4();
  if (cVar6 != '\0') goto LAB_143f0fcfa;
  plVar16 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  local_c8 = *(code **)(param_1 + 0x3c);
  iVar8 = FUN_148a72ae6(plVar16,(uint)((ulonglong)local_c8 >> 0x20) ^ (uint)local_c8);
  if (iVar8 != -1) {
    lVar21 = *plVar16;
    if ((lVar21 + (longlong)iVar8 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(lVar20 + 0x138) == 0) {
        plVar16 = (longlong *)FUN_14001cc68(0x60,0x10);
        plVar16[1] = (longlong)&DAT_100000001;
        *plVar16 = (longlong)&PTR_FUN_149e441a0;
        plVar16[6] = 0;
        plVar16[7] = 0;
        plVar16[8] = 0;
        plVar16[9] = 0;
        plVar16[2] = 0;
        plVar16[3] = 0;
        plVar16[4] = 0;
        plVar16[5] = 0;
        plVar16[10] = 0;
        plVar16[0xb] = 0;
        *(undefined4 *)((longlong)plVar16 + 0x3c) = 0x80;
        *(undefined4 *)(plVar16 + 8) = 0xffffffff;
        if (plVar16 == (longlong *)0x0) {
          *(undefined8 *)(lVar20 + 0x138) = 0x10;
          plVar12 = *(longlong **)(lVar20 + 0x140);
          if (plVar12 != (longlong *)0x0) {
            *(undefined8 *)(lVar20 + 0x140) = 0;
LAB_143f0fe64:
            LOCK();
            plVar11 = plVar12 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            if (plVar16 != (longlong *)0x0) goto LAB_143f0fe86;
          }
        }
        else {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          lVar20 = *(longlong *)(param_1 + 0x30);
          *(longlong **)(lVar20 + 0x138) = plVar16 + 2;
          plVar12 = *(longlong **)(lVar20 + 0x140);
          if (plVar16 == plVar12) {
            LOCK();
            plVar12 = plVar16 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          else {
            *(longlong **)(lVar20 + 0x140) = plVar16;
            if (plVar12 != (longlong *)0x0) goto LAB_143f0fe64;
          }
LAB_143f0fe86:
          LOCK();
          plVar12 = plVar16 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x138);
      FUN_140056680(&local_c8,L"version");
      FUN_14626eb76(uVar2,&local_c8,0x3ff0000000000000);
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_d8 = (longlong *)0x0;
      uStack_d0 = 0;
      local_e0 = 0;
      local_f0 = L"users";
      local_e8 = 5;
      bVar7 = FUN_140480164(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x138),&local_f0,
                            &local_e0);
      if ((local_e0 != 0 & bVar7) == 1) {
        FUN_14047d664();
      }
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f1094a:
        lVar20 = 0;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x3c);
        lVar20 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          plVar16 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((plVar16 == (longlong *)0x0) ||
             (((int)plVar16[2] != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_143f1094a;
          lVar20 = *plVar16;
        }
      }
      local_160 = lVar21 + (longlong)iVar8 * 0x48;
      local_138 = &local_108;
      local_108 = 0;
      uStack_100 = 0;
      uStack_c0 = &local_138;
      local_c8 = FUN_143f00b4a;
      bifrost::users::shiftId(*(undefined4 *)(lVar20 + 0x248));
      if ((longlong)(int)uStack_d0 == 0) {
        local_168 = (longlong *)0x0;
LAB_143f101aa:
        lVar21 = local_160;
        plVar11 = (longlong *)FUN_14001cc68(0x60,0x10);
        plVar16 = local_168;
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_149e441a0;
        plVar11[6] = 0;
        plVar11[7] = 0;
        plVar11[8] = 0;
        plVar11[9] = 0;
        plVar11[2] = 0;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[5] = 0;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        *(undefined4 *)((longlong)plVar11 + 0x3c) = 0x80;
        *(undefined4 *)(plVar11 + 8) = 0xffffffff;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        if (plVar11 == local_168) {
          if (local_168 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            plVar12 = local_168;
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar8 = *piVar1;
              UNLOCK();
              plVar12 = plVar16;
              plVar16 = plVar11;
joined_r0x000143f1023c:
              if (iVar8 == 0) {
                (**(code **)(*plVar16 + 0x10))();
              }
            }
          }
        }
        else {
          plVar12 = plVar11;
          if (local_168 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_168 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*local_168)(local_168);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar8 = *piVar1;
              UNLOCK();
              goto joined_r0x000143f1023c;
            }
          }
        }
        plVar16 = plVar11 + 2;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        FUN_140056680(&local_c8,&DAT_149f0f4f8);
        FUN_145964e64(plVar16,&local_c8,&local_108);
        if (local_c8 != (code *)0x0) {
          FUN_1400020a8();
        }
        plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
        uVar15 = uStack_d0;
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_149e440d0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        plVar11[2] = (longlong)&PTR_FUN_149e440f0;
        plVar11[4] = (longlong)plVar16;
        plVar11[5] = (longlong)plVar12;
        *(undefined4 *)(plVar11 + 3) = 6;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        lVar20 = (longlong)(int)uStack_d0;
        uVar9 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar9);
        if (uStack_d0._4_4_ < uVar9) {
          FUN_14047d050(&local_d8,uVar15 & 0xffffffff);
        }
        local_d8[lVar20 * 2] = (longlong)(plVar11 + 2);
        local_d8[lVar20 * 2 + 1] = (longlong)plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      else {
        plVar11 = local_d8 + (longlong)(int)uStack_d0 * 2;
        local_168 = (longlong *)0x0;
        plVar16 = (longlong *)0x0;
        plVar12 = local_d8;
        do {
          if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
            plVar10 = (longlong *)(*(code *)**(undefined8 **)*plVar12)();
            plVar13 = (longlong *)*plVar10;
            plVar10 = (longlong *)plVar10[1];
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            if (plVar13 != (longlong *)0x0) {
              local_c8 = (code *)0x0;
              uStack_c0 = (longlong **)0x0;
              local_118 = &DAT_149f0f4f8;
              local_110 = 2;
              cVar6 = FUN_14047fa10(plVar13,&local_118);
              plVar4 = local_168;
              plVar5 = local_168;
              if (cVar6 != '\0') {
                if ((int)uStack_c0 == (int)uStack_100) {
                  if (1 < (int)uStack_c0) {
                    lVar21 = 0;
                    while( true ) {
                      uVar14 = *(ushort *)(local_c8 + lVar21);
                      uVar15 = (ulonglong)uVar14;
                      uVar17 = *(ushort *)(local_108 + lVar21);
                      if (uVar14 != uVar17) break;
                      if (uVar14 == 0) goto LAB_143f10114;
LAB_143f100d1:
                      lVar21 = lVar21 + 2;
                    }
                    if ((uVar17 | uVar14) < 0x80) {
                      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                      uVar18 = (ulonglong)uVar17;
                      uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                      if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar18]) goto LAB_143f100d1;
                    }
                    if (uVar14 != uVar17) goto LAB_143f1014a;
                  }
                }
                else if ((int)uStack_100 + (int)uStack_c0 != 1) goto LAB_143f1014a;
LAB_143f10114:
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                  UNLOCK();
                }
                plVar16 = plVar13;
                plVar5 = plVar10;
                if (local_168 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_168 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*local_168)(local_168);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar4 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar4 + 0x10))(plVar4);
                    }
                  }
                }
              }
LAB_143f1014a:
              local_168 = plVar5;
              if (local_c8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar10 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          plVar12 = plVar12 + 2;
        } while (plVar12 != plVar11);
        lVar21 = local_160;
        plVar12 = local_168;
        if (plVar16 == (longlong *)0x0) goto LAB_143f101aa;
      }
      local_168 = plVar12;
      local_128 = L"files";
      local_120 = 5;
      FUN_14683939c(plVar16);
      local_c8 = (code *)0x0;
      uStack_c0 = (longlong **)0x0;
      if ((longlong)*(int *)(lVar21 + 0x10) != 0) {
        lVar20 = *(longlong *)(lVar21 + 8);
        lVar21 = (longlong)*(int *)(lVar21 + 0x10) * 0x90;
        do {
          if (((~*(byte *)(lVar20 + 0x88) & 3) == 0) && (*(char *)(lVar20 + 0x89) == '\x03')) {
            plVar12 = (longlong *)FUN_14001cc68(0x60,0x10);
            plVar12[1] = (longlong)&DAT_100000001;
            *plVar12 = (longlong)&PTR_FUN_149e441a0;
            plVar12[6] = 0;
            plVar12[7] = 0;
            plVar12[8] = 0;
            plVar12[9] = 0;
            plVar12[2] = 0;
            plVar12[3] = 0;
            plVar12[4] = 0;
            plVar12[5] = 0;
            plVar12[10] = 0;
            plVar12[0xb] = 0;
            *(undefined4 *)((longlong)plVar12 + 0x3c) = 0x80;
            *(undefined4 *)(plVar12 + 8) = 0xffffffff;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              plVar11 = plVar12 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
            plVar11 = plVar12 + 2;
            local_138 = (longlong *)0x0;
            uStack_130 = 0;
            FUN_1400b2348(lVar20 + 0x10,&local_138,1);
            FUN_140056680(&local_148,L"name");
            FUN_145964f10(plVar11,&local_148,&local_138);
            if (local_148 != 0) {
              FUN_1400020a8();
            }
            if (local_138 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_138 = (longlong *)0x0;
            uStack_130 = 0;
            FUN_1407c869a(lVar20,&local_138,0);
            FUN_140056680(&local_148,L"guid");
            FUN_145964f10(plVar11,&local_148,&local_138);
            if (local_148 != 0) {
              FUN_1400020a8();
            }
            if (local_138 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_138,&DAT_14b4e0132);
            FUN_145964e64(plVar11,&local_138,lVar20 + 0x38);
            if (local_138 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            lVar19 = *(longlong *)(lVar20 + 0x48);
            local_170 = 0;
            local_178 = 0;
            local_180 = 0;
            local_188 = 0;
            FUN_14021300e(&local_138,0x7b2,1,1);
            lVar19 = lVar19 - (longlong)local_138;
            FUN_140056680(&local_138,L"time");
            FUN_14626eb76(plVar11,&local_138,(double)(lVar19 / 10000000));
            if (local_138 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
            uVar15 = (ulonglong)uStack_c0;
            plVar13[1] = (longlong)&DAT_100000001;
            *plVar13 = (longlong)&PTR_FUN_149e440d0;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            plVar13[2] = (longlong)&PTR_FUN_149e440f0;
            plVar13[4] = (longlong)plVar11;
            plVar13[5] = (longlong)plVar12;
            *(undefined4 *)(plVar13 + 3) = 6;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
            }
            lVar19 = (longlong)(int)uStack_c0;
            uVar9 = (int)uStack_c0 + 1;
            uStack_c0 = (longlong **)CONCAT44(uStack_c0._4_4_,uVar9);
            if (uStack_c0._4_4_ < uVar9) {
              FUN_14047d050(&local_c8,uVar15 & 0xffffffff);
            }
            *(longlong **)(local_c8 + lVar19 * 0x10) = plVar13 + 2;
            *(longlong **)(local_c8 + lVar19 * 0x10 + 8) = plVar13;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar13 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar12 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          lVar20 = lVar20 + 0x90;
          lVar21 = lVar21 + -0x90;
        } while (lVar21 != 0);
      }
      FUN_140056680(&local_138,L"files");
      FUN_14609b62e(plVar16,&local_138,&local_c8);
      if (local_138 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x138);
      FUN_140056680(&local_138,L"users");
      FUN_14609b62e(uVar2,&local_138,&local_d8);
      plVar16 = local_168;
      if (local_138 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_138 = (longlong *)0x0;
      uStack_130 = 0;
      FUN_14619f8aa(&local_148,&local_138,0);
      local_158 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x138);
      local_150 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x140);
      if (local_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_150 + 1) = (int)local_150[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_145d35994(&local_158,local_148,1);
      plVar12 = local_150;
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_150 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_140 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)local_140 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
          }
        }
      }
      uVar2 = uStack_130;
      plVar12 = local_138;
      if (cVar6 == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 0x13;
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 8);
        lVar21 = *(longlong *)(param_1 + 0x10);
        if (lVar21 != 0) {
          LOCK();
          *(int *)(lVar21 + 0xc) = *(int *)(lVar21 + 0xc) + 1;
          UNLOCK();
        }
        local_138 = (longlong *)0x0;
        uStack_130 = 0;
        local_b8[0] = (code *)0x0;
        local_a8 = (undefined8 *)FUN_14001cc68(0x30,8);
        *local_a8 = &PTR_LAB_14b4e2350;
        local_a8[1] = param_1;
        local_a8[2] = uVar3;
        local_a8[3] = lVar21;
        local_a8[4] = plVar12;
        local_a8[5] = uVar2;
        if (local_a8 + 1 != (longlong *)0x0) {
          local_b8[0] = FUN_143f1ae0a;
        }
        FUN_1407461b0(0x8ff,local_b8);
        plVar16 = local_168;
      }
      if (local_138 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_14047c710(local_c8,(ulonglong)uStack_c0 & 0xffffffff);
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar16 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      FUN_14047c710(local_d8,uStack_d0 & 0xffffffff);
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f0fcfa;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 4;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_143f0fcfa:
  if ((local_70 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f10972 FUN_143f10972 body=32 status=ok
// SIG undefined FUN_143f10972(void)

undefined8 FUN_143f10972(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FUpdateLocalStateCacheTask");
  return param_2;
}



// FUNCTION 143f10992 FUN_143f10992 body=736 status=ok
// SIG undefined FUN_143f10992(void)

void FUN_143f10992(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(int *)(param_1 + 0x40) == 0) || (uVar3 = *(uint *)(param_1 + 0x3c), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x40))))) ||
     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
LAB_143f10a05:
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_143f110e6(param_1);
    return;
  }
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar8;
  }
  else {
    lVar7 = 0;
  }
  if (*(longlong *)(lVar7 + 0x2b8) == 0) goto LAB_143f10a05;
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  local_28 = *(undefined8 *)(param_1 + 0x3c);
  iVar5 = FUN_148a72ae6(plVar8,(uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28);
  if (iVar5 != -1) {
    lVar7 = *plVar8;
    if ((lVar7 + (longlong)iVar5 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      *(undefined1 *)(lVar7 + (longlong)iVar5 * 0x48 + 0x38) = 1;
    }
  }
  FUN_143f07518(param_1);
  uVar6 = FUN_14657d4c2();
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  local_30 = 4;
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 == (longlong *)0x0) {
LAB_143f10b95:
    *local_38 = &PTR_LAB_14b4e2400;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_38[2] = lVar11;
    *local_38 = &PTR_FUN_14b4e2390;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = FUN_143f10c7c;
    *(undefined4 *)(local_38 + 6) = 0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_143f10b95;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar12 = iVar5 == iVar4;
      if (bVar12) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar12);
    uVar9 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *local_38 = &PTR_LAB_14b4e2400;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_38[2] = lVar11;
    *local_38 = &PTR_FUN_14b4e2390;
    local_38[3] = uVar9;
    local_38[4] = plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    local_38[5] = FUN_143f10c7c;
    *(undefined4 *)(local_38 + 6) = 0;
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar9 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143f10c26;
    puVar10 = (undefined8 *)
              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar10 != (undefined8 *)0x0) &&
       ((*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x40) &&
        ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)))) {
      uVar9 = *puVar10;
      goto LAB_143f10c26;
    }
  }
  uVar9 = 0;
LAB_143f10c26:
  FUN_143eee130(uVar6,uVar9,&local_38);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 143f10c7c FUN_143f10c7c body=1114 status=ok
// SIG undefined FUN_143f10c7c(void)

void FUN_143f10c7c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143f07a40();
  if (((((*(int *)(param_1 + 0x40) == 0) || (uVar2 = *(uint *)(param_1 + 0x3c), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x40))))) ||
     ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
LAB_143f10cfa:
    if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_143f110e6(param_1);
    return;
  }
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar7;
  }
  else {
    lVar6 = 0;
  }
  if (*(longlong *)(lVar6 + 0x2b8) == 0) goto LAB_143f10cfa;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,4,0x10);
  local_60 = 4;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_143f10d66:
    *local_68 = (longlong)&PTR_LAB_14b4e3fb0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_68[2] = lVar8;
    *local_68 = (longlong)&PTR_FUN_14b4e2470;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = (longlong)&LAB_143f11390;
    *(undefined4 *)(local_68 + 6) = 0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) goto LAB_143f10d66;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar12 = iVar4 == iVar3;
      if (bVar12) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar12);
    lVar6 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *local_68 = (longlong)&PTR_LAB_14b4e3fb0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_68[2] = lVar10;
    *local_68 = (longlong)&PTR_FUN_14b4e2470;
    local_68[3] = lVar6;
    local_68[4] = (longlong)plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    local_68[5] = (longlong)&LAB_143f11390;
    *(undefined4 *)(local_68 + 6) = 0;
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f1109b:
    uVar11 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x3c);
    uVar11 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143f1109b;
      uVar11 = *puVar9;
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b4e1890;
  plVar7 = plVar5 + 2;
  local_48 = local_68;
  local_68 = (longlong *)0x0;
  local_40._0_4_ = local_60;
  local_60 = 0;
  FUN_143f0738a(plVar7,*(undefined8 *)(param_1 + 0x30),uVar11);
  plVar5[2] = (longlong)&PTR_FUN_14b4df740;
  plVar5[6] = (longlong)&PTR_FUN_14b4df768;
  plVar5[0xd] = 0;
  *(undefined4 *)(plVar5 + 0xe) = 0;
  FUN_148a7189c(plVar5 + 0xd,&local_48);
  *(undefined1 *)(plVar5 + 0xf) = 1;
  if ((int)local_40 == 0) {
LAB_143f10ecc:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40._0_4_ = 0;
    goto LAB_143f10ecc;
  }
  local_58 = plVar7;
  local_50 = plVar5;
  FUN_143f18bc8(&local_58,plVar7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = plVar7;
  local_40 = plVar5;
  FUN_148a7192e(param_1 + 0x20,&local_48);
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_143f10fa7;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f10fa7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 143f110e6 FUN_143f110e6 body=510 status=ok
// SIG undefined FUN_143f110e6(void)

void FUN_143f110e6(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar5 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x3c);
    if (((((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) ||
        (plVar6 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
        plVar6 == (longlong *)0x0)) ||
       (((int)plVar6[2] != iVar5 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
LAB_143f1114e:
      lVar4 = *(longlong *)(param_1 + 0x30);
    }
    else {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar6;
      }
      else {
        lVar4 = 0;
      }
      if (*(longlong *)(lVar4 + 0x2b8) == 0) goto LAB_143f1114e;
      uVar2 = FUN_14657d4c2();
      uVar10 = 0;
      if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f112b4:
        uVar7 = 0;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x3c);
        uVar7 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x40) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_143f112b4;
          uVar7 = *puVar8;
        }
      }
      FUN_143eee028(uVar2,uVar7,1);
      iVar5 = *(int *)(param_1 + 0x40);
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar3 = 0;
      if (iVar5 == 0) goto LAB_143f11287;
    }
    uVar9 = *(uint *)(param_1 + 0x3c);
    if (((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
         (plVar6 = (longlong *)
                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0)) &&
        (((int)plVar6[2] == iVar5 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) &&
       (*plVar6 != 0)) {
      uVar9 = *(uint *)(*plVar6 + 0xc);
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar3 = (ulonglong)*(uint *)(lVar11 + 0x10);
      if (*(uint *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar1 = *(uint *)(lVar11 + 0x10);
        bVar12 = uVar1 == 0;
        if (bVar12) {
          *(uint *)(lVar11 + 0x10) = uVar9;
          uVar1 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar1 = uVar9;
        }
        uVar3 = (ulonglong)uVar1;
      }
      goto LAB_143f11287;
    }
  }
  uVar10 = 0;
  uVar3 = 0;
LAB_143f11287:
  FUN_148a733c2(lVar4 + 0xe8,uVar10 | uVar3 << 0x20);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 143f112e4 FUN_143f112e4 body=139 status=ok
// SIG undefined FUN_143f112e4(void)

void FUN_143f112e4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  
  uVar5 = *(undefined1 *)(param_1 + 0x38);
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x58), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,uVar5);
    uVar5 = *(undefined1 *)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar1 = *(uint *)(param_1 + 0x3c);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143f11359;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x40) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_143f11359;
    }
  }
  uVar3 = 0;
LAB_143f11359:
                    /* WARNING: Could not recover jumptable at 0x000143f11368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x328))(*(longlong **)(param_1 + 0x30),uVar3,uVar5)
  ;
  return;
}



// FUNCTION 143f11370 FUN_143f11370 body=32 status=ok
// SIG undefined FUN_143f11370(void)

undefined8 FUN_143f11370(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FUnregisterPlayerTask");
  return param_2;
}



// FUNCTION 143f11396 FUN_143f11396 body=1688 status=ok
// SIG undefined FUN_143f11396(void)

void FUN_143f11396(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  uint *local_b8;
  longlong *local_b0;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  uint local_80 [4];
  uint *local_70;
  uint local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = (uint *)0x0;
  local_64 = 2;
  lVar3 = *(longlong *)(param_1 + 0x30);
  iVar8 = *(int *)(lVar3 + 0xf0) - *(int *)(lVar3 + 0x11c);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  local_68 = 0;
  if (iVar8 != 2) {
    FUN_148a648fa(local_80);
  }
  iVar8 = *(int *)(lVar3 + 0x110);
  local_c0 = param_1;
  if (iVar8 == 0) {
    uVar21 = 1;
    uVar20 = 0;
    iVar12 = 0;
    iVar15 = 0;
  }
  else {
    puVar5 = *(uint **)(lVar3 + 0x108);
    if (*(uint **)(lVar3 + 0x108) == (uint *)0x0) {
      puVar5 = (uint *)(lVar3 + 0xf8);
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar15 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar15 = iVar8 + -1;
      }
      uVar20 = 0;
      uVar21 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar21 = uVar20;
      }
      iVar12 = 0;
      do {
        if (uVar21 == uVar20) goto LAB_143f115b5;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar20 = 0;
      iVar12 = 0;
    }
    uVar21 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar21 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar15 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar15) {
      iVar15 = iVar8;
    }
  }
  if (iVar15 < iVar8) {
    uVar14 = 0xffffffff;
    do {
      uVar17 = local_68;
      lVar16 = *(longlong *)(lVar3 + 0xe8);
      lVar11 = (longlong)(int)local_68;
      local_68 = local_68 + 1;
      if (local_64 < local_68) {
        FUN_148a64df2(local_80,uVar17);
      }
      puVar5 = local_70;
      if (local_70 == (uint *)0x0) {
        puVar5 = local_80;
      }
      *(undefined8 *)(puVar5 + lVar11 * 2) = *(undefined8 *)((longlong)iVar15 * 0x48 + lVar16);
      uVar14 = uVar14 & ~(uint)uVar21;
      puVar5 = *(uint **)(lVar3 + 0x108);
      if (*(uint **)(lVar3 + 0x108) == (uint *)0x0) {
        puVar5 = (uint *)(lVar3 + 0xf8);
      }
      iVar8 = *(int *)(lVar3 + 0x110);
      iVar15 = (int)uVar20;
      lVar16 = (longlong)iVar15;
      uVar17 = puVar5[lVar16] & uVar14;
      if (uVar17 == 0) {
        iVar18 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar18 = iVar8 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar15) {
          iVar19 = iVar15;
        }
        if (iVar18 <= iVar15) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar17 = puVar5[lVar16 + lVar11 + 1];
          if (uVar17 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar19 - lVar16 == lVar11) goto LAB_143f115b5;
        }
        uVar20 = (ulonglong)(iVar15 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar21 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar15 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar8);
  }
LAB_143f115b5:
  lVar3 = local_c0;
  if ((longlong)(int)local_68 == 0) {
    *(undefined1 *)(local_c0 + 0x38) = 0;
    *(undefined1 *)(local_c0 + 0x18) = 1;
  }
  else {
    puVar5 = local_70;
    if (local_70 == (uint *)0x0) {
      puVar5 = local_80;
    }
    local_b8 = puVar5 + (longlong)(int)local_68 * 2;
    lVar16 = local_c0 + 0x20;
    do {
      local_b0 = (longlong *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,4,0x10);
      local_a8 = 4;
      plVar4 = *(longlong **)(lVar3 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_143f11635:
        *local_b0 = (longlong)&PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar11 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar11 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar11;
        local_b0[2] = lVar6;
        *local_b0 = (longlong)&PTR_FUN_14b4e24e0;
        local_b0[3] = 0;
        local_b0[4] = 0;
        local_b0[5] = (longlong)&LAB_143f11a30;
        *(undefined4 *)(local_b0 + 6) = 0;
      }
      else {
        iVar8 = (int)plVar4[1];
        do {
          if (iVar8 == 0) goto LAB_143f11635;
          LOCK();
          iVar15 = (int)plVar4[1];
          bVar22 = iVar8 == iVar15;
          if (bVar22) {
            *(int *)(plVar4 + 1) = iVar8 + 1;
            iVar15 = iVar8;
          }
          iVar8 = iVar15;
          UNLOCK();
        } while (!bVar22);
        lVar11 = *(longlong *)(lVar3 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_b0 = (longlong)&PTR_LAB_14b4e3fb0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_b0[2] = lVar10;
        *local_b0 = (longlong)&PTR_FUN_14b4e24e0;
        local_b0[3] = lVar11;
        local_b0[4] = (longlong)plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        local_b0[5] = (longlong)&LAB_143f11a30;
        *(undefined4 *)(local_b0 + 6) = 0;
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      if ((puVar5[1] == 0) || (uVar14 = *puVar5, (int)uVar14 < 0)) {
LAB_143f11976:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((int)uVar14 < DAT_14c9647dc) {
          puVar9 = (undefined8 *)
                   ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
          if (((puVar9 == (undefined8 *)0x0) || (*(uint *)(puVar9 + 2) != puVar5[1])) ||
             ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_143f11976;
          uVar13 = *puVar9;
        }
      }
      plVar7 = (longlong *)FUN_14001cc68(0x78,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b4e1430;
      plVar4 = plVar7 + 2;
      local_90 = local_b0;
      local_b0 = (longlong *)0x0;
      local_88._0_4_ = local_a8;
      local_a8 = 0;
      FUN_143f0738a(plVar4,*(undefined8 *)(lVar3 + 0x30),uVar13);
      plVar7[2] = (longlong)&PTR_FUN_14b4df7d0;
      plVar7[6] = (longlong)&PTR_FUN_14b4df7f8;
      plVar7[0xd] = 0;
      *(undefined4 *)(plVar7 + 0xe) = 0;
      FUN_148a7189c(plVar7 + 0xd,&local_90);
      if ((int)local_88 == 0) {
LAB_143f11792:
        if (local_90 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_90 != (longlong *)0x0) {
        (**(code **)*local_90)(local_90,0);
        FUN_1446efa72(&local_90,0,0,0x10);
        local_88._0_4_ = 0;
        goto LAB_143f11792;
      }
      local_a0 = plVar4;
      local_98 = plVar7;
      FUN_143f1712a(&local_a0,plVar4);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_90 = plVar4;
      local_88 = plVar7;
      FUN_148a7192e(lVar16);
      plVar4 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_88 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      plVar4 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_98 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_a8 == 0) {
LAB_143f11866:
        if (local_b0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_b0 != (longlong *)0x0) {
        (**(code **)*local_b0)();
        FUN_1446efa72(&local_b0,0,0,0x10);
        local_a8 = 0;
        goto LAB_143f11866;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != local_b8);
  }
  if (local_70 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f11a6c FUN_143f11a6c body=32 status=ok
// SIG undefined FUN_143f11a6c(void)

undefined8 FUN_143f11a6c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FUnregisterAllPlayersTask");
  return param_2;
}



// FUNCTION 143f11a8c FUN_143f11a8c body=556 status=ok
// SIG undefined FUN_143f11a8c(void)

void FUN_143f11a8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar7 = FUN_143f11cba();
  if (cVar7 != '\0') goto LAB_143f11aae;
  FUN_143f07518(param_1);
  uVar9 = FUN_14657d4c2();
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,4,0x10);
  local_28 = 4;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_143f11bea:
    *local_30 = &PTR_LAB_14b4e25c0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_30[2] = lVar12;
    *local_30 = &PTR_FUN_14b4e2550;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = FUN_143f11d62;
    *(undefined4 *)(local_30 + 6) = 0;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_143f11bea;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar13 = iVar8 == iVar5;
      if (bVar13) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar13);
    uVar10 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_30 = &PTR_LAB_14b4e25c0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_30[2] = lVar12;
    *local_30 = &PTR_FUN_14b4e2550;
    local_30[3] = uVar10;
    local_30[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_30[5] = FUN_143f11d62;
    *(undefined4 *)(local_30 + 6) = 0;
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
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_143f11c8d:
    uVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x40) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143f11c8d;
      uVar10 = *puVar11;
    }
  }
  FUN_143eeecd2(uVar9,uVar10,&local_30);
LAB_143f11aae:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f11cba FUN_143f11cba body=167 status=ok
// SIG undefined FUN_143f11cba(void)

ulonglong FUN_143f11cba(longlong param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(char *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_143f11d2b;
  if (((*(int *)(param_1 + 0x40) == 0) || (uVar1 = *(uint *)(param_1 + 0x3c), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_143f11d21:
    *(undefined1 *)(param_1 + 0x38) = 3;
  }
  else {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 == (longlong *)0x0) || ((int)plVar2[2] != *(int *)(param_1 + 0x40))) ||
       ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)) goto LAB_143f11d21;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(lVar3 + 0x2b8) == 0) goto LAB_143f11d21;
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    plVar2 = (longlong *)FUN_148a6a1fe(*(undefined8 *)(param_1 + 0x30),lVar3);
    if ((char)plVar2 != '\0') {
      plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),*(undefined1 *)(param_1 + 0x18));
      goto LAB_143f11d2b;
    }
    *(undefined1 *)(param_1 + 0x38) = 4;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_143f11d2b:
  return (ulonglong)plVar2 & 0xffffffffffffff01;
}



// FUNCTION 143f11d62 FUN_143f11d62 body=434 status=ok
// SIG undefined FUN_143f11d62(void)

void FUN_143f11d62(longlong param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_143f07a40();
  cVar3 = FUN_143f11cba(param_1);
  if (cVar3 == '\0') {
    switch(param_2) {
    case 0:
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined2 *)(param_1 + 0x68) = param_3;
      *(undefined2 *)(param_1 + 0x6a) = param_4;
      if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x58) == '\x01') {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
        local_70[0] = *(undefined8 *)(param_1 + 0x3c);
        iVar4 = FUN_148a72ae6(plVar5,(uint)((ulonglong)local_70[0] >> 0x20) ^ (uint)local_70[0]);
        if (iVar4 != -1) {
          lVar1 = *plVar5;
          if ((lVar1 + (longlong)iVar4 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
            lVar1 = lVar1 + (longlong)iVar4 * 0x48;
            if ((longlong)*(int *)(lVar1 + 0x10) != 0) {
              lVar7 = *(longlong *)(lVar1 + 8);
              lVar6 = (longlong)*(int *)(lVar1 + 0x10) * 0x90;
              do {
                if ((*(byte *)(lVar7 + 0x88) & 2) != 0) {
                  local_80 = DAT_14cb8dd60;
                  local_78 = DAT_14cb8dd68;
                  FUN_1448075d0(local_70,&local_80);
                  iVar4 = *(int *)(lVar7 + 0x10);
                  iVar2 = (int)local_70[0];
                  if (local_58 != 0) {
                    FUN_1400020a8();
                  }
                  if (iVar4 == iVar2) {
                    if (lVar7 != 0) goto LAB_143f11f0b;
                    break;
                  }
                }
                lVar7 = lVar7 + 0x90;
                lVar6 = lVar6 + -0x90;
              } while (lVar6 != 0);
            }
            cVar3 = FUN_143f0b9aa(lVar1 + 0x28);
            if (cVar3 != '\0') {
LAB_143f11f0b:
              *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + -1;
            }
          }
        }
        *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -1;
      }
      goto LAB_143f11ece;
    case 1:
      break;
    case 2:
      param_2 = 0x18;
      break;
    case 3:
      param_2 = 0x19;
      break;
    case 4:
      param_2 = 0x1a;
      break;
    case 5:
      param_2 = 0x1b;
      break;
    case 6:
      param_2 = 0x1c;
      break;
    case 7:
      param_2 = 0x1d;
      break;
    case 8:
      param_2 = 0x1e;
      break;
    default:
      param_2 = 0x1f;
    }
    *(undefined1 *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
LAB_143f11ece:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f11f40 FUN_143f11f40 body=32 status=ok
// SIG undefined FUN_143f11f40(void)

undefined8 FUN_143f11f40(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxCrossSave::FGetNumberOfCloudSavesTask");
  return param_2;
}



// FUNCTION 143f11f7a FUN_143f11f7a body=969 status=ok
// SIG undefined FUN_143f11f7a(void)

void FUN_143f11f7a(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  lVar3 = *param_1;
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar19 = 1;
    uVar15 = 0;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_2 + 2);
    }
    uVar13 = *puVar11;
    if (uVar13 == 0) {
      iVar16 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar16 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar19 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar19 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar19 == uVar15) {
          return;
        }
        iVar16 = iVar16 + 0x20;
        uVar13 = puVar11[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar19 = (ulonglong)(-uVar13 & uVar13);
    uVar14 = uVar19 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar5 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar2 <= iVar5) {
    return;
  }
  uVar13 = 0xffffffff;
LAB_143f12036:
  if ((((*(int *)(lVar3 + 0xac) != 0) && (uVar9 = *(uint *)(lVar3 + 0xa8), -1 < (int)uVar9)) &&
      ((int)uVar9 < DAT_14c9647dc)) &&
     ((plVar12 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
      plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(lVar3 + 0xac))))) {
    if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
      if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
        lVar18 = *plVar12;
      }
      else {
        lVar18 = 0;
      }
      if ((longlong)*(int *)(lVar18 + 0x40) != 0) {
        lVar21 = *param_2 + (longlong)iVar5 * 0x60;
        lVar17 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar18 + 0x38) + lVar17);
          if ((lVar4 != 0) &&
             (*(int *)(lVar4 + 0xe0) == *(int *)(*param_2 + (longlong)iVar5 * 0x60))) {
            iVar2 = *(int *)(lVar21 + 0x30);
            if (iVar2 == 0) {
              uVar20 = 1;
              uVar14 = 0;
              iVar10 = 0;
              iVar5 = 0;
              goto LAB_143f1219f;
            }
            puVar11 = *(uint **)(lVar21 + 0x28);
            if (*(uint **)(lVar21 + 0x28) == (uint *)0x0) {
              puVar11 = (uint *)(lVar21 + 0x18);
            }
            uVar9 = *puVar11;
            if (uVar9 != 0) {
              uVar14 = 0;
              iVar10 = 0;
              goto LAB_143f1216b;
            }
            iVar5 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar5 = iVar2 + -1;
            }
            uVar14 = 0;
            uVar20 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar20 = uVar14;
            }
            iVar10 = 0;
            goto LAB_143f12151;
          }
          lVar17 = lVar17 + 8;
        } while ((longlong)*(int *)(lVar18 + 0x40) * 8 != lVar17);
      }
    }
  }
  goto LAB_143f12263;
  while( true ) {
    iVar10 = iVar10 + 0x20;
    uVar9 = puVar11[uVar14 + 1];
    uVar14 = uVar14 + 1;
    if (uVar9 != 0) break;
LAB_143f12151:
    if (uVar20 == uVar14) goto LAB_143f12263;
  }
LAB_143f1216b:
  uVar20 = (ulonglong)(-uVar9 & uVar9);
  uVar1 = uVar20 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar5 = (iVar10 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar5) {
    iVar5 = iVar2;
  }
LAB_143f1219f:
  if (iVar5 < iVar2) {
    uVar9 = 0xffffffff;
    do {
      FUN_1413359f4(lVar3,lVar4,(longlong)iVar5 * 0x28 + *(longlong *)(lVar21 + 8));
      uVar9 = ~(uint)uVar20 & uVar9;
      puVar11 = *(uint **)(lVar21 + 0x28);
      if (*(uint **)(lVar21 + 0x28) == (uint *)0x0) {
        puVar11 = (uint *)(lVar21 + 0x18);
      }
      iVar2 = *(int *)(lVar21 + 0x30);
      iVar5 = (int)uVar14;
      lVar18 = (longlong)iVar5;
      uVar6 = puVar11[lVar18] & uVar9;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar17 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar11[lVar18 + lVar17 + 1];
          if (uVar6 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar8 - lVar18 == lVar17) goto LAB_143f12263;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar17 + 1);
        uVar9 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar20 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar2);
  }
LAB_143f12263:
  uVar13 = uVar13 & ~(uint)uVar19;
  puVar11 = (uint *)param_2[4];
  if ((uint *)param_2[4] == (uint *)0x0) {
    puVar11 = (uint *)(param_2 + 2);
  }
  iVar2 = (int)param_2[5];
  iVar5 = (int)uVar15;
  lVar18 = (longlong)iVar5;
  uVar9 = puVar11[lVar18] & uVar13;
  if (uVar9 == 0) {
    iVar10 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar10 = iVar2 + -1;
    }
    iVar10 = iVar10 >> 5;
    iVar7 = iVar10;
    if (iVar10 < iVar5) {
      iVar7 = iVar5;
    }
    if (iVar10 <= iVar5) {
      return;
    }
    lVar17 = 0;
    while( true ) {
      iVar16 = iVar16 + 0x20;
      uVar9 = puVar11[lVar18 + lVar17 + 1];
      if (uVar9 != 0) break;
      lVar17 = lVar17 + 1;
      if (iVar7 - lVar18 == lVar17) {
        return;
      }
    }
    uVar15 = (ulonglong)(iVar5 + (int)lVar17 + 1);
    uVar13 = 0xffffffff;
  }
  uVar19 = (ulonglong)(-uVar9 & uVar9);
  uVar14 = uVar19 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar5 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar5) {
    return;
  }
  goto LAB_143f12036;
}



// FUNCTION 143f1235a FUN_143f1235a body=103 status=ok
// SIG undefined FUN_143f1235a(void)

void FUN_143f1235a(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *in_stack_00000028;
  
  if ((int)in_stack_00000028[1] != 0) {
    plVar1 = (longlong *)*in_stack_00000028;
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,0x15);
    if ((int)in_stack_00000028[1] != 0) {
      puVar2 = (undefined8 *)*in_stack_00000028;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(in_stack_00000028,0,0,0x10);
      *(undefined4 *)(in_stack_00000028 + 1) = 0;
    }
  }
  if (*in_stack_00000028 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f123c2 FUN_143f123c2 body=102 status=ok
// SIG undefined FUN_143f123c2(void)

void FUN_143f123c2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if ((int)param_3[1] != 0) {
    plVar1 = (longlong *)*param_3;
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    if ((int)param_3[1] != 0) {
      puVar2 = (undefined8 *)*param_3;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_3,0,0,0x10);
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if (*param_3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143f12436 FUN_143f12436 body=41 status=ok
// SIG undefined FUN_143f12436(void)

void FUN_143f12436(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x92,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowTrialModeNotAllowedMessage");
  return;
}



// FUNCTION 143f12460 FUN_143f12460 body=80 status=ok
// SIG undefined FUN_143f12460(void)

undefined8 FUN_143f12460(void)

{
  longlong *plVar1;
  longlong *in_stack_00000028;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0x98,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowDestructiveActionPrompt");
  plVar1 = (longlong *)*in_stack_00000028;
  if (plVar1 != (longlong *)0x0 && (int)in_stack_00000028[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
  }
  return 0xffffffff;
}



// FUNCTION 143f124b0 FUN_143f124b0 body=82 status=ok
// SIG undefined FUN_143f124b0(void)

void FUN_143f124b0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxOnline\\Source\\GbxOnline/Public/GbxOnlineLoginManager.h",
                0xa0,L"Pure virtual not implemented (%s)",
                L"UGbxOnlineLoginManager::ShowCrossSavePreferenceDialog");
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143f124ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,0);
  return;
}



// FUNCTION 143f12504 FUN_143f12504 body=176 status=ok
// SIG undefined FUN_143f12504(void)

undefined8 * FUN_143f12504(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4df430;
  param_1[4] = &PTR_FUN_14b4df458;
  plVar3 = param_1 + 0xb;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12560;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12560:
  param_1[4] = &PTR_FUN_14b4dfb18;
  if (param_1[5] != 0) {
    FUN_1411ebbe4();
    param_1[5] = 0;
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f125b4 FUN_143f125b4 body=179 status=ok
// SIG undefined FUN_143f125b4(void)

undefined8 * FUN_143f125b4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  param_1[-4] = &PTR_FUN_14b4df430;
  *param_1 = &PTR_FUN_14b4df458;
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12610;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12610:
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[-2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -4);
  }
  return param_1 + -4;
}



// FUNCTION 143f12668 FUN_143f12668 body=45 status=ok
// SIG undefined FUN_143f12668(void)

longlong FUN_143f12668(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_143f16a8e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f12696 FUN_143f12696 body=220 status=ok
// SIG undefined FUN_143f12696(void)

undefined8 * FUN_143f12696(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  param_1[-4] = &PTR_FUN_14b4df540;
  *param_1 = &PTR_FUN_14b4df568;
  plVar3 = param_1 + 0x11;
  if (*(int *)(param_1 + 0x12) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f126fb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f126fb:
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[-2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -4);
  }
  return param_1 + -4;
}



// FUNCTION 143f12772 FUN_143f12772 body=220 status=ok
// SIG undefined FUN_143f12772(void)

undefined8 * FUN_143f12772(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  param_1[-4] = &PTR_FUN_14b4df5c0;
  *param_1 = &PTR_FUN_14b4df5e8;
  plVar3 = param_1 + 0x11;
  if (*(int *)(param_1 + 0x12) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f127d7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f127d7:
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[-2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -4);
  }
  return param_1 + -4;
}



// FUNCTION 143f12862 FUN_143f12862 body=176 status=ok
// SIG undefined FUN_143f12862(void)

undefined8 * FUN_143f12862(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4df740;
  param_1[4] = &PTR_FUN_14b4df768;
  plVar3 = param_1 + 0xb;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f128be;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f128be:
  param_1[4] = &PTR_FUN_14b4dfb18;
  if (param_1[5] != 0) {
    FUN_1411ebbe4();
    param_1[5] = 0;
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f12912 FUN_143f12912 body=179 status=ok
// SIG undefined FUN_143f12912(void)

undefined8 * FUN_143f12912(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  param_1[-4] = &PTR_FUN_14b4df740;
  *param_1 = &PTR_FUN_14b4df768;
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f1296e;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f1296e:
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[-2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -4);
  }
  return param_1 + -4;
}



// FUNCTION 143f129c6 FUN_143f129c6 body=176 status=ok
// SIG undefined FUN_143f129c6(void)

undefined8 * FUN_143f129c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4df7d0;
  param_1[4] = &PTR_FUN_14b4df7f8;
  plVar3 = param_1 + 0xb;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12a22;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12a22:
  param_1[4] = &PTR_FUN_14b4dfb18;
  if (param_1[5] != 0) {
    FUN_1411ebbe4();
    param_1[5] = 0;
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f12a76 FUN_143f12a76 body=179 status=ok
// SIG undefined FUN_143f12a76(void)

undefined8 * FUN_143f12a76(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  param_1[-4] = &PTR_FUN_14b4df7d0;
  *param_1 = &PTR_FUN_14b4df7f8;
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12ad2;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12ad2:
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[-2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -4);
  }
  return param_1 + -4;
}



// FUNCTION 143f12b2a FUN_143f12b2a body=176 status=ok
// SIG undefined FUN_143f12b2a(void)

undefined8 * FUN_143f12b2a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4df850;
  param_1[4] = &PTR_FUN_14b4df878;
  plVar3 = param_1 + 0xb;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12b86;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12b86:
  param_1[4] = &PTR_FUN_14b4dfb18;
  if (param_1[5] != 0) {
    FUN_1411ebbe4();
    param_1[5] = 0;
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f12bda FUN_143f12bda body=179 status=ok
// SIG undefined FUN_143f12bda(void)

undefined8 * FUN_143f12bda(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  param_1[-4] = &PTR_FUN_14b4df850;
  *param_1 = &PTR_FUN_14b4df878;
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12c36;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12c36:
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[-2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -4);
  }
  return param_1 + -4;
}



// FUNCTION 143f12c8e FUN_143f12c8e body=176 status=ok
// SIG undefined FUN_143f12c8e(void)

undefined8 * FUN_143f12c8e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4df8d0;
  param_1[4] = &PTR_FUN_14b4df8f8;
  plVar3 = param_1 + 0xb;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12cea;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12cea:
  param_1[4] = &PTR_FUN_14b4dfb18;
  if (param_1[5] != 0) {
    FUN_1411ebbe4();
    param_1[5] = 0;
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f12d3e FUN_143f12d3e body=179 status=ok
// SIG undefined FUN_143f12d3e(void)

undefined8 * FUN_143f12d3e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  param_1[-4] = &PTR_FUN_14b4df8d0;
  *param_1 = &PTR_FUN_14b4df8f8;
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f12d9a;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f12d9a:
  *param_1 = &PTR_FUN_14b4dfb18;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[-2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -4);
  }
  return param_1 + -4;
}



// FUNCTION 143f12df2 FUN_143f12df2 body=96 status=ok
// SIG undefined FUN_143f12df2(void)

void FUN_143f12df2(longlong *param_1)

{
  FUN_1456d172d(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_148a6e8c1(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_148a6ed85(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f12e52 FUN_143f12e52 body=54 status=ok
// SIG undefined FUN_143f12e52(void)

void FUN_143f12e52(longlong *param_1)

{
  FUN_143f12e88(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143f12e88 FUN_143f12e88 body=128 status=ok
// SIG undefined FUN_143f12e88(void)

void FUN_143f12e88(longlong param_1,int param_2)

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



// FUNCTION 143f12f26 FUN_143f12f26 body=29 status=ok
// SIG undefined FUN_143f12f26(void)

undefined8 FUN_143f12f26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f12f58 FUN_143f12f58 body=101 status=ok
// SIG undefined FUN_143f12f58(void)

void FUN_143f12f58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 143f12fbe FUN_143f12fbe body=101 status=ok
// SIG undefined FUN_143f12fbe(void)

void FUN_143f12fbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 143f13024 FUN_143f13024 body=134 status=ok
// SIG undefined FUN_143f13024(void)

void FUN_143f13024(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e0450;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1309b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f130aa FUN_143f130aa body=47 status=ok
// SIG undefined FUN_143f130aa(void)

void FUN_143f130aa(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_143f030b8(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x2c));
  }
  return;
}



// FUNCTION 143f130da FUN_143f130da body=48 status=ok
// SIG undefined FUN_143f130da(void)

undefined8 FUN_143f130da(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_143f030b8(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x2c));
  }
  return 1;
}



// FUNCTION 143f1310a FUN_143f1310a body=316 status=ok
// SIG undefined FUN_143f1310a(void)

undefined8 FUN_143f1310a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_143f13170;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143f13170:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0xc)) {
    uVar8 = uVar5 / 0xc & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 143f13246 FUN_143f13246 body=57 status=ok
// SIG undefined FUN_143f13246(void)

undefined8 * FUN_143f13246(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4e04c0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f13294 FUN_143f13294 body=185 status=ok
// SIG undefined FUN_143f13294(void)

void FUN_143f13294(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438700;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e04c0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_143f1310a(puVar2 + 5,iVar1);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143f1334e FUN_143f1334e body=185 status=ok
// SIG undefined FUN_143f1334e(void)

void FUN_143f1334e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b438700;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b4e04c0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  }
  else {
    FUN_143f1310a(puVar2 + 5,iVar1);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143f13408 FUN_143f13408 body=242 status=ok
// SIG undefined FUN_143f13408(void)

void FUN_143f13408(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b438700;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b4e04c0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_143f1310a(&p_Var2->Flags,iVar1);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined4 *)&p_Var2[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f134e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f134fa FUN_143f134fa body=97 status=ok
// SIG undefined FUN_143f134fa(void)

void FUN_143f134fa(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_3 != '\0') && (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      FUN_143f030b8(uVar2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(lVar3 + lVar4),
                    *(undefined4 *)(lVar3 + 4 + lVar4),*(undefined4 *)(lVar3 + 8 + lVar4));
      lVar4 = lVar4 + 0xc;
    } while ((longlong)iVar1 * 0xc != lVar4);
  }
  return;
}



// FUNCTION 143f1355c FUN_143f1355c body=99 status=ok
// SIG undefined FUN_143f1355c(void)

undefined8 FUN_143f1355c(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_3 != '\0') && (iVar1 = *(int *)(param_1 + 0x30), (longlong)iVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      FUN_143f030b8(uVar2,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(lVar3 + lVar4),
                    *(undefined4 *)(lVar3 + 4 + lVar4),*(undefined4 *)(lVar3 + 8 + lVar4));
      lVar4 = lVar4 + 0xc;
    } while ((longlong)iVar1 * 0xc != lVar4);
  }
  return 1;
}



// FUNCTION 143f135c0 FUN_143f135c0 body=29 status=ok
// SIG undefined FUN_143f135c0(void)

undefined8 FUN_143f135c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f135f2 FUN_143f135f2 body=85 status=ok
// SIG undefined FUN_143f135f2(void)

void FUN_143f135f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0530;
  return;
}



// FUNCTION 143f13648 FUN_143f13648 body=85 status=ok
// SIG undefined FUN_143f13648(void)

void FUN_143f13648(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0530;
  return;
}



// FUNCTION 143f1369e FUN_143f1369e body=118 status=ok
// SIG undefined FUN_143f1369e(void)

void FUN_143f1369e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e0530;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f13705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1371a FUN_143f1371a body=29 status=ok
// SIG undefined FUN_143f1371a(void)

undefined8 FUN_143f1371a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f13758 FUN_143f13758 body=93 status=ok
// SIG undefined FUN_143f13758(void)

void FUN_143f13758(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e05a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f137b6 FUN_143f137b6 body=93 status=ok
// SIG undefined FUN_143f137b6(void)

void FUN_143f137b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e05a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143f13814 FUN_143f13814 body=126 status=ok
// SIG undefined FUN_143f13814(void)

void FUN_143f13814(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e05a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f13883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f138a2 FUN_143f138a2 body=28 status=ok
// SIG undefined FUN_143f138a2(void)

undefined1 FUN_143f138a2(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 2) {
    FUN_14591ad70(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 143f138be FUN_143f138be body=849 status=ok
// SIG undefined FUN_143f138be(void)

undefined8 FUN_143f138be(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar8 = FUN_140b64e34(lVar2);
  if ((((lVar8 == 0) || (*(longlong *)(lVar8 + 0x1f0) == 0)) ||
      (plVar9 = (longlong *)FUN_140b703aa(), plVar9 == (longlong *)0x0)) ||
     (lVar8 = (**(code **)(*plVar9 + 0x2b8))(plVar9), lVar8 == 0)) goto LAB_143f13b79;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  plVar9 = *(longlong **)(lVar2 + 0x18);
  if (plVar9 == (longlong *)0x0) {
LAB_143f13a1e:
    *local_40 = (longlong)&PTR_LAB_14b4e4c20;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar10;
    *local_40 = (longlong)&PTR_FUN_14b4e06c0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = lVar2;
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_143f13a1e;
      LOCK();
      iVar7 = (int)plVar9[1];
      bVar13 = iVar6 == iVar7;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar13);
    lVar3 = *(longlong *)(lVar2 + 0x10);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *local_40 = (longlong)&PTR_LAB_14b4e4c20;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_40[2] = lVar12;
    *local_40 = (longlong)&PTR_FUN_14b4e06c0;
    local_40[3] = lVar3;
    local_40[4] = (longlong)plVar9;
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
    local_40[5] = lVar2;
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (((local_38 == 0) || (local_40 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_40 + 0x30))(), cVar5 == '\0')) {
    if (local_38 != 0) {
      if (local_40 == (longlong *)0x0) goto LAB_143f13b79;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      goto LAB_143f13b67;
    }
  }
  else {
    plVar9 = (longlong *)(lVar8 + 0x18);
    if (*(int *)(lVar8 + 0x2c) < 1) {
      iVar6 = *(int *)(lVar8 + 0x20);
      iVar7 = *(int *)(lVar8 + 0x28) + -1;
      *(int *)(lVar8 + 0x28) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar9 + (longlong)iVar11 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar9,iVar11);
              FUN_14005b248(plVar9);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar7 = *(int *)(lVar8 + 0x20);
          } while (iVar11 < iVar7);
        }
        iVar11 = 2;
        if (2 < iVar7 * 2) {
          iVar11 = iVar7 * 2;
        }
        *(int *)(lVar8 + 0x28) = iVar11;
        if ((iVar11 < iVar6) && (*(int *)(lVar8 + 0x24) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x38))(local_40,local_30);
    }
    iVar6 = *(int *)(lVar8 + 0x20);
    *(uint *)(lVar8 + 0x20) = iVar6 + 1U;
    if (*(uint *)(lVar8 + 0x24) < iVar6 + 1U) {
      FUN_1447a71f6(plVar9,iVar6);
    }
    lVar2 = *plVar9;
    lVar8 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar2 + lVar8) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar8) = 0;
    *(longlong **)(lVar2 + lVar8) = local_40;
    local_40 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar8) = local_38;
LAB_143f13b67:
    local_38 = 0;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143f13b79:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 143f13c1a FUN_143f13c1a body=12 status=ok
// SIG undefined FUN_143f13c1a(void)

void FUN_143f13c1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143f13c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143f13c26 FUN_143f13c26 body=29 status=ok
// SIG undefined FUN_143f13c26(void)

undefined8 FUN_143f13c26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f13c44 FUN_143f13c44 body=64 status=ok
// SIG undefined FUN_143f13c44(void)

undefined8 * FUN_143f13c44(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e06c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f13c88 FUN_143f13c88 body=81 status=ok
// SIG undefined FUN_143f13c88(void)

undefined8 FUN_143f13c88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 143f13cde FUN_143f13cde body=89 status=ok
// SIG undefined FUN_143f13cde(void)

bool FUN_143f13cde(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143f13d29;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143f13d29:
  return lVar6 == param_2;
}



// FUNCTION 143f13d54 FUN_143f13d54 body=118 status=ok
// SIG undefined FUN_143f13d54(void)

void FUN_143f13d54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e06c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f13dca FUN_143f13dca body=118 status=ok
// SIG undefined FUN_143f13dca(void)

void FUN_143f13dca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e06c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f13e40 FUN_143f13e40 body=156 status=ok
// SIG undefined FUN_143f13e40(void)

void FUN_143f13e40(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e06c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f13ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f13edc FUN_143f13edc body=65 status=ok
// SIG undefined FUN_143f13edc(void)

void FUN_143f13edc(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f13f7c(param_1 + 0x28,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f13f1e FUN_143f13f1e body=92 status=ok
// SIG undefined FUN_143f13f1e(void)

undefined8 FUN_143f13f1e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f13f7c(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f13f7c FUN_143f13f7c body=103 status=ok
// SIG undefined FUN_143f13f7c(void)

void FUN_143f13f7c(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0xb0) != *(int *)(lVar1 + 0xdc)) {
    lVar2 = lVar1 + 0xe0;
    if (*(longlong *)(lVar1 + 0xe8) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0xe8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0xf0) - 1U & *param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar1 + 0xa8) + (longlong)iVar3 * 0xc) == *param_2) {
          FUN_148a69716();
          return;
        }
        iVar3 = *(int *)(*(longlong *)(lVar1 + 0xa8) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 143f13fe4 FUN_143f13fe4 body=132 status=ok
// SIG undefined FUN_143f13fe4(void)

undefined8 * FUN_143f13fe4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4e0730;
  plVar3 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143f14035;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143f14035:
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f1406c FUN_143f1406c body=81 status=ok
// SIG undefined FUN_143f1406c(void)

undefined8 FUN_143f1406c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 143f140c2 FUN_143f140c2 body=89 status=ok
// SIG undefined FUN_143f140c2(void)

bool FUN_143f140c2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143f1410d;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143f1410d:
  return lVar6 == param_2;
}



// FUNCTION 143f14138 FUN_143f14138 body=148 status=ok
// SIG undefined FUN_143f14138(void)

void FUN_143f14138(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0730;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_1460d697c(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f141cc FUN_143f141cc body=148 status=ok
// SIG undefined FUN_143f141cc(void)

void FUN_143f141cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e0730;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_1460d697c(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143f14260 FUN_143f14260 body=187 status=ok
// SIG undefined FUN_143f14260(void)

void FUN_143f14260(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e0730;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_1460d697c(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f1430b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f1431c FUN_143f1431c body=77 status=ok
// SIG undefined FUN_143f1431c(void)

void FUN_143f1431c(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  FUN_143f143d2(param_1 + 0x28,&local_10,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1436a FUN_143f1436a body=102 status=ok
// SIG undefined FUN_143f1436a(void)

undefined8 FUN_143f1436a(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_9 = param_3;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f143d2(param_1 + 0x28,&local_10,&local_9);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f143d2 FUN_143f143d2 body=197 status=ok
// SIG undefined FUN_143f143d2(void)

void FUN_143f143d2(longlong *param_1,uint *param_2,char *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  
  cVar2 = *param_3;
  uVar3 = *param_2;
  if ((cVar2 == '\x01') && (lVar4 = *param_1, *(int *)(lVar4 + 0x1b0) != *(int *)(lVar4 + 0x1dc))) {
    lVar6 = lVar4 + 0x1e0;
    if (*(longlong *)(lVar4 + 0x1e8) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x1e8);
    }
    uVar7 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar4 + 0x1f0) - 1U & uVar3) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar4 + 0x1a8) + (longlong)(int)uVar7 * 0x14);
        if (*puVar1 == uVar3) {
          if ((((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) != 0) && ((char)puVar1[2] == '\0')) {
            *(undefined1 *)(puVar1 + 2) = 1;
            FUN_1456e298a(lVar4 + 0x20,uVar3,1);
          }
          break;
        }
        uVar7 = puVar1[3];
      } while (uVar7 != 0xffffffff);
    }
  }
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0 && (int)param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143f14480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x60))
              (plVar5,uVar3,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar2) & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 143f14498 FUN_143f14498 body=64 status=ok
// SIG undefined FUN_143f14498(void)

undefined8 * FUN_143f14498(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4e08d0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f144dc FUN_143f144dc body=81 status=ok
// SIG undefined FUN_143f144dc(void)

undefined8 FUN_143f144dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 143f14532 FUN_143f14532 body=89 status=ok
// SIG undefined FUN_143f14532(void)

bool FUN_143f14532(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_143f1457d;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_143f1457d:
  return lVar6 == param_2;
}



// FUNCTION 143f145a8 FUN_143f145a8 body=118 status=ok
// SIG undefined FUN_143f145a8(void)

void FUN_143f145a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e0940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e08d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f1461e FUN_143f1461e body=118 status=ok
// SIG undefined FUN_143f1461e(void)

void FUN_143f1461e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e0940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4e08d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143f14694 FUN_143f14694 body=156 status=ok
// SIG undefined FUN_143f14694(void)

void FUN_143f14694(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e0940;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4e08d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f14720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f14730 FUN_143f14730 body=88 status=ok
// SIG undefined FUN_143f14730(void)

void FUN_143f14730(longlong param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_a = param_3;
  local_9 = param_4;
  FUN_143f147fc(param_1 + 0x28,&local_10,&local_a,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f1478a FUN_143f1478a body=112 status=ok
// SIG undefined FUN_143f1478a(void)

undefined8 FUN_143f1478a(longlong param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_a = param_3;
  local_9 = param_4;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f147fc(param_1 + 0x28,&local_10,&local_a,&local_9);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f147fc FUN_143f147fc body=228 status=ok
// SIG undefined FUN_143f147fc(void)

void FUN_143f147fc(longlong *param_1,uint *param_2,char *param_3,byte *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x1b0) != *(int *)(lVar3 + 0x1dc)) {
    uVar2 = *param_2;
    lVar5 = lVar3 + 0x1e0;
    if (*(longlong *)(lVar3 + 0x1e8) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x1e8);
    }
    uVar7 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x1f0) - 1U & uVar2) * 4);
    if (uVar7 != 0xffffffff) {
      bVar4 = *param_4;
      cVar6 = *param_3;
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x1a8) + (longlong)(int)uVar7 * 0x14);
        if (*puVar1 == uVar2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return;
          }
          *(undefined1 *)((longlong)puVar1 + 9) = 0;
          if ((cVar6 == '\0') && (*(char *)((longlong)puVar1 + 10) == '\x01')) {
            bVar4 = (byte)puVar1[2];
            bVar8 = false;
            cVar6 = '\x01';
          }
          else {
            *(char *)((longlong)puVar1 + 10) = cVar6;
            bVar8 = (byte)puVar1[2] != bVar4;
            if (bVar8) {
              *(byte *)(puVar1 + 2) = bVar4;
            }
          }
          if (((bVar4 & 1) == 0) && (cVar6 != '\0')) {
            FUN_148a6925e(lVar3,uVar2);
          }
          if (!bVar8) {
            return;
          }
          FUN_1456e298a(lVar3 + 0x20,uVar2,(char)puVar1[2]);
          return;
        }
        uVar7 = puVar1[3];
      } while (uVar7 != 0xffffffff);
    }
  }
  return;
}


